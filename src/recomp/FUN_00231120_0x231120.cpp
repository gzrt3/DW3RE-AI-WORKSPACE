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

// Function: FUN_00231120
// Address: 0x231120 - 0x2318b0
void FUN_00231120_0x231120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00231120_0x231120");
#endif

    switch (ctx->pc) {
        case 0x231120u: goto label_231120;
        case 0x231124u: goto label_231124;
        case 0x231128u: goto label_231128;
        case 0x23112cu: goto label_23112c;
        case 0x231130u: goto label_231130;
        case 0x231134u: goto label_231134;
        case 0x231138u: goto label_231138;
        case 0x23113cu: goto label_23113c;
        case 0x231140u: goto label_231140;
        case 0x231144u: goto label_231144;
        case 0x231148u: goto label_231148;
        case 0x23114cu: goto label_23114c;
        case 0x231150u: goto label_231150;
        case 0x231154u: goto label_231154;
        case 0x231158u: goto label_231158;
        case 0x23115cu: goto label_23115c;
        case 0x231160u: goto label_231160;
        case 0x231164u: goto label_231164;
        case 0x231168u: goto label_231168;
        case 0x23116cu: goto label_23116c;
        case 0x231170u: goto label_231170;
        case 0x231174u: goto label_231174;
        case 0x231178u: goto label_231178;
        case 0x23117cu: goto label_23117c;
        case 0x231180u: goto label_231180;
        case 0x231184u: goto label_231184;
        case 0x231188u: goto label_231188;
        case 0x23118cu: goto label_23118c;
        case 0x231190u: goto label_231190;
        case 0x231194u: goto label_231194;
        case 0x231198u: goto label_231198;
        case 0x23119cu: goto label_23119c;
        case 0x2311a0u: goto label_2311a0;
        case 0x2311a4u: goto label_2311a4;
        case 0x2311a8u: goto label_2311a8;
        case 0x2311acu: goto label_2311ac;
        case 0x2311b0u: goto label_2311b0;
        case 0x2311b4u: goto label_2311b4;
        case 0x2311b8u: goto label_2311b8;
        case 0x2311bcu: goto label_2311bc;
        case 0x2311c0u: goto label_2311c0;
        case 0x2311c4u: goto label_2311c4;
        case 0x2311c8u: goto label_2311c8;
        case 0x2311ccu: goto label_2311cc;
        case 0x2311d0u: goto label_2311d0;
        case 0x2311d4u: goto label_2311d4;
        case 0x2311d8u: goto label_2311d8;
        case 0x2311dcu: goto label_2311dc;
        case 0x2311e0u: goto label_2311e0;
        case 0x2311e4u: goto label_2311e4;
        case 0x2311e8u: goto label_2311e8;
        case 0x2311ecu: goto label_2311ec;
        case 0x2311f0u: goto label_2311f0;
        case 0x2311f4u: goto label_2311f4;
        case 0x2311f8u: goto label_2311f8;
        case 0x2311fcu: goto label_2311fc;
        case 0x231200u: goto label_231200;
        case 0x231204u: goto label_231204;
        case 0x231208u: goto label_231208;
        case 0x23120cu: goto label_23120c;
        case 0x231210u: goto label_231210;
        case 0x231214u: goto label_231214;
        case 0x231218u: goto label_231218;
        case 0x23121cu: goto label_23121c;
        case 0x231220u: goto label_231220;
        case 0x231224u: goto label_231224;
        case 0x231228u: goto label_231228;
        case 0x23122cu: goto label_23122c;
        case 0x231230u: goto label_231230;
        case 0x231234u: goto label_231234;
        case 0x231238u: goto label_231238;
        case 0x23123cu: goto label_23123c;
        case 0x231240u: goto label_231240;
        case 0x231244u: goto label_231244;
        case 0x231248u: goto label_231248;
        case 0x23124cu: goto label_23124c;
        case 0x231250u: goto label_231250;
        case 0x231254u: goto label_231254;
        case 0x231258u: goto label_231258;
        case 0x23125cu: goto label_23125c;
        case 0x231260u: goto label_231260;
        case 0x231264u: goto label_231264;
        case 0x231268u: goto label_231268;
        case 0x23126cu: goto label_23126c;
        case 0x231270u: goto label_231270;
        case 0x231274u: goto label_231274;
        case 0x231278u: goto label_231278;
        case 0x23127cu: goto label_23127c;
        case 0x231280u: goto label_231280;
        case 0x231284u: goto label_231284;
        case 0x231288u: goto label_231288;
        case 0x23128cu: goto label_23128c;
        case 0x231290u: goto label_231290;
        case 0x231294u: goto label_231294;
        case 0x231298u: goto label_231298;
        case 0x23129cu: goto label_23129c;
        case 0x2312a0u: goto label_2312a0;
        case 0x2312a4u: goto label_2312a4;
        case 0x2312a8u: goto label_2312a8;
        case 0x2312acu: goto label_2312ac;
        case 0x2312b0u: goto label_2312b0;
        case 0x2312b4u: goto label_2312b4;
        case 0x2312b8u: goto label_2312b8;
        case 0x2312bcu: goto label_2312bc;
        case 0x2312c0u: goto label_2312c0;
        case 0x2312c4u: goto label_2312c4;
        case 0x2312c8u: goto label_2312c8;
        case 0x2312ccu: goto label_2312cc;
        case 0x2312d0u: goto label_2312d0;
        case 0x2312d4u: goto label_2312d4;
        case 0x2312d8u: goto label_2312d8;
        case 0x2312dcu: goto label_2312dc;
        case 0x2312e0u: goto label_2312e0;
        case 0x2312e4u: goto label_2312e4;
        case 0x2312e8u: goto label_2312e8;
        case 0x2312ecu: goto label_2312ec;
        case 0x2312f0u: goto label_2312f0;
        case 0x2312f4u: goto label_2312f4;
        case 0x2312f8u: goto label_2312f8;
        case 0x2312fcu: goto label_2312fc;
        case 0x231300u: goto label_231300;
        case 0x231304u: goto label_231304;
        case 0x231308u: goto label_231308;
        case 0x23130cu: goto label_23130c;
        case 0x231310u: goto label_231310;
        case 0x231314u: goto label_231314;
        case 0x231318u: goto label_231318;
        case 0x23131cu: goto label_23131c;
        case 0x231320u: goto label_231320;
        case 0x231324u: goto label_231324;
        case 0x231328u: goto label_231328;
        case 0x23132cu: goto label_23132c;
        case 0x231330u: goto label_231330;
        case 0x231334u: goto label_231334;
        case 0x231338u: goto label_231338;
        case 0x23133cu: goto label_23133c;
        case 0x231340u: goto label_231340;
        case 0x231344u: goto label_231344;
        case 0x231348u: goto label_231348;
        case 0x23134cu: goto label_23134c;
        case 0x231350u: goto label_231350;
        case 0x231354u: goto label_231354;
        case 0x231358u: goto label_231358;
        case 0x23135cu: goto label_23135c;
        case 0x231360u: goto label_231360;
        case 0x231364u: goto label_231364;
        case 0x231368u: goto label_231368;
        case 0x23136cu: goto label_23136c;
        case 0x231370u: goto label_231370;
        case 0x231374u: goto label_231374;
        case 0x231378u: goto label_231378;
        case 0x23137cu: goto label_23137c;
        case 0x231380u: goto label_231380;
        case 0x231384u: goto label_231384;
        case 0x231388u: goto label_231388;
        case 0x23138cu: goto label_23138c;
        case 0x231390u: goto label_231390;
        case 0x231394u: goto label_231394;
        case 0x231398u: goto label_231398;
        case 0x23139cu: goto label_23139c;
        case 0x2313a0u: goto label_2313a0;
        case 0x2313a4u: goto label_2313a4;
        case 0x2313a8u: goto label_2313a8;
        case 0x2313acu: goto label_2313ac;
        case 0x2313b0u: goto label_2313b0;
        case 0x2313b4u: goto label_2313b4;
        case 0x2313b8u: goto label_2313b8;
        case 0x2313bcu: goto label_2313bc;
        case 0x2313c0u: goto label_2313c0;
        case 0x2313c4u: goto label_2313c4;
        case 0x2313c8u: goto label_2313c8;
        case 0x2313ccu: goto label_2313cc;
        case 0x2313d0u: goto label_2313d0;
        case 0x2313d4u: goto label_2313d4;
        case 0x2313d8u: goto label_2313d8;
        case 0x2313dcu: goto label_2313dc;
        case 0x2313e0u: goto label_2313e0;
        case 0x2313e4u: goto label_2313e4;
        case 0x2313e8u: goto label_2313e8;
        case 0x2313ecu: goto label_2313ec;
        case 0x2313f0u: goto label_2313f0;
        case 0x2313f4u: goto label_2313f4;
        case 0x2313f8u: goto label_2313f8;
        case 0x2313fcu: goto label_2313fc;
        case 0x231400u: goto label_231400;
        case 0x231404u: goto label_231404;
        case 0x231408u: goto label_231408;
        case 0x23140cu: goto label_23140c;
        case 0x231410u: goto label_231410;
        case 0x231414u: goto label_231414;
        case 0x231418u: goto label_231418;
        case 0x23141cu: goto label_23141c;
        case 0x231420u: goto label_231420;
        case 0x231424u: goto label_231424;
        case 0x231428u: goto label_231428;
        case 0x23142cu: goto label_23142c;
        case 0x231430u: goto label_231430;
        case 0x231434u: goto label_231434;
        case 0x231438u: goto label_231438;
        case 0x23143cu: goto label_23143c;
        case 0x231440u: goto label_231440;
        case 0x231444u: goto label_231444;
        case 0x231448u: goto label_231448;
        case 0x23144cu: goto label_23144c;
        case 0x231450u: goto label_231450;
        case 0x231454u: goto label_231454;
        case 0x231458u: goto label_231458;
        case 0x23145cu: goto label_23145c;
        case 0x231460u: goto label_231460;
        case 0x231464u: goto label_231464;
        case 0x231468u: goto label_231468;
        case 0x23146cu: goto label_23146c;
        case 0x231470u: goto label_231470;
        case 0x231474u: goto label_231474;
        case 0x231478u: goto label_231478;
        case 0x23147cu: goto label_23147c;
        case 0x231480u: goto label_231480;
        case 0x231484u: goto label_231484;
        case 0x231488u: goto label_231488;
        case 0x23148cu: goto label_23148c;
        case 0x231490u: goto label_231490;
        case 0x231494u: goto label_231494;
        case 0x231498u: goto label_231498;
        case 0x23149cu: goto label_23149c;
        case 0x2314a0u: goto label_2314a0;
        case 0x2314a4u: goto label_2314a4;
        case 0x2314a8u: goto label_2314a8;
        case 0x2314acu: goto label_2314ac;
        case 0x2314b0u: goto label_2314b0;
        case 0x2314b4u: goto label_2314b4;
        case 0x2314b8u: goto label_2314b8;
        case 0x2314bcu: goto label_2314bc;
        case 0x2314c0u: goto label_2314c0;
        case 0x2314c4u: goto label_2314c4;
        case 0x2314c8u: goto label_2314c8;
        case 0x2314ccu: goto label_2314cc;
        case 0x2314d0u: goto label_2314d0;
        case 0x2314d4u: goto label_2314d4;
        case 0x2314d8u: goto label_2314d8;
        case 0x2314dcu: goto label_2314dc;
        case 0x2314e0u: goto label_2314e0;
        case 0x2314e4u: goto label_2314e4;
        case 0x2314e8u: goto label_2314e8;
        case 0x2314ecu: goto label_2314ec;
        case 0x2314f0u: goto label_2314f0;
        case 0x2314f4u: goto label_2314f4;
        case 0x2314f8u: goto label_2314f8;
        case 0x2314fcu: goto label_2314fc;
        case 0x231500u: goto label_231500;
        case 0x231504u: goto label_231504;
        case 0x231508u: goto label_231508;
        case 0x23150cu: goto label_23150c;
        case 0x231510u: goto label_231510;
        case 0x231514u: goto label_231514;
        case 0x231518u: goto label_231518;
        case 0x23151cu: goto label_23151c;
        case 0x231520u: goto label_231520;
        case 0x231524u: goto label_231524;
        case 0x231528u: goto label_231528;
        case 0x23152cu: goto label_23152c;
        case 0x231530u: goto label_231530;
        case 0x231534u: goto label_231534;
        case 0x231538u: goto label_231538;
        case 0x23153cu: goto label_23153c;
        case 0x231540u: goto label_231540;
        case 0x231544u: goto label_231544;
        case 0x231548u: goto label_231548;
        case 0x23154cu: goto label_23154c;
        case 0x231550u: goto label_231550;
        case 0x231554u: goto label_231554;
        case 0x231558u: goto label_231558;
        case 0x23155cu: goto label_23155c;
        case 0x231560u: goto label_231560;
        case 0x231564u: goto label_231564;
        case 0x231568u: goto label_231568;
        case 0x23156cu: goto label_23156c;
        case 0x231570u: goto label_231570;
        case 0x231574u: goto label_231574;
        case 0x231578u: goto label_231578;
        case 0x23157cu: goto label_23157c;
        case 0x231580u: goto label_231580;
        case 0x231584u: goto label_231584;
        case 0x231588u: goto label_231588;
        case 0x23158cu: goto label_23158c;
        case 0x231590u: goto label_231590;
        case 0x231594u: goto label_231594;
        case 0x231598u: goto label_231598;
        case 0x23159cu: goto label_23159c;
        case 0x2315a0u: goto label_2315a0;
        case 0x2315a4u: goto label_2315a4;
        case 0x2315a8u: goto label_2315a8;
        case 0x2315acu: goto label_2315ac;
        case 0x2315b0u: goto label_2315b0;
        case 0x2315b4u: goto label_2315b4;
        case 0x2315b8u: goto label_2315b8;
        case 0x2315bcu: goto label_2315bc;
        case 0x2315c0u: goto label_2315c0;
        case 0x2315c4u: goto label_2315c4;
        case 0x2315c8u: goto label_2315c8;
        case 0x2315ccu: goto label_2315cc;
        case 0x2315d0u: goto label_2315d0;
        case 0x2315d4u: goto label_2315d4;
        case 0x2315d8u: goto label_2315d8;
        case 0x2315dcu: goto label_2315dc;
        case 0x2315e0u: goto label_2315e0;
        case 0x2315e4u: goto label_2315e4;
        case 0x2315e8u: goto label_2315e8;
        case 0x2315ecu: goto label_2315ec;
        case 0x2315f0u: goto label_2315f0;
        case 0x2315f4u: goto label_2315f4;
        case 0x2315f8u: goto label_2315f8;
        case 0x2315fcu: goto label_2315fc;
        case 0x231600u: goto label_231600;
        case 0x231604u: goto label_231604;
        case 0x231608u: goto label_231608;
        case 0x23160cu: goto label_23160c;
        case 0x231610u: goto label_231610;
        case 0x231614u: goto label_231614;
        case 0x231618u: goto label_231618;
        case 0x23161cu: goto label_23161c;
        case 0x231620u: goto label_231620;
        case 0x231624u: goto label_231624;
        case 0x231628u: goto label_231628;
        case 0x23162cu: goto label_23162c;
        case 0x231630u: goto label_231630;
        case 0x231634u: goto label_231634;
        case 0x231638u: goto label_231638;
        case 0x23163cu: goto label_23163c;
        case 0x231640u: goto label_231640;
        case 0x231644u: goto label_231644;
        case 0x231648u: goto label_231648;
        case 0x23164cu: goto label_23164c;
        case 0x231650u: goto label_231650;
        case 0x231654u: goto label_231654;
        case 0x231658u: goto label_231658;
        case 0x23165cu: goto label_23165c;
        case 0x231660u: goto label_231660;
        case 0x231664u: goto label_231664;
        case 0x231668u: goto label_231668;
        case 0x23166cu: goto label_23166c;
        case 0x231670u: goto label_231670;
        case 0x231674u: goto label_231674;
        case 0x231678u: goto label_231678;
        case 0x23167cu: goto label_23167c;
        case 0x231680u: goto label_231680;
        case 0x231684u: goto label_231684;
        case 0x231688u: goto label_231688;
        case 0x23168cu: goto label_23168c;
        case 0x231690u: goto label_231690;
        case 0x231694u: goto label_231694;
        case 0x231698u: goto label_231698;
        case 0x23169cu: goto label_23169c;
        case 0x2316a0u: goto label_2316a0;
        case 0x2316a4u: goto label_2316a4;
        case 0x2316a8u: goto label_2316a8;
        case 0x2316acu: goto label_2316ac;
        case 0x2316b0u: goto label_2316b0;
        case 0x2316b4u: goto label_2316b4;
        case 0x2316b8u: goto label_2316b8;
        case 0x2316bcu: goto label_2316bc;
        case 0x2316c0u: goto label_2316c0;
        case 0x2316c4u: goto label_2316c4;
        case 0x2316c8u: goto label_2316c8;
        case 0x2316ccu: goto label_2316cc;
        case 0x2316d0u: goto label_2316d0;
        case 0x2316d4u: goto label_2316d4;
        case 0x2316d8u: goto label_2316d8;
        case 0x2316dcu: goto label_2316dc;
        case 0x2316e0u: goto label_2316e0;
        case 0x2316e4u: goto label_2316e4;
        case 0x2316e8u: goto label_2316e8;
        case 0x2316ecu: goto label_2316ec;
        case 0x2316f0u: goto label_2316f0;
        case 0x2316f4u: goto label_2316f4;
        case 0x2316f8u: goto label_2316f8;
        case 0x2316fcu: goto label_2316fc;
        case 0x231700u: goto label_231700;
        case 0x231704u: goto label_231704;
        case 0x231708u: goto label_231708;
        case 0x23170cu: goto label_23170c;
        case 0x231710u: goto label_231710;
        case 0x231714u: goto label_231714;
        case 0x231718u: goto label_231718;
        case 0x23171cu: goto label_23171c;
        case 0x231720u: goto label_231720;
        case 0x231724u: goto label_231724;
        case 0x231728u: goto label_231728;
        case 0x23172cu: goto label_23172c;
        case 0x231730u: goto label_231730;
        case 0x231734u: goto label_231734;
        case 0x231738u: goto label_231738;
        case 0x23173cu: goto label_23173c;
        case 0x231740u: goto label_231740;
        case 0x231744u: goto label_231744;
        case 0x231748u: goto label_231748;
        case 0x23174cu: goto label_23174c;
        case 0x231750u: goto label_231750;
        case 0x231754u: goto label_231754;
        case 0x231758u: goto label_231758;
        case 0x23175cu: goto label_23175c;
        case 0x231760u: goto label_231760;
        case 0x231764u: goto label_231764;
        case 0x231768u: goto label_231768;
        case 0x23176cu: goto label_23176c;
        case 0x231770u: goto label_231770;
        case 0x231774u: goto label_231774;
        case 0x231778u: goto label_231778;
        case 0x23177cu: goto label_23177c;
        case 0x231780u: goto label_231780;
        case 0x231784u: goto label_231784;
        case 0x231788u: goto label_231788;
        case 0x23178cu: goto label_23178c;
        case 0x231790u: goto label_231790;
        case 0x231794u: goto label_231794;
        case 0x231798u: goto label_231798;
        case 0x23179cu: goto label_23179c;
        case 0x2317a0u: goto label_2317a0;
        case 0x2317a4u: goto label_2317a4;
        case 0x2317a8u: goto label_2317a8;
        case 0x2317acu: goto label_2317ac;
        case 0x2317b0u: goto label_2317b0;
        case 0x2317b4u: goto label_2317b4;
        case 0x2317b8u: goto label_2317b8;
        case 0x2317bcu: goto label_2317bc;
        case 0x2317c0u: goto label_2317c0;
        case 0x2317c4u: goto label_2317c4;
        case 0x2317c8u: goto label_2317c8;
        case 0x2317ccu: goto label_2317cc;
        case 0x2317d0u: goto label_2317d0;
        case 0x2317d4u: goto label_2317d4;
        case 0x2317d8u: goto label_2317d8;
        case 0x2317dcu: goto label_2317dc;
        case 0x2317e0u: goto label_2317e0;
        case 0x2317e4u: goto label_2317e4;
        case 0x2317e8u: goto label_2317e8;
        case 0x2317ecu: goto label_2317ec;
        case 0x2317f0u: goto label_2317f0;
        case 0x2317f4u: goto label_2317f4;
        case 0x2317f8u: goto label_2317f8;
        case 0x2317fcu: goto label_2317fc;
        case 0x231800u: goto label_231800;
        case 0x231804u: goto label_231804;
        case 0x231808u: goto label_231808;
        case 0x23180cu: goto label_23180c;
        case 0x231810u: goto label_231810;
        case 0x231814u: goto label_231814;
        case 0x231818u: goto label_231818;
        case 0x23181cu: goto label_23181c;
        case 0x231820u: goto label_231820;
        case 0x231824u: goto label_231824;
        case 0x231828u: goto label_231828;
        case 0x23182cu: goto label_23182c;
        case 0x231830u: goto label_231830;
        case 0x231834u: goto label_231834;
        case 0x231838u: goto label_231838;
        case 0x23183cu: goto label_23183c;
        case 0x231840u: goto label_231840;
        case 0x231844u: goto label_231844;
        case 0x231848u: goto label_231848;
        case 0x23184cu: goto label_23184c;
        case 0x231850u: goto label_231850;
        case 0x231854u: goto label_231854;
        case 0x231858u: goto label_231858;
        case 0x23185cu: goto label_23185c;
        case 0x231860u: goto label_231860;
        case 0x231864u: goto label_231864;
        case 0x231868u: goto label_231868;
        case 0x23186cu: goto label_23186c;
        case 0x231870u: goto label_231870;
        case 0x231874u: goto label_231874;
        case 0x231878u: goto label_231878;
        case 0x23187cu: goto label_23187c;
        case 0x231880u: goto label_231880;
        case 0x231884u: goto label_231884;
        case 0x231888u: goto label_231888;
        case 0x23188cu: goto label_23188c;
        case 0x231890u: goto label_231890;
        case 0x231894u: goto label_231894;
        case 0x231898u: goto label_231898;
        case 0x23189cu: goto label_23189c;
        case 0x2318a0u: goto label_2318a0;
        case 0x2318a4u: goto label_2318a4;
        case 0x2318a8u: goto label_2318a8;
        case 0x2318acu: goto label_2318ac;
        default: break;
    }

    ctx->pc = 0x231120u;

