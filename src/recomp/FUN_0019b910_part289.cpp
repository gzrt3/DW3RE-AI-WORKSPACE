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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part289(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x228310u: goto label_228310;
        case 0x228314u: goto label_228314;
        case 0x228318u: goto label_228318;
        case 0x22831cu: goto label_22831c;
        case 0x228320u: goto label_228320;
        case 0x228324u: goto label_228324;
        case 0x228328u: goto label_228328;
        case 0x22832cu: goto label_22832c;
        case 0x228330u: goto label_228330;
        case 0x228334u: goto label_228334;
        case 0x228338u: goto label_228338;
        case 0x22833cu: goto label_22833c;
        case 0x228340u: goto label_228340;
        case 0x228344u: goto label_228344;
        case 0x228348u: goto label_228348;
        case 0x22834cu: goto label_22834c;
        case 0x228350u: goto label_228350;
        case 0x228354u: goto label_228354;
        case 0x228358u: goto label_228358;
        case 0x22835cu: goto label_22835c;
        case 0x228360u: goto label_228360;
        case 0x228364u: goto label_228364;
        case 0x228368u: goto label_228368;
        case 0x22836cu: goto label_22836c;
        case 0x228370u: goto label_228370;
        case 0x228374u: goto label_228374;
        case 0x228378u: goto label_228378;
        case 0x22837cu: goto label_22837c;
        case 0x228380u: goto label_228380;
        case 0x228384u: goto label_228384;
        case 0x228388u: goto label_228388;
        case 0x22838cu: goto label_22838c;
        case 0x228390u: goto label_228390;
        case 0x228394u: goto label_228394;
        case 0x228398u: goto label_228398;
        case 0x22839cu: goto label_22839c;
        case 0x2283a0u: goto label_2283a0;
        case 0x2283a4u: goto label_2283a4;
        case 0x2283a8u: goto label_2283a8;
        case 0x2283acu: goto label_2283ac;
        case 0x2283b0u: goto label_2283b0;
        case 0x2283b4u: goto label_2283b4;
        case 0x2283b8u: goto label_2283b8;
        case 0x2283bcu: goto label_2283bc;
        case 0x2283c0u: goto label_2283c0;
        case 0x2283c4u: goto label_2283c4;
        case 0x2283c8u: goto label_2283c8;
        case 0x2283ccu: goto label_2283cc;
        case 0x2283d0u: goto label_2283d0;
        case 0x2283d4u: goto label_2283d4;
        case 0x2283d8u: goto label_2283d8;
        case 0x2283dcu: goto label_2283dc;
        case 0x2283e0u: goto label_2283e0;
        case 0x2283e4u: goto label_2283e4;
        case 0x2283e8u: goto label_2283e8;
        case 0x2283ecu: goto label_2283ec;
        case 0x2283f0u: goto label_2283f0;
        case 0x2283f4u: goto label_2283f4;
        case 0x2283f8u: goto label_2283f8;
        case 0x2283fcu: goto label_2283fc;
        case 0x228400u: goto label_228400;
        case 0x228404u: goto label_228404;
        case 0x228408u: goto label_228408;
        case 0x22840cu: goto label_22840c;
        case 0x228410u: goto label_228410;
        case 0x228414u: goto label_228414;
        case 0x228418u: goto label_228418;
        case 0x22841cu: goto label_22841c;
        case 0x228420u: goto label_228420;
        case 0x228424u: goto label_228424;
        case 0x228428u: goto label_228428;
        case 0x22842cu: goto label_22842c;
        case 0x228430u: goto label_228430;
        case 0x228434u: goto label_228434;
        case 0x228438u: goto label_228438;
        case 0x22843cu: goto label_22843c;
        case 0x228440u: goto label_228440;
        case 0x228444u: goto label_228444;
        case 0x228448u: goto label_228448;
        case 0x22844cu: goto label_22844c;
        case 0x228450u: goto label_228450;
        case 0x228454u: goto label_228454;
        case 0x228458u: goto label_228458;
        case 0x22845cu: goto label_22845c;
        case 0x228460u: goto label_228460;
        case 0x228464u: goto label_228464;
        case 0x228468u: goto label_228468;
        case 0x22846cu: goto label_22846c;
        case 0x228470u: goto label_228470;
        case 0x228474u: goto label_228474;
        case 0x228478u: goto label_228478;
        case 0x22847cu: goto label_22847c;
        case 0x228480u: goto label_228480;
        case 0x228484u: goto label_228484;
        case 0x228488u: goto label_228488;
        case 0x22848cu: goto label_22848c;
        case 0x228490u: goto label_228490;
        case 0x228494u: goto label_228494;
        case 0x228498u: goto label_228498;
        case 0x22849cu: goto label_22849c;
        case 0x2284a0u: goto label_2284a0;
        case 0x2284a4u: goto label_2284a4;
        case 0x2284a8u: goto label_2284a8;
        case 0x2284acu: goto label_2284ac;
        case 0x2284b0u: goto label_2284b0;
        case 0x2284b4u: goto label_2284b4;
        case 0x2284b8u: goto label_2284b8;
        case 0x2284bcu: goto label_2284bc;
        case 0x2284c0u: goto label_2284c0;
        case 0x2284c4u: goto label_2284c4;
        case 0x2284c8u: goto label_2284c8;
        case 0x2284ccu: goto label_2284cc;
        case 0x2284d0u: goto label_2284d0;
        case 0x2284d4u: goto label_2284d4;
        case 0x2284d8u: goto label_2284d8;
        case 0x2284dcu: goto label_2284dc;
        case 0x2284e0u: goto label_2284e0;
        case 0x2284e4u: goto label_2284e4;
        case 0x2284e8u: goto label_2284e8;
        case 0x2284ecu: goto label_2284ec;
        case 0x2284f0u: goto label_2284f0;
        case 0x2284f4u: goto label_2284f4;
        case 0x2284f8u: goto label_2284f8;
        case 0x2284fcu: goto label_2284fc;
        case 0x228500u: goto label_228500;
        case 0x228504u: goto label_228504;
        case 0x228508u: goto label_228508;
        case 0x22850cu: goto label_22850c;
        case 0x228510u: goto label_228510;
        case 0x228514u: goto label_228514;
        case 0x228518u: goto label_228518;
        case 0x22851cu: goto label_22851c;
        case 0x228520u: goto label_228520;
        case 0x228524u: goto label_228524;
        case 0x228528u: goto label_228528;
        case 0x22852cu: goto label_22852c;
        case 0x228530u: goto label_228530;
        case 0x228534u: goto label_228534;
        case 0x228538u: goto label_228538;
        case 0x22853cu: goto label_22853c;
        case 0x228540u: goto label_228540;
        case 0x228544u: goto label_228544;
        case 0x228548u: goto label_228548;
        case 0x22854cu: goto label_22854c;
        case 0x228550u: goto label_228550;
        case 0x228554u: goto label_228554;
        case 0x228558u: goto label_228558;
        case 0x22855cu: goto label_22855c;
        case 0x228560u: goto label_228560;
        case 0x228564u: goto label_228564;
        case 0x228568u: goto label_228568;
        case 0x22856cu: goto label_22856c;
        case 0x228570u: goto label_228570;
        case 0x228574u: goto label_228574;
        case 0x228578u: goto label_228578;
        case 0x22857cu: goto label_22857c;
        case 0x228580u: goto label_228580;
        case 0x228584u: goto label_228584;
        case 0x228588u: goto label_228588;
        case 0x22858cu: goto label_22858c;
        case 0x228590u: goto label_228590;
        case 0x228594u: goto label_228594;
        case 0x228598u: goto label_228598;
        case 0x22859cu: goto label_22859c;
        case 0x2285a0u: goto label_2285a0;
        case 0x2285a4u: goto label_2285a4;
        case 0x2285a8u: goto label_2285a8;
        case 0x2285acu: goto label_2285ac;
        case 0x2285b0u: goto label_2285b0;
        case 0x2285b4u: goto label_2285b4;
        case 0x2285b8u: goto label_2285b8;
        case 0x2285bcu: goto label_2285bc;
        case 0x2285c0u: goto label_2285c0;
        case 0x2285c4u: goto label_2285c4;
        case 0x2285c8u: goto label_2285c8;
        case 0x2285ccu: goto label_2285cc;
        case 0x2285d0u: goto label_2285d0;
        case 0x2285d4u: goto label_2285d4;
        case 0x2285d8u: goto label_2285d8;
        case 0x2285dcu: goto label_2285dc;
        case 0x2285e0u: goto label_2285e0;
        case 0x2285e4u: goto label_2285e4;
        case 0x2285e8u: goto label_2285e8;
        case 0x2285ecu: goto label_2285ec;
        case 0x2285f0u: goto label_2285f0;
        case 0x2285f4u: goto label_2285f4;
        case 0x2285f8u: goto label_2285f8;
        case 0x2285fcu: goto label_2285fc;
        case 0x228600u: goto label_228600;
        case 0x228604u: goto label_228604;
        case 0x228608u: goto label_228608;
        case 0x22860cu: goto label_22860c;
        case 0x228610u: goto label_228610;
        case 0x228614u: goto label_228614;
        case 0x228618u: goto label_228618;
        case 0x22861cu: goto label_22861c;
        case 0x228620u: goto label_228620;
        case 0x228624u: goto label_228624;
        case 0x228628u: goto label_228628;
        case 0x22862cu: goto label_22862c;
        case 0x228630u: goto label_228630;
        case 0x228634u: goto label_228634;
        case 0x228638u: goto label_228638;
        case 0x22863cu: goto label_22863c;
        case 0x228640u: goto label_228640;
        case 0x228644u: goto label_228644;
        case 0x228648u: goto label_228648;
        case 0x22864cu: goto label_22864c;
        case 0x228650u: goto label_228650;
        case 0x228654u: goto label_228654;
        case 0x228658u: goto label_228658;
        case 0x22865cu: goto label_22865c;
        case 0x228660u: goto label_228660;
        case 0x228664u: goto label_228664;
        case 0x228668u: goto label_228668;
        case 0x22866cu: goto label_22866c;
        case 0x228670u: goto label_228670;
        case 0x228674u: goto label_228674;
        case 0x228678u: goto label_228678;
        case 0x22867cu: goto label_22867c;
        case 0x228680u: goto label_228680;
        case 0x228684u: goto label_228684;
        case 0x228688u: goto label_228688;
        case 0x22868cu: goto label_22868c;
        case 0x228690u: goto label_228690;
        case 0x228694u: goto label_228694;
        case 0x228698u: goto label_228698;
        case 0x22869cu: goto label_22869c;
        case 0x2286a0u: goto label_2286a0;
        case 0x2286a4u: goto label_2286a4;
        case 0x2286a8u: goto label_2286a8;
        case 0x2286acu: goto label_2286ac;
        case 0x2286b0u: goto label_2286b0;
        case 0x2286b4u: goto label_2286b4;
        case 0x2286b8u: goto label_2286b8;
        case 0x2286bcu: goto label_2286bc;
        case 0x2286c0u: goto label_2286c0;
        case 0x2286c4u: goto label_2286c4;
        case 0x2286c8u: goto label_2286c8;
        case 0x2286ccu: goto label_2286cc;
        case 0x2286d0u: goto label_2286d0;
        case 0x2286d4u: goto label_2286d4;
        case 0x2286d8u: goto label_2286d8;
        case 0x2286dcu: goto label_2286dc;
        case 0x2286e0u: goto label_2286e0;
        case 0x2286e4u: goto label_2286e4;
        case 0x2286e8u: goto label_2286e8;
        case 0x2286ecu: goto label_2286ec;
        case 0x2286f0u: goto label_2286f0;
        case 0x2286f4u: goto label_2286f4;
        case 0x2286f8u: goto label_2286f8;
        case 0x2286fcu: goto label_2286fc;
        case 0x228700u: goto label_228700;
        case 0x228704u: goto label_228704;
        case 0x228708u: goto label_228708;
        case 0x22870cu: goto label_22870c;
        case 0x228710u: goto label_228710;
        case 0x228714u: goto label_228714;
        case 0x228718u: goto label_228718;
        case 0x22871cu: goto label_22871c;
        case 0x228720u: goto label_228720;
        case 0x228724u: goto label_228724;
        case 0x228728u: goto label_228728;
        case 0x22872cu: goto label_22872c;
        case 0x228730u: goto label_228730;
        case 0x228734u: goto label_228734;
        case 0x228738u: goto label_228738;
        case 0x22873cu: goto label_22873c;
        case 0x228740u: goto label_228740;
        case 0x228744u: goto label_228744;
        case 0x228748u: goto label_228748;
        case 0x22874cu: goto label_22874c;
        case 0x228750u: goto label_228750;
        case 0x228754u: goto label_228754;
        case 0x228758u: goto label_228758;
        case 0x22875cu: goto label_22875c;
        case 0x228760u: goto label_228760;
        case 0x228764u: goto label_228764;
        case 0x228768u: goto label_228768;
        case 0x22876cu: goto label_22876c;
        case 0x228770u: goto label_228770;
        case 0x228774u: goto label_228774;
        case 0x228778u: goto label_228778;
        case 0x22877cu: goto label_22877c;
        case 0x228780u: goto label_228780;
        case 0x228784u: goto label_228784;
        case 0x228788u: goto label_228788;
        case 0x22878cu: goto label_22878c;
        case 0x228790u: goto label_228790;
        case 0x228794u: goto label_228794;
        case 0x228798u: goto label_228798;
        case 0x22879cu: goto label_22879c;
        case 0x2287a0u: goto label_2287a0;
        case 0x2287a4u: goto label_2287a4;
        case 0x2287a8u: goto label_2287a8;
        case 0x2287acu: goto label_2287ac;
        case 0x2287b0u: goto label_2287b0;
        case 0x2287b4u: goto label_2287b4;
        case 0x2287b8u: goto label_2287b8;
        case 0x2287bcu: goto label_2287bc;
        case 0x2287c0u: goto label_2287c0;
        case 0x2287c4u: goto label_2287c4;
        case 0x2287c8u: goto label_2287c8;
        case 0x2287ccu: goto label_2287cc;
        case 0x2287d0u: goto label_2287d0;
        case 0x2287d4u: goto label_2287d4;
        case 0x2287d8u: goto label_2287d8;
        case 0x2287dcu: goto label_2287dc;
        case 0x2287e0u: goto label_2287e0;
        case 0x2287e4u: goto label_2287e4;
        case 0x2287e8u: goto label_2287e8;
        case 0x2287ecu: goto label_2287ec;
        case 0x2287f0u: goto label_2287f0;
        case 0x2287f4u: goto label_2287f4;
        case 0x2287f8u: goto label_2287f8;
        case 0x2287fcu: goto label_2287fc;
        case 0x228800u: goto label_228800;
        case 0x228804u: goto label_228804;
        case 0x228808u: goto label_228808;
        case 0x22880cu: goto label_22880c;
        case 0x228810u: goto label_228810;
        case 0x228814u: goto label_228814;
        case 0x228818u: goto label_228818;
        case 0x22881cu: goto label_22881c;
        case 0x228820u: goto label_228820;
        case 0x228824u: goto label_228824;
        case 0x228828u: goto label_228828;
        case 0x22882cu: goto label_22882c;
        case 0x228830u: goto label_228830;
        case 0x228834u: goto label_228834;
        case 0x228838u: goto label_228838;
        case 0x22883cu: goto label_22883c;
        case 0x228840u: goto label_228840;
        case 0x228844u: goto label_228844;
        case 0x228848u: goto label_228848;
        case 0x22884cu: goto label_22884c;
        case 0x228850u: goto label_228850;
        case 0x228854u: goto label_228854;
        case 0x228858u: goto label_228858;
        case 0x22885cu: goto label_22885c;
        case 0x228860u: goto label_228860;
        case 0x228864u: goto label_228864;
        case 0x228868u: goto label_228868;
        case 0x22886cu: goto label_22886c;
        case 0x228870u: goto label_228870;
        case 0x228874u: goto label_228874;
        case 0x228878u: goto label_228878;
        case 0x22887cu: goto label_22887c;
        case 0x228880u: goto label_228880;
        case 0x228884u: goto label_228884;
        case 0x228888u: goto label_228888;
        case 0x22888cu: goto label_22888c;
        case 0x228890u: goto label_228890;
        case 0x228894u: goto label_228894;
        case 0x228898u: goto label_228898;
        case 0x22889cu: goto label_22889c;
        case 0x2288a0u: goto label_2288a0;
        case 0x2288a4u: goto label_2288a4;
        case 0x2288a8u: goto label_2288a8;
        case 0x2288acu: goto label_2288ac;
        case 0x2288b0u: goto label_2288b0;
        case 0x2288b4u: goto label_2288b4;
        case 0x2288b8u: goto label_2288b8;
        case 0x2288bcu: goto label_2288bc;
        case 0x2288c0u: goto label_2288c0;
        case 0x2288c4u: goto label_2288c4;
        case 0x2288c8u: goto label_2288c8;
        case 0x2288ccu: goto label_2288cc;
        case 0x2288d0u: goto label_2288d0;
        case 0x2288d4u: goto label_2288d4;
        case 0x2288d8u: goto label_2288d8;
        case 0x2288dcu: goto label_2288dc;
        case 0x2288e0u: goto label_2288e0;
        case 0x2288e4u: goto label_2288e4;
        case 0x2288e8u: goto label_2288e8;
        case 0x2288ecu: goto label_2288ec;
        case 0x2288f0u: goto label_2288f0;
        case 0x2288f4u: goto label_2288f4;
        case 0x2288f8u: goto label_2288f8;
        case 0x2288fcu: goto label_2288fc;
        case 0x228900u: goto label_228900;
        case 0x228904u: goto label_228904;
        case 0x228908u: goto label_228908;
        case 0x22890cu: goto label_22890c;
        case 0x228910u: goto label_228910;
        case 0x228914u: goto label_228914;
        case 0x228918u: goto label_228918;
        case 0x22891cu: goto label_22891c;
        case 0x228920u: goto label_228920;
        case 0x228924u: goto label_228924;
        case 0x228928u: goto label_228928;
        case 0x22892cu: goto label_22892c;
        case 0x228930u: goto label_228930;
        case 0x228934u: goto label_228934;
        case 0x228938u: goto label_228938;
        case 0x22893cu: goto label_22893c;
        case 0x228940u: goto label_228940;
        case 0x228944u: goto label_228944;
        case 0x228948u: goto label_228948;
        case 0x22894cu: goto label_22894c;
        case 0x228950u: goto label_228950;
        case 0x228954u: goto label_228954;
        case 0x228958u: goto label_228958;
        case 0x22895cu: goto label_22895c;
        case 0x228960u: goto label_228960;
        case 0x228964u: goto label_228964;
        case 0x228968u: goto label_228968;
        case 0x22896cu: goto label_22896c;
        case 0x228970u: goto label_228970;
        case 0x228974u: goto label_228974;
        case 0x228978u: goto label_228978;
        case 0x22897cu: goto label_22897c;
        case 0x228980u: goto label_228980;
        case 0x228984u: goto label_228984;
        case 0x228988u: goto label_228988;
        case 0x22898cu: goto label_22898c;
        case 0x228990u: goto label_228990;
        case 0x228994u: goto label_228994;
        case 0x228998u: goto label_228998;
        case 0x22899cu: goto label_22899c;
        case 0x2289a0u: goto label_2289a0;
        case 0x2289a4u: goto label_2289a4;
        case 0x2289a8u: goto label_2289a8;
        case 0x2289acu: goto label_2289ac;
        case 0x2289b0u: goto label_2289b0;
        case 0x2289b4u: goto label_2289b4;
        case 0x2289b8u: goto label_2289b8;
        case 0x2289bcu: goto label_2289bc;
        case 0x2289c0u: goto label_2289c0;
        case 0x2289c4u: goto label_2289c4;
        case 0x2289c8u: goto label_2289c8;
        case 0x2289ccu: goto label_2289cc;
        case 0x2289d0u: goto label_2289d0;
        case 0x2289d4u: goto label_2289d4;
        case 0x2289d8u: goto label_2289d8;
        case 0x2289dcu: goto label_2289dc;
        case 0x2289e0u: goto label_2289e0;
        case 0x2289e4u: goto label_2289e4;
        case 0x2289e8u: goto label_2289e8;
        case 0x2289ecu: goto label_2289ec;
        case 0x2289f0u: goto label_2289f0;
        case 0x2289f4u: goto label_2289f4;
        case 0x2289f8u: goto label_2289f8;
        case 0x2289fcu: goto label_2289fc;
        case 0x228a00u: goto label_228a00;
        case 0x228a04u: goto label_228a04;
        case 0x228a08u: goto label_228a08;
        case 0x228a0cu: goto label_228a0c;
        case 0x228a10u: goto label_228a10;
        case 0x228a14u: goto label_228a14;
        case 0x228a18u: goto label_228a18;
        case 0x228a1cu: goto label_228a1c;
        case 0x228a20u: goto label_228a20;
        case 0x228a24u: goto label_228a24;
        case 0x228a28u: goto label_228a28;
        case 0x228a2cu: goto label_228a2c;
        case 0x228a30u: goto label_228a30;
        case 0x228a34u: goto label_228a34;
        case 0x228a38u: goto label_228a38;
        case 0x228a3cu: goto label_228a3c;
        case 0x228a40u: goto label_228a40;
        case 0x228a44u: goto label_228a44;
        case 0x228a48u: goto label_228a48;
        case 0x228a4cu: goto label_228a4c;
        case 0x228a50u: goto label_228a50;
        case 0x228a54u: goto label_228a54;
        case 0x228a58u: goto label_228a58;
        case 0x228a5cu: goto label_228a5c;
        case 0x228a60u: goto label_228a60;
        case 0x228a64u: goto label_228a64;
        case 0x228a68u: goto label_228a68;
        case 0x228a6cu: goto label_228a6c;
        case 0x228a70u: goto label_228a70;
        case 0x228a74u: goto label_228a74;
        case 0x228a78u: goto label_228a78;
        case 0x228a7cu: goto label_228a7c;
        case 0x228a80u: goto label_228a80;
        case 0x228a84u: goto label_228a84;
        case 0x228a88u: goto label_228a88;
        case 0x228a8cu: goto label_228a8c;
        case 0x228a90u: goto label_228a90;
        case 0x228a94u: goto label_228a94;
        case 0x228a98u: goto label_228a98;
        case 0x228a9cu: goto label_228a9c;
        case 0x228aa0u: goto label_228aa0;
        case 0x228aa4u: goto label_228aa4;
        case 0x228aa8u: goto label_228aa8;
        case 0x228aacu: goto label_228aac;
        case 0x228ab0u: goto label_228ab0;
        case 0x228ab4u: goto label_228ab4;
        case 0x228ab8u: goto label_228ab8;
        case 0x228abcu: goto label_228abc;
        case 0x228ac0u: goto label_228ac0;
        case 0x228ac4u: goto label_228ac4;
        case 0x228ac8u: goto label_228ac8;
        case 0x228accu: goto label_228acc;
        case 0x228ad0u: goto label_228ad0;
        case 0x228ad4u: goto label_228ad4;
        case 0x228ad8u: goto label_228ad8;
        case 0x228adcu: goto label_228adc;
        default: return;
    }

