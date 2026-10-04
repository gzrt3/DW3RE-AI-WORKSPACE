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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part449(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x276848u: goto label_276848;
        case 0x27684cu: goto label_27684c;
        case 0x276850u: goto label_276850;
        case 0x276854u: goto label_276854;
        case 0x276858u: goto label_276858;
        case 0x27685cu: goto label_27685c;
        case 0x276860u: goto label_276860;
        case 0x276864u: goto label_276864;
        case 0x276868u: goto label_276868;
        case 0x27686cu: goto label_27686c;
        case 0x276870u: goto label_276870;
        case 0x276874u: goto label_276874;
        case 0x276878u: goto label_276878;
        case 0x27687cu: goto label_27687c;
        case 0x276880u: goto label_276880;
        case 0x276884u: goto label_276884;
        case 0x276888u: goto label_276888;
        case 0x27688cu: goto label_27688c;
        case 0x276890u: goto label_276890;
        case 0x276894u: goto label_276894;
        case 0x276898u: goto label_276898;
        case 0x27689cu: goto label_27689c;
        case 0x2768a0u: goto label_2768a0;
        case 0x2768a4u: goto label_2768a4;
        case 0x2768a8u: goto label_2768a8;
        case 0x2768acu: goto label_2768ac;
        case 0x2768b0u: goto label_2768b0;
        case 0x2768b4u: goto label_2768b4;
        case 0x2768b8u: goto label_2768b8;
        case 0x2768bcu: goto label_2768bc;
        case 0x2768c0u: goto label_2768c0;
        case 0x2768c4u: goto label_2768c4;
        case 0x2768c8u: goto label_2768c8;
        case 0x2768ccu: goto label_2768cc;
        case 0x2768d0u: goto label_2768d0;
        case 0x2768d4u: goto label_2768d4;
        case 0x2768d8u: goto label_2768d8;
        case 0x2768dcu: goto label_2768dc;
        case 0x2768e0u: goto label_2768e0;
        case 0x2768e4u: goto label_2768e4;
        case 0x2768e8u: goto label_2768e8;
        case 0x2768ecu: goto label_2768ec;
        case 0x2768f0u: goto label_2768f0;
        case 0x2768f4u: goto label_2768f4;
        case 0x2768f8u: goto label_2768f8;
        case 0x2768fcu: goto label_2768fc;
        case 0x276900u: goto label_276900;
        case 0x276904u: goto label_276904;
        case 0x276908u: goto label_276908;
        case 0x27690cu: goto label_27690c;
        case 0x276910u: goto label_276910;
        case 0x276914u: goto label_276914;
        case 0x276918u: goto label_276918;
        case 0x27691cu: goto label_27691c;
        case 0x276920u: goto label_276920;
        case 0x276924u: goto label_276924;
        case 0x276928u: goto label_276928;
        case 0x27692cu: goto label_27692c;
        case 0x276930u: goto label_276930;
        case 0x276934u: goto label_276934;
        case 0x276938u: goto label_276938;
        case 0x27693cu: goto label_27693c;
        case 0x276940u: goto label_276940;
        case 0x276944u: goto label_276944;
        case 0x276948u: goto label_276948;
        case 0x27694cu: goto label_27694c;
        case 0x276950u: goto label_276950;
        case 0x276954u: goto label_276954;
        case 0x276958u: goto label_276958;
        case 0x27695cu: goto label_27695c;
        case 0x276960u: goto label_276960;
        case 0x276964u: goto label_276964;
        case 0x276968u: goto label_276968;
        case 0x27696cu: goto label_27696c;
        case 0x276970u: goto label_276970;
        case 0x276974u: goto label_276974;
        case 0x276978u: goto label_276978;
        case 0x27697cu: goto label_27697c;
        case 0x276980u: goto label_276980;
        case 0x276984u: goto label_276984;
        case 0x276988u: goto label_276988;
        case 0x27698cu: goto label_27698c;
        case 0x276990u: goto label_276990;
        case 0x276994u: goto label_276994;
        case 0x276998u: goto label_276998;
        case 0x27699cu: goto label_27699c;
        case 0x2769a0u: goto label_2769a0;
        case 0x2769a4u: goto label_2769a4;
        case 0x2769a8u: goto label_2769a8;
        case 0x2769acu: goto label_2769ac;
        case 0x2769b0u: goto label_2769b0;
        case 0x2769b4u: goto label_2769b4;
        case 0x2769b8u: goto label_2769b8;
        case 0x2769bcu: goto label_2769bc;
        case 0x2769c0u: goto label_2769c0;
        case 0x2769c4u: goto label_2769c4;
        case 0x2769c8u: goto label_2769c8;
        case 0x2769ccu: goto label_2769cc;
        case 0x2769d0u: goto label_2769d0;
        case 0x2769d4u: goto label_2769d4;
        case 0x2769d8u: goto label_2769d8;
        case 0x2769dcu: goto label_2769dc;
        case 0x2769e0u: goto label_2769e0;
        case 0x2769e4u: goto label_2769e4;
        case 0x2769e8u: goto label_2769e8;
        case 0x2769ecu: goto label_2769ec;
        case 0x2769f0u: goto label_2769f0;
        case 0x2769f4u: goto label_2769f4;
        case 0x2769f8u: goto label_2769f8;
        case 0x2769fcu: goto label_2769fc;
        case 0x276a00u: goto label_276a00;
        case 0x276a04u: goto label_276a04;
        case 0x276a08u: goto label_276a08;
        case 0x276a0cu: goto label_276a0c;
        case 0x276a10u: goto label_276a10;
        case 0x276a14u: goto label_276a14;
        case 0x276a18u: goto label_276a18;
        case 0x276a1cu: goto label_276a1c;
        case 0x276a20u: goto label_276a20;
        case 0x276a24u: goto label_276a24;
        case 0x276a28u: goto label_276a28;
        case 0x276a2cu: goto label_276a2c;
        case 0x276a30u: goto label_276a30;
        case 0x276a34u: goto label_276a34;
        case 0x276a38u: goto label_276a38;
        case 0x276a3cu: goto label_276a3c;
        case 0x276a40u: goto label_276a40;
        case 0x276a44u: goto label_276a44;
        case 0x276a48u: goto label_276a48;
        case 0x276a4cu: goto label_276a4c;
        case 0x276a50u: goto label_276a50;
        case 0x276a54u: goto label_276a54;
        case 0x276a58u: goto label_276a58;
        case 0x276a5cu: goto label_276a5c;
        case 0x276a60u: goto label_276a60;
        case 0x276a64u: goto label_276a64;
        case 0x276a68u: goto label_276a68;
        case 0x276a6cu: goto label_276a6c;
        case 0x276a70u: goto label_276a70;
        case 0x276a74u: goto label_276a74;
        case 0x276a78u: goto label_276a78;
        case 0x276a7cu: goto label_276a7c;
        case 0x276a80u: goto label_276a80;
        case 0x276a84u: goto label_276a84;
        case 0x276a88u: goto label_276a88;
        case 0x276a8cu: goto label_276a8c;
        case 0x276a90u: goto label_276a90;
        case 0x276a94u: goto label_276a94;
        case 0x276a98u: goto label_276a98;
        case 0x276a9cu: goto label_276a9c;
        case 0x276aa0u: goto label_276aa0;
        case 0x276aa4u: goto label_276aa4;
        case 0x276aa8u: goto label_276aa8;
        case 0x276aacu: goto label_276aac;
        case 0x276ab0u: goto label_276ab0;
        case 0x276ab4u: goto label_276ab4;
        case 0x276ab8u: goto label_276ab8;
        case 0x276abcu: goto label_276abc;
        case 0x276ac0u: goto label_276ac0;
        case 0x276ac4u: goto label_276ac4;
        case 0x276ac8u: goto label_276ac8;
        case 0x276accu: goto label_276acc;
        case 0x276ad0u: goto label_276ad0;
        case 0x276ad4u: goto label_276ad4;
        case 0x276ad8u: goto label_276ad8;
        case 0x276adcu: goto label_276adc;
        case 0x276ae0u: goto label_276ae0;
        case 0x276ae4u: goto label_276ae4;
        case 0x276ae8u: goto label_276ae8;
        case 0x276aecu: goto label_276aec;
        case 0x276af0u: goto label_276af0;
        case 0x276af4u: goto label_276af4;
        case 0x276af8u: goto label_276af8;
        case 0x276afcu: goto label_276afc;
        case 0x276b00u: goto label_276b00;
        case 0x276b04u: goto label_276b04;
        case 0x276b08u: goto label_276b08;
        case 0x276b0cu: goto label_276b0c;
        case 0x276b10u: goto label_276b10;
        case 0x276b14u: goto label_276b14;
        case 0x276b18u: goto label_276b18;
        case 0x276b1cu: goto label_276b1c;
        case 0x276b20u: goto label_276b20;
        case 0x276b24u: goto label_276b24;
        case 0x276b28u: goto label_276b28;
        case 0x276b2cu: goto label_276b2c;
        case 0x276b30u: goto label_276b30;
        case 0x276b34u: goto label_276b34;
        case 0x276b38u: goto label_276b38;
        case 0x276b3cu: goto label_276b3c;
        case 0x276b40u: goto label_276b40;
        case 0x276b44u: goto label_276b44;
        case 0x276b48u: goto label_276b48;
        case 0x276b4cu: goto label_276b4c;
        case 0x276b50u: goto label_276b50;
        case 0x276b54u: goto label_276b54;
        case 0x276b58u: goto label_276b58;
        case 0x276b5cu: goto label_276b5c;
        case 0x276b60u: goto label_276b60;
        case 0x276b64u: goto label_276b64;
        case 0x276b68u: goto label_276b68;
        case 0x276b6cu: goto label_276b6c;
        case 0x276b70u: goto label_276b70;
        case 0x276b74u: goto label_276b74;
        case 0x276b78u: goto label_276b78;
        case 0x276b7cu: goto label_276b7c;
        case 0x276b80u: goto label_276b80;
        case 0x276b84u: goto label_276b84;
        case 0x276b88u: goto label_276b88;
        case 0x276b8cu: goto label_276b8c;
        case 0x276b90u: goto label_276b90;
        case 0x276b94u: goto label_276b94;
        case 0x276b98u: goto label_276b98;
        case 0x276b9cu: goto label_276b9c;
        case 0x276ba0u: goto label_276ba0;
        case 0x276ba4u: goto label_276ba4;
        case 0x276ba8u: goto label_276ba8;
        case 0x276bacu: goto label_276bac;
        case 0x276bb0u: goto label_276bb0;
        case 0x276bb4u: goto label_276bb4;
        case 0x276bb8u: goto label_276bb8;
        case 0x276bbcu: goto label_276bbc;
        case 0x276bc0u: goto label_276bc0;
        case 0x276bc4u: goto label_276bc4;
        case 0x276bc8u: goto label_276bc8;
        case 0x276bccu: goto label_276bcc;
        case 0x276bd0u: goto label_276bd0;
        case 0x276bd4u: goto label_276bd4;
        case 0x276bd8u: goto label_276bd8;
        case 0x276bdcu: goto label_276bdc;
        case 0x276be0u: goto label_276be0;
        case 0x276be4u: goto label_276be4;
        case 0x276be8u: goto label_276be8;
        case 0x276becu: goto label_276bec;
        case 0x276bf0u: goto label_276bf0;
        case 0x276bf4u: goto label_276bf4;
        case 0x276bf8u: goto label_276bf8;
        case 0x276bfcu: goto label_276bfc;
        case 0x276c00u: goto label_276c00;
        case 0x276c04u: goto label_276c04;
        case 0x276c08u: goto label_276c08;
        case 0x276c0cu: goto label_276c0c;
        case 0x276c10u: goto label_276c10;
        case 0x276c14u: goto label_276c14;
        case 0x276c18u: goto label_276c18;
        case 0x276c1cu: goto label_276c1c;
        default: return;
    }

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
label_276848:
    // 0x276848: 0x0  nop
    ctx->pc = 0x276848u;
    // NOP
