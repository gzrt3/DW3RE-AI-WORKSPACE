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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part443(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x273338u: goto label_273338;
        case 0x27333cu: goto label_27333c;
        case 0x273340u: goto label_273340;
        case 0x273344u: goto label_273344;
        case 0x273348u: goto label_273348;
        case 0x27334cu: goto label_27334c;
        case 0x273350u: goto label_273350;
        case 0x273354u: goto label_273354;
        case 0x273358u: goto label_273358;
        case 0x27335cu: goto label_27335c;
        case 0x273360u: goto label_273360;
        case 0x273364u: goto label_273364;
        case 0x273368u: goto label_273368;
        case 0x27336cu: goto label_27336c;
        case 0x273370u: goto label_273370;
        case 0x273374u: goto label_273374;
        case 0x273378u: goto label_273378;
        case 0x27337cu: goto label_27337c;
        case 0x273380u: goto label_273380;
        case 0x273384u: goto label_273384;
        case 0x273388u: goto label_273388;
        case 0x27338cu: goto label_27338c;
        case 0x273390u: goto label_273390;
        case 0x273394u: goto label_273394;
        case 0x273398u: goto label_273398;
        case 0x27339cu: goto label_27339c;
        case 0x2733a0u: goto label_2733a0;
        case 0x2733a4u: goto label_2733a4;
        case 0x2733a8u: goto label_2733a8;
        case 0x2733acu: goto label_2733ac;
        case 0x2733b0u: goto label_2733b0;
        case 0x2733b4u: goto label_2733b4;
        case 0x2733b8u: goto label_2733b8;
        case 0x2733bcu: goto label_2733bc;
        case 0x2733c0u: goto label_2733c0;
        case 0x2733c4u: goto label_2733c4;
        case 0x2733c8u: goto label_2733c8;
        case 0x2733ccu: goto label_2733cc;
        case 0x2733d0u: goto label_2733d0;
        case 0x2733d4u: goto label_2733d4;
        case 0x2733d8u: goto label_2733d8;
        case 0x2733dcu: goto label_2733dc;
        case 0x2733e0u: goto label_2733e0;
        case 0x2733e4u: goto label_2733e4;
        case 0x2733e8u: goto label_2733e8;
        case 0x2733ecu: goto label_2733ec;
        case 0x2733f0u: goto label_2733f0;
        case 0x2733f4u: goto label_2733f4;
        case 0x2733f8u: goto label_2733f8;
        case 0x2733fcu: goto label_2733fc;
        case 0x273400u: goto label_273400;
        case 0x273404u: goto label_273404;
        case 0x273408u: goto label_273408;
        case 0x27340cu: goto label_27340c;
        case 0x273410u: goto label_273410;
        case 0x273414u: goto label_273414;
        case 0x273418u: goto label_273418;
        case 0x27341cu: goto label_27341c;
        case 0x273420u: goto label_273420;
        case 0x273424u: goto label_273424;
        case 0x273428u: goto label_273428;
        case 0x27342cu: goto label_27342c;
        case 0x273430u: goto label_273430;
        case 0x273434u: goto label_273434;
        case 0x273438u: goto label_273438;
        case 0x27343cu: goto label_27343c;
        case 0x273440u: goto label_273440;
        case 0x273444u: goto label_273444;
        case 0x273448u: goto label_273448;
        case 0x27344cu: goto label_27344c;
        case 0x273450u: goto label_273450;
        case 0x273454u: goto label_273454;
        case 0x273458u: goto label_273458;
        case 0x27345cu: goto label_27345c;
        case 0x273460u: goto label_273460;
        case 0x273464u: goto label_273464;
        case 0x273468u: goto label_273468;
        case 0x27346cu: goto label_27346c;
        case 0x273470u: goto label_273470;
        case 0x273474u: goto label_273474;
        case 0x273478u: goto label_273478;
        case 0x27347cu: goto label_27347c;
        case 0x273480u: goto label_273480;
        case 0x273484u: goto label_273484;
        case 0x273488u: goto label_273488;
        case 0x27348cu: goto label_27348c;
        case 0x273490u: goto label_273490;
        case 0x273494u: goto label_273494;
        case 0x273498u: goto label_273498;
        case 0x27349cu: goto label_27349c;
        case 0x2734a0u: goto label_2734a0;
        case 0x2734a4u: goto label_2734a4;
        case 0x2734a8u: goto label_2734a8;
        case 0x2734acu: goto label_2734ac;
        case 0x2734b0u: goto label_2734b0;
        case 0x2734b4u: goto label_2734b4;
        case 0x2734b8u: goto label_2734b8;
        case 0x2734bcu: goto label_2734bc;
        case 0x2734c0u: goto label_2734c0;
        case 0x2734c4u: goto label_2734c4;
        case 0x2734c8u: goto label_2734c8;
        case 0x2734ccu: goto label_2734cc;
        case 0x2734d0u: goto label_2734d0;
        case 0x2734d4u: goto label_2734d4;
        case 0x2734d8u: goto label_2734d8;
        case 0x2734dcu: goto label_2734dc;
        case 0x2734e0u: goto label_2734e0;
        case 0x2734e4u: goto label_2734e4;
        case 0x2734e8u: goto label_2734e8;
        case 0x2734ecu: goto label_2734ec;
        case 0x2734f0u: goto label_2734f0;
        case 0x2734f4u: goto label_2734f4;
        case 0x2734f8u: goto label_2734f8;
        case 0x2734fcu: goto label_2734fc;
        case 0x273500u: goto label_273500;
        case 0x273504u: goto label_273504;
        case 0x273508u: goto label_273508;
        case 0x27350cu: goto label_27350c;
        case 0x273510u: goto label_273510;
        case 0x273514u: goto label_273514;
        case 0x273518u: goto label_273518;
        case 0x27351cu: goto label_27351c;
        case 0x273520u: goto label_273520;
        case 0x273524u: goto label_273524;
        case 0x273528u: goto label_273528;
        case 0x27352cu: goto label_27352c;
        case 0x273530u: goto label_273530;
        case 0x273534u: goto label_273534;
        case 0x273538u: goto label_273538;
        case 0x27353cu: goto label_27353c;
        case 0x273540u: goto label_273540;
        case 0x273544u: goto label_273544;
        case 0x273548u: goto label_273548;
        case 0x27354cu: goto label_27354c;
        case 0x273550u: goto label_273550;
        case 0x273554u: goto label_273554;
        case 0x273558u: goto label_273558;
        case 0x27355cu: goto label_27355c;
        case 0x273560u: goto label_273560;
        case 0x273564u: goto label_273564;
        case 0x273568u: goto label_273568;
        case 0x27356cu: goto label_27356c;
        case 0x273570u: goto label_273570;
        case 0x273574u: goto label_273574;
        case 0x273578u: goto label_273578;
        case 0x27357cu: goto label_27357c;
        case 0x273580u: goto label_273580;
        case 0x273584u: goto label_273584;
        case 0x273588u: goto label_273588;
        case 0x27358cu: goto label_27358c;
        case 0x273590u: goto label_273590;
        case 0x273594u: goto label_273594;
        case 0x273598u: goto label_273598;
        case 0x27359cu: goto label_27359c;
        case 0x2735a0u: goto label_2735a0;
        case 0x2735a4u: goto label_2735a4;
        case 0x2735a8u: goto label_2735a8;
        case 0x2735acu: goto label_2735ac;
        case 0x2735b0u: goto label_2735b0;
        case 0x2735b4u: goto label_2735b4;
        case 0x2735b8u: goto label_2735b8;
        case 0x2735bcu: goto label_2735bc;
        case 0x2735c0u: goto label_2735c0;
        case 0x2735c4u: goto label_2735c4;
        case 0x2735c8u: goto label_2735c8;
        case 0x2735ccu: goto label_2735cc;
        case 0x2735d0u: goto label_2735d0;
        case 0x2735d4u: goto label_2735d4;
        case 0x2735d8u: goto label_2735d8;
        case 0x2735dcu: goto label_2735dc;
        case 0x2735e0u: goto label_2735e0;
        case 0x2735e4u: goto label_2735e4;
        case 0x2735e8u: goto label_2735e8;
        case 0x2735ecu: goto label_2735ec;
        case 0x2735f0u: goto label_2735f0;
        case 0x2735f4u: goto label_2735f4;
        case 0x2735f8u: goto label_2735f8;
        case 0x2735fcu: goto label_2735fc;
        case 0x273600u: goto label_273600;
        case 0x273604u: goto label_273604;
        case 0x273608u: goto label_273608;
        case 0x27360cu: goto label_27360c;
        case 0x273610u: goto label_273610;
        case 0x273614u: goto label_273614;
        case 0x273618u: goto label_273618;
        case 0x27361cu: goto label_27361c;
        case 0x273620u: goto label_273620;
        case 0x273624u: goto label_273624;
        case 0x273628u: goto label_273628;
        case 0x27362cu: goto label_27362c;
        case 0x273630u: goto label_273630;
        case 0x273634u: goto label_273634;
        case 0x273638u: goto label_273638;
        case 0x27363cu: goto label_27363c;
        case 0x273640u: goto label_273640;
        case 0x273644u: goto label_273644;
        case 0x273648u: goto label_273648;
        case 0x27364cu: goto label_27364c;
        case 0x273650u: goto label_273650;
        case 0x273654u: goto label_273654;
        case 0x273658u: goto label_273658;
        case 0x27365cu: goto label_27365c;
        case 0x273660u: goto label_273660;
        case 0x273664u: goto label_273664;
        case 0x273668u: goto label_273668;
        case 0x27366cu: goto label_27366c;
        case 0x273670u: goto label_273670;
        case 0x273674u: goto label_273674;
        case 0x273678u: goto label_273678;
        case 0x27367cu: goto label_27367c;
        case 0x273680u: goto label_273680;
        case 0x273684u: goto label_273684;
        case 0x273688u: goto label_273688;
        case 0x27368cu: goto label_27368c;
        case 0x273690u: goto label_273690;
        case 0x273694u: goto label_273694;
        case 0x273698u: goto label_273698;
        case 0x27369cu: goto label_27369c;
        case 0x2736a0u: goto label_2736a0;
        case 0x2736a4u: goto label_2736a4;
        case 0x2736a8u: goto label_2736a8;
        case 0x2736acu: goto label_2736ac;
        case 0x2736b0u: goto label_2736b0;
        case 0x2736b4u: goto label_2736b4;
        case 0x2736b8u: goto label_2736b8;
        case 0x2736bcu: goto label_2736bc;
        case 0x2736c0u: goto label_2736c0;
        case 0x2736c4u: goto label_2736c4;
        case 0x2736c8u: goto label_2736c8;
        case 0x2736ccu: goto label_2736cc;
        case 0x2736d0u: goto label_2736d0;
        case 0x2736d4u: goto label_2736d4;
        case 0x2736d8u: goto label_2736d8;
        case 0x2736dcu: goto label_2736dc;
        case 0x2736e0u: goto label_2736e0;
        case 0x2736e4u: goto label_2736e4;
        case 0x2736e8u: goto label_2736e8;
        case 0x2736ecu: goto label_2736ec;
        case 0x2736f0u: goto label_2736f0;
        case 0x2736f4u: goto label_2736f4;
        case 0x2736f8u: goto label_2736f8;
        case 0x2736fcu: goto label_2736fc;
        case 0x273700u: goto label_273700;
        case 0x273704u: goto label_273704;
        case 0x273708u: goto label_273708;
        case 0x27370cu: goto label_27370c;
        case 0x273710u: goto label_273710;
        case 0x273714u: goto label_273714;
        case 0x273718u: goto label_273718;
        case 0x27371cu: goto label_27371c;
        case 0x273720u: goto label_273720;
        case 0x273724u: goto label_273724;
        case 0x273728u: goto label_273728;
        case 0x27372cu: goto label_27372c;
        case 0x273730u: goto label_273730;
        case 0x273734u: goto label_273734;
        case 0x273738u: goto label_273738;
        case 0x27373cu: goto label_27373c;
        case 0x273740u: goto label_273740;
        case 0x273744u: goto label_273744;
        case 0x273748u: goto label_273748;
        case 0x27374cu: goto label_27374c;
        case 0x273750u: goto label_273750;
        case 0x273754u: goto label_273754;
        case 0x273758u: goto label_273758;
        case 0x27375cu: goto label_27375c;
        case 0x273760u: goto label_273760;
        case 0x273764u: goto label_273764;
        case 0x273768u: goto label_273768;
        case 0x27376cu: goto label_27376c;
        case 0x273770u: goto label_273770;
        case 0x273774u: goto label_273774;
        case 0x273778u: goto label_273778;
        case 0x27377cu: goto label_27377c;
        case 0x273780u: goto label_273780;
        case 0x273784u: goto label_273784;
        case 0x273788u: goto label_273788;
        case 0x27378cu: goto label_27378c;
        case 0x273790u: goto label_273790;
        case 0x273794u: goto label_273794;
        case 0x273798u: goto label_273798;
        case 0x27379cu: goto label_27379c;
        case 0x2737a0u: goto label_2737a0;
        case 0x2737a4u: goto label_2737a4;
        case 0x2737a8u: goto label_2737a8;
        case 0x2737acu: goto label_2737ac;
        case 0x2737b0u: goto label_2737b0;
        case 0x2737b4u: goto label_2737b4;
        case 0x2737b8u: goto label_2737b8;
        case 0x2737bcu: goto label_2737bc;
        case 0x2737c0u: goto label_2737c0;
        case 0x2737c4u: goto label_2737c4;
        case 0x2737c8u: goto label_2737c8;
        case 0x2737ccu: goto label_2737cc;
        case 0x2737d0u: goto label_2737d0;
        case 0x2737d4u: goto label_2737d4;
        case 0x2737d8u: goto label_2737d8;
        case 0x2737dcu: goto label_2737dc;
        case 0x2737e0u: goto label_2737e0;
        case 0x2737e4u: goto label_2737e4;
        case 0x2737e8u: goto label_2737e8;
        case 0x2737ecu: goto label_2737ec;
        case 0x2737f0u: goto label_2737f0;
        case 0x2737f4u: goto label_2737f4;
        case 0x2737f8u: goto label_2737f8;
        case 0x2737fcu: goto label_2737fc;
        case 0x273800u: goto label_273800;
        case 0x273804u: goto label_273804;
        case 0x273808u: goto label_273808;
        case 0x27380cu: goto label_27380c;
        case 0x273810u: goto label_273810;
        case 0x273814u: goto label_273814;
        case 0x273818u: goto label_273818;
        case 0x27381cu: goto label_27381c;
        case 0x273820u: goto label_273820;
        case 0x273824u: goto label_273824;
        case 0x273828u: goto label_273828;
        case 0x27382cu: goto label_27382c;
        case 0x273830u: goto label_273830;
        case 0x273834u: goto label_273834;
        case 0x273838u: goto label_273838;
        case 0x27383cu: goto label_27383c;
        case 0x273840u: goto label_273840;
        case 0x273844u: goto label_273844;
        case 0x273848u: goto label_273848;
        case 0x27384cu: goto label_27384c;
        case 0x273850u: goto label_273850;
        case 0x273854u: goto label_273854;
        case 0x273858u: goto label_273858;
        case 0x27385cu: goto label_27385c;
        case 0x273860u: goto label_273860;
        case 0x273864u: goto label_273864;
        case 0x273868u: goto label_273868;
        case 0x27386cu: goto label_27386c;
        case 0x273870u: goto label_273870;
        case 0x273874u: goto label_273874;
        case 0x273878u: goto label_273878;
        case 0x27387cu: goto label_27387c;
        case 0x273880u: goto label_273880;
        case 0x273884u: goto label_273884;
        case 0x273888u: goto label_273888;
        case 0x27388cu: goto label_27388c;
        case 0x273890u: goto label_273890;
        case 0x273894u: goto label_273894;
        case 0x273898u: goto label_273898;
        case 0x27389cu: goto label_27389c;
        case 0x2738a0u: goto label_2738a0;
        case 0x2738a4u: goto label_2738a4;
        case 0x2738a8u: goto label_2738a8;
        case 0x2738acu: goto label_2738ac;
        case 0x2738b0u: goto label_2738b0;
        case 0x2738b4u: goto label_2738b4;
        case 0x2738b8u: goto label_2738b8;
        case 0x2738bcu: goto label_2738bc;
        case 0x2738c0u: goto label_2738c0;
        case 0x2738c4u: goto label_2738c4;
        case 0x2738c8u: goto label_2738c8;
        case 0x2738ccu: goto label_2738cc;
        case 0x2738d0u: goto label_2738d0;
        case 0x2738d4u: goto label_2738d4;
        case 0x2738d8u: goto label_2738d8;
        case 0x2738dcu: goto label_2738dc;
        case 0x2738e0u: goto label_2738e0;
        case 0x2738e4u: goto label_2738e4;
        case 0x2738e8u: goto label_2738e8;
        case 0x2738ecu: goto label_2738ec;
        case 0x2738f0u: goto label_2738f0;
        case 0x2738f4u: goto label_2738f4;
        case 0x2738f8u: goto label_2738f8;
        case 0x2738fcu: goto label_2738fc;
        case 0x273900u: goto label_273900;
        case 0x273904u: goto label_273904;
        case 0x273908u: goto label_273908;
        case 0x27390cu: goto label_27390c;
        case 0x273910u: goto label_273910;
        case 0x273914u: goto label_273914;
        case 0x273918u: goto label_273918;
        case 0x27391cu: goto label_27391c;
        case 0x273920u: goto label_273920;
        case 0x273924u: goto label_273924;
        case 0x273928u: goto label_273928;
        case 0x27392cu: goto label_27392c;
        case 0x273930u: goto label_273930;
        case 0x273934u: goto label_273934;
        case 0x273938u: goto label_273938;
        case 0x27393cu: goto label_27393c;
        case 0x273940u: goto label_273940;
        case 0x273944u: goto label_273944;
        case 0x273948u: goto label_273948;
        case 0x27394cu: goto label_27394c;
        case 0x273950u: goto label_273950;
        case 0x273954u: goto label_273954;
        case 0x273958u: goto label_273958;
        case 0x27395cu: goto label_27395c;
        case 0x273960u: goto label_273960;
        case 0x273964u: goto label_273964;
        case 0x273968u: goto label_273968;
        case 0x27396cu: goto label_27396c;
        case 0x273970u: goto label_273970;
        case 0x273974u: goto label_273974;
        case 0x273978u: goto label_273978;
        case 0x27397cu: goto label_27397c;
        case 0x273980u: goto label_273980;
        case 0x273984u: goto label_273984;
        case 0x273988u: goto label_273988;
        case 0x27398cu: goto label_27398c;
        case 0x273990u: goto label_273990;
        case 0x273994u: goto label_273994;
        case 0x273998u: goto label_273998;
        case 0x27399cu: goto label_27399c;
        case 0x2739a0u: goto label_2739a0;
        case 0x2739a4u: goto label_2739a4;
        case 0x2739a8u: goto label_2739a8;
        case 0x2739acu: goto label_2739ac;
        case 0x2739b0u: goto label_2739b0;
        case 0x2739b4u: goto label_2739b4;
        case 0x2739b8u: goto label_2739b8;
        case 0x2739bcu: goto label_2739bc;
        case 0x2739c0u: goto label_2739c0;
        case 0x2739c4u: goto label_2739c4;
        case 0x2739c8u: goto label_2739c8;
        case 0x2739ccu: goto label_2739cc;
        case 0x2739d0u: goto label_2739d0;
        case 0x2739d4u: goto label_2739d4;
        case 0x2739d8u: goto label_2739d8;
        case 0x2739dcu: goto label_2739dc;
        case 0x2739e0u: goto label_2739e0;
        case 0x2739e4u: goto label_2739e4;
        case 0x2739e8u: goto label_2739e8;
        case 0x2739ecu: goto label_2739ec;
        case 0x2739f0u: goto label_2739f0;
        case 0x2739f4u: goto label_2739f4;
        case 0x2739f8u: goto label_2739f8;
        case 0x2739fcu: goto label_2739fc;
        case 0x273a00u: goto label_273a00;
        case 0x273a04u: goto label_273a04;
        case 0x273a08u: goto label_273a08;
        case 0x273a0cu: goto label_273a0c;
        case 0x273a10u: goto label_273a10;
        case 0x273a14u: goto label_273a14;
        case 0x273a18u: goto label_273a18;
        case 0x273a1cu: goto label_273a1c;
        case 0x273a20u: goto label_273a20;
        case 0x273a24u: goto label_273a24;
        case 0x273a28u: goto label_273a28;
        case 0x273a2cu: goto label_273a2c;
        case 0x273a30u: goto label_273a30;
        case 0x273a34u: goto label_273a34;
        case 0x273a38u: goto label_273a38;
        case 0x273a3cu: goto label_273a3c;
        case 0x273a40u: goto label_273a40;
        case 0x273a44u: goto label_273a44;
        case 0x273a48u: goto label_273a48;
        case 0x273a4cu: goto label_273a4c;
        case 0x273a50u: goto label_273a50;
        case 0x273a54u: goto label_273a54;
        case 0x273a58u: goto label_273a58;
        case 0x273a5cu: goto label_273a5c;
        case 0x273a60u: goto label_273a60;
        case 0x273a64u: goto label_273a64;
        case 0x273a68u: goto label_273a68;
        case 0x273a6cu: goto label_273a6c;
        case 0x273a70u: goto label_273a70;
        case 0x273a74u: goto label_273a74;
        case 0x273a78u: goto label_273a78;
        case 0x273a7cu: goto label_273a7c;
        case 0x273a80u: goto label_273a80;
        case 0x273a84u: goto label_273a84;
        case 0x273a88u: goto label_273a88;
        case 0x273a8cu: goto label_273a8c;
        case 0x273a90u: goto label_273a90;
        case 0x273a94u: goto label_273a94;
        case 0x273a98u: goto label_273a98;
        case 0x273a9cu: goto label_273a9c;
        case 0x273aa0u: goto label_273aa0;
        case 0x273aa4u: goto label_273aa4;
        case 0x273aa8u: goto label_273aa8;
        case 0x273aacu: goto label_273aac;
        case 0x273ab0u: goto label_273ab0;
        case 0x273ab4u: goto label_273ab4;
        case 0x273ab8u: goto label_273ab8;
        case 0x273abcu: goto label_273abc;
        case 0x273ac0u: goto label_273ac0;
        case 0x273ac4u: goto label_273ac4;
        case 0x273ac8u: goto label_273ac8;
        case 0x273accu: goto label_273acc;
        case 0x273ad0u: goto label_273ad0;
        case 0x273ad4u: goto label_273ad4;
        case 0x273ad8u: goto label_273ad8;
        case 0x273adcu: goto label_273adc;
        case 0x273ae0u: goto label_273ae0;
        case 0x273ae4u: goto label_273ae4;
        case 0x273ae8u: goto label_273ae8;
        case 0x273aecu: goto label_273aec;
        case 0x273af0u: goto label_273af0;
        case 0x273af4u: goto label_273af4;
        case 0x273af8u: goto label_273af8;
        case 0x273afcu: goto label_273afc;
        case 0x273b00u: goto label_273b00;
        case 0x273b04u: goto label_273b04;
        default: return;
    }

