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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x253120u: goto label_253120;
        case 0x253124u: goto label_253124;
        case 0x253128u: goto label_253128;
        case 0x25312cu: goto label_25312c;
        case 0x253130u: goto label_253130;
        case 0x253134u: goto label_253134;
        case 0x253138u: goto label_253138;
        case 0x25313cu: goto label_25313c;
        case 0x253140u: goto label_253140;
        case 0x253144u: goto label_253144;
        case 0x253148u: goto label_253148;
        case 0x25314cu: goto label_25314c;
        case 0x253150u: goto label_253150;
        case 0x253154u: goto label_253154;
        case 0x253158u: goto label_253158;
        case 0x25315cu: goto label_25315c;
        case 0x253160u: goto label_253160;
        case 0x253164u: goto label_253164;
        case 0x253168u: goto label_253168;
        case 0x25316cu: goto label_25316c;
        case 0x253170u: goto label_253170;
        case 0x253174u: goto label_253174;
        case 0x253178u: goto label_253178;
        case 0x25317cu: goto label_25317c;
        case 0x253180u: goto label_253180;
        case 0x253184u: goto label_253184;
        case 0x253188u: goto label_253188;
        case 0x25318cu: goto label_25318c;
        case 0x253190u: goto label_253190;
        case 0x253194u: goto label_253194;
        case 0x253198u: goto label_253198;
        case 0x25319cu: goto label_25319c;
        case 0x2531a0u: goto label_2531a0;
        case 0x2531a4u: goto label_2531a4;
        case 0x2531a8u: goto label_2531a8;
        case 0x2531acu: goto label_2531ac;
        case 0x2531b0u: goto label_2531b0;
        case 0x2531b4u: goto label_2531b4;
        case 0x2531b8u: goto label_2531b8;
        case 0x2531bcu: goto label_2531bc;
        case 0x2531c0u: goto label_2531c0;
        case 0x2531c4u: goto label_2531c4;
        case 0x2531c8u: goto label_2531c8;
        case 0x2531ccu: goto label_2531cc;
        case 0x2531d0u: goto label_2531d0;
        case 0x2531d4u: goto label_2531d4;
        case 0x2531d8u: goto label_2531d8;
        case 0x2531dcu: goto label_2531dc;
        case 0x2531e0u: goto label_2531e0;
        case 0x2531e4u: goto label_2531e4;
        case 0x2531e8u: goto label_2531e8;
        case 0x2531ecu: goto label_2531ec;
        case 0x2531f0u: goto label_2531f0;
        case 0x2531f4u: goto label_2531f4;
        case 0x2531f8u: goto label_2531f8;
        case 0x2531fcu: goto label_2531fc;
        case 0x253200u: goto label_253200;
        case 0x253204u: goto label_253204;
        case 0x253208u: goto label_253208;
        case 0x25320cu: goto label_25320c;
        case 0x253210u: goto label_253210;
        case 0x253214u: goto label_253214;
        case 0x253218u: goto label_253218;
        case 0x25321cu: goto label_25321c;
        case 0x253220u: goto label_253220;
        case 0x253224u: goto label_253224;
        case 0x253228u: goto label_253228;
        case 0x25322cu: goto label_25322c;
        case 0x253230u: goto label_253230;
        case 0x253234u: goto label_253234;
        case 0x253238u: goto label_253238;
        case 0x25323cu: goto label_25323c;
        case 0x253240u: goto label_253240;
        case 0x253244u: goto label_253244;
        case 0x253248u: goto label_253248;
        case 0x25324cu: goto label_25324c;
        case 0x253250u: goto label_253250;
        case 0x253254u: goto label_253254;
        case 0x253258u: goto label_253258;
        case 0x25325cu: goto label_25325c;
        case 0x253260u: goto label_253260;
        case 0x253264u: goto label_253264;
        case 0x253268u: goto label_253268;
        case 0x25326cu: goto label_25326c;
        case 0x253270u: goto label_253270;
        case 0x253274u: goto label_253274;
        case 0x253278u: goto label_253278;
        case 0x25327cu: goto label_25327c;
        case 0x253280u: goto label_253280;
        case 0x253284u: goto label_253284;
        case 0x253288u: goto label_253288;
        case 0x25328cu: goto label_25328c;
        case 0x253290u: goto label_253290;
        case 0x253294u: goto label_253294;
        case 0x253298u: goto label_253298;
        case 0x25329cu: goto label_25329c;
        case 0x2532a0u: goto label_2532a0;
        case 0x2532a4u: goto label_2532a4;
        case 0x2532a8u: goto label_2532a8;
        case 0x2532acu: goto label_2532ac;
        case 0x2532b0u: goto label_2532b0;
        case 0x2532b4u: goto label_2532b4;
        case 0x2532b8u: goto label_2532b8;
        case 0x2532bcu: goto label_2532bc;
        case 0x2532c0u: goto label_2532c0;
        case 0x2532c4u: goto label_2532c4;
        case 0x2532c8u: goto label_2532c8;
        case 0x2532ccu: goto label_2532cc;
        case 0x2532d0u: goto label_2532d0;
        case 0x2532d4u: goto label_2532d4;
        case 0x2532d8u: goto label_2532d8;
        case 0x2532dcu: goto label_2532dc;
        case 0x2532e0u: goto label_2532e0;
        case 0x2532e4u: goto label_2532e4;
        case 0x2532e8u: goto label_2532e8;
        case 0x2532ecu: goto label_2532ec;
        case 0x2532f0u: goto label_2532f0;
        case 0x2532f4u: goto label_2532f4;
        case 0x2532f8u: goto label_2532f8;
        case 0x2532fcu: goto label_2532fc;
        case 0x253300u: goto label_253300;
        case 0x253304u: goto label_253304;
        case 0x253308u: goto label_253308;
        case 0x25330cu: goto label_25330c;
        case 0x253310u: goto label_253310;
        case 0x253314u: goto label_253314;
        case 0x253318u: goto label_253318;
        case 0x25331cu: goto label_25331c;
        case 0x253320u: goto label_253320;
        case 0x253324u: goto label_253324;
        case 0x253328u: goto label_253328;
        case 0x25332cu: goto label_25332c;
        case 0x253330u: goto label_253330;
        case 0x253334u: goto label_253334;
        case 0x253338u: goto label_253338;
        case 0x25333cu: goto label_25333c;
        case 0x253340u: goto label_253340;
        case 0x253344u: goto label_253344;
        case 0x253348u: goto label_253348;
        case 0x25334cu: goto label_25334c;
        case 0x253350u: goto label_253350;
        case 0x253354u: goto label_253354;
        case 0x253358u: goto label_253358;
        case 0x25335cu: goto label_25335c;
        case 0x253360u: goto label_253360;
        case 0x253364u: goto label_253364;
        case 0x253368u: goto label_253368;
        case 0x25336cu: goto label_25336c;
        case 0x253370u: goto label_253370;
        case 0x253374u: goto label_253374;
        case 0x253378u: goto label_253378;
        case 0x25337cu: goto label_25337c;
        case 0x253380u: goto label_253380;
        case 0x253384u: goto label_253384;
        case 0x253388u: goto label_253388;
        case 0x25338cu: goto label_25338c;
        case 0x253390u: goto label_253390;
        case 0x253394u: goto label_253394;
        case 0x253398u: goto label_253398;
        case 0x25339cu: goto label_25339c;
        case 0x2533a0u: goto label_2533a0;
        case 0x2533a4u: goto label_2533a4;
        case 0x2533a8u: goto label_2533a8;
        case 0x2533acu: goto label_2533ac;
        case 0x2533b0u: goto label_2533b0;
        case 0x2533b4u: goto label_2533b4;
        case 0x2533b8u: goto label_2533b8;
        case 0x2533bcu: goto label_2533bc;
        case 0x2533c0u: goto label_2533c0;
        case 0x2533c4u: goto label_2533c4;
        case 0x2533c8u: goto label_2533c8;
        case 0x2533ccu: goto label_2533cc;
        case 0x2533d0u: goto label_2533d0;
        case 0x2533d4u: goto label_2533d4;
        case 0x2533d8u: goto label_2533d8;
        case 0x2533dcu: goto label_2533dc;
        case 0x2533e0u: goto label_2533e0;
        case 0x2533e4u: goto label_2533e4;
        case 0x2533e8u: goto label_2533e8;
        case 0x2533ecu: goto label_2533ec;
        case 0x2533f0u: goto label_2533f0;
        case 0x2533f4u: goto label_2533f4;
        case 0x2533f8u: goto label_2533f8;
        case 0x2533fcu: goto label_2533fc;
        case 0x253400u: goto label_253400;
        case 0x253404u: goto label_253404;
        case 0x253408u: goto label_253408;
        case 0x25340cu: goto label_25340c;
        case 0x253410u: goto label_253410;
        case 0x253414u: goto label_253414;
        case 0x253418u: goto label_253418;
        case 0x25341cu: goto label_25341c;
        case 0x253420u: goto label_253420;
        case 0x253424u: goto label_253424;
        case 0x253428u: goto label_253428;
        case 0x25342cu: goto label_25342c;
        case 0x253430u: goto label_253430;
        case 0x253434u: goto label_253434;
        case 0x253438u: goto label_253438;
        case 0x25343cu: goto label_25343c;
        case 0x253440u: goto label_253440;
        case 0x253444u: goto label_253444;
        case 0x253448u: goto label_253448;
        case 0x25344cu: goto label_25344c;
        case 0x253450u: goto label_253450;
        case 0x253454u: goto label_253454;
        case 0x253458u: goto label_253458;
        case 0x25345cu: goto label_25345c;
        case 0x253460u: goto label_253460;
        case 0x253464u: goto label_253464;
        case 0x253468u: goto label_253468;
        case 0x25346cu: goto label_25346c;
        case 0x253470u: goto label_253470;
        case 0x253474u: goto label_253474;
        case 0x253478u: goto label_253478;
        case 0x25347cu: goto label_25347c;
        case 0x253480u: goto label_253480;
        case 0x253484u: goto label_253484;
        case 0x253488u: goto label_253488;
        case 0x25348cu: goto label_25348c;
        case 0x253490u: goto label_253490;
        case 0x253494u: goto label_253494;
        case 0x253498u: goto label_253498;
        case 0x25349cu: goto label_25349c;
        case 0x2534a0u: goto label_2534a0;
        case 0x2534a4u: goto label_2534a4;
        case 0x2534a8u: goto label_2534a8;
        case 0x2534acu: goto label_2534ac;
        case 0x2534b0u: goto label_2534b0;
        case 0x2534b4u: goto label_2534b4;
        case 0x2534b8u: goto label_2534b8;
        case 0x2534bcu: goto label_2534bc;
        case 0x2534c0u: goto label_2534c0;
        case 0x2534c4u: goto label_2534c4;
        case 0x2534c8u: goto label_2534c8;
        case 0x2534ccu: goto label_2534cc;
        case 0x2534d0u: goto label_2534d0;
        case 0x2534d4u: goto label_2534d4;
        case 0x2534d8u: goto label_2534d8;
        case 0x2534dcu: goto label_2534dc;
        case 0x2534e0u: goto label_2534e0;
        case 0x2534e4u: goto label_2534e4;
        case 0x2534e8u: goto label_2534e8;
        case 0x2534ecu: goto label_2534ec;
        case 0x2534f0u: goto label_2534f0;
        case 0x2534f4u: goto label_2534f4;
        case 0x2534f8u: goto label_2534f8;
        case 0x2534fcu: goto label_2534fc;
        case 0x253500u: goto label_253500;
        case 0x253504u: goto label_253504;
        case 0x253508u: goto label_253508;
        case 0x25350cu: goto label_25350c;
        case 0x253510u: goto label_253510;
        case 0x253514u: goto label_253514;
        case 0x253518u: goto label_253518;
        case 0x25351cu: goto label_25351c;
        case 0x253520u: goto label_253520;
        case 0x253524u: goto label_253524;
        case 0x253528u: goto label_253528;
        case 0x25352cu: goto label_25352c;
        case 0x253530u: goto label_253530;
        case 0x253534u: goto label_253534;
        case 0x253538u: goto label_253538;
        case 0x25353cu: goto label_25353c;
        case 0x253540u: goto label_253540;
        case 0x253544u: goto label_253544;
        case 0x253548u: goto label_253548;
        case 0x25354cu: goto label_25354c;
        case 0x253550u: goto label_253550;
        case 0x253554u: goto label_253554;
        case 0x253558u: goto label_253558;
        case 0x25355cu: goto label_25355c;
        case 0x253560u: goto label_253560;
        case 0x253564u: goto label_253564;
        case 0x253568u: goto label_253568;
        case 0x25356cu: goto label_25356c;
        case 0x253570u: goto label_253570;
        case 0x253574u: goto label_253574;
        case 0x253578u: goto label_253578;
        case 0x25357cu: goto label_25357c;
        case 0x253580u: goto label_253580;
        case 0x253584u: goto label_253584;
        case 0x253588u: goto label_253588;
        case 0x25358cu: goto label_25358c;
        case 0x253590u: goto label_253590;
        case 0x253594u: goto label_253594;
        case 0x253598u: goto label_253598;
        case 0x25359cu: goto label_25359c;
        case 0x2535a0u: goto label_2535a0;
        case 0x2535a4u: goto label_2535a4;
        case 0x2535a8u: goto label_2535a8;
        case 0x2535acu: goto label_2535ac;
        case 0x2535b0u: goto label_2535b0;
        case 0x2535b4u: goto label_2535b4;
        case 0x2535b8u: goto label_2535b8;
        case 0x2535bcu: goto label_2535bc;
        case 0x2535c0u: goto label_2535c0;
        case 0x2535c4u: goto label_2535c4;
        case 0x2535c8u: goto label_2535c8;
        case 0x2535ccu: goto label_2535cc;
        case 0x2535d0u: goto label_2535d0;
        case 0x2535d4u: goto label_2535d4;
        case 0x2535d8u: goto label_2535d8;
        case 0x2535dcu: goto label_2535dc;
        case 0x2535e0u: goto label_2535e0;
        case 0x2535e4u: goto label_2535e4;
        case 0x2535e8u: goto label_2535e8;
        case 0x2535ecu: goto label_2535ec;
        case 0x2535f0u: goto label_2535f0;
        case 0x2535f4u: goto label_2535f4;
        case 0x2535f8u: goto label_2535f8;
        case 0x2535fcu: goto label_2535fc;
        case 0x253600u: goto label_253600;
        case 0x253604u: goto label_253604;
        case 0x253608u: goto label_253608;
        case 0x25360cu: goto label_25360c;
        case 0x253610u: goto label_253610;
        case 0x253614u: goto label_253614;
        case 0x253618u: goto label_253618;
        case 0x25361cu: goto label_25361c;
        case 0x253620u: goto label_253620;
        case 0x253624u: goto label_253624;
        case 0x253628u: goto label_253628;
        case 0x25362cu: goto label_25362c;
        case 0x253630u: goto label_253630;
        case 0x253634u: goto label_253634;
        case 0x253638u: goto label_253638;
        case 0x25363cu: goto label_25363c;
        case 0x253640u: goto label_253640;
        case 0x253644u: goto label_253644;
        case 0x253648u: goto label_253648;
        case 0x25364cu: goto label_25364c;
        case 0x253650u: goto label_253650;
        case 0x253654u: goto label_253654;
        case 0x253658u: goto label_253658;
        case 0x25365cu: goto label_25365c;
        case 0x253660u: goto label_253660;
        case 0x253664u: goto label_253664;
        case 0x253668u: goto label_253668;
        case 0x25366cu: goto label_25366c;
        case 0x253670u: goto label_253670;
        case 0x253674u: goto label_253674;
        case 0x253678u: goto label_253678;
        case 0x25367cu: goto label_25367c;
        case 0x253680u: goto label_253680;
        case 0x253684u: goto label_253684;
        case 0x253688u: goto label_253688;
        case 0x25368cu: goto label_25368c;
        case 0x253690u: goto label_253690;
        case 0x253694u: goto label_253694;
        case 0x253698u: goto label_253698;
        case 0x25369cu: goto label_25369c;
        case 0x2536a0u: goto label_2536a0;
        case 0x2536a4u: goto label_2536a4;
        case 0x2536a8u: goto label_2536a8;
        case 0x2536acu: goto label_2536ac;
        case 0x2536b0u: goto label_2536b0;
        case 0x2536b4u: goto label_2536b4;
        case 0x2536b8u: goto label_2536b8;
        case 0x2536bcu: goto label_2536bc;
        case 0x2536c0u: goto label_2536c0;
        case 0x2536c4u: goto label_2536c4;
        case 0x2536c8u: goto label_2536c8;
        case 0x2536ccu: goto label_2536cc;
        case 0x2536d0u: goto label_2536d0;
        case 0x2536d4u: goto label_2536d4;
        case 0x2536d8u: goto label_2536d8;
        case 0x2536dcu: goto label_2536dc;
        case 0x2536e0u: goto label_2536e0;
        case 0x2536e4u: goto label_2536e4;
        case 0x2536e8u: goto label_2536e8;
        case 0x2536ecu: goto label_2536ec;
        case 0x2536f0u: goto label_2536f0;
        case 0x2536f4u: goto label_2536f4;
        case 0x2536f8u: goto label_2536f8;
        case 0x2536fcu: goto label_2536fc;
        case 0x253700u: goto label_253700;
        case 0x253704u: goto label_253704;
        case 0x253708u: goto label_253708;
        case 0x25370cu: goto label_25370c;
        case 0x253710u: goto label_253710;
        case 0x253714u: goto label_253714;
        case 0x253718u: goto label_253718;
        case 0x25371cu: goto label_25371c;
        case 0x253720u: goto label_253720;
        case 0x253724u: goto label_253724;
        case 0x253728u: goto label_253728;
        case 0x25372cu: goto label_25372c;
        case 0x253730u: goto label_253730;
        case 0x253734u: goto label_253734;
        case 0x253738u: goto label_253738;
        case 0x25373cu: goto label_25373c;
        case 0x253740u: goto label_253740;
        case 0x253744u: goto label_253744;
        case 0x253748u: goto label_253748;
        case 0x25374cu: goto label_25374c;
        case 0x253750u: goto label_253750;
        case 0x253754u: goto label_253754;
        case 0x253758u: goto label_253758;
        case 0x25375cu: goto label_25375c;
        case 0x253760u: goto label_253760;
        case 0x253764u: goto label_253764;
        case 0x253768u: goto label_253768;
        case 0x25376cu: goto label_25376c;
        case 0x253770u: goto label_253770;
        case 0x253774u: goto label_253774;
        case 0x253778u: goto label_253778;
        case 0x25377cu: goto label_25377c;
        case 0x253780u: goto label_253780;
        case 0x253784u: goto label_253784;
        case 0x253788u: goto label_253788;
        case 0x25378cu: goto label_25378c;
        case 0x253790u: goto label_253790;
        case 0x253794u: goto label_253794;
        case 0x253798u: goto label_253798;
        case 0x25379cu: goto label_25379c;
        case 0x2537a0u: goto label_2537a0;
        case 0x2537a4u: goto label_2537a4;
        case 0x2537a8u: goto label_2537a8;
        case 0x2537acu: goto label_2537ac;
        case 0x2537b0u: goto label_2537b0;
        case 0x2537b4u: goto label_2537b4;
        case 0x2537b8u: goto label_2537b8;
        case 0x2537bcu: goto label_2537bc;
        case 0x2537c0u: goto label_2537c0;
        case 0x2537c4u: goto label_2537c4;
        case 0x2537c8u: goto label_2537c8;
        case 0x2537ccu: goto label_2537cc;
        case 0x2537d0u: goto label_2537d0;
        case 0x2537d4u: goto label_2537d4;
        case 0x2537d8u: goto label_2537d8;
        case 0x2537dcu: goto label_2537dc;
        case 0x2537e0u: goto label_2537e0;
        case 0x2537e4u: goto label_2537e4;
        case 0x2537e8u: goto label_2537e8;
        case 0x2537ecu: goto label_2537ec;
        case 0x2537f0u: goto label_2537f0;
        case 0x2537f4u: goto label_2537f4;
        case 0x2537f8u: goto label_2537f8;
        case 0x2537fcu: goto label_2537fc;
        case 0x253800u: goto label_253800;
        case 0x253804u: goto label_253804;
        case 0x253808u: goto label_253808;
        case 0x25380cu: goto label_25380c;
        case 0x253810u: goto label_253810;
        case 0x253814u: goto label_253814;
        case 0x253818u: goto label_253818;
        case 0x25381cu: goto label_25381c;
        case 0x253820u: goto label_253820;
        case 0x253824u: goto label_253824;
        case 0x253828u: goto label_253828;
        case 0x25382cu: goto label_25382c;
        case 0x253830u: goto label_253830;
        case 0x253834u: goto label_253834;
        case 0x253838u: goto label_253838;
        case 0x25383cu: goto label_25383c;
        case 0x253840u: goto label_253840;
        case 0x253844u: goto label_253844;
        case 0x253848u: goto label_253848;
        case 0x25384cu: goto label_25384c;
        case 0x253850u: goto label_253850;
        case 0x253854u: goto label_253854;
        case 0x253858u: goto label_253858;
        case 0x25385cu: goto label_25385c;
        case 0x253860u: goto label_253860;
        case 0x253864u: goto label_253864;
        case 0x253868u: goto label_253868;
        case 0x25386cu: goto label_25386c;
        case 0x253870u: goto label_253870;
        case 0x253874u: goto label_253874;
        case 0x253878u: goto label_253878;
        case 0x25387cu: goto label_25387c;
        case 0x253880u: goto label_253880;
        case 0x253884u: goto label_253884;
        case 0x253888u: goto label_253888;
        case 0x25388cu: goto label_25388c;
        case 0x253890u: goto label_253890;
        case 0x253894u: goto label_253894;
        case 0x253898u: goto label_253898;
        case 0x25389cu: goto label_25389c;
        case 0x2538a0u: goto label_2538a0;
        case 0x2538a4u: goto label_2538a4;
        case 0x2538a8u: goto label_2538a8;
        case 0x2538acu: goto label_2538ac;
        case 0x2538b0u: goto label_2538b0;
        case 0x2538b4u: goto label_2538b4;
        case 0x2538b8u: goto label_2538b8;
        case 0x2538bcu: goto label_2538bc;
        case 0x2538c0u: goto label_2538c0;
        case 0x2538c4u: goto label_2538c4;
        case 0x2538c8u: goto label_2538c8;
        case 0x2538ccu: goto label_2538cc;
        case 0x2538d0u: goto label_2538d0;
        case 0x2538d4u: goto label_2538d4;
        case 0x2538d8u: goto label_2538d8;
        case 0x2538dcu: goto label_2538dc;
        case 0x2538e0u: goto label_2538e0;
        case 0x2538e4u: goto label_2538e4;
        case 0x2538e8u: goto label_2538e8;
        case 0x2538ecu: goto label_2538ec;
        default: return;
    }

