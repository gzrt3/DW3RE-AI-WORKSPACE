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

// Function: FUN_001e9120
// Address: 0x1e9120 - 0x2291f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001e9120_part126(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2261b0u: goto label_2261b0;
        case 0x2261b4u: goto label_2261b4;
        case 0x2261b8u: goto label_2261b8;
        case 0x2261bcu: goto label_2261bc;
        case 0x2261c0u: goto label_2261c0;
        case 0x2261c4u: goto label_2261c4;
        case 0x2261c8u: goto label_2261c8;
        case 0x2261ccu: goto label_2261cc;
        case 0x2261d0u: goto label_2261d0;
        case 0x2261d4u: goto label_2261d4;
        case 0x2261d8u: goto label_2261d8;
        case 0x2261dcu: goto label_2261dc;
        case 0x2261e0u: goto label_2261e0;
        case 0x2261e4u: goto label_2261e4;
        case 0x2261e8u: goto label_2261e8;
        case 0x2261ecu: goto label_2261ec;
        case 0x2261f0u: goto label_2261f0;
        case 0x2261f4u: goto label_2261f4;
        case 0x2261f8u: goto label_2261f8;
        case 0x2261fcu: goto label_2261fc;
        case 0x226200u: goto label_226200;
        case 0x226204u: goto label_226204;
        case 0x226208u: goto label_226208;
        case 0x22620cu: goto label_22620c;
        case 0x226210u: goto label_226210;
        case 0x226214u: goto label_226214;
        case 0x226218u: goto label_226218;
        case 0x22621cu: goto label_22621c;
        case 0x226220u: goto label_226220;
        case 0x226224u: goto label_226224;
        case 0x226228u: goto label_226228;
        case 0x22622cu: goto label_22622c;
        case 0x226230u: goto label_226230;
        case 0x226234u: goto label_226234;
        case 0x226238u: goto label_226238;
        case 0x22623cu: goto label_22623c;
        case 0x226240u: goto label_226240;
        case 0x226244u: goto label_226244;
        case 0x226248u: goto label_226248;
        case 0x22624cu: goto label_22624c;
        case 0x226250u: goto label_226250;
        case 0x226254u: goto label_226254;
        case 0x226258u: goto label_226258;
        case 0x22625cu: goto label_22625c;
        case 0x226260u: goto label_226260;
        case 0x226264u: goto label_226264;
        case 0x226268u: goto label_226268;
        case 0x22626cu: goto label_22626c;
        case 0x226270u: goto label_226270;
        case 0x226274u: goto label_226274;
        case 0x226278u: goto label_226278;
        case 0x22627cu: goto label_22627c;
        case 0x226280u: goto label_226280;
        case 0x226284u: goto label_226284;
        case 0x226288u: goto label_226288;
        case 0x22628cu: goto label_22628c;
        case 0x226290u: goto label_226290;
        case 0x226294u: goto label_226294;
        case 0x226298u: goto label_226298;
        case 0x22629cu: goto label_22629c;
        case 0x2262a0u: goto label_2262a0;
        case 0x2262a4u: goto label_2262a4;
        case 0x2262a8u: goto label_2262a8;
        case 0x2262acu: goto label_2262ac;
        case 0x2262b0u: goto label_2262b0;
        case 0x2262b4u: goto label_2262b4;
        case 0x2262b8u: goto label_2262b8;
        case 0x2262bcu: goto label_2262bc;
        case 0x2262c0u: goto label_2262c0;
        case 0x2262c4u: goto label_2262c4;
        case 0x2262c8u: goto label_2262c8;
        case 0x2262ccu: goto label_2262cc;
        case 0x2262d0u: goto label_2262d0;
        case 0x2262d4u: goto label_2262d4;
        case 0x2262d8u: goto label_2262d8;
        case 0x2262dcu: goto label_2262dc;
        case 0x2262e0u: goto label_2262e0;
        case 0x2262e4u: goto label_2262e4;
        case 0x2262e8u: goto label_2262e8;
        case 0x2262ecu: goto label_2262ec;
        case 0x2262f0u: goto label_2262f0;
        case 0x2262f4u: goto label_2262f4;
        case 0x2262f8u: goto label_2262f8;
        case 0x2262fcu: goto label_2262fc;
        case 0x226300u: goto label_226300;
        case 0x226304u: goto label_226304;
        case 0x226308u: goto label_226308;
        case 0x22630cu: goto label_22630c;
        case 0x226310u: goto label_226310;
        case 0x226314u: goto label_226314;
        case 0x226318u: goto label_226318;
        case 0x22631cu: goto label_22631c;
        case 0x226320u: goto label_226320;
        case 0x226324u: goto label_226324;
        case 0x226328u: goto label_226328;
        case 0x22632cu: goto label_22632c;
        case 0x226330u: goto label_226330;
        case 0x226334u: goto label_226334;
        case 0x226338u: goto label_226338;
        case 0x22633cu: goto label_22633c;
        case 0x226340u: goto label_226340;
        case 0x226344u: goto label_226344;
        case 0x226348u: goto label_226348;
        case 0x22634cu: goto label_22634c;
        case 0x226350u: goto label_226350;
        case 0x226354u: goto label_226354;
        case 0x226358u: goto label_226358;
        case 0x22635cu: goto label_22635c;
        case 0x226360u: goto label_226360;
        case 0x226364u: goto label_226364;
        case 0x226368u: goto label_226368;
        case 0x22636cu: goto label_22636c;
        case 0x226370u: goto label_226370;
        case 0x226374u: goto label_226374;
        case 0x226378u: goto label_226378;
        case 0x22637cu: goto label_22637c;
        case 0x226380u: goto label_226380;
        case 0x226384u: goto label_226384;
        case 0x226388u: goto label_226388;
        case 0x22638cu: goto label_22638c;
        case 0x226390u: goto label_226390;
        case 0x226394u: goto label_226394;
        case 0x226398u: goto label_226398;
        case 0x22639cu: goto label_22639c;
        case 0x2263a0u: goto label_2263a0;
        case 0x2263a4u: goto label_2263a4;
        case 0x2263a8u: goto label_2263a8;
        case 0x2263acu: goto label_2263ac;
        case 0x2263b0u: goto label_2263b0;
        case 0x2263b4u: goto label_2263b4;
        case 0x2263b8u: goto label_2263b8;
        case 0x2263bcu: goto label_2263bc;
        case 0x2263c0u: goto label_2263c0;
        case 0x2263c4u: goto label_2263c4;
        case 0x2263c8u: goto label_2263c8;
        case 0x2263ccu: goto label_2263cc;
        case 0x2263d0u: goto label_2263d0;
        case 0x2263d4u: goto label_2263d4;
        case 0x2263d8u: goto label_2263d8;
        case 0x2263dcu: goto label_2263dc;
        case 0x2263e0u: goto label_2263e0;
        case 0x2263e4u: goto label_2263e4;
        case 0x2263e8u: goto label_2263e8;
        case 0x2263ecu: goto label_2263ec;
        case 0x2263f0u: goto label_2263f0;
        case 0x2263f4u: goto label_2263f4;
        case 0x2263f8u: goto label_2263f8;
        case 0x2263fcu: goto label_2263fc;
        case 0x226400u: goto label_226400;
        case 0x226404u: goto label_226404;
        case 0x226408u: goto label_226408;
        case 0x22640cu: goto label_22640c;
        case 0x226410u: goto label_226410;
        case 0x226414u: goto label_226414;
        case 0x226418u: goto label_226418;
        case 0x22641cu: goto label_22641c;
        case 0x226420u: goto label_226420;
        case 0x226424u: goto label_226424;
        case 0x226428u: goto label_226428;
        case 0x22642cu: goto label_22642c;
        case 0x226430u: goto label_226430;
        case 0x226434u: goto label_226434;
        case 0x226438u: goto label_226438;
        case 0x22643cu: goto label_22643c;
        case 0x226440u: goto label_226440;
        case 0x226444u: goto label_226444;
        case 0x226448u: goto label_226448;
        case 0x22644cu: goto label_22644c;
        case 0x226450u: goto label_226450;
        case 0x226454u: goto label_226454;
        case 0x226458u: goto label_226458;
        case 0x22645cu: goto label_22645c;
        case 0x226460u: goto label_226460;
        case 0x226464u: goto label_226464;
        case 0x226468u: goto label_226468;
        case 0x22646cu: goto label_22646c;
        case 0x226470u: goto label_226470;
        case 0x226474u: goto label_226474;
        case 0x226478u: goto label_226478;
        case 0x22647cu: goto label_22647c;
        case 0x226480u: goto label_226480;
        case 0x226484u: goto label_226484;
        case 0x226488u: goto label_226488;
        case 0x22648cu: goto label_22648c;
        case 0x226490u: goto label_226490;
        case 0x226494u: goto label_226494;
        case 0x226498u: goto label_226498;
        case 0x22649cu: goto label_22649c;
        case 0x2264a0u: goto label_2264a0;
        case 0x2264a4u: goto label_2264a4;
        case 0x2264a8u: goto label_2264a8;
        case 0x2264acu: goto label_2264ac;
        case 0x2264b0u: goto label_2264b0;
        case 0x2264b4u: goto label_2264b4;
        case 0x2264b8u: goto label_2264b8;
        case 0x2264bcu: goto label_2264bc;
        case 0x2264c0u: goto label_2264c0;
        case 0x2264c4u: goto label_2264c4;
        case 0x2264c8u: goto label_2264c8;
        case 0x2264ccu: goto label_2264cc;
        case 0x2264d0u: goto label_2264d0;
        case 0x2264d4u: goto label_2264d4;
        case 0x2264d8u: goto label_2264d8;
        case 0x2264dcu: goto label_2264dc;
        case 0x2264e0u: goto label_2264e0;
        case 0x2264e4u: goto label_2264e4;
        case 0x2264e8u: goto label_2264e8;
        case 0x2264ecu: goto label_2264ec;
        case 0x2264f0u: goto label_2264f0;
        case 0x2264f4u: goto label_2264f4;
        case 0x2264f8u: goto label_2264f8;
        case 0x2264fcu: goto label_2264fc;
        case 0x226500u: goto label_226500;
        case 0x226504u: goto label_226504;
        case 0x226508u: goto label_226508;
        case 0x22650cu: goto label_22650c;
        case 0x226510u: goto label_226510;
        case 0x226514u: goto label_226514;
        case 0x226518u: goto label_226518;
        case 0x22651cu: goto label_22651c;
        case 0x226520u: goto label_226520;
        case 0x226524u: goto label_226524;
        case 0x226528u: goto label_226528;
        case 0x22652cu: goto label_22652c;
        case 0x226530u: goto label_226530;
        case 0x226534u: goto label_226534;
        case 0x226538u: goto label_226538;
        case 0x22653cu: goto label_22653c;
        case 0x226540u: goto label_226540;
        case 0x226544u: goto label_226544;
        case 0x226548u: goto label_226548;
        case 0x22654cu: goto label_22654c;
        case 0x226550u: goto label_226550;
        case 0x226554u: goto label_226554;
        case 0x226558u: goto label_226558;
        case 0x22655cu: goto label_22655c;
        case 0x226560u: goto label_226560;
        case 0x226564u: goto label_226564;
        case 0x226568u: goto label_226568;
        case 0x22656cu: goto label_22656c;
        case 0x226570u: goto label_226570;
        case 0x226574u: goto label_226574;
        case 0x226578u: goto label_226578;
        case 0x22657cu: goto label_22657c;
        case 0x226580u: goto label_226580;
        case 0x226584u: goto label_226584;
        case 0x226588u: goto label_226588;
        case 0x22658cu: goto label_22658c;
        case 0x226590u: goto label_226590;
        case 0x226594u: goto label_226594;
        case 0x226598u: goto label_226598;
        case 0x22659cu: goto label_22659c;
        case 0x2265a0u: goto label_2265a0;
        case 0x2265a4u: goto label_2265a4;
        case 0x2265a8u: goto label_2265a8;
        case 0x2265acu: goto label_2265ac;
        case 0x2265b0u: goto label_2265b0;
        case 0x2265b4u: goto label_2265b4;
        case 0x2265b8u: goto label_2265b8;
        case 0x2265bcu: goto label_2265bc;
        case 0x2265c0u: goto label_2265c0;
        case 0x2265c4u: goto label_2265c4;
        case 0x2265c8u: goto label_2265c8;
        case 0x2265ccu: goto label_2265cc;
        case 0x2265d0u: goto label_2265d0;
        case 0x2265d4u: goto label_2265d4;
        case 0x2265d8u: goto label_2265d8;
        case 0x2265dcu: goto label_2265dc;
        case 0x2265e0u: goto label_2265e0;
        case 0x2265e4u: goto label_2265e4;
        case 0x2265e8u: goto label_2265e8;
        case 0x2265ecu: goto label_2265ec;
        case 0x2265f0u: goto label_2265f0;
        case 0x2265f4u: goto label_2265f4;
        case 0x2265f8u: goto label_2265f8;
        case 0x2265fcu: goto label_2265fc;
        case 0x226600u: goto label_226600;
        case 0x226604u: goto label_226604;
        case 0x226608u: goto label_226608;
        case 0x22660cu: goto label_22660c;
        case 0x226610u: goto label_226610;
        case 0x226614u: goto label_226614;
        case 0x226618u: goto label_226618;
        case 0x22661cu: goto label_22661c;
        case 0x226620u: goto label_226620;
        case 0x226624u: goto label_226624;
        case 0x226628u: goto label_226628;
        case 0x22662cu: goto label_22662c;
        case 0x226630u: goto label_226630;
        case 0x226634u: goto label_226634;
        case 0x226638u: goto label_226638;
        case 0x22663cu: goto label_22663c;
        case 0x226640u: goto label_226640;
        case 0x226644u: goto label_226644;
        case 0x226648u: goto label_226648;
        case 0x22664cu: goto label_22664c;
        case 0x226650u: goto label_226650;
        case 0x226654u: goto label_226654;
        case 0x226658u: goto label_226658;
        case 0x22665cu: goto label_22665c;
        case 0x226660u: goto label_226660;
        case 0x226664u: goto label_226664;
        case 0x226668u: goto label_226668;
        case 0x22666cu: goto label_22666c;
        case 0x226670u: goto label_226670;
        case 0x226674u: goto label_226674;
        case 0x226678u: goto label_226678;
        case 0x22667cu: goto label_22667c;
        case 0x226680u: goto label_226680;
        case 0x226684u: goto label_226684;
        case 0x226688u: goto label_226688;
        case 0x22668cu: goto label_22668c;
        case 0x226690u: goto label_226690;
        case 0x226694u: goto label_226694;
        case 0x226698u: goto label_226698;
        case 0x22669cu: goto label_22669c;
        case 0x2266a0u: goto label_2266a0;
        case 0x2266a4u: goto label_2266a4;
        case 0x2266a8u: goto label_2266a8;
        case 0x2266acu: goto label_2266ac;
        case 0x2266b0u: goto label_2266b0;
        case 0x2266b4u: goto label_2266b4;
        case 0x2266b8u: goto label_2266b8;
        case 0x2266bcu: goto label_2266bc;
        case 0x2266c0u: goto label_2266c0;
        case 0x2266c4u: goto label_2266c4;
        case 0x2266c8u: goto label_2266c8;
        case 0x2266ccu: goto label_2266cc;
        case 0x2266d0u: goto label_2266d0;
        case 0x2266d4u: goto label_2266d4;
        case 0x2266d8u: goto label_2266d8;
        case 0x2266dcu: goto label_2266dc;
        case 0x2266e0u: goto label_2266e0;
        case 0x2266e4u: goto label_2266e4;
        case 0x2266e8u: goto label_2266e8;
        case 0x2266ecu: goto label_2266ec;
        case 0x2266f0u: goto label_2266f0;
        case 0x2266f4u: goto label_2266f4;
        case 0x2266f8u: goto label_2266f8;
        case 0x2266fcu: goto label_2266fc;
        case 0x226700u: goto label_226700;
        case 0x226704u: goto label_226704;
        case 0x226708u: goto label_226708;
        case 0x22670cu: goto label_22670c;
        case 0x226710u: goto label_226710;
        case 0x226714u: goto label_226714;
        case 0x226718u: goto label_226718;
        case 0x22671cu: goto label_22671c;
        case 0x226720u: goto label_226720;
        case 0x226724u: goto label_226724;
        case 0x226728u: goto label_226728;
        case 0x22672cu: goto label_22672c;
        case 0x226730u: goto label_226730;
        case 0x226734u: goto label_226734;
        case 0x226738u: goto label_226738;
        case 0x22673cu: goto label_22673c;
        case 0x226740u: goto label_226740;
        case 0x226744u: goto label_226744;
        case 0x226748u: goto label_226748;
        case 0x22674cu: goto label_22674c;
        case 0x226750u: goto label_226750;
        case 0x226754u: goto label_226754;
        case 0x226758u: goto label_226758;
        case 0x22675cu: goto label_22675c;
        case 0x226760u: goto label_226760;
        case 0x226764u: goto label_226764;
        case 0x226768u: goto label_226768;
        case 0x22676cu: goto label_22676c;
        case 0x226770u: goto label_226770;
        case 0x226774u: goto label_226774;
        case 0x226778u: goto label_226778;
        case 0x22677cu: goto label_22677c;
        case 0x226780u: goto label_226780;
        case 0x226784u: goto label_226784;
        case 0x226788u: goto label_226788;
        case 0x22678cu: goto label_22678c;
        case 0x226790u: goto label_226790;
        case 0x226794u: goto label_226794;
        case 0x226798u: goto label_226798;
        case 0x22679cu: goto label_22679c;
        case 0x2267a0u: goto label_2267a0;
        case 0x2267a4u: goto label_2267a4;
        case 0x2267a8u: goto label_2267a8;
        case 0x2267acu: goto label_2267ac;
        case 0x2267b0u: goto label_2267b0;
        case 0x2267b4u: goto label_2267b4;
        case 0x2267b8u: goto label_2267b8;
        case 0x2267bcu: goto label_2267bc;
        case 0x2267c0u: goto label_2267c0;
        case 0x2267c4u: goto label_2267c4;
        case 0x2267c8u: goto label_2267c8;
        case 0x2267ccu: goto label_2267cc;
        case 0x2267d0u: goto label_2267d0;
        case 0x2267d4u: goto label_2267d4;
        case 0x2267d8u: goto label_2267d8;
        case 0x2267dcu: goto label_2267dc;
        case 0x2267e0u: goto label_2267e0;
        case 0x2267e4u: goto label_2267e4;
        case 0x2267e8u: goto label_2267e8;
        case 0x2267ecu: goto label_2267ec;
        case 0x2267f0u: goto label_2267f0;
        case 0x2267f4u: goto label_2267f4;
        case 0x2267f8u: goto label_2267f8;
        case 0x2267fcu: goto label_2267fc;
        case 0x226800u: goto label_226800;
        case 0x226804u: goto label_226804;
        case 0x226808u: goto label_226808;
        case 0x22680cu: goto label_22680c;
        case 0x226810u: goto label_226810;
        case 0x226814u: goto label_226814;
        case 0x226818u: goto label_226818;
        case 0x22681cu: goto label_22681c;
        case 0x226820u: goto label_226820;
        case 0x226824u: goto label_226824;
        case 0x226828u: goto label_226828;
        case 0x22682cu: goto label_22682c;
        case 0x226830u: goto label_226830;
        case 0x226834u: goto label_226834;
        case 0x226838u: goto label_226838;
        case 0x22683cu: goto label_22683c;
        case 0x226840u: goto label_226840;
        case 0x226844u: goto label_226844;
        case 0x226848u: goto label_226848;
        case 0x22684cu: goto label_22684c;
        case 0x226850u: goto label_226850;
        case 0x226854u: goto label_226854;
        case 0x226858u: goto label_226858;
        case 0x22685cu: goto label_22685c;
        case 0x226860u: goto label_226860;
        case 0x226864u: goto label_226864;
        case 0x226868u: goto label_226868;
        case 0x22686cu: goto label_22686c;
        case 0x226870u: goto label_226870;
        case 0x226874u: goto label_226874;
        case 0x226878u: goto label_226878;
        case 0x22687cu: goto label_22687c;
        case 0x226880u: goto label_226880;
        case 0x226884u: goto label_226884;
        case 0x226888u: goto label_226888;
        case 0x22688cu: goto label_22688c;
        case 0x226890u: goto label_226890;
        case 0x226894u: goto label_226894;
        case 0x226898u: goto label_226898;
        case 0x22689cu: goto label_22689c;
        case 0x2268a0u: goto label_2268a0;
        case 0x2268a4u: goto label_2268a4;
        case 0x2268a8u: goto label_2268a8;
        case 0x2268acu: goto label_2268ac;
        case 0x2268b0u: goto label_2268b0;
        case 0x2268b4u: goto label_2268b4;
        case 0x2268b8u: goto label_2268b8;
        case 0x2268bcu: goto label_2268bc;
        case 0x2268c0u: goto label_2268c0;
        case 0x2268c4u: goto label_2268c4;
        case 0x2268c8u: goto label_2268c8;
        case 0x2268ccu: goto label_2268cc;
        case 0x2268d0u: goto label_2268d0;
        case 0x2268d4u: goto label_2268d4;
        case 0x2268d8u: goto label_2268d8;
        case 0x2268dcu: goto label_2268dc;
        case 0x2268e0u: goto label_2268e0;
        case 0x2268e4u: goto label_2268e4;
        case 0x2268e8u: goto label_2268e8;
        case 0x2268ecu: goto label_2268ec;
        case 0x2268f0u: goto label_2268f0;
        case 0x2268f4u: goto label_2268f4;
        case 0x2268f8u: goto label_2268f8;
        case 0x2268fcu: goto label_2268fc;
        case 0x226900u: goto label_226900;
        case 0x226904u: goto label_226904;
        case 0x226908u: goto label_226908;
        case 0x22690cu: goto label_22690c;
        case 0x226910u: goto label_226910;
        case 0x226914u: goto label_226914;
        case 0x226918u: goto label_226918;
        case 0x22691cu: goto label_22691c;
        case 0x226920u: goto label_226920;
        case 0x226924u: goto label_226924;
        case 0x226928u: goto label_226928;
        case 0x22692cu: goto label_22692c;
        case 0x226930u: goto label_226930;
        case 0x226934u: goto label_226934;
        case 0x226938u: goto label_226938;
        case 0x22693cu: goto label_22693c;
        case 0x226940u: goto label_226940;
        case 0x226944u: goto label_226944;
        case 0x226948u: goto label_226948;
        case 0x22694cu: goto label_22694c;
        case 0x226950u: goto label_226950;
        case 0x226954u: goto label_226954;
        case 0x226958u: goto label_226958;
        case 0x22695cu: goto label_22695c;
        case 0x226960u: goto label_226960;
        case 0x226964u: goto label_226964;
        case 0x226968u: goto label_226968;
        case 0x22696cu: goto label_22696c;
        case 0x226970u: goto label_226970;
        case 0x226974u: goto label_226974;
        case 0x226978u: goto label_226978;
        case 0x22697cu: goto label_22697c;
        default: return;
    }

