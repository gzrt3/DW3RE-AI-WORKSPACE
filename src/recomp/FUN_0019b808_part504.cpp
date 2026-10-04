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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2911b8u: goto label_2911b8;
        case 0x2911bcu: goto label_2911bc;
        case 0x2911c0u: goto label_2911c0;
        case 0x2911c4u: goto label_2911c4;
        case 0x2911c8u: goto label_2911c8;
        case 0x2911ccu: goto label_2911cc;
        case 0x2911d0u: goto label_2911d0;
        case 0x2911d4u: goto label_2911d4;
        case 0x2911d8u: goto label_2911d8;
        case 0x2911dcu: goto label_2911dc;
        case 0x2911e0u: goto label_2911e0;
        case 0x2911e4u: goto label_2911e4;
        case 0x2911e8u: goto label_2911e8;
        case 0x2911ecu: goto label_2911ec;
        case 0x2911f0u: goto label_2911f0;
        case 0x2911f4u: goto label_2911f4;
        case 0x2911f8u: goto label_2911f8;
        case 0x2911fcu: goto label_2911fc;
        case 0x291200u: goto label_291200;
        case 0x291204u: goto label_291204;
        case 0x291208u: goto label_291208;
        case 0x29120cu: goto label_29120c;
        case 0x291210u: goto label_291210;
        case 0x291214u: goto label_291214;
        case 0x291218u: goto label_291218;
        case 0x29121cu: goto label_29121c;
        case 0x291220u: goto label_291220;
        case 0x291224u: goto label_291224;
        case 0x291228u: goto label_291228;
        case 0x29122cu: goto label_29122c;
        case 0x291230u: goto label_291230;
        case 0x291234u: goto label_291234;
        case 0x291238u: goto label_291238;
        case 0x29123cu: goto label_29123c;
        case 0x291240u: goto label_291240;
        case 0x291244u: goto label_291244;
        case 0x291248u: goto label_291248;
        case 0x29124cu: goto label_29124c;
        case 0x291250u: goto label_291250;
        case 0x291254u: goto label_291254;
        case 0x291258u: goto label_291258;
        case 0x29125cu: goto label_29125c;
        case 0x291260u: goto label_291260;
        case 0x291264u: goto label_291264;
        case 0x291268u: goto label_291268;
        case 0x29126cu: goto label_29126c;
        case 0x291270u: goto label_291270;
        case 0x291274u: goto label_291274;
        case 0x291278u: goto label_291278;
        case 0x29127cu: goto label_29127c;
        case 0x291280u: goto label_291280;
        case 0x291284u: goto label_291284;
        case 0x291288u: goto label_291288;
        case 0x29128cu: goto label_29128c;
        case 0x291290u: goto label_291290;
        case 0x291294u: goto label_291294;
        case 0x291298u: goto label_291298;
        case 0x29129cu: goto label_29129c;
        case 0x2912a0u: goto label_2912a0;
        case 0x2912a4u: goto label_2912a4;
        case 0x2912a8u: goto label_2912a8;
        case 0x2912acu: goto label_2912ac;
        case 0x2912b0u: goto label_2912b0;
        case 0x2912b4u: goto label_2912b4;
        case 0x2912b8u: goto label_2912b8;
        case 0x2912bcu: goto label_2912bc;
        case 0x2912c0u: goto label_2912c0;
        case 0x2912c4u: goto label_2912c4;
        case 0x2912c8u: goto label_2912c8;
        case 0x2912ccu: goto label_2912cc;
        case 0x2912d0u: goto label_2912d0;
        case 0x2912d4u: goto label_2912d4;
        case 0x2912d8u: goto label_2912d8;
        case 0x2912dcu: goto label_2912dc;
        case 0x2912e0u: goto label_2912e0;
        case 0x2912e4u: goto label_2912e4;
        case 0x2912e8u: goto label_2912e8;
        case 0x2912ecu: goto label_2912ec;
        case 0x2912f0u: goto label_2912f0;
        case 0x2912f4u: goto label_2912f4;
        case 0x2912f8u: goto label_2912f8;
        case 0x2912fcu: goto label_2912fc;
        case 0x291300u: goto label_291300;
        case 0x291304u: goto label_291304;
        case 0x291308u: goto label_291308;
        case 0x29130cu: goto label_29130c;
        case 0x291310u: goto label_291310;
        case 0x291314u: goto label_291314;
        case 0x291318u: goto label_291318;
        case 0x29131cu: goto label_29131c;
        case 0x291320u: goto label_291320;
        case 0x291324u: goto label_291324;
        case 0x291328u: goto label_291328;
        case 0x29132cu: goto label_29132c;
        case 0x291330u: goto label_291330;
        case 0x291334u: goto label_291334;
        case 0x291338u: goto label_291338;
        case 0x29133cu: goto label_29133c;
        case 0x291340u: goto label_291340;
        case 0x291344u: goto label_291344;
        case 0x291348u: goto label_291348;
        case 0x29134cu: goto label_29134c;
        case 0x291350u: goto label_291350;
        case 0x291354u: goto label_291354;
        case 0x291358u: goto label_291358;
        case 0x29135cu: goto label_29135c;
        case 0x291360u: goto label_291360;
        case 0x291364u: goto label_291364;
        case 0x291368u: goto label_291368;
        case 0x29136cu: goto label_29136c;
        case 0x291370u: goto label_291370;
        case 0x291374u: goto label_291374;
        case 0x291378u: goto label_291378;
        case 0x29137cu: goto label_29137c;
        case 0x291380u: goto label_291380;
        case 0x291384u: goto label_291384;
        case 0x291388u: goto label_291388;
        case 0x29138cu: goto label_29138c;
        case 0x291390u: goto label_291390;
        case 0x291394u: goto label_291394;
        case 0x291398u: goto label_291398;
        case 0x29139cu: goto label_29139c;
        case 0x2913a0u: goto label_2913a0;
        case 0x2913a4u: goto label_2913a4;
        case 0x2913a8u: goto label_2913a8;
        case 0x2913acu: goto label_2913ac;
        case 0x2913b0u: goto label_2913b0;
        case 0x2913b4u: goto label_2913b4;
        case 0x2913b8u: goto label_2913b8;
        case 0x2913bcu: goto label_2913bc;
        case 0x2913c0u: goto label_2913c0;
        case 0x2913c4u: goto label_2913c4;
        case 0x2913c8u: goto label_2913c8;
        case 0x2913ccu: goto label_2913cc;
        case 0x2913d0u: goto label_2913d0;
        case 0x2913d4u: goto label_2913d4;
        case 0x2913d8u: goto label_2913d8;
        case 0x2913dcu: goto label_2913dc;
        case 0x2913e0u: goto label_2913e0;
        case 0x2913e4u: goto label_2913e4;
        case 0x2913e8u: goto label_2913e8;
        case 0x2913ecu: goto label_2913ec;
        case 0x2913f0u: goto label_2913f0;
        case 0x2913f4u: goto label_2913f4;
        case 0x2913f8u: goto label_2913f8;
        case 0x2913fcu: goto label_2913fc;
        case 0x291400u: goto label_291400;
        case 0x291404u: goto label_291404;
        case 0x291408u: goto label_291408;
        case 0x29140cu: goto label_29140c;
        case 0x291410u: goto label_291410;
        case 0x291414u: goto label_291414;
        case 0x291418u: goto label_291418;
        case 0x29141cu: goto label_29141c;
        case 0x291420u: goto label_291420;
        case 0x291424u: goto label_291424;
        case 0x291428u: goto label_291428;
        case 0x29142cu: goto label_29142c;
        case 0x291430u: goto label_291430;
        case 0x291434u: goto label_291434;
        case 0x291438u: goto label_291438;
        case 0x29143cu: goto label_29143c;
        case 0x291440u: goto label_291440;
        case 0x291444u: goto label_291444;
        case 0x291448u: goto label_291448;
        case 0x29144cu: goto label_29144c;
        case 0x291450u: goto label_291450;
        case 0x291454u: goto label_291454;
        case 0x291458u: goto label_291458;
        case 0x29145cu: goto label_29145c;
        case 0x291460u: goto label_291460;
        case 0x291464u: goto label_291464;
        case 0x291468u: goto label_291468;
        case 0x29146cu: goto label_29146c;
        case 0x291470u: goto label_291470;
        case 0x291474u: goto label_291474;
        case 0x291478u: goto label_291478;
        case 0x29147cu: goto label_29147c;
        case 0x291480u: goto label_291480;
        case 0x291484u: goto label_291484;
        case 0x291488u: goto label_291488;
        case 0x29148cu: goto label_29148c;
        case 0x291490u: goto label_291490;
        case 0x291494u: goto label_291494;
        case 0x291498u: goto label_291498;
        case 0x29149cu: goto label_29149c;
        case 0x2914a0u: goto label_2914a0;
        case 0x2914a4u: goto label_2914a4;
        case 0x2914a8u: goto label_2914a8;
        case 0x2914acu: goto label_2914ac;
        case 0x2914b0u: goto label_2914b0;
        case 0x2914b4u: goto label_2914b4;
        case 0x2914b8u: goto label_2914b8;
        case 0x2914bcu: goto label_2914bc;
        case 0x2914c0u: goto label_2914c0;
        case 0x2914c4u: goto label_2914c4;
        case 0x2914c8u: goto label_2914c8;
        case 0x2914ccu: goto label_2914cc;
        case 0x2914d0u: goto label_2914d0;
        case 0x2914d4u: goto label_2914d4;
        case 0x2914d8u: goto label_2914d8;
        case 0x2914dcu: goto label_2914dc;
        case 0x2914e0u: goto label_2914e0;
        case 0x2914e4u: goto label_2914e4;
        case 0x2914e8u: goto label_2914e8;
        case 0x2914ecu: goto label_2914ec;
        case 0x2914f0u: goto label_2914f0;
        case 0x2914f4u: goto label_2914f4;
        case 0x2914f8u: goto label_2914f8;
        case 0x2914fcu: goto label_2914fc;
        case 0x291500u: goto label_291500;
        case 0x291504u: goto label_291504;
        case 0x291508u: goto label_291508;
        case 0x29150cu: goto label_29150c;
        case 0x291510u: goto label_291510;
        case 0x291514u: goto label_291514;
        case 0x291518u: goto label_291518;
        case 0x29151cu: goto label_29151c;
        case 0x291520u: goto label_291520;
        case 0x291524u: goto label_291524;
        case 0x291528u: goto label_291528;
        case 0x29152cu: goto label_29152c;
        case 0x291530u: goto label_291530;
        case 0x291534u: goto label_291534;
        case 0x291538u: goto label_291538;
        case 0x29153cu: goto label_29153c;
        case 0x291540u: goto label_291540;
        case 0x291544u: goto label_291544;
        case 0x291548u: goto label_291548;
        case 0x29154cu: goto label_29154c;
        case 0x291550u: goto label_291550;
        case 0x291554u: goto label_291554;
        case 0x291558u: goto label_291558;
        case 0x29155cu: goto label_29155c;
        case 0x291560u: goto label_291560;
        case 0x291564u: goto label_291564;
        case 0x291568u: goto label_291568;
        case 0x29156cu: goto label_29156c;
        case 0x291570u: goto label_291570;
        case 0x291574u: goto label_291574;
        case 0x291578u: goto label_291578;
        case 0x29157cu: goto label_29157c;
        case 0x291580u: goto label_291580;
        case 0x291584u: goto label_291584;
        case 0x291588u: goto label_291588;
        case 0x29158cu: goto label_29158c;
        case 0x291590u: goto label_291590;
        case 0x291594u: goto label_291594;
        case 0x291598u: goto label_291598;
        case 0x29159cu: goto label_29159c;
        case 0x2915a0u: goto label_2915a0;
        case 0x2915a4u: goto label_2915a4;
        case 0x2915a8u: goto label_2915a8;
        case 0x2915acu: goto label_2915ac;
        case 0x2915b0u: goto label_2915b0;
        case 0x2915b4u: goto label_2915b4;
        case 0x2915b8u: goto label_2915b8;
        case 0x2915bcu: goto label_2915bc;
        case 0x2915c0u: goto label_2915c0;
        case 0x2915c4u: goto label_2915c4;
        case 0x2915c8u: goto label_2915c8;
        case 0x2915ccu: goto label_2915cc;
        case 0x2915d0u: goto label_2915d0;
        case 0x2915d4u: goto label_2915d4;
        case 0x2915d8u: goto label_2915d8;
        case 0x2915dcu: goto label_2915dc;
        case 0x2915e0u: goto label_2915e0;
        case 0x2915e4u: goto label_2915e4;
        case 0x2915e8u: goto label_2915e8;
        case 0x2915ecu: goto label_2915ec;
        case 0x2915f0u: goto label_2915f0;
        case 0x2915f4u: goto label_2915f4;
        case 0x2915f8u: goto label_2915f8;
        case 0x2915fcu: goto label_2915fc;
        case 0x291600u: goto label_291600;
        case 0x291604u: goto label_291604;
        case 0x291608u: goto label_291608;
        case 0x29160cu: goto label_29160c;
        case 0x291610u: goto label_291610;
        case 0x291614u: goto label_291614;
        case 0x291618u: goto label_291618;
        case 0x29161cu: goto label_29161c;
        case 0x291620u: goto label_291620;
        case 0x291624u: goto label_291624;
        case 0x291628u: goto label_291628;
        case 0x29162cu: goto label_29162c;
        case 0x291630u: goto label_291630;
        case 0x291634u: goto label_291634;
        case 0x291638u: goto label_291638;
        case 0x29163cu: goto label_29163c;
        case 0x291640u: goto label_291640;
        case 0x291644u: goto label_291644;
        case 0x291648u: goto label_291648;
        case 0x29164cu: goto label_29164c;
        case 0x291650u: goto label_291650;
        case 0x291654u: goto label_291654;
        case 0x291658u: goto label_291658;
        case 0x29165cu: goto label_29165c;
        case 0x291660u: goto label_291660;
        case 0x291664u: goto label_291664;
        case 0x291668u: goto label_291668;
        case 0x29166cu: goto label_29166c;
        case 0x291670u: goto label_291670;
        case 0x291674u: goto label_291674;
        case 0x291678u: goto label_291678;
        case 0x29167cu: goto label_29167c;
        case 0x291680u: goto label_291680;
        case 0x291684u: goto label_291684;
        case 0x291688u: goto label_291688;
        case 0x29168cu: goto label_29168c;
        case 0x291690u: goto label_291690;
        case 0x291694u: goto label_291694;
        case 0x291698u: goto label_291698;
        case 0x29169cu: goto label_29169c;
        case 0x2916a0u: goto label_2916a0;
        case 0x2916a4u: goto label_2916a4;
        case 0x2916a8u: goto label_2916a8;
        case 0x2916acu: goto label_2916ac;
        case 0x2916b0u: goto label_2916b0;
        case 0x2916b4u: goto label_2916b4;
        case 0x2916b8u: goto label_2916b8;
        case 0x2916bcu: goto label_2916bc;
        case 0x2916c0u: goto label_2916c0;
        case 0x2916c4u: goto label_2916c4;
        case 0x2916c8u: goto label_2916c8;
        case 0x2916ccu: goto label_2916cc;
        case 0x2916d0u: goto label_2916d0;
        case 0x2916d4u: goto label_2916d4;
        case 0x2916d8u: goto label_2916d8;
        case 0x2916dcu: goto label_2916dc;
        case 0x2916e0u: goto label_2916e0;
        case 0x2916e4u: goto label_2916e4;
        case 0x2916e8u: goto label_2916e8;
        case 0x2916ecu: goto label_2916ec;
        case 0x2916f0u: goto label_2916f0;
        case 0x2916f4u: goto label_2916f4;
        case 0x2916f8u: goto label_2916f8;
        case 0x2916fcu: goto label_2916fc;
        case 0x291700u: goto label_291700;
        case 0x291704u: goto label_291704;
        case 0x291708u: goto label_291708;
        case 0x29170cu: goto label_29170c;
        case 0x291710u: goto label_291710;
        case 0x291714u: goto label_291714;
        case 0x291718u: goto label_291718;
        case 0x29171cu: goto label_29171c;
        case 0x291720u: goto label_291720;
        case 0x291724u: goto label_291724;
        case 0x291728u: goto label_291728;
        case 0x29172cu: goto label_29172c;
        case 0x291730u: goto label_291730;
        case 0x291734u: goto label_291734;
        case 0x291738u: goto label_291738;
        case 0x29173cu: goto label_29173c;
        case 0x291740u: goto label_291740;
        case 0x291744u: goto label_291744;
        case 0x291748u: goto label_291748;
        case 0x29174cu: goto label_29174c;
        case 0x291750u: goto label_291750;
        case 0x291754u: goto label_291754;
        case 0x291758u: goto label_291758;
        case 0x29175cu: goto label_29175c;
        case 0x291760u: goto label_291760;
        case 0x291764u: goto label_291764;
        case 0x291768u: goto label_291768;
        case 0x29176cu: goto label_29176c;
        case 0x291770u: goto label_291770;
        case 0x291774u: goto label_291774;
        case 0x291778u: goto label_291778;
        case 0x29177cu: goto label_29177c;
        case 0x291780u: goto label_291780;
        case 0x291784u: goto label_291784;
        case 0x291788u: goto label_291788;
        case 0x29178cu: goto label_29178c;
        case 0x291790u: goto label_291790;
        case 0x291794u: goto label_291794;
        case 0x291798u: goto label_291798;
        case 0x29179cu: goto label_29179c;
        case 0x2917a0u: goto label_2917a0;
        case 0x2917a4u: goto label_2917a4;
        case 0x2917a8u: goto label_2917a8;
        case 0x2917acu: goto label_2917ac;
        case 0x2917b0u: goto label_2917b0;
        case 0x2917b4u: goto label_2917b4;
        case 0x2917b8u: goto label_2917b8;
        case 0x2917bcu: goto label_2917bc;
        case 0x2917c0u: goto label_2917c0;
        case 0x2917c4u: goto label_2917c4;
        case 0x2917c8u: goto label_2917c8;
        case 0x2917ccu: goto label_2917cc;
        case 0x2917d0u: goto label_2917d0;
        case 0x2917d4u: goto label_2917d4;
        case 0x2917d8u: goto label_2917d8;
        case 0x2917dcu: goto label_2917dc;
        case 0x2917e0u: goto label_2917e0;
        case 0x2917e4u: goto label_2917e4;
        case 0x2917e8u: goto label_2917e8;
        case 0x2917ecu: goto label_2917ec;
        case 0x2917f0u: goto label_2917f0;
        case 0x2917f4u: goto label_2917f4;
        case 0x2917f8u: goto label_2917f8;
        case 0x2917fcu: goto label_2917fc;
        case 0x291800u: goto label_291800;
        case 0x291804u: goto label_291804;
        case 0x291808u: goto label_291808;
        case 0x29180cu: goto label_29180c;
        case 0x291810u: goto label_291810;
        case 0x291814u: goto label_291814;
        case 0x291818u: goto label_291818;
        case 0x29181cu: goto label_29181c;
        case 0x291820u: goto label_291820;
        case 0x291824u: goto label_291824;
        case 0x291828u: goto label_291828;
        case 0x29182cu: goto label_29182c;
        case 0x291830u: goto label_291830;
        case 0x291834u: goto label_291834;
        case 0x291838u: goto label_291838;
        case 0x29183cu: goto label_29183c;
        case 0x291840u: goto label_291840;
        case 0x291844u: goto label_291844;
        case 0x291848u: goto label_291848;
        case 0x29184cu: goto label_29184c;
        case 0x291850u: goto label_291850;
        case 0x291854u: goto label_291854;
        case 0x291858u: goto label_291858;
        case 0x29185cu: goto label_29185c;
        case 0x291860u: goto label_291860;
        case 0x291864u: goto label_291864;
        case 0x291868u: goto label_291868;
        case 0x29186cu: goto label_29186c;
        case 0x291870u: goto label_291870;
        case 0x291874u: goto label_291874;
        case 0x291878u: goto label_291878;
        case 0x29187cu: goto label_29187c;
        case 0x291880u: goto label_291880;
        case 0x291884u: goto label_291884;
        case 0x291888u: goto label_291888;
        case 0x29188cu: goto label_29188c;
        case 0x291890u: goto label_291890;
        case 0x291894u: goto label_291894;
        case 0x291898u: goto label_291898;
        case 0x29189cu: goto label_29189c;
        case 0x2918a0u: goto label_2918a0;
        case 0x2918a4u: goto label_2918a4;
        case 0x2918a8u: goto label_2918a8;
        case 0x2918acu: goto label_2918ac;
        case 0x2918b0u: goto label_2918b0;
        case 0x2918b4u: goto label_2918b4;
        case 0x2918b8u: goto label_2918b8;
        case 0x2918bcu: goto label_2918bc;
        case 0x2918c0u: goto label_2918c0;
        case 0x2918c4u: goto label_2918c4;
        case 0x2918c8u: goto label_2918c8;
        case 0x2918ccu: goto label_2918cc;
        case 0x2918d0u: goto label_2918d0;
        case 0x2918d4u: goto label_2918d4;
        case 0x2918d8u: goto label_2918d8;
        case 0x2918dcu: goto label_2918dc;
        case 0x2918e0u: goto label_2918e0;
        case 0x2918e4u: goto label_2918e4;
        case 0x2918e8u: goto label_2918e8;
        case 0x2918ecu: goto label_2918ec;
        case 0x2918f0u: goto label_2918f0;
        case 0x2918f4u: goto label_2918f4;
        case 0x2918f8u: goto label_2918f8;
        case 0x2918fcu: goto label_2918fc;
        case 0x291900u: goto label_291900;
        case 0x291904u: goto label_291904;
        case 0x291908u: goto label_291908;
        case 0x29190cu: goto label_29190c;
        case 0x291910u: goto label_291910;
        case 0x291914u: goto label_291914;
        case 0x291918u: goto label_291918;
        case 0x29191cu: goto label_29191c;
        case 0x291920u: goto label_291920;
        case 0x291924u: goto label_291924;
        case 0x291928u: goto label_291928;
        case 0x29192cu: goto label_29192c;
        case 0x291930u: goto label_291930;
        case 0x291934u: goto label_291934;
        case 0x291938u: goto label_291938;
        case 0x29193cu: goto label_29193c;
        case 0x291940u: goto label_291940;
        case 0x291944u: goto label_291944;
        case 0x291948u: goto label_291948;
        case 0x29194cu: goto label_29194c;
        case 0x291950u: goto label_291950;
        case 0x291954u: goto label_291954;
        case 0x291958u: goto label_291958;
        case 0x29195cu: goto label_29195c;
        case 0x291960u: goto label_291960;
        case 0x291964u: goto label_291964;
        case 0x291968u: goto label_291968;
        case 0x29196cu: goto label_29196c;
        case 0x291970u: goto label_291970;
        case 0x291974u: goto label_291974;
        case 0x291978u: goto label_291978;
        case 0x29197cu: goto label_29197c;
        case 0x291980u: goto label_291980;
        case 0x291984u: goto label_291984;
        default: return;
    }