label_273338:
    // 0x273338: 0x0  nop
    ctx->pc = 0x273338u;
    // NOP
label_27333c:
    // 0x27333c: 0x0  nop
    ctx->pc = 0x27333cu;
    // NOP
label_273340:
    // 0x273340: 0x9ddd  .word       0x00009DDD                   # dmultu      $zero, $zero # 00009DC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x273340 raw=0x00009DDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273344:
    // 0x273344: 0x8260  .word       0x00008260                   # add         $s0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273344u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_273348:
    // 0x273348: 0x0  nop
    ctx->pc = 0x273348u;
    // NOP
label_27334c:
    // 0x27334c: 0x0  nop
    ctx->pc = 0x27334cu;
    // NOP
label_273350:
    // 0x273350: 0x9dee  .word       0x00009DEE                   # dsub        $s3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273350u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, r); }
label_273354:
    // 0x273354: 0x83f0  tge         $zero, $zero, 527
    ctx->pc = 0x273354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273358:
    // 0x273358: 0x0  nop
    ctx->pc = 0x273358u;
    // NOP
label_27335c:
    // 0x27335c: 0x0  nop
    ctx->pc = 0x27335cu;
    // NOP
label_273360:
    // 0x273360: 0x9dff  dsra32      $s3, $zero, 23
    ctx->pc = 0x273360u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 0) >> (32 + 23));
