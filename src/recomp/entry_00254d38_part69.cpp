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

// Function: entry_00254d38
// Address: 0x254d38 - 0x27d478
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_00254d38_part69(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x276078u: goto label_276078;
        case 0x27607cu: goto label_27607c;
        case 0x276080u: goto label_276080;
        case 0x276084u: goto label_276084;
        case 0x276088u: goto label_276088;
        case 0x27608cu: goto label_27608c;
        case 0x276090u: goto label_276090;
        case 0x276094u: goto label_276094;
        case 0x276098u: goto label_276098;
        case 0x27609cu: goto label_27609c;
        case 0x2760a0u: goto label_2760a0;
        case 0x2760a4u: goto label_2760a4;
        case 0x2760a8u: goto label_2760a8;
        case 0x2760acu: goto label_2760ac;
        case 0x2760b0u: goto label_2760b0;
        case 0x2760b4u: goto label_2760b4;
        case 0x2760b8u: goto label_2760b8;
        case 0x2760bcu: goto label_2760bc;
        case 0x2760c0u: goto label_2760c0;
        case 0x2760c4u: goto label_2760c4;
        case 0x2760c8u: goto label_2760c8;
        case 0x2760ccu: goto label_2760cc;
        case 0x2760d0u: goto label_2760d0;
        case 0x2760d4u: goto label_2760d4;
        case 0x2760d8u: goto label_2760d8;
        case 0x2760dcu: goto label_2760dc;
        case 0x2760e0u: goto label_2760e0;
        case 0x2760e4u: goto label_2760e4;
        case 0x2760e8u: goto label_2760e8;
        case 0x2760ecu: goto label_2760ec;
        case 0x2760f0u: goto label_2760f0;
        case 0x2760f4u: goto label_2760f4;
        case 0x2760f8u: goto label_2760f8;
        case 0x2760fcu: goto label_2760fc;
        case 0x276100u: goto label_276100;
        case 0x276104u: goto label_276104;
        case 0x276108u: goto label_276108;
        case 0x27610cu: goto label_27610c;
        case 0x276110u: goto label_276110;
        case 0x276114u: goto label_276114;
        case 0x276118u: goto label_276118;
        case 0x27611cu: goto label_27611c;
        case 0x276120u: goto label_276120;
        case 0x276124u: goto label_276124;
        case 0x276128u: goto label_276128;
        case 0x27612cu: goto label_27612c;
        case 0x276130u: goto label_276130;
        case 0x276134u: goto label_276134;
        case 0x276138u: goto label_276138;
        case 0x27613cu: goto label_27613c;
        case 0x276140u: goto label_276140;
        case 0x276144u: goto label_276144;
        case 0x276148u: goto label_276148;
        case 0x27614cu: goto label_27614c;
        case 0x276150u: goto label_276150;
        case 0x276154u: goto label_276154;
        case 0x276158u: goto label_276158;
        case 0x27615cu: goto label_27615c;
        case 0x276160u: goto label_276160;
        case 0x276164u: goto label_276164;
        case 0x276168u: goto label_276168;
        case 0x27616cu: goto label_27616c;
        case 0x276170u: goto label_276170;
        case 0x276174u: goto label_276174;
        case 0x276178u: goto label_276178;
        case 0x27617cu: goto label_27617c;
        case 0x276180u: goto label_276180;
        case 0x276184u: goto label_276184;
        case 0x276188u: goto label_276188;
        case 0x27618cu: goto label_27618c;
        case 0x276190u: goto label_276190;
        case 0x276194u: goto label_276194;
        case 0x276198u: goto label_276198;
        case 0x27619cu: goto label_27619c;
        case 0x2761a0u: goto label_2761a0;
        case 0x2761a4u: goto label_2761a4;
        case 0x2761a8u: goto label_2761a8;
        case 0x2761acu: goto label_2761ac;
        case 0x2761b0u: goto label_2761b0;
        case 0x2761b4u: goto label_2761b4;
        case 0x2761b8u: goto label_2761b8;
        case 0x2761bcu: goto label_2761bc;
        case 0x2761c0u: goto label_2761c0;
        case 0x2761c4u: goto label_2761c4;
        case 0x2761c8u: goto label_2761c8;
        case 0x2761ccu: goto label_2761cc;
        case 0x2761d0u: goto label_2761d0;
        case 0x2761d4u: goto label_2761d4;
        case 0x2761d8u: goto label_2761d8;
        case 0x2761dcu: goto label_2761dc;
        case 0x2761e0u: goto label_2761e0;
        case 0x2761e4u: goto label_2761e4;
        case 0x2761e8u: goto label_2761e8;
        case 0x2761ecu: goto label_2761ec;
        case 0x2761f0u: goto label_2761f0;
        case 0x2761f4u: goto label_2761f4;
        case 0x2761f8u: goto label_2761f8;
        case 0x2761fcu: goto label_2761fc;
        case 0x276200u: goto label_276200;
        case 0x276204u: goto label_276204;
        case 0x276208u: goto label_276208;
        case 0x27620cu: goto label_27620c;
        case 0x276210u: goto label_276210;
        case 0x276214u: goto label_276214;
        case 0x276218u: goto label_276218;
        case 0x27621cu: goto label_27621c;
        case 0x276220u: goto label_276220;
        case 0x276224u: goto label_276224;
        case 0x276228u: goto label_276228;
        case 0x27622cu: goto label_27622c;
        case 0x276230u: goto label_276230;
        case 0x276234u: goto label_276234;
        case 0x276238u: goto label_276238;
        case 0x27623cu: goto label_27623c;
        case 0x276240u: goto label_276240;
        case 0x276244u: goto label_276244;
        case 0x276248u: goto label_276248;
        case 0x27624cu: goto label_27624c;
        case 0x276250u: goto label_276250;
        case 0x276254u: goto label_276254;
        case 0x276258u: goto label_276258;
        case 0x27625cu: goto label_27625c;
        case 0x276260u: goto label_276260;
        case 0x276264u: goto label_276264;
        case 0x276268u: goto label_276268;
        case 0x27626cu: goto label_27626c;
        case 0x276270u: goto label_276270;
        case 0x276274u: goto label_276274;
        case 0x276278u: goto label_276278;
        case 0x27627cu: goto label_27627c;
        case 0x276280u: goto label_276280;
        case 0x276284u: goto label_276284;
        case 0x276288u: goto label_276288;
        case 0x27628cu: goto label_27628c;
        case 0x276290u: goto label_276290;
        case 0x276294u: goto label_276294;
        case 0x276298u: goto label_276298;
        case 0x27629cu: goto label_27629c;
        case 0x2762a0u: goto label_2762a0;
        case 0x2762a4u: goto label_2762a4;
        case 0x2762a8u: goto label_2762a8;
        case 0x2762acu: goto label_2762ac;
        case 0x2762b0u: goto label_2762b0;
        case 0x2762b4u: goto label_2762b4;
        case 0x2762b8u: goto label_2762b8;
        case 0x2762bcu: goto label_2762bc;
        case 0x2762c0u: goto label_2762c0;
        case 0x2762c4u: goto label_2762c4;
        case 0x2762c8u: goto label_2762c8;
        case 0x2762ccu: goto label_2762cc;
        case 0x2762d0u: goto label_2762d0;
        case 0x2762d4u: goto label_2762d4;
        case 0x2762d8u: goto label_2762d8;
        case 0x2762dcu: goto label_2762dc;
        case 0x2762e0u: goto label_2762e0;
        case 0x2762e4u: goto label_2762e4;
        case 0x2762e8u: goto label_2762e8;
        case 0x2762ecu: goto label_2762ec;
        case 0x2762f0u: goto label_2762f0;
        case 0x2762f4u: goto label_2762f4;
        case 0x2762f8u: goto label_2762f8;
        case 0x2762fcu: goto label_2762fc;
        case 0x276300u: goto label_276300;
        case 0x276304u: goto label_276304;
        case 0x276308u: goto label_276308;
        case 0x27630cu: goto label_27630c;
        case 0x276310u: goto label_276310;
        case 0x276314u: goto label_276314;
        case 0x276318u: goto label_276318;
        case 0x27631cu: goto label_27631c;
        case 0x276320u: goto label_276320;
        case 0x276324u: goto label_276324;
        case 0x276328u: goto label_276328;
        case 0x27632cu: goto label_27632c;
        case 0x276330u: goto label_276330;
        case 0x276334u: goto label_276334;
        case 0x276338u: goto label_276338;
        case 0x27633cu: goto label_27633c;
        case 0x276340u: goto label_276340;
        case 0x276344u: goto label_276344;
        case 0x276348u: goto label_276348;
        case 0x27634cu: goto label_27634c;
        case 0x276350u: goto label_276350;
        case 0x276354u: goto label_276354;
        case 0x276358u: goto label_276358;
        case 0x27635cu: goto label_27635c;
        case 0x276360u: goto label_276360;
        case 0x276364u: goto label_276364;
        case 0x276368u: goto label_276368;
        case 0x27636cu: goto label_27636c;
        case 0x276370u: goto label_276370;
        case 0x276374u: goto label_276374;
        case 0x276378u: goto label_276378;
        case 0x27637cu: goto label_27637c;
        case 0x276380u: goto label_276380;
        case 0x276384u: goto label_276384;
        case 0x276388u: goto label_276388;
        case 0x27638cu: goto label_27638c;
        case 0x276390u: goto label_276390;
        case 0x276394u: goto label_276394;
        case 0x276398u: goto label_276398;
        case 0x27639cu: goto label_27639c;
        case 0x2763a0u: goto label_2763a0;
        case 0x2763a4u: goto label_2763a4;
        case 0x2763a8u: goto label_2763a8;
        case 0x2763acu: goto label_2763ac;
        case 0x2763b0u: goto label_2763b0;
        case 0x2763b4u: goto label_2763b4;
        case 0x2763b8u: goto label_2763b8;
        case 0x2763bcu: goto label_2763bc;
        case 0x2763c0u: goto label_2763c0;
        case 0x2763c4u: goto label_2763c4;
        case 0x2763c8u: goto label_2763c8;
        case 0x2763ccu: goto label_2763cc;
        case 0x2763d0u: goto label_2763d0;
        case 0x2763d4u: goto label_2763d4;
        case 0x2763d8u: goto label_2763d8;
        case 0x2763dcu: goto label_2763dc;
        case 0x2763e0u: goto label_2763e0;
        case 0x2763e4u: goto label_2763e4;
        case 0x2763e8u: goto label_2763e8;
        case 0x2763ecu: goto label_2763ec;
        case 0x2763f0u: goto label_2763f0;
        case 0x2763f4u: goto label_2763f4;
        case 0x2763f8u: goto label_2763f8;
        case 0x2763fcu: goto label_2763fc;
        case 0x276400u: goto label_276400;
        case 0x276404u: goto label_276404;
        case 0x276408u: goto label_276408;
        case 0x27640cu: goto label_27640c;
        case 0x276410u: goto label_276410;
        case 0x276414u: goto label_276414;
        case 0x276418u: goto label_276418;
        case 0x27641cu: goto label_27641c;
        case 0x276420u: goto label_276420;
        case 0x276424u: goto label_276424;
        case 0x276428u: goto label_276428;
        case 0x27642cu: goto label_27642c;
        case 0x276430u: goto label_276430;
        case 0x276434u: goto label_276434;
        case 0x276438u: goto label_276438;
        case 0x27643cu: goto label_27643c;
        case 0x276440u: goto label_276440;
        case 0x276444u: goto label_276444;
        case 0x276448u: goto label_276448;
        case 0x27644cu: goto label_27644c;
        case 0x276450u: goto label_276450;
        case 0x276454u: goto label_276454;
        case 0x276458u: goto label_276458;
        case 0x27645cu: goto label_27645c;
        case 0x276460u: goto label_276460;
        case 0x276464u: goto label_276464;
        case 0x276468u: goto label_276468;
        case 0x27646cu: goto label_27646c;
        case 0x276470u: goto label_276470;
        case 0x276474u: goto label_276474;
        case 0x276478u: goto label_276478;
        case 0x27647cu: goto label_27647c;
        case 0x276480u: goto label_276480;
        case 0x276484u: goto label_276484;
        case 0x276488u: goto label_276488;
        case 0x27648cu: goto label_27648c;
        case 0x276490u: goto label_276490;
        case 0x276494u: goto label_276494;
        case 0x276498u: goto label_276498;
        case 0x27649cu: goto label_27649c;
        case 0x2764a0u: goto label_2764a0;
        case 0x2764a4u: goto label_2764a4;
        case 0x2764a8u: goto label_2764a8;
        case 0x2764acu: goto label_2764ac;
        case 0x2764b0u: goto label_2764b0;
        case 0x2764b4u: goto label_2764b4;
        case 0x2764b8u: goto label_2764b8;
        case 0x2764bcu: goto label_2764bc;
        case 0x2764c0u: goto label_2764c0;
        case 0x2764c4u: goto label_2764c4;
        case 0x2764c8u: goto label_2764c8;
        case 0x2764ccu: goto label_2764cc;
        case 0x2764d0u: goto label_2764d0;
        case 0x2764d4u: goto label_2764d4;
        case 0x2764d8u: goto label_2764d8;
        case 0x2764dcu: goto label_2764dc;
        case 0x2764e0u: goto label_2764e0;
        case 0x2764e4u: goto label_2764e4;
        case 0x2764e8u: goto label_2764e8;
        case 0x2764ecu: goto label_2764ec;
        case 0x2764f0u: goto label_2764f0;
        case 0x2764f4u: goto label_2764f4;
        case 0x2764f8u: goto label_2764f8;
        case 0x2764fcu: goto label_2764fc;
        case 0x276500u: goto label_276500;
        case 0x276504u: goto label_276504;
        case 0x276508u: goto label_276508;
        case 0x27650cu: goto label_27650c;
        case 0x276510u: goto label_276510;
        case 0x276514u: goto label_276514;
        case 0x276518u: goto label_276518;
        case 0x27651cu: goto label_27651c;
        case 0x276520u: goto label_276520;
        case 0x276524u: goto label_276524;
        case 0x276528u: goto label_276528;
        case 0x27652cu: goto label_27652c;
        case 0x276530u: goto label_276530;
        case 0x276534u: goto label_276534;
        case 0x276538u: goto label_276538;
        case 0x27653cu: goto label_27653c;
        case 0x276540u: goto label_276540;
        case 0x276544u: goto label_276544;
        case 0x276548u: goto label_276548;
        case 0x27654cu: goto label_27654c;
        case 0x276550u: goto label_276550;
        case 0x276554u: goto label_276554;
        case 0x276558u: goto label_276558;
        case 0x27655cu: goto label_27655c;
        case 0x276560u: goto label_276560;
        case 0x276564u: goto label_276564;
        case 0x276568u: goto label_276568;
        case 0x27656cu: goto label_27656c;
        case 0x276570u: goto label_276570;
        case 0x276574u: goto label_276574;
        case 0x276578u: goto label_276578;
        case 0x27657cu: goto label_27657c;
        case 0x276580u: goto label_276580;
        case 0x276584u: goto label_276584;
        case 0x276588u: goto label_276588;
        case 0x27658cu: goto label_27658c;
        case 0x276590u: goto label_276590;
        case 0x276594u: goto label_276594;
        case 0x276598u: goto label_276598;
        case 0x27659cu: goto label_27659c;
        case 0x2765a0u: goto label_2765a0;
        case 0x2765a4u: goto label_2765a4;
        case 0x2765a8u: goto label_2765a8;
        case 0x2765acu: goto label_2765ac;
        case 0x2765b0u: goto label_2765b0;
        case 0x2765b4u: goto label_2765b4;
        case 0x2765b8u: goto label_2765b8;
        case 0x2765bcu: goto label_2765bc;
        case 0x2765c0u: goto label_2765c0;
        case 0x2765c4u: goto label_2765c4;
        case 0x2765c8u: goto label_2765c8;
        case 0x2765ccu: goto label_2765cc;
        case 0x2765d0u: goto label_2765d0;
        case 0x2765d4u: goto label_2765d4;
        case 0x2765d8u: goto label_2765d8;
        case 0x2765dcu: goto label_2765dc;
        case 0x2765e0u: goto label_2765e0;
        case 0x2765e4u: goto label_2765e4;
        case 0x2765e8u: goto label_2765e8;
        case 0x2765ecu: goto label_2765ec;
        case 0x2765f0u: goto label_2765f0;
        case 0x2765f4u: goto label_2765f4;
        case 0x2765f8u: goto label_2765f8;
        case 0x2765fcu: goto label_2765fc;
        case 0x276600u: goto label_276600;
        case 0x276604u: goto label_276604;
        case 0x276608u: goto label_276608;
        case 0x27660cu: goto label_27660c;
        case 0x276610u: goto label_276610;
        case 0x276614u: goto label_276614;
        case 0x276618u: goto label_276618;
        case 0x27661cu: goto label_27661c;
        case 0x276620u: goto label_276620;
        case 0x276624u: goto label_276624;
        case 0x276628u: goto label_276628;
        case 0x27662cu: goto label_27662c;
        case 0x276630u: goto label_276630;
        case 0x276634u: goto label_276634;
        case 0x276638u: goto label_276638;
        case 0x27663cu: goto label_27663c;
        case 0x276640u: goto label_276640;
        case 0x276644u: goto label_276644;
        case 0x276648u: goto label_276648;
        case 0x27664cu: goto label_27664c;
        case 0x276650u: goto label_276650;
        case 0x276654u: goto label_276654;
        case 0x276658u: goto label_276658;
        case 0x27665cu: goto label_27665c;
        case 0x276660u: goto label_276660;
        case 0x276664u: goto label_276664;
        case 0x276668u: goto label_276668;
        case 0x27666cu: goto label_27666c;
        case 0x276670u: goto label_276670;
        case 0x276674u: goto label_276674;
        case 0x276678u: goto label_276678;
        case 0x27667cu: goto label_27667c;
        case 0x276680u: goto label_276680;
        case 0x276684u: goto label_276684;
        case 0x276688u: goto label_276688;
        case 0x27668cu: goto label_27668c;
        case 0x276690u: goto label_276690;
        case 0x276694u: goto label_276694;
        case 0x276698u: goto label_276698;
        case 0x27669cu: goto label_27669c;
        case 0x2766a0u: goto label_2766a0;
        case 0x2766a4u: goto label_2766a4;
        case 0x2766a8u: goto label_2766a8;
        case 0x2766acu: goto label_2766ac;
        case 0x2766b0u: goto label_2766b0;
        case 0x2766b4u: goto label_2766b4;
        case 0x2766b8u: goto label_2766b8;
        case 0x2766bcu: goto label_2766bc;
        case 0x2766c0u: goto label_2766c0;
        case 0x2766c4u: goto label_2766c4;
        case 0x2766c8u: goto label_2766c8;
        case 0x2766ccu: goto label_2766cc;
        case 0x2766d0u: goto label_2766d0;
        case 0x2766d4u: goto label_2766d4;
        case 0x2766d8u: goto label_2766d8;
        case 0x2766dcu: goto label_2766dc;
        case 0x2766e0u: goto label_2766e0;
        case 0x2766e4u: goto label_2766e4;
        case 0x2766e8u: goto label_2766e8;
        case 0x2766ecu: goto label_2766ec;
        case 0x2766f0u: goto label_2766f0;
        case 0x2766f4u: goto label_2766f4;
        case 0x2766f8u: goto label_2766f8;
        case 0x2766fcu: goto label_2766fc;
        case 0x276700u: goto label_276700;
        case 0x276704u: goto label_276704;
        case 0x276708u: goto label_276708;
        case 0x27670cu: goto label_27670c;
        case 0x276710u: goto label_276710;
        case 0x276714u: goto label_276714;
        case 0x276718u: goto label_276718;
        case 0x27671cu: goto label_27671c;
        case 0x276720u: goto label_276720;
        case 0x276724u: goto label_276724;
        case 0x276728u: goto label_276728;
        case 0x27672cu: goto label_27672c;
        case 0x276730u: goto label_276730;
        case 0x276734u: goto label_276734;
        case 0x276738u: goto label_276738;
        case 0x27673cu: goto label_27673c;
        case 0x276740u: goto label_276740;
        case 0x276744u: goto label_276744;
        case 0x276748u: goto label_276748;
        case 0x27674cu: goto label_27674c;
        case 0x276750u: goto label_276750;
        case 0x276754u: goto label_276754;
        case 0x276758u: goto label_276758;
        case 0x27675cu: goto label_27675c;
        case 0x276760u: goto label_276760;
        case 0x276764u: goto label_276764;
        case 0x276768u: goto label_276768;
        case 0x27676cu: goto label_27676c;
        case 0x276770u: goto label_276770;
        case 0x276774u: goto label_276774;
        case 0x276778u: goto label_276778;
        case 0x27677cu: goto label_27677c;
        case 0x276780u: goto label_276780;
        case 0x276784u: goto label_276784;
        case 0x276788u: goto label_276788;
        case 0x27678cu: goto label_27678c;
        case 0x276790u: goto label_276790;
        case 0x276794u: goto label_276794;
        case 0x276798u: goto label_276798;
        case 0x27679cu: goto label_27679c;
        case 0x2767a0u: goto label_2767a0;
        case 0x2767a4u: goto label_2767a4;
        case 0x2767a8u: goto label_2767a8;
        case 0x2767acu: goto label_2767ac;
        case 0x2767b0u: goto label_2767b0;
        case 0x2767b4u: goto label_2767b4;
        case 0x2767b8u: goto label_2767b8;
        case 0x2767bcu: goto label_2767bc;
        case 0x2767c0u: goto label_2767c0;
        case 0x2767c4u: goto label_2767c4;
        case 0x2767c8u: goto label_2767c8;
        case 0x2767ccu: goto label_2767cc;
        case 0x2767d0u: goto label_2767d0;
        case 0x2767d4u: goto label_2767d4;
        case 0x2767d8u: goto label_2767d8;
        case 0x2767dcu: goto label_2767dc;
        case 0x2767e0u: goto label_2767e0;
        case 0x2767e4u: goto label_2767e4;
        case 0x2767e8u: goto label_2767e8;
        case 0x2767ecu: goto label_2767ec;
        case 0x2767f0u: goto label_2767f0;
        case 0x2767f4u: goto label_2767f4;
        case 0x2767f8u: goto label_2767f8;
        case 0x2767fcu: goto label_2767fc;
        case 0x276800u: goto label_276800;
        case 0x276804u: goto label_276804;
        case 0x276808u: goto label_276808;
        case 0x27680cu: goto label_27680c;
        case 0x276810u: goto label_276810;
        case 0x276814u: goto label_276814;
        case 0x276818u: goto label_276818;
        case 0x27681cu: goto label_27681c;
        case 0x276820u: goto label_276820;
        case 0x276824u: goto label_276824;
        case 0x276828u: goto label_276828;
        case 0x27682cu: goto label_27682c;
        case 0x276830u: goto label_276830;
        case 0x276834u: goto label_276834;
        case 0x276838u: goto label_276838;
        case 0x27683cu: goto label_27683c;
        case 0x276840u: goto label_276840;
        case 0x276844u: goto label_276844;
        default: return;
    }