label_2911b8:
    // 0x2911b8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2911b8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2911bc:
    // 0x2911bc: 0x0  nop
    ctx->pc = 0x2911bcu;
    // NOP
label_2911c0:
    // 0x2911c0: 0x3cd7  .word       0x00003CD7                   # dsrav       $a3, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2911c0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2911c4:
    // 0x2911c4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2911c4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2911c8:
    // 0x2911c8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2911c8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2911cc:
    // 0x2911cc: 0x0  nop
    ctx->pc = 0x2911ccu;
    // NOP
label_2911d0:
    // 0x2911d0: 0x3d0a  .word       0x00003D0A                   # movz        $a3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2911d0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_2911d4:
    // 0x2911d4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2911d4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2911d8:
    // 0x2911d8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2911d8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2911dc:
    // 0x2911dc: 0x0  nop
    ctx->pc = 0x2911dcu;
    // NOP
label_2911e0:
    // 0x2911e0: 0x3d3d  .word       0x00003D3D                   # INVALID     $zero, $zero, 0x3D3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2911e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2911E0 raw=0x00003D3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2911e4:
    // 0x2911e4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2911e4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2911e8:
    // 0x2911e8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2911e8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2911ec:
    // 0x2911ec: 0x0  nop
    ctx->pc = 0x2911ecu;
    // NOP
