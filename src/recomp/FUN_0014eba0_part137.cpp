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


void FUN_0014eba0_part137(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x191220u: goto label_191220;
        case 0x191224u: goto label_191224;
        case 0x191228u: goto label_191228;
        case 0x19122cu: goto label_19122c;
        case 0x191230u: goto label_191230;
        case 0x191234u: goto label_191234;
        case 0x191238u: goto label_191238;
        case 0x19123cu: goto label_19123c;
        case 0x191240u: goto label_191240;
        case 0x191244u: goto label_191244;
        case 0x191248u: goto label_191248;
        case 0x19124cu: goto label_19124c;
        case 0x191250u: goto label_191250;
        case 0x191254u: goto label_191254;
        case 0x191258u: goto label_191258;
        case 0x19125cu: goto label_19125c;
        case 0x191260u: goto label_191260;
        case 0x191264u: goto label_191264;
        case 0x191268u: goto label_191268;
        case 0x19126cu: goto label_19126c;
        case 0x191270u: goto label_191270;
        case 0x191274u: goto label_191274;
        case 0x191278u: goto label_191278;
        case 0x19127cu: goto label_19127c;
        case 0x191280u: goto label_191280;
        case 0x191284u: goto label_191284;
        case 0x191288u: goto label_191288;
        case 0x19128cu: goto label_19128c;
        case 0x191290u: goto label_191290;
        case 0x191294u: goto label_191294;
        case 0x191298u: goto label_191298;
        case 0x19129cu: goto label_19129c;
        case 0x1912a0u: goto label_1912a0;
        case 0x1912a4u: goto label_1912a4;
        case 0x1912a8u: goto label_1912a8;
        case 0x1912acu: goto label_1912ac;
        case 0x1912b0u: goto label_1912b0;
        case 0x1912b4u: goto label_1912b4;
        case 0x1912b8u: goto label_1912b8;
        case 0x1912bcu: goto label_1912bc;
        case 0x1912c0u: goto label_1912c0;
        case 0x1912c4u: goto label_1912c4;
        case 0x1912c8u: goto label_1912c8;
        case 0x1912ccu: goto label_1912cc;
        case 0x1912d0u: goto label_1912d0;
        case 0x1912d4u: goto label_1912d4;
        case 0x1912d8u: goto label_1912d8;
        case 0x1912dcu: goto label_1912dc;
        case 0x1912e0u: goto label_1912e0;
        case 0x1912e4u: goto label_1912e4;
        case 0x1912e8u: goto label_1912e8;
        case 0x1912ecu: goto label_1912ec;
        case 0x1912f0u: goto label_1912f0;
        case 0x1912f4u: goto label_1912f4;
        case 0x1912f8u: goto label_1912f8;
        case 0x1912fcu: goto label_1912fc;
        case 0x191300u: goto label_191300;
        case 0x191304u: goto label_191304;
        case 0x191308u: goto label_191308;
        case 0x19130cu: goto label_19130c;
        case 0x191310u: goto label_191310;
        case 0x191314u: goto label_191314;
        case 0x191318u: goto label_191318;
        case 0x19131cu: goto label_19131c;
        case 0x191320u: goto label_191320;
        case 0x191324u: goto label_191324;
        case 0x191328u: goto label_191328;
        case 0x19132cu: goto label_19132c;
        case 0x191330u: goto label_191330;
        case 0x191334u: goto label_191334;
        case 0x191338u: goto label_191338;
        case 0x19133cu: goto label_19133c;
        case 0x191340u: goto label_191340;
        case 0x191344u: goto label_191344;
        case 0x191348u: goto label_191348;
        case 0x19134cu: goto label_19134c;
        case 0x191350u: goto label_191350;
        case 0x191354u: goto label_191354;
        case 0x191358u: goto label_191358;
        case 0x19135cu: goto label_19135c;
        case 0x191360u: goto label_191360;
        case 0x191364u: goto label_191364;
        case 0x191368u: goto label_191368;
        case 0x19136cu: goto label_19136c;
        case 0x191370u: goto label_191370;
        case 0x191374u: goto label_191374;
        case 0x191378u: goto label_191378;
        case 0x19137cu: goto label_19137c;
        case 0x191380u: goto label_191380;
        case 0x191384u: goto label_191384;
        case 0x191388u: goto label_191388;
        case 0x19138cu: goto label_19138c;
        case 0x191390u: goto label_191390;
        case 0x191394u: goto label_191394;
        case 0x191398u: goto label_191398;
        case 0x19139cu: goto label_19139c;
        case 0x1913a0u: goto label_1913a0;
        case 0x1913a4u: goto label_1913a4;
        case 0x1913a8u: goto label_1913a8;
        case 0x1913acu: goto label_1913ac;
        case 0x1913b0u: goto label_1913b0;
        case 0x1913b4u: goto label_1913b4;
        case 0x1913b8u: goto label_1913b8;
        case 0x1913bcu: goto label_1913bc;
        case 0x1913c0u: goto label_1913c0;
        case 0x1913c4u: goto label_1913c4;
        case 0x1913c8u: goto label_1913c8;
        case 0x1913ccu: goto label_1913cc;
        case 0x1913d0u: goto label_1913d0;
        case 0x1913d4u: goto label_1913d4;
        case 0x1913d8u: goto label_1913d8;
        case 0x1913dcu: goto label_1913dc;
        case 0x1913e0u: goto label_1913e0;
        case 0x1913e4u: goto label_1913e4;
        case 0x1913e8u: goto label_1913e8;
        case 0x1913ecu: goto label_1913ec;
        case 0x1913f0u: goto label_1913f0;
        case 0x1913f4u: goto label_1913f4;
        case 0x1913f8u: goto label_1913f8;
        case 0x1913fcu: goto label_1913fc;
        case 0x191400u: goto label_191400;
        case 0x191404u: goto label_191404;
        case 0x191408u: goto label_191408;
        case 0x19140cu: goto label_19140c;
        case 0x191410u: goto label_191410;
        case 0x191414u: goto label_191414;
        case 0x191418u: goto label_191418;
        case 0x19141cu: goto label_19141c;
        case 0x191420u: goto label_191420;
        case 0x191424u: goto label_191424;
        case 0x191428u: goto label_191428;
        case 0x19142cu: goto label_19142c;
        case 0x191430u: goto label_191430;
        case 0x191434u: goto label_191434;
        case 0x191438u: goto label_191438;
        case 0x19143cu: goto label_19143c;
        case 0x191440u: goto label_191440;
        case 0x191444u: goto label_191444;
        case 0x191448u: goto label_191448;
        case 0x19144cu: goto label_19144c;
        case 0x191450u: goto label_191450;
        case 0x191454u: goto label_191454;
        case 0x191458u: goto label_191458;
        case 0x19145cu: goto label_19145c;
        case 0x191460u: goto label_191460;
        case 0x191464u: goto label_191464;
        case 0x191468u: goto label_191468;
        case 0x19146cu: goto label_19146c;
        case 0x191470u: goto label_191470;
        case 0x191474u: goto label_191474;
        case 0x191478u: goto label_191478;
        case 0x19147cu: goto label_19147c;
        case 0x191480u: goto label_191480;
        case 0x191484u: goto label_191484;
        case 0x191488u: goto label_191488;
        case 0x19148cu: goto label_19148c;
        case 0x191490u: goto label_191490;
        case 0x191494u: goto label_191494;
        case 0x191498u: goto label_191498;
        case 0x19149cu: goto label_19149c;
        case 0x1914a0u: goto label_1914a0;
        case 0x1914a4u: goto label_1914a4;
        case 0x1914a8u: goto label_1914a8;
        case 0x1914acu: goto label_1914ac;
        case 0x1914b0u: goto label_1914b0;
        case 0x1914b4u: goto label_1914b4;
        case 0x1914b8u: goto label_1914b8;
        case 0x1914bcu: goto label_1914bc;
        case 0x1914c0u: goto label_1914c0;
        case 0x1914c4u: goto label_1914c4;
        case 0x1914c8u: goto label_1914c8;
        case 0x1914ccu: goto label_1914cc;
        case 0x1914d0u: goto label_1914d0;
        case 0x1914d4u: goto label_1914d4;
        case 0x1914d8u: goto label_1914d8;
        case 0x1914dcu: goto label_1914dc;
        case 0x1914e0u: goto label_1914e0;
        case 0x1914e4u: goto label_1914e4;
        case 0x1914e8u: goto label_1914e8;
        case 0x1914ecu: goto label_1914ec;
        case 0x1914f0u: goto label_1914f0;
        case 0x1914f4u: goto label_1914f4;
        case 0x1914f8u: goto label_1914f8;
        case 0x1914fcu: goto label_1914fc;
        case 0x191500u: goto label_191500;
        case 0x191504u: goto label_191504;
        case 0x191508u: goto label_191508;
        case 0x19150cu: goto label_19150c;
        case 0x191510u: goto label_191510;
        case 0x191514u: goto label_191514;
        case 0x191518u: goto label_191518;
        case 0x19151cu: goto label_19151c;
        case 0x191520u: goto label_191520;
        case 0x191524u: goto label_191524;
        case 0x191528u: goto label_191528;
        case 0x19152cu: goto label_19152c;
        case 0x191530u: goto label_191530;
        case 0x191534u: goto label_191534;
        case 0x191538u: goto label_191538;
        case 0x19153cu: goto label_19153c;
        case 0x191540u: goto label_191540;
        case 0x191544u: goto label_191544;
        case 0x191548u: goto label_191548;
        case 0x19154cu: goto label_19154c;
        case 0x191550u: goto label_191550;
        case 0x191554u: goto label_191554;
        case 0x191558u: goto label_191558;
        case 0x19155cu: goto label_19155c;
        case 0x191560u: goto label_191560;
        case 0x191564u: goto label_191564;
        case 0x191568u: goto label_191568;
        case 0x19156cu: goto label_19156c;
        case 0x191570u: goto label_191570;
        case 0x191574u: goto label_191574;
        case 0x191578u: goto label_191578;
        case 0x19157cu: goto label_19157c;
        case 0x191580u: goto label_191580;
        case 0x191584u: goto label_191584;
        case 0x191588u: goto label_191588;
        case 0x19158cu: goto label_19158c;
        case 0x191590u: goto label_191590;
        case 0x191594u: goto label_191594;
        case 0x191598u: goto label_191598;
        case 0x19159cu: goto label_19159c;
        case 0x1915a0u: goto label_1915a0;
        case 0x1915a4u: goto label_1915a4;
        case 0x1915a8u: goto label_1915a8;
        case 0x1915acu: goto label_1915ac;
        case 0x1915b0u: goto label_1915b0;
        case 0x1915b4u: goto label_1915b4;
        case 0x1915b8u: goto label_1915b8;
        case 0x1915bcu: goto label_1915bc;
        case 0x1915c0u: goto label_1915c0;
        case 0x1915c4u: goto label_1915c4;
        case 0x1915c8u: goto label_1915c8;
        case 0x1915ccu: goto label_1915cc;
        case 0x1915d0u: goto label_1915d0;
        case 0x1915d4u: goto label_1915d4;
        case 0x1915d8u: goto label_1915d8;
        case 0x1915dcu: goto label_1915dc;
        case 0x1915e0u: goto label_1915e0;
        case 0x1915e4u: goto label_1915e4;
        case 0x1915e8u: goto label_1915e8;
        case 0x1915ecu: goto label_1915ec;
        case 0x1915f0u: goto label_1915f0;
        case 0x1915f4u: goto label_1915f4;
        case 0x1915f8u: goto label_1915f8;
        case 0x1915fcu: goto label_1915fc;
        case 0x191600u: goto label_191600;
        case 0x191604u: goto label_191604;
        case 0x191608u: goto label_191608;
        case 0x19160cu: goto label_19160c;
        case 0x191610u: goto label_191610;
        case 0x191614u: goto label_191614;
        case 0x191618u: goto label_191618;
        case 0x19161cu: goto label_19161c;
        case 0x191620u: goto label_191620;
        case 0x191624u: goto label_191624;
        case 0x191628u: goto label_191628;
        case 0x19162cu: goto label_19162c;
        case 0x191630u: goto label_191630;
        case 0x191634u: goto label_191634;
        case 0x191638u: goto label_191638;
        case 0x19163cu: goto label_19163c;
        case 0x191640u: goto label_191640;
        case 0x191644u: goto label_191644;
        case 0x191648u: goto label_191648;
        case 0x19164cu: goto label_19164c;
        case 0x191650u: goto label_191650;
        case 0x191654u: goto label_191654;
        case 0x191658u: goto label_191658;
        case 0x19165cu: goto label_19165c;
        case 0x191660u: goto label_191660;
        case 0x191664u: goto label_191664;
        case 0x191668u: goto label_191668;
        case 0x19166cu: goto label_19166c;
        case 0x191670u: goto label_191670;
        case 0x191674u: goto label_191674;
        case 0x191678u: goto label_191678;
        case 0x19167cu: goto label_19167c;
        case 0x191680u: goto label_191680;
        case 0x191684u: goto label_191684;
        case 0x191688u: goto label_191688;
        case 0x19168cu: goto label_19168c;
        case 0x191690u: goto label_191690;
        case 0x191694u: goto label_191694;
        case 0x191698u: goto label_191698;
        case 0x19169cu: goto label_19169c;
        case 0x1916a0u: goto label_1916a0;
        case 0x1916a4u: goto label_1916a4;
        case 0x1916a8u: goto label_1916a8;
        case 0x1916acu: goto label_1916ac;
        case 0x1916b0u: goto label_1916b0;
        case 0x1916b4u: goto label_1916b4;
        case 0x1916b8u: goto label_1916b8;
        case 0x1916bcu: goto label_1916bc;
        case 0x1916c0u: goto label_1916c0;
        case 0x1916c4u: goto label_1916c4;
        case 0x1916c8u: goto label_1916c8;
        case 0x1916ccu: goto label_1916cc;
        case 0x1916d0u: goto label_1916d0;
        case 0x1916d4u: goto label_1916d4;
        case 0x1916d8u: goto label_1916d8;
        case 0x1916dcu: goto label_1916dc;
        case 0x1916e0u: goto label_1916e0;
        case 0x1916e4u: goto label_1916e4;
        case 0x1916e8u: goto label_1916e8;
        case 0x1916ecu: goto label_1916ec;
        case 0x1916f0u: goto label_1916f0;
        case 0x1916f4u: goto label_1916f4;
        case 0x1916f8u: goto label_1916f8;
        case 0x1916fcu: goto label_1916fc;
        case 0x191700u: goto label_191700;
        case 0x191704u: goto label_191704;
        case 0x191708u: goto label_191708;
        case 0x19170cu: goto label_19170c;
        case 0x191710u: goto label_191710;
        case 0x191714u: goto label_191714;
        case 0x191718u: goto label_191718;
        case 0x19171cu: goto label_19171c;
        case 0x191720u: goto label_191720;
        case 0x191724u: goto label_191724;
        case 0x191728u: goto label_191728;
        case 0x19172cu: goto label_19172c;
        case 0x191730u: goto label_191730;
        case 0x191734u: goto label_191734;
        case 0x191738u: goto label_191738;
        case 0x19173cu: goto label_19173c;
        case 0x191740u: goto label_191740;
        case 0x191744u: goto label_191744;
        case 0x191748u: goto label_191748;
        case 0x19174cu: goto label_19174c;
        case 0x191750u: goto label_191750;
        case 0x191754u: goto label_191754;
        case 0x191758u: goto label_191758;
        case 0x19175cu: goto label_19175c;
        case 0x191760u: goto label_191760;
        case 0x191764u: goto label_191764;
        case 0x191768u: goto label_191768;
        case 0x19176cu: goto label_19176c;
        case 0x191770u: goto label_191770;
        case 0x191774u: goto label_191774;
        case 0x191778u: goto label_191778;
        case 0x19177cu: goto label_19177c;
        case 0x191780u: goto label_191780;
        case 0x191784u: goto label_191784;
        case 0x191788u: goto label_191788;
        case 0x19178cu: goto label_19178c;
        case 0x191790u: goto label_191790;
        case 0x191794u: goto label_191794;
        case 0x191798u: goto label_191798;
        case 0x19179cu: goto label_19179c;
        case 0x1917a0u: goto label_1917a0;
        case 0x1917a4u: goto label_1917a4;
        case 0x1917a8u: goto label_1917a8;
        case 0x1917acu: goto label_1917ac;
        case 0x1917b0u: goto label_1917b0;
        case 0x1917b4u: goto label_1917b4;
        case 0x1917b8u: goto label_1917b8;
        case 0x1917bcu: goto label_1917bc;
        case 0x1917c0u: goto label_1917c0;
        case 0x1917c4u: goto label_1917c4;
        case 0x1917c8u: goto label_1917c8;
        case 0x1917ccu: goto label_1917cc;
        case 0x1917d0u: goto label_1917d0;
        case 0x1917d4u: goto label_1917d4;
        case 0x1917d8u: goto label_1917d8;
        case 0x1917dcu: goto label_1917dc;
        case 0x1917e0u: goto label_1917e0;
        case 0x1917e4u: goto label_1917e4;
        case 0x1917e8u: goto label_1917e8;
        case 0x1917ecu: goto label_1917ec;
        case 0x1917f0u: goto label_1917f0;
        case 0x1917f4u: goto label_1917f4;
        case 0x1917f8u: goto label_1917f8;
        case 0x1917fcu: goto label_1917fc;
        case 0x191800u: goto label_191800;
        case 0x191804u: goto label_191804;
        case 0x191808u: goto label_191808;
        case 0x19180cu: goto label_19180c;
        case 0x191810u: goto label_191810;
        case 0x191814u: goto label_191814;
        case 0x191818u: goto label_191818;
        case 0x19181cu: goto label_19181c;
        case 0x191820u: goto label_191820;
        case 0x191824u: goto label_191824;
        case 0x191828u: goto label_191828;
        case 0x19182cu: goto label_19182c;
        case 0x191830u: goto label_191830;
        case 0x191834u: goto label_191834;
        case 0x191838u: goto label_191838;
        case 0x19183cu: goto label_19183c;
        case 0x191840u: goto label_191840;
        case 0x191844u: goto label_191844;
        case 0x191848u: goto label_191848;
        case 0x19184cu: goto label_19184c;
        case 0x191850u: goto label_191850;
        case 0x191854u: goto label_191854;
        case 0x191858u: goto label_191858;
        case 0x19185cu: goto label_19185c;
        case 0x191860u: goto label_191860;
        case 0x191864u: goto label_191864;
        case 0x191868u: goto label_191868;
        case 0x19186cu: goto label_19186c;
        case 0x191870u: goto label_191870;
        case 0x191874u: goto label_191874;
        case 0x191878u: goto label_191878;
        case 0x19187cu: goto label_19187c;
        case 0x191880u: goto label_191880;
        case 0x191884u: goto label_191884;
        case 0x191888u: goto label_191888;
        case 0x19188cu: goto label_19188c;
        case 0x191890u: goto label_191890;
        case 0x191894u: goto label_191894;
        case 0x191898u: goto label_191898;
        case 0x19189cu: goto label_19189c;
        case 0x1918a0u: goto label_1918a0;
        case 0x1918a4u: goto label_1918a4;
        case 0x1918a8u: goto label_1918a8;
        case 0x1918acu: goto label_1918ac;
        case 0x1918b0u: goto label_1918b0;
        case 0x1918b4u: goto label_1918b4;
        case 0x1918b8u: goto label_1918b8;
        case 0x1918bcu: goto label_1918bc;
        case 0x1918c0u: goto label_1918c0;
        case 0x1918c4u: goto label_1918c4;
        case 0x1918c8u: goto label_1918c8;
        case 0x1918ccu: goto label_1918cc;
        case 0x1918d0u: goto label_1918d0;
        case 0x1918d4u: goto label_1918d4;
        case 0x1918d8u: goto label_1918d8;
        case 0x1918dcu: goto label_1918dc;
        case 0x1918e0u: goto label_1918e0;
        case 0x1918e4u: goto label_1918e4;
        case 0x1918e8u: goto label_1918e8;
        case 0x1918ecu: goto label_1918ec;
        case 0x1918f0u: goto label_1918f0;
        case 0x1918f4u: goto label_1918f4;
        case 0x1918f8u: goto label_1918f8;
        case 0x1918fcu: goto label_1918fc;
        case 0x191900u: goto label_191900;
        case 0x191904u: goto label_191904;
        case 0x191908u: goto label_191908;
        case 0x19190cu: goto label_19190c;
        case 0x191910u: goto label_191910;
        case 0x191914u: goto label_191914;
        case 0x191918u: goto label_191918;
        case 0x19191cu: goto label_19191c;
        case 0x191920u: goto label_191920;
        case 0x191924u: goto label_191924;
        case 0x191928u: goto label_191928;
        case 0x19192cu: goto label_19192c;
        case 0x191930u: goto label_191930;
        case 0x191934u: goto label_191934;
        case 0x191938u: goto label_191938;
        case 0x19193cu: goto label_19193c;
        case 0x191940u: goto label_191940;
        case 0x191944u: goto label_191944;
        case 0x191948u: goto label_191948;
        case 0x19194cu: goto label_19194c;
        case 0x191950u: goto label_191950;
        case 0x191954u: goto label_191954;
        case 0x191958u: goto label_191958;
        case 0x19195cu: goto label_19195c;
        case 0x191960u: goto label_191960;
        case 0x191964u: goto label_191964;
        case 0x191968u: goto label_191968;
        case 0x19196cu: goto label_19196c;
        case 0x191970u: goto label_191970;
        case 0x191974u: goto label_191974;
        case 0x191978u: goto label_191978;
        case 0x19197cu: goto label_19197c;
        case 0x191980u: goto label_191980;
        case 0x191984u: goto label_191984;
        case 0x191988u: goto label_191988;
        case 0x19198cu: goto label_19198c;
        case 0x191990u: goto label_191990;
        case 0x191994u: goto label_191994;
        case 0x191998u: goto label_191998;
        case 0x19199cu: goto label_19199c;
        case 0x1919a0u: goto label_1919a0;
        case 0x1919a4u: goto label_1919a4;
        case 0x1919a8u: goto label_1919a8;
        case 0x1919acu: goto label_1919ac;
        case 0x1919b0u: goto label_1919b0;
        case 0x1919b4u: goto label_1919b4;
        case 0x1919b8u: goto label_1919b8;
        case 0x1919bcu: goto label_1919bc;
        case 0x1919c0u: goto label_1919c0;
        case 0x1919c4u: goto label_1919c4;
        case 0x1919c8u: goto label_1919c8;
        case 0x1919ccu: goto label_1919cc;
        case 0x1919d0u: goto label_1919d0;
        case 0x1919d4u: goto label_1919d4;
        case 0x1919d8u: goto label_1919d8;
        case 0x1919dcu: goto label_1919dc;
        case 0x1919e0u: goto label_1919e0;
        case 0x1919e4u: goto label_1919e4;
        case 0x1919e8u: goto label_1919e8;
        case 0x1919ecu: goto label_1919ec;
        default: return;
    }