label_231120:
    // 0x231120: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x231120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_231124:
    // 0x231124: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x231124u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_231128:
    // 0x231128: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x231128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_23112c:
    // 0x23112c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23112cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231130:
    // 0x231130: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x231130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_231134:
    // 0x231134: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x231134u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_231138:
    // 0x231138: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x231138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
label_23113c:
    // 0x23113c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x23113cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_231140:
    // 0x231140: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x231140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_231144:
    // 0x231144: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x231144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_231148:
    // 0x231148: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x231148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_23114c:
    // 0x23114c: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x23114cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
label_231150:
    // 0x231150: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x231150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_231154:
    // 0x231154: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x231154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_231158:
    // 0x231158: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x231158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
label_23115c:
    // 0x23115c: 0xaf8082d4  sw          $zero, -0x7D2C($gp)
    ctx->pc = 0x23115cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935252), GPR_U32(ctx, 0));
label_231160:
    // 0x231160: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
label_231164:
    if (ctx->pc == 0x231164u) {
        ctx->pc = 0x231164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231160u;
        // 0x231164: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231168u;
        goto label_231168;
    }
    ctx->pc = 0x231160u;
    {
        const bool branch_taken_0x231160 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x231164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231160u;
        // 0x231164: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231160) {
            ctx->pc = 0x231188u;
            goto label_231188;
        }
    }
    ctx->pc = 0x231168u;
