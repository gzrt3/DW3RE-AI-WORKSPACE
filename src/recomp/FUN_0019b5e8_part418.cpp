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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x266fb8u: goto label_266fb8;
        case 0x266fbcu: goto label_266fbc;
        case 0x266fc0u: goto label_266fc0;
        case 0x266fc4u: goto label_266fc4;
        case 0x266fc8u: goto label_266fc8;
        case 0x266fccu: goto label_266fcc;
        case 0x266fd0u: goto label_266fd0;
        case 0x266fd4u: goto label_266fd4;
        case 0x266fd8u: goto label_266fd8;
        case 0x266fdcu: goto label_266fdc;
        case 0x266fe0u: goto label_266fe0;
        case 0x266fe4u: goto label_266fe4;
        case 0x266fe8u: goto label_266fe8;
        case 0x266fecu: goto label_266fec;
        case 0x266ff0u: goto label_266ff0;
        case 0x266ff4u: goto label_266ff4;
        case 0x266ff8u: goto label_266ff8;
        case 0x266ffcu: goto label_266ffc;
        case 0x267000u: goto label_267000;
        case 0x267004u: goto label_267004;
        case 0x267008u: goto label_267008;
        case 0x26700cu: goto label_26700c;
        case 0x267010u: goto label_267010;
        case 0x267014u: goto label_267014;
        case 0x267018u: goto label_267018;
        case 0x26701cu: goto label_26701c;
        case 0x267020u: goto label_267020;
        case 0x267024u: goto label_267024;
        case 0x267028u: goto label_267028;
        case 0x26702cu: goto label_26702c;
        case 0x267030u: goto label_267030;
        case 0x267034u: goto label_267034;
        case 0x267038u: goto label_267038;
        case 0x26703cu: goto label_26703c;
        case 0x267040u: goto label_267040;
        case 0x267044u: goto label_267044;
        case 0x267048u: goto label_267048;
        case 0x26704cu: goto label_26704c;
        case 0x267050u: goto label_267050;
        case 0x267054u: goto label_267054;
        case 0x267058u: goto label_267058;
        case 0x26705cu: goto label_26705c;
        case 0x267060u: goto label_267060;
        case 0x267064u: goto label_267064;
        case 0x267068u: goto label_267068;
        case 0x26706cu: goto label_26706c;
        case 0x267070u: goto label_267070;
        case 0x267074u: goto label_267074;
        case 0x267078u: goto label_267078;
        case 0x26707cu: goto label_26707c;
        case 0x267080u: goto label_267080;
        case 0x267084u: goto label_267084;
        case 0x267088u: goto label_267088;
        case 0x26708cu: goto label_26708c;
        case 0x267090u: goto label_267090;
        case 0x267094u: goto label_267094;
        case 0x267098u: goto label_267098;
        case 0x26709cu: goto label_26709c;
        case 0x2670a0u: goto label_2670a0;
        case 0x2670a4u: goto label_2670a4;
        case 0x2670a8u: goto label_2670a8;
        case 0x2670acu: goto label_2670ac;
        case 0x2670b0u: goto label_2670b0;
        case 0x2670b4u: goto label_2670b4;
        case 0x2670b8u: goto label_2670b8;
        case 0x2670bcu: goto label_2670bc;
        case 0x2670c0u: goto label_2670c0;
        case 0x2670c4u: goto label_2670c4;
        case 0x2670c8u: goto label_2670c8;
        case 0x2670ccu: goto label_2670cc;
        case 0x2670d0u: goto label_2670d0;
        case 0x2670d4u: goto label_2670d4;
        case 0x2670d8u: goto label_2670d8;
        case 0x2670dcu: goto label_2670dc;
        case 0x2670e0u: goto label_2670e0;
        case 0x2670e4u: goto label_2670e4;
        case 0x2670e8u: goto label_2670e8;
        case 0x2670ecu: goto label_2670ec;
        case 0x2670f0u: goto label_2670f0;
        case 0x2670f4u: goto label_2670f4;
        case 0x2670f8u: goto label_2670f8;
        case 0x2670fcu: goto label_2670fc;
        case 0x267100u: goto label_267100;
        case 0x267104u: goto label_267104;
        case 0x267108u: goto label_267108;
        case 0x26710cu: goto label_26710c;
        case 0x267110u: goto label_267110;
        case 0x267114u: goto label_267114;
        case 0x267118u: goto label_267118;
        case 0x26711cu: goto label_26711c;
        case 0x267120u: goto label_267120;
        case 0x267124u: goto label_267124;
        case 0x267128u: goto label_267128;
        case 0x26712cu: goto label_26712c;
        case 0x267130u: goto label_267130;
        case 0x267134u: goto label_267134;
        case 0x267138u: goto label_267138;
        case 0x26713cu: goto label_26713c;
        case 0x267140u: goto label_267140;
        case 0x267144u: goto label_267144;
        case 0x267148u: goto label_267148;
        case 0x26714cu: goto label_26714c;
        case 0x267150u: goto label_267150;
        case 0x267154u: goto label_267154;
        case 0x267158u: goto label_267158;
        case 0x26715cu: goto label_26715c;
        case 0x267160u: goto label_267160;
        case 0x267164u: goto label_267164;
        case 0x267168u: goto label_267168;
        case 0x26716cu: goto label_26716c;
        case 0x267170u: goto label_267170;
        case 0x267174u: goto label_267174;
        case 0x267178u: goto label_267178;
        case 0x26717cu: goto label_26717c;
        case 0x267180u: goto label_267180;
        case 0x267184u: goto label_267184;
        case 0x267188u: goto label_267188;
        case 0x26718cu: goto label_26718c;
        case 0x267190u: goto label_267190;
        case 0x267194u: goto label_267194;
        case 0x267198u: goto label_267198;
        case 0x26719cu: goto label_26719c;
        case 0x2671a0u: goto label_2671a0;
        case 0x2671a4u: goto label_2671a4;
        case 0x2671a8u: goto label_2671a8;
        case 0x2671acu: goto label_2671ac;
        case 0x2671b0u: goto label_2671b0;
        case 0x2671b4u: goto label_2671b4;
        case 0x2671b8u: goto label_2671b8;
        case 0x2671bcu: goto label_2671bc;
        case 0x2671c0u: goto label_2671c0;
        case 0x2671c4u: goto label_2671c4;
        case 0x2671c8u: goto label_2671c8;
        case 0x2671ccu: goto label_2671cc;
        case 0x2671d0u: goto label_2671d0;
        case 0x2671d4u: goto label_2671d4;
        case 0x2671d8u: goto label_2671d8;
        case 0x2671dcu: goto label_2671dc;
        case 0x2671e0u: goto label_2671e0;
        case 0x2671e4u: goto label_2671e4;
        case 0x2671e8u: goto label_2671e8;
        case 0x2671ecu: goto label_2671ec;
        case 0x2671f0u: goto label_2671f0;
        case 0x2671f4u: goto label_2671f4;
        case 0x2671f8u: goto label_2671f8;
        case 0x2671fcu: goto label_2671fc;
        case 0x267200u: goto label_267200;
        case 0x267204u: goto label_267204;
        case 0x267208u: goto label_267208;
        case 0x26720cu: goto label_26720c;
        case 0x267210u: goto label_267210;
        case 0x267214u: goto label_267214;
        case 0x267218u: goto label_267218;
        case 0x26721cu: goto label_26721c;
        case 0x267220u: goto label_267220;
        case 0x267224u: goto label_267224;
        case 0x267228u: goto label_267228;
        case 0x26722cu: goto label_26722c;
        case 0x267230u: goto label_267230;
        case 0x267234u: goto label_267234;
        case 0x267238u: goto label_267238;
        case 0x26723cu: goto label_26723c;
        case 0x267240u: goto label_267240;
        case 0x267244u: goto label_267244;
        case 0x267248u: goto label_267248;
        case 0x26724cu: goto label_26724c;
        case 0x267250u: goto label_267250;
        case 0x267254u: goto label_267254;
        case 0x267258u: goto label_267258;
        case 0x26725cu: goto label_26725c;
        case 0x267260u: goto label_267260;
        case 0x267264u: goto label_267264;
        case 0x267268u: goto label_267268;
        case 0x26726cu: goto label_26726c;
        case 0x267270u: goto label_267270;
        case 0x267274u: goto label_267274;
        case 0x267278u: goto label_267278;
        case 0x26727cu: goto label_26727c;
        case 0x267280u: goto label_267280;
        case 0x267284u: goto label_267284;
        case 0x267288u: goto label_267288;
        case 0x26728cu: goto label_26728c;
        case 0x267290u: goto label_267290;
        case 0x267294u: goto label_267294;
        case 0x267298u: goto label_267298;
        case 0x26729cu: goto label_26729c;
        case 0x2672a0u: goto label_2672a0;
        case 0x2672a4u: goto label_2672a4;
        case 0x2672a8u: goto label_2672a8;
        case 0x2672acu: goto label_2672ac;
        case 0x2672b0u: goto label_2672b0;
        case 0x2672b4u: goto label_2672b4;
        case 0x2672b8u: goto label_2672b8;
        case 0x2672bcu: goto label_2672bc;
        case 0x2672c0u: goto label_2672c0;
        case 0x2672c4u: goto label_2672c4;
        case 0x2672c8u: goto label_2672c8;
        case 0x2672ccu: goto label_2672cc;
        case 0x2672d0u: goto label_2672d0;
        case 0x2672d4u: goto label_2672d4;
        case 0x2672d8u: goto label_2672d8;
        case 0x2672dcu: goto label_2672dc;
        case 0x2672e0u: goto label_2672e0;
        case 0x2672e4u: goto label_2672e4;
        case 0x2672e8u: goto label_2672e8;
        case 0x2672ecu: goto label_2672ec;
        case 0x2672f0u: goto label_2672f0;
        case 0x2672f4u: goto label_2672f4;
        case 0x2672f8u: goto label_2672f8;
        case 0x2672fcu: goto label_2672fc;
        case 0x267300u: goto label_267300;
        case 0x267304u: goto label_267304;
        case 0x267308u: goto label_267308;
        case 0x26730cu: goto label_26730c;
        case 0x267310u: goto label_267310;
        case 0x267314u: goto label_267314;
        case 0x267318u: goto label_267318;
        case 0x26731cu: goto label_26731c;
        case 0x267320u: goto label_267320;
        case 0x267324u: goto label_267324;
        case 0x267328u: goto label_267328;
        case 0x26732cu: goto label_26732c;
        case 0x267330u: goto label_267330;
        case 0x267334u: goto label_267334;
        case 0x267338u: goto label_267338;
        case 0x26733cu: goto label_26733c;
        case 0x267340u: goto label_267340;
        case 0x267344u: goto label_267344;
        case 0x267348u: goto label_267348;
        case 0x26734cu: goto label_26734c;
        case 0x267350u: goto label_267350;
        case 0x267354u: goto label_267354;
        case 0x267358u: goto label_267358;
        case 0x26735cu: goto label_26735c;
        case 0x267360u: goto label_267360;
        case 0x267364u: goto label_267364;
        case 0x267368u: goto label_267368;
        case 0x26736cu: goto label_26736c;
        case 0x267370u: goto label_267370;
        case 0x267374u: goto label_267374;
        case 0x267378u: goto label_267378;
        case 0x26737cu: goto label_26737c;
        case 0x267380u: goto label_267380;
        case 0x267384u: goto label_267384;
        case 0x267388u: goto label_267388;
        case 0x26738cu: goto label_26738c;
        case 0x267390u: goto label_267390;
        case 0x267394u: goto label_267394;
        case 0x267398u: goto label_267398;
        case 0x26739cu: goto label_26739c;
        case 0x2673a0u: goto label_2673a0;
        case 0x2673a4u: goto label_2673a4;
        case 0x2673a8u: goto label_2673a8;
        case 0x2673acu: goto label_2673ac;
        case 0x2673b0u: goto label_2673b0;
        case 0x2673b4u: goto label_2673b4;
        case 0x2673b8u: goto label_2673b8;
        case 0x2673bcu: goto label_2673bc;
        case 0x2673c0u: goto label_2673c0;
        case 0x2673c4u: goto label_2673c4;
        case 0x2673c8u: goto label_2673c8;
        case 0x2673ccu: goto label_2673cc;
        case 0x2673d0u: goto label_2673d0;
        case 0x2673d4u: goto label_2673d4;
        case 0x2673d8u: goto label_2673d8;
        case 0x2673dcu: goto label_2673dc;
        case 0x2673e0u: goto label_2673e0;
        case 0x2673e4u: goto label_2673e4;
        case 0x2673e8u: goto label_2673e8;
        case 0x2673ecu: goto label_2673ec;
        case 0x2673f0u: goto label_2673f0;
        case 0x2673f4u: goto label_2673f4;
        case 0x2673f8u: goto label_2673f8;
        case 0x2673fcu: goto label_2673fc;
        case 0x267400u: goto label_267400;
        case 0x267404u: goto label_267404;
        case 0x267408u: goto label_267408;
        case 0x26740cu: goto label_26740c;
        case 0x267410u: goto label_267410;
        case 0x267414u: goto label_267414;
        case 0x267418u: goto label_267418;
        case 0x26741cu: goto label_26741c;
        case 0x267420u: goto label_267420;
        case 0x267424u: goto label_267424;
        case 0x267428u: goto label_267428;
        case 0x26742cu: goto label_26742c;
        case 0x267430u: goto label_267430;
        case 0x267434u: goto label_267434;
        case 0x267438u: goto label_267438;
        case 0x26743cu: goto label_26743c;
        case 0x267440u: goto label_267440;
        case 0x267444u: goto label_267444;
        case 0x267448u: goto label_267448;
        case 0x26744cu: goto label_26744c;
        case 0x267450u: goto label_267450;
        case 0x267454u: goto label_267454;
        case 0x267458u: goto label_267458;
        case 0x26745cu: goto label_26745c;
        case 0x267460u: goto label_267460;
        case 0x267464u: goto label_267464;
        case 0x267468u: goto label_267468;
        case 0x26746cu: goto label_26746c;
        case 0x267470u: goto label_267470;
        case 0x267474u: goto label_267474;
        case 0x267478u: goto label_267478;
        case 0x26747cu: goto label_26747c;
        case 0x267480u: goto label_267480;
        case 0x267484u: goto label_267484;
        case 0x267488u: goto label_267488;
        case 0x26748cu: goto label_26748c;
        case 0x267490u: goto label_267490;
        case 0x267494u: goto label_267494;
        case 0x267498u: goto label_267498;
        case 0x26749cu: goto label_26749c;
        case 0x2674a0u: goto label_2674a0;
        case 0x2674a4u: goto label_2674a4;
        case 0x2674a8u: goto label_2674a8;
        case 0x2674acu: goto label_2674ac;
        case 0x2674b0u: goto label_2674b0;
        case 0x2674b4u: goto label_2674b4;
        case 0x2674b8u: goto label_2674b8;
        case 0x2674bcu: goto label_2674bc;
        case 0x2674c0u: goto label_2674c0;
        case 0x2674c4u: goto label_2674c4;
        case 0x2674c8u: goto label_2674c8;
        case 0x2674ccu: goto label_2674cc;
        case 0x2674d0u: goto label_2674d0;
        case 0x2674d4u: goto label_2674d4;
        case 0x2674d8u: goto label_2674d8;
        case 0x2674dcu: goto label_2674dc;
        case 0x2674e0u: goto label_2674e0;
        case 0x2674e4u: goto label_2674e4;
        case 0x2674e8u: goto label_2674e8;
        case 0x2674ecu: goto label_2674ec;
        case 0x2674f0u: goto label_2674f0;
        case 0x2674f4u: goto label_2674f4;
        case 0x2674f8u: goto label_2674f8;
        case 0x2674fcu: goto label_2674fc;
        case 0x267500u: goto label_267500;
        case 0x267504u: goto label_267504;
        case 0x267508u: goto label_267508;
        case 0x26750cu: goto label_26750c;
        case 0x267510u: goto label_267510;
        case 0x267514u: goto label_267514;
        case 0x267518u: goto label_267518;
        case 0x26751cu: goto label_26751c;
        case 0x267520u: goto label_267520;
        case 0x267524u: goto label_267524;
        case 0x267528u: goto label_267528;
        case 0x26752cu: goto label_26752c;
        case 0x267530u: goto label_267530;
        case 0x267534u: goto label_267534;
        case 0x267538u: goto label_267538;
        case 0x26753cu: goto label_26753c;
        case 0x267540u: goto label_267540;
        case 0x267544u: goto label_267544;
        case 0x267548u: goto label_267548;
        case 0x26754cu: goto label_26754c;
        case 0x267550u: goto label_267550;
        case 0x267554u: goto label_267554;
        case 0x267558u: goto label_267558;
        case 0x26755cu: goto label_26755c;
        case 0x267560u: goto label_267560;
        case 0x267564u: goto label_267564;
        case 0x267568u: goto label_267568;
        case 0x26756cu: goto label_26756c;
        case 0x267570u: goto label_267570;
        case 0x267574u: goto label_267574;
        case 0x267578u: goto label_267578;
        case 0x26757cu: goto label_26757c;
        case 0x267580u: goto label_267580;
        case 0x267584u: goto label_267584;
        case 0x267588u: goto label_267588;
        case 0x26758cu: goto label_26758c;
        case 0x267590u: goto label_267590;
        case 0x267594u: goto label_267594;
        case 0x267598u: goto label_267598;
        case 0x26759cu: goto label_26759c;
        case 0x2675a0u: goto label_2675a0;
        case 0x2675a4u: goto label_2675a4;
        case 0x2675a8u: goto label_2675a8;
        case 0x2675acu: goto label_2675ac;
        case 0x2675b0u: goto label_2675b0;
        case 0x2675b4u: goto label_2675b4;
        case 0x2675b8u: goto label_2675b8;
        case 0x2675bcu: goto label_2675bc;
        case 0x2675c0u: goto label_2675c0;
        case 0x2675c4u: goto label_2675c4;
        case 0x2675c8u: goto label_2675c8;
        case 0x2675ccu: goto label_2675cc;
        case 0x2675d0u: goto label_2675d0;
        case 0x2675d4u: goto label_2675d4;
        case 0x2675d8u: goto label_2675d8;
        case 0x2675dcu: goto label_2675dc;
        case 0x2675e0u: goto label_2675e0;
        case 0x2675e4u: goto label_2675e4;
        case 0x2675e8u: goto label_2675e8;
        case 0x2675ecu: goto label_2675ec;
        case 0x2675f0u: goto label_2675f0;
        case 0x2675f4u: goto label_2675f4;
        case 0x2675f8u: goto label_2675f8;
        case 0x2675fcu: goto label_2675fc;
        case 0x267600u: goto label_267600;
        case 0x267604u: goto label_267604;
        case 0x267608u: goto label_267608;
        case 0x26760cu: goto label_26760c;
        case 0x267610u: goto label_267610;
        case 0x267614u: goto label_267614;
        case 0x267618u: goto label_267618;
        case 0x26761cu: goto label_26761c;
        case 0x267620u: goto label_267620;
        case 0x267624u: goto label_267624;
        case 0x267628u: goto label_267628;
        case 0x26762cu: goto label_26762c;
        case 0x267630u: goto label_267630;
        case 0x267634u: goto label_267634;
        case 0x267638u: goto label_267638;
        case 0x26763cu: goto label_26763c;
        case 0x267640u: goto label_267640;
        case 0x267644u: goto label_267644;
        case 0x267648u: goto label_267648;
        case 0x26764cu: goto label_26764c;
        case 0x267650u: goto label_267650;
        case 0x267654u: goto label_267654;
        case 0x267658u: goto label_267658;
        case 0x26765cu: goto label_26765c;
        case 0x267660u: goto label_267660;
        case 0x267664u: goto label_267664;
        case 0x267668u: goto label_267668;
        case 0x26766cu: goto label_26766c;
        case 0x267670u: goto label_267670;
        case 0x267674u: goto label_267674;
        case 0x267678u: goto label_267678;
        case 0x26767cu: goto label_26767c;
        case 0x267680u: goto label_267680;
        case 0x267684u: goto label_267684;
        case 0x267688u: goto label_267688;
        case 0x26768cu: goto label_26768c;
        case 0x267690u: goto label_267690;
        case 0x267694u: goto label_267694;
        case 0x267698u: goto label_267698;
        case 0x26769cu: goto label_26769c;
        case 0x2676a0u: goto label_2676a0;
        case 0x2676a4u: goto label_2676a4;
        case 0x2676a8u: goto label_2676a8;
        case 0x2676acu: goto label_2676ac;
        case 0x2676b0u: goto label_2676b0;
        case 0x2676b4u: goto label_2676b4;
        case 0x2676b8u: goto label_2676b8;
        case 0x2676bcu: goto label_2676bc;
        case 0x2676c0u: goto label_2676c0;
        case 0x2676c4u: goto label_2676c4;
        case 0x2676c8u: goto label_2676c8;
        case 0x2676ccu: goto label_2676cc;
        case 0x2676d0u: goto label_2676d0;
        case 0x2676d4u: goto label_2676d4;
        case 0x2676d8u: goto label_2676d8;
        case 0x2676dcu: goto label_2676dc;
        case 0x2676e0u: goto label_2676e0;
        case 0x2676e4u: goto label_2676e4;
        case 0x2676e8u: goto label_2676e8;
        case 0x2676ecu: goto label_2676ec;
        case 0x2676f0u: goto label_2676f0;
        case 0x2676f4u: goto label_2676f4;
        case 0x2676f8u: goto label_2676f8;
        case 0x2676fcu: goto label_2676fc;
        case 0x267700u: goto label_267700;
        case 0x267704u: goto label_267704;
        case 0x267708u: goto label_267708;
        case 0x26770cu: goto label_26770c;
        case 0x267710u: goto label_267710;
        case 0x267714u: goto label_267714;
        case 0x267718u: goto label_267718;
        case 0x26771cu: goto label_26771c;
        case 0x267720u: goto label_267720;
        case 0x267724u: goto label_267724;
        case 0x267728u: goto label_267728;
        case 0x26772cu: goto label_26772c;
        case 0x267730u: goto label_267730;
        case 0x267734u: goto label_267734;
        case 0x267738u: goto label_267738;
        case 0x26773cu: goto label_26773c;
        case 0x267740u: goto label_267740;
        case 0x267744u: goto label_267744;
        case 0x267748u: goto label_267748;
        case 0x26774cu: goto label_26774c;
        case 0x267750u: goto label_267750;
        case 0x267754u: goto label_267754;
        case 0x267758u: goto label_267758;
        case 0x26775cu: goto label_26775c;
        case 0x267760u: goto label_267760;
        case 0x267764u: goto label_267764;
        case 0x267768u: goto label_267768;
        case 0x26776cu: goto label_26776c;
        case 0x267770u: goto label_267770;
        case 0x267774u: goto label_267774;
        case 0x267778u: goto label_267778;
        case 0x26777cu: goto label_26777c;
        case 0x267780u: goto label_267780;
        case 0x267784u: goto label_267784;
        default: return;
    }

