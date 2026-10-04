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


void FUN_0014eba0_part661(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x290fe0u: goto label_290fe0;
        case 0x290fe4u: goto label_290fe4;
        case 0x290fe8u: goto label_290fe8;
        case 0x290fecu: goto label_290fec;
        case 0x290ff0u: goto label_290ff0;
        case 0x290ff4u: goto label_290ff4;
        case 0x290ff8u: goto label_290ff8;
        case 0x290ffcu: goto label_290ffc;
        case 0x291000u: goto label_291000;
        case 0x291004u: goto label_291004;
        case 0x291008u: goto label_291008;
        case 0x29100cu: goto label_29100c;
        case 0x291010u: goto label_291010;
        case 0x291014u: goto label_291014;
        case 0x291018u: goto label_291018;
        case 0x29101cu: goto label_29101c;
        case 0x291020u: goto label_291020;
        case 0x291024u: goto label_291024;
        case 0x291028u: goto label_291028;
        case 0x29102cu: goto label_29102c;
        case 0x291030u: goto label_291030;
        case 0x291034u: goto label_291034;
        case 0x291038u: goto label_291038;
        case 0x29103cu: goto label_29103c;
        case 0x291040u: goto label_291040;
        case 0x291044u: goto label_291044;
        case 0x291048u: goto label_291048;
        case 0x29104cu: goto label_29104c;
        case 0x291050u: goto label_291050;
        case 0x291054u: goto label_291054;
        case 0x291058u: goto label_291058;
        case 0x29105cu: goto label_29105c;
        case 0x291060u: goto label_291060;
        case 0x291064u: goto label_291064;
        case 0x291068u: goto label_291068;
        case 0x29106cu: goto label_29106c;
        case 0x291070u: goto label_291070;
        case 0x291074u: goto label_291074;
        case 0x291078u: goto label_291078;
        case 0x29107cu: goto label_29107c;
        case 0x291080u: goto label_291080;
        case 0x291084u: goto label_291084;
        case 0x291088u: goto label_291088;
        case 0x29108cu: goto label_29108c;
        case 0x291090u: goto label_291090;
        case 0x291094u: goto label_291094;
        case 0x291098u: goto label_291098;
        case 0x29109cu: goto label_29109c;
        case 0x2910a0u: goto label_2910a0;
        case 0x2910a4u: goto label_2910a4;
        case 0x2910a8u: goto label_2910a8;
        case 0x2910acu: goto label_2910ac;
        case 0x2910b0u: goto label_2910b0;
        case 0x2910b4u: goto label_2910b4;
        case 0x2910b8u: goto label_2910b8;
        case 0x2910bcu: goto label_2910bc;
        case 0x2910c0u: goto label_2910c0;
        case 0x2910c4u: goto label_2910c4;
        case 0x2910c8u: goto label_2910c8;
        case 0x2910ccu: goto label_2910cc;
        case 0x2910d0u: goto label_2910d0;
        case 0x2910d4u: goto label_2910d4;
        case 0x2910d8u: goto label_2910d8;
        case 0x2910dcu: goto label_2910dc;
        case 0x2910e0u: goto label_2910e0;
        case 0x2910e4u: goto label_2910e4;
        case 0x2910e8u: goto label_2910e8;
        case 0x2910ecu: goto label_2910ec;
        case 0x2910f0u: goto label_2910f0;
        case 0x2910f4u: goto label_2910f4;
        case 0x2910f8u: goto label_2910f8;
        case 0x2910fcu: goto label_2910fc;
        case 0x291100u: goto label_291100;
        case 0x291104u: goto label_291104;
        case 0x291108u: goto label_291108;
        case 0x29110cu: goto label_29110c;
        case 0x291110u: goto label_291110;
        case 0x291114u: goto label_291114;
        case 0x291118u: goto label_291118;
        case 0x29111cu: goto label_29111c;
        case 0x291120u: goto label_291120;
        case 0x291124u: goto label_291124;
        case 0x291128u: goto label_291128;
        case 0x29112cu: goto label_29112c;
        case 0x291130u: goto label_291130;
        case 0x291134u: goto label_291134;
        case 0x291138u: goto label_291138;
        case 0x29113cu: goto label_29113c;
        case 0x291140u: goto label_291140;
        case 0x291144u: goto label_291144;
        case 0x291148u: goto label_291148;
        case 0x29114cu: goto label_29114c;
        case 0x291150u: goto label_291150;
        case 0x291154u: goto label_291154;
        case 0x291158u: goto label_291158;
        case 0x29115cu: goto label_29115c;
        case 0x291160u: goto label_291160;
        case 0x291164u: goto label_291164;
        case 0x291168u: goto label_291168;
        case 0x29116cu: goto label_29116c;
        case 0x291170u: goto label_291170;
        case 0x291174u: goto label_291174;
        case 0x291178u: goto label_291178;
        case 0x29117cu: goto label_29117c;
        case 0x291180u: goto label_291180;
        case 0x291184u: goto label_291184;
        case 0x291188u: goto label_291188;
        case 0x29118cu: goto label_29118c;
        case 0x291190u: goto label_291190;
        case 0x291194u: goto label_291194;
        case 0x291198u: goto label_291198;
        case 0x29119cu: goto label_29119c;
        case 0x2911a0u: goto label_2911a0;
        case 0x2911a4u: goto label_2911a4;
        case 0x2911a8u: goto label_2911a8;
        case 0x2911acu: goto label_2911ac;
        case 0x2911b0u: goto label_2911b0;
        case 0x2911b4u: goto label_2911b4;
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
        default: return;
    }