label_27684c:
    // 0x27684c: 0x0  nop
    ctx->pc = 0x27684cu;
    // NOP
label_276850:
    // 0x276850: 0xe017  dsrav       $gp, $zero, $zero
    ctx->pc = 0x276850u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_276854:
    // 0x276854: 0xb9a0  .word       0x0000B9A0                   # add         $s7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_276858:
    // 0x276858: 0x0  nop
    ctx->pc = 0x276858u;
    // NOP
label_27685c:
    // 0x27685c: 0x0  nop
    ctx->pc = 0x27685cu;
    // NOP
label_276860:
    // 0x276860: 0xe02f  dsubu       $gp, $zero, $zero
    ctx->pc = 0x276860u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_276864:
    // 0x276864: 0x57b0  tge         $zero, $zero, 350
    ctx->pc = 0x276864u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276868:
    // 0x276868: 0x0  nop
    ctx->pc = 0x276868u;
    // NOP
label_27686c:
    // 0x27686c: 0x0  nop
    ctx->pc = 0x27686cu;
    // NOP
label_276870:
    // 0x276870: 0xe03a  dsrl        $gp, $zero, 0
    ctx->pc = 0x276870u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) >> 0);
label_276874:
    // 0x276874: 0xa0d0  .word       0x0000A0D0                   # mfhi        $s4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276874u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_276878:
    // 0x276878: 0x0  nop
    ctx->pc = 0x276878u;
    // NOP
