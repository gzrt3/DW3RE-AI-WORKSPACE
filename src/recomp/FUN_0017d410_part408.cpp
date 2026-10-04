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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x243fc0u: goto label_243fc0;
        case 0x243fc4u: goto label_243fc4;
        case 0x243fc8u: goto label_243fc8;
        case 0x243fccu: goto label_243fcc;
        case 0x243fd0u: goto label_243fd0;
        case 0x243fd4u: goto label_243fd4;
        case 0x243fd8u: goto label_243fd8;
        case 0x243fdcu: goto label_243fdc;
        case 0x243fe0u: goto label_243fe0;
        case 0x243fe4u: goto label_243fe4;
        case 0x243fe8u: goto label_243fe8;
        case 0x243fecu: goto label_243fec;
        case 0x243ff0u: goto label_243ff0;
        case 0x243ff4u: goto label_243ff4;
        case 0x243ff8u: goto label_243ff8;
        case 0x243ffcu: goto label_243ffc;
        case 0x244000u: goto label_244000;
        case 0x244004u: goto label_244004;
        case 0x244008u: goto label_244008;
        case 0x24400cu: goto label_24400c;
        case 0x244010u: goto label_244010;
        case 0x244014u: goto label_244014;
        case 0x244018u: goto label_244018;
        case 0x24401cu: goto label_24401c;
        case 0x244020u: goto label_244020;
        case 0x244024u: goto label_244024;
        case 0x244028u: goto label_244028;
        case 0x24402cu: goto label_24402c;
        case 0x244030u: goto label_244030;
        case 0x244034u: goto label_244034;
        case 0x244038u: goto label_244038;
        case 0x24403cu: goto label_24403c;
        case 0x244040u: goto label_244040;
        case 0x244044u: goto label_244044;
        case 0x244048u: goto label_244048;
        case 0x24404cu: goto label_24404c;
        case 0x244050u: goto label_244050;
        case 0x244054u: goto label_244054;
        case 0x244058u: goto label_244058;
        case 0x24405cu: goto label_24405c;
        case 0x244060u: goto label_244060;
        case 0x244064u: goto label_244064;
        case 0x244068u: goto label_244068;
        case 0x24406cu: goto label_24406c;
        case 0x244070u: goto label_244070;
        case 0x244074u: goto label_244074;
        case 0x244078u: goto label_244078;
        case 0x24407cu: goto label_24407c;
        case 0x244080u: goto label_244080;
        case 0x244084u: goto label_244084;
        case 0x244088u: goto label_244088;
        case 0x24408cu: goto label_24408c;
        case 0x244090u: goto label_244090;
        case 0x244094u: goto label_244094;
        case 0x244098u: goto label_244098;
        case 0x24409cu: goto label_24409c;
        case 0x2440a0u: goto label_2440a0;
        case 0x2440a4u: goto label_2440a4;
        case 0x2440a8u: goto label_2440a8;
        case 0x2440acu: goto label_2440ac;
        case 0x2440b0u: goto label_2440b0;
        case 0x2440b4u: goto label_2440b4;
        case 0x2440b8u: goto label_2440b8;
        case 0x2440bcu: goto label_2440bc;
        case 0x2440c0u: goto label_2440c0;
        case 0x2440c4u: goto label_2440c4;
        case 0x2440c8u: goto label_2440c8;
        case 0x2440ccu: goto label_2440cc;
        case 0x2440d0u: goto label_2440d0;
        case 0x2440d4u: goto label_2440d4;
        case 0x2440d8u: goto label_2440d8;
        case 0x2440dcu: goto label_2440dc;
        case 0x2440e0u: goto label_2440e0;
        case 0x2440e4u: goto label_2440e4;
        case 0x2440e8u: goto label_2440e8;
        case 0x2440ecu: goto label_2440ec;
        case 0x2440f0u: goto label_2440f0;
        case 0x2440f4u: goto label_2440f4;
        case 0x2440f8u: goto label_2440f8;
        case 0x2440fcu: goto label_2440fc;
        case 0x244100u: goto label_244100;
        case 0x244104u: goto label_244104;
        case 0x244108u: goto label_244108;
        case 0x24410cu: goto label_24410c;
        case 0x244110u: goto label_244110;
        case 0x244114u: goto label_244114;
        case 0x244118u: goto label_244118;
        case 0x24411cu: goto label_24411c;
        case 0x244120u: goto label_244120;
        case 0x244124u: goto label_244124;
        case 0x244128u: goto label_244128;
        case 0x24412cu: goto label_24412c;
        case 0x244130u: goto label_244130;
        case 0x244134u: goto label_244134;
        case 0x244138u: goto label_244138;
        case 0x24413cu: goto label_24413c;
        case 0x244140u: goto label_244140;
        case 0x244144u: goto label_244144;
        case 0x244148u: goto label_244148;
        case 0x24414cu: goto label_24414c;
        case 0x244150u: goto label_244150;
        case 0x244154u: goto label_244154;
        case 0x244158u: goto label_244158;
        case 0x24415cu: goto label_24415c;
        case 0x244160u: goto label_244160;
        case 0x244164u: goto label_244164;
        case 0x244168u: goto label_244168;
        case 0x24416cu: goto label_24416c;
        case 0x244170u: goto label_244170;
        case 0x244174u: goto label_244174;
        case 0x244178u: goto label_244178;
        case 0x24417cu: goto label_24417c;
        case 0x244180u: goto label_244180;
        case 0x244184u: goto label_244184;
        case 0x244188u: goto label_244188;
        case 0x24418cu: goto label_24418c;
        case 0x244190u: goto label_244190;
        case 0x244194u: goto label_244194;
        case 0x244198u: goto label_244198;
        case 0x24419cu: goto label_24419c;
        case 0x2441a0u: goto label_2441a0;
        case 0x2441a4u: goto label_2441a4;
        case 0x2441a8u: goto label_2441a8;
        case 0x2441acu: goto label_2441ac;
        case 0x2441b0u: goto label_2441b0;
        case 0x2441b4u: goto label_2441b4;
        case 0x2441b8u: goto label_2441b8;
        case 0x2441bcu: goto label_2441bc;
        case 0x2441c0u: goto label_2441c0;
        case 0x2441c4u: goto label_2441c4;
        case 0x2441c8u: goto label_2441c8;
        case 0x2441ccu: goto label_2441cc;
        case 0x2441d0u: goto label_2441d0;
        case 0x2441d4u: goto label_2441d4;
        case 0x2441d8u: goto label_2441d8;
        case 0x2441dcu: goto label_2441dc;
        case 0x2441e0u: goto label_2441e0;
        case 0x2441e4u: goto label_2441e4;
        case 0x2441e8u: goto label_2441e8;
        case 0x2441ecu: goto label_2441ec;
        case 0x2441f0u: goto label_2441f0;
        case 0x2441f4u: goto label_2441f4;
        case 0x2441f8u: goto label_2441f8;
        case 0x2441fcu: goto label_2441fc;
        case 0x244200u: goto label_244200;
        case 0x244204u: goto label_244204;
        case 0x244208u: goto label_244208;
        case 0x24420cu: goto label_24420c;
        case 0x244210u: goto label_244210;
        case 0x244214u: goto label_244214;
        case 0x244218u: goto label_244218;
        case 0x24421cu: goto label_24421c;
        case 0x244220u: goto label_244220;
        case 0x244224u: goto label_244224;
        case 0x244228u: goto label_244228;
        case 0x24422cu: goto label_24422c;
        case 0x244230u: goto label_244230;
        case 0x244234u: goto label_244234;
        case 0x244238u: goto label_244238;
        case 0x24423cu: goto label_24423c;
        case 0x244240u: goto label_244240;
        case 0x244244u: goto label_244244;
        case 0x244248u: goto label_244248;
        case 0x24424cu: goto label_24424c;
        case 0x244250u: goto label_244250;
        case 0x244254u: goto label_244254;
        case 0x244258u: goto label_244258;
        case 0x24425cu: goto label_24425c;
        case 0x244260u: goto label_244260;
        case 0x244264u: goto label_244264;
        case 0x244268u: goto label_244268;
        case 0x24426cu: goto label_24426c;
        case 0x244270u: goto label_244270;
        case 0x244274u: goto label_244274;
        case 0x244278u: goto label_244278;
        case 0x24427cu: goto label_24427c;
        case 0x244280u: goto label_244280;
        case 0x244284u: goto label_244284;
        case 0x244288u: goto label_244288;
        case 0x24428cu: goto label_24428c;
        case 0x244290u: goto label_244290;
        case 0x244294u: goto label_244294;
        case 0x244298u: goto label_244298;
        case 0x24429cu: goto label_24429c;
        case 0x2442a0u: goto label_2442a0;
        case 0x2442a4u: goto label_2442a4;
        case 0x2442a8u: goto label_2442a8;
        case 0x2442acu: goto label_2442ac;
        case 0x2442b0u: goto label_2442b0;
        case 0x2442b4u: goto label_2442b4;
        case 0x2442b8u: goto label_2442b8;
        case 0x2442bcu: goto label_2442bc;
        case 0x2442c0u: goto label_2442c0;
        case 0x2442c4u: goto label_2442c4;
        case 0x2442c8u: goto label_2442c8;
        case 0x2442ccu: goto label_2442cc;
        case 0x2442d0u: goto label_2442d0;
        case 0x2442d4u: goto label_2442d4;
        case 0x2442d8u: goto label_2442d8;
        case 0x2442dcu: goto label_2442dc;
        case 0x2442e0u: goto label_2442e0;
        case 0x2442e4u: goto label_2442e4;
        case 0x2442e8u: goto label_2442e8;
        case 0x2442ecu: goto label_2442ec;
        case 0x2442f0u: goto label_2442f0;
        case 0x2442f4u: goto label_2442f4;
        case 0x2442f8u: goto label_2442f8;
        case 0x2442fcu: goto label_2442fc;
        case 0x244300u: goto label_244300;
        case 0x244304u: goto label_244304;
        case 0x244308u: goto label_244308;
        case 0x24430cu: goto label_24430c;
        case 0x244310u: goto label_244310;
        case 0x244314u: goto label_244314;
        case 0x244318u: goto label_244318;
        case 0x24431cu: goto label_24431c;
        case 0x244320u: goto label_244320;
        case 0x244324u: goto label_244324;
        case 0x244328u: goto label_244328;
        case 0x24432cu: goto label_24432c;
        case 0x244330u: goto label_244330;
        case 0x244334u: goto label_244334;
        case 0x244338u: goto label_244338;
        case 0x24433cu: goto label_24433c;
        case 0x244340u: goto label_244340;
        case 0x244344u: goto label_244344;
        case 0x244348u: goto label_244348;
        case 0x24434cu: goto label_24434c;
        case 0x244350u: goto label_244350;
        case 0x244354u: goto label_244354;
        case 0x244358u: goto label_244358;
        case 0x24435cu: goto label_24435c;
        case 0x244360u: goto label_244360;
        case 0x244364u: goto label_244364;
        case 0x244368u: goto label_244368;
        case 0x24436cu: goto label_24436c;
        case 0x244370u: goto label_244370;
        case 0x244374u: goto label_244374;
        case 0x244378u: goto label_244378;
        case 0x24437cu: goto label_24437c;
        case 0x244380u: goto label_244380;
        case 0x244384u: goto label_244384;
        case 0x244388u: goto label_244388;
        case 0x24438cu: goto label_24438c;
        case 0x244390u: goto label_244390;
        case 0x244394u: goto label_244394;
        case 0x244398u: goto label_244398;
        case 0x24439cu: goto label_24439c;
        case 0x2443a0u: goto label_2443a0;
        case 0x2443a4u: goto label_2443a4;
        case 0x2443a8u: goto label_2443a8;
        case 0x2443acu: goto label_2443ac;
        case 0x2443b0u: goto label_2443b0;
        case 0x2443b4u: goto label_2443b4;
        case 0x2443b8u: goto label_2443b8;
        case 0x2443bcu: goto label_2443bc;
        case 0x2443c0u: goto label_2443c0;
        case 0x2443c4u: goto label_2443c4;
        case 0x2443c8u: goto label_2443c8;
        case 0x2443ccu: goto label_2443cc;
        case 0x2443d0u: goto label_2443d0;
        case 0x2443d4u: goto label_2443d4;
        case 0x2443d8u: goto label_2443d8;
        case 0x2443dcu: goto label_2443dc;
        case 0x2443e0u: goto label_2443e0;
        case 0x2443e4u: goto label_2443e4;
        case 0x2443e8u: goto label_2443e8;
        case 0x2443ecu: goto label_2443ec;
        case 0x2443f0u: goto label_2443f0;
        case 0x2443f4u: goto label_2443f4;
        case 0x2443f8u: goto label_2443f8;
        case 0x2443fcu: goto label_2443fc;
        case 0x244400u: goto label_244400;
        case 0x244404u: goto label_244404;
        case 0x244408u: goto label_244408;
        case 0x24440cu: goto label_24440c;
        case 0x244410u: goto label_244410;
        case 0x244414u: goto label_244414;
        case 0x244418u: goto label_244418;
        case 0x24441cu: goto label_24441c;
        case 0x244420u: goto label_244420;
        case 0x244424u: goto label_244424;
        case 0x244428u: goto label_244428;
        case 0x24442cu: goto label_24442c;
        case 0x244430u: goto label_244430;
        case 0x244434u: goto label_244434;
        case 0x244438u: goto label_244438;
        case 0x24443cu: goto label_24443c;
        case 0x244440u: goto label_244440;
        case 0x244444u: goto label_244444;
        case 0x244448u: goto label_244448;
        case 0x24444cu: goto label_24444c;
        case 0x244450u: goto label_244450;
        case 0x244454u: goto label_244454;
        case 0x244458u: goto label_244458;
        case 0x24445cu: goto label_24445c;
        case 0x244460u: goto label_244460;
        case 0x244464u: goto label_244464;
        case 0x244468u: goto label_244468;
        case 0x24446cu: goto label_24446c;
        case 0x244470u: goto label_244470;
        case 0x244474u: goto label_244474;
        case 0x244478u: goto label_244478;
        case 0x24447cu: goto label_24447c;
        case 0x244480u: goto label_244480;
        case 0x244484u: goto label_244484;
        case 0x244488u: goto label_244488;
        case 0x24448cu: goto label_24448c;
        case 0x244490u: goto label_244490;
        case 0x244494u: goto label_244494;
        case 0x244498u: goto label_244498;
        case 0x24449cu: goto label_24449c;
        case 0x2444a0u: goto label_2444a0;
        case 0x2444a4u: goto label_2444a4;
        case 0x2444a8u: goto label_2444a8;
        case 0x2444acu: goto label_2444ac;
        case 0x2444b0u: goto label_2444b0;
        case 0x2444b4u: goto label_2444b4;
        case 0x2444b8u: goto label_2444b8;
        case 0x2444bcu: goto label_2444bc;
        case 0x2444c0u: goto label_2444c0;
        case 0x2444c4u: goto label_2444c4;
        case 0x2444c8u: goto label_2444c8;
        case 0x2444ccu: goto label_2444cc;
        case 0x2444d0u: goto label_2444d0;
        case 0x2444d4u: goto label_2444d4;
        case 0x2444d8u: goto label_2444d8;
        case 0x2444dcu: goto label_2444dc;
        case 0x2444e0u: goto label_2444e0;
        case 0x2444e4u: goto label_2444e4;
        case 0x2444e8u: goto label_2444e8;
        case 0x2444ecu: goto label_2444ec;
        case 0x2444f0u: goto label_2444f0;
        case 0x2444f4u: goto label_2444f4;
        case 0x2444f8u: goto label_2444f8;
        case 0x2444fcu: goto label_2444fc;
        case 0x244500u: goto label_244500;
        case 0x244504u: goto label_244504;
        case 0x244508u: goto label_244508;
        case 0x24450cu: goto label_24450c;
        case 0x244510u: goto label_244510;
        case 0x244514u: goto label_244514;
        case 0x244518u: goto label_244518;
        case 0x24451cu: goto label_24451c;
        case 0x244520u: goto label_244520;
        case 0x244524u: goto label_244524;
        case 0x244528u: goto label_244528;
        case 0x24452cu: goto label_24452c;
        case 0x244530u: goto label_244530;
        case 0x244534u: goto label_244534;
        case 0x244538u: goto label_244538;
        case 0x24453cu: goto label_24453c;
        case 0x244540u: goto label_244540;
        case 0x244544u: goto label_244544;
        case 0x244548u: goto label_244548;
        case 0x24454cu: goto label_24454c;
        case 0x244550u: goto label_244550;
        case 0x244554u: goto label_244554;
        case 0x244558u: goto label_244558;
        case 0x24455cu: goto label_24455c;
        case 0x244560u: goto label_244560;
        case 0x244564u: goto label_244564;
        case 0x244568u: goto label_244568;
        case 0x24456cu: goto label_24456c;
        case 0x244570u: goto label_244570;
        case 0x244574u: goto label_244574;
        case 0x244578u: goto label_244578;
        case 0x24457cu: goto label_24457c;
        case 0x244580u: goto label_244580;
        case 0x244584u: goto label_244584;
        case 0x244588u: goto label_244588;
        case 0x24458cu: goto label_24458c;
        case 0x244590u: goto label_244590;
        case 0x244594u: goto label_244594;
        case 0x244598u: goto label_244598;
        case 0x24459cu: goto label_24459c;
        case 0x2445a0u: goto label_2445a0;
        case 0x2445a4u: goto label_2445a4;
        case 0x2445a8u: goto label_2445a8;
        case 0x2445acu: goto label_2445ac;
        case 0x2445b0u: goto label_2445b0;
        case 0x2445b4u: goto label_2445b4;
        case 0x2445b8u: goto label_2445b8;
        case 0x2445bcu: goto label_2445bc;
        case 0x2445c0u: goto label_2445c0;
        case 0x2445c4u: goto label_2445c4;
        case 0x2445c8u: goto label_2445c8;
        case 0x2445ccu: goto label_2445cc;
        case 0x2445d0u: goto label_2445d0;
        case 0x2445d4u: goto label_2445d4;
        case 0x2445d8u: goto label_2445d8;
        case 0x2445dcu: goto label_2445dc;
        case 0x2445e0u: goto label_2445e0;
        case 0x2445e4u: goto label_2445e4;
        case 0x2445e8u: goto label_2445e8;
        case 0x2445ecu: goto label_2445ec;
        case 0x2445f0u: goto label_2445f0;
        case 0x2445f4u: goto label_2445f4;
        case 0x2445f8u: goto label_2445f8;
        case 0x2445fcu: goto label_2445fc;
        case 0x244600u: goto label_244600;
        case 0x244604u: goto label_244604;
        case 0x244608u: goto label_244608;
        case 0x24460cu: goto label_24460c;
        case 0x244610u: goto label_244610;
        case 0x244614u: goto label_244614;
        case 0x244618u: goto label_244618;
        case 0x24461cu: goto label_24461c;
        case 0x244620u: goto label_244620;
        case 0x244624u: goto label_244624;
        case 0x244628u: goto label_244628;
        case 0x24462cu: goto label_24462c;
        case 0x244630u: goto label_244630;
        case 0x244634u: goto label_244634;
        case 0x244638u: goto label_244638;
        case 0x24463cu: goto label_24463c;
        case 0x244640u: goto label_244640;
        case 0x244644u: goto label_244644;
        case 0x244648u: goto label_244648;
        case 0x24464cu: goto label_24464c;
        case 0x244650u: goto label_244650;
        case 0x244654u: goto label_244654;
        case 0x244658u: goto label_244658;
        case 0x24465cu: goto label_24465c;
        case 0x244660u: goto label_244660;
        case 0x244664u: goto label_244664;
        case 0x244668u: goto label_244668;
        case 0x24466cu: goto label_24466c;
        case 0x244670u: goto label_244670;
        case 0x244674u: goto label_244674;
        case 0x244678u: goto label_244678;
        case 0x24467cu: goto label_24467c;
        case 0x244680u: goto label_244680;
        case 0x244684u: goto label_244684;
        case 0x244688u: goto label_244688;
        case 0x24468cu: goto label_24468c;
        case 0x244690u: goto label_244690;
        case 0x244694u: goto label_244694;
        case 0x244698u: goto label_244698;
        case 0x24469cu: goto label_24469c;
        case 0x2446a0u: goto label_2446a0;
        case 0x2446a4u: goto label_2446a4;
        case 0x2446a8u: goto label_2446a8;
        case 0x2446acu: goto label_2446ac;
        case 0x2446b0u: goto label_2446b0;
        case 0x2446b4u: goto label_2446b4;
        case 0x2446b8u: goto label_2446b8;
        case 0x2446bcu: goto label_2446bc;
        case 0x2446c0u: goto label_2446c0;
        case 0x2446c4u: goto label_2446c4;
        case 0x2446c8u: goto label_2446c8;
        case 0x2446ccu: goto label_2446cc;
        case 0x2446d0u: goto label_2446d0;
        case 0x2446d4u: goto label_2446d4;
        case 0x2446d8u: goto label_2446d8;
        case 0x2446dcu: goto label_2446dc;
        case 0x2446e0u: goto label_2446e0;
        case 0x2446e4u: goto label_2446e4;
        case 0x2446e8u: goto label_2446e8;
        case 0x2446ecu: goto label_2446ec;
        case 0x2446f0u: goto label_2446f0;
        case 0x2446f4u: goto label_2446f4;
        case 0x2446f8u: goto label_2446f8;
        case 0x2446fcu: goto label_2446fc;
        case 0x244700u: goto label_244700;
        case 0x244704u: goto label_244704;
        case 0x244708u: goto label_244708;
        case 0x24470cu: goto label_24470c;
        case 0x244710u: goto label_244710;
        case 0x244714u: goto label_244714;
        case 0x244718u: goto label_244718;
        case 0x24471cu: goto label_24471c;
        case 0x244720u: goto label_244720;
        case 0x244724u: goto label_244724;
        case 0x244728u: goto label_244728;
        case 0x24472cu: goto label_24472c;
        case 0x244730u: goto label_244730;
        case 0x244734u: goto label_244734;
        case 0x244738u: goto label_244738;
        case 0x24473cu: goto label_24473c;
        case 0x244740u: goto label_244740;
        case 0x244744u: goto label_244744;
        case 0x244748u: goto label_244748;
        case 0x24474cu: goto label_24474c;
        case 0x244750u: goto label_244750;
        case 0x244754u: goto label_244754;
        case 0x244758u: goto label_244758;
        case 0x24475cu: goto label_24475c;
        case 0x244760u: goto label_244760;
        case 0x244764u: goto label_244764;
        case 0x244768u: goto label_244768;
        case 0x24476cu: goto label_24476c;
        case 0x244770u: goto label_244770;
        case 0x244774u: goto label_244774;
        case 0x244778u: goto label_244778;
        case 0x24477cu: goto label_24477c;
        case 0x244780u: goto label_244780;
        case 0x244784u: goto label_244784;
        case 0x244788u: goto label_244788;
        case 0x24478cu: goto label_24478c;
        default: return;
    }