label_273364:
    // 0x273364: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x273364u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_273368:
    // 0x273368: 0x0  nop
    ctx->pc = 0x273368u;
    // NOP
label_27336c:
    // 0x27336c: 0x0  nop
    ctx->pc = 0x27336cu;
    // NOP
label_273370:
    // 0x273370: 0x9e10  .word       0x00009E10                   # mfhi        $s3 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273370u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_273374:
    // 0x273374: 0xd780  sll         $k0, $zero, 30
    ctx->pc = 0x273374u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_273378:
    // 0x273378: 0x0  nop
    ctx->pc = 0x273378u;
    // NOP
label_27337c:
    // 0x27337c: 0x0  nop
    ctx->pc = 0x27337cu;
    // NOP
label_273380:
    // 0x273380: 0x9e2b  .word       0x00009E2B                   # sltu        $s3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273380u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_273384:
    // 0x273384: 0x9870  tge         $zero, $zero, 609
    ctx->pc = 0x273384u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273388:
    // 0x273388: 0x0  nop
    ctx->pc = 0x273388u;
    // NOP
label_27338c:
    // 0x27338c: 0x0  nop
    ctx->pc = 0x27338cu;
    // NOP
label_273390:
    // 0x273390: 0x9e3f  dsra32      $s3, $zero, 24
    ctx->pc = 0x273390u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 0) >> (32 + 24));
label_273394:
    // 0x273394: 0x9ad0  .word       0x00009AD0                   # mfhi        $s3 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273394u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_273398:
    // 0x273398: 0x0  nop
    ctx->pc = 0x273398u;
    // NOP
label_27339c:
    // 0x27339c: 0x0  nop
    ctx->pc = 0x27339cu;
    // NOP
label_2733a0:
    // 0x2733a0: 0x9e53  .word       0x00009E53                   # mtlo        $zero # 00009E40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2733a0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2733a4:
    // 0x2733a4: 0x117a0  .word       0x000117A0                   # add         $v0, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2733a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2733a8:
    // 0x2733a8: 0x0  nop
    ctx->pc = 0x2733a8u;
    // NOP
label_2733ac:
    // 0x2733ac: 0x0  nop
    ctx->pc = 0x2733acu;
    // NOP
label_2733b0:
    // 0x2733b0: 0x9e76  tne         $zero, $zero, 633
    ctx->pc = 0x2733b0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2733b4:
    // 0x2733b4: 0x7b20  .word       0x00007B20                   # add         $t7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2733b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2733b8:
    // 0x2733b8: 0x0  nop
    ctx->pc = 0x2733b8u;
    // NOP
label_2733bc:
    // 0x2733bc: 0x0  nop
    ctx->pc = 0x2733bcu;
    // NOP
label_2733c0:
    // 0x2733c0: 0x9e86  .word       0x00009E86                   # srlv        $s3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2733c0u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2733c4:
    // 0x2733c4: 0x6280  sll         $t4, $zero, 10
    ctx->pc = 0x2733c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2733c8:
    // 0x2733c8: 0x0  nop
    ctx->pc = 0x2733c8u;
    // NOP
label_2733cc:
    // 0x2733cc: 0x0  nop
    ctx->pc = 0x2733ccu;
    // NOP
label_2733d0:
    // 0x2733d0: 0x9e93  .word       0x00009E93                   # mtlo        $zero # 00009E80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2733d0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2733d4:
    // 0x2733d4: 0x3cc0  sll         $a3, $zero, 19
    ctx->pc = 0x2733d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2733d8:
    // 0x2733d8: 0x0  nop
    ctx->pc = 0x2733d8u;
    // NOP
label_2733dc:
    // 0x2733dc: 0x0  nop
    ctx->pc = 0x2733dcu;
    // NOP
label_2733e0:
    // 0x2733e0: 0x9e9b  .word       0x00009E9B                   # divu        $s3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2733e0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2733e4:
    // 0x2733e4: 0xf550  .word       0x0000F550                   # mfhi        $fp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2733e4u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_2733e8:
    // 0x2733e8: 0x0  nop
    ctx->pc = 0x2733e8u;
    // NOP
label_2733ec:
    // 0x2733ec: 0x0  nop
    ctx->pc = 0x2733ecu;
    // NOP
label_2733f0:
    // 0x2733f0: 0x9eba  dsrl        $s3, $zero, 26
    ctx->pc = 0x2733f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) >> 26);
label_2733f4:
    // 0x2733f4: 0x8f10  .word       0x00008F10                   # mfhi        $s1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2733f4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2733f8:
    // 0x2733f8: 0x0  nop
    ctx->pc = 0x2733f8u;
    // NOP
label_2733fc:
    // 0x2733fc: 0x0  nop
    ctx->pc = 0x2733fcu;
    // NOP
label_273400:
    // 0x273400: 0x9ecc  syscall     635
    ctx->pc = 0x273400u;
    ctx->pc = 0x273404u;
runtime->handleSyscall(rdram, ctx, 0x27Bu);
label_273404:
    // 0x273404: 0x6d40  sll         $t5, $zero, 21
    ctx->pc = 0x273404u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_273408:
    // 0x273408: 0x0  nop
    ctx->pc = 0x273408u;
    // NOP
label_27340c:
    // 0x27340c: 0x0  nop
    ctx->pc = 0x27340cu;
    // NOP
label_273410:
    // 0x273410: 0x9eda  .word       0x00009EDA                   # div         $s3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273410u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_273414:
    // 0x273414: 0xa260  .word       0x0000A260                   # add         $s4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273414u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_273418:
    // 0x273418: 0x0  nop
    ctx->pc = 0x273418u;
    // NOP
label_27341c:
    // 0x27341c: 0x0  nop
    ctx->pc = 0x27341cu;
    // NOP
label_273420:
    // 0x273420: 0x9eef  .word       0x00009EEF                   # dsubu       $s3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273420u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_273424:
    // 0x273424: 0x73b0  tge         $zero, $zero, 462
    ctx->pc = 0x273424u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273428:
    // 0x273428: 0x0  nop
    ctx->pc = 0x273428u;
    // NOP
label_27342c:
    // 0x27342c: 0x0  nop
    ctx->pc = 0x27342cu;
    // NOP
label_273430:
    // 0x273430: 0x9efe  dsrl32      $s3, $zero, 27
    ctx->pc = 0x273430u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) >> (32 + 27));
label_273434:
    // 0x273434: 0x8a00  sll         $s1, $zero, 8
    ctx->pc = 0x273434u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_273438:
    // 0x273438: 0x0  nop
    ctx->pc = 0x273438u;
    // NOP
label_27343c:
    // 0x27343c: 0x0  nop
    ctx->pc = 0x27343cu;
    // NOP
label_273440:
    // 0x273440: 0x9f10  .word       0x00009F10                   # mfhi        $s3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273440u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_273444:
    // 0x273444: 0xe470  tge         $zero, $zero, 913
    ctx->pc = 0x273444u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273448:
    // 0x273448: 0x0  nop
    ctx->pc = 0x273448u;
    // NOP
label_27344c:
    // 0x27344c: 0x0  nop
    ctx->pc = 0x27344cu;
    // NOP
label_273450:
    // 0x273450: 0x9f2d  .word       0x00009F2D                   # daddu       $s3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273454:
    // 0x273454: 0xa680  sll         $s4, $zero, 26
    ctx->pc = 0x273454u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_273458:
    // 0x273458: 0x0  nop
    ctx->pc = 0x273458u;
    // NOP