label_253120:
    // 0x253120: 0x2c7e60  .word       0x002C7E60                   # add         $t7, $at, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253120u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_253124:
    // 0x253124: 0x2c7e70  tge         $at, $t4, 505
    ctx->pc = 0x253124u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253128:
    // 0x253128: 0x2c7e80  .word       0x002C7E80                   # sll         $t7, $t4, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253128u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 26));
label_25312c:
    // 0x25312c: 0x2c7e90  .word       0x002C7E90                   # mfhi        $t7 # 002C0680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25312cu;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_253130:
    // 0x253130: 0x2c7ea0  .word       0x002C7EA0                   # add         $t7, $at, $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253130u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_253134:
    // 0x253134: 0x2c7eb0  tge         $at, $t4, 506
    ctx->pc = 0x253134u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253138:
    // 0x253138: 0x2c7ec0  .word       0x002C7EC0                   # sll         $t7, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253138u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 27));
label_25313c:
    // 0x25313c: 0x2c7ec8  .word       0x002C7EC8                   # jr          $at # 000C7EC0 <InstrIdType: CPU_SPECIAL>
label_253140:
    if (ctx->pc == 0x253140u) {
        ctx->pc = 0x253140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25313Cu;
        // 0x253140: 0x2c7ed8  .word       0x002C7ED8                   # mult        $t7, $at, $t4 # 000006C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253144u;
        goto label_253144;
    }
    ctx->pc = 0x25313Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x253140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25313Cu;
        // 0x253140: 0x2c7ed8  .word       0x002C7ED8                   # mult        $t7, $at, $t4 # 000006C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25313Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253144u;
label_253144:
    // 0x253144: 0x2c7ee8  .word       0x002C7EE8                   # mfsa        $t7 # 002C06C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x253144u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_253148:
    // 0x253148: 0x2c7ef8  .word       0x002C7EF8                   # dsll        $t7, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253148u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) << 27);
label_25314c:
    // 0x25314c: 0x2c7f08  .word       0x002C7F08                   # jr          $at # 000C7F00 <InstrIdType: CPU_SPECIAL>
label_253150:
    if (ctx->pc == 0x253150u) {
        ctx->pc = 0x253150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25314Cu;
        // 0x253150: 0x2c7f18  .word       0x002C7F18                   # mult        $t7, $at, $t4 # 00000700 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253154u;
        goto label_253154;
    }
    ctx->pc = 0x25314Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x253150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25314Cu;
        // 0x253150: 0x2c7f18  .word       0x002C7F18                   # mult        $t7, $at, $t4 # 00000700 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25314Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253154u;
label_253154:
    // 0x253154: 0x2c7f20  .word       0x002C7F20                   # add         $t7, $at, $t4 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253154u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_253158:
    // 0x253158: 0x2c7f30  tge         $at, $t4, 508
    ctx->pc = 0x253158u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_25315c:
    // 0x25315c: 0x2c7f40  .word       0x002C7F40                   # sll         $t7, $t4, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25315cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 29));
label_253160:
    // 0x253160: 0x2c7f48  .word       0x002C7F48                   # jr          $at # 000C7F40 <InstrIdType: CPU_SPECIAL>
label_253164:
    if (ctx->pc == 0x253164u) {
        ctx->pc = 0x253164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253160u;
        // 0x253164: 0x2c7f58  .word       0x002C7F58                   # mult        $t7, $at, $t4 # 00000740 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253168u;
        goto label_253168;
    }
    ctx->pc = 0x253160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x253164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253160u;
        // 0x253164: 0x2c7f58  .word       0x002C7F58                   # mult        $t7, $at, $t4 # 00000740 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253160u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253168u;
