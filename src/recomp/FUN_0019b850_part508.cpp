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


void FUN_0019b850_part508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x293140u: goto label_293140;
        case 0x293144u: goto label_293144;
        case 0x293148u: goto label_293148;
        case 0x29314cu: goto label_29314c;
        case 0x293150u: goto label_293150;
        case 0x293154u: goto label_293154;
        case 0x293158u: goto label_293158;
        case 0x29315cu: goto label_29315c;
        case 0x293160u: goto label_293160;
        case 0x293164u: goto label_293164;
        case 0x293168u: goto label_293168;
        case 0x29316cu: goto label_29316c;
        case 0x293170u: goto label_293170;
        case 0x293174u: goto label_293174;
        case 0x293178u: goto label_293178;
        case 0x29317cu: goto label_29317c;
        case 0x293180u: goto label_293180;
        case 0x293184u: goto label_293184;
        case 0x293188u: goto label_293188;
        case 0x29318cu: goto label_29318c;
        case 0x293190u: goto label_293190;
        case 0x293194u: goto label_293194;
        case 0x293198u: goto label_293198;
        case 0x29319cu: goto label_29319c;
        case 0x2931a0u: goto label_2931a0;
        case 0x2931a4u: goto label_2931a4;
        case 0x2931a8u: goto label_2931a8;
        case 0x2931acu: goto label_2931ac;
        case 0x2931b0u: goto label_2931b0;
        case 0x2931b4u: goto label_2931b4;
        case 0x2931b8u: goto label_2931b8;
        case 0x2931bcu: goto label_2931bc;
        case 0x2931c0u: goto label_2931c0;
        case 0x2931c4u: goto label_2931c4;
        case 0x2931c8u: goto label_2931c8;
        case 0x2931ccu: goto label_2931cc;
        case 0x2931d0u: goto label_2931d0;
        case 0x2931d4u: goto label_2931d4;
        case 0x2931d8u: goto label_2931d8;
        case 0x2931dcu: goto label_2931dc;
        case 0x2931e0u: goto label_2931e0;
        case 0x2931e4u: goto label_2931e4;
        case 0x2931e8u: goto label_2931e8;
        case 0x2931ecu: goto label_2931ec;
        case 0x2931f0u: goto label_2931f0;
        case 0x2931f4u: goto label_2931f4;
        case 0x2931f8u: goto label_2931f8;
        case 0x2931fcu: goto label_2931fc;
        case 0x293200u: goto label_293200;
        case 0x293204u: goto label_293204;
        case 0x293208u: goto label_293208;
        case 0x29320cu: goto label_29320c;
        case 0x293210u: goto label_293210;
        case 0x293214u: goto label_293214;
        case 0x293218u: goto label_293218;
        case 0x29321cu: goto label_29321c;
        case 0x293220u: goto label_293220;
        case 0x293224u: goto label_293224;
        case 0x293228u: goto label_293228;
        case 0x29322cu: goto label_29322c;
        case 0x293230u: goto label_293230;
        case 0x293234u: goto label_293234;
        case 0x293238u: goto label_293238;
        case 0x29323cu: goto label_29323c;
        case 0x293240u: goto label_293240;
        case 0x293244u: goto label_293244;
        case 0x293248u: goto label_293248;
        case 0x29324cu: goto label_29324c;
        case 0x293250u: goto label_293250;
        case 0x293254u: goto label_293254;
        case 0x293258u: goto label_293258;
        case 0x29325cu: goto label_29325c;
        case 0x293260u: goto label_293260;
        case 0x293264u: goto label_293264;
        case 0x293268u: goto label_293268;
        case 0x29326cu: goto label_29326c;
        case 0x293270u: goto label_293270;
        case 0x293274u: goto label_293274;
        case 0x293278u: goto label_293278;
        case 0x29327cu: goto label_29327c;
        case 0x293280u: goto label_293280;
        case 0x293284u: goto label_293284;
        case 0x293288u: goto label_293288;
        case 0x29328cu: goto label_29328c;
        case 0x293290u: goto label_293290;
        case 0x293294u: goto label_293294;
        case 0x293298u: goto label_293298;
        case 0x29329cu: goto label_29329c;
        case 0x2932a0u: goto label_2932a0;
        case 0x2932a4u: goto label_2932a4;
        case 0x2932a8u: goto label_2932a8;
        case 0x2932acu: goto label_2932ac;
        case 0x2932b0u: goto label_2932b0;
        case 0x2932b4u: goto label_2932b4;
        case 0x2932b8u: goto label_2932b8;
        case 0x2932bcu: goto label_2932bc;
        case 0x2932c0u: goto label_2932c0;
        case 0x2932c4u: goto label_2932c4;
        case 0x2932c8u: goto label_2932c8;
        case 0x2932ccu: goto label_2932cc;
        case 0x2932d0u: goto label_2932d0;
        case 0x2932d4u: goto label_2932d4;
        case 0x2932d8u: goto label_2932d8;
        case 0x2932dcu: goto label_2932dc;
        case 0x2932e0u: goto label_2932e0;
        case 0x2932e4u: goto label_2932e4;
        case 0x2932e8u: goto label_2932e8;
        case 0x2932ecu: goto label_2932ec;
        case 0x2932f0u: goto label_2932f0;
        case 0x2932f4u: goto label_2932f4;
        case 0x2932f8u: goto label_2932f8;
        case 0x2932fcu: goto label_2932fc;
        case 0x293300u: goto label_293300;
        case 0x293304u: goto label_293304;
        case 0x293308u: goto label_293308;
        case 0x29330cu: goto label_29330c;
        case 0x293310u: goto label_293310;
        case 0x293314u: goto label_293314;
        case 0x293318u: goto label_293318;
        case 0x29331cu: goto label_29331c;
        case 0x293320u: goto label_293320;
        case 0x293324u: goto label_293324;
        case 0x293328u: goto label_293328;
        case 0x29332cu: goto label_29332c;
        case 0x293330u: goto label_293330;
        case 0x293334u: goto label_293334;
        case 0x293338u: goto label_293338;
        case 0x29333cu: goto label_29333c;
        case 0x293340u: goto label_293340;
        case 0x293344u: goto label_293344;
        case 0x293348u: goto label_293348;
        case 0x29334cu: goto label_29334c;
        case 0x293350u: goto label_293350;
        case 0x293354u: goto label_293354;
        case 0x293358u: goto label_293358;
        case 0x29335cu: goto label_29335c;
        case 0x293360u: goto label_293360;
        case 0x293364u: goto label_293364;
        case 0x293368u: goto label_293368;
        case 0x29336cu: goto label_29336c;
        case 0x293370u: goto label_293370;
        case 0x293374u: goto label_293374;
        case 0x293378u: goto label_293378;
        case 0x29337cu: goto label_29337c;
        case 0x293380u: goto label_293380;
        case 0x293384u: goto label_293384;
        case 0x293388u: goto label_293388;
        case 0x29338cu: goto label_29338c;
        case 0x293390u: goto label_293390;
        case 0x293394u: goto label_293394;
        case 0x293398u: goto label_293398;
        case 0x29339cu: goto label_29339c;
        case 0x2933a0u: goto label_2933a0;
        case 0x2933a4u: goto label_2933a4;
        case 0x2933a8u: goto label_2933a8;
        case 0x2933acu: goto label_2933ac;
        case 0x2933b0u: goto label_2933b0;
        case 0x2933b4u: goto label_2933b4;
        case 0x2933b8u: goto label_2933b8;
        case 0x2933bcu: goto label_2933bc;
        case 0x2933c0u: goto label_2933c0;
        case 0x2933c4u: goto label_2933c4;
        case 0x2933c8u: goto label_2933c8;
        case 0x2933ccu: goto label_2933cc;
        case 0x2933d0u: goto label_2933d0;
        case 0x2933d4u: goto label_2933d4;
        case 0x2933d8u: goto label_2933d8;
        case 0x2933dcu: goto label_2933dc;
        case 0x2933e0u: goto label_2933e0;
        case 0x2933e4u: goto label_2933e4;
        case 0x2933e8u: goto label_2933e8;
        case 0x2933ecu: goto label_2933ec;
        case 0x2933f0u: goto label_2933f0;
        case 0x2933f4u: goto label_2933f4;
        case 0x2933f8u: goto label_2933f8;
        case 0x2933fcu: goto label_2933fc;
        case 0x293400u: goto label_293400;
        case 0x293404u: goto label_293404;
        case 0x293408u: goto label_293408;
        case 0x29340cu: goto label_29340c;
        case 0x293410u: goto label_293410;
        case 0x293414u: goto label_293414;
        case 0x293418u: goto label_293418;
        case 0x29341cu: goto label_29341c;
        case 0x293420u: goto label_293420;
        case 0x293424u: goto label_293424;
        case 0x293428u: goto label_293428;
        case 0x29342cu: goto label_29342c;
        case 0x293430u: goto label_293430;
        case 0x293434u: goto label_293434;
        case 0x293438u: goto label_293438;
        case 0x29343cu: goto label_29343c;
        case 0x293440u: goto label_293440;
        case 0x293444u: goto label_293444;
        case 0x293448u: goto label_293448;
        case 0x29344cu: goto label_29344c;
        case 0x293450u: goto label_293450;
        case 0x293454u: goto label_293454;
        case 0x293458u: goto label_293458;
        case 0x29345cu: goto label_29345c;
        case 0x293460u: goto label_293460;
        case 0x293464u: goto label_293464;
        case 0x293468u: goto label_293468;
        case 0x29346cu: goto label_29346c;
        case 0x293470u: goto label_293470;
        case 0x293474u: goto label_293474;
        case 0x293478u: goto label_293478;
        case 0x29347cu: goto label_29347c;
        case 0x293480u: goto label_293480;
        case 0x293484u: goto label_293484;
        case 0x293488u: goto label_293488;
        case 0x29348cu: goto label_29348c;
        case 0x293490u: goto label_293490;
        case 0x293494u: goto label_293494;
        case 0x293498u: goto label_293498;
        case 0x29349cu: goto label_29349c;
        case 0x2934a0u: goto label_2934a0;
        case 0x2934a4u: goto label_2934a4;
        case 0x2934a8u: goto label_2934a8;
        case 0x2934acu: goto label_2934ac;
        case 0x2934b0u: goto label_2934b0;
        case 0x2934b4u: goto label_2934b4;
        case 0x2934b8u: goto label_2934b8;
        case 0x2934bcu: goto label_2934bc;
        case 0x2934c0u: goto label_2934c0;
        case 0x2934c4u: goto label_2934c4;
        case 0x2934c8u: goto label_2934c8;
        case 0x2934ccu: goto label_2934cc;
        case 0x2934d0u: goto label_2934d0;
        case 0x2934d4u: goto label_2934d4;
        case 0x2934d8u: goto label_2934d8;
        case 0x2934dcu: goto label_2934dc;
        case 0x2934e0u: goto label_2934e0;
        case 0x2934e4u: goto label_2934e4;
        case 0x2934e8u: goto label_2934e8;
        case 0x2934ecu: goto label_2934ec;
        case 0x2934f0u: goto label_2934f0;
        case 0x2934f4u: goto label_2934f4;
        case 0x2934f8u: goto label_2934f8;
        case 0x2934fcu: goto label_2934fc;
        case 0x293500u: goto label_293500;
        case 0x293504u: goto label_293504;
        case 0x293508u: goto label_293508;
        case 0x29350cu: goto label_29350c;
        case 0x293510u: goto label_293510;
        case 0x293514u: goto label_293514;
        case 0x293518u: goto label_293518;
        case 0x29351cu: goto label_29351c;
        case 0x293520u: goto label_293520;
        case 0x293524u: goto label_293524;
        case 0x293528u: goto label_293528;
        case 0x29352cu: goto label_29352c;
        case 0x293530u: goto label_293530;
        case 0x293534u: goto label_293534;
        case 0x293538u: goto label_293538;
        case 0x29353cu: goto label_29353c;
        case 0x293540u: goto label_293540;
        case 0x293544u: goto label_293544;
        case 0x293548u: goto label_293548;
        case 0x29354cu: goto label_29354c;
        case 0x293550u: goto label_293550;
        case 0x293554u: goto label_293554;
        case 0x293558u: goto label_293558;
        case 0x29355cu: goto label_29355c;
        case 0x293560u: goto label_293560;
        case 0x293564u: goto label_293564;
        case 0x293568u: goto label_293568;
        case 0x29356cu: goto label_29356c;
        case 0x293570u: goto label_293570;
        case 0x293574u: goto label_293574;
        case 0x293578u: goto label_293578;
        case 0x29357cu: goto label_29357c;
        case 0x293580u: goto label_293580;
        case 0x293584u: goto label_293584;
        case 0x293588u: goto label_293588;
        case 0x29358cu: goto label_29358c;
        case 0x293590u: goto label_293590;
        case 0x293594u: goto label_293594;
        case 0x293598u: goto label_293598;
        case 0x29359cu: goto label_29359c;
        case 0x2935a0u: goto label_2935a0;
        case 0x2935a4u: goto label_2935a4;
        case 0x2935a8u: goto label_2935a8;
        case 0x2935acu: goto label_2935ac;
        case 0x2935b0u: goto label_2935b0;
        case 0x2935b4u: goto label_2935b4;
        case 0x2935b8u: goto label_2935b8;
        case 0x2935bcu: goto label_2935bc;
        case 0x2935c0u: goto label_2935c0;
        case 0x2935c4u: goto label_2935c4;
        case 0x2935c8u: goto label_2935c8;
        case 0x2935ccu: goto label_2935cc;
        case 0x2935d0u: goto label_2935d0;
        case 0x2935d4u: goto label_2935d4;
        case 0x2935d8u: goto label_2935d8;
        case 0x2935dcu: goto label_2935dc;
        case 0x2935e0u: goto label_2935e0;
        case 0x2935e4u: goto label_2935e4;
        case 0x2935e8u: goto label_2935e8;
        case 0x2935ecu: goto label_2935ec;
        case 0x2935f0u: goto label_2935f0;
        case 0x2935f4u: goto label_2935f4;
        case 0x2935f8u: goto label_2935f8;
        case 0x2935fcu: goto label_2935fc;
        case 0x293600u: goto label_293600;
        case 0x293604u: goto label_293604;
        case 0x293608u: goto label_293608;
        case 0x29360cu: goto label_29360c;
        case 0x293610u: goto label_293610;
        case 0x293614u: goto label_293614;
        case 0x293618u: goto label_293618;
        case 0x29361cu: goto label_29361c;
        case 0x293620u: goto label_293620;
        case 0x293624u: goto label_293624;
        case 0x293628u: goto label_293628;
        case 0x29362cu: goto label_29362c;
        case 0x293630u: goto label_293630;
        case 0x293634u: goto label_293634;
        case 0x293638u: goto label_293638;
        case 0x29363cu: goto label_29363c;
        case 0x293640u: goto label_293640;
        case 0x293644u: goto label_293644;
        case 0x293648u: goto label_293648;
        case 0x29364cu: goto label_29364c;
        case 0x293650u: goto label_293650;
        case 0x293654u: goto label_293654;
        case 0x293658u: goto label_293658;
        case 0x29365cu: goto label_29365c;
        case 0x293660u: goto label_293660;
        case 0x293664u: goto label_293664;
        case 0x293668u: goto label_293668;
        case 0x29366cu: goto label_29366c;
        case 0x293670u: goto label_293670;
        case 0x293674u: goto label_293674;
        case 0x293678u: goto label_293678;
        case 0x29367cu: goto label_29367c;
        case 0x293680u: goto label_293680;
        case 0x293684u: goto label_293684;
        case 0x293688u: goto label_293688;
        case 0x29368cu: goto label_29368c;
        case 0x293690u: goto label_293690;
        case 0x293694u: goto label_293694;
        case 0x293698u: goto label_293698;
        case 0x29369cu: goto label_29369c;
        case 0x2936a0u: goto label_2936a0;
        case 0x2936a4u: goto label_2936a4;
        case 0x2936a8u: goto label_2936a8;
        case 0x2936acu: goto label_2936ac;
        case 0x2936b0u: goto label_2936b0;
        case 0x2936b4u: goto label_2936b4;
        case 0x2936b8u: goto label_2936b8;
        case 0x2936bcu: goto label_2936bc;
        case 0x2936c0u: goto label_2936c0;
        case 0x2936c4u: goto label_2936c4;
        case 0x2936c8u: goto label_2936c8;
        case 0x2936ccu: goto label_2936cc;
        case 0x2936d0u: goto label_2936d0;
        case 0x2936d4u: goto label_2936d4;
        case 0x2936d8u: goto label_2936d8;
        case 0x2936dcu: goto label_2936dc;
        case 0x2936e0u: goto label_2936e0;
        case 0x2936e4u: goto label_2936e4;
        case 0x2936e8u: goto label_2936e8;
        case 0x2936ecu: goto label_2936ec;
        case 0x2936f0u: goto label_2936f0;
        case 0x2936f4u: goto label_2936f4;
        case 0x2936f8u: goto label_2936f8;
        case 0x2936fcu: goto label_2936fc;
        case 0x293700u: goto label_293700;
        case 0x293704u: goto label_293704;
        case 0x293708u: goto label_293708;
        case 0x29370cu: goto label_29370c;
        case 0x293710u: goto label_293710;
        case 0x293714u: goto label_293714;
        case 0x293718u: goto label_293718;
        case 0x29371cu: goto label_29371c;
        case 0x293720u: goto label_293720;
        case 0x293724u: goto label_293724;
        case 0x293728u: goto label_293728;
        case 0x29372cu: goto label_29372c;
        case 0x293730u: goto label_293730;
        case 0x293734u: goto label_293734;
        case 0x293738u: goto label_293738;
        case 0x29373cu: goto label_29373c;
        case 0x293740u: goto label_293740;
        case 0x293744u: goto label_293744;
        case 0x293748u: goto label_293748;
        case 0x29374cu: goto label_29374c;
        case 0x293750u: goto label_293750;
        case 0x293754u: goto label_293754;
        case 0x293758u: goto label_293758;
        case 0x29375cu: goto label_29375c;
        case 0x293760u: goto label_293760;
        case 0x293764u: goto label_293764;
        case 0x293768u: goto label_293768;
        case 0x29376cu: goto label_29376c;
        case 0x293770u: goto label_293770;
        case 0x293774u: goto label_293774;
        case 0x293778u: goto label_293778;
        case 0x29377cu: goto label_29377c;
        case 0x293780u: goto label_293780;
        case 0x293784u: goto label_293784;
        case 0x293788u: goto label_293788;
        case 0x29378cu: goto label_29378c;
        case 0x293790u: goto label_293790;
        case 0x293794u: goto label_293794;
        case 0x293798u: goto label_293798;
        case 0x29379cu: goto label_29379c;
        case 0x2937a0u: goto label_2937a0;
        case 0x2937a4u: goto label_2937a4;
        case 0x2937a8u: goto label_2937a8;
        case 0x2937acu: goto label_2937ac;
        case 0x2937b0u: goto label_2937b0;
        case 0x2937b4u: goto label_2937b4;
        case 0x2937b8u: goto label_2937b8;
        case 0x2937bcu: goto label_2937bc;
        case 0x2937c0u: goto label_2937c0;
        case 0x2937c4u: goto label_2937c4;
        case 0x2937c8u: goto label_2937c8;
        case 0x2937ccu: goto label_2937cc;
        case 0x2937d0u: goto label_2937d0;
        case 0x2937d4u: goto label_2937d4;
        case 0x2937d8u: goto label_2937d8;
        case 0x2937dcu: goto label_2937dc;
        case 0x2937e0u: goto label_2937e0;
        case 0x2937e4u: goto label_2937e4;
        case 0x2937e8u: goto label_2937e8;
        case 0x2937ecu: goto label_2937ec;
        case 0x2937f0u: goto label_2937f0;
        case 0x2937f4u: goto label_2937f4;
        case 0x2937f8u: goto label_2937f8;
        case 0x2937fcu: goto label_2937fc;
        case 0x293800u: goto label_293800;
        case 0x293804u: goto label_293804;
        case 0x293808u: goto label_293808;
        case 0x29380cu: goto label_29380c;
        case 0x293810u: goto label_293810;
        case 0x293814u: goto label_293814;
        case 0x293818u: goto label_293818;
        case 0x29381cu: goto label_29381c;
        case 0x293820u: goto label_293820;
        case 0x293824u: goto label_293824;
        case 0x293828u: goto label_293828;
        case 0x29382cu: goto label_29382c;
        case 0x293830u: goto label_293830;
        case 0x293834u: goto label_293834;
        case 0x293838u: goto label_293838;
        case 0x29383cu: goto label_29383c;
        case 0x293840u: goto label_293840;
        case 0x293844u: goto label_293844;
        case 0x293848u: goto label_293848;
        case 0x29384cu: goto label_29384c;
        case 0x293850u: goto label_293850;
        case 0x293854u: goto label_293854;
        case 0x293858u: goto label_293858;
        case 0x29385cu: goto label_29385c;
        case 0x293860u: goto label_293860;
        case 0x293864u: goto label_293864;
        case 0x293868u: goto label_293868;
        case 0x29386cu: goto label_29386c;
        case 0x293870u: goto label_293870;
        case 0x293874u: goto label_293874;
        case 0x293878u: goto label_293878;
        case 0x29387cu: goto label_29387c;
        case 0x293880u: goto label_293880;
        case 0x293884u: goto label_293884;
        case 0x293888u: goto label_293888;
        case 0x29388cu: goto label_29388c;
        case 0x293890u: goto label_293890;
        case 0x293894u: goto label_293894;
        case 0x293898u: goto label_293898;
        case 0x29389cu: goto label_29389c;
        case 0x2938a0u: goto label_2938a0;
        case 0x2938a4u: goto label_2938a4;
        case 0x2938a8u: goto label_2938a8;
        case 0x2938acu: goto label_2938ac;
        case 0x2938b0u: goto label_2938b0;
        case 0x2938b4u: goto label_2938b4;
        case 0x2938b8u: goto label_2938b8;
        case 0x2938bcu: goto label_2938bc;
        case 0x2938c0u: goto label_2938c0;
        case 0x2938c4u: goto label_2938c4;
        case 0x2938c8u: goto label_2938c8;
        case 0x2938ccu: goto label_2938cc;
        case 0x2938d0u: goto label_2938d0;
        case 0x2938d4u: goto label_2938d4;
        case 0x2938d8u: goto label_2938d8;
        case 0x2938dcu: goto label_2938dc;
        case 0x2938e0u: goto label_2938e0;
        case 0x2938e4u: goto label_2938e4;
        case 0x2938e8u: goto label_2938e8;
        case 0x2938ecu: goto label_2938ec;
        case 0x2938f0u: goto label_2938f0;
        case 0x2938f4u: goto label_2938f4;
        case 0x2938f8u: goto label_2938f8;
        case 0x2938fcu: goto label_2938fc;
        case 0x293900u: goto label_293900;
        case 0x293904u: goto label_293904;
        case 0x293908u: goto label_293908;
        case 0x29390cu: goto label_29390c;
        default: return;
    }