label_243fc0:
    // 0x243fc0: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x243fc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_243fc4:
    // 0x243fc4: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x243fc4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_243fc8:
    // 0x243fc8: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x243fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_243fcc:
    // 0x243fcc: 0xc05ded8  jal         func_177B60
label_243fd0:
    if (ctx->pc == 0x243FD0u) {
        ctx->pc = 0x243FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FCCu;
        // 0x243fd0: 0xffa20028  sd          $v0, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243FD4u;
        goto label_243fd4;
    }
    ctx->pc = 0x243FCCu;
    SET_GPR_U32(ctx, 31, 0x243FD4u);
    ctx->pc = 0x243FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243FCCu;
    // 0x243fd0: 0xffa20028  sd          $v0, 0x28($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x243FCCu, 0x243FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243FD4u;
label_243fd4:
    // 0x243fd4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x243fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_243fd8:
    // 0x243fd8: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x243fd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_243fdc:
    // 0x243fdc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x243fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_243fe0:
    // 0x243fe0: 0x27c406f0  addiu       $a0, $fp, 0x6F0
    ctx->pc = 0x243fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1776));
label_243fe4:
    // 0x243fe4: 0xffa90008  sd          $t1, 0x8($sp)
    ctx->pc = 0x243fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 9));
label_243fe8:
    // 0x243fe8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x243fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_243fec:
    // 0x243fec: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x243fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_243ff0:
    // 0x243ff0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x243ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_243ff4:
    // 0x243ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x243ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243ff8:
    // 0x243ff8: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x243ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_243ffc:
    // 0x243ffc: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x243ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_244000:
    // 0x244000: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x244000u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_244004:
    // 0x244004: 0xdfa50100  ld          $a1, 0x100($sp)
    ctx->pc = 0x244004u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_244008:
    // 0x244008: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x244008u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_24400c:
    // 0x24400c: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x24400cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_244010:
    // 0x244010: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x244010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_244014:
    // 0x244014: 0xc05ded8  jal         func_177B60