label_191220:
    // 0x191220: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_191224:
    if (ctx->pc == 0x191224u) {
        ctx->pc = 0x191224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191220u;
        // 0x191224: 0x46011000  add.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191228u;
        goto label_191228;
    }
    ctx->pc = 0x191220u;
    {
        const bool branch_taken_0x191220 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x191224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191220u;
        // 0x191224: 0x46011000  add.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191220) {
            ctx->pc = 0x19123Cu;
            goto label_19123c;
        }
    }
    ctx->pc = 0x191228u;
label_191228:
    // 0x191228: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x191228u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_19122c:
    // 0x19122c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x19122cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_191230:
    // 0x191230: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x191230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_191234:
    // 0x191234: 0x10000004  b           . + 4 + (0x4 << 2)
label_191238:
    if (ctx->pc == 0x191238u) {
        ctx->pc = 0x191238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191234u;
        // 0x191238: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19123Cu;
        goto label_19123c;
    }
    ctx->pc = 0x191234u;
    {
        const bool branch_taken_0x191234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191234u;
        // 0x191238: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x191234) {
            ctx->pc = 0x191248u;
            goto label_191248;
        }
    }
    ctx->pc = 0x19123Cu;
label_19123c:
    // 0x19123c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x19123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_191240:
    // 0x191240: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x191240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_191244:
    // 0x191244: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x191244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_191248:
    // 0x191248: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x191248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19124c:
    // 0x19124c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x19124cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_191250:
    // 0x191250: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x191250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_191254:
    // 0x191254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191258:
    // 0x191258: 0x0  nop
    ctx->pc = 0x191258u;
    // NOP