label_2261b0:
    // 0x2261b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2261b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2261b4:
    // 0x2261b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2261b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2261b8:
    // 0x2261b8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2261b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_2261bc:
    // 0x2261bc: 0x2442ede0  addiu       $v0, $v0, -0x1220
    ctx->pc = 0x2261bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962656));
label_2261c0:
    // 0x2261c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2261c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2261c4:
    // 0x2261c4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2261c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2261c8:
    // 0x2261c8: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x2261c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2261cc:
    // 0x2261cc: 0xc044934  jal         func_1124D0
label_2261d0:
    if (ctx->pc == 0x2261D0u) {
        ctx->pc = 0x2261D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261CCu;
        // 0x2261d0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2261D4u;
        goto label_2261d4;
    }
    ctx->pc = 0x2261CCu;
    SET_GPR_U32(ctx, 31, 0x2261D4u);
    ctx->pc = 0x2261D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2261CCu;
    // 0x2261d0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x2261CCu, 0x2261D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261D4u;
label_2261d4:
    // 0x2261d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2261d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2261d8:
    // 0x2261d8: 0x2a02002d  slti        $v0, $s0, 0x2D
    ctx->pc = 0x2261d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)45) ? 1 : 0);
label_2261dc:
    // 0x2261dc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_2261e0:
    if (ctx->pc == 0x2261E0u) {
        ctx->pc = 0x2261E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261DCu;
        // 0x2261e0: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2261E4u;
        goto label_2261e4;
    }
    ctx->pc = 0x2261DCu;
    {
        const bool branch_taken_0x2261dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2261E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261DCu;
        // 0x2261e0: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2261dc) {
            ctx->pc = 0x2261B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2261b8;
        }
    }
    ctx->pc = 0x2261E4u;
