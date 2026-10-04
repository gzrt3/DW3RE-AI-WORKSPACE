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


void FUN_0019b618_part414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2650a8u: goto label_2650a8;
        case 0x2650acu: goto label_2650ac;
        case 0x2650b0u: goto label_2650b0;
        case 0x2650b4u: goto label_2650b4;
        case 0x2650b8u: goto label_2650b8;
        case 0x2650bcu: goto label_2650bc;
        case 0x2650c0u: goto label_2650c0;
        case 0x2650c4u: goto label_2650c4;
        case 0x2650c8u: goto label_2650c8;
        case 0x2650ccu: goto label_2650cc;
        case 0x2650d0u: goto label_2650d0;
        case 0x2650d4u: goto label_2650d4;
        case 0x2650d8u: goto label_2650d8;
        case 0x2650dcu: goto label_2650dc;
        case 0x2650e0u: goto label_2650e0;
        case 0x2650e4u: goto label_2650e4;
        case 0x2650e8u: goto label_2650e8;
        case 0x2650ecu: goto label_2650ec;
        case 0x2650f0u: goto label_2650f0;
        case 0x2650f4u: goto label_2650f4;
        case 0x2650f8u: goto label_2650f8;
        case 0x2650fcu: goto label_2650fc;
        case 0x265100u: goto label_265100;
        case 0x265104u: goto label_265104;
        case 0x265108u: goto label_265108;
        case 0x26510cu: goto label_26510c;
        case 0x265110u: goto label_265110;
        case 0x265114u: goto label_265114;
        case 0x265118u: goto label_265118;
        case 0x26511cu: goto label_26511c;
        case 0x265120u: goto label_265120;
        case 0x265124u: goto label_265124;
        case 0x265128u: goto label_265128;
        case 0x26512cu: goto label_26512c;
        case 0x265130u: goto label_265130;
        case 0x265134u: goto label_265134;
        case 0x265138u: goto label_265138;
        case 0x26513cu: goto label_26513c;
        case 0x265140u: goto label_265140;
        case 0x265144u: goto label_265144;
        case 0x265148u: goto label_265148;
        case 0x26514cu: goto label_26514c;
        case 0x265150u: goto label_265150;
        case 0x265154u: goto label_265154;
        case 0x265158u: goto label_265158;
        case 0x26515cu: goto label_26515c;
        case 0x265160u: goto label_265160;
        case 0x265164u: goto label_265164;
        case 0x265168u: goto label_265168;
        case 0x26516cu: goto label_26516c;
        case 0x265170u: goto label_265170;
        case 0x265174u: goto label_265174;
        case 0x265178u: goto label_265178;
        case 0x26517cu: goto label_26517c;
        case 0x265180u: goto label_265180;
        case 0x265184u: goto label_265184;
        case 0x265188u: goto label_265188;
        case 0x26518cu: goto label_26518c;
        case 0x265190u: goto label_265190;
        case 0x265194u: goto label_265194;
        case 0x265198u: goto label_265198;
        case 0x26519cu: goto label_26519c;
        case 0x2651a0u: goto label_2651a0;
        case 0x2651a4u: goto label_2651a4;
        case 0x2651a8u: goto label_2651a8;
        case 0x2651acu: goto label_2651ac;
        case 0x2651b0u: goto label_2651b0;
        case 0x2651b4u: goto label_2651b4;
        case 0x2651b8u: goto label_2651b8;
        case 0x2651bcu: goto label_2651bc;
        case 0x2651c0u: goto label_2651c0;
        case 0x2651c4u: goto label_2651c4;
        case 0x2651c8u: goto label_2651c8;
        case 0x2651ccu: goto label_2651cc;
        case 0x2651d0u: goto label_2651d0;
        case 0x2651d4u: goto label_2651d4;
        case 0x2651d8u: goto label_2651d8;
        case 0x2651dcu: goto label_2651dc;
        case 0x2651e0u: goto label_2651e0;
        case 0x2651e4u: goto label_2651e4;
        case 0x2651e8u: goto label_2651e8;
        case 0x2651ecu: goto label_2651ec;
        case 0x2651f0u: goto label_2651f0;
        case 0x2651f4u: goto label_2651f4;
        case 0x2651f8u: goto label_2651f8;
        case 0x2651fcu: goto label_2651fc;
        case 0x265200u: goto label_265200;
        case 0x265204u: goto label_265204;
        case 0x265208u: goto label_265208;
        case 0x26520cu: goto label_26520c;
        case 0x265210u: goto label_265210;
        case 0x265214u: goto label_265214;
        case 0x265218u: goto label_265218;
        case 0x26521cu: goto label_26521c;
        case 0x265220u: goto label_265220;
        case 0x265224u: goto label_265224;
        case 0x265228u: goto label_265228;
        case 0x26522cu: goto label_26522c;
        case 0x265230u: goto label_265230;
        case 0x265234u: goto label_265234;
        case 0x265238u: goto label_265238;
        case 0x26523cu: goto label_26523c;
        case 0x265240u: goto label_265240;
        case 0x265244u: goto label_265244;
        case 0x265248u: goto label_265248;
        case 0x26524cu: goto label_26524c;
        case 0x265250u: goto label_265250;
        case 0x265254u: goto label_265254;
        case 0x265258u: goto label_265258;
        case 0x26525cu: goto label_26525c;
        case 0x265260u: goto label_265260;
        case 0x265264u: goto label_265264;
        case 0x265268u: goto label_265268;
        case 0x26526cu: goto label_26526c;
        case 0x265270u: goto label_265270;
        case 0x265274u: goto label_265274;
        case 0x265278u: goto label_265278;
        case 0x26527cu: goto label_26527c;
        case 0x265280u: goto label_265280;
        case 0x265284u: goto label_265284;
        case 0x265288u: goto label_265288;
        case 0x26528cu: goto label_26528c;
        case 0x265290u: goto label_265290;
        case 0x265294u: goto label_265294;
        case 0x265298u: goto label_265298;
        case 0x26529cu: goto label_26529c;
        case 0x2652a0u: goto label_2652a0;
        case 0x2652a4u: goto label_2652a4;
        case 0x2652a8u: goto label_2652a8;
        case 0x2652acu: goto label_2652ac;
        case 0x2652b0u: goto label_2652b0;
        case 0x2652b4u: goto label_2652b4;
        case 0x2652b8u: goto label_2652b8;
        case 0x2652bcu: goto label_2652bc;
        case 0x2652c0u: goto label_2652c0;
        case 0x2652c4u: goto label_2652c4;
        case 0x2652c8u: goto label_2652c8;
        case 0x2652ccu: goto label_2652cc;
        case 0x2652d0u: goto label_2652d0;
        case 0x2652d4u: goto label_2652d4;
        case 0x2652d8u: goto label_2652d8;
        case 0x2652dcu: goto label_2652dc;
        case 0x2652e0u: goto label_2652e0;
        case 0x2652e4u: goto label_2652e4;
        case 0x2652e8u: goto label_2652e8;
        case 0x2652ecu: goto label_2652ec;
        case 0x2652f0u: goto label_2652f0;
        case 0x2652f4u: goto label_2652f4;
        case 0x2652f8u: goto label_2652f8;
        case 0x2652fcu: goto label_2652fc;
        case 0x265300u: goto label_265300;
        case 0x265304u: goto label_265304;
        case 0x265308u: goto label_265308;
        case 0x26530cu: goto label_26530c;
        case 0x265310u: goto label_265310;
        case 0x265314u: goto label_265314;
        case 0x265318u: goto label_265318;
        case 0x26531cu: goto label_26531c;
        case 0x265320u: goto label_265320;
        case 0x265324u: goto label_265324;
        case 0x265328u: goto label_265328;
        case 0x26532cu: goto label_26532c;
        case 0x265330u: goto label_265330;
        case 0x265334u: goto label_265334;
        case 0x265338u: goto label_265338;
        case 0x26533cu: goto label_26533c;
        case 0x265340u: goto label_265340;
        case 0x265344u: goto label_265344;
        case 0x265348u: goto label_265348;
        case 0x26534cu: goto label_26534c;
        case 0x265350u: goto label_265350;
        case 0x265354u: goto label_265354;
        case 0x265358u: goto label_265358;
        case 0x26535cu: goto label_26535c;
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
        default: return;
    }