label_266fb8:
    // 0x266fb8: 0x0  nop
    ctx->pc = 0x266fb8u;
    // NOP
label_266fbc:
    // 0x266fbc: 0x0  nop
    ctx->pc = 0x266fbcu;
    // NOP
label_266fc0:
    // 0x266fc0: 0x110f4  teq         $zero, $at, 67
    ctx->pc = 0x266fc0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266fc4:
    // 0x266fc4: 0x8ec0  sll         $s1, $zero, 27
    ctx->pc = 0x266fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_266fc8:
    // 0x266fc8: 0x0  nop
    ctx->pc = 0x266fc8u;
    // NOP
label_266fcc:
    // 0x266fcc: 0x0  nop
    ctx->pc = 0x266fccu;
    // NOP
label_266fd0:
    // 0x266fd0: 0x11106  .word       0x00011106                   # srlv        $v0, $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_266fd4:
    // 0x266fd4: 0xc1d0  .word       0x0000C1D0                   # mfhi        $t8 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266fd4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_266fd8:
    // 0x266fd8: 0x0  nop
    ctx->pc = 0x266fd8u;
    // NOP
label_266fdc:
    // 0x266fdc: 0x0  nop
    ctx->pc = 0x266fdcu;
    // NOP
label_266fe0:
    // 0x266fe0: 0x1111f  .word       0x0001111F                   # ddivu       $v0, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266fe0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x266FE0 raw=0x0001111F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266fe4:
    // 0x266fe4: 0x8c20  .word       0x00008C20                   # add         $s1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266fe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_266fe8:
    // 0x266fe8: 0x0  nop
    ctx->pc = 0x266fe8u;
    // NOP