label_253168:
    // 0x253168: 0x2c7f68  .word       0x002C7F68                   # mfsa        $t7 # 002C0740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x253168u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_25316c:
    // 0x25316c: 0x2c7f80  .word       0x002C7F80                   # sll         $t7, $t4, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25316cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 30));
label_253170:
    // 0x253170: 0x2c7f90  .word       0x002C7F90                   # mfhi        $t7 # 002C0780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253170u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_253174:
    // 0x253174: 0x2c7fa0  .word       0x002C7FA0                   # add         $t7, $at, $t4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253174u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_253178:
    // 0x253178: 0x2c7fb0  tge         $at, $t4, 510
    ctx->pc = 0x253178u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_25317c:
    // 0x25317c: 0x2c7fc0  .word       0x002C7FC0                   # sll         $t7, $t4, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25317cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 31));
label_253180:
    // 0x253180: 0x2c7fd0  .word       0x002C7FD0                   # mfhi        $t7 # 002C07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253180u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_253184:
    // 0x253184: 0x2c7fe0  .word       0x002C7FE0                   # add         $t7, $at, $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253184u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_253188:
    // 0x253188: 0x2c7ff0  tge         $at, $t4, 511
    ctx->pc = 0x253188u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_25318c:
    // 0x25318c: 0x2c8000  .word       0x002C8000                   # sll         $s0, $t4, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25318cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 0));
label_253190:
    // 0x253190: 0x2c8010  .word       0x002C8010                   # mfhi        $s0 # 002C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253190u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_253194:
    // 0x253194: 0x2c8020  add         $s0, $at, $t4
    ctx->pc = 0x253194u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_253198:
    // 0x253198: 0x2c8030  tge         $at, $t4, 512
    ctx->pc = 0x253198u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_25319c:
    // 0x25319c: 0x2c8040  .word       0x002C8040                   # sll         $s0, $t4, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25319cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_2531a0:
    // 0x2531a0: 0x2c8050  .word       0x002C8050                   # mfhi        $s0 # 002C0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2531a0u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2531a4:
    // 0x2531a4: 0x2c8060  .word       0x002C8060                   # add         $s0, $at, $t4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2531a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2531a8:
    // 0x2531a8: 0x2c8070  tge         $at, $t4, 513
    ctx->pc = 0x2531a8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2531ac:
    // 0x2531ac: 0x2c8078  .word       0x002C8078                   # dsll        $s0, $t4, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2531acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) << 1);
label_2531b0:
    // 0x2531b0: 0x2c8088  .word       0x002C8088                   # jr          $at # 000C8080 <InstrIdType: CPU_SPECIAL>
label_2531b4:
    if (ctx->pc == 0x2531B4u) {
        ctx->pc = 0x2531B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531B0u;
        // 0x2531b4: 0x2c8098  .word       0x002C8098                   # mult        $s0, $at, $t4 # 00000080 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2531B8u;
        goto label_2531b8;
    }
    ctx->pc = 0x2531B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2531B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531B0u;
        // 0x2531b4: 0x2c8098  .word       0x002C8098                   # mult        $s0, $at, $t4 # 00000080 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2531B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2531B8u;
label_2531b8:
    // 0x2531b8: 0x2c80a8  .word       0x002C80A8                   # mfsa        $s0 # 002C0080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2531b8u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_2531bc:
    // 0x2531bc: 0x2c80b8  .word       0x002C80B8                   # dsll        $s0, $t4, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2531bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) << 2);
label_2531c0:
    // 0x2531c0: 0x2c80c8  .word       0x002C80C8                   # jr          $at # 000C80C0 <InstrIdType: CPU_SPECIAL>
label_2531c4:
    if (ctx->pc == 0x2531C4u) {
        ctx->pc = 0x2531C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531C0u;
        // 0x2531c4: 0x2c80d8  .word       0x002C80D8                   # mult        $s0, $at, $t4 # 000000C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2531C8u;
        goto label_2531c8;
    }
    ctx->pc = 0x2531C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2531C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531C0u;
        // 0x2531c4: 0x2c80d8  .word       0x002C80D8                   # mult        $s0, $at, $t4 # 000000C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2531C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2531C8u;
label_2531c8:
    // 0x2531c8: 0x2c80e8  .word       0x002C80E8                   # mfsa        $s0 # 002C00C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2531c8u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_2531cc:
    // 0x2531cc: 0x2c80f8  .word       0x002C80F8                   # dsll        $s0, $t4, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2531ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) << 3);
label_2531d0:
    // 0x2531d0: 0x2c8108  .word       0x002C8108                   # jr          $at # 000C8100 <InstrIdType: CPU_SPECIAL>
label_2531d4:
    if (ctx->pc == 0x2531D4u) {
        ctx->pc = 0x2531D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531D0u;
        // 0x2531d4: 0x2c8118  .word       0x002C8118                   # mult        $s0, $at, $t4 # 00000100 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2531D8u;
        goto label_2531d8;
    }
    ctx->pc = 0x2531D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2531D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531D0u;
        // 0x2531d4: 0x2c8118  .word       0x002C8118                   # mult        $s0, $at, $t4 # 00000100 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2531D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2531D8u;
label_2531d8:
    // 0x2531d8: 0x2c8120  .word       0x002C8120                   # add         $s0, $at, $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2531d8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2531dc:
    // 0x2531dc: 0x2c8128  .word       0x002C8128                   # mfsa        $s0 # 002C0100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2531dcu;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_2531e0:
    // 0x2531e0: 0x2c8140  .word       0x002C8140                   # sll         $s0, $t4, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2531e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_2531e4:
    // 0x2531e4: 0x2c8150  .word       0x002C8150                   # mfhi        $s0 # 002C0140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2531e4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2531e8:
    // 0x2531e8: 0x2c8160  .word       0x002C8160                   # add         $s0, $at, $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2531e8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2531ec:
    // 0x2531ec: 0x2c8178  .word       0x002C8178                   # dsll        $s0, $t4, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2531ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) << 5);
label_2531f0:
    // 0x2531f0: 0x2c8188  .word       0x002C8188                   # jr          $at # 000C8180 <InstrIdType: CPU_SPECIAL>
label_2531f4:
    if (ctx->pc == 0x2531F4u) {
        ctx->pc = 0x2531F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531F0u;
        // 0x2531f4: 0x2c8198  .word       0x002C8198                   # mult        $s0, $at, $t4 # 00000180 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2531F8u;
        goto label_2531f8;
    }
    ctx->pc = 0x2531F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2531F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531F0u;
        // 0x2531f4: 0x2c8198  .word       0x002C8198                   # mult        $s0, $at, $t4 # 00000180 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2531F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2531F8u;
label_2531f8:
    // 0x2531f8: 0x2c81a8  .word       0x002C81A8                   # mfsa        $s0 # 002C0180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2531f8u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_2531fc:
    // 0x2531fc: 0x2c81b8  .word       0x002C81B8                   # dsll        $s0, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2531fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) << 6);
label_253200:
    // 0x253200: 0x2c81c8  .word       0x002C81C8                   # jr          $at # 000C81C0 <InstrIdType: CPU_SPECIAL>
label_253204:
    if (ctx->pc == 0x253204u) {
        ctx->pc = 0x253204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253200u;
        // 0x253204: 0x2c81d0  .word       0x002C81D0                   # mfhi        $s0 # 002C01C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 16, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253208u;
        goto label_253208;
    }
    ctx->pc = 0x253200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x253204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253200u;
        // 0x253204: 0x2c81d0  .word       0x002C81D0                   # mfhi        $s0 # 002C01C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 16, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253200u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253208u;
label_253208:
    // 0x253208: 0x2c81e0  .word       0x002C81E0                   # add         $s0, $at, $t4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253208u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25320c:
    // 0x25320c: 0x2c81f0  tge         $at, $t4, 519
    ctx->pc = 0x25320cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253210:
    // 0x253210: 0x2c8200  .word       0x002C8200                   # sll         $s0, $t4, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253210u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
label_253214:
    // 0x253214: 0x2c8210  .word       0x002C8210                   # mfhi        $s0 # 002C0200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253214u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_253218:
    // 0x253218: 0x2c8220  .word       0x002C8220                   # add         $s0, $at, $t4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253218u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25321c:
    // 0x25321c: 0x2c8230  tge         $at, $t4, 520
    ctx->pc = 0x25321cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253220:
    // 0x253220: 0x2c8248  .word       0x002C8248                   # jr          $at # 000C8240 <InstrIdType: CPU_SPECIAL>
label_253224:
    if (ctx->pc == 0x253224u) {
        ctx->pc = 0x253224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253220u;
        // 0x253224: 0x2c8258  .word       0x002C8258                   # mult        $s0, $at, $t4 # 00000240 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253228u;
        goto label_253228;
    }
    ctx->pc = 0x253220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x253224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253220u;
        // 0x253224: 0x2c8258  .word       0x002C8258                   # mult        $s0, $at, $t4 # 00000240 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253220u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253228u;
label_253228:
    // 0x253228: 0x2c8268  .word       0x002C8268                   # mfsa        $s0 # 002C0240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x253228u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_25322c:
    // 0x25322c: 0x2c8278  .word       0x002C8278                   # dsll        $s0, $t4, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25322cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) << 9);
label_253230:
    // 0x253230: 0x2c8288  .word       0x002C8288                   # jr          $at # 000C8280 <InstrIdType: CPU_SPECIAL>
label_253234:
    if (ctx->pc == 0x253234u) {
        ctx->pc = 0x253234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253230u;
        // 0x253234: 0x2c8298  .word       0x002C8298                   # mult        $s0, $at, $t4 # 00000280 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253238u;
        goto label_253238;
    }
    ctx->pc = 0x253230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x253234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253230u;
        // 0x253234: 0x2c8298  .word       0x002C8298                   # mult        $s0, $at, $t4 # 00000280 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253230u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253238u;
label_253238:
    // 0x253238: 0x2c82a8  .word       0x002C82A8                   # mfsa        $s0 # 002C0280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x253238u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_25323c:
    // 0x25323c: 0x2c82b8  .word       0x002C82B8                   # dsll        $s0, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25323cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) << 10);
label_253240:
    // 0x253240: 0x2c82c8  .word       0x002C82C8                   # jr          $at # 000C82C0 <InstrIdType: CPU_SPECIAL>
label_253244:
    if (ctx->pc == 0x253244u) {
        ctx->pc = 0x253244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253240u;
        // 0x253244: 0x2c82d8  .word       0x002C82D8                   # mult        $s0, $at, $t4 # 000002C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253248u;
        goto label_253248;
    }
    ctx->pc = 0x253240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x253244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253240u;
        // 0x253244: 0x2c82d8  .word       0x002C82D8                   # mult        $s0, $at, $t4 # 000002C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253240u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253248u;
label_253248:
    // 0x253248: 0x2c82e8  .word       0x002C82E8                   # mfsa        $s0 # 002C02C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x253248u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_25324c:
    // 0x25324c: 0x2c82f8  .word       0x002C82F8                   # dsll        $s0, $t4, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25324cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) << 11);
label_253250:
    // 0x253250: 0x2c8300  .word       0x002C8300                   # sll         $s0, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253250u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 12));
label_253254:
    // 0x253254: 0x2c8310  .word       0x002C8310                   # mfhi        $s0 # 002C0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253254u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_253258:
    // 0x253258: 0x2c8320  .word       0x002C8320                   # add         $s0, $at, $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253258u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25325c:
    // 0x25325c: 0x2c8330  tge         $at, $t4, 524
    ctx->pc = 0x25325cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253260:
    // 0x253260: 0x2c8340  .word       0x002C8340                   # sll         $s0, $t4, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253260u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 13));
label_253264:
    // 0x253264: 0x2c8350  .word       0x002C8350                   # mfhi        $s0 # 002C0340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253264u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_253268:
    // 0x253268: 0x2c8360  .word       0x002C8360                   # add         $s0, $at, $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253268u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25326c:
    // 0x25326c: 0x2c8370  tge         $at, $t4, 525
    ctx->pc = 0x25326cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253270:
    // 0x253270: 0x2c8380  .word       0x002C8380                   # sll         $s0, $t4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253270u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 14));
label_253274:
    // 0x253274: 0x2c8390  .word       0x002C8390                   # mfhi        $s0 # 002C0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253274u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_253278:
    // 0x253278: 0x2c83a0  .word       0x002C83A0                   # add         $s0, $at, $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253278u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25327c:
    // 0x25327c: 0x2c83b0  tge         $at, $t4, 526
    ctx->pc = 0x25327cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253280:
    // 0x253280: 0x2c83c0  .word       0x002C83C0                   # sll         $s0, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253280u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 15));
label_253284:
    // 0x253284: 0x2c83d0  .word       0x002C83D0                   # mfhi        $s0 # 002C03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253284u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_253288:
    // 0x253288: 0x2c83e0  .word       0x002C83E0                   # add         $s0, $at, $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253288u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25328c:
    // 0x25328c: 0x2c83f0  tge         $at, $t4, 527
    ctx->pc = 0x25328cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253290:
    // 0x253290: 0x2c8400  .word       0x002C8400                   # sll         $s0, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253290u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_253294:
    // 0x253294: 0x2c8410  .word       0x002C8410                   # mfhi        $s0 # 002C0400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253294u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_253298:
    // 0x253298: 0x2c8420  .word       0x002C8420                   # add         $s0, $at, $t4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253298u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25329c:
    // 0x25329c: 0x2c8430  tge         $at, $t4, 528
    ctx->pc = 0x25329cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2532a0:
    // 0x2532a0: 0x2c8440  .word       0x002C8440                   # sll         $s0, $t4, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2532a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 17));
