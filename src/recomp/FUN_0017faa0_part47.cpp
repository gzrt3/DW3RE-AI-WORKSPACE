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


void FUN_0017faa0_part47(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x196200u: goto label_196200;
        case 0x196204u: goto label_196204;
        case 0x196208u: goto label_196208;
        case 0x19620cu: goto label_19620c;
        case 0x196210u: goto label_196210;
        case 0x196214u: goto label_196214;
        case 0x196218u: goto label_196218;
        case 0x19621cu: goto label_19621c;
        case 0x196220u: goto label_196220;
        case 0x196224u: goto label_196224;
        case 0x196228u: goto label_196228;
        case 0x19622cu: goto label_19622c;
        case 0x196230u: goto label_196230;
        case 0x196234u: goto label_196234;
        case 0x196238u: goto label_196238;
        case 0x19623cu: goto label_19623c;
        case 0x196240u: goto label_196240;
        case 0x196244u: goto label_196244;
        case 0x196248u: goto label_196248;
        case 0x19624cu: goto label_19624c;
        case 0x196250u: goto label_196250;
        case 0x196254u: goto label_196254;
        case 0x196258u: goto label_196258;
        case 0x19625cu: goto label_19625c;
        case 0x196260u: goto label_196260;
        case 0x196264u: goto label_196264;
        case 0x196268u: goto label_196268;
        case 0x19626cu: goto label_19626c;
        case 0x196270u: goto label_196270;
        case 0x196274u: goto label_196274;
        case 0x196278u: goto label_196278;
        case 0x19627cu: goto label_19627c;
        case 0x196280u: goto label_196280;
        case 0x196284u: goto label_196284;
        case 0x196288u: goto label_196288;
        case 0x19628cu: goto label_19628c;
        case 0x196290u: goto label_196290;
        case 0x196294u: goto label_196294;
        case 0x196298u: goto label_196298;
        case 0x19629cu: goto label_19629c;
        case 0x1962a0u: goto label_1962a0;
        case 0x1962a4u: goto label_1962a4;
        case 0x1962a8u: goto label_1962a8;
        case 0x1962acu: goto label_1962ac;
        case 0x1962b0u: goto label_1962b0;
        case 0x1962b4u: goto label_1962b4;
        case 0x1962b8u: goto label_1962b8;
        case 0x1962bcu: goto label_1962bc;
        case 0x1962c0u: goto label_1962c0;
        case 0x1962c4u: goto label_1962c4;
        case 0x1962c8u: goto label_1962c8;
        case 0x1962ccu: goto label_1962cc;
        case 0x1962d0u: goto label_1962d0;
        case 0x1962d4u: goto label_1962d4;
        case 0x1962d8u: goto label_1962d8;
        case 0x1962dcu: goto label_1962dc;
        case 0x1962e0u: goto label_1962e0;
        case 0x1962e4u: goto label_1962e4;
        case 0x1962e8u: goto label_1962e8;
        case 0x1962ecu: goto label_1962ec;
        case 0x1962f0u: goto label_1962f0;
        case 0x1962f4u: goto label_1962f4;
        case 0x1962f8u: goto label_1962f8;
        case 0x1962fcu: goto label_1962fc;
        case 0x196300u: goto label_196300;
        case 0x196304u: goto label_196304;
        case 0x196308u: goto label_196308;
        case 0x19630cu: goto label_19630c;
        case 0x196310u: goto label_196310;
        case 0x196314u: goto label_196314;
        case 0x196318u: goto label_196318;
        case 0x19631cu: goto label_19631c;
        case 0x196320u: goto label_196320;
        case 0x196324u: goto label_196324;
        case 0x196328u: goto label_196328;
        case 0x19632cu: goto label_19632c;
        case 0x196330u: goto label_196330;
        case 0x196334u: goto label_196334;
        case 0x196338u: goto label_196338;
        case 0x19633cu: goto label_19633c;
        case 0x196340u: goto label_196340;
        case 0x196344u: goto label_196344;
        case 0x196348u: goto label_196348;
        case 0x19634cu: goto label_19634c;
        case 0x196350u: goto label_196350;
        case 0x196354u: goto label_196354;
        case 0x196358u: goto label_196358;
        case 0x19635cu: goto label_19635c;
        case 0x196360u: goto label_196360;
        case 0x196364u: goto label_196364;
        case 0x196368u: goto label_196368;
        case 0x19636cu: goto label_19636c;
        case 0x196370u: goto label_196370;
        case 0x196374u: goto label_196374;
        case 0x196378u: goto label_196378;
        case 0x19637cu: goto label_19637c;
        case 0x196380u: goto label_196380;
        case 0x196384u: goto label_196384;
        case 0x196388u: goto label_196388;
        case 0x19638cu: goto label_19638c;
        case 0x196390u: goto label_196390;
        case 0x196394u: goto label_196394;
        case 0x196398u: goto label_196398;
        case 0x19639cu: goto label_19639c;
        case 0x1963a0u: goto label_1963a0;
        case 0x1963a4u: goto label_1963a4;
        case 0x1963a8u: goto label_1963a8;
        case 0x1963acu: goto label_1963ac;
        case 0x1963b0u: goto label_1963b0;
        case 0x1963b4u: goto label_1963b4;
        case 0x1963b8u: goto label_1963b8;
        case 0x1963bcu: goto label_1963bc;
        case 0x1963c0u: goto label_1963c0;
        case 0x1963c4u: goto label_1963c4;
        case 0x1963c8u: goto label_1963c8;
        case 0x1963ccu: goto label_1963cc;
        case 0x1963d0u: goto label_1963d0;
        case 0x1963d4u: goto label_1963d4;
        case 0x1963d8u: goto label_1963d8;
        case 0x1963dcu: goto label_1963dc;
        case 0x1963e0u: goto label_1963e0;
        case 0x1963e4u: goto label_1963e4;
        case 0x1963e8u: goto label_1963e8;
        case 0x1963ecu: goto label_1963ec;
        case 0x1963f0u: goto label_1963f0;
        case 0x1963f4u: goto label_1963f4;
        case 0x1963f8u: goto label_1963f8;
        case 0x1963fcu: goto label_1963fc;
        case 0x196400u: goto label_196400;
        case 0x196404u: goto label_196404;
        case 0x196408u: goto label_196408;
        case 0x19640cu: goto label_19640c;
        case 0x196410u: goto label_196410;
        case 0x196414u: goto label_196414;
        case 0x196418u: goto label_196418;
        case 0x19641cu: goto label_19641c;
        case 0x196420u: goto label_196420;
        case 0x196424u: goto label_196424;
        case 0x196428u: goto label_196428;
        case 0x19642cu: goto label_19642c;
        case 0x196430u: goto label_196430;
        case 0x196434u: goto label_196434;
        case 0x196438u: goto label_196438;
        case 0x19643cu: goto label_19643c;
        case 0x196440u: goto label_196440;
        case 0x196444u: goto label_196444;
        case 0x196448u: goto label_196448;
        case 0x19644cu: goto label_19644c;
        case 0x196450u: goto label_196450;
        case 0x196454u: goto label_196454;
        case 0x196458u: goto label_196458;
        case 0x19645cu: goto label_19645c;
        case 0x196460u: goto label_196460;
        case 0x196464u: goto label_196464;
        case 0x196468u: goto label_196468;
        case 0x19646cu: goto label_19646c;
        case 0x196470u: goto label_196470;
        case 0x196474u: goto label_196474;
        case 0x196478u: goto label_196478;
        case 0x19647cu: goto label_19647c;
        case 0x196480u: goto label_196480;
        case 0x196484u: goto label_196484;
        case 0x196488u: goto label_196488;
        case 0x19648cu: goto label_19648c;
        case 0x196490u: goto label_196490;
        case 0x196494u: goto label_196494;
        case 0x196498u: goto label_196498;
        case 0x19649cu: goto label_19649c;
        case 0x1964a0u: goto label_1964a0;
        case 0x1964a4u: goto label_1964a4;
        case 0x1964a8u: goto label_1964a8;
        case 0x1964acu: goto label_1964ac;
        case 0x1964b0u: goto label_1964b0;
        case 0x1964b4u: goto label_1964b4;
        case 0x1964b8u: goto label_1964b8;
        case 0x1964bcu: goto label_1964bc;
        case 0x1964c0u: goto label_1964c0;
        case 0x1964c4u: goto label_1964c4;
        case 0x1964c8u: goto label_1964c8;
        case 0x1964ccu: goto label_1964cc;
        case 0x1964d0u: goto label_1964d0;
        case 0x1964d4u: goto label_1964d4;
        case 0x1964d8u: goto label_1964d8;
        case 0x1964dcu: goto label_1964dc;
        case 0x1964e0u: goto label_1964e0;
        case 0x1964e4u: goto label_1964e4;
        case 0x1964e8u: goto label_1964e8;
        case 0x1964ecu: goto label_1964ec;
        case 0x1964f0u: goto label_1964f0;
        case 0x1964f4u: goto label_1964f4;
        case 0x1964f8u: goto label_1964f8;
        case 0x1964fcu: goto label_1964fc;
        case 0x196500u: goto label_196500;
        case 0x196504u: goto label_196504;
        case 0x196508u: goto label_196508;
        case 0x19650cu: goto label_19650c;
        case 0x196510u: goto label_196510;
        case 0x196514u: goto label_196514;
        case 0x196518u: goto label_196518;
        case 0x19651cu: goto label_19651c;
        case 0x196520u: goto label_196520;
        case 0x196524u: goto label_196524;
        case 0x196528u: goto label_196528;
        case 0x19652cu: goto label_19652c;
        case 0x196530u: goto label_196530;
        case 0x196534u: goto label_196534;
        case 0x196538u: goto label_196538;
        case 0x19653cu: goto label_19653c;
        case 0x196540u: goto label_196540;
        case 0x196544u: goto label_196544;
        case 0x196548u: goto label_196548;
        case 0x19654cu: goto label_19654c;
        case 0x196550u: goto label_196550;
        case 0x196554u: goto label_196554;
        case 0x196558u: goto label_196558;
        case 0x19655cu: goto label_19655c;
        case 0x196560u: goto label_196560;
        case 0x196564u: goto label_196564;
        case 0x196568u: goto label_196568;
        case 0x19656cu: goto label_19656c;
        case 0x196570u: goto label_196570;
        case 0x196574u: goto label_196574;
        case 0x196578u: goto label_196578;
        case 0x19657cu: goto label_19657c;
        case 0x196580u: goto label_196580;
        case 0x196584u: goto label_196584;
        case 0x196588u: goto label_196588;
        case 0x19658cu: goto label_19658c;
        case 0x196590u: goto label_196590;
        case 0x196594u: goto label_196594;
        case 0x196598u: goto label_196598;
        case 0x19659cu: goto label_19659c;
        case 0x1965a0u: goto label_1965a0;
        case 0x1965a4u: goto label_1965a4;
        case 0x1965a8u: goto label_1965a8;
        case 0x1965acu: goto label_1965ac;
        case 0x1965b0u: goto label_1965b0;
        case 0x1965b4u: goto label_1965b4;
        case 0x1965b8u: goto label_1965b8;
        case 0x1965bcu: goto label_1965bc;
        case 0x1965c0u: goto label_1965c0;
        case 0x1965c4u: goto label_1965c4;
        case 0x1965c8u: goto label_1965c8;
        case 0x1965ccu: goto label_1965cc;
        case 0x1965d0u: goto label_1965d0;
        case 0x1965d4u: goto label_1965d4;
        case 0x1965d8u: goto label_1965d8;
        case 0x1965dcu: goto label_1965dc;
        case 0x1965e0u: goto label_1965e0;
        case 0x1965e4u: goto label_1965e4;
        case 0x1965e8u: goto label_1965e8;
        case 0x1965ecu: goto label_1965ec;
        case 0x1965f0u: goto label_1965f0;
        case 0x1965f4u: goto label_1965f4;
        case 0x1965f8u: goto label_1965f8;
        case 0x1965fcu: goto label_1965fc;
        case 0x196600u: goto label_196600;
        case 0x196604u: goto label_196604;
        case 0x196608u: goto label_196608;
        case 0x19660cu: goto label_19660c;
        case 0x196610u: goto label_196610;
        case 0x196614u: goto label_196614;
        case 0x196618u: goto label_196618;
        case 0x19661cu: goto label_19661c;
        case 0x196620u: goto label_196620;
        case 0x196624u: goto label_196624;
        case 0x196628u: goto label_196628;
        case 0x19662cu: goto label_19662c;
        case 0x196630u: goto label_196630;
        case 0x196634u: goto label_196634;
        case 0x196638u: goto label_196638;
        case 0x19663cu: goto label_19663c;
        case 0x196640u: goto label_196640;
        case 0x196644u: goto label_196644;
        case 0x196648u: goto label_196648;
        case 0x19664cu: goto label_19664c;
        case 0x196650u: goto label_196650;
        case 0x196654u: goto label_196654;
        case 0x196658u: goto label_196658;
        case 0x19665cu: goto label_19665c;
        case 0x196660u: goto label_196660;
        case 0x196664u: goto label_196664;
        case 0x196668u: goto label_196668;
        case 0x19666cu: goto label_19666c;
        case 0x196670u: goto label_196670;
        case 0x196674u: goto label_196674;
        case 0x196678u: goto label_196678;
        case 0x19667cu: goto label_19667c;
        case 0x196680u: goto label_196680;
        case 0x196684u: goto label_196684;
        case 0x196688u: goto label_196688;
        case 0x19668cu: goto label_19668c;
        case 0x196690u: goto label_196690;
        case 0x196694u: goto label_196694;
        case 0x196698u: goto label_196698;
        case 0x19669cu: goto label_19669c;
        case 0x1966a0u: goto label_1966a0;
        case 0x1966a4u: goto label_1966a4;
        case 0x1966a8u: goto label_1966a8;
        case 0x1966acu: goto label_1966ac;
        case 0x1966b0u: goto label_1966b0;
        case 0x1966b4u: goto label_1966b4;
        case 0x1966b8u: goto label_1966b8;
        case 0x1966bcu: goto label_1966bc;
        case 0x1966c0u: goto label_1966c0;
        case 0x1966c4u: goto label_1966c4;
        case 0x1966c8u: goto label_1966c8;
        case 0x1966ccu: goto label_1966cc;
        case 0x1966d0u: goto label_1966d0;
        case 0x1966d4u: goto label_1966d4;
        case 0x1966d8u: goto label_1966d8;
        case 0x1966dcu: goto label_1966dc;
        case 0x1966e0u: goto label_1966e0;
        case 0x1966e4u: goto label_1966e4;
        case 0x1966e8u: goto label_1966e8;
        case 0x1966ecu: goto label_1966ec;
        case 0x1966f0u: goto label_1966f0;
        case 0x1966f4u: goto label_1966f4;
        case 0x1966f8u: goto label_1966f8;
        case 0x1966fcu: goto label_1966fc;
        case 0x196700u: goto label_196700;
        case 0x196704u: goto label_196704;
        case 0x196708u: goto label_196708;
        case 0x19670cu: goto label_19670c;
        case 0x196710u: goto label_196710;
        case 0x196714u: goto label_196714;
        case 0x196718u: goto label_196718;
        case 0x19671cu: goto label_19671c;
        case 0x196720u: goto label_196720;
        case 0x196724u: goto label_196724;
        case 0x196728u: goto label_196728;
        case 0x19672cu: goto label_19672c;
        case 0x196730u: goto label_196730;
        case 0x196734u: goto label_196734;
        case 0x196738u: goto label_196738;
        case 0x19673cu: goto label_19673c;
        case 0x196740u: goto label_196740;
        case 0x196744u: goto label_196744;
        case 0x196748u: goto label_196748;
        case 0x19674cu: goto label_19674c;
        case 0x196750u: goto label_196750;
        case 0x196754u: goto label_196754;
        case 0x196758u: goto label_196758;
        case 0x19675cu: goto label_19675c;
        case 0x196760u: goto label_196760;
        case 0x196764u: goto label_196764;
        case 0x196768u: goto label_196768;
        case 0x19676cu: goto label_19676c;
        case 0x196770u: goto label_196770;
        case 0x196774u: goto label_196774;
        case 0x196778u: goto label_196778;
        case 0x19677cu: goto label_19677c;
        case 0x196780u: goto label_196780;
        case 0x196784u: goto label_196784;
        case 0x196788u: goto label_196788;
        case 0x19678cu: goto label_19678c;
        case 0x196790u: goto label_196790;
        case 0x196794u: goto label_196794;
        case 0x196798u: goto label_196798;
        case 0x19679cu: goto label_19679c;
        case 0x1967a0u: goto label_1967a0;
        case 0x1967a4u: goto label_1967a4;
        case 0x1967a8u: goto label_1967a8;
        case 0x1967acu: goto label_1967ac;
        case 0x1967b0u: goto label_1967b0;
        case 0x1967b4u: goto label_1967b4;
        case 0x1967b8u: goto label_1967b8;
        case 0x1967bcu: goto label_1967bc;
        case 0x1967c0u: goto label_1967c0;
        case 0x1967c4u: goto label_1967c4;
        case 0x1967c8u: goto label_1967c8;
        case 0x1967ccu: goto label_1967cc;
        case 0x1967d0u: goto label_1967d0;
        case 0x1967d4u: goto label_1967d4;
        case 0x1967d8u: goto label_1967d8;
        case 0x1967dcu: goto label_1967dc;
        case 0x1967e0u: goto label_1967e0;
        case 0x1967e4u: goto label_1967e4;
        case 0x1967e8u: goto label_1967e8;
        case 0x1967ecu: goto label_1967ec;
        case 0x1967f0u: goto label_1967f0;
        case 0x1967f4u: goto label_1967f4;
        case 0x1967f8u: goto label_1967f8;
        case 0x1967fcu: goto label_1967fc;
        case 0x196800u: goto label_196800;
        case 0x196804u: goto label_196804;
        case 0x196808u: goto label_196808;
        case 0x19680cu: goto label_19680c;
        case 0x196810u: goto label_196810;
        case 0x196814u: goto label_196814;
        case 0x196818u: goto label_196818;
        case 0x19681cu: goto label_19681c;
        case 0x196820u: goto label_196820;
        case 0x196824u: goto label_196824;
        case 0x196828u: goto label_196828;
        case 0x19682cu: goto label_19682c;
        case 0x196830u: goto label_196830;
        case 0x196834u: goto label_196834;
        case 0x196838u: goto label_196838;
        case 0x19683cu: goto label_19683c;
        case 0x196840u: goto label_196840;
        case 0x196844u: goto label_196844;
        case 0x196848u: goto label_196848;
        case 0x19684cu: goto label_19684c;
        case 0x196850u: goto label_196850;
        case 0x196854u: goto label_196854;
        case 0x196858u: goto label_196858;
        case 0x19685cu: goto label_19685c;
        case 0x196860u: goto label_196860;
        case 0x196864u: goto label_196864;
        case 0x196868u: goto label_196868;
        case 0x19686cu: goto label_19686c;
        case 0x196870u: goto label_196870;
        case 0x196874u: goto label_196874;
        case 0x196878u: goto label_196878;
        case 0x19687cu: goto label_19687c;
        case 0x196880u: goto label_196880;
        case 0x196884u: goto label_196884;
        case 0x196888u: goto label_196888;
        case 0x19688cu: goto label_19688c;
        case 0x196890u: goto label_196890;
        case 0x196894u: goto label_196894;
        case 0x196898u: goto label_196898;
        case 0x19689cu: goto label_19689c;
        case 0x1968a0u: goto label_1968a0;
        case 0x1968a4u: goto label_1968a4;
        case 0x1968a8u: goto label_1968a8;
        case 0x1968acu: goto label_1968ac;
        case 0x1968b0u: goto label_1968b0;
        case 0x1968b4u: goto label_1968b4;
        case 0x1968b8u: goto label_1968b8;
        case 0x1968bcu: goto label_1968bc;
        case 0x1968c0u: goto label_1968c0;
        case 0x1968c4u: goto label_1968c4;
        case 0x1968c8u: goto label_1968c8;
        case 0x1968ccu: goto label_1968cc;
        case 0x1968d0u: goto label_1968d0;
        case 0x1968d4u: goto label_1968d4;
        case 0x1968d8u: goto label_1968d8;
        case 0x1968dcu: goto label_1968dc;
        case 0x1968e0u: goto label_1968e0;
        case 0x1968e4u: goto label_1968e4;
        case 0x1968e8u: goto label_1968e8;
        case 0x1968ecu: goto label_1968ec;
        case 0x1968f0u: goto label_1968f0;
        case 0x1968f4u: goto label_1968f4;
        case 0x1968f8u: goto label_1968f8;
        case 0x1968fcu: goto label_1968fc;
        case 0x196900u: goto label_196900;
        case 0x196904u: goto label_196904;
        case 0x196908u: goto label_196908;
        case 0x19690cu: goto label_19690c;
        case 0x196910u: goto label_196910;
        case 0x196914u: goto label_196914;
        case 0x196918u: goto label_196918;
        case 0x19691cu: goto label_19691c;
        case 0x196920u: goto label_196920;
        case 0x196924u: goto label_196924;
        case 0x196928u: goto label_196928;
        case 0x19692cu: goto label_19692c;
        case 0x196930u: goto label_196930;
        case 0x196934u: goto label_196934;
        case 0x196938u: goto label_196938;
        case 0x19693cu: goto label_19693c;
        case 0x196940u: goto label_196940;
        case 0x196944u: goto label_196944;
        case 0x196948u: goto label_196948;
        case 0x19694cu: goto label_19694c;
        case 0x196950u: goto label_196950;
        case 0x196954u: goto label_196954;
        case 0x196958u: goto label_196958;
        case 0x19695cu: goto label_19695c;
        case 0x196960u: goto label_196960;
        case 0x196964u: goto label_196964;
        case 0x196968u: goto label_196968;
        case 0x19696cu: goto label_19696c;
        case 0x196970u: goto label_196970;
        case 0x196974u: goto label_196974;
        case 0x196978u: goto label_196978;
        case 0x19697cu: goto label_19697c;
        case 0x196980u: goto label_196980;
        case 0x196984u: goto label_196984;
        case 0x196988u: goto label_196988;
        case 0x19698cu: goto label_19698c;
        case 0x196990u: goto label_196990;
        case 0x196994u: goto label_196994;
        case 0x196998u: goto label_196998;
        case 0x19699cu: goto label_19699c;
        case 0x1969a0u: goto label_1969a0;
        case 0x1969a4u: goto label_1969a4;
        case 0x1969a8u: goto label_1969a8;
        case 0x1969acu: goto label_1969ac;
        case 0x1969b0u: goto label_1969b0;
        case 0x1969b4u: goto label_1969b4;
        case 0x1969b8u: goto label_1969b8;
        case 0x1969bcu: goto label_1969bc;
        case 0x1969c0u: goto label_1969c0;
        case 0x1969c4u: goto label_1969c4;
        case 0x1969c8u: goto label_1969c8;
        case 0x1969ccu: goto label_1969cc;
        default: return;
    }