label_19125c:
    // 0x19125c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19125cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_191260:
    // 0x191260: 0x0  nop
    ctx->pc = 0x191260u;
    // NOP
label_191264:
    // 0x191264: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_191268:
    if (ctx->pc == 0x191268u) {
        ctx->pc = 0x191268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191264u;
        // 0x191268: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19126Cu;
        goto label_19126c;
    }
    ctx->pc = 0x191264u;
    {
        const bool branch_taken_0x191264 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x191268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191264u;
        // 0x191268: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191264) {
            ctx->pc = 0x191280u;
            goto label_191280;
        }
    }
    ctx->pc = 0x19126Cu;
label_19126c:
    // 0x19126c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19126cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_191270:
    // 0x191270: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x191270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_191274:
    // 0x191274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191278:
    // 0x191278: 0x1000000d  b           . + 4 + (0xD << 2)
label_19127c:
    if (ctx->pc == 0x19127Cu) {
        ctx->pc = 0x19127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191278u;
        // 0x19127c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191280u;
        goto label_191280;
    }
    ctx->pc = 0x191278u;
    {
        const bool branch_taken_0x191278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191278u;
        // 0x19127c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191278) {
            ctx->pc = 0x1912B0u;
            goto label_1912b0;
        }
    }
    ctx->pc = 0x191280u;
label_191280:
    // 0x191280: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x191280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_191284:
    // 0x191284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191288:
    // 0x191288: 0x0  nop
    ctx->pc = 0x191288u;
    // NOP
label_19128c:
    // 0x19128c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19128cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_191290:
    // 0x191290: 0x0  nop
    ctx->pc = 0x191290u;
    // NOP
label_191294:
    // 0x191294: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_191298:
    if (ctx->pc == 0x191298u) {
        ctx->pc = 0x19129Cu;
        goto label_19129c;
    }
    ctx->pc = 0x191294u;
    {
        const bool branch_taken_0x191294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x191294) {
            ctx->pc = 0x1912B0u;
            goto label_1912b0;
        }
    }
    ctx->pc = 0x19129Cu;
label_19129c:
    // 0x19129c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19129cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1912a0:
    // 0x1912a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1912a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1912a4:
    // 0x1912a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1912a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1912a8:
    // 0x1912a8: 0x0  nop
    ctx->pc = 0x1912a8u;
    // NOP
label_1912ac:
    // 0x1912ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1912acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1912b0:
    // 0x1912b0: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x1912b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1912b4:
    // 0x1912b4: 0x27b10044  addiu       $s1, $sp, 0x44
    ctx->pc = 0x1912b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_1912b8:
    // 0x1912b8: 0xc06d448  jal         func_1B5120
label_1912bc:
    if (ctx->pc == 0x1912BCu) {
        ctx->pc = 0x1912BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912B8u;
        // 0x1912bc: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1912C0u;
        goto label_1912c0;
    }
    ctx->pc = 0x1912B8u;
    SET_GPR_U32(ctx, 31, 0x1912C0u);
    ctx->pc = 0x1912BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1912B8u;
    // 0x1912bc: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1912C0u;
label_1912c0:
    // 0x1912c0: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x1912c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1912c4:
    // 0x1912c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1912c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1912c8:
    // 0x1912c8: 0x0  nop
    ctx->pc = 0x1912c8u;
    // NOP
label_1912cc:
    // 0x1912cc: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_1912d0:
    if (ctx->pc == 0x1912D0u) {
        ctx->pc = 0x1912D4u;
        goto label_1912d4;
    }
    ctx->pc = 0x1912CCu;
    {
        const bool branch_taken_0x1912cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1912cc) {
            ctx->pc = 0x191310u;
            goto label_191310;
        }
    }
    ctx->pc = 0x1912D4u;
label_1912d4:
    // 0x1912d4: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1912d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1912d8:
    // 0x1912d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1912d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1912dc:
    // 0x1912dc: 0x0  nop
    ctx->pc = 0x1912dcu;
    // NOP
label_1912e0:
    // 0x1912e0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1912e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1912e4:
    // 0x1912e4: 0x0  nop
    ctx->pc = 0x1912e4u;
    // NOP
label_1912e8:
    // 0x1912e8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1912ec:
    if (ctx->pc == 0x1912ECu) {
        ctx->pc = 0x1912ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912E8u;
        // 0x1912ec: 0x46011000  add.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1912F0u;
        goto label_1912f0;
    }
    ctx->pc = 0x1912E8u;
    {
        const bool branch_taken_0x1912e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1912ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912E8u;
        // 0x1912ec: 0x46011000  add.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912e8) {
            ctx->pc = 0x191304u;
            goto label_191304;
        }
    }
    ctx->pc = 0x1912F0u;