label_228310:
    // 0x228310: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x228310u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
label_228314:
    // 0x228314: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x228314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_228318:
    // 0x228318: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x228318u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_22831c:
    // 0x22831c: 0x2442ec90  addiu       $v0, $v0, -0x1370
    ctx->pc = 0x22831cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962320));
label_228320:
    // 0x228320: 0x565021  addu        $t2, $v0, $s6
    ctx->pc = 0x228320u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_228324:
    // 0x228324: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x228324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228328:
    // 0x228328: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x228328u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_22832c:
    // 0x22832c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x22832cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_228330:
    // 0x228330: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x228330u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_228334:
    // 0x228334: 0x914d0002  lbu         $t5, 0x2($t2)
    ctx->pc = 0x228334u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
label_228338:
    // 0x228338: 0x914e0003  lbu         $t6, 0x3($t2)
    ctx->pc = 0x228338u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
label_22833c:
    // 0x22833c: 0x914f0000  lbu         $t7, 0x0($t2)
    ctx->pc = 0x22833cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_228340:
    // 0x228340: 0x91580001  lbu         $t8, 0x1($t2)
    ctx->pc = 0x228340u;
    SET_GPR_ZE32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
label_228344:
    // 0x228344: 0x0  nop
    ctx->pc = 0x228344u;
    // NOP