label_276078:
    // 0x276078: 0x0  nop
    ctx->pc = 0x276078u;
    // NOP
label_27607c:
    // 0x27607c: 0x0  nop
    ctx->pc = 0x27607cu;
    // NOP
label_276080:
    // 0x276080: 0xd5cd  break       0, 855
    ctx->pc = 0x276080u;
    runtime->handleBreak(rdram, ctx);
label_276084:
    // 0x276084: 0xd840  sll         $k1, $zero, 1
    ctx->pc = 0x276084u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_276088:
    // 0x276088: 0x0  nop
    ctx->pc = 0x276088u;
    // NOP
label_27608c:
    // 0x27608c: 0x0  nop
    ctx->pc = 0x27608cu;
    // NOP
label_276090:
    // 0x276090: 0xd5e9  .word       0x0000D5E9                   # mtsa        $zero # 0000D5C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x276090u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_276094:
    // 0x276094: 0x87a0  .word       0x000087A0                   # add         $s0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_276098:
    // 0x276098: 0x0  nop
    ctx->pc = 0x276098u;
    // NOP
label_27609c:
    // 0x27609c: 0x0  nop
    ctx->pc = 0x27609cu;
    // NOP
label_2760a0:
    // 0x2760a0: 0xd5fa  dsrl        $k0, $zero, 23
    ctx->pc = 0x2760a0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> 23);