label_1912f0:
    // 0x1912f0: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x1912f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1912f4:
    // 0x1912f4: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1912f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1912f8:
    // 0x1912f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1912f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1912fc:
    // 0x1912fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_191300:
    if (ctx->pc == 0x191300u) {
        ctx->pc = 0x191300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912FCu;
        // 0x191300: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x191304u;
        goto label_191304;
    }
    ctx->pc = 0x1912FCu;
    {
        const bool branch_taken_0x1912fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912FCu;
        // 0x191300: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912fc) {
            ctx->pc = 0x191310u;
            goto label_191310;
        }
    }
    ctx->pc = 0x191304u;
label_191304:
    // 0x191304: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x191304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_191308:
    // 0x191308: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x191308u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19130c:
    // 0x19130c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x19130cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_191310:
    // 0x191310: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x191310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_191314:
    // 0x191314: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x191314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_191318:
    // 0x191318: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x191318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_19131c:
    // 0x19131c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19131cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191320:
    // 0x191320: 0x0  nop
    ctx->pc = 0x191320u;
    // NOP
label_191324:
    // 0x191324: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x191324u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_191328:
    // 0x191328: 0x0  nop
    ctx->pc = 0x191328u;
    // NOP
label_19132c:
    // 0x19132c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_191330:
    if (ctx->pc == 0x191330u) {
        ctx->pc = 0x191330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19132Cu;
        // 0x191330: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191334u;
        goto label_191334;
    }
    ctx->pc = 0x19132Cu;
    {
        const bool branch_taken_0x19132c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x191330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19132Cu;
        // 0x191330: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19132c) {
            ctx->pc = 0x191348u;
            goto label_191348;
        }
    }
    ctx->pc = 0x191334u;
label_191334:
    // 0x191334: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x191334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_191338:
    // 0x191338: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x191338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_19133c:
    // 0x19133c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19133cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191340:
    // 0x191340: 0x1000000d  b           . + 4 + (0xD << 2)
label_191344:
    if (ctx->pc == 0x191344u) {
        ctx->pc = 0x191344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191340u;
        // 0x191344: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191348u;
        goto label_191348;
    }
    ctx->pc = 0x191340u;
    {
        const bool branch_taken_0x191340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191340u;
        // 0x191344: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191340) {
            ctx->pc = 0x191378u;
            goto label_191378;
        }
    }
    ctx->pc = 0x191348u;
label_191348:
    // 0x191348: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x191348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_19134c:
    // 0x19134c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19134cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191350:
    // 0x191350: 0x0  nop
    ctx->pc = 0x191350u;
    // NOP
label_191354:
    // 0x191354: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_191358:
    // 0x191358: 0x0  nop
    ctx->pc = 0x191358u;
    // NOP
label_19135c:
    // 0x19135c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_191360:
    if (ctx->pc == 0x191360u) {
        ctx->pc = 0x191364u;
        goto label_191364;
    }
    ctx->pc = 0x19135Cu;
    {
        const bool branch_taken_0x19135c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19135c) {
            ctx->pc = 0x191378u;
            goto label_191378;
        }
    }
    ctx->pc = 0x191364u;
label_191364:
    // 0x191364: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x191364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_191368:
    // 0x191368: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x191368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_19136c:
    // 0x19136c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19136cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191370:
    // 0x191370: 0x0  nop
    ctx->pc = 0x191370u;
    // NOP
label_191374:
    // 0x191374: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x191374u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_191378:
    // 0x191378: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x191378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_19137c:
    // 0x19137c: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x19137cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_191380:
    // 0x191380: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x191380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_191384:
    // 0x191384: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x191384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
label_191388:
    // 0x191388: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x191388u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19138c:
    // 0x19138c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x19138cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_191390:
    // 0x191390: 0xc066e44  jal         func_19B910
label_191394:
    if (ctx->pc == 0x191394u) {
        ctx->pc = 0x191394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191390u;
        // 0x191394: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191398u;
        goto label_191398;
    }
    ctx->pc = 0x191390u;
    SET_GPR_U32(ctx, 31, 0x191398u);
    ctx->pc = 0x191394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191390u;
    // 0x191394: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x191398u;
label_191398:
    // 0x191398: 0xc60c0028  lwc1        $f12, 0x28($s0)
    ctx->pc = 0x191398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19139c:
    // 0x19139c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x19139cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1913a0:
    // 0x1913a0: 0xc066e6c  jal         func_19B9B0
label_1913a4:
    if (ctx->pc == 0x1913A4u) {
        ctx->pc = 0x1913A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913A0u;
        // 0x1913a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1913A8u;
        goto label_1913a8;
    }
    ctx->pc = 0x1913A0u;
    SET_GPR_U32(ctx, 31, 0x1913A8u);
    ctx->pc = 0x1913A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1913A0u;
    // 0x1913a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x1913A8u;
label_1913a8:
    // 0x1913a8: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x1913a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1913ac:
    // 0x1913ac: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1913acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1913b0:
    // 0x1913b0: 0xc066e96  jal         func_19BA58
label_1913b4:
    if (ctx->pc == 0x1913B4u) {
        ctx->pc = 0x1913B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913B0u;
        // 0x1913b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1913B8u;
        goto label_1913b8;
    }
    ctx->pc = 0x1913B0u;
    SET_GPR_U32(ctx, 31, 0x1913B8u);
    ctx->pc = 0x1913B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1913B0u;
    // 0x1913b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x1913B8u;
label_1913b8:
    // 0x1913b8: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x1913b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1913bc:
    // 0x1913bc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1913bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1913c0:
    // 0x1913c0: 0xc066ec0  jal         func_19BB00
label_1913c4:
    if (ctx->pc == 0x1913C4u) {
        ctx->pc = 0x1913C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913C0u;
        // 0x1913c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1913C8u;
        goto label_1913c8;
    }
    ctx->pc = 0x1913C0u;
    SET_GPR_U32(ctx, 31, 0x1913C8u);
    ctx->pc = 0x1913C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1913C0u;
    // 0x1913c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1913C8u;
label_1913c8:
    // 0x1913c8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1913c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1913cc:
    // 0x1913cc: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1913ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1913d0:
    // 0x1913d0: 0xc066d7a  jal         func_19B5E8
label_1913d4:
    if (ctx->pc == 0x1913D4u) {
        ctx->pc = 0x1913D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913D0u;
        // 0x1913d4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1913D8u;
        goto label_1913d8;
    }
    ctx->pc = 0x1913D0u;
    SET_GPR_U32(ctx, 31, 0x1913D8u);
    ctx->pc = 0x1913D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1913D0u;
    // 0x1913d4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1913D8u;
label_1913d8:
    // 0x1913d8: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1913d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1913dc:
    // 0x1913dc: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1913dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1913e0:
    // 0x1913e0: 0xc066e02  jal         func_19B808
label_1913e4:
    if (ctx->pc == 0x1913E4u) {
        ctx->pc = 0x1913E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913E0u;
        // 0x1913e4: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1913E8u;
        goto label_1913e8;
    }
    ctx->pc = 0x1913E0u;
    SET_GPR_U32(ctx, 31, 0x1913E8u);
    ctx->pc = 0x1913E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1913E0u;
    // 0x1913e4: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1913E8u;
label_1913e8:
    // 0x1913e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1913e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1913ec:
    // 0x1913ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1913ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1913f0:
    // 0x1913f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1913f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1913f4:
    // 0x1913f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1913f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1913f8:
    // 0x1913f8: 0x3e00008  jr          $ra
label_1913fc:
    if (ctx->pc == 0x1913FCu) {
        ctx->pc = 0x1913FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913F8u;
        // 0x1913fc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191400u;
        goto label_191400;
    }
    ctx->pc = 0x1913F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1913FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913F8u;
        // 0x1913fc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1913F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191400u;
label_191400:
    // 0x191400: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x191400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_191404:
    // 0x191404: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x191404u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_191408:
    // 0x191408: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x191408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_19140c:
    // 0x19140c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x19140cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_191410:
    // 0x191410: 0x24632cc0  addiu       $v1, $v1, 0x2CC0
    ctx->pc = 0x191410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11456));
label_191414:
    // 0x191414: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_191418:
    // 0x191418: 0xac6500dc  sw          $a1, 0xDC($v1)
    ctx->pc = 0x191418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 220), GPR_U32(ctx, 5));
label_19141c:
    // 0x19141c: 0x3e00008  jr          $ra
label_191420:
    if (ctx->pc == 0x191420u) {
        ctx->pc = 0x191420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19141Cu;
        // 0x191420: 0xac6600e0  sw          $a2, 0xE0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191424u;
        goto label_191424;
    }
    ctx->pc = 0x19141Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19141Cu;
        // 0x191420: 0xac6600e0  sw          $a2, 0xE0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19141Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191424u;
label_191424:
    // 0x191424: 0x0  nop
    ctx->pc = 0x191424u;
    // NOP
label_191428:
    // 0x191428: 0x0  nop
    ctx->pc = 0x191428u;
    // NOP
label_19142c:
    // 0x19142c: 0x0  nop
    ctx->pc = 0x19142cu;
    // NOP
label_191430:
    // 0x191430: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x191430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_191434:
    // 0x191434: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x191434u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_191438:
    // 0x191438: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x191438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_19143c:
    // 0x19143c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x19143cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_191440:
    // 0x191440: 0x24632cc0  addiu       $v1, $v1, 0x2CC0
    ctx->pc = 0x191440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11456));
label_191444:
    // 0x191444: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_191448:
    // 0x191448: 0xac6500d4  sw          $a1, 0xD4($v1)
    ctx->pc = 0x191448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 5));
label_19144c:
    // 0x19144c: 0x3e00008  jr          $ra
label_191450:
    if (ctx->pc == 0x191450u) {
        ctx->pc = 0x191450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19144Cu;
        // 0x191450: 0xac6600d8  sw          $a2, 0xD8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191454u;
        goto label_191454;
    }
    ctx->pc = 0x19144Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19144Cu;
        // 0x191450: 0xac6600d8  sw          $a2, 0xD8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19144Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191454u;
label_191454:
    // 0x191454: 0x0  nop
    ctx->pc = 0x191454u;
    // NOP
