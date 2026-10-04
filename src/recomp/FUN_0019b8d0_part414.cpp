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


void FUN_0019b8d0_part414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x265360u: goto label_265360;
        case 0x265364u: goto label_265364;
        case 0x265368u: goto label_265368;
        case 0x26536cu: goto label_26536c;
        case 0x265370u: goto label_265370;
        case 0x265374u: goto label_265374;
        case 0x265378u: goto label_265378;
        case 0x26537cu: goto label_26537c;
        case 0x265380u: goto label_265380;
        case 0x265384u: goto label_265384;
        case 0x265388u: goto label_265388;
        case 0x26538cu: goto label_26538c;
        case 0x265390u: goto label_265390;
        case 0x265394u: goto label_265394;
        case 0x265398u: goto label_265398;
        case 0x26539cu: goto label_26539c;
        case 0x2653a0u: goto label_2653a0;
        case 0x2653a4u: goto label_2653a4;
        case 0x2653a8u: goto label_2653a8;
        case 0x2653acu: goto label_2653ac;
        case 0x2653b0u: goto label_2653b0;
        case 0x2653b4u: goto label_2653b4;
        case 0x2653b8u: goto label_2653b8;
        case 0x2653bcu: goto label_2653bc;
        case 0x2653c0u: goto label_2653c0;
        case 0x2653c4u: goto label_2653c4;
        case 0x2653c8u: goto label_2653c8;
        case 0x2653ccu: goto label_2653cc;
        case 0x2653d0u: goto label_2653d0;
        case 0x2653d4u: goto label_2653d4;
        case 0x2653d8u: goto label_2653d8;
        case 0x2653dcu: goto label_2653dc;
        case 0x2653e0u: goto label_2653e0;
        case 0x2653e4u: goto label_2653e4;
        case 0x2653e8u: goto label_2653e8;
        case 0x2653ecu: goto label_2653ec;
        case 0x2653f0u: goto label_2653f0;
        case 0x2653f4u: goto label_2653f4;
        case 0x2653f8u: goto label_2653f8;
        case 0x2653fcu: goto label_2653fc;
        case 0x265400u: goto label_265400;
        case 0x265404u: goto label_265404;
        case 0x265408u: goto label_265408;
        case 0x26540cu: goto label_26540c;
        case 0x265410u: goto label_265410;
        case 0x265414u: goto label_265414;
        case 0x265418u: goto label_265418;
        case 0x26541cu: goto label_26541c;
        case 0x265420u: goto label_265420;
        case 0x265424u: goto label_265424;
        case 0x265428u: goto label_265428;
        case 0x26542cu: goto label_26542c;
        case 0x265430u: goto label_265430;
        case 0x265434u: goto label_265434;
        case 0x265438u: goto label_265438;
        case 0x26543cu: goto label_26543c;
        case 0x265440u: goto label_265440;
        case 0x265444u: goto label_265444;
        case 0x265448u: goto label_265448;
        case 0x26544cu: goto label_26544c;
        case 0x265450u: goto label_265450;
        case 0x265454u: goto label_265454;
        case 0x265458u: goto label_265458;
        case 0x26545cu: goto label_26545c;
        case 0x265460u: goto label_265460;
        case 0x265464u: goto label_265464;
        case 0x265468u: goto label_265468;
        case 0x26546cu: goto label_26546c;
        case 0x265470u: goto label_265470;
        case 0x265474u: goto label_265474;
        case 0x265478u: goto label_265478;
        case 0x26547cu: goto label_26547c;
        case 0x265480u: goto label_265480;
        case 0x265484u: goto label_265484;
        case 0x265488u: goto label_265488;
        case 0x26548cu: goto label_26548c;
        case 0x265490u: goto label_265490;
        case 0x265494u: goto label_265494;
        case 0x265498u: goto label_265498;
        case 0x26549cu: goto label_26549c;
        case 0x2654a0u: goto label_2654a0;
        case 0x2654a4u: goto label_2654a4;
        case 0x2654a8u: goto label_2654a8;
        case 0x2654acu: goto label_2654ac;
        case 0x2654b0u: goto label_2654b0;
        case 0x2654b4u: goto label_2654b4;
        case 0x2654b8u: goto label_2654b8;
        case 0x2654bcu: goto label_2654bc;
        case 0x2654c0u: goto label_2654c0;
        case 0x2654c4u: goto label_2654c4;
        case 0x2654c8u: goto label_2654c8;
        case 0x2654ccu: goto label_2654cc;
        case 0x2654d0u: goto label_2654d0;
        case 0x2654d4u: goto label_2654d4;
        case 0x2654d8u: goto label_2654d8;
        case 0x2654dcu: goto label_2654dc;
        case 0x2654e0u: goto label_2654e0;
        case 0x2654e4u: goto label_2654e4;
        case 0x2654e8u: goto label_2654e8;
        case 0x2654ecu: goto label_2654ec;
        case 0x2654f0u: goto label_2654f0;
        case 0x2654f4u: goto label_2654f4;
        case 0x2654f8u: goto label_2654f8;
        case 0x2654fcu: goto label_2654fc;
        case 0x265500u: goto label_265500;
        case 0x265504u: goto label_265504;
        case 0x265508u: goto label_265508;
        case 0x26550cu: goto label_26550c;
        case 0x265510u: goto label_265510;
        case 0x265514u: goto label_265514;
        case 0x265518u: goto label_265518;
        case 0x26551cu: goto label_26551c;
        case 0x265520u: goto label_265520;
        case 0x265524u: goto label_265524;
        case 0x265528u: goto label_265528;
        case 0x26552cu: goto label_26552c;
        case 0x265530u: goto label_265530;
        case 0x265534u: goto label_265534;
        case 0x265538u: goto label_265538;
        case 0x26553cu: goto label_26553c;
        case 0x265540u: goto label_265540;
        case 0x265544u: goto label_265544;
        case 0x265548u: goto label_265548;
        case 0x26554cu: goto label_26554c;
        case 0x265550u: goto label_265550;
        case 0x265554u: goto label_265554;
        case 0x265558u: goto label_265558;
        case 0x26555cu: goto label_26555c;
        case 0x265560u: goto label_265560;
        case 0x265564u: goto label_265564;
        case 0x265568u: goto label_265568;
        case 0x26556cu: goto label_26556c;
        case 0x265570u: goto label_265570;
        case 0x265574u: goto label_265574;
        case 0x265578u: goto label_265578;
        case 0x26557cu: goto label_26557c;
        case 0x265580u: goto label_265580;
        case 0x265584u: goto label_265584;
        case 0x265588u: goto label_265588;
        case 0x26558cu: goto label_26558c;
        case 0x265590u: goto label_265590;
        case 0x265594u: goto label_265594;
        case 0x265598u: goto label_265598;
        case 0x26559cu: goto label_26559c;
        case 0x2655a0u: goto label_2655a0;
        case 0x2655a4u: goto label_2655a4;
        case 0x2655a8u: goto label_2655a8;
        case 0x2655acu: goto label_2655ac;
        case 0x2655b0u: goto label_2655b0;
        case 0x2655b4u: goto label_2655b4;
        case 0x2655b8u: goto label_2655b8;
        case 0x2655bcu: goto label_2655bc;
        case 0x2655c0u: goto label_2655c0;
        case 0x2655c4u: goto label_2655c4;
        case 0x2655c8u: goto label_2655c8;
        case 0x2655ccu: goto label_2655cc;
        case 0x2655d0u: goto label_2655d0;
        case 0x2655d4u: goto label_2655d4;
        case 0x2655d8u: goto label_2655d8;
        case 0x2655dcu: goto label_2655dc;
        case 0x2655e0u: goto label_2655e0;
        case 0x2655e4u: goto label_2655e4;
        case 0x2655e8u: goto label_2655e8;
        case 0x2655ecu: goto label_2655ec;
        case 0x2655f0u: goto label_2655f0;
        case 0x2655f4u: goto label_2655f4;
        case 0x2655f8u: goto label_2655f8;
        case 0x2655fcu: goto label_2655fc;
        case 0x265600u: goto label_265600;
        case 0x265604u: goto label_265604;
        case 0x265608u: goto label_265608;
        case 0x26560cu: goto label_26560c;
        case 0x265610u: goto label_265610;
        case 0x265614u: goto label_265614;
        case 0x265618u: goto label_265618;
        case 0x26561cu: goto label_26561c;
        case 0x265620u: goto label_265620;
        case 0x265624u: goto label_265624;
        case 0x265628u: goto label_265628;
        case 0x26562cu: goto label_26562c;
        case 0x265630u: goto label_265630;
        case 0x265634u: goto label_265634;
        case 0x265638u: goto label_265638;
        case 0x26563cu: goto label_26563c;
        case 0x265640u: goto label_265640;
        case 0x265644u: goto label_265644;
        case 0x265648u: goto label_265648;
        case 0x26564cu: goto label_26564c;
        case 0x265650u: goto label_265650;
        case 0x265654u: goto label_265654;
        case 0x265658u: goto label_265658;
        case 0x26565cu: goto label_26565c;
        case 0x265660u: goto label_265660;
        case 0x265664u: goto label_265664;
        case 0x265668u: goto label_265668;
        case 0x26566cu: goto label_26566c;
        case 0x265670u: goto label_265670;
        case 0x265674u: goto label_265674;
        case 0x265678u: goto label_265678;
        case 0x26567cu: goto label_26567c;
        case 0x265680u: goto label_265680;
        case 0x265684u: goto label_265684;
        case 0x265688u: goto label_265688;
        case 0x26568cu: goto label_26568c;
        case 0x265690u: goto label_265690;
        case 0x265694u: goto label_265694;
        case 0x265698u: goto label_265698;
        case 0x26569cu: goto label_26569c;
        case 0x2656a0u: goto label_2656a0;
        case 0x2656a4u: goto label_2656a4;
        case 0x2656a8u: goto label_2656a8;
        case 0x2656acu: goto label_2656ac;
        case 0x2656b0u: goto label_2656b0;
        case 0x2656b4u: goto label_2656b4;
        case 0x2656b8u: goto label_2656b8;
        case 0x2656bcu: goto label_2656bc;
        case 0x2656c0u: goto label_2656c0;
        case 0x2656c4u: goto label_2656c4;
        case 0x2656c8u: goto label_2656c8;
        case 0x2656ccu: goto label_2656cc;
        case 0x2656d0u: goto label_2656d0;
        case 0x2656d4u: goto label_2656d4;
        case 0x2656d8u: goto label_2656d8;
        case 0x2656dcu: goto label_2656dc;
        case 0x2656e0u: goto label_2656e0;
        case 0x2656e4u: goto label_2656e4;
        case 0x2656e8u: goto label_2656e8;
        case 0x2656ecu: goto label_2656ec;
        case 0x2656f0u: goto label_2656f0;
        case 0x2656f4u: goto label_2656f4;
        case 0x2656f8u: goto label_2656f8;
        case 0x2656fcu: goto label_2656fc;
        case 0x265700u: goto label_265700;
        case 0x265704u: goto label_265704;
        case 0x265708u: goto label_265708;
        case 0x26570cu: goto label_26570c;
        case 0x265710u: goto label_265710;
        case 0x265714u: goto label_265714;
        case 0x265718u: goto label_265718;
        case 0x26571cu: goto label_26571c;
        case 0x265720u: goto label_265720;
        case 0x265724u: goto label_265724;
        case 0x265728u: goto label_265728;
        case 0x26572cu: goto label_26572c;
        case 0x265730u: goto label_265730;
        case 0x265734u: goto label_265734;
        case 0x265738u: goto label_265738;
        case 0x26573cu: goto label_26573c;
        case 0x265740u: goto label_265740;
        case 0x265744u: goto label_265744;
        case 0x265748u: goto label_265748;
        case 0x26574cu: goto label_26574c;
        case 0x265750u: goto label_265750;
        case 0x265754u: goto label_265754;
        case 0x265758u: goto label_265758;
        case 0x26575cu: goto label_26575c;
        case 0x265760u: goto label_265760;
        case 0x265764u: goto label_265764;
        case 0x265768u: goto label_265768;
        case 0x26576cu: goto label_26576c;
        case 0x265770u: goto label_265770;
        case 0x265774u: goto label_265774;
        case 0x265778u: goto label_265778;
        case 0x26577cu: goto label_26577c;
        case 0x265780u: goto label_265780;
        case 0x265784u: goto label_265784;
        case 0x265788u: goto label_265788;
        case 0x26578cu: goto label_26578c;
        case 0x265790u: goto label_265790;
        case 0x265794u: goto label_265794;
        case 0x265798u: goto label_265798;
        case 0x26579cu: goto label_26579c;
        case 0x2657a0u: goto label_2657a0;
        case 0x2657a4u: goto label_2657a4;
        case 0x2657a8u: goto label_2657a8;
        case 0x2657acu: goto label_2657ac;
        case 0x2657b0u: goto label_2657b0;
        case 0x2657b4u: goto label_2657b4;
        case 0x2657b8u: goto label_2657b8;
        case 0x2657bcu: goto label_2657bc;
        case 0x2657c0u: goto label_2657c0;
        case 0x2657c4u: goto label_2657c4;
        case 0x2657c8u: goto label_2657c8;
        case 0x2657ccu: goto label_2657cc;
        case 0x2657d0u: goto label_2657d0;
        case 0x2657d4u: goto label_2657d4;
        case 0x2657d8u: goto label_2657d8;
        case 0x2657dcu: goto label_2657dc;
        case 0x2657e0u: goto label_2657e0;
        case 0x2657e4u: goto label_2657e4;
        case 0x2657e8u: goto label_2657e8;
        case 0x2657ecu: goto label_2657ec;
        case 0x2657f0u: goto label_2657f0;
        case 0x2657f4u: goto label_2657f4;
        case 0x2657f8u: goto label_2657f8;
        case 0x2657fcu: goto label_2657fc;
        case 0x265800u: goto label_265800;
        case 0x265804u: goto label_265804;
        case 0x265808u: goto label_265808;
        case 0x26580cu: goto label_26580c;
        case 0x265810u: goto label_265810;
        case 0x265814u: goto label_265814;
        case 0x265818u: goto label_265818;
        case 0x26581cu: goto label_26581c;
        case 0x265820u: goto label_265820;
        case 0x265824u: goto label_265824;
        case 0x265828u: goto label_265828;
        case 0x26582cu: goto label_26582c;
        case 0x265830u: goto label_265830;
        case 0x265834u: goto label_265834;
        case 0x265838u: goto label_265838;
        case 0x26583cu: goto label_26583c;
        case 0x265840u: goto label_265840;
        case 0x265844u: goto label_265844;
        case 0x265848u: goto label_265848;
        case 0x26584cu: goto label_26584c;
        case 0x265850u: goto label_265850;
        case 0x265854u: goto label_265854;
        case 0x265858u: goto label_265858;
        case 0x26585cu: goto label_26585c;
        case 0x265860u: goto label_265860;
        case 0x265864u: goto label_265864;
        case 0x265868u: goto label_265868;
        case 0x26586cu: goto label_26586c;
        case 0x265870u: goto label_265870;
        case 0x265874u: goto label_265874;
        case 0x265878u: goto label_265878;
        case 0x26587cu: goto label_26587c;
        case 0x265880u: goto label_265880;
        case 0x265884u: goto label_265884;
        case 0x265888u: goto label_265888;
        case 0x26588cu: goto label_26588c;
        case 0x265890u: goto label_265890;
        case 0x265894u: goto label_265894;
        case 0x265898u: goto label_265898;
        case 0x26589cu: goto label_26589c;
        case 0x2658a0u: goto label_2658a0;
        case 0x2658a4u: goto label_2658a4;
        case 0x2658a8u: goto label_2658a8;
        case 0x2658acu: goto label_2658ac;
        case 0x2658b0u: goto label_2658b0;
        case 0x2658b4u: goto label_2658b4;
        case 0x2658b8u: goto label_2658b8;
        case 0x2658bcu: goto label_2658bc;
        case 0x2658c0u: goto label_2658c0;
        case 0x2658c4u: goto label_2658c4;
        case 0x2658c8u: goto label_2658c8;
        case 0x2658ccu: goto label_2658cc;
        case 0x2658d0u: goto label_2658d0;
        case 0x2658d4u: goto label_2658d4;
        case 0x2658d8u: goto label_2658d8;
        case 0x2658dcu: goto label_2658dc;
        case 0x2658e0u: goto label_2658e0;
        case 0x2658e4u: goto label_2658e4;
        case 0x2658e8u: goto label_2658e8;
        case 0x2658ecu: goto label_2658ec;
        case 0x2658f0u: goto label_2658f0;
        case 0x2658f4u: goto label_2658f4;
        case 0x2658f8u: goto label_2658f8;
        case 0x2658fcu: goto label_2658fc;
        case 0x265900u: goto label_265900;
        case 0x265904u: goto label_265904;
        case 0x265908u: goto label_265908;
        case 0x26590cu: goto label_26590c;
        case 0x265910u: goto label_265910;
        case 0x265914u: goto label_265914;
        case 0x265918u: goto label_265918;
        case 0x26591cu: goto label_26591c;
        case 0x265920u: goto label_265920;
        case 0x265924u: goto label_265924;
        case 0x265928u: goto label_265928;
        case 0x26592cu: goto label_26592c;
        case 0x265930u: goto label_265930;
        case 0x265934u: goto label_265934;
        case 0x265938u: goto label_265938;
        case 0x26593cu: goto label_26593c;
        case 0x265940u: goto label_265940;
        case 0x265944u: goto label_265944;
        case 0x265948u: goto label_265948;
        case 0x26594cu: goto label_26594c;
        case 0x265950u: goto label_265950;
        case 0x265954u: goto label_265954;
        case 0x265958u: goto label_265958;
        case 0x26595cu: goto label_26595c;
        case 0x265960u: goto label_265960;
        case 0x265964u: goto label_265964;
        case 0x265968u: goto label_265968;
        case 0x26596cu: goto label_26596c;
        case 0x265970u: goto label_265970;
        case 0x265974u: goto label_265974;
        case 0x265978u: goto label_265978;
        case 0x26597cu: goto label_26597c;
        case 0x265980u: goto label_265980;
        case 0x265984u: goto label_265984;
        case 0x265988u: goto label_265988;
        case 0x26598cu: goto label_26598c;
        case 0x265990u: goto label_265990;
        case 0x265994u: goto label_265994;
        case 0x265998u: goto label_265998;
        case 0x26599cu: goto label_26599c;
        case 0x2659a0u: goto label_2659a0;
        case 0x2659a4u: goto label_2659a4;
        case 0x2659a8u: goto label_2659a8;
        case 0x2659acu: goto label_2659ac;
        case 0x2659b0u: goto label_2659b0;
        case 0x2659b4u: goto label_2659b4;
        case 0x2659b8u: goto label_2659b8;
        case 0x2659bcu: goto label_2659bc;
        case 0x2659c0u: goto label_2659c0;
        case 0x2659c4u: goto label_2659c4;
        case 0x2659c8u: goto label_2659c8;
        case 0x2659ccu: goto label_2659cc;
        case 0x2659d0u: goto label_2659d0;
        case 0x2659d4u: goto label_2659d4;
        case 0x2659d8u: goto label_2659d8;
        case 0x2659dcu: goto label_2659dc;
        case 0x2659e0u: goto label_2659e0;
        case 0x2659e4u: goto label_2659e4;
        case 0x2659e8u: goto label_2659e8;
        case 0x2659ecu: goto label_2659ec;
        case 0x2659f0u: goto label_2659f0;
        case 0x2659f4u: goto label_2659f4;
        case 0x2659f8u: goto label_2659f8;
        case 0x2659fcu: goto label_2659fc;
        case 0x265a00u: goto label_265a00;
        case 0x265a04u: goto label_265a04;
        case 0x265a08u: goto label_265a08;
        case 0x265a0cu: goto label_265a0c;
        case 0x265a10u: goto label_265a10;
        case 0x265a14u: goto label_265a14;
        case 0x265a18u: goto label_265a18;
        case 0x265a1cu: goto label_265a1c;
        case 0x265a20u: goto label_265a20;
        case 0x265a24u: goto label_265a24;
        case 0x265a28u: goto label_265a28;
        case 0x265a2cu: goto label_265a2c;
        case 0x265a30u: goto label_265a30;
        case 0x265a34u: goto label_265a34;
        case 0x265a38u: goto label_265a38;
        case 0x265a3cu: goto label_265a3c;
        case 0x265a40u: goto label_265a40;
        case 0x265a44u: goto label_265a44;
        case 0x265a48u: goto label_265a48;
        case 0x265a4cu: goto label_265a4c;
        case 0x265a50u: goto label_265a50;
        case 0x265a54u: goto label_265a54;
        case 0x265a58u: goto label_265a58;
        case 0x265a5cu: goto label_265a5c;
        case 0x265a60u: goto label_265a60;
        case 0x265a64u: goto label_265a64;
        case 0x265a68u: goto label_265a68;
        case 0x265a6cu: goto label_265a6c;
        case 0x265a70u: goto label_265a70;
        case 0x265a74u: goto label_265a74;
        case 0x265a78u: goto label_265a78;
        case 0x265a7cu: goto label_265a7c;
        case 0x265a80u: goto label_265a80;
        case 0x265a84u: goto label_265a84;
        case 0x265a88u: goto label_265a88;
        case 0x265a8cu: goto label_265a8c;
        case 0x265a90u: goto label_265a90;
        case 0x265a94u: goto label_265a94;
        case 0x265a98u: goto label_265a98;
        case 0x265a9cu: goto label_265a9c;
        case 0x265aa0u: goto label_265aa0;
        case 0x265aa4u: goto label_265aa4;
        case 0x265aa8u: goto label_265aa8;
        case 0x265aacu: goto label_265aac;
        case 0x265ab0u: goto label_265ab0;
        case 0x265ab4u: goto label_265ab4;
        case 0x265ab8u: goto label_265ab8;
        case 0x265abcu: goto label_265abc;
        case 0x265ac0u: goto label_265ac0;
        case 0x265ac4u: goto label_265ac4;
        case 0x265ac8u: goto label_265ac8;
        case 0x265accu: goto label_265acc;
        case 0x265ad0u: goto label_265ad0;
        case 0x265ad4u: goto label_265ad4;
        case 0x265ad8u: goto label_265ad8;
        case 0x265adcu: goto label_265adc;
        case 0x265ae0u: goto label_265ae0;
        case 0x265ae4u: goto label_265ae4;
        case 0x265ae8u: goto label_265ae8;
        case 0x265aecu: goto label_265aec;
        case 0x265af0u: goto label_265af0;
        case 0x265af4u: goto label_265af4;
        case 0x265af8u: goto label_265af8;
        case 0x265afcu: goto label_265afc;
        case 0x265b00u: goto label_265b00;
        case 0x265b04u: goto label_265b04;
        case 0x265b08u: goto label_265b08;
        case 0x265b0cu: goto label_265b0c;
        case 0x265b10u: goto label_265b10;
        case 0x265b14u: goto label_265b14;
        case 0x265b18u: goto label_265b18;
        case 0x265b1cu: goto label_265b1c;
        case 0x265b20u: goto label_265b20;
        case 0x265b24u: goto label_265b24;
        case 0x265b28u: goto label_265b28;
        case 0x265b2cu: goto label_265b2c;
        default: return;
    }