label_228348:
    // 0x228348: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x228348u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22834c:
    // 0x22834c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22834cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228350:
    // 0x228350: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x228350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_228354:
    // 0x228354: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x228354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_228358:
    // 0x228358: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x228358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_22835c:
    // 0x22835c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x22835cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_228360:
    // 0x228360: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x228360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_228364:
    // 0x228364: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x228364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_228368:
    // 0x228368: 0x90880039  lbu         $t0, 0x39($a0)
    ctx->pc = 0x228368u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
label_22836c:
    // 0x22836c: 0x1505010f  bne         $t0, $a1, . + 4 + (0x10F << 2)
label_228370:
    if (ctx->pc == 0x228370u) {
        ctx->pc = 0x228370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22836Cu;
        // 0x228370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228374u;
        goto label_228374;
    }
    ctx->pc = 0x22836Cu;
    {
        const bool branch_taken_0x22836c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x228370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22836Cu;
        // 0x228370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22836c) {
            ctx->pc = 0x2287ACu;
            goto label_2287ac;
        }
    }
    ctx->pc = 0x228374u;
label_228374:
    // 0x228374: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x228374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228378:
    // 0x228378: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x228378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22837c:
    // 0x22837c: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x22837cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_228380:
    // 0x228380: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x228380u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_228384:
    // 0x228384: 0x240b0007  addiu       $t3, $zero, 0x7
    ctx->pc = 0x228384u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_228388:
    // 0x228388: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x228388u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22838c:
    // 0x22838c: 0x0  nop
    ctx->pc = 0x22838cu;
    // NOP
label_228390:
    // 0x228390: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_228394:
    if (ctx->pc == 0x228394u) {
        ctx->pc = 0x228398u;
        goto label_228398;
    }
    ctx->pc = 0x228390u;
    {
        const bool branch_taken_0x228390 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x228390) {
            ctx->pc = 0x2283A0u;
            goto label_2283a0;
        }
    }
    ctx->pc = 0x228398u;
label_228398:
    // 0x228398: 0x12700005  beq         $s3, $s0, . + 4 + (0x5 << 2)
label_22839c:
    if (ctx->pc == 0x22839Cu) {
        ctx->pc = 0x2283A0u;
        goto label_2283a0;
    }
    ctx->pc = 0x228398u;
    {
        const bool branch_taken_0x228398 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x228398) {
            ctx->pc = 0x2283B0u;
            goto label_2283b0;
        }
    }
    ctx->pc = 0x2283A0u;
label_2283a0:
    // 0x2283a0: 0x14ac0042  bne         $a1, $t4, . + 4 + (0x42 << 2)
label_2283a4:
    if (ctx->pc == 0x2283A4u) {
        ctx->pc = 0x2283A8u;
        goto label_2283a8;
    }
    ctx->pc = 0x2283A0u;
    {
        const bool branch_taken_0x2283a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 12));
        if (branch_taken_0x2283a0) {
            ctx->pc = 0x2284ACu;
            goto label_2284ac;
        }
    }
    ctx->pc = 0x2283A8u;
label_2283a8:
    // 0x2283a8: 0x166b0040  bne         $s3, $t3, . + 4 + (0x40 << 2)
label_2283ac:
    if (ctx->pc == 0x2283ACu) {
        ctx->pc = 0x2283B0u;
        goto label_2283b0;
    }
    ctx->pc = 0x2283A8u;
    {
        const bool branch_taken_0x2283a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 11));
        if (branch_taken_0x2283a8) {
            ctx->pc = 0x2284ACu;
            goto label_2284ac;
        }
    }
    ctx->pc = 0x2283B0u;
label_2283b0:
    // 0x2283b0: 0x1514021  addu        $t0, $t2, $s1
    ctx->pc = 0x2283b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
label_2283b4:
    // 0x2283b4: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x2283b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2283b8:
    // 0x2283b8: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2283b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2283bc:
    // 0x2283bc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2283bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2283c0:
    // 0x2283c0: 0x0  nop
    ctx->pc = 0x2283c0u;
    // NOP
label_2283c4:
    // 0x2283c4: 0x45000039  bc1f        . + 4 + (0x39 << 2)
label_2283c8:
    if (ctx->pc == 0x2283C8u) {
        ctx->pc = 0x2283C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283C4u;
        // 0x2283c8: 0x1319021  addu        $s2, $t1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2283CCu;
        goto label_2283cc;
    }
    ctx->pc = 0x2283C4u;
    {
        const bool branch_taken_0x2283c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2283C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283C4u;
        // 0x2283c8: 0x1319021  addu        $s2, $t1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2283c4) {
            ctx->pc = 0x2284ACu;
            goto label_2284ac;
        }
    }
    ctx->pc = 0x2283CCu;
label_2283cc:
    // 0x2283cc: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2283ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2283d0:
    // 0x2283d0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2283d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2283d4:
    // 0x2283d4: 0x0  nop
    ctx->pc = 0x2283d4u;
    // NOP
label_2283d8:
    // 0x2283d8: 0x45010034  bc1t        . + 4 + (0x34 << 2)
label_2283dc:
    if (ctx->pc == 0x2283DCu) {
        ctx->pc = 0x2283E0u;
        goto label_2283e0;
    }
    ctx->pc = 0x2283D8u;
    {
        const bool branch_taken_0x2283d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2283d8) {
            ctx->pc = 0x2284ACu;
            goto label_2284ac;
        }
    }
    ctx->pc = 0x2283E0u;
label_2283e0:
    // 0x2283e0: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x2283e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2283e4:
    // 0x2283e4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2283e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2283e8:
    // 0x2283e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2283e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2283ec:
    // 0x2283ec: 0x0  nop
    ctx->pc = 0x2283ecu;
    // NOP
label_2283f0:
    // 0x2283f0: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_2283f4:
    if (ctx->pc == 0x2283F4u) {
        ctx->pc = 0x2283F8u;
        goto label_2283f8;
    }
    ctx->pc = 0x2283F0u;
    {
        const bool branch_taken_0x2283f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2283f0) {
            ctx->pc = 0x2284ACu;
            goto label_2284ac;
        }
    }
    ctx->pc = 0x2283F8u;
label_2283f8:
    // 0x2283f8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2283f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2283fc:
    // 0x2283fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2283fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228400:
    // 0x228400: 0x0  nop
    ctx->pc = 0x228400u;
    // NOP
label_228404:
    // 0x228404: 0x45010029  bc1t        . + 4 + (0x29 << 2)
label_228408:
    if (ctx->pc == 0x228408u) {
        ctx->pc = 0x22840Cu;
        goto label_22840c;
    }
    ctx->pc = 0x228404u;
    {
        const bool branch_taken_0x228404 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228404) {
            ctx->pc = 0x2284ACu;
            goto label_2284ac;
        }
    }
    ctx->pc = 0x22840Cu;
label_22840c:
    // 0x22840c: 0x548c0  sll         $t1, $a1, 3
    ctx->pc = 0x22840cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_228410:
    // 0x228410: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x228410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_228414:
    // 0x228414: 0x1095821  addu        $t3, $t0, $t1
    ctx->pc = 0x228414u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_228418:
    // 0x228418: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x228418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_22841c:
    // 0x22841c: 0x3c0868db  lui         $t0, 0x68DB
    ctx->pc = 0x22841cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)26843 << 16));
label_228420:
    // 0x228420: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x228420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228424:
    // 0x228424: 0x350a8bad  ori         $t2, $t0, 0x8BAD
    ctx->pc = 0x228424u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)35757);
label_228428:
    // 0x228428: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x228428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22842c:
    // 0x22842c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22842cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_228430:
    // 0x228430: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x228430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_228434:
    // 0x228434: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x228434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_228438:
    // 0x228438: 0xc5620004  lwc1        $f2, 0x4($t3)
    ctx->pc = 0x228438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22843c:
    // 0x22843c: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x22843cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228440:
    // 0x228440: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x228440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228444:
    // 0x228444: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x228444u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_228448:
    // 0x228448: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x228448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22844c:
    // 0x22844c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x22844cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_228450:
    // 0x228450: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x228450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228454:
    // 0x228454: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228454u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_228458:
    // 0x228458: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x228458u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_22845c:
    // 0x22845c: 0x0  nop
    ctx->pc = 0x22845cu;
    // NOP