label_191458:
    // 0x191458: 0x0  nop
    ctx->pc = 0x191458u;
    // NOP
label_19145c:
    // 0x19145c: 0x0  nop
    ctx->pc = 0x19145cu;
    // NOP
label_191460:
    // 0x191460: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x191460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_191464:
    // 0x191464: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x191464u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_191468:
    // 0x191468: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x191468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_19146c:
    // 0x19146c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x19146cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_191470:
    // 0x191470: 0x24632cc0  addiu       $v1, $v1, 0x2CC0
    ctx->pc = 0x191470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11456));
label_191474:
    // 0x191474: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_191478:
    // 0x191478: 0xac6500cc  sw          $a1, 0xCC($v1)
    ctx->pc = 0x191478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 5));
label_19147c:
    // 0x19147c: 0x3e00008  jr          $ra
label_191480:
    if (ctx->pc == 0x191480u) {
        ctx->pc = 0x191480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19147Cu;
        // 0x191480: 0xac6600d0  sw          $a2, 0xD0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191484u;
        goto label_191484;
    }
    ctx->pc = 0x19147Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19147Cu;
        // 0x191480: 0xac6600d0  sw          $a2, 0xD0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19147Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191484u;
label_191484:
    // 0x191484: 0x0  nop
    ctx->pc = 0x191484u;
    // NOP
label_191488:
    // 0x191488: 0x0  nop
    ctx->pc = 0x191488u;
    // NOP
label_19148c:
    // 0x19148c: 0x0  nop
    ctx->pc = 0x19148cu;
    // NOP
label_191490:
    // 0x191490: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x191490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_191494:
    // 0x191494: 0x3e00008  jr          $ra
label_191498:
    if (ctx->pc == 0x191498u) {
        ctx->pc = 0x191498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191494u;
        // 0x191498: 0xe42c2ce8  swc1        $f12, 0x2CE8($at) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 11496), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19149Cu;
        goto label_19149c;
    }
    ctx->pc = 0x191494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191494u;
        // 0x191498: 0xe42c2ce8  swc1        $f12, 0x2CE8($at) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 11496), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19149Cu;
label_19149c:
    // 0x19149c: 0x0  nop
    ctx->pc = 0x19149cu;
    // NOP
label_1914a0:
    // 0x1914a0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x1914a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_1914a4:
    // 0x1914a4: 0x3e00008  jr          $ra
label_1914a8:
    if (ctx->pc == 0x1914A8u) {
        ctx->pc = 0x1914A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914A4u;
        // 0x1914a8: 0xe42c2d58  swc1        $f12, 0x2D58($at) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 11608), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1914ACu;
        goto label_1914ac;
    }
    ctx->pc = 0x1914A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1914A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914A4u;
        // 0x1914a8: 0xe42c2d58  swc1        $f12, 0x2D58($at) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 11608), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1914A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1914ACu;
label_1914ac:
    // 0x1914ac: 0x0  nop
    ctx->pc = 0x1914acu;
    // NOP
label_1914b0:
    // 0x1914b0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1914b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1914b4:
    // 0x1914b4: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1914b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1914b8:
    // 0x1914b8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1914b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1914bc:
    // 0x1914bc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1914bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1914c0:
    // 0x1914c0: 0x24632cc0  addiu       $v1, $v1, 0x2CC0
    ctx->pc = 0x1914c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11456));
label_1914c4:
    // 0x1914c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1914c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1914c8:
    // 0x1914c8: 0x3e00008  jr          $ra
label_1914cc:
    if (ctx->pc == 0x1914CCu) {
        ctx->pc = 0x1914CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914C8u;
        // 0x1914cc: 0xe46c0098  swc1        $f12, 0x98($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1914D0u;
        goto label_1914d0;
    }
    ctx->pc = 0x1914C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1914CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914C8u;
        // 0x1914cc: 0xe46c0098  swc1        $f12, 0x98($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1914C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1914D0u;
label_1914d0:
    // 0x1914d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1914d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1914d4:
    // 0x1914d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1914d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1914d8:
    // 0x1914d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1914d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1914dc:
    // 0x1914dc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1914dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1914e0:
    // 0x1914e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1914e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1914e4:
    // 0x1914e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1914e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1914e8:
    // 0x1914e8: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1914e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
label_1914ec:
    // 0x1914ec: 0x26102cc0  addiu       $s0, $s0, 0x2CC0
    ctx->pc = 0x1914ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11456));
label_1914f0:
    // 0x1914f0: 0xc08e93e  jal         func_23A4F8
label_1914f4:
    if (ctx->pc == 0x1914F4u) {
        ctx->pc = 0x1914F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914F0u;
        // 0x1914f4: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1914F8u;
        goto label_1914f8;
    }
    ctx->pc = 0x1914F0u;
    SET_GPR_U32(ctx, 31, 0x1914F8u);
    ctx->pc = 0x1914F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1914F0u;
    // 0x1914f4: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1914F8u;
label_1914f8:
    // 0x1914f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1914f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1914fc:
    // 0x1914fc: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1914fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_191500:
    // 0x191500: 0xc066e08  jal         func_19B820
label_191504:
    if (ctx->pc == 0x191504u) {
        ctx->pc = 0x191504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191500u;
        // 0x191504: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191508u;
        goto label_191508;
    }
    ctx->pc = 0x191500u;
    SET_GPR_U32(ctx, 31, 0x191508u);
    ctx->pc = 0x191504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191500u;
    // 0x191504: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x191508u;
label_191508:
    // 0x191508: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x191508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19150c:
    // 0x19150c: 0x27b10038  addiu       $s1, $sp, 0x38
    ctx->pc = 0x19150cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_191510:
    // 0x191510: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x191510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_191514:
    // 0x191514: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x191514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_191518:
    // 0x191518: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x191518u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_19151c:
    // 0x19151c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x19151cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_191520:
    // 0x191520: 0x46000344  c1          0x344
    ctx->pc = 0x191520u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_191524:
    // 0x191524: 0x0  nop
    ctx->pc = 0x191524u;
    // NOP
label_191528:
    // 0x191528: 0x0  nop
    ctx->pc = 0x191528u;
    // NOP
label_19152c:
    // 0x19152c: 0xc06d51e  jal         func_1B5478
label_191530:
    if (ctx->pc == 0x191530u) {
        ctx->pc = 0x191534u;
        goto label_191534;
    }
    ctx->pc = 0x19152Cu;
    SET_GPR_U32(ctx, 31, 0x191534u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x191534u;
label_191534:
    // 0x191534: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x191534u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_191538:
    // 0x191538: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x191538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_19153c:
    // 0x19153c: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x19153cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_191540:
    // 0x191540: 0xc06d51e  jal         func_1B5478
label_191544:
    if (ctx->pc == 0x191544u) {
        ctx->pc = 0x191544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191540u;
        // 0x191544: 0xc62d0000  lwc1        $f13, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x191548u;
        goto label_191548;
    }
    ctx->pc = 0x191540u;
    SET_GPR_U32(ctx, 31, 0x191548u);
    ctx->pc = 0x191544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191540u;
    // 0x191544: 0xc62d0000  lwc1        $f13, 0x0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x191548u;
label_191548:
    // 0x191548: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x191548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_19154c:
    // 0x19154c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19154cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_191550:
    // 0x191550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x191550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_191554:
    // 0x191554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x191554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_191558:
    // 0x191558: 0x3e00008  jr          $ra
label_19155c:
    if (ctx->pc == 0x19155Cu) {
        ctx->pc = 0x19155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191558u;
        // 0x19155c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191560u;
        goto label_191560;
    }
    ctx->pc = 0x191558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191558u;
        // 0x19155c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191560u;
label_191560:
    // 0x191560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x191560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_191564:
    // 0x191564: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x191564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_191568:
    // 0x191568: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x191568u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_19156c:
    // 0x19156c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19156cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_191570:
    // 0x191570: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x191570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_191574:
    // 0x191574: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x191574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_191578:
    // 0x191578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x191578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19157c:
    // 0x19157c: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x19157cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_191580:
    // 0x191580: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x191580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_191584:
    // 0x191584: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x191584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_191588:
    // 0x191588: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x191588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19158c:
    // 0x19158c: 0xc08e93e  jal         func_23A4F8
label_191590:
    if (ctx->pc == 0x191590u) {
        ctx->pc = 0x191590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19158Cu;
        // 0x191590: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191594u;
        goto label_191594;
    }
    ctx->pc = 0x19158Cu;
    SET_GPR_U32(ctx, 31, 0x191594u);
    ctx->pc = 0x191590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19158Cu;
    // 0x191590: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x191594u;
label_191594:
    // 0x191594: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x191594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_191598:
    // 0x191598: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x191598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_19159c:
    // 0x19159c: 0xc066e08  jal         func_19B820
label_1915a0:
    if (ctx->pc == 0x1915A0u) {
        ctx->pc = 0x1915A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19159Cu;
        // 0x1915a0: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1915A4u;
        goto label_1915a4;
    }
    ctx->pc = 0x19159Cu;
    SET_GPR_U32(ctx, 31, 0x1915A4u);
    ctx->pc = 0x1915A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19159Cu;
    // 0x1915a0: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x1915A4u;
label_1915a4:
    // 0x1915a4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1915a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1915a8:
    // 0x1915a8: 0x27b10038  addiu       $s1, $sp, 0x38
    ctx->pc = 0x1915a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_1915ac:
    // 0x1915ac: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1915acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1915b0:
    // 0x1915b0: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x1915b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1915b4:
    // 0x1915b4: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x1915b4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_1915b8:
    // 0x1915b8: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1915b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_1915bc:
    // 0x1915bc: 0x46000344  c1          0x344
    ctx->pc = 0x1915bcu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_1915c0:
    // 0x1915c0: 0x0  nop
    ctx->pc = 0x1915c0u;
    // NOP
label_1915c4:
    // 0x1915c4: 0x0  nop
    ctx->pc = 0x1915c4u;
    // NOP
label_1915c8:
    // 0x1915c8: 0xc06d51e  jal         func_1B5478
label_1915cc:
    if (ctx->pc == 0x1915CCu) {
        ctx->pc = 0x1915D0u;
        goto label_1915d0;
    }
    ctx->pc = 0x1915C8u;
    SET_GPR_U32(ctx, 31, 0x1915D0u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x1915D0u;
label_1915d0:
    // 0x1915d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1915d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1915d4:
    // 0x1915d4: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1915d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1915d8:
    // 0x1915d8: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1915d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1915dc:
    // 0x1915dc: 0xc06d51e  jal         func_1B5478
label_1915e0:
    if (ctx->pc == 0x1915E0u) {
        ctx->pc = 0x1915E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915DCu;
        // 0x1915e0: 0xc62d0000  lwc1        $f13, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1915E4u;
        goto label_1915e4;
    }
    ctx->pc = 0x1915DCu;
    SET_GPR_U32(ctx, 31, 0x1915E4u);
    ctx->pc = 0x1915E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1915DCu;
    // 0x1915e0: 0xc62d0000  lwc1        $f13, 0x0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x1915E4u;
label_1915e4:
    // 0x1915e4: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1915e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_1915e8:
    // 0x1915e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1915e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1915ec:
    // 0x1915ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1915ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1915f0:
    // 0x1915f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1915f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1915f4:
    // 0x1915f4: 0x3e00008  jr          $ra
label_1915f8:
    if (ctx->pc == 0x1915F8u) {
        ctx->pc = 0x1915F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915F4u;
        // 0x1915f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1915FCu;
        goto label_1915fc;
    }
    ctx->pc = 0x1915F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1915F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915F4u;
        // 0x1915f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1915F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1915FCu;
label_1915fc:
    // 0x1915fc: 0x0  nop
    ctx->pc = 0x1915fcu;
    // NOP
label_191600:
    // 0x191600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x191600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_191604:
    // 0x191604: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x191604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191608:
    // 0x191608: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x191608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19160c:
    // 0x19160c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x19160cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_191610:
    // 0x191610: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x191610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_191614:
    // 0x191614: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x191614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_191618:
    // 0x191618: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x191618u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
label_19161c:
    // 0x19161c: 0x26102cc0  addiu       $s0, $s0, 0x2CC0
    ctx->pc = 0x19161cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11456));