label_266fec:
    // 0x266fec: 0x0  nop
    ctx->pc = 0x266fecu;
    // NOP
label_266ff0:
    // 0x266ff0: 0x11131  tgeu        $zero, $at, 68
    ctx->pc = 0x266ff0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266ff4:
    // 0x266ff4: 0x9930  tge         $zero, $zero, 612
    ctx->pc = 0x266ff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266ff8:
    // 0x266ff8: 0x0  nop
    ctx->pc = 0x266ff8u;
    // NOP
label_266ffc:
    // 0x266ffc: 0x0  nop
    ctx->pc = 0x266ffcu;
    // NOP
label_267000:
    // 0x267000: 0x11145  .word       0x00011145                   # INVALID     $zero, $at, 0x1145 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267000u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x267000 raw=0x00011145"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267004:
    // 0x267004: 0x80c0  sll         $s0, $zero, 3
    ctx->pc = 0x267004u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_267008:
    // 0x267008: 0x0  nop
    ctx->pc = 0x267008u;
    // NOP
label_26700c:
    // 0x26700c: 0x0  nop
    ctx->pc = 0x26700cu;
    // NOP
label_267010:
    // 0x267010: 0x11156  .word       0x00011156                   # dsrlv       $v0, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_267014:
    // 0x267014: 0x8890  .word       0x00008890                   # mfhi        $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267014u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_267018:
    // 0x267018: 0x0  nop
    ctx->pc = 0x267018u;
    // NOP
label_26701c:
    // 0x26701c: 0x0  nop
    ctx->pc = 0x26701cu;
    // NOP
label_267020:
    // 0x267020: 0x11168  .word       0x00011168                   # mfsa        $v0 # 00010140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x267020u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_267024:
    // 0x267024: 0x6d90  .word       0x00006D90                   # mfhi        $t5 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267024u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_267028:
    // 0x267028: 0x0  nop
    ctx->pc = 0x267028u;
    // NOP
label_26702c:
    // 0x26702c: 0x0  nop
    ctx->pc = 0x26702cu;
    // NOP
label_267030:
    // 0x267030: 0x11176  tne         $zero, $at, 69
    ctx->pc = 0x267030u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267034:
    // 0x267034: 0x71b0  tge         $zero, $zero, 454
    ctx->pc = 0x267034u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267038:
    // 0x267038: 0x0  nop
    ctx->pc = 0x267038u;
    // NOP
label_26703c:
    // 0x26703c: 0x0  nop
    ctx->pc = 0x26703cu;
    // NOP
label_267040:
    // 0x267040: 0x11185  .word       0x00011185                   # INVALID     $zero, $at, 0x1185 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267040u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x267040 raw=0x00011185"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267044:
    // 0x267044: 0x8850  .word       0x00008850                   # mfhi        $s1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267044u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_267048:
    // 0x267048: 0x0  nop
    ctx->pc = 0x267048u;
    // NOP
label_26704c:
    // 0x26704c: 0x0  nop
    ctx->pc = 0x26704cu;
    // NOP
label_267050:
    // 0x267050: 0x11197  .word       0x00011197                   # dsrav       $v0, $at, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267050u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_267054:
    // 0x267054: 0x7620  .word       0x00007620                   # add         $t6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267054u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_267058:
    // 0x267058: 0x0  nop
    ctx->pc = 0x267058u;
    // NOP
label_26705c:
    // 0x26705c: 0x0  nop
    ctx->pc = 0x26705cu;
    // NOP
label_267060:
    // 0x267060: 0x111a6  .word       0x000111A6                   # xor         $v0, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_267064:
    // 0x267064: 0x9880  sll         $s3, $zero, 2
    ctx->pc = 0x267064u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_267068:
    // 0x267068: 0x0  nop
    ctx->pc = 0x267068u;
    // NOP
label_26706c:
    // 0x26706c: 0x0  nop
    ctx->pc = 0x26706cu;
    // NOP
label_267070:
    // 0x267070: 0x111ba  dsrl        $v0, $at, 6
    ctx->pc = 0x267070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> 6);
label_267074:
    // 0x267074: 0x8af0  tge         $zero, $zero, 555
    ctx->pc = 0x267074u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267078:
    // 0x267078: 0x0  nop
    ctx->pc = 0x267078u;
    // NOP
label_26707c:
    // 0x26707c: 0x0  nop
    ctx->pc = 0x26707cu;
    // NOP
label_267080:
    // 0x267080: 0x111cc  .word       0x000111CC                   # syscall     71 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267080u;
    ctx->pc = 0x267084u;
runtime->handleSyscall(rdram, ctx, 0x447u);
label_267084:
    // 0x267084: 0xa1a0  .word       0x0000A1A0                   # add         $s4, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267084u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_267088:
    // 0x267088: 0x0  nop
    ctx->pc = 0x267088u;
    // NOP
label_26708c:
    // 0x26708c: 0x0  nop
    ctx->pc = 0x26708cu;
    // NOP
label_267090:
    // 0x267090: 0x111e1  .word       0x000111E1                   # addu        $v0, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_267094:
    // 0x267094: 0xa370  tge         $zero, $zero, 653
    ctx->pc = 0x267094u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267098:
    // 0x267098: 0x0  nop
    ctx->pc = 0x267098u;
    // NOP
label_26709c:
    // 0x26709c: 0x0  nop
    ctx->pc = 0x26709cu;
    // NOP
label_2670a0:
    // 0x2670a0: 0x111f6  tne         $zero, $at, 71
    ctx->pc = 0x2670a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2670a4:
    // 0x2670a4: 0x9750  .word       0x00009750                   # mfhi        $s2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2670a4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2670a8:
    // 0x2670a8: 0x0  nop
    ctx->pc = 0x2670a8u;
    // NOP
label_2670ac:
    // 0x2670ac: 0x0  nop
    ctx->pc = 0x2670acu;
    // NOP
label_2670b0:
    // 0x2670b0: 0x11209  .word       0x00011209                   # jalr        $v0, $zero # 00010200 <InstrIdType: CPU_SPECIAL>
label_2670b4:
    if (ctx->pc == 0x2670B4u) {
        ctx->pc = 0x2670B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670B0u;
        // 0x2670b4: 0x9280  sll         $s2, $zero, 10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2670B8u;
        goto label_2670b8;
    }
    ctx->pc = 0x2670B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 2, 0x2670B8u);
        ctx->pc = 0x2670B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670B0u;
        // 0x2670b4: 0x9280  sll         $s2, $zero, 10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2670B0u, 0x2670B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2670B8u;
label_2670b8:
    // 0x2670b8: 0x0  nop
    ctx->pc = 0x2670b8u;
    // NOP
label_2670bc:
    // 0x2670bc: 0x0  nop
    ctx->pc = 0x2670bcu;
    // NOP