label_27345c:
    // 0x27345c: 0x0  nop
    ctx->pc = 0x27345cu;
    // NOP
label_273460:
    // 0x273460: 0x9f42  srl         $s3, $zero, 29
    ctx->pc = 0x273460u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 0), 29));
label_273464:
    // 0x273464: 0x7c30  tge         $zero, $zero, 496
    ctx->pc = 0x273464u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273468:
    // 0x273468: 0x0  nop
    ctx->pc = 0x273468u;
    // NOP
label_27346c:
    // 0x27346c: 0x0  nop
    ctx->pc = 0x27346cu;
    // NOP
label_273470:
    // 0x273470: 0x9f52  .word       0x00009F52                   # mflo        $s3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273470u;
    SET_GPR_U64(ctx, 19, ctx->lo);
label_273474:
    // 0x273474: 0xa7a0  .word       0x0000A7A0                   # add         $s4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273474u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_273478:
    // 0x273478: 0x0  nop
    ctx->pc = 0x273478u;
    // NOP
label_27347c:
    // 0x27347c: 0x0  nop
    ctx->pc = 0x27347cu;
    // NOP
label_273480:
    // 0x273480: 0x9f67  .word       0x00009F67                   # not         $s3, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273480u;
    SET_GPR_U64(ctx, 19, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_273484:
    // 0x273484: 0x10550  .word       0x00010550                   # mfhi        $zero # 00010540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273484u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_273488:
    // 0x273488: 0x0  nop
    ctx->pc = 0x273488u;
    // NOP
label_27348c:
    // 0x27348c: 0x0  nop
    ctx->pc = 0x27348cu;
    // NOP
label_273490:
    // 0x273490: 0x9f88  .word       0x00009F88                   # jr          $zero # 00009F80 <InstrIdType: CPU_SPECIAL>
label_273494:
    if (ctx->pc == 0x273494u) {
        ctx->pc = 0x273494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273490u;
        // 0x273494: 0x8330  tge         $zero, $zero, 524 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x273498u;
        goto label_273498;
    }
    ctx->pc = 0x273490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x273494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273490u;
        // 0x273494: 0x8330  tge         $zero, $zero, 524 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273490u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273498u;
label_273498:
    // 0x273498: 0x0  nop
    ctx->pc = 0x273498u;
    // NOP
label_27349c:
    // 0x27349c: 0x0  nop
    ctx->pc = 0x27349cu;
    // NOP
label_2734a0:
    // 0x2734a0: 0x9f99  .word       0x00009F99                   # multu       $zero, $zero # 00009F80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2734a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_2734a4:
    // 0x2734a4: 0xc380  sll         $t8, $zero, 14
    ctx->pc = 0x2734a4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_2734a8:
    // 0x2734a8: 0x0  nop
    ctx->pc = 0x2734a8u;
    // NOP
label_2734ac:
    // 0x2734ac: 0x0  nop
    ctx->pc = 0x2734acu;
    // NOP
label_2734b0:
    // 0x2734b0: 0x9fb2  tlt         $zero, $zero, 638
    ctx->pc = 0x2734b0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2734b4:
    // 0x2734b4: 0xa3a0  .word       0x0000A3A0                   # add         $s4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2734b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2734b8:
    // 0x2734b8: 0x0  nop
    ctx->pc = 0x2734b8u;
    // NOP
label_2734bc:
    // 0x2734bc: 0x0  nop
    ctx->pc = 0x2734bcu;
    // NOP
label_2734c0:
    // 0x2734c0: 0x9fc7  .word       0x00009FC7                   # srav        $s3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2734c0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2734c4:
    // 0x2734c4: 0xef60  .word       0x0000EF60                   # add         $sp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2734c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_2734c8:
    // 0x2734c8: 0x0  nop
    ctx->pc = 0x2734c8u;
    // NOP
label_2734cc:
    // 0x2734cc: 0x0  nop
    ctx->pc = 0x2734ccu;
    // NOP
label_2734d0:
    // 0x2734d0: 0x9fe5  .word       0x00009FE5                   # move        $s3, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2734d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2734d4:
    // 0x2734d4: 0x9320  .word       0x00009320                   # add         $s2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2734d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2734d8:
    // 0x2734d8: 0x0  nop
    ctx->pc = 0x2734d8u;
    // NOP
label_2734dc:
    // 0x2734dc: 0x0  nop
    ctx->pc = 0x2734dcu;
    // NOP
label_2734e0:
    // 0x2734e0: 0x9ff8  dsll        $s3, $zero, 31
    ctx->pc = 0x2734e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << 31);
label_2734e4:
    // 0x2734e4: 0x9ef0  tge         $zero, $zero, 635
    ctx->pc = 0x2734e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2734e8:
    // 0x2734e8: 0x0  nop
    ctx->pc = 0x2734e8u;
    // NOP
label_2734ec:
    // 0x2734ec: 0x0  nop
    ctx->pc = 0x2734ecu;
    // NOP
label_2734f0:
    // 0x2734f0: 0xa00c  syscall     640
    ctx->pc = 0x2734f0u;
    ctx->pc = 0x2734F4u;
runtime->handleSyscall(rdram, ctx, 0x280u);
label_2734f4:
    // 0x2734f4: 0xcee0  .word       0x0000CEE0                   # add         $t9, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2734f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_2734f8:
    // 0x2734f8: 0x0  nop
    ctx->pc = 0x2734f8u;
    // NOP
label_2734fc:
    // 0x2734fc: 0x0  nop
    ctx->pc = 0x2734fcu;
    // NOP
label_273500:
    // 0x273500: 0xa026  xor         $s4, $zero, $zero
    ctx->pc = 0x273500u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_273504:
    // 0x273504: 0xbfe0  .word       0x0000BFE0                   # add         $s7, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273504u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_273508:
    // 0x273508: 0x0  nop
    ctx->pc = 0x273508u;
    // NOP
label_27350c:
    // 0x27350c: 0x0  nop
    ctx->pc = 0x27350cu;
    // NOP
label_273510:
    // 0x273510: 0xa03e  dsrl32      $s4, $zero, 0
    ctx->pc = 0x273510u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) >> (32 + 0));
label_273514:
    // 0x273514: 0x6670  tge         $zero, $zero, 409
    ctx->pc = 0x273514u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273518:
    // 0x273518: 0x0  nop
    ctx->pc = 0x273518u;
    // NOP
label_27351c:
    // 0x27351c: 0x0  nop
    ctx->pc = 0x27351cu;
    // NOP
label_273520:
    // 0x273520: 0xa04b  .word       0x0000A04B                   # movn        $s4, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273520u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_273524:
    // 0x273524: 0xe870  tge         $zero, $zero, 929
    ctx->pc = 0x273524u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273528:
    // 0x273528: 0x0  nop
    ctx->pc = 0x273528u;
    // NOP
label_27352c:
    // 0x27352c: 0x0  nop
    ctx->pc = 0x27352cu;
    // NOP
label_273530:
    // 0x273530: 0xa069  .word       0x0000A069                   # mtsa        $zero # 0000A040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x273530u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_273534:
    // 0x273534: 0x79d0  .word       0x000079D0                   # mfhi        $t7 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273534u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_273538:
    // 0x273538: 0x0  nop
    ctx->pc = 0x273538u;
    // NOP
label_27353c:
    // 0x27353c: 0x0  nop
    ctx->pc = 0x27353cu;
    // NOP
label_273540:
    // 0x273540: 0xa079  .word       0x0000A079                   # INVALID     $zero, $zero, -0x5F87 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273540u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x273540 raw=0x0000A079"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273544:
    // 0x273544: 0xc1b0  tge         $zero, $zero, 774
    ctx->pc = 0x273544u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273548:
    // 0x273548: 0x0  nop
    ctx->pc = 0x273548u;
    // NOP
label_27354c:
    // 0x27354c: 0x0  nop
    ctx->pc = 0x27354cu;
    // NOP
label_273550:
    // 0x273550: 0xa092  .word       0x0000A092                   # mflo        $s4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273550u;
    SET_GPR_U64(ctx, 20, ctx->lo);
label_273554:
    // 0x273554: 0xb470  tge         $zero, $zero, 721
    ctx->pc = 0x273554u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273558:
    // 0x273558: 0x0  nop
    ctx->pc = 0x273558u;
    // NOP
label_27355c:
    // 0x27355c: 0x0  nop
    ctx->pc = 0x27355cu;
    // NOP
label_273560:
    // 0x273560: 0xa0a9  .word       0x0000A0A9                   # mtsa        $zero # 0000A080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x273560u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_273564:
    // 0x273564: 0x15340  sll         $t2, $at, 13
    ctx->pc = 0x273564u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 1), 13));
label_273568:
    // 0x273568: 0x0  nop
    ctx->pc = 0x273568u;
    // NOP
label_27356c:
    // 0x27356c: 0x0  nop
    ctx->pc = 0x27356cu;
    // NOP
label_273570:
    // 0x273570: 0xa0d4  .word       0x0000A0D4                   # dsllv       $s4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273570u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_273574:
    // 0x273574: 0xe850  .word       0x0000E850                   # mfhi        $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273574u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_273578:
    // 0x273578: 0x0  nop
    ctx->pc = 0x273578u;
    // NOP
label_27357c:
    // 0x27357c: 0x0  nop
    ctx->pc = 0x27357cu;
    // NOP
label_273580:
    // 0x273580: 0xa0f2  tlt         $zero, $zero, 643
    ctx->pc = 0x273580u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273584:
    // 0x273584: 0x92f0  tge         $zero, $zero, 587
    ctx->pc = 0x273584u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273588:
    // 0x273588: 0x0  nop
    ctx->pc = 0x273588u;
    // NOP
label_27358c:
    // 0x27358c: 0x0  nop
    ctx->pc = 0x27358cu;
    // NOP
label_273590:
    // 0x273590: 0xa105  .word       0x0000A105                   # INVALID     $zero, $zero, -0x5EFB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273590u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x273590 raw=0x0000A105"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273594:
    // 0x273594: 0xbd90  .word       0x0000BD90                   # mfhi        $s7 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273594u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_273598:
    // 0x273598: 0x0  nop
    ctx->pc = 0x273598u;
    // NOP
label_27359c:
    // 0x27359c: 0x0  nop
    ctx->pc = 0x27359cu;
    // NOP
label_2735a0:
    // 0x2735a0: 0xa11d  .word       0x0000A11D                   # dmultu      $zero, $zero # 0000A100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2735a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2735A0 raw=0x0000A11D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2735a4:
    // 0x2735a4: 0xd270  tge         $zero, $zero, 841
    ctx->pc = 0x2735a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2735a8:
    // 0x2735a8: 0x0  nop
    ctx->pc = 0x2735a8u;
    // NOP