label_27687c:
    // 0x27687c: 0x0  nop
    ctx->pc = 0x27687cu;
    // NOP
label_276880:
    // 0x276880: 0xe04f  .word       0x0000E04F                   # sync # 0000E000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276880u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_276884:
    // 0x276884: 0x28f0  tge         $zero, $zero, 163
    ctx->pc = 0x276884u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276888:
    // 0x276888: 0x0  nop
    ctx->pc = 0x276888u;
    // NOP
label_27688c:
    // 0x27688c: 0x0  nop
    ctx->pc = 0x27688cu;
    // NOP
label_276890:
    // 0x276890: 0xe055  .word       0x0000E055                   # INVALID     $zero, $zero, -0x1FAB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276890u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x276890 raw=0x0000E055"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276894:
    // 0x276894: 0x3ca0  .word       0x00003CA0                   # add         $a3, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276894u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_276898:
    // 0x276898: 0x0  nop
    ctx->pc = 0x276898u;
    // NOP
label_27689c:
    // 0x27689c: 0x0  nop
    ctx->pc = 0x27689cu;
    // NOP
label_2768a0:
    // 0x2768a0: 0xe05d  .word       0x0000E05D                   # dmultu      $zero, $zero # 0000E040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2768a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2768A0 raw=0x0000E05D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2768a4:
    // 0x2768a4: 0x63e0  .word       0x000063E0                   # add         $t4, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2768a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2768a8:
    // 0x2768a8: 0x0  nop
    ctx->pc = 0x2768a8u;
    // NOP
label_2768ac:
    // 0x2768ac: 0x0  nop
    ctx->pc = 0x2768acu;
    // NOP
label_2768b0:
    // 0x2768b0: 0xe06a  .word       0x0000E06A                   # slt         $gp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2768b0u;
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2768b4:
    // 0x2768b4: 0x5b60  .word       0x00005B60                   # add         $t3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2768b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2768b8:
    // 0x2768b8: 0x0  nop
    ctx->pc = 0x2768b8u;
    // NOP
label_2768bc:
    // 0x2768bc: 0x0  nop
    ctx->pc = 0x2768bcu;
    // NOP
label_2768c0:
    // 0x2768c0: 0xe076  tne         $zero, $zero, 897
    ctx->pc = 0x2768c0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2768c4:
    // 0x2768c4: 0x63c0  sll         $t4, $zero, 15
    ctx->pc = 0x2768c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_2768c8:
    // 0x2768c8: 0x0  nop
    ctx->pc = 0x2768c8u;
    // NOP
label_2768cc:
    // 0x2768cc: 0x0  nop
    ctx->pc = 0x2768ccu;
    // NOP
label_2768d0:
    // 0x2768d0: 0xe083  sra         $gp, $zero, 2
    ctx->pc = 0x2768d0u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 0), 2));
label_2768d4:
    // 0x2768d4: 0x63c0  sll         $t4, $zero, 15
    ctx->pc = 0x2768d4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_2768d8:
    // 0x2768d8: 0x0  nop
    ctx->pc = 0x2768d8u;
    // NOP