label_244018:
    if (ctx->pc == 0x244018u) {
        ctx->pc = 0x244018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244014u;
        // 0x244018: 0xffa20028  sd          $v0, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24401Cu;
        goto label_24401c;
    }
    ctx->pc = 0x244014u;
    SET_GPR_U32(ctx, 31, 0x24401Cu);
    ctx->pc = 0x244018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244014u;
    // 0x244018: 0xffa20028  sd          $v0, 0x28($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x244014u, 0x24401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24401Cu;
label_24401c:
    // 0x24401c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x24401cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_244020:
    // 0x244020: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x244020u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_244024:
    // 0x244024: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x244024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_244028:
    // 0x244028: 0x26a40290  addiu       $a0, $s5, 0x290
    ctx->pc = 0x244028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 656));
label_24402c:
    // 0x24402c: 0xffa90008  sd          $t1, 0x8($sp)
    ctx->pc = 0x24402cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 9));
label_244030:
    // 0x244030: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x244030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_244034:
    // 0x244034: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x244034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_244038:
    // 0x244038: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x244038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_24403c:
    // 0x24403c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244040:
    // 0x244040: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x244040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_244044:
    // 0x244044: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x244044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_244048:
    // 0x244048: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x244048u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_24404c:
    // 0x24404c: 0xdfa50100  ld          $a1, 0x100($sp)
    ctx->pc = 0x24404cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_244050:
    // 0x244050: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x244050u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_244054:
    // 0x244054: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x244054u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_244058:
    // 0x244058: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x244058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_24405c:
    // 0x24405c: 0xc05ded8  jal         func_177B60
label_244060:
    if (ctx->pc == 0x244060u) {
        ctx->pc = 0x244060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24405Cu;
        // 0x244060: 0xffa20028  sd          $v0, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244064u;
        goto label_244064;
    }
    ctx->pc = 0x24405Cu;
    SET_GPR_U32(ctx, 31, 0x244064u);
    ctx->pc = 0x244060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24405Cu;
    // 0x244060: 0xffa20028  sd          $v0, 0x28($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x24405Cu, 0x244064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244064u;
label_244064:
    // 0x244064: 0x10000035  b           . + 4 + (0x35 << 2)
label_244068:
    if (ctx->pc == 0x244068u) {
        ctx->pc = 0x24406Cu;
        goto label_24406c;
    }
    ctx->pc = 0x244064u;
    {
        const bool branch_taken_0x244064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244064) {
            ctx->pc = 0x24413Cu;
            goto label_24413c;
        }
    }
    ctx->pc = 0x24406Cu;
label_24406c:
    // 0x24406c: 0x0  nop
    ctx->pc = 0x24406cu;
    // NOP
label_244070:
    // 0x244070: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x244070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_244074:
    // 0x244074: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x244074u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_244078:
    // 0x244078: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x244078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_24407c:
    // 0x24407c: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x24407cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_244080:
    // 0x244080: 0xffa90008  sd          $t1, 0x8($sp)
    ctx->pc = 0x244080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 9));
label_244084:
    // 0x244084: 0xffaa0010  sd          $t2, 0x10($sp)
    ctx->pc = 0x244084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 10));
label_244088:
    // 0x244088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24408c:
    // 0x24408c: 0xdfa50100  ld          $a1, 0x100($sp)
    ctx->pc = 0x24408cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_244090:
    // 0x244090: 0x26040750  addiu       $a0, $s0, 0x750
    ctx->pc = 0x244090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1872));
label_244094:
    // 0x244094: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x244094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_244098:
    // 0x244098: 0x240700b4  addiu       $a3, $zero, 0xB4
    ctx->pc = 0x244098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_24409c:
    // 0x24409c: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x24409cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_2440a0:
    // 0x2440a0: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x2440a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2440a4:
    // 0x2440a4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2440a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2440a8:
    // 0x2440a8: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x2440a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_2440ac:
    // 0x2440ac: 0xc05ded8  jal         func_177B60
