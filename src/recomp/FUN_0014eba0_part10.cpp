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


void FUN_0014eba0_part10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1531f0u: goto label_1531f0;
        case 0x1531f4u: goto label_1531f4;
        case 0x1531f8u: goto label_1531f8;
        case 0x1531fcu: goto label_1531fc;
        case 0x153200u: goto label_153200;
        case 0x153204u: goto label_153204;
        case 0x153208u: goto label_153208;
        case 0x15320cu: goto label_15320c;
        case 0x153210u: goto label_153210;
        case 0x153214u: goto label_153214;
        case 0x153218u: goto label_153218;
        case 0x15321cu: goto label_15321c;
        case 0x153220u: goto label_153220;
        case 0x153224u: goto label_153224;
        case 0x153228u: goto label_153228;
        case 0x15322cu: goto label_15322c;
        case 0x153230u: goto label_153230;
        case 0x153234u: goto label_153234;
        case 0x153238u: goto label_153238;
        case 0x15323cu: goto label_15323c;
        case 0x153240u: goto label_153240;
        case 0x153244u: goto label_153244;
        case 0x153248u: goto label_153248;
        case 0x15324cu: goto label_15324c;
        case 0x153250u: goto label_153250;
        case 0x153254u: goto label_153254;
        case 0x153258u: goto label_153258;
        case 0x15325cu: goto label_15325c;
        case 0x153260u: goto label_153260;
        case 0x153264u: goto label_153264;
        case 0x153268u: goto label_153268;
        case 0x15326cu: goto label_15326c;
        case 0x153270u: goto label_153270;
        case 0x153274u: goto label_153274;
        case 0x153278u: goto label_153278;
        case 0x15327cu: goto label_15327c;
        case 0x153280u: goto label_153280;
        case 0x153284u: goto label_153284;
        case 0x153288u: goto label_153288;
        case 0x15328cu: goto label_15328c;
        case 0x153290u: goto label_153290;
        case 0x153294u: goto label_153294;
        case 0x153298u: goto label_153298;
        case 0x15329cu: goto label_15329c;
        case 0x1532a0u: goto label_1532a0;
        case 0x1532a4u: goto label_1532a4;
        case 0x1532a8u: goto label_1532a8;
        case 0x1532acu: goto label_1532ac;
        case 0x1532b0u: goto label_1532b0;
        case 0x1532b4u: goto label_1532b4;
        case 0x1532b8u: goto label_1532b8;
        case 0x1532bcu: goto label_1532bc;
        case 0x1532c0u: goto label_1532c0;
        case 0x1532c4u: goto label_1532c4;
        case 0x1532c8u: goto label_1532c8;
        case 0x1532ccu: goto label_1532cc;
        case 0x1532d0u: goto label_1532d0;
        case 0x1532d4u: goto label_1532d4;
        case 0x1532d8u: goto label_1532d8;
        case 0x1532dcu: goto label_1532dc;
        case 0x1532e0u: goto label_1532e0;
        case 0x1532e4u: goto label_1532e4;
        case 0x1532e8u: goto label_1532e8;
        case 0x1532ecu: goto label_1532ec;
        case 0x1532f0u: goto label_1532f0;
        case 0x1532f4u: goto label_1532f4;
        case 0x1532f8u: goto label_1532f8;
        case 0x1532fcu: goto label_1532fc;
        case 0x153300u: goto label_153300;
        case 0x153304u: goto label_153304;
        case 0x153308u: goto label_153308;
        case 0x15330cu: goto label_15330c;
        case 0x153310u: goto label_153310;
        case 0x153314u: goto label_153314;
        case 0x153318u: goto label_153318;
        case 0x15331cu: goto label_15331c;
        case 0x153320u: goto label_153320;
        case 0x153324u: goto label_153324;
        case 0x153328u: goto label_153328;
        case 0x15332cu: goto label_15332c;
        case 0x153330u: goto label_153330;
        case 0x153334u: goto label_153334;
        case 0x153338u: goto label_153338;
        case 0x15333cu: goto label_15333c;
        case 0x153340u: goto label_153340;
        case 0x153344u: goto label_153344;
        case 0x153348u: goto label_153348;
        case 0x15334cu: goto label_15334c;
        case 0x153350u: goto label_153350;
        case 0x153354u: goto label_153354;
        case 0x153358u: goto label_153358;
        case 0x15335cu: goto label_15335c;
        case 0x153360u: goto label_153360;
        case 0x153364u: goto label_153364;
        case 0x153368u: goto label_153368;
        case 0x15336cu: goto label_15336c;
        case 0x153370u: goto label_153370;
        case 0x153374u: goto label_153374;
        case 0x153378u: goto label_153378;
        case 0x15337cu: goto label_15337c;
        case 0x153380u: goto label_153380;
        case 0x153384u: goto label_153384;
        case 0x153388u: goto label_153388;
        case 0x15338cu: goto label_15338c;
        case 0x153390u: goto label_153390;
        case 0x153394u: goto label_153394;
        case 0x153398u: goto label_153398;
        case 0x15339cu: goto label_15339c;
        case 0x1533a0u: goto label_1533a0;
        case 0x1533a4u: goto label_1533a4;
        case 0x1533a8u: goto label_1533a8;
        case 0x1533acu: goto label_1533ac;
        case 0x1533b0u: goto label_1533b0;
        case 0x1533b4u: goto label_1533b4;
        case 0x1533b8u: goto label_1533b8;
        case 0x1533bcu: goto label_1533bc;
        case 0x1533c0u: goto label_1533c0;
        case 0x1533c4u: goto label_1533c4;
        case 0x1533c8u: goto label_1533c8;
        case 0x1533ccu: goto label_1533cc;
        case 0x1533d0u: goto label_1533d0;
        case 0x1533d4u: goto label_1533d4;
        case 0x1533d8u: goto label_1533d8;
        case 0x1533dcu: goto label_1533dc;
        case 0x1533e0u: goto label_1533e0;
        case 0x1533e4u: goto label_1533e4;
        case 0x1533e8u: goto label_1533e8;
        case 0x1533ecu: goto label_1533ec;
        case 0x1533f0u: goto label_1533f0;
        case 0x1533f4u: goto label_1533f4;
        case 0x1533f8u: goto label_1533f8;
        case 0x1533fcu: goto label_1533fc;
        case 0x153400u: goto label_153400;
        case 0x153404u: goto label_153404;
        case 0x153408u: goto label_153408;
        case 0x15340cu: goto label_15340c;
        case 0x153410u: goto label_153410;
        case 0x153414u: goto label_153414;
        case 0x153418u: goto label_153418;
        case 0x15341cu: goto label_15341c;
        case 0x153420u: goto label_153420;
        case 0x153424u: goto label_153424;
        case 0x153428u: goto label_153428;
        case 0x15342cu: goto label_15342c;
        case 0x153430u: goto label_153430;
        case 0x153434u: goto label_153434;
        case 0x153438u: goto label_153438;
        case 0x15343cu: goto label_15343c;
        case 0x153440u: goto label_153440;
        case 0x153444u: goto label_153444;
        case 0x153448u: goto label_153448;
        case 0x15344cu: goto label_15344c;
        case 0x153450u: goto label_153450;
        case 0x153454u: goto label_153454;
        case 0x153458u: goto label_153458;
        case 0x15345cu: goto label_15345c;
        case 0x153460u: goto label_153460;
        case 0x153464u: goto label_153464;
        case 0x153468u: goto label_153468;
        case 0x15346cu: goto label_15346c;
        case 0x153470u: goto label_153470;
        case 0x153474u: goto label_153474;
        case 0x153478u: goto label_153478;
        case 0x15347cu: goto label_15347c;
        case 0x153480u: goto label_153480;
        case 0x153484u: goto label_153484;
        case 0x153488u: goto label_153488;
        case 0x15348cu: goto label_15348c;
        case 0x153490u: goto label_153490;
        case 0x153494u: goto label_153494;
        case 0x153498u: goto label_153498;
        case 0x15349cu: goto label_15349c;
        case 0x1534a0u: goto label_1534a0;
        case 0x1534a4u: goto label_1534a4;
        case 0x1534a8u: goto label_1534a8;
        case 0x1534acu: goto label_1534ac;
        case 0x1534b0u: goto label_1534b0;
        case 0x1534b4u: goto label_1534b4;
        case 0x1534b8u: goto label_1534b8;
        case 0x1534bcu: goto label_1534bc;
        case 0x1534c0u: goto label_1534c0;
        case 0x1534c4u: goto label_1534c4;
        case 0x1534c8u: goto label_1534c8;
        case 0x1534ccu: goto label_1534cc;
        case 0x1534d0u: goto label_1534d0;
        case 0x1534d4u: goto label_1534d4;
        case 0x1534d8u: goto label_1534d8;
        case 0x1534dcu: goto label_1534dc;
        case 0x1534e0u: goto label_1534e0;
        case 0x1534e4u: goto label_1534e4;
        case 0x1534e8u: goto label_1534e8;
        case 0x1534ecu: goto label_1534ec;
        case 0x1534f0u: goto label_1534f0;
        case 0x1534f4u: goto label_1534f4;
        case 0x1534f8u: goto label_1534f8;
        case 0x1534fcu: goto label_1534fc;
        case 0x153500u: goto label_153500;
        case 0x153504u: goto label_153504;
        case 0x153508u: goto label_153508;
        case 0x15350cu: goto label_15350c;
        case 0x153510u: goto label_153510;
        case 0x153514u: goto label_153514;
        case 0x153518u: goto label_153518;
        case 0x15351cu: goto label_15351c;
        case 0x153520u: goto label_153520;
        case 0x153524u: goto label_153524;
        case 0x153528u: goto label_153528;
        case 0x15352cu: goto label_15352c;
        case 0x153530u: goto label_153530;
        case 0x153534u: goto label_153534;
        case 0x153538u: goto label_153538;
        case 0x15353cu: goto label_15353c;
        case 0x153540u: goto label_153540;
        case 0x153544u: goto label_153544;
        case 0x153548u: goto label_153548;
        case 0x15354cu: goto label_15354c;
        case 0x153550u: goto label_153550;
        case 0x153554u: goto label_153554;
        case 0x153558u: goto label_153558;
        case 0x15355cu: goto label_15355c;
        case 0x153560u: goto label_153560;
        case 0x153564u: goto label_153564;
        case 0x153568u: goto label_153568;
        case 0x15356cu: goto label_15356c;
        case 0x153570u: goto label_153570;
        case 0x153574u: goto label_153574;
        case 0x153578u: goto label_153578;
        case 0x15357cu: goto label_15357c;
        case 0x153580u: goto label_153580;
        case 0x153584u: goto label_153584;
        case 0x153588u: goto label_153588;
        case 0x15358cu: goto label_15358c;
        case 0x153590u: goto label_153590;
        case 0x153594u: goto label_153594;
        case 0x153598u: goto label_153598;
        case 0x15359cu: goto label_15359c;
        case 0x1535a0u: goto label_1535a0;
        case 0x1535a4u: goto label_1535a4;
        case 0x1535a8u: goto label_1535a8;
        case 0x1535acu: goto label_1535ac;
        case 0x1535b0u: goto label_1535b0;
        case 0x1535b4u: goto label_1535b4;
        case 0x1535b8u: goto label_1535b8;
        case 0x1535bcu: goto label_1535bc;
        case 0x1535c0u: goto label_1535c0;
        case 0x1535c4u: goto label_1535c4;
        case 0x1535c8u: goto label_1535c8;
        case 0x1535ccu: goto label_1535cc;
        case 0x1535d0u: goto label_1535d0;
        case 0x1535d4u: goto label_1535d4;
        case 0x1535d8u: goto label_1535d8;
        case 0x1535dcu: goto label_1535dc;
        case 0x1535e0u: goto label_1535e0;
        case 0x1535e4u: goto label_1535e4;
        case 0x1535e8u: goto label_1535e8;
        case 0x1535ecu: goto label_1535ec;
        case 0x1535f0u: goto label_1535f0;
        case 0x1535f4u: goto label_1535f4;
        case 0x1535f8u: goto label_1535f8;
        case 0x1535fcu: goto label_1535fc;
        case 0x153600u: goto label_153600;
        case 0x153604u: goto label_153604;
        case 0x153608u: goto label_153608;
        case 0x15360cu: goto label_15360c;
        case 0x153610u: goto label_153610;
        case 0x153614u: goto label_153614;
        case 0x153618u: goto label_153618;
        case 0x15361cu: goto label_15361c;
        case 0x153620u: goto label_153620;
        case 0x153624u: goto label_153624;
        case 0x153628u: goto label_153628;
        case 0x15362cu: goto label_15362c;
        case 0x153630u: goto label_153630;
        case 0x153634u: goto label_153634;
        case 0x153638u: goto label_153638;
        case 0x15363cu: goto label_15363c;
        case 0x153640u: goto label_153640;
        case 0x153644u: goto label_153644;
        case 0x153648u: goto label_153648;
        case 0x15364cu: goto label_15364c;
        case 0x153650u: goto label_153650;
        case 0x153654u: goto label_153654;
        case 0x153658u: goto label_153658;
        case 0x15365cu: goto label_15365c;
        case 0x153660u: goto label_153660;
        case 0x153664u: goto label_153664;
        case 0x153668u: goto label_153668;
        case 0x15366cu: goto label_15366c;
        case 0x153670u: goto label_153670;
        case 0x153674u: goto label_153674;
        case 0x153678u: goto label_153678;
        case 0x15367cu: goto label_15367c;
        case 0x153680u: goto label_153680;
        case 0x153684u: goto label_153684;
        case 0x153688u: goto label_153688;
        case 0x15368cu: goto label_15368c;
        case 0x153690u: goto label_153690;
        case 0x153694u: goto label_153694;
        case 0x153698u: goto label_153698;
        case 0x15369cu: goto label_15369c;
        case 0x1536a0u: goto label_1536a0;
        case 0x1536a4u: goto label_1536a4;
        case 0x1536a8u: goto label_1536a8;
        case 0x1536acu: goto label_1536ac;
        case 0x1536b0u: goto label_1536b0;
        case 0x1536b4u: goto label_1536b4;
        case 0x1536b8u: goto label_1536b8;
        case 0x1536bcu: goto label_1536bc;
        case 0x1536c0u: goto label_1536c0;
        case 0x1536c4u: goto label_1536c4;
        case 0x1536c8u: goto label_1536c8;
        case 0x1536ccu: goto label_1536cc;
        case 0x1536d0u: goto label_1536d0;
        case 0x1536d4u: goto label_1536d4;
        case 0x1536d8u: goto label_1536d8;
        case 0x1536dcu: goto label_1536dc;
        case 0x1536e0u: goto label_1536e0;
        case 0x1536e4u: goto label_1536e4;
        case 0x1536e8u: goto label_1536e8;
        case 0x1536ecu: goto label_1536ec;
        case 0x1536f0u: goto label_1536f0;
        case 0x1536f4u: goto label_1536f4;
        case 0x1536f8u: goto label_1536f8;
        case 0x1536fcu: goto label_1536fc;
        case 0x153700u: goto label_153700;
        case 0x153704u: goto label_153704;
        case 0x153708u: goto label_153708;
        case 0x15370cu: goto label_15370c;
        case 0x153710u: goto label_153710;
        case 0x153714u: goto label_153714;
        case 0x153718u: goto label_153718;
        case 0x15371cu: goto label_15371c;
        case 0x153720u: goto label_153720;
        case 0x153724u: goto label_153724;
        case 0x153728u: goto label_153728;
        case 0x15372cu: goto label_15372c;
        case 0x153730u: goto label_153730;
        case 0x153734u: goto label_153734;
        case 0x153738u: goto label_153738;
        case 0x15373cu: goto label_15373c;
        case 0x153740u: goto label_153740;
        case 0x153744u: goto label_153744;
        case 0x153748u: goto label_153748;
        case 0x15374cu: goto label_15374c;
        case 0x153750u: goto label_153750;
        case 0x153754u: goto label_153754;
        case 0x153758u: goto label_153758;
        case 0x15375cu: goto label_15375c;
        case 0x153760u: goto label_153760;
        case 0x153764u: goto label_153764;
        case 0x153768u: goto label_153768;
        case 0x15376cu: goto label_15376c;
        case 0x153770u: goto label_153770;
        case 0x153774u: goto label_153774;
        case 0x153778u: goto label_153778;
        case 0x15377cu: goto label_15377c;
        case 0x153780u: goto label_153780;
        case 0x153784u: goto label_153784;
        case 0x153788u: goto label_153788;
        case 0x15378cu: goto label_15378c;
        case 0x153790u: goto label_153790;
        case 0x153794u: goto label_153794;
        case 0x153798u: goto label_153798;
        case 0x15379cu: goto label_15379c;
        case 0x1537a0u: goto label_1537a0;
        case 0x1537a4u: goto label_1537a4;
        case 0x1537a8u: goto label_1537a8;
        case 0x1537acu: goto label_1537ac;
        case 0x1537b0u: goto label_1537b0;
        case 0x1537b4u: goto label_1537b4;
        case 0x1537b8u: goto label_1537b8;
        case 0x1537bcu: goto label_1537bc;
        case 0x1537c0u: goto label_1537c0;
        case 0x1537c4u: goto label_1537c4;
        case 0x1537c8u: goto label_1537c8;
        case 0x1537ccu: goto label_1537cc;
        case 0x1537d0u: goto label_1537d0;
        case 0x1537d4u: goto label_1537d4;
        case 0x1537d8u: goto label_1537d8;
        case 0x1537dcu: goto label_1537dc;
        case 0x1537e0u: goto label_1537e0;
        case 0x1537e4u: goto label_1537e4;
        case 0x1537e8u: goto label_1537e8;
        case 0x1537ecu: goto label_1537ec;
        case 0x1537f0u: goto label_1537f0;
        case 0x1537f4u: goto label_1537f4;
        case 0x1537f8u: goto label_1537f8;
        case 0x1537fcu: goto label_1537fc;
        case 0x153800u: goto label_153800;
        case 0x153804u: goto label_153804;
        case 0x153808u: goto label_153808;
        case 0x15380cu: goto label_15380c;
        case 0x153810u: goto label_153810;
        case 0x153814u: goto label_153814;
        case 0x153818u: goto label_153818;
        case 0x15381cu: goto label_15381c;
        case 0x153820u: goto label_153820;
        case 0x153824u: goto label_153824;
        case 0x153828u: goto label_153828;
        case 0x15382cu: goto label_15382c;
        case 0x153830u: goto label_153830;
        case 0x153834u: goto label_153834;
        case 0x153838u: goto label_153838;
        case 0x15383cu: goto label_15383c;
        case 0x153840u: goto label_153840;
        case 0x153844u: goto label_153844;
        case 0x153848u: goto label_153848;
        case 0x15384cu: goto label_15384c;
        case 0x153850u: goto label_153850;
        case 0x153854u: goto label_153854;
        case 0x153858u: goto label_153858;
        case 0x15385cu: goto label_15385c;
        case 0x153860u: goto label_153860;
        case 0x153864u: goto label_153864;
        case 0x153868u: goto label_153868;
        case 0x15386cu: goto label_15386c;
        case 0x153870u: goto label_153870;
        case 0x153874u: goto label_153874;
        case 0x153878u: goto label_153878;
        case 0x15387cu: goto label_15387c;
        case 0x153880u: goto label_153880;
        case 0x153884u: goto label_153884;
        case 0x153888u: goto label_153888;
        case 0x15388cu: goto label_15388c;
        case 0x153890u: goto label_153890;
        case 0x153894u: goto label_153894;
        case 0x153898u: goto label_153898;
        case 0x15389cu: goto label_15389c;
        case 0x1538a0u: goto label_1538a0;
        case 0x1538a4u: goto label_1538a4;
        case 0x1538a8u: goto label_1538a8;
        case 0x1538acu: goto label_1538ac;
        case 0x1538b0u: goto label_1538b0;
        case 0x1538b4u: goto label_1538b4;
        case 0x1538b8u: goto label_1538b8;
        case 0x1538bcu: goto label_1538bc;
        case 0x1538c0u: goto label_1538c0;
        case 0x1538c4u: goto label_1538c4;
        case 0x1538c8u: goto label_1538c8;
        case 0x1538ccu: goto label_1538cc;
        case 0x1538d0u: goto label_1538d0;
        case 0x1538d4u: goto label_1538d4;
        case 0x1538d8u: goto label_1538d8;
        case 0x1538dcu: goto label_1538dc;
        case 0x1538e0u: goto label_1538e0;
        case 0x1538e4u: goto label_1538e4;
        case 0x1538e8u: goto label_1538e8;
        case 0x1538ecu: goto label_1538ec;
        case 0x1538f0u: goto label_1538f0;
        case 0x1538f4u: goto label_1538f4;
        case 0x1538f8u: goto label_1538f8;
        case 0x1538fcu: goto label_1538fc;
        case 0x153900u: goto label_153900;
        case 0x153904u: goto label_153904;
        case 0x153908u: goto label_153908;
        case 0x15390cu: goto label_15390c;
        case 0x153910u: goto label_153910;
        case 0x153914u: goto label_153914;
        case 0x153918u: goto label_153918;
        case 0x15391cu: goto label_15391c;
        case 0x153920u: goto label_153920;
        case 0x153924u: goto label_153924;
        case 0x153928u: goto label_153928;
        case 0x15392cu: goto label_15392c;
        case 0x153930u: goto label_153930;
        case 0x153934u: goto label_153934;
        case 0x153938u: goto label_153938;
        case 0x15393cu: goto label_15393c;
        case 0x153940u: goto label_153940;
        case 0x153944u: goto label_153944;
        case 0x153948u: goto label_153948;
        case 0x15394cu: goto label_15394c;
        case 0x153950u: goto label_153950;
        case 0x153954u: goto label_153954;
        case 0x153958u: goto label_153958;
        case 0x15395cu: goto label_15395c;
        case 0x153960u: goto label_153960;
        case 0x153964u: goto label_153964;
        case 0x153968u: goto label_153968;
        case 0x15396cu: goto label_15396c;
        case 0x153970u: goto label_153970;
        case 0x153974u: goto label_153974;
        case 0x153978u: goto label_153978;
        case 0x15397cu: goto label_15397c;
        case 0x153980u: goto label_153980;
        case 0x153984u: goto label_153984;
        case 0x153988u: goto label_153988;
        case 0x15398cu: goto label_15398c;
        case 0x153990u: goto label_153990;
        case 0x153994u: goto label_153994;
        case 0x153998u: goto label_153998;
        case 0x15399cu: goto label_15399c;
        case 0x1539a0u: goto label_1539a0;
        case 0x1539a4u: goto label_1539a4;
        case 0x1539a8u: goto label_1539a8;
        case 0x1539acu: goto label_1539ac;
        case 0x1539b0u: goto label_1539b0;
        case 0x1539b4u: goto label_1539b4;
        case 0x1539b8u: goto label_1539b8;
        case 0x1539bcu: goto label_1539bc;
        default: return;
    }