label_2735ac:
    // 0x2735ac: 0x0  nop
    ctx->pc = 0x2735acu;
    // NOP
label_2735b0:
    // 0x2735b0: 0xa138  dsll        $s4, $zero, 4
    ctx->pc = 0x2735b0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << 4);
label_2735b4:
    // 0x2735b4: 0xba90  .word       0x0000BA90                   # mfhi        $s7 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2735b4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_2735b8:
    // 0x2735b8: 0x0  nop
    ctx->pc = 0x2735b8u;
    // NOP
label_2735bc:
    // 0x2735bc: 0x0  nop
    ctx->pc = 0x2735bcu;
    // NOP
label_2735c0:
    // 0x2735c0: 0xa150  .word       0x0000A150                   # mfhi        $s4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2735c0u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_2735c4:
    // 0x2735c4: 0x10fe0  .word       0x00010FE0                   # add         $at, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2735c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2735c8:
    // 0x2735c8: 0x0  nop
    ctx->pc = 0x2735c8u;
    // NOP
label_2735cc:
    // 0x2735cc: 0x0  nop
    ctx->pc = 0x2735ccu;
    // NOP
label_2735d0:
    // 0x2735d0: 0xa172  tlt         $zero, $zero, 645
    ctx->pc = 0x2735d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2735d4:
    // 0x2735d4: 0x8f50  .word       0x00008F50                   # mfhi        $s1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2735d4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2735d8:
    // 0x2735d8: 0x0  nop
    ctx->pc = 0x2735d8u;
    // NOP
label_2735dc:
    // 0x2735dc: 0x0  nop
    ctx->pc = 0x2735dcu;
    // NOP
label_2735e0:
    // 0x2735e0: 0xa184  .word       0x0000A184                   # sllv        $s4, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2735e0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2735e4:
    // 0x2735e4: 0xa280  sll         $s4, $zero, 10
    ctx->pc = 0x2735e4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2735e8:
    // 0x2735e8: 0x0  nop
    ctx->pc = 0x2735e8u;
    // NOP
label_2735ec:
    // 0x2735ec: 0x0  nop
    ctx->pc = 0x2735ecu;
    // NOP
label_2735f0:
    // 0x2735f0: 0xa199  .word       0x0000A199                   # multu       $zero, $zero # 0000A180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2735f0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_2735f4:
    // 0x2735f4: 0x7c00  sll         $t7, $zero, 16
    ctx->pc = 0x2735f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_2735f8:
    // 0x2735f8: 0x0  nop
    ctx->pc = 0x2735f8u;
    // NOP
label_2735fc:
    // 0x2735fc: 0x0  nop
    ctx->pc = 0x2735fcu;
    // NOP
label_273600:
    // 0x273600: 0xa1a9  .word       0x0000A1A9                   # mtsa        $zero # 0000A180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x273600u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_273604:
    // 0x273604: 0xe440  sll         $gp, $zero, 17
    ctx->pc = 0x273604u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_273608:
    // 0x273608: 0x0  nop
    ctx->pc = 0x273608u;
    // NOP
label_27360c:
    // 0x27360c: 0x0  nop
    ctx->pc = 0x27360cu;
    // NOP
label_273610:
    // 0x273610: 0xa1c6  .word       0x0000A1C6                   # srlv        $s4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273610u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_273614:
    // 0x273614: 0xcd90  .word       0x0000CD90                   # mfhi        $t9 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273614u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_273618:
    // 0x273618: 0x0  nop
    ctx->pc = 0x273618u;
    // NOP
label_27361c:
    // 0x27361c: 0x0  nop
    ctx->pc = 0x27361cu;
    // NOP
label_273620:
    // 0x273620: 0xa1e0  .word       0x0000A1E0                   # add         $s4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273620u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_273624:
    // 0x273624: 0xb800  sll         $s7, $zero, 0
    ctx->pc = 0x273624u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_273628:
    // 0x273628: 0x0  nop
    ctx->pc = 0x273628u;
    // NOP
label_27362c:
    // 0x27362c: 0x0  nop
    ctx->pc = 0x27362cu;
    // NOP
label_273630:
    // 0x273630: 0xa1f7  .word       0x0000A1F7                   # INVALID     $zero, $zero, -0x5E09 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x273630 raw=0x0000A1F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273634:
    // 0x273634: 0xbbf0  tge         $zero, $zero, 751
    ctx->pc = 0x273634u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273638:
    // 0x273638: 0x0  nop
    ctx->pc = 0x273638u;
    // NOP
label_27363c:
    // 0x27363c: 0x0  nop
    ctx->pc = 0x27363cu;
    // NOP
label_273640:
    // 0x273640: 0xa20f  .word       0x0000A20F                   # sync # 0000A000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273640u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_273644:
    // 0x273644: 0x6fa0  .word       0x00006FA0                   # add         $t5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273644u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_273648:
    // 0x273648: 0x0  nop
    ctx->pc = 0x273648u;
    // NOP
label_27364c:
    // 0x27364c: 0x0  nop
    ctx->pc = 0x27364cu;
    // NOP
label_273650:
    // 0x273650: 0xa21d  .word       0x0000A21D                   # dmultu      $zero, $zero # 0000A200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273650u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x273650 raw=0x0000A21D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273654:
    // 0x273654: 0xd910  .word       0x0000D910                   # mfhi        $k1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273654u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_273658:
    // 0x273658: 0x0  nop
    ctx->pc = 0x273658u;
    // NOP
label_27365c:
    // 0x27365c: 0x0  nop
    ctx->pc = 0x27365cu;
    // NOP
label_273660:
    // 0x273660: 0xa239  .word       0x0000A239                   # INVALID     $zero, $zero, -0x5DC7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273660u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x273660 raw=0x0000A239"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273664:
    // 0x273664: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x273664u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_273668:
    // 0x273668: 0x0  nop
    ctx->pc = 0x273668u;
    // NOP
label_27366c:
    // 0x27366c: 0x0  nop
    ctx->pc = 0x27366cu;
    // NOP
label_273670:
    // 0x273670: 0xa252  .word       0x0000A252                   # mflo        $s4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273670u;
    SET_GPR_U64(ctx, 20, ctx->lo);
label_273674:
    // 0x273674: 0x8e10  .word       0x00008E10                   # mfhi        $s1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273674u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_273678:
    // 0x273678: 0x0  nop
    ctx->pc = 0x273678u;
    // NOP
label_27367c:
    // 0x27367c: 0x0  nop
    ctx->pc = 0x27367cu;
    // NOP
label_273680:
    // 0x273680: 0xa264  .word       0x0000A264                   # and         $s4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273680u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_273684:
    // 0x273684: 0x6800  sll         $t5, $zero, 0
    ctx->pc = 0x273684u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_273688:
    // 0x273688: 0x0  nop
    ctx->pc = 0x273688u;
    // NOP
label_27368c:
    // 0x27368c: 0x0  nop
    ctx->pc = 0x27368cu;
    // NOP
label_273690:
    // 0x273690: 0xa271  tgeu        $zero, $zero, 649
    ctx->pc = 0x273690u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273694:
    // 0x273694: 0x4300  sll         $t0, $zero, 12
    ctx->pc = 0x273694u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_273698:
    // 0x273698: 0x0  nop
    ctx->pc = 0x273698u;
    // NOP
label_27369c:
    // 0x27369c: 0x0  nop
    ctx->pc = 0x27369cu;
    // NOP
label_2736a0:
    // 0x2736a0: 0xa27a  dsrl        $s4, $zero, 9
    ctx->pc = 0x2736a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) >> 9);
label_2736a4:
    // 0x2736a4: 0x2640  sll         $a0, $zero, 25
    ctx->pc = 0x2736a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_2736a8:
    // 0x2736a8: 0x0  nop
    ctx->pc = 0x2736a8u;
    // NOP
label_2736ac:
    // 0x2736ac: 0x0  nop
    ctx->pc = 0x2736acu;
    // NOP
label_2736b0:
    // 0x2736b0: 0xa27f  dsra32      $s4, $zero, 9
    ctx->pc = 0x2736b0u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> (32 + 9));
label_2736b4:
    // 0x2736b4: 0x3310  .word       0x00003310                   # mfhi        $a2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2736b4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2736b8:
    // 0x2736b8: 0x0  nop
    ctx->pc = 0x2736b8u;
    // NOP
label_2736bc:
    // 0x2736bc: 0x0  nop
    ctx->pc = 0x2736bcu;
    // NOP
label_2736c0:
    // 0x2736c0: 0xa286  .word       0x0000A286                   # srlv        $s4, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2736c0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2736c4:
    // 0x2736c4: 0x6150  .word       0x00006150                   # mfhi        $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2736c4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2736c8:
    // 0x2736c8: 0x0  nop
    ctx->pc = 0x2736c8u;
    // NOP
label_2736cc:
    // 0x2736cc: 0x0  nop
    ctx->pc = 0x2736ccu;
    // NOP
label_2736d0:
    // 0x2736d0: 0xa293  .word       0x0000A293                   # mtlo        $zero # 0000A280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2736d0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2736d4:
    // 0x2736d4: 0x6d10  .word       0x00006D10                   # mfhi        $t5 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2736d4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2736d8:
    // 0x2736d8: 0x0  nop
    ctx->pc = 0x2736d8u;
    // NOP
label_2736dc:
    // 0x2736dc: 0x0  nop
    ctx->pc = 0x2736dcu;
    // NOP
label_2736e0:
    // 0x2736e0: 0xa2a1  .word       0x0000A2A1                   # addu        $s4, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2736e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2736e4:
    // 0x2736e4: 0x8120  .word       0x00008120                   # add         $s0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2736e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2736e8:
    // 0x2736e8: 0x0  nop
    ctx->pc = 0x2736e8u;
    // NOP
label_2736ec:
    // 0x2736ec: 0x0  nop
    ctx->pc = 0x2736ecu;
    // NOP
label_2736f0:
    // 0x2736f0: 0xa2b2  tlt         $zero, $zero, 650
    ctx->pc = 0x2736f0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2736f4:
    // 0x2736f4: 0x7a80  sll         $t7, $zero, 10
    ctx->pc = 0x2736f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2736f8:
    // 0x2736f8: 0x0  nop
    ctx->pc = 0x2736f8u;
    // NOP
label_2736fc:
    // 0x2736fc: 0x0  nop
    ctx->pc = 0x2736fcu;
    // NOP
label_273700:
    // 0x273700: 0xa2c2  srl         $s4, $zero, 11
    ctx->pc = 0x273700u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), 11));
label_273704:
    // 0x273704: 0x77b0  tge         $zero, $zero, 478
    ctx->pc = 0x273704u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273708:
    // 0x273708: 0x0  nop
    ctx->pc = 0x273708u;
    // NOP