label_293140:
    // 0x293140: 0x9646  .word       0x00009646                   # srlv        $s2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293140u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293144:
    // 0x293144: 0x8  jr          $zero
label_293148:
    if (ctx->pc == 0x293148u) {
        ctx->pc = 0x293148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293144u;
        // 0x293148: 0x3810  mfhi        $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29314Cu;
        goto label_29314c;
    }
    ctx->pc = 0x293144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x293148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293144u;
        // 0x293148: 0x3810  mfhi        $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293144u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29314Cu;
label_29314c:
    // 0x29314c: 0x0  nop
    ctx->pc = 0x29314cu;
    // NOP
label_293150:
    // 0x293150: 0x964e  .word       0x0000964E                   # INVALID     $zero, $zero, -0x69B2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293150u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x293150 raw=0x0000964E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293154:
    // 0x293154: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x293154u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293158:
    // 0x293158: 0x3710  .word       0x00003710                   # mfhi        $a2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293158u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_29315c:
    // 0x29315c: 0x0  nop
    ctx->pc = 0x29315cu;
    // NOP
label_293160:
    // 0x293160: 0x9655  .word       0x00009655                   # INVALID     $zero, $zero, -0x69AB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x293160 raw=0x00009655"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293164:
    // 0x293164: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x293164u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293168:
    // 0x293168: 0x2ef0  tge         $zero, $zero, 187
    ctx->pc = 0x293168u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29316c:
    // 0x29316c: 0x0  nop
    ctx->pc = 0x29316cu;
    // NOP