label_1531f0:
    if (ctx->pc == 0x1531F0u) {
        ctx->pc = 0x1531F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531ECu;
        // 0x1531f0: 0x54042  srl         $t0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1531F4u;
        goto label_1531f4;
    }
    ctx->pc = 0x1531ECu;
    {
        const bool branch_taken_0x1531ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1531F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531ECu;
        // 0x1531f0: 0x54042  srl         $t0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531ec) {
            ctx->pc = 0x1533D0u;
            goto label_1533d0;
        }
    }
    ctx->pc = 0x1531F4u;
label_1531f4:
    // 0x1531f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1531f8:
    if (ctx->pc == 0x1531F8u) {
        ctx->pc = 0x1531FCu;
        goto label_1531fc;
    }
    ctx->pc = 0x1531F4u;
    {
        const bool branch_taken_0x1531f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1531f4) {
            ctx->pc = 0x153204u;
            goto label_153204;
        }
    }
    ctx->pc = 0x1531FCu;
label_1531fc:
    // 0x1531fc: 0x10000142  b           . + 4 + (0x142 << 2)
label_153200:
    if (ctx->pc == 0x153200u) {
        ctx->pc = 0x153200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531FCu;
        // 0x153200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153204u;
        goto label_153204;
    }
    ctx->pc = 0x1531FCu;
    {
        const bool branch_taken_0x1531fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531FCu;
        // 0x153200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531fc) {
            ctx->pc = 0x153708u;
            goto label_153708;
        }
    }
    ctx->pc = 0x153204u;