label_27370c:
    // 0x27370c: 0x0  nop
    ctx->pc = 0x27370cu;
    // NOP
label_273710:
    // 0x273710: 0xa2d1  .word       0x0000A2D1                   # mthi        $zero # 0000A2C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273710u;
    ctx->hi = GPR_U64(ctx, 0);
label_273714:
    // 0x273714: 0xa5a0  .word       0x0000A5A0                   # add         $s4, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273714u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_273718:
    // 0x273718: 0x0  nop
    ctx->pc = 0x273718u;
    // NOP
label_27371c:
    // 0x27371c: 0x0  nop
    ctx->pc = 0x27371cu;
    // NOP
label_273720:
    // 0x273720: 0xa2e6  .word       0x0000A2E6                   # xor         $s4, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273720u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_273724:
    // 0x273724: 0x8900  sll         $s1, $zero, 4
    ctx->pc = 0x273724u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_273728:
    // 0x273728: 0x0  nop
    ctx->pc = 0x273728u;
    // NOP
label_27372c:
    // 0x27372c: 0x0  nop
    ctx->pc = 0x27372cu;
    // NOP
label_273730:
    // 0x273730: 0xa2f8  dsll        $s4, $zero, 11
    ctx->pc = 0x273730u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << 11);
label_273734:
    // 0x273734: 0x3f90  .word       0x00003F90                   # mfhi        $a3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273734u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_273738:
    // 0x273738: 0x0  nop
    ctx->pc = 0x273738u;
    // NOP
label_27373c:
    // 0x27373c: 0x0  nop
    ctx->pc = 0x27373cu;
    // NOP
label_273740:
    // 0x273740: 0xa300  sll         $s4, $zero, 12
    ctx->pc = 0x273740u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_273744:
    // 0x273744: 0x89a0  .word       0x000089A0                   # add         $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273744u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_273748:
    // 0x273748: 0x0  nop
    ctx->pc = 0x273748u;
    // NOP
label_27374c:
    // 0x27374c: 0x0  nop
    ctx->pc = 0x27374cu;
    // NOP
label_273750:
    // 0x273750: 0xa312  .word       0x0000A312                   # mflo        $s4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273750u;
    SET_GPR_U64(ctx, 20, ctx->lo);
label_273754:
    // 0x273754: 0x8940  sll         $s1, $zero, 5
    ctx->pc = 0x273754u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_273758:
    // 0x273758: 0x0  nop
    ctx->pc = 0x273758u;
    // NOP
label_27375c:
    // 0x27375c: 0x0  nop
    ctx->pc = 0x27375cu;
    // NOP
label_273760:
    // 0x273760: 0xa324  .word       0x0000A324                   # and         $s4, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273760u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_273764:
    // 0x273764: 0x86a0  .word       0x000086A0                   # add         $s0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273764u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_273768:
    // 0x273768: 0x0  nop
    ctx->pc = 0x273768u;
    // NOP
label_27376c:
    // 0x27376c: 0x0  nop
    ctx->pc = 0x27376cu;
    // NOP
label_273770:
    // 0x273770: 0xa335  .word       0x0000A335                   # INVALID     $zero, $zero, -0x5CCB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x273770 raw=0x0000A335"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273774:
    // 0x273774: 0xa210  .word       0x0000A210                   # mfhi        $s4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273774u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_273778:
    // 0x273778: 0x0  nop
    ctx->pc = 0x273778u;
    // NOP
label_27377c:
    // 0x27377c: 0x0  nop
    ctx->pc = 0x27377cu;
    // NOP
label_273780:
    // 0x273780: 0xa34a  .word       0x0000A34A                   # movz        $s4, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273780u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_273784:
    // 0x273784: 0x5910  .word       0x00005910                   # mfhi        $t3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273784u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_273788:
    // 0x273788: 0x0  nop
    ctx->pc = 0x273788u;
    // NOP
label_27378c:
    // 0x27378c: 0x0  nop
    ctx->pc = 0x27378cu;
    // NOP
label_273790:
    // 0x273790: 0xa356  .word       0x0000A356                   # dsrlv       $s4, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273790u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_273794:
    // 0x273794: 0x76e0  .word       0x000076E0                   # add         $t6, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273794u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_273798:
    // 0x273798: 0x0  nop
    ctx->pc = 0x273798u;
    // NOP
label_27379c:
    // 0x27379c: 0x0  nop
    ctx->pc = 0x27379cu;
    // NOP
label_2737a0:
    // 0x2737a0: 0xa365  .word       0x0000A365                   # move        $s4, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2737a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2737a4:
    // 0x2737a4: 0x7f90  .word       0x00007F90                   # mfhi        $t7 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2737a4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2737a8:
    // 0x2737a8: 0x0  nop
    ctx->pc = 0x2737a8u;
    // NOP
label_2737ac:
    // 0x2737ac: 0x0  nop
    ctx->pc = 0x2737acu;
    // NOP
label_2737b0:
    // 0x2737b0: 0xa375  .word       0x0000A375                   # INVALID     $zero, $zero, -0x5C8B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2737b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2737B0 raw=0x0000A375"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2737b4:
    // 0x2737b4: 0x9c90  .word       0x00009C90                   # mfhi        $s3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2737b4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2737b8:
    // 0x2737b8: 0x0  nop
    ctx->pc = 0x2737b8u;
    // NOP
label_2737bc:
    // 0x2737bc: 0x0  nop
    ctx->pc = 0x2737bcu;
    // NOP
label_2737c0:
    // 0x2737c0: 0xa389  .word       0x0000A389                   # jalr        $s4, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
label_2737c4:
    if (ctx->pc == 0x2737C4u) {
        ctx->pc = 0x2737C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737C0u;
        // 0x2737c4: 0x3030  tge         $zero, $zero, 192 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2737C8u;
        goto label_2737c8;
    }
    ctx->pc = 0x2737C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 20, 0x2737C8u);
        ctx->pc = 0x2737C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737C0u;
        // 0x2737c4: 0x3030  tge         $zero, $zero, 192 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2737C0u, 0x2737C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2737C8u;
label_2737c8:
    // 0x2737c8: 0x0  nop
    ctx->pc = 0x2737c8u;
    // NOP
label_2737cc:
    // 0x2737cc: 0x0  nop
    ctx->pc = 0x2737ccu;
    // NOP
label_2737d0:
    // 0x2737d0: 0xa390  .word       0x0000A390                   # mfhi        $s4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2737d0u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_2737d4:
    // 0x2737d4: 0x31f0  tge         $zero, $zero, 199
    ctx->pc = 0x2737d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2737d8:
    // 0x2737d8: 0x0  nop
    ctx->pc = 0x2737d8u;
    // NOP
label_2737dc:
    // 0x2737dc: 0x0  nop
    ctx->pc = 0x2737dcu;
    // NOP
label_2737e0:
    // 0x2737e0: 0xa397  .word       0x0000A397                   # dsrav       $s4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2737e0u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2737e4:
    // 0x2737e4: 0x7150  .word       0x00007150                   # mfhi        $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2737e4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2737e8:
    // 0x2737e8: 0x0  nop
    ctx->pc = 0x2737e8u;
    // NOP
label_2737ec:
    // 0x2737ec: 0x0  nop
    ctx->pc = 0x2737ecu;
    // NOP
label_2737f0:
    // 0x2737f0: 0xa3a6  .word       0x0000A3A6                   # xor         $s4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2737f0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2737f4:
    // 0x2737f4: 0x8c90  .word       0x00008C90                   # mfhi        $s1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2737f4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2737f8:
    // 0x2737f8: 0x0  nop
    ctx->pc = 0x2737f8u;
    // NOP
label_2737fc:
    // 0x2737fc: 0x0  nop
    ctx->pc = 0x2737fcu;
    // NOP
label_273800:
    // 0x273800: 0xa3b8  dsll        $s4, $zero, 14
    ctx->pc = 0x273800u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << 14);
label_273804:
    // 0x273804: 0x6430  tge         $zero, $zero, 400
    ctx->pc = 0x273804u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273808:
    // 0x273808: 0x0  nop
    ctx->pc = 0x273808u;
    // NOP
label_27380c:
    // 0x27380c: 0x0  nop
    ctx->pc = 0x27380cu;
    // NOP
label_273810:
    // 0x273810: 0xa3c5  .word       0x0000A3C5                   # INVALID     $zero, $zero, -0x5C3B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273810u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x273810 raw=0x0000A3C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273814:
    // 0x273814: 0x7310  .word       0x00007310                   # mfhi        $t6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273814u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_273818:
    // 0x273818: 0x0  nop
    ctx->pc = 0x273818u;
    // NOP
label_27381c:
    // 0x27381c: 0x0  nop
    ctx->pc = 0x27381cu;
    // NOP
label_273820:
    // 0x273820: 0xa3d4  .word       0x0000A3D4                   # dsllv       $s4, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273820u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_273824:
    // 0x273824: 0xb910  .word       0x0000B910                   # mfhi        $s7 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273824u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_273828:
    // 0x273828: 0x0  nop
    ctx->pc = 0x273828u;
    // NOP
label_27382c:
    // 0x27382c: 0x0  nop
    ctx->pc = 0x27382cu;
    // NOP
label_273830:
    // 0x273830: 0xa3ec  .word       0x0000A3EC                   # dadd        $s4, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273830u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, r); }
label_273834:
    // 0x273834: 0xa830  tge         $zero, $zero, 672
    ctx->pc = 0x273834u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273838:
    // 0x273838: 0x0  nop
    ctx->pc = 0x273838u;
    // NOP
label_27383c:
    // 0x27383c: 0x0  nop
    ctx->pc = 0x27383cu;
    // NOP
label_273840:
    // 0x273840: 0xa402  srl         $s4, $zero, 16
    ctx->pc = 0x273840u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), 16));
label_273844:
    // 0x273844: 0x3f00  sll         $a3, $zero, 28
    ctx->pc = 0x273844u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_273848:
    // 0x273848: 0x0  nop
    ctx->pc = 0x273848u;
    // NOP
label_27384c:
    // 0x27384c: 0x0  nop
    ctx->pc = 0x27384cu;
    // NOP
label_273850:
    // 0x273850: 0xa40a  .word       0x0000A40A                   # movz        $s4, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273850u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_273854:
    // 0x273854: 0x6ef0  tge         $zero, $zero, 443
    ctx->pc = 0x273854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273858:
    // 0x273858: 0x0  nop
    ctx->pc = 0x273858u;
    // NOP
label_27385c:
    // 0x27385c: 0x0  nop
    ctx->pc = 0x27385cu;
    // NOP