label_293170:
    // 0x293170: 0x965b  .word       0x0000965B                   # divu        $s2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293170u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_293174:
    // 0x293174: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x293174u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293178:
    // 0x293178: 0x2a60  .word       0x00002A60                   # add         $a1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293178u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_29317c:
    // 0x29317c: 0x0  nop
    ctx->pc = 0x29317cu;
    // NOP
label_293180:
    // 0x293180: 0x9661  .word       0x00009661                   # addu        $s2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293184:
    // 0x293184: 0x9  jalr        $zero, $zero
label_293188:
    if (ctx->pc == 0x293188u) {
        ctx->pc = 0x293188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293184u;
        // 0x293188: 0x46d0  .word       0x000046D0                   # mfhi        $t0 # 000006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29318Cu;
        goto label_29318c;
    }
    ctx->pc = 0x293184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x293188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293184u;
        // 0x293188: 0x46d0  .word       0x000046D0                   # mfhi        $t0 # 000006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293184u, 0x29318Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29318Cu;
label_29318c:
    // 0x29318c: 0x0  nop
    ctx->pc = 0x29318cu;
    // NOP
label_293190:
    // 0x293190: 0x966a  .word       0x0000966A                   # slt         $s2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293190u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_293194:
    // 0x293194: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x293194u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293198:
    // 0x293198: 0x3170  tge         $zero, $zero, 197
    ctx->pc = 0x293198u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29319c:
    // 0x29319c: 0x0  nop
    ctx->pc = 0x29319cu;
    // NOP
label_2931a0:
    // 0x2931a0: 0x9671  tgeu        $zero, $zero, 601
    ctx->pc = 0x2931a0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2931a4:
    // 0x2931a4: 0x8  jr          $zero
label_2931a8:
    if (ctx->pc == 0x2931A8u) {
        ctx->pc = 0x2931A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931A4u;
        // 0x2931a8: 0x3db0  tge         $zero, $zero, 246 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2931ACu;
        goto label_2931ac;
    }
    ctx->pc = 0x2931A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2931A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931A4u;
        // 0x2931a8: 0x3db0  tge         $zero, $zero, 246 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2931A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2931ACu;
label_2931ac:
    // 0x2931ac: 0x0  nop
    ctx->pc = 0x2931acu;
    // NOP
label_2931b0:
    // 0x2931b0: 0x9679  .word       0x00009679                   # INVALID     $zero, $zero, -0x6987 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2931b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2931B0 raw=0x00009679"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2931b4:
    // 0x2931b4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2931b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2931b8:
    // 0x2931b8: 0x2ea0  .word       0x00002EA0                   # add         $a1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2931b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_2931bc:
    // 0x2931bc: 0x0  nop
    ctx->pc = 0x2931bcu;
    // NOP
label_2931c0:
    // 0x2931c0: 0x967f  dsra32      $s2, $zero, 25
    ctx->pc = 0x2931c0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 0) >> (32 + 25));
label_2931c4:
    // 0x2931c4: 0xc  syscall     0
    ctx->pc = 0x2931c4u;
    ctx->pc = 0x2931C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2931c8:
    // 0x2931c8: 0x5c70  tge         $zero, $zero, 369
    ctx->pc = 0x2931c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2931cc:
    // 0x2931cc: 0x0  nop
    ctx->pc = 0x2931ccu;
    // NOP
label_2931d0:
    // 0x2931d0: 0x968b  .word       0x0000968B                   # movn        $s2, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2931d0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_2931d4:
    // 0x2931d4: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2931d4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2931d8:
    // 0x2931d8: 0x4fe0  .word       0x00004FE0                   # add         $t1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2931d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2931dc:
    // 0x2931dc: 0x0  nop
    ctx->pc = 0x2931dcu;
    // NOP
label_2931e0:
    // 0x2931e0: 0x9695  .word       0x00009695                   # INVALID     $zero, $zero, -0x696B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2931e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2931E0 raw=0x00009695"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2931e4:
    // 0x2931e4: 0x10  mfhi        $zero
    ctx->pc = 0x2931e4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2931e8:
    // 0x2931e8: 0x7b30  tge         $zero, $zero, 492
    ctx->pc = 0x2931e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2931ec:
    // 0x2931ec: 0x0  nop
    ctx->pc = 0x2931ecu;
    // NOP
label_2931f0:
    // 0x2931f0: 0x96a5  .word       0x000096A5                   # move        $s2, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2931f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2931f4:
    // 0x2931f4: 0xd  break       0
    ctx->pc = 0x2931f4u;
    runtime->handleBreak(rdram, ctx);
label_2931f8:
    // 0x2931f8: 0x6720  .word       0x00006720                   # add         $t4, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2931f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2931fc:
    // 0x2931fc: 0x0  nop
    ctx->pc = 0x2931fcu;
    // NOP
label_293200:
    // 0x293200: 0x96b2  tlt         $zero, $zero, 602
    ctx->pc = 0x293200u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293204:
    // 0x293204: 0x9  jalr        $zero, $zero
label_293208:
    if (ctx->pc == 0x293208u) {
        ctx->pc = 0x293208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293204u;
        // 0x293208: 0x4270  tge         $zero, $zero, 265 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29320Cu;
        goto label_29320c;
    }
    ctx->pc = 0x293204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x293208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293204u;
        // 0x293208: 0x4270  tge         $zero, $zero, 265 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293204u, 0x29320Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29320Cu;
label_29320c:
    // 0x29320c: 0x0  nop
    ctx->pc = 0x29320cu;
    // NOP
label_293210:
    // 0x293210: 0x96bb  dsra        $s2, $zero, 26
    ctx->pc = 0x293210u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 0) >> 26);
label_293214:
    // 0x293214: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x293214u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293218:
    // 0x293218: 0x2e30  tge         $zero, $zero, 184
    ctx->pc = 0x293218u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29321c:
    // 0x29321c: 0x0  nop
    ctx->pc = 0x29321cu;
    // NOP
label_293220:
    // 0x293220: 0x96c1  .word       0x000096C1                   # INVALID     $zero, $zero, -0x693F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293220u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293220 raw=0x000096C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293224:
    // 0x293224: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x293224u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_293228:
    // 0x293228: 0x5050  .word       0x00005050                   # mfhi        $t2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293228u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_29322c:
    // 0x29322c: 0x0  nop
    ctx->pc = 0x29322cu;
    // NOP