label_290fe0:
    // 0x290fe0: 0x373d  .word       0x0000373D                   # INVALID     $zero, $zero, 0x373D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290fe0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x290FE0 raw=0x0000373D");
 /* MITIGATED */
label_290fe4:
    // 0x290fe4: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290fe4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x290FE4 raw=0x00000035");
 /* MITIGATED */
label_290fe8:
    // 0x290fe8: 0x1a040  sll         $s4, $at, 1
    ctx->pc = 0x290fe8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290fec:
    // 0x290fec: 0x0  nop
    ctx->pc = 0x290fecu;
    // NOP
label_290ff0:
    // 0x290ff0: 0x3772  tlt         $zero, $zero, 221
    ctx->pc = 0x290ff0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_290ff4:
    // 0x290ff4: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x290ff4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x290FF4 raw=0x00000035");
 /* MITIGATED */
label_290ff8:
    // 0x290ff8: 0x1a040  sll         $s4, $at, 1
    ctx->pc = 0x290ff8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_290ffc:
    // 0x290ffc: 0x0  nop
    ctx->pc = 0x290ffcu;
    // NOP
label_291000:
    // 0x291000: 0x37a7  .word       0x000037A7                   # not         $a2, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291000u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_291004:
    // 0x291004: 0x25  move        $zero, $zero
    ctx->pc = 0x291004u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291008:
    // 0x291008: 0x12040  sll         $a0, $at, 1
    ctx->pc = 0x291008u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29100c:
    // 0x29100c: 0x0  nop
    ctx->pc = 0x29100cu;
    // NOP
label_291010:
    // 0x291010: 0x37cc  syscall     223
    ctx->pc = 0x291010u;
    ctx->pc = 0x291014u;
runtime->handleSyscall(rdram, ctx, 0xDFu);
label_291014:
    // 0x291014: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291014u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291014 raw=0x00000035");
 /* MITIGATED */
label_291018:
    // 0x291018: 0x1a040  sll         $s4, $at, 1
    ctx->pc = 0x291018u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29101c:
    // 0x29101c: 0x0  nop
    ctx->pc = 0x29101cu;
    // NOP
label_291020:
    // 0x291020: 0x3801  .word       0x00003801                   # INVALID     $zero, $zero, 0x3801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291020u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x291020 raw=0x00003801");
 /* MITIGATED */
label_291024:
    // 0x291024: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291024u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291024 raw=0x00000035");
 /* MITIGATED */