label_2261e4:
    // 0x2261e4: 0xc06e45c  jal         func_1B9170
label_2261e8:
    if (ctx->pc == 0x2261E8u) {
        ctx->pc = 0x2261E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261E4u;
        // 0x2261e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2261ECu;
        goto label_2261ec;
    }
    ctx->pc = 0x2261E4u;
    SET_GPR_U32(ctx, 31, 0x2261ECu);
    ctx->pc = 0x2261E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2261E4u;
    // 0x2261e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9170u, 0x2261E4u, 0x2261ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261ECu;
label_2261ec:
    // 0x2261ec: 0xc05dd08  jal         func_177420
label_2261f0:
    if (ctx->pc == 0x2261F0u) {
        ctx->pc = 0x2261F4u;
        goto label_2261f4;
    }
    ctx->pc = 0x2261ECu;
    SET_GPR_U32(ctx, 31, 0x2261F4u);
    ctx->pc = 0x177420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177420u, 0x2261ECu, 0x2261F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261F4u;
label_2261f4:
    // 0x2261f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2261f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2261f8:
    // 0x2261f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2261f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2261fc:
    // 0x2261fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2261fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_226200:
    // 0x226200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x226200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_226204:
    // 0x226204: 0x3e00008  jr          $ra
label_226208:
    if (ctx->pc == 0x226208u) {
        ctx->pc = 0x226208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226204u;
        // 0x226208: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22620Cu;
        goto label_22620c;
    }
    ctx->pc = 0x226204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226204u;
        // 0x226208: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22620Cu;
label_22620c:
    // 0x22620c: 0x0  nop
    ctx->pc = 0x22620cu;
    // NOP
label_226210:
    // 0x226210: 0x8f8784e0  lw          $a3, -0x7B20($gp)
    ctx->pc = 0x226210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_226214:
    // 0x226214: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x226214u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226218:
    // 0x226218: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x226218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_22621c:
    // 0x22621c: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x22621cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_226220:
    // 0x226220: 0x90e2002e  lbu         $v0, 0x2E($a3)
    ctx->pc = 0x226220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 46)));
label_226224:
    // 0x226224: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_226228:
    if (ctx->pc == 0x226228u) {
        ctx->pc = 0x22622Cu;
        goto label_22622c;
    }
    ctx->pc = 0x226224u;
    {
        const bool branch_taken_0x226224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226224) {
            ctx->pc = 0x2262BCu;
            goto label_2262bc;
        }
    }
    ctx->pc = 0x22622Cu;
label_22622c:
    // 0x22622c: 0x90e2002f  lbu         $v0, 0x2F($a3)
    ctx->pc = 0x22622cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 47)));
label_226230:
    // 0x226230: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x226230u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
label_226234:
    // 0x226234: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_226238:
    if (ctx->pc == 0x226238u) {
        ctx->pc = 0x22623Cu;
        goto label_22623c;
    }
    ctx->pc = 0x226234u;
    {
        const bool branch_taken_0x226234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x226234) {
            ctx->pc = 0x2262BCu;
            goto label_2262bc;
        }
    }
    ctx->pc = 0x22623Cu;
label_22623c:
    // 0x22623c: 0x90e6002c  lbu         $a2, 0x2C($a3)
    ctx->pc = 0x22623cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
label_226240:
    // 0x226240: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x226240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_226244:
    // 0x226244: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x226244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_226248:
    // 0x226248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22624c:
    // 0x22624c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x22624cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_226250:
    // 0x226250: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x226250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_226254:
    // 0x226254: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x226254u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_226258:
    // 0x226258: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x226258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_22625c:
    // 0x22625c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x22625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_226260:
    // 0x226260: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x226260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_226264:
    // 0x226264: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x226264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_226268:
    // 0x226268: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x226268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_22626c:
    // 0x22626c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22626cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_226270:
    // 0x226270: 0x14820012  bne         $a0, $v0, . + 4 + (0x12 << 2)
label_226274:
    if (ctx->pc == 0x226274u) {
        ctx->pc = 0x226278u;
        goto label_226278;
    }
    ctx->pc = 0x226270u;
    {
        const bool branch_taken_0x226270 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x226270) {
            ctx->pc = 0x2262BCu;
            goto label_2262bc;
        }
    }
    ctx->pc = 0x226278u;
label_226278:
    // 0x226278: 0x90e2002d  lbu         $v0, 0x2D($a3)
    ctx->pc = 0x226278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 45)));
label_22627c:
    // 0x22627c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22627cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_226280:
    // 0x226280: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x226280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_226284:
    // 0x226284: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x226284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_226288:
    // 0x226288: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_22628c:
    if (ctx->pc == 0x22628Cu) {
        ctx->pc = 0x226290u;
        goto label_226290;
    }
    ctx->pc = 0x226288u;
    {
        const bool branch_taken_0x226288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226288) {
            ctx->pc = 0x2262BCu;
            goto label_2262bc;
        }
    }
    ctx->pc = 0x226290u;