label_2911f0:
    // 0x2911f0: 0x3d70  tge         $zero, $zero, 245
    ctx->pc = 0x2911f0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2911f4:
    // 0x2911f4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2911f4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2911f8:
    // 0x2911f8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2911f8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2911fc:
    // 0x2911fc: 0x0  nop
    ctx->pc = 0x2911fcu;
    // NOP
label_291200:
    // 0x291200: 0x3da3  .word       0x00003DA3                   # negu        $a3, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291200u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_291204:
    // 0x291204: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291204u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291208:
    // 0x291208: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291208u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29120c:
    // 0x29120c: 0x0  nop
    ctx->pc = 0x29120cu;
    // NOP
label_291210:
    // 0x291210: 0x3dd6  .word       0x00003DD6                   # dsrlv       $a3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291210u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_291214:
    // 0x291214: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291214u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291218:
    // 0x291218: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291218u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29121c:
    // 0x29121c: 0x0  nop
    ctx->pc = 0x29121cu;
    // NOP
label_291220:
    // 0x291220: 0x3e09  .word       0x00003E09                   # jalr        $a3, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
label_291224:
    if (ctx->pc == 0x291224u) {
        ctx->pc = 0x291224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291220u;
        // 0x291224: 0x33  tltu        $zero, $zero, 0 (Delay Slot)
        if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x291228u;
        goto label_291228;
    }
    ctx->pc = 0x291220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 7, 0x291228u);
        ctx->pc = 0x291224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291220u;
        // 0x291224: 0x33  tltu        $zero, $zero, 0 (Delay Slot)
        if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291220u, 0x291228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291228u;
label_291228:
    // 0x291228: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291228u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29122c:
    // 0x29122c: 0x0  nop
    ctx->pc = 0x29122cu;
    // NOP
label_291230:
    // 0x291230: 0x3e3c  dsll32      $a3, $zero, 24
    ctx->pc = 0x291230u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << (32 + 24));
label_291234:
    // 0x291234: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291234u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291238:
    // 0x291238: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291238u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29123c:
    // 0x29123c: 0x0  nop
    ctx->pc = 0x29123cu;
    // NOP
label_291240:
    // 0x291240: 0x3e6f  .word       0x00003E6F                   # dsubu       $a3, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291240u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_291244:
    // 0x291244: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291244u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291248:
    // 0x291248: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291248u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29124c:
    // 0x29124c: 0x0  nop
    ctx->pc = 0x29124cu;
    // NOP
label_291250:
    // 0x291250: 0x3ea2  .word       0x00003EA2                   # neg         $a3, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291250u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_291254:
    // 0x291254: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291254u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291258:
    // 0x291258: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291258u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29125c:
    // 0x29125c: 0x0  nop
    ctx->pc = 0x29125cu;
    // NOP
label_291260:
    // 0x291260: 0x3ed5  .word       0x00003ED5                   # INVALID     $zero, $zero, 0x3ED5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291260u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291260 raw=0x00003ED5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291264:
    // 0x291264: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291264u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291268:
    // 0x291268: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291268u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29126c:
    // 0x29126c: 0x0  nop
    ctx->pc = 0x29126cu;
    // NOP
label_291270:
    // 0x291270: 0x3f08  .word       0x00003F08                   # jr          $zero # 00003F00 <InstrIdType: CPU_SPECIAL>
label_291274:
    if (ctx->pc == 0x291274u) {
        ctx->pc = 0x291274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291270u;
        // 0x291274: 0x33  tltu        $zero, $zero, 0 (Delay Slot)
        if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x291278u;
        goto label_291278;
    }
    ctx->pc = 0x291270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x291274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291270u;
        // 0x291274: 0x33  tltu        $zero, $zero, 0 (Delay Slot)
        if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291270u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x291278u;
label_291278:
    // 0x291278: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291278u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29127c:
    // 0x29127c: 0x0  nop
    ctx->pc = 0x29127cu;
    // NOP
label_291280:
    // 0x291280: 0x3f3b  dsra        $a3, $zero, 28
    ctx->pc = 0x291280u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> 28);
label_291284:
    // 0x291284: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291284u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291288:
    // 0x291288: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291288u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29128c:
    // 0x29128c: 0x0  nop
    ctx->pc = 0x29128cu;
    // NOP
label_291290:
    // 0x291290: 0x3f6e  .word       0x00003F6E                   # dsub        $a3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291290u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_291294:
    // 0x291294: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291294u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291298:
    // 0x291298: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291298u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29129c:
    // 0x29129c: 0x0  nop
    ctx->pc = 0x29129cu;
    // NOP
label_2912a0:
    // 0x2912a0: 0x3fa1  .word       0x00003FA1                   # addu        $a3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2912a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2912a4:
    // 0x2912a4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2912a4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2912a8:
    // 0x2912a8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2912a8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2912ac:
    // 0x2912ac: 0x0  nop
    ctx->pc = 0x2912acu;
    // NOP
label_2912b0:
    // 0x2912b0: 0x3fd4  .word       0x00003FD4                   # dsllv       $a3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2912b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2912b4:
    // 0x2912b4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2912b4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2912b8:
    // 0x2912b8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2912b8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2912bc:
    // 0x2912bc: 0x0  nop
    ctx->pc = 0x2912bcu;
    // NOP
label_2912c0:
    // 0x2912c0: 0x4007  srav        $t0, $zero, $zero
    ctx->pc = 0x2912c0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2912c4:
    // 0x2912c4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2912c4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2912c8:
    // 0x2912c8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2912c8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2912cc:
    // 0x2912cc: 0x0  nop
    ctx->pc = 0x2912ccu;
    // NOP
label_2912d0:
    // 0x2912d0: 0x403a  dsrl        $t0, $zero, 0
    ctx->pc = 0x2912d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) >> 0);