label_291028:
    // 0x291028: 0x1a040  sll         $s4, $at, 1
    ctx->pc = 0x291028u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29102c:
    // 0x29102c: 0x0  nop
    ctx->pc = 0x29102cu;
    // NOP
label_291030:
    // 0x291030: 0x3836  tne         $zero, $zero, 224
    ctx->pc = 0x291030u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291034:
    // 0x291034: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291034u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291034 raw=0x00000035");
 /* MITIGATED */
label_291038:
    // 0x291038: 0x1a040  sll         $s4, $at, 1
    ctx->pc = 0x291038u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29103c:
    // 0x29103c: 0x0  nop
    ctx->pc = 0x29103cu;
    // NOP
label_291040:
    // 0x291040: 0x386b  .word       0x0000386B                   # sltu        $a3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291040u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_291044:
    // 0x291044: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291044u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291044 raw=0x00000035");
 /* MITIGATED */
label_291048:
    // 0x291048: 0x1a040  sll         $s4, $at, 1
    ctx->pc = 0x291048u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29104c:
    // 0x29104c: 0x0  nop
    ctx->pc = 0x29104cu;
    // NOP
label_291050:
    // 0x291050: 0x38a0  .word       0x000038A0                   # add         $a3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291050u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_291054:
    // 0x291054: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291054u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291054 raw=0x00000035");
 /* MITIGATED */
label_291058:
    // 0x291058: 0x1a040  sll         $s4, $at, 1
    ctx->pc = 0x291058u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29105c:
    // 0x29105c: 0x0  nop
    ctx->pc = 0x29105cu;
    // NOP
label_291060:
    // 0x291060: 0x38d5  .word       0x000038D5                   # INVALID     $zero, $zero, 0x38D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291060u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291060 raw=0x000038D5");
 /* MITIGATED */
label_291064:
    // 0x291064: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291064u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291064 raw=0x00000035");
 /* MITIGATED */
label_291068:
    // 0x291068: 0x1a040  sll         $s4, $at, 1
    ctx->pc = 0x291068u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29106c:
    // 0x29106c: 0x0  nop
    ctx->pc = 0x29106cu;
    // NOP
label_291070:
    // 0x291070: 0x390a  .word       0x0000390A                   # movz        $a3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291070u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_291074:
    // 0x291074: 0x25  move        $zero, $zero
    ctx->pc = 0x291074u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291078:
    // 0x291078: 0x12040  sll         $a0, $at, 1
    ctx->pc = 0x291078u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29107c:
    // 0x29107c: 0x0  nop
    ctx->pc = 0x29107cu;
    // NOP
label_291080:
    // 0x291080: 0x392f  .word       0x0000392F                   # dsubu       $a3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291080u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_291084:
    // 0x291084: 0x25  move        $zero, $zero
    ctx->pc = 0x291084u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291088:
    // 0x291088: 0x12040  sll         $a0, $at, 1
    ctx->pc = 0x291088u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29108c:
    // 0x29108c: 0x0  nop
    ctx->pc = 0x29108cu;
    // NOP
label_291090:
    // 0x291090: 0x3954  .word       0x00003954                   # dsllv       $a3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291090u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_291094:
    // 0x291094: 0x25  move        $zero, $zero
    ctx->pc = 0x291094u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291098:
    // 0x291098: 0x12040  sll         $a0, $at, 1
    ctx->pc = 0x291098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_29109c:
    // 0x29109c: 0x0  nop
    ctx->pc = 0x29109cu;
    // NOP
label_2910a0:
    // 0x2910a0: 0x3979  .word       0x00003979                   # INVALID     $zero, $zero, 0x3979 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2910a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2910A0 raw=0x00003979");
 /* MITIGATED */
label_2910a4:
    // 0x2910a4: 0x25  move        $zero, $zero
    ctx->pc = 0x2910a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2910a8:
    // 0x2910a8: 0x12040  sll         $a0, $at, 1
    ctx->pc = 0x2910a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_2910ac:
    // 0x2910ac: 0x0  nop
    ctx->pc = 0x2910acu;
    // NOP
