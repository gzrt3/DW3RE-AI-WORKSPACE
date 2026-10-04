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


void FUN_0014eba0_part47(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x165300u: goto label_165300;
        case 0x165304u: goto label_165304;
        case 0x165308u: goto label_165308;
        case 0x16530cu: goto label_16530c;
        case 0x165310u: goto label_165310;
        case 0x165314u: goto label_165314;
        case 0x165318u: goto label_165318;
        case 0x16531cu: goto label_16531c;
        case 0x165320u: goto label_165320;
        case 0x165324u: goto label_165324;
        case 0x165328u: goto label_165328;
        case 0x16532cu: goto label_16532c;
        case 0x165330u: goto label_165330;
        case 0x165334u: goto label_165334;
        case 0x165338u: goto label_165338;
        case 0x16533cu: goto label_16533c;
        case 0x165340u: goto label_165340;
        case 0x165344u: goto label_165344;
        case 0x165348u: goto label_165348;
        case 0x16534cu: goto label_16534c;
        case 0x165350u: goto label_165350;
        case 0x165354u: goto label_165354;
        case 0x165358u: goto label_165358;
        case 0x16535cu: goto label_16535c;
        case 0x165360u: goto label_165360;
        case 0x165364u: goto label_165364;
        case 0x165368u: goto label_165368;
        case 0x16536cu: goto label_16536c;
        case 0x165370u: goto label_165370;
        case 0x165374u: goto label_165374;
        case 0x165378u: goto label_165378;
        case 0x16537cu: goto label_16537c;
        case 0x165380u: goto label_165380;
        case 0x165384u: goto label_165384;
        case 0x165388u: goto label_165388;
        case 0x16538cu: goto label_16538c;
        case 0x165390u: goto label_165390;
        case 0x165394u: goto label_165394;
        case 0x165398u: goto label_165398;
        case 0x16539cu: goto label_16539c;
        case 0x1653a0u: goto label_1653a0;
        case 0x1653a4u: goto label_1653a4;
        case 0x1653a8u: goto label_1653a8;
        case 0x1653acu: goto label_1653ac;
        case 0x1653b0u: goto label_1653b0;
        case 0x1653b4u: goto label_1653b4;
        case 0x1653b8u: goto label_1653b8;
        case 0x1653bcu: goto label_1653bc;
        case 0x1653c0u: goto label_1653c0;
        case 0x1653c4u: goto label_1653c4;
        case 0x1653c8u: goto label_1653c8;
        case 0x1653ccu: goto label_1653cc;
        case 0x1653d0u: goto label_1653d0;
        case 0x1653d4u: goto label_1653d4;
        case 0x1653d8u: goto label_1653d8;
        case 0x1653dcu: goto label_1653dc;
        case 0x1653e0u: goto label_1653e0;
        case 0x1653e4u: goto label_1653e4;
        case 0x1653e8u: goto label_1653e8;
        case 0x1653ecu: goto label_1653ec;
        case 0x1653f0u: goto label_1653f0;
        case 0x1653f4u: goto label_1653f4;
        case 0x1653f8u: goto label_1653f8;
        case 0x1653fcu: goto label_1653fc;
        case 0x165400u: goto label_165400;
        case 0x165404u: goto label_165404;
        case 0x165408u: goto label_165408;
        case 0x16540cu: goto label_16540c;
        case 0x165410u: goto label_165410;
        case 0x165414u: goto label_165414;
        case 0x165418u: goto label_165418;
        case 0x16541cu: goto label_16541c;
        case 0x165420u: goto label_165420;
        case 0x165424u: goto label_165424;
        case 0x165428u: goto label_165428;
        case 0x16542cu: goto label_16542c;
        case 0x165430u: goto label_165430;
        case 0x165434u: goto label_165434;
        case 0x165438u: goto label_165438;
        case 0x16543cu: goto label_16543c;
        case 0x165440u: goto label_165440;
        case 0x165444u: goto label_165444;
        case 0x165448u: goto label_165448;
        case 0x16544cu: goto label_16544c;
        case 0x165450u: goto label_165450;
        case 0x165454u: goto label_165454;
        case 0x165458u: goto label_165458;
        case 0x16545cu: goto label_16545c;
        case 0x165460u: goto label_165460;
        case 0x165464u: goto label_165464;
        case 0x165468u: goto label_165468;
        case 0x16546cu: goto label_16546c;
        case 0x165470u: goto label_165470;
        case 0x165474u: goto label_165474;
        case 0x165478u: goto label_165478;
        case 0x16547cu: goto label_16547c;
        case 0x165480u: goto label_165480;
        case 0x165484u: goto label_165484;
        case 0x165488u: goto label_165488;
        case 0x16548cu: goto label_16548c;
        case 0x165490u: goto label_165490;
        case 0x165494u: goto label_165494;
        case 0x165498u: goto label_165498;
        case 0x16549cu: goto label_16549c;
        case 0x1654a0u: goto label_1654a0;
        case 0x1654a4u: goto label_1654a4;
        case 0x1654a8u: goto label_1654a8;
        case 0x1654acu: goto label_1654ac;
        case 0x1654b0u: goto label_1654b0;
        case 0x1654b4u: goto label_1654b4;
        case 0x1654b8u: goto label_1654b8;
        case 0x1654bcu: goto label_1654bc;
        case 0x1654c0u: goto label_1654c0;
        case 0x1654c4u: goto label_1654c4;
        case 0x1654c8u: goto label_1654c8;
        case 0x1654ccu: goto label_1654cc;
        case 0x1654d0u: goto label_1654d0;
        case 0x1654d4u: goto label_1654d4;
        case 0x1654d8u: goto label_1654d8;
        case 0x1654dcu: goto label_1654dc;
        case 0x1654e0u: goto label_1654e0;
        case 0x1654e4u: goto label_1654e4;
        case 0x1654e8u: goto label_1654e8;
        case 0x1654ecu: goto label_1654ec;
        case 0x1654f0u: goto label_1654f0;
        case 0x1654f4u: goto label_1654f4;
        case 0x1654f8u: goto label_1654f8;
        case 0x1654fcu: goto label_1654fc;
        case 0x165500u: goto label_165500;
        case 0x165504u: goto label_165504;
        case 0x165508u: goto label_165508;
        case 0x16550cu: goto label_16550c;
        case 0x165510u: goto label_165510;
        case 0x165514u: goto label_165514;
        case 0x165518u: goto label_165518;
        case 0x16551cu: goto label_16551c;
        case 0x165520u: goto label_165520;
        case 0x165524u: goto label_165524;
        case 0x165528u: goto label_165528;
        case 0x16552cu: goto label_16552c;
        case 0x165530u: goto label_165530;
        case 0x165534u: goto label_165534;
        case 0x165538u: goto label_165538;
        case 0x16553cu: goto label_16553c;
        case 0x165540u: goto label_165540;
        case 0x165544u: goto label_165544;
        case 0x165548u: goto label_165548;
        case 0x16554cu: goto label_16554c;
        case 0x165550u: goto label_165550;
        case 0x165554u: goto label_165554;
        case 0x165558u: goto label_165558;
        case 0x16555cu: goto label_16555c;
        case 0x165560u: goto label_165560;
        case 0x165564u: goto label_165564;
        case 0x165568u: goto label_165568;
        case 0x16556cu: goto label_16556c;
        case 0x165570u: goto label_165570;
        case 0x165574u: goto label_165574;
        case 0x165578u: goto label_165578;
        case 0x16557cu: goto label_16557c;
        case 0x165580u: goto label_165580;
        case 0x165584u: goto label_165584;
        case 0x165588u: goto label_165588;
        case 0x16558cu: goto label_16558c;
        case 0x165590u: goto label_165590;
        case 0x165594u: goto label_165594;
        case 0x165598u: goto label_165598;
        case 0x16559cu: goto label_16559c;
        case 0x1655a0u: goto label_1655a0;
        case 0x1655a4u: goto label_1655a4;
        case 0x1655a8u: goto label_1655a8;
        case 0x1655acu: goto label_1655ac;
        case 0x1655b0u: goto label_1655b0;
        case 0x1655b4u: goto label_1655b4;
        case 0x1655b8u: goto label_1655b8;
        case 0x1655bcu: goto label_1655bc;
        case 0x1655c0u: goto label_1655c0;
        case 0x1655c4u: goto label_1655c4;
        case 0x1655c8u: goto label_1655c8;
        case 0x1655ccu: goto label_1655cc;
        case 0x1655d0u: goto label_1655d0;
        case 0x1655d4u: goto label_1655d4;
        case 0x1655d8u: goto label_1655d8;
        case 0x1655dcu: goto label_1655dc;
        case 0x1655e0u: goto label_1655e0;
        case 0x1655e4u: goto label_1655e4;
        case 0x1655e8u: goto label_1655e8;
        case 0x1655ecu: goto label_1655ec;
        case 0x1655f0u: goto label_1655f0;
        case 0x1655f4u: goto label_1655f4;
        case 0x1655f8u: goto label_1655f8;
        case 0x1655fcu: goto label_1655fc;
        case 0x165600u: goto label_165600;
        case 0x165604u: goto label_165604;
        case 0x165608u: goto label_165608;
        case 0x16560cu: goto label_16560c;
        case 0x165610u: goto label_165610;
        case 0x165614u: goto label_165614;
        case 0x165618u: goto label_165618;
        case 0x16561cu: goto label_16561c;
        case 0x165620u: goto label_165620;
        case 0x165624u: goto label_165624;
        case 0x165628u: goto label_165628;
        case 0x16562cu: goto label_16562c;
        case 0x165630u: goto label_165630;
        case 0x165634u: goto label_165634;
        case 0x165638u: goto label_165638;
        case 0x16563cu: goto label_16563c;
        case 0x165640u: goto label_165640;
        case 0x165644u: goto label_165644;
        case 0x165648u: goto label_165648;
        case 0x16564cu: goto label_16564c;
        case 0x165650u: goto label_165650;
        case 0x165654u: goto label_165654;
        case 0x165658u: goto label_165658;
        case 0x16565cu: goto label_16565c;
        case 0x165660u: goto label_165660;
        case 0x165664u: goto label_165664;
        case 0x165668u: goto label_165668;
        case 0x16566cu: goto label_16566c;
        case 0x165670u: goto label_165670;
        case 0x165674u: goto label_165674;
        case 0x165678u: goto label_165678;
        case 0x16567cu: goto label_16567c;
        case 0x165680u: goto label_165680;
        case 0x165684u: goto label_165684;
        case 0x165688u: goto label_165688;
        case 0x16568cu: goto label_16568c;
        case 0x165690u: goto label_165690;
        case 0x165694u: goto label_165694;
        case 0x165698u: goto label_165698;
        case 0x16569cu: goto label_16569c;
        case 0x1656a0u: goto label_1656a0;
        case 0x1656a4u: goto label_1656a4;
        case 0x1656a8u: goto label_1656a8;
        case 0x1656acu: goto label_1656ac;
        case 0x1656b0u: goto label_1656b0;
        case 0x1656b4u: goto label_1656b4;
        case 0x1656b8u: goto label_1656b8;
        case 0x1656bcu: goto label_1656bc;
        case 0x1656c0u: goto label_1656c0;
        case 0x1656c4u: goto label_1656c4;
        case 0x1656c8u: goto label_1656c8;
        case 0x1656ccu: goto label_1656cc;
        case 0x1656d0u: goto label_1656d0;
        case 0x1656d4u: goto label_1656d4;
        case 0x1656d8u: goto label_1656d8;
        case 0x1656dcu: goto label_1656dc;
        case 0x1656e0u: goto label_1656e0;
        case 0x1656e4u: goto label_1656e4;
        case 0x1656e8u: goto label_1656e8;
        case 0x1656ecu: goto label_1656ec;
        case 0x1656f0u: goto label_1656f0;
        case 0x1656f4u: goto label_1656f4;
        case 0x1656f8u: goto label_1656f8;
        case 0x1656fcu: goto label_1656fc;
        case 0x165700u: goto label_165700;
        case 0x165704u: goto label_165704;
        case 0x165708u: goto label_165708;
        case 0x16570cu: goto label_16570c;
        case 0x165710u: goto label_165710;
        case 0x165714u: goto label_165714;
        case 0x165718u: goto label_165718;
        case 0x16571cu: goto label_16571c;
        case 0x165720u: goto label_165720;
        case 0x165724u: goto label_165724;
        case 0x165728u: goto label_165728;
        case 0x16572cu: goto label_16572c;
        case 0x165730u: goto label_165730;
        case 0x165734u: goto label_165734;
        case 0x165738u: goto label_165738;
        case 0x16573cu: goto label_16573c;
        case 0x165740u: goto label_165740;
        case 0x165744u: goto label_165744;
        case 0x165748u: goto label_165748;
        case 0x16574cu: goto label_16574c;
        case 0x165750u: goto label_165750;
        case 0x165754u: goto label_165754;
        case 0x165758u: goto label_165758;
        case 0x16575cu: goto label_16575c;
        case 0x165760u: goto label_165760;
        case 0x165764u: goto label_165764;
        case 0x165768u: goto label_165768;
        case 0x16576cu: goto label_16576c;
        case 0x165770u: goto label_165770;
        case 0x165774u: goto label_165774;
        case 0x165778u: goto label_165778;
        case 0x16577cu: goto label_16577c;
        case 0x165780u: goto label_165780;
        case 0x165784u: goto label_165784;
        case 0x165788u: goto label_165788;
        case 0x16578cu: goto label_16578c;
        case 0x165790u: goto label_165790;
        case 0x165794u: goto label_165794;
        case 0x165798u: goto label_165798;
        case 0x16579cu: goto label_16579c;
        case 0x1657a0u: goto label_1657a0;
        case 0x1657a4u: goto label_1657a4;
        case 0x1657a8u: goto label_1657a8;
        case 0x1657acu: goto label_1657ac;
        case 0x1657b0u: goto label_1657b0;
        case 0x1657b4u: goto label_1657b4;
        case 0x1657b8u: goto label_1657b8;
        case 0x1657bcu: goto label_1657bc;
        case 0x1657c0u: goto label_1657c0;
        case 0x1657c4u: goto label_1657c4;
        case 0x1657c8u: goto label_1657c8;
        case 0x1657ccu: goto label_1657cc;
        case 0x1657d0u: goto label_1657d0;
        case 0x1657d4u: goto label_1657d4;
        case 0x1657d8u: goto label_1657d8;
        case 0x1657dcu: goto label_1657dc;
        case 0x1657e0u: goto label_1657e0;
        case 0x1657e4u: goto label_1657e4;
        case 0x1657e8u: goto label_1657e8;
        case 0x1657ecu: goto label_1657ec;
        case 0x1657f0u: goto label_1657f0;
        case 0x1657f4u: goto label_1657f4;
        case 0x1657f8u: goto label_1657f8;
        case 0x1657fcu: goto label_1657fc;
        case 0x165800u: goto label_165800;
        case 0x165804u: goto label_165804;
        case 0x165808u: goto label_165808;
        case 0x16580cu: goto label_16580c;
        case 0x165810u: goto label_165810;
        case 0x165814u: goto label_165814;
        case 0x165818u: goto label_165818;
        case 0x16581cu: goto label_16581c;
        case 0x165820u: goto label_165820;
        case 0x165824u: goto label_165824;
        case 0x165828u: goto label_165828;
        case 0x16582cu: goto label_16582c;
        case 0x165830u: goto label_165830;
        case 0x165834u: goto label_165834;
        case 0x165838u: goto label_165838;
        case 0x16583cu: goto label_16583c;
        case 0x165840u: goto label_165840;
        case 0x165844u: goto label_165844;
        case 0x165848u: goto label_165848;
        case 0x16584cu: goto label_16584c;
        case 0x165850u: goto label_165850;
        case 0x165854u: goto label_165854;
        case 0x165858u: goto label_165858;
        case 0x16585cu: goto label_16585c;
        case 0x165860u: goto label_165860;
        case 0x165864u: goto label_165864;
        case 0x165868u: goto label_165868;
        case 0x16586cu: goto label_16586c;
        case 0x165870u: goto label_165870;
        case 0x165874u: goto label_165874;
        case 0x165878u: goto label_165878;
        case 0x16587cu: goto label_16587c;
        case 0x165880u: goto label_165880;
        case 0x165884u: goto label_165884;
        case 0x165888u: goto label_165888;
        case 0x16588cu: goto label_16588c;
        case 0x165890u: goto label_165890;
        case 0x165894u: goto label_165894;
        case 0x165898u: goto label_165898;
        case 0x16589cu: goto label_16589c;
        case 0x1658a0u: goto label_1658a0;
        case 0x1658a4u: goto label_1658a4;
        case 0x1658a8u: goto label_1658a8;
        case 0x1658acu: goto label_1658ac;
        case 0x1658b0u: goto label_1658b0;
        case 0x1658b4u: goto label_1658b4;
        case 0x1658b8u: goto label_1658b8;
        case 0x1658bcu: goto label_1658bc;
        case 0x1658c0u: goto label_1658c0;
        case 0x1658c4u: goto label_1658c4;
        case 0x1658c8u: goto label_1658c8;
        case 0x1658ccu: goto label_1658cc;
        case 0x1658d0u: goto label_1658d0;
        case 0x1658d4u: goto label_1658d4;
        case 0x1658d8u: goto label_1658d8;
        case 0x1658dcu: goto label_1658dc;
        case 0x1658e0u: goto label_1658e0;
        case 0x1658e4u: goto label_1658e4;
        case 0x1658e8u: goto label_1658e8;
        case 0x1658ecu: goto label_1658ec;
        case 0x1658f0u: goto label_1658f0;
        case 0x1658f4u: goto label_1658f4;
        case 0x1658f8u: goto label_1658f8;
        case 0x1658fcu: goto label_1658fc;
        case 0x165900u: goto label_165900;
        case 0x165904u: goto label_165904;
        case 0x165908u: goto label_165908;
        case 0x16590cu: goto label_16590c;
        case 0x165910u: goto label_165910;
        case 0x165914u: goto label_165914;
        case 0x165918u: goto label_165918;
        case 0x16591cu: goto label_16591c;
        case 0x165920u: goto label_165920;
        case 0x165924u: goto label_165924;
        case 0x165928u: goto label_165928;
        case 0x16592cu: goto label_16592c;
        case 0x165930u: goto label_165930;
        case 0x165934u: goto label_165934;
        case 0x165938u: goto label_165938;
        case 0x16593cu: goto label_16593c;
        case 0x165940u: goto label_165940;
        case 0x165944u: goto label_165944;
        case 0x165948u: goto label_165948;
        case 0x16594cu: goto label_16594c;
        case 0x165950u: goto label_165950;
        case 0x165954u: goto label_165954;
        case 0x165958u: goto label_165958;
        case 0x16595cu: goto label_16595c;
        case 0x165960u: goto label_165960;
        case 0x165964u: goto label_165964;
        case 0x165968u: goto label_165968;
        case 0x16596cu: goto label_16596c;
        case 0x165970u: goto label_165970;
        case 0x165974u: goto label_165974;
        case 0x165978u: goto label_165978;
        case 0x16597cu: goto label_16597c;
        case 0x165980u: goto label_165980;
        case 0x165984u: goto label_165984;
        case 0x165988u: goto label_165988;
        case 0x16598cu: goto label_16598c;
        case 0x165990u: goto label_165990;
        case 0x165994u: goto label_165994;
        case 0x165998u: goto label_165998;
        case 0x16599cu: goto label_16599c;
        case 0x1659a0u: goto label_1659a0;
        case 0x1659a4u: goto label_1659a4;
        case 0x1659a8u: goto label_1659a8;
        case 0x1659acu: goto label_1659ac;
        case 0x1659b0u: goto label_1659b0;
        case 0x1659b4u: goto label_1659b4;
        case 0x1659b8u: goto label_1659b8;
        case 0x1659bcu: goto label_1659bc;
        case 0x1659c0u: goto label_1659c0;
        case 0x1659c4u: goto label_1659c4;
        case 0x1659c8u: goto label_1659c8;
        case 0x1659ccu: goto label_1659cc;
        case 0x1659d0u: goto label_1659d0;
        case 0x1659d4u: goto label_1659d4;
        case 0x1659d8u: goto label_1659d8;
        case 0x1659dcu: goto label_1659dc;
        case 0x1659e0u: goto label_1659e0;
        case 0x1659e4u: goto label_1659e4;
        case 0x1659e8u: goto label_1659e8;
        case 0x1659ecu: goto label_1659ec;
        case 0x1659f0u: goto label_1659f0;
        case 0x1659f4u: goto label_1659f4;
        case 0x1659f8u: goto label_1659f8;
        case 0x1659fcu: goto label_1659fc;
        case 0x165a00u: goto label_165a00;
        case 0x165a04u: goto label_165a04;
        case 0x165a08u: goto label_165a08;
        case 0x165a0cu: goto label_165a0c;
        case 0x165a10u: goto label_165a10;
        case 0x165a14u: goto label_165a14;
        case 0x165a18u: goto label_165a18;
        case 0x165a1cu: goto label_165a1c;
        case 0x165a20u: goto label_165a20;
        case 0x165a24u: goto label_165a24;
        case 0x165a28u: goto label_165a28;
        case 0x165a2cu: goto label_165a2c;
        case 0x165a30u: goto label_165a30;
        case 0x165a34u: goto label_165a34;
        case 0x165a38u: goto label_165a38;
        case 0x165a3cu: goto label_165a3c;
        case 0x165a40u: goto label_165a40;
        case 0x165a44u: goto label_165a44;
        case 0x165a48u: goto label_165a48;
        case 0x165a4cu: goto label_165a4c;
        case 0x165a50u: goto label_165a50;
        case 0x165a54u: goto label_165a54;
        case 0x165a58u: goto label_165a58;
        case 0x165a5cu: goto label_165a5c;
        case 0x165a60u: goto label_165a60;
        case 0x165a64u: goto label_165a64;
        case 0x165a68u: goto label_165a68;
        case 0x165a6cu: goto label_165a6c;
        case 0x165a70u: goto label_165a70;
        case 0x165a74u: goto label_165a74;
        case 0x165a78u: goto label_165a78;
        case 0x165a7cu: goto label_165a7c;
        case 0x165a80u: goto label_165a80;
        case 0x165a84u: goto label_165a84;
        case 0x165a88u: goto label_165a88;
        case 0x165a8cu: goto label_165a8c;
        case 0x165a90u: goto label_165a90;
        case 0x165a94u: goto label_165a94;
        case 0x165a98u: goto label_165a98;
        case 0x165a9cu: goto label_165a9c;
        case 0x165aa0u: goto label_165aa0;
        case 0x165aa4u: goto label_165aa4;
        case 0x165aa8u: goto label_165aa8;
        case 0x165aacu: goto label_165aac;
        case 0x165ab0u: goto label_165ab0;
        case 0x165ab4u: goto label_165ab4;
        case 0x165ab8u: goto label_165ab8;
        case 0x165abcu: goto label_165abc;
        case 0x165ac0u: goto label_165ac0;
        case 0x165ac4u: goto label_165ac4;
        case 0x165ac8u: goto label_165ac8;
        case 0x165accu: goto label_165acc;
        default: return;
    }