label_2650a8:
    // 0x2650a8: 0x0  nop
    ctx->pc = 0x2650a8u;
    // NOP
label_2650ac:
    // 0x2650ac: 0x0  nop
    ctx->pc = 0x2650acu;
    // NOP
label_2650b0:
    // 0x2650b0: 0xf7cc  syscall     991
    ctx->pc = 0x2650b0u;
    ctx->pc = 0x2650B4u;
runtime->handleSyscall(rdram, ctx, 0x3DFu);
label_2650b4:
    // 0x2650b4: 0x5a30  tge         $zero, $zero, 360
    ctx->pc = 0x2650b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2650b8:
    // 0x2650b8: 0x0  nop
    ctx->pc = 0x2650b8u;
    // NOP
label_2650bc:
    // 0x2650bc: 0x0  nop
    ctx->pc = 0x2650bcu;
    // NOP
label_2650c0:
    // 0x2650c0: 0xf7d8  .word       0x0000F7D8                   # mult        $fp, $zero, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2650c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_2650c4:
    // 0x2650c4: 0x3e90  .word       0x00003E90                   # mfhi        $a3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2650c4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2650c8:
    // 0x2650c8: 0x0  nop
    ctx->pc = 0x2650c8u;
    // NOP
label_2650cc:
    // 0x2650cc: 0x0  nop
    ctx->pc = 0x2650ccu;
    // NOP