label_226290:
    // 0x226290: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x226290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226294:
    // 0x226294: 0x3c02c37b  lui         $v0, 0xC37B
    ctx->pc = 0x226294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50043 << 16));
label_226298:
    // 0x226298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22629c:
    // 0x22629c: 0x0  nop
    ctx->pc = 0x22629cu;
    // NOP
label_2262a0:
    // 0x2262a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2262a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2262a4:
    // 0x2262a4: 0x0  nop
    ctx->pc = 0x2262a4u;
    // NOP
label_2262a8:
    // 0x2262a8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_2262ac:
    if (ctx->pc == 0x2262ACu) {
        ctx->pc = 0x2262ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262A8u;
        // 0x2262ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2262B0u;
        goto label_2262b0;
    }
    ctx->pc = 0x2262A8u;
    {
        const bool branch_taken_0x2262a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2262ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262A8u;
        // 0x2262ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2262a8) {
            ctx->pc = 0x2262D0u;
            goto label_2262d0;
        }
    }
    ctx->pc = 0x2262B0u;
label_2262b0:
    // 0x2262b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2262b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2262b4:
    // 0x2262b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2262b8:
    if (ctx->pc == 0x2262B8u) {
        ctx->pc = 0x2262BCu;
        goto label_2262bc;
    }
    ctx->pc = 0x2262B4u;
    {
        const bool branch_taken_0x2262b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2262b4) {
            ctx->pc = 0x2262D0u;
            goto label_2262d0;
        }
    }
    ctx->pc = 0x2262BCu;
label_2262bc:
    // 0x2262bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2262bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2262c0:
    // 0x2262c0: 0x2902004a  slti        $v0, $t0, 0x4A
    ctx->pc = 0x2262c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)74) ? 1 : 0);
label_2262c4:
    // 0x2262c4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_2262c8:
    if (ctx->pc == 0x2262C8u) {
        ctx->pc = 0x2262C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262C4u;
        // 0x2262c8: 0x24e70030  addiu       $a3, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2262CCu;
        goto label_2262cc;
    }
    ctx->pc = 0x2262C4u;
    {
        const bool branch_taken_0x2262c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2262C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2262C4u;
        // 0x2262c8: 0x24e70030  addiu       $a3, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2262c4) {
            ctx->pc = 0x226220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226220;
        }
    }
    ctx->pc = 0x2262CCu;
label_2262cc:
    // 0x2262cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2262ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2262d0:
    // 0x2262d0: 0x3e00008  jr          $ra
label_2262d4:
    if (ctx->pc == 0x2262D4u) {
        ctx->pc = 0x2262D8u;
        goto label_2262d8;
    }
    ctx->pc = 0x2262D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2262D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2262D8u;
label_2262d8:
    // 0x2262d8: 0x0  nop
    ctx->pc = 0x2262d8u;
    // NOP
label_2262dc:
    // 0x2262dc: 0x0  nop
    ctx->pc = 0x2262dcu;
    // NOP
label_2262e0:
    // 0x2262e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2262e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2262e4:
    // 0x2262e4: 0x3c08002f  lui         $t0, 0x2F
    ctx->pc = 0x2262e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)47 << 16));
label_2262e8:
    // 0x2262e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2262e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2262ec:
    // 0x2262ec: 0x250825ae  addiu       $t0, $t0, 0x25AE
    ctx->pc = 0x2262ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9646));
label_2262f0:
    // 0x2262f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2262f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2262f4:
    // 0x2262f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2262f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2262f8:
    // 0x2262f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2262f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2262fc:
    // 0x2262fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2262fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_226300:
    // 0x226300: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x226300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_226304:
    // 0x226304: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x226304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_226308:
    // 0x226308: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x226308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22630c:
    // 0x22630c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x22630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_226310:
    // 0x226310: 0x62a00  sll         $a1, $a2, 8
    ctx->pc = 0x226310u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_226314:
    // 0x226314: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x226314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_226318:
    // 0x226318: 0xa63823  subu        $a3, $a1, $a2
    ctx->pc = 0x226318u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_22631c:
    // 0x22631c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x22631cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_226320:
    // 0x226320: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x226320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_226324:
    // 0x226324: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x226324u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_226328:
    // 0x226328: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x226328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_22632c:
    // 0x22632c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x22632cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_226330:
    // 0x226330: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x226330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_226334:
    // 0x226334: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x226334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
label_226338:
    // 0x226338: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x226338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_22633c:
    // 0x22633c: 0x538c0  sll         $a3, $a1, 3
    ctx->pc = 0x22633cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_226340:
    // 0x226340: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x226340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_226344:
    // 0x226344: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x226344u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_226348:
    // 0x226348: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x226348u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_22634c:
    // 0x22634c: 0x25060000  addiu       $a2, $t0, 0x0
    ctx->pc = 0x22634cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 0));
label_226350:
    // 0x226350: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x226350u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_226354:
    // 0x226354: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x226354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_226358:
    // 0x226358: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x226358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_22635c:
    // 0x22635c: 0x90d10000  lbu         $s1, 0x0($a2)
    ctx->pc = 0x22635cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_226360:
    // 0x226360: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x226360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_226364:
    // 0x226364: 0x1128c0  sll         $a1, $s1, 3
    ctx->pc = 0x226364u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_226368:
    // 0x226368: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x226368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_22636c:
    // 0x22636c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x22636cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_226370:
    // 0x226370: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x226370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_226374:
    // 0x226374: 0x90840220  lbu         $a0, 0x220($a0)
    ctx->pc = 0x226374u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
label_226378:
    // 0x226378: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
label_22637c:
    if (ctx->pc == 0x22637Cu) {
        ctx->pc = 0x226380u;
        goto label_226380;
    }
    ctx->pc = 0x226378u;
    {
        const bool branch_taken_0x226378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x226378) {
            ctx->pc = 0x226388u;
            goto label_226388;
        }
    }
    ctx->pc = 0x226380u;
label_226380:
    // 0x226380: 0x10000002  b           . + 4 + (0x2 << 2)
label_226384:
    if (ctx->pc == 0x226384u) {
        ctx->pc = 0x226384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226380u;
        // 0x226384: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226388u;
        goto label_226388;
    }
    ctx->pc = 0x226380u;
    {
        const bool branch_taken_0x226380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226380u;
        // 0x226384: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226380) {
            ctx->pc = 0x22638Cu;
            goto label_22638c;
        }
    }
    ctx->pc = 0x226388u;
label_226388:
    // 0x226388: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x226388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22638c:
    // 0x22638c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x22638cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_226390:
    // 0x226390: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x226390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226394:
    // 0x226394: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x226394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_226398:
    // 0x226398: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x226398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22639c:
    // 0x22639c: 0x9202003d  lbu         $v0, 0x3D($s0)
    ctx->pc = 0x22639cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
label_2263a0:
    // 0x2263a0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_2263a4:
    if (ctx->pc == 0x2263A4u) {
        ctx->pc = 0x2263A8u;
        goto label_2263a8;
    }
    ctx->pc = 0x2263A0u;
    {
        const bool branch_taken_0x2263a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2263a0) {
            ctx->pc = 0x226404u;
            goto label_226404;
        }
    }
    ctx->pc = 0x2263A8u;
label_2263a8:
    // 0x2263a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2263a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2263ac:
    // 0x2263ac: 0x240200e5  addiu       $v0, $zero, 0xE5
    ctx->pc = 0x2263acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
label_2263b0:
    // 0x2263b0: 0x9483000a  lhu         $v1, 0xA($a0)
    ctx->pc = 0x2263b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_2263b4:
    // 0x2263b4: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_2263b8:
    if (ctx->pc == 0x2263B8u) {
        ctx->pc = 0x2263BCu;
        goto label_2263bc;
    }
    ctx->pc = 0x2263B4u;
    {
        const bool branch_taken_0x2263b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2263b4) {
            ctx->pc = 0x226404u;
            goto label_226404;
        }
    }
    ctx->pc = 0x2263BCu;
label_2263bc:
    // 0x2263bc: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
label_2263c0:
    if (ctx->pc == 0x2263C0u) {
        ctx->pc = 0x2263C4u;
        goto label_2263c4;
    }
    ctx->pc = 0x2263BCu;
    {
        const bool branch_taken_0x2263bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2263bc) {
            ctx->pc = 0x2263F0u;
            goto label_2263f0;
        }
    }
    ctx->pc = 0x2263C4u;
label_2263c4:
    // 0x2263c4: 0x90820011  lbu         $v0, 0x11($a0)
    ctx->pc = 0x2263c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
label_2263c8:
    // 0x2263c8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2263c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2263cc:
    // 0x2263cc: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_2263d0:
    if (ctx->pc == 0x2263D0u) {
        ctx->pc = 0x2263D4u;
        goto label_2263d4;
    }
    ctx->pc = 0x2263CCu;
    {
        const bool branch_taken_0x2263cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2263cc) {
            ctx->pc = 0x2263DCu;
            goto label_2263dc;
        }
    }
    ctx->pc = 0x2263D4u;
label_2263d4:
    // 0x2263d4: 0x1643000b  bne         $s2, $v1, . + 4 + (0xB << 2)
label_2263d8:
    if (ctx->pc == 0x2263D8u) {
        ctx->pc = 0x2263DCu;
        goto label_2263dc;
    }
    ctx->pc = 0x2263D4u;
    {
        const bool branch_taken_0x2263d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x2263d4) {
            ctx->pc = 0x226404u;
            goto label_226404;
        }
    }
    ctx->pc = 0x2263DCu;
label_2263dc:
    // 0x2263dc: 0x0  nop
    ctx->pc = 0x2263dcu;
    // NOP
label_2263e0:
    // 0x2263e0: 0xc05d910  jal         func_176440
label_2263e4:
    if (ctx->pc == 0x2263E4u) {
        ctx->pc = 0x2263E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263E0u;
        // 0x2263e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2263E8u;
        goto label_2263e8;
    }
    ctx->pc = 0x2263E0u;
    SET_GPR_U32(ctx, 31, 0x2263E8u);
    ctx->pc = 0x2263E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2263E0u;
    // 0x2263e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176440u, 0x2263E0u, 0x2263E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2263E8u;