label_231168:
    // 0x231168: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x231168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_23116c:
    // 0x23116c: 0xc08db68  jal         func_236DA0
label_231170:
    if (ctx->pc == 0x231170u) {
        ctx->pc = 0x231170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23116Cu;
        // 0x231170: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231174u;
        goto label_231174;
    }
    ctx->pc = 0x23116Cu;
    SET_GPR_U32(ctx, 31, 0x231174u);
    ctx->pc = 0x231170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23116Cu;
    // 0x231170: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236DA0u, 0x23116Cu, 0x231174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231174u;
label_231174:
    // 0x231174: 0x144001c4  bnez        $v0, . + 4 + (0x1C4 << 2)
label_231178:
    if (ctx->pc == 0x231178u) {
        ctx->pc = 0x231178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231174u;
        // 0x231178: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23117Cu;
        goto label_23117c;
    }
    ctx->pc = 0x231174u;
    {
        const bool branch_taken_0x231174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231174u;
        // 0x231178: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231174) {
            ctx->pc = 0x231888u;
            goto label_231888;
        }
    }
    ctx->pc = 0x23117Cu;
label_23117c:
    // 0x23117c: 0x8f8282d4  lw          $v0, -0x7D2C($gp)
    ctx->pc = 0x23117cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935252)));
label_231180:
    // 0x231180: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x231180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_231184:
    // 0x231184: 0xaf8282d4  sw          $v0, -0x7D2C($gp)
    ctx->pc = 0x231184u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935252), GPR_U32(ctx, 2));
label_231188:
    // 0x231188: 0x3c160029  lui         $s6, 0x29
    ctx->pc = 0x231188u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)41 << 16));
label_23118c:
    // 0x23118c: 0x8fa70064  lw          $a3, 0x64($sp)
    ctx->pc = 0x23118cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_231190:
    // 0x231190: 0x26c404b0  addiu       $a0, $s6, 0x4B0
    ctx->pc = 0x231190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1200));
label_231194:
    // 0x231194: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x231194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_231198:
    // 0x231198: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x231198u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_23119c:
    // 0x23119c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x23119cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2311a0:
    // 0x2311a0: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x2311a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2311a4:
    // 0x2311a4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2311a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_2311a8:
    // 0x2311a8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2311a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2311ac:
    // 0x2311ac: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x2311acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2311b0:
    // 0x2311b0: 0x8c88003c  lw          $t0, 0x3C($a0)
    ctx->pc = 0x2311b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_2311b4:
    // 0x2311b4: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2311b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2311b8:
    // 0x2311b8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2311b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_2311bc:
    // 0x2311bc: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x2311bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2311c0:
    // 0x2311c0: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x2311c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2311c4:
    // 0x2311c4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2311c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2311c8:
    // 0x2311c8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2311c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2311cc:
    // 0x2311cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2311ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2311d0:
    // 0x2311d0: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x2311d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_2311d4:
    // 0x2311d4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2311d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2311d8:
    // 0x2311d8: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x2311d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_2311dc:
    // 0x2311dc: 0x24a5008f  addiu       $a1, $a1, 0x8F
    ctx->pc = 0x2311dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 143));
label_2311e0:
    // 0x2311e0: 0x24c217a7  addiu       $v0, $a2, 0x17A7
    ctx->pc = 0x2311e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 6055));
label_2311e4:
    // 0x2311e4: 0x52982  srl         $a1, $a1, 6
    ctx->pc = 0x2311e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
label_2311e8:
    // 0x2311e8: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x2311e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
label_2311ec:
    // 0x2311ec: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x2311ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_2311f0:
    // 0x2311f0: 0x521c0  sll         $a0, $a1, 7
    ctx->pc = 0x2311f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
label_2311f4:
    // 0x2311f4: 0x3a980  sll         $s5, $v1, 6
    ctx->pc = 0x2311f4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_2311f8:
    // 0x2311f8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2311f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2311fc:
    // 0x2311fc: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x2311fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_231200:
    // 0x231200: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231204:
    // 0x231204: 0x342112c0  ori         $at, $at, 0x12C0
    ctx->pc = 0x231204u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4800);
label_231208:
    // 0x231208: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x231208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_23120c:
    // 0x23120c: 0x59180  sll         $s2, $a1, 6
    ctx->pc = 0x23120cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_231210:
    // 0x231210: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x231210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_231214:
    // 0x231214: 0x24de1768  addiu       $fp, $a2, 0x1768
    ctx->pc = 0x231214u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), 5992));
label_231218:
    // 0x231218: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
label_23121c:
    if (ctx->pc == 0x23121Cu) {
        ctx->pc = 0x23121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231218u;
        // 0x23121c: 0x872821  addu        $a1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231220u;
        goto label_231220;
    }
    ctx->pc = 0x231218u;
    {
        const bool branch_taken_0x231218 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x23121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231218u;
        // 0x23121c: 0x872821  addu        $a1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231218) {
            ctx->pc = 0x231230u;
            goto label_231230;
        }
    }
    ctx->pc = 0x231220u;
label_231220:
    // 0x231220: 0x100f809  jalr        $t0
label_231224:
    if (ctx->pc == 0x231224u) {
        ctx->pc = 0x231224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231220u;
        // 0x231224: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231228u;
        goto label_231228;
    }
    ctx->pc = 0x231220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x231228u);
        ctx->pc = 0x231224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231220u;
        // 0x231224: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231220u, 0x231228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x231228u;
label_231228:
    // 0x231228: 0x10000004  b           . + 4 + (0x4 << 2)
label_23122c:
    if (ctx->pc == 0x23122Cu) {
        ctx->pc = 0x23122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231228u;
        // 0x23122c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231230u;
        goto label_231230;
    }
    ctx->pc = 0x231228u;
    {
        const bool branch_taken_0x231228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231228u;
        // 0x23122c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231228) {
            ctx->pc = 0x23123Cu;
            goto label_23123c;
        }
    }
    ctx->pc = 0x231230u;
label_231230:
    // 0x231230: 0xc08e5be  jal         func_2396F8
label_231234:
    if (ctx->pc == 0x231234u) {
        ctx->pc = 0x231234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231230u;
        // 0x231234: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231238u;
        goto label_231238;
    }
    ctx->pc = 0x231230u;
    SET_GPR_U32(ctx, 31, 0x231238u);
    ctx->pc = 0x231234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231230u;
    // 0x231234: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2396F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2396F8u, 0x231230u, 0x231238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231238u;
label_231238:
    // 0x231238: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x231238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23123c:
    // 0x23123c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23123cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_231240:
    // 0x231240: 0x10800191  beqz        $a0, . + 4 + (0x191 << 2)
label_231244:
    if (ctx->pc == 0x231244u) {
        ctx->pc = 0x231244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231240u;
        // 0x231244: 0xaf8482d0  sw          $a0, -0x7D30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231248u;
        goto label_231248;
    }
    ctx->pc = 0x231240u;
    {
        const bool branch_taken_0x231240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x231244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231240u;
        // 0x231244: 0xaf8482d0  sw          $a0, -0x7D30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231240) {
            ctx->pc = 0x231888u;
            goto label_231888;
        }
    }
    ctx->pc = 0x231248u;
label_231248:
    // 0x231248: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x231248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23124c:
    // 0x23124c: 0xc0692a8  jal         func_1A4AA0
label_231250:
    if (ctx->pc == 0x231250u) {
        ctx->pc = 0x231250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23124Cu;
        // 0x231250: 0x3c100fff  lui         $s0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231254u;
        goto label_231254;
    }
    ctx->pc = 0x23124Cu;
    SET_GPR_U32(ctx, 31, 0x231254u);
    ctx->pc = 0x231250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23124Cu;
    // 0x231250: 0x3c100fff  lui         $s0, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x23124Cu, 0x231254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231254u;
label_231254:
    // 0x231254: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231258:
    // 0x231258: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x231258u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_23125c:
    // 0x23125c: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x23125cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
label_231260:
    // 0x231260: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x231260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
label_231264:
    // 0x231264: 0x3c060009  lui         $a2, 0x9
    ctx->pc = 0x231264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)9 << 16));
label_231268:
    // 0x231268: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x231268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
label_23126c:
    // 0x23126c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23126cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231270:
    // 0x231270: 0xc08e9ac  jal         func_23A6B0
label_231274:
    if (ctx->pc == 0x231274u) {
        ctx->pc = 0x231274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231270u;
        // 0x231274: 0x34c612c0  ori         $a2, $a2, 0x12C0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4800);
        ctx->in_delay_slot = false;
        ctx->pc = 0x231278u;
        goto label_231278;
    }
    ctx->pc = 0x231270u;
    SET_GPR_U32(ctx, 31, 0x231278u);
    ctx->pc = 0x231274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231270u;
    // 0x231274: 0x34c612c0  ori         $a2, $a2, 0x12C0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4800);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A6B0u, 0x231270u, 0x231278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231278u;
label_231278:
    // 0x231278: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_23127c:
    // 0x23127c: 0x27c2003f  addiu       $v0, $fp, 0x3F
    ctx->pc = 0x23127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 63));
label_231280:
    // 0x231280: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x231280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231284:
    // 0x231284: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x231284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231288:
    // 0x231288: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x231288u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_23128c:
    // 0x23128c: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x23128cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
label_231290:
    // 0x231290: 0x346312c0  ori         $v1, $v1, 0x12C0
    ctx->pc = 0x231290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4800);