label_265360:
    // 0x265360: 0xfa11  .word       0x0000FA11                   # mthi        $zero # 0000FA00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265360u;
    ctx->hi = GPR_U64(ctx, 0);
label_265364:
    // 0x265364: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x265364u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_265368:
    // 0x265368: 0x0  nop
    ctx->pc = 0x265368u;
    // NOP
label_26536c:
    // 0x26536c: 0x0  nop
    ctx->pc = 0x26536cu;
    // NOP
label_265370:
    // 0x265370: 0xfa1f  .word       0x0000FA1F                   # ddivu       $ra, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265370u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x265370 raw=0x0000FA1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265374:
    // 0x265374: 0x6080  sll         $t4, $zero, 2
    ctx->pc = 0x265374u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_265378:
    // 0x265378: 0x0  nop
    ctx->pc = 0x265378u;
    // NOP
label_26537c:
    // 0x26537c: 0x0  nop
    ctx->pc = 0x26537cu;
    // NOP
label_265380:
    // 0x265380: 0xfa2c  .word       0x0000FA2C                   # dadd        $ra, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265380u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_265384:
    // 0x265384: 0x3310  .word       0x00003310                   # mfhi        $a2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265384u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_265388:
    // 0x265388: 0x0  nop
    ctx->pc = 0x265388u;
    // NOP