label_153204:
    // 0x153204: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x153204u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_153208:
    // 0x153208: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x153208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_15320c:
    // 0x15320c: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_153210:
    if (ctx->pc == 0x153210u) {
        ctx->pc = 0x153210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15320Cu;
        // 0x153210: 0x30830007  andi        $v1, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x153214u;
        goto label_153214;
    }
    ctx->pc = 0x15320Cu;
    {
        const bool branch_taken_0x15320c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x153210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15320Cu;
        // 0x153210: 0x30830007  andi        $v1, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15320c) {
            ctx->pc = 0x153220u;
            goto label_153220;
        }
    }
    ctx->pc = 0x153214u;
label_153214:
    // 0x153214: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_153218:
    if (ctx->pc == 0x153218u) {
        ctx->pc = 0x153218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153214u;
        // 0x153218: 0x331c0  sll         $a2, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15321Cu;
        goto label_15321c;
    }
    ctx->pc = 0x153214u;
    {
        const bool branch_taken_0x153214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x153218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153214u;
        // 0x153218: 0x331c0  sll         $a2, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153214) {
            ctx->pc = 0x153224u;
            goto label_153224;
        }
    }
    ctx->pc = 0x15321Cu;
label_15321c:
    // 0x15321c: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x15321cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_153220:
    // 0x153220: 0x331c0  sll         $a2, $v1, 7
    ctx->pc = 0x153220u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_153224:
    // 0x153224: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_153228:
    if (ctx->pc == 0x153228u) {
        ctx->pc = 0x153228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153224u;
        // 0x153228: 0x428c3  sra         $a1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15322Cu;
        goto label_15322c;
    }
    ctx->pc = 0x153224u;
    {
        const bool branch_taken_0x153224 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x153228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153224u;
        // 0x153228: 0x428c3  sra         $a1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153224) {
            ctx->pc = 0x153234u;
            goto label_153234;
        }
    }
    ctx->pc = 0x15322Cu;
label_15322c:
    // 0x15322c: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x15322cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_153230:
    // 0x153230: 0x328c3  sra         $a1, $v1, 3
    ctx->pc = 0x153230u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 3));
label_153234:
    // 0x153234: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x153234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_153238:
    // 0x153238: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x153238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_15323c:
    // 0x15323c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x15323cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_153240:
    // 0x153240: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_153244:
    // 0x153244: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_153248:
    if (ctx->pc == 0x153248u) {
        ctx->pc = 0x153248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153244u;
        // 0x153248: 0x538c0  sll         $a3, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15324Cu;
        goto label_15324c;
    }
    ctx->pc = 0x153244u;
    {
        const bool branch_taken_0x153244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x153248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153244u;
        // 0x153248: 0x538c0  sll         $a3, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153244) {
            ctx->pc = 0x153290u;
            goto label_153290;
        }
    }
    ctx->pc = 0x15324Cu;
label_15324c:
    // 0x15324c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_153250:
    if (ctx->pc == 0x153250u) {
        ctx->pc = 0x153254u;
        goto label_153254;
    }
    ctx->pc = 0x15324Cu;
    {
        const bool branch_taken_0x15324c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15324c) {
            ctx->pc = 0x15325Cu;
            goto label_15325c;
        }
    }
    ctx->pc = 0x153254u;
label_153254:
    // 0x153254: 0x1000012b  b           . + 4 + (0x12B << 2)
label_153258:
    if (ctx->pc == 0x153258u) {
        ctx->pc = 0x15325Cu;
        goto label_15325c;
    }
    ctx->pc = 0x153254u;
    {
        const bool branch_taken_0x153254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153254) {
            ctx->pc = 0x153704u;
            goto label_153704;
        }
    }
    ctx->pc = 0x15325Cu;
label_15325c:
    // 0x15325c: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x15325cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
label_153260:
    // 0x153260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_153264:
    // 0x153264: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x153264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
label_153268:
    // 0x153268: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x153268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15326c:
    // 0x15326c: 0xffab0010  sd          $t3, 0x10($sp)
    ctx->pc = 0x15326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 11));
label_153270:
    // 0x153270: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x153270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_153274:
    // 0x153274: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x153274u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_153278:
    // 0x153278: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x153278u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_15327c:
    // 0x15327c: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x15327cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_153280:
    // 0x153280: 0xc054dc8  jal         func_153720
label_153284:
    if (ctx->pc == 0x153284u) {
        ctx->pc = 0x153284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153280u;
        // 0x153284: 0xffb00018  sd          $s0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153288u;
        goto label_153288;
    }
    ctx->pc = 0x153280u;
    SET_GPR_U32(ctx, 31, 0x153288u);
    ctx->pc = 0x153284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153280u;
    // 0x153284: 0xffb00018  sd          $s0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153720u;
    goto label_153720;
    ctx->pc = 0x153288u;
label_153288:
    // 0x153288: 0x1000011f  b           . + 4 + (0x11F << 2)
label_15328c:
    if (ctx->pc == 0x15328Cu) {
        ctx->pc = 0x15328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153288u;
        // 0x15328c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153290u;
        goto label_153290;
    }
    ctx->pc = 0x153288u;
    {
        const bool branch_taken_0x153288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153288u;
        // 0x15328c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153288) {
            ctx->pc = 0x153708u;
            goto label_153708;
        }
    }
    ctx->pc = 0x153290u;
label_153290:
    // 0x153290: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x153290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_153294:
    // 0x153294: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x153294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_153298:
    // 0x153298: 0x28630400  slti        $v1, $v1, 0x400
    ctx->pc = 0x153298u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
label_15329c:
    // 0x15329c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1532a0:
    if (ctx->pc == 0x1532A0u) {
        ctx->pc = 0x1532A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15329Cu;
        // 0x1532a0: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1532A4u;
        goto label_1532a4;
    }
    ctx->pc = 0x15329Cu;
    {
        const bool branch_taken_0x15329c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1532A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15329Cu;
        // 0x1532a0: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15329c) {
            ctx->pc = 0x1532ACu;
            goto label_1532ac;
        }
    }
    ctx->pc = 0x1532A4u;
label_1532a4:
    // 0x1532a4: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x1532a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1532a8:
    // 0x1532a8: 0x662023  subu        $a0, $v1, $a2
    ctx->pc = 0x1532a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1532ac:
    // 0x1532ac: 0x24e30018  addiu       $v1, $a3, 0x18
    ctx->pc = 0x1532acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_1532b0:
    // 0x1532b0: 0x28630280  slti        $v1, $v1, 0x280
    ctx->pc = 0x1532b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)640) ? 1 : 0);
label_1532b4:
    // 0x1532b4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1532b8:
    if (ctx->pc == 0x1532B8u) {
        ctx->pc = 0x1532B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532B4u;
        // 0x1532b8: 0x30e3ffff  andi        $v1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1532BCu;
        goto label_1532bc;
    }
    ctx->pc = 0x1532B4u;
    {
        const bool branch_taken_0x1532b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1532B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532B4u;
        // 0x1532b8: 0x30e3ffff  andi        $v1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532b4) {
            ctx->pc = 0x1532C8u;
            goto label_1532c8;
        }
    }
    ctx->pc = 0x1532BCu;
label_1532bc:
    // 0x1532bc: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x1532bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1532c0:
    // 0x1532c0: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x1532c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1532c4:
    // 0x1532c4: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x1532c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_1532c8:
    // 0x1532c8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1532c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1532cc:
    // 0x1532cc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1532ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1532d0:
    // 0x1532d0: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x1532d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
label_1532d4:
    // 0x1532d4: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1532d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_1532d8:
    // 0x1532d8: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1532d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1532dc:
    // 0x1532dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1532dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1532e0:
    // 0x1532e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1532e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1532e4:
    // 0x1532e4: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1532e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