label_2760a4:
    // 0x2760a4: 0x78d0  .word       0x000078D0                   # mfhi        $t7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760a4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2760a8:
    // 0x2760a8: 0x0  nop
    ctx->pc = 0x2760a8u;
    // NOP
label_2760ac:
    // 0x2760ac: 0x0  nop
    ctx->pc = 0x2760acu;
    // NOP
label_2760b0:
    // 0x2760b0: 0xd60a  .word       0x0000D60A                   # movz        $k0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760b0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_2760b4:
    // 0x2760b4: 0x99a0  .word       0x000099A0                   # add         $s3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2760b8:
    // 0x2760b8: 0x0  nop
    ctx->pc = 0x2760b8u;
    // NOP
label_2760bc:
    // 0x2760bc: 0x0  nop
    ctx->pc = 0x2760bcu;
    // NOP
label_2760c0:
    // 0x2760c0: 0xd61e  .word       0x0000D61E                   # ddiv        $k0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2760C0 raw=0x0000D61E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2760c4:
    // 0x2760c4: 0xabf0  tge         $zero, $zero, 687
    ctx->pc = 0x2760c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2760c8:
    // 0x2760c8: 0x0  nop
    ctx->pc = 0x2760c8u;
    // NOP
label_2760cc:
    // 0x2760cc: 0x0  nop
    ctx->pc = 0x2760ccu;
    // NOP
label_2760d0:
    // 0x2760d0: 0xd634  teq         $zero, $zero, 856
    ctx->pc = 0x2760d0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2760d4:
    // 0x2760d4: 0xd210  .word       0x0000D210                   # mfhi        $k0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760d4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2760d8:
    // 0x2760d8: 0x0  nop
    ctx->pc = 0x2760d8u;
    // NOP
label_2760dc:
    // 0x2760dc: 0x0  nop
    ctx->pc = 0x2760dcu;
    // NOP
label_2760e0:
    // 0x2760e0: 0xd64f  .word       0x0000D64F                   # sync.p # 0000D000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2760e4:
    // 0x2760e4: 0x6160  .word       0x00006160                   # add         $t4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2760e8:
    // 0x2760e8: 0x0  nop
    ctx->pc = 0x2760e8u;
    // NOP
label_2760ec:
    // 0x2760ec: 0x0  nop
    ctx->pc = 0x2760ecu;
    // NOP
label_2760f0:
    // 0x2760f0: 0xd65c  .word       0x0000D65C                   # dmult       $zero, $zero # 0000D640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2760F0 raw=0x0000D65C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2760f4:
    // 0x2760f4: 0x3690  .word       0x00003690                   # mfhi        $a2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760f4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2760f8:
    // 0x2760f8: 0x0  nop
    ctx->pc = 0x2760f8u;
    // NOP
label_2760fc:
    // 0x2760fc: 0x0  nop
    ctx->pc = 0x2760fcu;
    // NOP
label_276100:
    // 0x276100: 0xd663  .word       0x0000D663                   # negu        $k0, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276100u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_276104:
    // 0x276104: 0x5d50  .word       0x00005D50                   # mfhi        $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276104u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_276108:
    // 0x276108: 0x0  nop
    ctx->pc = 0x276108u;
    // NOP
label_27610c:
    // 0x27610c: 0x0  nop
    ctx->pc = 0x27610cu;
    // NOP
label_276110:
    // 0x276110: 0xd66f  .word       0x0000D66F                   # dsubu       $k0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276110u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_276114:
    // 0x276114: 0x5fe0  .word       0x00005FE0                   # add         $t3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276114u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_276118:
    // 0x276118: 0x0  nop
    ctx->pc = 0x276118u;
    // NOP
label_27611c:
    // 0x27611c: 0x0  nop
    ctx->pc = 0x27611cu;
    // NOP
label_276120:
    // 0x276120: 0xd67b  dsra        $k0, $zero, 25
    ctx->pc = 0x276120u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> 25);
label_276124:
    // 0x276124: 0xee90  .word       0x0000EE90                   # mfhi        $sp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276124u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_276128:
    // 0x276128: 0x0  nop
    ctx->pc = 0x276128u;
    // NOP
label_27612c:
    // 0x27612c: 0x0  nop
    ctx->pc = 0x27612cu;
    // NOP
label_276130:
    // 0x276130: 0xd699  .word       0x0000D699                   # multu       $zero, $zero # 0000D680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276130u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_276134:
    // 0x276134: 0x10720  .word       0x00010720                   # add         $zero, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276134u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_276138:
    // 0x276138: 0x0  nop
    ctx->pc = 0x276138u;
    // NOP
label_27613c:
    // 0x27613c: 0x0  nop
    ctx->pc = 0x27613cu;
    // NOP
label_276140:
    // 0x276140: 0xd6ba  dsrl        $k0, $zero, 26
    ctx->pc = 0x276140u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> 26);
label_276144:
    // 0x276144: 0xb320  .word       0x0000B320                   # add         $s6, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276144u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_276148:
    // 0x276148: 0x0  nop
    ctx->pc = 0x276148u;
    // NOP
label_27614c:
    // 0x27614c: 0x0  nop
    ctx->pc = 0x27614cu;
    // NOP
label_276150:
    // 0x276150: 0xd6d1  .word       0x0000D6D1                   # mthi        $zero # 0000D6C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276150u;
    ctx->hi = GPR_U64(ctx, 0);
label_276154:
    // 0x276154: 0x11af0  tge         $zero, $at, 107
    ctx->pc = 0x276154u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_276158:
    // 0x276158: 0x0  nop
    ctx->pc = 0x276158u;
    // NOP
label_27615c:
    // 0x27615c: 0x0  nop
    ctx->pc = 0x27615cu;
    // NOP
label_276160:
    // 0x276160: 0xd6f5  .word       0x0000D6F5                   # INVALID     $zero, $zero, -0x290B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x276160 raw=0x0000D6F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276164:
    // 0x276164: 0xe370  tge         $zero, $zero, 909
    ctx->pc = 0x276164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276168:
    // 0x276168: 0x0  nop
    ctx->pc = 0x276168u;
    // NOP
label_27616c:
    // 0x27616c: 0x0  nop
    ctx->pc = 0x27616cu;
    // NOP
label_276170:
    // 0x276170: 0xd712  .word       0x0000D712                   # mflo        $k0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276170u;
    SET_GPR_U64(ctx, 26, ctx->lo);
label_276174:
    // 0x276174: 0x1c30  tge         $zero, $zero, 112
    ctx->pc = 0x276174u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276178:
    // 0x276178: 0x0  nop
    ctx->pc = 0x276178u;
    // NOP
label_27617c:
    // 0x27617c: 0x0  nop
    ctx->pc = 0x27617cu;
    // NOP
label_276180:
    // 0x276180: 0xd716  .word       0x0000D716                   # dsrlv       $k0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276180u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_276184:
    // 0x276184: 0x6d00  sll         $t5, $zero, 20
    ctx->pc = 0x276184u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_276188:
    // 0x276188: 0x0  nop
    ctx->pc = 0x276188u;
    // NOP
label_27618c:
    // 0x27618c: 0x0  nop
    ctx->pc = 0x27618cu;
    // NOP
label_276190:
    // 0x276190: 0xd724  .word       0x0000D724                   # and         $k0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276190u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_276194:
    // 0x276194: 0xbc90  .word       0x0000BC90                   # mfhi        $s7 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276194u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_276198:
    // 0x276198: 0x0  nop
    ctx->pc = 0x276198u;
    // NOP
label_27619c:
    // 0x27619c: 0x0  nop
    ctx->pc = 0x27619cu;
    // NOP
label_2761a0:
    // 0x2761a0: 0xd73c  dsll32      $k0, $zero, 28
    ctx->pc = 0x2761a0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << (32 + 28));