label_26538c:
    // 0x26538c: 0x0  nop
    ctx->pc = 0x26538cu;
    // NOP
label_265390:
    // 0x265390: 0xfa33  tltu        $zero, $zero, 1000
    ctx->pc = 0x265390u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265394:
    // 0x265394: 0x5a90  .word       0x00005A90                   # mfhi        $t3 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265394u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_265398:
    // 0x265398: 0x0  nop
    ctx->pc = 0x265398u;
    // NOP
label_26539c:
    // 0x26539c: 0x0  nop
    ctx->pc = 0x26539cu;
    // NOP
label_2653a0:
    // 0x2653a0: 0xfa3f  dsra32      $ra, $zero, 8
    ctx->pc = 0x2653a0u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (32 + 8));
label_2653a4:
    // 0x2653a4: 0x55b0  tge         $zero, $zero, 342
    ctx->pc = 0x2653a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2653a8:
    // 0x2653a8: 0x0  nop
    ctx->pc = 0x2653a8u;
    // NOP
label_2653ac:
    // 0x2653ac: 0x0  nop
    ctx->pc = 0x2653acu;
    // NOP
label_2653b0:
    // 0x2653b0: 0xfa4a  .word       0x0000FA4A                   # movz        $ra, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2653b0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 0));
label_2653b4:
    // 0x2653b4: 0x6840  sll         $t5, $zero, 1
    ctx->pc = 0x2653b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2653b8:
    // 0x2653b8: 0x0  nop
    ctx->pc = 0x2653b8u;
    // NOP
label_2653bc:
    // 0x2653bc: 0x0  nop
    ctx->pc = 0x2653bcu;
    // NOP
label_2653c0:
    // 0x2653c0: 0xfa58  .word       0x0000FA58                   # mult        $ra, $zero, $zero # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2653c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2653c4:
    // 0x2653c4: 0x7fb0  tge         $zero, $zero, 510
    ctx->pc = 0x2653c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2653c8:
    // 0x2653c8: 0x0  nop
    ctx->pc = 0x2653c8u;
    // NOP
label_2653cc:
    // 0x2653cc: 0x0  nop
    ctx->pc = 0x2653ccu;
    // NOP
label_2653d0:
    // 0x2653d0: 0xfa68  .word       0x0000FA68                   # mfsa        $ra # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2653d0u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2653d4:
    // 0x2653d4: 0xbde0  .word       0x0000BDE0                   # add         $s7, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2653d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_2653d8:
    // 0x2653d8: 0x0  nop
    ctx->pc = 0x2653d8u;
    // NOP
label_2653dc:
    // 0x2653dc: 0x0  nop
    ctx->pc = 0x2653dcu;
    // NOP
label_2653e0:
    // 0x2653e0: 0xfa80  sll         $ra, $zero, 10
    ctx->pc = 0x2653e0u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2653e4:
    // 0x2653e4: 0xa9b0  tge         $zero, $zero, 678
    ctx->pc = 0x2653e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2653e8:
    // 0x2653e8: 0x0  nop
    ctx->pc = 0x2653e8u;
    // NOP
label_2653ec:
    // 0x2653ec: 0x0  nop
    ctx->pc = 0x2653ecu;
    // NOP
label_2653f0:
    // 0x2653f0: 0xfa96  .word       0x0000FA96                   # dsrlv       $ra, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2653f0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2653f4:
    // 0x2653f4: 0x5bf0  tge         $zero, $zero, 367
    ctx->pc = 0x2653f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2653f8:
    // 0x2653f8: 0x0  nop
    ctx->pc = 0x2653f8u;
    // NOP
label_2653fc:
    // 0x2653fc: 0x0  nop
    ctx->pc = 0x2653fcu;
    // NOP
label_265400:
    // 0x265400: 0xfaa2  .word       0x0000FAA2                   # neg         $ra, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265400u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_265404:
    // 0x265404: 0x9580  sll         $s2, $zero, 22
    ctx->pc = 0x265404u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_265408:
    // 0x265408: 0x0  nop
    ctx->pc = 0x265408u;
    // NOP
label_26540c:
    // 0x26540c: 0x0  nop
    ctx->pc = 0x26540cu;
    // NOP
label_265410:
    // 0x265410: 0xfab5  .word       0x0000FAB5                   # INVALID     $zero, $zero, -0x54B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x265410 raw=0x0000FAB5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265414:
    // 0x265414: 0x7e80  sll         $t7, $zero, 26
    ctx->pc = 0x265414u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_265418:
    // 0x265418: 0x0  nop
    ctx->pc = 0x265418u;
    // NOP
label_26541c:
    // 0x26541c: 0x0  nop
    ctx->pc = 0x26541cu;
    // NOP
label_265420:
    // 0x265420: 0xfac5  .word       0x0000FAC5                   # INVALID     $zero, $zero, -0x53B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265420u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x265420 raw=0x0000FAC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265424:
    // 0x265424: 0x9790  .word       0x00009790                   # mfhi        $s2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265424u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_265428:
    // 0x265428: 0x0  nop
    ctx->pc = 0x265428u;
    // NOP
label_26542c:
    // 0x26542c: 0x0  nop
    ctx->pc = 0x26542cu;
    // NOP
label_265430:
    // 0x265430: 0xfad8  .word       0x0000FAD8                   # mult        $ra, $zero, $zero # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x265430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_265434:
    // 0x265434: 0x6210  .word       0x00006210                   # mfhi        $t4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265434u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_265438:
    // 0x265438: 0x0  nop
    ctx->pc = 0x265438u;
    // NOP
label_26543c:
    // 0x26543c: 0x0  nop
    ctx->pc = 0x26543cu;
    // NOP
label_265440:
    // 0x265440: 0xfae5  .word       0x0000FAE5                   # move        $ra, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265440u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_265444:
    // 0x265444: 0x4d80  sll         $t1, $zero, 22
    ctx->pc = 0x265444u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_265448:
    // 0x265448: 0x0  nop
    ctx->pc = 0x265448u;
    // NOP
label_26544c:
    // 0x26544c: 0x0  nop
    ctx->pc = 0x26544cu;
    // NOP
label_265450:
    // 0x265450: 0xfaef  .word       0x0000FAEF                   # dsubu       $ra, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265450u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_265454:
    // 0x265454: 0xa590  .word       0x0000A590                   # mfhi        $s4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265454u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_265458:
    // 0x265458: 0x0  nop
    ctx->pc = 0x265458u;
    // NOP
label_26545c:
    // 0x26545c: 0x0  nop
    ctx->pc = 0x26545cu;
    // NOP
label_265460:
    // 0x265460: 0xfb04  .word       0x0000FB04                   # sllv        $ra, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265460u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_265464:
    // 0x265464: 0x9cf0  tge         $zero, $zero, 627
    ctx->pc = 0x265464u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265468:
    // 0x265468: 0x0  nop
    ctx->pc = 0x265468u;
    // NOP
label_26546c:
    // 0x26546c: 0x0  nop
    ctx->pc = 0x26546cu;
    // NOP
label_265470:
    // 0x265470: 0xfb18  .word       0x0000FB18                   # mult        $ra, $zero, $zero # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x265470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_265474:
    // 0x265474: 0x6e00  sll         $t5, $zero, 24
    ctx->pc = 0x265474u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_265478:
    // 0x265478: 0x0  nop
    ctx->pc = 0x265478u;
    // NOP
label_26547c:
    // 0x26547c: 0x0  nop
    ctx->pc = 0x26547cu;
    // NOP
label_265480:
    // 0x265480: 0xfb26  .word       0x0000FB26                   # xor         $ra, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265480u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_265484:
    // 0x265484: 0x54f0  tge         $zero, $zero, 339
    ctx->pc = 0x265484u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265488:
    // 0x265488: 0x0  nop
    ctx->pc = 0x265488u;
    // NOP