label_231294:
    // 0x231294: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x231294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_231298:
    // 0x231298: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x231298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_23129c:
    // 0x23129c: 0x708024  and         $s0, $v1, $s0
    ctx->pc = 0x23129cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_2312a0:
    // 0x2312a0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x2312a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_2312a4:
    // 0x2312a4: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x2312a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
label_2312a8:
    // 0x2312a8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2312a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2312ac:
    // 0x2312ac: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2312acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_2312b0:
    // 0x2312b0: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x2312b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
label_2312b4:
    // 0x2312b4: 0xac301140  sw          $s0, 0x1140($at)
    ctx->pc = 0x2312b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4416), GPR_U32(ctx, 16));
label_2312b8:
    // 0x2312b8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2312b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2312bc:
    // 0x2312bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2312bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2312c0:
    // 0x2312c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2312c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2312c4:
    // 0x2312c4: 0x0  nop
    ctx->pc = 0x2312c4u;
    // NOP
label_2312c8:
    // 0x2312c8: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x2312c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2312cc:
    // 0x2312cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2312ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2312d0:
    // 0x2312d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2312d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2312d4:
    // 0x2312d4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2312d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_2312d8:
    // 0x2312d8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2312d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_2312dc:
    // 0x2312dc: 0x0  nop
    ctx->pc = 0x2312dcu;
    // NOP
label_2312e0:
    // 0x2312e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2312e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2312e4:
    // 0x2312e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2312e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2312e8:
    // 0x2312e8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2312e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2312ec:
    // 0x2312ec: 0x0  nop
    ctx->pc = 0x2312ecu;
    // NOP
label_2312f0:
    // 0x2312f0: 0x0  nop
    ctx->pc = 0x2312f0u;
    // NOP
label_2312f4:
    // 0x2312f4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
label_2312f8:
    if (ctx->pc == 0x2312F8u) {
        ctx->pc = 0x2312F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2312F4u;
        // 0x2312f8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2312FCu;
        goto label_2312fc;
    }
    ctx->pc = 0x2312F4u;
    {
        const bool branch_taken_0x2312f4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2312F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2312F4u;
        // 0x2312f8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2312f4) {
            ctx->pc = 0x2312E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2312e0;
        }
    }
    ctx->pc = 0x2312FCu;
label_2312fc:
    // 0x2312fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2312fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_231300:
    // 0x231300: 0x18c0fff1  blez        $a2, . + 4 + (-0xF << 2)
label_231304:
    if (ctx->pc == 0x231304u) {
        ctx->pc = 0x231304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231300u;
        // 0x231304: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231308u;
        goto label_231308;
    }
    ctx->pc = 0x231300u;
    {
        const bool branch_taken_0x231300 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x231304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231300u;
        // 0x231304: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231300) {
            ctx->pc = 0x2312C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2312c8;
        }
    }
    ctx->pc = 0x231308u;
label_231308:
    // 0x231308: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x231308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_23130c:
    // 0x23130c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_231310:
    if (ctx->pc == 0x231310u) {
        ctx->pc = 0x231310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23130Cu;
        // 0x231310: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231314u;
        goto label_231314;
    }
    ctx->pc = 0x23130Cu;
    {
        const bool branch_taken_0x23130c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23130c) {
            ctx->pc = 0x231310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23130Cu;
            // 0x231310: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231314u;
            goto label_231314;
        }
    }
    ctx->pc = 0x231314u;
label_231314:
    // 0x231314: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x231314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_231318:
    // 0x231318: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x231318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23131c:
    // 0x23131c: 0x24420508  addiu       $v0, $v0, 0x508
    ctx->pc = 0x23131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1288));
label_231320:
    // 0x231320: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231324:
    // 0x231324: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x231324u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
label_231328:
    // 0x231328: 0xac241278  sw          $a0, 0x1278($at)
    ctx->pc = 0x231328u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4728), GPR_U32(ctx, 4));
label_23132c:
    // 0x23132c: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x23132cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
label_231330:
    // 0x231330: 0x26c304b0  addiu       $v1, $s6, 0x4B0
    ctx->pc = 0x231330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1200));
label_231334:
    // 0x231334: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x231334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_231338:
    // 0x231338: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x231338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_23133c:
    // 0x23133c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x23133cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231340:
    // 0x231340: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x231340u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
label_231344:
    // 0x231344: 0xac241208  sw          $a0, 0x1208($at)
    ctx->pc = 0x231344u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4616), GPR_U32(ctx, 4));
label_231348:
    // 0x231348: 0x9064001d  lbu         $a0, 0x1D($v1)
    ctx->pc = 0x231348u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 29)));
label_23134c:
    // 0x23134c: 0x423c0  sll         $a0, $a0, 15
    ctx->pc = 0x23134cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
label_231350:
    // 0x231350: 0xc06adbe  jal         func_1AB6F8
label_231354:
    if (ctx->pc == 0x231354u) {
        ctx->pc = 0x231354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231350u;
        // 0x231354: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231358u;
        goto label_231358;
    }
    ctx->pc = 0x231350u;
    SET_GPR_U32(ctx, 31, 0x231358u);
    ctx->pc = 0x231354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231350u;
    // 0x231354: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB6F8u, 0x231350u, 0x231358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231358u;
label_231358:
    // 0x231358: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_23135c:
    // 0x23135c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23135cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_231360:
    // 0x231360: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231364:
    // 0x231364: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231364u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231368:
    // 0x231368: 0xac231280  sw          $v1, 0x1280($at)
    ctx->pc = 0x231368u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4736), GPR_U32(ctx, 3));
label_23136c:
    // 0x23136c: 0x10600146  beqz        $v1, . + 4 + (0x146 << 2)
label_231370:
    if (ctx->pc == 0x231370u) {
        ctx->pc = 0x231370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23136Cu;
        // 0x231370: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231374u;
        goto label_231374;
    }
    ctx->pc = 0x23136Cu;
    {
        const bool branch_taken_0x23136c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23136Cu;
        // 0x231370: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23136c) {
            ctx->pc = 0x231888u;
            goto label_231888;
        }
    }
    ctx->pc = 0x231374u;
label_231374:
    // 0x231374: 0xaf8082d8  sw          $zero, -0x7D28($gp)
    ctx->pc = 0x231374u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935256), GPR_U32(ctx, 0));
label_231378:
    // 0x231378: 0x16800068  bnez        $s4, . + 4 + (0x68 << 2)
label_23137c:
    if (ctx->pc == 0x23137Cu) {
        ctx->pc = 0x23137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231378u;
        // 0x23137c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231380u;
        goto label_231380;
    }
    ctx->pc = 0x231378u;
    {
        const bool branch_taken_0x231378 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x23137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231378u;
        // 0x23137c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231378) {
            ctx->pc = 0x23151Cu;
            goto label_23151c;
        }
    }
    ctx->pc = 0x231380u;
label_231380:
    // 0x231380: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x231380u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_231384:
    // 0x231384: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x231384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_231388:
    // 0x231388: 0x26700001  addiu       $s0, $s3, 0x1
    ctx->pc = 0x231388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23138c:
    // 0x23138c: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_231390:
    if (ctx->pc == 0x231390u) {
        ctx->pc = 0x231390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23138Cu;
        // 0x231390: 0x92660000  lbu         $a2, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231394u;
        goto label_231394;
    }
    ctx->pc = 0x23138Cu;
    {
        const bool branch_taken_0x23138c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x231390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23138Cu;
        // 0x231390: 0x92660000  lbu         $a2, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23138c) {
            ctx->pc = 0x23141Cu;
            goto label_23141c;
        }
    }
    ctx->pc = 0x231394u;
label_231394:
    // 0x231394: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x231394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_231398:
    // 0x231398: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x231398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_23139c:
    // 0x23139c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x23139cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2313a0:
    // 0x2313a0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2313a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2313a4:
    // 0x2313a4: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
label_2313a8:
    if (ctx->pc == 0x2313A8u) {
        ctx->pc = 0x2313A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313A4u;
        // 0x2313a8: 0x26700002  addiu       $s0, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2313ACu;
        goto label_2313ac;
    }
    ctx->pc = 0x2313A4u;
    {
        const bool branch_taken_0x2313a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2313A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313A4u;
        // 0x2313a8: 0x26700002  addiu       $s0, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313a4) {
            ctx->pc = 0x23141Cu;
            goto label_23141c;
        }
    }
    ctx->pc = 0x2313ACu;
label_2313ac:
    // 0x2313ac: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2313acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2313b0:
    // 0x2313b0: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x2313b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_2313b4:
    // 0x2313b4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2313b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2313b8:
    // 0x2313b8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2313b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2313bc:
    // 0x2313bc: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
label_2313c0:
    if (ctx->pc == 0x2313C0u) {
        ctx->pc = 0x2313C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313BCu;
        // 0x2313c0: 0x26700003  addiu       $s0, $s3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2313C4u;
        goto label_2313c4;
    }
    ctx->pc = 0x2313BCu;
    {
        const bool branch_taken_0x2313bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2313C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313BCu;
        // 0x2313c0: 0x26700003  addiu       $s0, $s3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313bc) {
            ctx->pc = 0x23141Cu;
            goto label_23141c;
        }
    }
    ctx->pc = 0x2313C4u;
label_2313c4:
    // 0x2313c4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2313c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2313c8:
    // 0x2313c8: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x2313c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_2313cc:
    // 0x2313cc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2313ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2313d0:
    // 0x2313d0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2313d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2313d4:
    // 0x2313d4: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
label_2313d8:
    if (ctx->pc == 0x2313D8u) {
        ctx->pc = 0x2313D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313D4u;
        // 0x2313d8: 0x26700004  addiu       $s0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2313DCu;
        goto label_2313dc;
    }
    ctx->pc = 0x2313D4u;
    {
        const bool branch_taken_0x2313d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2313D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313D4u;
        // 0x2313d8: 0x26700004  addiu       $s0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313d4) {
            ctx->pc = 0x23141Cu;
            goto label_23141c;
        }
    }
    ctx->pc = 0x2313DCu;
label_2313dc:
    // 0x2313dc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2313dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2313e0:
    // 0x2313e0: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x2313e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_2313e4:
    // 0x2313e4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2313e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2313e8:
    // 0x2313e8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2313e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2313ec:
    // 0x2313ec: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_2313f0:
    if (ctx->pc == 0x2313F0u) {
        ctx->pc = 0x2313F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313ECu;
        // 0x2313f0: 0x26700005  addiu       $s0, $s3, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2313F4u;
        goto label_2313f4;
    }
    ctx->pc = 0x2313ECu;
    {
        const bool branch_taken_0x2313ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2313F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313ECu;
        // 0x2313f0: 0x26700005  addiu       $s0, $s3, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313ec) {
            ctx->pc = 0x23141Cu;
            goto label_23141c;
        }
    }
    ctx->pc = 0x2313F4u;
label_2313f4:
    // 0x2313f4: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2313f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2313f8:
    // 0x2313f8: 0x26640006  addiu       $a0, $s3, 0x6
    ctx->pc = 0x2313f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
label_2313fc:
    // 0x2313fc: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x2313fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_231400:
    // 0x231400: 0x38630030  xori        $v1, $v1, 0x30
    ctx->pc = 0x231400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)48);