label_2912d4:
    // 0x2912d4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2912d4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2912d8:
    // 0x2912d8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2912d8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2912dc:
    // 0x2912dc: 0x0  nop
    ctx->pc = 0x2912dcu;
    // NOP
label_2912e0:
    // 0x2912e0: 0x406d  .word       0x0000406D                   # daddu       $t0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2912e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2912e4:
    // 0x2912e4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2912e4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2912e8:
    // 0x2912e8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2912e8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2912ec:
    // 0x2912ec: 0x0  nop
    ctx->pc = 0x2912ecu;
    // NOP
label_2912f0:
    // 0x2912f0: 0x40a0  .word       0x000040A0                   # add         $t0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2912f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2912f4:
    // 0x2912f4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2912f4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2912f8:
    // 0x2912f8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2912f8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2912fc:
    // 0x2912fc: 0x0  nop
    ctx->pc = 0x2912fcu;
    // NOP
label_291300:
    // 0x291300: 0x40d3  .word       0x000040D3                   # mtlo        $zero # 000040C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291300u;
    ctx->lo = GPR_U64(ctx, 0);
label_291304:
    // 0x291304: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291304u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291308:
    // 0x291308: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291308u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29130c:
    // 0x29130c: 0x0  nop
    ctx->pc = 0x29130cu;
    // NOP
label_291310:
    // 0x291310: 0x4106  .word       0x00004106                   # srlv        $t0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291310u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_291314:
    // 0x291314: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291314u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291318:
    // 0x291318: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291318u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29131c:
    // 0x29131c: 0x0  nop
    ctx->pc = 0x29131cu;
    // NOP
label_291320:
    // 0x291320: 0x4139  .word       0x00004139                   # INVALID     $zero, $zero, 0x4139 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291320u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x291320 raw=0x00004139"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291324:
    // 0x291324: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291324u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291328:
    // 0x291328: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291328u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29132c:
    // 0x29132c: 0x0  nop
    ctx->pc = 0x29132cu;
    // NOP
label_291330:
    // 0x291330: 0x416c  .word       0x0000416C                   # dadd        $t0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291330u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_291334:
    // 0x291334: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291334u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291338:
    // 0x291338: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291338u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29133c:
    // 0x29133c: 0x0  nop
    ctx->pc = 0x29133cu;
    // NOP
label_291340:
    // 0x291340: 0x419f  .word       0x0000419F                   # ddivu       $t0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x291340 raw=0x0000419F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291344:
    // 0x291344: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291344u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291348:
    // 0x291348: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291348u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29134c:
    // 0x29134c: 0x0  nop
    ctx->pc = 0x29134cu;
    // NOP
label_291350:
    // 0x291350: 0x41d2  .word       0x000041D2                   # mflo        $t0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291350u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_291354:
    // 0x291354: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291354u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291358:
    // 0x291358: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291358u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29135c:
    // 0x29135c: 0x0  nop
    ctx->pc = 0x29135cu;
    // NOP
label_291360:
    // 0x291360: 0x4205  .word       0x00004205                   # INVALID     $zero, $zero, 0x4205 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x291360 raw=0x00004205"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291364:
    // 0x291364: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291364u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291368:
    // 0x291368: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291368u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29136c:
    // 0x29136c: 0x0  nop
    ctx->pc = 0x29136cu;
    // NOP
label_291370:
    // 0x291370: 0x4238  dsll        $t0, $zero, 8
    ctx->pc = 0x291370u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << 8);
label_291374:
    // 0x291374: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291374u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_291378:
    // 0x291378: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x291378u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29137c:
    // 0x29137c: 0x0  nop
    ctx->pc = 0x29137cu;
    // NOP
label_291380:
    // 0x291380: 0x427e  dsrl32      $t0, $zero, 9
    ctx->pc = 0x291380u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) >> (32 + 9));
label_291384:
    // 0x291384: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291384u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_291388:
    // 0x291388: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x291388u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29138c:
    // 0x29138c: 0x0  nop
    ctx->pc = 0x29138cu;
    // NOP
label_291390:
    // 0x291390: 0x42c4  .word       0x000042C4                   # sllv        $t0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291390u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_291394:
    // 0x291394: 0x41  .word       0x00000041                   # INVALID     $zero, $zero, 0x41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291394u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x291394 raw=0x00000041"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291398:
    // 0x291398: 0x207a0  .word       0x000207A0                   # add         $zero, $zero, $v0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291398u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29139c:
    // 0x29139c: 0x0  nop
    ctx->pc = 0x29139cu;
    // NOP
label_2913a0:
    // 0x2913a0: 0x4305  .word       0x00004305                   # INVALID     $zero, $zero, 0x4305 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2913a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2913A0 raw=0x00004305"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2913a4:
    // 0x2913a4: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2913a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2913a8:
    // 0x2913a8: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2913a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2913ac:
    // 0x2913ac: 0x0  nop
    ctx->pc = 0x2913acu;
    // NOP
label_2913b0:
    // 0x2913b0: 0x434b  .word       0x0000434B                   # movn        $t0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2913b0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_2913b4:
    // 0x2913b4: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2913b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2913B4 raw=0x00000035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2913b8:
    // 0x2913b8: 0x1a500  sll         $s4, $at, 20
    ctx->pc = 0x2913b8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_2913bc:
    // 0x2913bc: 0x0  nop
    ctx->pc = 0x2913bcu;
    // NOP
label_2913c0:
    // 0x2913c0: 0x4380  sll         $t0, $zero, 14
    ctx->pc = 0x2913c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_2913c4:
    // 0x2913c4: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2913c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2913c8:
    // 0x2913c8: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2913c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2913cc:
    // 0x2913cc: 0x0  nop
    ctx->pc = 0x2913ccu;
    // NOP
label_2913d0:
    // 0x2913d0: 0x43c6  .word       0x000043C6                   # srlv        $t0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2913d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2913d4:
    // 0x2913d4: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2913d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2913D4 raw=0x00000035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2913d8:
    // 0x2913d8: 0x1a500  sll         $s4, $at, 20
    ctx->pc = 0x2913d8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_2913dc:
    // 0x2913dc: 0x0  nop
    ctx->pc = 0x2913dcu;
    // NOP
label_2913e0:
    // 0x2913e0: 0x43fb  dsra        $t0, $zero, 15
    ctx->pc = 0x2913e0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> 15);
label_2913e4:
    // 0x2913e4: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2913e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2913E4 raw=0x00000035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2913e8:
    // 0x2913e8: 0x1a500  sll         $s4, $at, 20
    ctx->pc = 0x2913e8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_2913ec:
    // 0x2913ec: 0x0  nop
    ctx->pc = 0x2913ecu;
    // NOP
label_2913f0:
    // 0x2913f0: 0x4430  tge         $zero, $zero, 272
    ctx->pc = 0x2913f0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2913f4:
    // 0x2913f4: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2913f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2913F4 raw=0x00000035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2913f8:
    // 0x2913f8: 0x1a500  sll         $s4, $at, 20
    ctx->pc = 0x2913f8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_2913fc:
    // 0x2913fc: 0x0  nop
    ctx->pc = 0x2913fcu;
    // NOP
label_291400:
    // 0x291400: 0x4465  .word       0x00004465                   # move        $t0, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291400u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291404:
    // 0x291404: 0x25  move        $zero, $zero
    ctx->pc = 0x291404u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291408:
    // 0x291408: 0x12180  sll         $a0, $at, 6
    ctx->pc = 0x291408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 6));
label_29140c:
    // 0x29140c: 0x0  nop
    ctx->pc = 0x29140cu;
    // NOP
label_291410:
    // 0x291410: 0x448a  .word       0x0000448A                   # movz        $t0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291410u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_291414:
    // 0x291414: 0x25  move        $zero, $zero
    ctx->pc = 0x291414u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291418:
    // 0x291418: 0x12180  sll         $a0, $at, 6
    ctx->pc = 0x291418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 6));
label_29141c:
    // 0x29141c: 0x0  nop
    ctx->pc = 0x29141cu;
    // NOP
label_291420:
    // 0x291420: 0x44af  .word       0x000044AF                   # dsubu       $t0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291420u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_291424:
    // 0x291424: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291424u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291424 raw=0x00000035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291428:
    // 0x291428: 0x1a500  sll         $s4, $at, 20
    ctx->pc = 0x291428u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_29142c:
    // 0x29142c: 0x0  nop
    ctx->pc = 0x29142cu;
    // NOP
label_291430:
    // 0x291430: 0x44e4  .word       0x000044E4                   # and         $t0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291430u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_291434:
    // 0x291434: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291434u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291434 raw=0x00000035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291438:
    // 0x291438: 0x1a500  sll         $s4, $at, 20
    ctx->pc = 0x291438u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_29143c:
    // 0x29143c: 0x0  nop
    ctx->pc = 0x29143cu;
    // NOP
label_291440:
    // 0x291440: 0x4519  .word       0x00004519                   # multu       $zero, $zero # 00004500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291440u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_291444:
    // 0x291444: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291444u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_291448:
    // 0x291448: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x291448u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29144c:
    // 0x29144c: 0x0  nop
    ctx->pc = 0x29144cu;
    // NOP
label_291450:
    // 0x291450: 0x455f  .word       0x0000455F                   # ddivu       $t0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291450u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x291450 raw=0x0000455F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291454:
    // 0x291454: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291454u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291454 raw=0x00000035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291458:
    // 0x291458: 0x1a500  sll         $s4, $at, 20
    ctx->pc = 0x291458u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_29145c:
    // 0x29145c: 0x0  nop
    ctx->pc = 0x29145cu;
    // NOP
label_291460:
    // 0x291460: 0x4594  .word       0x00004594                   # dsllv       $t0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291460u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_291464:
    // 0x291464: 0x25  move        $zero, $zero
    ctx->pc = 0x291464u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291468:
    // 0x291468: 0x12180  sll         $a0, $at, 6
    ctx->pc = 0x291468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 6));
label_29146c:
    // 0x29146c: 0x0  nop
    ctx->pc = 0x29146cu;
    // NOP