label_2768dc:
    // 0x2768dc: 0x0  nop
    ctx->pc = 0x2768dcu;
    // NOP
label_2768e0:
    // 0x2768e0: 0xe090  .word       0x0000E090                   # mfhi        $gp # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2768e0u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2768e4:
    // 0x2768e4: 0x4480  sll         $t0, $zero, 18
    ctx->pc = 0x2768e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2768e8:
    // 0x2768e8: 0x0  nop
    ctx->pc = 0x2768e8u;
    // NOP
label_2768ec:
    // 0x2768ec: 0x0  nop
    ctx->pc = 0x2768ecu;
    // NOP
label_2768f0:
    // 0x2768f0: 0xe099  .word       0x0000E099                   # multu       $zero, $zero # 0000E080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2768f0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_2768f4:
    // 0x2768f4: 0x7650  .word       0x00007650                   # mfhi        $t6 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2768f4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2768f8:
    // 0x2768f8: 0x0  nop
    ctx->pc = 0x2768f8u;
    // NOP
label_2768fc:
    // 0x2768fc: 0x0  nop
    ctx->pc = 0x2768fcu;
    // NOP
label_276900:
    // 0x276900: 0xe0a8  .word       0x0000E0A8                   # mfsa        $gp # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x276900u;
    SET_GPR_U32(ctx, 28, ctx->sa);
label_276904:
    // 0x276904: 0x4da0  .word       0x00004DA0                   # add         $t1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276904u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_276908:
    // 0x276908: 0x0  nop
    ctx->pc = 0x276908u;
    // NOP
label_27690c:
    // 0x27690c: 0x0  nop
    ctx->pc = 0x27690cu;
    // NOP
label_276910:
    // 0x276910: 0xe0b2  tlt         $zero, $zero, 898
    ctx->pc = 0x276910u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276914:
    // 0x276914: 0x3b70  tge         $zero, $zero, 237
    ctx->pc = 0x276914u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276918:
    // 0x276918: 0x0  nop
    ctx->pc = 0x276918u;
    // NOP
label_27691c:
    // 0x27691c: 0x0  nop
    ctx->pc = 0x27691cu;
    // NOP
label_276920:
    // 0x276920: 0xe0ba  dsrl        $gp, $zero, 2
    ctx->pc = 0x276920u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) >> 2);
label_276924:
    // 0x276924: 0x4780  sll         $t0, $zero, 30
    ctx->pc = 0x276924u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_276928:
    // 0x276928: 0x0  nop
    ctx->pc = 0x276928u;
    // NOP
label_27692c:
    // 0x27692c: 0x0  nop
    ctx->pc = 0x27692cu;
    // NOP
label_276930:
    // 0x276930: 0xe0c3  sra         $gp, $zero, 3
    ctx->pc = 0x276930u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 0), 3));
label_276934:
    // 0x276934: 0x5860  .word       0x00005860                   # add         $t3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276934u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_276938:
    // 0x276938: 0x0  nop
    ctx->pc = 0x276938u;
    // NOP
label_27693c:
    // 0x27693c: 0x0  nop
    ctx->pc = 0x27693cu;
    // NOP
label_276940:
    // 0x276940: 0xe0cf  .word       0x0000E0CF                   # sync # 0000E000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276940u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_276944:
    // 0x276944: 0x3b50  .word       0x00003B50                   # mfhi        $a3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276944u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_276948:
    // 0x276948: 0x0  nop
    ctx->pc = 0x276948u;
    // NOP
label_27694c:
    // 0x27694c: 0x0  nop
    ctx->pc = 0x27694cu;
    // NOP
label_276950:
    // 0x276950: 0xe0d7  .word       0x0000E0D7                   # dsrav       $gp, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276950u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_276954:
    // 0x276954: 0x4260  .word       0x00004260                   # add         $t0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_276958:
    // 0x276958: 0x0  nop
    ctx->pc = 0x276958u;
    // NOP
label_27695c:
    // 0x27695c: 0x0  nop
    ctx->pc = 0x27695cu;
    // NOP
label_276960:
    // 0x276960: 0xe0e0  .word       0x0000E0E0                   # add         $gp, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276960u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_276964:
    // 0x276964: 0x2da0  .word       0x00002DA0                   # add         $a1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276964u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_276968:
    // 0x276968: 0x0  nop
    ctx->pc = 0x276968u;
    // NOP
label_27696c:
    // 0x27696c: 0x0  nop
    ctx->pc = 0x27696cu;
    // NOP
label_276970:
    // 0x276970: 0xe0e6  .word       0x0000E0E6                   # xor         $gp, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276970u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_276974:
    // 0x276974: 0x3d90  .word       0x00003D90                   # mfhi        $a3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276974u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_276978:
    // 0x276978: 0x0  nop
    ctx->pc = 0x276978u;
    // NOP
label_27697c:
    // 0x27697c: 0x0  nop
    ctx->pc = 0x27697cu;
    // NOP
label_276980:
    // 0x276980: 0xe0ee  .word       0x0000E0EE                   # dsub        $gp, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276980u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_276984:
    // 0x276984: 0x3d00  sll         $a3, $zero, 20
    ctx->pc = 0x276984u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_276988:
    // 0x276988: 0x0  nop
    ctx->pc = 0x276988u;
    // NOP
label_27698c:
    // 0x27698c: 0x0  nop
    ctx->pc = 0x27698cu;
    // NOP