label_231404:
    // 0x231404: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x231404u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_231408:
    // 0x231408: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x231408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_23140c:
    // 0x23140c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x23140cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_231410:
    // 0x231410: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x231410u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_231414:
    // 0x231414: 0x1045001a  beq         $v0, $a1, . + 4 + (0x1A << 2)
label_231418:
    if (ctx->pc == 0x231418u) {
        ctx->pc = 0x231418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231414u;
        // 0x231418: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23141Cu;
        goto label_23141c;
    }
    ctx->pc = 0x231414u;
    {
        const bool branch_taken_0x231414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x231418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231414u;
        // 0x231418: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231414) {
            ctx->pc = 0x231480u;
            goto label_231480;
        }
    }
    ctx->pc = 0x23141Cu;
label_23141c:
    // 0x23141c: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x23141cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_231420:
    // 0x231420: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x231420u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
label_231424:
    // 0x231424: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_231428:
    if (ctx->pc == 0x231428u) {
        ctx->pc = 0x231428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231424u;
        // 0x231428: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23142Cu;
        goto label_23142c;
    }
    ctx->pc = 0x231424u;
    {
        const bool branch_taken_0x231424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231424u;
        // 0x231428: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231424) {
            ctx->pc = 0x23147Cu;
            goto label_23147c;
        }
    }
    ctx->pc = 0x23142Cu;
label_23142c:
    // 0x23142c: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x23142cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_231430:
    // 0x231430: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_231434:
    if (ctx->pc == 0x231434u) {
        ctx->pc = 0x231434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231430u;
        // 0x231434: 0x2404003a  addiu       $a0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231438u;
        goto label_231438;
    }
    ctx->pc = 0x231430u;
    {
        const bool branch_taken_0x231430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x231434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231430u;
        // 0x231434: 0x2404003a  addiu       $a0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231430) {
            ctx->pc = 0x231470u;
            goto label_231470;
        }
    }
    ctx->pc = 0x231438u;
label_231438:
    // 0x231438: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x231438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_23143c:
    // 0x23143c: 0x0  nop
    ctx->pc = 0x23143cu;
    // NOP
label_231440:
    // 0x231440: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x231440u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_231444:
    // 0x231444: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_231448:
    if (ctx->pc == 0x231448u) {
        ctx->pc = 0x231448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231444u;
        // 0x231448: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23144Cu;
        goto label_23144c;
    }
    ctx->pc = 0x231444u;
    {
        const bool branch_taken_0x231444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231444u;
        // 0x231448: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231444) {
            ctx->pc = 0x23147Cu;
            goto label_23147c;
        }
    }
    ctx->pc = 0x23144Cu;
label_23144c:
    // 0x23144c: 0x0  nop
    ctx->pc = 0x23144cu;
    // NOP
label_231450:
    // 0x231450: 0x0  nop
    ctx->pc = 0x231450u;
    // NOP
label_231454:
    // 0x231454: 0x0  nop
    ctx->pc = 0x231454u;
    // NOP
label_231458:
    // 0x231458: 0x0  nop
    ctx->pc = 0x231458u;
    // NOP
label_23145c:
    // 0x23145c: 0x5444fff8  bnel        $v0, $a0, . + 4 + (-0x8 << 2)
label_231460:
    if (ctx->pc == 0x231460u) {
        ctx->pc = 0x231460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23145Cu;
        // 0x231460: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231464u;
        goto label_231464;
    }
    ctx->pc = 0x23145Cu;
    {
        const bool branch_taken_0x23145c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x23145c) {
            ctx->pc = 0x231460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23145Cu;
            // 0x231460: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_231440;
        }
    }
    ctx->pc = 0x231464u;
label_231464:
    // 0x231464: 0x10000003  b           . + 4 + (0x3 << 2)
label_231468:
    if (ctx->pc == 0x231468u) {
        ctx->pc = 0x23146Cu;
        goto label_23146c;
    }
    ctx->pc = 0x231464u;
    {
        const bool branch_taken_0x231464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231464) {
            ctx->pc = 0x231474u;
            goto label_231474;
        }
    }
    ctx->pc = 0x23146Cu;
label_23146c:
    // 0x23146c: 0x0  nop
    ctx->pc = 0x23146cu;
    // NOP
label_231470:
    // 0x231470: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x231470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_231474:
    // 0x231474: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_231478:
    if (ctx->pc == 0x231478u) {
        ctx->pc = 0x231478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231474u;
        // 0x231478: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23147Cu;
        goto label_23147c;
    }
    ctx->pc = 0x231474u;
    {
        const bool branch_taken_0x231474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x231478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231474u;
        // 0x231478: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231474) {
            ctx->pc = 0x2314D8u;
            goto label_2314d8;
        }
    }
    ctx->pc = 0x23147Cu;
label_23147c:
    // 0x23147c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x23147cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_231480:
    // 0x231480: 0x1000000b  b           . + 4 + (0xB << 2)
label_231484:
    if (ctx->pc == 0x231484u) {
        ctx->pc = 0x231484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231480u;
        // 0x231484: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231488u;
        goto label_231488;
    }
    ctx->pc = 0x231480u;
    {
        const bool branch_taken_0x231480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231480u;
        // 0x231484: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231480) {
            ctx->pc = 0x2314B0u;
            goto label_2314b0;
        }
    }
    ctx->pc = 0x231488u;
label_231488:
    // 0x231488: 0xc08c34a  jal         func_230D28
label_23148c:
    if (ctx->pc == 0x23148Cu) {
        ctx->pc = 0x231490u;
        goto label_231490;
    }
    ctx->pc = 0x231488u;
    SET_GPR_U32(ctx, 31, 0x231490u);
    ctx->pc = 0x230D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D28u, 0x231488u, 0x231490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231490u;
label_231490:
    // 0x231490: 0x1c4000fd  bgtz        $v0, . + 4 + (0xFD << 2)
label_231494:
    if (ctx->pc == 0x231494u) {
        ctx->pc = 0x231494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231490u;
        // 0x231494: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231498u;
        goto label_231498;
    }
    ctx->pc = 0x231490u;
    {
        const bool branch_taken_0x231490 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x231494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231490u;
        // 0x231494: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231490) {
            ctx->pc = 0x231888u;
            goto label_231888;
        }
    }
    ctx->pc = 0x231498u;
label_231498:
    // 0x231498: 0xc06bee2  jal         func_1AFB88
label_23149c:
    if (ctx->pc == 0x23149Cu) {
        ctx->pc = 0x2314A0u;
        goto label_2314a0;
    }
    ctx->pc = 0x231498u;
    SET_GPR_U32(ctx, 31, 0x2314A0u);
    ctx->pc = 0x1AFB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB88u, 0x231498u, 0x2314A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314A0u;
label_2314a0:
    // 0x2314a0: 0xc06c162  jal         func_1B0588
label_2314a4:
    if (ctx->pc == 0x2314A4u) {
        ctx->pc = 0x2314A8u;
        goto label_2314a8;
    }
    ctx->pc = 0x2314A0u;
    SET_GPR_U32(ctx, 31, 0x2314A8u);
    ctx->pc = 0x1B0588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0588u, 0x2314A0u, 0x2314A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314A8u;
label_2314a8:
    // 0x2314a8: 0xc06bee2  jal         func_1AFB88
label_2314ac:
    if (ctx->pc == 0x2314ACu) {
        ctx->pc = 0x2314ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314A8u;
        // 0x2314ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2314B0u;
        goto label_2314b0;
    }
    ctx->pc = 0x2314A8u;
    SET_GPR_U32(ctx, 31, 0x2314B0u);
    ctx->pc = 0x2314ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314A8u;
    // 0x2314ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB88u, 0x2314A8u, 0x2314B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314B0u;
label_2314b0:
    // 0x2314b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2314b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2314b4:
    // 0x2314b4: 0xc06be58  jal         func_1AF960
label_2314b8:
    if (ctx->pc == 0x2314B8u) {
        ctx->pc = 0x2314B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314B4u;
        // 0x2314b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2314BCu;
        goto label_2314bc;
    }
    ctx->pc = 0x2314B4u;
    SET_GPR_U32(ctx, 31, 0x2314BCu);
    ctx->pc = 0x2314B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314B4u;
    // 0x2314b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF960u, 0x2314B4u, 0x2314BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314BCu;
label_2314bc:
    // 0x2314bc: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
label_2314c0:
    if (ctx->pc == 0x2314C0u) {
        ctx->pc = 0x2314C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314BCu;
        // 0x2314c0: 0x8fb30030  lw          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2314C4u;
        goto label_2314c4;
    }
    ctx->pc = 0x2314BCu;
    {
        const bool branch_taken_0x2314bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2314C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314BCu;
        // 0x2314c0: 0x8fb30030  lw          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314bc) {
            ctx->pc = 0x231488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_231488;
        }
    }
    ctx->pc = 0x2314C4u;
label_2314c4:
    // 0x2314c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2314c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2314c8:
    // 0x2314c8: 0x8fb40034  lw          $s4, 0x34($sp)
    ctx->pc = 0x2314c8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_2314cc:
    // 0x2314cc: 0x10000013  b           . + 4 + (0x13 << 2)
label_2314d0:
    if (ctx->pc == 0x2314D0u) {
        ctx->pc = 0x2314D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314CCu;
        // 0x2314d0: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2314D4u;
        goto label_2314d4;
    }
    ctx->pc = 0x2314CCu;
    {
        const bool branch_taken_0x2314cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2314D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314CCu;
        // 0x2314d0: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314cc) {
            ctx->pc = 0x23151Cu;
            goto label_23151c;
        }
    }
    ctx->pc = 0x2314D4u;
label_2314d4:
    // 0x2314d4: 0x0  nop
    ctx->pc = 0x2314d4u;
    // NOP
label_2314d8:
    // 0x2314d8: 0xc06a234  jal         func_1A88D0
label_2314dc:
    if (ctx->pc == 0x2314DCu) {
        ctx->pc = 0x2314DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314D8u;
        // 0x2314dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2314E0u;
        goto label_2314e0;
    }
    ctx->pc = 0x2314D8u;
    SET_GPR_U32(ctx, 31, 0x2314E0u);
    ctx->pc = 0x2314DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314D8u;
    // 0x2314dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88D0u, 0x2314D8u, 0x2314E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314E0u;
label_2314e0:
    // 0x2314e0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2314e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2314e4:
    // 0x2314e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2314e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2314e8:
    // 0x2314e8: 0x62000e7  bltz        $s1, . + 4 + (0xE7 << 2)
label_2314ec:
    if (ctx->pc == 0x2314ECu) {
        ctx->pc = 0x2314ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314E8u;
        // 0x2314ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2314F0u;
        goto label_2314f0;
    }
    ctx->pc = 0x2314E8u;
    {
        const bool branch_taken_0x2314e8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2314ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314E8u;
        // 0x2314ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314e8) {
            ctx->pc = 0x231888u;
            goto label_231888;
        }
    }
    ctx->pc = 0x2314F0u;
label_2314f0:
    // 0x2314f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2314f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2314f4:
    // 0x2314f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2314f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2314f8:
    // 0x2314f8: 0xc06a336  jal         func_1A8CD8
