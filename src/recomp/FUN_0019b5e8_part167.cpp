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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part167(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ec6c8u: goto label_1ec6c8;
        case 0x1ec6ccu: goto label_1ec6cc;
        case 0x1ec6d0u: goto label_1ec6d0;
        case 0x1ec6d4u: goto label_1ec6d4;
        case 0x1ec6d8u: goto label_1ec6d8;
        case 0x1ec6dcu: goto label_1ec6dc;
        case 0x1ec6e0u: goto label_1ec6e0;
        case 0x1ec6e4u: goto label_1ec6e4;
        case 0x1ec6e8u: goto label_1ec6e8;
        case 0x1ec6ecu: goto label_1ec6ec;
        case 0x1ec6f0u: goto label_1ec6f0;
        case 0x1ec6f4u: goto label_1ec6f4;
        case 0x1ec6f8u: goto label_1ec6f8;
        case 0x1ec6fcu: goto label_1ec6fc;
        case 0x1ec700u: goto label_1ec700;
        case 0x1ec704u: goto label_1ec704;
        case 0x1ec708u: goto label_1ec708;
        case 0x1ec70cu: goto label_1ec70c;
        case 0x1ec710u: goto label_1ec710;
        case 0x1ec714u: goto label_1ec714;
        case 0x1ec718u: goto label_1ec718;
        case 0x1ec71cu: goto label_1ec71c;
        case 0x1ec720u: goto label_1ec720;
        case 0x1ec724u: goto label_1ec724;
        case 0x1ec728u: goto label_1ec728;
        case 0x1ec72cu: goto label_1ec72c;
        case 0x1ec730u: goto label_1ec730;
        case 0x1ec734u: goto label_1ec734;
        case 0x1ec738u: goto label_1ec738;
        case 0x1ec73cu: goto label_1ec73c;
        case 0x1ec740u: goto label_1ec740;
        case 0x1ec744u: goto label_1ec744;
        case 0x1ec748u: goto label_1ec748;
        case 0x1ec74cu: goto label_1ec74c;
        case 0x1ec750u: goto label_1ec750;
        case 0x1ec754u: goto label_1ec754;
        case 0x1ec758u: goto label_1ec758;
        case 0x1ec75cu: goto label_1ec75c;
        case 0x1ec760u: goto label_1ec760;
        case 0x1ec764u: goto label_1ec764;
        case 0x1ec768u: goto label_1ec768;
        case 0x1ec76cu: goto label_1ec76c;
        case 0x1ec770u: goto label_1ec770;
        case 0x1ec774u: goto label_1ec774;
        case 0x1ec778u: goto label_1ec778;
        case 0x1ec77cu: goto label_1ec77c;
        case 0x1ec780u: goto label_1ec780;
        case 0x1ec784u: goto label_1ec784;
        case 0x1ec788u: goto label_1ec788;
        case 0x1ec78cu: goto label_1ec78c;
        case 0x1ec790u: goto label_1ec790;
        case 0x1ec794u: goto label_1ec794;
        case 0x1ec798u: goto label_1ec798;
        case 0x1ec79cu: goto label_1ec79c;
        case 0x1ec7a0u: goto label_1ec7a0;
        case 0x1ec7a4u: goto label_1ec7a4;
        case 0x1ec7a8u: goto label_1ec7a8;
        case 0x1ec7acu: goto label_1ec7ac;
        case 0x1ec7b0u: goto label_1ec7b0;
        case 0x1ec7b4u: goto label_1ec7b4;
        case 0x1ec7b8u: goto label_1ec7b8;
        case 0x1ec7bcu: goto label_1ec7bc;
        case 0x1ec7c0u: goto label_1ec7c0;
        case 0x1ec7c4u: goto label_1ec7c4;
        case 0x1ec7c8u: goto label_1ec7c8;
        case 0x1ec7ccu: goto label_1ec7cc;
        case 0x1ec7d0u: goto label_1ec7d0;
        case 0x1ec7d4u: goto label_1ec7d4;
        case 0x1ec7d8u: goto label_1ec7d8;
        case 0x1ec7dcu: goto label_1ec7dc;
        case 0x1ec7e0u: goto label_1ec7e0;
        case 0x1ec7e4u: goto label_1ec7e4;
        case 0x1ec7e8u: goto label_1ec7e8;
        case 0x1ec7ecu: goto label_1ec7ec;
        case 0x1ec7f0u: goto label_1ec7f0;
        case 0x1ec7f4u: goto label_1ec7f4;
        case 0x1ec7f8u: goto label_1ec7f8;
        case 0x1ec7fcu: goto label_1ec7fc;
        case 0x1ec800u: goto label_1ec800;
        case 0x1ec804u: goto label_1ec804;
        case 0x1ec808u: goto label_1ec808;
        case 0x1ec80cu: goto label_1ec80c;
        case 0x1ec810u: goto label_1ec810;
        case 0x1ec814u: goto label_1ec814;
        case 0x1ec818u: goto label_1ec818;
        case 0x1ec81cu: goto label_1ec81c;
        case 0x1ec820u: goto label_1ec820;
        case 0x1ec824u: goto label_1ec824;
        case 0x1ec828u: goto label_1ec828;
        case 0x1ec82cu: goto label_1ec82c;
        case 0x1ec830u: goto label_1ec830;
        case 0x1ec834u: goto label_1ec834;
        case 0x1ec838u: goto label_1ec838;
        case 0x1ec83cu: goto label_1ec83c;
        case 0x1ec840u: goto label_1ec840;
        case 0x1ec844u: goto label_1ec844;
        case 0x1ec848u: goto label_1ec848;
        case 0x1ec84cu: goto label_1ec84c;
        case 0x1ec850u: goto label_1ec850;
        case 0x1ec854u: goto label_1ec854;
        case 0x1ec858u: goto label_1ec858;
        case 0x1ec85cu: goto label_1ec85c;
        case 0x1ec860u: goto label_1ec860;
        case 0x1ec864u: goto label_1ec864;
        case 0x1ec868u: goto label_1ec868;
        case 0x1ec86cu: goto label_1ec86c;
        case 0x1ec870u: goto label_1ec870;
        case 0x1ec874u: goto label_1ec874;
        case 0x1ec878u: goto label_1ec878;
        case 0x1ec87cu: goto label_1ec87c;
        case 0x1ec880u: goto label_1ec880;
        case 0x1ec884u: goto label_1ec884;
        case 0x1ec888u: goto label_1ec888;
        case 0x1ec88cu: goto label_1ec88c;
        case 0x1ec890u: goto label_1ec890;
        case 0x1ec894u: goto label_1ec894;
        case 0x1ec898u: goto label_1ec898;
        case 0x1ec89cu: goto label_1ec89c;
        case 0x1ec8a0u: goto label_1ec8a0;
        case 0x1ec8a4u: goto label_1ec8a4;
        case 0x1ec8a8u: goto label_1ec8a8;
        case 0x1ec8acu: goto label_1ec8ac;
        case 0x1ec8b0u: goto label_1ec8b0;
        case 0x1ec8b4u: goto label_1ec8b4;
        case 0x1ec8b8u: goto label_1ec8b8;
        case 0x1ec8bcu: goto label_1ec8bc;
        case 0x1ec8c0u: goto label_1ec8c0;
        case 0x1ec8c4u: goto label_1ec8c4;
        case 0x1ec8c8u: goto label_1ec8c8;
        case 0x1ec8ccu: goto label_1ec8cc;
        case 0x1ec8d0u: goto label_1ec8d0;
        case 0x1ec8d4u: goto label_1ec8d4;
        case 0x1ec8d8u: goto label_1ec8d8;
        case 0x1ec8dcu: goto label_1ec8dc;
        case 0x1ec8e0u: goto label_1ec8e0;
        case 0x1ec8e4u: goto label_1ec8e4;
        case 0x1ec8e8u: goto label_1ec8e8;
        case 0x1ec8ecu: goto label_1ec8ec;
        case 0x1ec8f0u: goto label_1ec8f0;
        case 0x1ec8f4u: goto label_1ec8f4;
        case 0x1ec8f8u: goto label_1ec8f8;
        case 0x1ec8fcu: goto label_1ec8fc;
        case 0x1ec900u: goto label_1ec900;
        case 0x1ec904u: goto label_1ec904;
        case 0x1ec908u: goto label_1ec908;
        case 0x1ec90cu: goto label_1ec90c;
        case 0x1ec910u: goto label_1ec910;
        case 0x1ec914u: goto label_1ec914;
        case 0x1ec918u: goto label_1ec918;
        case 0x1ec91cu: goto label_1ec91c;
        case 0x1ec920u: goto label_1ec920;
        case 0x1ec924u: goto label_1ec924;
        case 0x1ec928u: goto label_1ec928;
        case 0x1ec92cu: goto label_1ec92c;
        case 0x1ec930u: goto label_1ec930;
        case 0x1ec934u: goto label_1ec934;
        case 0x1ec938u: goto label_1ec938;
        case 0x1ec93cu: goto label_1ec93c;
        case 0x1ec940u: goto label_1ec940;
        case 0x1ec944u: goto label_1ec944;
        case 0x1ec948u: goto label_1ec948;
        case 0x1ec94cu: goto label_1ec94c;
        case 0x1ec950u: goto label_1ec950;
        case 0x1ec954u: goto label_1ec954;
        case 0x1ec958u: goto label_1ec958;
        case 0x1ec95cu: goto label_1ec95c;
        case 0x1ec960u: goto label_1ec960;
        case 0x1ec964u: goto label_1ec964;
        case 0x1ec968u: goto label_1ec968;
        case 0x1ec96cu: goto label_1ec96c;
        case 0x1ec970u: goto label_1ec970;
        case 0x1ec974u: goto label_1ec974;
        case 0x1ec978u: goto label_1ec978;
        case 0x1ec97cu: goto label_1ec97c;
        case 0x1ec980u: goto label_1ec980;
        case 0x1ec984u: goto label_1ec984;
        case 0x1ec988u: goto label_1ec988;
        case 0x1ec98cu: goto label_1ec98c;
        case 0x1ec990u: goto label_1ec990;
        case 0x1ec994u: goto label_1ec994;
        case 0x1ec998u: goto label_1ec998;
        case 0x1ec99cu: goto label_1ec99c;
        case 0x1ec9a0u: goto label_1ec9a0;
        case 0x1ec9a4u: goto label_1ec9a4;
        case 0x1ec9a8u: goto label_1ec9a8;
        case 0x1ec9acu: goto label_1ec9ac;
        case 0x1ec9b0u: goto label_1ec9b0;
        case 0x1ec9b4u: goto label_1ec9b4;
        case 0x1ec9b8u: goto label_1ec9b8;
        case 0x1ec9bcu: goto label_1ec9bc;
        case 0x1ec9c0u: goto label_1ec9c0;
        case 0x1ec9c4u: goto label_1ec9c4;
        case 0x1ec9c8u: goto label_1ec9c8;
        case 0x1ec9ccu: goto label_1ec9cc;
        case 0x1ec9d0u: goto label_1ec9d0;
        case 0x1ec9d4u: goto label_1ec9d4;
        case 0x1ec9d8u: goto label_1ec9d8;
        case 0x1ec9dcu: goto label_1ec9dc;
        case 0x1ec9e0u: goto label_1ec9e0;
        case 0x1ec9e4u: goto label_1ec9e4;
        case 0x1ec9e8u: goto label_1ec9e8;
        case 0x1ec9ecu: goto label_1ec9ec;
        case 0x1ec9f0u: goto label_1ec9f0;
        case 0x1ec9f4u: goto label_1ec9f4;
        case 0x1ec9f8u: goto label_1ec9f8;
        case 0x1ec9fcu: goto label_1ec9fc;
        case 0x1eca00u: goto label_1eca00;
        case 0x1eca04u: goto label_1eca04;
        case 0x1eca08u: goto label_1eca08;
        case 0x1eca0cu: goto label_1eca0c;
        case 0x1eca10u: goto label_1eca10;
        case 0x1eca14u: goto label_1eca14;
        case 0x1eca18u: goto label_1eca18;
        case 0x1eca1cu: goto label_1eca1c;
        case 0x1eca20u: goto label_1eca20;
        case 0x1eca24u: goto label_1eca24;
        case 0x1eca28u: goto label_1eca28;
        case 0x1eca2cu: goto label_1eca2c;
        case 0x1eca30u: goto label_1eca30;
        case 0x1eca34u: goto label_1eca34;
        case 0x1eca38u: goto label_1eca38;
        case 0x1eca3cu: goto label_1eca3c;
        case 0x1eca40u: goto label_1eca40;
        case 0x1eca44u: goto label_1eca44;
        case 0x1eca48u: goto label_1eca48;
        case 0x1eca4cu: goto label_1eca4c;
        case 0x1eca50u: goto label_1eca50;
        case 0x1eca54u: goto label_1eca54;
        case 0x1eca58u: goto label_1eca58;
        case 0x1eca5cu: goto label_1eca5c;
        case 0x1eca60u: goto label_1eca60;
        case 0x1eca64u: goto label_1eca64;
        case 0x1eca68u: goto label_1eca68;
        case 0x1eca6cu: goto label_1eca6c;
        case 0x1eca70u: goto label_1eca70;
        case 0x1eca74u: goto label_1eca74;
        case 0x1eca78u: goto label_1eca78;
        case 0x1eca7cu: goto label_1eca7c;
        case 0x1eca80u: goto label_1eca80;
        case 0x1eca84u: goto label_1eca84;
        case 0x1eca88u: goto label_1eca88;
        case 0x1eca8cu: goto label_1eca8c;
        case 0x1eca90u: goto label_1eca90;
        case 0x1eca94u: goto label_1eca94;
        case 0x1eca98u: goto label_1eca98;
        case 0x1eca9cu: goto label_1eca9c;
        case 0x1ecaa0u: goto label_1ecaa0;
        case 0x1ecaa4u: goto label_1ecaa4;
        case 0x1ecaa8u: goto label_1ecaa8;
        case 0x1ecaacu: goto label_1ecaac;
        case 0x1ecab0u: goto label_1ecab0;
        case 0x1ecab4u: goto label_1ecab4;
        case 0x1ecab8u: goto label_1ecab8;
        case 0x1ecabcu: goto label_1ecabc;
        case 0x1ecac0u: goto label_1ecac0;
        case 0x1ecac4u: goto label_1ecac4;
        case 0x1ecac8u: goto label_1ecac8;
        case 0x1ecaccu: goto label_1ecacc;
        case 0x1ecad0u: goto label_1ecad0;
        case 0x1ecad4u: goto label_1ecad4;
        case 0x1ecad8u: goto label_1ecad8;
        case 0x1ecadcu: goto label_1ecadc;
        case 0x1ecae0u: goto label_1ecae0;
        case 0x1ecae4u: goto label_1ecae4;
        case 0x1ecae8u: goto label_1ecae8;
        case 0x1ecaecu: goto label_1ecaec;
        case 0x1ecaf0u: goto label_1ecaf0;
        case 0x1ecaf4u: goto label_1ecaf4;
        case 0x1ecaf8u: goto label_1ecaf8;
        case 0x1ecafcu: goto label_1ecafc;
        case 0x1ecb00u: goto label_1ecb00;
        case 0x1ecb04u: goto label_1ecb04;
        case 0x1ecb08u: goto label_1ecb08;
        case 0x1ecb0cu: goto label_1ecb0c;
        case 0x1ecb10u: goto label_1ecb10;
        case 0x1ecb14u: goto label_1ecb14;
        case 0x1ecb18u: goto label_1ecb18;
        case 0x1ecb1cu: goto label_1ecb1c;
        case 0x1ecb20u: goto label_1ecb20;
        case 0x1ecb24u: goto label_1ecb24;
        case 0x1ecb28u: goto label_1ecb28;
        case 0x1ecb2cu: goto label_1ecb2c;
        case 0x1ecb30u: goto label_1ecb30;
        case 0x1ecb34u: goto label_1ecb34;
        case 0x1ecb38u: goto label_1ecb38;
        case 0x1ecb3cu: goto label_1ecb3c;
        case 0x1ecb40u: goto label_1ecb40;
        case 0x1ecb44u: goto label_1ecb44;
        case 0x1ecb48u: goto label_1ecb48;
        case 0x1ecb4cu: goto label_1ecb4c;
        case 0x1ecb50u: goto label_1ecb50;
        case 0x1ecb54u: goto label_1ecb54;
        case 0x1ecb58u: goto label_1ecb58;
        case 0x1ecb5cu: goto label_1ecb5c;
        case 0x1ecb60u: goto label_1ecb60;
        case 0x1ecb64u: goto label_1ecb64;
        case 0x1ecb68u: goto label_1ecb68;
        case 0x1ecb6cu: goto label_1ecb6c;
        case 0x1ecb70u: goto label_1ecb70;
        case 0x1ecb74u: goto label_1ecb74;
        case 0x1ecb78u: goto label_1ecb78;
        case 0x1ecb7cu: goto label_1ecb7c;
        case 0x1ecb80u: goto label_1ecb80;
        case 0x1ecb84u: goto label_1ecb84;
        case 0x1ecb88u: goto label_1ecb88;
        case 0x1ecb8cu: goto label_1ecb8c;
        case 0x1ecb90u: goto label_1ecb90;
        case 0x1ecb94u: goto label_1ecb94;
        case 0x1ecb98u: goto label_1ecb98;
        case 0x1ecb9cu: goto label_1ecb9c;
        case 0x1ecba0u: goto label_1ecba0;
        case 0x1ecba4u: goto label_1ecba4;
        case 0x1ecba8u: goto label_1ecba8;
        case 0x1ecbacu: goto label_1ecbac;
        case 0x1ecbb0u: goto label_1ecbb0;
        case 0x1ecbb4u: goto label_1ecbb4;
        case 0x1ecbb8u: goto label_1ecbb8;
        case 0x1ecbbcu: goto label_1ecbbc;
        case 0x1ecbc0u: goto label_1ecbc0;
        case 0x1ecbc4u: goto label_1ecbc4;
        case 0x1ecbc8u: goto label_1ecbc8;
        case 0x1ecbccu: goto label_1ecbcc;
        case 0x1ecbd0u: goto label_1ecbd0;
        case 0x1ecbd4u: goto label_1ecbd4;
        case 0x1ecbd8u: goto label_1ecbd8;
        case 0x1ecbdcu: goto label_1ecbdc;
        case 0x1ecbe0u: goto label_1ecbe0;
        case 0x1ecbe4u: goto label_1ecbe4;
        case 0x1ecbe8u: goto label_1ecbe8;
        case 0x1ecbecu: goto label_1ecbec;
        case 0x1ecbf0u: goto label_1ecbf0;
        case 0x1ecbf4u: goto label_1ecbf4;
        case 0x1ecbf8u: goto label_1ecbf8;
        case 0x1ecbfcu: goto label_1ecbfc;
        case 0x1ecc00u: goto label_1ecc00;
        case 0x1ecc04u: goto label_1ecc04;
        case 0x1ecc08u: goto label_1ecc08;
        case 0x1ecc0cu: goto label_1ecc0c;
        case 0x1ecc10u: goto label_1ecc10;
        case 0x1ecc14u: goto label_1ecc14;
        case 0x1ecc18u: goto label_1ecc18;
        case 0x1ecc1cu: goto label_1ecc1c;
        case 0x1ecc20u: goto label_1ecc20;
        case 0x1ecc24u: goto label_1ecc24;
        case 0x1ecc28u: goto label_1ecc28;
        case 0x1ecc2cu: goto label_1ecc2c;
        case 0x1ecc30u: goto label_1ecc30;
        case 0x1ecc34u: goto label_1ecc34;
        case 0x1ecc38u: goto label_1ecc38;
        case 0x1ecc3cu: goto label_1ecc3c;
        case 0x1ecc40u: goto label_1ecc40;
        case 0x1ecc44u: goto label_1ecc44;
        case 0x1ecc48u: goto label_1ecc48;
        case 0x1ecc4cu: goto label_1ecc4c;
        case 0x1ecc50u: goto label_1ecc50;
        case 0x1ecc54u: goto label_1ecc54;
        case 0x1ecc58u: goto label_1ecc58;
        case 0x1ecc5cu: goto label_1ecc5c;
        case 0x1ecc60u: goto label_1ecc60;
        case 0x1ecc64u: goto label_1ecc64;
        case 0x1ecc68u: goto label_1ecc68;
        case 0x1ecc6cu: goto label_1ecc6c;
        case 0x1ecc70u: goto label_1ecc70;
        case 0x1ecc74u: goto label_1ecc74;
        case 0x1ecc78u: goto label_1ecc78;
        case 0x1ecc7cu: goto label_1ecc7c;
        case 0x1ecc80u: goto label_1ecc80;
        case 0x1ecc84u: goto label_1ecc84;
        case 0x1ecc88u: goto label_1ecc88;
        case 0x1ecc8cu: goto label_1ecc8c;
        case 0x1ecc90u: goto label_1ecc90;
        case 0x1ecc94u: goto label_1ecc94;
        case 0x1ecc98u: goto label_1ecc98;
        case 0x1ecc9cu: goto label_1ecc9c;
        case 0x1ecca0u: goto label_1ecca0;
        case 0x1ecca4u: goto label_1ecca4;
        case 0x1ecca8u: goto label_1ecca8;
        case 0x1eccacu: goto label_1eccac;
        case 0x1eccb0u: goto label_1eccb0;
        case 0x1eccb4u: goto label_1eccb4;
        case 0x1eccb8u: goto label_1eccb8;
        case 0x1eccbcu: goto label_1eccbc;
        case 0x1eccc0u: goto label_1eccc0;
        case 0x1eccc4u: goto label_1eccc4;
        case 0x1eccc8u: goto label_1eccc8;
        case 0x1eccccu: goto label_1ecccc;
        case 0x1eccd0u: goto label_1eccd0;
        case 0x1eccd4u: goto label_1eccd4;
        case 0x1eccd8u: goto label_1eccd8;
        case 0x1eccdcu: goto label_1eccdc;
        case 0x1ecce0u: goto label_1ecce0;
        case 0x1ecce4u: goto label_1ecce4;
        case 0x1ecce8u: goto label_1ecce8;
        case 0x1eccecu: goto label_1eccec;
        case 0x1eccf0u: goto label_1eccf0;
        case 0x1eccf4u: goto label_1eccf4;
        case 0x1eccf8u: goto label_1eccf8;
        case 0x1eccfcu: goto label_1eccfc;
        case 0x1ecd00u: goto label_1ecd00;
        case 0x1ecd04u: goto label_1ecd04;
        case 0x1ecd08u: goto label_1ecd08;
        case 0x1ecd0cu: goto label_1ecd0c;
        case 0x1ecd10u: goto label_1ecd10;
        case 0x1ecd14u: goto label_1ecd14;
        case 0x1ecd18u: goto label_1ecd18;
        case 0x1ecd1cu: goto label_1ecd1c;
        case 0x1ecd20u: goto label_1ecd20;
        case 0x1ecd24u: goto label_1ecd24;
        case 0x1ecd28u: goto label_1ecd28;
        case 0x1ecd2cu: goto label_1ecd2c;
        case 0x1ecd30u: goto label_1ecd30;
        case 0x1ecd34u: goto label_1ecd34;
        case 0x1ecd38u: goto label_1ecd38;
        case 0x1ecd3cu: goto label_1ecd3c;
        case 0x1ecd40u: goto label_1ecd40;
        case 0x1ecd44u: goto label_1ecd44;
        case 0x1ecd48u: goto label_1ecd48;
        case 0x1ecd4cu: goto label_1ecd4c;
        case 0x1ecd50u: goto label_1ecd50;
        case 0x1ecd54u: goto label_1ecd54;
        case 0x1ecd58u: goto label_1ecd58;
        case 0x1ecd5cu: goto label_1ecd5c;
        case 0x1ecd60u: goto label_1ecd60;
        case 0x1ecd64u: goto label_1ecd64;
        case 0x1ecd68u: goto label_1ecd68;
        case 0x1ecd6cu: goto label_1ecd6c;
        case 0x1ecd70u: goto label_1ecd70;
        case 0x1ecd74u: goto label_1ecd74;
        case 0x1ecd78u: goto label_1ecd78;
        case 0x1ecd7cu: goto label_1ecd7c;
        case 0x1ecd80u: goto label_1ecd80;
        case 0x1ecd84u: goto label_1ecd84;
        case 0x1ecd88u: goto label_1ecd88;
        case 0x1ecd8cu: goto label_1ecd8c;
        case 0x1ecd90u: goto label_1ecd90;
        case 0x1ecd94u: goto label_1ecd94;
        case 0x1ecd98u: goto label_1ecd98;
        case 0x1ecd9cu: goto label_1ecd9c;
        case 0x1ecda0u: goto label_1ecda0;
        case 0x1ecda4u: goto label_1ecda4;
        case 0x1ecda8u: goto label_1ecda8;
        case 0x1ecdacu: goto label_1ecdac;
        case 0x1ecdb0u: goto label_1ecdb0;
        case 0x1ecdb4u: goto label_1ecdb4;
        case 0x1ecdb8u: goto label_1ecdb8;
        case 0x1ecdbcu: goto label_1ecdbc;
        case 0x1ecdc0u: goto label_1ecdc0;
        case 0x1ecdc4u: goto label_1ecdc4;
        case 0x1ecdc8u: goto label_1ecdc8;
        case 0x1ecdccu: goto label_1ecdcc;
        case 0x1ecdd0u: goto label_1ecdd0;
        case 0x1ecdd4u: goto label_1ecdd4;
        case 0x1ecdd8u: goto label_1ecdd8;
        case 0x1ecddcu: goto label_1ecddc;
        case 0x1ecde0u: goto label_1ecde0;
        case 0x1ecde4u: goto label_1ecde4;
        case 0x1ecde8u: goto label_1ecde8;
        case 0x1ecdecu: goto label_1ecdec;
        case 0x1ecdf0u: goto label_1ecdf0;
        case 0x1ecdf4u: goto label_1ecdf4;
        case 0x1ecdf8u: goto label_1ecdf8;
        case 0x1ecdfcu: goto label_1ecdfc;
        case 0x1ece00u: goto label_1ece00;
        case 0x1ece04u: goto label_1ece04;
        case 0x1ece08u: goto label_1ece08;
        case 0x1ece0cu: goto label_1ece0c;
        case 0x1ece10u: goto label_1ece10;
        case 0x1ece14u: goto label_1ece14;
        case 0x1ece18u: goto label_1ece18;
        case 0x1ece1cu: goto label_1ece1c;
        case 0x1ece20u: goto label_1ece20;
        case 0x1ece24u: goto label_1ece24;
        case 0x1ece28u: goto label_1ece28;
        case 0x1ece2cu: goto label_1ece2c;
        case 0x1ece30u: goto label_1ece30;
        case 0x1ece34u: goto label_1ece34;
        case 0x1ece38u: goto label_1ece38;
        case 0x1ece3cu: goto label_1ece3c;
        case 0x1ece40u: goto label_1ece40;
        case 0x1ece44u: goto label_1ece44;
        case 0x1ece48u: goto label_1ece48;
        case 0x1ece4cu: goto label_1ece4c;
        case 0x1ece50u: goto label_1ece50;
        case 0x1ece54u: goto label_1ece54;
        case 0x1ece58u: goto label_1ece58;
        case 0x1ece5cu: goto label_1ece5c;
        case 0x1ece60u: goto label_1ece60;
        case 0x1ece64u: goto label_1ece64;
        case 0x1ece68u: goto label_1ece68;
        case 0x1ece6cu: goto label_1ece6c;
        case 0x1ece70u: goto label_1ece70;
        case 0x1ece74u: goto label_1ece74;
        case 0x1ece78u: goto label_1ece78;
        case 0x1ece7cu: goto label_1ece7c;
        case 0x1ece80u: goto label_1ece80;
        case 0x1ece84u: goto label_1ece84;
        case 0x1ece88u: goto label_1ece88;
        case 0x1ece8cu: goto label_1ece8c;
        case 0x1ece90u: goto label_1ece90;
        case 0x1ece94u: goto label_1ece94;
        default: return;
    }