label_2440b0:
    if (ctx->pc == 0x2440B0u) {
        ctx->pc = 0x2440B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440ACu;
        // 0x2440b0: 0xffa20028  sd          $v0, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2440B4u;
        goto label_2440b4;
    }
    ctx->pc = 0x2440ACu;
    SET_GPR_U32(ctx, 31, 0x2440B4u);
    ctx->pc = 0x2440B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2440ACu;
    // 0x2440b0: 0xffa20028  sd          $v0, 0x28($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x2440ACu, 0x2440B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2440B4u;
label_2440b4:
    // 0x2440b4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2440b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2440b8:
    // 0x2440b8: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x2440b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2440bc:
    // 0x2440bc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2440bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2440c0:
    // 0x2440c0: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x2440c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2440c4:
    // 0x2440c4: 0xffa90008  sd          $t1, 0x8($sp)
    ctx->pc = 0x2440c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 9));
label_2440c8:
    // 0x2440c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2440c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2440cc:
    // 0x2440cc: 0xffaa0010  sd          $t2, 0x10($sp)
    ctx->pc = 0x2440ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 10));
label_2440d0:
    // 0x2440d0: 0x27c406f0  addiu       $a0, $fp, 0x6F0
    ctx->pc = 0x2440d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1776));
label_2440d4:
    // 0x2440d4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2440d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2440d8:
    // 0x2440d8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2440d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2440dc:
    // 0x2440dc: 0xdfa50100  ld          $a1, 0x100($sp)
    ctx->pc = 0x2440dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2440e0:
    // 0x2440e0: 0x240700b4  addiu       $a3, $zero, 0xB4
    ctx->pc = 0x2440e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_2440e4:
    // 0x2440e4: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x2440e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_2440e8:
    // 0x2440e8: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x2440e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2440ec:
    // 0x2440ec: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x2440ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_2440f0:
    // 0x2440f0: 0xc05ded8  jal         func_177B60
label_2440f4:
    if (ctx->pc == 0x2440F4u) {
        ctx->pc = 0x2440F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440F0u;
        // 0x2440f4: 0xffa20028  sd          $v0, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2440F8u;
        goto label_2440f8;
    }
    ctx->pc = 0x2440F0u;
    SET_GPR_U32(ctx, 31, 0x2440F8u);
    ctx->pc = 0x2440F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2440F0u;
    // 0x2440f4: 0xffa20028  sd          $v0, 0x28($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x2440F0u, 0x2440F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2440F8u;
label_2440f8:
    // 0x2440f8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2440f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2440fc:
    // 0x2440fc: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x2440fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_244100:
    // 0x244100: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x244100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_244104:
    // 0x244104: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x244104u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_244108:
    // 0x244108: 0xffa90008  sd          $t1, 0x8($sp)
    ctx->pc = 0x244108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 9));
label_24410c:
    // 0x24410c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244110:
    // 0x244110: 0xffaa0010  sd          $t2, 0x10($sp)
    ctx->pc = 0x244110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 10));
label_244114:
    // 0x244114: 0x26a40290  addiu       $a0, $s5, 0x290
    ctx->pc = 0x244114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 656));
label_244118:
    // 0x244118: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x244118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_24411c:
    // 0x24411c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x24411cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_244120:
    // 0x244120: 0xdfa50100  ld          $a1, 0x100($sp)
    ctx->pc = 0x244120u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_244124:
    // 0x244124: 0x240700b4  addiu       $a3, $zero, 0xB4
    ctx->pc = 0x244124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_244128:
    // 0x244128: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x244128u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_24412c:
    // 0x24412c: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x24412cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_244130:
    // 0x244130: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x244130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_244134:
    // 0x244134: 0xc05ded8  jal         func_177B60
label_244138:
    if (ctx->pc == 0x244138u) {
        ctx->pc = 0x244138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244134u;
        // 0x244138: 0xffa20028  sd          $v0, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24413Cu;
        goto label_24413c;
    }
    ctx->pc = 0x244134u;
    SET_GPR_U32(ctx, 31, 0x24413Cu);
    ctx->pc = 0x244138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244134u;
    // 0x244138: 0xffa20028  sd          $v0, 0x28($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x244134u, 0x24413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24413Cu;
label_24413c:
    // 0x24413c: 0x0  nop
    ctx->pc = 0x24413cu;
    // NOP
label_244140:
    // 0x244140: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x244140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_244144:
    // 0x244144: 0x24420290  addiu       $v0, $v0, 0x290
    ctx->pc = 0x244144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
label_244148:
    // 0x244148: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x244148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_24414c:
    // 0x24414c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x24414cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_244150:
    // 0x244150: 0x24420820  addiu       $v0, $v0, 0x820
    ctx->pc = 0x244150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2080));
label_244154:
    // 0x244154: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x244154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_244158:
    // 0x244158: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x244158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_24415c:
    // 0x24415c: 0x244207c0  addiu       $v0, $v0, 0x7C0
    ctx->pc = 0x24415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1984));
label_244160:
    // 0x244160: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x244160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_244164:
    // 0x244164: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x244164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_244168:
    // 0x244168: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x244168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
label_24416c:
    // 0x24416c: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x24416cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_244170:
    // 0x244170: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x244170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_244174:
    // 0x244174: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x244174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_244178:
    // 0x244178: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x244178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_24417c:
    // 0x24417c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x24417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_244180:
    // 0x244180: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x244180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_244184:
    // 0x244184: 0x1440fe75  bnez        $v0, . + 4 + (-0x18B << 2)
label_244188:
    if (ctx->pc == 0x244188u) {
        ctx->pc = 0x24418Cu;
        goto label_24418c;
    }
    ctx->pc = 0x244184u;
    {
        const bool branch_taken_0x244184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244184) {
            ctx->pc = 0x243B5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x243b5c; return; }
        }
    }
    ctx->pc = 0x24418Cu;
label_24418c:
    // 0x24418c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x24418cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_244190:
    // 0x244190: 0x24420520  addiu       $v0, $v0, 0x520
    ctx->pc = 0x244190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1312));
label_244194:
    // 0x244194: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x244194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_244198:
    // 0x244198: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x244198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_24419c:
    // 0x24419c: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x24419cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_2441a0:
    // 0x2441a0: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x2441a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_2441a4:
    // 0x2441a4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2441a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2441a8:
    // 0x2441a8: 0x24421040  addiu       $v0, $v0, 0x1040
    ctx->pc = 0x2441a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4160));
label_2441ac:
    // 0x2441ac: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x2441acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
label_2441b0:
    // 0x2441b0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x2441b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_2441b4:
    // 0x2441b4: 0x24420f80  addiu       $v0, $v0, 0xF80
    ctx->pc = 0x2441b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3968));
label_2441b8:
    // 0x2441b8: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x2441b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
label_2441bc:
    // 0x2441bc: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x2441bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_2441c0:
    // 0x2441c0: 0x244206c0  addiu       $v0, $v0, 0x6C0
    ctx->pc = 0x2441c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
label_2441c4:
    // 0x2441c4: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x2441c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_2441c8:
    // 0x2441c8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2441c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2441cc:
    // 0x2441cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2441ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2441d0:
    // 0x2441d0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2441d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_2441d4:
    // 0x2441d4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2441d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2441d8:
    // 0x2441d8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2441d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2441dc:
    // 0x2441dc: 0x1440fe5a  bnez        $v0, . + 4 + (-0x1A6 << 2)
label_2441e0:
    if (ctx->pc == 0x2441E0u) {
        ctx->pc = 0x2441E4u;
        goto label_2441e4;
    }
    ctx->pc = 0x2441DCu;
    {
        const bool branch_taken_0x2441dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2441dc) {
            ctx->pc = 0x243B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x243b48; return; }
        }
    }
    ctx->pc = 0x2441E4u;
label_2441e4:
    // 0x2441e4: 0xc070038  jal         func_1C00E0
label_2441e8:
    if (ctx->pc == 0x2441E8u) {
        ctx->pc = 0x2441E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441E4u;
        // 0x2441e8: 0x8fa4010c  lw          $a0, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441ECu;
        goto label_2441ec;
    }
    ctx->pc = 0x2441E4u;
    SET_GPR_U32(ctx, 31, 0x2441ECu);
    ctx->pc = 0x2441E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2441E4u;
    // 0x2441e8: 0x8fa4010c  lw          $a0, 0x10C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x2441ECu;
label_2441ec:
    // 0x2441ec: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2441ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2441f0:
    // 0x2441f0: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x2441f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2441f4:
    // 0x2441f4: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x2441f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2441f8:
    // 0x2441f8: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2441f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2441fc:
    // 0x2441fc: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2441fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_244200:
    // 0x244200: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x244200u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_244204:
    // 0x244204: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x244204u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_244208:
    // 0x244208: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x244208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24420c:
    // 0x24420c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x24420cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_244210:
    // 0x244210: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x244210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_244214:
    // 0x244214: 0x3e00008  jr          $ra
label_244218:
    if (ctx->pc == 0x244218u) {
        ctx->pc = 0x244218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244214u;
        // 0x244218: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24421Cu;
        goto label_24421c;
    }
    ctx->pc = 0x244214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244214u;
        // 0x244218: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24421Cu;
label_24421c:
    // 0x24421c: 0x0  nop
    ctx->pc = 0x24421cu;
    // NOP
label_244220:
    // 0x244220: 0x3e00008  jr          $ra
label_244224:
    if (ctx->pc == 0x244224u) {
        ctx->pc = 0x244228u;
        goto label_244228;
    }
    ctx->pc = 0x244220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244228u;
label_244228:
    // 0x244228: 0x0  nop
    ctx->pc = 0x244228u;
    // NOP
label_24422c:
    // 0x24422c: 0x0  nop
    ctx->pc = 0x24422cu;
    // NOP