label_273860:
    // 0x273860: 0xa418  .word       0x0000A418                   # mult        $s4, $zero, $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x273860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_273864:
    // 0x273864: 0x55e0  .word       0x000055E0                   # add         $t2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273864u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_273868:
    // 0x273868: 0x0  nop
    ctx->pc = 0x273868u;
    // NOP
label_27386c:
    // 0x27386c: 0x0  nop
    ctx->pc = 0x27386cu;
    // NOP
label_273870:
    // 0x273870: 0xa423  .word       0x0000A423                   # negu        $s4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273870u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_273874:
    // 0x273874: 0x7550  .word       0x00007550                   # mfhi        $t6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273874u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_273878:
    // 0x273878: 0x0  nop
    ctx->pc = 0x273878u;
    // NOP
label_27387c:
    // 0x27387c: 0x0  nop
    ctx->pc = 0x27387cu;
    // NOP
label_273880:
    // 0x273880: 0xa432  tlt         $zero, $zero, 656
    ctx->pc = 0x273880u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273884:
    // 0x273884: 0x9d90  .word       0x00009D90                   # mfhi        $s3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273884u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_273888:
    // 0x273888: 0x0  nop
    ctx->pc = 0x273888u;
    // NOP
label_27388c:
    // 0x27388c: 0x0  nop
    ctx->pc = 0x27388cu;
    // NOP
label_273890:
    // 0x273890: 0xa446  .word       0x0000A446                   # srlv        $s4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273890u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_273894:
    // 0x273894: 0x62f0  tge         $zero, $zero, 395
    ctx->pc = 0x273894u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273898:
    // 0x273898: 0x0  nop
    ctx->pc = 0x273898u;
    // NOP
label_27389c:
    // 0x27389c: 0x0  nop
    ctx->pc = 0x27389cu;
    // NOP
label_2738a0:
    // 0x2738a0: 0xa453  .word       0x0000A453                   # mtlo        $zero # 0000A440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2738a0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2738a4:
    // 0x2738a4: 0x44c0  sll         $t0, $zero, 19
    ctx->pc = 0x2738a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2738a8:
    // 0x2738a8: 0x0  nop
    ctx->pc = 0x2738a8u;
    // NOP
label_2738ac:
    // 0x2738ac: 0x0  nop
    ctx->pc = 0x2738acu;
    // NOP
label_2738b0:
    // 0x2738b0: 0xa45c  .word       0x0000A45C                   # dmult       $zero, $zero # 0000A440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2738b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2738B0 raw=0x0000A45C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2738b4:
    // 0x2738b4: 0x3fc0  sll         $a3, $zero, 31
    ctx->pc = 0x2738b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2738b8:
    // 0x2738b8: 0x0  nop
    ctx->pc = 0x2738b8u;
    // NOP
label_2738bc:
    // 0x2738bc: 0x0  nop
    ctx->pc = 0x2738bcu;
    // NOP
label_2738c0:
    // 0x2738c0: 0xa464  .word       0x0000A464                   # and         $s4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2738c0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2738c4:
    // 0x2738c4: 0x9560  .word       0x00009560                   # add         $s2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2738c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2738c8:
    // 0x2738c8: 0x0  nop
    ctx->pc = 0x2738c8u;
    // NOP
label_2738cc:
    // 0x2738cc: 0x0  nop
    ctx->pc = 0x2738ccu;
    // NOP
label_2738d0:
    // 0x2738d0: 0xa477  .word       0x0000A477                   # INVALID     $zero, $zero, -0x5B89 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2738d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2738D0 raw=0x0000A477"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2738d4:
    // 0x2738d4: 0x5670  tge         $zero, $zero, 345
    ctx->pc = 0x2738d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2738d8:
    // 0x2738d8: 0x0  nop
    ctx->pc = 0x2738d8u;
    // NOP
label_2738dc:
    // 0x2738dc: 0x0  nop
    ctx->pc = 0x2738dcu;
    // NOP
label_2738e0:
    // 0x2738e0: 0xa482  srl         $s4, $zero, 18
    ctx->pc = 0x2738e0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), 18));
label_2738e4:
    // 0x2738e4: 0x5100  sll         $t2, $zero, 4
    ctx->pc = 0x2738e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2738e8:
    // 0x2738e8: 0x0  nop
    ctx->pc = 0x2738e8u;
    // NOP
label_2738ec:
    // 0x2738ec: 0x0  nop
    ctx->pc = 0x2738ecu;
    // NOP
label_2738f0:
    // 0x2738f0: 0xa48d  break       0, 658
    ctx->pc = 0x2738f0u;
    runtime->handleBreak(rdram, ctx);
label_2738f4:
    // 0x2738f4: 0x51c0  sll         $t2, $zero, 7
    ctx->pc = 0x2738f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_2738f8:
    // 0x2738f8: 0x0  nop
    ctx->pc = 0x2738f8u;
    // NOP
label_2738fc:
    // 0x2738fc: 0x0  nop
    ctx->pc = 0x2738fcu;
    // NOP
label_273900:
    // 0x273900: 0xa498  .word       0x0000A498                   # mult        $s4, $zero, $zero # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x273900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_273904:
    // 0x273904: 0x3b00  sll         $a3, $zero, 12
    ctx->pc = 0x273904u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_273908:
    // 0x273908: 0x0  nop
    ctx->pc = 0x273908u;
    // NOP
label_27390c:
    // 0x27390c: 0x0  nop
    ctx->pc = 0x27390cu;
    // NOP
label_273910:
    // 0x273910: 0xa4a0  .word       0x0000A4A0                   # add         $s4, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273910u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_273914:
    // 0x273914: 0x42e0  .word       0x000042E0                   # add         $t0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273914u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_273918:
    // 0x273918: 0x0  nop
    ctx->pc = 0x273918u;
    // NOP
label_27391c:
    // 0x27391c: 0x0  nop
    ctx->pc = 0x27391cu;
    // NOP
label_273920:
    // 0x273920: 0xa4a9  .word       0x0000A4A9                   # mtsa        $zero # 0000A480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x273920u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_273924:
    // 0x273924: 0x3b70  tge         $zero, $zero, 237
    ctx->pc = 0x273924u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273928:
    // 0x273928: 0x0  nop
    ctx->pc = 0x273928u;
    // NOP
label_27392c:
    // 0x27392c: 0x0  nop
    ctx->pc = 0x27392cu;
    // NOP
label_273930:
    // 0x273930: 0xa4b1  tgeu        $zero, $zero, 658
    ctx->pc = 0x273930u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273934:
    // 0x273934: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273934u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_273938:
    // 0x273938: 0x0  nop
    ctx->pc = 0x273938u;
    // NOP
label_27393c:
    // 0x27393c: 0x0  nop
    ctx->pc = 0x27393cu;
    // NOP
label_273940:
    // 0x273940: 0xa4c0  sll         $s4, $zero, 19
    ctx->pc = 0x273940u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_273944:
    // 0x273944: 0x3dd0  .word       0x00003DD0                   # mfhi        $a3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273944u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_273948:
    // 0x273948: 0x0  nop
    ctx->pc = 0x273948u;
    // NOP
label_27394c:
    // 0x27394c: 0x0  nop
    ctx->pc = 0x27394cu;
    // NOP
label_273950:
    // 0x273950: 0xa4c8  .word       0x0000A4C8                   # jr          $zero # 0000A4C0 <InstrIdType: CPU_SPECIAL>
label_273954:
    if (ctx->pc == 0x273954u) {
        ctx->pc = 0x273954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273950u;
        // 0x273954: 0x6880  sll         $t5, $zero, 2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273958u;
        goto label_273958;
    }
    ctx->pc = 0x273950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x273954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273950u;
        // 0x273954: 0x6880  sll         $t5, $zero, 2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273950u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273958u;
label_273958:
    // 0x273958: 0x0  nop
    ctx->pc = 0x273958u;
    // NOP
label_27395c:
    // 0x27395c: 0x0  nop
    ctx->pc = 0x27395cu;
    // NOP
label_273960:
    // 0x273960: 0xa4d6  .word       0x0000A4D6                   # dsrlv       $s4, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273960u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_273964:
    // 0x273964: 0x4cc0  sll         $t1, $zero, 19
    ctx->pc = 0x273964u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_273968:
    // 0x273968: 0x0  nop
    ctx->pc = 0x273968u;
    // NOP
label_27396c:
    // 0x27396c: 0x0  nop
    ctx->pc = 0x27396cu;
    // NOP
label_273970:
    // 0x273970: 0xa4e0  .word       0x0000A4E0                   # add         $s4, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273970u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_273974:
    // 0x273974: 0x3ed0  .word       0x00003ED0                   # mfhi        $a3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273974u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_273978:
    // 0x273978: 0x0  nop
    ctx->pc = 0x273978u;
    // NOP
label_27397c:
    // 0x27397c: 0x0  nop
    ctx->pc = 0x27397cu;
    // NOP
label_273980:
    // 0x273980: 0xa4e8  .word       0x0000A4E8                   # mfsa        $s4 # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x273980u;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_273984:
    // 0x273984: 0x4530  tge         $zero, $zero, 276
    ctx->pc = 0x273984u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273988:
    // 0x273988: 0x0  nop
    ctx->pc = 0x273988u;
    // NOP
label_27398c:
    // 0x27398c: 0x0  nop
    ctx->pc = 0x27398cu;
    // NOP
label_273990:
    // 0x273990: 0xa4f1  tgeu        $zero, $zero, 659
    ctx->pc = 0x273990u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273994:
    // 0x273994: 0x57b0  tge         $zero, $zero, 350
    ctx->pc = 0x273994u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273998:
    // 0x273998: 0x0  nop
    ctx->pc = 0x273998u;
    // NOP
label_27399c:
    // 0x27399c: 0x0  nop
    ctx->pc = 0x27399cu;
    // NOP
label_2739a0:
    // 0x2739a0: 0xa4fc  dsll32      $s4, $zero, 19
    ctx->pc = 0x2739a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << (32 + 19));
label_2739a4:
    // 0x2739a4: 0x4f00  sll         $t1, $zero, 28
    ctx->pc = 0x2739a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2739a8:
    // 0x2739a8: 0x0  nop
    ctx->pc = 0x2739a8u;
    // NOP
label_2739ac:
    // 0x2739ac: 0x0  nop
    ctx->pc = 0x2739acu;
    // NOP
label_2739b0:
    // 0x2739b0: 0xa506  .word       0x0000A506                   # srlv        $s4, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2739b0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2739b4:
    // 0x2739b4: 0x5d00  sll         $t3, $zero, 20
    ctx->pc = 0x2739b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2739b8:
    // 0x2739b8: 0x0  nop
    ctx->pc = 0x2739b8u;
    // NOP
label_2739bc:
    // 0x2739bc: 0x0  nop
    ctx->pc = 0x2739bcu;
    // NOP