label_1ec6c8:
    // 0x1ec6c8: 0xaf808f20  sw          $zero, -0x70E0($gp)
    ctx->pc = 0x1ec6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938400), GPR_U32(ctx, 0));
label_1ec6cc:
    // 0x1ec6cc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1ec6d0:
    if (ctx->pc == 0x1EC6D0u) {
        ctx->pc = 0x1EC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6CCu;
        // 0x1ec6d0: 0xaf808f24  sw          $zero, -0x70DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC6D4u;
        goto label_1ec6d4;
    }
    ctx->pc = 0x1EC6CCu;
    {
        const bool branch_taken_0x1ec6cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6CCu;
        // 0x1ec6d0: 0xaf808f24  sw          $zero, -0x70DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6cc) {
            ctx->pc = 0x1EC6DCu;
            goto label_1ec6dc;
        }
    }
    ctx->pc = 0x1EC6D4u;
label_1ec6d4:
    // 0x1ec6d4: 0xc07b238  jal         func_1EC8E0
label_1ec6d8:
    if (ctx->pc == 0x1EC6D8u) {
        ctx->pc = 0x1EC6DCu;
        goto label_1ec6dc;
    }
    ctx->pc = 0x1EC6D4u;
    SET_GPR_U32(ctx, 31, 0x1EC6DCu);
    ctx->pc = 0x1EC8E0u;
    goto label_1ec8e0;
    ctx->pc = 0x1EC6DCu;