label_2670c0:
    // 0x2670c0: 0x1121c  .word       0x0001121C                   # dmult       $zero, $at # 00001200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2670c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2670C0 raw=0x0001121C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2670c4:
    // 0x2670c4: 0x8b30  tge         $zero, $zero, 556
    ctx->pc = 0x2670c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2670c8:
    // 0x2670c8: 0x0  nop
    ctx->pc = 0x2670c8u;
    // NOP
label_2670cc:
    // 0x2670cc: 0x0  nop
    ctx->pc = 0x2670ccu;
    // NOP
label_2670d0:
    // 0x2670d0: 0x1122e  .word       0x0001122E                   # dsub        $v0, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2670d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_2670d4:
    // 0x2670d4: 0x9750  .word       0x00009750                   # mfhi        $s2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2670d4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2670d8:
    // 0x2670d8: 0x0  nop
    ctx->pc = 0x2670d8u;
    // NOP
label_2670dc:
    // 0x2670dc: 0x0  nop
    ctx->pc = 0x2670dcu;
    // NOP
label_2670e0:
    // 0x2670e0: 0x11241  .word       0x00011241                   # INVALID     $zero, $at, 0x1241 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2670e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2670E0 raw=0x00011241"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2670e4:
    // 0x2670e4: 0xa4c0  sll         $s4, $zero, 19
    ctx->pc = 0x2670e4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2670e8:
    // 0x2670e8: 0x0  nop
    ctx->pc = 0x2670e8u;
    // NOP
label_2670ec:
    // 0x2670ec: 0x0  nop
    ctx->pc = 0x2670ecu;
    // NOP
label_2670f0:
    // 0x2670f0: 0x11256  .word       0x00011256                   # dsrlv       $v0, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2670f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2670f4:
    // 0x2670f4: 0x8ad0  .word       0x00008AD0                   # mfhi        $s1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2670f4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2670f8:
    // 0x2670f8: 0x0  nop
    ctx->pc = 0x2670f8u;
    // NOP
label_2670fc:
    // 0x2670fc: 0x0  nop
    ctx->pc = 0x2670fcu;
    // NOP
label_267100:
    // 0x267100: 0x11268  .word       0x00011268                   # mfsa        $v0 # 00010240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x267100u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_267104:
    // 0x267104: 0x8420  .word       0x00008420                   # add         $s0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267104u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_267108:
    // 0x267108: 0x0  nop
    ctx->pc = 0x267108u;
    // NOP
label_26710c:
    // 0x26710c: 0x0  nop
    ctx->pc = 0x26710cu;
    // NOP
label_267110:
    // 0x267110: 0x11279  .word       0x00011279                   # INVALID     $zero, $at, 0x1279 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267110u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x267110 raw=0x00011279"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267114:
    // 0x267114: 0x9180  sll         $s2, $zero, 6
    ctx->pc = 0x267114u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_267118:
    // 0x267118: 0x0  nop
    ctx->pc = 0x267118u;
    // NOP
label_26711c:
    // 0x26711c: 0x0  nop
    ctx->pc = 0x26711cu;
    // NOP
label_267120:
    // 0x267120: 0x1128c  .word       0x0001128C                   # syscall     74 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267120u;
    ctx->pc = 0x267124u;
runtime->handleSyscall(rdram, ctx, 0x44Au);
label_267124:
    // 0x267124: 0xaf40  sll         $s5, $zero, 29
    ctx->pc = 0x267124u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_267128:
    // 0x267128: 0x0  nop
    ctx->pc = 0x267128u;
    // NOP
label_26712c:
    // 0x26712c: 0x0  nop
    ctx->pc = 0x26712cu;
    // NOP
label_267130:
    // 0x267130: 0x112a2  .word       0x000112A2                   # neg         $v0, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267130u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_267134:
    // 0x267134: 0x9ce0  .word       0x00009CE0                   # add         $s3, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267134u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_267138:
    // 0x267138: 0x0  nop
    ctx->pc = 0x267138u;
    // NOP
label_26713c:
    // 0x26713c: 0x0  nop
    ctx->pc = 0x26713cu;
    // NOP
label_267140:
    // 0x267140: 0x112b6  tne         $zero, $at, 74
    ctx->pc = 0x267140u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267144:
    // 0x267144: 0xa6d0  .word       0x0000A6D0                   # mfhi        $s4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267144u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_267148:
    // 0x267148: 0x0  nop
    ctx->pc = 0x267148u;
    // NOP
label_26714c:
    // 0x26714c: 0x0  nop
    ctx->pc = 0x26714cu;
    // NOP
label_267150:
    // 0x267150: 0x112cb  .word       0x000112CB                   # movn        $v0, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267150u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_267154:
    // 0x267154: 0x8470  tge         $zero, $zero, 529
    ctx->pc = 0x267154u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267158:
    // 0x267158: 0x0  nop
    ctx->pc = 0x267158u;
    // NOP
label_26715c:
    // 0x26715c: 0x0  nop
    ctx->pc = 0x26715cu;
    // NOP
label_267160:
    // 0x267160: 0x112dc  .word       0x000112DC                   # dmult       $zero, $at # 000012C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x267160 raw=0x000112DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267164:
    // 0x267164: 0xa3a0  .word       0x0000A3A0                   # add         $s4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267164u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_267168:
    // 0x267168: 0x0  nop
    ctx->pc = 0x267168u;
    // NOP
label_26716c:
    // 0x26716c: 0x0  nop
    ctx->pc = 0x26716cu;
    // NOP
label_267170:
    // 0x267170: 0x112f1  tgeu        $zero, $at, 75
    ctx->pc = 0x267170u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267174:
    // 0x267174: 0x7e30  tge         $zero, $zero, 504
    ctx->pc = 0x267174u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267178:
    // 0x267178: 0x0  nop
    ctx->pc = 0x267178u;
    // NOP
label_26717c:
    // 0x26717c: 0x0  nop
    ctx->pc = 0x26717cu;
    // NOP
label_267180:
    // 0x267180: 0x11301  .word       0x00011301                   # INVALID     $zero, $at, 0x1301 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267180u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x267180 raw=0x00011301"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267184:
    // 0x267184: 0xa800  sll         $s5, $zero, 0
    ctx->pc = 0x267184u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_267188:
    // 0x267188: 0x0  nop
    ctx->pc = 0x267188u;
    // NOP
label_26718c:
    // 0x26718c: 0x0  nop
    ctx->pc = 0x26718cu;
    // NOP
label_267190:
    // 0x267190: 0x11316  .word       0x00011316                   # dsrlv       $v0, $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_267194:
    // 0x267194: 0x9600  sll         $s2, $zero, 24
    ctx->pc = 0x267194u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_267198:
    // 0x267198: 0x0  nop
    ctx->pc = 0x267198u;
    // NOP
label_26719c:
    // 0x26719c: 0x0  nop
    ctx->pc = 0x26719cu;
    // NOP
label_2671a0:
    // 0x2671a0: 0x11329  .word       0x00011329                   # mtsa        $zero # 00011300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2671a0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2671a4:
    // 0x2671a4: 0xbdd0  .word       0x0000BDD0                   # mfhi        $s7 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2671a4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_2671a8:
    // 0x2671a8: 0x0  nop
    ctx->pc = 0x2671a8u;
    // NOP
label_2671ac:
    // 0x2671ac: 0x0  nop
    ctx->pc = 0x2671acu;
    // NOP
label_2671b0:
    // 0x2671b0: 0x11341  .word       0x00011341                   # INVALID     $zero, $at, 0x1341 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2671b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2671B0 raw=0x00011341"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2671b4:
    // 0x2671b4: 0x9280  sll         $s2, $zero, 10
    ctx->pc = 0x2671b4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2671b8:
    // 0x2671b8: 0x0  nop
    ctx->pc = 0x2671b8u;
    // NOP
label_2671bc:
    // 0x2671bc: 0x0  nop
    ctx->pc = 0x2671bcu;
    // NOP
label_2671c0:
    // 0x2671c0: 0x11354  .word       0x00011354                   # dsllv       $v0, $at, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2671c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_2671c4:
    // 0x2671c4: 0x8540  sll         $s0, $zero, 21
    ctx->pc = 0x2671c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_2671c8:
    // 0x2671c8: 0x0  nop
    ctx->pc = 0x2671c8u;
    // NOP
label_2671cc:
    // 0x2671cc: 0x0  nop
    ctx->pc = 0x2671ccu;
    // NOP
label_2671d0:
    // 0x2671d0: 0x11365  .word       0x00011365                   # or          $v0, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2671d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_2671d4:
    // 0x2671d4: 0x9200  sll         $s2, $zero, 8
    ctx->pc = 0x2671d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_2671d8:
    // 0x2671d8: 0x0  nop
    ctx->pc = 0x2671d8u;
    // NOP
label_2671dc:
    // 0x2671dc: 0x0  nop
    ctx->pc = 0x2671dcu;
    // NOP
label_2671e0:
    // 0x2671e0: 0x11378  dsll        $v0, $at, 13
    ctx->pc = 0x2671e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << 13);
label_2671e4:
    // 0x2671e4: 0x7100  sll         $t6, $zero, 4
    ctx->pc = 0x2671e4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2671e8:
    // 0x2671e8: 0x0  nop
    ctx->pc = 0x2671e8u;
    // NOP
label_2671ec:
    // 0x2671ec: 0x0  nop
    ctx->pc = 0x2671ecu;
    // NOP
label_2671f0:
    // 0x2671f0: 0x11387  .word       0x00011387                   # srav        $v0, $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2671f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2671f4:
    // 0x2671f4: 0x7eb0  tge         $zero, $zero, 506
    ctx->pc = 0x2671f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2671f8:
    // 0x2671f8: 0x0  nop
    ctx->pc = 0x2671f8u;
    // NOP
label_2671fc:
    // 0x2671fc: 0x0  nop
    ctx->pc = 0x2671fcu;
    // NOP
label_267200:
    // 0x267200: 0x11397  .word       0x00011397                   # dsrav       $v0, $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267200u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_267204:
    // 0x267204: 0x3360  .word       0x00003360                   # add         $a2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267204u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_267208:
    // 0x267208: 0x0  nop
    ctx->pc = 0x267208u;
    // NOP
label_26720c:
    // 0x26720c: 0x0  nop
    ctx->pc = 0x26720cu;
    // NOP
label_267210:
    // 0x267210: 0x1139e  .word       0x0001139E                   # ddiv        $v0, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x267210 raw=0x0001139E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267214:
    // 0x267214: 0x4fc0  sll         $t1, $zero, 31
    ctx->pc = 0x267214u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_267218:
    // 0x267218: 0x0  nop
    ctx->pc = 0x267218u;
    // NOP