label_2314fc:
    if (ctx->pc == 0x2314FCu) {
        ctx->pc = 0x2314FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314F8u;
        // 0x2314fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231500u;
        goto label_231500;
    }
    ctx->pc = 0x2314F8u;
    SET_GPR_U32(ctx, 31, 0x231500u);
    ctx->pc = 0x2314FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314F8u;
    // 0x2314fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CD8u, 0x2314F8u, 0x231500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231500u;
label_231500:
    // 0x231500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_231504:
    // 0x231504: 0xc06a2d6  jal         func_1A8B58
label_231508:
    if (ctx->pc == 0x231508u) {
        ctx->pc = 0x231508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231504u;
        // 0x231508: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23150Cu;
        goto label_23150c;
    }
    ctx->pc = 0x231504u;
    SET_GPR_U32(ctx, 31, 0x23150Cu);
    ctx->pc = 0x231508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231504u;
    // 0x231508: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B58u, 0x231504u, 0x23150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23150Cu;
label_23150c:
    // 0x23150c: 0x1a4000de  blez        $s2, . + 4 + (0xDE << 2)
label_231510:
    if (ctx->pc == 0x231510u) {
        ctx->pc = 0x231510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23150Cu;
        // 0x231510: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231514u;
        goto label_231514;
    }
    ctx->pc = 0x23150Cu;
    {
        const bool branch_taken_0x23150c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x231510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23150Cu;
        // 0x231510: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23150c) {
            ctx->pc = 0x231888u;
            goto label_231888;
        }
    }
    ctx->pc = 0x231514u;
label_231514:
    // 0x231514: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231518:
    // 0x231518: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x231518u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23151c:
    // 0x23151c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x23151cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231520:
    // 0x231520: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231520u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231524:
    // 0x231524: 0xac341274  sw          $s4, 0x1274($at)
    ctx->pc = 0x231524u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4724), GPR_U32(ctx, 20));
label_231528:
    // 0x231528: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_23152c:
    if (ctx->pc == 0x23152Cu) {
        ctx->pc = 0x23152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231528u;
        // 0x23152c: 0x2403fff0  addiu       $v1, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231530u;
        goto label_231530;
    }
    ctx->pc = 0x231528u;
    {
        const bool branch_taken_0x231528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231528u;
        // 0x23152c: 0x2403fff0  addiu       $v1, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231528) {
            ctx->pc = 0x231580u;
            goto label_231580;
        }
    }
    ctx->pc = 0x231530u;
label_231530:
    // 0x231530: 0x3c060009  lui         $a2, 0x9
    ctx->pc = 0x231530u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)9 << 16));
label_231534:
    // 0x231534: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x231534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_231538:
    // 0x231538: 0x8cc61280  lw          $a2, 0x1280($a2)
    ctx->pc = 0x231538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4736)));
label_23153c:
    // 0x23153c: 0x26c204b0  addiu       $v0, $s6, 0x4B0
    ctx->pc = 0x23153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1200));
label_231540:
    // 0x231540: 0x9044001d  lbu         $a0, 0x1D($v0)
    ctx->pc = 0x231540u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 29)));
label_231544:
    // 0x231544: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x231544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_231548:
    // 0x231548: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x231548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23154c:
    // 0x23154c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x23154cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_231550:
    // 0x231550: 0xc08da64  jal         func_236990
label_231554:
    if (ctx->pc == 0x231554u) {
        ctx->pc = 0x231554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231550u;
        // 0x231554: 0xc33024  and         $a2, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231558u;
        goto label_231558;
    }
    ctx->pc = 0x231550u;
    SET_GPR_U32(ctx, 31, 0x231558u);
    ctx->pc = 0x231554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231550u;
    // 0x231554: 0xc33024  and         $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236990u, 0x231550u, 0x231558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231558u;
label_231558:
    // 0x231558: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x231558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23155c:
    // 0x23155c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x23155cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_231560:
    // 0x231560: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x231560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231564:
    // 0x231564: 0x2042025  or          $a0, $s0, $a0
    ctx->pc = 0x231564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_231568:
    // 0x231568: 0xc08da9a  jal         func_236A68
label_23156c:
    if (ctx->pc == 0x23156Cu) {
        ctx->pc = 0x23156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231568u;
        // 0x23156c: 0xaf8382d8  sw          $v1, -0x7D28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231570u;
        goto label_231570;
    }
    ctx->pc = 0x231568u;
    SET_GPR_U32(ctx, 31, 0x231570u);
    ctx->pc = 0x23156Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231568u;
    // 0x23156c: 0xaf8382d8  sw          $v1, -0x7D28($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935256), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A68u, 0x231568u, 0x231570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231570u;
label_231570:
    // 0x231570: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_231574:
    if (ctx->pc == 0x231574u) {
        ctx->pc = 0x231574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231570u;
        // 0x231574: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231578u;
        goto label_231578;
    }
    ctx->pc = 0x231570u;
    {
        const bool branch_taken_0x231570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231570u;
        // 0x231574: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231570) {
            ctx->pc = 0x231688u;
            goto label_231688;
        }
    }
    ctx->pc = 0x231578u;
label_231578:
    // 0x231578: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_23157c:
    if (ctx->pc == 0x23157Cu) {
        ctx->pc = 0x23157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231578u;
        // 0x23157c: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231580u;
        goto label_231580;
    }
    ctx->pc = 0x231578u;
    {
        const bool branch_taken_0x231578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231578u;
        // 0x23157c: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231578) {
            ctx->pc = 0x23188Cu;
            goto label_23188c;
        }
    }
    ctx->pc = 0x231580u;
label_231580:
    // 0x231580: 0x10000005  b           . + 4 + (0x5 << 2)
label_231584:
    if (ctx->pc == 0x231584u) {
        ctx->pc = 0x231584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231580u;
        // 0x231584: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231588u;
        goto label_231588;
    }
    ctx->pc = 0x231580u;
    {
        const bool branch_taken_0x231580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231580u;
        // 0x231584: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231580) {
            ctx->pc = 0x231598u;
            goto label_231598;
        }
    }
    ctx->pc = 0x231588u;
label_231588:
    // 0x231588: 0xc08c34a  jal         func_230D28
label_23158c:
    if (ctx->pc == 0x23158Cu) {
        ctx->pc = 0x231590u;
        goto label_231590;
    }
    ctx->pc = 0x231588u;
    SET_GPR_U32(ctx, 31, 0x231590u);
    ctx->pc = 0x230D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D28u, 0x231588u, 0x231590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231590u;
label_231590:
    // 0x231590: 0x5c4000be  bgtzl       $v0, . + 4 + (0xBE << 2)
label_231594:
    if (ctx->pc == 0x231594u) {
        ctx->pc = 0x231594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231590u;
        // 0x231594: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231598u;
        goto label_231598;
    }
    ctx->pc = 0x231590u;
    {
        const bool branch_taken_0x231590 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x231590) {
            ctx->pc = 0x231594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231590u;
            // 0x231594: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23188Cu;
            goto label_23188c;
        }
    }
    ctx->pc = 0x231598u;
label_231598:
    // 0x231598: 0xc06c03a  jal         func_1B00E8
label_23159c:
    if (ctx->pc == 0x23159Cu) {
        ctx->pc = 0x23159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231598u;
        // 0x23159c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2315A0u;
        goto label_2315a0;
    }
    ctx->pc = 0x231598u;
    SET_GPR_U32(ctx, 31, 0x2315A0u);
    ctx->pc = 0x23159Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231598u;
    // 0x23159c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B00E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B00E8u, 0x231598u, 0x2315A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2315A0u;
label_2315a0:
    // 0x2315a0: 0x1450fff9  bne         $v0, $s0, . + 4 + (-0x7 << 2)
label_2315a4:
    if (ctx->pc == 0x2315A4u) {
        ctx->pc = 0x2315A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315A0u;
        // 0x2315a4: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2315A8u;
        goto label_2315a8;
    }
    ctx->pc = 0x2315A0u;
    {
        const bool branch_taken_0x2315a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2315A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315A0u;
        // 0x2315a4: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315a0) {
            ctx->pc = 0x231588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_231588;
        }
    }
    ctx->pc = 0x2315A8u;
label_2315a8:
    // 0x2315a8: 0x2411fff0  addiu       $s1, $zero, -0x10
    ctx->pc = 0x2315a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2315ac:
    // 0x2315ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_2315b0:
    if (ctx->pc == 0x2315B0u) {
        ctx->pc = 0x2315B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315ACu;
        // 0x2315b0: 0x245004b0  addiu       $s0, $v0, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2315B4u;
        goto label_2315b4;
    }
    ctx->pc = 0x2315ACu;
    {
        const bool branch_taken_0x2315ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2315B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315ACu;
        // 0x2315b0: 0x245004b0  addiu       $s0, $v0, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315ac) {
            ctx->pc = 0x2315C8u;
            goto label_2315c8;
        }
    }
    ctx->pc = 0x2315B4u;
label_2315b4:
    // 0x2315b4: 0x0  nop
    ctx->pc = 0x2315b4u;
    // NOP
label_2315b8:
    // 0x2315b8: 0xc08c34a  jal         func_230D28
label_2315bc:
    if (ctx->pc == 0x2315BCu) {
        ctx->pc = 0x2315C0u;
        goto label_2315c0;
    }
    ctx->pc = 0x2315B8u;
    SET_GPR_U32(ctx, 31, 0x2315C0u);
    ctx->pc = 0x230D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D28u, 0x2315B8u, 0x2315C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2315C0u;
label_2315c0:
    // 0x2315c0: 0x5c4000b2  bgtzl       $v0, . + 4 + (0xB2 << 2)
label_2315c4:
    if (ctx->pc == 0x2315C4u) {
        ctx->pc = 0x2315C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315C0u;
        // 0x2315c4: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2315C8u;
        goto label_2315c8;
    }
    ctx->pc = 0x2315C0u;
    {
        const bool branch_taken_0x2315c0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2315c0) {
            ctx->pc = 0x2315C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2315C0u;
            // 0x2315c4: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23188Cu;
            goto label_23188c;
        }
    }
    ctx->pc = 0x2315C8u;
label_2315c8:
    // 0x2315c8: 0x8f8282d0  lw          $v0, -0x7D30($gp)
    ctx->pc = 0x2315c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2315cc:
    // 0x2315cc: 0x9204001d  lbu         $a0, 0x1D($s0)
    ctx->pc = 0x2315ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
label_2315d0:
    // 0x2315d0: 0x3c060009  lui         $a2, 0x9
    ctx->pc = 0x2315d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)9 << 16));
label_2315d4:
    // 0x2315d4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2315d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2315d8:
    // 0x2315d8: 0x8cc61280  lw          $a2, 0x1280($a2)
    ctx->pc = 0x2315d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4736)));
label_2315dc:
    // 0x2315dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2315dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2315e0:
    // 0x2315e0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2315e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2315e4:
    // 0x2315e4: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x2315e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_2315e8:
    // 0x2315e8: 0xc06c2b0  jal         func_1B0AC0
label_2315ec:
    if (ctx->pc == 0x2315ECu) {
        ctx->pc = 0x2315ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315E8u;
        // 0x2315ec: 0xd13024  and         $a2, $a2, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2315F0u;
        goto label_2315f0;
    }
    ctx->pc = 0x2315E8u;
    SET_GPR_U32(ctx, 31, 0x2315F0u);
    ctx->pc = 0x2315ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2315E8u;
    // 0x2315ec: 0xd13024  and         $a2, $a2, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0AC0u, 0x2315E8u, 0x2315F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2315F0u;