label_2739c0:
    // 0x2739c0: 0xa512  .word       0x0000A512                   # mflo        $s4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2739c0u;
    SET_GPR_U64(ctx, 20, ctx->lo);
label_2739c4:
    // 0x2739c4: 0x3880  sll         $a3, $zero, 2
    ctx->pc = 0x2739c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2739c8:
    // 0x2739c8: 0x0  nop
    ctx->pc = 0x2739c8u;
    // NOP
label_2739cc:
    // 0x2739cc: 0x0  nop
    ctx->pc = 0x2739ccu;
    // NOP
label_2739d0:
    // 0x2739d0: 0xa51a  .word       0x0000A51A                   # div         $s4, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2739d0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2739d4:
    // 0x2739d4: 0x4550  .word       0x00004550                   # mfhi        $t0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2739d4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2739d8:
    // 0x2739d8: 0x0  nop
    ctx->pc = 0x2739d8u;
    // NOP
label_2739dc:
    // 0x2739dc: 0x0  nop
    ctx->pc = 0x2739dcu;
    // NOP
label_2739e0:
    // 0x2739e0: 0xa523  .word       0x0000A523                   # negu        $s4, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2739e0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2739e4:
    // 0x2739e4: 0x8140  sll         $s0, $zero, 5
    ctx->pc = 0x2739e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2739e8:
    // 0x2739e8: 0x0  nop
    ctx->pc = 0x2739e8u;
    // NOP
label_2739ec:
    // 0x2739ec: 0x0  nop
    ctx->pc = 0x2739ecu;
    // NOP
label_2739f0:
    // 0x2739f0: 0xa534  teq         $zero, $zero, 660
    ctx->pc = 0x2739f0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2739f4:
    // 0x2739f4: 0x4630  tge         $zero, $zero, 280
    ctx->pc = 0x2739f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2739f8:
    // 0x2739f8: 0x0  nop
    ctx->pc = 0x2739f8u;
    // NOP
label_2739fc:
    // 0x2739fc: 0x0  nop
    ctx->pc = 0x2739fcu;
    // NOP
label_273a00:
    // 0x273a00: 0xa53d  .word       0x0000A53D                   # INVALID     $zero, $zero, -0x5AC3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x273A00 raw=0x0000A53D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273a04:
    // 0x273a04: 0x9d70  tge         $zero, $zero, 629
    ctx->pc = 0x273a04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a08:
    // 0x273a08: 0x0  nop
    ctx->pc = 0x273a08u;
    // NOP
label_273a0c:
    // 0x273a0c: 0x0  nop
    ctx->pc = 0x273a0cu;
    // NOP
label_273a10:
    // 0x273a10: 0xa551  .word       0x0000A551                   # mthi        $zero # 0000A540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a10u;
    ctx->hi = GPR_U64(ctx, 0);
label_273a14:
    // 0x273a14: 0xa230  tge         $zero, $zero, 648
    ctx->pc = 0x273a14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a18:
    // 0x273a18: 0x0  nop
    ctx->pc = 0x273a18u;
    // NOP
label_273a1c:
    // 0x273a1c: 0x0  nop
    ctx->pc = 0x273a1cu;
    // NOP
label_273a20:
    // 0x273a20: 0xa566  .word       0x0000A566                   # xor         $s4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a20u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_273a24:
    // 0x273a24: 0x7030  tge         $zero, $zero, 448
    ctx->pc = 0x273a24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a28:
    // 0x273a28: 0x0  nop
    ctx->pc = 0x273a28u;
    // NOP
label_273a2c:
    // 0x273a2c: 0x0  nop
    ctx->pc = 0x273a2cu;
    // NOP
label_273a30:
    // 0x273a30: 0xa575  .word       0x0000A575                   # INVALID     $zero, $zero, -0x5A8B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x273A30 raw=0x0000A575"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273a34:
    // 0x273a34: 0x4de0  .word       0x00004DE0                   # add         $t1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_273a38:
    // 0x273a38: 0x0  nop
    ctx->pc = 0x273a38u;
    // NOP
label_273a3c:
    // 0x273a3c: 0x0  nop
    ctx->pc = 0x273a3cu;
    // NOP
label_273a40:
    // 0x273a40: 0xa57f  dsra32      $s4, $zero, 21
    ctx->pc = 0x273a40u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> (32 + 21));
label_273a44:
    // 0x273a44: 0x6a30  tge         $zero, $zero, 424
    ctx->pc = 0x273a44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a48:
    // 0x273a48: 0x0  nop
    ctx->pc = 0x273a48u;
    // NOP
label_273a4c:
    // 0x273a4c: 0x0  nop
    ctx->pc = 0x273a4cu;
    // NOP
label_273a50:
    // 0x273a50: 0xa58d  break       0, 662
    ctx->pc = 0x273a50u;
    runtime->handleBreak(rdram, ctx);
label_273a54:
    // 0x273a54: 0x3700  sll         $a2, $zero, 28
    ctx->pc = 0x273a54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_273a58:
    // 0x273a58: 0x0  nop
    ctx->pc = 0x273a58u;
    // NOP
label_273a5c:
    // 0x273a5c: 0x0  nop
    ctx->pc = 0x273a5cu;
    // NOP
label_273a60:
    // 0x273a60: 0xa594  .word       0x0000A594                   # dsllv       $s4, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a60u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_273a64:
    // 0x273a64: 0x3880  sll         $a3, $zero, 2
    ctx->pc = 0x273a64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_273a68:
    // 0x273a68: 0x0  nop
    ctx->pc = 0x273a68u;
    // NOP
label_273a6c:
    // 0x273a6c: 0x0  nop
    ctx->pc = 0x273a6cu;
    // NOP
label_273a70:
    // 0x273a70: 0xa59c  .word       0x0000A59C                   # dmult       $zero, $zero # 0000A580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x273A70 raw=0x0000A59C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273a74:
    // 0x273a74: 0x3b70  tge         $zero, $zero, 237
    ctx->pc = 0x273a74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a78:
    // 0x273a78: 0x0  nop
    ctx->pc = 0x273a78u;
    // NOP
label_273a7c:
    // 0x273a7c: 0x0  nop
    ctx->pc = 0x273a7cu;
    // NOP
label_273a80:
    // 0x273a80: 0xa5a4  .word       0x0000A5A4                   # and         $s4, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a80u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_273a84:
    // 0x273a84: 0x7890  .word       0x00007890                   # mfhi        $t7 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a84u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_273a88:
    // 0x273a88: 0x0  nop
    ctx->pc = 0x273a88u;
    // NOP
label_273a8c:
    // 0x273a8c: 0x0  nop
    ctx->pc = 0x273a8cu;
    // NOP
label_273a90:
    // 0x273a90: 0xa5b4  teq         $zero, $zero, 662
    ctx->pc = 0x273a90u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a94:
    // 0x273a94: 0x6af0  tge         $zero, $zero, 427
    ctx->pc = 0x273a94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a98:
    // 0x273a98: 0x0  nop
    ctx->pc = 0x273a98u;
    // NOP
label_273a9c:
    // 0x273a9c: 0x0  nop
    ctx->pc = 0x273a9cu;
    // NOP
label_273aa0:
    // 0x273aa0: 0xa5c2  srl         $s4, $zero, 23
    ctx->pc = 0x273aa0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), 23));
label_273aa4:
    // 0x273aa4: 0x3de0  .word       0x00003DE0                   # add         $a3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273aa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_273aa8:
    // 0x273aa8: 0x0  nop
    ctx->pc = 0x273aa8u;
    // NOP
label_273aac:
    // 0x273aac: 0x0  nop
    ctx->pc = 0x273aacu;
    // NOP
label_273ab0:
    // 0x273ab0: 0xa5ca  .word       0x0000A5CA                   # movz        $s4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ab0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_273ab4:
    // 0x273ab4: 0x59f0  tge         $zero, $zero, 359
    ctx->pc = 0x273ab4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273ab8:
    // 0x273ab8: 0x0  nop
    ctx->pc = 0x273ab8u;
    // NOP
label_273abc:
    // 0x273abc: 0x0  nop
    ctx->pc = 0x273abcu;
    // NOP
label_273ac0:
    // 0x273ac0: 0xa5d6  .word       0x0000A5D6                   # dsrlv       $s4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ac0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_273ac4:
    // 0x273ac4: 0x86a0  .word       0x000086A0                   # add         $s0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_273ac8:
    // 0x273ac8: 0x0  nop
    ctx->pc = 0x273ac8u;
    // NOP
label_273acc:
    // 0x273acc: 0x0  nop
    ctx->pc = 0x273accu;
    // NOP
label_273ad0:
    // 0x273ad0: 0xa5e7  .word       0x0000A5E7                   # not         $s4, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ad0u;
    SET_GPR_U64(ctx, 20, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_273ad4:
    // 0x273ad4: 0x4900  sll         $t1, $zero, 4
    ctx->pc = 0x273ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_273ad8:
    // 0x273ad8: 0x0  nop
    ctx->pc = 0x273ad8u;
    // NOP
label_273adc:
    // 0x273adc: 0x0  nop
    ctx->pc = 0x273adcu;
    // NOP
label_273ae0:
    // 0x273ae0: 0xa5f1  tgeu        $zero, $zero, 663
    ctx->pc = 0x273ae0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273ae4:
    // 0x273ae4: 0x5910  .word       0x00005910                   # mfhi        $t3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ae4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_273ae8:
    // 0x273ae8: 0x0  nop
    ctx->pc = 0x273ae8u;
    // NOP
label_273aec:
    // 0x273aec: 0x0  nop
    ctx->pc = 0x273aecu;
    // NOP
label_273af0:
    // 0x273af0: 0xa5fd  .word       0x0000A5FD                   # INVALID     $zero, $zero, -0x5A03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273af0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x273AF0 raw=0x0000A5FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273af4:
    // 0x273af4: 0x5990  .word       0x00005990                   # mfhi        $t3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273af4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_273af8:
    // 0x273af8: 0x0  nop
    ctx->pc = 0x273af8u;
    // NOP
label_273afc:
    // 0x273afc: 0x0  nop
    ctx->pc = 0x273afcu;
    // NOP
label_273b00:
    // 0x273b00: 0xa609  .word       0x0000A609                   # jalr        $s4, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
label_273b04:
    if (ctx->pc == 0x273B04u) {
        ctx->pc = 0x273B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B00u;
        // 0x273b04: 0x5df0  tge         $zero, $zero, 375 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x273B08u;
        { ctx->pc = 0x273b08; return; }
    }
    ctx->pc = 0x273B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 20, 0x273B08u);
        ctx->pc = 0x273B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B00u;
        // 0x273b04: 0x5df0  tge         $zero, $zero, 375 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273B00u, 0x273B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273B08u;
    ctx->pc = 0x273b08u;
    return;
}