label_244230:
    // 0x244230: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x244230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_244234:
    // 0x244234: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x244234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_244238:
    // 0x244238: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x244238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_24423c:
    // 0x24423c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24423cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_244240:
    // 0x244240: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x244240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_244244:
    // 0x244244: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x244244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_244248:
    // 0x244248: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x244248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24424c:
    // 0x24424c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24424cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_244250:
    // 0x244250: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x244250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_244254:
    // 0x244254: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x244254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_244258:
    // 0x244258: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x244258u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_24425c:
    // 0x24425c: 0x24630230  addiu       $v1, $v1, 0x230
    ctx->pc = 0x24425cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 560));
label_244260:
    // 0x244260: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x244260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_244264:
    // 0x244264: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x244264u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_244268:
    // 0x244268: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
label_24426c:
    if (ctx->pc == 0x24426Cu) {
        ctx->pc = 0x24426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244268u;
        // 0x24426c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244270u;
        goto label_244270;
    }
    ctx->pc = 0x244268u;
    {
        const bool branch_taken_0x244268 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x24426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244268u;
        // 0x24426c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244268) {
            ctx->pc = 0x24427Cu;
            goto label_24427c;
        }
    }
    ctx->pc = 0x244270u;
label_244270:
    // 0x244270: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x244270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244274:
    // 0x244274: 0xc0914ac  jal         func_2452B0
label_244278:
    if (ctx->pc == 0x244278u) {
        ctx->pc = 0x244278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244274u;
        // 0x244278: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24427Cu;
        goto label_24427c;
    }
    ctx->pc = 0x244274u;
    SET_GPR_U32(ctx, 31, 0x24427Cu);
    ctx->pc = 0x244278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244274u;
    // 0x244278: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2452B0u;
    { ctx->pc = 0x2452b0; return; }
    ctx->pc = 0x24427Cu;
label_24427c:
    // 0x24427c: 0x92080000  lbu         $t0, 0x0($s0)
    ctx->pc = 0x24427cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_244280:
    // 0x244280: 0x2901005c  slti        $at, $t0, 0x5C
    ctx->pc = 0x244280u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)92) ? 1 : 0);
label_244284:
    // 0x244284: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
label_244288:
    if (ctx->pc == 0x244288u) {
        ctx->pc = 0x244288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244284u;
        // 0x244288: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24428Cu;
        goto label_24428c;
    }
    ctx->pc = 0x244284u;
    {
        const bool branch_taken_0x244284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x244288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244284u;
        // 0x244288: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244284) {
            ctx->pc = 0x244360u;
            goto label_244360;
        }
    }
    ctx->pc = 0x24428Cu;
label_24428c:
    // 0x24428c: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x24428cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_244290:
    // 0x244290: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x244290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_244294:
    // 0x244294: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x244294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_244298:
    // 0x244298: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x244298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24429c:
    // 0x24429c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24429cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2442a0:
    // 0x2442a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2442a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2442a4:
    // 0x2442a4: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2442a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2442a8:
    // 0x2442a8: 0x2409001e  addiu       $t1, $zero, 0x1E
    ctx->pc = 0x2442a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2442ac:
    // 0x2442ac: 0x240a005c  addiu       $t2, $zero, 0x5C
    ctx->pc = 0x2442acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2442b0:
    // 0x2442b0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2442b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2442b4:
    // 0x2442b4: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x2442b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_2442b8:
    // 0x2442b8: 0x24422ee0  addiu       $v0, $v0, 0x2EE0
    ctx->pc = 0x2442b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12000));
label_2442bc:
    // 0x2442bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2442bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2442c0:
    // 0x2442c0: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x2442c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_2442c4:
    // 0x2442c4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x2442c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_2442c8:
    // 0x2442c8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2442c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2442cc:
    // 0x2442cc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2442ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2442d0:
    // 0x2442d0: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x2442d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2442d4:
    // 0x2442d4: 0xc0911c0  jal         func_244700
label_2442d8:
    if (ctx->pc == 0x2442D8u) {
        ctx->pc = 0x2442D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442D4u;
        // 0x2442d8: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442DCu;
        goto label_2442dc;
    }
    ctx->pc = 0x2442D4u;
    SET_GPR_U32(ctx, 31, 0x2442DCu);
    ctx->pc = 0x2442D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2442D4u;
    // 0x2442d8: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244700u;
    goto label_244700;
    ctx->pc = 0x2442DCu;
label_2442dc:
    // 0x2442dc: 0x92090000  lbu         $t1, 0x0($s0)
    ctx->pc = 0x2442dcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2442e0:
    // 0x2442e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2442e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2442e4:
    // 0x2442e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2442e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2442e8:
    // 0x2442e8: 0x26660470  addiu       $a2, $s3, 0x470
    ctx->pc = 0x2442e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1136));
label_2442ec:
    // 0x2442ec: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2442ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2442f0:
    // 0x2442f0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2442f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2442f4:
    // 0x2442f4: 0x240a001e  addiu       $t2, $zero, 0x1E
    ctx->pc = 0x2442f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2442f8:
    // 0x2442f8: 0xc091270  jal         func_2449C0
label_2442fc:
    if (ctx->pc == 0x2442FCu) {
        ctx->pc = 0x2442FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442F8u;
        // 0x2442fc: 0x240b005c  addiu       $t3, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244300u;
        goto label_244300;
    }
    ctx->pc = 0x2442F8u;
    SET_GPR_U32(ctx, 31, 0x244300u);
    ctx->pc = 0x2442FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2442F8u;
    // 0x2442fc: 0x240b005c  addiu       $t3, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2449C0u;
    { ctx->pc = 0x2449c0; return; }
    ctx->pc = 0x244300u;
label_244300:
    // 0x244300: 0x92070000  lbu         $a3, 0x0($s0)
    ctx->pc = 0x244300u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_244304:
    // 0x244304: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x244304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_244308:
    // 0x244308: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x244308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24430c:
    // 0x24430c: 0x266605b0  addiu       $a2, $s3, 0x5B0
    ctx->pc = 0x24430cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1456));
label_244310:
    // 0x244310: 0xc09142c  jal         func_2450B0
label_244314:
    if (ctx->pc == 0x244314u) {
        ctx->pc = 0x244314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244310u;
        // 0x244314: 0x2408005c  addiu       $t0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244318u;
        goto label_244318;
    }
    ctx->pc = 0x244310u;
    SET_GPR_U32(ctx, 31, 0x244318u);
    ctx->pc = 0x244314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244310u;
    // 0x244314: 0x2408005c  addiu       $t0, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2450B0u;
    { ctx->pc = 0x2450b0; return; }
    ctx->pc = 0x244318u;
label_244318:
    // 0x244318: 0x92070000  lbu         $a3, 0x0($s0)
    ctx->pc = 0x244318u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_24431c:
    // 0x24431c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24431cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_244320:
    // 0x244320: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x244320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244324:
    // 0x244324: 0x26660750  addiu       $a2, $s3, 0x750
    ctx->pc = 0x244324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1872));
label_244328:
    // 0x244328: 0xc09132c  jal         func_244CB0
label_24432c:
    if (ctx->pc == 0x24432Cu) {
        ctx->pc = 0x24432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244328u;
        // 0x24432c: 0x2408001e  addiu       $t0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244330u;
        goto label_244330;
    }
    ctx->pc = 0x244328u;
    SET_GPR_U32(ctx, 31, 0x244330u);
    ctx->pc = 0x24432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244328u;
    // 0x24432c: 0x2408001e  addiu       $t0, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244CB0u;
    { ctx->pc = 0x244cb0; return; }
    ctx->pc = 0x244330u;
label_244330:
    // 0x244330: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x244330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_244334:
    // 0x244334: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x244334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_244338:
    // 0x244338: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x244338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_24433c:
    // 0x24433c: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x24433cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_244340:
    // 0x244340: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x244340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_244344:
    // 0x244344: 0x24060082  addiu       $a2, $zero, 0x82
    ctx->pc = 0x244344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_244348:
    // 0x244348: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x244348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24434c:
    // 0x24434c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24434cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244350:
    // 0x244350: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x244350u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244354:
    // 0x244354: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x244354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_244358:
    // 0x244358: 0xc066c72  jal         func_19B1C8
label_24435c:
    if (ctx->pc == 0x24435Cu) {
        ctx->pc = 0x24435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244358u;
        // 0x24435c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244360u;
        goto label_244360;
    }
    ctx->pc = 0x244358u;
    SET_GPR_U32(ctx, 31, 0x244360u);
    ctx->pc = 0x24435Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244358u;
    // 0x24435c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x244360u;
label_244360:
    // 0x244360: 0x92080002  lbu         $t0, 0x2($s0)
    ctx->pc = 0x244360u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_244364:
    // 0x244364: 0x29010050  slti        $at, $t0, 0x50
    ctx->pc = 0x244364u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)80) ? 1 : 0);
label_244368:
    // 0x244368: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
label_24436c:
    if (ctx->pc == 0x24436Cu) {
        ctx->pc = 0x24436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244368u;
        // 0x24436c: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244370u;
        goto label_244370;
    }
    ctx->pc = 0x244368u;
    {
        const bool branch_taken_0x244368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244368u;
        // 0x24436c: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244368) {
            ctx->pc = 0x244444u;
            goto label_244444;
        }
    }
    ctx->pc = 0x244370u;
label_244370:
    // 0x244370: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x244370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_244374:
    // 0x244374: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x244374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_244378:
    // 0x244378: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x244378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_24437c:
    // 0x24437c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x24437cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_244380:
    // 0x244380: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x244380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_244384:
    // 0x244384: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x244384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244388:
    // 0x244388: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x244388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24438c:
    // 0x24438c: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x24438cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_244390:
    // 0x244390: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x244390u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_244394:
    // 0x244394: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x244394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_244398:
    // 0x244398: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x244398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_24439c:
    // 0x24439c: 0x24420fe0  addiu       $v0, $v0, 0xFE0
    ctx->pc = 0x24439cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