label_196200:
    // 0x196200: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x196200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196204:
    // 0x196204: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x196204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_196208:
    // 0x196208: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19620c:
    // 0x19620c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x19620cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_196210:
    // 0x196210: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x196210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196214:
    // 0x196214: 0x93102b  sltu        $v0, $a0, $s3
    ctx->pc = 0x196214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_196218:
    // 0x196218: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_19621c:
    if (ctx->pc == 0x19621Cu) {
        ctx->pc = 0x196220u;
        goto label_196220;
    }
    ctx->pc = 0x196218u;
    {
        const bool branch_taken_0x196218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196218) {
            ctx->pc = 0x1961F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1961f4; return; }
        }
    }
    ctx->pc = 0x196220u;
label_196220:
    // 0x196220: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x196220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_196224:
    // 0x196224: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x196224u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_196228:
    // 0x196228: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_19622c:
    if (ctx->pc == 0x19622Cu) {
        ctx->pc = 0x196230u;
        goto label_196230;
    }
    ctx->pc = 0x196228u;
    {
        const bool branch_taken_0x196228 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x196228) {
            ctx->pc = 0x196284u;
            goto label_196284;
        }
    }
    ctx->pc = 0x196230u;
label_196230:
    // 0x196230: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x196230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_196234:
    // 0x196234: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_196238:
    if (ctx->pc == 0x196238u) {
        ctx->pc = 0x19623Cu;
        goto label_19623c;
    }
    ctx->pc = 0x196234u;
    {
        const bool branch_taken_0x196234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196234) {
            ctx->pc = 0x196284u;
            goto label_196284;
        }
    }
    ctx->pc = 0x19623Cu;