label_2532a4:
    // 0x2532a4: 0x2c8450  .word       0x002C8450                   # mfhi        $s0 # 002C0440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2532a4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2532a8:
    // 0x2532a8: 0x2c8460  .word       0x002C8460                   # add         $s0, $at, $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2532a8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2532ac:
    // 0x2532ac: 0x2c8470  tge         $at, $t4, 529
    ctx->pc = 0x2532acu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2532b0:
    // 0x2532b0: 0x2c8480  .word       0x002C8480                   # sll         $s0, $t4, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2532b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 18));
label_2532b4:
    // 0x2532b4: 0x2c8490  .word       0x002C8490                   # mfhi        $s0 # 002C0480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2532b4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2532b8:
    // 0x2532b8: 0x2c84a0  .word       0x002C84A0                   # add         $s0, $at, $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2532b8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2532bc:
    // 0x2532bc: 0x2c84b0  tge         $at, $t4, 530
    ctx->pc = 0x2532bcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2532c0:
    // 0x2532c0: 0x2c84c0  .word       0x002C84C0                   # sll         $s0, $t4, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2532c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 19));
label_2532c4:
    // 0x2532c4: 0x2c84d0  .word       0x002C84D0                   # mfhi        $s0 # 002C04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2532c4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2532c8:
    // 0x2532c8: 0x2c84e0  .word       0x002C84E0                   # add         $s0, $at, $t4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2532c8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2532cc:
    // 0x2532cc: 0x2c84f0  tge         $at, $t4, 531
    ctx->pc = 0x2532ccu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2532d0:
    // 0x2532d0: 0x2c8500  .word       0x002C8500                   # sll         $s0, $t4, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2532d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 20));
label_2532d4:
    // 0x2532d4: 0x2c8510  .word       0x002C8510                   # mfhi        $s0 # 002C0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2532d4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2532d8:
    // 0x2532d8: 0x2c8520  .word       0x002C8520                   # add         $s0, $at, $t4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2532d8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2532dc:
    // 0x2532dc: 0x2c8530  tge         $at, $t4, 532
    ctx->pc = 0x2532dcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2532e0:
    // 0x2532e0: 0x2c8540  .word       0x002C8540                   # sll         $s0, $t4, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2532e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 21));
label_2532e4:
    // 0x2532e4: 0x2c8550  .word       0x002C8550                   # mfhi        $s0 # 002C0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2532e4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2532e8:
    // 0x2532e8: 0x2c8560  .word       0x002C8560                   # add         $s0, $at, $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2532e8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2532ec:
    // 0x2532ec: 0x2c8570  tge         $at, $t4, 533
    ctx->pc = 0x2532ecu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2532f0:
    // 0x2532f0: 0x2c8588  .word       0x002C8588                   # jr          $at # 000C8580 <InstrIdType: CPU_SPECIAL>
label_2532f4:
    if (ctx->pc == 0x2532F4u) {
        ctx->pc = 0x2532F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2532F0u;
        // 0x2532f4: 0x2c8598  .word       0x002C8598                   # mult        $s0, $at, $t4 # 00000580 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2532F8u;
        goto label_2532f8;
    }
    ctx->pc = 0x2532F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2532F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2532F0u;
        // 0x2532f4: 0x2c8598  .word       0x002C8598                   # mult        $s0, $at, $t4 # 00000580 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2532F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2532F8u;
label_2532f8:
    // 0x2532f8: 0x2c85a8  .word       0x002C85A8                   # mfsa        $s0 # 002C0580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2532f8u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_2532fc:
    // 0x2532fc: 0x2c85b8  .word       0x002C85B8                   # dsll        $s0, $t4, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2532fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) << 22);
label_253300:
    // 0x253300: 0x2c85d0  .word       0x002C85D0                   # mfhi        $s0 # 002C05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253300u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_253304:
    // 0x253304: 0x2c85e0  .word       0x002C85E0                   # add         $s0, $at, $t4 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253304u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_253308:
    // 0x253308: 0x2c85f0  tge         $at, $t4, 535
    ctx->pc = 0x253308u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_25330c:
    // 0x25330c: 0x2c8600  .word       0x002C8600                   # sll         $s0, $t4, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25330cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_253310:
    // 0x253310: 0x2c8610  .word       0x002C8610                   # mfhi        $s0 # 002C0600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253310u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_253314:
    // 0x253314: 0x2c8620  .word       0x002C8620                   # add         $s0, $at, $t4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253314u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_253318:
    // 0x253318: 0x2c8630  tge         $at, $t4, 536
    ctx->pc = 0x253318u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_25331c:
    // 0x25331c: 0x2c8640  .word       0x002C8640                   # sll         $s0, $t4, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25331cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_253320:
    // 0x253320: 0x2c8650  .word       0x002C8650                   # mfhi        $s0 # 002C0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253320u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_253324:
    // 0x253324: 0x2c8660  .word       0x002C8660                   # add         $s0, $at, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253324u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_253328:
    // 0x253328: 0x2c8670  tge         $at, $t4, 537
    ctx->pc = 0x253328u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_25332c:
    // 0x25332c: 0x0  nop
    ctx->pc = 0x25332cu;
    // NOP
label_253330:
    // 0x253330: 0x2c7c18  .word       0x002C7C18                   # mult        $t7, $at, $t4 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x253330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_253334:
    // 0x253334: 0x2c7c48  .word       0x002C7C48                   # jr          $at # 000C7C40 <InstrIdType: CPU_SPECIAL>
label_253338:
    if (ctx->pc == 0x253338u) {
        ctx->pc = 0x253338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253334u;
        // 0x253338: 0x2c7f30  tge         $at, $t4, 508 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25333Cu;
        goto label_25333c;
    }
    ctx->pc = 0x253334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x253338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253334u;
        // 0x253338: 0x2c7f30  tge         $at, $t4, 508 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253334u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25333Cu;
label_25333c:
    // 0x25333c: 0x2c7c78  .word       0x002C7C78                   # dsll        $t7, $t4, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25333cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) << 17);
label_253340:
    // 0x253340: 0x2c7ed8  .word       0x002C7ED8                   # mult        $t7, $at, $t4 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x253340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_253344:
    // 0x253344: 0x2c8680  .word       0x002C8680                   # sll         $s0, $t4, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253344u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 26));
label_253348:
    // 0x253348: 0x2c8690  .word       0x002C8690                   # mfhi        $s0 # 002C0680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253348u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25334c:
    // 0x25334c: 0x2c86a0  .word       0x002C86A0                   # add         $s0, $at, $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25334cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_253350:
    // 0x253350: 0x2c86b0  tge         $at, $t4, 538
    ctx->pc = 0x253350u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253354:
    // 0x253354: 0x2c86c0  .word       0x002C86C0                   # sll         $s0, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253354u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 27));
label_253358:
    // 0x253358: 0x2c86d0  .word       0x002C86D0                   # mfhi        $s0 # 002C06C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253358u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25335c:
    // 0x25335c: 0x2c86e0  .word       0x002C86E0                   # add         $s0, $at, $t4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25335cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_253360:
    // 0x253360: 0x2c86f0  tge         $at, $t4, 539
    ctx->pc = 0x253360u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253364:
    // 0x253364: 0x2c8700  .word       0x002C8700                   # sll         $s0, $t4, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253364u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 28));
label_253368:
    // 0x253368: 0x2c8710  .word       0x002C8710                   # mfhi        $s0 # 002C0700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253368u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25336c:
    // 0x25336c: 0x0  nop
    ctx->pc = 0x25336cu;
    // NOP
label_253370:
    // 0x253370: 0x2c8720  .word       0x002C8720                   # add         $s0, $at, $t4 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253370u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_253374:
    // 0x253374: 0x2c7c78  .word       0x002C7C78                   # dsll        $t7, $t4, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253374u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) << 17);
label_253378:
    // 0x253378: 0x2c8728  .word       0x002C8728                   # mfsa        $s0 # 002C0700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x253378u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_25337c:
    // 0x25337c: 0x2c8730  tge         $at, $t4, 540
    ctx->pc = 0x25337cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253380:
    // 0x253380: 0x2c6b48  .word       0x002C6B48                   # jr          $at # 000C6B40 <InstrIdType: CPU_SPECIAL>
label_253384:
    if (ctx->pc == 0x253384u) {
        ctx->pc = 0x253388u;
        goto label_253388;
    }
    ctx->pc = 0x253380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253380u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253388u;
label_253388:
    // 0x253388: 0x0  nop
    ctx->pc = 0x253388u;
    // NOP
label_25338c:
    // 0x25338c: 0x0  nop
    ctx->pc = 0x25338cu;
    // NOP
label_253390:
    // 0x253390: 0x2c7610  .word       0x002C7610                   # mfhi        $t6 # 002C0600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253390u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_253394:
    // 0x253394: 0x2c7618  .word       0x002C7618                   # mult        $t6, $at, $t4 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x253394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_253398:
    // 0x253398: 0x2c8738  .word       0x002C8738                   # dsll        $s0, $t4, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253398u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) << 28);
label_25339c:
    // 0x25339c: 0x2c8740  .word       0x002C8740                   # sll         $s0, $t4, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25339cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 29));
label_2533a0:
    // 0x2533a0: 0x2c6ac8  .word       0x002C6AC8                   # jr          $at # 000C6AC0 <InstrIdType: CPU_SPECIAL>
label_2533a4:
    if (ctx->pc == 0x2533A4u) {
        ctx->pc = 0x2533A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533A0u;
        // 0x2533a4: 0x2c6ae0  .word       0x002C6AE0                   # add         $t5, $at, $t4 # 000002C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2533A8u;
        goto label_2533a8;
    }
    ctx->pc = 0x2533A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2533A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533A0u;
        // 0x2533a4: 0x2c6ae0  .word       0x002C6AE0                   # add         $t5, $at, $t4 # 000002C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2533A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2533A8u;
label_2533a8:
    // 0x2533a8: 0x2c6af0  tge         $at, $t4, 427
    ctx->pc = 0x2533a8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2533ac:
    // 0x2533ac: 0x2c6af8  .word       0x002C6AF8                   # dsll        $t5, $t4, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2533acu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 11);
label_2533b0:
    // 0x2533b0: 0x2c8748  .word       0x002C8748                   # jr          $at # 000C8740 <InstrIdType: CPU_SPECIAL>
label_2533b4:
    if (ctx->pc == 0x2533B4u) {
        ctx->pc = 0x2533B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533B0u;
        // 0x2533b4: 0x2c8758  .word       0x002C8758                   # mult        $s0, $at, $t4 # 00000740 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2533B8u;
        goto label_2533b8;
    }
    ctx->pc = 0x2533B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2533B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533B0u;
        // 0x2533b4: 0x2c8758  .word       0x002C8758                   # mult        $s0, $at, $t4 # 00000740 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2533B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2533B8u;
label_2533b8:
    // 0x2533b8: 0x2c6bc0  .word       0x002C6BC0                   # sll         $t5, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2533b8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 15));
label_2533bc:
    // 0x2533bc: 0x2c8760  .word       0x002C8760                   # add         $s0, $at, $t4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2533bcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2533c0:
    // 0x2533c0: 0x2c8768  .word       0x002C8768                   # mfsa        $s0 # 002C0740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2533c0u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_2533c4:
    // 0x2533c4: 0x2c8770  tge         $at, $t4, 541
    ctx->pc = 0x2533c4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2533c8:
    // 0x2533c8: 0x2c8778  .word       0x002C8778                   # dsll        $s0, $t4, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2533c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) << 29);
label_2533cc:
    // 0x2533cc: 0x2c8780  .word       0x002C8780                   # sll         $s0, $t4, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2533ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 30));
label_2533d0:
    // 0x2533d0: 0x2c8788  .word       0x002C8788                   # jr          $at # 000C8780 <InstrIdType: CPU_SPECIAL>
label_2533d4:
    if (ctx->pc == 0x2533D4u) {
        ctx->pc = 0x2533D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533D0u;
        // 0x2533d4: 0x2c8790  .word       0x002C8790                   # mfhi        $s0 # 002C0780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 16, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2533D8u;
        goto label_2533d8;
    }
    ctx->pc = 0x2533D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2533D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533D0u;
        // 0x2533d4: 0x2c8790  .word       0x002C8790                   # mfhi        $s0 # 002C0780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 16, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2533D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2533D8u;
label_2533d8:
    // 0x2533d8: 0x2c8798  .word       0x002C8798                   # mult        $s0, $at, $t4 # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2533d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_2533dc:
    // 0x2533dc: 0x2c87a0  .word       0x002C87A0                   # add         $s0, $at, $t4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2533dcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2533e0:
    // 0x2533e0: 0x2c87a8  .word       0x002C87A8                   # mfsa        $s0 # 002C0780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2533e0u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_2533e4:
    // 0x2533e4: 0x0  nop
    ctx->pc = 0x2533e4u;
    // NOP
label_2533e8:
    // 0x2533e8: 0x0  nop
    ctx->pc = 0x2533e8u;
    // NOP