label_2263e8:
    // 0x2263e8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2263ec:
    if (ctx->pc == 0x2263ECu) {
        ctx->pc = 0x2263F0u;
        goto label_2263f0;
    }
    ctx->pc = 0x2263E8u;
    {
        const bool branch_taken_0x2263e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2263e8) {
            ctx->pc = 0x226404u;
            goto label_226404;
        }
    }
    ctx->pc = 0x2263F0u;
label_2263f0:
    // 0x2263f0: 0x9202003e  lbu         $v0, 0x3E($s0)
    ctx->pc = 0x2263f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 62)));
label_2263f4:
    // 0x2263f4: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
label_2263f8:
    if (ctx->pc == 0x2263F8u) {
        ctx->pc = 0x2263F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263F4u;
        // 0x2263f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2263FCu;
        goto label_2263fc;
    }
    ctx->pc = 0x2263F4u;
    {
        const bool branch_taken_0x2263f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2263F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263F4u;
        // 0x2263f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2263f4) {
            ctx->pc = 0x226404u;
            goto label_226404;
        }
    }
    ctx->pc = 0x2263FCu;
label_2263fc:
    // 0x2263fc: 0xc05d910  jal         func_176440
label_226400:
    if (ctx->pc == 0x226400u) {
        ctx->pc = 0x226404u;
        goto label_226404;
    }
    ctx->pc = 0x2263FCu;
    SET_GPR_U32(ctx, 31, 0x226404u);
    ctx->pc = 0x176440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176440u, 0x2263FCu, 0x226404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226404u;
label_226404:
    // 0x226404: 0x0  nop
    ctx->pc = 0x226404u;
    // NOP
label_226408:
    // 0x226408: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x226408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22640c:
    // 0x22640c: 0x2a4200ff  slti        $v0, $s2, 0xFF
    ctx->pc = 0x22640cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)255) ? 1 : 0);
label_226410:
    // 0x226410: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_226414:
    if (ctx->pc == 0x226414u) {
        ctx->pc = 0x226414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226410u;
        // 0x226414: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226418u;
        goto label_226418;
    }
    ctx->pc = 0x226410u;
    {
        const bool branch_taken_0x226410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226410u;
        // 0x226414: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226410) {
            ctx->pc = 0x22639Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22639c;
        }
    }
    ctx->pc = 0x226418u;
label_226418:
    // 0x226418: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_22641c:
    // 0x22641c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x22641cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_226420:
    // 0x226420: 0x802351ed  lb          $v1, 0x51ED($at)
    ctx->pc = 0x226420u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 20973)));
label_226424:
    // 0x226424: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x226424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_226428:
    // 0x226428: 0x24a55090  addiu       $a1, $a1, 0x5090
    ctx->pc = 0x226428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20624));
label_22642c:
    // 0x22642c: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x22642cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_226430:
    // 0x226430: 0x24425092  addiu       $v0, $v0, 0x5092
    ctx->pc = 0x226430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20626));
label_226434:
    // 0x226434: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x226434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_226438:
    // 0x226438: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x226438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22643c:
    // 0x22643c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22643cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_226440:
    // 0x226440: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226444:
    // 0x226444: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x226444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_226448:
    // 0x226448: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x226448u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
label_22644c:
    // 0x22644c: 0x802351ed  lb          $v1, 0x51ED($at)
    ctx->pc = 0x22644cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 20973)));
label_226450:
    // 0x226450: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x226450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_226454:
    // 0x226454: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226458:
    // 0x226458: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22645c:
    // 0x22645c: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x22645cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
label_226460:
    // 0x226460: 0x802251ed  lb          $v0, 0x51ED($at)
    ctx->pc = 0x226460u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 20973)));
label_226464:
    // 0x226464: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x226464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_226468:
    // 0x226468: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_22646c:
    // 0x22646c: 0xc05d970  jal         func_1765C0
label_226470:
    if (ctx->pc == 0x226470u) {
        ctx->pc = 0x226470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22646Cu;
        // 0x226470: 0xa02251ed  sb          $v0, 0x51ED($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 20973), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226474u;
        goto label_226474;
    }
    ctx->pc = 0x22646Cu;
    SET_GPR_U32(ctx, 31, 0x226474u);
    ctx->pc = 0x226470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22646Cu;
    // 0x226470: 0xa02251ed  sb          $v0, 0x51ED($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 20973), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1765C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1765C0u, 0x22646Cu, 0x226474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226474u;
label_226474:
    // 0x226474: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226478:
    // 0x226478: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x226478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_22647c:
    // 0x22647c: 0xa02051ed  sb          $zero, 0x51ED($at)
    ctx->pc = 0x22647cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20973), (uint8_t)GPR_U32(ctx, 0));
label_226480:
    // 0x226480: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x226480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_226484:
    // 0x226484: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226488:
    // 0x226488: 0xa4205092  sh          $zero, 0x5092($at)
    ctx->pc = 0x226488u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20626), (uint16_t)GPR_U32(ctx, 0));
label_22648c:
    // 0x22648c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x22648cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226490:
    // 0x226490: 0xa4205090  sh          $zero, 0x5090($at)
    ctx->pc = 0x226490u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20624), (uint16_t)GPR_U32(ctx, 0));
label_226494:
    // 0x226494: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226498:
    // 0x226498: 0xa4205096  sh          $zero, 0x5096($at)
    ctx->pc = 0x226498u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20630), (uint16_t)GPR_U32(ctx, 0));
label_22649c:
    // 0x22649c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x22649cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2264a0:
    // 0x2264a0: 0xa4205094  sh          $zero, 0x5094($at)
    ctx->pc = 0x2264a0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20628), (uint16_t)GPR_U32(ctx, 0));
label_2264a4:
    // 0x2264a4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2264a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2264a8:
    // 0x2264a8: 0xa420509a  sh          $zero, 0x509A($at)
    ctx->pc = 0x2264a8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20634), (uint16_t)GPR_U32(ctx, 0));
label_2264ac:
    // 0x2264ac: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2264acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2264b0:
    // 0x2264b0: 0xa4205098  sh          $zero, 0x5098($at)
    ctx->pc = 0x2264b0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20632), (uint16_t)GPR_U32(ctx, 0));
label_2264b4:
    // 0x2264b4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2264b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2264b8:
    // 0x2264b8: 0xa420509e  sh          $zero, 0x509E($at)
    ctx->pc = 0x2264b8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20638), (uint16_t)GPR_U32(ctx, 0));
label_2264bc:
    // 0x2264bc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2264bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2264c0:
    // 0x2264c0: 0xa420509c  sh          $zero, 0x509C($at)
    ctx->pc = 0x2264c0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20636), (uint16_t)GPR_U32(ctx, 0));
label_2264c4:
    // 0x2264c4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2264c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2264c8:
    // 0x2264c8: 0xa42050a2  sh          $zero, 0x50A2($at)
    ctx->pc = 0x2264c8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20642), (uint16_t)GPR_U32(ctx, 0));
label_2264cc:
    // 0x2264cc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2264ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2264d0:
    // 0x2264d0: 0xa42050a0  sh          $zero, 0x50A0($at)
    ctx->pc = 0x2264d0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20640), (uint16_t)GPR_U32(ctx, 0));
label_2264d4:
    // 0x2264d4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2264d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2264d8:
    // 0x2264d8: 0xa42050a6  sh          $zero, 0x50A6($at)
    ctx->pc = 0x2264d8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20646), (uint16_t)GPR_U32(ctx, 0));
label_2264dc:
    // 0x2264dc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2264dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2264e0:
    // 0x2264e0: 0xa42050a4  sh          $zero, 0x50A4($at)
    ctx->pc = 0x2264e0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20644), (uint16_t)GPR_U32(ctx, 0));
label_2264e4:
    // 0x2264e4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2264e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2264e8:
    // 0x2264e8: 0xa42050aa  sh          $zero, 0x50AA($at)
    ctx->pc = 0x2264e8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20650), (uint16_t)GPR_U32(ctx, 0));
label_2264ec:
    // 0x2264ec: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2264ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2264f0:
    // 0x2264f0: 0xa42050a8  sh          $zero, 0x50A8($at)
    ctx->pc = 0x2264f0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20648), (uint16_t)GPR_U32(ctx, 0));
label_2264f4:
    // 0x2264f4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2264f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2264f8:
    // 0x2264f8: 0xa42050ae  sh          $zero, 0x50AE($at)
    ctx->pc = 0x2264f8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20654), (uint16_t)GPR_U32(ctx, 0));
label_2264fc:
    // 0x2264fc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2264fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226500:
    // 0x226500: 0xa42050ac  sh          $zero, 0x50AC($at)
    ctx->pc = 0x226500u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20652), (uint16_t)GPR_U32(ctx, 0));
label_226504:
    // 0x226504: 0xc089bb8  jal         func_226EE0
label_226508:
    if (ctx->pc == 0x226508u) {
        ctx->pc = 0x226508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226504u;
        // 0x226508: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22650Cu;
        goto label_22650c;
    }
    ctx->pc = 0x226504u;
    SET_GPR_U32(ctx, 31, 0x22650Cu);
    ctx->pc = 0x226508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226504u;
    // 0x226508: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EE0u;
    { ctx->pc = 0x226ee0; return; }
    ctx->pc = 0x22650Cu;
label_22650c:
    // 0x22650c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22650cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_226510:
    // 0x226510: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226514:
    // 0x226514: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x226514u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_226518:
    // 0x226518: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x226518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22651c:
    // 0x22651c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22651cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_226520:
    // 0x226520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x226520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_226524:
    // 0x226524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x226524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_226528:
    // 0x226528: 0x3e00008  jr          $ra
label_22652c:
    if (ctx->pc == 0x22652Cu) {
        ctx->pc = 0x22652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226528u;
        // 0x22652c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226530u;
        goto label_226530;
    }
    ctx->pc = 0x226528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226528u;
        // 0x22652c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226530u;