label_26548c:
    // 0x26548c: 0x0  nop
    ctx->pc = 0x26548cu;
    // NOP
label_265490:
    // 0x265490: 0xfb31  tgeu        $zero, $zero, 1004
    ctx->pc = 0x265490u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265494:
    // 0x265494: 0x7150  .word       0x00007150                   # mfhi        $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265494u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_265498:
    // 0x265498: 0x0  nop
    ctx->pc = 0x265498u;
    // NOP
label_26549c:
    // 0x26549c: 0x0  nop
    ctx->pc = 0x26549cu;
    // NOP
label_2654a0:
    // 0x2654a0: 0xfb40  sll         $ra, $zero, 13
    ctx->pc = 0x2654a0u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_2654a4:
    // 0x2654a4: 0x6140  sll         $t4, $zero, 5
    ctx->pc = 0x2654a4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2654a8:
    // 0x2654a8: 0x0  nop
    ctx->pc = 0x2654a8u;
    // NOP
label_2654ac:
    // 0x2654ac: 0x0  nop
    ctx->pc = 0x2654acu;
    // NOP
label_2654b0:
    // 0x2654b0: 0xfb4d  break       0, 1005
    ctx->pc = 0x2654b0u;
    runtime->handleBreak(rdram, ctx);
label_2654b4:
    // 0x2654b4: 0x4200  sll         $t0, $zero, 8
    ctx->pc = 0x2654b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_2654b8:
    // 0x2654b8: 0x0  nop
    ctx->pc = 0x2654b8u;
    // NOP
label_2654bc:
    // 0x2654bc: 0x0  nop
    ctx->pc = 0x2654bcu;
    // NOP
label_2654c0:
    // 0x2654c0: 0xfb56  .word       0x0000FB56                   # dsrlv       $ra, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2654c0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2654c4:
    // 0x2654c4: 0x5e00  sll         $t3, $zero, 24
    ctx->pc = 0x2654c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_2654c8:
    // 0x2654c8: 0x0  nop
    ctx->pc = 0x2654c8u;
    // NOP
label_2654cc:
    // 0x2654cc: 0x0  nop
    ctx->pc = 0x2654ccu;
    // NOP
label_2654d0:
    // 0x2654d0: 0xfb62  .word       0x0000FB62                   # neg         $ra, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2654d0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_2654d4:
    // 0x2654d4: 0xad60  .word       0x0000AD60                   # add         $s5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2654d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2654d8:
    // 0x2654d8: 0x0  nop
    ctx->pc = 0x2654d8u;
    // NOP
label_2654dc:
    // 0x2654dc: 0x0  nop
    ctx->pc = 0x2654dcu;
    // NOP
label_2654e0:
    // 0x2654e0: 0xfb78  dsll        $ra, $zero, 13
    ctx->pc = 0x2654e0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << 13);
label_2654e4:
    // 0x2654e4: 0x6070  tge         $zero, $zero, 385
    ctx->pc = 0x2654e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2654e8:
    // 0x2654e8: 0x0  nop
    ctx->pc = 0x2654e8u;
    // NOP
label_2654ec:
    // 0x2654ec: 0x0  nop
    ctx->pc = 0x2654ecu;
    // NOP
label_2654f0:
    // 0x2654f0: 0xfb85  .word       0x0000FB85                   # INVALID     $zero, $zero, -0x47B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2654f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2654F0 raw=0x0000FB85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2654f4:
    // 0x2654f4: 0x62c0  sll         $t4, $zero, 11
    ctx->pc = 0x2654f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2654f8:
    // 0x2654f8: 0x0  nop
    ctx->pc = 0x2654f8u;
    // NOP
label_2654fc:
    // 0x2654fc: 0x0  nop
    ctx->pc = 0x2654fcu;
    // NOP
label_265500:
    // 0x265500: 0xfb92  .word       0x0000FB92                   # mflo        $ra # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265500u;
    SET_GPR_U64(ctx, 31, ctx->lo);
label_265504:
    // 0x265504: 0x64c0  sll         $t4, $zero, 19
    ctx->pc = 0x265504u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_265508:
    // 0x265508: 0x0  nop
    ctx->pc = 0x265508u;
    // NOP
label_26550c:
    // 0x26550c: 0x0  nop
    ctx->pc = 0x26550cu;
    // NOP
label_265510:
    // 0x265510: 0xfb9f  .word       0x0000FB9F                   # ddivu       $ra, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x265510 raw=0x0000FB9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265514:
    // 0x265514: 0xc590  .word       0x0000C590                   # mfhi        $t8 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265514u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_265518:
    // 0x265518: 0x0  nop
    ctx->pc = 0x265518u;
    // NOP
label_26551c:
    // 0x26551c: 0x0  nop
    ctx->pc = 0x26551cu;
    // NOP
label_265520:
    // 0x265520: 0xfbb8  dsll        $ra, $zero, 14
    ctx->pc = 0x265520u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << 14);
label_265524:
    // 0x265524: 0x6f50  .word       0x00006F50                   # mfhi        $t5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265524u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_265528:
    // 0x265528: 0x0  nop
    ctx->pc = 0x265528u;
    // NOP
label_26552c:
    // 0x26552c: 0x0  nop
    ctx->pc = 0x26552cu;
    // NOP
label_265530:
    // 0x265530: 0xfbc6  .word       0x0000FBC6                   # srlv        $ra, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265530u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_265534:
    // 0x265534: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265534u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_265538:
    // 0x265538: 0x0  nop
    ctx->pc = 0x265538u;
    // NOP
label_26553c:
    // 0x26553c: 0x0  nop
    ctx->pc = 0x26553cu;
    // NOP
label_265540:
    // 0x265540: 0xfbd5  .word       0x0000FBD5                   # INVALID     $zero, $zero, -0x42B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265540u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x265540 raw=0x0000FBD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265544:
    // 0x265544: 0x5900  sll         $t3, $zero, 4
    ctx->pc = 0x265544u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_265548:
    // 0x265548: 0x0  nop
    ctx->pc = 0x265548u;
    // NOP
label_26554c:
    // 0x26554c: 0x0  nop
    ctx->pc = 0x26554cu;
    // NOP
label_265550:
    // 0x265550: 0xfbe1  .word       0x0000FBE1                   # addu        $ra, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265550u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_265554:
    // 0x265554: 0x4be0  .word       0x00004BE0                   # add         $t1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265554u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_265558:
    // 0x265558: 0x0  nop
    ctx->pc = 0x265558u;
    // NOP
label_26555c:
    // 0x26555c: 0x0  nop
    ctx->pc = 0x26555cu;
    // NOP
label_265560:
    // 0x265560: 0xfbeb  .word       0x0000FBEB                   # sltu        $ra, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265560u;
    SET_GPR_U64(ctx, 31, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_265564:
    // 0x265564: 0x4e20  .word       0x00004E20                   # add         $t1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265564u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_265568:
    // 0x265568: 0x0  nop
    ctx->pc = 0x265568u;
    // NOP
label_26556c:
    // 0x26556c: 0x0  nop
    ctx->pc = 0x26556cu;
    // NOP
label_265570:
    // 0x265570: 0xfbf5  .word       0x0000FBF5                   # INVALID     $zero, $zero, -0x40B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265570u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x265570 raw=0x0000FBF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265574:
    // 0x265574: 0x3750  .word       0x00003750                   # mfhi        $a2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265574u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_265578:
    // 0x265578: 0x0  nop
    ctx->pc = 0x265578u;
    // NOP
label_26557c:
    // 0x26557c: 0x0  nop
    ctx->pc = 0x26557cu;
    // NOP
label_265580:
    // 0x265580: 0xfbfc  dsll32      $ra, $zero, 15
    ctx->pc = 0x265580u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << (32 + 15));
label_265584:
    // 0x265584: 0x6150  .word       0x00006150                   # mfhi        $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265584u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_265588:
    // 0x265588: 0x0  nop
    ctx->pc = 0x265588u;
    // NOP
label_26558c:
    // 0x26558c: 0x0  nop
    ctx->pc = 0x26558cu;
    // NOP
label_265590:
    // 0x265590: 0xfc09  .word       0x0000FC09                   # jalr        $zero # 00000400 <InstrIdType: CPU_SPECIAL>
label_265594:
    if (ctx->pc == 0x265594u) {
        ctx->pc = 0x265594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265590u;
        // 0x265594: 0x8f90  .word       0x00008F90                   # mfhi        $s1 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 17, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x265598u;
        goto label_265598;
    }
    ctx->pc = 0x265590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 31, 0x265598u);
        ctx->pc = 0x265594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265590u;
        // 0x265594: 0x8f90  .word       0x00008F90                   # mfhi        $s1 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 17, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265590u, 0x265598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x265598u;
label_265598:
    // 0x265598: 0x0  nop
    ctx->pc = 0x265598u;
    // NOP
label_26559c:
    // 0x26559c: 0x0  nop
    ctx->pc = 0x26559cu;
    // NOP
label_2655a0:
    // 0x2655a0: 0xfc1b  .word       0x0000FC1B                   # divu        $ra, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2655a0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2655a4:
    // 0x2655a4: 0x5500  sll         $t2, $zero, 20
    ctx->pc = 0x2655a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2655a8:
    // 0x2655a8: 0x0  nop
    ctx->pc = 0x2655a8u;
    // NOP
label_2655ac:
    // 0x2655ac: 0x0  nop
    ctx->pc = 0x2655acu;
    // NOP
label_2655b0:
    // 0x2655b0: 0xfc26  .word       0x0000FC26                   # xor         $ra, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2655b0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2655b4:
    // 0x2655b4: 0x3b90  .word       0x00003B90                   # mfhi        $a3 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2655b4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2655b8:
    // 0x2655b8: 0x0  nop
    ctx->pc = 0x2655b8u;
    // NOP
label_2655bc:
    // 0x2655bc: 0x0  nop
    ctx->pc = 0x2655bcu;
    // NOP
label_2655c0:
    // 0x2655c0: 0xfc2e  .word       0x0000FC2E                   # dsub        $ra, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2655c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2655c4:
    // 0x2655c4: 0x5de0  .word       0x00005DE0                   # add         $t3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2655c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2655c8:
    // 0x2655c8: 0x0  nop
    ctx->pc = 0x2655c8u;
    // NOP
label_2655cc:
    // 0x2655cc: 0x0  nop
    ctx->pc = 0x2655ccu;
    // NOP
label_2655d0:
    // 0x2655d0: 0xfc3a  dsrl        $ra, $zero, 16
    ctx->pc = 0x2655d0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> 16);
label_2655d4:
    // 0x2655d4: 0x52c0  sll         $t2, $zero, 11
    ctx->pc = 0x2655d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2655d8:
    // 0x2655d8: 0x0  nop
    ctx->pc = 0x2655d8u;
    // NOP