label_2533ec:
    // 0x2533ec: 0x0  nop
    ctx->pc = 0x2533ecu;
    // NOP
label_2533f0:
    // 0x2533f0: 0x2c87b0  tge         $at, $t4, 542
    ctx->pc = 0x2533f0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2533f4:
    // 0x2533f4: 0x2c87b8  .word       0x002C87B8                   # dsll        $s0, $t4, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2533f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) << 30);
label_2533f8:
    // 0x2533f8: 0x2c87c0  .word       0x002C87C0                   # sll         $s0, $t4, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2533f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 31));
label_2533fc:
    // 0x2533fc: 0x2c87d0  .word       0x002C87D0                   # mfhi        $s0 # 002C07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2533fcu;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_253400:
    // 0x253400: 0x2c87e0  .word       0x002C87E0                   # add         $s0, $at, $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253400u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_253404:
    // 0x253404: 0x2c87f0  tge         $at, $t4, 543
    ctx->pc = 0x253404u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_253408:
    // 0x253408: 0x2c7610  .word       0x002C7610                   # mfhi        $t6 # 002C0600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253408u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25340c:
    // 0x25340c: 0x2c7618  .word       0x002C7618                   # mult        $t6, $at, $t4 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25340cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_253410:
    // 0x253410: 0x2c8800  .word       0x002C8800                   # sll         $s1, $t4, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253410u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 0));
label_253414:
    // 0x253414: 0x0  nop
    ctx->pc = 0x253414u;
    // NOP
label_253418:
    // 0x253418: 0x0  nop
    ctx->pc = 0x253418u;
    // NOP
label_25341c:
    // 0x25341c: 0x0  nop
    ctx->pc = 0x25341cu;
    // NOP
label_253420:
    // 0x253420: 0x20202  srl         $zero, $v0, 8
    ctx->pc = 0x253420u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_253424:
    // 0x253424: 0x1010000  .word       0x01010000                   # sll         $zero, $at, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253424u;
    
label_253428:
    // 0x253428: 0x20301  .word       0x00020301                   # INVALID     $zero, $v0, 0x301 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253428u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253428 raw=0x00020301"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25342c:
    // 0x25342c: 0x1020103  .word       0x01020103                   # sra         $zero, $v0, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25342cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 2), 4));
label_253430:
    // 0x253430: 0x2040301  .word       0x02040301                   # INVALID     $s0, $a0, 0x301 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253430u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253430 raw=0x02040301"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253434:
    // 0x253434: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x253434u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_253438:
    // 0x253438: 0x5020101  bltzl       $t0, . + 4 + (0x101 << 2)
label_25343c:
    if (ctx->pc == 0x25343Cu) {
        ctx->pc = 0x253440u;
        goto label_253440;
    }
    ctx->pc = 0x253438u;
    {
        const bool branch_taken_0x253438 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x253438) {
            ctx->pc = 0x253840u;
            goto label_253840;
        }
    }
    ctx->pc = 0x253440u;
label_253440:
    // 0x253440: 0x6020201  bltzl       $s0, . + 4 + (0x201 << 2)
label_253444:
    if (ctx->pc == 0x253444u) {
        ctx->pc = 0x253444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253440u;
        // 0x253444: 0x7010106  bgez        $t8, . + 4 + (0x106 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x253860 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253448u;
        goto label_253448;
    }
    ctx->pc = 0x253440u;
    {
        const bool branch_taken_0x253440 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x253440) {
            ctx->pc = 0x253444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253440u;
            // 0x253444: 0x7010106  bgez        $t8, . + 4 + (0x106 << 2) (Delay Slot)
            // REGIMM branch instruction to 0x253860 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x253C48u;
            { ctx->pc = 0x253c48; return; }
        }
    }
    ctx->pc = 0x253448u;
label_253448:
    // 0x253448: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x253448u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25344c:
    // 0x25344c: 0x0  nop
    ctx->pc = 0x25344cu;
    // NOP
label_253450:
    // 0x253450: 0x2020202  .word       0x02020202                   # srl         $zero, $v0, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253450u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_253454:
    // 0x253454: 0x2020202  .word       0x02020202                   # srl         $zero, $v0, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253454u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_253458:
    // 0x253458: 0x2020203  .word       0x02020203                   # sra         $zero, $v0, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253458u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 2), 8));
label_25345c:
    // 0x25345c: 0x3020203  .word       0x03020203                   # sra         $zero, $v0, 8 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25345cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 2), 8));
label_253460:
    // 0x253460: 0x2020202  .word       0x02020202                   # srl         $zero, $v0, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253460u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_253464:
    // 0x253464: 0x10101  .word       0x00010101                   # INVALID     $zero, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253464u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253464 raw=0x00010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253468:
    // 0x253468: 0x0  nop
    ctx->pc = 0x253468u;
    // NOP
label_25346c:
    // 0x25346c: 0x0  nop
    ctx->pc = 0x25346cu;
    // NOP
label_253470:
    // 0x253470: 0x1010302  .word       0x01010302                   # srl         $zero, $at, 12 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253470u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 12));
label_253474:
    // 0x253474: 0x4020201  bltzl       $zero, . + 4 + (0x201 << 2)
label_253478:
    if (ctx->pc == 0x253478u) {
        ctx->pc = 0x253478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253474u;
        // 0x253478: 0x3010104  .word       0x03010104                   # sllv        $zero, $at, $t8 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 24) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25347Cu;
        goto label_25347c;
    }
    ctx->pc = 0x253474u;
    {
        const bool branch_taken_0x253474 = (GPR_S32(ctx, 0) < 0);
        if (branch_taken_0x253474) {
            ctx->pc = 0x253478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253474u;
            // 0x253478: 0x3010104  .word       0x03010104                   # sllv        $zero, $at, $t8 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 24) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253C7Cu;
            { ctx->pc = 0x253c7c; return; }
        }
    }
    ctx->pc = 0x25347Cu;
label_25347c:
    // 0x25347c: 0x2030101  .word       0x02030101                   # INVALID     $s0, $v1, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25347cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25347C raw=0x02030101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253480:
    // 0x253480: 0x2030101  .word       0x02030101                   # INVALID     $s0, $v1, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253480 raw=0x02030101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253484:
    // 0x253484: 0x10101  .word       0x00010101                   # INVALID     $zero, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253484u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253484 raw=0x00010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253488:
    // 0x253488: 0x0  nop
    ctx->pc = 0x253488u;
    // NOP
label_25348c:
    // 0x25348c: 0x0  nop
    ctx->pc = 0x25348cu;
    // NOP
label_253490:
    // 0x253490: 0x2650100  .word       0x02650100                   # sll         $zero, $a1, 4 # 02600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253490u;
    
label_253494:
    // 0x253494: 0x5046503  .word       0x05046503                   # INVALID     $t0, $a0, 0x6503 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x253494u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x253494 raw=0x05046503");
 /* MITIGATED */
label_253498:
    // 0x253498: 0x65070665  daddiu      $a3, $t0, 0x665
    ctx->pc = 0x253498u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1637);
label_25349c:
    // 0x25349c: 0xa650908  j           func_9942420
label_2534a0:
    if (ctx->pc == 0x2534A0u) {
        ctx->pc = 0x2534A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25349Cu;
        // 0x2534a0: 0xd0c650b  jal         func_431942C (Delay Slot)
        // JAL 0x431942C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2534A4u;
        goto label_2534a4;
    }
    ctx->pc = 0x25349Cu;
    ctx->pc = 0x2534A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25349Cu;
    // 0x2534a0: 0xd0c650b  jal         func_431942C (Delay Slot)
    // JAL 0x431942C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x9942420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9942420u, 0x25349Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2534A4u;
label_2534a4:
    // 0x2534a4: 0x650f0e65  daddiu      $t7, $t0, 0xE65
    ctx->pc = 0x2534a4u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)3685);
label_2534a8:
    // 0x2534a8: 0x13121110  beq         $t8, $s2, . + 4 + (0x1110 << 2)
label_2534ac:
    if (ctx->pc == 0x2534ACu) {
        ctx->pc = 0x2534ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2534A8u;
        // 0x2534ac: 0x16156514  bne         $s0, $s5, . + 4 + (0x6514 << 2) (Delay Slot)
        // Likely branch instruction at 0x2534AC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2534B0u;
        goto label_2534b0;
    }
    ctx->pc = 0x2534A8u;
    {
        const bool branch_taken_0x2534a8 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 18));
        ctx->pc = 0x2534ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2534A8u;
        // 0x2534ac: 0x16156514  bne         $s0, $s5, . + 4 + (0x6514 << 2) (Delay Slot)
        // Likely branch instruction at 0x2534AC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2534a8) {
            ctx->pc = 0x2578ECu;
            return;
        }
    }
    ctx->pc = 0x2534B0u;
label_2534b0:
    // 0x2534b0: 0x65181765  daddiu      $t8, $t0, 0x1765
    ctx->pc = 0x2534b0u;
    SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)5989);
label_2534b4:
    // 0x2534b4: 0x1c1b1a19  .word       0x1C1B1A19                   # bgtz        $zero, . + 4 + (0x1A19 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
label_2534b8:
    if (ctx->pc == 0x2534B8u) {
        ctx->pc = 0x2534B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2534B4u;
        // 0x2534b8: 0x1f1e651d  .word       0x1F1E651D                   # bgtz        $t8, . + 4 + (0x651D << 2) # 001E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2534B8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2534BCu;
        goto label_2534bc;
    }
    ctx->pc = 0x2534B4u;
    {
        const bool branch_taken_0x2534b4 = (GPR_S32(ctx, 0) > 0);
        ctx->pc = 0x2534B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2534B4u;
        // 0x2534b8: 0x1f1e651d  .word       0x1F1E651D                   # bgtz        $t8, . + 4 + (0x651D << 2) # 001E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2534B8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2534b4) {
            ctx->pc = 0x259D1Cu;
            return;
        }
    }
    ctx->pc = 0x2534BCu;
label_2534bc:
    // 0x2534bc: 0x22212065  addi        $at, $s1, 0x2065
    ctx->pc = 0x2534bcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)8293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2534c0:
    // 0x2534c0: 0x25652423  addiu       $a1, $t3, 0x2423
    ctx->pc = 0x2534c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 9251));
label_2534c4:
    // 0x2534c4: 0x28276526  slti        $a3, $at, 0x6526
    ctx->pc = 0x2534c4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)25894) ? 1 : 0);
label_2534c8:
    // 0x2534c8: 0x652a2965  daddiu      $t2, $t1, 0x2965
    ctx->pc = 0x2534c8u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)10597);
label_2534cc:
    // 0x2534cc: 0x2c65652b  sltiu       $a1, $v1, 0x652B
    ctx->pc = 0x2534ccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25899) ? 1 : 0);
label_2534d0:
    // 0x2534d0: 0x652d6565  daddiu      $t5, $t1, 0x6565
    ctx->pc = 0x2534d0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)25957);
label_2534d4:
    // 0x2534d4: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2534d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2534d8:
    // 0x2534d8: 0x0  nop
    ctx->pc = 0x2534d8u;
    // NOP
label_2534dc:
    // 0x2534dc: 0x0  nop
    ctx->pc = 0x2534dcu;
    // NOP
label_2534e0:
    // 0x2534e0: 0x65653938  daddiu      $a1, $t3, 0x3938
    ctx->pc = 0x2534e0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)14648);
label_2534e4:
    // 0x2534e4: 0x653c3b3a  daddiu      $gp, $t1, 0x3B3A
    ctx->pc = 0x2534e4u;
    SET_GPR_S64(ctx, 28, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)15162);
label_2534e8:
    // 0x2534e8: 0x6565653d  daddiu      $a1, $t3, 0x653D
    ctx->pc = 0x2534e8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25917);
label_2534ec:
    // 0x2534ec: 0x6565653e  daddiu      $a1, $t3, 0x653E
    ctx->pc = 0x2534ecu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25918);
label_2534f0:
    // 0x2534f0: 0x6565653f  daddiu      $a1, $t3, 0x653F
    ctx->pc = 0x2534f0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25919);
label_2534f4:
    // 0x2534f4: 0x65654140  daddiu      $a1, $t3, 0x4140
    ctx->pc = 0x2534f4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)16704);
label_2534f8:
    // 0x2534f8: 0x65654342  daddiu      $a1, $t3, 0x4342
    ctx->pc = 0x2534f8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17218);
label_2534fc:
    // 0x2534fc: 0x47464544  .word       0x47464544                   # INVALID     $k0, $a2, 0x4544 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2534fcu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x4 at 0x2534FC raw=0x47464544"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253500:
    // 0x253500: 0x4b4a4948  vmaddx.xz   $vf5, $vf9, $vf10x
    ctx->pc = 0x253500u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_253504:
    // 0x253504: 0x6565654c  daddiu      $a1, $t3, 0x654C
    ctx->pc = 0x253504u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25932);
label_253508:
    // 0x253508: 0x6565654d  daddiu      $a1, $t3, 0x654D
    ctx->pc = 0x253508u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25933);
label_25350c:
    // 0x25350c: 0x65504f4e  daddiu      $s0, $t2, 0x4F4E
    ctx->pc = 0x25350cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)20302);
label_253510:
    // 0x253510: 0x65656551  daddiu      $a1, $t3, 0x6551
    ctx->pc = 0x253510u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25937);