label_226530:
    // 0x226530: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x226530u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_226534:
    // 0x226534: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x226534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_226538:
    // 0x226538: 0x90254af3  lbu         $a1, 0x4AF3($at)
    ctx->pc = 0x226538u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19187)));
label_22653c:
    // 0x22653c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22653cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226540:
    // 0x226540: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x226540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_226544:
    // 0x226544: 0xc23004  sllv        $a2, $v0, $a2
    ctx->pc = 0x226544u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
label_226548:
    // 0x226548: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x226548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_22654c:
    // 0x22654c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22654cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_226550:
    // 0x226550: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x226550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_226554:
    // 0x226554: 0xa0254af3  sb          $a1, 0x4AF3($at)
    ctx->pc = 0x226554u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19187), (uint8_t)GPR_U32(ctx, 5));
label_226558:
    // 0x226558: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x226558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_22655c:
    // 0x22655c: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_226560:
    if (ctx->pc == 0x226560u) {
        ctx->pc = 0x226560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22655Cu;
        // 0x226560: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226564u;
        goto label_226564;
    }
    ctx->pc = 0x22655Cu;
    {
        const bool branch_taken_0x22655c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x226560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22655Cu;
        // 0x226560: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22655c) {
            ctx->pc = 0x22658Cu;
            goto label_22658c;
        }
    }
    ctx->pc = 0x226564u;
label_226564:
    // 0x226564: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_226568:
    if (ctx->pc == 0x226568u) {
        ctx->pc = 0x22656Cu;
        goto label_22656c;
    }
    ctx->pc = 0x226564u;
    {
        const bool branch_taken_0x226564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x226564) {
            ctx->pc = 0x22658Cu;
            goto label_22658c;
        }
    }
    ctx->pc = 0x22656Cu;
label_22656c:
    // 0x22656c: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x22656cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_226570:
    // 0x226570: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_226574:
    if (ctx->pc == 0x226574u) {
        ctx->pc = 0x226574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226570u;
        // 0x226574: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226578u;
        goto label_226578;
    }
    ctx->pc = 0x226570u;
    {
        const bool branch_taken_0x226570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x226574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226570u;
        // 0x226574: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226570) {
            ctx->pc = 0x22658Cu;
            goto label_22658c;
        }
    }
    ctx->pc = 0x226578u;
label_226578:
    // 0x226578: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_22657c:
    if (ctx->pc == 0x22657Cu) {
        ctx->pc = 0x226580u;
        goto label_226580;
    }
    ctx->pc = 0x226578u;
    {
        const bool branch_taken_0x226578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x226578) {
            ctx->pc = 0x22658Cu;
            goto label_22658c;
        }
    }
    ctx->pc = 0x226580u;
label_226580:
    // 0x226580: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x226580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_226584:
    // 0x226584: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_226588:
    if (ctx->pc == 0x226588u) {
        ctx->pc = 0x22658Cu;
        goto label_22658c;
    }
    ctx->pc = 0x226584u;
    {
        const bool branch_taken_0x226584 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x226584) {
            ctx->pc = 0x226590u;
            goto label_226590;
        }
    }
    ctx->pc = 0x22658Cu;
label_22658c:
    // 0x22658c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22658cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226590:
    // 0x226590: 0x3e00008  jr          $ra
label_226594:
    if (ctx->pc == 0x226594u) {
        ctx->pc = 0x226598u;
        goto label_226598;
    }
    ctx->pc = 0x226590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226598u;
label_226598:
    // 0x226598: 0x0  nop
    ctx->pc = 0x226598u;
    // NOP
label_22659c:
    // 0x22659c: 0x0  nop
    ctx->pc = 0x22659cu;
    // NOP
label_2265a0:
    // 0x2265a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2265a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2265a4:
    // 0x2265a4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2265a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2265a8:
    // 0x2265a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2265a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2265ac:
    // 0x2265ac: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2265acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2265b0:
    // 0x2265b0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2265b4:
    if (ctx->pc == 0x2265B4u) {
        ctx->pc = 0x2265B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2265B0u;
        // 0x2265b4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2265B8u;
        goto label_2265b8;
    }
    ctx->pc = 0x2265B0u;
    {
        const bool branch_taken_0x2265b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2265B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2265B0u;
        // 0x2265b4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2265b0) {
            ctx->pc = 0x2265C8u;
            goto label_2265c8;
        }
    }
    ctx->pc = 0x2265B8u;
label_2265b8:
    // 0x2265b8: 0x90224910  lbu         $v0, 0x4910($at)
    ctx->pc = 0x2265b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18704)));
label_2265bc:
    // 0x2265bc: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x2265bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_2265c0:
    // 0x2265c0: 0xc059eb8  jal         func_167AE0
label_2265c4:
    if (ctx->pc == 0x2265C4u) {
        ctx->pc = 0x2265C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2265C0u;
        // 0x2265c4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2265C8u;
        goto label_2265c8;
    }
    ctx->pc = 0x2265C0u;
    SET_GPR_U32(ctx, 31, 0x2265C8u);
    ctx->pc = 0x2265C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2265C0u;
    // 0x2265c4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x167AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AE0u, 0x2265C0u, 0x2265C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2265C8u;
label_2265c8:
    // 0x2265c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2265c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2265cc:
    // 0x2265cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2265ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2265d0:
    // 0x2265d0: 0x3e00008  jr          $ra
label_2265d4:
    if (ctx->pc == 0x2265D4u) {
        ctx->pc = 0x2265D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2265D0u;
        // 0x2265d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2265D8u;
        goto label_2265d8;
    }
    ctx->pc = 0x2265D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2265D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2265D0u;
        // 0x2265d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2265D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2265D8u;
label_2265d8:
    // 0x2265d8: 0x0  nop
    ctx->pc = 0x2265d8u;
    // NOP
label_2265dc:
    // 0x2265dc: 0x0  nop
    ctx->pc = 0x2265dcu;
    // NOP
label_2265e0:
    // 0x2265e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2265e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2265e4:
    // 0x2265e4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2265e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2265e8:
    // 0x2265e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2265e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2265ec:
    // 0x2265ec: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x2265ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_2265f0:
    // 0x2265f0: 0x802351ec  lb          $v1, 0x51EC($at)
    ctx->pc = 0x2265f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 20972)));
label_2265f4:
    // 0x2265f4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2265f8:
    if (ctx->pc == 0x2265F8u) {
        ctx->pc = 0x2265FCu;
        goto label_2265fc;
    }
    ctx->pc = 0x2265F4u;
    {
        const bool branch_taken_0x2265f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2265f4) {
            ctx->pc = 0x226614u;
            goto label_226614;
        }
    }
    ctx->pc = 0x2265FCu;
label_2265fc:
    // 0x2265fc: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2265fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_226600:
    // 0x226600: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226604:
    // 0x226604: 0xa02251ec  sb          $v0, 0x51EC($at)
    ctx->pc = 0x226604u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20972), (uint8_t)GPR_U32(ctx, 2));
label_226608:
    // 0x226608: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x226608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22660c:
    // 0x22660c: 0xc05ae74  jal         func_16B9D0
label_226610:
    if (ctx->pc == 0x226610u) {
        ctx->pc = 0x226610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22660Cu;
        // 0x226610: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226614u;
        goto label_226614;
    }
    ctx->pc = 0x22660Cu;
    SET_GPR_U32(ctx, 31, 0x226614u);
    ctx->pc = 0x226610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22660Cu;
    // 0x226610: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x22660Cu, 0x226614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226614u;
label_226614:
    // 0x226614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226618:
    // 0x226618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22661c:
    // 0x22661c: 0x3e00008  jr          $ra
label_226620:
    if (ctx->pc == 0x226620u) {
        ctx->pc = 0x226620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22661Cu;
        // 0x226620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226624u;
        goto label_226624;
    }
    ctx->pc = 0x22661Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22661Cu;
        // 0x226620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22661Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226624u;
label_226624:
    // 0x226624: 0x0  nop
    ctx->pc = 0x226624u;
    // NOP
label_226628:
    // 0x226628: 0x0  nop
    ctx->pc = 0x226628u;
    // NOP
label_22662c:
    // 0x22662c: 0x0  nop
    ctx->pc = 0x22662cu;
    // NOP
label_226630:
    // 0x226630: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x226630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_226634:
    // 0x226634: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x226634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_226638:
    // 0x226638: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x226638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_22663c:
    // 0x22663c: 0x8c254900  lw          $a1, 0x4900($at)
    ctx->pc = 0x22663cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_226640:
    // 0x226640: 0x246350dc  addiu       $v1, $v1, 0x50DC
    ctx->pc = 0x226640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20700));
label_226644:
    // 0x226644: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226648:
    // 0x226648: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x226648u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_22664c:
    // 0x22664c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22664cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_226650:
    // 0x226650: 0x3e00008  jr          $ra
label_226654:
    if (ctx->pc == 0x226654u) {
        ctx->pc = 0x226654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226650u;
        // 0x226654: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226658u;
        goto label_226658;
    }
    ctx->pc = 0x226650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226650u;
        // 0x226654: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226658u;
label_226658:
    // 0x226658: 0x0  nop
    ctx->pc = 0x226658u;
    // NOP
label_22665c:
    // 0x22665c: 0x0  nop
    ctx->pc = 0x22665cu;
    // NOP
label_226660:
    // 0x226660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_226664:
    // 0x226664: 0x3c09002f  lui         $t1, 0x2F
    ctx->pc = 0x226664u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)47 << 16));
label_226668:
    // 0x226668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22666c:
    // 0x22666c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22666cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_226670:
    // 0x226670: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x226670u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_226674:
    // 0x226674: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x226674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_226678:
    // 0x226678: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_22667c:
    // 0x22667c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x22667cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_226680:
    // 0x226680: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x226680u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_226684:
    // 0x226684: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x226684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_226688:
    // 0x226688: 0x802351ed  lb          $v1, 0x51ED($at)
    ctx->pc = 0x226688u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 20973)));
label_22668c:
    // 0x22668c: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x22668cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