label_276990:
    // 0x276990: 0xe0f6  tne         $zero, $zero, 899
    ctx->pc = 0x276990u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276994:
    // 0x276994: 0x7450  .word       0x00007450                   # mfhi        $t6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276994u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_276998:
    // 0x276998: 0x0  nop
    ctx->pc = 0x276998u;
    // NOP
label_27699c:
    // 0x27699c: 0x0  nop
    ctx->pc = 0x27699cu;
    // NOP
label_2769a0:
    // 0x2769a0: 0xe105  .word       0x0000E105                   # INVALID     $zero, $zero, -0x1EFB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2769a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2769A0 raw=0x0000E105"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2769a4:
    // 0x2769a4: 0x6ae0  .word       0x00006AE0                   # add         $t5, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2769a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2769a8:
    // 0x2769a8: 0x0  nop
    ctx->pc = 0x2769a8u;
    // NOP
label_2769ac:
    // 0x2769ac: 0x0  nop
    ctx->pc = 0x2769acu;
    // NOP
label_2769b0:
    // 0x2769b0: 0xe113  .word       0x0000E113                   # mtlo        $zero # 0000E100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2769b0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2769b4:
    // 0x2769b4: 0x5140  sll         $t2, $zero, 5
    ctx->pc = 0x2769b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2769b8:
    // 0x2769b8: 0x0  nop
    ctx->pc = 0x2769b8u;
    // NOP
label_2769bc:
    // 0x2769bc: 0x0  nop
    ctx->pc = 0x2769bcu;
    // NOP
label_2769c0:
    // 0x2769c0: 0xe11e  .word       0x0000E11E                   # ddiv        $gp, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2769c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2769C0 raw=0x0000E11E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2769c4:
    // 0x2769c4: 0x6540  sll         $t4, $zero, 21
    ctx->pc = 0x2769c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_2769c8:
    // 0x2769c8: 0x0  nop
    ctx->pc = 0x2769c8u;
    // NOP
label_2769cc:
    // 0x2769cc: 0x0  nop
    ctx->pc = 0x2769ccu;
    // NOP
label_2769d0:
    // 0x2769d0: 0xe12b  .word       0x0000E12B                   # sltu        $gp, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2769d0u;
    SET_GPR_U64(ctx, 28, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2769d4:
    // 0x2769d4: 0x6f90  .word       0x00006F90                   # mfhi        $t5 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2769d4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2769d8:
    // 0x2769d8: 0x0  nop
    ctx->pc = 0x2769d8u;
    // NOP
label_2769dc:
    // 0x2769dc: 0x0  nop
    ctx->pc = 0x2769dcu;
    // NOP
label_2769e0:
    // 0x2769e0: 0xe139  .word       0x0000E139                   # INVALID     $zero, $zero, -0x1EC7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2769e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2769E0 raw=0x0000E139"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2769e4:
    // 0x2769e4: 0x7b10  .word       0x00007B10                   # mfhi        $t7 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2769e4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2769e8:
    // 0x2769e8: 0x0  nop
    ctx->pc = 0x2769e8u;
    // NOP
label_2769ec:
    // 0x2769ec: 0x0  nop
    ctx->pc = 0x2769ecu;
    // NOP
label_2769f0:
    // 0x2769f0: 0xe149  .word       0x0000E149                   # jalr        $gp, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
label_2769f4:
    if (ctx->pc == 0x2769F4u) {
        ctx->pc = 0x2769F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769F0u;
        // 0x2769f4: 0x6280  sll         $t4, $zero, 10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2769F8u;
        goto label_2769f8;
    }
    ctx->pc = 0x2769F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 28, 0x2769F8u);
        ctx->pc = 0x2769F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769F0u;
        // 0x2769f4: 0x6280  sll         $t4, $zero, 10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2769F0u, 0x2769F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2769F8u;
label_2769f8:
    // 0x2769f8: 0x0  nop
    ctx->pc = 0x2769f8u;
    // NOP
label_2769fc:
    // 0x2769fc: 0x0  nop
    ctx->pc = 0x2769fcu;
    // NOP
label_276a00:
    // 0x276a00: 0xe156  .word       0x0000E156                   # dsrlv       $gp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276a00u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_276a04:
    // 0x276a04: 0x45b0  tge         $zero, $zero, 278
    ctx->pc = 0x276a04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276a08:
    // 0x276a08: 0x0  nop
    ctx->pc = 0x276a08u;
    // NOP
label_276a0c:
    // 0x276a0c: 0x0  nop
    ctx->pc = 0x276a0cu;
    // NOP
label_276a10:
    // 0x276a10: 0xe15f  .word       0x0000E15F                   # ddivu       $gp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276a10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x276A10 raw=0x0000E15F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276a14:
    // 0x276a14: 0x4410  .word       0x00004410                   # mfhi        $t0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276a14u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_276a18:
    // 0x276a18: 0x0  nop
    ctx->pc = 0x276a18u;
    // NOP
label_276a1c:
    // 0x276a1c: 0x0  nop
    ctx->pc = 0x276a1cu;
    // NOP
label_276a20:
    // 0x276a20: 0xe168  .word       0x0000E168                   # mfsa        $gp # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x276a20u;
    SET_GPR_U32(ctx, 28, ctx->sa);
label_276a24:
    // 0x276a24: 0x6ea0  .word       0x00006EA0                   # add         $t5, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276a24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_276a28:
    // 0x276a28: 0x0  nop
    ctx->pc = 0x276a28u;
    // NOP
label_276a2c:
    // 0x276a2c: 0x0  nop
    ctx->pc = 0x276a2cu;
    // NOP