label_291470:
    // 0x291470: 0x45b9  .word       0x000045B9                   # INVALID     $zero, $zero, 0x45B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x291470 raw=0x000045B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291474:
    // 0x291474: 0x9d  .word       0x0000009D                   # dmultu      $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291474u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x291474 raw=0x0000009D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291478:
    // 0x291478: 0x4e690  .word       0x0004E690                   # mfhi        $gp # 00040680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291478u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_29147c:
    // 0x29147c: 0x0  nop
    ctx->pc = 0x29147cu;
    // NOP
label_291480:
    // 0x291480: 0x4656  .word       0x00004656                   # dsrlv       $t0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291480u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_291484:
    // 0x291484: 0x13  mtlo        $zero
    ctx->pc = 0x291484u;
    ctx->lo = GPR_U64(ctx, 0);
label_291488:
    // 0x291488: 0x92a0  .word       0x000092A0                   # add         $s2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291488u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_29148c:
    // 0x29148c: 0x0  nop
    ctx->pc = 0x29148cu;
    // NOP
label_291490:
    // 0x291490: 0x4669  .word       0x00004669                   # mtsa        $zero # 00004640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x291490u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_291494:
    // 0x291494: 0x9a  .word       0x0000009A                   # div         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291494u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_291498:
    // 0x291498: 0x4c930  tge         $zero, $a0, 804
    ctx->pc = 0x291498u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_29149c:
    // 0x29149c: 0x0  nop
    ctx->pc = 0x29149cu;
    // NOP
label_2914a0:
    // 0x2914a0: 0x4703  sra         $t0, $zero, 28
    ctx->pc = 0x2914a0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 0), 28));
label_2914a4:
    // 0x2914a4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2914a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2914A4 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2914a8:
    // 0x2914a8: 0xa768  .word       0x0000A768                   # mfsa        $s4 # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2914a8u;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_2914ac:
    // 0x2914ac: 0x0  nop
    ctx->pc = 0x2914acu;
    // NOP
label_2914b0:
    // 0x2914b0: 0x4718  .word       0x00004718                   # mult        $t0, $zero, $zero # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2914b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_2914b4:
    // 0x2914b4: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2914b4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2914b8:
    // 0x2914b8: 0x548c0  sll         $t1, $a1, 3
    ctx->pc = 0x2914b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2914bc:
    // 0x2914bc: 0x0  nop
    ctx->pc = 0x2914bcu;
    // NOP
label_2914c0:
    // 0x2914c0: 0x47c2  srl         $t0, $zero, 31
    ctx->pc = 0x2914c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), 31));
label_2914c4:
    // 0x2914c4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2914c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2914C4 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2914c8:
    // 0x2914c8: 0xa614  .word       0x0000A614                   # dsllv       $s4, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2914c8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2914cc:
    // 0x2914cc: 0x0  nop
    ctx->pc = 0x2914ccu;
    // NOP
label_2914d0:
    // 0x2914d0: 0x47d7  .word       0x000047D7                   # dsrav       $t0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2914d0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2914d4:
    // 0x2914d4: 0x9c  .word       0x0000009C                   # dmult       $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2914d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2914D4 raw=0x0000009C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2914d8:
    // 0x2914d8: 0x4dcb0  tge         $zero, $a0, 882
    ctx->pc = 0x2914d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_2914dc:
    // 0x2914dc: 0x0  nop
    ctx->pc = 0x2914dcu;
    // NOP
label_2914e0:
    // 0x2914e0: 0x4873  tltu        $zero, $zero, 289
    ctx->pc = 0x2914e0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2914e4:
    // 0x2914e4: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x2914e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2914e8:
    // 0x2914e8: 0xac90  .word       0x0000AC90                   # mfhi        $s5 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2914e8u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_2914ec:
    // 0x2914ec: 0x0  nop
    ctx->pc = 0x2914ecu;
    // NOP
label_2914f0:
    // 0x2914f0: 0x4889  .word       0x00004889                   # jalr        $t1, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
label_2914f4:
    if (ctx->pc == 0x2914F4u) {
        ctx->pc = 0x2914F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914F0u;
        // 0x2914f4: 0xac  .word       0x000000AC                   # dadd        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2914F8u;
        goto label_2914f8;
    }
    ctx->pc = 0x2914F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 9, 0x2914F8u);
        ctx->pc = 0x2914F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2914F0u;
        // 0x2914f4: 0xac  .word       0x000000AC                   # dadd        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2914F0u, 0x2914F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2914F8u;
label_2914f8:
    // 0x2914f8: 0x55a00  sll         $t3, $a1, 8
    ctx->pc = 0x2914f8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_2914fc:
    // 0x2914fc: 0x0  nop
    ctx->pc = 0x2914fcu;
    // NOP
label_291500:
    // 0x291500: 0x4935  .word       0x00004935                   # INVALID     $zero, $zero, 0x4935 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291500u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291500 raw=0x00004935"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291504:
    // 0x291504: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x291504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_291508:
    // 0x291508: 0xbb54  .word       0x0000BB54                   # dsllv       $s7, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291508u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29150c:
    // 0x29150c: 0x0  nop
    ctx->pc = 0x29150cu;
    // NOP
label_291510:
    // 0x291510: 0x494d  break       0, 293
    ctx->pc = 0x291510u;
    runtime->handleBreak(rdram, ctx);
label_291514:
    // 0x291514: 0xa4  .word       0x000000A4                   # and         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291514u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_291518:
    // 0x291518: 0x51e10  .word       0x00051E10                   # mfhi        $v1 # 00050600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291518u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_29151c:
    // 0x29151c: 0x0  nop
    ctx->pc = 0x29151cu;
    // NOP
label_291520:
    // 0x291520: 0x49f1  tgeu        $zero, $zero, 295
    ctx->pc = 0x291520u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291524:
    // 0x291524: 0x13  mtlo        $zero
    ctx->pc = 0x291524u;
    ctx->lo = GPR_U64(ctx, 0);
label_291528:
    // 0x291528: 0x9714  .word       0x00009714                   # dsllv       $s2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291528u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29152c:
    // 0x29152c: 0x0  nop
    ctx->pc = 0x29152cu;
    // NOP
label_291530:
    // 0x291530: 0x4a04  .word       0x00004A04                   # sllv        $t1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291530u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_291534:
    // 0x291534: 0x9c  .word       0x0000009C                   # dmult       $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291534u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x291534 raw=0x0000009C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291538:
    // 0x291538: 0x4db70  tge         $zero, $a0, 877
    ctx->pc = 0x291538u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_29153c:
    // 0x29153c: 0x0  nop
    ctx->pc = 0x29153cu;
    // NOP
label_291540:
    // 0x291540: 0x4aa0  .word       0x00004AA0                   # add         $t1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291540u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_291544:
    // 0x291544: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x291544u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_291548:
    // 0x291548: 0x9ebc  dsll32      $s3, $zero, 26
    ctx->pc = 0x291548u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << (32 + 26));
label_29154c:
    // 0x29154c: 0x0  nop
    ctx->pc = 0x29154cu;
    // NOP
label_291550:
    // 0x291550: 0x4ab4  teq         $zero, $zero, 298
    ctx->pc = 0x291550u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291554:
    // 0x291554: 0x99  .word       0x00000099                   # multu       $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291554u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_291558:
    // 0x291558: 0x4c6e0  .word       0x0004C6E0                   # add         $t8, $zero, $a0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291558u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_29155c:
    // 0x29155c: 0x0  nop
    ctx->pc = 0x29155cu;
    // NOP
label_291560:
    // 0x291560: 0x4b4d  break       0, 301
    ctx->pc = 0x291560u;
    runtime->handleBreak(rdram, ctx);
label_291564:
    // 0x291564: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291564u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291564 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291568:
    // 0x291568: 0xa0ec  .word       0x0000A0EC                   # dadd        $s4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291568u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, r); }
label_29156c:
    // 0x29156c: 0x0  nop
    ctx->pc = 0x29156cu;
    // NOP
label_291570:
    // 0x291570: 0x4b62  .word       0x00004B62                   # neg         $t1, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291570u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_291574:
    // 0x291574: 0x98  .word       0x00000098                   # mult        $zero, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x291574u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_291578:
    // 0x291578: 0x4bb90  .word       0x0004BB90                   # mfhi        $s7 # 00040380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291578u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_29157c:
    // 0x29157c: 0x0  nop
    ctx->pc = 0x29157cu;
    // NOP
label_291580:
    // 0x291580: 0x4bfa  dsrl        $t1, $zero, 15
    ctx->pc = 0x291580u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> 15);
label_291584:
    // 0x291584: 0x13  mtlo        $zero
    ctx->pc = 0x291584u;
    ctx->lo = GPR_U64(ctx, 0);
label_291588:
    // 0x291588: 0x97f0  tge         $zero, $zero, 607
    ctx->pc = 0x291588u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29158c:
    // 0x29158c: 0x0  nop
    ctx->pc = 0x29158cu;
    // NOP
label_291590:
    // 0x291590: 0x4c0d  break       0, 304
    ctx->pc = 0x291590u;
    runtime->handleBreak(rdram, ctx);
label_291594:
    // 0x291594: 0x9b  .word       0x0000009B                   # divu        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291594u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291598:
    // 0x291598: 0x4d1c0  sll         $k0, $a0, 7
    ctx->pc = 0x291598u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_29159c:
    // 0x29159c: 0x0  nop
    ctx->pc = 0x29159cu;
    // NOP
label_2915a0:
    // 0x2915a0: 0x4ca8  .word       0x00004CA8                   # mfsa        $t1 # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2915a0u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_2915a4:
    // 0x2915a4: 0x13  mtlo        $zero
    ctx->pc = 0x2915a4u;
    ctx->lo = GPR_U64(ctx, 0);
label_2915a8:
    // 0x2915a8: 0x91b0  tge         $zero, $zero, 582
    ctx->pc = 0x2915a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2915ac:
    // 0x2915ac: 0x0  nop
    ctx->pc = 0x2915acu;
    // NOP
label_2915b0:
    // 0x2915b0: 0x4cbb  dsra        $t1, $zero, 18
    ctx->pc = 0x2915b0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> 18);