label_226690:
    // 0x226690: 0x25292574  addiu       $t1, $t1, 0x2574
    ctx->pc = 0x226690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9588));
label_226694:
    // 0x226694: 0x24a55090  addiu       $a1, $a1, 0x5090
    ctx->pc = 0x226694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20624));
label_226698:
    // 0x226698: 0x24425092  addiu       $v0, $v0, 0x5092
    ctx->pc = 0x226698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20626));
label_22669c:
    // 0x22669c: 0x24e72578  addiu       $a3, $a3, 0x2578
    ctx->pc = 0x22669cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9592));
label_2266a0:
    // 0x2266a0: 0xa3200  sll         $a2, $t2, 8
    ctx->pc = 0x2266a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
label_2266a4:
    // 0x2266a4: 0xca5023  subu        $t2, $a2, $t2
    ctx->pc = 0x2266a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_2266a8:
    // 0x2266a8: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x2266a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2266ac:
    // 0x2266ac: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x2266acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_2266b0:
    // 0x2266b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2266b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2266b4:
    // 0x2266b4: 0x640c0  sll         $t0, $a2, 3
    ctx->pc = 0x2266b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2266b8:
    // 0x2266b8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2266b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2266bc:
    // 0x2266bc: 0xa30c0  sll         $a2, $t2, 3
    ctx->pc = 0x2266bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_2266c0:
    // 0x2266c0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2266c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2266c4:
    // 0x2266c4: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x2266c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_2266c8:
    // 0x2266c8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2266c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2266cc:
    // 0x2266cc: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x2266ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_2266d0:
    // 0x2266d0: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x2266d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
label_2266d4:
    // 0x2266d4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x2266d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_2266d8:
    // 0x2266d8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2266d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2266dc:
    // 0x2266dc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2266dcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_2266e0:
    // 0x2266e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2266e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2266e4:
    // 0x2266e4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2266e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_2266e8:
    // 0x2266e8: 0x0  nop
    ctx->pc = 0x2266e8u;
    // NOP
label_2266ec:
    // 0x2266ec: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x2266ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
label_2266f0:
    // 0x2266f0: 0x802351ed  lb          $v1, 0x51ED($at)
    ctx->pc = 0x2266f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 20973)));
label_2266f4:
    // 0x2266f4: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x2266f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2266f8:
    // 0x2266f8: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2266f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2266fc:
    // 0x2266fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2266fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_226700:
    // 0x226700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_226704:
    // 0x226704: 0x82200  sll         $a0, $t0, 8
    ctx->pc = 0x226704u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_226708:
    // 0x226708: 0x884023  subu        $t0, $a0, $t0
    ctx->pc = 0x226708u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_22670c:
    // 0x22670c: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x22670cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_226710:
    // 0x226710: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x226710u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_226714:
    // 0x226714: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x226714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_226718:
    // 0x226718: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x226718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_22671c:
    // 0x22671c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22671cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_226720:
    // 0x226720: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x226720u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_226724:
    // 0x226724: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x226724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_226728:
    // 0x226728: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x226728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22672c:
    // 0x22672c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x22672cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_226730:
    // 0x226730: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x226730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_226734:
    // 0x226734: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x226734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226738:
    // 0x226738: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x226738u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_22673c:
    // 0x22673c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22673cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_226740:
    // 0x226740: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x226740u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_226744:
    // 0x226744: 0xc05d970  jal         func_1765C0
label_226748:
    if (ctx->pc == 0x226748u) {
        ctx->pc = 0x226748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226744u;
        // 0x226748: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22674Cu;
        goto label_22674c;
    }
    ctx->pc = 0x226744u;
    SET_GPR_U32(ctx, 31, 0x22674Cu);
    ctx->pc = 0x226748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226744u;
    // 0x226748: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1765C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1765C0u, 0x226744u, 0x22674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22674Cu;
label_22674c:
    // 0x22674c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x22674cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226750:
    // 0x226750: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226754:
    // 0x226754: 0xa02051ed  sb          $zero, 0x51ED($at)
    ctx->pc = 0x226754u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20973), (uint8_t)GPR_U32(ctx, 0));
label_226758:
    // 0x226758: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_22675c:
    // 0x22675c: 0xa4205092  sh          $zero, 0x5092($at)
    ctx->pc = 0x22675cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20626), (uint16_t)GPR_U32(ctx, 0));
label_226760:
    // 0x226760: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226764:
    // 0x226764: 0xa4205090  sh          $zero, 0x5090($at)
    ctx->pc = 0x226764u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20624), (uint16_t)GPR_U32(ctx, 0));
label_226768:
    // 0x226768: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_22676c:
    // 0x22676c: 0xa4205096  sh          $zero, 0x5096($at)
    ctx->pc = 0x22676cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20630), (uint16_t)GPR_U32(ctx, 0));
label_226770:
    // 0x226770: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226774:
    // 0x226774: 0xa4205094  sh          $zero, 0x5094($at)
    ctx->pc = 0x226774u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20628), (uint16_t)GPR_U32(ctx, 0));
label_226778:
    // 0x226778: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_22677c:
    // 0x22677c: 0xa420509a  sh          $zero, 0x509A($at)
    ctx->pc = 0x22677cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20634), (uint16_t)GPR_U32(ctx, 0));
label_226780:
    // 0x226780: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226784:
    // 0x226784: 0xa4205098  sh          $zero, 0x5098($at)
    ctx->pc = 0x226784u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20632), (uint16_t)GPR_U32(ctx, 0));
label_226788:
    // 0x226788: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_22678c:
    // 0x22678c: 0xa420509e  sh          $zero, 0x509E($at)
    ctx->pc = 0x22678cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20638), (uint16_t)GPR_U32(ctx, 0));
label_226790:
    // 0x226790: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226794:
    // 0x226794: 0xa420509c  sh          $zero, 0x509C($at)
    ctx->pc = 0x226794u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20636), (uint16_t)GPR_U32(ctx, 0));
label_226798:
    // 0x226798: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_22679c:
    // 0x22679c: 0xa42050a2  sh          $zero, 0x50A2($at)
    ctx->pc = 0x22679cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20642), (uint16_t)GPR_U32(ctx, 0));
label_2267a0:
    // 0x2267a0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2267a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2267a4:
    // 0x2267a4: 0xa42050a0  sh          $zero, 0x50A0($at)
    ctx->pc = 0x2267a4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20640), (uint16_t)GPR_U32(ctx, 0));
label_2267a8:
    // 0x2267a8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2267a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2267ac:
    // 0x2267ac: 0xa42050a6  sh          $zero, 0x50A6($at)
    ctx->pc = 0x2267acu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20646), (uint16_t)GPR_U32(ctx, 0));
label_2267b0:
    // 0x2267b0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2267b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2267b4:
    // 0x2267b4: 0xa42050a4  sh          $zero, 0x50A4($at)
    ctx->pc = 0x2267b4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20644), (uint16_t)GPR_U32(ctx, 0));
label_2267b8:
    // 0x2267b8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2267b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2267bc:
    // 0x2267bc: 0xa42050aa  sh          $zero, 0x50AA($at)
    ctx->pc = 0x2267bcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20650), (uint16_t)GPR_U32(ctx, 0));
label_2267c0:
    // 0x2267c0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2267c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2267c4:
    // 0x2267c4: 0xa42050a8  sh          $zero, 0x50A8($at)
    ctx->pc = 0x2267c4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20648), (uint16_t)GPR_U32(ctx, 0));
label_2267c8:
    // 0x2267c8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2267c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2267cc:
    // 0x2267cc: 0xa42050ae  sh          $zero, 0x50AE($at)
    ctx->pc = 0x2267ccu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20654), (uint16_t)GPR_U32(ctx, 0));
label_2267d0:
    // 0x2267d0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2267d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2267d4:
    // 0x2267d4: 0xa42050ac  sh          $zero, 0x50AC($at)
    ctx->pc = 0x2267d4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20652), (uint16_t)GPR_U32(ctx, 0));
label_2267d8:
    // 0x2267d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2267d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2267dc:
    // 0x2267dc: 0x3e00008  jr          $ra
label_2267e0:
    if (ctx->pc == 0x2267E0u) {
        ctx->pc = 0x2267E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2267DCu;
        // 0x2267e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2267E4u;
        goto label_2267e4;
    }
    ctx->pc = 0x2267DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2267E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2267DCu;
        // 0x2267e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2267DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2267E4u;
label_2267e4:
    // 0x2267e4: 0x0  nop
    ctx->pc = 0x2267e4u;
    // NOP
label_2267e8:
    // 0x2267e8: 0x0  nop
    ctx->pc = 0x2267e8u;
    // NOP
label_2267ec:
    // 0x2267ec: 0x0  nop
    ctx->pc = 0x2267ecu;
    // NOP
label_2267f0:
    // 0x2267f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2267f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2267f4:
    // 0x2267f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2267f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2267f8:
    // 0x2267f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2267f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2267fc:
    // 0x2267fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_226800:
    if (ctx->pc == 0x226800u) {
        ctx->pc = 0x226800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2267FCu;
        // 0x226800: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226804u;
        goto label_226804;
    }
    ctx->pc = 0x2267FCu;
    {
        const bool branch_taken_0x2267fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2267FCu;
        // 0x226800: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2267fc) {
            ctx->pc = 0x226818u;
            goto label_226818;
        }
    }
    ctx->pc = 0x226804u;
label_226804:
    // 0x226804: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x226804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226808:
    // 0x226808: 0xc05d970  jal         func_1765C0
label_22680c:
    if (ctx->pc == 0x22680Cu) {
        ctx->pc = 0x22680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226808u;
        // 0x22680c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226810u;
        goto label_226810;
    }
    ctx->pc = 0x226808u;
    SET_GPR_U32(ctx, 31, 0x226810u);
    ctx->pc = 0x22680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226808u;
    // 0x22680c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1765C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1765C0u, 0x226808u, 0x226810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226810u;
label_226810:
    // 0x226810: 0x10000004  b           . + 4 + (0x4 << 2)