label_2443a0:
    // 0x2443a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2443a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2443a4:
    // 0x2443a4: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x2443a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2443a8:
    // 0x2443a8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x2443a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_2443ac:
    // 0x2443ac: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2443acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2443b0:
    // 0x2443b0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2443b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_2443b4:
    // 0x2443b4: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x2443b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2443b8:
    // 0x2443b8: 0xc0911c0  jal         func_244700
label_2443bc:
    if (ctx->pc == 0x2443BCu) {
        ctx->pc = 0x2443BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443B8u;
        // 0x2443bc: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443C0u;
        goto label_2443c0;
    }
    ctx->pc = 0x2443B8u;
    SET_GPR_U32(ctx, 31, 0x2443C0u);
    ctx->pc = 0x2443BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2443B8u;
    // 0x2443bc: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244700u;
    goto label_244700;
    ctx->pc = 0x2443C0u;
label_2443c0:
    // 0x2443c0: 0x92090002  lbu         $t1, 0x2($s0)
    ctx->pc = 0x2443c0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_2443c4:
    // 0x2443c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2443c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2443c8:
    // 0x2443c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2443c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2443cc:
    // 0x2443cc: 0x26660330  addiu       $a2, $s3, 0x330
    ctx->pc = 0x2443ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 816));
label_2443d0:
    // 0x2443d0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2443d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2443d4:
    // 0x2443d4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2443d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2443d8:
    // 0x2443d8: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x2443d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2443dc:
    // 0x2443dc: 0xc091270  jal         func_2449C0
label_2443e0:
    if (ctx->pc == 0x2443E0u) {
        ctx->pc = 0x2443E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443DCu;
        // 0x2443e0: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443E4u;
        goto label_2443e4;
    }
    ctx->pc = 0x2443DCu;
    SET_GPR_U32(ctx, 31, 0x2443E4u);
    ctx->pc = 0x2443E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2443DCu;
    // 0x2443e0: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2449C0u;
    { ctx->pc = 0x2449c0; return; }
    ctx->pc = 0x2443E4u;
label_2443e4:
    // 0x2443e4: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x2443e4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_2443e8:
    // 0x2443e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2443e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2443ec:
    // 0x2443ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2443ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2443f0:
    // 0x2443f0: 0x266603d0  addiu       $a2, $s3, 0x3D0
    ctx->pc = 0x2443f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 976));
label_2443f4:
    // 0x2443f4: 0xc09139c  jal         func_244E70
label_2443f8:
    if (ctx->pc == 0x2443F8u) {
        ctx->pc = 0x2443F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443F4u;
        // 0x2443f8: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443FCu;
        goto label_2443fc;
    }
    ctx->pc = 0x2443F4u;
    SET_GPR_U32(ctx, 31, 0x2443FCu);
    ctx->pc = 0x2443F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2443F4u;
    // 0x2443f8: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244E70u;
    { ctx->pc = 0x244e70; return; }
    ctx->pc = 0x2443FCu;
label_2443fc:
    // 0x2443fc: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x2443fcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_244400:
    // 0x244400: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x244400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_244404:
    // 0x244404: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x244404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244408:
    // 0x244408: 0x266606f0  addiu       $a2, $s3, 0x6F0
    ctx->pc = 0x244408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1776));
label_24440c:
    // 0x24440c: 0xc09132c  jal         func_244CB0
label_244410:
    if (ctx->pc == 0x244410u) {
        ctx->pc = 0x244410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24440Cu;
        // 0x244410: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244414u;
        goto label_244414;
    }
    ctx->pc = 0x24440Cu;
    SET_GPR_U32(ctx, 31, 0x244414u);
    ctx->pc = 0x244410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24440Cu;
    // 0x244410: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244CB0u;
    { ctx->pc = 0x244cb0; return; }
    ctx->pc = 0x244414u;
label_244414:
    // 0x244414: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x244414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_244418:
    // 0x244418: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x244418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_24441c:
    // 0x24441c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x24441cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_244420:
    // 0x244420: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x244420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_244424:
    // 0x244424: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x244424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_244428:
    // 0x244428: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x244428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
label_24442c:
    // 0x24442c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24442cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244430:
    // 0x244430: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x244430u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244434:
    // 0x244434: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x244434u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244438:
    // 0x244438: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x244438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_24443c:
    // 0x24443c: 0xc066c72  jal         func_19B1C8
label_244440:
    if (ctx->pc == 0x244440u) {
        ctx->pc = 0x244440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24443Cu;
        // 0x244440: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244444u;
        goto label_244444;
    }
    ctx->pc = 0x24443Cu;
    SET_GPR_U32(ctx, 31, 0x244444u);
    ctx->pc = 0x244440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24443Cu;
    // 0x244440: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x244444u;
label_244444:
    // 0x244444: 0x92080004  lbu         $t0, 0x4($s0)
    ctx->pc = 0x244444u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_244448:
    // 0x244448: 0x29010041  slti        $at, $t0, 0x41
    ctx->pc = 0x244448u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)65) ? 1 : 0);
label_24444c:
    // 0x24444c: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
label_244450:
    if (ctx->pc == 0x244450u) {
        ctx->pc = 0x244450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24444Cu;
        // 0x244450: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244454u;
        goto label_244454;
    }
    ctx->pc = 0x24444Cu;
    {
        const bool branch_taken_0x24444c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x244450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24444Cu;
        // 0x244450: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24444c) {
            ctx->pc = 0x2444FCu;
            goto label_2444fc;
        }
    }
    ctx->pc = 0x244454u;
label_244454:
    // 0x244454: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x244454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_244458:
    // 0x244458: 0x34643ffc  ori         $a0, $v1, 0x3FFC
    ctx->pc = 0x244458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_24445c:
    // 0x24445c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24445cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244460:
    // 0x244460: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x244460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_244464:
    // 0x244464: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x244464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_244468:
    // 0x244468: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x244468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24446c:
    // 0x24446c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x24446cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_244470:
    // 0x244470: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x244470u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_244474:
    // 0x244474: 0x2409000f  addiu       $t1, $zero, 0xF
    ctx->pc = 0x244474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_244478:
    // 0x244478: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x244478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_24447c:
    // 0x24447c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x24447cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_244480:
    // 0x244480: 0x24420260  addiu       $v0, $v0, 0x260
    ctx->pc = 0x244480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
label_244484:
    // 0x244484: 0x240a0041  addiu       $t2, $zero, 0x41
    ctx->pc = 0x244484u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_244488:
    // 0x244488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x244488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24448c:
    // 0x24448c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x24448cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_244490:
    // 0x244490: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x244490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_244494:
    // 0x244494: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x244494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_244498:
    // 0x244498: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x244498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24449c:
    // 0x24449c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x24449cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2444a0:
    // 0x2444a0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2444a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2444a4:
    // 0x2444a4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2444a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2444a8:
    // 0x2444a8: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x2444a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2444ac:
    // 0x2444ac: 0xc0911c0  jal         func_244700
label_2444b0:
    if (ctx->pc == 0x2444B0u) {
        ctx->pc = 0x2444B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444ACu;
        // 0x2444b0: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444B4u;
        goto label_2444b4;
    }
    ctx->pc = 0x2444ACu;
    SET_GPR_U32(ctx, 31, 0x2444B4u);
    ctx->pc = 0x2444B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2444ACu;
    // 0x2444b0: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244700u;
    goto label_244700;
    ctx->pc = 0x2444B4u;
label_2444b4:
    // 0x2444b4: 0x92070004  lbu         $a3, 0x4($s0)
    ctx->pc = 0x2444b4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_2444b8:
    // 0x2444b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2444b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2444bc:
    // 0x2444bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2444bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2444c0:
    // 0x2444c0: 0x26660290  addiu       $a2, $s3, 0x290
    ctx->pc = 0x2444c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
label_2444c4:
    // 0x2444c4: 0xc09132c  jal         func_244CB0
label_2444c8:
    if (ctx->pc == 0x2444C8u) {
        ctx->pc = 0x2444C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444C4u;
        // 0x2444c8: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444CCu;
        goto label_2444cc;
    }
    ctx->pc = 0x2444C4u;
    SET_GPR_U32(ctx, 31, 0x2444CCu);
    ctx->pc = 0x2444C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2444C4u;
    // 0x2444c8: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244CB0u;
    { ctx->pc = 0x244cb0; return; }
    ctx->pc = 0x2444CCu;
label_2444cc:
    // 0x2444cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2444ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_2444d0:
    // 0x2444d0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2444d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2444d4:
    // 0x2444d4: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x2444d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_2444d8:
    // 0x2444d8: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x2444d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_2444dc:
    // 0x2444dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2444dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2444e0:
    // 0x2444e0: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x2444e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_2444e4:
    // 0x2444e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2444e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2444e8:
    // 0x2444e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2444e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2444ec:
    // 0x2444ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2444ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2444f0:
    // 0x2444f0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2444f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2444f4:
    // 0x2444f4: 0xc066c72  jal         func_19B1C8
label_2444f8:
    if (ctx->pc == 0x2444F8u) {
        ctx->pc = 0x2444F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444F4u;
        // 0x2444f8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444FCu;
        goto label_2444fc;
    }
    ctx->pc = 0x2444F4u;
    SET_GPR_U32(ctx, 31, 0x2444FCu);
    ctx->pc = 0x2444F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2444F4u;
    // 0x2444f8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x2444FCu;
label_2444fc:
    // 0x2444fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2444fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_244500:
    // 0x244500: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x244500u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_244504:
    // 0x244504: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x244504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_244508:
    // 0x244508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x244508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24450c:
    // 0x24450c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24450cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_244510:
    // 0x244510: 0x3e00008  jr          $ra
label_244514:
    if (ctx->pc == 0x244514u) {
        ctx->pc = 0x244514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244510u;
        // 0x244514: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244518u;
        goto label_244518;
    }
    ctx->pc = 0x244510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244510u;
        // 0x244514: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244518u;