label_293230:
    // 0x293230: 0x96cc  syscall     603
    ctx->pc = 0x293230u;
    ctx->pc = 0x293234u;
runtime->handleSyscall(rdram, ctx, 0x25Bu);
label_293234:
    // 0x293234: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x293234u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_293238:
    // 0x293238: 0x4f30  tge         $zero, $zero, 316
    ctx->pc = 0x293238u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29323c:
    // 0x29323c: 0x0  nop
    ctx->pc = 0x29323cu;
    // NOP
label_293240:
    // 0x293240: 0x96d6  .word       0x000096D6                   # dsrlv       $s2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293240u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_293244:
    // 0x293244: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x293244u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293248:
    // 0x293248: 0x31a0  .word       0x000031A0                   # add         $a2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293248u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_29324c:
    // 0x29324c: 0x0  nop
    ctx->pc = 0x29324cu;
    // NOP
label_293250:
    // 0x293250: 0x96dd  .word       0x000096DD                   # dmultu      $zero, $zero # 000096C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293250u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x293250 raw=0x000096DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293254:
    // 0x293254: 0x8  jr          $zero
label_293258:
    if (ctx->pc == 0x293258u) {
        ctx->pc = 0x293258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293254u;
        // 0x293258: 0x3f30  tge         $zero, $zero, 252 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29325Cu;
        goto label_29325c;
    }
    ctx->pc = 0x293254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x293258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293254u;
        // 0x293258: 0x3f30  tge         $zero, $zero, 252 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293254u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29325Cu;
label_29325c:
    // 0x29325c: 0x0  nop
    ctx->pc = 0x29325cu;
    // NOP
label_293260:
    // 0x293260: 0x96e5  .word       0x000096E5                   # move        $s2, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293260u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_293264:
    // 0x293264: 0x8  jr          $zero
label_293268:
    if (ctx->pc == 0x293268u) {
        ctx->pc = 0x293268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293264u;
        // 0x293268: 0x3cb0  tge         $zero, $zero, 242 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29326Cu;
        goto label_29326c;
    }
    ctx->pc = 0x293264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x293268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293264u;
        // 0x293268: 0x3cb0  tge         $zero, $zero, 242 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293264u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29326Cu;
label_29326c:
    // 0x29326c: 0x0  nop
    ctx->pc = 0x29326cu;
    // NOP
label_293270:
    // 0x293270: 0x96ed  .word       0x000096ED                   # daddu       $s2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293274:
    // 0x293274: 0x8  jr          $zero
label_293278:
    if (ctx->pc == 0x293278u) {
        ctx->pc = 0x293278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293274u;
        // 0x293278: 0x3ee0  .word       0x00003EE0                   # add         $a3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29327Cu;
        goto label_29327c;
    }
    ctx->pc = 0x293274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x293278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293274u;
        // 0x293278: 0x3ee0  .word       0x00003EE0                   # add         $a3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293274u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29327Cu;
label_29327c:
    // 0x29327c: 0x0  nop
    ctx->pc = 0x29327cu;
    // NOP
label_293280:
    // 0x293280: 0x96f5  .word       0x000096F5                   # INVALID     $zero, $zero, -0x690B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293280u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x293280 raw=0x000096F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293284:
    // 0x293284: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x293284u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_293288:
    // 0x293288: 0x53a0  .word       0x000053A0                   # add         $t2, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293288u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_29328c:
    // 0x29328c: 0x0  nop
    ctx->pc = 0x29328cu;
    // NOP
label_293290:
    // 0x293290: 0x9700  sll         $s2, $zero, 28
    ctx->pc = 0x293290u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_293294:
    // 0x293294: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x293294u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_293298:
    // 0x293298: 0x5170  tge         $zero, $zero, 325
    ctx->pc = 0x293298u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29329c:
    // 0x29329c: 0x0  nop
    ctx->pc = 0x29329cu;
    // NOP
label_2932a0:
    // 0x2932a0: 0x970b  .word       0x0000970B                   # movn        $s2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2932a0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_2932a4:
    // 0x2932a4: 0xc  syscall     0
    ctx->pc = 0x2932a4u;
    ctx->pc = 0x2932A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_2932a8:
    // 0x2932a8: 0x5b40  sll         $t3, $zero, 13
    ctx->pc = 0x2932a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_2932ac:
    // 0x2932ac: 0x0  nop
    ctx->pc = 0x2932acu;
    // NOP
label_2932b0:
    // 0x2932b0: 0x9717  .word       0x00009717                   # dsrav       $s2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2932b0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2932b4:
    // 0x2932b4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2932b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2932b8:
    // 0x2932b8: 0x3790  .word       0x00003790                   # mfhi        $a2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2932b8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2932bc:
    // 0x2932bc: 0x0  nop
    ctx->pc = 0x2932bcu;
    // NOP
label_2932c0:
    // 0x2932c0: 0x971e  .word       0x0000971E                   # ddiv        $s2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2932c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2932C0 raw=0x0000971E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2932c4:
    // 0x2932c4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2932c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2932C4 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2932c8:
    // 0x2932c8: 0x2790  .word       0x00002790                   # mfhi        $a0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2932c8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2932cc:
    // 0x2932cc: 0x0  nop
    ctx->pc = 0x2932ccu;
    // NOP
label_2932d0:
    // 0x2932d0: 0x9723  .word       0x00009723                   # negu        $s2, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2932d0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2932d4:
    // 0x2932d4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2932d4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2932d8:
    // 0x2932d8: 0x3080  sll         $a2, $zero, 2
    ctx->pc = 0x2932d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2932dc:
    // 0x2932dc: 0x0  nop
    ctx->pc = 0x2932dcu;
    // NOP
label_2932e0:
    // 0x2932e0: 0x972a  .word       0x0000972A                   # slt         $s2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2932e0u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2932e4:
    // 0x2932e4: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2932e4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2932e8:
    // 0x2932e8: 0x49d0  .word       0x000049D0                   # mfhi        $t1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2932e8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2932ec:
    // 0x2932ec: 0x0  nop
    ctx->pc = 0x2932ecu;
    // NOP
label_2932f0:
    // 0x2932f0: 0x9734  teq         $zero, $zero, 604
    ctx->pc = 0x2932f0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2932f4:
    // 0x2932f4: 0x9  jalr        $zero, $zero
label_2932f8:
    if (ctx->pc == 0x2932F8u) {
        ctx->pc = 0x2932F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932F4u;
        // 0x2932f8: 0x4630  tge         $zero, $zero, 280 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2932FCu;
        goto label_2932fc;
    }
    ctx->pc = 0x2932F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2932F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932F4u;
        // 0x2932f8: 0x4630  tge         $zero, $zero, 280 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2932F4u, 0x2932FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2932FCu;
label_2932fc:
    // 0x2932fc: 0x0  nop
    ctx->pc = 0x2932fcu;
    // NOP
label_293300:
    // 0x293300: 0x973d  .word       0x0000973D                   # INVALID     $zero, $zero, -0x68C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293300u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x293300 raw=0x0000973D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293304:
    // 0x293304: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x293304u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293308:
    // 0x293308: 0x1f90  .word       0x00001F90                   # mfhi        $v1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293308u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_29330c:
    // 0x29330c: 0x0  nop
    ctx->pc = 0x29330cu;
    // NOP
label_293310:
    // 0x293310: 0x9741  .word       0x00009741                   # INVALID     $zero, $zero, -0x68BF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293310u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293310 raw=0x00009741"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293314:
    // 0x293314: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x293314u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_293318:
    // 0x293318: 0x4bc0  sll         $t1, $zero, 15
    ctx->pc = 0x293318u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_29331c:
    // 0x29331c: 0x0  nop
    ctx->pc = 0x29331cu;
    // NOP
label_293320:
    // 0x293320: 0x974b  .word       0x0000974B                   # movn        $s2, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293320u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_293324:
    // 0x293324: 0x8  jr          $zero
label_293328:
    if (ctx->pc == 0x293328u) {
        ctx->pc = 0x293328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293324u;
        // 0x293328: 0x3cd0  .word       0x00003CD0                   # mfhi        $a3 # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29332Cu;
        goto label_29332c;
    }
    ctx->pc = 0x293324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x293328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293324u;
        // 0x293328: 0x3cd0  .word       0x00003CD0                   # mfhi        $a3 # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293324u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29332Cu;
label_29332c:
    // 0x29332c: 0x0  nop
    ctx->pc = 0x29332cu;
    // NOP
label_293330:
    // 0x293330: 0x9753  .word       0x00009753                   # mtlo        $zero # 00009740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293330u;
    ctx->lo = GPR_U64(ctx, 0);
label_293334:
    // 0x293334: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293334u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x293334 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293338:
    // 0x293338: 0x68d0  .word       0x000068D0                   # mfhi        $t5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293338u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_29333c:
    // 0x29333c: 0x0  nop
    ctx->pc = 0x29333cu;
    // NOP
label_293340:
    // 0x293340: 0x9761  .word       0x00009761                   # addu        $s2, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293340u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293344:
    // 0x293344: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x293344u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293348:
    // 0x293348: 0x3300  sll         $a2, $zero, 12
    ctx->pc = 0x293348u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_29334c:
    // 0x29334c: 0x0  nop
    ctx->pc = 0x29334cu;
    // NOP
label_293350:
    // 0x293350: 0x9768  .word       0x00009768                   # mfsa        $s2 # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x293350u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_293354:
    // 0x293354: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x293354u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_293358:
    // 0x293358: 0x4830  tge         $zero, $zero, 288
    ctx->pc = 0x293358u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29335c:
    // 0x29335c: 0x0  nop
    ctx->pc = 0x29335cu;
    // NOP
label_293360:
    // 0x293360: 0x9772  tlt         $zero, $zero, 605
    ctx->pc = 0x293360u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293364:
    // 0x293364: 0x8  jr          $zero
label_293368:
    if (ctx->pc == 0x293368u) {
        ctx->pc = 0x293368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293364u;
        // 0x293368: 0x3990  .word       0x00003990                   # mfhi        $a3 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29336Cu;
        goto label_29336c;
    }
    ctx->pc = 0x293364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x293368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293364u;
        // 0x293368: 0x3990  .word       0x00003990                   # mfhi        $a3 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293364u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29336Cu;
label_29336c:
    // 0x29336c: 0x0  nop
    ctx->pc = 0x29336cu;
    // NOP
label_293370:
    // 0x293370: 0x977a  dsrl        $s2, $zero, 29
    ctx->pc = 0x293370u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> 29);