label_2655dc:
    // 0x2655dc: 0x0  nop
    ctx->pc = 0x2655dcu;
    // NOP
label_2655e0:
    // 0x2655e0: 0xfc45  .word       0x0000FC45                   # INVALID     $zero, $zero, -0x3BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2655e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2655E0 raw=0x0000FC45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2655e4:
    // 0x2655e4: 0x4100  sll         $t0, $zero, 4
    ctx->pc = 0x2655e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2655e8:
    // 0x2655e8: 0x0  nop
    ctx->pc = 0x2655e8u;
    // NOP
label_2655ec:
    // 0x2655ec: 0x0  nop
    ctx->pc = 0x2655ecu;
    // NOP
label_2655f0:
    // 0x2655f0: 0xfc4e  .word       0x0000FC4E                   # INVALID     $zero, $zero, -0x3B2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2655f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2655F0 raw=0x0000FC4E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2655f4:
    // 0x2655f4: 0x6390  .word       0x00006390                   # mfhi        $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2655f4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2655f8:
    // 0x2655f8: 0x0  nop
    ctx->pc = 0x2655f8u;
    // NOP
label_2655fc:
    // 0x2655fc: 0x0  nop
    ctx->pc = 0x2655fcu;
    // NOP
label_265600:
    // 0x265600: 0xfc5b  .word       0x0000FC5B                   # divu        $ra, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265600u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_265604:
    // 0x265604: 0x63e0  .word       0x000063E0                   # add         $t4, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265604u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_265608:
    // 0x265608: 0x0  nop
    ctx->pc = 0x265608u;
    // NOP
label_26560c:
    // 0x26560c: 0x0  nop
    ctx->pc = 0x26560cu;
    // NOP
label_265610:
    // 0x265610: 0xfc68  .word       0x0000FC68                   # mfsa        $ra # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x265610u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_265614:
    // 0x265614: 0x4720  .word       0x00004720                   # add         $t0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265614u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_265618:
    // 0x265618: 0x0  nop
    ctx->pc = 0x265618u;
    // NOP
label_26561c:
    // 0x26561c: 0x0  nop
    ctx->pc = 0x26561cu;
    // NOP
label_265620:
    // 0x265620: 0xfc71  tgeu        $zero, $zero, 1009
    ctx->pc = 0x265620u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265624:
    // 0x265624: 0x3640  sll         $a2, $zero, 25
    ctx->pc = 0x265624u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_265628:
    // 0x265628: 0x0  nop
    ctx->pc = 0x265628u;
    // NOP
label_26562c:
    // 0x26562c: 0x0  nop
    ctx->pc = 0x26562cu;
    // NOP
label_265630:
    // 0x265630: 0xfc78  dsll        $ra, $zero, 17
    ctx->pc = 0x265630u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << 17);
label_265634:
    // 0x265634: 0x5e60  .word       0x00005E60                   # add         $t3, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_265638:
    // 0x265638: 0x0  nop
    ctx->pc = 0x265638u;
    // NOP
label_26563c:
    // 0x26563c: 0x0  nop
    ctx->pc = 0x26563cu;
    // NOP
label_265640:
    // 0x265640: 0xfc84  .word       0x0000FC84                   # sllv        $ra, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265640u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_265644:
    // 0x265644: 0xa080  sll         $s4, $zero, 2
    ctx->pc = 0x265644u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_265648:
    // 0x265648: 0x0  nop
    ctx->pc = 0x265648u;
    // NOP
label_26564c:
    // 0x26564c: 0x0  nop
    ctx->pc = 0x26564cu;
    // NOP
label_265650:
    // 0x265650: 0xfc99  .word       0x0000FC99                   # multu       $zero, $zero # 0000FC80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265650u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_265654:
    // 0x265654: 0x6230  tge         $zero, $zero, 392
    ctx->pc = 0x265654u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265658:
    // 0x265658: 0x0  nop
    ctx->pc = 0x265658u;
    // NOP
label_26565c:
    // 0x26565c: 0x0  nop
    ctx->pc = 0x26565cu;
    // NOP
label_265660:
    // 0x265660: 0xfca6  .word       0x0000FCA6                   # xor         $ra, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265660u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_265664:
    // 0x265664: 0x5ed0  .word       0x00005ED0                   # mfhi        $t3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265664u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_265668:
    // 0x265668: 0x0  nop
    ctx->pc = 0x265668u;
    // NOP
label_26566c:
    // 0x26566c: 0x0  nop
    ctx->pc = 0x26566cu;
    // NOP
label_265670:
    // 0x265670: 0xfcb2  tlt         $zero, $zero, 1010
    ctx->pc = 0x265670u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265674:
    // 0x265674: 0x4a50  .word       0x00004A50                   # mfhi        $t1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265674u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_265678:
    // 0x265678: 0x0  nop
    ctx->pc = 0x265678u;
    // NOP
label_26567c:
    // 0x26567c: 0x0  nop
    ctx->pc = 0x26567cu;
    // NOP
label_265680:
    // 0x265680: 0xfcbc  dsll32      $ra, $zero, 18
    ctx->pc = 0x265680u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << (32 + 18));
label_265684:
    // 0x265684: 0x6290  .word       0x00006290                   # mfhi        $t4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265684u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_265688:
    // 0x265688: 0x0  nop
    ctx->pc = 0x265688u;
    // NOP
label_26568c:
    // 0x26568c: 0x0  nop
    ctx->pc = 0x26568cu;
    // NOP
label_265690:
    // 0x265690: 0xfcc9  .word       0x0000FCC9                   # jalr        $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
label_265694:
    if (ctx->pc == 0x265694u) {
        ctx->pc = 0x265694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265690u;
        // 0x265694: 0x4a80  sll         $t1, $zero, 10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265698u;
        goto label_265698;
    }
    ctx->pc = 0x265690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 31, 0x265698u);
        ctx->pc = 0x265694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265690u;
        // 0x265694: 0x4a80  sll         $t1, $zero, 10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265690u, 0x265698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x265698u;
label_265698:
    // 0x265698: 0x0  nop
    ctx->pc = 0x265698u;
    // NOP
label_26569c:
    // 0x26569c: 0x0  nop
    ctx->pc = 0x26569cu;
    // NOP
label_2656a0:
    // 0x2656a0: 0xfcd3  .word       0x0000FCD3                   # mtlo        $zero # 0000FCC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2656a0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2656a4:
    // 0x2656a4: 0x6740  sll         $t4, $zero, 29
    ctx->pc = 0x2656a4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_2656a8:
    // 0x2656a8: 0x0  nop
    ctx->pc = 0x2656a8u;
    // NOP
label_2656ac:
    // 0x2656ac: 0x0  nop
    ctx->pc = 0x2656acu;
    // NOP
label_2656b0:
    // 0x2656b0: 0xfce0  .word       0x0000FCE0                   # add         $ra, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2656b0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_2656b4:
    // 0x2656b4: 0x7bc0  sll         $t7, $zero, 15
    ctx->pc = 0x2656b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_2656b8:
    // 0x2656b8: 0x0  nop
    ctx->pc = 0x2656b8u;
    // NOP
label_2656bc:
    // 0x2656bc: 0x0  nop
    ctx->pc = 0x2656bcu;
    // NOP
label_2656c0:
    // 0x2656c0: 0xfcf0  tge         $zero, $zero, 1011
    ctx->pc = 0x2656c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2656c4:
    // 0x2656c4: 0x7900  sll         $t7, $zero, 4
    ctx->pc = 0x2656c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2656c8:
    // 0x2656c8: 0x0  nop
    ctx->pc = 0x2656c8u;
    // NOP
label_2656cc:
    // 0x2656cc: 0x0  nop
    ctx->pc = 0x2656ccu;
    // NOP
label_2656d0:
    // 0x2656d0: 0xfd00  sll         $ra, $zero, 20
    ctx->pc = 0x2656d0u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2656d4:
    // 0x2656d4: 0x44a0  .word       0x000044A0                   # add         $t0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2656d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2656d8:
    // 0x2656d8: 0x0  nop
    ctx->pc = 0x2656d8u;
    // NOP
label_2656dc:
    // 0x2656dc: 0x0  nop
    ctx->pc = 0x2656dcu;
    // NOP
label_2656e0:
    // 0x2656e0: 0xfd09  .word       0x0000FD09                   # jalr        $zero # 00000500 <InstrIdType: CPU_SPECIAL>
label_2656e4:
    if (ctx->pc == 0x2656E4u) {
        ctx->pc = 0x2656E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656E0u;
        // 0x2656e4: 0x55b0  tge         $zero, $zero, 342 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2656E8u;
        goto label_2656e8;
    }
    ctx->pc = 0x2656E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 31, 0x2656E8u);
        ctx->pc = 0x2656E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656E0u;
        // 0x2656e4: 0x55b0  tge         $zero, $zero, 342 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2656E0u, 0x2656E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2656E8u;
label_2656e8:
    // 0x2656e8: 0x0  nop
    ctx->pc = 0x2656e8u;
    // NOP
label_2656ec:
    // 0x2656ec: 0x0  nop
    ctx->pc = 0x2656ecu;
    // NOP
label_2656f0:
    // 0x2656f0: 0xfd14  .word       0x0000FD14                   # dsllv       $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2656f0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2656f4:
    // 0x2656f4: 0x3ab0  tge         $zero, $zero, 234
    ctx->pc = 0x2656f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2656f8:
    // 0x2656f8: 0x0  nop
    ctx->pc = 0x2656f8u;
    // NOP
label_2656fc:
    // 0x2656fc: 0x0  nop
    ctx->pc = 0x2656fcu;
    // NOP
label_265700:
    // 0x265700: 0xfd1c  .word       0x0000FD1C                   # dmult       $zero, $zero # 0000FD00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265700u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x265700 raw=0x0000FD1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265704:
    // 0x265704: 0x5650  .word       0x00005650                   # mfhi        $t2 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265704u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_265708:
    // 0x265708: 0x0  nop
    ctx->pc = 0x265708u;
    // NOP
label_26570c:
    // 0x26570c: 0x0  nop
    ctx->pc = 0x26570cu;
    // NOP