label_244518:
    // 0x244518: 0x0  nop
    ctx->pc = 0x244518u;
    // NOP
label_24451c:
    // 0x24451c: 0x0  nop
    ctx->pc = 0x24451cu;
    // NOP
label_244520:
    // 0x244520: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x244520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_244524:
    // 0x244524: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x244524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_244528:
    // 0x244528: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x244528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_24452c:
    // 0x24452c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x24452cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_244530:
    // 0x244530: 0x24630230  addiu       $v1, $v1, 0x230
    ctx->pc = 0x244530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 560));
label_244534:
    // 0x244534: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x244534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_244538:
    // 0x244538: 0x90640007  lbu         $a0, 0x7($v1)
    ctx->pc = 0x244538u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
label_24453c:
    // 0x24453c: 0x18800057  blez        $a0, . + 4 + (0x57 << 2)
label_244540:
    if (ctx->pc == 0x244540u) {
        ctx->pc = 0x244544u;
        goto label_244544;
    }
    ctx->pc = 0x24453Cu;
    {
        const bool branch_taken_0x24453c = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x24453c) {
            ctx->pc = 0x24469Cu;
            goto label_24469c;
        }
    }
    ctx->pc = 0x244544u;
label_244544:
    // 0x244544: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x244544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_244548:
    // 0x244548: 0xa0640007  sb          $a0, 0x7($v1)
    ctx->pc = 0x244548u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 4));
label_24454c:
    // 0x24454c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x24454cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_244550:
    // 0x244550: 0x14800052  bnez        $a0, . + 4 + (0x52 << 2)
label_244554:
    if (ctx->pc == 0x244554u) {
        ctx->pc = 0x244558u;
        goto label_244558;
    }
    ctx->pc = 0x244550u;
    {
        const bool branch_taken_0x244550 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x244550) {
            ctx->pc = 0x24469Cu;
            goto label_24469c;
        }
    }
    ctx->pc = 0x244558u;
label_244558:
    // 0x244558: 0x8469000e  lh          $t1, 0xE($v1)
    ctx->pc = 0x244558u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_24455c:
    // 0x24455c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24455cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244560:
    // 0x244560: 0x29010013  slti        $at, $t0, 0x13
    ctx->pc = 0x244560u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)19) ? 1 : 0);
label_244564:
    // 0x244564: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_244568:
    if (ctx->pc == 0x244568u) {
        ctx->pc = 0x244568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244564u;
        // 0x244568: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24456Cu;
        goto label_24456c;
    }
    ctx->pc = 0x244564u;
    {
        const bool branch_taken_0x244564 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x244568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244564u;
        // 0x244568: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244564) {
            ctx->pc = 0x2445A8u;
            goto label_2445a8;
        }
    }
    ctx->pc = 0x24456Cu;
label_24456c:
    // 0x24456c: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x24456cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_244570:
    // 0x244570: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x244570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244574:
    // 0x244574: 0x1062004  sllv        $a0, $a2, $t0
    ctx->pc = 0x244574u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
label_244578:
    // 0x244578: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x244578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_24457c:
    // 0x24457c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_244580:
    if (ctx->pc == 0x244580u) {
        ctx->pc = 0x244584u;
        goto label_244584;
    }
    ctx->pc = 0x24457Cu;
    {
        const bool branch_taken_0x24457c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24457c) {
            ctx->pc = 0x244594u;
            goto label_244594;
        }
    }
    ctx->pc = 0x244584u;
label_244584:
    // 0x244584: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x244584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_244588:
    // 0x244588: 0x28e1000c  slti        $at, $a3, 0xC
    ctx->pc = 0x244588u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)12) ? 1 : 0);
label_24458c:
    // 0x24458c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_244590:
    if (ctx->pc == 0x244590u) {
        ctx->pc = 0x244594u;
        goto label_244594;
    }
    ctx->pc = 0x24458Cu;
    {
        const bool branch_taken_0x24458c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24458c) {
            ctx->pc = 0x2445A8u;
            goto label_2445a8;
        }
    }
    ctx->pc = 0x244594u;
label_244594:
    // 0x244594: 0x0  nop
    ctx->pc = 0x244594u;
    // NOP
label_244598:
    // 0x244598: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x244598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_24459c:
    // 0x24459c: 0x29040013  slti        $a0, $t0, 0x13
    ctx->pc = 0x24459cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)19) ? 1 : 0);
label_2445a0:
    // 0x2445a0: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
label_2445a4:
    if (ctx->pc == 0x2445A4u) {
        ctx->pc = 0x2445A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445A0u;
        // 0x2445a4: 0x1062004  sllv        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2445A8u;
        goto label_2445a8;
    }
    ctx->pc = 0x2445A0u;
    {
        const bool branch_taken_0x2445a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2445A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445A0u;
        // 0x2445a4: 0x1062004  sllv        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445a0) {
            ctx->pc = 0x244578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244578;
        }
    }
    ctx->pc = 0x2445A8u;
label_2445a8:
    // 0x2445a8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x2445a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_2445ac:
    // 0x2445ac: 0x2484eb08  addiu       $a0, $a0, -0x14F8
    ctx->pc = 0x2445acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961928));
label_2445b0:
    // 0x2445b0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2445b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2445b4:
    // 0x2445b4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2445b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2445b8:
    // 0x2445b8: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x2445b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_2445bc:
    // 0x2445bc: 0x44c3c  dsll32      $t1, $a0, 16
    ctx->pc = 0x2445bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 16));
label_2445c0:
    // 0x2445c0: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x2445c0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
label_2445c4:
    // 0x2445c4: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
label_2445c8:
    if (ctx->pc == 0x2445C8u) {
        ctx->pc = 0x2445CCu;
        goto label_2445cc;
    }
    ctx->pc = 0x2445C4u;
    {
        const bool branch_taken_0x2445c4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2445c4) {
            ctx->pc = 0x2445D4u;
            goto label_2445d4;
        }
    }
    ctx->pc = 0x2445CCu;
label_2445cc:
    // 0x2445cc: 0x10000011  b           . + 4 + (0x11 << 2)
label_2445d0:
    if (ctx->pc == 0x2445D0u) {
        ctx->pc = 0x2445D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445CCu;
        // 0x2445d0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2445D4u;
        goto label_2445d4;
    }
    ctx->pc = 0x2445CCu;
    {
        const bool branch_taken_0x2445cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2445D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445CCu;
        // 0x2445d0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445cc) {
            ctx->pc = 0x244614u;
            goto label_244614;
        }
    }
    ctx->pc = 0x2445D4u;
label_2445d4:
    // 0x2445d4: 0x90650008  lbu         $a1, 0x8($v1)
    ctx->pc = 0x2445d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_2445d8:
    // 0x2445d8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2445d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2445dc:
    // 0x2445dc: 0x5200a  movz        $a0, $zero, $a1
    ctx->pc = 0x2445dcu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_2445e0:
    // 0x2445e0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2445e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_2445e4:
    // 0x2445e4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2445e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_2445e8:
    // 0x2445e8: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x2445e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_2445ec:
    // 0x2445ec: 0x44c3c  dsll32      $t1, $a0, 16
    ctx->pc = 0x2445ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 16));
label_2445f0:
    // 0x2445f0: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x2445f0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
label_2445f4:
    // 0x2445f4: 0x29210064  slti        $at, $t1, 0x64
    ctx->pc = 0x2445f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)100) ? 1 : 0);
label_2445f8:
    // 0x2445f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2445fc:
    if (ctx->pc == 0x2445FCu) {
        ctx->pc = 0x244600u;
        goto label_244600;
    }
    ctx->pc = 0x2445F8u;
    {
        const bool branch_taken_0x2445f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2445f8) {
            ctx->pc = 0x244608u;
            goto label_244608;
        }
    }
    ctx->pc = 0x244600u;
label_244600:
    // 0x244600: 0x10000003  b           . + 4 + (0x3 << 2)
label_244604:
    if (ctx->pc == 0x244604u) {
        ctx->pc = 0x244604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244600u;
        // 0x244604: 0x9243c  dsll32      $a0, $t1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244608u;
        goto label_244608;
    }
    ctx->pc = 0x244600u;
    {
        const bool branch_taken_0x244600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244600u;
        // 0x244604: 0x9243c  dsll32      $a0, $t1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244600) {
            ctx->pc = 0x244610u;
            goto label_244610;
        }
    }
    ctx->pc = 0x244608u;
label_244608:
    // 0x244608: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x244608u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_24460c:
    // 0x24460c: 0x9243c  dsll32      $a0, $t1, 16
    ctx->pc = 0x24460cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 16));
label_244610:
    // 0x244610: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x244610u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_244614:
    // 0x244614: 0x43c3c  dsll32      $a3, $a0, 16
    ctx->pc = 0x244614u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 16));
label_244618:
    // 0x244618: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x244618u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_24461c:
    // 0x24461c: 0x28e1001e  slti        $at, $a3, 0x1E
    ctx->pc = 0x24461cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
label_244620:
    // 0x244620: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_244624:
    if (ctx->pc == 0x244624u) {
        ctx->pc = 0x244628u;
        goto label_244628;
    }
    ctx->pc = 0x244620u;
    {
        const bool branch_taken_0x244620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x244620) {
            ctx->pc = 0x244634u;
            goto label_244634;
        }
    }
    ctx->pc = 0x244628u;
label_244628:
    // 0x244628: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x244628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_24462c:
    // 0x24462c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_244630:
    if (ctx->pc == 0x244630u) {
        ctx->pc = 0x244634u;
        goto label_244634;
    }
    ctx->pc = 0x24462Cu;
    {
        const bool branch_taken_0x24462c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24462c) {
            ctx->pc = 0x24467Cu;
            goto label_24467c;
        }
    }
    ctx->pc = 0x244634u;