label_2910b0:
    // 0x2910b0: 0x399e  .word       0x0000399E                   # ddiv        $a3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2910b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2910B0 raw=0x0000399E");
 /* MITIGATED */
label_2910b4:
    // 0x2910b4: 0x25  move        $zero, $zero
    ctx->pc = 0x2910b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2910b8:
    // 0x2910b8: 0x12040  sll         $a0, $at, 1
    ctx->pc = 0x2910b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_2910bc:
    // 0x2910bc: 0x0  nop
    ctx->pc = 0x2910bcu;
    // NOP
label_2910c0:
    // 0x2910c0: 0x39c3  sra         $a3, $zero, 7
    ctx->pc = 0x2910c0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), 7));
label_2910c4:
    // 0x2910c4: 0x25  move        $zero, $zero
    ctx->pc = 0x2910c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2910c8:
    // 0x2910c8: 0x12040  sll         $a0, $at, 1
    ctx->pc = 0x2910c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_2910cc:
    // 0x2910cc: 0x0  nop
    ctx->pc = 0x2910ccu;
    // NOP
label_2910d0:
    // 0x2910d0: 0x39e8  .word       0x000039E8                   # mfsa        $a3 # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2910d0u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_2910d4:
    // 0x2910d4: 0x25  move        $zero, $zero
    ctx->pc = 0x2910d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2910d8:
    // 0x2910d8: 0x12040  sll         $a0, $at, 1
    ctx->pc = 0x2910d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_2910dc:
    // 0x2910dc: 0x0  nop
    ctx->pc = 0x2910dcu;
    // NOP
label_2910e0:
    // 0x2910e0: 0x3a0d  break       0, 232
    ctx->pc = 0x2910e0u;
    runtime->handleBreak(rdram, ctx);
label_2910e4:
    // 0x2910e4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2910e4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2910e8:
    // 0x2910e8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2910e8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2910ec:
    // 0x2910ec: 0x0  nop
    ctx->pc = 0x2910ecu;
    // NOP
label_2910f0:
    // 0x2910f0: 0x3a40  sll         $a3, $zero, 9
    ctx->pc = 0x2910f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2910f4:
    // 0x2910f4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2910f4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2910f8:
    // 0x2910f8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2910f8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2910fc:
    // 0x2910fc: 0x0  nop
    ctx->pc = 0x2910fcu;
    // NOP
label_291100:
    // 0x291100: 0x3a73  tltu        $zero, $zero, 233
    ctx->pc = 0x291100u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291104:
    // 0x291104: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291104u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291108:
    // 0x291108: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291108u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29110c:
    // 0x29110c: 0x0  nop
    ctx->pc = 0x29110cu;
    // NOP
label_291110:
    // 0x291110: 0x3aa6  .word       0x00003AA6                   # xor         $a3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_291114:
    // 0x291114: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291114u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291118:
    // 0x291118: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291118u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29111c:
    // 0x29111c: 0x0  nop
    ctx->pc = 0x29111cu;
    // NOP
label_291120:
    // 0x291120: 0x3ad9  .word       0x00003AD9                   # multu       $zero, $zero # 00003AC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291120u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_291124:
    // 0x291124: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291124u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291128:
    // 0x291128: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291128u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29112c:
    // 0x29112c: 0x0  nop
    ctx->pc = 0x29112cu;
    // NOP
label_291130:
    // 0x291130: 0x3b0c  syscall     236
    ctx->pc = 0x291130u;
    ctx->pc = 0x291134u;
runtime->handleSyscall(rdram, ctx, 0xECu);
label_291134:
    // 0x291134: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291134u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291138:
    // 0x291138: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291138u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29113c:
    // 0x29113c: 0x0  nop
    ctx->pc = 0x29113cu;
    // NOP
label_291140:
    // 0x291140: 0x3b3f  dsra32      $a3, $zero, 12
    ctx->pc = 0x291140u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 12));
label_291144:
    // 0x291144: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291144u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291148:
    // 0x291148: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291148u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29114c:
    // 0x29114c: 0x0  nop
    ctx->pc = 0x29114cu;
    // NOP