label_253514:
    // 0x253514: 0x65656552  daddiu      $a1, $t3, 0x6552
    ctx->pc = 0x253514u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25938);
label_253518:
    // 0x253518: 0x65555453  daddiu      $s5, $t2, 0x5453
    ctx->pc = 0x253518u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)21587);
label_25351c:
    // 0x25351c: 0x65655756  daddiu      $a1, $t3, 0x5756
    ctx->pc = 0x25351cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)22358);
label_253520:
    // 0x253520: 0x65656558  daddiu      $a1, $t3, 0x6558
    ctx->pc = 0x253520u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25944);
label_253524:
    // 0x253524: 0x65656559  daddiu      $a1, $t3, 0x6559
    ctx->pc = 0x253524u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25945);
label_253528:
    // 0x253528: 0x655c5b5a  daddiu      $gp, $t2, 0x5B5A
    ctx->pc = 0x253528u;
    SET_GPR_S64(ctx, 28, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)23386);
label_25352c:
    // 0x25352c: 0x65655e5d  daddiu      $a1, $t3, 0x5E5D
    ctx->pc = 0x25352cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24157);
label_253530:
    // 0x253530: 0x6565655f  daddiu      $a1, $t3, 0x655F
    ctx->pc = 0x253530u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25951);
label_253534:
    // 0x253534: 0x65656560  daddiu      $a1, $t3, 0x6560
    ctx->pc = 0x253534u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25952);
label_253538:
    // 0x253538: 0x65656561  daddiu      $a1, $t3, 0x6561
    ctx->pc = 0x253538u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25953);
label_25353c:
    // 0x25353c: 0x0  nop
    ctx->pc = 0x25353cu;
    // NOP
label_253540:
    // 0x253540: 0x65652e65  daddiu      $a1, $t3, 0x2E65
    ctx->pc = 0x253540u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11877);
label_253544:
    // 0x253544: 0x3065652f  andi        $a1, $v1, 0x652F
    ctx->pc = 0x253544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)25903);
label_253548:
    // 0x253548: 0x65656531  daddiu      $a1, $t3, 0x6531
    ctx->pc = 0x253548u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25905);
label_25354c:
    // 0x25354c: 0x65343332  daddiu      $s4, $t1, 0x3332
    ctx->pc = 0x25354cu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)13106);
label_253550:
    // 0x253550: 0x65656535  daddiu      $a1, $t3, 0x6535
    ctx->pc = 0x253550u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25909);
label_253554:
    // 0x253554: 0x656565  .word       0x00656565                   # or          $t4, $v1, $a1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253554u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_253558:
    // 0x253558: 0x0  nop
    ctx->pc = 0x253558u;
    // NOP
label_25355c:
    // 0x25355c: 0x0  nop
    ctx->pc = 0x25355cu;
    // NOP
label_253560:
    // 0x253560: 0x65656565  daddiu      $a1, $t3, 0x6565
    ctx->pc = 0x253560u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25957);
label_253564:
    // 0x253564: 0x65656565  daddiu      $a1, $t3, 0x6565
    ctx->pc = 0x253564u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25957);
label_253568:
    // 0x253568: 0x65366565  daddiu      $s6, $t1, 0x6565
    ctx->pc = 0x253568u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)25957);
label_25356c:
    // 0x25356c: 0x65656565  daddiu      $a1, $t3, 0x6565
    ctx->pc = 0x25356cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25957);
label_253570:
    // 0x253570: 0x65656565  daddiu      $a1, $t3, 0x6565
    ctx->pc = 0x253570u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25957);
label_253574:
    // 0x253574: 0x653765  .word       0x00653765                   # or          $a2, $v1, $a1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_253578:
    // 0x253578: 0x0  nop
    ctx->pc = 0x253578u;
    // NOP
label_25357c:
    // 0x25357c: 0x0  nop
    ctx->pc = 0x25357cu;
    // NOP
label_253580:
    // 0x253580: 0x65656565  daddiu      $a1, $t3, 0x6565
    ctx->pc = 0x253580u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25957);
label_253584:
    // 0x253584: 0x65656565  daddiu      $a1, $t3, 0x6565
    ctx->pc = 0x253584u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25957);
label_253588:
    // 0x253588: 0x65656565  daddiu      $a1, $t3, 0x6565
    ctx->pc = 0x253588u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25957);
label_25358c:
    // 0x25358c: 0x65656265  daddiu      $a1, $t3, 0x6265
    ctx->pc = 0x25358cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25189);
label_253590:
    // 0x253590: 0x65636565  daddiu      $v1, $t3, 0x6565
    ctx->pc = 0x253590u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25957);
label_253594:
    // 0x253594: 0x656465  .word       0x00656465                   # or          $t4, $v1, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253594u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_253598:
    // 0x253598: 0x0  nop
    ctx->pc = 0x253598u;
    // NOP
label_25359c:
    // 0x25359c: 0x0  nop
    ctx->pc = 0x25359cu;
    // NOP
label_2535a0:
    // 0x2535a0: 0x80007  srav        $zero, $t0, $zero
    ctx->pc = 0x2535a0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 0) & 0x1F));
label_2535a4:
    // 0x2535a4: 0xd0009  .word       0x000D0009                   # jalr        $zero, $zero # 000D0000 <InstrIdType: CPU_SPECIAL>
label_2535a8:
    if (ctx->pc == 0x2535A8u) {
        ctx->pc = 0x2535A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2535A4u;
        // 0x2535a8: 0xf000e  .word       0x000F000E                   # INVALID     $zero, $t7, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2535A8 raw=0x000F000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2535ACu;
        goto label_2535ac;
    }
    ctx->pc = 0x2535A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2535A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2535A4u;
        // 0x2535a8: 0xf000e  .word       0x000F000E                   # INVALID     $zero, $t7, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2535A8 raw=0x000F000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2535A4u, 0x2535ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2535ACu;
label_2535ac:
    // 0x2535ac: 0x170013  .word       0x00170013                   # mtlo        $zero # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2535acu;
    ctx->lo = GPR_U64(ctx, 0);
label_2535b0:
    // 0x2535b0: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2535b0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2535b4:
    // 0x2535b4: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x2535b4u;
    
label_2535b8:
    // 0x2535b8: 0x70006  srlv        $zero, $a3, $zero
    ctx->pc = 0x2535b8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 0) & 0x1F));
label_2535bc:
    // 0x2535bc: 0xe000c  .word       0x000E000C                   # syscall     0 # 000E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2535bcu;
    ctx->pc = 0x2535C0u;
runtime->handleSyscall(rdram, ctx, 0x3800u);
label_2535c0:
    // 0x2535c0: 0x170013  .word       0x00170013                   # mtlo        $zero # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2535c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2535c4:
    // 0x2535c4: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2535c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2535c8:
    // 0x2535c8: 0x70001  .word       0x00070001                   # INVALID     $zero, $a3, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2535c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2535C8 raw=0x00070001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2535cc:
    // 0x2535cc: 0x90008  .word       0x00090008                   # jr          $zero # 00090000 <InstrIdType: CPU_SPECIAL>
label_2535d0:
    if (ctx->pc == 0x2535D0u) {
        ctx->pc = 0x2535D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2535CCu;
        // 0x2535d0: 0x15000e  .word       0x0015000E                   # INVALID     $zero, $s5, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2535D0 raw=0x0015000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2535D4u;
        goto label_2535d4;
    }
    ctx->pc = 0x2535CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2535D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2535CCu;
        // 0x2535d0: 0x15000e  .word       0x0015000E                   # INVALID     $zero, $s5, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2535D0 raw=0x0015000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2535CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2535D4u;
label_2535d4:
    // 0x2535d4: 0x17000f  .word       0x0017000F                   # sync # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2535d4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2535d8:
    // 0x2535d8: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2535d8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2535dc:
    // 0x2535dc: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x2535dcu;
    
label_2535e0:
    // 0x2535e0: 0x1060005  .word       0x01060005                   # INVALID     $t0, $a2, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2535e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2535E0 raw=0x01060005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2535e4:
    // 0x2535e4: 0x110000b  movn        $zero, $t0, $s0
    ctx->pc = 0x2535e4u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 8));
label_2535e8:
    // 0x2535e8: 0x170113  .word       0x00170113                   # mtlo        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2535e8u;
    ctx->lo = GPR_U64(ctx, 0);
label_2535ec:
    // 0x2535ec: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2535ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2535f0:
    // 0x2535f0: 0x30001  .word       0x00030001                   # INVALID     $zero, $v1, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2535f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2535F0 raw=0x00030001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2535f4:
    // 0x2535f4: 0x1080107  .word       0x01080107                   # srav        $zero, $t0, $t0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2535f4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 8) & 0x1F));
label_2535f8:
    // 0x2535f8: 0x11000b  movn        $zero, $zero, $s1
    ctx->pc = 0x2535f8u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2535fc:
    // 0x2535fc: 0x170012  .word       0x00170012                   # mflo        $zero # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2535fcu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_253600:
    // 0x253600: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253600u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253604:
    // 0x253604: 0x50014  dsllv       $zero, $a1, $zero
    ctx->pc = 0x253604u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) << (GPR_U32(ctx, 0) & 0x3F));
label_253608:
    // 0x253608: 0x1080107  .word       0x01080107                   # srav        $zero, $t0, $t0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253608u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 8) & 0x1F));
label_25360c:
    // 0x25360c: 0x12010a  .word       0x0012010A                   # movz        $zero, $zero, $s2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25360cu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_253610:
    // 0x253610: 0x170113  .word       0x00170113                   # mtlo        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253610u;
    ctx->lo = GPR_U64(ctx, 0);
label_253614:
    // 0x253614: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253618:
    // 0x253618: 0x10014  dsllv       $zero, $at, $zero
    ctx->pc = 0x253618u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_25361c:
    // 0x25361c: 0x2080004  sllv        $zero, $t0, $s0
    ctx->pc = 0x25361cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 16) & 0x1F));
label_253620:
    // 0x253620: 0x10e010b  .word       0x010E010B                   # movn        $zero, $t0, $t6 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253620u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 8));
label_253624:
    // 0x253624: 0x17010f  .word       0x0017010F                   # sync # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253624u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_253628:
    // 0x253628: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253628u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_25362c:
    // 0x25362c: 0x10b0208  .word       0x010B0208                   # jr          $t0 # 000B0200 <InstrIdType: CPU_SPECIAL>
label_253630:
    if (ctx->pc == 0x253630u) {
        ctx->pc = 0x253630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25362Cu;
        // 0x253630: 0x10e020c  .word       0x010E020C                   # syscall     8 # 010E0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x253634u;
        runtime->handleSyscall(rdram, ctx, 0x43808u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253634u;
        goto label_253634;
    }
    ctx->pc = 0x25362Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = 0x253630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25362Cu;
        // 0x253630: 0x10e020c  .word       0x010E020C                   # syscall     8 # 010E0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x253634u;
        runtime->handleSyscall(rdram, ctx, 0x43808u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25362Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253634u;
label_253634:
    // 0x253634: 0x111010f  .word       0x0111010F                   # sync # 01110000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253634u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_253638:
    // 0x253638: 0x170112  .word       0x00170112                   # mflo        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253638u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_25363c:
    // 0x25363c: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x25363cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253640:
    // 0x253640: 0x20001  .word       0x00020001                   # INVALID     $zero, $v0, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253640 raw=0x00020001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253644:
    // 0x253644: 0x10b0208  .word       0x010B0208                   # jr          $t0 # 000B0200 <InstrIdType: CPU_SPECIAL>
label_253648:
    if (ctx->pc == 0x253648u) {
        ctx->pc = 0x253648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253644u;
        // 0x253648: 0x10e0015  .word       0x010E0015                   # INVALID     $t0, $t6, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x253648 raw=0x010E0015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x25364Cu;
        goto label_25364c;
    }
    ctx->pc = 0x253644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = 0x253648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253644u;
        // 0x253648: 0x10e0015  .word       0x010E0015                   # INVALID     $t0, $t6, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x253648 raw=0x010E0015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253644u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25364Cu;
label_25364c:
    // 0x25364c: 0x17010f  .word       0x0017010F                   # sync # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25364cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_253650:
    // 0x253650: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253650u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253654:
    // 0x253654: 0x50001  .word       0x00050001                   # INVALID     $zero, $a1, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253654u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253654 raw=0x00050001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253658:
    // 0x253658: 0xd000b  movn        $zero, $zero, $t5
    ctx->pc = 0x253658u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_25365c:
    // 0x25365c: 0x8000e  .word       0x0008000E                   # INVALID     $zero, $t0, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25365cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25365C raw=0x0008000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253660:
    // 0x253660: 0x170106  .word       0x00170106                   # srlv        $zero, $s7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253660u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 23), GPR_U32(ctx, 0) & 0x1F));
label_253664:
    // 0x253664: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253668:
    // 0x253668: 0x70014  dsllv       $zero, $a3, $zero
    ctx->pc = 0x253668u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 7) << (GPR_U32(ctx, 0) & 0x3F));
label_25366c:
    // 0x25366c: 0xe0008  .word       0x000E0008                   # jr          $zero # 000E0000 <InstrIdType: CPU_SPECIAL>