label_2761a4:
    // 0x2761a4: 0xb040  sll         $s6, $zero, 1
    ctx->pc = 0x2761a4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2761a8:
    // 0x2761a8: 0x0  nop
    ctx->pc = 0x2761a8u;
    // NOP
label_2761ac:
    // 0x2761ac: 0x0  nop
    ctx->pc = 0x2761acu;
    // NOP
label_2761b0:
    // 0x2761b0: 0xd753  .word       0x0000D753                   # mtlo        $zero # 0000D740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2761b0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2761b4:
    // 0x2761b4: 0x4240  sll         $t0, $zero, 9
    ctx->pc = 0x2761b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2761b8:
    // 0x2761b8: 0x0  nop
    ctx->pc = 0x2761b8u;
    // NOP
label_2761bc:
    // 0x2761bc: 0x0  nop
    ctx->pc = 0x2761bcu;
    // NOP
label_2761c0:
    // 0x2761c0: 0xd75c  .word       0x0000D75C                   # dmult       $zero, $zero # 0000D740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2761c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2761C0 raw=0x0000D75C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2761c4:
    // 0x2761c4: 0x12940  sll         $a1, $at, 5
    ctx->pc = 0x2761c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_2761c8:
    // 0x2761c8: 0x0  nop
    ctx->pc = 0x2761c8u;
    // NOP
label_2761cc:
    // 0x2761cc: 0x0  nop
    ctx->pc = 0x2761ccu;
    // NOP
label_2761d0:
    // 0x2761d0: 0xd782  srl         $k0, $zero, 30
    ctx->pc = 0x2761d0u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 0), 30));
label_2761d4:
    // 0x2761d4: 0xd460  .word       0x0000D460                   # add         $k0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2761d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_2761d8:
    // 0x2761d8: 0x0  nop
    ctx->pc = 0x2761d8u;
    // NOP
label_2761dc:
    // 0x2761dc: 0x0  nop
    ctx->pc = 0x2761dcu;
    // NOP
label_2761e0:
    // 0x2761e0: 0xd79d  .word       0x0000D79D                   # dmultu      $zero, $zero # 0000D780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2761e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2761E0 raw=0x0000D79D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2761e4:
    // 0x2761e4: 0x60d0  .word       0x000060D0                   # mfhi        $t4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2761e4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2761e8:
    // 0x2761e8: 0x0  nop
    ctx->pc = 0x2761e8u;
    // NOP
label_2761ec:
    // 0x2761ec: 0x0  nop
    ctx->pc = 0x2761ecu;
    // NOP
label_2761f0:
    // 0x2761f0: 0xd7aa  .word       0x0000D7AA                   # slt         $k0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2761f0u;
    SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2761f4:
    // 0x2761f4: 0x1e00  sll         $v1, $zero, 24
    ctx->pc = 0x2761f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_2761f8:
    // 0x2761f8: 0x0  nop
    ctx->pc = 0x2761f8u;
    // NOP
label_2761fc:
    // 0x2761fc: 0x0  nop
    ctx->pc = 0x2761fcu;
    // NOP
label_276200:
    // 0x276200: 0xd7ae  .word       0x0000D7AE                   # dsub        $k0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276200u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_276204:
    // 0x276204: 0xa640  sll         $s4, $zero, 25
    ctx->pc = 0x276204u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_276208:
    // 0x276208: 0x0  nop
    ctx->pc = 0x276208u;
    // NOP
label_27620c:
    // 0x27620c: 0x0  nop
    ctx->pc = 0x27620cu;
    // NOP
label_276210:
    // 0x276210: 0xd7c3  sra         $k0, $zero, 31
    ctx->pc = 0x276210u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 0), 31));
label_276214:
    // 0x276214: 0xab00  sll         $s5, $zero, 12
    ctx->pc = 0x276214u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_276218:
    // 0x276218: 0x0  nop
    ctx->pc = 0x276218u;
    // NOP
label_27621c:
    // 0x27621c: 0x0  nop
    ctx->pc = 0x27621cu;
    // NOP
label_276220:
    // 0x276220: 0xd7d9  .word       0x0000D7D9                   # multu       $zero, $zero # 0000D7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276220u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_276224:
    // 0x276224: 0xadf0  tge         $zero, $zero, 695
    ctx->pc = 0x276224u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276228:
    // 0x276228: 0x0  nop
    ctx->pc = 0x276228u;
    // NOP
label_27622c:
    // 0x27622c: 0x0  nop
    ctx->pc = 0x27622cu;
    // NOP
label_276230:
    // 0x276230: 0xd7ef  .word       0x0000D7EF                   # dsubu       $k0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276230u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_276234:
    // 0x276234: 0xda40  sll         $k1, $zero, 9
    ctx->pc = 0x276234u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_276238:
    // 0x276238: 0x0  nop
    ctx->pc = 0x276238u;
    // NOP
label_27623c:
    // 0x27623c: 0x0  nop
    ctx->pc = 0x27623cu;
    // NOP
label_276240:
    // 0x276240: 0xd80b  movn        $k1, $zero, $zero
    ctx->pc = 0x276240u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 0));
label_276244:
    // 0x276244: 0x14490  .word       0x00014490                   # mfhi        $t0 # 00010480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276244u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_276248:
    // 0x276248: 0x0  nop
    ctx->pc = 0x276248u;
    // NOP
label_27624c:
    // 0x27624c: 0x0  nop
    ctx->pc = 0x27624cu;
    // NOP
label_276250:
    // 0x276250: 0xd834  teq         $zero, $zero, 864
    ctx->pc = 0x276250u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276254:
    // 0x276254: 0x10ed0  .word       0x00010ED0                   # mfhi        $at # 000106C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276254u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_276258:
    // 0x276258: 0x0  nop
    ctx->pc = 0x276258u;
    // NOP
label_27625c:
    // 0x27625c: 0x0  nop
    ctx->pc = 0x27625cu;
    // NOP
label_276260:
    // 0x276260: 0xd856  .word       0x0000D856                   # dsrlv       $k1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276260u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_276264:
    // 0x276264: 0x5bb0  tge         $zero, $zero, 366
    ctx->pc = 0x276264u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276268:
    // 0x276268: 0x0  nop
    ctx->pc = 0x276268u;
    // NOP
label_27626c:
    // 0x27626c: 0x0  nop
    ctx->pc = 0x27626cu;
    // NOP
label_276270:
    // 0x276270: 0xd862  .word       0x0000D862                   # neg         $k1, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276270u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 27, (int32_t)tmp); }
label_276274:
    // 0x276274: 0xdbe0  .word       0x0000DBE0                   # add         $k1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276274u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_276278:
    // 0x276278: 0x0  nop
    ctx->pc = 0x276278u;
    // NOP
label_27627c:
    // 0x27627c: 0x0  nop
    ctx->pc = 0x27627cu;
    // NOP
label_276280:
    // 0x276280: 0xd87e  dsrl32      $k1, $zero, 1
    ctx->pc = 0x276280u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) >> (32 + 1));
label_276284:
    // 0x276284: 0x1e50  .word       0x00001E50                   # mfhi        $v1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276284u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_276288:
    // 0x276288: 0x0  nop
    ctx->pc = 0x276288u;
    // NOP
label_27628c:
    // 0x27628c: 0x0  nop
    ctx->pc = 0x27628cu;
    // NOP
label_276290:
    // 0x276290: 0xd882  srl         $k1, $zero, 2
    ctx->pc = 0x276290u;
    SET_GPR_S32(ctx, 27, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_276294:
    // 0x276294: 0x1b00  sll         $v1, $zero, 12
    ctx->pc = 0x276294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_276298:
    // 0x276298: 0x0  nop
    ctx->pc = 0x276298u;
    // NOP
label_27629c:
    // 0x27629c: 0x0  nop
    ctx->pc = 0x27629cu;
    // NOP
label_2762a0:
    // 0x2762a0: 0xd886  .word       0x0000D886                   # srlv        $k1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2762a0u;
    SET_GPR_S32(ctx, 27, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2762a4:
    // 0x2762a4: 0x9350  .word       0x00009350                   # mfhi        $s2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2762a4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2762a8:
    // 0x2762a8: 0x0  nop
    ctx->pc = 0x2762a8u;
    // NOP
label_2762ac:
    // 0x2762ac: 0x0  nop
    ctx->pc = 0x2762acu;
    // NOP
label_2762b0:
    // 0x2762b0: 0xd899  .word       0x0000D899                   # multu       $zero, $zero # 0000D880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2762b0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2762b4:
    // 0x2762b4: 0xe5a0  .word       0x0000E5A0                   # add         $gp, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2762b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_2762b8:
    // 0x2762b8: 0x0  nop
    ctx->pc = 0x2762b8u;
    // NOP
label_2762bc:
    // 0x2762bc: 0x0  nop
    ctx->pc = 0x2762bcu;
    // NOP
label_2762c0:
    // 0x2762c0: 0xd8b6  tne         $zero, $zero, 866
    ctx->pc = 0x2762c0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2762c4:
    // 0x2762c4: 0x14200  sll         $t0, $at, 8
    ctx->pc = 0x2762c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), 8));
label_2762c8:
    // 0x2762c8: 0x0  nop
    ctx->pc = 0x2762c8u;
    // NOP
label_2762cc:
    // 0x2762cc: 0x0  nop
    ctx->pc = 0x2762ccu;
    // NOP
label_2762d0:
    // 0x2762d0: 0xd8df  .word       0x0000D8DF                   # ddivu       $k1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2762d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2762D0 raw=0x0000D8DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2762d4:
    // 0x2762d4: 0xfb60  .word       0x0000FB60                   # add         $ra, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2762d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_2762d8:
    // 0x2762d8: 0x0  nop
    ctx->pc = 0x2762d8u;
    // NOP
label_2762dc:
    // 0x2762dc: 0x0  nop
    ctx->pc = 0x2762dcu;
    // NOP
label_2762e0:
    // 0x2762e0: 0xd8ff  dsra32      $k1, $zero, 3
    ctx->pc = 0x2762e0u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> (32 + 3));
label_2762e4:
    // 0x2762e4: 0x7f20  .word       0x00007F20                   # add         $t7, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2762e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2762e8:
    // 0x2762e8: 0x0  nop
    ctx->pc = 0x2762e8u;
    // NOP
label_2762ec:
    // 0x2762ec: 0x0  nop
    ctx->pc = 0x2762ecu;
    // NOP
label_2762f0:
    // 0x2762f0: 0xd90f  .word       0x0000D90F                   # sync # 0000D800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2762f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2762f4:
    // 0x2762f4: 0x13580  sll         $a2, $at, 22
    ctx->pc = 0x2762f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 22));
label_2762f8:
    // 0x2762f8: 0x0  nop
    ctx->pc = 0x2762f8u;
    // NOP