label_26721c:
    // 0x26721c: 0x0  nop
    ctx->pc = 0x26721cu;
    // NOP
label_267220:
    // 0x267220: 0x113a8  .word       0x000113A8                   # mfsa        $v0 # 00010380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x267220u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_267224:
    // 0x267224: 0x49a0  .word       0x000049A0                   # add         $t1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267224u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_267228:
    // 0x267228: 0x0  nop
    ctx->pc = 0x267228u;
    // NOP
label_26722c:
    // 0x26722c: 0x0  nop
    ctx->pc = 0x26722cu;
    // NOP
label_267230:
    // 0x267230: 0x113b2  tlt         $zero, $at, 78
    ctx->pc = 0x267230u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267234:
    // 0x267234: 0x3ee0  .word       0x00003EE0                   # add         $a3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267234u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_267238:
    // 0x267238: 0x0  nop
    ctx->pc = 0x267238u;
    // NOP
label_26723c:
    // 0x26723c: 0x0  nop
    ctx->pc = 0x26723cu;
    // NOP
label_267240:
    // 0x267240: 0x113ba  dsrl        $v0, $at, 14
    ctx->pc = 0x267240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> 14);
label_267244:
    // 0x267244: 0x4450  .word       0x00004450                   # mfhi        $t0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267244u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_267248:
    // 0x267248: 0x0  nop
    ctx->pc = 0x267248u;
    // NOP
label_26724c:
    // 0x26724c: 0x0  nop
    ctx->pc = 0x26724cu;
    // NOP
label_267250:
    // 0x267250: 0x113c3  sra         $v0, $at, 15
    ctx->pc = 0x267250u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 1), 15));
label_267254:
    // 0x267254: 0x4d00  sll         $t1, $zero, 20
    ctx->pc = 0x267254u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_267258:
    // 0x267258: 0x0  nop
    ctx->pc = 0x267258u;
    // NOP
label_26725c:
    // 0x26725c: 0x0  nop
    ctx->pc = 0x26725cu;
    // NOP
label_267260:
    // 0x267260: 0x113cd  break       1, 79
    ctx->pc = 0x267260u;
    runtime->handleBreak(rdram, ctx);
label_267264:
    // 0x267264: 0x5cb0  tge         $zero, $zero, 370
    ctx->pc = 0x267264u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267268:
    // 0x267268: 0x0  nop
    ctx->pc = 0x267268u;
    // NOP
label_26726c:
    // 0x26726c: 0x0  nop
    ctx->pc = 0x26726cu;
    // NOP
label_267270:
    // 0x267270: 0x113d9  .word       0x000113D9                   # multu       $zero, $at # 000013C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267270u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_267274:
    // 0x267274: 0x2fe0  .word       0x00002FE0                   # add         $a1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267274u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_267278:
    // 0x267278: 0x0  nop
    ctx->pc = 0x267278u;
    // NOP
label_26727c:
    // 0x26727c: 0x0  nop
    ctx->pc = 0x26727cu;
    // NOP
label_267280:
    // 0x267280: 0x113df  .word       0x000113DF                   # ddivu       $v0, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267280u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x267280 raw=0x000113DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267284:
    // 0x267284: 0x5b20  .word       0x00005B20                   # add         $t3, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_267288:
    // 0x267288: 0x0  nop
    ctx->pc = 0x267288u;
    // NOP
label_26728c:
    // 0x26728c: 0x0  nop
    ctx->pc = 0x26728cu;
    // NOP
label_267290:
    // 0x267290: 0x113eb  .word       0x000113EB                   # sltu        $v0, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_267294:
    // 0x267294: 0x4470  tge         $zero, $zero, 273
    ctx->pc = 0x267294u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267298:
    // 0x267298: 0x0  nop
    ctx->pc = 0x267298u;
    // NOP
label_26729c:
    // 0x26729c: 0x0  nop
    ctx->pc = 0x26729cu;
    // NOP
label_2672a0:
    // 0x2672a0: 0x113f4  teq         $zero, $at, 79
    ctx->pc = 0x2672a0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2672a4:
    // 0x2672a4: 0x44b0  tge         $zero, $zero, 274
    ctx->pc = 0x2672a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2672a8:
    // 0x2672a8: 0x0  nop
    ctx->pc = 0x2672a8u;
    // NOP
label_2672ac:
    // 0x2672ac: 0x0  nop
    ctx->pc = 0x2672acu;
    // NOP
label_2672b0:
    // 0x2672b0: 0x113fd  .word       0x000113FD                   # INVALID     $zero, $at, 0x13FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2672b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2672B0 raw=0x000113FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2672b4:
    // 0x2672b4: 0x4390  .word       0x00004390                   # mfhi        $t0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2672b4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2672b8:
    // 0x2672b8: 0x0  nop
    ctx->pc = 0x2672b8u;
    // NOP
label_2672bc:
    // 0x2672bc: 0x0  nop
    ctx->pc = 0x2672bcu;
    // NOP
label_2672c0:
    // 0x2672c0: 0x11406  .word       0x00011406                   # srlv        $v0, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2672c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2672c4:
    // 0x2672c4: 0x34b0  tge         $zero, $zero, 210
    ctx->pc = 0x2672c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2672c8:
    // 0x2672c8: 0x0  nop
    ctx->pc = 0x2672c8u;
    // NOP
label_2672cc:
    // 0x2672cc: 0x0  nop
    ctx->pc = 0x2672ccu;
    // NOP
label_2672d0:
    // 0x2672d0: 0x1140d  break       1, 80
    ctx->pc = 0x2672d0u;
    runtime->handleBreak(rdram, ctx);
label_2672d4:
    // 0x2672d4: 0x4470  tge         $zero, $zero, 273
    ctx->pc = 0x2672d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2672d8:
    // 0x2672d8: 0x0  nop
    ctx->pc = 0x2672d8u;
    // NOP
label_2672dc:
    // 0x2672dc: 0x0  nop
    ctx->pc = 0x2672dcu;
    // NOP
label_2672e0:
    // 0x2672e0: 0x11416  .word       0x00011416                   # dsrlv       $v0, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2672e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2672e4:
    // 0x2672e4: 0x3190  .word       0x00003190                   # mfhi        $a2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2672e4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2672e8:
    // 0x2672e8: 0x0  nop
    ctx->pc = 0x2672e8u;
    // NOP
label_2672ec:
    // 0x2672ec: 0x0  nop
    ctx->pc = 0x2672ecu;
    // NOP
label_2672f0:
    // 0x2672f0: 0x1141d  .word       0x0001141D                   # dmultu      $zero, $at # 00001400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2672f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2672F0 raw=0x0001141D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2672f4:
    // 0x2672f4: 0x2bd0  .word       0x00002BD0                   # mfhi        $a1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2672f4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2672f8:
    // 0x2672f8: 0x0  nop
    ctx->pc = 0x2672f8u;
    // NOP
label_2672fc:
    // 0x2672fc: 0x0  nop
    ctx->pc = 0x2672fcu;
    // NOP
label_267300:
    // 0x267300: 0x11423  .word       0x00011423                   # negu        $v0, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267300u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_267304:
    // 0x267304: 0x25d0  .word       0x000025D0                   # mfhi        $a0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267304u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_267308:
    // 0x267308: 0x0  nop
    ctx->pc = 0x267308u;
    // NOP
label_26730c:
    // 0x26730c: 0x0  nop
    ctx->pc = 0x26730cu;
    // NOP
label_267310:
    // 0x267310: 0x11428  .word       0x00011428                   # mfsa        $v0 # 00010400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x267310u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_267314:
    // 0x267314: 0x7e90  .word       0x00007E90                   # mfhi        $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267314u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_267318:
    // 0x267318: 0x0  nop
    ctx->pc = 0x267318u;
    // NOP
label_26731c:
    // 0x26731c: 0x0  nop
    ctx->pc = 0x26731cu;
    // NOP
label_267320:
    // 0x267320: 0x11438  dsll        $v0, $at, 16
    ctx->pc = 0x267320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << 16);
label_267324:
    // 0x267324: 0x3690  .word       0x00003690                   # mfhi        $a2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267324u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_267328:
    // 0x267328: 0x0  nop
    ctx->pc = 0x267328u;
    // NOP
label_26732c:
    // 0x26732c: 0x0  nop
    ctx->pc = 0x26732cu;
    // NOP
label_267330:
    // 0x267330: 0x1143f  dsra32      $v0, $at, 16
    ctx->pc = 0x267330u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 1) >> (32 + 16));
label_267334:
    // 0x267334: 0x2a50  .word       0x00002A50                   # mfhi        $a1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267334u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_267338:
    // 0x267338: 0x0  nop
    ctx->pc = 0x267338u;
    // NOP
label_26733c:
    // 0x26733c: 0x0  nop
    ctx->pc = 0x26733cu;
    // NOP
label_267340:
    // 0x267340: 0x11445  .word       0x00011445                   # INVALID     $zero, $at, 0x1445 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x267340 raw=0x00011445"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267344:
    // 0x267344: 0x7280  sll         $t6, $zero, 10
    ctx->pc = 0x267344u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_267348:
    // 0x267348: 0x0  nop
    ctx->pc = 0x267348u;
    // NOP
label_26734c:
    // 0x26734c: 0x0  nop
    ctx->pc = 0x26734cu;
    // NOP
label_267350:
    // 0x267350: 0x11454  .word       0x00011454                   # dsllv       $v0, $at, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_267354:
    // 0x267354: 0x40b0  tge         $zero, $zero, 258
    ctx->pc = 0x267354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267358:
    // 0x267358: 0x0  nop
    ctx->pc = 0x267358u;
    // NOP
label_26735c:
    // 0x26735c: 0x0  nop
    ctx->pc = 0x26735cu;
    // NOP
label_267360:
    // 0x267360: 0x1145d  .word       0x0001145D                   # dmultu      $zero, $at # 00001440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x267360 raw=0x0001145D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267364:
    // 0x267364: 0x6630  tge         $zero, $zero, 408
    ctx->pc = 0x267364u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267368:
    // 0x267368: 0x0  nop
    ctx->pc = 0x267368u;
    // NOP
label_26736c:
    // 0x26736c: 0x0  nop
    ctx->pc = 0x26736cu;
    // NOP
label_267370:
    // 0x267370: 0x1146a  .word       0x0001146A                   # slt         $v0, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_267374:
    // 0x267374: 0xa480  sll         $s4, $zero, 18
    ctx->pc = 0x267374u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_267378:
    // 0x267378: 0x0  nop
    ctx->pc = 0x267378u;
    // NOP