label_253670:
    if (ctx->pc == 0x253670u) {
        ctx->pc = 0x253670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25366Cu;
        // 0x253670: 0x10000f  .word       0x0010000F                   # sync # 00100000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x253674u;
        goto label_253674;
    }
    ctx->pc = 0x25366Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x253670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25366Cu;
        // 0x253670: 0x10000f  .word       0x0010000F                   # sync # 00100000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25366Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253674u;
label_253674:
    // 0x253674: 0x170013  .word       0x00170013                   # mtlo        $zero # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253674u;
    ctx->lo = GPR_U64(ctx, 0);
label_253678:
    // 0x253678: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253678u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_25367c:
    // 0x25367c: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x25367cu;
    
label_253680:
    // 0x253680: 0x50003  sra         $zero, $a1, 0
    ctx->pc = 0x253680u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 5), 0));
label_253684:
    // 0x253684: 0x10a0108  .word       0x010A0108                   # jr          $t0 # 000A0100 <InstrIdType: CPU_SPECIAL>
label_253688:
    if (ctx->pc == 0x253688u) {
        ctx->pc = 0x253688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253684u;
        // 0x253688: 0x10d000b  movn        $zero, $t0, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25368Cu;
        goto label_25368c;
    }
    ctx->pc = 0x253684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = 0x253688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253684u;
        // 0x253688: 0x10d000b  movn        $zero, $t0, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253684u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25368Cu;
label_25368c:
    // 0x25368c: 0x1130012  .word       0x01130012                   # mflo        $zero # 01130000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25368cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_253690:
    // 0x253690: 0x50001  .word       0x00050001                   # INVALID     $zero, $a1, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253690 raw=0x00050001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253694:
    // 0x253694: 0x70003  sra         $zero, $a3, 0
    ctx->pc = 0x253694u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 7), 0));
label_253698:
    // 0x253698: 0x60012  .word       0x00060012                   # mflo        $zero # 00060000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253698u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_25369c:
    // 0x25369c: 0x170008  .word       0x00170008                   # jr          $zero # 00170000 <InstrIdType: CPU_SPECIAL>
label_2536a0:
    if (ctx->pc == 0x2536A0u) {
        ctx->pc = 0x2536A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25369Cu;
        // 0x2536a0: 0x170017  dsrav       $zero, $s7, $zero (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2536A4u;
        goto label_2536a4;
    }
    ctx->pc = 0x25369Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2536A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25369Cu;
        // 0x2536a0: 0x170017  dsrav       $zero, $s7, $zero (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25369Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2536A4u;
label_2536a4:
    // 0x2536a4: 0x2080014  dsllv       $zero, $t0, $s0
    ctx->pc = 0x2536a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) << (GPR_U32(ctx, 16) & 0x3F));
label_2536a8:
    // 0x2536a8: 0x10e010b  .word       0x010E010B                   # movn        $zero, $t0, $t6 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2536a8u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 8));
label_2536ac:
    // 0x2536ac: 0x15010f  .word       0x0015010F                   # sync # 00150000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2536acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2536b0:
    // 0x2536b0: 0x170112  .word       0x00170112                   # mflo        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2536b0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2536b4:
    // 0x2536b4: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2536b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2536b8:
    // 0x2536b8: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x2536b8u;
    
label_2536bc:
    // 0x2536bc: 0x80007  srav        $zero, $t0, $zero
    ctx->pc = 0x2536bcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 0) & 0x1F));
label_2536c0:
    // 0x2536c0: 0xd0009  .word       0x000D0009                   # jalr        $zero, $zero # 000D0000 <InstrIdType: CPU_SPECIAL>
label_2536c4:
    if (ctx->pc == 0x2536C4u) {
        ctx->pc = 0x2536C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536C0u;
        // 0x2536c4: 0xf000e  .word       0x000F000E                   # INVALID     $zero, $t7, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2536C4 raw=0x000F000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2536C8u;
        goto label_2536c8;
    }
    ctx->pc = 0x2536C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2536C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536C0u;
        // 0x2536c4: 0xf000e  .word       0x000F000E                   # INVALID     $zero, $t7, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2536C4 raw=0x000F000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2536C0u, 0x2536C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2536C8u;
label_2536c8:
    // 0x2536c8: 0x130010  .word       0x00130010                   # mfhi        $zero # 00130000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2536c8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2536cc:
    // 0x2536cc: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x2536ccu;
    
label_2536d0:
    // 0x2536d0: 0x40002  srl         $zero, $a0, 0
    ctx->pc = 0x2536d0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 4), 0));
label_2536d4:
    // 0x2536d4: 0x10b0208  .word       0x010B0208                   # jr          $t0 # 000B0200 <InstrIdType: CPU_SPECIAL>
label_2536d8:
    if (ctx->pc == 0x2536D8u) {
        ctx->pc = 0x2536D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536D4u;
        // 0x2536d8: 0x10f010e  .word       0x010F010E                   # INVALID     $t0, $t7, 0x10E # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2536D8 raw=0x010F010E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2536DCu;
        goto label_2536dc;
    }
    ctx->pc = 0x2536D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = 0x2536D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536D4u;
        // 0x2536d8: 0x10f010e  .word       0x010F010E                   # INVALID     $t0, $t7, 0x10E # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2536D8 raw=0x010F010E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2536D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2536DCu;
label_2536dc:
    // 0x2536dc: 0x1120111  .word       0x01120111                   # mthi        $t0 # 00120100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2536dcu;
    ctx->hi = GPR_U64(ctx, 8);
label_2536e0:
    // 0x2536e0: 0x150208  .word       0x00150208                   # jr          $zero # 00150200 <InstrIdType: CPU_SPECIAL>
label_2536e4:
    if (ctx->pc == 0x2536E4u) {
        ctx->pc = 0x2536E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536E0u;
        // 0x2536e4: 0x10e010b  .word       0x010E010B                   # movn        $zero, $t0, $t6 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2536E8u;
        goto label_2536e8;
    }
    ctx->pc = 0x2536E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2536E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536E0u;
        // 0x2536e4: 0x10e010b  .word       0x010E010B                   # movn        $zero, $t0, $t6 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2536E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2536E8u;
label_2536e8:
    // 0x2536e8: 0x10f0111  .word       0x010F0111                   # mthi        $t0 # 000F0100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2536e8u;
    ctx->hi = GPR_U64(ctx, 8);
label_2536ec:
    // 0x2536ec: 0x170112  .word       0x00170112                   # mflo        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2536ecu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2536f0:
    // 0x2536f0: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2536f0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2536f4:
    // 0x2536f4: 0x50001  .word       0x00050001                   # INVALID     $zero, $a1, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2536f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2536F4 raw=0x00050001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2536f8:
    // 0x2536f8: 0xb0015  .word       0x000B0015                   # INVALID     $zero, $t3, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2536f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2536F8 raw=0x000B0015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2536fc:
    // 0x2536fc: 0x13000a  movz        $zero, $zero, $s3
    ctx->pc = 0x2536fcu;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_253700:
    // 0x253700: 0x170108  .word       0x00170108                   # jr          $zero # 00170100 <InstrIdType: CPU_SPECIAL>
label_253704:
    if (ctx->pc == 0x253704u) {
        ctx->pc = 0x253704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253700u;
        // 0x253704: 0x170017  dsrav       $zero, $s7, $zero (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253708u;
        goto label_253708;
    }
    ctx->pc = 0x253700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x253704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253700u;
        // 0x253704: 0x170017  dsrav       $zero, $s7, $zero (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253700u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253708u;
label_253708:
    // 0x253708: 0x1050101  .word       0x01050101                   # INVALID     $t0, $a1, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253708u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253708 raw=0x01050101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25370c:
    // 0x25370c: 0xc0107  .word       0x000C0107                   # srav        $zero, $t4, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25370cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 12), GPR_U32(ctx, 0) & 0x1F));
label_253710:
    // 0x253710: 0x10010b  .word       0x0010010B                   # movn        $zero, $zero, $s0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253710u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_253714:
    // 0x253714: 0x170113  .word       0x00170113                   # mtlo        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253714u;
    ctx->lo = GPR_U64(ctx, 0);
label_253718:
    // 0x253718: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253718u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_25371c:
    // 0x25371c: 0x80007  srav        $zero, $t0, $zero
    ctx->pc = 0x25371cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 0) & 0x1F));
label_253720:
    // 0x253720: 0xa0014  dsllv       $zero, $t2, $zero
    ctx->pc = 0x253720u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 10) << (GPR_U32(ctx, 0) & 0x3F));
label_253724:
    // 0x253724: 0xf000e  .word       0x000F000E                   # INVALID     $zero, $t7, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253724u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x253724 raw=0x000F000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253728:
    // 0x253728: 0x170013  .word       0x00170013                   # mtlo        $zero # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253728u;
    ctx->lo = GPR_U64(ctx, 0);
label_25372c:
    // 0x25372c: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x25372cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253730:
    // 0x253730: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x253730u;
    
label_253734:
    // 0x253734: 0x90007  srav        $zero, $t1, $zero
    ctx->pc = 0x253734u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 9), GPR_U32(ctx, 0) & 0x1F));
label_253738:
    // 0x253738: 0xe000d  break       14
    ctx->pc = 0x253738u;
    runtime->handleBreak(rdram, ctx);
label_25373c:
    // 0x25373c: 0x170013  .word       0x00170013                   # mtlo        $zero # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25373cu;
    ctx->lo = GPR_U64(ctx, 0);
label_253740:
    // 0x253740: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253740u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253744:
    // 0x253744: 0x150000  sll         $zero, $s5, 0
    ctx->pc = 0x253744u;
    
label_253748:
    // 0x253748: 0x50001  .word       0x00050001                   # INVALID     $zero, $a1, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253748u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253748 raw=0x00050001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25374c:
    // 0x25374c: 0x10d000b  movn        $zero, $t0, $t5
    ctx->pc = 0x25374cu;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 8));
label_253750:
    // 0x253750: 0x170113  .word       0x00170113                   # mtlo        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253750u;
    ctx->lo = GPR_U64(ctx, 0);
label_253754:
    // 0x253754: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253754u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253758:
    // 0x253758: 0x1070001  .word       0x01070001                   # INVALID     $t0, $a3, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253758u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253758 raw=0x01070001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25375c:
    // 0x25375c: 0x140108  .word       0x00140108                   # jr          $zero # 00140100 <InstrIdType: CPU_SPECIAL>
label_253760:
    if (ctx->pc == 0x253760u) {
        ctx->pc = 0x253760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25375Cu;
        // 0x253760: 0xb010a  .word       0x000B010A                   # movz        $zero, $zero, $t3 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253764u;
        goto label_253764;
    }
    ctx->pc = 0x25375Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x253760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25375Cu;
        // 0x253760: 0xb010a  .word       0x000B010A                   # movz        $zero, $zero, $t3 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25375Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253764u;
label_253764:
    // 0x253764: 0x170012  .word       0x00170012                   # mflo        $zero # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253764u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_253768:
    // 0x253768: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253768u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_25376c:
    // 0x25376c: 0x1070005  .word       0x01070005                   # INVALID     $t0, $a3, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25376cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25376C raw=0x01070005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253770:
    // 0x253770: 0x10c0108  .word       0x010C0108                   # jr          $t0 # 000C0100 <InstrIdType: CPU_SPECIAL>
label_253774:
    if (ctx->pc == 0x253774u) {
        ctx->pc = 0x253774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253770u;
        // 0x253774: 0x120110  .word       0x00120110                   # mfhi        $zero # 00120100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253778u;
        goto label_253778;
    }
    ctx->pc = 0x253770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = 0x253774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253770u;
        // 0x253774: 0x120110  .word       0x00120110                   # mfhi        $zero # 00120100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253770u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253778u;
label_253778:
    // 0x253778: 0x170113  .word       0x00170113                   # mtlo        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253778u;
    ctx->lo = GPR_U64(ctx, 0);
label_25377c:
    // 0x25377c: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x25377cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253780:
    // 0x253780: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x253780u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_253784:
    // 0x253784: 0x2080001  .word       0x02080001                   # INVALID     $s0, $t0, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253784u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253784 raw=0x02080001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253788:
    // 0x253788: 0x10e020c  .word       0x010E020C                   # syscall     8 # 010E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253788u;
    ctx->pc = 0x25378Cu;
runtime->handleSyscall(rdram, ctx, 0x43808u);
label_25378c:
    // 0x25378c: 0x170112  .word       0x00170112                   # mflo        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25378cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_253790:
    // 0x253790: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253790u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253794:
    // 0x253794: 0x2080016  dsrlv       $zero, $t0, $s0
    ctx->pc = 0x253794u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) >> (GPR_U32(ctx, 16) & 0x3F));
label_253798:
    // 0x253798: 0x20c010b  .word       0x020C010B                   # movn        $zero, $s0, $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253798u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 16));
label_25379c:
    // 0x25379c: 0x10f010e  .word       0x010F010E                   # INVALID     $t0, $t7, 0x10E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25379cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25379C raw=0x010F010E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2537a0:
    // 0x2537a0: 0x170112  .word       0x00170112                   # mflo        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537a0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2537a4:
    // 0x2537a4: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2537a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2537a8:
    // 0x2537a8: 0x80007  srav        $zero, $t0, $zero
    ctx->pc = 0x2537a8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 0) & 0x1F));