label_265710:
    // 0x265710: 0xfd27  .word       0x0000FD27                   # not         $ra, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265710u;
    SET_GPR_U64(ctx, 31, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_265714:
    // 0x265714: 0x8b20  .word       0x00008B20                   # add         $s1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265714u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_265718:
    // 0x265718: 0x0  nop
    ctx->pc = 0x265718u;
    // NOP
label_26571c:
    // 0x26571c: 0x0  nop
    ctx->pc = 0x26571cu;
    // NOP
label_265720:
    // 0x265720: 0xfd39  .word       0x0000FD39                   # INVALID     $zero, $zero, -0x2C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265720u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x265720 raw=0x0000FD39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265724:
    // 0x265724: 0x54a0  .word       0x000054A0                   # add         $t2, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265724u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_265728:
    // 0x265728: 0x0  nop
    ctx->pc = 0x265728u;
    // NOP
label_26572c:
    // 0x26572c: 0x0  nop
    ctx->pc = 0x26572cu;
    // NOP
label_265730:
    // 0x265730: 0xfd44  .word       0x0000FD44                   # sllv        $ra, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265730u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_265734:
    // 0x265734: 0x61f0  tge         $zero, $zero, 391
    ctx->pc = 0x265734u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265738:
    // 0x265738: 0x0  nop
    ctx->pc = 0x265738u;
    // NOP
label_26573c:
    // 0x26573c: 0x0  nop
    ctx->pc = 0x26573cu;
    // NOP
label_265740:
    // 0x265740: 0xfd51  .word       0x0000FD51                   # mthi        $zero # 0000FD40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265740u;
    ctx->hi = GPR_U64(ctx, 0);
label_265744:
    // 0x265744: 0x86f0  tge         $zero, $zero, 539
    ctx->pc = 0x265744u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265748:
    // 0x265748: 0x0  nop
    ctx->pc = 0x265748u;
    // NOP
label_26574c:
    // 0x26574c: 0x0  nop
    ctx->pc = 0x26574cu;
    // NOP
label_265750:
    // 0x265750: 0xfd62  .word       0x0000FD62                   # neg         $ra, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265750u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_265754:
    // 0x265754: 0x8610  .word       0x00008610                   # mfhi        $s0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265754u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_265758:
    // 0x265758: 0x0  nop
    ctx->pc = 0x265758u;
    // NOP
label_26575c:
    // 0x26575c: 0x0  nop
    ctx->pc = 0x26575cu;
    // NOP
label_265760:
    // 0x265760: 0xfd73  tltu        $zero, $zero, 1013
    ctx->pc = 0x265760u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265764:
    // 0x265764: 0x6190  .word       0x00006190                   # mfhi        $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265764u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_265768:
    // 0x265768: 0x0  nop
    ctx->pc = 0x265768u;
    // NOP
label_26576c:
    // 0x26576c: 0x0  nop
    ctx->pc = 0x26576cu;
    // NOP
label_265770:
    // 0x265770: 0xfd80  sll         $ra, $zero, 22
    ctx->pc = 0x265770u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_265774:
    // 0x265774: 0x60b0  tge         $zero, $zero, 386
    ctx->pc = 0x265774u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265778:
    // 0x265778: 0x0  nop
    ctx->pc = 0x265778u;
    // NOP
label_26577c:
    // 0x26577c: 0x0  nop
    ctx->pc = 0x26577cu;
    // NOP
label_265780:
    // 0x265780: 0xfd8d  break       0, 1014
    ctx->pc = 0x265780u;
    runtime->handleBreak(rdram, ctx);
label_265784:
    // 0x265784: 0x5e60  .word       0x00005E60                   # add         $t3, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265784u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_265788:
    // 0x265788: 0x0  nop
    ctx->pc = 0x265788u;
    // NOP
label_26578c:
    // 0x26578c: 0x0  nop
    ctx->pc = 0x26578cu;
    // NOP
label_265790:
    // 0x265790: 0xfd99  .word       0x0000FD99                   # multu       $zero, $zero # 0000FD80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265790u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_265794:
    // 0x265794: 0x60e0  .word       0x000060E0                   # add         $t4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265794u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_265798:
    // 0x265798: 0x0  nop
    ctx->pc = 0x265798u;
    // NOP
label_26579c:
    // 0x26579c: 0x0  nop
    ctx->pc = 0x26579cu;
    // NOP
label_2657a0:
    // 0x2657a0: 0xfda6  .word       0x0000FDA6                   # xor         $ra, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2657a0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2657a4:
    // 0x2657a4: 0x5b10  .word       0x00005B10                   # mfhi        $t3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2657a4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2657a8:
    // 0x2657a8: 0x0  nop
    ctx->pc = 0x2657a8u;
    // NOP
label_2657ac:
    // 0x2657ac: 0x0  nop
    ctx->pc = 0x2657acu;
    // NOP
label_2657b0:
    // 0x2657b0: 0xfdb2  tlt         $zero, $zero, 1014
    ctx->pc = 0x2657b0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2657b4:
    // 0x2657b4: 0x74b0  tge         $zero, $zero, 466
    ctx->pc = 0x2657b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2657b8:
    // 0x2657b8: 0x0  nop
    ctx->pc = 0x2657b8u;
    // NOP
label_2657bc:
    // 0x2657bc: 0x0  nop
    ctx->pc = 0x2657bcu;
    // NOP
label_2657c0:
    // 0x2657c0: 0xfdc1  .word       0x0000FDC1                   # INVALID     $zero, $zero, -0x23F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2657c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2657C0 raw=0x0000FDC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2657c4:
    // 0x2657c4: 0x7500  sll         $t6, $zero, 20
    ctx->pc = 0x2657c4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2657c8:
    // 0x2657c8: 0x0  nop
    ctx->pc = 0x2657c8u;
    // NOP
label_2657cc:
    // 0x2657cc: 0x0  nop
    ctx->pc = 0x2657ccu;
    // NOP
label_2657d0:
    // 0x2657d0: 0xfdd0  .word       0x0000FDD0                   # mfhi        $ra # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2657d0u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2657d4:
    // 0x2657d4: 0xa9d0  .word       0x0000A9D0                   # mfhi        $s5 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2657d4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_2657d8:
    // 0x2657d8: 0x0  nop
    ctx->pc = 0x2657d8u;
    // NOP
label_2657dc:
    // 0x2657dc: 0x0  nop
    ctx->pc = 0x2657dcu;
    // NOP
label_2657e0:
    // 0x2657e0: 0xfde6  .word       0x0000FDE6                   # xor         $ra, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2657e0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2657e4:
    // 0x2657e4: 0x9c60  .word       0x00009C60                   # add         $s3, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2657e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2657e8:
    // 0x2657e8: 0x0  nop
    ctx->pc = 0x2657e8u;
    // NOP
label_2657ec:
    // 0x2657ec: 0x0  nop
    ctx->pc = 0x2657ecu;
    // NOP
label_2657f0:
    // 0x2657f0: 0xfdfa  dsrl        $ra, $zero, 23
    ctx->pc = 0x2657f0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> 23);
label_2657f4:
    // 0x2657f4: 0x55e0  .word       0x000055E0                   # add         $t2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2657f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2657f8:
    // 0x2657f8: 0x0  nop
    ctx->pc = 0x2657f8u;
    // NOP
label_2657fc:
    // 0x2657fc: 0x0  nop
    ctx->pc = 0x2657fcu;
    // NOP
label_265800:
    // 0x265800: 0xfe05  .word       0x0000FE05                   # INVALID     $zero, $zero, -0x1FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x265800 raw=0x0000FE05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265804:
    // 0x265804: 0x5590  .word       0x00005590                   # mfhi        $t2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265804u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_265808:
    // 0x265808: 0x0  nop
    ctx->pc = 0x265808u;
    // NOP
label_26580c:
    // 0x26580c: 0x0  nop
    ctx->pc = 0x26580cu;
    // NOP
label_265810:
    // 0x265810: 0xfe10  .word       0x0000FE10                   # mfhi        $ra # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265810u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_265814:
    // 0x265814: 0x4cc0  sll         $t1, $zero, 19
    ctx->pc = 0x265814u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_265818:
    // 0x265818: 0x0  nop
    ctx->pc = 0x265818u;
    // NOP
label_26581c:
    // 0x26581c: 0x0  nop
    ctx->pc = 0x26581cu;
    // NOP
label_265820:
    // 0x265820: 0xfe1a  .word       0x0000FE1A                   # div         $ra, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265820u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_265824:
    // 0x265824: 0x4430  tge         $zero, $zero, 272
    ctx->pc = 0x265824u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265828:
    // 0x265828: 0x0  nop
    ctx->pc = 0x265828u;
    // NOP
label_26582c:
    // 0x26582c: 0x0  nop
    ctx->pc = 0x26582cu;
    // NOP
label_265830:
    // 0x265830: 0xfe23  .word       0x0000FE23                   # negu        $ra, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265830u;
    SET_GPR_S32(ctx, 31, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_265834:
    // 0x265834: 0x2f70  tge         $zero, $zero, 189
    ctx->pc = 0x265834u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265838:
    // 0x265838: 0x0  nop
    ctx->pc = 0x265838u;
    // NOP
label_26583c:
    // 0x26583c: 0x0  nop
    ctx->pc = 0x26583cu;
    // NOP
label_265840:
    // 0x265840: 0xfe29  .word       0x0000FE29                   # mtsa        $zero # 0000FE00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x265840u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_265844:
    // 0x265844: 0x6ef0  tge         $zero, $zero, 443
    ctx->pc = 0x265844u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265848:
    // 0x265848: 0x0  nop
    ctx->pc = 0x265848u;
    // NOP
label_26584c:
    // 0x26584c: 0x0  nop
    ctx->pc = 0x26584cu;
    // NOP
label_265850:
    // 0x265850: 0xfe37  .word       0x0000FE37                   # INVALID     $zero, $zero, -0x1C9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265850u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x265850 raw=0x0000FE37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265854:
    // 0x265854: 0x7470  tge         $zero, $zero, 465
    ctx->pc = 0x265854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265858:
    // 0x265858: 0x0  nop
    ctx->pc = 0x265858u;
    // NOP
label_26585c:
    // 0x26585c: 0x0  nop
    ctx->pc = 0x26585cu;
    // NOP
label_265860:
    // 0x265860: 0xfe46  .word       0x0000FE46                   # srlv        $ra, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265860u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_265864:
    // 0x265864: 0x5320  .word       0x00005320                   # add         $t2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265864u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_265868:
    // 0x265868: 0x0  nop
    ctx->pc = 0x265868u;
    // NOP
label_26586c:
    // 0x26586c: 0x0  nop
    ctx->pc = 0x26586cu;
    // NOP
label_265870:
    // 0x265870: 0xfe51  .word       0x0000FE51                   # mthi        $zero # 0000FE40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265870u;
    ctx->hi = GPR_U64(ctx, 0);
label_265874:
    // 0x265874: 0x4600  sll         $t0, $zero, 24
    ctx->pc = 0x265874u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_265878:
    // 0x265878: 0x0  nop
    ctx->pc = 0x265878u;
    // NOP
label_26587c:
    // 0x26587c: 0x0  nop
    ctx->pc = 0x26587cu;
    // NOP
label_265880:
    // 0x265880: 0xfe5a  .word       0x0000FE5A                   # div         $ra, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265880u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_265884:
    // 0x265884: 0x3c90  .word       0x00003C90                   # mfhi        $a3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265884u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_265888:
    // 0x265888: 0x0  nop
    ctx->pc = 0x265888u;
    // NOP
label_26588c:
    // 0x26588c: 0x0  nop
    ctx->pc = 0x26588cu;
    // NOP
label_265890:
    // 0x265890: 0xfe62  .word       0x0000FE62                   # neg         $ra, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265890u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_265894:
    // 0x265894: 0x4a00  sll         $t1, $zero, 8
    ctx->pc = 0x265894u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_265898:
    // 0x265898: 0x0  nop
    ctx->pc = 0x265898u;
    // NOP
label_26589c:
    // 0x26589c: 0x0  nop
    ctx->pc = 0x26589cu;
    // NOP
label_2658a0:
    // 0x2658a0: 0xfe6c  .word       0x0000FE6C                   # dadd        $ra, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2658a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2658a4:
    // 0x2658a4: 0x4260  .word       0x00004260                   # add         $t0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2658a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2658a8:
    // 0x2658a8: 0x0  nop
    ctx->pc = 0x2658a8u;
    // NOP
label_2658ac:
    // 0x2658ac: 0x0  nop
    ctx->pc = 0x2658acu;
    // NOP
label_2658b0:
    // 0x2658b0: 0xfe75  .word       0x0000FE75                   # INVALID     $zero, $zero, -0x18B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2658b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2658B0 raw=0x0000FE75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2658b4:
    // 0x2658b4: 0x4e40  sll         $t1, $zero, 25
    ctx->pc = 0x2658b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_2658b8:
    // 0x2658b8: 0x0  nop
    ctx->pc = 0x2658b8u;
    // NOP
label_2658bc:
    // 0x2658bc: 0x0  nop
    ctx->pc = 0x2658bcu;
    // NOP
label_2658c0:
    // 0x2658c0: 0xfe7f  dsra32      $ra, $zero, 25
    ctx->pc = 0x2658c0u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (32 + 25));