label_226814:
    if (ctx->pc == 0x226814u) {
        ctx->pc = 0x226818u;
        goto label_226818;
    }
    ctx->pc = 0x226810u;
    {
        const bool branch_taken_0x226810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226810) {
            ctx->pc = 0x226824u;
            goto label_226824;
        }
    }
    ctx->pc = 0x226818u;
label_226818:
    // 0x226818: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x226818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22681c:
    // 0x22681c: 0xc05d970  jal         func_1765C0
label_226820:
    if (ctx->pc == 0x226820u) {
        ctx->pc = 0x226820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22681Cu;
        // 0x226820: 0x24a55090  addiu       $a1, $a1, 0x5090 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226824u;
        goto label_226824;
    }
    ctx->pc = 0x22681Cu;
    SET_GPR_U32(ctx, 31, 0x226824u);
    ctx->pc = 0x226820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22681Cu;
    // 0x226820: 0x24a55090  addiu       $a1, $a1, 0x5090 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1765C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1765C0u, 0x22681Cu, 0x226824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226824u;
label_226824:
    // 0x226824: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226828:
    // 0x226828: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22682c:
    // 0x22682c: 0xa02051ed  sb          $zero, 0x51ED($at)
    ctx->pc = 0x22682cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20973), (uint8_t)GPR_U32(ctx, 0));
label_226830:
    // 0x226830: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226834:
    // 0x226834: 0xa4205092  sh          $zero, 0x5092($at)
    ctx->pc = 0x226834u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20626), (uint16_t)GPR_U32(ctx, 0));
label_226838:
    // 0x226838: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_22683c:
    // 0x22683c: 0xa4205090  sh          $zero, 0x5090($at)
    ctx->pc = 0x22683cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20624), (uint16_t)GPR_U32(ctx, 0));
label_226840:
    // 0x226840: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226844:
    // 0x226844: 0xa4205096  sh          $zero, 0x5096($at)
    ctx->pc = 0x226844u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20630), (uint16_t)GPR_U32(ctx, 0));
label_226848:
    // 0x226848: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_22684c:
    // 0x22684c: 0xa4205094  sh          $zero, 0x5094($at)
    ctx->pc = 0x22684cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20628), (uint16_t)GPR_U32(ctx, 0));
label_226850:
    // 0x226850: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226854:
    // 0x226854: 0xa420509a  sh          $zero, 0x509A($at)
    ctx->pc = 0x226854u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20634), (uint16_t)GPR_U32(ctx, 0));
label_226858:
    // 0x226858: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_22685c:
    // 0x22685c: 0xa4205098  sh          $zero, 0x5098($at)
    ctx->pc = 0x22685cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20632), (uint16_t)GPR_U32(ctx, 0));
label_226860:
    // 0x226860: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226864:
    // 0x226864: 0xa420509e  sh          $zero, 0x509E($at)
    ctx->pc = 0x226864u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20638), (uint16_t)GPR_U32(ctx, 0));
label_226868:
    // 0x226868: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_22686c:
    // 0x22686c: 0xa420509c  sh          $zero, 0x509C($at)
    ctx->pc = 0x22686cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20636), (uint16_t)GPR_U32(ctx, 0));
label_226870:
    // 0x226870: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226874:
    // 0x226874: 0xa42050a2  sh          $zero, 0x50A2($at)
    ctx->pc = 0x226874u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20642), (uint16_t)GPR_U32(ctx, 0));
label_226878:
    // 0x226878: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_22687c:
    // 0x22687c: 0xa42050a0  sh          $zero, 0x50A0($at)
    ctx->pc = 0x22687cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20640), (uint16_t)GPR_U32(ctx, 0));
label_226880:
    // 0x226880: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226884:
    // 0x226884: 0xa42050a6  sh          $zero, 0x50A6($at)
    ctx->pc = 0x226884u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20646), (uint16_t)GPR_U32(ctx, 0));
label_226888:
    // 0x226888: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_22688c:
    // 0x22688c: 0xa42050a4  sh          $zero, 0x50A4($at)
    ctx->pc = 0x22688cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20644), (uint16_t)GPR_U32(ctx, 0));
label_226890:
    // 0x226890: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226894:
    // 0x226894: 0xa42050aa  sh          $zero, 0x50AA($at)
    ctx->pc = 0x226894u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20650), (uint16_t)GPR_U32(ctx, 0));
label_226898:
    // 0x226898: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_22689c:
    // 0x22689c: 0xa42050a8  sh          $zero, 0x50A8($at)
    ctx->pc = 0x22689cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20648), (uint16_t)GPR_U32(ctx, 0));
label_2268a0:
    // 0x2268a0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2268a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2268a4:
    // 0x2268a4: 0xa42050ae  sh          $zero, 0x50AE($at)
    ctx->pc = 0x2268a4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20654), (uint16_t)GPR_U32(ctx, 0));
label_2268a8:
    // 0x2268a8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2268a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2268ac:
    // 0x2268ac: 0xa42050ac  sh          $zero, 0x50AC($at)
    ctx->pc = 0x2268acu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20652), (uint16_t)GPR_U32(ctx, 0));
label_2268b0:
    // 0x2268b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2268b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2268b4:
    // 0x2268b4: 0x3e00008  jr          $ra
label_2268b8:
    if (ctx->pc == 0x2268B8u) {
        ctx->pc = 0x2268B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268B4u;
        // 0x2268b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2268BCu;
        goto label_2268bc;
    }
    ctx->pc = 0x2268B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2268B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268B4u;
        // 0x2268b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2268B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2268BCu;
label_2268bc:
    // 0x2268bc: 0x0  nop
    ctx->pc = 0x2268bcu;
    // NOP
label_2268c0:
    // 0x2268c0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2268c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2268c4:
    // 0x2268c4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x2268c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_2268c8:
    // 0x2268c8: 0x802651ed  lb          $a2, 0x51ED($at)
    ctx->pc = 0x2268c8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 20973)));
label_2268cc:
    // 0x2268cc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2268ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_2268d0:
    // 0x2268d0: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x2268d0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2268d4:
    // 0x2268d4: 0x24a55090  addiu       $a1, $a1, 0x5090
    ctx->pc = 0x2268d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20624));
label_2268d8:
    // 0x2268d8: 0x24635092  addiu       $v1, $v1, 0x5092
    ctx->pc = 0x2268d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20626));
label_2268dc:
    // 0x2268dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2268dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2268e0:
    // 0x2268e0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2268e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2268e4:
    // 0x2268e4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2268e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_2268e8:
    // 0x2268e8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2268e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2268ec:
    // 0x2268ec: 0xa4a70000  sh          $a3, 0x0($a1)
    ctx->pc = 0x2268ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 7));
label_2268f0:
    // 0x2268f0: 0x84850004  lh          $a1, 0x4($a0)
    ctx->pc = 0x2268f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_2268f4:
    // 0x2268f4: 0x802451ed  lb          $a0, 0x51ED($at)
    ctx->pc = 0x2268f4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 20973)));
label_2268f8:
    // 0x2268f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2268f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2268fc:
    // 0x2268fc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2268fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226900:
    // 0x226900: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x226900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_226904:
    // 0x226904: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x226904u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
label_226908:
    // 0x226908: 0x802351ed  lb          $v1, 0x51ED($at)
    ctx->pc = 0x226908u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 20973)));
label_22690c:
    // 0x22690c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22690cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_226910:
    // 0x226910: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226914:
    // 0x226914: 0x3e00008  jr          $ra
label_226918:
    if (ctx->pc == 0x226918u) {
        ctx->pc = 0x226918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226914u;
        // 0x226918: 0xa02351ed  sb          $v1, 0x51ED($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 20973), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22691Cu;
        goto label_22691c;
    }
    ctx->pc = 0x226914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226914u;
        // 0x226918: 0xa02351ed  sb          $v1, 0x51ED($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 20973), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22691Cu;
label_22691c:
    // 0x22691c: 0x0  nop
    ctx->pc = 0x22691cu;
    // NOP
label_226920:
    // 0x226920: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226924:
    // 0x226924: 0x8c8b0000  lw          $t3, 0x0($a0)
    ctx->pc = 0x226924u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_226928:
    // 0x226928: 0x802651ed  lb          $a2, 0x51ED($at)
    ctx->pc = 0x226928u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 20973)));
label_22692c:
    // 0x22692c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x22692cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_226930:
    // 0x226930: 0x3c0a002f  lui         $t2, 0x2F
    ctx->pc = 0x226930u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)47 << 16));
label_226934:
    // 0x226934: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x226934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_226938:
    // 0x226938: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x226938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22693c:
    // 0x22693c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x22693cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_226940:
    // 0x226940: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x226940u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
label_226944:
    // 0x226944: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x226944u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_226948:
    // 0x226948: 0x24a55090  addiu       $a1, $a1, 0x5090
    ctx->pc = 0x226948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20624));
label_22694c:
    // 0x22694c: 0x254a2574  addiu       $t2, $t2, 0x2574
    ctx->pc = 0x22694cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 9588));
label_226950:
    // 0x226950: 0xb4200  sll         $t0, $t3, 8
    ctx->pc = 0x226950u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
label_226954:
    // 0x226954: 0x24635092  addiu       $v1, $v1, 0x5092
    ctx->pc = 0x226954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20626));
label_226958:
    // 0x226958: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x226958u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_22695c:
    // 0x22695c: 0x10b5823  subu        $t3, $t0, $t3
    ctx->pc = 0x22695cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
label_226960:
    // 0x226960: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x226960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_226964:
    // 0x226964: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_226968:
    // 0x226968: 0xb30c0  sll         $a2, $t3, 3
    ctx->pc = 0x226968u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_22696c:
    // 0x22696c: 0x24e72578  addiu       $a3, $a3, 0x2578
    ctx->pc = 0x22696cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9592));
label_226970:
    // 0x226970: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x226970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
label_226974:
    // 0x226974: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x226974u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_226978:
    // 0x226978: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x226978u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_22697c:
    // 0x22697c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x22697cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    ctx->pc = 0x226980u;
    return;
}