label_228460:
    // 0x228460: 0x1480018  mult        $zero, $t2, $t0
    ctx->pc = 0x228460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_228464:
    // 0x228464: 0x84fc2  srl         $t1, $t0, 31
    ctx->pc = 0x228464u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_228468:
    // 0x228468: 0x0  nop
    ctx->pc = 0x228468u;
    // NOP
label_22846c:
    // 0x22846c: 0x4010  mfhi        $t0
    ctx->pc = 0x22846cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_228470:
    // 0x228470: 0x842c3  sra         $t0, $t0, 11
    ctx->pc = 0x228470u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 11));
label_228474:
    // 0x228474: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x228474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_228478:
    // 0x228478: 0xa0880022  sb          $t0, 0x22($a0)
    ctx->pc = 0x228478u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 34), (uint8_t)GPR_U32(ctx, 8));
label_22847c:
    // 0x22847c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x22847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228480:
    // 0x228480: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228480u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_228484:
    // 0x228484: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x228484u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_228488:
    // 0x228488: 0x0  nop
    ctx->pc = 0x228488u;
    // NOP
label_22848c:
    // 0x22848c: 0x1480018  mult        $zero, $t2, $t0
    ctx->pc = 0x22848cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_228490:
    // 0x228490: 0x84fc2  srl         $t1, $t0, 31
    ctx->pc = 0x228490u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_228494:
    // 0x228494: 0x0  nop
    ctx->pc = 0x228494u;
    // NOP
label_228498:
    // 0x228498: 0x4010  mfhi        $t0
    ctx->pc = 0x228498u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_22849c:
    // 0x22849c: 0x842c3  sra         $t0, $t0, 11
    ctx->pc = 0x22849cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 11));
label_2284a0:
    // 0x2284a0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2284a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_2284a4:
    // 0x2284a4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2284a8:
    if (ctx->pc == 0x2284A8u) {
        ctx->pc = 0x2284A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284A4u;
        // 0x2284a8: 0xa0880023  sb          $t0, 0x23($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2284ACu;
        goto label_2284ac;
    }
    ctx->pc = 0x2284A4u;
    {
        const bool branch_taken_0x2284a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2284A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284A4u;
        // 0x2284a8: 0xa0880023  sb          $t0, 0x23($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2284a4) {
            ctx->pc = 0x2284C0u;
            goto label_2284c0;
        }
    }
    ctx->pc = 0x2284ACu;
label_2284ac:
    // 0x2284ac: 0x0  nop
    ctx->pc = 0x2284acu;
    // NOP
label_2284b0:
    // 0x2284b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2284b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2284b4:
    // 0x2284b4: 0x28a80002  slti        $t0, $a1, 0x2
    ctx->pc = 0x2284b4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_2284b8:
    // 0x2284b8: 0x1500ffb4  bnez        $t0, . + 4 + (-0x4C << 2)
label_2284bc:
    if (ctx->pc == 0x2284BCu) {
        ctx->pc = 0x2284BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284B8u;
        // 0x2284bc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2284C0u;
        goto label_2284c0;
    }
    ctx->pc = 0x2284B8u;
    {
        const bool branch_taken_0x2284b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2284BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284B8u;
        // 0x2284bc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2284b8) {
            ctx->pc = 0x22838Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22838c;
        }
    }
    ctx->pc = 0x2284C0u;
label_2284c0:
    // 0x2284c0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2284c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2284c4:
    // 0x2284c4: 0x14a80031  bne         $a1, $t0, . + 4 + (0x31 << 2)
label_2284c8:
    if (ctx->pc == 0x2284C8u) {
        ctx->pc = 0x2284CCu;
        goto label_2284cc;
    }
    ctx->pc = 0x2284C4u;
    {
        const bool branch_taken_0x2284c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        if (branch_taken_0x2284c4) {
            ctx->pc = 0x22858Cu;
            goto label_22858c;
        }
    }
    ctx->pc = 0x2284CCu;
label_2284cc:
    // 0x2284cc: 0x90850022  lbu         $a1, 0x22($a0)
    ctx->pc = 0x2284ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
label_2284d0:
    // 0x2284d0: 0x14ad002e  bne         $a1, $t5, . + 4 + (0x2E << 2)
label_2284d4:
    if (ctx->pc == 0x2284D4u) {
        ctx->pc = 0x2284D8u;
        goto label_2284d8;
    }
    ctx->pc = 0x2284D0u;
    {
        const bool branch_taken_0x2284d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 13));
        if (branch_taken_0x2284d0) {
            ctx->pc = 0x22858Cu;
            goto label_22858c;
        }
    }
    ctx->pc = 0x2284D8u;
label_2284d8:
    // 0x2284d8: 0x90850023  lbu         $a1, 0x23($a0)
    ctx->pc = 0x2284d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
label_2284dc:
    // 0x2284dc: 0x14ae002b  bne         $a1, $t6, . + 4 + (0x2B << 2)
label_2284e0:
    if (ctx->pc == 0x2284E0u) {
        ctx->pc = 0x2284E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284DCu;
        // 0x2284e0: 0x1ed2823  subu        $a1, $t7, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2284E4u;
        goto label_2284e4;
    }
    ctx->pc = 0x2284DCu;
    {
        const bool branch_taken_0x2284dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 14));
        ctx->pc = 0x2284E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284DCu;
        // 0x2284e0: 0x1ed2823  subu        $a1, $t7, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2284dc) {
            ctx->pc = 0x22858Cu;
            goto label_22858c;
        }
    }
    ctx->pc = 0x2284E4u;
label_2284e4:
    // 0x2284e4: 0x3c08459c  lui         $t0, 0x459C
    ctx->pc = 0x2284e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17820 << 16));
label_2284e8:
    // 0x2284e8: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2284e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2284ec:
    // 0x2284ec: 0x35084000  ori         $t0, $t0, 0x4000
    ctx->pc = 0x2284ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
label_2284f0:
    // 0x2284f0: 0x44881800  mtc1        $t0, $f3
    ctx->pc = 0x2284f0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2284f4:
    // 0x2284f4: 0x0  nop
    ctx->pc = 0x2284f4u;
    // NOP
label_2284f8:
    // 0x2284f8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2284f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2284fc:
    // 0x2284fc: 0x3c0568db  lui         $a1, 0x68DB
    ctx->pc = 0x2284fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26843 << 16));
label_228500:
    // 0x228500: 0x30e4023  subu        $t0, $t8, $t6
    ctx->pc = 0x228500u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 14)));
label_228504:
    // 0x228504: 0x34a98bad  ori         $t1, $a1, 0x8BAD
    ctx->pc = 0x228504u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35757);
label_228508:
    // 0x228508: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x228508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22850c:
    // 0x22850c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x22850cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_228510:
    // 0x228510: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x228510u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_228514:
    // 0x228514: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x228514u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_228518:
    // 0x228518: 0x0  nop
    ctx->pc = 0x228518u;
    // NOP
label_22851c:
    // 0x22851c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x22851cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_228520:
    // 0x228520: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x228520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_228524:
    // 0x228524: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x228524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228528:
    // 0x228528: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x228528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_22852c:
    // 0x22852c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22852cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_228530:
    // 0x228530: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x228530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_228534:
    // 0x228534: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x228534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228538:
    // 0x228538: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228538u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_22853c:
    // 0x22853c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x22853cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_228540:
    // 0x228540: 0x0  nop
    ctx->pc = 0x228540u;
    // NOP
label_228544:
    // 0x228544: 0x1250018  mult        $zero, $t1, $a1
    ctx->pc = 0x228544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_228548:
    // 0x228548: 0x547c2  srl         $t0, $a1, 31
    ctx->pc = 0x228548u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_22854c:
    // 0x22854c: 0x0  nop
    ctx->pc = 0x22854cu;
    // NOP
label_228550:
    // 0x228550: 0x2810  mfhi        $a1
    ctx->pc = 0x228550u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_228554:
    // 0x228554: 0x52ac3  sra         $a1, $a1, 11
    ctx->pc = 0x228554u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
label_228558:
    // 0x228558: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x228558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_22855c:
    // 0x22855c: 0xa0850022  sb          $a1, 0x22($a0)
    ctx->pc = 0x22855cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 34), (uint8_t)GPR_U32(ctx, 5));
label_228560:
    // 0x228560: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x228560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228564:
    // 0x228564: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228564u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_228568:
    // 0x228568: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x228568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_22856c:
    // 0x22856c: 0x0  nop
    ctx->pc = 0x22856cu;
    // NOP
label_228570:
    // 0x228570: 0x1250018  mult        $zero, $t1, $a1
    ctx->pc = 0x228570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_228574:
    // 0x228574: 0x547c2  srl         $t0, $a1, 31
    ctx->pc = 0x228574u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_228578:
    // 0x228578: 0x0  nop
    ctx->pc = 0x228578u;
    // NOP
label_22857c:
    // 0x22857c: 0x2810  mfhi        $a1
    ctx->pc = 0x22857cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_228580:
    // 0x228580: 0x52ac3  sra         $a1, $a1, 11
    ctx->pc = 0x228580u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
label_228584:
    // 0x228584: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x228584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_228588:
    // 0x228588: 0xa0850023  sb          $a1, 0x23($a0)
    ctx->pc = 0x228588u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 5));
label_22858c:
    // 0x22858c: 0x0  nop
    ctx->pc = 0x22858cu;
    // NOP
label_228590:
    // 0x228590: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x228590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228594:
    // 0x228594: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x228594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228598:
    // 0x228598: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x228598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22859c:
    // 0x22859c: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x22859cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2285a0:
    // 0x2285a0: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2285a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2285a4:
    // 0x2285a4: 0x240b0007  addiu       $t3, $zero, 0x7
    ctx->pc = 0x2285a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2285a8:
    // 0x2285a8: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x2285a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2285ac:
    // 0x2285ac: 0x0  nop
    ctx->pc = 0x2285acu;
    // NOP
label_2285b0:
    // 0x2285b0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_2285b4:
    if (ctx->pc == 0x2285B4u) {
        ctx->pc = 0x2285B8u;
        goto label_2285b8;
    }
    ctx->pc = 0x2285B0u;
    {
        const bool branch_taken_0x2285b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2285b0) {
            ctx->pc = 0x2285C0u;
            goto label_2285c0;
        }
    }
    ctx->pc = 0x2285B8u;
label_2285b8:
    // 0x2285b8: 0x12700005  beq         $s3, $s0, . + 4 + (0x5 << 2)
label_2285bc:
    if (ctx->pc == 0x2285BCu) {
        ctx->pc = 0x2285C0u;
        goto label_2285c0;
    }
    ctx->pc = 0x2285B8u;
    {
        const bool branch_taken_0x2285b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x2285b8) {
            ctx->pc = 0x2285D0u;
            goto label_2285d0;
        }
    }
    ctx->pc = 0x2285C0u;