label_165300:
    if (ctx->pc == 0x165300u) {
        ctx->pc = 0x165300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652FCu;
        // 0x165300: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165304u;
        goto label_165304;
    }
    ctx->pc = 0x1652FCu;
    SET_GPR_U32(ctx, 31, 0x165304u);
    ctx->pc = 0x165300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1652FCu;
    // 0x165300: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D6F0u, 0x1652FCu, 0x165304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165304u;
label_165304:
    // 0x165304: 0x1000000c  b           . + 4 + (0xC << 2)
label_165308:
    if (ctx->pc == 0x165308u) {
        ctx->pc = 0x16530Cu;
        goto label_16530c;
    }
    ctx->pc = 0x165304u;
    {
        const bool branch_taken_0x165304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165304) {
            ctx->pc = 0x165338u;
            goto label_165338;
        }
    }
    ctx->pc = 0x16530Cu;
label_16530c:
    // 0x16530c: 0x0  nop
    ctx->pc = 0x16530cu;
    // NOP
label_165310:
    // 0x165310: 0x9224000e  lbu         $a0, 0xE($s1)
    ctx->pc = 0x165310u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
label_165314:
    // 0x165314: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x165314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_165318:
    // 0x165318: 0x2881001f  slti        $at, $a0, 0x1F
    ctx->pc = 0x165318u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