label_19623c:
    // 0x19623c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x19623cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_196240:
    // 0x196240: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x196240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_196244:
    // 0x196244: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x196244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_196248:
    // 0x196248: 0x1000000a  b           . + 4 + (0xA << 2)
label_19624c:
    if (ctx->pc == 0x19624Cu) {
        ctx->pc = 0x19624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196248u;
        // 0x19624c: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196250u;
        goto label_196250;
    }
    ctx->pc = 0x196248u;
    {
        const bool branch_taken_0x196248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196248u;
        // 0x19624c: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196248) {
            ctx->pc = 0x196274u;
            goto label_196274;
        }
    }
    ctx->pc = 0x196250u;
label_196250:
    // 0x196250: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x196250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_196254:
    // 0x196254: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x196254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_196258:
    // 0x196258: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x196258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_19625c:
    // 0x19625c: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x19625cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_196260:
    // 0x196260: 0x40f809  jalr        $v0
label_196264:
    if (ctx->pc == 0x196264u) {
        ctx->pc = 0x196264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196260u;
        // 0x196264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196268u;
        goto label_196268;
    }
    ctx->pc = 0x196260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196268u);
        ctx->pc = 0x196264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196260u;
        // 0x196264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196260u, 0x196268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196268u;
label_196268:
    // 0x196268: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x196268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19626c:
    // 0x19626c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19626cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_196270:
    // 0x196270: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x196270u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_196274:
    // 0x196274: 0x0  nop
    ctx->pc = 0x196274u;
    // NOP
label_196278:
    // 0x196278: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x196278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19627c:
    // 0x19627c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_196280:
    if (ctx->pc == 0x196280u) {
        ctx->pc = 0x196284u;
        goto label_196284;
    }
    ctx->pc = 0x19627Cu;
    {
        const bool branch_taken_0x19627c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19627c) {
            ctx->pc = 0x196250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196250;
        }
    }
    ctx->pc = 0x196284u;
label_196284:
    // 0x196284: 0x0  nop
    ctx->pc = 0x196284u;
    // NOP
label_196288:
    // 0x196288: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x196288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19628c:
    // 0x19628c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19628cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_196290:
    // 0x196290: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x196290u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_196294:
    // 0x196294: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x196294u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_196298:
    // 0x196298: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x196298u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19629c:
    // 0x19629c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19629cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1962a0:
    // 0x1962a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1962a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1962a4:
    // 0x1962a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1962a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1962a8:
    // 0x1962a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1962a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1962ac:
    // 0x1962ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1962acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1962b0:
    // 0x1962b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1962b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1962b4:
    // 0x1962b4: 0x3e00008  jr          $ra
label_1962b8:
    if (ctx->pc == 0x1962B8u) {
        ctx->pc = 0x1962B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962B4u;
        // 0x1962b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1962BCu;
        goto label_1962bc;
    }
    ctx->pc = 0x1962B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1962B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962B4u;
        // 0x1962b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1962B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1962BCu;
label_1962bc:
    // 0x1962bc: 0x0  nop
    ctx->pc = 0x1962bcu;
    // NOP
label_1962c0:
    // 0x1962c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1962c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1962c4:
    // 0x1962c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1962c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1962c8:
    // 0x1962c8: 0x7fbe0000  sq          $fp, 0x0($sp)
    ctx->pc = 0x1962c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 30));
label_1962cc:
    // 0x1962cc: 0xc08e660  jal         func_239980
label_1962d0:
    if (ctx->pc == 0x1962D0u) {
        ctx->pc = 0x1962D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962CCu;
        // 0x1962d0: 0x3a0f021  addu        $fp, $sp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1962D4u;
        goto label_1962d4;
    }
    ctx->pc = 0x1962CCu;
    SET_GPR_U32(ctx, 31, 0x1962D4u);
    ctx->pc = 0x1962D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1962CCu;
    // 0x1962d0: 0x3a0f021  addu        $fp, $sp, $zero (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239980u;
    { ctx->pc = 0x239980; return; }
    ctx->pc = 0x1962D4u;
label_1962d4:
    // 0x1962d4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1962d8:
    if (ctx->pc == 0x1962D8u) {
        ctx->pc = 0x1962DCu;
        goto label_1962dc;
    }
    ctx->pc = 0x1962D4u;
    {
        const bool branch_taken_0x1962d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1962d4) {
            ctx->pc = 0x196304u;
            goto label_196304;
        }
    }
    ctx->pc = 0x1962DCu;
label_1962dc:
    // 0x1962dc: 0xc065b50  jal         func_196D40
label_1962e0:
    if (ctx->pc == 0x1962E0u) {
        ctx->pc = 0x1962E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962DCu;
        // 0x1962e0: 0x27c40020  addiu       $a0, $fp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1962E4u;
        goto label_1962e4;
    }
    ctx->pc = 0x1962DCu;
    SET_GPR_U32(ctx, 31, 0x1962E4u);
    ctx->pc = 0x1962E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1962DCu;
    // 0x1962e0: 0x27c40020  addiu       $a0, $fp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196D40u;
    { ctx->pc = 0x196d40; return; }
    ctx->pc = 0x1962E4u;
label_1962e4:
    // 0x1962e4: 0x0  nop
    ctx->pc = 0x1962e4u;
    // NOP
label_1962e8:
    // 0x1962e8: 0x0  nop
    ctx->pc = 0x1962e8u;
    // NOP
label_1962ec:
    // 0x1962ec: 0x0  nop
    ctx->pc = 0x1962ecu;
    // NOP
label_1962f0:
    // 0x1962f0: 0x0  nop
    ctx->pc = 0x1962f0u;
    // NOP
label_1962f4:
    // 0x1962f4: 0x0  nop
    ctx->pc = 0x1962f4u;
    // NOP
label_1962f8:
    // 0x1962f8: 0x0  nop
    ctx->pc = 0x1962f8u;
    // NOP
label_1962fc:
    // 0x1962fc: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_196300:
    if (ctx->pc == 0x196300u) {
        ctx->pc = 0x196304u;
        goto label_196304;
    }
    ctx->pc = 0x1962FCu;
    {
        const bool branch_taken_0x1962fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1962fc) {
            ctx->pc = 0x1962E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1962e4;
        }
    }
    ctx->pc = 0x196304u;
label_196304:
    // 0x196304: 0x0  nop
    ctx->pc = 0x196304u;
    // NOP
label_196308:
    // 0x196308: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x196308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_19630c:
    // 0x19630c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19630cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_196310:
    // 0x196310: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x196310u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_196314:
    // 0x196314: 0x3e00008  jr          $ra
label_196318:
    if (ctx->pc == 0x196318u) {
        ctx->pc = 0x196318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196314u;
        // 0x196318: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19631Cu;
        goto label_19631c;
    }
    ctx->pc = 0x196314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196314u;
        // 0x196318: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19631Cu;
label_19631c:
    // 0x19631c: 0x0  nop
    ctx->pc = 0x19631cu;
    // NOP
label_196320:
    // 0x196320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_196324:
    // 0x196324: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x196324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_196328:
    // 0x196328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19632c:
    // 0x19632c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19632cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196330:
    // 0x196330: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_196334:
    if (ctx->pc == 0x196334u) {
        ctx->pc = 0x196334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196330u;
        // 0x196334: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196338u;
        goto label_196338;
    }
    ctx->pc = 0x196330u;
    {
        const bool branch_taken_0x196330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x196334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196330u;
        // 0x196334: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196330) {
            ctx->pc = 0x19635Cu;
            goto label_19635c;
        }
    }
    ctx->pc = 0x196338u;
label_196338:
    // 0x196338: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x196338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_19633c:
    // 0x19633c: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x19633cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_196340:
    // 0x196340: 0x2463ed80  addiu       $v1, $v1, -0x1280
    ctx->pc = 0x196340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962560));
label_196344:
    // 0x196344: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196344u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_196348:
    // 0x196348: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_19634c:
    if (ctx->pc == 0x19634Cu) {
        ctx->pc = 0x19634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196348u;
        // 0x19634c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196350u;
        goto label_196350;
    }
    ctx->pc = 0x196348u;
    {
        const bool branch_taken_0x196348 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196348u;
        // 0x19634c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196348) {
            ctx->pc = 0x196358u;
            goto label_196358;
        }
    }
    ctx->pc = 0x196350u;