label_2650d0:
    // 0x2650d0: 0xf7e0  .word       0x0000F7E0                   # add         $fp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2650d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2650d4:
    // 0x2650d4: 0x51f0  tge         $zero, $zero, 327
    ctx->pc = 0x2650d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2650d8:
    // 0x2650d8: 0x0  nop
    ctx->pc = 0x2650d8u;
    // NOP
label_2650dc:
    // 0x2650dc: 0x0  nop
    ctx->pc = 0x2650dcu;
    // NOP
label_2650e0:
    // 0x2650e0: 0xf7eb  .word       0x0000F7EB                   # sltu        $fp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2650e0u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2650e4:
    // 0x2650e4: 0x53e0  .word       0x000053E0                   # add         $t2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2650e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2650e8:
    // 0x2650e8: 0x0  nop
    ctx->pc = 0x2650e8u;
    // NOP
label_2650ec:
    // 0x2650ec: 0x0  nop
    ctx->pc = 0x2650ecu;
    // NOP
label_2650f0:
    // 0x2650f0: 0xf7f6  tne         $zero, $zero, 991
    ctx->pc = 0x2650f0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2650f4:
    // 0x2650f4: 0x5700  sll         $t2, $zero, 28
    ctx->pc = 0x2650f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2650f8:
    // 0x2650f8: 0x0  nop
    ctx->pc = 0x2650f8u;
    // NOP
label_2650fc:
    // 0x2650fc: 0x0  nop
    ctx->pc = 0x2650fcu;
    // NOP
label_265100:
    // 0x265100: 0xf801  .word       0x0000F801                   # INVALID     $zero, $zero, -0x7FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265100u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x265100 raw=0x0000F801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265104:
    // 0x265104: 0x6640  sll         $t4, $zero, 25
    ctx->pc = 0x265104u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_265108:
    // 0x265108: 0x0  nop
    ctx->pc = 0x265108u;
    // NOP