label_2658c4:
    // 0x2658c4: 0x4cc0  sll         $t1, $zero, 19
    ctx->pc = 0x2658c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2658c8:
    // 0x2658c8: 0x0  nop
    ctx->pc = 0x2658c8u;
    // NOP
label_2658cc:
    // 0x2658cc: 0x0  nop
    ctx->pc = 0x2658ccu;
    // NOP
label_2658d0:
    // 0x2658d0: 0xfe89  .word       0x0000FE89                   # jalr        $zero # 00000680 <InstrIdType: CPU_SPECIAL>
label_2658d4:
    if (ctx->pc == 0x2658D4u) {
        ctx->pc = 0x2658D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658D0u;
        // 0x2658d4: 0x88e0  .word       0x000088E0                   # add         $s1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2658D8u;
        goto label_2658d8;
    }
    ctx->pc = 0x2658D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 31, 0x2658D8u);
        ctx->pc = 0x2658D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658D0u;
        // 0x2658d4: 0x88e0  .word       0x000088E0                   # add         $s1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2658D0u, 0x2658D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2658D8u;
label_2658d8:
    // 0x2658d8: 0x0  nop
    ctx->pc = 0x2658d8u;
    // NOP
label_2658dc:
    // 0x2658dc: 0x0  nop
    ctx->pc = 0x2658dcu;
    // NOP
label_2658e0:
    // 0x2658e0: 0xfe9b  .word       0x0000FE9B                   # divu        $ra, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2658e0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2658e4:
    // 0x2658e4: 0x83b0  tge         $zero, $zero, 526
    ctx->pc = 0x2658e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2658e8:
    // 0x2658e8: 0x0  nop
    ctx->pc = 0x2658e8u;
    // NOP
label_2658ec:
    // 0x2658ec: 0x0  nop
    ctx->pc = 0x2658ecu;
    // NOP
label_2658f0:
    // 0x2658f0: 0xfeac  .word       0x0000FEAC                   # dadd        $ra, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2658f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2658f4:
    // 0x2658f4: 0x5fb0  tge         $zero, $zero, 382
    ctx->pc = 0x2658f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2658f8:
    // 0x2658f8: 0x0  nop
    ctx->pc = 0x2658f8u;
    // NOP
label_2658fc:
    // 0x2658fc: 0x0  nop
    ctx->pc = 0x2658fcu;
    // NOP
label_265900:
    // 0x265900: 0xfeb8  dsll        $ra, $zero, 26
    ctx->pc = 0x265900u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << 26);
label_265904:
    // 0x265904: 0x5410  .word       0x00005410                   # mfhi        $t2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265904u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_265908:
    // 0x265908: 0x0  nop
    ctx->pc = 0x265908u;
    // NOP
label_26590c:
    // 0x26590c: 0x0  nop
    ctx->pc = 0x26590cu;
    // NOP
label_265910:
    // 0x265910: 0xfec3  sra         $ra, $zero, 27
    ctx->pc = 0x265910u;
    SET_GPR_S32(ctx, 31, SRA32(GPR_S32(ctx, 0), 27));
label_265914:
    // 0x265914: 0x6220  .word       0x00006220                   # add         $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265914u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_265918:
    // 0x265918: 0x0  nop
    ctx->pc = 0x265918u;
    // NOP
label_26591c:
    // 0x26591c: 0x0  nop
    ctx->pc = 0x26591cu;
    // NOP
label_265920:
    // 0x265920: 0xfed0  .word       0x0000FED0                   # mfhi        $ra # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265920u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_265924:
    // 0x265924: 0x6aa0  .word       0x00006AA0                   # add         $t5, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265924u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_265928:
    // 0x265928: 0x0  nop
    ctx->pc = 0x265928u;
    // NOP
label_26592c:
    // 0x26592c: 0x0  nop
    ctx->pc = 0x26592cu;
    // NOP
label_265930:
    // 0x265930: 0xfede  .word       0x0000FEDE                   # ddiv        $ra, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x265930 raw=0x0000FEDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265934:
    // 0x265934: 0x5590  .word       0x00005590                   # mfhi        $t2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265934u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_265938:
    // 0x265938: 0x0  nop
    ctx->pc = 0x265938u;
    // NOP
label_26593c:
    // 0x26593c: 0x0  nop
    ctx->pc = 0x26593cu;
    // NOP
label_265940:
    // 0x265940: 0xfee9  .word       0x0000FEE9                   # mtsa        $zero # 0000FEC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x265940u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_265944:
    // 0x265944: 0x3f10  .word       0x00003F10                   # mfhi        $a3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265944u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_265948:
    // 0x265948: 0x0  nop
    ctx->pc = 0x265948u;
    // NOP
label_26594c:
    // 0x26594c: 0x0  nop
    ctx->pc = 0x26594cu;
    // NOP
label_265950:
    // 0x265950: 0xfef1  tgeu        $zero, $zero, 1019
    ctx->pc = 0x265950u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265954:
    // 0x265954: 0x9100  sll         $s2, $zero, 4
    ctx->pc = 0x265954u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_265958:
    // 0x265958: 0x0  nop
    ctx->pc = 0x265958u;
    // NOP
label_26595c:
    // 0x26595c: 0x0  nop
    ctx->pc = 0x26595cu;
    // NOP
label_265960:
    // 0x265960: 0xff04  .word       0x0000FF04                   # sllv        $ra, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265960u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_265964:
    // 0x265964: 0xb310  .word       0x0000B310                   # mfhi        $s6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265964u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_265968:
    // 0x265968: 0x0  nop
    ctx->pc = 0x265968u;
    // NOP
label_26596c:
    // 0x26596c: 0x0  nop
    ctx->pc = 0x26596cu;
    // NOP
label_265970:
    // 0x265970: 0xff1b  .word       0x0000FF1B                   # divu        $ra, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265970u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_265974:
    // 0x265974: 0x8670  tge         $zero, $zero, 537
    ctx->pc = 0x265974u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265978:
    // 0x265978: 0x0  nop
    ctx->pc = 0x265978u;
    // NOP
label_26597c:
    // 0x26597c: 0x0  nop
    ctx->pc = 0x26597cu;
    // NOP
label_265980:
    // 0x265980: 0xff2c  .word       0x0000FF2C                   # dadd        $ra, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265980u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_265984:
    // 0x265984: 0x87a0  .word       0x000087A0                   # add         $s0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265984u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_265988:
    // 0x265988: 0x0  nop
    ctx->pc = 0x265988u;
    // NOP
label_26598c:
    // 0x26598c: 0x0  nop
    ctx->pc = 0x26598cu;
    // NOP
label_265990:
    // 0x265990: 0xff3d  .word       0x0000FF3D                   # INVALID     $zero, $zero, -0xC3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265990u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x265990 raw=0x0000FF3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265994:
    // 0x265994: 0x3930  tge         $zero, $zero, 228
    ctx->pc = 0x265994u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265998:
    // 0x265998: 0x0  nop
    ctx->pc = 0x265998u;
    // NOP
label_26599c:
    // 0x26599c: 0x0  nop
    ctx->pc = 0x26599cu;
    // NOP
label_2659a0:
    // 0x2659a0: 0xff45  .word       0x0000FF45                   # INVALID     $zero, $zero, -0xBB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2659a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2659A0 raw=0x0000FF45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2659a4:
    // 0x2659a4: 0x3de0  .word       0x00003DE0                   # add         $a3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2659a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2659a8:
    // 0x2659a8: 0x0  nop
    ctx->pc = 0x2659a8u;
    // NOP
label_2659ac:
    // 0x2659ac: 0x0  nop
    ctx->pc = 0x2659acu;
    // NOP
label_2659b0:
    // 0x2659b0: 0xff4d  break       0, 1021
    ctx->pc = 0x2659b0u;
    runtime->handleBreak(rdram, ctx);
label_2659b4:
    // 0x2659b4: 0x6a40  sll         $t5, $zero, 9
    ctx->pc = 0x2659b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2659b8:
    // 0x2659b8: 0x0  nop
    ctx->pc = 0x2659b8u;
    // NOP
label_2659bc:
    // 0x2659bc: 0x0  nop
    ctx->pc = 0x2659bcu;
    // NOP
label_2659c0:
    // 0x2659c0: 0xff5b  .word       0x0000FF5B                   # divu        $ra, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2659c0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2659c4:
    // 0x2659c4: 0x35b0  tge         $zero, $zero, 214
    ctx->pc = 0x2659c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2659c8:
    // 0x2659c8: 0x0  nop
    ctx->pc = 0x2659c8u;
    // NOP
label_2659cc:
    // 0x2659cc: 0x0  nop
    ctx->pc = 0x2659ccu;
    // NOP
label_2659d0:
    // 0x2659d0: 0xff62  .word       0x0000FF62                   # neg         $ra, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2659d0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_2659d4:
    // 0x2659d4: 0x5a50  .word       0x00005A50                   # mfhi        $t3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2659d4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2659d8:
    // 0x2659d8: 0x0  nop
    ctx->pc = 0x2659d8u;
    // NOP
label_2659dc:
    // 0x2659dc: 0x0  nop
    ctx->pc = 0x2659dcu;
    // NOP