label_16531c:
    // 0x16531c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_165320:
    if (ctx->pc == 0x165320u) {
        ctx->pc = 0x165320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16531Cu;
        // 0x165320: 0xa223000e  sb          $v1, 0xE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165324u;
        goto label_165324;
    }
    ctx->pc = 0x16531Cu;
    {
        const bool branch_taken_0x16531c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x165320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16531Cu;
        // 0x165320: 0xa223000e  sb          $v1, 0xE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16531c) {
            ctx->pc = 0x165338u;
            goto label_165338;
        }
    }
    ctx->pc = 0x165324u;
label_165324:
    // 0x165324: 0xa227000a  sb          $a3, 0xA($s1)
    ctx->pc = 0x165324u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 7));
label_165328:
    // 0x165328: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x165328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_16532c:
    // 0x16532c: 0x94830056  lhu         $v1, 0x56($a0)
    ctx->pc = 0x16532cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 86)));
label_165330:
    // 0x165330: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x165330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
label_165334:
    // 0x165334: 0xa4830056  sh          $v1, 0x56($a0)
    ctx->pc = 0x165334u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 86), (uint16_t)GPR_U32(ctx, 3));
label_165338:
    // 0x165338: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x165338u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16533c:
    // 0x16533c: 0x1620fed1  bnez        $s1, . + 4 + (-0x12F << 2)
label_165340:
    if (ctx->pc == 0x165340u) {
        ctx->pc = 0x165344u;
        goto label_165344;
    }
    ctx->pc = 0x16533Cu;
    {
        const bool branch_taken_0x16533c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x16533c) {
            ctx->pc = 0x164E84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x164e84; return; }
        }
    }
    ctx->pc = 0x165344u;
label_165344:
    // 0x165344: 0x0  nop
    ctx->pc = 0x165344u;
    // NOP
label_165348:
    // 0x165348: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x165348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16534c:
    // 0x16534c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16534cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_165350:
    // 0x165350: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x165350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_165354:
    // 0x165354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_165358:
    // 0x165358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16535c:
    // 0x16535c: 0x3e00008  jr          $ra
label_165360:
    if (ctx->pc == 0x165360u) {
        ctx->pc = 0x165360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16535Cu;
        // 0x165360: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165364u;
        goto label_165364;
    }
    ctx->pc = 0x16535Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16535Cu;
        // 0x165360: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16535Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165364u;
label_165364:
    // 0x165364: 0x0  nop
    ctx->pc = 0x165364u;
    // NOP
label_165368:
    // 0x165368: 0x0  nop
    ctx->pc = 0x165368u;
    // NOP
label_16536c:
    // 0x16536c: 0x0  nop
    ctx->pc = 0x16536cu;
    // NOP
label_165370:
    // 0x165370: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_165374:
    if (ctx->pc == 0x165374u) {
        ctx->pc = 0x165378u;
        goto label_165378;
    }
    ctx->pc = 0x165370u;
    {
        const bool branch_taken_0x165370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x165370) {
            ctx->pc = 0x165390u;
            goto label_165390;
        }
    }
    ctx->pc = 0x165378u;
label_165378:
    // 0x165378: 0x9086000a  lbu         $a2, 0xA($a0)
    ctx->pc = 0x165378u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
label_16537c:
    // 0x16537c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16537cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165380:
    // 0x165380: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
label_165384:
    if (ctx->pc == 0x165384u) {
        ctx->pc = 0x165384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165380u;
        // 0x165384: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165388u;
        goto label_165388;
    }
    ctx->pc = 0x165380u;
    {
        const bool branch_taken_0x165380 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x165384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165380u;
        // 0x165384: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165380) {
            ctx->pc = 0x165390u;
            goto label_165390;
        }
    }
    ctx->pc = 0x165388u;
label_165388:
    // 0x165388: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x165388u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
label_16538c:
    // 0x16538c: 0xa085000f  sb          $a1, 0xF($a0)
    ctx->pc = 0x16538cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 5));
label_165390:
    // 0x165390: 0x3e00008  jr          $ra
label_165394:
    if (ctx->pc == 0x165394u) {
        ctx->pc = 0x165398u;
        goto label_165398;
    }
    ctx->pc = 0x165390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165398u;
label_165398:
    // 0x165398: 0x0  nop
    ctx->pc = 0x165398u;
    // NOP
label_16539c:
    // 0x16539c: 0x0  nop
    ctx->pc = 0x16539cu;
    // NOP
label_1653a0:
    // 0x1653a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1653a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1653a4:
    // 0x1653a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1653a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1653a8:
    // 0x1653a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1653a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1653ac:
    // 0x1653ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1653acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1653b0:
    // 0x1653b0: 0xc042090  jal         func_108240
label_1653b4:
    if (ctx->pc == 0x1653B4u) {
        ctx->pc = 0x1653B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653B0u;
        // 0x1653b4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1653B8u;
        goto label_1653b8;
    }
    ctx->pc = 0x1653B0u;
    SET_GPR_U32(ctx, 31, 0x1653B8u);
    ctx->pc = 0x1653B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1653B0u;
    // 0x1653b4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x1653B0u, 0x1653B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653B8u;
label_1653b8:
    // 0x1653b8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1653bc:
    if (ctx->pc == 0x1653BCu) {
        ctx->pc = 0x1653C0u;
        goto label_1653c0;
    }
    ctx->pc = 0x1653B8u;
    {
        const bool branch_taken_0x1653b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1653b8) {
            ctx->pc = 0x16542Cu;
            goto label_16542c;
        }
    }
    ctx->pc = 0x1653C0u;
label_1653c0:
    // 0x1653c0: 0x8f8386c0  lw          $v1, -0x7940($gp)
    ctx->pc = 0x1653c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936256)));
label_1653c4:
    // 0x1653c4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1653c8:
    if (ctx->pc == 0x1653C8u) {
        ctx->pc = 0x1653CCu;
        goto label_1653cc;
    }
    ctx->pc = 0x1653C4u;
    {
        const bool branch_taken_0x1653c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1653c4) {
            ctx->pc = 0x1653DCu;
            goto label_1653dc;
        }
    }
    ctx->pc = 0x1653CCu;
label_1653cc:
    // 0x1653cc: 0xaf8286c0  sw          $v0, -0x7940($gp)
    ctx->pc = 0x1653ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936256), GPR_U32(ctx, 2));
label_1653d0:
    // 0x1653d0: 0xaf8286bc  sw          $v0, -0x7944($gp)
    ctx->pc = 0x1653d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936252), GPR_U32(ctx, 2));
label_1653d4:
    // 0x1653d4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1653d8:
    if (ctx->pc == 0x1653D8u) {
        ctx->pc = 0x1653D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653D4u;
        // 0x1653d8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1653DCu;
        goto label_1653dc;
    }
    ctx->pc = 0x1653D4u;
    {
        const bool branch_taken_0x1653d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1653D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653D4u;
        // 0x1653d8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1653d4) {
            ctx->pc = 0x165404u;
            goto label_165404;
        }
    }
    ctx->pc = 0x1653DCu;
label_1653dc:
    // 0x1653dc: 0x8f8486bc  lw          $a0, -0x7944($gp)
    ctx->pc = 0x1653dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936252)));
label_1653e0:
    // 0x1653e0: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1653e4:
    if (ctx->pc == 0x1653E4u) {
        ctx->pc = 0x1653E8u;
        goto label_1653e8;
    }
    ctx->pc = 0x1653E0u;
    {
        const bool branch_taken_0x1653e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1653e0) {
            ctx->pc = 0x1653F8u;
            goto label_1653f8;
        }
    }
    ctx->pc = 0x1653E8u;
label_1653e8:
    // 0x1653e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1653e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1653ec:
    // 0x1653ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1653ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1653f0:
    // 0x1653f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1653f4:
    if (ctx->pc == 0x1653F4u) {
        ctx->pc = 0x1653F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653F0u;
        // 0x1653f4: 0xaf8286bc  sw          $v0, -0x7944($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1653F8u;
        goto label_1653f8;
    }
    ctx->pc = 0x1653F0u;
    {
        const bool branch_taken_0x1653f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1653F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653F0u;
        // 0x1653f4: 0xaf8286bc  sw          $v0, -0x7944($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1653f0) {
            ctx->pc = 0x165404u;
            goto label_165404;
        }
    }
    ctx->pc = 0x1653F8u;