label_191620:
    // 0x191620: 0xc08e93e  jal         func_23A4F8
label_191624:
    if (ctx->pc == 0x191624u) {
        ctx->pc = 0x191624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191620u;
        // 0x191624: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191628u;
        goto label_191628;
    }
    ctx->pc = 0x191620u;
    SET_GPR_U32(ctx, 31, 0x191628u);
    ctx->pc = 0x191624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191620u;
    // 0x191624: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x191628u;
label_191628:
    // 0x191628: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x191628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19162c:
    // 0x19162c: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x19162cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_191630:
    // 0x191630: 0xc066e08  jal         func_19B820
label_191634:
    if (ctx->pc == 0x191634u) {
        ctx->pc = 0x191634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191630u;
        // 0x191634: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191638u;
        goto label_191638;
    }
    ctx->pc = 0x191630u;
    SET_GPR_U32(ctx, 31, 0x191638u);
    ctx->pc = 0x191634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191630u;
    // 0x191634: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x191638u;
label_191638:
    // 0x191638: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x191638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19163c:
    // 0x19163c: 0x27b10038  addiu       $s1, $sp, 0x38
    ctx->pc = 0x19163cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_191640:
    // 0x191640: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x191640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_191644:
    // 0x191644: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x191644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_191648:
    // 0x191648: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x191648u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_19164c:
    // 0x19164c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x19164cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_191650:
    // 0x191650: 0x46000344  c1          0x344
    ctx->pc = 0x191650u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_191654:
    // 0x191654: 0x0  nop
    ctx->pc = 0x191654u;
    // NOP
label_191658:
    // 0x191658: 0x0  nop
    ctx->pc = 0x191658u;
    // NOP
label_19165c:
    // 0x19165c: 0xc06d51e  jal         func_1B5478
label_191660:
    if (ctx->pc == 0x191660u) {
        ctx->pc = 0x191664u;
        goto label_191664;
    }
    ctx->pc = 0x19165Cu;
    SET_GPR_U32(ctx, 31, 0x191664u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x191664u;
label_191664:
    // 0x191664: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x191664u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_191668:
    // 0x191668: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x191668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_19166c:
    // 0x19166c: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x19166cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_191670:
    // 0x191670: 0xc06d51e  jal         func_1B5478
label_191674:
    if (ctx->pc == 0x191674u) {
        ctx->pc = 0x191674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191670u;
        // 0x191674: 0xc62d0000  lwc1        $f13, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x191678u;
        goto label_191678;
    }
    ctx->pc = 0x191670u;
    SET_GPR_U32(ctx, 31, 0x191678u);
    ctx->pc = 0x191674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191670u;
    // 0x191674: 0xc62d0000  lwc1        $f13, 0x0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x191678u;
label_191678:
    // 0x191678: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x191678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_19167c:
    // 0x19167c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19167cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_191680:
    // 0x191680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x191680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_191684:
    // 0x191684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x191684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_191688:
    // 0x191688: 0x3e00008  jr          $ra
label_19168c:
    if (ctx->pc == 0x19168Cu) {
        ctx->pc = 0x19168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191688u;
        // 0x19168c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191690u;
        goto label_191690;
    }
    ctx->pc = 0x191688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191688u;
        // 0x19168c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191690u;
label_191690:
    // 0x191690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x191690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_191694:
    // 0x191694: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x191694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_191698:
    // 0x191698: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x191698u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_19169c:
    // 0x19169c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19169cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1916a0:
    // 0x1916a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1916a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1916a4:
    // 0x1916a4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1916a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1916a8:
    // 0x1916a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1916a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1916ac:
    // 0x1916ac: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x1916acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_1916b0:
    // 0x1916b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1916b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1916b4:
    // 0x1916b4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1916b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1916b8:
    // 0x1916b8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1916b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1916bc:
    // 0x1916bc: 0xc08e93e  jal         func_23A4F8
label_1916c0:
    if (ctx->pc == 0x1916C0u) {
        ctx->pc = 0x1916C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916BCu;
        // 0x1916c0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1916C4u;
        goto label_1916c4;
    }
    ctx->pc = 0x1916BCu;
    SET_GPR_U32(ctx, 31, 0x1916C4u);
    ctx->pc = 0x1916C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1916BCu;
    // 0x1916c0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1916C4u;
label_1916c4:
    // 0x1916c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1916c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1916c8:
    // 0x1916c8: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1916c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1916cc:
    // 0x1916cc: 0xc066e08  jal         func_19B820
label_1916d0:
    if (ctx->pc == 0x1916D0u) {
        ctx->pc = 0x1916D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1916CCu;
        // 0x1916d0: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1916D4u;
        goto label_1916d4;
    }
    ctx->pc = 0x1916CCu;
    SET_GPR_U32(ctx, 31, 0x1916D4u);
    ctx->pc = 0x1916D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1916CCu;
    // 0x1916d0: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x1916D4u;
label_1916d4:
    // 0x1916d4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1916d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1916d8:
    // 0x1916d8: 0x27b10038  addiu       $s1, $sp, 0x38
    ctx->pc = 0x1916d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_1916dc:
    // 0x1916dc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1916dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1916e0:
    // 0x1916e0: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x1916e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1916e4:
    // 0x1916e4: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x1916e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_1916e8:
    // 0x1916e8: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1916e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_1916ec:
    // 0x1916ec: 0x46000344  c1          0x344
    ctx->pc = 0x1916ecu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_1916f0:
    // 0x1916f0: 0x0  nop
    ctx->pc = 0x1916f0u;
    // NOP
label_1916f4:
    // 0x1916f4: 0x0  nop
    ctx->pc = 0x1916f4u;
    // NOP
label_1916f8:
    // 0x1916f8: 0xc06d51e  jal         func_1B5478
label_1916fc:
    if (ctx->pc == 0x1916FCu) {
        ctx->pc = 0x191700u;
        goto label_191700;
    }
    ctx->pc = 0x1916F8u;
    SET_GPR_U32(ctx, 31, 0x191700u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x191700u;
label_191700:
    // 0x191700: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x191700u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_191704:
    // 0x191704: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x191704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_191708:
    // 0x191708: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x191708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19170c:
    // 0x19170c: 0xc06d51e  jal         func_1B5478
label_191710:
    if (ctx->pc == 0x191710u) {
        ctx->pc = 0x191710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19170Cu;
        // 0x191710: 0xc62d0000  lwc1        $f13, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x191714u;
        goto label_191714;
    }
    ctx->pc = 0x19170Cu;
    SET_GPR_U32(ctx, 31, 0x191714u);
    ctx->pc = 0x191710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19170Cu;
    // 0x191710: 0xc62d0000  lwc1        $f13, 0x0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x191714u;
label_191714:
    // 0x191714: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x191714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_191718:
    // 0x191718: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x191718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19171c:
    // 0x19171c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19171cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_191720:
    // 0x191720: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x191720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_191724:
    // 0x191724: 0x3e00008  jr          $ra
label_191728:
    if (ctx->pc == 0x191728u) {
        ctx->pc = 0x191728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191724u;
        // 0x191728: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19172Cu;
        goto label_19172c;
    }
    ctx->pc = 0x191724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191724u;
        // 0x191728: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19172Cu;
label_19172c:
    // 0x19172c: 0x0  nop
    ctx->pc = 0x19172cu;
    // NOP
label_191730:
    // 0x191730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_191734:
    // 0x191734: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x191734u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
label_191738:
    // 0x191738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19173c:
    // 0x19173c: 0x24e72cc0  addiu       $a3, $a3, 0x2CC0
    ctx->pc = 0x19173cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11456));
label_191740:
    // 0x191740: 0x8ce500e8  lw          $a1, 0xE8($a3)
    ctx->pc = 0x191740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 232)));