label_1532e8:
    // 0x1532e8: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x1532e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_1532ec:
    // 0x1532ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1532f0:
    if (ctx->pc == 0x1532F0u) {
        ctx->pc = 0x1532F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532ECu;
        // 0x1532f0: 0xffa30028  sd          $v1, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1532F4u;
        goto label_1532f4;
    }
    ctx->pc = 0x1532ECu;
    {
        const bool branch_taken_0x1532ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1532F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532ECu;
        // 0x1532f0: 0xffa30028  sd          $v1, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532ec) {
            ctx->pc = 0x1532FCu;
            goto label_1532fc;
        }
    }
    ctx->pc = 0x1532F4u;
label_1532f4:
    // 0x1532f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1532f8:
    if (ctx->pc == 0x1532F8u) {
        ctx->pc = 0x1532F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532F4u;
        // 0x1532f8: 0xdf858608  ld          $a1, -0x79F8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1532FCu;
        goto label_1532fc;
    }
    ctx->pc = 0x1532F4u;
    {
        const bool branch_taken_0x1532f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1532F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532F4u;
        // 0x1532f8: 0xdf858608  ld          $a1, -0x79F8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532f4) {
            ctx->pc = 0x153304u;
            goto label_153304;
        }
    }
    ctx->pc = 0x1532FCu;
label_1532fc:
    // 0x1532fc: 0xdf858610  ld          $a1, -0x79F0($gp)
    ctx->pc = 0x1532fcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936080)));
label_153300:
    // 0x153300: 0x0  nop
    ctx->pc = 0x153300u;
    // NOP
label_153304:
    // 0x153304: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x153304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_153308:
    // 0x153308: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x153308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_15330c:
    // 0x15330c: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x15330cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_153310:
    // 0x153310: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x153310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_153314:
    // 0x153314: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x153314u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_153318:
    // 0x153318: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x153318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_15331c:
    // 0x15331c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15331cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_153320:
    // 0x153320: 0xc05ded8  jal         func_177B60
label_153324:
    if (ctx->pc == 0x153324u) {
        ctx->pc = 0x153324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153320u;
        // 0x153324: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153328u;
        goto label_153328;
    }
    ctx->pc = 0x153320u;
    SET_GPR_U32(ctx, 31, 0x153328u);
    ctx->pc = 0x153324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153320u;
    // 0x153324: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    { ctx->pc = 0x177b60; return; }
    ctx->pc = 0x153328u;
label_153328:
    // 0x153328: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x153328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_15332c:
    // 0x15332c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x15332cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_153330:
    // 0x153330: 0xa2230070  sb          $v1, 0x70($s1)
    ctx->pc = 0x153330u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 3));
label_153334:
    // 0x153334: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x153334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_153338:
    // 0x153338: 0xa2230071  sb          $v1, 0x71($s1)
    ctx->pc = 0x153338u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 3));
label_15333c:
    // 0x15333c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x15333cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_153340:
    // 0x153340: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x153340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_153344:
    // 0x153344: 0xa2230072  sb          $v1, 0x72($s1)
    ctx->pc = 0x153344u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 3));
label_153348:
    // 0x153348: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x153348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_15334c:
    // 0x15334c: 0xa2250073  sb          $a1, 0x73($s1)
    ctx->pc = 0x15334cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 115), (uint8_t)GPR_U32(ctx, 5));
label_153350:
    // 0x153350: 0xae240074  sw          $a0, 0x74($s1)
    ctx->pc = 0x153350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 4));
label_153354:
    // 0x153354: 0x244259c0  addiu       $v0, $v0, 0x59C0
    ctx->pc = 0x153354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22976));
label_153358:
    // 0x153358: 0xa2230088  sb          $v1, 0x88($s1)
    ctx->pc = 0x153358u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 3));
label_15335c:
    // 0x15335c: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x15335cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_153360:
    // 0x153360: 0xa2230089  sb          $v1, 0x89($s1)
    ctx->pc = 0x153360u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 3));
label_153364:
    // 0x153364: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x153364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_153368:
    // 0x153368: 0xa223008a  sb          $v1, 0x8A($s1)
    ctx->pc = 0x153368u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 138), (uint8_t)GPR_U32(ctx, 3));
label_15336c:
    // 0x15336c: 0x244259c1  addiu       $v0, $v0, 0x59C1
    ctx->pc = 0x15336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22977));
label_153370:
    // 0x153370: 0xa225008b  sb          $a1, 0x8B($s1)
    ctx->pc = 0x153370u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 5));
label_153374:
    // 0x153374: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x153374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_153378:
    // 0x153378: 0xae24008c  sw          $a0, 0x8C($s1)
    ctx->pc = 0x153378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 4));
label_15337c:
    // 0x15337c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x15337cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_153380:
    // 0x153380: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x153380u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_153384:
    // 0x153384: 0x244259c2  addiu       $v0, $v0, 0x59C2
    ctx->pc = 0x153384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22978));
label_153388:
    // 0x153388: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x153388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_15338c:
    // 0x15338c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_153390:
    // 0x153390: 0xa22300a0  sb          $v1, 0xA0($s1)
    ctx->pc = 0x153390u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 3));
label_153394:
    // 0x153394: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x153394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_153398:
    // 0x153398: 0xa22300a1  sb          $v1, 0xA1($s1)
    ctx->pc = 0x153398u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 161), (uint8_t)GPR_U32(ctx, 3));
label_15339c:
    // 0x15339c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x15339cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1533a0:
    // 0x1533a0: 0xa22300a2  sb          $v1, 0xA2($s1)
    ctx->pc = 0x1533a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 162), (uint8_t)GPR_U32(ctx, 3));
label_1533a4:
    // 0x1533a4: 0xa22500a3  sb          $a1, 0xA3($s1)
    ctx->pc = 0x1533a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 163), (uint8_t)GPR_U32(ctx, 5));
label_1533a8:
    // 0x1533a8: 0xae2400a4  sw          $a0, 0xA4($s1)
    ctx->pc = 0x1533a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 4));
label_1533ac:
    // 0x1533ac: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1533acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1533b0:
    // 0x1533b0: 0xa22300b8  sb          $v1, 0xB8($s1)
    ctx->pc = 0x1533b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 184), (uint8_t)GPR_U32(ctx, 3));
label_1533b4:
    // 0x1533b4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1533b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1533b8:
    // 0x1533b8: 0xa22300b9  sb          $v1, 0xB9($s1)
    ctx->pc = 0x1533b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 185), (uint8_t)GPR_U32(ctx, 3));
label_1533bc:
    // 0x1533bc: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1533bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1533c0:
    // 0x1533c0: 0xa22300ba  sb          $v1, 0xBA($s1)
    ctx->pc = 0x1533c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 186), (uint8_t)GPR_U32(ctx, 3));
label_1533c4:
    // 0x1533c4: 0xa22500bb  sb          $a1, 0xBB($s1)
    ctx->pc = 0x1533c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 187), (uint8_t)GPR_U32(ctx, 5));
label_1533c8:
    // 0x1533c8: 0x100000cf  b           . + 4 + (0xCF << 2)
label_1533cc:
    if (ctx->pc == 0x1533CCu) {
        ctx->pc = 0x1533CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533C8u;
        // 0x1533cc: 0xae2400bc  sw          $a0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1533D0u;
        goto label_1533d0;
    }
    ctx->pc = 0x1533C8u;
    {
        const bool branch_taken_0x1533c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1533CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533C8u;
        // 0x1533cc: 0xae2400bc  sw          $a0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533c8) {
            ctx->pc = 0x153708u;
            goto label_153708;
        }
    }
    ctx->pc = 0x1533D0u;
label_1533d0:
    // 0x1533d0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1533d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_1533d4:
    // 0x1533d4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1533d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1533d8:
    // 0x1533d8: 0x3c046666  lui         $a0, 0x6666
    ctx->pc = 0x1533d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
label_1533dc:
    // 0x1533dc: 0x105001a  div         $zero, $t0, $a1
    ctx->pc = 0x1533dcu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1533e0:
    // 0x1533e0: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x1533e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_1533e4:
    // 0x1533e4: 0x0  nop
    ctx->pc = 0x1533e4u;
    // NOP
label_1533e8:
    // 0x1533e8: 0x3010  mfhi        $a2
    ctx->pc = 0x1533e8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1533ec:
    // 0x1533ec: 0x34856667  ori         $a1, $a0, 0x6667
    ctx->pc = 0x1533ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26215);
label_1533f0:
    // 0x1533f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1533f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1533f4:
    // 0x1533f4: 0xa80018  mult        $zero, $a1, $t0
    ctx->pc = 0x1533f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1533f8:
    // 0x1533f8: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1533f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1533fc:
    // 0x1533fc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1533fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_153400:
    // 0x153400: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x153400u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_153404:
    // 0x153404: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x153404u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_153408:
    // 0x153408: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x153408u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_15340c:
    // 0x15340c: 0x2810  mfhi        $a1
    ctx->pc = 0x15340cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_153410:
    // 0x153410: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x153410u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_153414:
    // 0x153414: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x153414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_153418:
    // 0x153418: 0x72840  sll         $a1, $a3, 1
    ctx->pc = 0x153418u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_15341c:
    // 0x15341c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x15341cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_153420:
    // 0x153420: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x153420u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_153424:
    // 0x153424: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
label_153428:
    if (ctx->pc == 0x153428u) {
        ctx->pc = 0x153428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153424u;
        // 0x153428: 0x24a70180  addiu       $a3, $a1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15342Cu;
        goto label_15342c;
    }
    ctx->pc = 0x153424u;
    {
        const bool branch_taken_0x153424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x153428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153424u;
        // 0x153428: 0x24a70180  addiu       $a3, $a1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153424) {
            ctx->pc = 0x153470u;
            goto label_153470;
        }
    }
    ctx->pc = 0x15342Cu;
label_15342c:
    // 0x15342c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_153430:
    if (ctx->pc == 0x153430u) {
        ctx->pc = 0x153434u;
        goto label_153434;
    }
    ctx->pc = 0x15342Cu;
    {
        const bool branch_taken_0x15342c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15342c) {
            ctx->pc = 0x15343Cu;
            goto label_15343c;
        }
    }
    ctx->pc = 0x153434u;
label_153434:
    // 0x153434: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_153438:
    if (ctx->pc == 0x153438u) {
        ctx->pc = 0x15343Cu;
        goto label_15343c;
    }
    ctx->pc = 0x153434u;
    {
        const bool branch_taken_0x153434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153434) {
            ctx->pc = 0x153704u;
            goto label_153704;
        }
    }
    ctx->pc = 0x15343Cu;
label_15343c:
    // 0x15343c: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x15343cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
label_153440:
    // 0x153440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_153444:
    // 0x153444: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x153444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