label_26510c:
    // 0x26510c: 0x0  nop
    ctx->pc = 0x26510cu;
    // NOP
label_265110:
    // 0x265110: 0xf80e  .word       0x0000F80E                   # INVALID     $zero, $zero, -0x7F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265110u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x265110 raw=0x0000F80E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265114:
    // 0x265114: 0x7da0  .word       0x00007DA0                   # add         $t7, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265114u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_265118:
    // 0x265118: 0x0  nop
    ctx->pc = 0x265118u;
    // NOP
label_26511c:
    // 0x26511c: 0x0  nop
    ctx->pc = 0x26511cu;
    // NOP
label_265120:
    // 0x265120: 0xf81e  ddiv        $ra, $zero, $zero
    ctx->pc = 0x265120u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x265120 raw=0x0000F81E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265124:
    // 0x265124: 0x9f60  .word       0x00009F60                   # add         $s3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265124u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_265128:
    // 0x265128: 0x0  nop
    ctx->pc = 0x265128u;
    // NOP
label_26512c:
    // 0x26512c: 0x0  nop
    ctx->pc = 0x26512cu;
    // NOP
label_265130:
    // 0x265130: 0xf832  tlt         $zero, $zero, 992
    ctx->pc = 0x265130u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265134:
    // 0x265134: 0x6a50  .word       0x00006A50                   # mfhi        $t5 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265134u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_265138:
    // 0x265138: 0x0  nop
    ctx->pc = 0x265138u;
    // NOP
label_26513c:
    // 0x26513c: 0x0  nop
    ctx->pc = 0x26513cu;
    // NOP
label_265140:
    // 0x265140: 0xf840  sll         $ra, $zero, 1
    ctx->pc = 0x265140u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_265144:
    // 0x265144: 0x5ba0  .word       0x00005BA0                   # add         $t3, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265144u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_265148:
    // 0x265148: 0x0  nop
    ctx->pc = 0x265148u;
    // NOP
label_26514c:
    // 0x26514c: 0x0  nop
    ctx->pc = 0x26514cu;
    // NOP
label_265150:
    // 0x265150: 0xf84c  syscall     993
    ctx->pc = 0x265150u;
    ctx->pc = 0x265154u;
runtime->handleSyscall(rdram, ctx, 0x3E1u);
label_265154:
    // 0x265154: 0x6110  .word       0x00006110                   # mfhi        $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265154u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_265158:
    // 0x265158: 0x0  nop
    ctx->pc = 0x265158u;
    // NOP
label_26515c:
    // 0x26515c: 0x0  nop
    ctx->pc = 0x26515cu;
    // NOP
label_265160:
    // 0x265160: 0xf859  .word       0x0000F859                   # multu       $zero, $zero # 0000F840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265160u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_265164:
    // 0x265164: 0x9f60  .word       0x00009F60                   # add         $s3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265164u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_265168:
    // 0x265168: 0x0  nop
    ctx->pc = 0x265168u;
    // NOP
label_26516c:
    // 0x26516c: 0x0  nop
    ctx->pc = 0x26516cu;
    // NOP
label_265170:
    // 0x265170: 0xf86d  .word       0x0000F86D                   # daddu       $ra, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265170u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_265174:
    // 0x265174: 0x4160  .word       0x00004160                   # add         $t0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265174u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_265178:
    // 0x265178: 0x0  nop
    ctx->pc = 0x265178u;
    // NOP
label_26517c:
    // 0x26517c: 0x0  nop
    ctx->pc = 0x26517cu;
    // NOP
label_265180:
    // 0x265180: 0xf876  tne         $zero, $zero, 993
    ctx->pc = 0x265180u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265184:
    // 0x265184: 0x5c80  sll         $t3, $zero, 18
    ctx->pc = 0x265184u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_265188:
    // 0x265188: 0x0  nop
    ctx->pc = 0x265188u;
    // NOP