label_191744:
    // 0x191744: 0x278281e8  addiu       $v0, $gp, -0x7E18
    ctx->pc = 0x191744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935016));
label_191748:
    // 0x191748: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x191748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_19174c:
    // 0x19174c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191750:
    // 0x191750: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x191750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_191754:
    // 0x191754: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_191758:
    if (ctx->pc == 0x191758u) {
        ctx->pc = 0x191758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191754u;
        // 0x191758: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19175Cu;
        goto label_19175c;
    }
    ctx->pc = 0x191754u;
    {
        const bool branch_taken_0x191754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191754u;
        // 0x191758: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191754) {
            ctx->pc = 0x191764u;
            goto label_191764;
        }
    }
    ctx->pc = 0x19175Cu;
label_19175c:
    // 0x19175c: 0x1000000c  b           . + 4 + (0xC << 2)
label_191760:
    if (ctx->pc == 0x191760u) {
        ctx->pc = 0x191760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19175Cu;
        // 0x191760: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191764u;
        goto label_191764;
    }
    ctx->pc = 0x19175Cu;
    {
        const bool branch_taken_0x19175c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19175Cu;
        // 0x191760: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19175c) {
            ctx->pc = 0x191790u;
            goto label_191790;
        }
    }
    ctx->pc = 0x191764u;
label_191764:
    // 0x191764: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x191764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_191768:
    // 0x191768: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x191768u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_19176c:
    // 0x19176c: 0x23180  sll         $a2, $v0, 6
    ctx->pc = 0x19176cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_191770:
    // 0x191770: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x191770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_191774:
    // 0x191774: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x191774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_191778:
    // 0x191778: 0x24a59d40  addiu       $a1, $a1, -0x62C0
    ctx->pc = 0x191778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942016));
label_19177c:
    // 0x19177c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19177cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191780:
    // 0x191780: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x191780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_191784:
    // 0x191784: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x191784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_191788:
    // 0x191788: 0x24a20000  addiu       $v0, $a1, 0x0
    ctx->pc = 0x191788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_19178c:
    // 0x19178c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19178cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191790:
    // 0x191790: 0x8ce200b0  lw          $v0, 0xB0($a3)
    ctx->pc = 0x191790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
label_191794:
    // 0x191794: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_191798:
    if (ctx->pc == 0x191798u) {
        ctx->pc = 0x191798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191794u;
        // 0x191798: 0x24e50020  addiu       $a1, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19179Cu;
        goto label_19179c;
    }
    ctx->pc = 0x191794u;
    {
        const bool branch_taken_0x191794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191794u;
        // 0x191798: 0x24e50020  addiu       $a1, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191794) {
            ctx->pc = 0x1917BCu;
            goto label_1917bc;
        }
    }
    ctx->pc = 0x19179Cu;
label_19179c:
    // 0x19179c: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x19179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1917a0:
    // 0x1917a0: 0x30421800  andi        $v0, $v0, 0x1800
    ctx->pc = 0x1917a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6144);
label_1917a4:
    // 0x1917a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1917a8:
    if (ctx->pc == 0x1917A8u) {
        ctx->pc = 0x1917ACu;
        goto label_1917ac;
    }
    ctx->pc = 0x1917A4u;
    {
        const bool branch_taken_0x1917a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1917a4) {
            ctx->pc = 0x1917BCu;
            goto label_1917bc;
        }
    }
    ctx->pc = 0x1917ACu;
label_1917ac:
    // 0x1917ac: 0xc066e26  jal         func_19B898
label_1917b0:
    if (ctx->pc == 0x1917B0u) {
        ctx->pc = 0x1917B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917ACu;
        // 0x1917b0: 0x24650020  addiu       $a1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1917B4u;
        goto label_1917b4;
    }
    ctx->pc = 0x1917ACu;
    SET_GPR_U32(ctx, 31, 0x1917B4u);
    ctx->pc = 0x1917B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1917ACu;
    // 0x1917b0: 0x24650020  addiu       $a1, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1917B4u;
label_1917b4:
    // 0x1917b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1917b8:
    if (ctx->pc == 0x1917B8u) {
        ctx->pc = 0x1917B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917B4u;
        // 0x1917b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1917BCu;
        goto label_1917bc;
    }
    ctx->pc = 0x1917B4u;
    {
        const bool branch_taken_0x1917b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1917B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917B4u;
        // 0x1917b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1917b4) {
            ctx->pc = 0x1917C8u;
            goto label_1917c8;
        }
    }
    ctx->pc = 0x1917BCu;
label_1917bc:
    // 0x1917bc: 0xc066e26  jal         func_19B898
label_1917c0:
    if (ctx->pc == 0x1917C0u) {
        ctx->pc = 0x1917C4u;
        goto label_1917c4;
    }
    ctx->pc = 0x1917BCu;
    SET_GPR_U32(ctx, 31, 0x1917C4u);
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1917C4u;
label_1917c4:
    // 0x1917c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1917c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1917c8:
    // 0x1917c8: 0x3e00008  jr          $ra
label_1917cc:
    if (ctx->pc == 0x1917CCu) {
        ctx->pc = 0x1917CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917C8u;
        // 0x1917cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1917D0u;
        goto label_1917d0;
    }
    ctx->pc = 0x1917C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1917CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1917C8u;
        // 0x1917cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1917C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1917D0u;
label_1917d0:
    // 0x1917d0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1917d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1917d4:
    // 0x1917d4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1917d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1917d8:
    // 0x1917d8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1917d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1917dc:
    // 0x1917dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1917dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1917e0:
    // 0x1917e0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1917e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1917e4:
    // 0x1917e4: 0x24632cc0  addiu       $v1, $v1, 0x2CC0
    ctx->pc = 0x1917e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11456));
label_1917e8:
    // 0x1917e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1917e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1917ec:
    // 0x1917ec: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x1917ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1917f0:
    // 0x1917f0: 0x8ce400e8  lw          $a0, 0xE8($a3)
    ctx->pc = 0x1917f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 232)));
label_1917f4:
    // 0x1917f4: 0x278281e8  addiu       $v0, $gp, -0x7E18
    ctx->pc = 0x1917f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935016));
label_1917f8:
    // 0x1917f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1917f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1917fc:
    // 0x1917fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1917fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191800:
    // 0x191800: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x191800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_191804:
    // 0x191804: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_191808:
    if (ctx->pc == 0x191808u) {
        ctx->pc = 0x191808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191804u;
        // 0x191808: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19180Cu;
        goto label_19180c;
    }
    ctx->pc = 0x191804u;
    {
        const bool branch_taken_0x191804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191804u;
        // 0x191808: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191804) {
            ctx->pc = 0x191814u;
            goto label_191814;
        }
    }
    ctx->pc = 0x19180Cu;
label_19180c:
    // 0x19180c: 0x1000000c  b           . + 4 + (0xC << 2)
label_191810:
    if (ctx->pc == 0x191810u) {
        ctx->pc = 0x191810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19180Cu;
        // 0x191810: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191814u;
        goto label_191814;
    }
    ctx->pc = 0x19180Cu;
    {
        const bool branch_taken_0x19180c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19180Cu;
        // 0x191810: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19180c) {
            ctx->pc = 0x191840u;
            goto label_191840;
        }
    }
    ctx->pc = 0x191814u;
label_191814:
    // 0x191814: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x191814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_191818:
    // 0x191818: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x191818u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_19181c:
    // 0x19181c: 0x23180  sll         $a2, $v0, 6
    ctx->pc = 0x19181cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_191820:
    // 0x191820: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x191820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_191824:
    // 0x191824: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x191824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_191828:
    // 0x191828: 0x24849d40  addiu       $a0, $a0, -0x62C0
    ctx->pc = 0x191828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942016));
label_19182c:
    // 0x19182c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19182cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191830:
    // 0x191830: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x191830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_191834:
    // 0x191834: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x191834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_191838:
    // 0x191838: 0x24820000  addiu       $v0, $a0, 0x0
    ctx->pc = 0x191838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_19183c:
    // 0x19183c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19183cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191840:
    // 0x191840: 0x8ce200b0  lw          $v0, 0xB0($a3)
    ctx->pc = 0x191840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
label_191844:
    // 0x191844: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_191848:
    if (ctx->pc == 0x191848u) {
        ctx->pc = 0x191848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191844u;
        // 0x191848: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19184Cu;
        goto label_19184c;
    }
    ctx->pc = 0x191844u;
    {
        const bool branch_taken_0x191844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191844u;
        // 0x191848: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191844) {
            ctx->pc = 0x191870u;
            goto label_191870;
        }
    }
    ctx->pc = 0x19184Cu;
label_19184c:
    // 0x19184c: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x19184cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_191850:
    // 0x191850: 0x30421800  andi        $v0, $v0, 0x1800
    ctx->pc = 0x191850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6144);
label_191854:
    // 0x191854: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_191858:
    if (ctx->pc == 0x191858u) {
        ctx->pc = 0x19185Cu;
        goto label_19185c;
    }
    ctx->pc = 0x191854u;
    {
        const bool branch_taken_0x191854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191854) {
            ctx->pc = 0x191870u;
            goto label_191870;
        }
    }
    ctx->pc = 0x19185Cu;
label_19185c:
    // 0x19185c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19185cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_191860:
    // 0x191860: 0xc066e26  jal         func_19B898
label_191864:
    if (ctx->pc == 0x191864u) {
        ctx->pc = 0x191864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191860u;
        // 0x191864: 0x24650020  addiu       $a1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191868u;
        goto label_191868;
    }
    ctx->pc = 0x191860u;
    SET_GPR_U32(ctx, 31, 0x191868u);
    ctx->pc = 0x191864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191860u;
    // 0x191864: 0x24650020  addiu       $a1, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x191868u;
label_191868:
    // 0x191868: 0x10000004  b           . + 4 + (0x4 << 2)