label_2915b4:
    // 0x2915b4: 0x91  .word       0x00000091                   # mthi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2915b4u;
    ctx->hi = GPR_U64(ctx, 0);
label_2915b8:
    // 0x2915b8: 0x486d0  .word       0x000486D0                   # mfhi        $s0 # 000406C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2915b8u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2915bc:
    // 0x2915bc: 0x0  nop
    ctx->pc = 0x2915bcu;
    // NOP
label_2915c0:
    // 0x2915c0: 0x4d4c  syscall     309
    ctx->pc = 0x2915c0u;
    ctx->pc = 0x2915C4u;
runtime->handleSyscall(rdram, ctx, 0x135u);
label_2915c4:
    // 0x2915c4: 0x13  mtlo        $zero
    ctx->pc = 0x2915c4u;
    ctx->lo = GPR_U64(ctx, 0);
label_2915c8:
    // 0x2915c8: 0x9494  .word       0x00009494                   # dsllv       $s2, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2915c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2915cc:
    // 0x2915cc: 0x0  nop
    ctx->pc = 0x2915ccu;
    // NOP
label_2915d0:
    // 0x2915d0: 0x4d5f  .word       0x00004D5F                   # ddivu       $t1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2915d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2915D0 raw=0x00004D5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2915d4:
    // 0x2915d4: 0x97  .word       0x00000097                   # dsrav       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2915d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2915d8:
    // 0x2915d8: 0x4b7d0  .word       0x0004B7D0                   # mfhi        $s6 # 000407C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2915d8u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2915dc:
    // 0x2915dc: 0x0  nop
    ctx->pc = 0x2915dcu;
    // NOP
label_2915e0:
    // 0x2915e0: 0x4df6  tne         $zero, $zero, 311
    ctx->pc = 0x2915e0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2915e4:
    // 0x2915e4: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x2915e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2915e8:
    // 0x2915e8: 0x9df4  teq         $zero, $zero, 631
    ctx->pc = 0x2915e8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2915ec:
    // 0x2915ec: 0x0  nop
    ctx->pc = 0x2915ecu;
    // NOP
label_2915f0:
    // 0x2915f0: 0x4e0a  .word       0x00004E0A                   # movz        $t1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2915f0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_2915f4:
    // 0x2915f4: 0x9b  .word       0x0000009B                   # divu        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2915f4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2915f8:
    // 0x2915f8: 0x4d040  sll         $k0, $a0, 1
    ctx->pc = 0x2915f8u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2915fc:
    // 0x2915fc: 0x0  nop
    ctx->pc = 0x2915fcu;
    // NOP
label_291600:
    // 0x291600: 0x4ea5  .word       0x00004EA5                   # move        $t1, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291600u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291604:
    // 0x291604: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291604u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291604 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291608:
    // 0x291608: 0xa790  .word       0x0000A790                   # mfhi        $s4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291608u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_29160c:
    // 0x29160c: 0x0  nop
    ctx->pc = 0x29160cu;
    // NOP
label_291610:
    // 0x291610: 0x4eba  dsrl        $t1, $zero, 26
    ctx->pc = 0x291610u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> 26);
label_291614:
    // 0x291614: 0x9d  .word       0x0000009D                   # dmultu      $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291614u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x291614 raw=0x0000009D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291618:
    // 0x291618: 0x4e100  sll         $gp, $a0, 4
    ctx->pc = 0x291618u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_29161c:
    // 0x29161c: 0x0  nop
    ctx->pc = 0x29161cu;
    // NOP
label_291620:
    // 0x291620: 0x4f57  .word       0x00004F57                   # dsrav       $t1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291620u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_291624:
    // 0x291624: 0x13  mtlo        $zero
    ctx->pc = 0x291624u;
    ctx->lo = GPR_U64(ctx, 0);
label_291628:
    // 0x291628: 0x932c  .word       0x0000932C                   # dadd        $s2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291628u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_29162c:
    // 0x29162c: 0x0  nop
    ctx->pc = 0x29162cu;
    // NOP
label_291630:
    // 0x291630: 0x4f6a  .word       0x00004F6A                   # slt         $t1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291630u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_291634:
    // 0x291634: 0x98  .word       0x00000098                   # mult        $zero, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x291634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_291638:
    // 0x291638: 0x4be00  sll         $s7, $a0, 24
    ctx->pc = 0x291638u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_29163c:
    // 0x29163c: 0x0  nop
    ctx->pc = 0x29163cu;
    // NOP
label_291640:
    // 0x291640: 0x5002  srl         $t2, $zero, 0
    ctx->pc = 0x291640u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_291644:
    // 0x291644: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291644u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291644 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291648:
    // 0x291648: 0xa290  .word       0x0000A290                   # mfhi        $s4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291648u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_29164c:
    // 0x29164c: 0x0  nop
    ctx->pc = 0x29164cu;
    // NOP
label_291650:
    // 0x291650: 0x5017  dsrav       $t2, $zero, $zero
    ctx->pc = 0x291650u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_291654:
    // 0x291654: 0x9b  .word       0x0000009B                   # divu        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291654u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291658:
    // 0x291658: 0x4d7d0  .word       0x0004D7D0                   # mfhi        $k0 # 000407C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291658u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29165c:
    // 0x29165c: 0x0  nop
    ctx->pc = 0x29165cu;
    // NOP
label_291660:
    // 0x291660: 0x50b2  tlt         $zero, $zero, 322
    ctx->pc = 0x291660u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291664:
    // 0x291664: 0x13  mtlo        $zero
    ctx->pc = 0x291664u;
    ctx->lo = GPR_U64(ctx, 0);
label_291668:
    // 0x291668: 0x95ac  .word       0x000095AC                   # dadd        $s2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291668u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_29166c:
    // 0x29166c: 0x0  nop
    ctx->pc = 0x29166cu;
    // NOP
label_291670:
    // 0x291670: 0x50c5  .word       0x000050C5                   # INVALID     $zero, $zero, 0x50C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291670u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x291670 raw=0x000050C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291674:
    // 0x291674: 0x94  .word       0x00000094                   # dsllv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291674u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_291678:
    // 0x291678: 0x49d90  .word       0x00049D90                   # mfhi        $s3 # 00040580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291678u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_29167c:
    // 0x29167c: 0x0  nop
    ctx->pc = 0x29167cu;
    // NOP
label_291680:
    // 0x291680: 0x5159  .word       0x00005159                   # multu       $zero, $zero # 00005140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291680u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_291684:
    // 0x291684: 0x13  mtlo        $zero
    ctx->pc = 0x291684u;
    ctx->lo = GPR_U64(ctx, 0);
label_291688:
    // 0x291688: 0x9778  dsll        $s2, $zero, 29
    ctx->pc = 0x291688u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << 29);
label_29168c:
    // 0x29168c: 0x0  nop
    ctx->pc = 0x29168cu;
    // NOP
label_291690:
    // 0x291690: 0x516c  .word       0x0000516C                   # dadd        $t2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291690u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_291694:
    // 0x291694: 0xac  .word       0x000000AC                   # dadd        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291694u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_291698:
    // 0x291698: 0x55b90  .word       0x00055B90                   # mfhi        $t3 # 00050380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291698u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29169c:
    // 0x29169c: 0x0  nop
    ctx->pc = 0x29169cu;
    // NOP
label_2916a0:
    // 0x2916a0: 0x5218  .word       0x00005218                   # mult        $t2, $zero, $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2916a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_2916a4:
    // 0x2916a4: 0x13  mtlo        $zero
    ctx->pc = 0x2916a4u;
    ctx->lo = GPR_U64(ctx, 0);
label_2916a8:
    // 0x2916a8: 0x955c  .word       0x0000955C                   # dmult       $zero, $zero # 00009540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2916a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2916A8 raw=0x0000955C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2916ac:
    // 0x2916ac: 0x0  nop
    ctx->pc = 0x2916acu;
    // NOP
label_2916b0:
    // 0x2916b0: 0x522b  .word       0x0000522B                   # sltu        $t2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2916b0u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2916b4:
    // 0x2916b4: 0x9f  .word       0x0000009F                   # ddivu       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2916b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2916B4 raw=0x0000009F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2916b8:
    // 0x2916b8: 0x4f120  .word       0x0004F120                   # add         $fp, $zero, $a0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2916b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2916bc:
    // 0x2916bc: 0x0  nop
    ctx->pc = 0x2916bcu;
    // NOP
label_2916c0:
    // 0x2916c0: 0x52ca  .word       0x000052CA                   # movz        $t2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2916c0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_2916c4:
    // 0x2916c4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2916c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2916C4 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2916c8:
    // 0x2916c8: 0xa330  tge         $zero, $zero, 652
    ctx->pc = 0x2916c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2916cc:
    // 0x2916cc: 0x0  nop
    ctx->pc = 0x2916ccu;
    // NOP
label_2916d0:
    // 0x2916d0: 0x52df  .word       0x000052DF                   # ddivu       $t2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2916d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2916D0 raw=0x000052DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2916d4:
    // 0x2916d4: 0xa4  .word       0x000000A4                   # and         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2916d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2916d8:
    // 0x2916d8: 0x51850  .word       0x00051850                   # mfhi        $v1 # 00050040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2916d8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2916dc:
    // 0x2916dc: 0x0  nop
    ctx->pc = 0x2916dcu;
    // NOP
label_2916e0:
    // 0x2916e0: 0x5383  sra         $t2, $zero, 14
    ctx->pc = 0x2916e0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 0), 14));
label_2916e4:
    // 0x2916e4: 0x13  mtlo        $zero
    ctx->pc = 0x2916e4u;
    ctx->lo = GPR_U64(ctx, 0);
label_2916e8:
    // 0x2916e8: 0x94d0  .word       0x000094D0                   # mfhi        $s2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2916e8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2916ec:
    // 0x2916ec: 0x0  nop
    ctx->pc = 0x2916ecu;
    // NOP
label_2916f0:
    // 0x2916f0: 0x5396  .word       0x00005396                   # dsrlv       $t2, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2916f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2916f4:
    // 0x2916f4: 0x9f  .word       0x0000009F                   # ddivu       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2916f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2916F4 raw=0x0000009F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2916f8:
    // 0x2916f8: 0x4f4c0  sll         $fp, $a0, 19
    ctx->pc = 0x2916f8u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 4), 19));