label_2659e0:
    // 0x2659e0: 0xff6e  .word       0x0000FF6E                   # dsub        $ra, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2659e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2659e4:
    // 0x2659e4: 0x98c0  sll         $s3, $zero, 3
    ctx->pc = 0x2659e4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2659e8:
    // 0x2659e8: 0x0  nop
    ctx->pc = 0x2659e8u;
    // NOP
label_2659ec:
    // 0x2659ec: 0x0  nop
    ctx->pc = 0x2659ecu;
    // NOP
label_2659f0:
    // 0x2659f0: 0xff82  srl         $ra, $zero, 30
    ctx->pc = 0x2659f0u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), 30));
label_2659f4:
    // 0x2659f4: 0x65d0  .word       0x000065D0                   # mfhi        $t4 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2659f4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2659f8:
    // 0x2659f8: 0x0  nop
    ctx->pc = 0x2659f8u;
    // NOP
label_2659fc:
    // 0x2659fc: 0x0  nop
    ctx->pc = 0x2659fcu;
    // NOP
label_265a00:
    // 0x265a00: 0xff8f  .word       0x0000FF8F                   # sync.p # 0000F800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_265a04:
    // 0x265a04: 0x4f40  sll         $t1, $zero, 29
    ctx->pc = 0x265a04u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_265a08:
    // 0x265a08: 0x0  nop
    ctx->pc = 0x265a08u;
    // NOP
label_265a0c:
    // 0x265a0c: 0x0  nop
    ctx->pc = 0x265a0cu;
    // NOP
label_265a10:
    // 0x265a10: 0xff99  .word       0x0000FF99                   # multu       $zero, $zero # 0000FF80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a10u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_265a14:
    // 0x265a14: 0x2660  .word       0x00002660                   # add         $a0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_265a18:
    // 0x265a18: 0x0  nop
    ctx->pc = 0x265a18u;
    // NOP
label_265a1c:
    // 0x265a1c: 0x0  nop
    ctx->pc = 0x265a1cu;
    // NOP
label_265a20:
    // 0x265a20: 0xff9e  .word       0x0000FF9E                   # ddiv        $ra, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x265A20 raw=0x0000FF9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265a24:
    // 0x265a24: 0x6b30  tge         $zero, $zero, 428
    ctx->pc = 0x265a24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265a28:
    // 0x265a28: 0x0  nop
    ctx->pc = 0x265a28u;
    // NOP
label_265a2c:
    // 0x265a2c: 0x0  nop
    ctx->pc = 0x265a2cu;
    // NOP
label_265a30:
    // 0x265a30: 0xffac  .word       0x0000FFAC                   # dadd        $ra, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_265a34:
    // 0x265a34: 0x57b0  tge         $zero, $zero, 350
    ctx->pc = 0x265a34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265a38:
    // 0x265a38: 0x0  nop
    ctx->pc = 0x265a38u;
    // NOP
label_265a3c:
    // 0x265a3c: 0x0  nop
    ctx->pc = 0x265a3cu;
    // NOP
label_265a40:
    // 0x265a40: 0xffb7  .word       0x0000FFB7                   # INVALID     $zero, $zero, -0x49 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x265A40 raw=0x0000FFB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265a44:
    // 0x265a44: 0x86e0  .word       0x000086E0                   # add         $s0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_265a48:
    // 0x265a48: 0x0  nop
    ctx->pc = 0x265a48u;
    // NOP
label_265a4c:
    // 0x265a4c: 0x0  nop
    ctx->pc = 0x265a4cu;
    // NOP
label_265a50:
    // 0x265a50: 0xffc8  .word       0x0000FFC8                   # jr          $zero # 0000FFC0 <InstrIdType: CPU_SPECIAL>
label_265a54:
    if (ctx->pc == 0x265A54u) {
        ctx->pc = 0x265A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A50u;
        // 0x265a54: 0x6730  tge         $zero, $zero, 412 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x265A58u;
        goto label_265a58;
    }
    ctx->pc = 0x265A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x265A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265A50u;
        // 0x265a54: 0x6730  tge         $zero, $zero, 412 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265A50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x265A58u;
label_265a58:
    // 0x265a58: 0x0  nop
    ctx->pc = 0x265a58u;
    // NOP
label_265a5c:
    // 0x265a5c: 0x0  nop
    ctx->pc = 0x265a5cu;
    // NOP
label_265a60:
    // 0x265a60: 0xffd5  .word       0x0000FFD5                   # INVALID     $zero, $zero, -0x2B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x265A60 raw=0x0000FFD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265a64:
    // 0x265a64: 0x6a90  .word       0x00006A90                   # mfhi        $t5 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a64u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_265a68:
    // 0x265a68: 0x0  nop
    ctx->pc = 0x265a68u;
    // NOP
label_265a6c:
    // 0x265a6c: 0x0  nop
    ctx->pc = 0x265a6cu;
    // NOP
label_265a70:
    // 0x265a70: 0xffe3  .word       0x0000FFE3                   # negu        $ra, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a70u;
    SET_GPR_S32(ctx, 31, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_265a74:
    // 0x265a74: 0x5ef0  tge         $zero, $zero, 379
    ctx->pc = 0x265a74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265a78:
    // 0x265a78: 0x0  nop
    ctx->pc = 0x265a78u;
    // NOP
label_265a7c:
    // 0x265a7c: 0x0  nop
    ctx->pc = 0x265a7cu;
    // NOP
label_265a80:
    // 0x265a80: 0xffef  .word       0x0000FFEF                   # dsubu       $ra, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a80u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_265a84:
    // 0x265a84: 0x7990  .word       0x00007990                   # mfhi        $t7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265a84u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_265a88:
    // 0x265a88: 0x0  nop
    ctx->pc = 0x265a88u;
    // NOP
label_265a8c:
    // 0x265a8c: 0x0  nop
    ctx->pc = 0x265a8cu;
    // NOP
label_265a90:
    // 0x265a90: 0xffff  dsra32      $ra, $zero, 31
    ctx->pc = 0x265a90u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (32 + 31));
label_265a94:
    // 0x265a94: 0x67f0  tge         $zero, $zero, 415
    ctx->pc = 0x265a94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265a98:
    // 0x265a98: 0x0  nop
    ctx->pc = 0x265a98u;
    // NOP
label_265a9c:
    // 0x265a9c: 0x0  nop
    ctx->pc = 0x265a9cu;
    // NOP
label_265aa0:
    // 0x265aa0: 0x1000c  .word       0x0001000C                   # syscall     0 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265aa0u;
    ctx->pc = 0x265AA4u;
runtime->handleSyscall(rdram, ctx, 0x400u);
label_265aa4:
    // 0x265aa4: 0x58e0  .word       0x000058E0                   # add         $t3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265aa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_265aa8:
    // 0x265aa8: 0x0  nop
    ctx->pc = 0x265aa8u;
    // NOP
label_265aac:
    // 0x265aac: 0x0  nop
    ctx->pc = 0x265aacu;
    // NOP
label_265ab0:
    // 0x265ab0: 0x10018  mult        $zero, $zero, $at
    ctx->pc = 0x265ab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_265ab4:
    // 0x265ab4: 0x4570  tge         $zero, $zero, 277
    ctx->pc = 0x265ab4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265ab8:
    // 0x265ab8: 0x0  nop
    ctx->pc = 0x265ab8u;
    // NOP
label_265abc:
    // 0x265abc: 0x0  nop
    ctx->pc = 0x265abcu;
    // NOP
label_265ac0:
    // 0x265ac0: 0x10021  addu        $zero, $zero, $at
    ctx->pc = 0x265ac0u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_265ac4:
    // 0x265ac4: 0x6ca0  .word       0x00006CA0                   # add         $t5, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265ac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_265ac8:
    // 0x265ac8: 0x0  nop
    ctx->pc = 0x265ac8u;
    // NOP
label_265acc:
    // 0x265acc: 0x0  nop
    ctx->pc = 0x265accu;
    // NOP
label_265ad0:
    // 0x265ad0: 0x1002f  dsubu       $zero, $zero, $at
    ctx->pc = 0x265ad0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_265ad4:
    // 0x265ad4: 0x5c10  .word       0x00005C10                   # mfhi        $t3 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265ad4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_265ad8:
    // 0x265ad8: 0x0  nop
    ctx->pc = 0x265ad8u;
    // NOP
label_265adc:
    // 0x265adc: 0x0  nop
    ctx->pc = 0x265adcu;
    // NOP
label_265ae0:
    // 0x265ae0: 0x1003b  dsra        $zero, $at, 0
    ctx->pc = 0x265ae0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> 0);
label_265ae4:
    // 0x265ae4: 0x41c0  sll         $t0, $zero, 7
    ctx->pc = 0x265ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_265ae8:
    // 0x265ae8: 0x0  nop
    ctx->pc = 0x265ae8u;
    // NOP
label_265aec:
    // 0x265aec: 0x0  nop
    ctx->pc = 0x265aecu;
    // NOP
label_265af0:
    // 0x265af0: 0x10044  .word       0x00010044                   # sllv        $zero, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265af0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_265af4:
    // 0x265af4: 0x3490  .word       0x00003490                   # mfhi        $a2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265af4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_265af8:
    // 0x265af8: 0x0  nop
    ctx->pc = 0x265af8u;
    // NOP
label_265afc:
    // 0x265afc: 0x0  nop
    ctx->pc = 0x265afcu;
    // NOP
label_265b00:
    // 0x265b00: 0x1004b  .word       0x0001004B                   # movn        $zero, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265b00u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_265b04:
    // 0x265b04: 0x5f80  sll         $t3, $zero, 30
    ctx->pc = 0x265b04u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_265b08:
    // 0x265b08: 0x0  nop
    ctx->pc = 0x265b08u;
    // NOP
label_265b0c:
    // 0x265b0c: 0x0  nop
    ctx->pc = 0x265b0cu;
    // NOP
label_265b10:
    // 0x265b10: 0x10057  .word       0x00010057                   # dsrav       $zero, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265b10u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_265b14:
    // 0x265b14: 0x8780  sll         $s0, $zero, 30
    ctx->pc = 0x265b14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_265b18:
    // 0x265b18: 0x0  nop
    ctx->pc = 0x265b18u;
    // NOP
label_265b1c:
    // 0x265b1c: 0x0  nop
    ctx->pc = 0x265b1cu;
    // NOP
label_265b20:
    // 0x265b20: 0x10068  .word       0x00010068                   # mfsa        $zero # 00010040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x265b20u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_265b24:
    // 0x265b24: 0x34d0  .word       0x000034D0                   # mfhi        $a2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265b24u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_265b28:
    // 0x265b28: 0x0  nop
    ctx->pc = 0x265b28u;
    // NOP
label_265b2c:
    // 0x265b2c: 0x0  nop
    ctx->pc = 0x265b2cu;
    // NOP
    ctx->pc = 0x265b30u;
    return;
}