label_293374:
    // 0x293374: 0x9  jalr        $zero, $zero
label_293378:
    if (ctx->pc == 0x293378u) {
        ctx->pc = 0x293378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293374u;
        // 0x293378: 0x44d0  .word       0x000044D0                   # mfhi        $t0 # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29337Cu;
        goto label_29337c;
    }
    ctx->pc = 0x293374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x293378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293374u;
        // 0x293378: 0x44d0  .word       0x000044D0                   # mfhi        $t0 # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293374u, 0x29337Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29337Cu;
label_29337c:
    // 0x29337c: 0x0  nop
    ctx->pc = 0x29337cu;
    // NOP
label_293380:
    // 0x293380: 0x9783  sra         $s2, $zero, 30
    ctx->pc = 0x293380u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 0), 30));
label_293384:
    // 0x293384: 0x8  jr          $zero
label_293388:
    if (ctx->pc == 0x293388u) {
        ctx->pc = 0x293388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293384u;
        // 0x293388: 0x3e90  .word       0x00003E90                   # mfhi        $a3 # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29338Cu;
        goto label_29338c;
    }
    ctx->pc = 0x293384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x293388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293384u;
        // 0x293388: 0x3e90  .word       0x00003E90                   # mfhi        $a3 # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293384u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29338Cu;
label_29338c:
    // 0x29338c: 0x0  nop
    ctx->pc = 0x29338cu;
    // NOP
label_293390:
    // 0x293390: 0x978b  .word       0x0000978B                   # movn        $s2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293390u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_293394:
    // 0x293394: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x293394u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_293398:
    // 0x293398: 0x54f0  tge         $zero, $zero, 339
    ctx->pc = 0x293398u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29339c:
    // 0x29339c: 0x0  nop
    ctx->pc = 0x29339cu;
    // NOP
label_2933a0:
    // 0x2933a0: 0x9796  .word       0x00009796                   # dsrlv       $s2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2933a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2933a4:
    // 0x2933a4: 0x8  jr          $zero
label_2933a8:
    if (ctx->pc == 0x2933A8u) {
        ctx->pc = 0x2933A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933A4u;
        // 0x2933a8: 0x3bd0  .word       0x00003BD0                   # mfhi        $a3 # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2933ACu;
        goto label_2933ac;
    }
    ctx->pc = 0x2933A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2933A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933A4u;
        // 0x2933a8: 0x3bd0  .word       0x00003BD0                   # mfhi        $a3 # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2933A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2933ACu;
label_2933ac:
    // 0x2933ac: 0x0  nop
    ctx->pc = 0x2933acu;
    // NOP
label_2933b0:
    // 0x2933b0: 0x979e  .word       0x0000979E                   # ddiv        $s2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2933b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2933B0 raw=0x0000979E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2933b4:
    // 0x2933b4: 0x9  jalr        $zero, $zero
label_2933b8:
    if (ctx->pc == 0x2933B8u) {
        ctx->pc = 0x2933B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933B4u;
        // 0x2933b8: 0x4340  sll         $t0, $zero, 13 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2933BCu;
        goto label_2933bc;
    }
    ctx->pc = 0x2933B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2933B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933B4u;
        // 0x2933b8: 0x4340  sll         $t0, $zero, 13 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2933B4u, 0x2933BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2933BCu;
label_2933bc:
    // 0x2933bc: 0x0  nop
    ctx->pc = 0x2933bcu;
    // NOP
label_2933c0:
    // 0x2933c0: 0x97a7  .word       0x000097A7                   # not         $s2, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2933c0u;
    SET_GPR_U64(ctx, 18, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2933c4:
    // 0x2933c4: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x2933c4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2933c8:
    // 0x2933c8: 0x5030  tge         $zero, $zero, 320
    ctx->pc = 0x2933c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2933cc:
    // 0x2933cc: 0x0  nop
    ctx->pc = 0x2933ccu;
    // NOP
label_2933d0:
    // 0x2933d0: 0x97b2  tlt         $zero, $zero, 606
    ctx->pc = 0x2933d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2933d4:
    // 0x2933d4: 0xf  sync
    ctx->pc = 0x2933d4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2933d8:
    // 0x2933d8: 0x7440  sll         $t6, $zero, 17
    ctx->pc = 0x2933d8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2933dc:
    // 0x2933dc: 0x0  nop
    ctx->pc = 0x2933dcu;
    // NOP
label_2933e0:
    // 0x2933e0: 0x97c1  .word       0x000097C1                   # INVALID     $zero, $zero, -0x683F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2933e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2933E0 raw=0x000097C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2933e4:
    // 0x2933e4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2933e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2933E4 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2933e8:
    // 0x2933e8: 0x2250  .word       0x00002250                   # mfhi        $a0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2933e8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2933ec:
    // 0x2933ec: 0x0  nop
    ctx->pc = 0x2933ecu;
    // NOP
label_2933f0:
    // 0x2933f0: 0x97c6  .word       0x000097C6                   # srlv        $s2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2933f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2933f4:
    // 0x2933f4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2933f4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2933f8:
    // 0x2933f8: 0x3440  sll         $a2, $zero, 17
    ctx->pc = 0x2933f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2933fc:
    // 0x2933fc: 0x0  nop
    ctx->pc = 0x2933fcu;
    // NOP
label_293400:
    // 0x293400: 0x97cd  break       0, 607
    ctx->pc = 0x293400u;
    runtime->handleBreak(rdram, ctx);
label_293404:
    // 0x293404: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x293404u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293408:
    // 0x293408: 0x1d60  .word       0x00001D60                   # add         $v1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293408u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29340c:
    // 0x29340c: 0x0  nop
    ctx->pc = 0x29340cu;
    // NOP
label_293410:
    // 0x293410: 0x97d1  .word       0x000097D1                   # mthi        $zero # 000097C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293410u;
    ctx->hi = GPR_U64(ctx, 0);
label_293414:
    // 0x293414: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293414u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x293414 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293418:
    // 0x293418: 0x20c0  sll         $a0, $zero, 3
    ctx->pc = 0x293418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29341c:
    // 0x29341c: 0x0  nop
    ctx->pc = 0x29341cu;
    // NOP
label_293420:
    // 0x293420: 0x97d6  .word       0x000097D6                   # dsrlv       $s2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293420u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_293424:
    // 0x293424: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x293424u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293428:
    // 0x293428: 0x33b0  tge         $zero, $zero, 206
    ctx->pc = 0x293428u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29342c:
    // 0x29342c: 0x0  nop
    ctx->pc = 0x29342cu;
    // NOP
label_293430:
    // 0x293430: 0x97dd  .word       0x000097DD                   # dmultu      $zero, $zero # 000097C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293430u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x293430 raw=0x000097DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293434:
    // 0x293434: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x293434u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_293438:
    // 0x293438: 0xdc0  sll         $at, $zero, 23
    ctx->pc = 0x293438u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_29343c:
    // 0x29343c: 0x0  nop
    ctx->pc = 0x29343cu;
    // NOP
label_293440:
    // 0x293440: 0x97df  .word       0x000097DF                   # ddivu       $s2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293440u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x293440 raw=0x000097DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293444:
    // 0x293444: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x293444u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_293448:
    // 0x293448: 0xdc0  sll         $at, $zero, 23
    ctx->pc = 0x293448u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_29344c:
    // 0x29344c: 0x0  nop
    ctx->pc = 0x29344cu;
    // NOP
label_293450:
    // 0x293450: 0x97e1  .word       0x000097E1                   # addu        $s2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293450u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293454:
    // 0x293454: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x293454u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_293458:
    // 0x293458: 0x14a0  .word       0x000014A0                   # add         $v0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293458u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_29345c:
    // 0x29345c: 0x0  nop
    ctx->pc = 0x29345cu;
    // NOP
label_293460:
    // 0x293460: 0x97e4  .word       0x000097E4                   # and         $s2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293460u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_293464:
    // 0x293464: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x293464u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293468:
    // 0x293468: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x293468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29346c:
    // 0x29346c: 0x0  nop
    ctx->pc = 0x29346cu;
    // NOP
label_293470:
    // 0x293470: 0x97e8  .word       0x000097E8                   # mfsa        $s2 # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x293470u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_293474:
    // 0x293474: 0x17b  dsra        $zero, $zero, 5
    ctx->pc = 0x293474u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 5);
label_293478:
    // 0x293478: 0xbd690  .word       0x000BD690                   # mfhi        $k0 # 000B0680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293478u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29347c:
    // 0x29347c: 0x0  nop
    ctx->pc = 0x29347cu;
    // NOP
label_293480:
    // 0x293480: 0x9963  .word       0x00009963                   # negu        $s3, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293480u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293484:
    // 0x293484: 0x139  .word       0x00000139                   # INVALID     $zero, $zero, 0x139 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293484u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x293484 raw=0x00000139"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293488:
    // 0x293488: 0x9c710  .word       0x0009C710                   # mfhi        $t8 # 00090700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293488u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_29348c:
    // 0x29348c: 0x0  nop
    ctx->pc = 0x29348cu;
    // NOP
label_293490:
    // 0x293490: 0x9a9c  .word       0x00009A9C                   # dmult       $zero, $zero # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x293490 raw=0x00009A9C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293494:
    // 0x293494: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x293494u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_293498:
    // 0x293498: 0xff044  .word       0x000FF044                   # sllv        $fp, $t7, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293498u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 0) & 0x1F));
label_29349c:
    // 0x29349c: 0x0  nop
    ctx->pc = 0x29349cu;
    // NOP
label_2934a0:
    // 0x2934a0: 0x9c9b  .word       0x00009C9B                   # divu        $s3, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2934a0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2934a4:
    // 0x2934a4: 0x225  .word       0x00000225                   # move        $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2934a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2934a8:
    // 0x2934a8: 0x112554  .word       0x00112554                   # dsllv       $a0, $s1, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2934a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (GPR_U32(ctx, 0) & 0x3F));
label_2934ac:
    // 0x2934ac: 0x0  nop
    ctx->pc = 0x2934acu;
    // NOP
label_2934b0:
    // 0x2934b0: 0x9ec0  sll         $s3, $zero, 27
    ctx->pc = 0x2934b0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2934b4:
    // 0x2934b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2934b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2934B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2934b8:
    // 0x2934b8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2934b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2934bc:
    // 0x2934bc: 0x0  nop
    ctx->pc = 0x2934bcu;
    // NOP