label_2285c0:
    // 0x2285c0: 0x14ac0042  bne         $a1, $t4, . + 4 + (0x42 << 2)
label_2285c4:
    if (ctx->pc == 0x2285C4u) {
        ctx->pc = 0x2285C8u;
        goto label_2285c8;
    }
    ctx->pc = 0x2285C0u;
    {
        const bool branch_taken_0x2285c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 12));
        if (branch_taken_0x2285c0) {
            ctx->pc = 0x2286CCu;
            goto label_2286cc;
        }
    }
    ctx->pc = 0x2285C8u;
label_2285c8:
    // 0x2285c8: 0x166b0040  bne         $s3, $t3, . + 4 + (0x40 << 2)
label_2285cc:
    if (ctx->pc == 0x2285CCu) {
        ctx->pc = 0x2285D0u;
        goto label_2285d0;
    }
    ctx->pc = 0x2285C8u;
    {
        const bool branch_taken_0x2285c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 11));
        if (branch_taken_0x2285c8) {
            ctx->pc = 0x2286CCu;
            goto label_2286cc;
        }
    }
    ctx->pc = 0x2285D0u;
label_2285d0:
    // 0x2285d0: 0x1514021  addu        $t0, $t2, $s1
    ctx->pc = 0x2285d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
label_2285d4:
    // 0x2285d4: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x2285d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2285d8:
    // 0x2285d8: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x2285d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2285dc:
    // 0x2285dc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2285dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2285e0:
    // 0x2285e0: 0x0  nop
    ctx->pc = 0x2285e0u;
    // NOP
label_2285e4:
    // 0x2285e4: 0x45000039  bc1f        . + 4 + (0x39 << 2)
label_2285e8:
    if (ctx->pc == 0x2285E8u) {
        ctx->pc = 0x2285E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285E4u;
        // 0x2285e8: 0x1319021  addu        $s2, $t1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2285ECu;
        goto label_2285ec;
    }
    ctx->pc = 0x2285E4u;
    {
        const bool branch_taken_0x2285e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2285E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285E4u;
        // 0x2285e8: 0x1319021  addu        $s2, $t1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2285e4) {
            ctx->pc = 0x2286CCu;
            goto label_2286cc;
        }
    }
    ctx->pc = 0x2285ECu;
label_2285ec:
    // 0x2285ec: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2285ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2285f0:
    // 0x2285f0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2285f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2285f4:
    // 0x2285f4: 0x0  nop
    ctx->pc = 0x2285f4u;
    // NOP
label_2285f8:
    // 0x2285f8: 0x45010034  bc1t        . + 4 + (0x34 << 2)
label_2285fc:
    if (ctx->pc == 0x2285FCu) {
        ctx->pc = 0x228600u;
        goto label_228600;
    }
    ctx->pc = 0x2285F8u;
    {
        const bool branch_taken_0x2285f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2285f8) {
            ctx->pc = 0x2286CCu;
            goto label_2286cc;
        }
    }
    ctx->pc = 0x228600u;
label_228600:
    // 0x228600: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x228600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228604:
    // 0x228604: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x228604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228608:
    // 0x228608: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x228608u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22860c:
    // 0x22860c: 0x0  nop
    ctx->pc = 0x22860cu;
    // NOP
label_228610:
    // 0x228610: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_228614:
    if (ctx->pc == 0x228614u) {
        ctx->pc = 0x228618u;
        goto label_228618;
    }
    ctx->pc = 0x228610u;
    {
        const bool branch_taken_0x228610 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228610) {
            ctx->pc = 0x2286CCu;
            goto label_2286cc;
        }
    }
    ctx->pc = 0x228618u;
label_228618:
    // 0x228618: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x228618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22861c:
    // 0x22861c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22861cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228620:
    // 0x228620: 0x0  nop
    ctx->pc = 0x228620u;
    // NOP
label_228624:
    // 0x228624: 0x45010029  bc1t        . + 4 + (0x29 << 2)
label_228628:
    if (ctx->pc == 0x228628u) {
        ctx->pc = 0x22862Cu;
        goto label_22862c;
    }
    ctx->pc = 0x228624u;
    {
        const bool branch_taken_0x228624 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228624) {
            ctx->pc = 0x2286CCu;
            goto label_2286cc;
        }
    }
    ctx->pc = 0x22862Cu;
label_22862c:
    // 0x22862c: 0x548c0  sll         $t1, $a1, 3
    ctx->pc = 0x22862cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_228630:
    // 0x228630: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x228630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_228634:
    // 0x228634: 0x1095821  addu        $t3, $t0, $t1
    ctx->pc = 0x228634u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_228638:
    // 0x228638: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x228638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_22863c:
    // 0x22863c: 0x3c0868db  lui         $t0, 0x68DB
    ctx->pc = 0x22863cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)26843 << 16));
label_228640:
    // 0x228640: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x228640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228644:
    // 0x228644: 0x350a8bad  ori         $t2, $t0, 0x8BAD
    ctx->pc = 0x228644u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)35757);
label_228648:
    // 0x228648: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x228648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22864c:
    // 0x22864c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22864cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_228650:
    // 0x228650: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x228650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_228654:
    // 0x228654: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x228654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_228658:
    // 0x228658: 0xc5620004  lwc1        $f2, 0x4($t3)
    ctx->pc = 0x228658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22865c:
    // 0x22865c: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x22865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228660:
    // 0x228660: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x228660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228664:
    // 0x228664: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x228664u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_228668:
    // 0x228668: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x228668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22866c:
    // 0x22866c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x22866cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_228670:
    // 0x228670: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x228670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228674:
    // 0x228674: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228674u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_228678:
    // 0x228678: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x228678u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_22867c:
    // 0x22867c: 0x0  nop
    ctx->pc = 0x22867cu;
    // NOP
label_228680:
    // 0x228680: 0x1480018  mult        $zero, $t2, $t0
    ctx->pc = 0x228680u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_228684:
    // 0x228684: 0x84fc2  srl         $t1, $t0, 31
    ctx->pc = 0x228684u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_228688:
    // 0x228688: 0x0  nop
    ctx->pc = 0x228688u;
    // NOP
label_22868c:
    // 0x22868c: 0x4010  mfhi        $t0
    ctx->pc = 0x22868cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_228690:
    // 0x228690: 0x842c3  sra         $t0, $t0, 11
    ctx->pc = 0x228690u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 11));
label_228694:
    // 0x228694: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x228694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_228698:
    // 0x228698: 0xa0880026  sb          $t0, 0x26($a0)
    ctx->pc = 0x228698u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 8));
label_22869c:
    // 0x22869c: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x22869cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2286a0:
    // 0x2286a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2286a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2286a4:
    // 0x2286a4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2286a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_2286a8:
    // 0x2286a8: 0x0  nop
    ctx->pc = 0x2286a8u;
    // NOP
label_2286ac:
    // 0x2286ac: 0x1480018  mult        $zero, $t2, $t0
    ctx->pc = 0x2286acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2286b0:
    // 0x2286b0: 0x84fc2  srl         $t1, $t0, 31
    ctx->pc = 0x2286b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_2286b4:
    // 0x2286b4: 0x0  nop
    ctx->pc = 0x2286b4u;
    // NOP
label_2286b8:
    // 0x2286b8: 0x4010  mfhi        $t0
    ctx->pc = 0x2286b8u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2286bc:
    // 0x2286bc: 0x842c3  sra         $t0, $t0, 11
    ctx->pc = 0x2286bcu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 11));
label_2286c0:
    // 0x2286c0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2286c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_2286c4:
    // 0x2286c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2286c8:
    if (ctx->pc == 0x2286C8u) {
        ctx->pc = 0x2286C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286C4u;
        // 0x2286c8: 0xa0880027  sb          $t0, 0x27($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2286CCu;
        goto label_2286cc;
    }
    ctx->pc = 0x2286C4u;
    {
        const bool branch_taken_0x2286c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2286C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286C4u;
        // 0x2286c8: 0xa0880027  sb          $t0, 0x27($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2286c4) {
            ctx->pc = 0x2286E0u;
            goto label_2286e0;
        }
    }
    ctx->pc = 0x2286CCu;
label_2286cc:
    // 0x2286cc: 0x0  nop
    ctx->pc = 0x2286ccu;
    // NOP
label_2286d0:
    // 0x2286d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2286d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2286d4:
    // 0x2286d4: 0x28a80002  slti        $t0, $a1, 0x2
    ctx->pc = 0x2286d4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_2286d8:
    // 0x2286d8: 0x1500ffb4  bnez        $t0, . + 4 + (-0x4C << 2)
label_2286dc:
    if (ctx->pc == 0x2286DCu) {
        ctx->pc = 0x2286DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286D8u;
        // 0x2286dc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2286E0u;
        goto label_2286e0;
    }
    ctx->pc = 0x2286D8u;
    {
        const bool branch_taken_0x2286d8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2286DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286D8u;
        // 0x2286dc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2286d8) {
            ctx->pc = 0x2285ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2285ac;
        }
    }
    ctx->pc = 0x2286E0u;
label_2286e0:
    // 0x2286e0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2286e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2286e4:
    // 0x2286e4: 0x14a80031  bne         $a1, $t0, . + 4 + (0x31 << 2)
label_2286e8:
    if (ctx->pc == 0x2286E8u) {
        ctx->pc = 0x2286ECu;
        goto label_2286ec;
    }
    ctx->pc = 0x2286E4u;
    {
        const bool branch_taken_0x2286e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        if (branch_taken_0x2286e4) {
            ctx->pc = 0x2287ACu;
            goto label_2287ac;
        }
    }
    ctx->pc = 0x2286ECu;
label_2286ec:
    // 0x2286ec: 0x90850026  lbu         $a1, 0x26($a0)
    ctx->pc = 0x2286ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
label_2286f0:
    // 0x2286f0: 0x14ad002e  bne         $a1, $t5, . + 4 + (0x2E << 2)
label_2286f4:
    if (ctx->pc == 0x2286F4u) {
        ctx->pc = 0x2286F8u;
        goto label_2286f8;
    }
    ctx->pc = 0x2286F0u;
    {
        const bool branch_taken_0x2286f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 13));
        if (branch_taken_0x2286f0) {
            ctx->pc = 0x2287ACu;
            goto label_2287ac;
        }
    }
    ctx->pc = 0x2286F8u;
label_2286f8:
    // 0x2286f8: 0x90850027  lbu         $a1, 0x27($a0)
    ctx->pc = 0x2286f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
label_2286fc:
    // 0x2286fc: 0x14ae002b  bne         $a1, $t6, . + 4 + (0x2B << 2)