label_1653f8:
    // 0x1653f8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1653f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1653fc:
    // 0x1653fc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1653fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_165400:
    // 0x165400: 0xaf8286bc  sw          $v0, -0x7944($gp)
    ctx->pc = 0x165400u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936252), GPR_U32(ctx, 2));
label_165404:
    // 0x165404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x165404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165408:
    // 0x165408: 0xa043000a  sb          $v1, 0xA($v0)
    ctx->pc = 0x165408u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 3));
label_16540c:
    // 0x16540c: 0xa040000e  sb          $zero, 0xE($v0)
    ctx->pc = 0x16540cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 14), (uint8_t)GPR_U32(ctx, 0));
label_165410:
    // 0x165410: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x165410u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
label_165414:
    // 0x165414: 0x938386a0  lbu         $v1, -0x7960($gp)
    ctx->pc = 0x165414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936224)));
label_165418:
    // 0x165418: 0xa043000b  sb          $v1, 0xB($v0)
    ctx->pc = 0x165418u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 3));
label_16541c:
    // 0x16541c: 0x938386a0  lbu         $v1, -0x7960($gp)
    ctx->pc = 0x16541cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936224)));
label_165420:
    // 0x165420: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_165424:
    // 0x165424: 0x10000002  b           . + 4 + (0x2 << 2)
label_165428:
    if (ctx->pc == 0x165428u) {
        ctx->pc = 0x165428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165424u;
        // 0x165428: 0xa38386a0  sb          $v1, -0x7960($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936224), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16542Cu;
        goto label_16542c;
    }
    ctx->pc = 0x165424u;
    {
        const bool branch_taken_0x165424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165424u;
        // 0x165428: 0xa38386a0  sb          $v1, -0x7960($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936224), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165424) {
            ctx->pc = 0x165430u;
            goto label_165430;
        }
    }
    ctx->pc = 0x16542Cu;
label_16542c:
    // 0x16542c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16542cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165430:
    // 0x165430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x165430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_165434:
    // 0x165434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_165438:
    // 0x165438: 0x3e00008  jr          $ra
label_16543c:
    if (ctx->pc == 0x16543Cu) {
        ctx->pc = 0x16543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165438u;
        // 0x16543c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165440u;
        goto label_165440;
    }
    ctx->pc = 0x165438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165438u;
        // 0x16543c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165440u;
label_165440:
    // 0x165440: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x165440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_165444:
    // 0x165444: 0xaf8086c0  sw          $zero, -0x7940($gp)
    ctx->pc = 0x165444u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936256), GPR_U32(ctx, 0));
label_165448:
    // 0x165448: 0xac203ee0  sw          $zero, 0x3EE0($at)
    ctx->pc = 0x165448u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16096), GPR_U32(ctx, 0));
label_16544c:
    // 0x16544c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x16544cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_165450:
    // 0x165450: 0xaf8086bc  sw          $zero, -0x7944($gp)
    ctx->pc = 0x165450u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936252), GPR_U32(ctx, 0));
label_165454:
    // 0x165454: 0xac203ee4  sw          $zero, 0x3EE4($at)
    ctx->pc = 0x165454u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16100), GPR_U32(ctx, 0));
label_165458:
    // 0x165458: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x165458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_16545c:
    // 0x16545c: 0xa38086a0  sb          $zero, -0x7960($gp)
    ctx->pc = 0x16545cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936224), (uint8_t)GPR_U32(ctx, 0));
label_165460:
    // 0x165460: 0xac203ee8  sw          $zero, 0x3EE8($at)
    ctx->pc = 0x165460u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16104), GPR_U32(ctx, 0));
label_165464:
    // 0x165464: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x165464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_165468:
    // 0x165468: 0x3e00008  jr          $ra
label_16546c:
    if (ctx->pc == 0x16546Cu) {
        ctx->pc = 0x16546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165468u;
        // 0x16546c: 0xac203eec  sw          $zero, 0x3EEC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 16108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165470u;
        goto label_165470;
    }
    ctx->pc = 0x165468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165468u;
        // 0x16546c: 0xac203eec  sw          $zero, 0x3EEC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 16108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165470u;
label_165470:
    // 0x165470: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x165470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_165474:
    // 0x165474: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x165474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_165478:
    // 0x165478: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x165478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16547c:
    // 0x16547c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16547cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_165480:
    // 0x165480: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x165480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_165484:
    // 0x165484: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_165488:
    // 0x165488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16548c:
    // 0x16548c: 0x108000cc  beqz        $a0, . + 4 + (0xCC << 2)
label_165490:
    if (ctx->pc == 0x165490u) {
        ctx->pc = 0x165490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16548Cu;
        // 0x165490: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165494u;
        goto label_165494;
    }
    ctx->pc = 0x16548Cu;
    {
        const bool branch_taken_0x16548c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x165490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16548Cu;
        // 0x165490: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16548c) {
            ctx->pc = 0x1657C0u;
            goto label_1657c0;
        }
    }
    ctx->pc = 0x165494u;
label_165494:
    // 0x165494: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x165494u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_165498:
    // 0x165498: 0x102000c9  beqz        $at, . + 4 + (0xC9 << 2)
label_16549c:
    if (ctx->pc == 0x16549Cu) {
        ctx->pc = 0x16549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165498u;
        // 0x16549c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1654A0u;
        goto label_1654a0;
    }
    ctx->pc = 0x165498u;
    {
        const bool branch_taken_0x165498 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165498u;
        // 0x16549c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165498) {
            ctx->pc = 0x1657C0u;
            goto label_1657c0;
        }
    }
    ctx->pc = 0x1654A0u;
label_1654a0:
    // 0x1654a0: 0x92050006  lbu         $a1, 0x6($s0)
    ctx->pc = 0x1654a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_1654a4:
    // 0x1654a4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1654a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1654a8:
    // 0x1654a8: 0x10a400c1  beq         $a1, $a0, . + 4 + (0xC1 << 2)
label_1654ac:
    if (ctx->pc == 0x1654ACu) {
        ctx->pc = 0x1654ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654A8u;
        // 0x1654ac: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1654B0u;
        goto label_1654b0;
    }
    ctx->pc = 0x1654A8u;
    {
        const bool branch_taken_0x1654a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1654ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654A8u;
        // 0x1654ac: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1654a8) {
            ctx->pc = 0x1657B0u;
            goto label_1657b0;
        }
    }
    ctx->pc = 0x1654B0u;
label_1654b0:
    // 0x1654b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1654b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1654b4:
    // 0x1654b4: 0x10a3009a  beq         $a1, $v1, . + 4 + (0x9A << 2)
label_1654b8:
    if (ctx->pc == 0x1654B8u) {
        ctx->pc = 0x1654BCu;
        goto label_1654bc;
    }
    ctx->pc = 0x1654B4u;
    {
        const bool branch_taken_0x1654b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1654b4) {
            ctx->pc = 0x165720u;
            goto label_165720;
        }
    }
    ctx->pc = 0x1654BCu;
label_1654bc:
    // 0x1654bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1654bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1654c0:
    // 0x1654c0: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
label_1654c4:
    if (ctx->pc == 0x1654C4u) {
        ctx->pc = 0x1654C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654C0u;
        // 0x1654c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1654C8u;
        goto label_1654c8;
    }
    ctx->pc = 0x1654C0u;
    {
        const bool branch_taken_0x1654c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1654C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654C0u;
        // 0x1654c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1654c0) {
            ctx->pc = 0x1654E8u;
            goto label_1654e8;
        }
    }
    ctx->pc = 0x1654C8u;
label_1654c8:
    // 0x1654c8: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_1654cc:
    if (ctx->pc == 0x1654CCu) {
        ctx->pc = 0x1654D0u;
        goto label_1654d0;
    }
    ctx->pc = 0x1654C8u;
    {
        const bool branch_taken_0x1654c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1654c8) {
            ctx->pc = 0x1654E0u;
            goto label_1654e0;
        }
    }
    ctx->pc = 0x1654D0u;
label_1654d0:
    // 0x1654d0: 0x10a000b7  beqz        $a1, . + 4 + (0xB7 << 2)
label_1654d4:
    if (ctx->pc == 0x1654D4u) {
        ctx->pc = 0x1654D8u;
        goto label_1654d8;
    }
    ctx->pc = 0x1654D0u;
    {
        const bool branch_taken_0x1654d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1654d0) {
            ctx->pc = 0x1657B0u;
            goto label_1657b0;
        }
    }
    ctx->pc = 0x1654D8u;
label_1654d8:
    // 0x1654d8: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_1654dc:
    if (ctx->pc == 0x1654DCu) {
        ctx->pc = 0x1654E0u;
        goto label_1654e0;
    }
    ctx->pc = 0x1654D8u;
    {
        const bool branch_taken_0x1654d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1654d8) {
            ctx->pc = 0x1657B0u;
            goto label_1657b0;
        }
    }
    ctx->pc = 0x1654E0u;
label_1654e0:
    // 0x1654e0: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_1654e4:
    if (ctx->pc == 0x1654E4u) {
        ctx->pc = 0x1654E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654E0u;
        // 0x1654e4: 0xa2040006  sb          $a0, 0x6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1654E8u;
        goto label_1654e8;
    }
    ctx->pc = 0x1654E0u;
    {
        const bool branch_taken_0x1654e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1654E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654E0u;
        // 0x1654e4: 0xa2040006  sb          $a0, 0x6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1654e0) {
            ctx->pc = 0x1657B0u;
            goto label_1657b0;
        }
    }
    ctx->pc = 0x1654E8u;
label_1654e8:
    // 0x1654e8: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x1654e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1654ec:
    // 0x1654ec: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1654ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1654f0:
    // 0x1654f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1654f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1654f4:
    // 0x1654f4: 0xc05f3d0  jal         func_17CF40
label_1654f8:
    if (ctx->pc == 0x1654F8u) {
        ctx->pc = 0x1654F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654F4u;
        // 0x1654f8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1654FCu;
        goto label_1654fc;
    }
    ctx->pc = 0x1654F4u;
    SET_GPR_U32(ctx, 31, 0x1654FCu);
    ctx->pc = 0x1654F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1654F4u;
    // 0x1654f8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    { ctx->pc = 0x17cf40; return; }
    ctx->pc = 0x1654FCu;
label_1654fc:
    // 0x1654fc: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x1654fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_165500:
    // 0x165500: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_165504:
    if (ctx->pc == 0x165504u) {
        ctx->pc = 0x165504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165500u;
        // 0x165504: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165508u;
        goto label_165508;
    }
    ctx->pc = 0x165500u;
    {
        const bool branch_taken_0x165500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x165504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165500u;
        // 0x165504: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165500) {
            ctx->pc = 0x165518u;
            goto label_165518;
        }
    }
    ctx->pc = 0x165508u;