label_2315f0:
    // 0x2315f0: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
label_2315f4:
    if (ctx->pc == 0x2315F4u) {
        ctx->pc = 0x2315F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315F0u;
        // 0x2315f4: 0x26c304b0  addiu       $v1, $s6, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2315F8u;
        goto label_2315f8;
    }
    ctx->pc = 0x2315F0u;
    {
        const bool branch_taken_0x2315f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2315F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315F0u;
        // 0x2315f4: 0x26c304b0  addiu       $v1, $s6, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315f0) {
            ctx->pc = 0x2315B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2315b8;
        }
    }
    ctx->pc = 0x2315F8u;
label_2315f8:
    // 0x2315f8: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x2315f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2315fc:
    // 0x2315fc: 0x9062001c  lbu         $v0, 0x1C($v1)
    ctx->pc = 0x2315fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_231600:
    // 0x231600: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231604:
    // 0x231604: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231604u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231608:
    // 0x231608: 0xa0221284  sb          $v0, 0x1284($at)
    ctx->pc = 0x231608u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4740), (uint8_t)GPR_U32(ctx, 2));
label_23160c:
    // 0x23160c: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x23160cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231610:
    // 0x231610: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231614:
    // 0x231614: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x231614u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_231618:
    // 0x231618: 0xa0201285  sb          $zero, 0x1285($at)
    ctx->pc = 0x231618u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4741), (uint8_t)GPR_U32(ctx, 0));
label_23161c:
    // 0x23161c: 0x8f8282d0  lw          $v0, -0x7D30($gp)
    ctx->pc = 0x23161cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231620:
    // 0x231620: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231624:
    // 0x231624: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x231624u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_231628:
    // 0x231628: 0xa0201286  sb          $zero, 0x1286($at)
    ctx->pc = 0x231628u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4742), (uint8_t)GPR_U32(ctx, 0));
label_23162c:
    // 0x23162c: 0x10000007  b           . + 4 + (0x7 << 2)
label_231630:
    if (ctx->pc == 0x231630u) {
        ctx->pc = 0x231630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23162Cu;
        // 0x231630: 0x8f8582d0  lw          $a1, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231634u;
        goto label_231634;
    }
    ctx->pc = 0x23162Cu;
    {
        const bool branch_taken_0x23162c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23162Cu;
        // 0x231630: 0x8f8582d0  lw          $a1, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23162c) {
            ctx->pc = 0x23164Cu;
            goto label_23164c;
        }
    }
    ctx->pc = 0x231634u;
label_231634:
    // 0x231634: 0x0  nop
    ctx->pc = 0x231634u;
    // NOP
label_231638:
    // 0x231638: 0xc08c34a  jal         func_230D28
label_23163c:
    if (ctx->pc == 0x23163Cu) {
        ctx->pc = 0x231640u;
        goto label_231640;
    }
    ctx->pc = 0x231638u;
    SET_GPR_U32(ctx, 31, 0x231640u);
    ctx->pc = 0x230D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D28u, 0x231638u, 0x231640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231640u;
label_231640:
    // 0x231640: 0x1c400092  bgtz        $v0, . + 4 + (0x92 << 2)
label_231644:
    if (ctx->pc == 0x231644u) {
        ctx->pc = 0x231644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231640u;
        // 0x231644: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231648u;
        goto label_231648;
    }
    ctx->pc = 0x231640u;
    {
        const bool branch_taken_0x231640 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x231644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231640u;
        // 0x231644: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231640) {
            ctx->pc = 0x23188Cu;
            goto label_23188c;
        }
    }
    ctx->pc = 0x231648u;
label_231648:
    // 0x231648: 0x8f8582d0  lw          $a1, -0x7D30($gp)
    ctx->pc = 0x231648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_23164c:
    // 0x23164c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x23164cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231650:
    // 0x231650: 0x34211284  ori         $at, $at, 0x1284
    ctx->pc = 0x231650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4740);
label_231654:
    // 0x231654: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x231654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
label_231658:
    // 0x231658: 0xc06c2bc  jal         func_1B0AF0
label_23165c:
    if (ctx->pc == 0x23165Cu) {
        ctx->pc = 0x23165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231658u;
        // 0x23165c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231660u;
        goto label_231660;
    }
    ctx->pc = 0x231658u;
    SET_GPR_U32(ctx, 31, 0x231660u);
    ctx->pc = 0x23165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231658u;
    // 0x23165c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0AF0u, 0x231658u, 0x231660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231660u;
label_231660:
    // 0x231660: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
label_231664:
    if (ctx->pc == 0x231664u) {
        ctx->pc = 0x231664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231660u;
        // 0x231664: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231668u;
        goto label_231668;
    }
    ctx->pc = 0x231660u;
    {
        const bool branch_taken_0x231660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231660u;
        // 0x231664: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231660) {
            ctx->pc = 0x231638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_231638;
        }
    }
    ctx->pc = 0x231668u;
label_231668:
    // 0x231668: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x231668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23166c:
    // 0x23166c: 0xaf8282d8  sw          $v0, -0x7D28($gp)
    ctx->pc = 0x23166cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935256), GPR_U32(ctx, 2));
label_231670:
    // 0x231670: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231674:
    // 0x231674: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231674u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231678:
    // 0x231678: 0xac33128c  sw          $s3, 0x128C($at)
    ctx->pc = 0x231678u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4748), GPR_U32(ctx, 19));
label_23167c:
    // 0x23167c: 0x10000004  b           . + 4 + (0x4 << 2)
label_231680:
    if (ctx->pc == 0x231680u) {
        ctx->pc = 0x231680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23167Cu;
        // 0x231680: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231684u;
        goto label_231684;
    }
    ctx->pc = 0x23167Cu;
    {
        const bool branch_taken_0x23167c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23167Cu;
        // 0x231680: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23167c) {
            ctx->pc = 0x231690u;
            goto label_231690;
        }
    }
    ctx->pc = 0x231684u;
label_231684:
    // 0x231684: 0x0  nop
    ctx->pc = 0x231684u;
    // NOP
label_231688:
    // 0x231688: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_23168c:
    // 0x23168c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x23168cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_231690:
    // 0x231690: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x231690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_231694:
    // 0x231694: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x231694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
label_231698:
    // 0x231698: 0x34a5e010  ori         $a1, $a1, 0xE010
    ctx->pc = 0x231698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57360);
label_23169c:
    // 0x23169c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2316a0:
    // 0x2316a0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2316a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2316a4:
    // 0x2316a4: 0x24841100  addiu       $a0, $a0, 0x1100
    ctx->pc = 0x2316a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4352));
label_2316a8:
    // 0x2316a8: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x2316a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
label_2316ac:
    // 0x2316ac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2316acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2316b0:
    // 0x2316b0: 0xc08c75c  jal         func_231D70
label_2316b4:
    if (ctx->pc == 0x2316B4u) {
        ctx->pc = 0x2316B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2316B0u;
        // 0x2316b4: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2316B8u;
        goto label_2316b8;
    }
    ctx->pc = 0x2316B0u;
    SET_GPR_U32(ctx, 31, 0x2316B8u);
    ctx->pc = 0x2316B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2316B0u;
    // 0x2316b4: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D70u, 0x2316B0u, 0x2316B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2316B8u;
label_2316b8:
    // 0x2316b8: 0xc0689da  jal         func_1A2768
label_2316bc:
    if (ctx->pc == 0x2316BCu) {
        ctx->pc = 0x2316C0u;
        goto label_2316c0;
    }
    ctx->pc = 0x2316B8u;
    SET_GPR_U32(ctx, 31, 0x2316C0u);
    ctx->pc = 0x1A2768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2768u, 0x2316B8u, 0x2316C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2316C0u;
label_2316c0:
    // 0x2316c0: 0x8f8882d0  lw          $t0, -0x7D30($gp)
    ctx->pc = 0x2316c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2316c4:
    // 0x2316c4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2316c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2316c8:
    // 0x2316c8: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x2316c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2316cc:
    // 0x2316cc: 0x240b0200  addiu       $t3, $zero, 0x200
    ctx->pc = 0x2316ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2316d0:
    // 0x2316d0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x2316d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2316d4:
    // 0x2316d4: 0x34079140  ori         $a3, $zero, 0x9140
    ctx->pc = 0x2316d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37184);
label_2316d8:
    // 0x2316d8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2316d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2316dc:
    // 0x2316dc: 0x3c0a0008  lui         $t2, 0x8
    ctx->pc = 0x2316dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)8 << 16));
label_2316e0:
    // 0x2316e0: 0x354ae140  ori         $t2, $t2, 0xE140
    ctx->pc = 0x2316e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)57664);
label_2316e4:
    // 0x2316e4: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x2316e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_2316e8:
    // 0x2316e8: 0x3c040009  lui         $a0, 0x9
    ctx->pc = 0x2316e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9 << 16));
label_2316ec:
    // 0x2316ec: 0x34841158  ori         $a0, $a0, 0x1158
    ctx->pc = 0x2316ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4440);
label_2316f0:
    // 0x2316f0: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x2316f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_2316f4:
    // 0x2316f4: 0xc08ccc6  jal         func_233318
label_2316f8:
    if (ctx->pc == 0x2316F8u) {
        ctx->pc = 0x2316F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2316F4u;
        // 0x2316f8: 0x250800c0  addiu       $t0, $t0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2316FCu;
        goto label_2316fc;
    }
    ctx->pc = 0x2316F4u;
    SET_GPR_U32(ctx, 31, 0x2316FCu);
    ctx->pc = 0x2316F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2316F4u;
    // 0x2316f8: 0x250800c0  addiu       $t0, $t0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233318u, 0x2316F4u, 0x2316FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2316FCu;
label_2316fc:
    // 0x2316fc: 0x8fa70064  lw          $a3, 0x64($sp)
    ctx->pc = 0x2316fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_231700:
    // 0x231700: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
label_231704:
    if (ctx->pc == 0x231704u) {
        ctx->pc = 0x231704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231700u;
        // 0x231704: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231708u;
        goto label_231708;
    }
    ctx->pc = 0x231700u;
    {
        const bool branch_taken_0x231700 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x231704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231700u;
        // 0x231704: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231700) {
            ctx->pc = 0x23172Cu;
            goto label_23172c;
        }
    }
    ctx->pc = 0x231708u;
label_231708:
    // 0x231708: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x231708u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23170c:
    // 0x23170c: 0x8fa80060  lw          $t0, 0x60($sp)
    ctx->pc = 0x23170cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_231710:
    // 0x231710: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x231710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231714:
    // 0x231714: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x231714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_231718:
    // 0x231718: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_23171c:
    // 0x23171c: 0x34211210  ori         $at, $at, 0x1210
    ctx->pc = 0x23171cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4624);
label_231720:
    // 0x231720: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x231720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231724:
    // 0x231724: 0xc08c7b6  jal         func_231ED8
label_231728:
    if (ctx->pc == 0x231728u) {
        ctx->pc = 0x231728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231724u;
        // 0x231728: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23172Cu;
        goto label_23172c;
    }
    ctx->pc = 0x231724u;
    SET_GPR_U32(ctx, 31, 0x23172Cu);
    ctx->pc = 0x231728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231724u;
    // 0x231728: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231ED8u, 0x231724u, 0x23172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23172Cu;