label_228700:
    if (ctx->pc == 0x228700u) {
        ctx->pc = 0x228700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286FCu;
        // 0x228700: 0x1ed2823  subu        $a1, $t7, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228704u;
        goto label_228704;
    }
    ctx->pc = 0x2286FCu;
    {
        const bool branch_taken_0x2286fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 14));
        ctx->pc = 0x228700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286FCu;
        // 0x228700: 0x1ed2823  subu        $a1, $t7, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2286fc) {
            ctx->pc = 0x2287ACu;
            goto label_2287ac;
        }
    }
    ctx->pc = 0x228704u;
label_228704:
    // 0x228704: 0x3c08459c  lui         $t0, 0x459C
    ctx->pc = 0x228704u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17820 << 16));
label_228708:
    // 0x228708: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x228708u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22870c:
    // 0x22870c: 0x35084000  ori         $t0, $t0, 0x4000
    ctx->pc = 0x22870cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
label_228710:
    // 0x228710: 0x44881800  mtc1        $t0, $f3
    ctx->pc = 0x228710u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_228714:
    // 0x228714: 0x0  nop
    ctx->pc = 0x228714u;
    // NOP
label_228718:
    // 0x228718: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x228718u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22871c:
    // 0x22871c: 0x3c0568db  lui         $a1, 0x68DB
    ctx->pc = 0x22871cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26843 << 16));
label_228720:
    // 0x228720: 0x30e4023  subu        $t0, $t8, $t6
    ctx->pc = 0x228720u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 14)));
label_228724:
    // 0x228724: 0x34a98bad  ori         $t1, $a1, 0x8BAD
    ctx->pc = 0x228724u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35757);
label_228728:
    // 0x228728: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x228728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22872c:
    // 0x22872c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x22872cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_228730:
    // 0x228730: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x228730u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_228734:
    // 0x228734: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x228734u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_228738:
    // 0x228738: 0x0  nop
    ctx->pc = 0x228738u;
    // NOP
label_22873c:
    // 0x22873c: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x22873cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_228740:
    // 0x228740: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x228740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_228744:
    // 0x228744: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x228744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228748:
    // 0x228748: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x228748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_22874c:
    // 0x22874c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22874cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_228750:
    // 0x228750: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x228750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_228754:
    // 0x228754: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x228754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228758:
    // 0x228758: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228758u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_22875c:
    // 0x22875c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x22875cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_228760:
    // 0x228760: 0x0  nop
    ctx->pc = 0x228760u;
    // NOP
label_228764:
    // 0x228764: 0x1250018  mult        $zero, $t1, $a1
    ctx->pc = 0x228764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_228768:
    // 0x228768: 0x547c2  srl         $t0, $a1, 31
    ctx->pc = 0x228768u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_22876c:
    // 0x22876c: 0x0  nop
    ctx->pc = 0x22876cu;
    // NOP
label_228770:
    // 0x228770: 0x2810  mfhi        $a1
    ctx->pc = 0x228770u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_228774:
    // 0x228774: 0x52ac3  sra         $a1, $a1, 11
    ctx->pc = 0x228774u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
label_228778:
    // 0x228778: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x228778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_22877c:
    // 0x22877c: 0xa0850026  sb          $a1, 0x26($a0)
    ctx->pc = 0x22877cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 5));
label_228780:
    // 0x228780: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x228780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228784:
    // 0x228784: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228784u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_228788:
    // 0x228788: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x228788u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_22878c:
    // 0x22878c: 0x0  nop
    ctx->pc = 0x22878cu;
    // NOP
label_228790:
    // 0x228790: 0x1250018  mult        $zero, $t1, $a1
    ctx->pc = 0x228790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_228794:
    // 0x228794: 0x547c2  srl         $t0, $a1, 31
    ctx->pc = 0x228794u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_228798:
    // 0x228798: 0x0  nop
    ctx->pc = 0x228798u;
    // NOP
label_22879c:
    // 0x22879c: 0x2810  mfhi        $a1
    ctx->pc = 0x22879cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2287a0:
    // 0x2287a0: 0x52ac3  sra         $a1, $a1, 11
    ctx->pc = 0x2287a0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
label_2287a4:
    // 0x2287a4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x2287a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_2287a8:
    // 0x2287a8: 0xa0850027  sb          $a1, 0x27($a0)
    ctx->pc = 0x2287a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 5));
label_2287ac:
    // 0x2287ac: 0x0  nop
    ctx->pc = 0x2287acu;
    // NOP
label_2287b0:
    // 0x2287b0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2287b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2287b4:
    // 0x2287b4: 0x248a0005  addiu       $t2, $a0, 0x5
    ctx->pc = 0x2287b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
label_2287b8:
    // 0x2287b8: 0x90840005  lbu         $a0, 0x5($a0)
    ctx->pc = 0x2287b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_2287bc:
    // 0x2287bc: 0x44103  sra         $t0, $a0, 4
    ctx->pc = 0x2287bcu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 4), 4));
label_2287c0:
    // 0x2287c0: 0x150d0009  bne         $t0, $t5, . + 4 + (0x9 << 2)
label_2287c4:
    if (ctx->pc == 0x2287C4u) {
        ctx->pc = 0x2287C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287C0u;
        // 0x2287c4: 0x3089000f  andi        $t1, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2287C8u;
        goto label_2287c8;
    }
    ctx->pc = 0x2287C0u;
    {
        const bool branch_taken_0x2287c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 13));
        ctx->pc = 0x2287C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287C0u;
        // 0x2287c4: 0x3089000f  andi        $t1, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2287c0) {
            ctx->pc = 0x2287E8u;
            goto label_2287e8;
        }
    }
    ctx->pc = 0x2287C8u;
label_2287c8:
    // 0x2287c8: 0x152e0007  bne         $t1, $t6, . + 4 + (0x7 << 2)
label_2287cc:
    if (ctx->pc == 0x2287CCu) {
        ctx->pc = 0x2287CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287C8u;
        // 0x2287cc: 0x1ed2823  subu        $a1, $t7, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2287D0u;
        goto label_2287d0;
    }
    ctx->pc = 0x2287C8u;
    {
        const bool branch_taken_0x2287c8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x2287CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287C8u;
        // 0x2287cc: 0x1ed2823  subu        $a1, $t7, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2287c8) {
            ctx->pc = 0x2287E8u;
            goto label_2287e8;
        }
    }
    ctx->pc = 0x2287D0u;
label_2287d0:
    // 0x2287d0: 0x30e2023  subu        $a0, $t8, $t6
    ctx->pc = 0x2287d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 14)));
label_2287d4:
    // 0x2287d4: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x2287d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_2287d8:
    // 0x2287d8: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x2287d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_2287dc:
    // 0x2287dc: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x2287dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_2287e0:
    // 0x2287e0: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x2287e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
label_2287e4:
    // 0x2287e4: 0xa1440000  sb          $a0, 0x0($t2)
    ctx->pc = 0x2287e4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 4));
label_2287e8:
    // 0x2287e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2287e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2287ec:
    // 0x2287ec: 0x286400ff  slti        $a0, $v1, 0xFF
    ctx->pc = 0x2287ecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
label_2287f0:
    // 0x2287f0: 0x1480fed7  bnez        $a0, . + 4 + (-0x129 << 2)
label_2287f4:
    if (ctx->pc == 0x2287F4u) {
        ctx->pc = 0x2287F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287F0u;
        // 0x2287f4: 0x24c60048  addiu       $a2, $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2287F8u;
        goto label_2287f8;
    }
    ctx->pc = 0x2287F0u;
    {
        const bool branch_taken_0x2287f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2287F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287F0u;
        // 0x2287f4: 0x24c60048  addiu       $a2, $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2287f0) {
            ctx->pc = 0x228350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228350;
        }
    }
    ctx->pc = 0x2287F8u;
label_2287f8:
    // 0x2287f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2287f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2287fc:
    // 0x2287fc: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x2287fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_228800:
    // 0x228800: 0x1460fed1  bnez        $v1, . + 4 + (-0x12F << 2)
label_228804:
    if (ctx->pc == 0x228804u) {
        ctx->pc = 0x228804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228800u;
        // 0x228804: 0x24e747b8  addiu       $a3, $a3, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228808u;
        goto label_228808;
    }
    ctx->pc = 0x228800u;
    {
        const bool branch_taken_0x228800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x228804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228800u;
        // 0x228804: 0x24e747b8  addiu       $a3, $a3, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228800) {
            ctx->pc = 0x228348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228348;
        }
    }
    ctx->pc = 0x228808u;
label_228808:
    // 0x228808: 0x8f8a84e0  lw          $t2, -0x7B20($gp)
    ctx->pc = 0x228808u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_22880c:
    // 0x22880c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22880cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228810:
    // 0x228810: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x228810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
label_228814:
    // 0x228814: 0x3c0368db  lui         $v1, 0x68DB
    ctx->pc = 0x228814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26843 << 16));
label_228818:
    // 0x228818: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x228818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_22881c:
    // 0x22881c: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x22881cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_228820:
    // 0x228820: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x228820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_228824:
    // 0x228824: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x228824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_228828:
    // 0x228828: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x228828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22882c:
    // 0x22882c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x22882cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_228830:
    // 0x228830: 0x1ed1023  subu        $v0, $t7, $t5
    ctx->pc = 0x228830u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
label_228834:
    // 0x228834: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x228834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_228838:
    // 0x228838: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x228838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22883c:
    // 0x22883c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x22883cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_228840:
    // 0x228840: 0x34638bad  ori         $v1, $v1, 0x8BAD
    ctx->pc = 0x228840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35757);
label_228844:
    // 0x228844: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x228844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_228848:
    // 0x228848: 0x30e1023  subu        $v0, $t8, $t6
    ctx->pc = 0x228848u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 14)));
label_22884c:
    // 0x22884c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22884cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_228850:
    // 0x228850: 0x0  nop
    ctx->pc = 0x228850u;
    // NOP
label_228854:
    // 0x228854: 0x46011882  mul.s       $f2, $f3, $f1
    ctx->pc = 0x228854u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_228858:
    // 0x228858: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x228858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22885c:
    // 0x22885c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22885cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_228860:
    // 0x228860: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x228860u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_228864:
    // 0x228864: 0x0  nop
    ctx->pc = 0x228864u;
    // NOP
label_228868:
    // 0x228868: 0x0  nop
    ctx->pc = 0x228868u;
    // NOP
label_22886c:
    // 0x22886c: 0x914b002e  lbu         $t3, 0x2E($t2)
    ctx->pc = 0x22886cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 46)));
label_228870:
    // 0x228870: 0x15600081  bnez        $t3, . + 4 + (0x81 << 2)
label_228874:
    if (ctx->pc == 0x228874u) {
        ctx->pc = 0x228878u;
        goto label_228878;
    }
    ctx->pc = 0x228870u;
    {
        const bool branch_taken_0x228870 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x228870) {
            ctx->pc = 0x228A78u;
            goto label_228a78;
        }
    }
    ctx->pc = 0x228878u;
label_228878:
    // 0x228878: 0x914b002f  lbu         $t3, 0x2F($t2)
    ctx->pc = 0x228878u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 47)));