label_153448:
    // 0x153448: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x153448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_15344c:
    // 0x15344c: 0xffab0010  sd          $t3, 0x10($sp)
    ctx->pc = 0x15344cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 11));
label_153450:
    // 0x153450: 0x2408005e  addiu       $t0, $zero, 0x5E
    ctx->pc = 0x153450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
label_153454:
    // 0x153454: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x153454u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_153458:
    // 0x153458: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x153458u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_15345c:
    // 0x15345c: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x15345cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_153460:
    // 0x153460: 0xc054dc8  jal         func_153720
label_153464:
    if (ctx->pc == 0x153464u) {
        ctx->pc = 0x153464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153460u;
        // 0x153464: 0xffb00018  sd          $s0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153468u;
        goto label_153468;
    }
    ctx->pc = 0x153460u;
    SET_GPR_U32(ctx, 31, 0x153468u);
    ctx->pc = 0x153464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153460u;
    // 0x153464: 0xffb00018  sd          $s0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153720u;
    goto label_153720;
    ctx->pc = 0x153468u;
label_153468:
    // 0x153468: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_15346c:
    if (ctx->pc == 0x15346Cu) {
        ctx->pc = 0x15346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153468u;
        // 0x15346c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153470u;
        goto label_153470;
    }
    ctx->pc = 0x153468u;
    {
        const bool branch_taken_0x153468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153468u;
        // 0x15346c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153468) {
            ctx->pc = 0x153708u;
            goto label_153708;
        }
    }
    ctx->pc = 0x153470u;
label_153470:
    // 0x153470: 0x24c2005e  addiu       $v0, $a2, 0x5E
    ctx->pc = 0x153470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 94));
label_153474:
    // 0x153474: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x153474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_153478:
    // 0x153478: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x153478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
label_15347c:
    // 0x15347c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_153480:
    if (ctx->pc == 0x153480u) {
        ctx->pc = 0x153480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15347Cu;
        // 0x153480: 0x2404005e  addiu       $a0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153484u;
        goto label_153484;
    }
    ctx->pc = 0x15347Cu;
    {
        const bool branch_taken_0x15347c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15347Cu;
        // 0x153480: 0x2404005e  addiu       $a0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15347c) {
            ctx->pc = 0x15348Cu;
            goto label_15348c;
        }
    }
    ctx->pc = 0x153484u;
label_153484:
    // 0x153484: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x153484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_153488:
    // 0x153488: 0x462023  subu        $a0, $v0, $a2
    ctx->pc = 0x153488u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_15348c:
    // 0x15348c: 0x24e20018  addiu       $v0, $a3, 0x18
    ctx->pc = 0x15348cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_153490:
    // 0x153490: 0x28420280  slti        $v0, $v0, 0x280
    ctx->pc = 0x153490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)640) ? 1 : 0);
label_153494:
    // 0x153494: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_153498:
    if (ctx->pc == 0x153498u) {
        ctx->pc = 0x153498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153494u;
        // 0x153498: 0x30e2ffff  andi        $v0, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15349Cu;
        goto label_15349c;
    }
    ctx->pc = 0x153494u;
    {
        const bool branch_taken_0x153494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153494u;
        // 0x153498: 0x30e2ffff  andi        $v0, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153494) {
            ctx->pc = 0x1534A8u;
            goto label_1534a8;
        }
    }
    ctx->pc = 0x15349Cu;
label_15349c:
    // 0x15349c: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x15349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1534a0:
    // 0x1534a0: 0x472823  subu        $a1, $v0, $a3
    ctx->pc = 0x1534a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1534a4:
    // 0x1534a4: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x1534a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_1534a8:
    // 0x1534a8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1534a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1534ac:
    // 0x1534ac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1534acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1534b0:
    // 0x1534b0: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x1534b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
label_1534b4:
    // 0x1534b4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x1534b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_1534b8:
    // 0x1534b8: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1534b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1534bc:
    // 0x1534bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1534bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1534c0:
    // 0x1534c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1534c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1534c4:
    // 0x1534c4: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1534c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
label_1534c8:
    // 0x1534c8: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x1534c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_1534cc:
    // 0x1534cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1534d0:
    if (ctx->pc == 0x1534D0u) {
        ctx->pc = 0x1534D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534CCu;
        // 0x1534d0: 0xffa20028  sd          $v0, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1534D4u;
        goto label_1534d4;
    }
    ctx->pc = 0x1534CCu;
    {
        const bool branch_taken_0x1534cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534CCu;
        // 0x1534d0: 0xffa20028  sd          $v0, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534cc) {
            ctx->pc = 0x1534DCu;
            goto label_1534dc;
        }
    }
    ctx->pc = 0x1534D4u;
label_1534d4:
    // 0x1534d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1534d8:
    if (ctx->pc == 0x1534D8u) {
        ctx->pc = 0x1534D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534D4u;
        // 0x1534d8: 0xdf858608  ld          $a1, -0x79F8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1534DCu;
        goto label_1534dc;
    }
    ctx->pc = 0x1534D4u;
    {
        const bool branch_taken_0x1534d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534D4u;
        // 0x1534d8: 0xdf858608  ld          $a1, -0x79F8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534d4) {
            ctx->pc = 0x1534E4u;
            goto label_1534e4;
        }
    }
    ctx->pc = 0x1534DCu;
label_1534dc:
    // 0x1534dc: 0xdf858610  ld          $a1, -0x79F0($gp)
    ctx->pc = 0x1534dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936080)));
label_1534e0:
    // 0x1534e0: 0x0  nop
    ctx->pc = 0x1534e0u;
    // NOP
label_1534e4:
    // 0x1534e4: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x1534e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1534e8:
    // 0x1534e8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1534e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_1534ec:
    // 0x1534ec: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x1534ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1534f0:
    // 0x1534f0: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x1534f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_1534f4:
    // 0x1534f4: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x1534f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1534f8:
    // 0x1534f8: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x1534f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_1534fc:
    // 0x1534fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1534fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_153500:
    // 0x153500: 0xc05ded8  jal         func_177B60
label_153504:
    if (ctx->pc == 0x153504u) {
        ctx->pc = 0x153504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153500u;
        // 0x153504: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153508u;
        goto label_153508;
    }
    ctx->pc = 0x153500u;
    SET_GPR_U32(ctx, 31, 0x153508u);
    ctx->pc = 0x153504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153500u;
    // 0x153504: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    { ctx->pc = 0x177b60; return; }
    ctx->pc = 0x153508u;
label_153508:
    // 0x153508: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x153508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_15350c:
    // 0x15350c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x15350cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_153510:
    // 0x153510: 0xa2230070  sb          $v1, 0x70($s1)
    ctx->pc = 0x153510u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 3));
label_153514:
    // 0x153514: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x153514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_153518:
    // 0x153518: 0xa2230071  sb          $v1, 0x71($s1)
    ctx->pc = 0x153518u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 3));
label_15351c:
    // 0x15351c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x15351cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_153520:
    // 0x153520: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x153520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_153524:
    // 0x153524: 0xa2230072  sb          $v1, 0x72($s1)
    ctx->pc = 0x153524u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 3));
label_153528:
    // 0x153528: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x153528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_15352c:
    // 0x15352c: 0xa2250073  sb          $a1, 0x73($s1)
    ctx->pc = 0x15352cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 115), (uint8_t)GPR_U32(ctx, 5));
label_153530:
    // 0x153530: 0xae240074  sw          $a0, 0x74($s1)
    ctx->pc = 0x153530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 4));
label_153534:
    // 0x153534: 0x244259c0  addiu       $v0, $v0, 0x59C0
    ctx->pc = 0x153534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22976));
label_153538:
    // 0x153538: 0xa2230088  sb          $v1, 0x88($s1)
    ctx->pc = 0x153538u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 3));
label_15353c:
    // 0x15353c: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x15353cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_153540:
    // 0x153540: 0xa2230089  sb          $v1, 0x89($s1)
    ctx->pc = 0x153540u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 3));
label_153544:
    // 0x153544: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x153544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_153548:
    // 0x153548: 0xa223008a  sb          $v1, 0x8A($s1)
    ctx->pc = 0x153548u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 138), (uint8_t)GPR_U32(ctx, 3));
label_15354c:
    // 0x15354c: 0x244259c1  addiu       $v0, $v0, 0x59C1
    ctx->pc = 0x15354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22977));
label_153550:
    // 0x153550: 0xa225008b  sb          $a1, 0x8B($s1)
    ctx->pc = 0x153550u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 5));
label_153554:
    // 0x153554: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x153554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_153558:
    // 0x153558: 0xae24008c  sw          $a0, 0x8C($s1)
    ctx->pc = 0x153558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 4));
label_15355c:
    // 0x15355c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x15355cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_153560:
    // 0x153560: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x153560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_153564:
    // 0x153564: 0x244259c2  addiu       $v0, $v0, 0x59C2
    ctx->pc = 0x153564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22978));
label_153568:
    // 0x153568: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x153568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_15356c:
    // 0x15356c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_153570:
    // 0x153570: 0xa22300a0  sb          $v1, 0xA0($s1)
    ctx->pc = 0x153570u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 3));
label_153574:
    // 0x153574: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x153574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_153578:
    // 0x153578: 0xa22300a1  sb          $v1, 0xA1($s1)
    ctx->pc = 0x153578u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 161), (uint8_t)GPR_U32(ctx, 3));
label_15357c:
    // 0x15357c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x15357cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_153580:
    // 0x153580: 0xa22300a2  sb          $v1, 0xA2($s1)
    ctx->pc = 0x153580u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 162), (uint8_t)GPR_U32(ctx, 3));
label_153584:
    // 0x153584: 0xa22500a3  sb          $a1, 0xA3($s1)
    ctx->pc = 0x153584u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 163), (uint8_t)GPR_U32(ctx, 5));
label_153588:
    // 0x153588: 0xae2400a4  sw          $a0, 0xA4($s1)
    ctx->pc = 0x153588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 4));
label_15358c:
    // 0x15358c: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x15358cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_153590:
    // 0x153590: 0xa22300b8  sb          $v1, 0xB8($s1)
    ctx->pc = 0x153590u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 184), (uint8_t)GPR_U32(ctx, 3));
label_153594:
    // 0x153594: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x153594u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_153598:
    // 0x153598: 0xa22300b9  sb          $v1, 0xB9($s1)
    ctx->pc = 0x153598u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 185), (uint8_t)GPR_U32(ctx, 3));
label_15359c:
    // 0x15359c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x15359cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1535a0:
    // 0x1535a0: 0xa22300ba  sb          $v1, 0xBA($s1)
    ctx->pc = 0x1535a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 186), (uint8_t)GPR_U32(ctx, 3));
label_1535a4:
    // 0x1535a4: 0xa22500bb  sb          $a1, 0xBB($s1)
    ctx->pc = 0x1535a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 187), (uint8_t)GPR_U32(ctx, 5));