label_196350:
    // 0x196350: 0xc0658b0  jal         func_1962C0
label_196354:
    if (ctx->pc == 0x196354u) {
        ctx->pc = 0x196358u;
        goto label_196358;
    }
    ctx->pc = 0x196350u;
    SET_GPR_U32(ctx, 31, 0x196358u);
    ctx->pc = 0x1962C0u;
    goto label_1962c0;
    ctx->pc = 0x196358u;
label_196358:
    // 0x196358: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x196358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19635c:
    // 0x19635c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19635cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_196360:
    // 0x196360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_196364:
    // 0x196364: 0x3e00008  jr          $ra
label_196368:
    if (ctx->pc == 0x196368u) {
        ctx->pc = 0x196368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196364u;
        // 0x196368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19636Cu;
        goto label_19636c;
    }
    ctx->pc = 0x196364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196364u;
        // 0x196368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19636Cu;
label_19636c:
    // 0x19636c: 0x0  nop
    ctx->pc = 0x19636cu;
    // NOP
label_196370:
    // 0x196370: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x196370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_196374:
    // 0x196374: 0x3e00008  jr          $ra
label_196378:
    if (ctx->pc == 0x196378u) {
        ctx->pc = 0x196378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196374u;
        // 0x196378: 0x244298a8  addiu       $v0, $v0, -0x6758 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19637Cu;
        goto label_19637c;
    }
    ctx->pc = 0x196374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196374u;
        // 0x196378: 0x244298a8  addiu       $v0, $v0, -0x6758 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19637Cu;
label_19637c:
    // 0x19637c: 0x0  nop
    ctx->pc = 0x19637cu;
    // NOP
label_196380:
    // 0x196380: 0xfcc00000  sd          $zero, 0x0($a2)
    ctx->pc = 0x196380u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 0));
label_196384:
    // 0x196384: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_196388:
    if (ctx->pc == 0x196388u) {
        ctx->pc = 0x196388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196384u;
        // 0x196388: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19638Cu;
        goto label_19638c;
    }
    ctx->pc = 0x196384u;
    {
        const bool branch_taken_0x196384 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x196388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196384u;
        // 0x196388: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196384) {
            ctx->pc = 0x196394u;
            goto label_196394;
        }
    }
    ctx->pc = 0x19638Cu;
label_19638c:
    // 0x19638c: 0x10000093  b           . + 4 + (0x93 << 2)
label_196390:
    if (ctx->pc == 0x196390u) {
        ctx->pc = 0x196390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19638Cu;
        // 0x196390: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196394u;
        goto label_196394;
    }
    ctx->pc = 0x19638Cu;
    {
        const bool branch_taken_0x19638c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19638Cu;
        // 0x196390: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19638c) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x196394u;
label_196394:
    // 0x196394: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x196394u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_196398:
    // 0x196398: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x196398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_19639c:
    // 0x19639c: 0x14e3001b  bne         $a3, $v1, . + 4 + (0x1B << 2)
label_1963a0:
    if (ctx->pc == 0x1963A0u) {
        ctx->pc = 0x1963A4u;
        goto label_1963a4;
    }
    ctx->pc = 0x19639Cu;
    {
        const bool branch_taken_0x19639c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x19639c) {
            ctx->pc = 0x19640Cu;
            goto label_19640c;
        }
    }
    ctx->pc = 0x1963A4u;
label_1963a4:
    // 0x1963a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1963a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1963a8:
    // 0x1963a8: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x1963a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_1963ac:
    // 0x1963ac: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x1963acu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1963b0:
    // 0x1963b0: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
label_1963b4:
    if (ctx->pc == 0x1963B4u) {
        ctx->pc = 0x1963B8u;
        goto label_1963b8;
    }
    ctx->pc = 0x1963B0u;
    {
        const bool branch_taken_0x1963b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1963b0) {
            ctx->pc = 0x1963BCu;
            goto label_1963bc;
        }
    }
    ctx->pc = 0x1963B8u;
label_1963b8:
    // 0x1963b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1963b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1963bc:
    // 0x1963bc: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x1963bcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1963c0:
    // 0x1963c0: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x1963c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_1963c4:
    // 0x1963c4: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
label_1963c8:
    if (ctx->pc == 0x1963C8u) {
        ctx->pc = 0x1963CCu;
        goto label_1963cc;
    }
    ctx->pc = 0x1963C4u;
    {
        const bool branch_taken_0x1963c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1963c4) {
            ctx->pc = 0x1963D0u;
            goto label_1963d0;
        }
    }
    ctx->pc = 0x1963CCu;
label_1963cc:
    // 0x1963cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1963ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1963d0:
    // 0x1963d0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1963d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1963d4:
    // 0x1963d4: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x1963d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_1963d8:
    // 0x1963d8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_1963dc:
    if (ctx->pc == 0x1963DCu) {
        ctx->pc = 0x1963E0u;
        goto label_1963e0;
    }
    ctx->pc = 0x1963D8u;
    {
        const bool branch_taken_0x1963d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1963d8) {
            ctx->pc = 0x196408u;
            goto label_196408;
        }
    }
    ctx->pc = 0x1963E0u;
label_1963e0:
    // 0x1963e0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1963e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1963e4:
    // 0x1963e4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1963e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1963e8:
    // 0x1963e8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1963ec:
    if (ctx->pc == 0x1963ECu) {
        ctx->pc = 0x1963ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963E8u;
        // 0x1963ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963F0u;
        goto label_1963f0;
    }
    ctx->pc = 0x1963E8u;
    {
        const bool branch_taken_0x1963e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1963ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963E8u;
        // 0x1963ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963e8) {
            ctx->pc = 0x196400u;
            goto label_196400;
        }
    }
    ctx->pc = 0x1963F0u;
label_1963f0:
    // 0x1963f0: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1963f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_1963f4:
    // 0x1963f4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1963f8:
    if (ctx->pc == 0x1963F8u) {
        ctx->pc = 0x1963F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963F4u;
        // 0x1963f8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1963FCu;
        goto label_1963fc;
    }
    ctx->pc = 0x1963F4u;
    {
        const bool branch_taken_0x1963f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1963F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963F4u;
        // 0x1963f8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963f4) {
            ctx->pc = 0x19640Cu;
            goto label_19640c;
        }
    }
    ctx->pc = 0x1963FCu;
label_1963fc:
    // 0x1963fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1963fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196400:
    // 0x196400: 0x10000076  b           . + 4 + (0x76 << 2)
label_196404:
    if (ctx->pc == 0x196404u) {
        ctx->pc = 0x196408u;
        goto label_196408;
    }
    ctx->pc = 0x196400u;
    {
        const bool branch_taken_0x196400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196400) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x196408u;
label_196408:
    // 0x196408: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x196408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19640c:
    // 0x19640c: 0x80870000  lb          $a3, 0x0($a0)
    ctx->pc = 0x19640cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_196410:
    // 0x196410: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x196410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_196414:
    // 0x196414: 0x10e30008  beq         $a3, $v1, . + 4 + (0x8 << 2)
label_196418:
    if (ctx->pc == 0x196418u) {
        ctx->pc = 0x196418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196414u;
        // 0x196418: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19641Cu;
        goto label_19641c;
    }
    ctx->pc = 0x196414u;
    {
        const bool branch_taken_0x196414 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x196418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196414u;
        // 0x196418: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196414) {
            ctx->pc = 0x196438u;
            goto label_196438;
        }
    }
    ctx->pc = 0x19641Cu;
label_19641c:
    // 0x19641c: 0x10e30006  beq         $a3, $v1, . + 4 + (0x6 << 2)
label_196420:
    if (ctx->pc == 0x196420u) {
        ctx->pc = 0x196424u;
        goto label_196424;
    }
    ctx->pc = 0x19641Cu;
    {
        const bool branch_taken_0x19641c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x19641c) {
            ctx->pc = 0x196438u;
            goto label_196438;
        }
    }
    ctx->pc = 0x196424u;
label_196424:
    // 0x196424: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x196424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_196428:
    // 0x196428: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x196428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_19642c:
    // 0x19642c: 0x24070056  addiu       $a3, $zero, 0x56
    ctx->pc = 0x19642cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_196430:
    // 0x196430: 0x10000054  b           . + 4 + (0x54 << 2)
label_196434:
    if (ctx->pc == 0x196434u) {
        ctx->pc = 0x196434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196430u;
        // 0x196434: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196438u;
        goto label_196438;
    }
    ctx->pc = 0x196430u;
    {
        const bool branch_taken_0x196430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196430u;
        // 0x196434: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196430) {
            ctx->pc = 0x196584u;
            goto label_196584;
        }
    }
    ctx->pc = 0x196438u;
label_196438:
    // 0x196438: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x196438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19643c:
    // 0x19643c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x19643cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_196440:
    // 0x196440: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x196440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_196444:
    // 0x196444: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x196444u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_196448:
    // 0x196448: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
label_19644c:
    if (ctx->pc == 0x19644Cu) {
        ctx->pc = 0x19644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196448u;
        // 0x19644c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196450u;
        goto label_196450;
    }
    ctx->pc = 0x196448u;
    {
        const bool branch_taken_0x196448 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x19644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196448u;
        // 0x19644c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196448) {
            ctx->pc = 0x196458u;
            goto label_196458;
        }
    }
    ctx->pc = 0x196450u;
label_196450:
    // 0x196450: 0x10000062  b           . + 4 + (0x62 << 2)
label_196454:
    if (ctx->pc == 0x196454u) {
        ctx->pc = 0x196454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196450u;
        // 0x196454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196458u;
        goto label_196458;
    }
    ctx->pc = 0x196450u;
    {
        const bool branch_taken_0x196450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196450u;
        // 0x196454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196450) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x196458u;
label_196458:
    // 0x196458: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x196458u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_19645c:
    // 0x19645c: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x19645cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_196460:
    // 0x196460: 0x15030015  bne         $t0, $v1, . + 4 + (0x15 << 2)
label_196464:
    if (ctx->pc == 0x196464u) {
        ctx->pc = 0x196464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196460u;
        // 0x196464: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196468u;
        goto label_196468;
    }
    ctx->pc = 0x196460u;
    {
        const bool branch_taken_0x196460 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x196464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196460u;
        // 0x196464: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196460) {
            ctx->pc = 0x1964B8u;
            goto label_1964b8;
        }
    }
    ctx->pc = 0x196468u;
label_196468:
    // 0x196468: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x196468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_19646c:
    // 0x19646c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19646cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_196470:
    // 0x196470: 0x1507fff9  bne         $t0, $a3, . + 4 + (-0x7 << 2)
label_196474:
    if (ctx->pc == 0x196474u) {
        ctx->pc = 0x196478u;
        goto label_196478;
    }
    ctx->pc = 0x196470u;
    {
        const bool branch_taken_0x196470 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x196470) {
            ctx->pc = 0x196458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196458;
        }
    }
    ctx->pc = 0x196478u;
label_196478:
    // 0x196478: 0x10000008  b           . + 4 + (0x8 << 2)