label_2762fc:
    // 0x2762fc: 0x0  nop
    ctx->pc = 0x2762fcu;
    // NOP
label_276300:
    // 0x276300: 0xd936  tne         $zero, $zero, 868
    ctx->pc = 0x276300u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276304:
    // 0x276304: 0xd9c0  sll         $k1, $zero, 7
    ctx->pc = 0x276304u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_276308:
    // 0x276308: 0x0  nop
    ctx->pc = 0x276308u;
    // NOP
label_27630c:
    // 0x27630c: 0x0  nop
    ctx->pc = 0x27630cu;
    // NOP
label_276310:
    // 0x276310: 0xd952  .word       0x0000D952                   # mflo        $k1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276310u;
    SET_GPR_U64(ctx, 27, ctx->lo);
label_276314:
    // 0x276314: 0x104a0  .word       0x000104A0                   # add         $zero, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276314u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_276318:
    // 0x276318: 0x0  nop
    ctx->pc = 0x276318u;
    // NOP
label_27631c:
    // 0x27631c: 0x0  nop
    ctx->pc = 0x27631cu;
    // NOP
label_276320:
    // 0x276320: 0xd973  tltu        $zero, $zero, 869
    ctx->pc = 0x276320u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276324:
    // 0x276324: 0x3050  .word       0x00003050                   # mfhi        $a2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276324u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_276328:
    // 0x276328: 0x0  nop
    ctx->pc = 0x276328u;
    // NOP
label_27632c:
    // 0x27632c: 0x0  nop
    ctx->pc = 0x27632cu;
    // NOP
label_276330:
    // 0x276330: 0xd97a  dsrl        $k1, $zero, 5
    ctx->pc = 0x276330u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) >> 5);
label_276334:
    // 0x276334: 0x6ed0  .word       0x00006ED0                   # mfhi        $t5 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276334u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_276338:
    // 0x276338: 0x0  nop
    ctx->pc = 0x276338u;
    // NOP
label_27633c:
    // 0x27633c: 0x0  nop
    ctx->pc = 0x27633cu;
    // NOP
label_276340:
    // 0x276340: 0xd988  .word       0x0000D988                   # jr          $zero # 0000D980 <InstrIdType: CPU_SPECIAL>
label_276344:
    if (ctx->pc == 0x276344u) {
        ctx->pc = 0x276344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276340u;
        // 0x276344: 0x1500  sll         $v0, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276348u;
        goto label_276348;
    }
    ctx->pc = 0x276340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x276344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276340u;
        // 0x276344: 0x1500  sll         $v0, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276340u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x276348u;
label_276348:
    // 0x276348: 0x0  nop
    ctx->pc = 0x276348u;
    // NOP
label_27634c:
    // 0x27634c: 0x0  nop
    ctx->pc = 0x27634cu;
    // NOP
label_276350:
    // 0x276350: 0xd98b  .word       0x0000D98B                   # movn        $k1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276350u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 0));
label_276354:
    // 0x276354: 0x3410  .word       0x00003410                   # mfhi        $a2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276354u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_276358:
    // 0x276358: 0x0  nop
    ctx->pc = 0x276358u;
    // NOP
label_27635c:
    // 0x27635c: 0x0  nop
    ctx->pc = 0x27635cu;
    // NOP
label_276360:
    // 0x276360: 0xd992  .word       0x0000D992                   # mflo        $k1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276360u;
    SET_GPR_U64(ctx, 27, ctx->lo);
label_276364:
    // 0x276364: 0x2510  .word       0x00002510                   # mfhi        $a0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276364u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_276368:
    // 0x276368: 0x0  nop
    ctx->pc = 0x276368u;
    // NOP
label_27636c:
    // 0x27636c: 0x0  nop
    ctx->pc = 0x27636cu;
    // NOP
label_276370:
    // 0x276370: 0xd997  .word       0x0000D997                   # dsrav       $k1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276370u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_276374:
    // 0x276374: 0x7e40  sll         $t7, $zero, 25
    ctx->pc = 0x276374u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_276378:
    // 0x276378: 0x0  nop
    ctx->pc = 0x276378u;
    // NOP
label_27637c:
    // 0x27637c: 0x0  nop
    ctx->pc = 0x27637cu;
    // NOP
label_276380:
    // 0x276380: 0xd9a7  .word       0x0000D9A7                   # not         $k1, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276380u;
    SET_GPR_U64(ctx, 27, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_276384:
    // 0x276384: 0xbb20  .word       0x0000BB20                   # add         $s7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_276388:
    // 0x276388: 0x0  nop
    ctx->pc = 0x276388u;
    // NOP
label_27638c:
    // 0x27638c: 0x0  nop
    ctx->pc = 0x27638cu;
    // NOP
label_276390:
    // 0x276390: 0xd9bf  dsra32      $k1, $zero, 6
    ctx->pc = 0x276390u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> (32 + 6));
label_276394:
    // 0x276394: 0x6760  .word       0x00006760                   # add         $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276394u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_276398:
    // 0x276398: 0x0  nop
    ctx->pc = 0x276398u;
    // NOP
label_27639c:
    // 0x27639c: 0x0  nop
    ctx->pc = 0x27639cu;
    // NOP
label_2763a0:
    // 0x2763a0: 0xd9cc  syscall     871
    ctx->pc = 0x2763a0u;
    ctx->pc = 0x2763A4u;
runtime->handleSyscall(rdram, ctx, 0x367u);
label_2763a4:
    // 0x2763a4: 0x5b10  .word       0x00005B10                   # mfhi        $t3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2763a4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2763a8:
    // 0x2763a8: 0x0  nop
    ctx->pc = 0x2763a8u;
    // NOP
label_2763ac:
    // 0x2763ac: 0x0  nop
    ctx->pc = 0x2763acu;
    // NOP
label_2763b0:
    // 0x2763b0: 0xd9d8  .word       0x0000D9D8                   # mult        $k1, $zero, $zero # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2763b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2763b4:
    // 0x2763b4: 0x11410  .word       0x00011410                   # mfhi        $v0 # 00010400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2763b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2763b8:
    // 0x2763b8: 0x0  nop
    ctx->pc = 0x2763b8u;
    // NOP
label_2763bc:
    // 0x2763bc: 0x0  nop
    ctx->pc = 0x2763bcu;
    // NOP
label_2763c0:
    // 0x2763c0: 0xd9fb  dsra        $k1, $zero, 7
    ctx->pc = 0x2763c0u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> 7);
label_2763c4:
    // 0x2763c4: 0x19c0  sll         $v1, $zero, 7
    ctx->pc = 0x2763c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_2763c8:
    // 0x2763c8: 0x0  nop
    ctx->pc = 0x2763c8u;
    // NOP
label_2763cc:
    // 0x2763cc: 0x0  nop
    ctx->pc = 0x2763ccu;
    // NOP
label_2763d0:
    // 0x2763d0: 0xd9ff  dsra32      $k1, $zero, 7
    ctx->pc = 0x2763d0u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> (32 + 7));
label_2763d4:
    // 0x2763d4: 0xc880  sll         $t9, $zero, 2
    ctx->pc = 0x2763d4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2763d8:
    // 0x2763d8: 0x0  nop
    ctx->pc = 0x2763d8u;
    // NOP
label_2763dc:
    // 0x2763dc: 0x0  nop
    ctx->pc = 0x2763dcu;
    // NOP
label_2763e0:
    // 0x2763e0: 0xda19  .word       0x0000DA19                   # multu       $zero, $zero # 0000DA00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2763e0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2763e4:
    // 0x2763e4: 0x74c0  sll         $t6, $zero, 19
    ctx->pc = 0x2763e4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2763e8:
    // 0x2763e8: 0x0  nop
    ctx->pc = 0x2763e8u;
    // NOP
label_2763ec:
    // 0x2763ec: 0x0  nop
    ctx->pc = 0x2763ecu;
    // NOP
label_2763f0:
    // 0x2763f0: 0xda28  .word       0x0000DA28                   # mfsa        $k1 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2763f0u;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_2763f4:
    // 0x2763f4: 0x11660  .word       0x00011660                   # add         $v0, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2763f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2763f8:
    // 0x2763f8: 0x0  nop
    ctx->pc = 0x2763f8u;
    // NOP
label_2763fc:
    // 0x2763fc: 0x0  nop
    ctx->pc = 0x2763fcu;
    // NOP
label_276400:
    // 0x276400: 0xda4b  .word       0x0000DA4B                   # movn        $k1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276400u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 0));
label_276404:
    // 0x276404: 0x14790  .word       0x00014790                   # mfhi        $t0 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276404u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_276408:
    // 0x276408: 0x0  nop
    ctx->pc = 0x276408u;
    // NOP
label_27640c:
    // 0x27640c: 0x0  nop
    ctx->pc = 0x27640cu;
    // NOP
label_276410:
    // 0x276410: 0xda74  teq         $zero, $zero, 873
    ctx->pc = 0x276410u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276414:
    // 0x276414: 0x53e0  .word       0x000053E0                   # add         $t2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276414u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_276418:
    // 0x276418: 0x0  nop
    ctx->pc = 0x276418u;
    // NOP
label_27641c:
    // 0x27641c: 0x0  nop
    ctx->pc = 0x27641cu;
    // NOP
label_276420:
    // 0x276420: 0xda7f  dsra32      $k1, $zero, 9
    ctx->pc = 0x276420u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> (32 + 9));
label_276424:
    // 0x276424: 0xa1c0  sll         $s4, $zero, 7
    ctx->pc = 0x276424u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_276428:
    // 0x276428: 0x0  nop
    ctx->pc = 0x276428u;
    // NOP
label_27642c:
    // 0x27642c: 0x0  nop
    ctx->pc = 0x27642cu;
    // NOP
label_276430:
    // 0x276430: 0xda94  .word       0x0000DA94                   # dsllv       $k1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276430u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_276434:
    // 0x276434: 0x12b00  sll         $a1, $at, 12
    ctx->pc = 0x276434u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 12));
label_276438:
    // 0x276438: 0x0  nop
    ctx->pc = 0x276438u;
    // NOP
label_27643c:
    // 0x27643c: 0x0  nop
    ctx->pc = 0x27643cu;
    // NOP
label_276440:
    // 0x276440: 0xdaba  dsrl        $k1, $zero, 10
    ctx->pc = 0x276440u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) >> 10);
label_276444:
    // 0x276444: 0x13020  add         $a2, $zero, $at
    ctx->pc = 0x276444u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_276448:
    // 0x276448: 0x0  nop
    ctx->pc = 0x276448u;
    // NOP
label_27644c:
    // 0x27644c: 0x0  nop
    ctx->pc = 0x27644cu;
    // NOP