label_1535a8:
    // 0x1535a8: 0x10000057  b           . + 4 + (0x57 << 2)
label_1535ac:
    if (ctx->pc == 0x1535ACu) {
        ctx->pc = 0x1535ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535A8u;
        // 0x1535ac: 0xae2400bc  sw          $a0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1535B0u;
        goto label_1535b0;
    }
    ctx->pc = 0x1535A8u;
    {
        const bool branch_taken_0x1535a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1535ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535A8u;
        // 0x1535ac: 0xae2400bc  sw          $a0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535a8) {
            ctx->pc = 0x153708u;
            goto label_153708;
        }
    }
    ctx->pc = 0x1535B0u;
label_1535b0:
    // 0x1535b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1535b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1535b4:
    // 0x1535b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1535b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1535b8:
    // 0x1535b8: 0x10440013  beq         $v0, $a0, . + 4 + (0x13 << 2)
label_1535bc:
    if (ctx->pc == 0x1535BCu) {
        ctx->pc = 0x1535BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535B8u;
        // 0x1535bc: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1535C0u;
        goto label_1535c0;
    }
    ctx->pc = 0x1535B8u;
    {
        const bool branch_taken_0x1535b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1535BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535B8u;
        // 0x1535bc: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535b8) {
            ctx->pc = 0x153608u;
            goto label_153608;
        }
    }
    ctx->pc = 0x1535C0u;
label_1535c0:
    // 0x1535c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1535c4:
    if (ctx->pc == 0x1535C4u) {
        ctx->pc = 0x1535C8u;
        goto label_1535c8;
    }
    ctx->pc = 0x1535C0u;
    {
        const bool branch_taken_0x1535c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1535c0) {
            ctx->pc = 0x1535D0u;
            goto label_1535d0;
        }
    }
    ctx->pc = 0x1535C8u;
label_1535c8:
    // 0x1535c8: 0x1000004e  b           . + 4 + (0x4E << 2)
label_1535cc:
    if (ctx->pc == 0x1535CCu) {
        ctx->pc = 0x1535D0u;
        goto label_1535d0;
    }
    ctx->pc = 0x1535C8u;
    {
        const bool branch_taken_0x1535c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1535c8) {
            ctx->pc = 0x153704u;
            goto label_153704;
        }
    }
    ctx->pc = 0x1535D0u;
label_1535d0:
    // 0x1535d0: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x1535d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
label_1535d4:
    // 0x1535d4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1535d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1535d8:
    // 0x1535d8: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x1535d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
label_1535dc:
    // 0x1535dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1535dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1535e0:
    // 0x1535e0: 0xffab0010  sd          $t3, 0x10($sp)
    ctx->pc = 0x1535e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 11));
label_1535e4:
    // 0x1535e4: 0x240603f8  addiu       $a2, $zero, 0x3F8
    ctx->pc = 0x1535e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1016));
label_1535e8:
    // 0x1535e8: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x1535e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_1535ec:
    // 0x1535ec: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x1535ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_1535f0:
    // 0x1535f0: 0x24070278  addiu       $a3, $zero, 0x278
    ctx->pc = 0x1535f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
label_1535f4:
    // 0x1535f4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1535f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1535f8:
    // 0x1535f8: 0xc054dc8  jal         func_153720
label_1535fc:
    if (ctx->pc == 0x1535FCu) {
        ctx->pc = 0x1535FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535F8u;
        // 0x1535fc: 0xffb00018  sd          $s0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153600u;
        goto label_153600;
    }
    ctx->pc = 0x1535F8u;
    SET_GPR_U32(ctx, 31, 0x153600u);
    ctx->pc = 0x1535FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1535F8u;
    // 0x1535fc: 0xffb00018  sd          $s0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153720u;
    goto label_153720;
    ctx->pc = 0x153600u;
label_153600:
    // 0x153600: 0x10000041  b           . + 4 + (0x41 << 2)
label_153604:
    if (ctx->pc == 0x153604u) {
        ctx->pc = 0x153604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153600u;
        // 0x153604: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153608u;
        goto label_153608;
    }
    ctx->pc = 0x153600u;
    {
        const bool branch_taken_0x153600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153600u;
        // 0x153604: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153600) {
            ctx->pc = 0x153708u;
            goto label_153708;
        }
    }
    ctx->pc = 0x153608u;
label_153608:
    // 0x153608: 0x24030278  addiu       $v1, $zero, 0x278
    ctx->pc = 0x153608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
label_15360c:
    // 0x15360c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x15360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_153610:
    // 0x153610: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x153610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_153614:
    // 0x153614: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x153614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_153618:
    // 0x153618: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x153618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_15361c:
    // 0x15361c: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x15361cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
label_153620:
    // 0x153620: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x153620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
label_153624:
    // 0x153624: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_153628:
    if (ctx->pc == 0x153628u) {
        ctx->pc = 0x153628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153624u;
        // 0x153628: 0xffa40028  sd          $a0, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15362Cu;
        goto label_15362c;
    }
    ctx->pc = 0x153624u;
    {
        const bool branch_taken_0x153624 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x153628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153624u;
        // 0x153628: 0xffa40028  sd          $a0, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153624) {
            ctx->pc = 0x153634u;
            goto label_153634;
        }
    }
    ctx->pc = 0x15362Cu;
label_15362c:
    // 0x15362c: 0x10000003  b           . + 4 + (0x3 << 2)
label_153630:
    if (ctx->pc == 0x153630u) {
        ctx->pc = 0x153630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15362Cu;
        // 0x153630: 0xdf858608  ld          $a1, -0x79F8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153634u;
        goto label_153634;
    }
    ctx->pc = 0x15362Cu;
    {
        const bool branch_taken_0x15362c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15362Cu;
        // 0x153630: 0xdf858608  ld          $a1, -0x79F8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15362c) {
            ctx->pc = 0x15363Cu;
            goto label_15363c;
        }
    }
    ctx->pc = 0x153634u;
label_153634:
    // 0x153634: 0xdf858610  ld          $a1, -0x79F0($gp)
    ctx->pc = 0x153634u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936080)));
label_153638:
    // 0x153638: 0x0  nop
    ctx->pc = 0x153638u;
    // NOP
label_15363c:
    // 0x15363c: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x15363cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_153640:
    // 0x153640: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x153640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_153644:
    // 0x153644: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x153644u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_153648:
    // 0x153648: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x153648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_15364c:
    // 0x15364c: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x15364cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_153650:
    // 0x153650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_153654:
    // 0x153654: 0xc05ded8  jal         func_177B60
label_153658:
    if (ctx->pc == 0x153658u) {
        ctx->pc = 0x153658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153654u;
        // 0x153658: 0x240b03f8  addiu       $t3, $zero, 0x3F8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15365Cu;
        goto label_15365c;
    }
    ctx->pc = 0x153654u;
    SET_GPR_U32(ctx, 31, 0x15365Cu);
    ctx->pc = 0x153658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153654u;
    // 0x153658: 0x240b03f8  addiu       $t3, $zero, 0x3F8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    { ctx->pc = 0x177b60; return; }
    ctx->pc = 0x15365Cu;
label_15365c:
    // 0x15365c: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x15365cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_153660:
    // 0x153660: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x153660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_153664:
    // 0x153664: 0xa2230070  sb          $v1, 0x70($s1)
    ctx->pc = 0x153664u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 3));
label_153668:
    // 0x153668: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x153668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_15366c:
    // 0x15366c: 0xa2230071  sb          $v1, 0x71($s1)
    ctx->pc = 0x15366cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 3));
label_153670:
    // 0x153670: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x153670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_153674:
    // 0x153674: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x153674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_153678:
    // 0x153678: 0xa2230072  sb          $v1, 0x72($s1)
    ctx->pc = 0x153678u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 3));
label_15367c:
    // 0x15367c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x15367cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_153680:
    // 0x153680: 0xa2250073  sb          $a1, 0x73($s1)
    ctx->pc = 0x153680u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 115), (uint8_t)GPR_U32(ctx, 5));
label_153684:
    // 0x153684: 0xae240074  sw          $a0, 0x74($s1)
    ctx->pc = 0x153684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 4));
label_153688:
    // 0x153688: 0x244259c0  addiu       $v0, $v0, 0x59C0
    ctx->pc = 0x153688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22976));
label_15368c:
    // 0x15368c: 0xa2230088  sb          $v1, 0x88($s1)
    ctx->pc = 0x15368cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 3));
label_153690:
    // 0x153690: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x153690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_153694:
    // 0x153694: 0xa2230089  sb          $v1, 0x89($s1)
    ctx->pc = 0x153694u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 3));
label_153698:
    // 0x153698: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x153698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_15369c:
    // 0x15369c: 0xa223008a  sb          $v1, 0x8A($s1)
    ctx->pc = 0x15369cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 138), (uint8_t)GPR_U32(ctx, 3));
label_1536a0:
    // 0x1536a0: 0x244259c1  addiu       $v0, $v0, 0x59C1
    ctx->pc = 0x1536a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22977));
label_1536a4:
    // 0x1536a4: 0xa225008b  sb          $a1, 0x8B($s1)
    ctx->pc = 0x1536a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 5));
label_1536a8:
    // 0x1536a8: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x1536a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1536ac:
    // 0x1536ac: 0xae24008c  sw          $a0, 0x8C($s1)
    ctx->pc = 0x1536acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 4));
label_1536b0:
    // 0x1536b0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1536b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_1536b4:
    // 0x1536b4: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1536b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1536b8:
    // 0x1536b8: 0x244259c2  addiu       $v0, $v0, 0x59C2
    ctx->pc = 0x1536b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22978));
label_1536bc:
    // 0x1536bc: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x1536bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1536c0:
    // 0x1536c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1536c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1536c4:
    // 0x1536c4: 0xa22300a0  sb          $v1, 0xA0($s1)
    ctx->pc = 0x1536c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 3));
label_1536c8:
    // 0x1536c8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1536c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1536cc:
    // 0x1536cc: 0xa22300a1  sb          $v1, 0xA1($s1)
    ctx->pc = 0x1536ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 161), (uint8_t)GPR_U32(ctx, 3));
label_1536d0:
    // 0x1536d0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1536d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1536d4:
    // 0x1536d4: 0xa22300a2  sb          $v1, 0xA2($s1)
    ctx->pc = 0x1536d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 162), (uint8_t)GPR_U32(ctx, 3));
label_1536d8:
    // 0x1536d8: 0xa22500a3  sb          $a1, 0xA3($s1)
    ctx->pc = 0x1536d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 163), (uint8_t)GPR_U32(ctx, 5));
label_1536dc:
    // 0x1536dc: 0xae2400a4  sw          $a0, 0xA4($s1)
    ctx->pc = 0x1536dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 4));