label_19647c:
    if (ctx->pc == 0x19647Cu) {
        ctx->pc = 0x19647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196478u;
        // 0x19647c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196480u;
        goto label_196480;
    }
    ctx->pc = 0x196478u;
    {
        const bool branch_taken_0x196478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196478u;
        // 0x19647c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196478) {
            ctx->pc = 0x19649Cu;
            goto label_19649c;
        }
    }
    ctx->pc = 0x196480u;
label_196480:
    // 0x196480: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x196480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_196484:
    // 0x196484: 0x510b8  dsll        $v0, $a1, 2
    ctx->pc = 0x196484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 2);
label_196488:
    // 0x196488: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x196488u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_19648c:
    // 0x19648c: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x19648cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
label_196490:
    // 0x196490: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x196490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
label_196494:
    // 0x196494: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x196494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_196498:
    // 0x196498: 0x6445ffd0  daddiu      $a1, $v0, -0x30
    ctx->pc = 0x196498u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
label_19649c:
    // 0x19649c: 0x0  nop
    ctx->pc = 0x19649cu;
    // NOP
label_1964a0:
    // 0x1964a0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1964a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1964a4:
    // 0x1964a4: 0x1447fff6  bne         $v0, $a3, . + 4 + (-0xA << 2)
label_1964a8:
    if (ctx->pc == 0x1964A8u) {
        ctx->pc = 0x1964A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964A4u;
        // 0x1964a8: 0x2183c  dsll32      $v1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964ACu;
        goto label_1964ac;
    }
    ctx->pc = 0x1964A4u;
    {
        const bool branch_taken_0x1964a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1964A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964A4u;
        // 0x1964a8: 0x2183c  dsll32      $v1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964a4) {
            ctx->pc = 0x196480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196480;
        }
    }
    ctx->pc = 0x1964ACu;
label_1964ac:
    // 0x1964ac: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x1964acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
label_1964b0:
    // 0x1964b0: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1964b4:
    if (ctx->pc == 0x1964B4u) {
        ctx->pc = 0x1964B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964B0u;
        // 0x1964b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964B8u;
        goto label_1964b8;
    }
    ctx->pc = 0x1964B0u;
    {
        const bool branch_taken_0x1964b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1964B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964B0u;
        // 0x1964b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964b0) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x1964B8u;
label_1964b8:
    // 0x1964b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1964b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1964bc:
    // 0x1964bc: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1964bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1964c0:
    // 0x1964c0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1964c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1964c4:
    // 0x1964c4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1964c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1964c8:
    // 0x1964c8: 0x0  nop
    ctx->pc = 0x1964c8u;
    // NOP
label_1964cc:
    // 0x1964cc: 0x0  nop
    ctx->pc = 0x1964ccu;
    // NOP
label_1964d0:
    // 0x1964d0: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
label_1964d4:
    if (ctx->pc == 0x1964D4u) {
        ctx->pc = 0x1964D8u;
        goto label_1964d8;
    }
    ctx->pc = 0x1964D0u;
    {
        const bool branch_taken_0x1964d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1964d0) {
            ctx->pc = 0x1964B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1964b8;
        }
    }
    ctx->pc = 0x1964D8u;
label_1964d8:
    // 0x1964d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1964d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1964dc:
    // 0x1964dc: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1964dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1964e0:
    // 0x1964e0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1964e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1964e4:
    // 0x1964e4: 0x0  nop
    ctx->pc = 0x1964e4u;
    // NOP
label_1964e8:
    // 0x1964e8: 0x0  nop
    ctx->pc = 0x1964e8u;
    // NOP
label_1964ec:
    // 0x1964ec: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_1964f0:
    if (ctx->pc == 0x1964F0u) {
        ctx->pc = 0x1964F4u;
        goto label_1964f4;
    }
    ctx->pc = 0x1964ECu;
    {
        const bool branch_taken_0x1964ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1964ec) {
            ctx->pc = 0x1964D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1964d8;
        }
    }
    ctx->pc = 0x1964F4u;
label_1964f4:
    // 0x1964f4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1964f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1964f8:
    // 0x1964f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1964fc:
    if (ctx->pc == 0x1964FCu) {
        ctx->pc = 0x1964FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964F8u;
        // 0x1964fc: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196500u;
        goto label_196500;
    }
    ctx->pc = 0x1964F8u;
    {
        const bool branch_taken_0x1964f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1964FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964F8u;
        // 0x1964fc: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964f8) {
            ctx->pc = 0x196508u;
            goto label_196508;
        }
    }
    ctx->pc = 0x196500u;
label_196500:
    // 0x196500: 0x10000036  b           . + 4 + (0x36 << 2)
label_196504:
    if (ctx->pc == 0x196504u) {
        ctx->pc = 0x196504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196500u;
        // 0x196504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196508u;
        goto label_196508;
    }
    ctx->pc = 0x196500u;
    {
        const bool branch_taken_0x196500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196500u;
        // 0x196504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196500) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x196508u;
label_196508:
    // 0x196508: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
label_19650c:
    if (ctx->pc == 0x19650Cu) {
        ctx->pc = 0x19650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196508u;
        // 0x19650c: 0x80430000  lb          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196510u;
        goto label_196510;
    }
    ctx->pc = 0x196508u;
    {
        const bool branch_taken_0x196508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196508u;
        // 0x19650c: 0x80430000  lb          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196508) {
            ctx->pc = 0x19645Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19645c;
        }
    }
    ctx->pc = 0x196510u;
label_196510:
    // 0x196510: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_196514:
    // 0x196514: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x196514u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_196518:
    // 0x196518: 0x14690006  bne         $v1, $t1, . + 4 + (0x6 << 2)
label_19651c:
    if (ctx->pc == 0x19651Cu) {
        ctx->pc = 0x19651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196518u;
        // 0x19651c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196520u;
        goto label_196520;
    }
    ctx->pc = 0x196518u;
    {
        const bool branch_taken_0x196518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x19651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196518u;
        // 0x19651c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196518) {
            ctx->pc = 0x196534u;
            goto label_196534;
        }
    }
    ctx->pc = 0x196520u;
label_196520:
    // 0x196520: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x196520u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_196524:
    // 0x196524: 0x14690002  bne         $v1, $t1, . + 4 + (0x2 << 2)
label_196528:
    if (ctx->pc == 0x196528u) {
        ctx->pc = 0x19652Cu;
        goto label_19652c;
    }
    ctx->pc = 0x196524u;
    {
        const bool branch_taken_0x196524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x196524) {
            ctx->pc = 0x196530u;
            goto label_196530;
        }
    }
    ctx->pc = 0x19652Cu;
label_19652c:
    // 0x19652c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19652cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_196530:
    // 0x196530: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_196534:
    // 0x196534: 0x0  nop
    ctx->pc = 0x196534u;
    // NOP
label_196538:
    // 0x196538: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x196538u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_19653c:
    // 0x19653c: 0x15090003  bne         $t0, $t1, . + 4 + (0x3 << 2)
label_196540:
    if (ctx->pc == 0x196540u) {
        ctx->pc = 0x196544u;
        goto label_196544;
    }
    ctx->pc = 0x19653Cu;
    {
        const bool branch_taken_0x19653c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        if (branch_taken_0x19653c) {
            ctx->pc = 0x19654Cu;
            goto label_19654c;
        }
    }
    ctx->pc = 0x196544u;
label_196544:
    // 0x196544: 0x10000025  b           . + 4 + (0x25 << 2)
label_196548:
    if (ctx->pc == 0x196548u) {
        ctx->pc = 0x196548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196544u;
        // 0x196548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19654Cu;
        goto label_19654c;
    }
    ctx->pc = 0x196544u;
    {
        const bool branch_taken_0x196544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196544u;
        // 0x196548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196544) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x19654Cu;
label_19654c:
    // 0x19654c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x19654cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_196550:
    // 0x196550: 0x14670006  bne         $v1, $a3, . + 4 + (0x6 << 2)
label_196554:
    if (ctx->pc == 0x196554u) {
        ctx->pc = 0x196558u;
        goto label_196558;
    }
    ctx->pc = 0x196550u;
    {
        const bool branch_taken_0x196550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x196550) {
            ctx->pc = 0x19656Cu;
            goto label_19656c;
        }
    }
    ctx->pc = 0x196558u;
label_196558:
    // 0x196558: 0x15070002  bne         $t0, $a3, . + 4 + (0x2 << 2)
label_19655c:
    if (ctx->pc == 0x19655Cu) {
        ctx->pc = 0x196560u;
        goto label_196560;
    }
    ctx->pc = 0x196558u;
    {
        const bool branch_taken_0x196558 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x196558) {
            ctx->pc = 0x196564u;
            goto label_196564;
        }
    }
    ctx->pc = 0x196560u;
label_196560:
    // 0x196560: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x196560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_196564:
    // 0x196564: 0x0  nop
    ctx->pc = 0x196564u;
    // NOP
label_196568:
    // 0x196568: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19656c:
    // 0x19656c: 0x0  nop
    ctx->pc = 0x19656cu;
    // NOP
label_196570:
    // 0x196570: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x196570u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_196574:
    // 0x196574: 0x14670003  bne         $v1, $a3, . + 4 + (0x3 << 2)
label_196578:
    if (ctx->pc == 0x196578u) {
        ctx->pc = 0x19657Cu;
        goto label_19657c;
    }
    ctx->pc = 0x196574u;
    {
        const bool branch_taken_0x196574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x196574) {
            ctx->pc = 0x196584u;
            goto label_196584;
        }
    }
    ctx->pc = 0x19657Cu;
label_19657c:
    // 0x19657c: 0x10000017  b           . + 4 + (0x17 << 2)
label_196580:
    if (ctx->pc == 0x196580u) {
        ctx->pc = 0x196580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19657Cu;
        // 0x196580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196584u;
        goto label_196584;
    }
    ctx->pc = 0x19657Cu;
    {
        const bool branch_taken_0x19657c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19657Cu;
        // 0x196580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19657c) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x196584u;
label_196584:
    // 0x196584: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x196584u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_196588:
    // 0x196588: 0x11060003  beq         $t0, $a2, . + 4 + (0x3 << 2)
label_19658c:
    if (ctx->pc == 0x19658Cu) {
        ctx->pc = 0x196590u;
        goto label_196590;
    }
    ctx->pc = 0x196588u;
    {
        const bool branch_taken_0x196588 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x196588) {
            ctx->pc = 0x196598u;
            goto label_196598;
        }
    }
    ctx->pc = 0x196590u;
label_196590:
    // 0x196590: 0x1505000c  bne         $t0, $a1, . + 4 + (0xC << 2)
label_196594:
    if (ctx->pc == 0x196594u) {
        ctx->pc = 0x196598u;
        goto label_196598;
    }
    ctx->pc = 0x196590u;
    {
        const bool branch_taken_0x196590 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x196590) {
            ctx->pc = 0x1965C4u;
            goto label_1965c4;
        }
    }
    ctx->pc = 0x196598u;