label_26518c:
    // 0x26518c: 0x0  nop
    ctx->pc = 0x26518cu;
    // NOP
label_265190:
    // 0x265190: 0xf882  srl         $ra, $zero, 2
    ctx->pc = 0x265190u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_265194:
    // 0x265194: 0xac10  .word       0x0000AC10                   # mfhi        $s5 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265194u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_265198:
    // 0x265198: 0x0  nop
    ctx->pc = 0x265198u;
    // NOP
label_26519c:
    // 0x26519c: 0x0  nop
    ctx->pc = 0x26519cu;
    // NOP
label_2651a0:
    // 0x2651a0: 0xf898  .word       0x0000F898                   # mult        $ra, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2651a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2651a4:
    // 0x2651a4: 0xaaf0  tge         $zero, $zero, 683
    ctx->pc = 0x2651a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2651a8:
    // 0x2651a8: 0x0  nop
    ctx->pc = 0x2651a8u;
    // NOP
label_2651ac:
    // 0x2651ac: 0x0  nop
    ctx->pc = 0x2651acu;
    // NOP
label_2651b0:
    // 0x2651b0: 0xf8ae  .word       0x0000F8AE                   # dsub        $ra, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2651b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2651b4:
    // 0x2651b4: 0x5c30  tge         $zero, $zero, 368
    ctx->pc = 0x2651b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2651b8:
    // 0x2651b8: 0x0  nop
    ctx->pc = 0x2651b8u;
    // NOP
label_2651bc:
    // 0x2651bc: 0x0  nop
    ctx->pc = 0x2651bcu;
    // NOP
label_2651c0:
    // 0x2651c0: 0xf8ba  dsrl        $ra, $zero, 2
    ctx->pc = 0x2651c0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> 2);
label_2651c4:
    // 0x2651c4: 0x4360  .word       0x00004360                   # add         $t0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2651c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2651c8:
    // 0x2651c8: 0x0  nop
    ctx->pc = 0x2651c8u;
    // NOP
label_2651cc:
    // 0x2651cc: 0x0  nop
    ctx->pc = 0x2651ccu;
    // NOP
label_2651d0:
    // 0x2651d0: 0xf8c3  sra         $ra, $zero, 3
    ctx->pc = 0x2651d0u;
    SET_GPR_S32(ctx, 31, SRA32(GPR_S32(ctx, 0), 3));
label_2651d4:
    // 0x2651d4: 0x2c50  .word       0x00002C50                   # mfhi        $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2651d4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2651d8:
    // 0x2651d8: 0x0  nop
    ctx->pc = 0x2651d8u;
    // NOP
label_2651dc:
    // 0x2651dc: 0x0  nop
    ctx->pc = 0x2651dcu;
    // NOP
label_2651e0:
    // 0x2651e0: 0xf8c9  .word       0x0000F8C9                   # jalr        $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_2651e4:
    if (ctx->pc == 0x2651E4u) {
        ctx->pc = 0x2651E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651E0u;
        // 0x2651e4: 0x5d50  .word       0x00005D50                   # mfhi        $t3 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2651E8u;
        goto label_2651e8;
    }
    ctx->pc = 0x2651E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 31, 0x2651E8u);
        ctx->pc = 0x2651E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651E0u;
        // 0x2651e4: 0x5d50  .word       0x00005D50                   # mfhi        $t3 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2651E0u, 0x2651E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2651E8u;
label_2651e8:
    // 0x2651e8: 0x0  nop
    ctx->pc = 0x2651e8u;
    // NOP
label_2651ec:
    // 0x2651ec: 0x0  nop
    ctx->pc = 0x2651ecu;
    // NOP