label_19186c:
    if (ctx->pc == 0x19186Cu) {
        ctx->pc = 0x19186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191868u;
        // 0x19186c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191870u;
        goto label_191870;
    }
    ctx->pc = 0x191868u;
    {
        const bool branch_taken_0x191868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191868u;
        // 0x19186c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191868) {
            ctx->pc = 0x19187Cu;
            goto label_19187c;
        }
    }
    ctx->pc = 0x191870u;
label_191870:
    // 0x191870: 0xc066e26  jal         func_19B898
label_191874:
    if (ctx->pc == 0x191874u) {
        ctx->pc = 0x191874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191870u;
        // 0x191874: 0x24e50020  addiu       $a1, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191878u;
        goto label_191878;
    }
    ctx->pc = 0x191870u;
    SET_GPR_U32(ctx, 31, 0x191878u);
    ctx->pc = 0x191874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191870u;
    // 0x191874: 0x24e50020  addiu       $a1, $a3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x191878u;
label_191878:
    // 0x191878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19187c:
    // 0x19187c: 0x3e00008  jr          $ra
label_191880:
    if (ctx->pc == 0x191880u) {
        ctx->pc = 0x191880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19187Cu;
        // 0x191880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191884u;
        goto label_191884;
    }
    ctx->pc = 0x19187Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19187Cu;
        // 0x191880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19187Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191884u;
label_191884:
    // 0x191884: 0x0  nop
    ctx->pc = 0x191884u;
    // NOP
label_191888:
    // 0x191888: 0x0  nop
    ctx->pc = 0x191888u;
    // NOP
label_19188c:
    // 0x19188c: 0x0  nop
    ctx->pc = 0x19188cu;
    // NOP
label_191890:
    // 0x191890: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x191890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_191894:
    // 0x191894: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x191894u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_191898:
    // 0x191898: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x191898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_19189c:
    // 0x19189c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19189cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1918a0:
    // 0x1918a0: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x1918a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_1918a4:
    // 0x1918a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1918a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1918a8:
    // 0x1918a8: 0x3e00008  jr          $ra
label_1918ac:
    if (ctx->pc == 0x1918ACu) {
        ctx->pc = 0x1918ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918A8u;
        // 0x1918ac: 0x8c4200e0  lw          $v0, 0xE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1918B0u;
        goto label_1918b0;
    }
    ctx->pc = 0x1918A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1918ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918A8u;
        // 0x1918ac: 0x8c4200e0  lw          $v0, 0xE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1918A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1918B0u;
label_1918b0:
    // 0x1918b0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1918b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1918b4:
    // 0x1918b4: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x1918b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1918b8:
    // 0x1918b8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1918b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1918bc:
    // 0x1918bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1918bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1918c0:
    // 0x1918c0: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x1918c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_1918c4:
    // 0x1918c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1918c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1918c8:
    // 0x1918c8: 0x3e00008  jr          $ra
label_1918cc:
    if (ctx->pc == 0x1918CCu) {
        ctx->pc = 0x1918CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918C8u;
        // 0x1918cc: 0x8c4200dc  lw          $v0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1918D0u;
        goto label_1918d0;
    }
    ctx->pc = 0x1918C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1918CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918C8u;
        // 0x1918cc: 0x8c4200dc  lw          $v0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1918C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1918D0u;
label_1918d0:
    // 0x1918d0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1918d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1918d4:
    // 0x1918d4: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x1918d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1918d8:
    // 0x1918d8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1918d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1918dc:
    // 0x1918dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1918dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1918e0:
    // 0x1918e0: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x1918e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_1918e4:
    // 0x1918e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1918e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1918e8:
    // 0x1918e8: 0x3e00008  jr          $ra
label_1918ec:
    if (ctx->pc == 0x1918ECu) {
        ctx->pc = 0x1918ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918E8u;
        // 0x1918ec: 0x8c4200d8  lw          $v0, 0xD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1918F0u;
        goto label_1918f0;
    }
    ctx->pc = 0x1918E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1918ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918E8u;
        // 0x1918ec: 0x8c4200d8  lw          $v0, 0xD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1918E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1918F0u;
label_1918f0:
    // 0x1918f0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1918f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1918f4:
    // 0x1918f4: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x1918f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1918f8:
    // 0x1918f8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1918f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1918fc:
    // 0x1918fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1918fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_191900:
    // 0x191900: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x191900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_191904:
    // 0x191904: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191908:
    // 0x191908: 0x3e00008  jr          $ra
label_19190c:
    if (ctx->pc == 0x19190Cu) {
        ctx->pc = 0x19190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191908u;
        // 0x19190c: 0x8c4200d4  lw          $v0, 0xD4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191910u;
        goto label_191910;
    }
    ctx->pc = 0x191908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191908u;
        // 0x19190c: 0x8c4200d4  lw          $v0, 0xD4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191910u;
label_191910:
    // 0x191910: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x191910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_191914:
    // 0x191914: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x191914u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_191918:
    // 0x191918: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x191918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_19191c:
    // 0x19191c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19191cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_191920:
    // 0x191920: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x191920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_191924:
    // 0x191924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191928:
    // 0x191928: 0x3e00008  jr          $ra
label_19192c:
    if (ctx->pc == 0x19192Cu) {
        ctx->pc = 0x19192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191928u;
        // 0x19192c: 0x8c4200d0  lw          $v0, 0xD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191930u;
        goto label_191930;
    }
    ctx->pc = 0x191928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191928u;
        // 0x19192c: 0x8c4200d0  lw          $v0, 0xD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191930u;
label_191930:
    // 0x191930: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x191930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_191934:
    // 0x191934: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x191934u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_191938:
    // 0x191938: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x191938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_19193c:
    // 0x19193c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19193cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_191940:
    // 0x191940: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x191940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_191944:
    // 0x191944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191948:
    // 0x191948: 0x3e00008  jr          $ra
label_19194c:
    if (ctx->pc == 0x19194Cu) {
        ctx->pc = 0x19194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191948u;
        // 0x19194c: 0x8c4200cc  lw          $v0, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191950u;
        goto label_191950;
    }
    ctx->pc = 0x191948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191948u;
        // 0x19194c: 0x8c4200cc  lw          $v0, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191950u;
label_191950:
    // 0x191950: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x191950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_191954:
    // 0x191954: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x191954u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_191958:
    // 0x191958: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x191958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_19195c:
    // 0x19195c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19195cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_191960:
    // 0x191960: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x191960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_191964:
    // 0x191964: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191968:
    // 0x191968: 0x3e00008  jr          $ra
label_19196c:
    if (ctx->pc == 0x19196Cu) {
        ctx->pc = 0x19196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191968u;
        // 0x19196c: 0xc44000c4  lwc1        $f0, 0xC4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x191970u;
        goto label_191970;
    }
    ctx->pc = 0x191968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191968u;
        // 0x19196c: 0xc44000c4  lwc1        $f0, 0xC4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191970u;
label_191970:
    // 0x191970: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x191970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_191974:
    // 0x191974: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_191978:
    // 0x191978: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x191978u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_19197c:
    // 0x19197c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19197cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_191980:
    // 0x191980: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x191980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_191984:
    // 0x191984: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x191984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_191988:
    // 0x191988: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x191988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_19198c:
    // 0x19198c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19198cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_191990:
    // 0x191990: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191994:
    // 0x191994: 0xc066e26  jal         func_19B898
label_191998:
    if (ctx->pc == 0x191998u) {
        ctx->pc = 0x191998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191994u;
        // 0x191998: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19199Cu;
        goto label_19199c;
    }
    ctx->pc = 0x191994u;
    SET_GPR_U32(ctx, 31, 0x19199Cu);
    ctx->pc = 0x191998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191994u;
    // 0x191998: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x19199Cu;
label_19199c:
    // 0x19199c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19199cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1919a0:
    // 0x1919a0: 0x3e00008  jr          $ra
label_1919a4:
    if (ctx->pc == 0x1919A4u) {
        ctx->pc = 0x1919A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919A0u;
        // 0x1919a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1919A8u;
        goto label_1919a8;
    }
    ctx->pc = 0x1919A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1919A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919A0u;
        // 0x1919a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1919A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1919A8u;
label_1919a8:
    // 0x1919a8: 0x0  nop
    ctx->pc = 0x1919a8u;
    // NOP
label_1919ac:
    // 0x1919ac: 0x0  nop
    ctx->pc = 0x1919acu;
    // NOP
label_1919b0:
    // 0x1919b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1919b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1919b4:
    // 0x1919b4: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1919b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_1919b8:
    // 0x1919b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1919b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1919bc:
    // 0x1919bc: 0xc066e26  jal         func_19B898
label_1919c0:
    if (ctx->pc == 0x1919C0u) {
        ctx->pc = 0x1919C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919BCu;
        // 0x1919c0: 0x24a52d00  addiu       $a1, $a1, 0x2D00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1919C4u;
        goto label_1919c4;
    }
    ctx->pc = 0x1919BCu;
    SET_GPR_U32(ctx, 31, 0x1919C4u);
    ctx->pc = 0x1919C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1919BCu;
    // 0x1919c0: 0x24a52d00  addiu       $a1, $a1, 0x2D00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1919C4u;
label_1919c4:
    // 0x1919c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1919c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1919c8:
    // 0x1919c8: 0x3e00008  jr          $ra
label_1919cc:
    if (ctx->pc == 0x1919CCu) {
        ctx->pc = 0x1919CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919C8u;
        // 0x1919cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1919D0u;
        goto label_1919d0;
    }
    ctx->pc = 0x1919C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1919CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919C8u;
        // 0x1919cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1919C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1919D0u;
label_1919d0:
    // 0x1919d0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1919d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1919d4:
    // 0x1919d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1919d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1919d8:
    // 0x1919d8: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x1919d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1919dc:
    // 0x1919dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1919dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1919e0:
    // 0x1919e0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1919e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1919e4:
    // 0x1919e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1919e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1919e8:
    // 0x1919e8: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x1919e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_1919ec:
    // 0x1919ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1919ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1919f0u;
    return;
}