label_1ec6dc:
    // 0x1ec6dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec6e0:
    // 0x1ec6e0: 0x3e00008  jr          $ra
label_1ec6e4:
    if (ctx->pc == 0x1EC6E4u) {
        ctx->pc = 0x1EC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6E0u;
        // 0x1ec6e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC6E8u;
        goto label_1ec6e8;
    }
    ctx->pc = 0x1EC6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6E0u;
        // 0x1ec6e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC6E8u;
label_1ec6e8:
    // 0x1ec6e8: 0x0  nop
    ctx->pc = 0x1ec6e8u;
    // NOP
label_1ec6ec:
    // 0x1ec6ec: 0x0  nop
    ctx->pc = 0x1ec6ecu;
    // NOP
label_1ec6f0:
    // 0x1ec6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ec6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ec6f4:
    // 0x1ec6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ec6f8:
    // 0x1ec6f8: 0x8f838f20  lw          $v1, -0x70E0($gp)
    ctx->pc = 0x1ec6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938400)));
label_1ec6fc:
    // 0x1ec6fc: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
label_1ec700:
    if (ctx->pc == 0x1EC700u) {
        ctx->pc = 0x1EC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6FCu;
        // 0x1ec700: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC704u;
        goto label_1ec704;
    }
    ctx->pc = 0x1EC6FCu;
    {
        const bool branch_taken_0x1ec6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6FCu;
        // 0x1ec700: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6fc) {
            ctx->pc = 0x1EC8B4u;
            goto label_1ec8b4;
        }
    }
    ctx->pc = 0x1EC704u;
label_1ec704:
    // 0x1ec704: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1ec704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1ec708:
    // 0x1ec708: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x1ec708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1ec70c:
    // 0x1ec70c: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1ec70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_1ec710:
    // 0x1ec710: 0x8f828f24  lw          $v0, -0x70DC($gp)
    ctx->pc = 0x1ec710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938404)));
label_1ec714:
    // 0x1ec714: 0x62140  sll         $a0, $a2, 5
    ctx->pc = 0x1ec714u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_1ec718:
    // 0x1ec718: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_1ec71c:
    if (ctx->pc == 0x1EC71Cu) {
        ctx->pc = 0x1EC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC718u;
        // 0x1ec71c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC720u;
        goto label_1ec720;
    }
    ctx->pc = 0x1EC718u;
    {
        const bool branch_taken_0x1ec718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC718u;
        // 0x1ec71c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec718) {
            ctx->pc = 0x1EC7B0u;
            goto label_1ec7b0;
        }
    }
    ctx->pc = 0x1EC720u;
label_1ec720:
    // 0x1ec720: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x1ec720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_1ec724:
    // 0x1ec724: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1ec724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1ec728:
    // 0x1ec728: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1ec728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1ec72c:
    // 0x1ec72c: 0x24420920  addiu       $v0, $v0, 0x920
    ctx->pc = 0x1ec72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2336));
label_1ec730:
    // 0x1ec730: 0x8f838f28  lw          $v1, -0x70D8($gp)
    ctx->pc = 0x1ec730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
label_1ec734:
    // 0x1ec734: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1ec734u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1ec738:
    // 0x1ec738: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1ec738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1ec73c:
    // 0x1ec73c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1ec73cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1ec740:
    // 0x1ec740: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ec740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1ec744:
    // 0x1ec744: 0x24451060  addiu       $a1, $v0, 0x1060
    ctx->pc = 0x1ec744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4192));
label_1ec748:
    // 0x1ec748: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ec74c:
    if (ctx->pc == 0x1EC74Cu) {
        ctx->pc = 0x1EC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC748u;
        // 0x1ec74c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC750u;
        goto label_1ec750;
    }
    ctx->pc = 0x1EC748u;
    {
        const bool branch_taken_0x1ec748 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC748u;
        // 0x1ec74c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec748) {
            ctx->pc = 0x1EC758u;
            goto label_1ec758;
        }
    }
    ctx->pc = 0x1EC750u;
label_1ec750:
    // 0x1ec750: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1ec750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1ec754:
    // 0x1ec754: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ec754u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1ec758:
    // 0x1ec758: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1ec75c:
    if (ctx->pc == 0x1EC75Cu) {
        ctx->pc = 0x1EC75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC758u;
        // 0x1ec75c: 0x30470003  andi        $a3, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC760u;
        goto label_1ec760;
    }
    ctx->pc = 0x1EC758u;
    {
        const bool branch_taken_0x1ec758 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EC75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC758u;
        // 0x1ec75c: 0x30470003  andi        $a3, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec758) {
            ctx->pc = 0x1EC76Cu;
            goto label_1ec76c;
        }
    }
    ctx->pc = 0x1EC760u;
label_1ec760:
    // 0x1ec760: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_1ec764:
    if (ctx->pc == 0x1EC764u) {
        ctx->pc = 0x1EC764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC760u;
        // 0x1ec764: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC768u;
        goto label_1ec768;
    }
    ctx->pc = 0x1EC760u;
    {
        const bool branch_taken_0x1ec760 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC760u;
        // 0x1ec764: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec760) {
            ctx->pc = 0x1EC770u;
            goto label_1ec770;
        }
    }
    ctx->pc = 0x1EC768u;
label_1ec768:
    // 0x1ec768: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x1ec768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_1ec76c:
    // 0x1ec76c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ec76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec770:
    // 0x1ec770: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec770u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec774:
    // 0x1ec774: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1ec774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ec778:
    // 0x1ec778: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x1ec778u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1ec77c:
    // 0x1ec77c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1ec780:
    if (ctx->pc == 0x1EC780u) {
        ctx->pc = 0x1EC780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC77Cu;
        // 0x1ec780: 0xa81021  addu        $v0, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC784u;
        goto label_1ec784;
    }
    ctx->pc = 0x1EC77Cu;
    {
        const bool branch_taken_0x1ec77c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC77Cu;
        // 0x1ec780: 0xa81021  addu        $v0, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec77c) {
            ctx->pc = 0x1EC78Cu;
            goto label_1ec78c;
        }
    }
    ctx->pc = 0x1EC784u;
label_1ec784:
    // 0x1ec784: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ec788:
    if (ctx->pc == 0x1EC788u) {
        ctx->pc = 0x1EC788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC784u;
        // 0x1ec788: 0xa04306c3  sb          $v1, 0x6C3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1731), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC78Cu;
        goto label_1ec78c;
    }
    ctx->pc = 0x1EC784u;
    {
        const bool branch_taken_0x1ec784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC784u;
        // 0x1ec788: 0xa04306c3  sb          $v1, 0x6C3($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1731), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec784) {
            ctx->pc = 0x1EC798u;
            goto label_1ec798;
        }
    }
    ctx->pc = 0x1EC78Cu;
label_1ec78c:
    // 0x1ec78c: 0x0  nop
    ctx->pc = 0x1ec78cu;
    // NOP
label_1ec790:
    // 0x1ec790: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x1ec790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1ec794:
    // 0x1ec794: 0xa04006c3  sb          $zero, 0x6C3($v0)
    ctx->pc = 0x1ec794u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1731), (uint8_t)GPR_U32(ctx, 0));
label_1ec798:
    // 0x1ec798: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ec798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ec79c:
    // 0x1ec79c: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x1ec79cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
label_1ec7a0:
    // 0x1ec7a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1ec7a4:
    if (ctx->pc == 0x1EC7A4u) {
        ctx->pc = 0x1EC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7A0u;
        // 0x1ec7a4: 0x250800a0  addiu       $t0, $t0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC7A8u;
        goto label_1ec7a8;
    }
    ctx->pc = 0x1EC7A0u;
    {
        const bool branch_taken_0x1ec7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7A0u;
        // 0x1ec7a4: 0x250800a0  addiu       $t0, $t0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7a0) {
            ctx->pc = 0x1EC778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec778;
        }
    }
    ctx->pc = 0x1EC7A8u;
label_1ec7a8:
    // 0x1ec7a8: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1ec7ac:
    if (ctx->pc == 0x1EC7ACu) {
        ctx->pc = 0x1EC7B0u;
        goto label_1ec7b0;
    }
    ctx->pc = 0x1EC7A8u;
    {
        const bool branch_taken_0x1ec7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec7a8) {
            ctx->pc = 0x1EC8A0u;
            goto label_1ec8a0;
        }
    }
    ctx->pc = 0x1EC7B0u;
label_1ec7b0:
    // 0x1ec7b0: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x1ec7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_1ec7b4:
    // 0x1ec7b4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x1ec7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_1ec7b8:
    // 0x1ec7b8: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x1ec7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1ec7bc:
    // 0x1ec7bc: 0x24630920  addiu       $v1, $v1, 0x920
    ctx->pc = 0x1ec7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2336));
label_1ec7c0:
    // 0x1ec7c0: 0x8f828f28  lw          $v0, -0x70D8($gp)
    ctx->pc = 0x1ec7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
label_1ec7c4:
    // 0x1ec7c4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1ec7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1ec7c8:
    // 0x1ec7c8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1ec7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1ec7cc:
    // 0x1ec7cc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1ec7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1ec7d0:
    // 0x1ec7d0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1ec7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1ec7d4:
    // 0x1ec7d4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1ec7d8:
    if (ctx->pc == 0x1EC7D8u) {
        ctx->pc = 0x1EC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7D4u;
        // 0x1ec7d8: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC7DCu;
        goto label_1ec7dc;
    }
    ctx->pc = 0x1EC7D4u;
    {
        const bool branch_taken_0x1ec7d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7D4u;
        // 0x1ec7d8: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7d4) {
            ctx->pc = 0x1EC7E8u;
            goto label_1ec7e8;
        }
    }
    ctx->pc = 0x1EC7DCu;
label_1ec7dc:
    // 0x1ec7dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1ec7e0:
    if (ctx->pc == 0x1EC7E0u) {
        ctx->pc = 0x1EC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7DCu;
        // 0x1ec7e0: 0x28610021  slti        $at, $v1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC7E4u;
        goto label_1ec7e4;
    }
    ctx->pc = 0x1EC7DCu;
    {
        const bool branch_taken_0x1ec7dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7DCu;
        // 0x1ec7e0: 0x28610021  slti        $at, $v1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7dc) {
            ctx->pc = 0x1EC7ECu;
            goto label_1ec7ec;
        }
    }
    ctx->pc = 0x1EC7E4u;
label_1ec7e4:
    // 0x1ec7e4: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1ec7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1ec7e8:
    // 0x1ec7e8: 0x28610021  slti        $at, $v1, 0x21
    ctx->pc = 0x1ec7e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
label_1ec7ec:
    // 0x1ec7ec: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_1ec7f0:
    if (ctx->pc == 0x1EC7F0u) {
        ctx->pc = 0x1EC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7ECu;
        // 0x1ec7f0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC7F4u;
        goto label_1ec7f4;
    }
    ctx->pc = 0x1EC7ECu;
    {
        const bool branch_taken_0x1ec7ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7ECu;
        // 0x1ec7f0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7ec) {
            ctx->pc = 0x1EC814u;
            goto label_1ec814;
        }
    }
    ctx->pc = 0x1EC7F4u;
label_1ec7f4:
    // 0x1ec7f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ec7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ec7f8:
    // 0x1ec7f8: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x1ec7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1ec7fc:
    // 0x1ec7fc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ec800:
    if (ctx->pc == 0x1EC800u) {
        ctx->pc = 0x1EC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7FCu;
        // 0x1ec800: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC804u;
        goto label_1ec804;
    }
    ctx->pc = 0x1EC7FCu;
    {
        const bool branch_taken_0x1ec7fc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7FCu;
        // 0x1ec800: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7fc) {
            ctx->pc = 0x1EC80Cu;
            goto label_1ec80c;
        }
    }
    ctx->pc = 0x1EC804u;
label_1ec804:
    // 0x1ec804: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1ec804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1ec808:
    // 0x1ec808: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ec808u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1ec80c:
    // 0x1ec80c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ec810:
    if (ctx->pc == 0x1EC810u) {
        ctx->pc = 0x1EC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC80Cu;
        // 0x1ec810: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC814u;
        goto label_1ec814;
    }
    ctx->pc = 0x1EC80Cu;
    {
        const bool branch_taken_0x1ec80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC80Cu;
        // 0x1ec810: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec80c) {
            ctx->pc = 0x1EC82Cu;
            goto label_1ec82c;
        }
    }
    ctx->pc = 0x1EC814u;
label_1ec814:
    // 0x1ec814: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1ec814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1ec818:
    // 0x1ec818: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ec81c:
    if (ctx->pc == 0x1EC81Cu) {
        ctx->pc = 0x1EC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC818u;
        // 0x1ec81c: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC820u;
        goto label_1ec820;
    }
    ctx->pc = 0x1EC818u;
    {
        const bool branch_taken_0x1ec818 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC818u;
        // 0x1ec81c: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec818) {
            ctx->pc = 0x1EC828u;
            goto label_1ec828;
        }
    }
    ctx->pc = 0x1EC820u;
label_1ec820:
    // 0x1ec820: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1ec820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1ec824:
    // 0x1ec824: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ec824u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1ec828:
    // 0x1ec828: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ec828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ec82c:
    // 0x1ec82c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ec82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ec830:
    // 0x1ec830: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec834:
    // 0x1ec834: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ec834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec838:
    // 0x1ec838: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x1ec838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1ec83c:
    // 0x1ec83c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1ec83cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_1ec840:
    // 0x1ec840: 0xa0e30083  sb          $v1, 0x83($a3)
    ctx->pc = 0x1ec840u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 131), (uint8_t)GPR_U32(ctx, 3));
label_1ec844:
    // 0x1ec844: 0x29020005  slti        $v0, $t0, 0x5
    ctx->pc = 0x1ec844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)5) ? 1 : 0);
label_1ec848:
    // 0x1ec848: 0xa0e30123  sb          $v1, 0x123($a3)
    ctx->pc = 0x1ec848u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 291), (uint8_t)GPR_U32(ctx, 3));
label_1ec84c:
    // 0x1ec84c: 0x24c60500  addiu       $a2, $a2, 0x500
    ctx->pc = 0x1ec84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1280));
label_1ec850:
    // 0x1ec850: 0xa0e301c3  sb          $v1, 0x1C3($a3)
    ctx->pc = 0x1ec850u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 451), (uint8_t)GPR_U32(ctx, 3));
label_1ec854:
    // 0x1ec854: 0xa0e30263  sb          $v1, 0x263($a3)
    ctx->pc = 0x1ec854u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 611), (uint8_t)GPR_U32(ctx, 3));
label_1ec858:
    // 0x1ec858: 0xa0e30303  sb          $v1, 0x303($a3)
    ctx->pc = 0x1ec858u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 771), (uint8_t)GPR_U32(ctx, 3));