label_276a30:
    // 0x276a30: 0xe176  tne         $zero, $zero, 901
    ctx->pc = 0x276a30u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276a34:
    // 0x276a34: 0x44f0  tge         $zero, $zero, 275
    ctx->pc = 0x276a34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276a38:
    // 0x276a38: 0x0  nop
    ctx->pc = 0x276a38u;
    // NOP
label_276a3c:
    // 0x276a3c: 0x0  nop
    ctx->pc = 0x276a3cu;
    // NOP
label_276a40:
    // 0x276a40: 0xe17f  dsra32      $gp, $zero, 5
    ctx->pc = 0x276a40u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 5));
label_276a44:
    // 0x276a44: 0x29d0  .word       0x000029D0                   # mfhi        $a1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276a44u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_276a48:
    // 0x276a48: 0x0  nop
    ctx->pc = 0x276a48u;
    // NOP
label_276a4c:
    // 0x276a4c: 0x0  nop
    ctx->pc = 0x276a4cu;
    // NOP
label_276a50:
    // 0x276a50: 0xe185  .word       0x0000E185                   # INVALID     $zero, $zero, -0x1E7B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276a50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x276A50 raw=0x0000E185"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276a54:
    // 0x276a54: 0x5880  sll         $t3, $zero, 2
    ctx->pc = 0x276a54u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_276a58:
    // 0x276a58: 0x0  nop
    ctx->pc = 0x276a58u;
    // NOP
label_276a5c:
    // 0x276a5c: 0x0  nop
    ctx->pc = 0x276a5cu;
    // NOP
label_276a60:
    // 0x276a60: 0xe191  .word       0x0000E191                   # mthi        $zero # 0000E180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276a60u;
    ctx->hi = GPR_U64(ctx, 0);
label_276a64:
    // 0x276a64: 0x7410  .word       0x00007410                   # mfhi        $t6 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276a64u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_276a68:
    // 0x276a68: 0x0  nop
    ctx->pc = 0x276a68u;
    // NOP
label_276a6c:
    // 0x276a6c: 0x0  nop
    ctx->pc = 0x276a6cu;
    // NOP
label_276a70:
    // 0x276a70: 0xe1a0  .word       0x0000E1A0                   # add         $gp, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276a70u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_276a74:
    // 0x276a74: 0x42f0  tge         $zero, $zero, 267
    ctx->pc = 0x276a74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276a78:
    // 0x276a78: 0x0  nop
    ctx->pc = 0x276a78u;
    // NOP
label_276a7c:
    // 0x276a7c: 0x0  nop
    ctx->pc = 0x276a7cu;
    // NOP
label_276a80:
    // 0x276a80: 0xe1a9  .word       0x0000E1A9                   # mtsa        $zero # 0000E180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x276a80u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_276a84:
    // 0x276a84: 0x4200  sll         $t0, $zero, 8
    ctx->pc = 0x276a84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_276a88:
    // 0x276a88: 0x0  nop
    ctx->pc = 0x276a88u;
    // NOP
label_276a8c:
    // 0x276a8c: 0x0  nop
    ctx->pc = 0x276a8cu;
    // NOP
label_276a90:
    // 0x276a90: 0xe1b2  tlt         $zero, $zero, 902
    ctx->pc = 0x276a90u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276a94:
    // 0x276a94: 0x32a0  .word       0x000032A0                   # add         $a2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276a94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_276a98:
    // 0x276a98: 0x0  nop
    ctx->pc = 0x276a98u;
    // NOP
label_276a9c:
    // 0x276a9c: 0x0  nop
    ctx->pc = 0x276a9cu;
    // NOP
label_276aa0:
    // 0x276aa0: 0xe1b9  .word       0x0000E1B9                   # INVALID     $zero, $zero, -0x1E47 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276aa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x276AA0 raw=0x0000E1B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276aa4:
    // 0x276aa4: 0x4260  .word       0x00004260                   # add         $t0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276aa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_276aa8:
    // 0x276aa8: 0x0  nop
    ctx->pc = 0x276aa8u;
    // NOP
label_276aac:
    // 0x276aac: 0x0  nop
    ctx->pc = 0x276aacu;
    // NOP
label_276ab0:
    // 0x276ab0: 0xe1c2  srl         $gp, $zero, 7
    ctx->pc = 0x276ab0u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 0), 7));
label_276ab4:
    // 0x276ab4: 0x4240  sll         $t0, $zero, 9
    ctx->pc = 0x276ab4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_276ab8:
    // 0x276ab8: 0x0  nop
    ctx->pc = 0x276ab8u;
    // NOP
label_276abc:
    // 0x276abc: 0x0  nop
    ctx->pc = 0x276abcu;
    // NOP
label_276ac0:
    // 0x276ac0: 0xe1cb  .word       0x0000E1CB                   # movn        $gp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276ac0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 0));
label_276ac4:
    // 0x276ac4: 0x68a0  .word       0x000068A0                   # add         $t5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276ac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_276ac8:
    // 0x276ac8: 0x0  nop
    ctx->pc = 0x276ac8u;
    // NOP
label_276acc:
    // 0x276acc: 0x0  nop
    ctx->pc = 0x276accu;
    // NOP
label_276ad0:
    // 0x276ad0: 0xe1d9  .word       0x0000E1D9                   # multu       $zero, $zero # 0000E1C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276ad0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_276ad4:
    // 0x276ad4: 0x6b80  sll         $t5, $zero, 14
    ctx->pc = 0x276ad4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_276ad8:
    // 0x276ad8: 0x0  nop
    ctx->pc = 0x276ad8u;
    // NOP