label_22887c:
    // 0x22887c: 0x296100ff  slti        $at, $t3, 0xFF
    ctx->pc = 0x22887cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)255) ? 1 : 0);
label_228880:
    // 0x228880: 0x1020007d  beqz        $at, . + 4 + (0x7D << 2)
label_228884:
    if (ctx->pc == 0x228884u) {
        ctx->pc = 0x228884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228880u;
        // 0x228884: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228888u;
        goto label_228888;
    }
    ctx->pc = 0x228880u;
    {
        const bool branch_taken_0x228880 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x228884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228880u;
        // 0x228884: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228880) {
            ctx->pc = 0x228A78u;
            goto label_228a78;
        }
    }
    ctx->pc = 0x228888u;
label_228888:
    // 0x228888: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x228888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22888c:
    // 0x22888c: 0x0  nop
    ctx->pc = 0x22888cu;
    // NOP
label_228890:
    // 0x228890: 0x1505821  addu        $t3, $t2, $s0
    ctx->pc = 0x228890u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
label_228894:
    // 0x228894: 0x8d6b0000  lw          $t3, 0x0($t3)
    ctx->pc = 0x228894u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_228898:
    // 0x228898: 0x11600073  beqz        $t3, . + 4 + (0x73 << 2)
label_22889c:
    if (ctx->pc == 0x22889Cu) {
        ctx->pc = 0x22889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228898u;
        // 0x22889c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2288A0u;
        goto label_2288a0;
    }
    ctx->pc = 0x228898u;
    {
        const bool branch_taken_0x228898 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x22889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228898u;
        // 0x22889c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228898) {
            ctx->pc = 0x228A68u;
            goto label_228a68;
        }
    }
    ctx->pc = 0x2288A0u;
label_2288a0:
    // 0x2288a0: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x2288a0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2288a4:
    // 0x2288a4: 0x0  nop
    ctx->pc = 0x2288a4u;
    // NOP
label_2288a8:
    // 0x2288a8: 0x15800003  bnez        $t4, . + 4 + (0x3 << 2)
label_2288ac:
    if (ctx->pc == 0x2288ACu) {
        ctx->pc = 0x2288B0u;
        goto label_2288b0;
    }
    ctx->pc = 0x2288A8u;
    {
        const bool branch_taken_0x2288a8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x2288a8) {
            ctx->pc = 0x2288B8u;
            goto label_2288b8;
        }
    }
    ctx->pc = 0x2288B0u;
label_2288b0:
    // 0x2288b0: 0x12690005  beq         $s3, $t1, . + 4 + (0x5 << 2)
label_2288b4:
    if (ctx->pc == 0x2288B4u) {
        ctx->pc = 0x2288B8u;
        goto label_2288b8;
    }
    ctx->pc = 0x2288B0u;
    {
        const bool branch_taken_0x2288b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 9));
        if (branch_taken_0x2288b0) {
            ctx->pc = 0x2288C8u;
            goto label_2288c8;
        }
    }
    ctx->pc = 0x2288B8u;
label_2288b8:
    // 0x2288b8: 0x15880042  bne         $t4, $t0, . + 4 + (0x42 << 2)
label_2288bc:
    if (ctx->pc == 0x2288BCu) {
        ctx->pc = 0x2288C0u;
        goto label_2288c0;
    }
    ctx->pc = 0x2288B8u;
    {
        const bool branch_taken_0x2288b8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 8));
        if (branch_taken_0x2288b8) {
            ctx->pc = 0x2289C4u;
            goto label_2289c4;
        }
    }
    ctx->pc = 0x2288C0u;
label_2288c0:
    // 0x2288c0: 0x16670040  bne         $s3, $a3, . + 4 + (0x40 << 2)
label_2288c4:
    if (ctx->pc == 0x2288C4u) {
        ctx->pc = 0x2288C8u;
        goto label_2288c8;
    }
    ctx->pc = 0x2288C0u;
    {
        const bool branch_taken_0x2288c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 7));
        if (branch_taken_0x2288c0) {
            ctx->pc = 0x2289C4u;
            goto label_2289c4;
        }
    }
    ctx->pc = 0x2288C8u;
label_2288c8:
    // 0x2288c8: 0xd98821  addu        $s1, $a2, $t9
    ctx->pc = 0x2288c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 25)));
label_2288cc:
    // 0x2288cc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2288ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2288d0:
    // 0x2288d0: 0xc5630150  lwc1        $f3, 0x150($t3)
    ctx->pc = 0x2288d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2288d4:
    // 0x2288d4: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x2288d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2288d8:
    // 0x2288d8: 0x0  nop
    ctx->pc = 0x2288d8u;
    // NOP
label_2288dc:
    // 0x2288dc: 0x45000039  bc1f        . + 4 + (0x39 << 2)
label_2288e0:
    if (ctx->pc == 0x2288E0u) {
        ctx->pc = 0x2288E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2288DCu;
        // 0x2288e0: 0xb99021  addu        $s2, $a1, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2288E4u;
        goto label_2288e4;
    }
    ctx->pc = 0x2288DCu;
    {
        const bool branch_taken_0x2288dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2288E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2288DCu;
        // 0x2288e0: 0xb99021  addu        $s2, $a1, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2288dc) {
            ctx->pc = 0x2289C4u;
            goto label_2289c4;
        }
    }
    ctx->pc = 0x2288E4u;
label_2288e4:
    // 0x2288e4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2288e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2288e8:
    // 0x2288e8: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x2288e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2288ec:
    // 0x2288ec: 0x0  nop
    ctx->pc = 0x2288ecu;
    // NOP
label_2288f0:
    // 0x2288f0: 0x45010034  bc1t        . + 4 + (0x34 << 2)
label_2288f4:
    if (ctx->pc == 0x2288F4u) {
        ctx->pc = 0x2288F8u;
        goto label_2288f8;
    }
    ctx->pc = 0x2288F0u;
    {
        const bool branch_taken_0x2288f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2288f0) {
            ctx->pc = 0x2289C4u;
            goto label_2289c4;
        }
    }
    ctx->pc = 0x2288F8u;
label_2288f8:
    // 0x2288f8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2288f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2288fc:
    // 0x2288fc: 0xc5630158  lwc1        $f3, 0x158($t3)
    ctx->pc = 0x2288fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_228900:
    // 0x228900: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x228900u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228904:
    // 0x228904: 0x0  nop
    ctx->pc = 0x228904u;
    // NOP
label_228908:
    // 0x228908: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_22890c:
    if (ctx->pc == 0x22890Cu) {
        ctx->pc = 0x228910u;
        goto label_228910;
    }
    ctx->pc = 0x228908u;
    {
        const bool branch_taken_0x228908 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228908) {
            ctx->pc = 0x2289C4u;
            goto label_2289c4;
        }
    }
    ctx->pc = 0x228910u;
label_228910:
    // 0x228910: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x228910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228914:
    // 0x228914: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x228914u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_228918:
    // 0x228918: 0x0  nop
    ctx->pc = 0x228918u;
    // NOP
label_22891c:
    // 0x22891c: 0x45010029  bc1t        . + 4 + (0x29 << 2)
label_228920:
    if (ctx->pc == 0x228920u) {
        ctx->pc = 0x228924u;
        goto label_228924;
    }
    ctx->pc = 0x22891Cu;
    {
        const bool branch_taken_0x22891c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22891c) {
            ctx->pc = 0x2289C4u;
            goto label_2289c4;
        }
    }
    ctx->pc = 0x228924u;
label_228924:
    // 0x228924: 0xc90c0  sll         $s2, $t4, 3
    ctx->pc = 0x228924u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_228928:
    // 0x228928: 0x928821  addu        $s1, $a0, $s2
    ctx->pc = 0x228928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_22892c:
    // 0x22892c: 0xd29021  addu        $s2, $a2, $s2
    ctx->pc = 0x22892cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_228930:
    // 0x228930: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x228930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_228934:
    // 0x228934: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x228934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_228938:
    // 0x228938: 0xc5600050  lwc1        $f0, 0x50($t3)
    ctx->pc = 0x228938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22893c:
    // 0x22893c: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x22893cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_228940:
    // 0x228940: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x228940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_228944:
    // 0x228944: 0xe5600050  swc1        $f0, 0x50($t3)
    ctx->pc = 0x228944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 80), bits); }
label_228948:
    // 0x228948: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x228948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_22894c:
    // 0x22894c: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x22894cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_228950:
    // 0x228950: 0xc5600058  lwc1        $f0, 0x58($t3)
    ctx->pc = 0x228950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228954:
    // 0x228954: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x228954u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_228958:
    // 0x228958: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x228958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_22895c:
    // 0x22895c: 0xe5600058  swc1        $f0, 0x58($t3)
    ctx->pc = 0x22895cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 88), bits); }
label_228960:
    // 0x228960: 0xc5600050  lwc1        $f0, 0x50($t3)
    ctx->pc = 0x228960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228964:
    // 0x228964: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228964u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_228968:
    // 0x228968: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x228968u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_22896c:
    // 0x22896c: 0x0  nop
    ctx->pc = 0x22896cu;
    // NOP
label_228970:
    // 0x228970: 0x710018  mult        $zero, $v1, $s1
    ctx->pc = 0x228970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_228974:
    // 0x228974: 0x0  nop
    ctx->pc = 0x228974u;
    // NOP
label_228978:
    // 0x228978: 0x0  nop
    ctx->pc = 0x228978u;
    // NOP
label_22897c:
    // 0x22897c: 0x9010  mfhi        $s2
    ctx->pc = 0x22897cu;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_228980:
    // 0x228980: 0x118fc2  srl         $s1, $s1, 31
    ctx->pc = 0x228980u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_228984:
    // 0x228984: 0x1292c3  sra         $s2, $s2, 11
    ctx->pc = 0x228984u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 11));
label_228988:
    // 0x228988: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x228988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_22898c:
    // 0x22898c: 0xa1710218  sb          $s1, 0x218($t3)
    ctx->pc = 0x22898cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 536), (uint8_t)GPR_U32(ctx, 17));
label_228990:
    // 0x228990: 0xc5600058  lwc1        $f0, 0x58($t3)
    ctx->pc = 0x228990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228994:
    // 0x228994: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228994u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_228998:
    // 0x228998: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x228998u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_22899c:
    // 0x22899c: 0x0  nop
    ctx->pc = 0x22899cu;
    // NOP
label_2289a0:
    // 0x2289a0: 0x710018  mult        $zero, $v1, $s1
    ctx->pc = 0x2289a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2289a4:
    // 0x2289a4: 0x0  nop
    ctx->pc = 0x2289a4u;
    // NOP
label_2289a8:
    // 0x2289a8: 0x0  nop
    ctx->pc = 0x2289a8u;
    // NOP
label_2289ac:
    // 0x2289ac: 0x9010  mfhi        $s2
    ctx->pc = 0x2289acu;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2289b0:
    // 0x2289b0: 0x118fc2  srl         $s1, $s1, 31
    ctx->pc = 0x2289b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_2289b4:
    // 0x2289b4: 0x1292c3  sra         $s2, $s2, 11
    ctx->pc = 0x2289b4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 11));