label_2651f0:
    // 0x2651f0: 0xf8d5  .word       0x0000F8D5                   # INVALID     $zero, $zero, -0x72B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2651f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2651F0 raw=0x0000F8D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2651f4:
    // 0x2651f4: 0x6890  .word       0x00006890                   # mfhi        $t5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2651f4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2651f8:
    // 0x2651f8: 0x0  nop
    ctx->pc = 0x2651f8u;
    // NOP
label_2651fc:
    // 0x2651fc: 0x0  nop
    ctx->pc = 0x2651fcu;
    // NOP
label_265200:
    // 0x265200: 0xf8e3  .word       0x0000F8E3                   # negu        $ra, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265200u;
    SET_GPR_S32(ctx, 31, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_265204:
    // 0x265204: 0x7060  .word       0x00007060                   # add         $t6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265204u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_265208:
    // 0x265208: 0x0  nop
    ctx->pc = 0x265208u;
    // NOP
label_26520c:
    // 0x26520c: 0x0  nop
    ctx->pc = 0x26520cu;
    // NOP
label_265210:
    // 0x265210: 0xf8f2  tlt         $zero, $zero, 995
    ctx->pc = 0x265210u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265214:
    // 0x265214: 0x91d0  .word       0x000091D0                   # mfhi        $s2 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265214u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_265218:
    // 0x265218: 0x0  nop
    ctx->pc = 0x265218u;
    // NOP
label_26521c:
    // 0x26521c: 0x0  nop
    ctx->pc = 0x26521cu;
    // NOP
label_265220:
    // 0x265220: 0xf905  .word       0x0000F905                   # INVALID     $zero, $zero, -0x6FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265220u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x265220 raw=0x0000F905"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265224:
    // 0x265224: 0xc6f0  tge         $zero, $zero, 795
    ctx->pc = 0x265224u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265228:
    // 0x265228: 0x0  nop
    ctx->pc = 0x265228u;
    // NOP
label_26522c:
    // 0x26522c: 0x0  nop
    ctx->pc = 0x26522cu;
    // NOP
label_265230:
    // 0x265230: 0xf91e  .word       0x0000F91E                   # ddiv        $ra, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265230u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x265230 raw=0x0000F91E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265234:
    // 0x265234: 0x9d20  .word       0x00009D20                   # add         $s3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265234u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_265238:
    // 0x265238: 0x0  nop
    ctx->pc = 0x265238u;
    // NOP
label_26523c:
    // 0x26523c: 0x0  nop
    ctx->pc = 0x26523cu;
    // NOP
label_265240:
    // 0x265240: 0xf932  tlt         $zero, $zero, 996
    ctx->pc = 0x265240u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265244:
    // 0x265244: 0x7360  .word       0x00007360                   # add         $t6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265244u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_265248:
    // 0x265248: 0x0  nop
    ctx->pc = 0x265248u;
    // NOP
label_26524c:
    // 0x26524c: 0x0  nop
    ctx->pc = 0x26524cu;
    // NOP
label_265250:
    // 0x265250: 0xf941  .word       0x0000F941                   # INVALID     $zero, $zero, -0x6BF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265250u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x265250 raw=0x0000F941"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265254:
    // 0x265254: 0x2ee0  .word       0x00002EE0                   # add         $a1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265254u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_265258:
    // 0x265258: 0x0  nop
    ctx->pc = 0x265258u;
    // NOP
label_26525c:
    // 0x26525c: 0x0  nop
    ctx->pc = 0x26525cu;
    // NOP
label_265260:
    // 0x265260: 0xf947  .word       0x0000F947                   # srav        $ra, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265260u;
    SET_GPR_S32(ctx, 31, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_265264:
    // 0x265264: 0x6490  .word       0x00006490                   # mfhi        $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265264u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_265268:
    // 0x265268: 0x0  nop
    ctx->pc = 0x265268u;
    // NOP
label_26526c:
    // 0x26526c: 0x0  nop
    ctx->pc = 0x26526cu;
    // NOP
label_265270:
    // 0x265270: 0xf954  .word       0x0000F954                   # dsllv       $ra, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265270u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_265274:
    // 0x265274: 0x9cc0  sll         $s3, $zero, 19
    ctx->pc = 0x265274u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_265278:
    // 0x265278: 0x0  nop
    ctx->pc = 0x265278u;
    // NOP
label_26527c:
    // 0x26527c: 0x0  nop
    ctx->pc = 0x26527cu;
    // NOP
label_265280:
    // 0x265280: 0xf968  .word       0x0000F968                   # mfsa        $ra # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x265280u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_265284:
    // 0x265284: 0x6fe0  .word       0x00006FE0                   # add         $t5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_265288:
    // 0x265288: 0x0  nop
    ctx->pc = 0x265288u;
    // NOP
label_26528c:
    // 0x26528c: 0x0  nop
    ctx->pc = 0x26528cu;
    // NOP
label_265290:
    // 0x265290: 0xf976  tne         $zero, $zero, 997
    ctx->pc = 0x265290u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_265294:
    // 0x265294: 0x6d20  .word       0x00006D20                   # add         $t5, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265294u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_265298:
    // 0x265298: 0x0  nop
    ctx->pc = 0x265298u;
    // NOP
label_26529c:
    // 0x26529c: 0x0  nop
    ctx->pc = 0x26529cu;
    // NOP
label_2652a0:
    // 0x2652a0: 0xf984  .word       0x0000F984                   # sllv        $ra, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2652a0u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2652a4:
    // 0x2652a4: 0x6a30  tge         $zero, $zero, 424
    ctx->pc = 0x2652a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2652a8:
    // 0x2652a8: 0x0  nop
    ctx->pc = 0x2652a8u;
    // NOP
label_2652ac:
    // 0x2652ac: 0x0  nop
    ctx->pc = 0x2652acu;
    // NOP
label_2652b0:
    // 0x2652b0: 0xf992  .word       0x0000F992                   # mflo        $ra # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2652b0u;
    SET_GPR_U64(ctx, 31, ctx->lo);
label_2652b4:
    // 0x2652b4: 0x7eb0  tge         $zero, $zero, 506
    ctx->pc = 0x2652b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2652b8:
    // 0x2652b8: 0x0  nop
    ctx->pc = 0x2652b8u;
    // NOP
label_2652bc:
    // 0x2652bc: 0x0  nop
    ctx->pc = 0x2652bcu;
    // NOP
label_2652c0:
    // 0x2652c0: 0xf9a2  .word       0x0000F9A2                   # neg         $ra, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2652c0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_2652c4:
    // 0x2652c4: 0x49e0  .word       0x000049E0                   # add         $t1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2652c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2652c8:
    // 0x2652c8: 0x0  nop
    ctx->pc = 0x2652c8u;
    // NOP
label_2652cc:
    // 0x2652cc: 0x0  nop
    ctx->pc = 0x2652ccu;
    // NOP
label_2652d0:
    // 0x2652d0: 0xf9ac  .word       0x0000F9AC                   # dadd        $ra, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2652d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2652d4:
    // 0x2652d4: 0x66a0  .word       0x000066A0                   # add         $t4, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2652d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2652d8:
    // 0x2652d8: 0x0  nop
    ctx->pc = 0x2652d8u;
    // NOP
label_2652dc:
    // 0x2652dc: 0x0  nop
    ctx->pc = 0x2652dcu;
    // NOP
label_2652e0:
    // 0x2652e0: 0xf9b9  .word       0x0000F9B9                   # INVALID     $zero, $zero, -0x647 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2652e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2652E0 raw=0x0000F9B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2652e4:
    // 0x2652e4: 0x4680  sll         $t0, $zero, 26
    ctx->pc = 0x2652e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_2652e8:
    // 0x2652e8: 0x0  nop
    ctx->pc = 0x2652e8u;
    // NOP
label_2652ec:
    // 0x2652ec: 0x0  nop
    ctx->pc = 0x2652ecu;
    // NOP
label_2652f0:
    // 0x2652f0: 0xf9c2  srl         $ra, $zero, 7
    ctx->pc = 0x2652f0u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), 7));