label_2916fc:
    // 0x2916fc: 0x0  nop
    ctx->pc = 0x2916fcu;
    // NOP
label_291700:
    // 0x291700: 0x5435  .word       0x00005435                   # INVALID     $zero, $zero, 0x5435 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291700u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291700 raw=0x00005435"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291704:
    // 0x291704: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291704u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291704 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291708:
    // 0x291708: 0xa7a4  .word       0x0000A7A4                   # and         $s4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291708u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29170c:
    // 0x29170c: 0x0  nop
    ctx->pc = 0x29170cu;
    // NOP
label_291710:
    // 0x291710: 0x544a  .word       0x0000544A                   # movz        $t2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291710u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_291714:
    // 0x291714: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291714u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_291718:
    // 0x291718: 0x549a0  .word       0x000549A0                   # add         $t1, $zero, $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291718u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_29171c:
    // 0x29171c: 0x0  nop
    ctx->pc = 0x29171cu;
    // NOP
label_291720:
    // 0x291720: 0x54f4  teq         $zero, $zero, 339
    ctx->pc = 0x291720u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291724:
    // 0x291724: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x291724u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_291728:
    // 0x291728: 0x9df4  teq         $zero, $zero, 631
    ctx->pc = 0x291728u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29172c:
    // 0x29172c: 0x0  nop
    ctx->pc = 0x29172cu;
    // NOP
label_291730:
    // 0x291730: 0x5508  .word       0x00005508                   # jr          $zero # 00005500 <InstrIdType: CPU_SPECIAL>
label_291734:
    if (ctx->pc == 0x291734u) {
        ctx->pc = 0x291734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291730u;
        // 0x291734: 0x9d  .word       0x0000009D                   # dmultu      $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x291734 raw=0x0000009D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x291738u;
        goto label_291738;
    }
    ctx->pc = 0x291730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x291734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291730u;
        // 0x291734: 0x9d  .word       0x0000009D                   # dmultu      $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x291734 raw=0x0000009D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291730u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x291738u;
label_291738:
    // 0x291738: 0x4e6f0  tge         $zero, $a0, 923
    ctx->pc = 0x291738u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_29173c:
    // 0x29173c: 0x0  nop
    ctx->pc = 0x29173cu;
    // NOP
label_291740:
    // 0x291740: 0x55a5  .word       0x000055A5                   # move        $t2, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291740u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291744:
    // 0x291744: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x291744u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_291748:
    // 0x291748: 0x987c  dsll32      $s3, $zero, 1
    ctx->pc = 0x291748u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << (32 + 1));
label_29174c:
    // 0x29174c: 0x0  nop
    ctx->pc = 0x29174cu;
    // NOP
label_291750:
    // 0x291750: 0x55b9  .word       0x000055B9                   # INVALID     $zero, $zero, 0x55B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291750u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x291750 raw=0x000055B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291754:
    // 0x291754: 0xab  .word       0x000000AB                   # sltu        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291754u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_291758:
    // 0x291758: 0x55400  sll         $t2, $a1, 16
    ctx->pc = 0x291758u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_29175c:
    // 0x29175c: 0x0  nop
    ctx->pc = 0x29175cu;
    // NOP
label_291760:
    // 0x291760: 0x5664  .word       0x00005664                   # and         $t2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291760u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_291764:
    // 0x291764: 0x13  mtlo        $zero
    ctx->pc = 0x291764u;
    ctx->lo = GPR_U64(ctx, 0);
label_291768:
    // 0x291768: 0x9598  .word       0x00009598                   # mult        $s2, $zero, $zero # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x291768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_29176c:
    // 0x29176c: 0x0  nop
    ctx->pc = 0x29176cu;
    // NOP
label_291770:
    // 0x291770: 0x5677  .word       0x00005677                   # INVALID     $zero, $zero, 0x5677 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x291770 raw=0x00005677"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291774:
    // 0x291774: 0x8f  sync
    ctx->pc = 0x291774u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_291778:
    // 0x291778: 0x477b0  tge         $zero, $a0, 478
    ctx->pc = 0x291778u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_29177c:
    // 0x29177c: 0x0  nop
    ctx->pc = 0x29177cu;
    // NOP
label_291780:
    // 0x291780: 0x5706  .word       0x00005706                   # srlv        $t2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291780u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_291784:
    // 0x291784: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291784u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291784 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291788:
    // 0x291788: 0xa434  teq         $zero, $zero, 656
    ctx->pc = 0x291788u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29178c:
    // 0x29178c: 0x0  nop
    ctx->pc = 0x29178cu;
    // NOP
label_291790:
    // 0x291790: 0x571b  .word       0x0000571B                   # divu        $t2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291790u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291794:
    // 0x291794: 0x9b  .word       0x0000009B                   # divu        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291794u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291798:
    // 0x291798: 0x4d2f0  tge         $zero, $a0, 843
    ctx->pc = 0x291798u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_29179c:
    // 0x29179c: 0x0  nop
    ctx->pc = 0x29179cu;
    // NOP
label_2917a0:
    // 0x2917a0: 0x57b6  tne         $zero, $zero, 350
    ctx->pc = 0x2917a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2917a4:
    // 0x2917a4: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x2917a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2917a8:
    // 0x2917a8: 0x9b38  dsll        $s3, $zero, 12
    ctx->pc = 0x2917a8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << 12);
label_2917ac:
    // 0x2917ac: 0x0  nop
    ctx->pc = 0x2917acu;
    // NOP
label_2917b0:
    // 0x2917b0: 0x57ca  .word       0x000057CA                   # movz        $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2917b0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_2917b4:
    // 0x2917b4: 0x9a  .word       0x0000009A                   # div         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2917b4u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2917b8:
    // 0x2917b8: 0x4cf40  sll         $t9, $a0, 29
    ctx->pc = 0x2917b8u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 4), 29));
label_2917bc:
    // 0x2917bc: 0x0  nop
    ctx->pc = 0x2917bcu;
    // NOP
label_2917c0:
    // 0x2917c0: 0x5864  .word       0x00005864                   # and         $t3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2917c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2917c4:
    // 0x2917c4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2917c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2917C4 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2917c8:
    // 0x2917c8: 0xa718  .word       0x0000A718                   # mult        $s4, $zero, $zero # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2917c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_2917cc:
    // 0x2917cc: 0x0  nop
    ctx->pc = 0x2917ccu;
    // NOP
label_2917d0:
    // 0x2917d0: 0x5879  .word       0x00005879                   # INVALID     $zero, $zero, 0x5879 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2917d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2917D0 raw=0x00005879"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2917d4:
    // 0x2917d4: 0xa1  .word       0x000000A1                   # addu        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2917d4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2917d8:
    // 0x2917d8: 0x50680  sll         $zero, $a1, 26
    ctx->pc = 0x2917d8u;
    
label_2917dc:
    // 0x2917dc: 0x0  nop
    ctx->pc = 0x2917dcu;
    // NOP
label_2917e0:
    // 0x2917e0: 0x591a  .word       0x0000591A                   # div         $t3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2917e0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2917e4:
    // 0x2917e4: 0x13  mtlo        $zero
    ctx->pc = 0x2917e4u;
    ctx->lo = GPR_U64(ctx, 0);
label_2917e8:
    // 0x2917e8: 0x95ac  .word       0x000095AC                   # dadd        $s2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2917e8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2917ec:
    // 0x2917ec: 0x0  nop
    ctx->pc = 0x2917ecu;
    // NOP
label_2917f0:
    // 0x2917f0: 0x592d  .word       0x0000592D                   # daddu       $t3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2917f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2917f4:
    // 0x2917f4: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_2917f8:
    if (ctx->pc == 0x2917F8u) {
        ctx->pc = 0x2917F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917F4u;
        // 0x2917f8: 0x23f20  .word       0x00023F20                   # add         $a3, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2917FCu;
        goto label_2917fc;
    }
    ctx->pc = 0x2917F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2917F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917F4u;
        // 0x2917f8: 0x23f20  .word       0x00023F20                   # add         $a3, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2917F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2917FCu;
label_2917fc:
    // 0x2917fc: 0x0  nop
    ctx->pc = 0x2917fcu;
    // NOP
label_291800:
    // 0x291800: 0x5975  .word       0x00005975                   # INVALID     $zero, $zero, 0x5975 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291800 raw=0x00005975"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291804:
    // 0x291804: 0x4e  .word       0x0000004E                   # INVALID     $zero, $zero, 0x4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291804u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x291804 raw=0x0000004E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291808:
    // 0x291808: 0x26e20  .word       0x00026E20                   # add         $t5, $zero, $v0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291808u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_29180c:
    // 0x29180c: 0x0  nop
    ctx->pc = 0x29180cu;
    // NOP
label_291810:
    // 0x291810: 0x59c3  sra         $t3, $zero, 7
    ctx->pc = 0x291810u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 0), 7));
label_291814:
    // 0x291814: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291814u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_291818:
    // 0x291818: 0x2acb0  tge         $zero, $v0, 690
    ctx->pc = 0x291818u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_29181c:
    // 0x29181c: 0x0  nop
    ctx->pc = 0x29181cu;
    // NOP
label_291820:
    // 0x291820: 0x5a19  .word       0x00005A19                   # multu       $zero, $zero # 00005A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291820u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_291824:
    // 0x291824: 0x51  .word       0x00000051                   # mthi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291824u;
    ctx->hi = GPR_U64(ctx, 0);
label_291828:
    // 0x291828: 0x280b0  tge         $zero, $v0, 514
    ctx->pc = 0x291828u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_29182c:
    // 0x29182c: 0x0  nop
    ctx->pc = 0x29182cu;
    // NOP
label_291830:
    // 0x291830: 0x5a6a  .word       0x00005A6A                   # slt         $t3, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291830u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_291834:
    // 0x291834: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x291834u;
    