label_1ec85c:
    // 0x1ec85c: 0xa0e303a3  sb          $v1, 0x3A3($a3)
    ctx->pc = 0x1ec85cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 931), (uint8_t)GPR_U32(ctx, 3));
label_1ec860:
    // 0x1ec860: 0xa0e30443  sb          $v1, 0x443($a3)
    ctx->pc = 0x1ec860u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1091), (uint8_t)GPR_U32(ctx, 3));
label_1ec864:
    // 0x1ec864: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1ec868:
    if (ctx->pc == 0x1EC868u) {
        ctx->pc = 0x1EC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC864u;
        // 0x1ec868: 0xa0e304e3  sb          $v1, 0x4E3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 1251), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC86Cu;
        goto label_1ec86c;
    }
    ctx->pc = 0x1EC864u;
    {
        const bool branch_taken_0x1ec864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC864u;
        // 0x1ec868: 0xa0e304e3  sb          $v1, 0x4E3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 1251), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec864) {
            ctx->pc = 0x1EC838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec838;
        }
    }
    ctx->pc = 0x1EC86Cu;
label_1ec86c:
    // 0x1ec86c: 0x2901000d  slti        $at, $t0, 0xD
    ctx->pc = 0x1ec86cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)13) ? 1 : 0);
label_1ec870:
    // 0x1ec870: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1ec874:
    if (ctx->pc == 0x1EC874u) {
        ctx->pc = 0x1EC874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC870u;
        // 0x1ec874: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC878u;
        goto label_1ec878;
    }
    ctx->pc = 0x1EC870u;
    {
        const bool branch_taken_0x1ec870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC870u;
        // 0x1ec874: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec870) {
            ctx->pc = 0x1EC8A0u;
            goto label_1ec8a0;
        }
    }
    ctx->pc = 0x1EC878u;
label_1ec878:
    // 0x1ec878: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ec878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1ec87c:
    // 0x1ec87c: 0x23140  sll         $a2, $v0, 5
    ctx->pc = 0x1ec87cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1ec880:
    // 0x1ec880: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x1ec880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1ec884:
    // 0x1ec884: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ec884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1ec888:
    // 0x1ec888: 0xa0430083  sb          $v1, 0x83($v0)
    ctx->pc = 0x1ec888u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 131), (uint8_t)GPR_U32(ctx, 3));
label_1ec88c:
    // 0x1ec88c: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x1ec88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
label_1ec890:
    // 0x1ec890: 0x2902000d  slti        $v0, $t0, 0xD
    ctx->pc = 0x1ec890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)13) ? 1 : 0);
label_1ec894:
    // 0x1ec894: 0x0  nop
    ctx->pc = 0x1ec894u;
    // NOP
label_1ec898:
    // 0x1ec898: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1ec89c:
    if (ctx->pc == 0x1EC89Cu) {
        ctx->pc = 0x1EC8A0u;
        goto label_1ec8a0;
    }
    ctx->pc = 0x1EC898u;
    {
        const bool branch_taken_0x1ec898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec898) {
            ctx->pc = 0x1EC880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec880;
        }
    }
    ctx->pc = 0x1EC8A0u;
label_1ec8a0:
    // 0x1ec8a0: 0x24060083  addiu       $a2, $zero, 0x83
    ctx->pc = 0x1ec8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_1ec8a4:
    // 0x1ec8a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ec8a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec8a8:
    // 0x1ec8a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec8a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec8ac:
    // 0x1ec8ac: 0xc066c72  jal         func_19B1C8
label_1ec8b0:
    if (ctx->pc == 0x1EC8B0u) {
        ctx->pc = 0x1EC8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC8ACu;
        // 0x1ec8b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC8B4u;
        goto label_1ec8b4;
    }
    ctx->pc = 0x1EC8ACu;
    SET_GPR_U32(ctx, 31, 0x1EC8B4u);
    ctx->pc = 0x1EC8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC8ACu;
    // 0x1ec8b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1EC8ACu, 0x1EC8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC8B4u;
label_1ec8b4:
    // 0x1ec8b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec8b8:
    // 0x1ec8b8: 0x3e00008  jr          $ra
label_1ec8bc:
    if (ctx->pc == 0x1EC8BCu) {
        ctx->pc = 0x1EC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC8B8u;
        // 0x1ec8bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC8C0u;
        goto label_1ec8c0;
    }
    ctx->pc = 0x1EC8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC8B8u;
        // 0x1ec8bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC8C0u;
label_1ec8c0:
    // 0x1ec8c0: 0x8f838f20  lw          $v1, -0x70E0($gp)
    ctx->pc = 0x1ec8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938400)));
label_1ec8c4:
    // 0x1ec8c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1ec8c8:
    if (ctx->pc == 0x1EC8C8u) {
        ctx->pc = 0x1EC8CCu;
        goto label_1ec8cc;
    }
    ctx->pc = 0x1EC8C4u;
    {
        const bool branch_taken_0x1ec8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec8c4) {
            ctx->pc = 0x1EC8D8u;
            goto label_1ec8d8;
        }
    }
    ctx->pc = 0x1EC8CCu;
label_1ec8cc:
    // 0x1ec8cc: 0x8f838f28  lw          $v1, -0x70D8($gp)
    ctx->pc = 0x1ec8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938408)));
label_1ec8d0:
    // 0x1ec8d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ec8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ec8d4:
    // 0x1ec8d4: 0xaf838f28  sw          $v1, -0x70D8($gp)
    ctx->pc = 0x1ec8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938408), GPR_U32(ctx, 3));
label_1ec8d8:
    // 0x1ec8d8: 0x3e00008  jr          $ra
label_1ec8dc:
    if (ctx->pc == 0x1EC8DCu) {
        ctx->pc = 0x1EC8E0u;
        goto label_1ec8e0;
    }
    ctx->pc = 0x1EC8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC8E0u;
label_1ec8e0:
    // 0x1ec8e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ec8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1ec8e4:
    // 0x1ec8e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ec8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1ec8e8:
    // 0x1ec8e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ec8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1ec8ec:
    // 0x1ec8ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ec8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ec8f0:
    // 0x1ec8f0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ec8f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec8f4:
    // 0x1ec8f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ec8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ec8f8:
    // 0x1ec8f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ec8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ec8fc:
    // 0x1ec8fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ec8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ec900:
    // 0x1ec900: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ec904:
    // 0x1ec904: 0xaf808f28  sw          $zero, -0x70D8($gp)
    ctx->pc = 0x1ec904u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938408), GPR_U32(ctx, 0));
label_1ec908:
    // 0x1ec908: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ec908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec90c:
    // 0x1ec90c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ec90cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec910:
    // 0x1ec910: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ec910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec914:
    // 0x1ec914: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ec914u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec918:
    // 0x1ec918: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1ec918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1ec91c:
    // 0x1ec91c: 0x24420920  addiu       $v0, $v0, 0x920
    ctx->pc = 0x1ec91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2336));
label_1ec920:
    // 0x1ec920: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x1ec920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_1ec924:
    // 0x1ec924: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1ec924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1ec928:
    // 0x1ec928: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1ec928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1ec92c:
    // 0x1ec92c: 0x559021  addu        $s2, $v0, $s5
    ctx->pc = 0x1ec92cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1ec930:
    // 0x1ec930: 0xc05e234  jal         func_1788D0
label_1ec934:
    if (ctx->pc == 0x1EC934u) {
        ctx->pc = 0x1EC934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC930u;
        // 0x1ec934: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC938u;
        goto label_1ec938;
    }
    ctx->pc = 0x1EC930u;
    SET_GPR_U32(ctx, 31, 0x1EC938u);
    ctx->pc = 0x1EC934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC930u;
    // 0x1ec934: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1EC930u, 0x1EC938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC938u;
label_1ec938:
    // 0x1ec938: 0x27828220  addiu       $v0, $gp, -0x7DE0
    ctx->pc = 0x1ec938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935072));
label_1ec93c:
    // 0x1ec93c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1ec93cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ec940:
    // 0x1ec940: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1ec940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1ec944:
    // 0x1ec944: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1ec944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1ec948:
    // 0x1ec948: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x1ec948u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ec94c:
    // 0x1ec94c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ec94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1ec950:
    // 0x1ec950: 0x240601a0  addiu       $a2, $zero, 0x1A0
    ctx->pc = 0x1ec950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
label_1ec954:
    // 0x1ec954: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1ec954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ec958:
    // 0x1ec958: 0x3408fffe  ori         $t0, $zero, 0xFFFE
    ctx->pc = 0x1ec958u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_1ec95c:
    // 0x1ec95c: 0xc0708ac  jal         func_1C22B0
label_1ec960:
    if (ctx->pc == 0x1EC960u) {
        ctx->pc = 0x1EC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC95Cu;
        // 0x1ec960: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC964u;
        goto label_1ec964;
    }
    ctx->pc = 0x1EC95Cu;
    SET_GPR_U32(ctx, 31, 0x1EC964u);
    ctx->pc = 0x1EC960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC95Cu;
    // 0x1ec960: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1EC964u;
label_1ec964:
    // 0x1ec964: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ec964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec968:
    // 0x1ec968: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec96c:
    // 0x1ec96c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1ec96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ec970:
    // 0x1ec970: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x1ec970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ec974:
    // 0x1ec974: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1ec974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1ec978:
    // 0x1ec978: 0x2484821  addu        $t1, $s2, $t0
    ctx->pc = 0x1ec978u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_1ec97c:
    // 0x1ec97c: 0xa1260080  sb          $a2, 0x80($t1)
    ctx->pc = 0x1ec97cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 128), (uint8_t)GPR_U32(ctx, 6));
label_1ec980:
    // 0x1ec980: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1ec980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1ec984:
    // 0x1ec984: 0xa1250081  sb          $a1, 0x81($t1)
    ctx->pc = 0x1ec984u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 129), (uint8_t)GPR_U32(ctx, 5));
label_1ec988:
    // 0x1ec988: 0x28e30005  slti        $v1, $a3, 0x5
    ctx->pc = 0x1ec988u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
label_1ec98c:
    // 0x1ec98c: 0xa1260082  sb          $a2, 0x82($t1)
    ctx->pc = 0x1ec98cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 130), (uint8_t)GPR_U32(ctx, 6));
label_1ec990:
    // 0x1ec990: 0x25080500  addiu       $t0, $t0, 0x500
    ctx->pc = 0x1ec990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1280));
label_1ec994:
    // 0x1ec994: 0xa1260083  sb          $a2, 0x83($t1)
    ctx->pc = 0x1ec994u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 131), (uint8_t)GPR_U32(ctx, 6));
label_1ec998:
    // 0x1ec998: 0xad240084  sw          $a0, 0x84($t1)
    ctx->pc = 0x1ec998u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 132), GPR_U32(ctx, 4));
label_1ec99c:
    // 0x1ec99c: 0xa1260120  sb          $a2, 0x120($t1)
    ctx->pc = 0x1ec99cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 288), (uint8_t)GPR_U32(ctx, 6));
label_1ec9a0:
    // 0x1ec9a0: 0xa1250121  sb          $a1, 0x121($t1)
    ctx->pc = 0x1ec9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 289), (uint8_t)GPR_U32(ctx, 5));
label_1ec9a4:
    // 0x1ec9a4: 0xa1260122  sb          $a2, 0x122($t1)
    ctx->pc = 0x1ec9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 290), (uint8_t)GPR_U32(ctx, 6));
label_1ec9a8:
    // 0x1ec9a8: 0xa1260123  sb          $a2, 0x123($t1)
    ctx->pc = 0x1ec9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 291), (uint8_t)GPR_U32(ctx, 6));
label_1ec9ac:
    // 0x1ec9ac: 0xad240124  sw          $a0, 0x124($t1)
    ctx->pc = 0x1ec9acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 292), GPR_U32(ctx, 4));
label_1ec9b0:
    // 0x1ec9b0: 0xa12601c0  sb          $a2, 0x1C0($t1)
    ctx->pc = 0x1ec9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 448), (uint8_t)GPR_U32(ctx, 6));
label_1ec9b4:
    // 0x1ec9b4: 0xa12501c1  sb          $a1, 0x1C1($t1)
    ctx->pc = 0x1ec9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 449), (uint8_t)GPR_U32(ctx, 5));
label_1ec9b8:
    // 0x1ec9b8: 0xa12601c2  sb          $a2, 0x1C2($t1)
    ctx->pc = 0x1ec9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 450), (uint8_t)GPR_U32(ctx, 6));
label_1ec9bc:
    // 0x1ec9bc: 0xa12601c3  sb          $a2, 0x1C3($t1)
    ctx->pc = 0x1ec9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 451), (uint8_t)GPR_U32(ctx, 6));
label_1ec9c0:
    // 0x1ec9c0: 0xad2401c4  sw          $a0, 0x1C4($t1)
    ctx->pc = 0x1ec9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 452), GPR_U32(ctx, 4));
label_1ec9c4:
    // 0x1ec9c4: 0xa1260260  sb          $a2, 0x260($t1)
    ctx->pc = 0x1ec9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 608), (uint8_t)GPR_U32(ctx, 6));
label_1ec9c8:
    // 0x1ec9c8: 0xa1250261  sb          $a1, 0x261($t1)
    ctx->pc = 0x1ec9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 609), (uint8_t)GPR_U32(ctx, 5));
label_1ec9cc:
    // 0x1ec9cc: 0xa1260262  sb          $a2, 0x262($t1)
    ctx->pc = 0x1ec9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 610), (uint8_t)GPR_U32(ctx, 6));
label_1ec9d0:
    // 0x1ec9d0: 0xa1260263  sb          $a2, 0x263($t1)
    ctx->pc = 0x1ec9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 611), (uint8_t)GPR_U32(ctx, 6));
label_1ec9d4:
    // 0x1ec9d4: 0xad240264  sw          $a0, 0x264($t1)
    ctx->pc = 0x1ec9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 612), GPR_U32(ctx, 4));
label_1ec9d8:
    // 0x1ec9d8: 0xa1260300  sb          $a2, 0x300($t1)
    ctx->pc = 0x1ec9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 768), (uint8_t)GPR_U32(ctx, 6));
label_1ec9dc:
    // 0x1ec9dc: 0xa1250301  sb          $a1, 0x301($t1)
    ctx->pc = 0x1ec9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 769), (uint8_t)GPR_U32(ctx, 5));
label_1ec9e0:
    // 0x1ec9e0: 0xa1260302  sb          $a2, 0x302($t1)
    ctx->pc = 0x1ec9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 770), (uint8_t)GPR_U32(ctx, 6));
label_1ec9e4:
    // 0x1ec9e4: 0xa1260303  sb          $a2, 0x303($t1)
    ctx->pc = 0x1ec9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 771), (uint8_t)GPR_U32(ctx, 6));