label_2652f4:
    // 0x2652f4: 0x6450  .word       0x00006450                   # mfhi        $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2652f4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2652f8:
    // 0x2652f8: 0x0  nop
    ctx->pc = 0x2652f8u;
    // NOP
label_2652fc:
    // 0x2652fc: 0x0  nop
    ctx->pc = 0x2652fcu;
    // NOP
label_265300:
    // 0x265300: 0xf9cf  .word       0x0000F9CF                   # sync # 0000F800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265300u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_265304:
    // 0x265304: 0x3da0  .word       0x00003DA0                   # add         $a3, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265304u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_265308:
    // 0x265308: 0x0  nop
    ctx->pc = 0x265308u;
    // NOP
label_26530c:
    // 0x26530c: 0x0  nop
    ctx->pc = 0x26530cu;
    // NOP
label_265310:
    // 0x265310: 0xf9d7  .word       0x0000F9D7                   # dsrav       $ra, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265310u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_265314:
    // 0x265314: 0x3490  .word       0x00003490                   # mfhi        $a2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265314u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_265318:
    // 0x265318: 0x0  nop
    ctx->pc = 0x265318u;
    // NOP
label_26531c:
    // 0x26531c: 0x0  nop
    ctx->pc = 0x26531cu;
    // NOP
label_265320:
    // 0x265320: 0xf9de  .word       0x0000F9DE                   # ddiv        $ra, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265320u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x265320 raw=0x0000F9DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_265324:
    // 0x265324: 0x69c0  sll         $t5, $zero, 7
    ctx->pc = 0x265324u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_265328:
    // 0x265328: 0x0  nop
    ctx->pc = 0x265328u;
    // NOP