label_244634:
    // 0x244634: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x244634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_244638:
    // 0x244638: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x244638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_24463c:
    // 0x24463c: 0x3488869f  ori         $t0, $a0, 0x869F
    ctx->pc = 0x24463cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34463);
label_244640:
    // 0x244640: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x244640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_244644:
    // 0x244644: 0x8c24ccf4  lw          $a0, -0x330C($at)
    ctx->pc = 0x244644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954228)));
label_244648:
    // 0x244648: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x244648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_24464c:
    // 0x24464c: 0x53042  srl         $a2, $a1, 1
    ctx->pc = 0x24464cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_244650:
    // 0x244650: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x244650u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_244654:
    // 0x244654: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x244654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_244658:
    // 0x244658: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x244658u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_24465c:
    // 0x24465c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x24465cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_244660:
    // 0x244660: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x244660u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_244664:
    // 0x244664: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x244664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_244668:
    // 0x244668: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x244668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_24466c:
    // 0x24466c: 0x88082a  slt         $at, $a0, $t0
    ctx->pc = 0x24466cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_244670:
    // 0x244670: 0x101200a  movz        $a0, $t0, $at
    ctx->pc = 0x244670u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 8));
label_244674:
    // 0x244674: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x244674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_244678:
    // 0x244678: 0xac24ccf4  sw          $a0, -0x330C($at)
    ctx->pc = 0x244678u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954228), GPR_U32(ctx, 4));
label_24467c:
    // 0x24467c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x24467cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_244680:
    // 0x244680: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x244680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_244684:
    // 0x244684: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x244684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_244688:
    // 0x244688: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x244688u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
label_24468c:
    // 0x24468c: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x24468cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
label_244690:
    // 0x244690: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x244690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_244694:
    // 0x244694: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x244694u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
label_244698:
    // 0x244698: 0xa0600005  sb          $zero, 0x5($v1)
    ctx->pc = 0x244698u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 0));
label_24469c:
    // 0x24469c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x24469cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2446a0:
    // 0x2446a0: 0x2881005c  slti        $at, $a0, 0x5C
    ctx->pc = 0x2446a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)92) ? 1 : 0);
label_2446a4:
    // 0x2446a4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_2446a8:
    if (ctx->pc == 0x2446A8u) {
        ctx->pc = 0x2446ACu;
        goto label_2446ac;
    }
    ctx->pc = 0x2446A4u;
    {
        const bool branch_taken_0x2446a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2446a4) {
            ctx->pc = 0x2446C8u;
            goto label_2446c8;
        }
    }
    ctx->pc = 0x2446ACu;
label_2446ac:
    // 0x2446ac: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x2446acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2446b0:
    // 0x2446b0: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2446b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_2446b4:
    // 0x2446b4: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x2446b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2446b8:
    // 0x2446b8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2446b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2446bc:
    // 0x2446bc: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
label_2446c0:
    if (ctx->pc == 0x2446C0u) {
        ctx->pc = 0x2446C4u;
        goto label_2446c4;
    }
    ctx->pc = 0x2446BCu;
    {
        const bool branch_taken_0x2446bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2446bc) {
            ctx->pc = 0x2446C8u;
            goto label_2446c8;
        }
    }
    ctx->pc = 0x2446C4u;
label_2446c4:
    // 0x2446c4: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x2446c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
label_2446c8:
    // 0x2446c8: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x2446c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2446cc:
    // 0x2446cc: 0x28810050  slti        $at, $a0, 0x50
    ctx->pc = 0x2446ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)80) ? 1 : 0);
label_2446d0:
    // 0x2446d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2446d4:
    if (ctx->pc == 0x2446D4u) {
        ctx->pc = 0x2446D8u;
        goto label_2446d8;
    }
    ctx->pc = 0x2446D0u;
    {
        const bool branch_taken_0x2446d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2446d0) {
            ctx->pc = 0x2446E0u;
            goto label_2446e0;
        }
    }
    ctx->pc = 0x2446D8u;
label_2446d8:
    // 0x2446d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2446d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2446dc:
    // 0x2446dc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2446dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_2446e0:
    // 0x2446e0: 0x90640004  lbu         $a0, 0x4($v1)
    ctx->pc = 0x2446e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_2446e4:
    // 0x2446e4: 0x28810041  slti        $at, $a0, 0x41
    ctx->pc = 0x2446e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)65) ? 1 : 0);
label_2446e8:
    // 0x2446e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2446ec:
    if (ctx->pc == 0x2446ECu) {
        ctx->pc = 0x2446F0u;
        goto label_2446f0;
    }
    ctx->pc = 0x2446E8u;
    {
        const bool branch_taken_0x2446e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2446e8) {
            ctx->pc = 0x2446F8u;
            goto label_2446f8;
        }
    }
    ctx->pc = 0x2446F0u;
label_2446f0:
    // 0x2446f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2446f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2446f4:
    // 0x2446f4: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x2446f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
label_2446f8:
    // 0x2446f8: 0x3e00008  jr          $ra
label_2446fc:
    if (ctx->pc == 0x2446FCu) {
        ctx->pc = 0x244700u;
        goto label_244700;
    }
    ctx->pc = 0x2446F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2446F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244700u;
label_244700:
    // 0x244700: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x244700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_244704:
    // 0x244704: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x244704u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_244708:
    // 0x244708: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x244708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_24470c:
    // 0x24470c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24470cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_244710:
    // 0x244710: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x244710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_244714:
    // 0x244714: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x244714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_244718:
    // 0x244718: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x244718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24471c:
    // 0x24471c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24471cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_244720:
    // 0x244720: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x244720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_244724:
    // 0x244724: 0x1020009c  beqz        $at, . + 4 + (0x9C << 2)
label_244728:
    if (ctx->pc == 0x244728u) {
        ctx->pc = 0x244728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244724u;
        // 0x244728: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24472Cu;
        goto label_24472c;
    }
    ctx->pc = 0x244724u;
    {
        const bool branch_taken_0x244724 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x244728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244724u;
        // 0x244728: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244724) {
            ctx->pc = 0x244998u;
            { ctx->pc = 0x244998; return; }
        }
    }
    ctx->pc = 0x24472Cu;
label_24472c:
    // 0x24472c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24472cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244730:
    // 0x244730: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x244730u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244734:
    // 0x244734: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x244734u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244738:
    // 0x244738: 0x478c0  sll         $t7, $a0, 3
    ctx->pc = 0x244738u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_24473c:
    // 0x24473c: 0x1486823  subu        $t5, $t2, $t0
    ctx->pc = 0x24473cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_244740:
    // 0x244740: 0x1e42023  subu        $a0, $t7, $a0
    ctx->pc = 0x244740u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
label_244744:
    // 0x244744: 0x2559fff6  addiu       $t9, $t2, -0xA
    ctx->pc = 0x244744u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967286));
label_244748:
    // 0x244748: 0x3c0a6666  lui         $t2, 0x6666
    ctx->pc = 0x244748u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)26214 << 16));
label_24474c:
    // 0x24474c: 0xd69c0  sll         $t5, $t5, 7
    ctx->pc = 0x24474cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 7));
label_244750:
    // 0x244750: 0x47940  sll         $t7, $a0, 5
    ctx->pc = 0x244750u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_244754:
    // 0x244754: 0x240e00b0  addiu       $t6, $zero, 0xB0
    ctx->pc = 0x244754u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_244758:
    // 0x244758: 0x24180076  addiu       $t8, $zero, 0x76
    ctx->pc = 0x244758u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_24475c:
    // 0x24475c: 0xd27c2  srl         $a0, $t5, 31
    ctx->pc = 0x24475cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
label_244760:
    // 0x244760: 0x354a6667  ori         $t2, $t2, 0x6667
    ctx->pc = 0x244760u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)26215);
label_244764:
    // 0x244764: 0x119082a  slt         $at, $t0, $t9
    ctx->pc = 0x244764u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_244768:
    // 0x244768: 0x1020007a  beqz        $at, . + 4 + (0x7A << 2)
label_24476c:
    if (ctx->pc == 0x24476Cu) {
        ctx->pc = 0x24476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244768u;
        // 0x24476c: 0x103a823  subu        $s5, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244770u;
        goto label_244770;
    }
    ctx->pc = 0x244768u;
    {
        const bool branch_taken_0x244768 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244768u;
        // 0x24476c: 0x103a823  subu        $s5, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244768) {
            ctx->pc = 0x244954u;
            { ctx->pc = 0x244954; return; }
        }
    }
    ctx->pc = 0x244770u;
label_244770:
    // 0x244770: 0x6a10006  bgez        $s5, . + 4 + (0x6 << 2)
label_244774:
    if (ctx->pc == 0x244774u) {
        ctx->pc = 0x244774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244770u;
        // 0x244774: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244778u;
        goto label_244778;
    }
    ctx->pc = 0x244770u;
    {
        const bool branch_taken_0x244770 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x244774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244770u;
        // 0x244774: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244770) {
            ctx->pc = 0x24478Cu;
            goto label_24478c;
        }
    }
    ctx->pc = 0x244778u;
label_244778:
    // 0x244778: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x244778u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24477c:
    // 0x24477c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24477cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244780:
    // 0x244780: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x244780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244784:
    // 0x244784: 0x10000063  b           . + 4 + (0x63 << 2)
label_244788:
    if (ctx->pc == 0x244788u) {
        ctx->pc = 0x244788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244784u;
        // 0x244788: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24478Cu;
        goto label_24478c;
    }
    ctx->pc = 0x244784u;
    {
        const bool branch_taken_0x244784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244784u;
        // 0x244788: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244784) {
            ctx->pc = 0x244914u;
            { ctx->pc = 0x244914; return; }
        }
    }
    ctx->pc = 0x24478Cu;
label_24478c:
    // 0x24478c: 0x0  nop
    ctx->pc = 0x24478cu;
    // NOP
    ctx->pc = 0x244790u;
    return;
}