label_26737c:
    // 0x26737c: 0x0  nop
    ctx->pc = 0x26737cu;
    // NOP
label_267380:
    // 0x267380: 0x1147f  dsra32      $v0, $at, 17
    ctx->pc = 0x267380u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 1) >> (32 + 17));
label_267384:
    // 0x267384: 0x36b0  tge         $zero, $zero, 218
    ctx->pc = 0x267384u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267388:
    // 0x267388: 0x0  nop
    ctx->pc = 0x267388u;
    // NOP
label_26738c:
    // 0x26738c: 0x0  nop
    ctx->pc = 0x26738cu;
    // NOP
label_267390:
    // 0x267390: 0x11486  .word       0x00011486                   # srlv        $v0, $at, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267390u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267394:
    // 0x267394: 0x3b30  tge         $zero, $zero, 236
    ctx->pc = 0x267394u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267398:
    // 0x267398: 0x0  nop
    ctx->pc = 0x267398u;
    // NOP
label_26739c:
    // 0x26739c: 0x0  nop
    ctx->pc = 0x26739cu;
    // NOP
label_2673a0:
    // 0x2673a0: 0x1148e  .word       0x0001148E                   # INVALID     $zero, $at, 0x148E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2673a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2673A0 raw=0x0001148E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2673a4:
    // 0x2673a4: 0x4610  .word       0x00004610                   # mfhi        $t0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2673a4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2673a8:
    // 0x2673a8: 0x0  nop
    ctx->pc = 0x2673a8u;
    // NOP
label_2673ac:
    // 0x2673ac: 0x0  nop
    ctx->pc = 0x2673acu;
    // NOP
label_2673b0:
    // 0x2673b0: 0x11497  .word       0x00011497                   # dsrav       $v0, $at, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2673b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2673b4:
    // 0x2673b4: 0x7610  .word       0x00007610                   # mfhi        $t6 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2673b4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2673b8:
    // 0x2673b8: 0x0  nop
    ctx->pc = 0x2673b8u;
    // NOP
label_2673bc:
    // 0x2673bc: 0x0  nop
    ctx->pc = 0x2673bcu;
    // NOP
label_2673c0:
    // 0x2673c0: 0x114a6  .word       0x000114A6                   # xor         $v0, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2673c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_2673c4:
    // 0x2673c4: 0x72a0  .word       0x000072A0                   # add         $t6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2673c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2673c8:
    // 0x2673c8: 0x0  nop
    ctx->pc = 0x2673c8u;
    // NOP
label_2673cc:
    // 0x2673cc: 0x0  nop
    ctx->pc = 0x2673ccu;
    // NOP
label_2673d0:
    // 0x2673d0: 0x114b5  .word       0x000114B5                   # INVALID     $zero, $at, 0x14B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2673d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2673D0 raw=0x000114B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2673d4:
    // 0x2673d4: 0x40c0  sll         $t0, $zero, 3
    ctx->pc = 0x2673d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2673d8:
    // 0x2673d8: 0x0  nop
    ctx->pc = 0x2673d8u;
    // NOP
label_2673dc:
    // 0x2673dc: 0x0  nop
    ctx->pc = 0x2673dcu;
    // NOP
label_2673e0:
    // 0x2673e0: 0x114be  dsrl32      $v0, $at, 18
    ctx->pc = 0x2673e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (32 + 18));
label_2673e4:
    // 0x2673e4: 0x4ec0  sll         $t1, $zero, 27
    ctx->pc = 0x2673e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2673e8:
    // 0x2673e8: 0x0  nop
    ctx->pc = 0x2673e8u;
    // NOP
label_2673ec:
    // 0x2673ec: 0x0  nop
    ctx->pc = 0x2673ecu;
    // NOP
label_2673f0:
    // 0x2673f0: 0x114c8  .word       0x000114C8                   # jr          $zero # 000114C0 <InstrIdType: CPU_SPECIAL>
label_2673f4:
    if (ctx->pc == 0x2673F4u) {
        ctx->pc = 0x2673F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2673F0u;
        // 0x2673f4: 0x6550  .word       0x00006550                   # mfhi        $t4 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2673F8u;
        goto label_2673f8;
    }
    ctx->pc = 0x2673F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2673F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2673F0u;
        // 0x2673f4: 0x6550  .word       0x00006550                   # mfhi        $t4 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2673F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2673F8u;
label_2673f8:
    // 0x2673f8: 0x0  nop
    ctx->pc = 0x2673f8u;
    // NOP
label_2673fc:
    // 0x2673fc: 0x0  nop
    ctx->pc = 0x2673fcu;
    // NOP
label_267400:
    // 0x267400: 0x114d5  .word       0x000114D5                   # INVALID     $zero, $at, 0x14D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267400u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x267400 raw=0x000114D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267404:
    // 0x267404: 0x4210  .word       0x00004210                   # mfhi        $t0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267404u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_267408:
    // 0x267408: 0x0  nop
    ctx->pc = 0x267408u;
    // NOP
label_26740c:
    // 0x26740c: 0x0  nop
    ctx->pc = 0x26740cu;
    // NOP
label_267410:
    // 0x267410: 0x114de  .word       0x000114DE                   # ddiv        $v0, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x267410 raw=0x000114DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267414:
    // 0x267414: 0x44f0  tge         $zero, $zero, 275
    ctx->pc = 0x267414u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267418:
    // 0x267418: 0x0  nop
    ctx->pc = 0x267418u;
    // NOP
label_26741c:
    // 0x26741c: 0x0  nop
    ctx->pc = 0x26741cu;
    // NOP
label_267420:
    // 0x267420: 0x114e7  .word       0x000114E7                   # nor         $v0, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267420u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_267424:
    // 0x267424: 0x2fd0  .word       0x00002FD0                   # mfhi        $a1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267424u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_267428:
    // 0x267428: 0x0  nop
    ctx->pc = 0x267428u;
    // NOP
label_26742c:
    // 0x26742c: 0x0  nop
    ctx->pc = 0x26742cu;
    // NOP
label_267430:
    // 0x267430: 0x114ed  .word       0x000114ED                   # daddu       $v0, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_267434:
    // 0x267434: 0x4280  sll         $t0, $zero, 10
    ctx->pc = 0x267434u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_267438:
    // 0x267438: 0x0  nop
    ctx->pc = 0x267438u;
    // NOP
label_26743c:
    // 0x26743c: 0x0  nop
    ctx->pc = 0x26743cu;
    // NOP
label_267440:
    // 0x267440: 0x114f6  tne         $zero, $at, 83
    ctx->pc = 0x267440u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267444:
    // 0x267444: 0x3700  sll         $a2, $zero, 28
    ctx->pc = 0x267444u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_267448:
    // 0x267448: 0x0  nop
    ctx->pc = 0x267448u;
    // NOP
label_26744c:
    // 0x26744c: 0x0  nop
    ctx->pc = 0x26744cu;
    // NOP
label_267450:
    // 0x267450: 0x114fd  .word       0x000114FD                   # INVALID     $zero, $at, 0x14FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267450u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x267450 raw=0x000114FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267454:
    // 0x267454: 0x4890  .word       0x00004890                   # mfhi        $t1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267454u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_267458:
    // 0x267458: 0x0  nop
    ctx->pc = 0x267458u;
    // NOP
label_26745c:
    // 0x26745c: 0x0  nop
    ctx->pc = 0x26745cu;
    // NOP
label_267460:
    // 0x267460: 0x11507  .word       0x00011507                   # srav        $v0, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267460u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267464:
    // 0x267464: 0x4bc0  sll         $t1, $zero, 15
    ctx->pc = 0x267464u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_267468:
    // 0x267468: 0x0  nop
    ctx->pc = 0x267468u;
    // NOP
label_26746c:
    // 0x26746c: 0x0  nop
    ctx->pc = 0x26746cu;
    // NOP
label_267470:
    // 0x267470: 0x11511  .word       0x00011511                   # mthi        $zero # 00011500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267470u;
    ctx->hi = GPR_U64(ctx, 0);
label_267474:
    // 0x267474: 0x67d0  .word       0x000067D0                   # mfhi        $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267474u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_267478:
    // 0x267478: 0x0  nop
    ctx->pc = 0x267478u;
    // NOP
label_26747c:
    // 0x26747c: 0x0  nop
    ctx->pc = 0x26747cu;
    // NOP
label_267480:
    // 0x267480: 0x1151e  .word       0x0001151E                   # ddiv        $v0, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x267480 raw=0x0001151E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267484:
    // 0x267484: 0x44f0  tge         $zero, $zero, 275
    ctx->pc = 0x267484u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267488:
    // 0x267488: 0x0  nop
    ctx->pc = 0x267488u;
    // NOP
label_26748c:
    // 0x26748c: 0x0  nop
    ctx->pc = 0x26748cu;
    // NOP
label_267490:
    // 0x267490: 0x11527  .word       0x00011527                   # nor         $v0, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267490u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_267494:
    // 0x267494: 0x7d70  tge         $zero, $zero, 501
    ctx->pc = 0x267494u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267498:
    // 0x267498: 0x0  nop
    ctx->pc = 0x267498u;
    // NOP
label_26749c:
    // 0x26749c: 0x0  nop
    ctx->pc = 0x26749cu;
    // NOP
label_2674a0:
    // 0x2674a0: 0x11537  .word       0x00011537                   # INVALID     $zero, $at, 0x1537 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2674a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2674A0 raw=0x00011537"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2674a4:
    // 0x2674a4: 0x7650  .word       0x00007650                   # mfhi        $t6 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2674a4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2674a8:
    // 0x2674a8: 0x0  nop
    ctx->pc = 0x2674a8u;
    // NOP
label_2674ac:
    // 0x2674ac: 0x0  nop
    ctx->pc = 0x2674acu;
    // NOP
label_2674b0:
    // 0x2674b0: 0x11546  .word       0x00011546                   # srlv        $v0, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2674b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2674b4:
    // 0x2674b4: 0x53f0  tge         $zero, $zero, 335
    ctx->pc = 0x2674b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2674b8:
    // 0x2674b8: 0x0  nop
    ctx->pc = 0x2674b8u;
    // NOP
label_2674bc:
    // 0x2674bc: 0x0  nop
    ctx->pc = 0x2674bcu;
    // NOP
label_2674c0:
    // 0x2674c0: 0x11551  .word       0x00011551                   # mthi        $zero # 00011540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2674c0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2674c4:
    // 0x2674c4: 0x7d00  sll         $t7, $zero, 20
    ctx->pc = 0x2674c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2674c8:
    // 0x2674c8: 0x0  nop
    ctx->pc = 0x2674c8u;
    // NOP