label_291838:
    // 0x291838: 0x3fcd0  .word       0x0003FCD0                   # mfhi        $ra # 000304C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291838u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_29183c:
    // 0x29183c: 0x0  nop
    ctx->pc = 0x29183cu;
    // NOP
label_291840:
    // 0x291840: 0x5aea  .word       0x00005AEA                   # slt         $t3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291840u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_291844:
    // 0x291844: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x291844u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_291848:
    // 0x291848: 0x9a84  .word       0x00009A84                   # sllv        $s3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291848u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29184c:
    // 0x29184c: 0x0  nop
    ctx->pc = 0x29184cu;
    // NOP
label_291850:
    // 0x291850: 0x5afe  dsrl32      $t3, $zero, 11
    ctx->pc = 0x291850u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) >> (32 + 11));
label_291854:
    // 0x291854: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x291854u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_291858:
    // 0x291858: 0x40e30  tge         $zero, $a0, 56
    ctx->pc = 0x291858u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_29185c:
    // 0x29185c: 0x0  nop
    ctx->pc = 0x29185cu;
    // NOP
label_291860:
    // 0x291860: 0x5b80  sll         $t3, $zero, 14
    ctx->pc = 0x291860u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_291864:
    // 0x291864: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291864u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291864 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291868:
    // 0x291868: 0xa038  dsll        $s4, $zero, 0
    ctx->pc = 0x291868u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << 0);
label_29186c:
    // 0x29186c: 0x0  nop
    ctx->pc = 0x29186cu;
    // NOP
label_291870:
    // 0x291870: 0x5b95  .word       0x00005B95                   # INVALID     $zero, $zero, 0x5B95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291870 raw=0x00005B95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291874:
    // 0x291874: 0x85  .word       0x00000085                   # INVALID     $zero, $zero, 0x85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291874u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x291874 raw=0x00000085"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291878:
    // 0x291878: 0x42290  .word       0x00042290                   # mfhi        $a0 # 00040280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291878u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_29187c:
    // 0x29187c: 0x0  nop
    ctx->pc = 0x29187cu;
    // NOP
label_291880:
    // 0x291880: 0x5c1a  .word       0x00005C1A                   # div         $t3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291880u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_291884:
    // 0x291884: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x291884u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_291888:
    // 0x291888: 0x9dcc  syscall     631
    ctx->pc = 0x291888u;
    ctx->pc = 0x29188Cu;
runtime->handleSyscall(rdram, ctx, 0x277u);
label_29188c:
    // 0x29188c: 0x0  nop
    ctx->pc = 0x29188cu;
    // NOP
label_291890:
    // 0x291890: 0x5c2e  .word       0x00005C2E                   # dsub        $t3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291890u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, r); }
label_291894:
    // 0x291894: 0x98  .word       0x00000098                   # mult        $zero, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x291894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_291898:
    // 0x291898: 0x4b900  sll         $s7, $a0, 4
    ctx->pc = 0x291898u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_29189c:
    // 0x29189c: 0x0  nop
    ctx->pc = 0x29189cu;
    // NOP
label_2918a0:
    // 0x2918a0: 0x5cc6  .word       0x00005CC6                   # srlv        $t3, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918a0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2918a4:
    // 0x2918a4: 0x13  mtlo        $zero
    ctx->pc = 0x2918a4u;
    ctx->lo = GPR_U64(ctx, 0);
label_2918a8:
    // 0x2918a8: 0x9570  tge         $zero, $zero, 597
    ctx->pc = 0x2918a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2918ac:
    // 0x2918ac: 0x0  nop
    ctx->pc = 0x2918acu;
    // NOP
label_2918b0:
    // 0x2918b0: 0x5cd9  .word       0x00005CD9                   # multu       $zero, $zero # 00005CC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918b0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_2918b4:
    // 0x2918b4: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2918b8:
    // 0x2918b8: 0x4aed0  .word       0x0004AED0                   # mfhi        $s5 # 000406C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918b8u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_2918bc:
    // 0x2918bc: 0x0  nop
    ctx->pc = 0x2918bcu;
    // NOP
label_2918c0:
    // 0x2918c0: 0x5d6f  .word       0x00005D6F                   # dsubu       $t3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2918c4:
    // 0x2918c4: 0x13  mtlo        $zero
    ctx->pc = 0x2918c4u;
    ctx->lo = GPR_U64(ctx, 0);
label_2918c8:
    // 0x2918c8: 0x96c4  .word       0x000096C4                   # sllv        $s2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2918cc:
    // 0x2918cc: 0x0  nop
    ctx->pc = 0x2918ccu;
    // NOP
label_2918d0:
    // 0x2918d0: 0x5d82  srl         $t3, $zero, 22
    ctx->pc = 0x2918d0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 0), 22));
label_2918d4:
    // 0x2918d4: 0x97  .word       0x00000097                   # dsrav       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2918d8:
    // 0x2918d8: 0x4b3a0  .word       0x0004B3A0                   # add         $s6, $zero, $a0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_2918dc:
    // 0x2918dc: 0x0  nop
    ctx->pc = 0x2918dcu;
    // NOP
label_2918e0:
    // 0x2918e0: 0x5e19  .word       0x00005E19                   # multu       $zero, $zero # 00005E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918e0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_2918e4:
    // 0x2918e4: 0x13  mtlo        $zero
    ctx->pc = 0x2918e4u;
    ctx->lo = GPR_U64(ctx, 0);
label_2918e8:
    // 0x2918e8: 0x95c0  sll         $s2, $zero, 23
    ctx->pc = 0x2918e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_2918ec:
    // 0x2918ec: 0x0  nop
    ctx->pc = 0x2918ecu;
    // NOP
label_2918f0:
    // 0x2918f0: 0x5e2c  .word       0x00005E2C                   # dadd        $t3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, r); }
label_2918f4:
    // 0x2918f4: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2918f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2918f8:
    // 0x2918f8: 0x4ffb0  tge         $zero, $a0, 1022
    ctx->pc = 0x2918f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_2918fc:
    // 0x2918fc: 0x0  nop
    ctx->pc = 0x2918fcu;
    // NOP
label_291900:
    // 0x291900: 0x5ecc  syscall     379
    ctx->pc = 0x291900u;
    ctx->pc = 0x291904u;
runtime->handleSyscall(rdram, ctx, 0x17Bu);
label_291904:
    // 0x291904: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291904u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291904 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291908:
    // 0x291908: 0xa3f8  dsll        $s4, $zero, 15
    ctx->pc = 0x291908u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << 15);
label_29190c:
    // 0x29190c: 0x0  nop
    ctx->pc = 0x29190cu;
    // NOP
label_291910:
    // 0x291910: 0x5ee1  .word       0x00005EE1                   # addu        $t3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291910u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_291914:
    // 0x291914: 0x9b  .word       0x0000009B                   # divu        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291914u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291918:
    // 0x291918: 0x4d020  add         $k0, $zero, $a0
    ctx->pc = 0x291918u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_29191c:
    // 0x29191c: 0x0  nop
    ctx->pc = 0x29191cu;
    // NOP
label_291920:
    // 0x291920: 0x5f7c  dsll32      $t3, $zero, 29
    ctx->pc = 0x291920u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) << (32 + 29));
label_291924:
    // 0x291924: 0x13  mtlo        $zero
    ctx->pc = 0x291924u;
    ctx->lo = GPR_U64(ctx, 0);
label_291928:
    // 0x291928: 0x964c  syscall     601
    ctx->pc = 0x291928u;
    ctx->pc = 0x29192Cu;
runtime->handleSyscall(rdram, ctx, 0x259u);
label_29192c:
    // 0x29192c: 0x0  nop
    ctx->pc = 0x29192cu;
    // NOP
label_291930:
    // 0x291930: 0x5f8f  .word       0x00005F8F                   # sync.p # 00005800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291930u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_291934:
    // 0x291934: 0x86  .word       0x00000086                   # srlv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291934u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_291938:
    // 0x291938: 0x42b40  sll         $a1, $a0, 13
    ctx->pc = 0x291938u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 13));
label_29193c:
    // 0x29193c: 0x0  nop
    ctx->pc = 0x29193cu;
    // NOP
label_291940:
    // 0x291940: 0x6015  .word       0x00006015                   # INVALID     $zero, $zero, 0x6015 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291940 raw=0x00006015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291944:
    // 0x291944: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291944u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291944 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291948:
    // 0x291948: 0xa3f8  dsll        $s4, $zero, 15
    ctx->pc = 0x291948u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << 15);
label_29194c:
    // 0x29194c: 0x0  nop
    ctx->pc = 0x29194cu;
    // NOP
label_291950:
    // 0x291950: 0x602a  slt         $t4, $zero, $zero
    ctx->pc = 0x291950u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_291954:
    // 0x291954: 0x9d  .word       0x0000009D                   # dmultu      $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291954u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x291954 raw=0x0000009D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291958:
    // 0x291958: 0x4e2c0  sll         $gp, $a0, 11
    ctx->pc = 0x291958u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
label_29195c:
    // 0x29195c: 0x0  nop
    ctx->pc = 0x29195cu;
    // NOP
label_291960:
    // 0x291960: 0x60c7  .word       0x000060C7                   # srav        $t4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291960u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_291964:
    // 0x291964: 0x13  mtlo        $zero
    ctx->pc = 0x291964u;
    ctx->lo = GPR_U64(ctx, 0);
label_291968:
    // 0x291968: 0x9304  .word       0x00009304                   # sllv        $s2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291968u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29196c:
    // 0x29196c: 0x0  nop
    ctx->pc = 0x29196cu;
    // NOP
label_291970:
    // 0x291970: 0x60da  .word       0x000060DA                   # div         $t4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291970u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_291974:
    // 0x291974: 0x94  .word       0x00000094                   # dsllv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291974u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_291978:
    // 0x291978: 0x499e0  .word       0x000499E0                   # add         $s3, $zero, $a0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291978u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_29197c:
    // 0x29197c: 0x0  nop
    ctx->pc = 0x29197cu;
    // NOP
label_291980:
    // 0x291980: 0x616e  .word       0x0000616E                   # dsub        $t4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291980u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_291984:
    // 0x291984: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x291984u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
    ctx->pc = 0x291988u;
    return;
}