label_2934c0:
    // 0x2934c0: 0x9ec1  .word       0x00009EC1                   # INVALID     $zero, $zero, -0x613F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2934c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2934C0 raw=0x00009EC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2934c4:
    // 0x2934c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2934c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2934C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2934c8:
    // 0x2934c8: 0x4c  syscall     1
    ctx->pc = 0x2934c8u;
    ctx->pc = 0x2934CCu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_2934cc:
    // 0x2934cc: 0x0  nop
    ctx->pc = 0x2934ccu;
    // NOP
label_2934d0:
    // 0x2934d0: 0x9ec2  srl         $s3, $zero, 27
    ctx->pc = 0x2934d0u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 0), 27));
label_2934d4:
    // 0x2934d4: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x2934d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2934D4 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2934d8:
    // 0x2934d8: 0xe240  sll         $gp, $zero, 9
    ctx->pc = 0x2934d8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2934dc:
    // 0x2934dc: 0x0  nop
    ctx->pc = 0x2934dcu;
    // NOP
label_2934e0:
    // 0x2934e0: 0x9edf  .word       0x00009EDF                   # ddivu       $s3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2934e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2934E0 raw=0x00009EDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2934e4:
    // 0x2934e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2934e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2934E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2934e8:
    // 0x2934e8: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x2934e8u;
    
label_2934ec:
    // 0x2934ec: 0x0  nop
    ctx->pc = 0x2934ecu;
    // NOP
label_2934f0:
    // 0x2934f0: 0x9ee0  .word       0x00009EE0                   # add         $s3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2934f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2934f4:
    // 0x2934f4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x2934f4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2934f8:
    // 0x2934f8: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2934f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2934fc:
    // 0x2934fc: 0x0  nop
    ctx->pc = 0x2934fcu;
    // NOP
label_293500:
    // 0x293500: 0x9f01  .word       0x00009F01                   # INVALID     $zero, $zero, -0x60FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293500u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293500 raw=0x00009F01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293504:
    // 0x293504: 0x2d  daddu       $zero, $zero, $zero
    ctx->pc = 0x293504u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293508:
    // 0x293508: 0x161b0  tge         $zero, $at, 390
    ctx->pc = 0x293508u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29350c:
    // 0x29350c: 0x0  nop
    ctx->pc = 0x29350cu;
    // NOP
label_293510:
    // 0x293510: 0x9f2e  .word       0x00009F2E                   # dsub        $s3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293510u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, r); }
label_293514:
    // 0x293514: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x293514u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_293518:
    // 0x293518: 0x1120  .word       0x00001120                   # add         $v0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293518u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_29351c:
    // 0x29351c: 0x0  nop
    ctx->pc = 0x29351cu;
    // NOP
label_293520:
    // 0x293520: 0x9f31  tgeu        $zero, $zero, 636
    ctx->pc = 0x293520u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293524:
    // 0x293524: 0xad  .word       0x000000AD                   # daddu       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293524u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293528:
    // 0x293528: 0x565b0  tge         $zero, $a1, 406
    ctx->pc = 0x293528u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_29352c:
    // 0x29352c: 0x0  nop
    ctx->pc = 0x29352cu;
    // NOP
label_293530:
    // 0x293530: 0x9fde  .word       0x00009FDE                   # ddiv        $s3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293530u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x293530 raw=0x00009FDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293534:
    // 0x293534: 0x16f  .word       0x0000016F                   # dsubu       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293534u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_293538:
    // 0x293538: 0xb71fc  dsll32      $t6, $t3, 7
    ctx->pc = 0x293538u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) << (32 + 7));
label_29353c:
    // 0x29353c: 0x0  nop
    ctx->pc = 0x29353cu;
    // NOP
label_293540:
    // 0x293540: 0xa14d  break       0, 645
    ctx->pc = 0x293540u;
    runtime->handleBreak(rdram, ctx);
label_293544:
    // 0x293544: 0x98  .word       0x00000098                   # mult        $zero, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x293544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_293548:
    // 0x293548: 0x4bdd0  .word       0x0004BDD0                   # mfhi        $s7 # 000405C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293548u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_29354c:
    // 0x29354c: 0x0  nop
    ctx->pc = 0x29354cu;
    // NOP
label_293550:
    // 0x293550: 0xa1e5  .word       0x0000A1E5                   # move        $s4, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293550u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_293554:
    // 0x293554: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x293554u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293558:
    // 0x293558: 0x17a20  .word       0x00017A20                   # add         $t7, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293558u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_29355c:
    // 0x29355c: 0x0  nop
    ctx->pc = 0x29355cu;
    // NOP
label_293560:
    // 0x293560: 0xa215  .word       0x0000A215                   # INVALID     $zero, $zero, -0x5DEB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293560u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x293560 raw=0x0000A215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293564:
    // 0x293564: 0x4e  .word       0x0000004E                   # INVALID     $zero, $zero, 0x4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293564u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x293564 raw=0x0000004E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293568:
    // 0x293568: 0x26c20  .word       0x00026C20                   # add         $t5, $zero, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293568u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_29356c:
    // 0x29356c: 0x0  nop
    ctx->pc = 0x29356cu;
    // NOP
label_293570:
    // 0x293570: 0xa263  .word       0x0000A263                   # negu        $s4, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293570u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293574:
    // 0x293574: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x293574u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293578:
    // 0x293578: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x293578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29357c:
    // 0x29357c: 0x0  nop
    ctx->pc = 0x29357cu;
    // NOP
label_293580:
    // 0x293580: 0xa267  .word       0x0000A267                   # not         $s4, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293580u;
    SET_GPR_U64(ctx, 20, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_293584:
    // 0x293584: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293584u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293584 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293588:
    // 0x293588: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x293588u;
    
label_29358c:
    // 0x29358c: 0x0  nop
    ctx->pc = 0x29358cu;
    // NOP
label_293590:
    // 0x293590: 0xa268  .word       0x0000A268                   # mfsa        $s4 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x293590u;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_293594:
    // 0x293594: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x293594u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_293598:
    // 0x293598: 0x14a0  .word       0x000014A0                   # add         $v0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293598u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_29359c:
    // 0x29359c: 0x0  nop
    ctx->pc = 0x29359cu;
    // NOP
label_2935a0:
    // 0x2935a0: 0xa26b  .word       0x0000A26B                   # sltu        $s4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2935a0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2935a4:
    // 0x2935a4: 0x178  dsll        $zero, $zero, 5
    ctx->pc = 0x2935a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 5);
label_2935a8:
    // 0x2935a8: 0xbbfc0  sll         $s7, $t3, 31
    ctx->pc = 0x2935a8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 11), 31));
label_2935ac:
    // 0x2935ac: 0x0  nop
    ctx->pc = 0x2935acu;
    // NOP
label_2935b0:
    // 0x2935b0: 0xa3e3  .word       0x0000A3E3                   # negu        $s4, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2935b0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2935b4:
    // 0x2935b4: 0xdf  .word       0x000000DF                   # ddivu       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2935b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2935B4 raw=0x000000DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2935b8:
    // 0x2935b8: 0x6f5d0  .word       0x0006F5D0                   # mfhi        $fp # 000605C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2935b8u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_2935bc:
    // 0x2935bc: 0x0  nop
    ctx->pc = 0x2935bcu;
    // NOP
label_2935c0:
    // 0x2935c0: 0xa4c2  srl         $s4, $zero, 19
    ctx->pc = 0x2935c0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), 19));
label_2935c4:
    // 0x2935c4: 0x2c0  sll         $zero, $zero, 11
    ctx->pc = 0x2935c4u;
    
label_2935c8:
    // 0x2935c8: 0x15f8a4  .word       0x0015F8A4                   # and         $ra, $zero, $s5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2935c8u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) & GPR_U64(ctx, 21));
label_2935cc:
    // 0x2935cc: 0x0  nop
    ctx->pc = 0x2935ccu;
    // NOP
label_2935d0:
    // 0x2935d0: 0xa782  srl         $s4, $zero, 30
    ctx->pc = 0x2935d0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), 30));
label_2935d4:
    // 0x2935d4: 0x2ae  .word       0x000002AE                   # dsub        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2935d4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2935d8:
    // 0x2935d8: 0x156918  .word       0x00156918                   # mult        $t5, $zero, $s5 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2935d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2935dc:
    // 0x2935dc: 0x0  nop
    ctx->pc = 0x2935dcu;
    // NOP
label_2935e0:
    // 0x2935e0: 0xaa30  tge         $zero, $zero, 680
    ctx->pc = 0x2935e0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2935e4:
    // 0x2935e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2935e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2935E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2935e8:
    // 0x2935e8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2935e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2935ec:
    // 0x2935ec: 0x0  nop
    ctx->pc = 0x2935ecu;
    // NOP
label_2935f0:
    // 0x2935f0: 0xaa31  tgeu        $zero, $zero, 680
    ctx->pc = 0x2935f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2935f4:
    // 0x2935f4: 0x2ad  .word       0x000002AD                   # daddu       $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2935f4u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2935f8:
    // 0x2935f8: 0x156168  .word       0x00156168                   # mfsa        $t4 # 00150140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2935f8u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_2935fc:
    // 0x2935fc: 0x0  nop
    ctx->pc = 0x2935fcu;
    // NOP
label_293600:
    // 0x293600: 0xacde  .word       0x0000ACDE                   # ddiv        $s5, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x293600 raw=0x0000ACDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293604:
    // 0x293604: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293604u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293604 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293608:
    // 0x293608: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x293608u;
    
label_29360c:
    // 0x29360c: 0x0  nop
    ctx->pc = 0x29360cu;
    // NOP
label_293610:
    // 0x293610: 0xacdf  .word       0x0000ACDF                   # ddivu       $s5, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293610u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x293610 raw=0x0000ACDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293614:
    // 0x293614: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x293614u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293618:
    // 0x293618: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293618u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29361c:
    // 0x29361c: 0x0  nop
    ctx->pc = 0x29361cu;
    // NOP
label_293620:
    // 0x293620: 0xad00  sll         $s5, $zero, 20
    ctx->pc = 0x293620u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_293624:
    // 0x293624: 0x29  mtsa        $zero
    ctx->pc = 0x293624u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_293628:
    // 0x293628: 0x14640  sll         $t0, $at, 25
    ctx->pc = 0x293628u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), 25));