label_1ec9e8:
    // 0x1ec9e8: 0xad240304  sw          $a0, 0x304($t1)
    ctx->pc = 0x1ec9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 772), GPR_U32(ctx, 4));
label_1ec9ec:
    // 0x1ec9ec: 0xa12603a0  sb          $a2, 0x3A0($t1)
    ctx->pc = 0x1ec9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 928), (uint8_t)GPR_U32(ctx, 6));
label_1ec9f0:
    // 0x1ec9f0: 0xa12503a1  sb          $a1, 0x3A1($t1)
    ctx->pc = 0x1ec9f0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 929), (uint8_t)GPR_U32(ctx, 5));
label_1ec9f4:
    // 0x1ec9f4: 0xa12603a2  sb          $a2, 0x3A2($t1)
    ctx->pc = 0x1ec9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 930), (uint8_t)GPR_U32(ctx, 6));
label_1ec9f8:
    // 0x1ec9f8: 0xa12603a3  sb          $a2, 0x3A3($t1)
    ctx->pc = 0x1ec9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 931), (uint8_t)GPR_U32(ctx, 6));
label_1ec9fc:
    // 0x1ec9fc: 0xad2403a4  sw          $a0, 0x3A4($t1)
    ctx->pc = 0x1ec9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 932), GPR_U32(ctx, 4));
label_1eca00:
    // 0x1eca00: 0xa1260440  sb          $a2, 0x440($t1)
    ctx->pc = 0x1eca00u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1088), (uint8_t)GPR_U32(ctx, 6));
label_1eca04:
    // 0x1eca04: 0xa1250441  sb          $a1, 0x441($t1)
    ctx->pc = 0x1eca04u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1089), (uint8_t)GPR_U32(ctx, 5));
label_1eca08:
    // 0x1eca08: 0xa1260442  sb          $a2, 0x442($t1)
    ctx->pc = 0x1eca08u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1090), (uint8_t)GPR_U32(ctx, 6));
label_1eca0c:
    // 0x1eca0c: 0xa1260443  sb          $a2, 0x443($t1)
    ctx->pc = 0x1eca0cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1091), (uint8_t)GPR_U32(ctx, 6));
label_1eca10:
    // 0x1eca10: 0xad240444  sw          $a0, 0x444($t1)
    ctx->pc = 0x1eca10u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1092), GPR_U32(ctx, 4));
label_1eca14:
    // 0x1eca14: 0xa12604e0  sb          $a2, 0x4E0($t1)
    ctx->pc = 0x1eca14u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1248), (uint8_t)GPR_U32(ctx, 6));
label_1eca18:
    // 0x1eca18: 0xa12504e1  sb          $a1, 0x4E1($t1)
    ctx->pc = 0x1eca18u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1249), (uint8_t)GPR_U32(ctx, 5));
label_1eca1c:
    // 0x1eca1c: 0xa12604e2  sb          $a2, 0x4E2($t1)
    ctx->pc = 0x1eca1cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1250), (uint8_t)GPR_U32(ctx, 6));
label_1eca20:
    // 0x1eca20: 0xa12604e3  sb          $a2, 0x4E3($t1)
    ctx->pc = 0x1eca20u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1251), (uint8_t)GPR_U32(ctx, 6));
label_1eca24:
    // 0x1eca24: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
label_1eca28:
    if (ctx->pc == 0x1ECA28u) {
        ctx->pc = 0x1ECA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA24u;
        // 0x1eca28: 0xad2404e4  sw          $a0, 0x4E4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 1252), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECA2Cu;
        goto label_1eca2c;
    }
    ctx->pc = 0x1ECA24u;
    {
        const bool branch_taken_0x1eca24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA24u;
        // 0x1eca28: 0xad2404e4  sw          $a0, 0x4E4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 1252), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca24) {
            ctx->pc = 0x1EC978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec978;
        }
    }
    ctx->pc = 0x1ECA2Cu;
label_1eca2c:
    // 0x1eca2c: 0x28e1000d  slti        $at, $a3, 0xD
    ctx->pc = 0x1eca2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)13) ? 1 : 0);
label_1eca30:
    // 0x1eca30: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1eca34:
    if (ctx->pc == 0x1ECA34u) {
        ctx->pc = 0x1ECA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA30u;
        // 0x1eca34: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECA38u;
        goto label_1eca38;
    }
    ctx->pc = 0x1ECA30u;
    {
        const bool branch_taken_0x1eca30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA30u;
        // 0x1eca34: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca30) {
            ctx->pc = 0x1ECA78u;
            goto label_1eca78;
        }
    }
    ctx->pc = 0x1ECA38u;
label_1eca38:
    // 0x1eca38: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1eca38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1eca3c:
    // 0x1eca3c: 0x34140  sll         $t0, $v1, 5
    ctx->pc = 0x1eca3cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1eca40:
    // 0x1eca40: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1eca40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1eca44:
    // 0x1eca44: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x1eca44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1eca48:
    // 0x1eca48: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1eca48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1eca4c:
    // 0x1eca4c: 0x0  nop
    ctx->pc = 0x1eca4cu;
    // NOP
label_1eca50:
    // 0x1eca50: 0x2484821  addu        $t1, $s2, $t0
    ctx->pc = 0x1eca50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_1eca54:
    // 0x1eca54: 0xa1260080  sb          $a2, 0x80($t1)
    ctx->pc = 0x1eca54u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 128), (uint8_t)GPR_U32(ctx, 6));
label_1eca58:
    // 0x1eca58: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1eca58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1eca5c:
    // 0x1eca5c: 0xa1250081  sb          $a1, 0x81($t1)
    ctx->pc = 0x1eca5cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 129), (uint8_t)GPR_U32(ctx, 5));
label_1eca60:
    // 0x1eca60: 0x28e3000d  slti        $v1, $a3, 0xD
    ctx->pc = 0x1eca60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)13) ? 1 : 0);
label_1eca64:
    // 0x1eca64: 0xa1260082  sb          $a2, 0x82($t1)
    ctx->pc = 0x1eca64u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 130), (uint8_t)GPR_U32(ctx, 6));
label_1eca68:
    // 0x1eca68: 0x250800a0  addiu       $t0, $t0, 0xA0
    ctx->pc = 0x1eca68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
label_1eca6c:
    // 0x1eca6c: 0xa1260083  sb          $a2, 0x83($t1)
    ctx->pc = 0x1eca6cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 131), (uint8_t)GPR_U32(ctx, 6));
label_1eca70:
    // 0x1eca70: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_1eca74:
    if (ctx->pc == 0x1ECA74u) {
        ctx->pc = 0x1ECA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA70u;
        // 0x1eca74: 0xad240084  sw          $a0, 0x84($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 132), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECA78u;
        goto label_1eca78;
    }
    ctx->pc = 0x1ECA70u;
    {
        const bool branch_taken_0x1eca70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA70u;
        // 0x1eca74: 0xad240084  sw          $a0, 0x84($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 132), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca70) {
            ctx->pc = 0x1ECA4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eca4c;
        }
    }
    ctx->pc = 0x1ECA78u;
label_1eca78:
    // 0x1eca78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1eca78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1eca7c:
    // 0x1eca7c: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1eca7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1eca80:
    // 0x1eca80: 0x26731060  addiu       $s3, $s3, 0x1060
    ctx->pc = 0x1eca80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4192));
label_1eca84:
    // 0x1eca84: 0x1460ffa4  bnez        $v1, . + 4 + (-0x5C << 2)
label_1eca88:
    if (ctx->pc == 0x1ECA88u) {
        ctx->pc = 0x1ECA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA84u;
        // 0x1eca88: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECA8Cu;
        goto label_1eca8c;
    }
    ctx->pc = 0x1ECA84u;
    {
        const bool branch_taken_0x1eca84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA84u;
        // 0x1eca88: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca84) {
            ctx->pc = 0x1EC918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec918;
        }
    }
    ctx->pc = 0x1ECA8Cu;
label_1eca8c:
    // 0x1eca8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1eca8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1eca90:
    // 0x1eca90: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1eca90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1eca94:
    // 0x1eca94: 0x1460ff9d  bnez        $v1, . + 4 + (-0x63 << 2)
label_1eca98:
    if (ctx->pc == 0x1ECA98u) {
        ctx->pc = 0x1ECA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA94u;
        // 0x1eca98: 0x26b50830  addiu       $s5, $s5, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECA9Cu;
        goto label_1eca9c;
    }
    ctx->pc = 0x1ECA94u;
    {
        const bool branch_taken_0x1eca94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA94u;
        // 0x1eca98: 0x26b50830  addiu       $s5, $s5, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca94) {
            ctx->pc = 0x1EC90Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec90c;
        }
    }
    ctx->pc = 0x1ECA9Cu;
label_1eca9c:
    // 0x1eca9c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1eca9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ecaa0:
    // 0x1ecaa0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ecaa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ecaa4:
    // 0x1ecaa4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ecaa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ecaa8:
    // 0x1ecaa8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ecaa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ecaac:
    // 0x1ecaac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ecaacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ecab0:
    // 0x1ecab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ecab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ecab4:
    // 0x1ecab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ecab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ecab8:
    // 0x1ecab8: 0x3e00008  jr          $ra
label_1ecabc:
    if (ctx->pc == 0x1ECABCu) {
        ctx->pc = 0x1ECABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAB8u;
        // 0x1ecabc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECAC0u;
        goto label_1ecac0;
    }
    ctx->pc = 0x1ECAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAB8u;
        // 0x1ecabc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECAC0u;
label_1ecac0:
    // 0x1ecac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ecac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ecac4:
    // 0x1ecac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ecac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ecac8:
    // 0x1ecac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ecac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ecacc:
    // 0x1ecacc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ecaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ecad0:
    // 0x1ecad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ecad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ecad4:
    // 0x1ecad4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1ecad8:
    if (ctx->pc == 0x1ECAD8u) {
        ctx->pc = 0x1ECAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAD4u;
        // 0x1ecad8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECADCu;
        goto label_1ecadc;
    }
    ctx->pc = 0x1ECAD4u;
    {
        const bool branch_taken_0x1ecad4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAD4u;
        // 0x1ecad8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecad4) {
            ctx->pc = 0x1ECAE8u;
            goto label_1ecae8;
        }
    }
    ctx->pc = 0x1ECADCu;
label_1ecadc:
    // 0x1ecadc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ecadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ecae0:
    // 0x1ecae0: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_1ecae4:
    if (ctx->pc == 0x1ECAE4u) {
        ctx->pc = 0x1ECAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAE0u;
        // 0x1ecae4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECAE8u;
        goto label_1ecae8;
    }
    ctx->pc = 0x1ECAE0u;
    {
        const bool branch_taken_0x1ecae0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ECAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAE0u;
        // 0x1ecae4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecae0) {
            ctx->pc = 0x1ECAF4u;
            goto label_1ecaf4;
        }
    }
    ctx->pc = 0x1ECAE8u;
label_1ecae8:
    // 0x1ecae8: 0xc0401b8  jal         func_1006E0
label_1ecaec:
    if (ctx->pc == 0x1ECAECu) {
        ctx->pc = 0x1ECAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAE8u;
        // 0x1ecaec: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECAF0u;
        goto label_1ecaf0;
    }
    ctx->pc = 0x1ECAE8u;
    SET_GPR_U32(ctx, 31, 0x1ECAF0u);
    ctx->pc = 0x1ECAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECAE8u;
    // 0x1ecaec: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006E0u, 0x1ECAE8u, 0x1ECAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECAF0u;
label_1ecaf0:
    // 0x1ecaf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ecaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ecaf4:
    // 0x1ecaf4: 0xc07b33c  jal         func_1ECCF0
label_1ecaf8:
    if (ctx->pc == 0x1ECAF8u) {
        ctx->pc = 0x1ECAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAF4u;
        // 0x1ecaf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECAFCu;
        goto label_1ecafc;
    }
    ctx->pc = 0x1ECAF4u;
    SET_GPR_U32(ctx, 31, 0x1ECAFCu);
    ctx->pc = 0x1ECAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECAF4u;
    // 0x1ecaf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECCF0u;
    goto label_1eccf0;
    ctx->pc = 0x1ECAFCu;
label_1ecafc:
    // 0x1ecafc: 0xc07b520  jal         func_1ED480
label_1ecb00:
    if (ctx->pc == 0x1ECB00u) {
        ctx->pc = 0x1ECB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAFCu;
        // 0x1ecb00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECB04u;
        goto label_1ecb04;
    }
    ctx->pc = 0x1ECAFCu;
    SET_GPR_U32(ctx, 31, 0x1ECB04u);
    ctx->pc = 0x1ECB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECAFCu;
    // 0x1ecb00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED480u;
    { ctx->pc = 0x1ed480; return; }
    ctx->pc = 0x1ECB04u;
label_1ecb04:
    // 0x1ecb04: 0xc060258  jal         func_180960
label_1ecb08:
    if (ctx->pc == 0x1ECB08u) {
        ctx->pc = 0x1ECB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB04u;
        // 0x1ecb08: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECB0Cu;
        goto label_1ecb0c;
    }
    ctx->pc = 0x1ECB04u;
    SET_GPR_U32(ctx, 31, 0x1ECB0Cu);
    ctx->pc = 0x1ECB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB04u;
    // 0x1ecb08: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1ECB04u, 0x1ECB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB0Cu;
label_1ecb0c:
    // 0x1ecb0c: 0xc060258  jal         func_180960
label_1ecb10:
    if (ctx->pc == 0x1ECB10u) {
        ctx->pc = 0x1ECB14u;
        goto label_1ecb14;
    }
    ctx->pc = 0x1ECB0Cu;
    SET_GPR_U32(ctx, 31, 0x1ECB14u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1ECB0Cu, 0x1ECB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB14u;
label_1ecb14:
    // 0x1ecb14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ecb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ecb18:
    // 0x1ecb18: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
label_1ecb1c:
    if (ctx->pc == 0x1ECB1Cu) {
        ctx->pc = 0x1ECB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB18u;
        // 0x1ecb1c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECB20u;
        goto label_1ecb20;
    }
    ctx->pc = 0x1ECB18u;
    {
        const bool branch_taken_0x1ecb18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ECB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB18u;
        // 0x1ecb1c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb18) {
            ctx->pc = 0x1ECB54u;
            goto label_1ecb54;
        }
    }
    ctx->pc = 0x1ECB20u;
label_1ecb20:
    // 0x1ecb20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ecb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ecb24:
    // 0x1ecb24: 0xc07b2ec  jal         func_1ECBB0
label_1ecb28:
    if (ctx->pc == 0x1ECB28u) {
        ctx->pc = 0x1ECB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB24u;
        // 0x1ecb28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECB2Cu;
        goto label_1ecb2c;
    }
    ctx->pc = 0x1ECB24u;
    SET_GPR_U32(ctx, 31, 0x1ECB2Cu);
    ctx->pc = 0x1ECB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB24u;
    // 0x1ecb28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECBB0u;
    goto label_1ecbb0;
    ctx->pc = 0x1ECB2Cu;