label_276adc:
    // 0x276adc: 0x0  nop
    ctx->pc = 0x276adcu;
    // NOP
label_276ae0:
    // 0x276ae0: 0xe1e7  .word       0x0000E1E7                   # not         $gp, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276ae0u;
    SET_GPR_U64(ctx, 28, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_276ae4:
    // 0x276ae4: 0x8180  sll         $s0, $zero, 6
    ctx->pc = 0x276ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_276ae8:
    // 0x276ae8: 0x0  nop
    ctx->pc = 0x276ae8u;
    // NOP
label_276aec:
    // 0x276aec: 0x0  nop
    ctx->pc = 0x276aecu;
    // NOP
label_276af0:
    // 0x276af0: 0xe1f8  dsll        $gp, $zero, 7
    ctx->pc = 0x276af0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) << 7);
label_276af4:
    // 0x276af4: 0x9dd0  .word       0x00009DD0                   # mfhi        $s3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276af4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_276af8:
    // 0x276af8: 0x0  nop
    ctx->pc = 0x276af8u;
    // NOP
label_276afc:
    // 0x276afc: 0x0  nop
    ctx->pc = 0x276afcu;
    // NOP
label_276b00:
    // 0x276b00: 0xe20c  syscall     904
    ctx->pc = 0x276b00u;
    ctx->pc = 0x276B04u;
runtime->handleSyscall(rdram, ctx, 0x388u);
label_276b04:
    // 0x276b04: 0xa1e0  .word       0x0000A1E0                   # add         $s4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276b04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_276b08:
    // 0x276b08: 0x0  nop
    ctx->pc = 0x276b08u;
    // NOP
label_276b0c:
    // 0x276b0c: 0x0  nop
    ctx->pc = 0x276b0cu;
    // NOP
label_276b10:
    // 0x276b10: 0xe221  .word       0x0000E221                   # addu        $gp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276b10u;
    SET_GPR_S32(ctx, 28, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_276b14:
    // 0x276b14: 0x5bc0  sll         $t3, $zero, 15
    ctx->pc = 0x276b14u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_276b18:
    // 0x276b18: 0x0  nop
    ctx->pc = 0x276b18u;
    // NOP
label_276b1c:
    // 0x276b1c: 0x0  nop
    ctx->pc = 0x276b1cu;
    // NOP
label_276b20:
    // 0x276b20: 0xe22d  .word       0x0000E22D                   # daddu       $gp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276b20u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276b24:
    // 0x276b24: 0x9120  .word       0x00009120                   # add         $s2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276b24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_276b28:
    // 0x276b28: 0x0  nop
    ctx->pc = 0x276b28u;
    // NOP
label_276b2c:
    // 0x276b2c: 0x0  nop
    ctx->pc = 0x276b2cu;
    // NOP
label_276b30:
    // 0x276b30: 0xe240  sll         $gp, $zero, 9
    ctx->pc = 0x276b30u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_276b34:
    // 0x276b34: 0x6710  .word       0x00006710                   # mfhi        $t4 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276b34u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_276b38:
    // 0x276b38: 0x0  nop
    ctx->pc = 0x276b38u;
    // NOP
label_276b3c:
    // 0x276b3c: 0x0  nop
    ctx->pc = 0x276b3cu;
    // NOP
label_276b40:
    // 0x276b40: 0xe24d  break       0, 905
    ctx->pc = 0x276b40u;
    runtime->handleBreak(rdram, ctx);
label_276b44:
    // 0x276b44: 0xb280  sll         $s6, $zero, 10
    ctx->pc = 0x276b44u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_276b48:
    // 0x276b48: 0x0  nop
    ctx->pc = 0x276b48u;
    // NOP
label_276b4c:
    // 0x276b4c: 0x0  nop
    ctx->pc = 0x276b4cu;
    // NOP
label_276b50:
    // 0x276b50: 0xe264  .word       0x0000E264                   # and         $gp, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276b50u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_276b54:
    // 0x276b54: 0xb430  tge         $zero, $zero, 720
    ctx->pc = 0x276b54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276b58:
    // 0x276b58: 0x0  nop
    ctx->pc = 0x276b58u;
    // NOP
label_276b5c:
    // 0x276b5c: 0x0  nop
    ctx->pc = 0x276b5cu;
    // NOP
label_276b60:
    // 0x276b60: 0xe27b  dsra        $gp, $zero, 9
    ctx->pc = 0x276b60u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> 9);
label_276b64:
    // 0x276b64: 0x31c0  sll         $a2, $zero, 7
    ctx->pc = 0x276b64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_276b68:
    // 0x276b68: 0x0  nop
    ctx->pc = 0x276b68u;
    // NOP
label_276b6c:
    // 0x276b6c: 0x0  nop
    ctx->pc = 0x276b6cu;
    // NOP
label_276b70:
    // 0x276b70: 0xe282  srl         $gp, $zero, 10
    ctx->pc = 0x276b70u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 0), 10));
label_276b74:
    // 0x276b74: 0x2f80  sll         $a1, $zero, 30
    ctx->pc = 0x276b74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_276b78:
    // 0x276b78: 0x0  nop
    ctx->pc = 0x276b78u;
    // NOP
label_276b7c:
    // 0x276b7c: 0x0  nop
    ctx->pc = 0x276b7cu;
    // NOP
label_276b80:
    // 0x276b80: 0xe288  .word       0x0000E288                   # jr          $zero # 0000E280 <InstrIdType: CPU_SPECIAL>