label_196598:
    // 0x196598: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x196598u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_19659c:
    // 0x19659c: 0x1103ffdc  beq         $t0, $v1, . + 4 + (-0x24 << 2)
label_1965a0:
    if (ctx->pc == 0x1965A0u) {
        ctx->pc = 0x1965A4u;
        goto label_1965a4;
    }
    ctx->pc = 0x19659Cu;
    {
        const bool branch_taken_0x19659c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x19659c) {
            ctx->pc = 0x196510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196510;
        }
    }
    ctx->pc = 0x1965A4u;
label_1965a4:
    // 0x1965a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1965a8:
    if (ctx->pc == 0x1965A8u) {
        ctx->pc = 0x1965ACu;
        goto label_1965ac;
    }
    ctx->pc = 0x1965A4u;
    {
        const bool branch_taken_0x1965a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1965a4) {
            ctx->pc = 0x1965C4u;
            goto label_1965c4;
        }
    }
    ctx->pc = 0x1965ACu;
label_1965ac:
    // 0x1965ac: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_1965b0:
    if (ctx->pc == 0x1965B0u) {
        ctx->pc = 0x1965B4u;
        goto label_1965b4;
    }
    ctx->pc = 0x1965ACu;
    {
        const bool branch_taken_0x1965ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1965ac) {
            ctx->pc = 0x1965BCu;
            goto label_1965bc;
        }
    }
    ctx->pc = 0x1965B4u;
label_1965b4:
    // 0x1965b4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1965b8:
    if (ctx->pc == 0x1965B8u) {
        ctx->pc = 0x1965B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965B4u;
        // 0x1965b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1965BCu;
        goto label_1965bc;
    }
    ctx->pc = 0x1965B4u;
    {
        const bool branch_taken_0x1965b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1965B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965B4u;
        // 0x1965b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1965b4) {
            ctx->pc = 0x1965DCu;
            goto label_1965dc;
        }
    }
    ctx->pc = 0x1965BCu;
label_1965bc:
    // 0x1965bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1965bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1965c0:
    // 0x1965c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1965c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1965c4:
    // 0x1965c4: 0x0  nop
    ctx->pc = 0x1965c4u;
    // NOP
label_1965c8:
    // 0x1965c8: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x1965c8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1965cc:
    // 0x1965cc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1965ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1965d0:
    // 0x1965d0: 0x10a3fff6  beq         $a1, $v1, . + 4 + (-0xA << 2)
label_1965d4:
    if (ctx->pc == 0x1965D4u) {
        ctx->pc = 0x1965D8u;
        goto label_1965d8;
    }
    ctx->pc = 0x1965D0u;
    {
        const bool branch_taken_0x1965d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1965d0) {
            ctx->pc = 0x1965ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1965ac;
        }
    }
    ctx->pc = 0x1965D8u;
label_1965d8:
    // 0x1965d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1965d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1965dc:
    // 0x1965dc: 0x3e00008  jr          $ra
label_1965e0:
    if (ctx->pc == 0x1965E0u) {
        ctx->pc = 0x1965E4u;
        goto label_1965e4;
    }
    ctx->pc = 0x1965DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1965DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1965E4u;
label_1965e4:
    // 0x1965e4: 0x0  nop
    ctx->pc = 0x1965e4u;
    // NOP
label_1965e8:
    // 0x1965e8: 0x0  nop
    ctx->pc = 0x1965e8u;
    // NOP
label_1965ec:
    // 0x1965ec: 0x0  nop
    ctx->pc = 0x1965ecu;
    // NOP
label_1965f0:
    // 0x1965f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1965f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1965f4:
    // 0x1965f4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x1965f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_1965f8:
    // 0x1965f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1965f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1965fc:
    // 0x1965fc: 0x8c225790  lw          $v0, 0x5790($at)
    ctx->pc = 0x1965fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 22416)));
label_196600:
    // 0x196600: 0x40f809  jalr        $v0
label_196604:
    if (ctx->pc == 0x196604u) {
        ctx->pc = 0x196608u;
        goto label_196608;
    }
    ctx->pc = 0x196600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196608u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196600u, 0x196608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196608u;
label_196608:
    // 0x196608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19660c:
    // 0x19660c: 0x3e00008  jr          $ra
label_196610:
    if (ctx->pc == 0x196610u) {
        ctx->pc = 0x196610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19660Cu;
        // 0x196610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196614u;
        goto label_196614;
    }
    ctx->pc = 0x19660Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19660Cu;
        // 0x196610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19660Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196614u;
label_196614:
    // 0x196614: 0x0  nop
    ctx->pc = 0x196614u;
    // NOP
label_196618:
    // 0x196618: 0x0  nop
    ctx->pc = 0x196618u;
    // NOP
label_19661c:
    // 0x19661c: 0x0  nop
    ctx->pc = 0x19661cu;
    // NOP
label_196620:
    // 0x196620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196624:
    // 0x196624: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x196624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_196628:
    // 0x196628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19662c:
    // 0x19662c: 0x8c225788  lw          $v0, 0x5788($at)
    ctx->pc = 0x19662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 22408)));
label_196630:
    // 0x196630: 0x40f809  jalr        $v0
label_196634:
    if (ctx->pc == 0x196634u) {
        ctx->pc = 0x196638u;
        goto label_196638;
    }
    ctx->pc = 0x196630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196638u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196630u, 0x196638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196638u;
label_196638:
    // 0x196638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19663c:
    // 0x19663c: 0x3e00008  jr          $ra
label_196640:
    if (ctx->pc == 0x196640u) {
        ctx->pc = 0x196640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19663Cu;
        // 0x196640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196644u;
        goto label_196644;
    }
    ctx->pc = 0x19663Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19663Cu;
        // 0x196640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19663Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196644u;
label_196644:
    // 0x196644: 0x0  nop
    ctx->pc = 0x196644u;
    // NOP
label_196648:
    // 0x196648: 0x0  nop
    ctx->pc = 0x196648u;
    // NOP
label_19664c:
    // 0x19664c: 0x0  nop
    ctx->pc = 0x19664cu;
    // NOP
label_196650:
    // 0x196650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196654:
    // 0x196654: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x196654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_196658:
    // 0x196658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19665c:
    // 0x19665c: 0x8c225788  lw          $v0, 0x5788($at)
    ctx->pc = 0x19665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 22408)));
label_196660:
    // 0x196660: 0x40f809  jalr        $v0
label_196664:
    if (ctx->pc == 0x196664u) {
        ctx->pc = 0x196668u;
        goto label_196668;
    }
    ctx->pc = 0x196660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196668u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196660u, 0x196668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196668u;
label_196668:
    // 0x196668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19666c:
    // 0x19666c: 0x3e00008  jr          $ra
label_196670:
    if (ctx->pc == 0x196670u) {
        ctx->pc = 0x196670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19666Cu;
        // 0x196670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196674u;
        goto label_196674;
    }
    ctx->pc = 0x19666Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19666Cu;
        // 0x196670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19666Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196674u;
label_196674:
    // 0x196674: 0x0  nop
    ctx->pc = 0x196674u;
    // NOP
label_196678:
    // 0x196678: 0x0  nop
    ctx->pc = 0x196678u;
    // NOP
label_19667c:
    // 0x19667c: 0x0  nop
    ctx->pc = 0x19667cu;
    // NOP
label_196680:
    // 0x196680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196684:
    // 0x196684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_196688:
    // 0x196688: 0xc08dc46  jal         func_237118
label_19668c:
    if (ctx->pc == 0x19668Cu) {
        ctx->pc = 0x196690u;
        goto label_196690;
    }
    ctx->pc = 0x196688u;
    SET_GPR_U32(ctx, 31, 0x196690u);
    ctx->pc = 0x237118u;
    { ctx->pc = 0x237118; return; }
    ctx->pc = 0x196690u;
label_196690:
    // 0x196690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196694:
    // 0x196694: 0x3e00008  jr          $ra
label_196698:
    if (ctx->pc == 0x196698u) {
        ctx->pc = 0x196698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196694u;
        // 0x196698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19669Cu;
        goto label_19669c;
    }
    ctx->pc = 0x196694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196694u;
        // 0x196698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19669Cu;
label_19669c:
    // 0x19669c: 0x0  nop
    ctx->pc = 0x19669cu;
    // NOP
label_1966a0:
    // 0x1966a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1966a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1966a4:
    // 0x1966a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1966a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1966a8:
    // 0x1966a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1966a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1966ac:
    // 0x1966ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1966acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1966b0:
    // 0x1966b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1966b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1966b4:
    // 0x1966b4: 0x91082b  sltu        $at, $a0, $s1
    ctx->pc = 0x1966b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1966b8:
    // 0x1966b8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1966bc:
    if (ctx->pc == 0x1966BCu) {
        ctx->pc = 0x1966BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966B8u;
        // 0x1966bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1966C0u;
        goto label_1966c0;
    }
    ctx->pc = 0x1966B8u;
    {
        const bool branch_taken_0x1966b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1966BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966B8u;
        // 0x1966bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1966b8) {
            ctx->pc = 0x1966E4u;
            goto label_1966e4;
        }
    }
    ctx->pc = 0x1966C0u;
label_1966c0:
    // 0x1966c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1966c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1966c4:
    // 0x1966c4: 0x40f809  jalr        $v0
label_1966c8:
    if (ctx->pc == 0x1966C8u) {
        ctx->pc = 0x1966CCu;
        goto label_1966cc;
    }
    ctx->pc = 0x1966C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1966CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1966C4u, 0x1966CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1966CCu;
label_1966cc:
    // 0x1966cc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1966ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1966d0:
    // 0x1966d0: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1966d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1966d4:
    // 0x1966d4: 0x0  nop
    ctx->pc = 0x1966d4u;
    // NOP
label_1966d8:
    // 0x1966d8: 0x0  nop
    ctx->pc = 0x1966d8u;
    // NOP
label_1966dc:
    // 0x1966dc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_1966e0:
    if (ctx->pc == 0x1966E0u) {
        ctx->pc = 0x1966E4u;
        goto label_1966e4;
    }
    ctx->pc = 0x1966DCu;
    {
        const bool branch_taken_0x1966dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1966dc) {
            ctx->pc = 0x1966C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1966c0;
        }
    }
    ctx->pc = 0x1966E4u;
label_1966e4:
    // 0x1966e4: 0x0  nop
    ctx->pc = 0x1966e4u;
    // NOP
label_1966e8:
    // 0x1966e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1966e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1966ec:
    // 0x1966ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1966ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1966f0:
    // 0x1966f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1966f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1966f4:
    // 0x1966f4: 0x3e00008  jr          $ra
label_1966f8:
    if (ctx->pc == 0x1966F8u) {
        ctx->pc = 0x1966F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966F4u;
        // 0x1966f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1966FCu;
        goto label_1966fc;
    }
    ctx->pc = 0x1966F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1966F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966F4u;
        // 0x1966f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1966F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1966FCu;
label_1966fc:
    // 0x1966fc: 0x0  nop
    ctx->pc = 0x1966fcu;
    // NOP