label_165508:
    // 0x165508: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x165508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_16550c:
    // 0x16550c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16550cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_165510:
    // 0x165510: 0x1000000a  b           . + 4 + (0xA << 2)
label_165514:
    if (ctx->pc == 0x165514u) {
        ctx->pc = 0x165514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165510u;
        // 0x165514: 0xc6210044  lwc1        $f1, 0x44($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x165518u;
        goto label_165518;
    }
    ctx->pc = 0x165510u;
    {
        const bool branch_taken_0x165510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165510u;
        // 0x165514: 0xc6210044  lwc1        $f1, 0x44($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x165510) {
            ctx->pc = 0x16553Cu;
            goto label_16553c;
        }
    }
    ctx->pc = 0x165518u;
label_165518:
    // 0x165518: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_16551c:
    if (ctx->pc == 0x16551Cu) {
        ctx->pc = 0x165520u;
        goto label_165520;
    }
    ctx->pc = 0x165518u;
    {
        const bool branch_taken_0x165518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x165518) {
            ctx->pc = 0x165530u;
            goto label_165530;
        }
    }
    ctx->pc = 0x165520u;
label_165520:
    // 0x165520: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x165520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_165524:
    // 0x165524: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x165524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_165528:
    // 0x165528: 0x10000003  b           . + 4 + (0x3 << 2)
label_16552c:
    if (ctx->pc == 0x16552Cu) {
        ctx->pc = 0x165530u;
        goto label_165530;
    }
    ctx->pc = 0x165528u;
    {
        const bool branch_taken_0x165528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165528) {
            ctx->pc = 0x165538u;
            goto label_165538;
        }
    }
    ctx->pc = 0x165530u;
label_165530:
    // 0x165530: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x165530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_165534:
    // 0x165534: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x165534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_165538:
    // 0x165538: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x165538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16553c:
    // 0x16553c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x16553cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_165540:
    // 0x165540: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x165540u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_165544:
    // 0x165544: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x165544u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_165548:
    // 0x165548: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x165548u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16554c:
    // 0x16554c: 0x0  nop
    ctx->pc = 0x16554cu;
    // NOP
label_165550:
    // 0x165550: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_165554:
    if (ctx->pc == 0x165554u) {
        ctx->pc = 0x165554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165550u;
        // 0x165554: 0x3c023f09  lui         $v0, 0x3F09 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16137 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165558u;
        goto label_165558;
    }
    ctx->pc = 0x165550u;
    {
        const bool branch_taken_0x165550 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x165554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165550u;
        // 0x165554: 0x3c023f09  lui         $v0, 0x3F09 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165550) {
            ctx->pc = 0x165570u;
            goto label_165570;
        }
    }
    ctx->pc = 0x165558u;
label_165558:
    // 0x165558: 0x34421870  ori         $v0, $v0, 0x1870
    ctx->pc = 0x165558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6256);
label_16555c:
    // 0x16555c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16555cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_165560:
    // 0x165560: 0x0  nop
    ctx->pc = 0x165560u;
    // NOP
label_165564:
    // 0x165564: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x165564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_165568:
    // 0x165568: 0x10000015  b           . + 4 + (0x15 << 2)
label_16556c:
    if (ctx->pc == 0x16556Cu) {
        ctx->pc = 0x16556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165568u;
        // 0x16556c: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x165570u;
        goto label_165570;
    }
    ctx->pc = 0x165568u;
    {
        const bool branch_taken_0x165568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165568u;
        // 0x16556c: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x165568) {
            ctx->pc = 0x1655C0u;
            goto label_1655c0;
        }
    }
    ctx->pc = 0x165570u;
label_165570:
    // 0x165570: 0x3c02be99  lui         $v0, 0xBE99
    ctx->pc = 0x165570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48793 << 16));
label_165574:
    // 0x165574: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x165574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_165578:
    // 0x165578: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x165578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_16557c:
    // 0x16557c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16557cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_165580:
    // 0x165580: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x165580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_165584:
    // 0x165584: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_165588:
    // 0x165588: 0x240500a6  addiu       $a1, $zero, 0xA6
    ctx->pc = 0x165588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
label_16558c:
    // 0x16558c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16558cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_165590:
    // 0x165590: 0x24060099  addiu       $a2, $zero, 0x99
    ctx->pc = 0x165590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_165594:
    // 0x165594: 0x24070086  addiu       $a3, $zero, 0x86
    ctx->pc = 0x165594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_165598:
    // 0x165598: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x165598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_16559c:
    // 0x16559c: 0xc046574  jal         func_1195D0
label_1655a0:
    if (ctx->pc == 0x1655A0u) {
        ctx->pc = 0x1655A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16559Cu;
        // 0x1655a0: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1655A4u;
        goto label_1655a4;
    }
    ctx->pc = 0x16559Cu;
    SET_GPR_U32(ctx, 31, 0x1655A4u);
    ctx->pc = 0x1655A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16559Cu;
    // 0x1655a0: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1195D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1195D0u, 0x16559Cu, 0x1655A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655A4u;
label_1655a4:
    // 0x1655a4: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x1655a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_1655a8:
    // 0x1655a8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1655a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1655ac:
    // 0x1655ac: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1655acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1655b0:
    // 0x1655b0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1655b4:
    if (ctx->pc == 0x1655B4u) {
        ctx->pc = 0x1655B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655B0u;
        // 0x1655b4: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1655B8u;
        goto label_1655b8;
    }
    ctx->pc = 0x1655B0u;
    {
        const bool branch_taken_0x1655b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1655B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655B0u;
        // 0x1655b4: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1655b0) {
            ctx->pc = 0x1655C0u;
            goto label_1655c0;
        }
    }
    ctx->pc = 0x1655B8u;
label_1655b8:
    // 0x1655b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1655b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1655bc:
    // 0x1655bc: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x1655bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
label_1655c0:
    // 0x1655c0: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x1655c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1655c4:
    // 0x1655c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1655c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1655c8:
    // 0x1655c8: 0xc066e02  jal         func_19B808
label_1655cc:
    if (ctx->pc == 0x1655CCu) {
        ctx->pc = 0x1655CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655C8u;
        // 0x1655cc: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1655D0u;
        goto label_1655d0;
    }
    ctx->pc = 0x1655C8u;
    SET_GPR_U32(ctx, 31, 0x1655D0u);
    ctx->pc = 0x1655CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1655C8u;
    // 0x1655cc: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1655D0u;
label_1655d0:
    // 0x1655d0: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1655d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1655d4:
    // 0x1655d4: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x1655d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1655d8:
    // 0x1655d8: 0xc066e02  jal         func_19B808
label_1655dc:
    if (ctx->pc == 0x1655DCu) {
        ctx->pc = 0x1655DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655D8u;
        // 0x1655dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1655E0u;
        goto label_1655e0;
    }
    ctx->pc = 0x1655D8u;
    SET_GPR_U32(ctx, 31, 0x1655E0u);
    ctx->pc = 0x1655DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1655D8u;
    // 0x1655dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1655E0u;
label_1655e0:
    // 0x1655e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1655e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1655e4:
    // 0x1655e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1655e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1655e8:
    // 0x1655e8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1655e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1655ec:
    // 0x1655ec: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1655ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1655f0:
    // 0x1655f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1655f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1655f4:
    // 0x1655f4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1655f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1655f8:
    // 0x1655f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1655f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1655fc:
    // 0x1655fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1655fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_165600:
    // 0x165600: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x165600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_165604:
    // 0x165604: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x165604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_165608:
    // 0x165608: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x165608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_16560c:
    // 0x16560c: 0x0  nop
    ctx->pc = 0x16560cu;
    // NOP
label_165610:
    // 0x165610: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x165610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_165614:
    // 0x165614: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x165614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_165618:
    // 0x165618: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x165618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16561c:
    // 0x16561c: 0x0  nop
    ctx->pc = 0x16561cu;
    // NOP
label_165620:
    // 0x165620: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_165624:
    if (ctx->pc == 0x165624u) {
        ctx->pc = 0x165624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165620u;
        // 0x165624: 0x24430050  addiu       $v1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165628u;
        goto label_165628;
    }
    ctx->pc = 0x165620u;
    {
        const bool branch_taken_0x165620 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x165624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165620u;
        // 0x165624: 0x24430050  addiu       $v1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165620) {
            ctx->pc = 0x165634u;
            goto label_165634;
        }
    }
    ctx->pc = 0x165628u;
label_165628:
    // 0x165628: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x165628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_16562c:
    // 0x16562c: 0x10000008  b           . + 4 + (0x8 << 2)
label_165630:
    if (ctx->pc == 0x165630u) {
        ctx->pc = 0x165630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16562Cu;
        // 0x165630: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x165634u;
        goto label_165634;
    }
    ctx->pc = 0x16562Cu;
    {
        const bool branch_taken_0x16562c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16562Cu;
        // 0x165630: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16562c) {
            ctx->pc = 0x165650u;
            goto label_165650;
        }
    }
    ctx->pc = 0x165634u;
label_165634:
    // 0x165634: 0x0  nop
    ctx->pc = 0x165634u;
    // NOP
label_165638:
    // 0x165638: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x165638u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16563c:
    // 0x16563c: 0x0  nop
    ctx->pc = 0x16563cu;
    // NOP
label_165640:
    // 0x165640: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_165644:
    if (ctx->pc == 0x165644u) {
        ctx->pc = 0x165648u;
        goto label_165648;
    }
    ctx->pc = 0x165640u;
    {
        const bool branch_taken_0x165640 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x165640) {
            ctx->pc = 0x165650u;
            goto label_165650;
        }
    }
    ctx->pc = 0x165648u;
label_165648:
    // 0x165648: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x165648u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_16564c:
    // 0x16564c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x16564cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_165650:
    // 0x165650: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x165650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_165654:
    // 0x165654: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x165654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_165658:
    // 0x165658: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_16565c:
    if (ctx->pc == 0x16565Cu) {
        ctx->pc = 0x16565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165658u;
        // 0x16565c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165660u;
        goto label_165660;
    }
    ctx->pc = 0x165658u;
    {
        const bool branch_taken_0x165658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165658u;
        // 0x16565c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165658) {
            ctx->pc = 0x16560Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16560c;
        }
    }
    ctx->pc = 0x165660u;
label_165660:
    // 0x165660: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x165660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_165664:
    // 0x165664: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x165664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_165668:
    // 0x165668: 0xc066e02  jal         func_19B808
label_16566c:
    if (ctx->pc == 0x16566Cu) {
        ctx->pc = 0x16566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165668u;
        // 0x16566c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165670u;
        goto label_165670;
    }
    ctx->pc = 0x165668u;
    SET_GPR_U32(ctx, 31, 0x165670u);
    ctx->pc = 0x16566Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165668u;
    // 0x16566c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x165670u;
label_165670:
    // 0x165670: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x165670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_165674:
    // 0x165674: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x165674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_165678:
    // 0x165678: 0xc066e02  jal         func_19B808