label_276b84:
    if (ctx->pc == 0x276B84u) {
        ctx->pc = 0x276B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B80u;
        // 0x276b84: 0x8600  sll         $s0, $zero, 24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276B88u;
        goto label_276b88;
    }
    ctx->pc = 0x276B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x276B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B80u;
        // 0x276b84: 0x8600  sll         $s0, $zero, 24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276B80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x276B88u;
label_276b88:
    // 0x276b88: 0x0  nop
    ctx->pc = 0x276b88u;
    // NOP
label_276b8c:
    // 0x276b8c: 0x0  nop
    ctx->pc = 0x276b8cu;
    // NOP
label_276b90:
    // 0x276b90: 0xe299  .word       0x0000E299                   # multu       $zero, $zero # 0000E280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276b90u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_276b94:
    // 0x276b94: 0x57f0  tge         $zero, $zero, 351
    ctx->pc = 0x276b94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276b98:
    // 0x276b98: 0x0  nop
    ctx->pc = 0x276b98u;
    // NOP
label_276b9c:
    // 0x276b9c: 0x0  nop
    ctx->pc = 0x276b9cu;
    // NOP
label_276ba0:
    // 0x276ba0: 0xe2a4  .word       0x0000E2A4                   # and         $gp, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276ba0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_276ba4:
    // 0x276ba4: 0x6f20  .word       0x00006F20                   # add         $t5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276ba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_276ba8:
    // 0x276ba8: 0x0  nop
    ctx->pc = 0x276ba8u;
    // NOP
label_276bac:
    // 0x276bac: 0x0  nop
    ctx->pc = 0x276bacu;
    // NOP
label_276bb0:
    // 0x276bb0: 0xe2b2  tlt         $zero, $zero, 906
    ctx->pc = 0x276bb0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276bb4:
    // 0x276bb4: 0x7610  .word       0x00007610                   # mfhi        $t6 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276bb4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_276bb8:
    // 0x276bb8: 0x0  nop
    ctx->pc = 0x276bb8u;
    // NOP
label_276bbc:
    // 0x276bbc: 0x0  nop
    ctx->pc = 0x276bbcu;
    // NOP
label_276bc0:
    // 0x276bc0: 0xe2c1  .word       0x0000E2C1                   # INVALID     $zero, $zero, -0x1D3F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276bc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x276BC0 raw=0x0000E2C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276bc4:
    // 0x276bc4: 0x3470  tge         $zero, $zero, 209
    ctx->pc = 0x276bc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276bc8:
    // 0x276bc8: 0x0  nop
    ctx->pc = 0x276bc8u;
    // NOP
label_276bcc:
    // 0x276bcc: 0x0  nop
    ctx->pc = 0x276bccu;
    // NOP
label_276bd0:
    // 0x276bd0: 0xe2c8  .word       0x0000E2C8                   # jr          $zero # 0000E2C0 <InstrIdType: CPU_SPECIAL>
label_276bd4:
    if (ctx->pc == 0x276BD4u) {
        ctx->pc = 0x276BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BD0u;
        // 0x276bd4: 0x4440  sll         $t0, $zero, 17 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276BD8u;
        goto label_276bd8;
    }
    ctx->pc = 0x276BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x276BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BD0u;
        // 0x276bd4: 0x4440  sll         $t0, $zero, 17 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276BD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x276BD8u;
label_276bd8:
    // 0x276bd8: 0x0  nop
    ctx->pc = 0x276bd8u;
    // NOP
label_276bdc:
    // 0x276bdc: 0x0  nop
    ctx->pc = 0x276bdcu;
    // NOP
label_276be0:
    // 0x276be0: 0xe2d1  .word       0x0000E2D1                   # mthi        $zero # 0000E2C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276be0u;
    ctx->hi = GPR_U64(ctx, 0);
label_276be4:
    // 0x276be4: 0x6090  .word       0x00006090                   # mfhi        $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276be4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_276be8:
    // 0x276be8: 0x0  nop
    ctx->pc = 0x276be8u;
    // NOP
label_276bec:
    // 0x276bec: 0x0  nop
    ctx->pc = 0x276becu;
    // NOP
label_276bf0:
    // 0x276bf0: 0xe2de  .word       0x0000E2DE                   # ddiv        $gp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276bf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x276BF0 raw=0x0000E2DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_276bf4:
    // 0x276bf4: 0x3170  tge         $zero, $zero, 197
    ctx->pc = 0x276bf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276bf8:
    // 0x276bf8: 0x0  nop
    ctx->pc = 0x276bf8u;
    // NOP
label_276bfc:
    // 0x276bfc: 0x0  nop
    ctx->pc = 0x276bfcu;
    // NOP
label_276c00:
    // 0x276c00: 0xe2e5  .word       0x0000E2E5                   # move        $gp, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276c00u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_276c04:
    // 0x276c04: 0x59d0  .word       0x000059D0                   # mfhi        $t3 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276c04u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_276c08:
    // 0x276c08: 0x0  nop
    ctx->pc = 0x276c08u;
    // NOP
label_276c0c:
    // 0x276c0c: 0x0  nop
    ctx->pc = 0x276c0cu;
    // NOP
label_276c10:
    // 0x276c10: 0xe2f1  tgeu        $zero, $zero, 907
    ctx->pc = 0x276c10u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_276c14:
    // 0x276c14: 0x45d0  .word       0x000045D0                   # mfhi        $t0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276c14u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_276c18:
    // 0x276c18: 0x0  nop
    ctx->pc = 0x276c18u;
    // NOP
label_276c1c:
    // 0x276c1c: 0x0  nop
    ctx->pc = 0x276c1cu;
    // NOP
    ctx->pc = 0x276c20u;
    return;
}