label_29362c:
    // 0x29362c: 0x0  nop
    ctx->pc = 0x29362cu;
    // NOP
label_293630:
    // 0x293630: 0xad29  .word       0x0000AD29                   # mtsa        $zero # 0000AD00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x293630u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_293634:
    // 0x293634: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x293634u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_293638:
    // 0x293638: 0x11c0  sll         $v0, $zero, 7
    ctx->pc = 0x293638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_29363c:
    // 0x29363c: 0x0  nop
    ctx->pc = 0x29363cu;
    // NOP
label_293640:
    // 0x293640: 0xad2c  .word       0x0000AD2C                   # dadd        $s5, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293640u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_293644:
    // 0x293644: 0xf8  dsll        $zero, $zero, 3
    ctx->pc = 0x293644u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 3);
label_293648:
    // 0x293648: 0x7be20  .word       0x0007BE20                   # add         $s7, $zero, $a3 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293648u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_29364c:
    // 0x29364c: 0x0  nop
    ctx->pc = 0x29364cu;
    // NOP
label_293650:
    // 0x293650: 0xae24  .word       0x0000AE24                   # and         $s5, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293650u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_293654:
    // 0x293654: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293654u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_293658:
    // 0x293658: 0x6f860  .word       0x0006F860                   # add         $ra, $zero, $a2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293658u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_29365c:
    // 0x29365c: 0x0  nop
    ctx->pc = 0x29365cu;
    // NOP
label_293660:
    // 0x293660: 0xaf04  .word       0x0000AF04                   # sllv        $s5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293660u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293664:
    // 0x293664: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293664u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_293668:
    // 0x293668: 0x2ff90  .word       0x0002FF90                   # mfhi        $ra # 00020780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293668u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_29366c:
    // 0x29366c: 0x0  nop
    ctx->pc = 0x29366cu;
    // NOP
label_293670:
    // 0x293670: 0xaf64  .word       0x0000AF64                   # and         $s5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293670u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_293674:
    // 0x293674: 0x3f  dsra32      $zero, $zero, 0
    ctx->pc = 0x293674u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 0));
label_293678:
    // 0x293678: 0x1f460  .word       0x0001F460                   # add         $fp, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293678u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_29367c:
    // 0x29367c: 0x0  nop
    ctx->pc = 0x29367cu;
    // NOP
label_293680:
    // 0x293680: 0xafa3  .word       0x0000AFA3                   # negu        $s5, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293680u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293684:
    // 0x293684: 0x4e  .word       0x0000004E                   # INVALID     $zero, $zero, 0x4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293684u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x293684 raw=0x0000004E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293688:
    // 0x293688: 0x26c70  tge         $zero, $v0, 433
    ctx->pc = 0x293688u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_29368c:
    // 0x29368c: 0x0  nop
    ctx->pc = 0x29368cu;
    // NOP
label_293690:
    // 0x293690: 0xaff1  tgeu        $zero, $zero, 703
    ctx->pc = 0x293690u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293694:
    // 0x293694: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x293694u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293698:
    // 0x293698: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x293698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29369c:
    // 0x29369c: 0x0  nop
    ctx->pc = 0x29369cu;
    // NOP
label_2936a0:
    // 0x2936a0: 0xaff5  .word       0x0000AFF5                   # INVALID     $zero, $zero, -0x500B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2936a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2936A0 raw=0x0000AFF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2936a4:
    // 0x2936a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2936a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2936A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2936a8:
    // 0x2936a8: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x2936a8u;
    
label_2936ac:
    // 0x2936ac: 0x0  nop
    ctx->pc = 0x2936acu;
    // NOP
label_2936b0:
    // 0x2936b0: 0xaff6  tne         $zero, $zero, 703
    ctx->pc = 0x2936b0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2936b4:
    // 0x2936b4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2936b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2936b8:
    // 0x2936b8: 0x1c80  sll         $v1, $zero, 18
    ctx->pc = 0x2936b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2936bc:
    // 0x2936bc: 0x0  nop
    ctx->pc = 0x2936bcu;
    // NOP
label_2936c0:
    // 0x2936c0: 0xaffa  dsrl        $s5, $zero, 31
    ctx->pc = 0x2936c0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) >> 31);
label_2936c4:
    // 0x2936c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2936c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2936c8:
    // 0x2936c8: 0x1c80  sll         $v1, $zero, 18
    ctx->pc = 0x2936c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2936cc:
    // 0x2936cc: 0x0  nop
    ctx->pc = 0x2936ccu;
    // NOP
label_2936d0:
    // 0x2936d0: 0xaffe  dsrl32      $s5, $zero, 31
    ctx->pc = 0x2936d0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) >> (32 + 31));
label_2936d4:
    // 0x2936d4: 0xc1  .word       0x000000C1                   # INVALID     $zero, $zero, 0xC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2936d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2936D4 raw=0x000000C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2936d8:
    // 0x2936d8: 0x60404  .word       0x00060404                   # sllv        $zero, $a2, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2936d8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 0) & 0x1F));
label_2936dc:
    // 0x2936dc: 0x0  nop
    ctx->pc = 0x2936dcu;
    // NOP
label_2936e0:
    // 0x2936e0: 0xb0bf  dsra32      $s6, $zero, 2
    ctx->pc = 0x2936e0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> (32 + 2));
label_2936e4:
    // 0x2936e4: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2936e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2936e8:
    // 0x2936e8: 0x29f50  .word       0x00029F50                   # mfhi        $s3 # 00020740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2936e8u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2936ec:
    // 0x2936ec: 0x0  nop
    ctx->pc = 0x2936ecu;
    // NOP
label_2936f0:
    // 0x2936f0: 0xb113  .word       0x0000B113                   # mtlo        $zero # 0000B100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2936f0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2936f4:
    // 0x2936f4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2936f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2936F4 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2936f8:
    // 0x2936f8: 0x2120  .word       0x00002120                   # add         $a0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2936f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2936fc:
    // 0x2936fc: 0x0  nop
    ctx->pc = 0x2936fcu;
    // NOP
label_293700:
    // 0x293700: 0xb118  .word       0x0000B118                   # mult        $s6, $zero, $zero # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x293700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_293704:
    // 0x293704: 0x172  tlt         $zero, $zero, 5
    ctx->pc = 0x293704u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293708:
    // 0x293708: 0xb8f90  .word       0x000B8F90                   # mfhi        $s1 # 000B0780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293708u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_29370c:
    // 0x29370c: 0x0  nop
    ctx->pc = 0x29370cu;
    // NOP
label_293710:
    // 0x293710: 0xb28a  .word       0x0000B28A                   # movz        $s6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293710u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_293714:
    // 0x293714: 0x114  .word       0x00000114                   # dsllv       $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293714u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_293718:
    // 0x293718: 0x89a30  tge         $zero, $t0, 616
    ctx->pc = 0x293718u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_29371c:
    // 0x29371c: 0x0  nop
    ctx->pc = 0x29371cu;
    // NOP
label_293720:
    // 0x293720: 0xb39e  .word       0x0000B39E                   # ddiv        $s6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293720u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x293720 raw=0x0000B39E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293724:
    // 0x293724: 0x11f  .word       0x0000011F                   # ddivu       $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293724u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x293724 raw=0x0000011F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293728:
    // 0x293728: 0x8f1ac  .word       0x0008F1AC                   # dadd        $fp, $zero, $t0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293728u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 8); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, r); }
label_29372c:
    // 0x29372c: 0x0  nop
    ctx->pc = 0x29372cu;
    // NOP
label_293730:
    // 0x293730: 0xb4bd  .word       0x0000B4BD                   # INVALID     $zero, $zero, -0x4B43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293730u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x293730 raw=0x0000B4BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293734:
    // 0x293734: 0x19c  .word       0x0000019C                   # dmult       $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293734u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x293734 raw=0x0000019C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293738:
    // 0x293738: 0xcde40  sll         $k1, $t4, 25
    ctx->pc = 0x293738u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_29373c:
    // 0x29373c: 0x0  nop
    ctx->pc = 0x29373cu;
    // NOP
label_293740:
    // 0x293740: 0xb659  .word       0x0000B659                   # multu       $zero, $zero # 0000B640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293740u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_293744:
    // 0x293744: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293744u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293744 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293748:
    // 0x293748: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293748u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29374c:
    // 0x29374c: 0x0  nop
    ctx->pc = 0x29374cu;
    // NOP
label_293750:
    // 0x293750: 0xb65a  .word       0x0000B65A                   # div         $s6, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293750u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_293754:
    // 0x293754: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293754u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293754 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293758:
    // 0x293758: 0x4c  syscall     1
    ctx->pc = 0x293758u;
    ctx->pc = 0x29375Cu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_29375c:
    // 0x29375c: 0x0  nop
    ctx->pc = 0x29375cu;
    // NOP
label_293760:
    // 0x293760: 0xb65b  .word       0x0000B65B                   # divu        $s6, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293760u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_293764:
    // 0x293764: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293764u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293764 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293768:
    // 0x293768: 0x2e0  .word       0x000002E0                   # add         $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293768u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29376c:
    // 0x29376c: 0x0  nop
    ctx->pc = 0x29376cu;
    // NOP
label_293770:
    // 0x293770: 0xb65c  .word       0x0000B65C                   # dmult       $zero, $zero # 0000B640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x293770 raw=0x0000B65C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293774:
    // 0x293774: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293774u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293774 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293778:
    // 0x293778: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x293778u;
    
label_29377c:
    // 0x29377c: 0x0  nop
    ctx->pc = 0x29377cu;
    // NOP
label_293780:
    // 0x293780: 0xb65d  .word       0x0000B65D                   # dmultu      $zero, $zero # 0000B640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293780u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x293780 raw=0x0000B65D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293784:
    // 0x293784: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x293784u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_293788:
    // 0x293788: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293788u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29378c:
    // 0x29378c: 0x0  nop
    ctx->pc = 0x29378cu;
    // NOP
label_293790:
    // 0x293790: 0xb67e  dsrl32      $s6, $zero, 25
    ctx->pc = 0x293790u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (32 + 25));
label_293794:
    // 0x293794: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x293794u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_293798:
    // 0x293798: 0xae00  sll         $s5, $zero, 24
    ctx->pc = 0x293798u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_29379c:
    // 0x29379c: 0x0  nop
    ctx->pc = 0x29379cu;
    // NOP