label_276450:
    // 0x276450: 0xdae1  .word       0x0000DAE1                   # addu        $k1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276450u;
    SET_GPR_S32(ctx, 27, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_276454:
    // 0x276454: 0x25f0  tge         $zero, $zero, 151
    ctx->pc = 0x276454u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276458:
    // 0x276458: 0x0  nop
    ctx->pc = 0x276458u;
    // NOP
label_27645c:
    // 0x27645c: 0x0  nop
    ctx->pc = 0x27645cu;
    // NOP
label_276460:
    // 0x276460: 0xdae6  .word       0x0000DAE6                   # xor         $k1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276460u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_276464:
    // 0x276464: 0x3f00  sll         $a3, $zero, 28
    ctx->pc = 0x276464u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_276468:
    // 0x276468: 0x0  nop
    ctx->pc = 0x276468u;
    // NOP
label_27646c:
    // 0x27646c: 0x0  nop
    ctx->pc = 0x27646cu;
    // NOP
label_276470:
    // 0x276470: 0xdaee  .word       0x0000DAEE                   # dsub        $k1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276470u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_276474:
    // 0x276474: 0x12a60  .word       0x00012A60                   # add         $a1, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276474u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_276478:
    // 0x276478: 0x0  nop
    ctx->pc = 0x276478u;
    // NOP
label_27647c:
    // 0x27647c: 0x0  nop
    ctx->pc = 0x27647cu;
    // NOP
label_276480:
    // 0x276480: 0xdb14  .word       0x0000DB14                   # dsllv       $k1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276480u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_276484:
    // 0x276484: 0xb940  sll         $s7, $zero, 5
    ctx->pc = 0x276484u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_276488:
    // 0x276488: 0x0  nop
    ctx->pc = 0x276488u;
    // NOP
label_27648c:
    // 0x27648c: 0x0  nop
    ctx->pc = 0x27648cu;
    // NOP
label_276490:
    // 0x276490: 0xdb2c  .word       0x0000DB2C                   # dadd        $k1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276490u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_276494:
    // 0x276494: 0xcbf0  tge         $zero, $zero, 815
    ctx->pc = 0x276494u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276498:
    // 0x276498: 0x0  nop
    ctx->pc = 0x276498u;
    // NOP
label_27649c:
    // 0x27649c: 0x0  nop
    ctx->pc = 0x27649cu;
    // NOP
label_2764a0:
    // 0x2764a0: 0xdb46  .word       0x0000DB46                   # srlv        $k1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764a0u;
    SET_GPR_S32(ctx, 27, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2764a4:
    // 0x2764a4: 0xac60  .word       0x0000AC60                   # add         $s5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2764a8:
    // 0x2764a8: 0x0  nop
    ctx->pc = 0x2764a8u;
    // NOP
label_2764ac:
    // 0x2764ac: 0x0  nop
    ctx->pc = 0x2764acu;
    // NOP
label_2764b0:
    // 0x2764b0: 0xdb5c  .word       0x0000DB5C                   # dmult       $zero, $zero # 0000DB40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2764B0 raw=0x0000DB5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2764b4:
    // 0x2764b4: 0x1ed0  .word       0x00001ED0                   # mfhi        $v1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2764b8:
    // 0x2764b8: 0x0  nop
    ctx->pc = 0x2764b8u;
    // NOP
label_2764bc:
    // 0x2764bc: 0x0  nop
    ctx->pc = 0x2764bcu;
    // NOP
label_2764c0:
    // 0x2764c0: 0xdb60  .word       0x0000DB60                   # add         $k1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_2764c4:
    // 0x2764c4: 0x48f0  tge         $zero, $zero, 291
    ctx->pc = 0x2764c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2764c8:
    // 0x2764c8: 0x0  nop
    ctx->pc = 0x2764c8u;
    // NOP
label_2764cc:
    // 0x2764cc: 0x0  nop
    ctx->pc = 0x2764ccu;
    // NOP
label_2764d0:
    // 0x2764d0: 0xdb6a  .word       0x0000DB6A                   # slt         $k1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764d0u;
    SET_GPR_U64(ctx, 27, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2764d4:
    // 0x2764d4: 0x8d50  .word       0x00008D50                   # mfhi        $s1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764d4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2764d8:
    // 0x2764d8: 0x0  nop
    ctx->pc = 0x2764d8u;
    // NOP
label_2764dc:
    // 0x2764dc: 0x0  nop
    ctx->pc = 0x2764dcu;
    // NOP
label_2764e0:
    // 0x2764e0: 0xdb7c  dsll32      $k1, $zero, 13
    ctx->pc = 0x2764e0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) << (32 + 13));
label_2764e4:
    // 0x2764e4: 0x9ea0  .word       0x00009EA0                   # add         $s3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2764e8:
    // 0x2764e8: 0x0  nop
    ctx->pc = 0x2764e8u;
    // NOP
label_2764ec:
    // 0x2764ec: 0x0  nop
    ctx->pc = 0x2764ecu;
    // NOP
label_2764f0:
    // 0x2764f0: 0xdb90  .word       0x0000DB90                   # mfhi        $k1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764f0u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_2764f4:
    // 0x2764f4: 0x7750  .word       0x00007750                   # mfhi        $t6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764f4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2764f8:
    // 0x2764f8: 0x0  nop
    ctx->pc = 0x2764f8u;
    // NOP
label_2764fc:
    // 0x2764fc: 0x0  nop
    ctx->pc = 0x2764fcu;
    // NOP
label_276500:
    // 0x276500: 0xdb9f  .word       0x0000DB9F                   # ddivu       $k1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276500u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x276500 raw=0x0000DB9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276504:
    // 0x276504: 0x3c90  .word       0x00003C90                   # mfhi        $a3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276504u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_276508:
    // 0x276508: 0x0  nop
    ctx->pc = 0x276508u;
    // NOP
label_27650c:
    // 0x27650c: 0x0  nop
    ctx->pc = 0x27650cu;
    // NOP
label_276510:
    // 0x276510: 0xdba7  .word       0x0000DBA7                   # not         $k1, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276510u;
    SET_GPR_U64(ctx, 27, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_276514:
    // 0x276514: 0x7e20  .word       0x00007E20                   # add         $t7, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276514u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_276518:
    // 0x276518: 0x0  nop
    ctx->pc = 0x276518u;
    // NOP
label_27651c:
    // 0x27651c: 0x0  nop
    ctx->pc = 0x27651cu;
    // NOP
label_276520:
    // 0x276520: 0xdbb7  .word       0x0000DBB7                   # INVALID     $zero, $zero, -0x2449 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276520u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x276520 raw=0x0000DBB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276524:
    // 0x276524: 0xd820  add         $k1, $zero, $zero
    ctx->pc = 0x276524u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_276528:
    // 0x276528: 0x0  nop
    ctx->pc = 0x276528u;
    // NOP
label_27652c:
    // 0x27652c: 0x0  nop
    ctx->pc = 0x27652cu;
    // NOP
label_276530:
    // 0x276530: 0xdbd3  .word       0x0000DBD3                   # mtlo        $zero # 0000DBC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276530u;
    ctx->lo = GPR_U64(ctx, 0);
label_276534:
    // 0x276534: 0x3e80  sll         $a3, $zero, 26
    ctx->pc = 0x276534u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_276538:
    // 0x276538: 0x0  nop
    ctx->pc = 0x276538u;
    // NOP
label_27653c:
    // 0x27653c: 0x0  nop
    ctx->pc = 0x27653cu;
    // NOP
label_276540:
    // 0x276540: 0xdbdb  .word       0x0000DBDB                   # divu        $k1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276540u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_276544:
    // 0x276544: 0x18e0  .word       0x000018E0                   # add         $v1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_276548:
    // 0x276548: 0x0  nop
    ctx->pc = 0x276548u;
    // NOP
label_27654c:
    // 0x27654c: 0x0  nop
    ctx->pc = 0x27654cu;
    // NOP
label_276550:
    // 0x276550: 0xdbdf  .word       0x0000DBDF                   # ddivu       $k1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276550u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x276550 raw=0x0000DBDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276554:
    // 0x276554: 0x7900  sll         $t7, $zero, 4
    ctx->pc = 0x276554u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_276558:
    // 0x276558: 0x0  nop
    ctx->pc = 0x276558u;
    // NOP
label_27655c:
    // 0x27655c: 0x0  nop
    ctx->pc = 0x27655cu;
    // NOP
label_276560:
    // 0x276560: 0xdbef  .word       0x0000DBEF                   # dsubu       $k1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276560u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_276564:
    // 0x276564: 0x17be0  .word       0x00017BE0                   # add         $t7, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276564u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_276568:
    // 0x276568: 0x0  nop
    ctx->pc = 0x276568u;
    // NOP
label_27656c:
    // 0x27656c: 0x0  nop
    ctx->pc = 0x27656cu;
    // NOP
label_276570:
    // 0x276570: 0xdc1f  .word       0x0000DC1F                   # ddivu       $k1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276570u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x276570 raw=0x0000DC1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276574:
    // 0x276574: 0xfbc0  sll         $ra, $zero, 15
    ctx->pc = 0x276574u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_276578:
    // 0x276578: 0x0  nop
    ctx->pc = 0x276578u;
    // NOP
label_27657c:
    // 0x27657c: 0x0  nop
    ctx->pc = 0x27657cu;
    // NOP
label_276580:
    // 0x276580: 0xdc3f  dsra32      $k1, $zero, 16
    ctx->pc = 0x276580u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> (32 + 16));
label_276584:
    // 0x276584: 0x14810  .word       0x00014810                   # mfhi        $t1 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276584u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_276588:
    // 0x276588: 0x0  nop
    ctx->pc = 0x276588u;
    // NOP
label_27658c:
    // 0x27658c: 0x0  nop
    ctx->pc = 0x27658cu;
    // NOP
label_276590:
    // 0x276590: 0xdc69  .word       0x0000DC69                   # mtsa        $zero # 0000DC40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x276590u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_276594:
    // 0x276594: 0xb9d0  .word       0x0000B9D0                   # mfhi        $s7 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276594u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_276598:
    // 0x276598: 0x0  nop
    ctx->pc = 0x276598u;
    // NOP
label_27659c:
    // 0x27659c: 0x0  nop
    ctx->pc = 0x27659cu;
    // NOP
label_2765a0:
    // 0x2765a0: 0xdc81  .word       0x0000DC81                   # INVALID     $zero, $zero, -0x237F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2765a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2765A0 raw=0x0000DC81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2765a4:
    // 0x2765a4: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2765a4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2765a8:
    // 0x2765a8: 0x0  nop
    ctx->pc = 0x2765a8u;
    // NOP
label_2765ac:
    // 0x2765ac: 0x0  nop
    ctx->pc = 0x2765acu;
    // NOP
label_2765b0:
    // 0x2765b0: 0xdcb4  teq         $zero, $zero, 882
    ctx->pc = 0x2765b0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2765b4:
    // 0x2765b4: 0xb0d0  .word       0x0000B0D0                   # mfhi        $s6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2765b4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2765b8:
    // 0x2765b8: 0x0  nop
    ctx->pc = 0x2765b8u;
    // NOP
label_2765bc:
    // 0x2765bc: 0x0  nop
    ctx->pc = 0x2765bcu;
    // NOP
label_2765c0:
    // 0x2765c0: 0xdccb  .word       0x0000DCCB                   # movn        $k1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2765c0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 0));
label_2765c4:
    // 0x2765c4: 0xda50  .word       0x0000DA50                   # mfhi        $k1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2765c4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_2765c8:
    // 0x2765c8: 0x0  nop
    ctx->pc = 0x2765c8u;
    // NOP
label_2765cc:
    // 0x2765cc: 0x0  nop
    ctx->pc = 0x2765ccu;
    // NOP
label_2765d0:
    // 0x2765d0: 0xdce7  .word       0x0000DCE7                   # not         $k1, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2765d0u;
    SET_GPR_U64(ctx, 27, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2765d4:
    // 0x2765d4: 0xf630  tge         $zero, $zero, 984
    ctx->pc = 0x2765d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2765d8:
    // 0x2765d8: 0x0  nop
    ctx->pc = 0x2765d8u;
    // NOP
label_2765dc:
    // 0x2765dc: 0x0  nop
    ctx->pc = 0x2765dcu;
    // NOP
label_2765e0:
    // 0x2765e0: 0xdd06  .word       0x0000DD06                   # srlv        $k1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2765e0u;
    SET_GPR_S32(ctx, 27, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2765e4:
    // 0x2765e4: 0x9d80  sll         $s3, $zero, 22
    ctx->pc = 0x2765e4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_2765e8:
    // 0x2765e8: 0x0  nop
    ctx->pc = 0x2765e8u;
    // NOP
label_2765ec:
    // 0x2765ec: 0x0  nop
    ctx->pc = 0x2765ecu;
    // NOP
label_2765f0:
    // 0x2765f0: 0xdd1a  .word       0x0000DD1A                   # div         $k1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2765f0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2765f4:
    // 0x2765f4: 0x5bb0  tge         $zero, $zero, 366
    ctx->pc = 0x2765f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2765f8:
    // 0x2765f8: 0x0  nop
    ctx->pc = 0x2765f8u;
    // NOP
label_2765fc:
    // 0x2765fc: 0x0  nop
    ctx->pc = 0x2765fcu;
    // NOP
label_276600:
    // 0x276600: 0xdd26  .word       0x0000DD26                   # xor         $k1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276600u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_276604:
    // 0x276604: 0xf530  tge         $zero, $zero, 980
    ctx->pc = 0x276604u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276608:
    // 0x276608: 0x0  nop
    ctx->pc = 0x276608u;
    // NOP
label_27660c:
    // 0x27660c: 0x0  nop
    ctx->pc = 0x27660cu;
    // NOP
label_276610:
    // 0x276610: 0xdd45  .word       0x0000DD45                   # INVALID     $zero, $zero, -0x22BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276610u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x276610 raw=0x0000DD45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276614:
    // 0x276614: 0x1550  .word       0x00001550                   # mfhi        $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276614u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_276618:
    // 0x276618: 0x0  nop
    ctx->pc = 0x276618u;
    // NOP
label_27661c:
    // 0x27661c: 0x0  nop
    ctx->pc = 0x27661cu;
    // NOP
label_276620:
    // 0x276620: 0xdd48  .word       0x0000DD48                   # jr          $zero # 0000DD40 <InstrIdType: CPU_SPECIAL>
label_276624:
    if (ctx->pc == 0x276624u) {
        ctx->pc = 0x276624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276620u;
        // 0x276624: 0x51d0  .word       0x000051D0                   # mfhi        $t2 # 000001C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 10, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x276628u;
        goto label_276628;
    }
    ctx->pc = 0x276620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x276624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276620u;
        // 0x276624: 0x51d0  .word       0x000051D0                   # mfhi        $t2 # 000001C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 10, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276620u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x276628u;
label_276628:
    // 0x276628: 0x0  nop
    ctx->pc = 0x276628u;
    // NOP
label_27662c:
    // 0x27662c: 0x0  nop
    ctx->pc = 0x27662cu;
    // NOP
label_276630:
    // 0x276630: 0xdd53  .word       0x0000DD53                   # mtlo        $zero # 0000DD40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276630u;
    ctx->lo = GPR_U64(ctx, 0);
label_276634:
    // 0x276634: 0xc370  tge         $zero, $zero, 781
    ctx->pc = 0x276634u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276638:
    // 0x276638: 0x0  nop
    ctx->pc = 0x276638u;
    // NOP
label_27663c:
    // 0x27663c: 0x0  nop
    ctx->pc = 0x27663cu;
    // NOP
label_276640:
    // 0x276640: 0xdd6c  .word       0x0000DD6C                   # dadd        $k1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276640u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_276644:
    // 0x276644: 0xa280  sll         $s4, $zero, 10
    ctx->pc = 0x276644u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_276648:
    // 0x276648: 0x0  nop
    ctx->pc = 0x276648u;
    // NOP
label_27664c:
    // 0x27664c: 0x0  nop
    ctx->pc = 0x27664cu;
    // NOP
label_276650:
    // 0x276650: 0xdd81  .word       0x0000DD81                   # INVALID     $zero, $zero, -0x227F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276650u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x276650 raw=0x0000DD81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276654:
    // 0x276654: 0xe5c0  sll         $gp, $zero, 23
    ctx->pc = 0x276654u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_276658:
    // 0x276658: 0x0  nop
    ctx->pc = 0x276658u;
    // NOP
label_27665c:
    // 0x27665c: 0x0  nop
    ctx->pc = 0x27665cu;
    // NOP
label_276660:
    // 0x276660: 0xdd9e  .word       0x0000DD9E                   # ddiv        $k1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276660u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x276660 raw=0x0000DD9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276664:
    // 0x276664: 0x10c00  sll         $at, $at, 16
    ctx->pc = 0x276664u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 16));
label_276668:
    // 0x276668: 0x0  nop
    ctx->pc = 0x276668u;
    // NOP
label_27666c:
    // 0x27666c: 0x0  nop
    ctx->pc = 0x27666cu;
    // NOP
label_276670:
    // 0x276670: 0xddc0  sll         $k1, $zero, 23
    ctx->pc = 0x276670u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_276674:
    // 0x276674: 0x4190  .word       0x00004190                   # mfhi        $t0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276674u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_276678:
    // 0x276678: 0x0  nop
    ctx->pc = 0x276678u;
    // NOP
label_27667c:
    // 0x27667c: 0x0  nop
    ctx->pc = 0x27667cu;
    // NOP
label_276680:
    // 0x276680: 0xddc9  .word       0x0000DDC9                   # jalr        $k1, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
label_276684:
    if (ctx->pc == 0x276684u) {
        ctx->pc = 0x276684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276680u;
        // 0x276684: 0x3980  sll         $a3, $zero, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276688u;
        goto label_276688;
    }
    ctx->pc = 0x276680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 27, 0x276688u);
        ctx->pc = 0x276684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276680u;
        // 0x276684: 0x3980  sll         $a3, $zero, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276680u, 0x276688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x276688u;