label_2674cc:
    // 0x2674cc: 0x0  nop
    ctx->pc = 0x2674ccu;
    // NOP
label_2674d0:
    // 0x2674d0: 0x11561  .word       0x00011561                   # addu        $v0, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2674d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2674d4:
    // 0x2674d4: 0x6940  sll         $t5, $zero, 5
    ctx->pc = 0x2674d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2674d8:
    // 0x2674d8: 0x0  nop
    ctx->pc = 0x2674d8u;
    // NOP
label_2674dc:
    // 0x2674dc: 0x0  nop
    ctx->pc = 0x2674dcu;
    // NOP
label_2674e0:
    // 0x2674e0: 0x1156f  .word       0x0001156F                   # dsubu       $v0, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2674e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_2674e4:
    // 0x2674e4: 0x35e0  .word       0x000035E0                   # add         $a2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2674e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2674e8:
    // 0x2674e8: 0x0  nop
    ctx->pc = 0x2674e8u;
    // NOP
label_2674ec:
    // 0x2674ec: 0x0  nop
    ctx->pc = 0x2674ecu;
    // NOP
label_2674f0:
    // 0x2674f0: 0x11576  tne         $zero, $at, 85
    ctx->pc = 0x2674f0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2674f4:
    // 0x2674f4: 0x9c40  sll         $s3, $zero, 17
    ctx->pc = 0x2674f4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2674f8:
    // 0x2674f8: 0x0  nop
    ctx->pc = 0x2674f8u;
    // NOP
label_2674fc:
    // 0x2674fc: 0x0  nop
    ctx->pc = 0x2674fcu;
    // NOP
label_267500:
    // 0x267500: 0x1158a  .word       0x0001158A                   # movz        $v0, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267500u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_267504:
    // 0x267504: 0x78c0  sll         $t7, $zero, 3
    ctx->pc = 0x267504u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_267508:
    // 0x267508: 0x0  nop
    ctx->pc = 0x267508u;
    // NOP
label_26750c:
    // 0x26750c: 0x0  nop
    ctx->pc = 0x26750cu;
    // NOP
label_267510:
    // 0x267510: 0x1159a  .word       0x0001159A                   # div         $v0, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267510u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_267514:
    // 0x267514: 0x8810  mfhi        $s1
    ctx->pc = 0x267514u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_267518:
    // 0x267518: 0x0  nop
    ctx->pc = 0x267518u;
    // NOP
label_26751c:
    // 0x26751c: 0x0  nop
    ctx->pc = 0x26751cu;
    // NOP
label_267520:
    // 0x267520: 0x115ac  .word       0x000115AC                   # dadd        $v0, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267520u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_267524:
    // 0x267524: 0x6b00  sll         $t5, $zero, 12
    ctx->pc = 0x267524u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_267528:
    // 0x267528: 0x0  nop
    ctx->pc = 0x267528u;
    // NOP
label_26752c:
    // 0x26752c: 0x0  nop
    ctx->pc = 0x26752cu;
    // NOP
label_267530:
    // 0x267530: 0x115ba  dsrl        $v0, $at, 22
    ctx->pc = 0x267530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> 22);
label_267534:
    // 0x267534: 0x5340  sll         $t2, $zero, 13
    ctx->pc = 0x267534u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_267538:
    // 0x267538: 0x0  nop
    ctx->pc = 0x267538u;
    // NOP
label_26753c:
    // 0x26753c: 0x0  nop
    ctx->pc = 0x26753cu;
    // NOP
label_267540:
    // 0x267540: 0x115c5  .word       0x000115C5                   # INVALID     $zero, $at, 0x15C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267540u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x267540 raw=0x000115C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267544:
    // 0x267544: 0x5c20  .word       0x00005C20                   # add         $t3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_267548:
    // 0x267548: 0x0  nop
    ctx->pc = 0x267548u;
    // NOP
label_26754c:
    // 0x26754c: 0x0  nop
    ctx->pc = 0x26754cu;
    // NOP
label_267550:
    // 0x267550: 0x115d1  .word       0x000115D1                   # mthi        $zero # 000115C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267550u;
    ctx->hi = GPR_U64(ctx, 0);
label_267554:
    // 0x267554: 0x5a90  .word       0x00005A90                   # mfhi        $t3 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267554u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_267558:
    // 0x267558: 0x0  nop
    ctx->pc = 0x267558u;
    // NOP
label_26755c:
    // 0x26755c: 0x0  nop
    ctx->pc = 0x26755cu;
    // NOP
label_267560:
    // 0x267560: 0x115dd  .word       0x000115DD                   # dmultu      $zero, $at # 000015C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267560u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x267560 raw=0x000115DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267564:
    // 0x267564: 0x7190  .word       0x00007190                   # mfhi        $t6 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267564u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_267568:
    // 0x267568: 0x0  nop
    ctx->pc = 0x267568u;
    // NOP
label_26756c:
    // 0x26756c: 0x0  nop
    ctx->pc = 0x26756cu;
    // NOP
label_267570:
    // 0x267570: 0x115ec  .word       0x000115EC                   # dadd        $v0, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267570u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_267574:
    // 0x267574: 0x7940  sll         $t7, $zero, 5
    ctx->pc = 0x267574u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_267578:
    // 0x267578: 0x0  nop
    ctx->pc = 0x267578u;
    // NOP
label_26757c:
    // 0x26757c: 0x0  nop
    ctx->pc = 0x26757cu;
    // NOP
label_267580:
    // 0x267580: 0x115fc  dsll32      $v0, $at, 23
    ctx->pc = 0x267580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << (32 + 23));
label_267584:
    // 0x267584: 0x96a0  .word       0x000096A0                   # add         $s2, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267584u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_267588:
    // 0x267588: 0x0  nop
    ctx->pc = 0x267588u;
    // NOP
label_26758c:
    // 0x26758c: 0x0  nop
    ctx->pc = 0x26758cu;
    // NOP
label_267590:
    // 0x267590: 0x1160f  .word       0x0001160F                   # sync.p # 00011000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267590u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_267594:
    // 0x267594: 0x6e70  tge         $zero, $zero, 441
    ctx->pc = 0x267594u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267598:
    // 0x267598: 0x0  nop
    ctx->pc = 0x267598u;
    // NOP
label_26759c:
    // 0x26759c: 0x0  nop
    ctx->pc = 0x26759cu;
    // NOP
label_2675a0:
    // 0x2675a0: 0x1161d  .word       0x0001161D                   # dmultu      $zero, $at # 00001600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2675a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2675A0 raw=0x0001161D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2675a4:
    // 0x2675a4: 0x98e0  .word       0x000098E0                   # add         $s3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2675a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2675a8:
    // 0x2675a8: 0x0  nop
    ctx->pc = 0x2675a8u;
    // NOP
label_2675ac:
    // 0x2675ac: 0x0  nop
    ctx->pc = 0x2675acu;
    // NOP
label_2675b0:
    // 0x2675b0: 0x11631  tgeu        $zero, $at, 88
    ctx->pc = 0x2675b0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2675b4:
    // 0x2675b4: 0x6c80  sll         $t5, $zero, 18
    ctx->pc = 0x2675b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2675b8:
    // 0x2675b8: 0x0  nop
    ctx->pc = 0x2675b8u;
    // NOP
label_2675bc:
    // 0x2675bc: 0x0  nop
    ctx->pc = 0x2675bcu;
    // NOP
label_2675c0:
    // 0x2675c0: 0x1163f  dsra32      $v0, $at, 24
    ctx->pc = 0x2675c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 1) >> (32 + 24));
label_2675c4:
    // 0x2675c4: 0x82a0  .word       0x000082A0                   # add         $s0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2675c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2675c8:
    // 0x2675c8: 0x0  nop
    ctx->pc = 0x2675c8u;
    // NOP
label_2675cc:
    // 0x2675cc: 0x0  nop
    ctx->pc = 0x2675ccu;
    // NOP
label_2675d0:
    // 0x2675d0: 0x11650  .word       0x00011650                   # mfhi        $v0 # 00010640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2675d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2675d4:
    // 0x2675d4: 0x8e80  sll         $s1, $zero, 26
    ctx->pc = 0x2675d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_2675d8:
    // 0x2675d8: 0x0  nop
    ctx->pc = 0x2675d8u;
    // NOP
label_2675dc:
    // 0x2675dc: 0x0  nop
    ctx->pc = 0x2675dcu;
    // NOP
label_2675e0:
    // 0x2675e0: 0x11662  .word       0x00011662                   # neg         $v0, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2675e0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_2675e4:
    // 0x2675e4: 0x74f0  tge         $zero, $zero, 467
    ctx->pc = 0x2675e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2675e8:
    // 0x2675e8: 0x0  nop
    ctx->pc = 0x2675e8u;
    // NOP
label_2675ec:
    // 0x2675ec: 0x0  nop
    ctx->pc = 0x2675ecu;
    // NOP
label_2675f0:
    // 0x2675f0: 0x11671  tgeu        $zero, $at, 89
    ctx->pc = 0x2675f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2675f4:
    // 0x2675f4: 0x7f30  tge         $zero, $zero, 508
    ctx->pc = 0x2675f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2675f8:
    // 0x2675f8: 0x0  nop
    ctx->pc = 0x2675f8u;
    // NOP
label_2675fc:
    // 0x2675fc: 0x0  nop
    ctx->pc = 0x2675fcu;
    // NOP
label_267600:
    // 0x267600: 0x11681  .word       0x00011681                   # INVALID     $zero, $at, 0x1681 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x267600 raw=0x00011681"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267604:
    // 0x267604: 0x7680  sll         $t6, $zero, 26
    ctx->pc = 0x267604u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_267608:
    // 0x267608: 0x0  nop
    ctx->pc = 0x267608u;
    // NOP
label_26760c:
    // 0x26760c: 0x0  nop
    ctx->pc = 0x26760cu;
    // NOP
label_267610:
    // 0x267610: 0x11690  .word       0x00011690                   # mfhi        $v0 # 00010680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267610u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_267614:
    // 0x267614: 0x7d60  .word       0x00007D60                   # add         $t7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267614u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_267618:
    // 0x267618: 0x0  nop
    ctx->pc = 0x267618u;
    // NOP
label_26761c:
    // 0x26761c: 0x0  nop
    ctx->pc = 0x26761cu;
    // NOP
label_267620:
    // 0x267620: 0x116a0  .word       0x000116A0                   # add         $v0, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267620u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_267624:
    // 0x267624: 0x9ce0  .word       0x00009CE0                   # add         $s3, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_267628:
    // 0x267628: 0x0  nop
    ctx->pc = 0x267628u;
    // NOP