label_291150:
    // 0x291150: 0x3b72  tlt         $zero, $zero, 237
    ctx->pc = 0x291150u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291154:
    // 0x291154: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291154u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291158:
    // 0x291158: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291158u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29115c:
    // 0x29115c: 0x0  nop
    ctx->pc = 0x29115cu;
    // NOP
label_291160:
    // 0x291160: 0x3ba5  .word       0x00003BA5                   # move        $a3, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291160u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291164:
    // 0x291164: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291164u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291168:
    // 0x291168: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291168u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29116c:
    // 0x29116c: 0x0  nop
    ctx->pc = 0x29116cu;
    // NOP
label_291170:
    // 0x291170: 0x3bd8  .word       0x00003BD8                   # mult        $a3, $zero, $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x291170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_291174:
    // 0x291174: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291174u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291178:
    // 0x291178: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291178u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29117c:
    // 0x29117c: 0x0  nop
    ctx->pc = 0x29117cu;
    // NOP
label_291180:
    // 0x291180: 0x3c0b  .word       0x00003C0B                   # movn        $a3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291180u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_291184:
    // 0x291184: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291184u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291188:
    // 0x291188: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291188u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29118c:
    // 0x29118c: 0x0  nop
    ctx->pc = 0x29118cu;
    // NOP
label_291190:
    // 0x291190: 0x3c3e  dsrl32      $a3, $zero, 16
    ctx->pc = 0x291190u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) >> (32 + 16));
label_291194:
    // 0x291194: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x291194u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291198:
    // 0x291198: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291198u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29119c:
    // 0x29119c: 0x0  nop
    ctx->pc = 0x29119cu;
    // NOP
label_2911a0:
    // 0x2911a0: 0x3c71  tgeu        $zero, $zero, 241
    ctx->pc = 0x2911a0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2911a4:
    // 0x2911a4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2911a4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2911a8:
    // 0x2911a8: 0x19110  .word       0x00019110                   # mfhi        $s2 # 00010100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2911a8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2911ac:
    // 0x2911ac: 0x0  nop
    ctx->pc = 0x2911acu;
    // NOP
label_2911b0:
    // 0x2911b0: 0x3ca4  .word       0x00003CA4                   # and         $a3, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2911b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2911b4:
    // 0x2911b4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x2911b4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2911E0 raw=0x00003D3D");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291260 raw=0x00003ED5");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x291320 raw=0x00004139");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x291340 raw=0x0000419F");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x291360 raw=0x00004205");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x291394 raw=0x00000041");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2913A0 raw=0x00004305");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2913B4 raw=0x00000035");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2913D4 raw=0x00000035");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2913E4 raw=0x00000035");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2913F4 raw=0x00000035");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291424 raw=0x00000035");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291434 raw=0x00000035");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x291450 raw=0x0000455F");
 /* MITIGATED */
label_291454:
    // 0x291454: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291454u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291454 raw=0x00000035");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x291470 raw=0x000045B9");
 /* MITIGATED */
label_291474:
    // 0x291474: 0x9d  .word       0x0000009D                   # dmultu      $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291474u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x291474 raw=0x0000009D");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2914A4 raw=0x00000015");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2914C4 raw=0x00000015");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2914D4 raw=0x0000009C");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291500 raw=0x00004935");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x291534 raw=0x0000009C");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291564 raw=0x00000015");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2915D0 raw=0x00004D5F");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291604 raw=0x00000015");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x291614 raw=0x0000009D");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291644 raw=0x00000015");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x291670 raw=0x000050C5");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2916A8 raw=0x0000955C");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2916B4 raw=0x0000009F");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2916C4 raw=0x00000015");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2916D0 raw=0x000052DF");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2916F4 raw=0x0000009F");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291700 raw=0x00005435");
 /* MITIGATED */
label_291704:
    // 0x291704: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291704u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291704 raw=0x00000015");
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
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x291734 raw=0x0000009D");
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
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x291734 raw=0x0000009D");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x291750 raw=0x000055B9");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x291770 raw=0x00005677");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291784 raw=0x00000015");
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
    ctx->pc = 0x2917b0u;
    return;
}