label_1ecb2c:
    // 0x1ecb2c: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1ecb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1ecb30:
    // 0x1ecb30: 0x2402fbff  addiu       $v0, $zero, -0x401
    ctx->pc = 0x1ecb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_1ecb34:
    // 0x1ecb34: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ecb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ecb38:
    // 0x1ecb38: 0xc043ab8  jal         func_10EAE0
label_1ecb3c:
    if (ctx->pc == 0x1ECB3Cu) {
        ctx->pc = 0x1ECB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB38u;
        // 0x1ecb3c: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECB40u;
        goto label_1ecb40;
    }
    ctx->pc = 0x1ECB38u;
    SET_GPR_U32(ctx, 31, 0x1ECB40u);
    ctx->pc = 0x1ECB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB38u;
    // 0x1ecb3c: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EAE0u, 0x1ECB38u, 0x1ECB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB40u;
label_1ecb40:
    // 0x1ecb40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ecb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ecb44:
    // 0x1ecb44: 0xc07b33c  jal         func_1ECCF0
label_1ecb48:
    if (ctx->pc == 0x1ECB48u) {
        ctx->pc = 0x1ECB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB44u;
        // 0x1ecb48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECB4Cu;
        goto label_1ecb4c;
    }
    ctx->pc = 0x1ECB44u;
    SET_GPR_U32(ctx, 31, 0x1ECB4Cu);
    ctx->pc = 0x1ECB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB44u;
    // 0x1ecb48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECCF0u;
    goto label_1eccf0;
    ctx->pc = 0x1ECB4Cu;
label_1ecb4c:
    // 0x1ecb4c: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
label_1ecb50:
    if (ctx->pc == 0x1ECB50u) {
        ctx->pc = 0x1ECB54u;
        goto label_1ecb54;
    }
    ctx->pc = 0x1ECB4Cu;
    {
        const bool branch_taken_0x1ecb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecb4c) {
            ctx->pc = 0x1ECAFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecafc;
        }
    }
    ctx->pc = 0x1ECB54u;
label_1ecb54:
    // 0x1ecb54: 0x0  nop
    ctx->pc = 0x1ecb54u;
    // NOP
label_1ecb58:
    // 0x1ecb58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ecb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ecb5c:
    // 0x1ecb5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ecb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ecb60:
    // 0x1ecb60: 0xc07b2ec  jal         func_1ECBB0
label_1ecb64:
    if (ctx->pc == 0x1ECB64u) {
        ctx->pc = 0x1ECB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB60u;
        // 0x1ecb64: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECB68u;
        goto label_1ecb68;
    }
    ctx->pc = 0x1ECB60u;
    SET_GPR_U32(ctx, 31, 0x1ECB68u);
    ctx->pc = 0x1ECB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB60u;
    // 0x1ecb64: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECBB0u;
    goto label_1ecbb0;
    ctx->pc = 0x1ECB68u;
label_1ecb68:
    // 0x1ecb68: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_1ecb6c:
    if (ctx->pc == 0x1ECB6Cu) {
        ctx->pc = 0x1ECB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB68u;
        // 0x1ecb6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECB70u;
        goto label_1ecb70;
    }
    ctx->pc = 0x1ECB68u;
    {
        const bool branch_taken_0x1ecb68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB68u;
        // 0x1ecb6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb68) {
            ctx->pc = 0x1ECB80u;
            goto label_1ecb80;
        }
    }
    ctx->pc = 0x1ECB70u;
label_1ecb70:
    // 0x1ecb70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ecb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ecb74:
    // 0x1ecb74: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
label_1ecb78:
    if (ctx->pc == 0x1ECB78u) {
        ctx->pc = 0x1ECB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB74u;
        // 0x1ecb78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECB7Cu;
        goto label_1ecb7c;
    }
    ctx->pc = 0x1ECB74u;
    {
        const bool branch_taken_0x1ecb74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ECB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB74u;
        // 0x1ecb78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb74) {
            ctx->pc = 0x1ECB9Cu;
            goto label_1ecb9c;
        }
    }
    ctx->pc = 0x1ECB7Cu;
label_1ecb7c:
    // 0x1ecb7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ecb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ecb80:
    // 0x1ecb80: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_1ecb84:
    if (ctx->pc == 0x1ECB84u) {
        ctx->pc = 0x1ECB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB80u;
        // 0x1ecb84: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECB88u;
        goto label_1ecb88;
    }
    ctx->pc = 0x1ECB80u;
    {
        const bool branch_taken_0x1ecb80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ECB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB80u;
        // 0x1ecb84: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb80) {
            ctx->pc = 0x1ECB90u;
            goto label_1ecb90;
        }
    }
    ctx->pc = 0x1ECB88u;
label_1ecb88:
    // 0x1ecb88: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_1ecb8c:
    if (ctx->pc == 0x1ECB8Cu) {
        ctx->pc = 0x1ECB90u;
        goto label_1ecb90;
    }
    ctx->pc = 0x1ECB88u;
    {
        const bool branch_taken_0x1ecb88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ecb88) {
            ctx->pc = 0x1ECB98u;
            goto label_1ecb98;
        }
    }
    ctx->pc = 0x1ECB90u;
label_1ecb90:
    // 0x1ecb90: 0xc040318  jal         func_100C60
label_1ecb94:
    if (ctx->pc == 0x1ECB94u) {
        ctx->pc = 0x1ECB98u;
        goto label_1ecb98;
    }
    ctx->pc = 0x1ECB90u;
    SET_GPR_U32(ctx, 31, 0x1ECB98u);
    ctx->pc = 0x100C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C60u, 0x1ECB90u, 0x1ECB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB98u;
label_1ecb98:
    // 0x1ecb98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ecb98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ecb9c:
    // 0x1ecb9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ecb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ecba0:
    // 0x1ecba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ecba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ecba4:
    // 0x1ecba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ecba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ecba8:
    // 0x1ecba8: 0x3e00008  jr          $ra
label_1ecbac:
    if (ctx->pc == 0x1ECBACu) {
        ctx->pc = 0x1ECBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBA8u;
        // 0x1ecbac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECBB0u;
        goto label_1ecbb0;
    }
    ctx->pc = 0x1ECBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBA8u;
        // 0x1ecbac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECBB0u;
label_1ecbb0:
    // 0x1ecbb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ecbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ecbb4:
    // 0x1ecbb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ecbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ecbb8:
    // 0x1ecbb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ecbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ecbbc:
    // 0x1ecbbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ecbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ecbc0:
    // 0x1ecbc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ecbc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ecbc4:
    // 0x1ecbc4: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
label_1ecbc8:
    if (ctx->pc == 0x1ECBC8u) {
        ctx->pc = 0x1ECBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBC4u;
        // 0x1ecbc8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECBCCu;
        goto label_1ecbcc;
    }
    ctx->pc = 0x1ECBC4u;
    {
        const bool branch_taken_0x1ecbc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBC4u;
        // 0x1ecbc8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecbc4) {
            ctx->pc = 0x1ECCA0u;
            goto label_1ecca0;
        }
    }
    ctx->pc = 0x1ECBCCu;
label_1ecbcc:
    // 0x1ecbcc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_1ecbd0:
    if (ctx->pc == 0x1ECBD0u) {
        ctx->pc = 0x1ECBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBCCu;
        // 0x1ecbd0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECBD4u;
        goto label_1ecbd4;
    }
    ctx->pc = 0x1ECBCCu;
    {
        const bool branch_taken_0x1ecbcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBCCu;
        // 0x1ecbd0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecbcc) {
            ctx->pc = 0x1ECBDCu;
            goto label_1ecbdc;
        }
    }
    ctx->pc = 0x1ECBD4u;
label_1ecbd4:
    // 0x1ecbd4: 0x16220032  bne         $s1, $v0, . + 4 + (0x32 << 2)
label_1ecbd8:
    if (ctx->pc == 0x1ECBD8u) {
        ctx->pc = 0x1ECBDCu;
        goto label_1ecbdc;
    }
    ctx->pc = 0x1ECBD4u;
    {
        const bool branch_taken_0x1ecbd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ecbd4) {
            ctx->pc = 0x1ECCA0u;
            goto label_1ecca0;
        }
    }
    ctx->pc = 0x1ECBDCu;
label_1ecbdc:
    // 0x1ecbdc: 0x16200022  bnez        $s1, . + 4 + (0x22 << 2)
label_1ecbe0:
    if (ctx->pc == 0x1ECBE0u) {
        ctx->pc = 0x1ECBE4u;
        goto label_1ecbe4;
    }
    ctx->pc = 0x1ECBDCu;
    {
        const bool branch_taken_0x1ecbdc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecbdc) {
            ctx->pc = 0x1ECC68u;
            goto label_1ecc68;
        }
    }
    ctx->pc = 0x1ECBE4u;
label_1ecbe4:
    // 0x1ecbe4: 0xc0819f0  jal         func_2067C0
label_1ecbe8:
    if (ctx->pc == 0x1ECBE8u) {
        ctx->pc = 0x1ECBECu;
        goto label_1ecbec;
    }
    ctx->pc = 0x1ECBE4u;
    SET_GPR_U32(ctx, 31, 0x1ECBECu);
    ctx->pc = 0x2067C0u;
    { ctx->pc = 0x2067c0; return; }
    ctx->pc = 0x1ECBECu;
label_1ecbec:
    // 0x1ecbec: 0xc090674  jal         func_2419D0
label_1ecbf0:
    if (ctx->pc == 0x1ECBF0u) {
        ctx->pc = 0x1ECBF4u;
        goto label_1ecbf4;
    }
    ctx->pc = 0x1ECBECu;
    SET_GPR_U32(ctx, 31, 0x1ECBF4u);
    ctx->pc = 0x2419D0u;
    { ctx->pc = 0x2419d0; return; }
    ctx->pc = 0x1ECBF4u;
label_1ecbf4:
    // 0x1ecbf4: 0xc082674  jal         func_2099D0
label_1ecbf8:
    if (ctx->pc == 0x1ECBF8u) {
        ctx->pc = 0x1ECBFCu;
        goto label_1ecbfc;
    }
    ctx->pc = 0x1ECBF4u;
    SET_GPR_U32(ctx, 31, 0x1ECBFCu);
    ctx->pc = 0x2099D0u;
    { ctx->pc = 0x2099d0; return; }
    ctx->pc = 0x1ECBFCu;
label_1ecbfc:
    // 0x1ecbfc: 0xc081448  jal         func_205120
label_1ecc00:
    if (ctx->pc == 0x1ECC00u) {
        ctx->pc = 0x1ECC04u;
        goto label_1ecc04;
    }
    ctx->pc = 0x1ECBFCu;
    SET_GPR_U32(ctx, 31, 0x1ECC04u);
    ctx->pc = 0x205120u;
    { ctx->pc = 0x205120; return; }
    ctx->pc = 0x1ECC04u;
label_1ecc04:
    // 0x1ecc04: 0xc0709a8  jal         func_1C26A0
label_1ecc08:
    if (ctx->pc == 0x1ECC08u) {
        ctx->pc = 0x1ECC0Cu;
        goto label_1ecc0c;
    }
    ctx->pc = 0x1ECC04u;
    SET_GPR_U32(ctx, 31, 0x1ECC0Cu);
    ctx->pc = 0x1C26A0u;
    { ctx->pc = 0x1c26a0; return; }
    ctx->pc = 0x1ECC0Cu;
label_1ecc0c:
    // 0x1ecc0c: 0xc070a58  jal         func_1C2960
label_1ecc10:
    if (ctx->pc == 0x1ECC10u) {
        ctx->pc = 0x1ECC14u;
        goto label_1ecc14;
    }
    ctx->pc = 0x1ECC0Cu;
    SET_GPR_U32(ctx, 31, 0x1ECC14u);
    ctx->pc = 0x1C2960u;
    { ctx->pc = 0x1c2960; return; }
    ctx->pc = 0x1ECC14u;
label_1ecc14:
    // 0x1ecc14: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ecc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1ecc18:
    // 0x1ecc18: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1ecc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1ecc1c:
    // 0x1ecc1c: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x1ecc1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1ecc20:
    // 0x1ecc20: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_1ecc24:
    if (ctx->pc == 0x1ECC24u) {
        ctx->pc = 0x1ECC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC20u;
        // 0x1ecc24: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECC28u;
        goto label_1ecc28;
    }
    ctx->pc = 0x1ECC20u;
    {
        const bool branch_taken_0x1ecc20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ECC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC20u;
        // 0x1ecc24: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc20) {
            ctx->pc = 0x1ECC68u;
            goto label_1ecc68;
        }
    }
    ctx->pc = 0x1ECC28u;
label_1ecc28:
    // 0x1ecc28: 0x9022497c  lbu         $v0, 0x497C($at)
    ctx->pc = 0x1ecc28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18812)));
label_1ecc2c:
    // 0x1ecc2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ecc30:
    if (ctx->pc == 0x1ECC30u) {
        ctx->pc = 0x1ECC34u;
        goto label_1ecc34;
    }
    ctx->pc = 0x1ECC2Cu;
    {
        const bool branch_taken_0x1ecc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecc2c) {
            ctx->pc = 0x1ECC48u;
            goto label_1ecc48;
        }
    }
    ctx->pc = 0x1ECC34u;
label_1ecc34:
    // 0x1ecc34: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ecc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1ecc38:
    // 0x1ecc38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ecc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ecc3c:
    // 0x1ecc3c: 0x9022498a  lbu         $v0, 0x498A($at)
    ctx->pc = 0x1ecc3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18826)));
label_1ecc40:
    // 0x1ecc40: 0xc056968  jal         func_15A5A0
label_1ecc44:
    if (ctx->pc == 0x1ECC44u) {
        ctx->pc = 0x1ECC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC40u;
        // 0x1ecc44: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECC48u;
        goto label_1ecc48;
    }
    ctx->pc = 0x1ECC40u;
    SET_GPR_U32(ctx, 31, 0x1ECC48u);
    ctx->pc = 0x1ECC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC40u;
    // 0x1ecc44: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A5A0u, 0x1ECC40u, 0x1ECC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC48u;
label_1ecc48:
    // 0x1ecc48: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ecc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1ecc4c:
    // 0x1ecc4c: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x1ecc4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_1ecc50:
    // 0x1ecc50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ecc54:
    if (ctx->pc == 0x1ECC54u) {
        ctx->pc = 0x1ECC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC50u;
        // 0x1ecc54: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECC58u;
        goto label_1ecc58;
    }
    ctx->pc = 0x1ECC50u;
    {
        const bool branch_taken_0x1ecc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC50u;
        // 0x1ecc54: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc50) {
            ctx->pc = 0x1ECC68u;
            goto label_1ecc68;
        }
    }
    ctx->pc = 0x1ECC58u;