label_2537ac:
    // 0x2537ac: 0x15000e  .word       0x0015000E                   # INVALID     $zero, $s5, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2537AC raw=0x0015000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2537b0:
    // 0x2537b0: 0x10000f  .word       0x0010000F                   # sync # 00100000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2537b4:
    // 0x2537b4: 0x170013  .word       0x00170013                   # mtlo        $zero # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537b4u;
    ctx->lo = GPR_U64(ctx, 0);
label_2537b8:
    // 0x2537b8: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2537b8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2537bc:
    // 0x2537bc: 0x140000  sll         $zero, $s4, 0
    ctx->pc = 0x2537bcu;
    
label_2537c0:
    // 0x2537c0: 0x20207  .word       0x00020207                   # srav        $zero, $v0, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537c0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_2537c4:
    // 0x2537c4: 0x10e0208  .word       0x010E0208                   # jr          $t0 # 000E0200 <InstrIdType: CPU_SPECIAL>
label_2537c8:
    if (ctx->pc == 0x2537C8u) {
        ctx->pc = 0x2537C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537C4u;
        // 0x2537c8: 0x17000f  .word       0x0017000F                   # sync # 00170000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x2537CCu;
        goto label_2537cc;
    }
    ctx->pc = 0x2537C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = 0x2537C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537C4u;
        // 0x2537c8: 0x17000f  .word       0x0017000F                   # sync # 00170000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2537C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2537CCu;
label_2537cc:
    // 0x2537cc: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2537ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2537d0:
    // 0x2537d0: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x2537d0u;
    
label_2537d4:
    // 0x2537d4: 0x50003  sra         $zero, $a1, 0
    ctx->pc = 0x2537d4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 5), 0));
label_2537d8:
    // 0x2537d8: 0xb010a  .word       0x000B010A                   # movz        $zero, $zero, $t3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537d8u;
    if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2537dc:
    // 0x2537dc: 0x170113  .word       0x00170113                   # mtlo        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537dcu;
    ctx->lo = GPR_U64(ctx, 0);
label_2537e0:
    // 0x2537e0: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2537e0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2537e4:
    // 0x2537e4: 0x1070005  .word       0x01070005                   # INVALID     $t0, $a3, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2537E4 raw=0x01070005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2537e8:
    // 0x2537e8: 0x10d0108  .word       0x010D0108                   # jr          $t0 # 000D0100 <InstrIdType: CPU_SPECIAL>
label_2537ec:
    if (ctx->pc == 0x2537ECu) {
        ctx->pc = 0x2537ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537E8u;
        // 0x2537ec: 0x120110  .word       0x00120110                   # mfhi        $zero # 00120100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2537F0u;
        goto label_2537f0;
    }
    ctx->pc = 0x2537E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = 0x2537ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537E8u;
        // 0x2537ec: 0x120110  .word       0x00120110                   # mfhi        $zero # 00120100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2537E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2537F0u;
label_2537f0:
    // 0x2537f0: 0x170113  .word       0x00170113                   # mtlo        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537f0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2537f4:
    // 0x2537f4: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2537f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2537f8:
    // 0x2537f8: 0x10015  .word       0x00010015                   # INVALID     $zero, $at, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2537F8 raw=0x00010015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2537fc:
    // 0x2537fc: 0x1080107  .word       0x01080107                   # srav        $zero, $t0, $t0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537fcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 8) & 0x1F));
label_253800:
    // 0x253800: 0x11000b  movn        $zero, $zero, $s1
    ctx->pc = 0x253800u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_253804:
    // 0x253804: 0x170012  .word       0x00170012                   # mflo        $zero # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253804u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_253808:
    // 0x253808: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253808u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_25380c:
    // 0x25380c: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x25380cu;
    
label_253810:
    // 0x253810: 0x2080002  .word       0x02080002                   # srl         $zero, $t0, 0 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253810u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_253814:
    // 0x253814: 0x111010e  .word       0x0111010E                   # INVALID     $t0, $s1, 0x10E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253814u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x253814 raw=0x0111010E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253818:
    // 0x253818: 0x170112  .word       0x00170112                   # mflo        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253818u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_25381c:
    // 0x25381c: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x25381cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253820:
    // 0x253820: 0x40001  .word       0x00040001                   # INVALID     $zero, $a0, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253820u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253820 raw=0x00040001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253824:
    // 0x253824: 0x10b0208  .word       0x010B0208                   # jr          $t0 # 000B0200 <InstrIdType: CPU_SPECIAL>
label_253828:
    if (ctx->pc == 0x253828u) {
        ctx->pc = 0x253828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253824u;
        // 0x253828: 0x10e020c  .word       0x010E020C                   # syscall     8 # 010E0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x25382Cu;
        runtime->handleSyscall(rdram, ctx, 0x43808u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25382Cu;
        goto label_25382c;
    }
    ctx->pc = 0x253824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = 0x253828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253824u;
        // 0x253828: 0x10e020c  .word       0x010E020C                   # syscall     8 # 010E0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x25382Cu;
        runtime->handleSyscall(rdram, ctx, 0x43808u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253824u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25382Cu;
label_25382c:
    // 0x25382c: 0x17010f  .word       0x0017010F                   # sync # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25382cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_253830:
    // 0x253830: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253830u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253834:
    // 0x253834: 0x150000  sll         $zero, $s5, 0
    ctx->pc = 0x253834u;
    
label_253838:
    // 0x253838: 0x70001  .word       0x00070001                   # INVALID     $zero, $a3, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253838u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253838 raw=0x00070001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25383c:
    // 0x25383c: 0x10000e  .word       0x0010000E                   # INVALID     $zero, $s0, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25383cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25383C raw=0x0010000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253840:
    // 0x253840: 0x170013  .word       0x00170013                   # mtlo        $zero # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253840u;
    ctx->lo = GPR_U64(ctx, 0);
label_253844:
    // 0x253844: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253848:
    // 0x253848: 0x70001  .word       0x00070001                   # INVALID     $zero, $a3, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253848u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253848 raw=0x00070001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25384c:
    // 0x25384c: 0x90008  .word       0x00090008                   # jr          $zero # 00090000 <InstrIdType: CPU_SPECIAL>
label_253850:
    if (ctx->pc == 0x253850u) {
        ctx->pc = 0x253850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25384Cu;
        // 0x253850: 0x14000e  .word       0x0014000E                   # INVALID     $zero, $s4, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x253850 raw=0x0014000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253854u;
        goto label_253854;
    }
    ctx->pc = 0x25384Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x253850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25384Cu;
        // 0x253850: 0x14000e  .word       0x0014000E                   # INVALID     $zero, $s4, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x253850 raw=0x0014000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25384Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253854u;
label_253854:
    // 0x253854: 0x17000f  .word       0x0017000F                   # sync # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253854u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_253858:
    // 0x253858: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253858u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_25385c:
    // 0x25385c: 0x9010f  .word       0x0009010F                   # sync # 00090000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25385cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_253860:
    // 0x253860: 0x20e0307  .word       0x020E0307                   # srav        $zero, $t6, $s0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253860u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 16) & 0x1F));
label_253864:
    // 0x253864: 0x1120004  sllv        $zero, $s2, $t0
    ctx->pc = 0x253864u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 8) & 0x1F));
label_253868:
    // 0x253868: 0x170100  sll         $zero, $s7, 4
    ctx->pc = 0x253868u;
    
label_25386c:
    // 0x25386c: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x25386cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253870:
    // 0x253870: 0x16010f  .word       0x0016010F                   # sync # 00160000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253870u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_253874:
    // 0x253874: 0x2010308  .word       0x02010308                   # jr          $s0 # 00010300 <InstrIdType: CPU_SPECIAL>
label_253878:
    if (ctx->pc == 0x253878u) {
        ctx->pc = 0x253878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253874u;
        // 0x253878: 0x20b0011  .word       0x020B0011                   # mthi        $s0 # 000B0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25387Cu;
        goto label_25387c;
    }
    ctx->pc = 0x253874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        ctx->pc = 0x253878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253874u;
        // 0x253878: 0x20b0011  .word       0x020B0011                   # mthi        $s0 # 000B0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 16);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253874u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25387Cu;
label_25387c:
    // 0x25387c: 0x170212  .word       0x00170212                   # mflo        $zero # 00170200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25387cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_253880:
    // 0x253880: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253880u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253884:
    // 0x253884: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x253884u;
    
label_253888:
    // 0x253888: 0x40002  srl         $zero, $a0, 0
    ctx->pc = 0x253888u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 4), 0));
label_25388c:
    // 0x25388c: 0x10e0208  .word       0x010E0208                   # jr          $t0 # 000E0200 <InstrIdType: CPU_SPECIAL>
label_253890:
    if (ctx->pc == 0x253890u) {
        ctx->pc = 0x253890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25388Cu;
        // 0x253890: 0x170112  .word       0x00170112                   # mflo        $zero # 00170100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->lo);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253894u;
        goto label_253894;
    }
    ctx->pc = 0x25388Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = 0x253890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25388Cu;
        // 0x253890: 0x170112  .word       0x00170112                   # mflo        $zero # 00170100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->lo);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25388Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253894u;
label_253894:
    // 0x253894: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253894u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253898:
    // 0x253898: 0x10016  dsrlv       $zero, $at, $zero
    ctx->pc = 0x253898u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_25389c:
    // 0x25389c: 0x140208  .word       0x00140208                   # jr          $zero # 00140200 <InstrIdType: CPU_SPECIAL>
label_2538a0:
    if (ctx->pc == 0x2538A0u) {
        ctx->pc = 0x2538A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25389Cu;
        // 0x2538a0: 0x10e010b  .word       0x010E010B                   # movn        $zero, $t0, $t6 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2538A4u;
        goto label_2538a4;
    }
    ctx->pc = 0x25389Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2538A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25389Cu;
        // 0x2538a0: 0x10e010b  .word       0x010E010B                   # movn        $zero, $t0, $t6 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25389Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2538A4u;
label_2538a4:
    // 0x2538a4: 0x17010f  .word       0x0017010F                   # sync # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2538a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2538a8:
    // 0x2538a8: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2538a8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2538ac:
    // 0x2538ac: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x2538acu;
    
label_2538b0:
    // 0x2538b0: 0x40002  srl         $zero, $a0, 0
    ctx->pc = 0x2538b0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 4), 0));
label_2538b4:
    // 0x2538b4: 0x10e0208  .word       0x010E0208                   # jr          $t0 # 000E0200 <InstrIdType: CPU_SPECIAL>
label_2538b8:
    if (ctx->pc == 0x2538B8u) {
        ctx->pc = 0x2538B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538B4u;
        // 0x2538b8: 0x170112  .word       0x00170112                   # mflo        $zero # 00170100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->lo);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2538BCu;
        goto label_2538bc;
    }
    ctx->pc = 0x2538B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = 0x2538B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538B4u;
        // 0x2538b8: 0x170112  .word       0x00170112                   # mflo        $zero # 00170100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->lo);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2538B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2538BCu;
label_2538bc:
    // 0x2538bc: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2538bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2538c0:
    // 0x2538c0: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x2538c0u;
    
label_2538c4:
    // 0x2538c4: 0x140208  .word       0x00140208                   # jr          $zero # 00140200 <InstrIdType: CPU_SPECIAL>
label_2538c8:
    if (ctx->pc == 0x2538C8u) {
        ctx->pc = 0x2538C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538C4u;
        // 0x2538c8: 0x10e010b  .word       0x010E010B                   # movn        $zero, $t0, $t6 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2538CCu;
        goto label_2538cc;
    }
    ctx->pc = 0x2538C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2538C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538C4u;
        // 0x2538c8: 0x10e010b  .word       0x010E010B                   # movn        $zero, $t0, $t6 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2538C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2538CCu;
label_2538cc:
    // 0x2538cc: 0x17010f  .word       0x0017010F                   # sync # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2538ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2538d0:
    // 0x2538d0: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2538d0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2538d4:
    // 0x2538d4: 0x0  nop
    ctx->pc = 0x2538d4u;
    // NOP
label_2538d8:
    // 0x2538d8: 0x0  nop
    ctx->pc = 0x2538d8u;
    // NOP
label_2538dc:
    // 0x2538dc: 0x0  nop
    ctx->pc = 0x2538dcu;
    // NOP
label_2538e0:
    // 0x2538e0: 0x50500  sll         $zero, $a1, 20
    ctx->pc = 0x2538e0u;
    
label_2538e4:
    // 0x2538e4: 0x10d0d01  .word       0x010D0D01                   # INVALID     $t0, $t5, 0xD01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2538e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2538E4 raw=0x010D0D01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2538e8:
    // 0x2538e8: 0x8101008  j           func_404020
label_2538ec:
    if (ctx->pc == 0x2538ECu) {
        ctx->pc = 0x2538ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538E8u;
        // 0x2538ec: 0x70f0f07  .word       0x070F0F07                   # INVALID     $t8, $t7, 0xF07 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0xF at 0x2538EC raw=0x070F0F07");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2538F0u;
        { ctx->pc = 0x2538f0; return; }
    }
    ctx->pc = 0x2538E8u;
    ctx->pc = 0x2538ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2538E8u;
    // 0x2538ec: 0x70f0f07  .word       0x070F0F07                   # INVALID     $t8, $t7, 0xF07 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//     throw std::runtime_error("Unhandled REGIMM instruction: 0xF at 0x2538EC raw=0x070F0F07");
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0x404020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x404020u, 0x2538E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2538F0u;
    ctx->pc = 0x2538f0u;
    return;
}