label_26762c:
    // 0x26762c: 0x0  nop
    ctx->pc = 0x26762cu;
    // NOP
label_267630:
    // 0x267630: 0x116b4  teq         $zero, $at, 90
    ctx->pc = 0x267630u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267634:
    // 0x267634: 0x7dc0  sll         $t7, $zero, 23
    ctx->pc = 0x267634u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_267638:
    // 0x267638: 0x0  nop
    ctx->pc = 0x267638u;
    // NOP
label_26763c:
    // 0x26763c: 0x0  nop
    ctx->pc = 0x26763cu;
    // NOP
label_267640:
    // 0x267640: 0x116c4  .word       0x000116C4                   # sllv        $v0, $at, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267644:
    // 0x267644: 0x7290  .word       0x00007290                   # mfhi        $t6 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267644u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_267648:
    // 0x267648: 0x0  nop
    ctx->pc = 0x267648u;
    // NOP
label_26764c:
    // 0x26764c: 0x0  nop
    ctx->pc = 0x26764cu;
    // NOP
label_267650:
    // 0x267650: 0x116d3  .word       0x000116D3                   # mtlo        $zero # 000116C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267650u;
    ctx->lo = GPR_U64(ctx, 0);
label_267654:
    // 0x267654: 0x7dd0  .word       0x00007DD0                   # mfhi        $t7 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267654u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_267658:
    // 0x267658: 0x0  nop
    ctx->pc = 0x267658u;
    // NOP
label_26765c:
    // 0x26765c: 0x0  nop
    ctx->pc = 0x26765cu;
    // NOP
label_267660:
    // 0x267660: 0x116e3  .word       0x000116E3                   # negu        $v0, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267660u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_267664:
    // 0x267664: 0x96c0  sll         $s2, $zero, 27
    ctx->pc = 0x267664u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_267668:
    // 0x267668: 0x0  nop
    ctx->pc = 0x267668u;
    // NOP
label_26766c:
    // 0x26766c: 0x0  nop
    ctx->pc = 0x26766cu;
    // NOP
label_267670:
    // 0x267670: 0x116f6  tne         $zero, $at, 91
    ctx->pc = 0x267670u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267674:
    // 0x267674: 0x5b50  .word       0x00005B50                   # mfhi        $t3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267674u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_267678:
    // 0x267678: 0x0  nop
    ctx->pc = 0x267678u;
    // NOP
label_26767c:
    // 0x26767c: 0x0  nop
    ctx->pc = 0x26767cu;
    // NOP
label_267680:
    // 0x267680: 0x11702  srl         $v0, $at, 28
    ctx->pc = 0x267680u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 1), 28));
label_267684:
    // 0x267684: 0x8100  sll         $s0, $zero, 4
    ctx->pc = 0x267684u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_267688:
    // 0x267688: 0x0  nop
    ctx->pc = 0x267688u;
    // NOP
label_26768c:
    // 0x26768c: 0x0  nop
    ctx->pc = 0x26768cu;
    // NOP
label_267690:
    // 0x267690: 0x11713  .word       0x00011713                   # mtlo        $zero # 00011700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267690u;
    ctx->lo = GPR_U64(ctx, 0);
label_267694:
    // 0x267694: 0x67a0  .word       0x000067A0                   # add         $t4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267694u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_267698:
    // 0x267698: 0x0  nop
    ctx->pc = 0x267698u;
    // NOP
label_26769c:
    // 0x26769c: 0x0  nop
    ctx->pc = 0x26769cu;
    // NOP
label_2676a0:
    // 0x2676a0: 0x11720  .word       0x00011720                   # add         $v0, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2676a4:
    // 0x2676a4: 0x68e0  .word       0x000068E0                   # add         $t5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2676a8:
    // 0x2676a8: 0x0  nop
    ctx->pc = 0x2676a8u;
    // NOP
label_2676ac:
    // 0x2676ac: 0x0  nop
    ctx->pc = 0x2676acu;
    // NOP
label_2676b0:
    // 0x2676b0: 0x1172e  .word       0x0001172E                   # dsub        $v0, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_2676b4:
    // 0x2676b4: 0x5bd0  .word       0x00005BD0                   # mfhi        $t3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676b4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2676b8:
    // 0x2676b8: 0x0  nop
    ctx->pc = 0x2676b8u;
    // NOP
label_2676bc:
    // 0x2676bc: 0x0  nop
    ctx->pc = 0x2676bcu;
    // NOP
label_2676c0:
    // 0x2676c0: 0x1173a  dsrl        $v0, $at, 28
    ctx->pc = 0x2676c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> 28);
label_2676c4:
    // 0x2676c4: 0x7ff0  tge         $zero, $zero, 511
    ctx->pc = 0x2676c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2676c8:
    // 0x2676c8: 0x0  nop
    ctx->pc = 0x2676c8u;
    // NOP
label_2676cc:
    // 0x2676cc: 0x0  nop
    ctx->pc = 0x2676ccu;
    // NOP
label_2676d0:
    // 0x2676d0: 0x1174a  .word       0x0001174A                   # movz        $v0, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676d0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2676d4:
    // 0x2676d4: 0x6f80  sll         $t5, $zero, 30
    ctx->pc = 0x2676d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_2676d8:
    // 0x2676d8: 0x0  nop
    ctx->pc = 0x2676d8u;
    // NOP
label_2676dc:
    // 0x2676dc: 0x0  nop
    ctx->pc = 0x2676dcu;
    // NOP
label_2676e0:
    // 0x2676e0: 0x11758  .word       0x00011758                   # mult        $v0, $zero, $at # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2676e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2676e4:
    // 0x2676e4: 0x74f0  tge         $zero, $zero, 467
    ctx->pc = 0x2676e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2676e8:
    // 0x2676e8: 0x0  nop
    ctx->pc = 0x2676e8u;
    // NOP
label_2676ec:
    // 0x2676ec: 0x0  nop
    ctx->pc = 0x2676ecu;
    // NOP
label_2676f0:
    // 0x2676f0: 0x11767  .word       0x00011767                   # nor         $v0, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676f0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_2676f4:
    // 0x2676f4: 0x80a0  .word       0x000080A0                   # add         $s0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2676f8:
    // 0x2676f8: 0x0  nop
    ctx->pc = 0x2676f8u;
    // NOP
label_2676fc:
    // 0x2676fc: 0x0  nop
    ctx->pc = 0x2676fcu;
    // NOP
label_267700:
    // 0x267700: 0x11778  dsll        $v0, $at, 29
    ctx->pc = 0x267700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << 29);
label_267704:
    // 0x267704: 0x59c0  sll         $t3, $zero, 7
    ctx->pc = 0x267704u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_267708:
    // 0x267708: 0x0  nop
    ctx->pc = 0x267708u;
    // NOP
label_26770c:
    // 0x26770c: 0x0  nop
    ctx->pc = 0x26770cu;
    // NOP
label_267710:
    // 0x267710: 0x11784  .word       0x00011784                   # sllv        $v0, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267714:
    // 0x267714: 0x3e90  .word       0x00003E90                   # mfhi        $a3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267714u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_267718:
    // 0x267718: 0x0  nop
    ctx->pc = 0x267718u;
    // NOP
label_26771c:
    // 0x26771c: 0x0  nop
    ctx->pc = 0x26771cu;
    // NOP
label_267720:
    // 0x267720: 0x1178c  .word       0x0001178C                   # syscall     94 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267720u;
    ctx->pc = 0x267724u;
runtime->handleSyscall(rdram, ctx, 0x45Eu);
label_267724:
    // 0x267724: 0x9260  .word       0x00009260                   # add         $s2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267724u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_267728:
    // 0x267728: 0x0  nop
    ctx->pc = 0x267728u;
    // NOP
label_26772c:
    // 0x26772c: 0x0  nop
    ctx->pc = 0x26772cu;
    // NOP
label_267730:
    // 0x267730: 0x1179f  .word       0x0001179F                   # ddivu       $v0, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267730u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x267730 raw=0x0001179F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267734:
    // 0x267734: 0xab70  tge         $zero, $zero, 685
    ctx->pc = 0x267734u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267738:
    // 0x267738: 0x0  nop
    ctx->pc = 0x267738u;
    // NOP
label_26773c:
    // 0x26773c: 0x0  nop
    ctx->pc = 0x26773cu;
    // NOP
label_267740:
    // 0x267740: 0x117b5  .word       0x000117B5                   # INVALID     $zero, $at, 0x17B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267740u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x267740 raw=0x000117B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267744:
    // 0x267744: 0x7600  sll         $t6, $zero, 24
    ctx->pc = 0x267744u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_267748:
    // 0x267748: 0x0  nop
    ctx->pc = 0x267748u;
    // NOP
label_26774c:
    // 0x26774c: 0x0  nop
    ctx->pc = 0x26774cu;
    // NOP
label_267750:
    // 0x267750: 0x117c4  .word       0x000117C4                   # sllv        $v0, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267754:
    // 0x267754: 0x9bd0  .word       0x00009BD0                   # mfhi        $s3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267754u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_267758:
    // 0x267758: 0x0  nop
    ctx->pc = 0x267758u;
    // NOP
label_26775c:
    // 0x26775c: 0x0  nop
    ctx->pc = 0x26775cu;
    // NOP
label_267760:
    // 0x267760: 0x117d8  .word       0x000117D8                   # mult        $v0, $zero, $at # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x267760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_267764:
    // 0x267764: 0x97f0  tge         $zero, $zero, 607
    ctx->pc = 0x267764u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267768:
    // 0x267768: 0x0  nop
    ctx->pc = 0x267768u;
    // NOP
label_26776c:
    // 0x26776c: 0x0  nop
    ctx->pc = 0x26776cu;
    // NOP
label_267770:
    // 0x267770: 0x117eb  .word       0x000117EB                   # sltu        $v0, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_267774:
    // 0x267774: 0x9790  .word       0x00009790                   # mfhi        $s2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267774u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_267778:
    // 0x267778: 0x0  nop
    ctx->pc = 0x267778u;
    // NOP
label_26777c:
    // 0x26777c: 0x0  nop
    ctx->pc = 0x26777cu;
    // NOP
label_267780:
    // 0x267780: 0x117fe  dsrl32      $v0, $at, 31
    ctx->pc = 0x267780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (32 + 31));
label_267784:
    // 0x267784: 0xf270  tge         $zero, $zero, 969
    ctx->pc = 0x267784u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x267788u;
    return;
}