label_16567c:
    if (ctx->pc == 0x16567Cu) {
        ctx->pc = 0x16567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165678u;
        // 0x16567c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165680u;
        goto label_165680;
    }
    ctx->pc = 0x165678u;
    SET_GPR_U32(ctx, 31, 0x165680u);
    ctx->pc = 0x16567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165678u;
    // 0x16567c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x165680u;
label_165680:
    // 0x165680: 0xc066e44  jal         func_19B910
label_165684:
    if (ctx->pc == 0x165684u) {
        ctx->pc = 0x165684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165680u;
        // 0x165684: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165688u;
        goto label_165688;
    }
    ctx->pc = 0x165680u;
    SET_GPR_U32(ctx, 31, 0x165688u);
    ctx->pc = 0x165684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165680u;
    // 0x165684: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x165688u;
label_165688:
    // 0x165688: 0xc62c0050  lwc1        $f12, 0x50($s1)
    ctx->pc = 0x165688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16568c:
    // 0x16568c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x16568cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_165690:
    // 0x165690: 0xc066e96  jal         func_19BA58
label_165694:
    if (ctx->pc == 0x165694u) {
        ctx->pc = 0x165694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165690u;
        // 0x165694: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165698u;
        goto label_165698;
    }
    ctx->pc = 0x165690u;
    SET_GPR_U32(ctx, 31, 0x165698u);
    ctx->pc = 0x165694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165690u;
    // 0x165694: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x165698u;
label_165698:
    // 0x165698: 0xc62c0058  lwc1        $f12, 0x58($s1)
    ctx->pc = 0x165698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16569c:
    // 0x16569c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x16569cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1656a0:
    // 0x1656a0: 0xc066e6c  jal         func_19B9B0
label_1656a4:
    if (ctx->pc == 0x1656A4u) {
        ctx->pc = 0x1656A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656A0u;
        // 0x1656a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1656A8u;
        goto label_1656a8;
    }
    ctx->pc = 0x1656A0u;
    SET_GPR_U32(ctx, 31, 0x1656A8u);
    ctx->pc = 0x1656A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1656A0u;
    // 0x1656a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x1656A8u;
label_1656a8:
    // 0x1656a8: 0xc62c0054  lwc1        $f12, 0x54($s1)
    ctx->pc = 0x1656a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1656ac:
    // 0x1656ac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1656acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1656b0:
    // 0x1656b0: 0xc066ec0  jal         func_19BB00
label_1656b4:
    if (ctx->pc == 0x1656B4u) {
        ctx->pc = 0x1656B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656B0u;
        // 0x1656b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1656B8u;
        goto label_1656b8;
    }
    ctx->pc = 0x1656B0u;
    SET_GPR_U32(ctx, 31, 0x1656B8u);
    ctx->pc = 0x1656B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1656B0u;
    // 0x1656b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1656B8u;
label_1656b8:
    // 0x1656b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1656b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1656bc:
    // 0x1656bc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1656bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1656c0:
    // 0x1656c0: 0xc066e1a  jal         func_19B868
label_1656c4:
    if (ctx->pc == 0x1656C4u) {
        ctx->pc = 0x1656C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656C0u;
        // 0x1656c4: 0x26260040  addiu       $a2, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1656C8u;
        goto label_1656c8;
    }
    ctx->pc = 0x1656C0u;
    SET_GPR_U32(ctx, 31, 0x1656C8u);
    ctx->pc = 0x1656C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1656C0u;
    // 0x1656c4: 0x26260040  addiu       $a2, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x1656C8u;
label_1656c8:
    // 0x1656c8: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x1656c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_1656cc:
    // 0x1656cc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1656d0:
    if (ctx->pc == 0x1656D0u) {
        ctx->pc = 0x1656D4u;
        goto label_1656d4;
    }
    ctx->pc = 0x1656CCu;
    {
        const bool branch_taken_0x1656cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1656cc) {
            ctx->pc = 0x16570Cu;
            goto label_16570c;
        }
    }
    ctx->pc = 0x1656D4u;
label_1656d4:
    // 0x1656d4: 0xc6200098  lwc1        $f0, 0x98($s1)
    ctx->pc = 0x1656d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1656d8:
    // 0x1656d8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1656d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1656dc:
    // 0x1656dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1656dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1656e0:
    // 0x1656e0: 0x0  nop
    ctx->pc = 0x1656e0u;
    // NOP
label_1656e4:
    // 0x1656e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1656e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1656e8:
    // 0x1656e8: 0x0  nop
    ctx->pc = 0x1656e8u;
    // NOP
label_1656ec:
    // 0x1656ec: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1656f0:
    if (ctx->pc == 0x1656F0u) {
        ctx->pc = 0x1656F4u;
        goto label_1656f4;
    }
    ctx->pc = 0x1656ECu;
    {
        const bool branch_taken_0x1656ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1656ec) {
            ctx->pc = 0x16570Cu;
            goto label_16570c;
        }
    }
    ctx->pc = 0x1656F4u;
label_1656f4:
    // 0x1656f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1656f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1656f8:
    // 0x1656f8: 0x3c020c00  lui         $v0, 0xC00
    ctx->pc = 0x1656f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3072 << 16));
label_1656fc:
    // 0x1656fc: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x1656fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
label_165700:
    // 0x165700: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x165700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_165704:
    // 0x165704: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x165704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_165708:
    // 0x165708: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x165708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
label_16570c:
    // 0x16570c: 0x0  nop
    ctx->pc = 0x16570cu;
    // NOP
label_165710:
    // 0x165710: 0xc05ff64  jal         func_17FD90
label_165714:
    if (ctx->pc == 0x165714u) {
        ctx->pc = 0x165714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165710u;
        // 0x165714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165718u;
        goto label_165718;
    }
    ctx->pc = 0x165710u;
    SET_GPR_U32(ctx, 31, 0x165718u);
    ctx->pc = 0x165714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165710u;
    // 0x165714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FD90u;
    { ctx->pc = 0x17fd90; return; }
    ctx->pc = 0x165718u;
label_165718:
    // 0x165718: 0x10000025  b           . + 4 + (0x25 << 2)
label_16571c:
    if (ctx->pc == 0x16571Cu) {
        ctx->pc = 0x165720u;
        goto label_165720;
    }
    ctx->pc = 0x165718u;
    {
        const bool branch_taken_0x165718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165718) {
            ctx->pc = 0x1657B0u;
            goto label_1657b0;
        }
    }
    ctx->pc = 0x165720u;
label_165720:
    // 0x165720: 0xa2040006  sb          $a0, 0x6($s0)
    ctx->pc = 0x165720u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 4));
label_165724:
    // 0x165724: 0x92060005  lbu         $a2, 0x5($s0)
    ctx->pc = 0x165724u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_165728:
    // 0x165728: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x165728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16572c:
    // 0x16572c: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x16572cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_165730:
    // 0x165730: 0x24633eb0  addiu       $v1, $v1, 0x3EB0
    ctx->pc = 0x165730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16048));
label_165734:
    // 0x165734: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x165734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_165738:
    // 0x165738: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x165738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_16573c:
    // 0x16573c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16573cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_165740:
    // 0x165740: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x165740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_165744:
    // 0x165744: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x165744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_165748:
    // 0x165748: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x165748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_16574c:
    // 0x16574c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16574cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_165750:
    // 0x165750: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x165750u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_165754:
    // 0x165754: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x165754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_165758:
    // 0x165758: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_16575c:
    if (ctx->pc == 0x16575Cu) {
        ctx->pc = 0x16575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165758u;
        // 0x16575c: 0x51e3c  dsll32      $v1, $a1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165760u;
        goto label_165760;
    }
    ctx->pc = 0x165758u;
    {
        const bool branch_taken_0x165758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165758u;
        // 0x16575c: 0x51e3c  dsll32      $v1, $a1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165758) {
            ctx->pc = 0x16578Cu;
            goto label_16578c;
        }
    }
    ctx->pc = 0x165760u;
label_165760:
    // 0x165760: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x165760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165764:
    // 0x165764: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x165764u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_165768:
    // 0x165768: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x165768u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_16576c:
    // 0x16576c: 0xa42804  sllv        $a1, $a0, $a1
    ctx->pc = 0x16576cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_165770:
    // 0x165770: 0x278386b0  addiu       $v1, $gp, -0x7950
    ctx->pc = 0x165770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936240));
label_165774:
    // 0x165774: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x165774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_165778:
    // 0x165778: 0xa02827  not         $a1, $a1
    ctx->pc = 0x165778u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
label_16577c:
    // 0x16577c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x16577cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_165780:
    // 0x165780: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x165780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_165784:
    // 0x165784: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x165784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_165788:
    // 0x165788: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x165788u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_16578c:
    // 0x16578c: 0x0  nop
    ctx->pc = 0x16578cu;
    // NOP
label_165790:
    // 0x165790: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x165790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_165794:
    // 0x165794: 0x3c03f3ff  lui         $v1, 0xF3FF
    ctx->pc = 0x165794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62463 << 16));
label_165798:
    // 0x165798: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x165798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_16579c:
    // 0x16579c: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x16579cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
label_1657a0:
    // 0x1657a0: 0xae240090  sw          $a0, 0x90($s1)
    ctx->pc = 0x1657a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 4));
label_1657a4:
    // 0x1657a4: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x1657a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1657a8:
    // 0x1657a8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1657a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1657ac:
    // 0x1657ac: 0xae230090  sw          $v1, 0x90($s1)
    ctx->pc = 0x1657acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 3));
label_1657b0:
    // 0x1657b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1657b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1657b4:
    // 0x1657b4: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x1657b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1657b8:
    // 0x1657b8: 0x1460ff39  bnez        $v1, . + 4 + (-0xC7 << 2)
label_1657bc:
    if (ctx->pc == 0x1657BCu) {
        ctx->pc = 0x1657BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657B8u;
        // 0x1657bc: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1657C0u;
        goto label_1657c0;
    }
    ctx->pc = 0x1657B8u;
    {
        const bool branch_taken_0x1657b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1657BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657B8u;
        // 0x1657bc: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1657b8) {
            ctx->pc = 0x1654A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1654a0;
        }
    }
    ctx->pc = 0x1657C0u;
label_1657c0:
    // 0x1657c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1657c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1657c4:
    // 0x1657c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1657c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1657c8:
    // 0x1657c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1657c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1657cc:
    // 0x1657cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1657ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1657d0:
    // 0x1657d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1657d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1657d4:
    // 0x1657d4: 0x3e00008  jr          $ra
label_1657d8:
    if (ctx->pc == 0x1657D8u) {
        ctx->pc = 0x1657D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657D4u;
        // 0x1657d8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1657DCu;
        goto label_1657dc;
    }
    ctx->pc = 0x1657D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1657D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657D4u;
        // 0x1657d8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1657D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1657DCu;
label_1657dc:
    // 0x1657dc: 0x0  nop
    ctx->pc = 0x1657dcu;
    // NOP