label_276688:
    // 0x276688: 0x0  nop
    ctx->pc = 0x276688u;
    // NOP
label_27668c:
    // 0x27668c: 0x0  nop
    ctx->pc = 0x27668cu;
    // NOP
label_276690:
    // 0x276690: 0xddd1  .word       0x0000DDD1                   # mthi        $zero # 0000DDC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276690u;
    ctx->hi = GPR_U64(ctx, 0);
label_276694:
    // 0x276694: 0x3fc0  sll         $a3, $zero, 31
    ctx->pc = 0x276694u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_276698:
    // 0x276698: 0x0  nop
    ctx->pc = 0x276698u;
    // NOP
label_27669c:
    // 0x27669c: 0x0  nop
    ctx->pc = 0x27669cu;
    // NOP
label_2766a0:
    // 0x2766a0: 0xddd9  .word       0x0000DDD9                   # multu       $zero, $zero # 0000DDC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2766a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2766a4:
    // 0x2766a4: 0x1910  .word       0x00001910                   # mfhi        $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2766a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2766a8:
    // 0x2766a8: 0x0  nop
    ctx->pc = 0x2766a8u;
    // NOP
label_2766ac:
    // 0x2766ac: 0x0  nop
    ctx->pc = 0x2766acu;
    // NOP
label_2766b0:
    // 0x2766b0: 0xdddd  .word       0x0000DDDD                   # dmultu      $zero, $zero # 0000DDC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2766b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2766B0 raw=0x0000DDDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2766b4:
    // 0x2766b4: 0x3870  tge         $zero, $zero, 225
    ctx->pc = 0x2766b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2766b8:
    // 0x2766b8: 0x0  nop
    ctx->pc = 0x2766b8u;
    // NOP
label_2766bc:
    // 0x2766bc: 0x0  nop
    ctx->pc = 0x2766bcu;
    // NOP
label_2766c0:
    // 0x2766c0: 0xdde5  .word       0x0000DDE5                   # move        $k1, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2766c0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2766c4:
    // 0x2766c4: 0x7d80  sll         $t7, $zero, 22
    ctx->pc = 0x2766c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_2766c8:
    // 0x2766c8: 0x0  nop
    ctx->pc = 0x2766c8u;
    // NOP
label_2766cc:
    // 0x2766cc: 0x0  nop
    ctx->pc = 0x2766ccu;
    // NOP
label_2766d0:
    // 0x2766d0: 0xddf5  .word       0x0000DDF5                   # INVALID     $zero, $zero, -0x220B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2766d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2766D0 raw=0x0000DDF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2766d4:
    // 0x2766d4: 0x84a0  .word       0x000084A0                   # add         $s0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2766d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2766d8:
    // 0x2766d8: 0x0  nop
    ctx->pc = 0x2766d8u;
    // NOP
label_2766dc:
    // 0x2766dc: 0x0  nop
    ctx->pc = 0x2766dcu;
    // NOP