label_1536e0:
    // 0x1536e0: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1536e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1536e4:
    // 0x1536e4: 0xa22300b8  sb          $v1, 0xB8($s1)
    ctx->pc = 0x1536e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 184), (uint8_t)GPR_U32(ctx, 3));
label_1536e8:
    // 0x1536e8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1536e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1536ec:
    // 0x1536ec: 0xa22300b9  sb          $v1, 0xB9($s1)
    ctx->pc = 0x1536ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 185), (uint8_t)GPR_U32(ctx, 3));
label_1536f0:
    // 0x1536f0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1536f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1536f4:
    // 0x1536f4: 0xa22300ba  sb          $v1, 0xBA($s1)
    ctx->pc = 0x1536f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 186), (uint8_t)GPR_U32(ctx, 3));
label_1536f8:
    // 0x1536f8: 0xa22500bb  sb          $a1, 0xBB($s1)
    ctx->pc = 0x1536f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 187), (uint8_t)GPR_U32(ctx, 5));
label_1536fc:
    // 0x1536fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_153700:
    if (ctx->pc == 0x153700u) {
        ctx->pc = 0x153700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1536FCu;
        // 0x153700: 0xae2400bc  sw          $a0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153704u;
        goto label_153704;
    }
    ctx->pc = 0x1536FCu;
    {
        const bool branch_taken_0x1536fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1536FCu;
        // 0x153700: 0xae2400bc  sw          $a0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536fc) {
            ctx->pc = 0x153708u;
            goto label_153708;
        }
    }
    ctx->pc = 0x153704u;
label_153704:
    // 0x153704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x153704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153708:
    // 0x153708: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x153708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15370c:
    // 0x15370c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x15370cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_153710:
    // 0x153710: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x153710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_153714:
    // 0x153714: 0x3e00008  jr          $ra
label_153718:
    if (ctx->pc == 0x153718u) {
        ctx->pc = 0x153718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153714u;
        // 0x153718: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15371Cu;
        goto label_15371c;
    }
    ctx->pc = 0x153714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153714u;
        // 0x153718: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15371Cu;
label_15371c:
    // 0x15371c: 0x0  nop
    ctx->pc = 0x15371cu;
    // NOP
label_153720:
    // 0x153720: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x153720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_153724:
    // 0x153724: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x153724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_153728:
    // 0x153728: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x153728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_15372c:
    // 0x15372c: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x15372cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
label_153730:
    // 0x153730: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x153730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_153734:
    // 0x153734: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x153734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_153738:
    // 0x153738: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x153738u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_15373c:
    // 0x15373c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15373cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_153740:
    // 0x153740: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x153740u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_153744:
    // 0x153744: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x153744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_153748:
    // 0x153748: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x153748u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15374c:
    // 0x15374c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15374cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_153750:
    // 0x153750: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x153750u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_153754:
    // 0x153754: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_153758:
    // 0x153758: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x153758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_15375c:
    // 0x15375c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15375cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_153760:
    // 0x153760: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x153760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_153764:
    // 0x153764: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_153768:
    if (ctx->pc == 0x153768u) {
        ctx->pc = 0x153768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153764u;
        // 0x153768: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15376Cu;
        goto label_15376c;
    }
    ctx->pc = 0x153764u;
    {
        const bool branch_taken_0x153764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153764u;
        // 0x153768: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153764) {
            ctx->pc = 0x153774u;
            goto label_153774;
        }
    }
    ctx->pc = 0x15376Cu;
label_15376c:
    // 0x15376c: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x15376cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_153770:
    // 0x153770: 0x54b023  subu        $s6, $v0, $s4
    ctx->pc = 0x153770u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_153774:
    // 0x153774: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x153774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_153778:
    // 0x153778: 0x28420280  slti        $v0, $v0, 0x280
    ctx->pc = 0x153778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)640) ? 1 : 0);
label_15377c:
    // 0x15377c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_153780:
    if (ctx->pc == 0x153780u) {
        ctx->pc = 0x153780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15377Cu;
        // 0x153780: 0x240203ff  addiu       $v0, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153784u;
        goto label_153784;
    }
    ctx->pc = 0x15377Cu;
    {
        const bool branch_taken_0x15377c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15377Cu;
        // 0x153780: 0x240203ff  addiu       $v0, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15377c) {
            ctx->pc = 0x153788u;
            goto label_153788;
        }
    }
    ctx->pc = 0x153784u;
label_153784:
    // 0x153784: 0x539023  subu        $s2, $v0, $s3
    ctx->pc = 0x153784u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_153788:
    // 0x153788: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_15378c:
    if (ctx->pc == 0x15378Cu) {
        ctx->pc = 0x153790u;
        goto label_153790;
    }
    ctx->pc = 0x153788u;
    {
        const bool branch_taken_0x153788 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x153788) {
            ctx->pc = 0x153798u;
            goto label_153798;
        }
    }
    ctx->pc = 0x153790u;
label_153790:
    // 0x153790: 0x10000003  b           . + 4 + (0x3 << 2)
label_153794:
    if (ctx->pc == 0x153794u) {
        ctx->pc = 0x153794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153790u;
        // 0x153794: 0xdf858608  ld          $a1, -0x79F8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153798u;
        goto label_153798;
    }
    ctx->pc = 0x153790u;
    {
        const bool branch_taken_0x153790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153790u;
        // 0x153794: 0xdf858608  ld          $a1, -0x79F8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153790) {
            ctx->pc = 0x1537A0u;
            goto label_1537a0;
        }
    }
    ctx->pc = 0x153798u;
label_153798:
    // 0x153798: 0xdf858610  ld          $a1, -0x79F0($gp)
    ctx->pc = 0x153798u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936080)));
label_15379c:
    // 0x15379c: 0x0  nop
    ctx->pc = 0x15379cu;
    // NOP
label_1537a0:
    // 0x1537a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1537a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1537a4:
    // 0x1537a4: 0xc05e158  jal         func_178560
label_1537a8:
    if (ctx->pc == 0x1537A8u) {
        ctx->pc = 0x1537A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1537A4u;
        // 0x1537a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1537ACu;
        goto label_1537ac;
    }
    ctx->pc = 0x1537A4u;
    SET_GPR_U32(ctx, 31, 0x1537ACu);
    ctx->pc = 0x1537A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1537A4u;
    // 0x1537a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    { ctx->pc = 0x178560; return; }
    ctx->pc = 0x1537ACu;
label_1537ac:
    // 0x1537ac: 0x2961821  addu        $v1, $s4, $s6
    ctx->pc = 0x1537acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
label_1537b0:
    // 0x1537b0: 0x2722021  addu        $a0, $s3, $s2
    ctx->pc = 0x1537b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_1537b4:
    // 0x1537b4: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x1537b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1537b8:
    // 0x1537b8: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1537b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1537bc:
    // 0x1537bc: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x1537bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_1537c0:
    // 0x1537c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1537c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1537c4:
    // 0x1537c4: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x1537c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1537c8:
    // 0x1537c8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1537c8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_1537cc:
    // 0x1537cc: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1537ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
label_1537d0:
    // 0x1537d0: 0x63bb8  dsll        $a3, $a2, 14
    ctx->pc = 0x1537d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << 14);
label_1537d4:
    // 0x1537d4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1537d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1537d8:
    // 0x1537d8: 0x33138  dsll        $a2, $v1, 4
    ctx->pc = 0x1537d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 4);
label_1537dc:
    // 0x1537dc: 0x34c6000a  ori         $a2, $a2, 0xA
    ctx->pc = 0x1537dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
label_1537e0:
    // 0x1537e0: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x1537e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1537e4:
    // 0x1537e4: 0xc74025  or          $t0, $a2, $a3
    ctx->pc = 0x1537e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1537e8:
    // 0x1537e8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1537e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1537ec:
    // 0x1537ec: 0x13303c  dsll32      $a2, $s3, 0
    ctx->pc = 0x1537ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 0));
label_1537f0:
    // 0x1537f0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1537f0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_1537f4:
    // 0x1537f4: 0x63e38  dsll        $a3, $a2, 24
    ctx->pc = 0x1537f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << 24);
label_1537f8:
    // 0x1537f8: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x1537f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1537fc:
    // 0x1537fc: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1537fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_153800:
    // 0x153800: 0x24c80008  addiu       $t0, $a2, 0x8
    ctx->pc = 0x153800u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_153804:
    // 0x153804: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x153804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_153808:
    // 0x153808: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x153808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_15380c:
    // 0x15380c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15380cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_153810:
    // 0x153810: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x153810u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_153814:
    // 0x153814: 0x248a0008  addiu       $t2, $a0, 0x8
    ctx->pc = 0x153814u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_153818:
    // 0x153818: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x153818u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
label_15381c:
    // 0x15381c: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x15381cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_153820:
    // 0x153820: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x153820u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_153824:
    // 0x153824: 0x248c6c00  addiu       $t4, $a0, 0x6C00
    ctx->pc = 0x153824u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_153828:
    // 0x153828: 0xfe060008  sd          $a2, 0x8($s0)
    ctx->pc = 0x153828u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 6));
label_15382c:
    // 0x15382c: 0x1520c0  sll         $a0, $s5, 3
    ctx->pc = 0x15382cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_153830:
    // 0x153830: 0xa6030020  sh          $v1, 0x20($s0)
    ctx->pc = 0x153830u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 3));
label_153834:
    // 0x153834: 0x248b7900  addiu       $t3, $a0, 0x7900
    ctx->pc = 0x153834u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_153838:
    // 0x153838: 0xa6080022  sh          $t0, 0x22($s0)
    ctx->pc = 0x153838u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 8));
label_15383c:
    // 0x15383c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x15383cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_153840:
    // 0x153840: 0xa6050038  sh          $a1, 0x38($s0)
    ctx->pc = 0x153840u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 5));
label_153844:
    // 0x153844: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x153844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
label_153848:
    // 0x153848: 0xa608003a  sh          $t0, 0x3A($s0)
    ctx->pc = 0x153848u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 8));
label_15384c:
    // 0x15384c: 0x24070068  addiu       $a3, $zero, 0x68
    ctx->pc = 0x15384cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_153850:
    // 0x153850: 0xa6030050  sh          $v1, 0x50($s0)
    ctx->pc = 0x153850u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 3));
label_153854:
    // 0x153854: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x153854u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_153858:
    // 0x153858: 0xa60a0052  sh          $t2, 0x52($s0)
    ctx->pc = 0x153858u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 10));
label_15385c:
    // 0x15385c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x15385cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
label_153860:
    // 0x153860: 0xa6050068  sh          $a1, 0x68($s0)
    ctx->pc = 0x153860u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 5));
label_153864:
    // 0x153864: 0x24c659c0  addiu       $a2, $a2, 0x59C0
    ctx->pc = 0x153864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22976));
label_153868:
    // 0x153868: 0xa60a006a  sh          $t2, 0x6A($s0)
    ctx->pc = 0x153868u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 10));