label_26532c:
    // 0x26532c: 0x0  nop
    ctx->pc = 0x26532cu;
    // NOP
label_265330:
    // 0x265330: 0xf9ec  .word       0x0000F9EC                   # dadd        $ra, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265330u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_265334:
    // 0x265334: 0x9510  .word       0x00009510                   # mfhi        $s2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265334u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_265338:
    // 0x265338: 0x0  nop
    ctx->pc = 0x265338u;
    // NOP
label_26533c:
    // 0x26533c: 0x0  nop
    ctx->pc = 0x26533cu;
    // NOP
label_265340:
    // 0x265340: 0xf9ff  dsra32      $ra, $zero, 7
    ctx->pc = 0x265340u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (32 + 7));
label_265344:
    // 0x265344: 0x4750  .word       0x00004750                   # mfhi        $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x265344u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_265348:
    // 0x265348: 0x0  nop
    ctx->pc = 0x265348u;
    // NOP
label_26534c:
    // 0x26534c: 0x0  nop
    ctx->pc = 0x26534cu;
    // NOP
label_265350:
    // 0x265350: 0xfa08  .word       0x0000FA08                   # jr          $zero # 0000FA00 <InstrIdType: CPU_SPECIAL>
label_265354:
    if (ctx->pc == 0x265354u) {
        ctx->pc = 0x265354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265350u;
        // 0x265354: 0x47c0  sll         $t0, $zero, 31 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265358u;
        goto label_265358;
    }
    ctx->pc = 0x265350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x265354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265350u;
        // 0x265354: 0x47c0  sll         $t0, $zero, 31 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265350u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x265358u;
label_265358:
    // 0x265358: 0x0  nop
    ctx->pc = 0x265358u;
    // NOP
label_26535c:
    // 0x26535c: 0x0  nop
    ctx->pc = 0x26535cu;
    // NOP
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
    ctx->pc = 0x265878u;
    return;
}