label_1657e0:
    // 0x1657e0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1657e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_1657e4:
    // 0x1657e4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1657e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1657e8:
    // 0x1657e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1657e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1657ec:
    // 0x1657ec: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x1657ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
label_1657f0:
    // 0x1657f0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1657f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1657f4:
    // 0x1657f4: 0x24636280  addiu       $v1, $v1, 0x6280
    ctx->pc = 0x1657f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25216));
label_1657f8:
    // 0x1657f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1657f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1657fc:
    // 0x1657fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1657fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_165800:
    // 0x165800: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x165800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_165804:
    // 0x165804: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x165804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_165808:
    // 0x165808: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x165808u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16580c:
    // 0x16580c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16580cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_165810:
    // 0x165810: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x165810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_165814:
    // 0x165814: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x165814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_165818:
    // 0x165818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16581c:
    // 0x16581c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16581cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_165820:
    // 0x165820: 0x8c33bd8c  lw          $s3, -0x4274($at)
    ctx->pc = 0x165820u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950284)));
label_165824:
    // 0x165824: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x165824u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_165828:
    // 0x165828: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x165828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
label_16582c:
    // 0x16582c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x16582cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_165830:
    // 0x165830: 0x8c3e61fc  lw          $fp, 0x61FC($at)
    ctx->pc = 0x165830u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25084)));
label_165834:
    // 0x165834: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x165834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_165838:
    // 0x165838: 0x8c36892c  lw          $s6, -0x76D4($at)
    ctx->pc = 0x165838u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936876)));
label_16583c:
    // 0x16583c: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x16583cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
label_165840:
    // 0x165840: 0x8c23bd6c  lw          $v1, -0x4294($at)
    ctx->pc = 0x165840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950252)));
label_165844:
    // 0x165844: 0x76001a  div         $zero, $v1, $s6
    ctx->pc = 0x165844u;
    { int32_t divisor = GPR_S32(ctx, 22);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_165848:
    // 0x165848: 0x0  nop
    ctx->pc = 0x165848u;
    // NOP
label_16584c:
    // 0x16584c: 0x0  nop
    ctx->pc = 0x16584cu;
    // NOP
label_165850:
    // 0x165850: 0xb812  mflo        $s7
    ctx->pc = 0x165850u;
    SET_GPR_U64(ctx, 23, ctx->lo);
label_165854:
    // 0x165854: 0x1260005a  beqz        $s3, . + 4 + (0x5A << 2)
label_165858:
    if (ctx->pc == 0x165858u) {
        ctx->pc = 0x165858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165854u;
        // 0x165858: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16585Cu;
        goto label_16585c;
    }
    ctx->pc = 0x165854u;
    {
        const bool branch_taken_0x165854 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x165858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165854u;
        // 0x165858: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165854) {
            ctx->pc = 0x1659C0u;
            goto label_1659c0;
        }
    }
    ctx->pc = 0x16585Cu;
label_16585c:
    // 0x16585c: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x16585cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
label_165860:
    // 0x165860: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x165860u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_165864:
    // 0x165864: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x165864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165868:
    // 0x165868: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
label_16586c:
    if (ctx->pc == 0x16586Cu) {
        ctx->pc = 0x16586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165868u;
        // 0x16586c: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165870u;
        goto label_165870;
    }
    ctx->pc = 0x165868u;
    {
        const bool branch_taken_0x165868 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165868u;
        // 0x16586c: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165868) {
            ctx->pc = 0x1659C0u;
            goto label_1659c0;
        }
    }
    ctx->pc = 0x165870u;
label_165870:
    // 0x165870: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x165870u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165874:
    // 0x165874: 0x92630006  lbu         $v1, 0x6($s3)
    ctx->pc = 0x165874u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_165878:
    // 0x165878: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
label_16587c:
    if (ctx->pc == 0x16587Cu) {
        ctx->pc = 0x16587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165878u;
        // 0x16587c: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165880u;
        goto label_165880;
    }
    ctx->pc = 0x165878u;
    {
        const bool branch_taken_0x165878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165878u;
        // 0x16587c: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165878) {
            ctx->pc = 0x1659A4u;
            goto label_1659a4;
        }
    }
    ctx->pc = 0x165880u;
label_165880:
    // 0x165880: 0x92660007  lbu         $a2, 0x7($s3)
    ctx->pc = 0x165880u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
label_165884:
    // 0x165884: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x165884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_165888:
    // 0x165888: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x165888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_16588c:
    // 0x16588c: 0x24423eb0  addiu       $v0, $v0, 0x3EB0
    ctx->pc = 0x16588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16048));
label_165890:
    // 0x165890: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_165894:
    // 0x165894: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x165894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165898:
    // 0x165898: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x165898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_16589c:
    // 0x16589c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16589cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1658a0:
    // 0x1658a0: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1658a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1658a4:
    // 0x1658a4: 0xa2630007  sb          $v1, 0x7($s3)
    ctx->pc = 0x1658a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 3));
label_1658a8:
    // 0x1658a8: 0xa2650006  sb          $a1, 0x6($s3)
    ctx->pc = 0x1658a8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6), (uint8_t)GPR_U32(ctx, 5));
label_1658ac:
    // 0x1658ac: 0xa2740008  sb          $s4, 0x8($s3)
    ctx->pc = 0x1658acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 20));
label_1658b0:
    // 0x1658b0: 0x92650005  lbu         $a1, 0x5($s3)
    ctx->pc = 0x1658b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_1658b4:
    // 0x1658b4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1658b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1658b8:
    // 0x1658b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1658b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1658bc:
    // 0x1658bc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1658bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1658c0:
    // 0x1658c0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1658c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1658c4:
    // 0x1658c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1658c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1658c8:
    // 0x1658c8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1658c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1658cc:
    // 0x1658cc: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1658ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1658d0:
    // 0x1658d0: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x1658d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_1658d4:
    // 0x1658d4: 0xc066e44  jal         func_19B910
label_1658d8:
    if (ctx->pc == 0x1658D8u) {
        ctx->pc = 0x1658D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1658D4u;
        // 0x1658d8: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1658DCu;
        goto label_1658dc;
    }
    ctx->pc = 0x1658D4u;
    SET_GPR_U32(ctx, 31, 0x1658DCu);
    ctx->pc = 0x1658D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1658D4u;
    // 0x1658d8: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x1658DCu;
label_1658dc:
    // 0x1658dc: 0xc6ac0054  lwc1        $f12, 0x54($s5)
    ctx->pc = 0x1658dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1658e0:
    // 0x1658e0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1658e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1658e4:
    // 0x1658e4: 0xc066ec0  jal         func_19BB00
label_1658e8:
    if (ctx->pc == 0x1658E8u) {
        ctx->pc = 0x1658E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1658E4u;
        // 0x1658e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1658ECu;
        goto label_1658ec;
    }
    ctx->pc = 0x1658E4u;
    SET_GPR_U32(ctx, 31, 0x1658ECu);
    ctx->pc = 0x1658E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1658E4u;
    // 0x1658e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1658ECu;
label_1658ec:
    // 0x1658ec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1658ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1658f0:
    // 0x1658f0: 0x26a60040  addiu       $a2, $s5, 0x40
    ctx->pc = 0x1658f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
label_1658f4:
    // 0x1658f4: 0xc066e1a  jal         func_19B868
label_1658f8:
    if (ctx->pc == 0x1658F8u) {
        ctx->pc = 0x1658F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1658F4u;
        // 0x1658f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1658FCu;
        goto label_1658fc;
    }
    ctx->pc = 0x1658F4u;
    SET_GPR_U32(ctx, 31, 0x1658FCu);
    ctx->pc = 0x1658F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1658F4u;
    // 0x1658f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x1658FCu;
label_1658fc:
    // 0x1658fc: 0x3d23021  addu        $a2, $fp, $s2
    ctx->pc = 0x1658fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
label_165900:
    // 0x165900: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x165900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_165904:
    // 0x165904: 0xc066d7a  jal         func_19B5E8
label_165908:
    if (ctx->pc == 0x165908u) {
        ctx->pc = 0x165908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165904u;
        // 0x165908: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16590Cu;
        goto label_16590c;
    }
    ctx->pc = 0x165904u;
    SET_GPR_U32(ctx, 31, 0x16590Cu);
    ctx->pc = 0x165908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165904u;
    // 0x165908: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x16590Cu;
label_16590c:
    // 0x16590c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x16590cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_165910:
    // 0x165910: 0xc066e26  jal         func_19B898
label_165914:
    if (ctx->pc == 0x165914u) {
        ctx->pc = 0x165914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165910u;
        // 0x165914: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165918u;
        goto label_165918;
    }
    ctx->pc = 0x165910u;
    SET_GPR_U32(ctx, 31, 0x165918u);
    ctx->pc = 0x165914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165910u;
    // 0x165914: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x165918u;
label_165918:
    // 0x165918: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x165918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_16591c:
    // 0x16591c: 0xc066e26  jal         func_19B898
label_165920:
    if (ctx->pc == 0x165920u) {
        ctx->pc = 0x165920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16591Cu;
        // 0x165920: 0x26a50050  addiu       $a1, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165924u;
        goto label_165924;
    }
    ctx->pc = 0x16591Cu;
    SET_GPR_U32(ctx, 31, 0x165924u);
    ctx->pc = 0x165920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16591Cu;
    // 0x165920: 0x26a50050  addiu       $a1, $s5, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x165924u;
label_165924:
    // 0x165924: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x165924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_165928:
    // 0x165928: 0xc066e26  jal         func_19B898
label_16592c:
    if (ctx->pc == 0x16592Cu) {
        ctx->pc = 0x16592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165928u;
        // 0x16592c: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165930u;
        goto label_165930;
    }
    ctx->pc = 0x165928u;
    SET_GPR_U32(ctx, 31, 0x165930u);
    ctx->pc = 0x16592Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165928u;
    // 0x16592c: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x165930u;
label_165930:
    // 0x165930: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x165930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_165934:
    // 0x165934: 0xc066e26  jal         func_19B898
label_165938:
    if (ctx->pc == 0x165938u) {
        ctx->pc = 0x165938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165934u;
        // 0x165938: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16593Cu;
        goto label_16593c;
    }
    ctx->pc = 0x165934u;
    SET_GPR_U32(ctx, 31, 0x16593Cu);
    ctx->pc = 0x165938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165934u;
    // 0x165938: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x16593Cu;
label_16593c:
    // 0x16593c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x16593cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_165940:
    // 0x165940: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x165940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_165944:
    // 0x165944: 0xc066e02  jal         func_19B808
label_165948:
    if (ctx->pc == 0x165948u) {
        ctx->pc = 0x165948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165944u;
        // 0x165948: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16594Cu;
        goto label_16594c;
    }
    ctx->pc = 0x165944u;
    SET_GPR_U32(ctx, 31, 0x16594Cu);
    ctx->pc = 0x165948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165944u;
    // 0x165948: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x16594Cu;