label_15386c:
    // 0x15386c: 0x248459c1  addiu       $a0, $a0, 0x59C1
    ctx->pc = 0x15386cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22977));
label_153870:
    // 0x153870: 0xa60c0028  sh          $t4, 0x28($s0)
    ctx->pc = 0x153870u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 12));
label_153874:
    // 0x153874: 0x246359c2  addiu       $v1, $v1, 0x59C2
    ctx->pc = 0x153874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22978));
label_153878:
    // 0x153878: 0xa60b002a  sh          $t3, 0x2A($s0)
    ctx->pc = 0x153878u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 11));
label_15387c:
    // 0x15387c: 0x8faa0080  lw          $t2, 0x80($sp)
    ctx->pc = 0x15387cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_153880:
    // 0x153880: 0xae0a002c  sw          $t2, 0x2C($s0)
    ctx->pc = 0x153880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 10));
label_153884:
    // 0x153884: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x153884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_153888:
    // 0x153888: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x153888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_15388c:
    // 0x15388c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15388cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_153890:
    // 0x153890: 0x24ad6c00  addiu       $t5, $a1, 0x6C00
    ctx->pc = 0x153890u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
label_153894:
    // 0x153894: 0xa60d0040  sh          $t5, 0x40($s0)
    ctx->pc = 0x153894u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 13));
label_153898:
    // 0x153898: 0xa60b0042  sh          $t3, 0x42($s0)
    ctx->pc = 0x153898u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 11));
label_15389c:
    // 0x15389c: 0xae0a0044  sw          $t2, 0x44($s0)
    ctx->pc = 0x15389cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 10));
label_1538a0:
    // 0x1538a0: 0xa60c0058  sh          $t4, 0x58($s0)
    ctx->pc = 0x1538a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 88), (uint16_t)GPR_U32(ctx, 12));
label_1538a4:
    // 0x1538a4: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1538a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1538a8:
    // 0x1538a8: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x1538a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_1538ac:
    // 0x1538ac: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1538acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1538b0:
    // 0x1538b0: 0x24a57900  addiu       $a1, $a1, 0x7900
    ctx->pc = 0x1538b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
label_1538b4:
    // 0x1538b4: 0xa605005a  sh          $a1, 0x5A($s0)
    ctx->pc = 0x1538b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 5));
label_1538b8:
    // 0x1538b8: 0xae0a005c  sw          $t2, 0x5C($s0)
    ctx->pc = 0x1538b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 10));
label_1538bc:
    // 0x1538bc: 0xa60d0070  sh          $t5, 0x70($s0)
    ctx->pc = 0x1538bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 112), (uint16_t)GPR_U32(ctx, 13));
label_1538c0:
    // 0x1538c0: 0xa6050072  sh          $a1, 0x72($s0)
    ctx->pc = 0x1538c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 5));
label_1538c4:
    // 0x1538c4: 0xae0a0074  sw          $t2, 0x74($s0)
    ctx->pc = 0x1538c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 10));
label_1538c8:
    // 0x1538c8: 0xa2070018  sb          $a3, 0x18($s0)
    ctx->pc = 0x1538c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 7));
label_1538cc:
    // 0x1538cc: 0xa2070019  sb          $a3, 0x19($s0)
    ctx->pc = 0x1538ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 7));
label_1538d0:
    // 0x1538d0: 0xa207001a  sb          $a3, 0x1A($s0)
    ctx->pc = 0x1538d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 7));
label_1538d4:
    // 0x1538d4: 0xa209001b  sb          $t1, 0x1B($s0)
    ctx->pc = 0x1538d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 9));
label_1538d8:
    // 0x1538d8: 0xae08001c  sw          $t0, 0x1C($s0)
    ctx->pc = 0x1538d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 8));
label_1538dc:
    // 0x1538dc: 0xa2070030  sb          $a3, 0x30($s0)
    ctx->pc = 0x1538dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 7));
label_1538e0:
    // 0x1538e0: 0xa2070031  sb          $a3, 0x31($s0)
    ctx->pc = 0x1538e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 7));
label_1538e4:
    // 0x1538e4: 0xa2070032  sb          $a3, 0x32($s0)
    ctx->pc = 0x1538e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 7));
label_1538e8:
    // 0x1538e8: 0xa2090033  sb          $t1, 0x33($s0)
    ctx->pc = 0x1538e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 51), (uint8_t)GPR_U32(ctx, 9));
label_1538ec:
    // 0x1538ec: 0xae080034  sw          $t0, 0x34($s0)
    ctx->pc = 0x1538ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 8));
label_1538f0:
    // 0x1538f0: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x1538f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1538f4:
    // 0x1538f4: 0x72840  sll         $a1, $a3, 1
    ctx->pc = 0x1538f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1538f8:
    // 0x1538f8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1538f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1538fc:
    // 0x1538fc: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1538fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_153900:
    // 0x153900: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x153900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_153904:
    // 0x153904: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x153904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_153908:
    // 0x153908: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x153908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_15390c:
    // 0x15390c: 0xa2030048  sb          $v1, 0x48($s0)
    ctx->pc = 0x15390cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 3));
label_153910:
    // 0x153910: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x153910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_153914:
    // 0x153914: 0xa2030049  sb          $v1, 0x49($s0)
    ctx->pc = 0x153914u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 3));
label_153918:
    // 0x153918: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x153918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_15391c:
    // 0x15391c: 0xa203004a  sb          $v1, 0x4A($s0)
    ctx->pc = 0x15391cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 3));
label_153920:
    // 0x153920: 0xa209004b  sb          $t1, 0x4B($s0)
    ctx->pc = 0x153920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 9));
label_153924:
    // 0x153924: 0xae08004c  sw          $t0, 0x4C($s0)
    ctx->pc = 0x153924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 8));
label_153928:
    // 0x153928: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x153928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_15392c:
    // 0x15392c: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x15392cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
label_153930:
    // 0x153930: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x153930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_153934:
    // 0x153934: 0xa2030061  sb          $v1, 0x61($s0)
    ctx->pc = 0x153934u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
label_153938:
    // 0x153938: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x153938u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_15393c:
    // 0x15393c: 0xa2030062  sb          $v1, 0x62($s0)
    ctx->pc = 0x15393cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 3));
label_153940:
    // 0x153940: 0xa2090063  sb          $t1, 0x63($s0)
    ctx->pc = 0x153940u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 99), (uint8_t)GPR_U32(ctx, 9));
label_153944:
    // 0x153944: 0xae080064  sw          $t0, 0x64($s0)
    ctx->pc = 0x153944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 8));
label_153948:
    // 0x153948: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x153948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_15394c:
    // 0x15394c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15394cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_153950:
    // 0x153950: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x153950u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_153954:
    // 0x153954: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x153954u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_153958:
    // 0x153958: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x153958u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15395c:
    // 0x15395c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15395cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_153960:
    // 0x153960: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x153960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_153964:
    // 0x153964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_153968:
    // 0x153968: 0x3e00008  jr          $ra
label_15396c:
    if (ctx->pc == 0x15396Cu) {
        ctx->pc = 0x15396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153968u;
        // 0x15396c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153970u;
        goto label_153970;
    }
    ctx->pc = 0x153968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153968u;
        // 0x15396c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153970u;
label_153970:
    // 0x153970: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x153970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_153974:
    // 0x153974: 0xaf848600  sw          $a0, -0x7A00($gp)
    ctx->pc = 0x153974u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936064), GPR_U32(ctx, 4));
label_153978:
    // 0x153978: 0xaf8385f0  sw          $v1, -0x7A10($gp)
    ctx->pc = 0x153978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936048), GPR_U32(ctx, 3));
label_15397c:
    // 0x15397c: 0x1272021  addu        $a0, $t1, $a3
    ctx->pc = 0x15397cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_153980:
    // 0x153980: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x153980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_153984:
    // 0x153984: 0xaf8585fc  sw          $a1, -0x7A04($gp)
    ctx->pc = 0x153984u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936060), GPR_U32(ctx, 5));
label_153988:
    // 0x153988: 0xaf8a85e0  sw          $t2, -0x7A20($gp)
    ctx->pc = 0x153988u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936032), GPR_U32(ctx, 10));
label_15398c:
    // 0x15398c: 0xaf8485ec  sw          $a0, -0x7A14($gp)
    ctx->pc = 0x15398cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936044), GPR_U32(ctx, 4));
label_153990:
    // 0x153990: 0xaf8385dc  sw          $v1, -0x7A24($gp)
    ctx->pc = 0x153990u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936028), GPR_U32(ctx, 3));
label_153994:
    // 0x153994: 0xaf8885f8  sw          $t0, -0x7A08($gp)
    ctx->pc = 0x153994u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936056), GPR_U32(ctx, 8));
label_153998:
    // 0x153998: 0xaf8885e8  sw          $t0, -0x7A18($gp)
    ctx->pc = 0x153998u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936040), GPR_U32(ctx, 8));
label_15399c:
    // 0x15399c: 0xaf8985f4  sw          $t1, -0x7A0C($gp)
    ctx->pc = 0x15399cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936052), GPR_U32(ctx, 9));
label_1539a0:
    // 0x1539a0: 0x3e00008  jr          $ra
label_1539a4:
    if (ctx->pc == 0x1539A4u) {
        ctx->pc = 0x1539A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1539A0u;
        // 0x1539a4: 0xaf8985e4  sw          $t1, -0x7A1C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936036), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1539A8u;
        goto label_1539a8;
    }
    ctx->pc = 0x1539A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1539A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1539A0u;
        // 0x1539a4: 0xaf8985e4  sw          $t1, -0x7A1C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936036), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1539A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1539A8u;
label_1539a8:
    // 0x1539a8: 0x0  nop
    ctx->pc = 0x1539a8u;
    // NOP
label_1539ac:
    // 0x1539ac: 0x0  nop
    ctx->pc = 0x1539acu;
    // NOP
label_1539b0:
    // 0x1539b0: 0xaf8485d8  sw          $a0, -0x7A28($gp)
    ctx->pc = 0x1539b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936024), GPR_U32(ctx, 4));
label_1539b4:
    // 0x1539b4: 0x3e00008  jr          $ra
label_1539b8:
    if (ctx->pc == 0x1539B8u) {
        ctx->pc = 0x1539B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1539B4u;
        // 0x1539b8: 0xaf8585d4  sw          $a1, -0x7A2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936020), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1539BCu;
        goto label_1539bc;
    }
    ctx->pc = 0x1539B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1539B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1539B4u;
        // 0x1539b8: 0xaf8585d4  sw          $a1, -0x7A2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936020), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1539B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1539BCu;
label_1539bc:
    // 0x1539bc: 0x0  nop
    ctx->pc = 0x1539bcu;
    // NOP
    ctx->pc = 0x1539c0u;
    return;
}