label_2766e0:
    // 0x2766e0: 0xde06  .word       0x0000DE06                   # srlv        $k1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2766e0u;
    SET_GPR_S32(ctx, 27, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2766e4:
    // 0x2766e4: 0x1d80  sll         $v1, $zero, 22
    ctx->pc = 0x2766e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_2766e8:
    // 0x2766e8: 0x0  nop
    ctx->pc = 0x2766e8u;
    // NOP
label_2766ec:
    // 0x2766ec: 0x0  nop
    ctx->pc = 0x2766ecu;
    // NOP
label_2766f0:
    // 0x2766f0: 0xde0a  .word       0x0000DE0A                   # movz        $k1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2766f0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 0));
label_2766f4:
    // 0x2766f4: 0x30e0  .word       0x000030E0                   # add         $a2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2766f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2766f8:
    // 0x2766f8: 0x0  nop
    ctx->pc = 0x2766f8u;
    // NOP
label_2766fc:
    // 0x2766fc: 0x0  nop
    ctx->pc = 0x2766fcu;
    // NOP
label_276700:
    // 0x276700: 0xde11  .word       0x0000DE11                   # mthi        $zero # 0000DE00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276700u;
    ctx->hi = GPR_U64(ctx, 0);
label_276704:
    // 0x276704: 0x8b10  .word       0x00008B10                   # mfhi        $s1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276704u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_276708:
    // 0x276708: 0x0  nop
    ctx->pc = 0x276708u;
    // NOP
label_27670c:
    // 0x27670c: 0x0  nop
    ctx->pc = 0x27670cu;
    // NOP
label_276710:
    // 0x276710: 0xde23  .word       0x0000DE23                   # negu        $k1, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276710u;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_276714:
    // 0x276714: 0x62c0  sll         $t4, $zero, 11
    ctx->pc = 0x276714u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_276718:
    // 0x276718: 0x0  nop
    ctx->pc = 0x276718u;
    // NOP
label_27671c:
    // 0x27671c: 0x0  nop
    ctx->pc = 0x27671cu;
    // NOP
label_276720:
    // 0x276720: 0xde30  tge         $zero, $zero, 888
    ctx->pc = 0x276720u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276724:
    // 0x276724: 0x4d60  .word       0x00004D60                   # add         $t1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276724u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_276728:
    // 0x276728: 0x0  nop
    ctx->pc = 0x276728u;
    // NOP
label_27672c:
    // 0x27672c: 0x0  nop
    ctx->pc = 0x27672cu;
    // NOP
label_276730:
    // 0x276730: 0xde3a  dsrl        $k1, $zero, 24
    ctx->pc = 0x276730u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) >> 24);
label_276734:
    // 0x276734: 0xa6e0  .word       0x0000A6E0                   # add         $s4, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276734u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_276738:
    // 0x276738: 0x0  nop
    ctx->pc = 0x276738u;
    // NOP
label_27673c:
    // 0x27673c: 0x0  nop
    ctx->pc = 0x27673cu;
    // NOP
label_276740:
    // 0x276740: 0xde4f  .word       0x0000DE4F                   # sync.p # 0000D800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276740u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_276744:
    // 0x276744: 0x177c0  sll         $t6, $at, 31
    ctx->pc = 0x276744u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 1), 31));
label_276748:
    // 0x276748: 0x0  nop
    ctx->pc = 0x276748u;
    // NOP
label_27674c:
    // 0x27674c: 0x0  nop
    ctx->pc = 0x27674cu;
    // NOP
label_276750:
    // 0x276750: 0xde7e  dsrl32      $k1, $zero, 25
    ctx->pc = 0x276750u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) >> (32 + 25));
label_276754:
    // 0x276754: 0x6fd0  .word       0x00006FD0                   # mfhi        $t5 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276754u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_276758:
    // 0x276758: 0x0  nop
    ctx->pc = 0x276758u;
    // NOP
label_27675c:
    // 0x27675c: 0x0  nop
    ctx->pc = 0x27675cu;
    // NOP
label_276760:
    // 0x276760: 0xde8c  syscall     890
    ctx->pc = 0x276760u;
    ctx->pc = 0x276764u;
runtime->handleSyscall(rdram, ctx, 0x37Au);
label_276764:
    // 0x276764: 0x31d0  .word       0x000031D0                   # mfhi        $a2 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276764u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_276768:
    // 0x276768: 0x0  nop
    ctx->pc = 0x276768u;
    // NOP
label_27676c:
    // 0x27676c: 0x0  nop
    ctx->pc = 0x27676cu;
    // NOP
label_276770:
    // 0x276770: 0xde93  .word       0x0000DE93                   # mtlo        $zero # 0000DE80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276770u;
    ctx->lo = GPR_U64(ctx, 0);
label_276774:
    // 0x276774: 0xc8e0  .word       0x0000C8E0                   # add         $t9, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_276778:
    // 0x276778: 0x0  nop
    ctx->pc = 0x276778u;
    // NOP
label_27677c:
    // 0x27677c: 0x0  nop
    ctx->pc = 0x27677cu;
    // NOP
label_276780:
    // 0x276780: 0xdead  .word       0x0000DEAD                   # daddu       $k1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276780u;
    SET_GPR_U64(ctx, 27, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276784:
    // 0x276784: 0xf440  sll         $fp, $zero, 17
    ctx->pc = 0x276784u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_276788:
    // 0x276788: 0x0  nop
    ctx->pc = 0x276788u;
    // NOP
label_27678c:
    // 0x27678c: 0x0  nop
    ctx->pc = 0x27678cu;
    // NOP
label_276790:
    // 0x276790: 0xdecc  syscall     891
    ctx->pc = 0x276790u;
    ctx->pc = 0x276794u;
runtime->handleSyscall(rdram, ctx, 0x37Bu);
label_276794:
    // 0x276794: 0xc330  tge         $zero, $zero, 780
    ctx->pc = 0x276794u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276798:
    // 0x276798: 0x0  nop
    ctx->pc = 0x276798u;
    // NOP
label_27679c:
    // 0x27679c: 0x0  nop
    ctx->pc = 0x27679cu;
    // NOP
label_2767a0:
    // 0x2767a0: 0xdee5  .word       0x0000DEE5                   # move        $k1, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2767a0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2767a4:
    // 0x2767a4: 0xba70  tge         $zero, $zero, 745
    ctx->pc = 0x2767a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2767a8:
    // 0x2767a8: 0x0  nop
    ctx->pc = 0x2767a8u;
    // NOP
label_2767ac:
    // 0x2767ac: 0x0  nop
    ctx->pc = 0x2767acu;
    // NOP
label_2767b0:
    // 0x2767b0: 0xdefd  .word       0x0000DEFD                   # INVALID     $zero, $zero, -0x2103 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2767b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2767B0 raw=0x0000DEFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2767b4:
    // 0x2767b4: 0x79a0  .word       0x000079A0                   # add         $t7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2767b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2767b8:
    // 0x2767b8: 0x0  nop
    ctx->pc = 0x2767b8u;
    // NOP
label_2767bc:
    // 0x2767bc: 0x0  nop
    ctx->pc = 0x2767bcu;
    // NOP
label_2767c0:
    // 0x2767c0: 0xdf0d  break       0, 892
    ctx->pc = 0x2767c0u;
    runtime->handleBreak(rdram, ctx);
label_2767c4:
    // 0x2767c4: 0x11700  sll         $v0, $at, 28
    ctx->pc = 0x2767c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 28));
label_2767c8:
    // 0x2767c8: 0x0  nop
    ctx->pc = 0x2767c8u;
    // NOP
label_2767cc:
    // 0x2767cc: 0x0  nop
    ctx->pc = 0x2767ccu;
    // NOP
label_2767d0:
    // 0x2767d0: 0xdf30  tge         $zero, $zero, 892
    ctx->pc = 0x2767d0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2767d4:
    // 0x2767d4: 0x18600  sll         $s0, $at, 24
    ctx->pc = 0x2767d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 1), 24));
label_2767d8:
    // 0x2767d8: 0x0  nop
    ctx->pc = 0x2767d8u;
    // NOP
label_2767dc:
    // 0x2767dc: 0x0  nop
    ctx->pc = 0x2767dcu;
    // NOP
label_2767e0:
    // 0x2767e0: 0xdf61  .word       0x0000DF61                   # addu        $k1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2767e0u;
    SET_GPR_S32(ctx, 27, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2767e4:
    // 0x2767e4: 0x146f0  tge         $zero, $at, 283
    ctx->pc = 0x2767e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2767e8:
    // 0x2767e8: 0x0  nop
    ctx->pc = 0x2767e8u;
    // NOP
label_2767ec:
    // 0x2767ec: 0x0  nop
    ctx->pc = 0x2767ecu;
    // NOP
label_2767f0:
    // 0x2767f0: 0xdf8a  .word       0x0000DF8A                   # movz        $k1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2767f0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 0));
label_2767f4:
    // 0x2767f4: 0x174c0  sll         $t6, $at, 19
    ctx->pc = 0x2767f4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
label_2767f8:
    // 0x2767f8: 0x0  nop
    ctx->pc = 0x2767f8u;
    // NOP
label_2767fc:
    // 0x2767fc: 0x0  nop
    ctx->pc = 0x2767fcu;
    // NOP
label_276800:
    // 0x276800: 0xdfb9  .word       0x0000DFB9                   # INVALID     $zero, $zero, -0x2047 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x276800 raw=0x0000DFB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276804:
    // 0x276804: 0x6ff0  tge         $zero, $zero, 447
    ctx->pc = 0x276804u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276808:
    // 0x276808: 0x0  nop
    ctx->pc = 0x276808u;
    // NOP
label_27680c:
    // 0x27680c: 0x0  nop
    ctx->pc = 0x27680cu;
    // NOP
label_276810:
    // 0x276810: 0xdfc7  .word       0x0000DFC7                   # srav        $k1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276810u;
    SET_GPR_S32(ctx, 27, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_276814:
    // 0x276814: 0x5d90  .word       0x00005D90                   # mfhi        $t3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276814u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_276818:
    // 0x276818: 0x0  nop
    ctx->pc = 0x276818u;
    // NOP
label_27681c:
    // 0x27681c: 0x0  nop
    ctx->pc = 0x27681cu;
    // NOP
label_276820:
    // 0x276820: 0xdfd3  .word       0x0000DFD3                   # mtlo        $zero # 0000DFC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276820u;
    ctx->lo = GPR_U64(ctx, 0);
label_276824:
    // 0x276824: 0xb3d0  .word       0x0000B3D0                   # mfhi        $s6 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276824u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_276828:
    // 0x276828: 0x0  nop
    ctx->pc = 0x276828u;
    // NOP
label_27682c:
    // 0x27682c: 0x0  nop
    ctx->pc = 0x27682cu;
    // NOP
label_276830:
    // 0x276830: 0xdfea  .word       0x0000DFEA                   # slt         $k1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276830u;
    SET_GPR_U64(ctx, 27, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_276834:
    // 0x276834: 0x65a0  .word       0x000065A0                   # add         $t4, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276834u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_276838:
    // 0x276838: 0x0  nop
    ctx->pc = 0x276838u;
    // NOP
label_27683c:
    // 0x27683c: 0x0  nop
    ctx->pc = 0x27683cu;
    // NOP
label_276840:
    // 0x276840: 0xdff7  .word       0x0000DFF7                   # INVALID     $zero, $zero, -0x2009 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276840u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x276840 raw=0x0000DFF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276844:
    // 0x276844: 0xfb20  .word       0x0000FB20                   # add         $ra, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
    ctx->pc = 0x276848u;
    return;
}