label_1ecc58:
    // 0x1ecc58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ecc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ecc5c:
    // 0x1ecc5c: 0x90224a1a  lbu         $v0, 0x4A1A($at)
    ctx->pc = 0x1ecc5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18970)));
label_1ecc60:
    // 0x1ecc60: 0xc056968  jal         func_15A5A0
label_1ecc64:
    if (ctx->pc == 0x1ECC64u) {
        ctx->pc = 0x1ECC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC60u;
        // 0x1ecc64: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECC68u;
        goto label_1ecc68;
    }
    ctx->pc = 0x1ECC60u;
    SET_GPR_U32(ctx, 31, 0x1ECC68u);
    ctx->pc = 0x1ECC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC60u;
    // 0x1ecc64: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A5A0u, 0x1ECC60u, 0x1ECC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC68u;
label_1ecc68:
    // 0x1ecc68: 0xc070c50  jal         func_1C3140
label_1ecc6c:
    if (ctx->pc == 0x1ECC6Cu) {
        ctx->pc = 0x1ECC70u;
        goto label_1ecc70;
    }
    ctx->pc = 0x1ECC68u;
    SET_GPR_U32(ctx, 31, 0x1ECC70u);
    ctx->pc = 0x1C3140u;
    { ctx->pc = 0x1c3140; return; }
    ctx->pc = 0x1ECC70u;
label_1ecc70:
    // 0x1ecc70: 0xc070d64  jal         func_1C3590
label_1ecc74:
    if (ctx->pc == 0x1ECC74u) {
        ctx->pc = 0x1ECC78u;
        goto label_1ecc78;
    }
    ctx->pc = 0x1ECC70u;
    SET_GPR_U32(ctx, 31, 0x1ECC78u);
    ctx->pc = 0x1C3590u;
    { ctx->pc = 0x1c3590; return; }
    ctx->pc = 0x1ECC78u;
label_1ecc78:
    // 0x1ecc78: 0xc070b08  jal         func_1C2C20
label_1ecc7c:
    if (ctx->pc == 0x1ECC7Cu) {
        ctx->pc = 0x1ECC80u;
        goto label_1ecc80;
    }
    ctx->pc = 0x1ECC78u;
    SET_GPR_U32(ctx, 31, 0x1ECC80u);
    ctx->pc = 0x1C2C20u;
    { ctx->pc = 0x1c2c20; return; }
    ctx->pc = 0x1ECC80u;
label_1ecc80:
    // 0x1ecc80: 0xc070cb4  jal         func_1C32D0
label_1ecc84:
    if (ctx->pc == 0x1ECC84u) {
        ctx->pc = 0x1ECC88u;
        goto label_1ecc88;
    }
    ctx->pc = 0x1ECC80u;
    SET_GPR_U32(ctx, 31, 0x1ECC88u);
    ctx->pc = 0x1C32D0u;
    { ctx->pc = 0x1c32d0; return; }
    ctx->pc = 0x1ECC88u;
label_1ecc88:
    // 0x1ecc88: 0xc07d874  jal         func_1F61D0
label_1ecc8c:
    if (ctx->pc == 0x1ECC8Cu) {
        ctx->pc = 0x1ECC90u;
        goto label_1ecc90;
    }
    ctx->pc = 0x1ECC88u;
    SET_GPR_U32(ctx, 31, 0x1ECC90u);
    ctx->pc = 0x1F61D0u;
    { ctx->pc = 0x1f61d0; return; }
    ctx->pc = 0x1ECC90u;
label_1ecc90:
    // 0x1ecc90: 0xc05af50  jal         func_16BD40
label_1ecc94:
    if (ctx->pc == 0x1ECC94u) {
        ctx->pc = 0x1ECC98u;
        goto label_1ecc98;
    }
    ctx->pc = 0x1ECC90u;
    SET_GPR_U32(ctx, 31, 0x1ECC98u);
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x1ECC90u, 0x1ECC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC98u;
label_1ecc98:
    // 0x1ecc98: 0xc05b578  jal         func_16D5E0
label_1ecc9c:
    if (ctx->pc == 0x1ECC9Cu) {
        ctx->pc = 0x1ECC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC98u;
        // 0x1ecc9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECCA0u;
        goto label_1ecca0;
    }
    ctx->pc = 0x1ECC98u;
    SET_GPR_U32(ctx, 31, 0x1ECCA0u);
    ctx->pc = 0x1ECC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC98u;
    // 0x1ecc9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1ECC98u, 0x1ECCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECCA0u;
label_1ecca0:
    // 0x1ecca0: 0xc07ab58  jal         func_1EAD60
label_1ecca4:
    if (ctx->pc == 0x1ECCA4u) {
        ctx->pc = 0x1ECCA8u;
        goto label_1ecca8;
    }
    ctx->pc = 0x1ECCA0u;
    SET_GPR_U32(ctx, 31, 0x1ECCA8u);
    ctx->pc = 0x1EAD60u;
    { ctx->pc = 0x1ead60; return; }
    ctx->pc = 0x1ECCA8u;
label_1ecca8:
    // 0x1ecca8: 0xc04e19c  jal         func_138670
label_1eccac:
    if (ctx->pc == 0x1ECCACu) {
        ctx->pc = 0x1ECCB0u;
        goto label_1eccb0;
    }
    ctx->pc = 0x1ECCA8u;
    SET_GPR_U32(ctx, 31, 0x1ECCB0u);
    ctx->pc = 0x138670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138670u, 0x1ECCA8u, 0x1ECCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECCB0u;
label_1eccb0:
    // 0x1eccb0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_1eccb4:
    if (ctx->pc == 0x1ECCB4u) {
        ctx->pc = 0x1ECCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECCB0u;
        // 0x1eccb4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECCB8u;
        goto label_1eccb8;
    }
    ctx->pc = 0x1ECCB0u;
    {
        const bool branch_taken_0x1eccb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECCB0u;
        // 0x1eccb4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eccb0) {
            ctx->pc = 0x1ECCC0u;
            goto label_1eccc0;
        }
    }
    ctx->pc = 0x1ECCB8u;
label_1eccb8:
    // 0x1eccb8: 0x16230005  bne         $s1, $v1, . + 4 + (0x5 << 2)
label_1eccbc:
    if (ctx->pc == 0x1ECCBCu) {
        ctx->pc = 0x1ECCC0u;
        goto label_1eccc0;
    }
    ctx->pc = 0x1ECCB8u;
    {
        const bool branch_taken_0x1eccb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eccb8) {
            ctx->pc = 0x1ECCD0u;
            goto label_1eccd0;
        }
    }
    ctx->pc = 0x1ECCC0u;
label_1eccc0:
    // 0x1eccc0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1eccc4:
    if (ctx->pc == 0x1ECCC4u) {
        ctx->pc = 0x1ECCC8u;
        goto label_1eccc8;
    }
    ctx->pc = 0x1ECCC0u;
    {
        const bool branch_taken_0x1eccc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eccc0) {
            ctx->pc = 0x1ECCD0u;
            goto label_1eccd0;
        }
    }
    ctx->pc = 0x1ECCC8u;
label_1eccc8:
    // 0x1eccc8: 0xc041478  jal         func_1051E0
label_1ecccc:
    if (ctx->pc == 0x1ECCCCu) {
        ctx->pc = 0x1ECCD0u;
        goto label_1eccd0;
    }
    ctx->pc = 0x1ECCC8u;
    SET_GPR_U32(ctx, 31, 0x1ECCD0u);
    ctx->pc = 0x1051E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E0u, 0x1ECCC8u, 0x1ECCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECCD0u;
label_1eccd0:
    // 0x1eccd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eccd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1eccd4:
    // 0x1eccd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eccd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eccd8:
    // 0x1eccd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eccd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1eccdc:
    // 0x1eccdc: 0x3e00008  jr          $ra
label_1ecce0:
    if (ctx->pc == 0x1ECCE0u) {
        ctx->pc = 0x1ECCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECCDCu;
        // 0x1ecce0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECCE4u;
        goto label_1ecce4;
    }
    ctx->pc = 0x1ECCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECCDCu;
        // 0x1ecce0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECCE4u;
label_1ecce4:
    // 0x1ecce4: 0x0  nop
    ctx->pc = 0x1ecce4u;
    // NOP
label_1ecce8:
    // 0x1ecce8: 0x0  nop
    ctx->pc = 0x1ecce8u;
    // NOP
label_1eccec:
    // 0x1eccec: 0x0  nop
    ctx->pc = 0x1eccecu;
    // NOP
label_1eccf0:
    // 0x1eccf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1eccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1eccf4:
    // 0x1eccf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eccf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eccf8:
    // 0x1eccf8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1eccf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1eccfc:
    // 0x1eccfc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1eccfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ecd00:
    // 0x1ecd00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ecd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ecd04:
    // 0x1ecd04: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ecd04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ecd08:
    // 0x1ecd08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ecd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ecd0c:
    // 0x1ecd0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ecd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ecd10:
    // 0x1ecd10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ecd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ecd14:
    // 0x1ecd14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ecd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ecd18:
    // 0x1ecd18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ecd18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ecd1c:
    // 0x1ecd1c: 0xc06dfd4  jal         func_1B7F50
label_1ecd20:
    if (ctx->pc == 0x1ECD20u) {
        ctx->pc = 0x1ECD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD1Cu;
        // 0x1ecd20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECD24u;
        goto label_1ecd24;
    }
    ctx->pc = 0x1ECD1Cu;
    SET_GPR_U32(ctx, 31, 0x1ECD24u);
    ctx->pc = 0x1ECD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECD1Cu;
    // 0x1ecd20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F50u;
    { ctx->pc = 0x1b7f50; return; }
    ctx->pc = 0x1ECD24u;
label_1ecd24:
    // 0x1ecd24: 0x1280004c  beqz        $s4, . + 4 + (0x4C << 2)
label_1ecd28:
    if (ctx->pc == 0x1ECD28u) {
        ctx->pc = 0x1ECD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD24u;
        // 0x1ecd28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECD2Cu;
        goto label_1ecd2c;
    }
    ctx->pc = 0x1ECD24u;
    {
        const bool branch_taken_0x1ecd24 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD24u;
        // 0x1ecd28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecd24) {
            ctx->pc = 0x1ECE58u;
            goto label_1ece58;
        }
    }
    ctx->pc = 0x1ECD2Cu;
label_1ecd2c:
    // 0x1ecd2c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1ecd30:
    if (ctx->pc == 0x1ECD30u) {
        ctx->pc = 0x1ECD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD2Cu;
        // 0x1ecd30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECD34u;
        goto label_1ecd34;
    }
    ctx->pc = 0x1ECD2Cu;
    {
        const bool branch_taken_0x1ecd2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD2Cu;
        // 0x1ecd30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecd2c) {
            ctx->pc = 0x1ECD3Cu;
            goto label_1ecd3c;
        }
    }
    ctx->pc = 0x1ECD34u;
label_1ecd34:
    // 0x1ecd34: 0x16020047  bne         $s0, $v0, . + 4 + (0x47 << 2)
label_1ecd38:
    if (ctx->pc == 0x1ECD38u) {
        ctx->pc = 0x1ECD3Cu;
        goto label_1ecd3c;
    }
    ctx->pc = 0x1ECD34u;
    {
        const bool branch_taken_0x1ecd34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ecd34) {
            ctx->pc = 0x1ECE54u;
            goto label_1ece54;
        }
    }
    ctx->pc = 0x1ECD3Cu;
label_1ecd3c:
    // 0x1ecd3c: 0xc07d89c  jal         func_1F6270
label_1ecd40:
    if (ctx->pc == 0x1ECD40u) {
        ctx->pc = 0x1ECD44u;
        goto label_1ecd44;
    }
    ctx->pc = 0x1ECD3Cu;
    SET_GPR_U32(ctx, 31, 0x1ECD44u);
    ctx->pc = 0x1F6270u;
    { ctx->pc = 0x1f6270; return; }
    ctx->pc = 0x1ECD44u;
label_1ecd44:
    // 0x1ecd44: 0xc070cd8  jal         func_1C3360
label_1ecd48:
    if (ctx->pc == 0x1ECD48u) {
        ctx->pc = 0x1ECD4Cu;
        goto label_1ecd4c;
    }
    ctx->pc = 0x1ECD44u;
    SET_GPR_U32(ctx, 31, 0x1ECD4Cu);
    ctx->pc = 0x1C3360u;
    { ctx->pc = 0x1c3360; return; }
    ctx->pc = 0x1ECD4Cu;
label_1ecd4c:
    // 0x1ecd4c: 0xc070b2c  jal         func_1C2CB0
label_1ecd50:
    if (ctx->pc == 0x1ECD50u) {
        ctx->pc = 0x1ECD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD4Cu;
        // 0x1ecd50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECD54u;
        goto label_1ecd54;
    }
    ctx->pc = 0x1ECD4Cu;
    SET_GPR_U32(ctx, 31, 0x1ECD54u);
    ctx->pc = 0x1ECD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECD4Cu;
    // 0x1ecd50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2CB0u;
    { ctx->pc = 0x1c2cb0; return; }
    ctx->pc = 0x1ECD54u;
label_1ecd54:
    // 0x1ecd54: 0xc070c50  jal         func_1C3140
label_1ecd58:
    if (ctx->pc == 0x1ECD58u) {
        ctx->pc = 0x1ECD5Cu;
        goto label_1ecd5c;
    }
    ctx->pc = 0x1ECD54u;
    SET_GPR_U32(ctx, 31, 0x1ECD5Cu);
    ctx->pc = 0x1C3140u;
    { ctx->pc = 0x1c3140; return; }
    ctx->pc = 0x1ECD5Cu;
label_1ecd5c:
    // 0x1ecd5c: 0xc070d64  jal         func_1C3590
label_1ecd60:
    if (ctx->pc == 0x1ECD60u) {
        ctx->pc = 0x1ECD64u;
        goto label_1ecd64;
    }
    ctx->pc = 0x1ECD5Cu;
    SET_GPR_U32(ctx, 31, 0x1ECD64u);
    ctx->pc = 0x1C3590u;
    { ctx->pc = 0x1c3590; return; }
    ctx->pc = 0x1ECD64u;
label_1ecd64:
    // 0x1ecd64: 0x16000036  bnez        $s0, . + 4 + (0x36 << 2)
label_1ecd68:
    if (ctx->pc == 0x1ECD68u) {
        ctx->pc = 0x1ECD6Cu;
        goto label_1ecd6c;
    }
    ctx->pc = 0x1ECD64u;
    {
        const bool branch_taken_0x1ecd64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecd64) {
            ctx->pc = 0x1ECE40u;
            goto label_1ece40;
        }
    }
    ctx->pc = 0x1ECD6Cu;