label_2937a0:
    // 0x2937a0: 0xb694  .word       0x0000B694                   # dsllv       $s6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2937a0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2937a4:
    // 0x2937a4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2937a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2937a8:
    // 0x2937a8: 0x878  dsll        $at, $zero, 1
    ctx->pc = 0x2937a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 1);
label_2937ac:
    // 0x2937ac: 0x0  nop
    ctx->pc = 0x2937acu;
    // NOP
label_2937b0:
    // 0x2937b0: 0xb696  .word       0x0000B696                   # dsrlv       $s6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2937b0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2937b4:
    // 0x2937b4: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2937b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2937b8:
    // 0x2937b8: 0x32320  .word       0x00032320                   # add         $a0, $zero, $v1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2937b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2937bc:
    // 0x2937bc: 0x0  nop
    ctx->pc = 0x2937bcu;
    // NOP
label_2937c0:
    // 0x2937c0: 0xb6fb  dsra        $s6, $zero, 27
    ctx->pc = 0x2937c0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> 27);
label_2937c4:
    // 0x2937c4: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x2937c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2937C4 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2937c8:
    // 0x2937c8: 0xf1b0  tge         $zero, $zero, 966
    ctx->pc = 0x2937c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2937cc:
    // 0x2937cc: 0x0  nop
    ctx->pc = 0x2937ccu;
    // NOP
label_2937d0:
    // 0x2937d0: 0xb71a  .word       0x0000B71A                   # div         $s6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2937d0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2937d4:
    // 0x2937d4: 0x27  not         $zero, $zero
    ctx->pc = 0x2937d4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2937d8:
    // 0x2937d8: 0x137c0  sll         $a2, $at, 31
    ctx->pc = 0x2937d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 31));
label_2937dc:
    // 0x2937dc: 0x0  nop
    ctx->pc = 0x2937dcu;
    // NOP
label_2937e0:
    // 0x2937e0: 0xb741  .word       0x0000B741                   # INVALID     $zero, $zero, -0x48BF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2937e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2937E0 raw=0x0000B741"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2937e4:
    // 0x2937e4: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x2937e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2937e8:
    // 0x2937e8: 0x37ae0  .word       0x00037AE0                   # add         $t7, $zero, $v1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2937e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2937ec:
    // 0x2937ec: 0x0  nop
    ctx->pc = 0x2937ecu;
    // NOP
label_2937f0:
    // 0x2937f0: 0xb7b1  tgeu        $zero, $zero, 734
    ctx->pc = 0x2937f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2937f4:
    // 0x2937f4: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x2937f4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_2937f8:
    // 0x2937f8: 0x21030  tge         $zero, $v0, 64
    ctx->pc = 0x2937f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2937fc:
    // 0x2937fc: 0x0  nop
    ctx->pc = 0x2937fcu;
    // NOP
label_293800:
    // 0x293800: 0xb7f4  teq         $zero, $zero, 735
    ctx->pc = 0x293800u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293804:
    // 0x293804: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x293804u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293808:
    // 0x293808: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x293808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29380c:
    // 0x29380c: 0x0  nop
    ctx->pc = 0x29380cu;
    // NOP
label_293810:
    // 0x293810: 0xb7f8  dsll        $s6, $zero, 31
    ctx->pc = 0x293810u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << 31);
label_293814:
    // 0x293814: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293814u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293814 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293818:
    // 0x293818: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x293818u;
    
label_29381c:
    // 0x29381c: 0x0  nop
    ctx->pc = 0x29381cu;
    // NOP
label_293820:
    // 0x293820: 0xb7f9  .word       0x0000B7F9                   # INVALID     $zero, $zero, -0x4807 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293820u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x293820 raw=0x0000B7F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293824:
    // 0x293824: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293824u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x293824 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293828:
    // 0x293828: 0x2800  sll         $a1, $zero, 0
    ctx->pc = 0x293828u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29382c:
    // 0x29382c: 0x0  nop
    ctx->pc = 0x29382cu;
    // NOP
label_293830:
    // 0x293830: 0xb7fe  dsrl32      $s6, $zero, 31
    ctx->pc = 0x293830u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (32 + 31));
label_293834:
    // 0x293834: 0x186  .word       0x00000186                   # srlv        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293834u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293838:
    // 0x293838: 0xc2d00  sll         $a1, $t4, 20
    ctx->pc = 0x293838u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 20));
label_29383c:
    // 0x29383c: 0x0  nop
    ctx->pc = 0x29383cu;
    // NOP
label_293840:
    // 0x293840: 0xb984  .word       0x0000B984                   # sllv        $s7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293840u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293844:
    // 0x293844: 0x14c  syscall     5
    ctx->pc = 0x293844u;
    ctx->pc = 0x293848u;
runtime->handleSyscall(rdram, ctx, 0x5u);
label_293848:
    // 0x293848: 0xa5850  .word       0x000A5850                   # mfhi        $t3 # 000A0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293848u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29384c:
    // 0x29384c: 0x0  nop
    ctx->pc = 0x29384cu;
    // NOP
label_293850:
    // 0x293850: 0xbad0  .word       0x0000BAD0                   # mfhi        $s7 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293850u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_293854:
    // 0x293854: 0xa9  .word       0x000000A9                   # mtsa        $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x293854u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_293858:
    // 0x293858: 0x54374  teq         $zero, $a1, 269
    ctx->pc = 0x293858u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_29385c:
    // 0x29385c: 0x0  nop
    ctx->pc = 0x29385cu;
    // NOP
label_293860:
    // 0x293860: 0xbb79  .word       0x0000BB79                   # INVALID     $zero, $zero, -0x4487 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293860u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x293860 raw=0x0000BB79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293864:
    // 0x293864: 0xd5  .word       0x000000D5                   # INVALID     $zero, $zero, 0xD5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293864u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x293864 raw=0x000000D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293868:
    // 0x293868: 0x6a538  dsll        $s4, $a2, 20
    ctx->pc = 0x293868u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) << 20);
label_29386c:
    // 0x29386c: 0x0  nop
    ctx->pc = 0x29386cu;
    // NOP
label_293870:
    // 0x293870: 0xbc4e  .word       0x0000BC4E                   # INVALID     $zero, $zero, -0x43B2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x293870 raw=0x0000BC4E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293874:
    // 0x293874: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293874u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293874 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293878:
    // 0x293878: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x293878u;
    
label_29387c:
    // 0x29387c: 0x0  nop
    ctx->pc = 0x29387cu;
    // NOP
label_293880:
    // 0x293880: 0xbc4f  .word       0x0000BC4F                   # sync.p # 0000B800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293880u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_293884:
    // 0x293884: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293884u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293884 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293888:
    // 0x293888: 0x4c  syscall     1
    ctx->pc = 0x293888u;
    ctx->pc = 0x29388Cu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_29388c:
    // 0x29388c: 0x0  nop
    ctx->pc = 0x29388cu;
    // NOP
label_293890:
    // 0x293890: 0xbc50  .word       0x0000BC50                   # mfhi        $s7 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293890u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_293894:
    // 0x293894: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293894u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x293894 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293898:
    // 0x293898: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x293898u;
    
label_29389c:
    // 0x29389c: 0x0  nop
    ctx->pc = 0x29389cu;
    // NOP
label_2938a0:
    // 0x2938a0: 0xbc51  .word       0x0000BC51                   # mthi        $zero # 0000BC40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2938a0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2938a4:
    // 0x2938a4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x2938a4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2938a8:
    // 0x2938a8: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2938a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2938ac:
    // 0x2938ac: 0x0  nop
    ctx->pc = 0x2938acu;
    // NOP
label_2938b0:
    // 0x2938b0: 0xbc72  tlt         $zero, $zero, 753
    ctx->pc = 0x2938b0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2938b4:
    // 0x2938b4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x2938b4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2938b8:
    // 0x2938b8: 0x10320  .word       0x00010320                   # add         $zero, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2938b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2938bc:
    // 0x2938bc: 0x0  nop
    ctx->pc = 0x2938bcu;
    // NOP
label_2938c0:
    // 0x2938c0: 0xbc93  .word       0x0000BC93                   # mtlo        $zero # 0000BC80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2938c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2938c4:
    // 0x2938c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2938c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2938C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2938c8:
    // 0x2938c8: 0x700  sll         $zero, $zero, 28
    ctx->pc = 0x2938c8u;
    
label_2938cc:
    // 0x2938cc: 0x0  nop
    ctx->pc = 0x2938ccu;
    // NOP
label_2938d0:
    // 0x2938d0: 0xbc94  .word       0x0000BC94                   # dsllv       $s7, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2938d0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2938d4:
    // 0x2938d4: 0x63  .word       0x00000063                   # negu        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2938d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2938d8:
    // 0x2938d8: 0x314d0  .word       0x000314D0                   # mfhi        $v0 # 000304C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2938d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2938dc:
    // 0x2938dc: 0x0  nop
    ctx->pc = 0x2938dcu;
    // NOP
label_2938e0:
    // 0x2938e0: 0xbcf7  .word       0x0000BCF7                   # INVALID     $zero, $zero, -0x4309 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2938e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2938E0 raw=0x0000BCF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2938e4:
    // 0x2938e4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x2938e4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2938e8:
    // 0x2938e8: 0x10120  .word       0x00010120                   # add         $zero, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2938e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2938ec:
    // 0x2938ec: 0x0  nop
    ctx->pc = 0x2938ecu;
    // NOP
label_2938f0:
    // 0x2938f0: 0xbd18  .word       0x0000BD18                   # mult        $s7, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2938f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_2938f4:
    // 0x2938f4: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x2938f4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2938f8:
    // 0x2938f8: 0x19af0  tge         $zero, $at, 619
    ctx->pc = 0x2938f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2938fc:
    // 0x2938fc: 0x0  nop
    ctx->pc = 0x2938fcu;
    // NOP
label_293900:
    // 0x293900: 0xbd4c  syscall     757
    ctx->pc = 0x293900u;
    ctx->pc = 0x293904u;
runtime->handleSyscall(rdram, ctx, 0x2F5u);
label_293904:
    // 0x293904: 0x137  .word       0x00000137                   # INVALID     $zero, $zero, 0x137 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293904u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x293904 raw=0x00000137"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293908:
    // 0x293908: 0x9b580  sll         $s6, $t1, 22
    ctx->pc = 0x293908u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 9), 22));
label_29390c:
    // 0x29390c: 0x0  nop
    ctx->pc = 0x29390cu;
    // NOP
    ctx->pc = 0x293910u;
    return;
}