label_196700:
    // 0x196700: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x196700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_196704:
    // 0x196704: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x196704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_196708:
    // 0x196708: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_19670c:
    if (ctx->pc == 0x19670Cu) {
        ctx->pc = 0x196710u;
        goto label_196710;
    }
    ctx->pc = 0x196708u;
    {
        const bool branch_taken_0x196708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196708) {
            ctx->pc = 0x196720u;
            goto label_196720;
        }
    }
    ctx->pc = 0x196710u;
label_196710:
    // 0x196710: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x196710u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_196714:
    // 0x196714: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x196714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_196718:
    // 0x196718: 0x1000001f  b           . + 4 + (0x1F << 2)
label_19671c:
    if (ctx->pc == 0x19671Cu) {
        ctx->pc = 0x19671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196718u;
        // 0x19671c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196720u;
        goto label_196720;
    }
    ctx->pc = 0x196718u;
    {
        const bool branch_taken_0x196718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196718u;
        // 0x19671c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196718) {
            ctx->pc = 0x196798u;
            goto label_196798;
        }
    }
    ctx->pc = 0x196720u;
label_196720:
    // 0x196720: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x196720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_196724:
    // 0x196724: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_196728:
    if (ctx->pc == 0x196728u) {
        ctx->pc = 0x196728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196724u;
        // 0x196728: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19672Cu;
        goto label_19672c;
    }
    ctx->pc = 0x196724u;
    {
        const bool branch_taken_0x196724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196724u;
        // 0x196728: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196724) {
            ctx->pc = 0x196744u;
            goto label_196744;
        }
    }
    ctx->pc = 0x19672Cu;
label_19672c:
    // 0x19672c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x19672cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_196730:
    // 0x196730: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x196730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_196734:
    // 0x196734: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x196734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_196738:
    // 0x196738: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x196738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_19673c:
    // 0x19673c: 0x10000016  b           . + 4 + (0x16 << 2)
label_196740:
    if (ctx->pc == 0x196740u) {
        ctx->pc = 0x196740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19673Cu;
        // 0x196740: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196744u;
        goto label_196744;
    }
    ctx->pc = 0x19673Cu;
    {
        const bool branch_taken_0x19673c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19673Cu;
        // 0x196740: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19673c) {
            ctx->pc = 0x196798u;
            goto label_196798;
        }
    }
    ctx->pc = 0x196744u;
label_196744:
    // 0x196744: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x196744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_196748:
    // 0x196748: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_19674c:
    if (ctx->pc == 0x19674Cu) {
        ctx->pc = 0x19674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196748u;
        // 0x19674c: 0x90870002  lbu         $a3, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196750u;
        goto label_196750;
    }
    ctx->pc = 0x196748u;
    {
        const bool branch_taken_0x196748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196748u;
        // 0x19674c: 0x90870002  lbu         $a3, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196748) {
            ctx->pc = 0x196770u;
            goto label_196770;
        }
    }
    ctx->pc = 0x196750u;
label_196750:
    // 0x196750: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x196750u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_196754:
    // 0x196754: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x196754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_196758:
    // 0x196758: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x196758u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19675c:
    // 0x19675c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x19675cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_196760:
    // 0x196760: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x196760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_196764:
    // 0x196764: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x196764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_196768:
    // 0x196768: 0x1000000b  b           . + 4 + (0xB << 2)
label_19676c:
    if (ctx->pc == 0x19676Cu) {
        ctx->pc = 0x19676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196768u;
        // 0x19676c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196770u;
        goto label_196770;
    }
    ctx->pc = 0x196768u;
    {
        const bool branch_taken_0x196768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196768u;
        // 0x19676c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196768) {
            ctx->pc = 0x196798u;
            goto label_196798;
        }
    }
    ctx->pc = 0x196770u;
label_196770:
    // 0x196770: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x196770u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_196774:
    // 0x196774: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x196774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_196778:
    // 0x196778: 0x23600  sll         $a2, $v0, 24
    ctx->pc = 0x196778u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_19677c:
    // 0x19677c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x19677cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_196780:
    // 0x196780: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x196780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_196784:
    // 0x196784: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x196784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_196788:
    // 0x196788: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x196788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_19678c:
    // 0x19678c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x19678cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_196790:
    // 0x196790: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x196790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_196794:
    // 0x196794: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x196794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_196798:
    // 0x196798: 0x3e00008  jr          $ra
label_19679c:
    if (ctx->pc == 0x19679Cu) {
        ctx->pc = 0x1967A0u;
        goto label_1967a0;
    }
    ctx->pc = 0x196798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1967A0u;
label_1967a0:
    // 0x1967a0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1967a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1967a4:
    // 0x1967a4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1967a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1967a8:
    // 0x1967a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1967ac:
    if (ctx->pc == 0x1967ACu) {
        ctx->pc = 0x1967B0u;
        goto label_1967b0;
    }
    ctx->pc = 0x1967A8u;
    {
        const bool branch_taken_0x1967a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1967a8) {
            ctx->pc = 0x1967C0u;
            goto label_1967c0;
        }
    }
    ctx->pc = 0x1967B0u;
label_1967b0:
    // 0x1967b0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1967b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1967b4:
    // 0x1967b4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1967b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1967b8:
    // 0x1967b8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1967bc:
    if (ctx->pc == 0x1967BCu) {
        ctx->pc = 0x1967BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967B8u;
        // 0x1967bc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1967C0u;
        goto label_1967c0;
    }
    ctx->pc = 0x1967B8u;
    {
        const bool branch_taken_0x1967b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1967BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967B8u;
        // 0x1967bc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967b8) {
            ctx->pc = 0x196838u;
            goto label_196838;
        }
    }
    ctx->pc = 0x1967C0u;
label_1967c0:
    // 0x1967c0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1967c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1967c4:
    // 0x1967c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1967c8:
    if (ctx->pc == 0x1967C8u) {
        ctx->pc = 0x1967C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967C4u;
        // 0x1967c8: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1967CCu;
        goto label_1967cc;
    }
    ctx->pc = 0x1967C4u;
    {
        const bool branch_taken_0x1967c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1967C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967C4u;
        // 0x1967c8: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967c4) {
            ctx->pc = 0x1967E4u;
            goto label_1967e4;
        }
    }
    ctx->pc = 0x1967CCu;
label_1967cc:
    // 0x1967cc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1967ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1967d0:
    // 0x1967d0: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x1967d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_1967d4:
    // 0x1967d4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1967d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1967d8:
    // 0x1967d8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1967d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_1967dc:
    // 0x1967dc: 0x10000016  b           . + 4 + (0x16 << 2)
label_1967e0:
    if (ctx->pc == 0x1967E0u) {
        ctx->pc = 0x1967E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967DCu;
        // 0x1967e0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1967E4u;
        goto label_1967e4;
    }
    ctx->pc = 0x1967DCu;
    {
        const bool branch_taken_0x1967dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1967E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967DCu;
        // 0x1967e0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967dc) {
            ctx->pc = 0x196838u;
            goto label_196838;
        }
    }
    ctx->pc = 0x1967E4u;
label_1967e4:
    // 0x1967e4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1967e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1967e8:
    // 0x1967e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1967ec:
    if (ctx->pc == 0x1967ECu) {
        ctx->pc = 0x1967ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967E8u;
        // 0x1967ec: 0x90870002  lbu         $a3, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1967F0u;
        goto label_1967f0;
    }
    ctx->pc = 0x1967E8u;
    {
        const bool branch_taken_0x1967e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1967ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967E8u;
        // 0x1967ec: 0x90870002  lbu         $a3, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967e8) {
            ctx->pc = 0x196810u;
            goto label_196810;
        }
    }
    ctx->pc = 0x1967F0u;
label_1967f0:
    // 0x1967f0: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x1967f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
label_1967f4:
    // 0x1967f4: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x1967f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1967f8:
    // 0x1967f8: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x1967f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1967fc:
    // 0x1967fc: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1967fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_196800:
    // 0x196800: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x196800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_196804:
    // 0x196804: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x196804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_196808:
    // 0x196808: 0x1000000b  b           . + 4 + (0xB << 2)
label_19680c:
    if (ctx->pc == 0x19680Cu) {
        ctx->pc = 0x19680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196808u;
        // 0x19680c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196810u;
        goto label_196810;
    }
    ctx->pc = 0x196808u;
    {
        const bool branch_taken_0x196808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196808u;
        // 0x19680c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196808) {
            ctx->pc = 0x196838u;
            goto label_196838;
        }
    }
    ctx->pc = 0x196810u;
label_196810:
    // 0x196810: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x196810u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
label_196814:
    // 0x196814: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x196814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_196818:
    // 0x196818: 0x23600  sll         $a2, $v0, 24
    ctx->pc = 0x196818u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_19681c:
    // 0x19681c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x19681cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_196820:
    // 0x196820: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x196820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_196824:
    // 0x196824: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x196824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_196828:
    // 0x196828: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x196828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_19682c:
    // 0x19682c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x19682cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_196830:
    // 0x196830: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x196830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_196834:
    // 0x196834: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x196834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_196838:
    // 0x196838: 0x3e00008  jr          $ra
label_19683c:
    if (ctx->pc == 0x19683Cu) {
        ctx->pc = 0x196840u;
        goto label_196840;
    }
    ctx->pc = 0x196838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196840u;
label_196840:
    // 0x196840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196844:
    // 0x196844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_196848:
    // 0x196848: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x196848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19684c:
    // 0x19684c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_196850:
    if (ctx->pc == 0x196850u) {
        ctx->pc = 0x196854u;
        goto label_196854;
    }
    ctx->pc = 0x19684Cu;
    {
        const bool branch_taken_0x19684c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19684c) {
            ctx->pc = 0x19686Cu;
            goto label_19686c;
        }
    }
    ctx->pc = 0x196854u;
label_196854:
    // 0x196854: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x196854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_196858:
    // 0x196858: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_19685c:
    if (ctx->pc == 0x19685Cu) {
        ctx->pc = 0x196860u;
        goto label_196860;
    }
    ctx->pc = 0x196858u;
    {
        const bool branch_taken_0x196858 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x196858) {
            ctx->pc = 0x19686Cu;
            goto label_19686c;
        }
    }
    ctx->pc = 0x196860u;
label_196860:
    // 0x196860: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x196860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_196864:
    // 0x196864: 0xc0f809  jalr        $a2
label_196868:
    if (ctx->pc == 0x196868u) {
        ctx->pc = 0x196868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196864u;
        // 0x196868: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19686Cu;
        goto label_19686c;
    }
    ctx->pc = 0x196864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x19686Cu);
        ctx->pc = 0x196868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196864u;
        // 0x196868: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196864u, 0x19686Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19686Cu;
label_19686c:
    // 0x19686c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19686cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196870:
    // 0x196870: 0x3e00008  jr          $ra
label_196874:
    if (ctx->pc == 0x196874u) {
        ctx->pc = 0x196874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196870u;
        // 0x196874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196878u;
        goto label_196878;
    }
    ctx->pc = 0x196870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196870u;
        // 0x196874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196878u;
label_196878:
    // 0x196878: 0x0  nop
    ctx->pc = 0x196878u;
    // NOP