label_2289b8:
    // 0x2289b8: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x2289b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_2289bc:
    // 0x2289bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_2289c0:
    if (ctx->pc == 0x2289C0u) {
        ctx->pc = 0x2289C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2289BCu;
        // 0x2289c0: 0xa1710219  sb          $s1, 0x219($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 537), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2289C4u;
        goto label_2289c4;
    }
    ctx->pc = 0x2289BCu;
    {
        const bool branch_taken_0x2289bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2289C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2289BCu;
        // 0x2289c0: 0xa1710219  sb          $s1, 0x219($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 537), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2289bc) {
            ctx->pc = 0x2289D8u;
            goto label_2289d8;
        }
    }
    ctx->pc = 0x2289C4u;
label_2289c4:
    // 0x2289c4: 0x0  nop
    ctx->pc = 0x2289c4u;
    // NOP
label_2289c8:
    // 0x2289c8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2289c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_2289cc:
    // 0x2289cc: 0x29910002  slti        $s1, $t4, 0x2
    ctx->pc = 0x2289ccu;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)2) ? 1 : 0);
label_2289d0:
    // 0x2289d0: 0x1620ffb4  bnez        $s1, . + 4 + (-0x4C << 2)
label_2289d4:
    if (ctx->pc == 0x2289D4u) {
        ctx->pc = 0x2289D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2289D0u;
        // 0x2289d4: 0x27390008  addiu       $t9, $t9, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2289D8u;
        goto label_2289d8;
    }
    ctx->pc = 0x2289D0u;
    {
        const bool branch_taken_0x2289d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2289D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2289D0u;
        // 0x2289d4: 0x27390008  addiu       $t9, $t9, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2289d0) {
            ctx->pc = 0x2288A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2288a4;
        }
    }
    ctx->pc = 0x2289D8u;
label_2289d8:
    // 0x2289d8: 0x15820023  bne         $t4, $v0, . + 4 + (0x23 << 2)
label_2289dc:
    if (ctx->pc == 0x2289DCu) {
        ctx->pc = 0x2289E0u;
        goto label_2289e0;
    }
    ctx->pc = 0x2289D8u;
    {
        const bool branch_taken_0x2289d8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        if (branch_taken_0x2289d8) {
            ctx->pc = 0x228A68u;
            goto label_228a68;
        }
    }
    ctx->pc = 0x2289E0u;
label_2289e0:
    // 0x2289e0: 0x916c0218  lbu         $t4, 0x218($t3)
    ctx->pc = 0x2289e0u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 536)));
label_2289e4:
    // 0x2289e4: 0x158d0020  bne         $t4, $t5, . + 4 + (0x20 << 2)
label_2289e8:
    if (ctx->pc == 0x2289E8u) {
        ctx->pc = 0x2289ECu;
        goto label_2289ec;
    }
    ctx->pc = 0x2289E4u;
    {
        const bool branch_taken_0x2289e4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 13));
        if (branch_taken_0x2289e4) {
            ctx->pc = 0x228A68u;
            goto label_228a68;
        }
    }
    ctx->pc = 0x2289ECu;
label_2289ec:
    // 0x2289ec: 0x916c0219  lbu         $t4, 0x219($t3)
    ctx->pc = 0x2289ecu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 537)));
label_2289f0:
    // 0x2289f0: 0x158e001d  bne         $t4, $t6, . + 4 + (0x1D << 2)
label_2289f4:
    if (ctx->pc == 0x2289F4u) {
        ctx->pc = 0x2289F8u;
        goto label_2289f8;
    }
    ctx->pc = 0x2289F0u;
    {
        const bool branch_taken_0x2289f0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 14));
        if (branch_taken_0x2289f0) {
            ctx->pc = 0x228A68u;
            goto label_228a68;
        }
    }
    ctx->pc = 0x2289F8u;
label_2289f8:
    // 0x2289f8: 0xc5600050  lwc1        $f0, 0x50($t3)
    ctx->pc = 0x2289f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2289fc:
    // 0x2289fc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2289fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_228a00:
    // 0x228a00: 0xe5600050  swc1        $f0, 0x50($t3)
    ctx->pc = 0x228a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 80), bits); }
label_228a04:
    // 0x228a04: 0xc5600058  lwc1        $f0, 0x58($t3)
    ctx->pc = 0x228a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228a08:
    // 0x228a08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x228a08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_228a0c:
    // 0x228a0c: 0xe5600058  swc1        $f0, 0x58($t3)
    ctx->pc = 0x228a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 88), bits); }
label_228a10:
    // 0x228a10: 0xc5600050  lwc1        $f0, 0x50($t3)
    ctx->pc = 0x228a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228a14:
    // 0x228a14: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228a14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_228a18:
    // 0x228a18: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x228a18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
label_228a1c:
    // 0x228a1c: 0x0  nop
    ctx->pc = 0x228a1cu;
    // NOP
label_228a20:
    // 0x228a20: 0x6c0018  mult        $zero, $v1, $t4
    ctx->pc = 0x228a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_228a24:
    // 0x228a24: 0xc8fc2  srl         $s1, $t4, 31
    ctx->pc = 0x228a24u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_228a28:
    // 0x228a28: 0x0  nop
    ctx->pc = 0x228a28u;
    // NOP
label_228a2c:
    // 0x228a2c: 0x6010  mfhi        $t4
    ctx->pc = 0x228a2cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_228a30:
    // 0x228a30: 0xc62c3  sra         $t4, $t4, 11
    ctx->pc = 0x228a30u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 11));
label_228a34:
    // 0x228a34: 0x1916021  addu        $t4, $t4, $s1
    ctx->pc = 0x228a34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
label_228a38:
    // 0x228a38: 0xa16c0218  sb          $t4, 0x218($t3)
    ctx->pc = 0x228a38u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 536), (uint8_t)GPR_U32(ctx, 12));
label_228a3c:
    // 0x228a3c: 0xc5600058  lwc1        $f0, 0x58($t3)
    ctx->pc = 0x228a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_228a40:
    // 0x228a40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228a40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_228a44:
    // 0x228a44: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x228a44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
label_228a48:
    // 0x228a48: 0x0  nop
    ctx->pc = 0x228a48u;
    // NOP
label_228a4c:
    // 0x228a4c: 0x6c0018  mult        $zero, $v1, $t4
    ctx->pc = 0x228a4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_228a50:
    // 0x228a50: 0xc8fc2  srl         $s1, $t4, 31
    ctx->pc = 0x228a50u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_228a54:
    // 0x228a54: 0x0  nop
    ctx->pc = 0x228a54u;
    // NOP
label_228a58:
    // 0x228a58: 0x6010  mfhi        $t4
    ctx->pc = 0x228a58u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_228a5c:
    // 0x228a5c: 0xc62c3  sra         $t4, $t4, 11
    ctx->pc = 0x228a5cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 11));
label_228a60:
    // 0x228a60: 0x1916021  addu        $t4, $t4, $s1
    ctx->pc = 0x228a60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
label_228a64:
    // 0x228a64: 0xa16c0219  sb          $t4, 0x219($t3)
    ctx->pc = 0x228a64u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 537), (uint8_t)GPR_U32(ctx, 12));
label_228a68:
    // 0x228a68: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x228a68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_228a6c:
    // 0x228a6c: 0x2aab0009  slti        $t3, $s5, 0x9
    ctx->pc = 0x228a6cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)9) ? 1 : 0);
label_228a70:
    // 0x228a70: 0x1560ff86  bnez        $t3, . + 4 + (-0x7A << 2)
label_228a74:
    if (ctx->pc == 0x228A74u) {
        ctx->pc = 0x228A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A70u;
        // 0x228a74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228A78u;
        goto label_228a78;
    }
    ctx->pc = 0x228A70u;
    {
        const bool branch_taken_0x228a70 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x228A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A70u;
        // 0x228a74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a70) {
            ctx->pc = 0x22888Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22888c;
        }
    }
    ctx->pc = 0x228A78u;
label_228a78:
    // 0x228a78: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x228a78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_228a7c:
    // 0x228a7c: 0x2a8b004a  slti        $t3, $s4, 0x4A
    ctx->pc = 0x228a7cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)74) ? 1 : 0);
label_228a80:
    // 0x228a80: 0x1560ff78  bnez        $t3, . + 4 + (-0x88 << 2)
label_228a84:
    if (ctx->pc == 0x228A84u) {
        ctx->pc = 0x228A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A80u;
        // 0x228a84: 0x254a0030  addiu       $t2, $t2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228A88u;
        goto label_228a88;
    }
    ctx->pc = 0x228A80u;
    {
        const bool branch_taken_0x228a80 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x228A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A80u;
        // 0x228a84: 0x254a0030  addiu       $t2, $t2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a80) {
            ctx->pc = 0x228864u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228864;
        }
    }
    ctx->pc = 0x228A88u;
label_228a88:
    // 0x228a88: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x228a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_228a8c:
    // 0x228a8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x228a8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228a90:
    // 0x228a90: 0x244203a0  addiu       $v0, $v0, 0x3A0
    ctx->pc = 0x228a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 928));
label_228a94:
    // 0x228a94: 0x30e2023  subu        $a0, $t8, $t6
    ctx->pc = 0x228a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 14)));
label_228a98:
    // 0x228a98: 0x1ed2823  subu        $a1, $t7, $t5
    ctx->pc = 0x228a98u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
label_228a9c:
    // 0x228a9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x228a9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_228aa0:
    // 0x228aa0: 0x3c06459c  lui         $a2, 0x459C
    ctx->pc = 0x228aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17820 << 16));
label_228aa4:
    // 0x228aa4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x228aa4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_228aa8:
    // 0x228aa8: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x228aa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
label_228aac:
    // 0x228aac: 0x25c40001  addiu       $a0, $t6, 0x1
    ctx->pc = 0x228aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_228ab0:
    // 0x228ab0: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x228ab0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_228ab4:
    // 0x228ab4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x228ab4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_228ab8:
    // 0x228ab8: 0x25a50001  addiu       $a1, $t5, 0x1
    ctx->pc = 0x228ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_228abc:
    // 0x228abc: 0x448e2000  mtc1        $t6, $f4
    ctx->pc = 0x228abcu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_228ac0:
    // 0x228ac0: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x228ac0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_228ac4:
    // 0x228ac4: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x228ac4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_228ac8:
    // 0x228ac8: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x228ac8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_228acc:
    // 0x228acc: 0x240b0007  addiu       $t3, $zero, 0x7
    ctx->pc = 0x228accu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_228ad0:
    // 0x228ad0: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x228ad0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_228ad4:
    // 0x228ad4: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x228ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_228ad8:
    // 0x228ad8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x228ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_228adc:
    // 0x228adc: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x228adcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    ctx->pc = 0x228ae0u;
    return;
}