label_16594c:
    // 0x16594c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x16594cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_165950:
    // 0x165950: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x165950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_165954:
    // 0x165954: 0xc066e08  jal         func_19B820
label_165958:
    if (ctx->pc == 0x165958u) {
        ctx->pc = 0x165958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165954u;
        // 0x165958: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16595Cu;
        goto label_16595c;
    }
    ctx->pc = 0x165954u;
    SET_GPR_U32(ctx, 31, 0x16595Cu);
    ctx->pc = 0x165958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165954u;
    // 0x165958: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x16595Cu;
label_16595c:
    // 0x16595c: 0xc066e44  jal         func_19B910
label_165960:
    if (ctx->pc == 0x165960u) {
        ctx->pc = 0x165960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16595Cu;
        // 0x165960: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165964u;
        goto label_165964;
    }
    ctx->pc = 0x16595Cu;
    SET_GPR_U32(ctx, 31, 0x165964u);
    ctx->pc = 0x165960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16595Cu;
    // 0x165960: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x165964u;
label_165964:
    // 0x165964: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x165964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_165968:
    // 0x165968: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x165968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_16596c:
    // 0x16596c: 0xc066e96  jal         func_19BA58
label_165970:
    if (ctx->pc == 0x165970u) {
        ctx->pc = 0x165970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16596Cu;
        // 0x165970: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165974u;
        goto label_165974;
    }
    ctx->pc = 0x16596Cu;
    SET_GPR_U32(ctx, 31, 0x165974u);
    ctx->pc = 0x165970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16596Cu;
    // 0x165970: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x165974u;
label_165974:
    // 0x165974: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x165974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_165978:
    // 0x165978: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x165978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_16597c:
    // 0x16597c: 0xc066e6c  jal         func_19B9B0
label_165980:
    if (ctx->pc == 0x165980u) {
        ctx->pc = 0x165980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16597Cu;
        // 0x165980: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165984u;
        goto label_165984;
    }
    ctx->pc = 0x16597Cu;
    SET_GPR_U32(ctx, 31, 0x165984u);
    ctx->pc = 0x165980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16597Cu;
    // 0x165980: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x165984u;
label_165984:
    // 0x165984: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x165984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_165988:
    // 0x165988: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x165988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_16598c:
    // 0x16598c: 0xc066ec0  jal         func_19BB00
label_165990:
    if (ctx->pc == 0x165990u) {
        ctx->pc = 0x165990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16598Cu;
        // 0x165990: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165994u;
        goto label_165994;
    }
    ctx->pc = 0x16598Cu;
    SET_GPR_U32(ctx, 31, 0x165994u);
    ctx->pc = 0x165990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16598Cu;
    // 0x165990: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x165994u;
label_165994:
    // 0x165994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165998:
    // 0x165998: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x165998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_16599c:
    // 0x16599c: 0xc066e1a  jal         func_19B868
label_1659a0:
    if (ctx->pc == 0x1659A0u) {
        ctx->pc = 0x1659A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16599Cu;
        // 0x1659a0: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1659A4u;
        goto label_1659a4;
    }
    ctx->pc = 0x16599Cu;
    SET_GPR_U32(ctx, 31, 0x1659A4u);
    ctx->pc = 0x1659A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16599Cu;
    // 0x1659a0: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x1659A4u;
label_1659a4:
    // 0x1659a4: 0x0  nop
    ctx->pc = 0x1659a4u;
    // NOP
label_1659a8:
    // 0x1659a8: 0x171980  sll         $v1, $s7, 6
    ctx->pc = 0x1659a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
label_1659ac:
    // 0x1659ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1659acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1659b0:
    // 0x1659b0: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x1659b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1659b4:
    // 0x1659b4: 0x236182a  slt         $v1, $s1, $s6
    ctx->pc = 0x1659b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_1659b8:
    // 0x1659b8: 0x1460ffae  bnez        $v1, . + 4 + (-0x52 << 2)
label_1659bc:
    if (ctx->pc == 0x1659BCu) {
        ctx->pc = 0x1659BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659B8u;
        // 0x1659bc: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1659C0u;
        goto label_1659c0;
    }
    ctx->pc = 0x1659B8u;
    {
        const bool branch_taken_0x1659b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1659BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659B8u;
        // 0x1659bc: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1659b8) {
            ctx->pc = 0x165874u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165874;
        }
    }
    ctx->pc = 0x1659C0u;
label_1659c0:
    // 0x1659c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1659c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1659c4:
    // 0x1659c4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1659c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1659c8:
    // 0x1659c8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1659c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1659cc:
    // 0x1659cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1659ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1659d0:
    // 0x1659d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1659d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1659d4:
    // 0x1659d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1659d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1659d8:
    // 0x1659d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1659d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1659dc:
    // 0x1659dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1659dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1659e0:
    // 0x1659e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1659e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1659e4:
    // 0x1659e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1659e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1659e8:
    // 0x1659e8: 0x3e00008  jr          $ra
label_1659ec:
    if (ctx->pc == 0x1659ECu) {
        ctx->pc = 0x1659ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659E8u;
        // 0x1659ec: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1659F0u;
        goto label_1659f0;
    }
    ctx->pc = 0x1659E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1659ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1659E8u;
        // 0x1659ec: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1659E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1659F0u;
label_1659f0:
    // 0x1659f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1659f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1659f4:
    // 0x1659f4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1659f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1659f8:
    // 0x1659f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1659f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1659fc:
    // 0x1659fc: 0x34880  sll         $t1, $v1, 2
    ctx->pc = 0x1659fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_165a00:
    // 0x165a00: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x165a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_165a04:
    // 0x165a04: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x165a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_165a08:
    // 0x165a08: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x165a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_165a0c:
    // 0x165a0c: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x165a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
label_165a10:
    // 0x165a10: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x165a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_165a14:
    // 0x165a14: 0x24636270  addiu       $v1, $v1, 0x6270
    ctx->pc = 0x165a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25200));
label_165a18:
    // 0x165a18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x165a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_165a1c:
    // 0x165a1c: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x165a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
label_165a20:
    // 0x165a20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x165a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_165a24:
    // 0x165a24: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x165a24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_165a28:
    // 0x165a28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x165a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_165a2c:
    // 0x165a2c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x165a2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_165a30:
    // 0x165a30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x165a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_165a34:
    // 0x165a34: 0x893021  addu        $a2, $a0, $t1
    ctx->pc = 0x165a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_165a38:
    // 0x165a38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_165a3c:
    // 0x165a3c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x165a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_165a40:
    // 0x165a40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_165a44:
    // 0x165a44: 0x24848920  addiu       $a0, $a0, -0x76E0
    ctx->pc = 0x165a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936864));
label_165a48:
    // 0x165a48: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x165a48u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_165a4c:
    // 0x165a4c: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x165a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_165a50:
    // 0x165a50: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x165a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_165a54:
    // 0x165a54: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x165a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_165a58:
    // 0x165a58: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x165a58u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
label_165a5c:
    // 0x165a5c: 0x246361f0  addiu       $v1, $v1, 0x61F0
    ctx->pc = 0x165a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25072));
label_165a60:
    // 0x165a60: 0x8c960000  lw          $s6, 0x0($a0)
    ctx->pc = 0x165a60u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_165a64:
    // 0x165a64: 0x692821  addu        $a1, $v1, $t1
    ctx->pc = 0x165a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_165a68:
    // 0x165a68: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x165a68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_165a6c:
    // 0x165a6c: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x165a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
label_165a70:
    // 0x165a70: 0x2463bd60  addiu       $v1, $v1, -0x42A0
    ctx->pc = 0x165a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950240));
label_165a74:
    // 0x165a74: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x165a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_165a78:
    // 0x165a78: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x165a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_165a7c:
    // 0x165a7c: 0x76001a  div         $zero, $v1, $s6
    ctx->pc = 0x165a7cu;
    { int32_t divisor = GPR_S32(ctx, 22);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_165a80:
    // 0x165a80: 0x0  nop
    ctx->pc = 0x165a80u;
    // NOP
label_165a84:
    // 0x165a84: 0x0  nop
    ctx->pc = 0x165a84u;
    // NOP
label_165a88:
    // 0x165a88: 0xb812  mflo        $s7
    ctx->pc = 0x165a88u;
    SET_GPR_U64(ctx, 23, ctx->lo);
label_165a8c:
    // 0x165a8c: 0x12200050  beqz        $s1, . + 4 + (0x50 << 2)
label_165a90:
    if (ctx->pc == 0x165A90u) {
        ctx->pc = 0x165A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A8Cu;
        // 0x165a90: 0x8cbe0000  lw          $fp, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165A94u;
        goto label_165a94;
    }
    ctx->pc = 0x165A8Cu;
    {
        const bool branch_taken_0x165a8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A8Cu;
        // 0x165a90: 0x8cbe0000  lw          $fp, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a8c) {
            ctx->pc = 0x165BD0u;
            { ctx->pc = 0x165bd0; return; }
        }
    }
    ctx->pc = 0x165A94u;
label_165a94:
    // 0x165a94: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x165a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
label_165a98:
    // 0x165a98: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x165a98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_165a9c:
    // 0x165a9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x165a9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165aa0:
    // 0x165aa0: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
label_165aa4:
    if (ctx->pc == 0x165AA4u) {
        ctx->pc = 0x165AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165AA0u;
        // 0x165aa4: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165AA8u;
        goto label_165aa8;
    }
    ctx->pc = 0x165AA0u;
    {
        const bool branch_taken_0x165aa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x165AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165AA0u;
        // 0x165aa4: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165aa0) {
            ctx->pc = 0x165BD0u;
            { ctx->pc = 0x165bd0; return; }
        }
    }
    ctx->pc = 0x165AA8u;
label_165aa8:
    // 0x165aa8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x165aa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_165aac:
    // 0x165aac: 0x92230006  lbu         $v1, 0x6($s1)
    ctx->pc = 0x165aacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_165ab0:
    // 0x165ab0: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
label_165ab4:
    if (ctx->pc == 0x165AB4u) {
        ctx->pc = 0x165AB8u;
        goto label_165ab8;
    }
    ctx->pc = 0x165AB0u;
    {
        const bool branch_taken_0x165ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x165ab0) {
            ctx->pc = 0x165BB4u;
            { ctx->pc = 0x165bb4; return; }
        }
    }
    ctx->pc = 0x165AB8u;
label_165ab8:
    // 0x165ab8: 0x92270007  lbu         $a3, 0x7($s1)
    ctx->pc = 0x165ab8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_165abc:
    // 0x165abc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x165abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_165ac0:
    // 0x165ac0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x165ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165ac4:
    // 0x165ac4: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x165ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_165ac8:
    // 0x165ac8: 0x24423eb0  addiu       $v0, $v0, 0x3EB0
    ctx->pc = 0x165ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16048));
label_165acc:
    // 0x165acc: 0x3d32821  addu        $a1, $fp, $s3
    ctx->pc = 0x165accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    ctx->pc = 0x165ad0u;
    return;
}