label_19687c:
    // 0x19687c: 0x0  nop
    ctx->pc = 0x19687cu;
    // NOP
label_196880:
    // 0x196880: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x196880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_196884:
    // 0x196884: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x196884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_196888:
    // 0x196888: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x196888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_19688c:
    // 0x19688c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19688cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_196890:
    // 0x196890: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_196894:
    // 0x196894: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x196894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196898:
    // 0x196898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19689c:
    // 0x19689c: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x19689cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1968a0:
    // 0x1968a0: 0xc065f20  jal         func_197C80
label_1968a4:
    if (ctx->pc == 0x1968A4u) {
        ctx->pc = 0x1968A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968A0u;
        // 0x1968a4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968A8u;
        goto label_1968a8;
    }
    ctx->pc = 0x1968A0u;
    SET_GPR_U32(ctx, 31, 0x1968A8u);
    ctx->pc = 0x1968A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968A0u;
    // 0x1968a4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197C80u;
    { ctx->pc = 0x197c80; return; }
    ctx->pc = 0x1968A8u;
label_1968a8:
    // 0x1968a8: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1968a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1968ac:
    // 0x1968ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1968b0:
    if (ctx->pc == 0x1968B0u) {
        ctx->pc = 0x1968B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968ACu;
        // 0x1968b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968B4u;
        goto label_1968b4;
    }
    ctx->pc = 0x1968ACu;
    {
        const bool branch_taken_0x1968ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1968B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968ACu;
        // 0x1968b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1968ac) {
            ctx->pc = 0x1968C0u;
            goto label_1968c0;
        }
    }
    ctx->pc = 0x1968B4u;
label_1968b4:
    // 0x1968b4: 0xc065988  jal         func_196620
label_1968b8:
    if (ctx->pc == 0x1968B8u) {
        ctx->pc = 0x1968BCu;
        goto label_1968bc;
    }
    ctx->pc = 0x1968B4u;
    SET_GPR_U32(ctx, 31, 0x1968BCu);
    ctx->pc = 0x196620u;
    goto label_196620;
    ctx->pc = 0x1968BCu;
label_1968bc:
    // 0x1968bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1968bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1968c0:
    // 0x1968c0: 0xc065fec  jal         func_197FB0
label_1968c4:
    if (ctx->pc == 0x1968C4u) {
        ctx->pc = 0x1968C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968C0u;
        // 0x1968c4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968C8u;
        goto label_1968c8;
    }
    ctx->pc = 0x1968C0u;
    SET_GPR_U32(ctx, 31, 0x1968C8u);
    ctx->pc = 0x1968C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968C0u;
    // 0x1968c4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197FB0u;
    { ctx->pc = 0x197fb0; return; }
    ctx->pc = 0x1968C8u;
label_1968c8:
    // 0x1968c8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1968c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1968cc:
    // 0x1968cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1968d0:
    if (ctx->pc == 0x1968D0u) {
        ctx->pc = 0x1968D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968CCu;
        // 0x1968d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968D4u;
        goto label_1968d4;
    }
    ctx->pc = 0x1968CCu;
    {
        const bool branch_taken_0x1968cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1968D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968CCu;
        // 0x1968d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1968cc) {
            ctx->pc = 0x1968E4u;
            goto label_1968e4;
        }
    }
    ctx->pc = 0x1968D4u;
label_1968d4:
    // 0x1968d4: 0xc065bdc  jal         func_196F70
label_1968d8:
    if (ctx->pc == 0x1968D8u) {
        ctx->pc = 0x1968D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968D4u;
        // 0x1968d8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968DCu;
        goto label_1968dc;
    }
    ctx->pc = 0x1968D4u;
    SET_GPR_U32(ctx, 31, 0x1968DCu);
    ctx->pc = 0x1968D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968D4u;
    // 0x1968d8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196F70u;
    { ctx->pc = 0x196f70; return; }
    ctx->pc = 0x1968DCu;
label_1968dc:
    // 0x1968dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1968e0:
    if (ctx->pc == 0x1968E0u) {
        ctx->pc = 0x1968E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968DCu;
        // 0x1968e0: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968E4u;
        goto label_1968e4;
    }
    ctx->pc = 0x1968DCu;
    {
        const bool branch_taken_0x1968dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1968E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968DCu;
        // 0x1968e0: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1968dc) {
            ctx->pc = 0x1968E8u;
            goto label_1968e8;
        }
    }
    ctx->pc = 0x1968E4u;
label_1968e4:
    // 0x1968e4: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1968e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_1968e8:
    // 0x1968e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1968e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1968ec:
    // 0x1968ec: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1968ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1968f0:
    // 0x1968f0: 0xc065a84  jal         func_196A10
label_1968f4:
    if (ctx->pc == 0x1968F4u) {
        ctx->pc = 0x1968F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968F0u;
        // 0x1968f4: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968F8u;
        goto label_1968f8;
    }
    ctx->pc = 0x1968F0u;
    SET_GPR_U32(ctx, 31, 0x1968F8u);
    ctx->pc = 0x1968F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968F0u;
    // 0x1968f4: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196A10u;
    { ctx->pc = 0x196a10; return; }
    ctx->pc = 0x1968F8u;
label_1968f8:
    // 0x1968f8: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x1968f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1968fc:
    // 0x1968fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1968fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196900:
    // 0x196900: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x196900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_196904:
    // 0x196904: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x196904u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_196908:
    // 0x196908: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x196908u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_19690c:
    // 0x19690c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x19690cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_196910:
    // 0x196910: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x196910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_196914:
    // 0x196914: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x196914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_196918:
    // 0x196918: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x196918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_19691c:
    // 0x19691c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x19691cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_196920:
    // 0x196920: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x196920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_196924:
    // 0x196924: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x196924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_196928:
    // 0x196928: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x196928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_19692c:
    // 0x19692c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_196930:
    if (ctx->pc == 0x196930u) {
        ctx->pc = 0x196930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19692Cu;
        // 0x196930: 0x26040005  addiu       $a0, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196934u;
        goto label_196934;
    }
    ctx->pc = 0x19692Cu;
    {
        const bool branch_taken_0x19692c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19692Cu;
        // 0x196930: 0x26040005  addiu       $a0, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19692c) {
            ctx->pc = 0x19693Cu;
            goto label_19693c;
        }
    }
    ctx->pc = 0x196934u;
label_196934:
    // 0x196934: 0x10000003  b           . + 4 + (0x3 << 2)
label_196938:
    if (ctx->pc == 0x196938u) {
        ctx->pc = 0x196938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196934u;
        // 0x196938: 0x27b1006c  addiu       $s1, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19693Cu;
        goto label_19693c;
    }
    ctx->pc = 0x196934u;
    {
        const bool branch_taken_0x196934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196934u;
        // 0x196938: 0x27b1006c  addiu       $s1, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196934) {
            ctx->pc = 0x196944u;
            goto label_196944;
        }
    }
    ctx->pc = 0x19693Cu;
label_19693c:
    // 0x19693c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19693cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196940:
    // 0x196940: 0x27b1006c  addiu       $s1, $sp, 0x6C
    ctx->pc = 0x196940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_196944:
    // 0x196944: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x196944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_196948:
    // 0x196948: 0xc0659c0  jal         func_196700
label_19694c:
    if (ctx->pc == 0x19694Cu) {
        ctx->pc = 0x19694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196948u;
        // 0x19694c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196950u;
        goto label_196950;
    }
    ctx->pc = 0x196948u;
    SET_GPR_U32(ctx, 31, 0x196950u);
    ctx->pc = 0x19694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196948u;
    // 0x19694c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    goto label_196700;
    ctx->pc = 0x196950u;
label_196950:
    // 0x196950: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x196950u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_196954:
    // 0x196954: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196958:
    // 0x196958: 0xc0659e8  jal         func_1967A0
label_19695c:
    if (ctx->pc == 0x19695Cu) {
        ctx->pc = 0x19695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196958u;
        // 0x19695c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196960u;
        goto label_196960;
    }
    ctx->pc = 0x196958u;
    SET_GPR_U32(ctx, 31, 0x196960u);
    ctx->pc = 0x19695Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196958u;
    // 0x19695c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1967A0u;
    goto label_1967a0;
    ctx->pc = 0x196960u;
label_196960:
    // 0x196960: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x196960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196964:
    // 0x196964: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_196968:
    // 0x196968: 0xc065c3c  jal         func_1970F0
label_19696c:
    if (ctx->pc == 0x19696Cu) {
        ctx->pc = 0x19696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196968u;
        // 0x19696c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196970u;
        goto label_196970;
    }
    ctx->pc = 0x196968u;
    SET_GPR_U32(ctx, 31, 0x196970u);
    ctx->pc = 0x19696Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196968u;
    // 0x19696c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1970F0u;
    { ctx->pc = 0x1970f0; return; }
    ctx->pc = 0x196970u;
label_196970:
    // 0x196970: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x196970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_196974:
    // 0x196974: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x196974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_196978:
    // 0x196978: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x196978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_19697c:
    // 0x19697c: 0xdfa60078  ld          $a2, 0x78($sp)
    ctx->pc = 0x19697cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_196980:
    // 0x196980: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x196980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_196984:
    // 0x196984: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x196984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_196988:
    // 0x196988: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x196988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_19698c:
    // 0x19698c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19698cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196990:
    // 0x196990: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x196990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_196994:
    // 0x196994: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x196994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_196998:
    // 0x196998: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x196998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_19699c:
    // 0x19699c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19699cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1969a0:
    // 0x1969a0: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1969a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1969a4:
    // 0x1969a4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1969a8:
    if (ctx->pc == 0x1969A8u) {
        ctx->pc = 0x1969A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969A4u;
        // 0x1969a8: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1969ACu;
        goto label_1969ac;
    }
    ctx->pc = 0x1969A4u;
    {
        const bool branch_taken_0x1969a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1969A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969A4u;
        // 0x1969a8: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1969a4) {
            ctx->pc = 0x1969C4u;
            goto label_1969c4;
        }
    }
    ctx->pc = 0x1969ACu;
label_1969ac:
    // 0x1969ac: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1969acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1969b0:
    // 0x1969b0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1969b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1969b4:
    // 0x1969b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1969b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1969b8:
    // 0x1969b8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1969b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1969bc:
    // 0x1969bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1969c0:
    if (ctx->pc == 0x1969C0u) {
        ctx->pc = 0x1969C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969BCu;
        // 0x1969c0: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1969C4u;
        goto label_1969c4;
    }
    ctx->pc = 0x1969BCu;
    {
        const bool branch_taken_0x1969bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1969C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969BCu;
        // 0x1969c0: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1969bc) {
            ctx->pc = 0x1969D8u;
            { ctx->pc = 0x1969d8; return; }
        }
    }
    ctx->pc = 0x1969C4u;
label_1969c4:
    // 0x1969c4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1969c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1969c8:
    // 0x1969c8: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x1969c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_1969cc:
    // 0x1969cc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1969ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    ctx->pc = 0x1969d0u;
    return;
}