label_1ecd6c:
    // 0x1ecd6c: 0xc070a7c  jal         func_1C29F0
label_1ecd70:
    if (ctx->pc == 0x1ECD70u) {
        ctx->pc = 0x1ECD74u;
        goto label_1ecd74;
    }
    ctx->pc = 0x1ECD6Cu;
    SET_GPR_U32(ctx, 31, 0x1ECD74u);
    ctx->pc = 0x1C29F0u;
    { ctx->pc = 0x1c29f0; return; }
    ctx->pc = 0x1ECD74u;
label_1ecd74:
    // 0x1ecd74: 0xc0709cc  jal         func_1C2730
label_1ecd78:
    if (ctx->pc == 0x1ECD78u) {
        ctx->pc = 0x1ECD7Cu;
        goto label_1ecd7c;
    }
    ctx->pc = 0x1ECD74u;
    SET_GPR_U32(ctx, 31, 0x1ECD7Cu);
    ctx->pc = 0x1C2730u;
    { ctx->pc = 0x1c2730; return; }
    ctx->pc = 0x1ECD7Cu;
label_1ecd7c:
    // 0x1ecd7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ecd7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ecd80:
    // 0x1ecd80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ecd80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ecd84:
    // 0x1ecd84: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1ecd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1ecd88:
    // 0x1ecd88: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1ecd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1ecd8c:
    // 0x1ecd8c: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x1ecd8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1ecd90:
    // 0x1ecd90: 0x9262367c  lbu         $v0, 0x367C($s3)
    ctx->pc = 0x1ecd90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13948)));
label_1ecd94:
    // 0x1ecd94: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_1ecd98:
    if (ctx->pc == 0x1ECD98u) {
        ctx->pc = 0x1ECD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD94u;
        // 0x1ecd98: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECD9Cu;
        goto label_1ecd9c;
    }
    ctx->pc = 0x1ECD94u;
    {
        const bool branch_taken_0x1ecd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD94u;
        // 0x1ecd98: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecd94) {
            ctx->pc = 0x1ECE2Cu;
            goto label_1ece2c;
        }
    }
    ctx->pc = 0x1ECD9Cu;
label_1ecd9c:
    // 0x1ecd9c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1ecd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ecda0:
    // 0x1ecda0: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1ecda0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_1ecda4:
    // 0x1ecda4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1ecda8:
    if (ctx->pc == 0x1ECDA8u) {
        ctx->pc = 0x1ECDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECDA4u;
        // 0x1ecda8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECDACu;
        goto label_1ecdac;
    }
    ctx->pc = 0x1ECDA4u;
    {
        const bool branch_taken_0x1ecda4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ECDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECDA4u;
        // 0x1ecda8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecda4) {
            ctx->pc = 0x1ECDB4u;
            goto label_1ecdb4;
        }
    }
    ctx->pc = 0x1ECDACu;
label_1ecdac:
    // 0x1ecdac: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1ecdb0:
    if (ctx->pc == 0x1ECDB0u) {
        ctx->pc = 0x1ECDB4u;
        goto label_1ecdb4;
    }
    ctx->pc = 0x1ECDACu;
    {
        const bool branch_taken_0x1ecdac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ecdac) {
            ctx->pc = 0x1ECDC4u;
            goto label_1ecdc4;
        }
    }
    ctx->pc = 0x1ECDB4u;
label_1ecdb4:
    // 0x1ecdb4: 0x0  nop
    ctx->pc = 0x1ecdb4u;
    // NOP
label_1ecdb8:
    // 0x1ecdb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ecdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ecdbc:
    // 0x1ecdbc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ecdc0:
    if (ctx->pc == 0x1ECDC0u) {
        ctx->pc = 0x1ECDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECDBCu;
        // 0x1ecdc0: 0xa262368a  sb          $v0, 0x368A($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 13962), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECDC4u;
        goto label_1ecdc4;
    }
    ctx->pc = 0x1ECDBCu;
    {
        const bool branch_taken_0x1ecdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECDBCu;
        // 0x1ecdc0: 0xa262368a  sb          $v0, 0x368A($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 13962), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecdbc) {
            ctx->pc = 0x1ECDE0u;
            goto label_1ecde0;
        }
    }
    ctx->pc = 0x1ECDC4u;
label_1ecdc4:
    // 0x1ecdc4: 0x0  nop
    ctx->pc = 0x1ecdc4u;
    // NOP
label_1ecdc8:
    // 0x1ecdc8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ecdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1ecdcc:
    // 0x1ecdcc: 0x90224af6  lbu         $v0, 0x4AF6($at)
    ctx->pc = 0x1ecdccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1ecdd0:
    // 0x1ecdd0: 0x28410029  slti        $at, $v0, 0x29
    ctx->pc = 0x1ecdd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
label_1ecdd4:
    // 0x1ecdd4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1ecdd8:
    if (ctx->pc == 0x1ECDD8u) {
        ctx->pc = 0x1ECDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECDD4u;
        // 0x1ecdd8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECDDCu;
        goto label_1ecddc;
    }
    ctx->pc = 0x1ECDD4u;
    {
        const bool branch_taken_0x1ecdd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECDD4u;
        // 0x1ecdd8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecdd4) {
            ctx->pc = 0x1ECDE0u;
            goto label_1ecde0;
        }
    }
    ctx->pc = 0x1ECDDCu;
label_1ecddc:
    // 0x1ecddc: 0xa262368a  sb          $v0, 0x368A($s3)
    ctx->pc = 0x1ecddcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 13962), (uint8_t)GPR_U32(ctx, 2));
label_1ecde0:
    // 0x1ecde0: 0x9262368a  lbu         $v0, 0x368A($s3)
    ctx->pc = 0x1ecde0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13962)));
label_1ecde4:
    // 0x1ecde4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ecde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ecde8:
    // 0x1ecde8: 0xc056968  jal         func_15A5A0
label_1ecdec:
    if (ctx->pc == 0x1ECDECu) {
        ctx->pc = 0x1ECDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECDE8u;
        // 0x1ecdec: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECDF0u;
        goto label_1ecdf0;
    }
    ctx->pc = 0x1ECDE8u;
    SET_GPR_U32(ctx, 31, 0x1ECDF0u);
    ctx->pc = 0x1ECDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECDE8u;
    // 0x1ecdec: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A5A0u, 0x1ECDE8u, 0x1ECDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECDF0u;
label_1ecdf0:
    // 0x1ecdf0: 0xa260369a  sb          $zero, 0x369A($s3)
    ctx->pc = 0x1ecdf0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 13978), (uint8_t)GPR_U32(ctx, 0));
label_1ecdf4:
    // 0x1ecdf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ecdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ecdf8:
    // 0x1ecdf8: 0xa262369b  sb          $v0, 0x369B($s3)
    ctx->pc = 0x1ecdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 13979), (uint8_t)GPR_U32(ctx, 2));
label_1ecdfc:
    // 0x1ecdfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ecdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ece00:
    // 0x1ece00: 0xa262369c  sb          $v0, 0x369C($s3)
    ctx->pc = 0x1ece00u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 13980), (uint8_t)GPR_U32(ctx, 2));
label_1ece04:
    // 0x1ece04: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ece04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ece08:
    // 0x1ece08: 0xa262369d  sb          $v0, 0x369D($s3)
    ctx->pc = 0x1ece08u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 13981), (uint8_t)GPR_U32(ctx, 2));
label_1ece0c:
    // 0x1ece0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ece0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ece10:
    // 0x1ece10: 0xa262369e  sb          $v0, 0x369E($s3)
    ctx->pc = 0x1ece10u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 13982), (uint8_t)GPR_U32(ctx, 2));
label_1ece14:
    // 0x1ece14: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ece14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ece18:
    // 0x1ece18: 0xa262369f  sb          $v0, 0x369F($s3)
    ctx->pc = 0x1ece18u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 13983), (uint8_t)GPR_U32(ctx, 2));
label_1ece1c:
    // 0x1ece1c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ece1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ece20:
    // 0x1ece20: 0xa26236a0  sb          $v0, 0x36A0($s3)
    ctx->pc = 0x1ece20u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 13984), (uint8_t)GPR_U32(ctx, 2));
label_1ece24:
    // 0x1ece24: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ece24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1ece28:
    // 0x1ece28: 0xa26236a1  sb          $v0, 0x36A1($s3)
    ctx->pc = 0x1ece28u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 13985), (uint8_t)GPR_U32(ctx, 2));
label_1ece2c:
    // 0x1ece2c: 0x0  nop
    ctx->pc = 0x1ece2cu;
    // NOP
label_1ece30:
    // 0x1ece30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ece30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ece34:
    // 0x1ece34: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1ece34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ece38:
    // 0x1ece38: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_1ece3c:
    if (ctx->pc == 0x1ECE3Cu) {
        ctx->pc = 0x1ECE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE38u;
        // 0x1ece3c: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECE40u;
        goto label_1ece40;
    }
    ctx->pc = 0x1ECE38u;
    {
        const bool branch_taken_0x1ece38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE38u;
        // 0x1ece3c: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ece38) {
            ctx->pc = 0x1ECD84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecd84;
        }
    }
    ctx->pc = 0x1ECE40u;
label_1ece40:
    // 0x1ece40: 0xc05bfb0  jal         func_16FEC0
label_1ece44:
    if (ctx->pc == 0x1ECE44u) {
        ctx->pc = 0x1ECE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE40u;
        // 0x1ece44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECE48u;
        goto label_1ece48;
    }
    ctx->pc = 0x1ECE40u;
    SET_GPR_U32(ctx, 31, 0x1ECE48u);
    ctx->pc = 0x1ECE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECE40u;
    // 0x1ece44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FEC0u, 0x1ECE40u, 0x1ECE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECE48u;
label_1ece48:
    // 0x1ece48: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x1ece48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1ece4c:
    // 0x1ece4c: 0xc05af64  jal         func_16BD90
label_1ece50:
    if (ctx->pc == 0x1ECE50u) {
        ctx->pc = 0x1ECE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE4Cu;
        // 0x1ece50: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECE54u;
        goto label_1ece54;
    }
    ctx->pc = 0x1ECE4Cu;
    SET_GPR_U32(ctx, 31, 0x1ECE54u);
    ctx->pc = 0x1ECE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECE4Cu;
    // 0x1ece50: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD90u, 0x1ECE4Cu, 0x1ECE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECE54u;
label_1ece54:
    // 0x1ece54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ece54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ece58:
    // 0x1ece58: 0xaf808f44  sw          $zero, -0x70BC($gp)
    ctx->pc = 0x1ece58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938436), GPR_U32(ctx, 0));
label_1ece5c:
    // 0x1ece5c: 0xaf828f38  sw          $v0, -0x70C8($gp)
    ctx->pc = 0x1ece5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938424), GPR_U32(ctx, 2));
label_1ece60:
    // 0x1ece60: 0xc07c014  jal         func_1F0050
label_1ece64:
    if (ctx->pc == 0x1ECE64u) {
        ctx->pc = 0x1ECE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE60u;
        // 0x1ece64: 0xaf808f40  sw          $zero, -0x70C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECE68u;
        goto label_1ece68;
    }
    ctx->pc = 0x1ECE60u;
    SET_GPR_U32(ctx, 31, 0x1ECE68u);
    ctx->pc = 0x1ECE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECE60u;
    // 0x1ece64: 0xaf808f40  sw          $zero, -0x70C0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938432), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0050u;
    { ctx->pc = 0x1f0050; return; }
    ctx->pc = 0x1ECE68u;
label_1ece68:
    // 0x1ece68: 0xc07bf74  jal         func_1EFDD0
label_1ece6c:
    if (ctx->pc == 0x1ECE6Cu) {
        ctx->pc = 0x1ECE70u;
        goto label_1ece70;
    }
    ctx->pc = 0x1ECE68u;
    SET_GPR_U32(ctx, 31, 0x1ECE70u);
    ctx->pc = 0x1EFDD0u;
    { ctx->pc = 0x1efdd0; return; }
    ctx->pc = 0x1ECE70u;
label_1ece70:
    // 0x1ece70: 0xc07bde4  jal         func_1EF790
label_1ece74:
    if (ctx->pc == 0x1ECE74u) {
        ctx->pc = 0x1ECE78u;
        goto label_1ece78;
    }
    ctx->pc = 0x1ECE70u;
    SET_GPR_U32(ctx, 31, 0x1ECE78u);
    ctx->pc = 0x1EF790u;
    { ctx->pc = 0x1ef790; return; }
    ctx->pc = 0x1ECE78u;
label_1ece78:
    // 0x1ece78: 0xc07bd24  jal         func_1EF490
label_1ece7c:
    if (ctx->pc == 0x1ECE7Cu) {
        ctx->pc = 0x1ECE80u;
        goto label_1ece80;
    }
    ctx->pc = 0x1ECE78u;
    SET_GPR_U32(ctx, 31, 0x1ECE80u);
    ctx->pc = 0x1EF490u;
    { ctx->pc = 0x1ef490; return; }
    ctx->pc = 0x1ECE80u;
label_1ece80:
    // 0x1ece80: 0xc07b980  jal         func_1EE600
label_1ece84:
    if (ctx->pc == 0x1ECE84u) {
        ctx->pc = 0x1ECE88u;
        goto label_1ece88;
    }
    ctx->pc = 0x1ECE80u;
    SET_GPR_U32(ctx, 31, 0x1ECE88u);
    ctx->pc = 0x1EE600u;
    { ctx->pc = 0x1ee600; return; }
    ctx->pc = 0x1ECE88u;
label_1ece88:
    // 0x1ece88: 0xc07cb48  jal         func_1F2D20
label_1ece8c:
    if (ctx->pc == 0x1ECE8Cu) {
        ctx->pc = 0x1ECE90u;
        goto label_1ece90;
    }
    ctx->pc = 0x1ECE88u;
    SET_GPR_U32(ctx, 31, 0x1ECE90u);
    ctx->pc = 0x1F2D20u;
    { ctx->pc = 0x1f2d20; return; }
    ctx->pc = 0x1ECE90u;
label_1ece90:
    // 0x1ece90: 0xc07c674  jal         func_1F19D0
label_1ece94:
    if (ctx->pc == 0x1ECE94u) {
        ctx->pc = 0x1ECE98u;
        { ctx->pc = 0x1ece98; return; }
    }
    ctx->pc = 0x1ECE90u;
    SET_GPR_U32(ctx, 31, 0x1ECE98u);
    ctx->pc = 0x1F19D0u;
    { ctx->pc = 0x1f19d0; return; }
    ctx->pc = 0x1ECE98u;
    ctx->pc = 0x1ece98u;
    return;
}