label_23172c:
    // 0x23172c: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x23172cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231730:
    // 0x231730: 0x26d004b0  addiu       $s0, $s6, 0x4B0
    ctx->pc = 0x231730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 1200));
label_231734:
    // 0x231734: 0x3c070023  lui         $a3, 0x23
    ctx->pc = 0x231734u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)35 << 16));
label_231738:
    // 0x231738: 0x8e060048  lw          $a2, 0x48($s0)
    ctx->pc = 0x231738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_23173c:
    // 0x23173c: 0x24881100  addiu       $t0, $a0, 0x1100
    ctx->pc = 0x23173cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4352));
label_231740:
    // 0x231740: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231744:
    // 0x231744: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x231744u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
label_231748:
    // 0x231748: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x231748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_23174c:
    // 0x23174c: 0x24e71a48  addiu       $a3, $a3, 0x1A48
    ctx->pc = 0x23174cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6728));
label_231750:
    // 0x231750: 0xc08cd0c  jal         func_233430
label_231754:
    if (ctx->pc == 0x231754u) {
        ctx->pc = 0x231754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231750u;
        // 0x231754: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231758u;
        goto label_231758;
    }
    ctx->pc = 0x231750u;
    SET_GPR_U32(ctx, 31, 0x231758u);
    ctx->pc = 0x231754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231750u;
    // 0x231754: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233430u, 0x231750u, 0x231758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231758u;
label_231758:
    // 0x231758: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x231758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_23175c:
    // 0x23175c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_231760:
    if (ctx->pc == 0x231760u) {
        ctx->pc = 0x231760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23175Cu;
        // 0x231760: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231764u;
        goto label_231764;
    }
    ctx->pc = 0x23175Cu;
    {
        const bool branch_taken_0x23175c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23175Cu;
        // 0x231760: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23175c) {
            ctx->pc = 0x231788u;
            goto label_231788;
        }
    }
    ctx->pc = 0x231764u;
label_231764:
    // 0x231764: 0x3c070023  lui         $a3, 0x23
    ctx->pc = 0x231764u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)35 << 16));
label_231768:
    // 0x231768: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x231768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_23176c:
    // 0x23176c: 0x24e71b60  addiu       $a3, $a3, 0x1B60
    ctx->pc = 0x23176cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7008));
label_231770:
    // 0x231770: 0x24881100  addiu       $t0, $a0, 0x1100
    ctx->pc = 0x231770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4352));
label_231774:
    // 0x231774: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231778:
    // 0x231778: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x231778u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
label_23177c:
    // 0x23177c: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x23177cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_231780:
    // 0x231780: 0xc08cd0c  jal         func_233430
label_231784:
    if (ctx->pc == 0x231784u) {
        ctx->pc = 0x231784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231780u;
        // 0x231784: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231788u;
        goto label_231788;
    }
    ctx->pc = 0x231780u;
    SET_GPR_U32(ctx, 31, 0x231788u);
    ctx->pc = 0x231784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231780u;
    // 0x231784: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233430u, 0x231780u, 0x231788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231788u;
label_231788:
    // 0x231788: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_23178c:
    // 0x23178c: 0x24860040  addiu       $a2, $a0, 0x40
    ctx->pc = 0x23178cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_231790:
    // 0x231790: 0x3c050009  lui         $a1, 0x9
    ctx->pc = 0x231790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9 << 16));
label_231794:
    // 0x231794: 0x34a51140  ori         $a1, $a1, 0x1140
    ctx->pc = 0x231794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4416);
label_231798:
    // 0x231798: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x231798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_23179c:
    // 0x23179c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x23179cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_2317a0:
    // 0x2317a0: 0x34211144  ori         $at, $at, 0x1144
    ctx->pc = 0x2317a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4420);
label_2317a4:
    // 0x2317a4: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x2317a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_2317a8:
    // 0x2317a8: 0xc08cf58  jal         func_233D60
label_2317ac:
    if (ctx->pc == 0x2317ACu) {
        ctx->pc = 0x2317ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317A8u;
        // 0x2317ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2317B0u;
        goto label_2317b0;
    }
    ctx->pc = 0x2317A8u;
    SET_GPR_U32(ctx, 31, 0x2317B0u);
    ctx->pc = 0x2317ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2317A8u;
    // 0x2317ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233D60u, 0x2317A8u, 0x2317B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2317B0u;
label_2317b0:
    // 0x2317b0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x2317b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_2317b4:
    // 0x2317b4: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x2317b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2317b8:
    // 0x2317b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2317b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2317bc:
    // 0x2317bc: 0x9207001e  lbu         $a3, 0x1E($s0)
    ctx->pc = 0x2317bcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 30)));
label_2317c0:
    // 0x2317c0: 0x3c06002e  lui         $a2, 0x2E
    ctx->pc = 0x2317c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)46 << 16));
label_2317c4:
    // 0x2317c4: 0x24c68170  addiu       $a2, $a2, -0x7E90
    ctx->pc = 0x2317c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934896));
label_2317c8:
    // 0x2317c8: 0x3c010008  lui         $at, 0x8
    ctx->pc = 0x2317c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8 << 16));
label_2317cc:
    // 0x2317cc: 0x34219140  ori         $at, $at, 0x9140
    ctx->pc = 0x2317ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37184);
label_2317d0:
    // 0x2317d0: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x2317d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_2317d4:
    // 0x2317d4: 0x24055000  addiu       $a1, $zero, 0x5000
    ctx->pc = 0x2317d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
label_2317d8:
    // 0x2317d8: 0x24423688  addiu       $v0, $v0, 0x3688
    ctx->pc = 0x2317d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13960));
label_2317dc:
    // 0x2317dc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2317dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_2317e0:
    // 0x2317e0: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x2317e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
label_2317e4:
    // 0x2317e4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2317e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2317e8:
    // 0x2317e8: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x2317e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
label_2317ec:
    // 0x2317ec: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x2317ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_2317f0:
    // 0x2317f0: 0xc069188  jal         func_1A4620
label_2317f4:
    if (ctx->pc == 0x2317F4u) {
        ctx->pc = 0x2317F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2317F0u;
        // 0x2317f4: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2317F8u;
        goto label_2317f8;
    }
    ctx->pc = 0x2317F0u;
    SET_GPR_U32(ctx, 31, 0x2317F8u);
    ctx->pc = 0x2317F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2317F0u;
    // 0x2317f4: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4620u, 0x2317F0u, 0x2317F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2317F8u;
label_2317f8:
    // 0x2317f8: 0x8f8582d0  lw          $a1, -0x7D30($gp)
    ctx->pc = 0x2317f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2317fc:
    // 0x2317fc: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2317fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231800:
    // 0x231800: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x231800u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
label_231804:
    // 0x231804: 0xac221278  sw          $v0, 0x1278($at)
    ctx->pc = 0x231804u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4728), GPR_U32(ctx, 2));
label_231808:
    // 0x231808: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_23180c:
    // 0x23180c: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x23180cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
label_231810:
    // 0x231810: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x231810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
label_231814:
    // 0x231814: 0xc069190  jal         func_1A4640
label_231818:
    if (ctx->pc == 0x231818u) {
        ctx->pc = 0x231818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231814u;
        // 0x231818: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23181Cu;
        goto label_23181c;
    }
    ctx->pc = 0x231814u;
    SET_GPR_U32(ctx, 31, 0x23181Cu);
    ctx->pc = 0x231818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231814u;
    // 0x231818: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4640u, 0x231814u, 0x23181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23181Cu;
label_23181c:
    // 0x23181c: 0xc0694c0  jal         func_1A5300
label_231820:
    if (ctx->pc == 0x231820u) {
        ctx->pc = 0x231820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23181Cu;
        // 0x231820: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231824u;
        goto label_231824;
    }
    ctx->pc = 0x23181Cu;
    SET_GPR_U32(ctx, 31, 0x231824u);
    ctx->pc = 0x231820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23181Cu;
    // 0x231820: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5300u, 0x23181Cu, 0x231824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231824u;
label_231824:
    // 0x231824: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x231824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231828:
    // 0x231828: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x231828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
label_23182c:
    // 0x23182c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23182cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_231830:
    // 0x231830: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231834:
    // 0x231834: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x231834u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_231838:
    // 0x231838: 0xac22127c  sw          $v0, 0x127C($at)
    ctx->pc = 0x231838u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4732), GPR_U32(ctx, 2));
label_23183c:
    // 0x23183c: 0xc08d118  jal         func_234460
label_231840:
    if (ctx->pc == 0x231840u) {
        ctx->pc = 0x231840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23183Cu;
        // 0x231840: 0x24844238  addiu       $a0, $a0, 0x4238 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231844u;
        goto label_231844;
    }
    ctx->pc = 0x23183Cu;
    SET_GPR_U32(ctx, 31, 0x231844u);
    ctx->pc = 0x231840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23183Cu;
    // 0x231840: 0x24844238  addiu       $a0, $a0, 0x4238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234460u, 0x23183Cu, 0x231844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231844u;
label_231844:
    // 0x231844: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x231844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231848:
    // 0x231848: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_23184c:
    // 0x23184c: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x23184cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_231850:
    // 0x231850: 0xac221208  sw          $v0, 0x1208($at)
    ctx->pc = 0x231850u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4616), GPR_U32(ctx, 2));
label_231854:
    // 0x231854: 0xc0694da  jal         func_1A5368
label_231858:
    if (ctx->pc == 0x231858u) {
        ctx->pc = 0x231858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231854u;
        // 0x231858: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23185Cu;
        goto label_23185c;
    }
    ctx->pc = 0x231854u;
    SET_GPR_U32(ctx, 31, 0x23185Cu);
    ctx->pc = 0x231858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231854u;
    // 0x231858: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5368u, 0x231854u, 0x23185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23185Cu;
label_23185c:
    // 0x23185c: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x23185cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_231860:
    // 0x231860: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x231860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231864:
    // 0x231864: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x231864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_231868:
    // 0x231868: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x231868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
label_23186c:
    // 0x23186c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23186cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_231870:
    // 0x231870: 0x8c631208  lw          $v1, 0x1208($v1)
    ctx->pc = 0x231870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4616)));
label_231874:
    // 0x231874: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231878:
    // 0x231878: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231878u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_23187c:
    // 0x23187c: 0xac251288  sw          $a1, 0x1288($at)
    ctx->pc = 0x23187cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4744), GPR_U32(ctx, 5));
label_231880:
    // 0x231880: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x231880u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_231884:
    // 0x231884: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x231884u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_231888:
    // 0x231888: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x231888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23188c:
    // 0x23188c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x23188cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_231890:
    // 0x231890: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x231890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_231894:
    // 0x231894: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x231894u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_231898:
    // 0x231898: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x231898u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_23189c:
    // 0x23189c: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x23189cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_2318a0:
    // 0x2318a0: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2318a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2318a4:
    // 0x2318a4: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x2318a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_2318a8:
    // 0x2318a8: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x2318a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2318ac:
    // 0x2318ac: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x2318acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    ctx->pc = 0x2318b0u;
}
