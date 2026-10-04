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


void FUN_0019b850_part342(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x242060u: goto label_242060;
        case 0x242064u: goto label_242064;
        case 0x242068u: goto label_242068;
        case 0x24206cu: goto label_24206c;
        case 0x242070u: goto label_242070;
        case 0x242074u: goto label_242074;
        case 0x242078u: goto label_242078;
        case 0x24207cu: goto label_24207c;
        case 0x242080u: goto label_242080;
        case 0x242084u: goto label_242084;
        case 0x242088u: goto label_242088;
        case 0x24208cu: goto label_24208c;
        case 0x242090u: goto label_242090;
        case 0x242094u: goto label_242094;
        case 0x242098u: goto label_242098;
        case 0x24209cu: goto label_24209c;
        case 0x2420a0u: goto label_2420a0;
        case 0x2420a4u: goto label_2420a4;
        case 0x2420a8u: goto label_2420a8;
        case 0x2420acu: goto label_2420ac;
        case 0x2420b0u: goto label_2420b0;
        case 0x2420b4u: goto label_2420b4;
        case 0x2420b8u: goto label_2420b8;
        case 0x2420bcu: goto label_2420bc;
        case 0x2420c0u: goto label_2420c0;
        case 0x2420c4u: goto label_2420c4;
        case 0x2420c8u: goto label_2420c8;
        case 0x2420ccu: goto label_2420cc;
        case 0x2420d0u: goto label_2420d0;
        case 0x2420d4u: goto label_2420d4;
        case 0x2420d8u: goto label_2420d8;
        case 0x2420dcu: goto label_2420dc;
        case 0x2420e0u: goto label_2420e0;
        case 0x2420e4u: goto label_2420e4;
        case 0x2420e8u: goto label_2420e8;
        case 0x2420ecu: goto label_2420ec;
        case 0x2420f0u: goto label_2420f0;
        case 0x2420f4u: goto label_2420f4;
        case 0x2420f8u: goto label_2420f8;
        case 0x2420fcu: goto label_2420fc;
        case 0x242100u: goto label_242100;
        case 0x242104u: goto label_242104;
        case 0x242108u: goto label_242108;
        case 0x24210cu: goto label_24210c;
        case 0x242110u: goto label_242110;
        case 0x242114u: goto label_242114;
        case 0x242118u: goto label_242118;
        case 0x24211cu: goto label_24211c;
        case 0x242120u: goto label_242120;
        case 0x242124u: goto label_242124;
        case 0x242128u: goto label_242128;
        case 0x24212cu: goto label_24212c;
        case 0x242130u: goto label_242130;
        case 0x242134u: goto label_242134;
        case 0x242138u: goto label_242138;
        case 0x24213cu: goto label_24213c;
        case 0x242140u: goto label_242140;
        case 0x242144u: goto label_242144;
        case 0x242148u: goto label_242148;
        case 0x24214cu: goto label_24214c;
        case 0x242150u: goto label_242150;
        case 0x242154u: goto label_242154;
        case 0x242158u: goto label_242158;
        case 0x24215cu: goto label_24215c;
        case 0x242160u: goto label_242160;
        case 0x242164u: goto label_242164;
        case 0x242168u: goto label_242168;
        case 0x24216cu: goto label_24216c;
        case 0x242170u: goto label_242170;
        case 0x242174u: goto label_242174;
        case 0x242178u: goto label_242178;
        case 0x24217cu: goto label_24217c;
        case 0x242180u: goto label_242180;
        case 0x242184u: goto label_242184;
        case 0x242188u: goto label_242188;
        case 0x24218cu: goto label_24218c;
        case 0x242190u: goto label_242190;
        case 0x242194u: goto label_242194;
        case 0x242198u: goto label_242198;
        case 0x24219cu: goto label_24219c;
        case 0x2421a0u: goto label_2421a0;
        case 0x2421a4u: goto label_2421a4;
        case 0x2421a8u: goto label_2421a8;
        case 0x2421acu: goto label_2421ac;
        case 0x2421b0u: goto label_2421b0;
        case 0x2421b4u: goto label_2421b4;
        case 0x2421b8u: goto label_2421b8;
        case 0x2421bcu: goto label_2421bc;
        case 0x2421c0u: goto label_2421c0;
        case 0x2421c4u: goto label_2421c4;
        case 0x2421c8u: goto label_2421c8;
        case 0x2421ccu: goto label_2421cc;
        case 0x2421d0u: goto label_2421d0;
        case 0x2421d4u: goto label_2421d4;
        case 0x2421d8u: goto label_2421d8;
        case 0x2421dcu: goto label_2421dc;
        case 0x2421e0u: goto label_2421e0;
        case 0x2421e4u: goto label_2421e4;
        case 0x2421e8u: goto label_2421e8;
        case 0x2421ecu: goto label_2421ec;
        case 0x2421f0u: goto label_2421f0;
        case 0x2421f4u: goto label_2421f4;
        case 0x2421f8u: goto label_2421f8;
        case 0x2421fcu: goto label_2421fc;
        case 0x242200u: goto label_242200;
        case 0x242204u: goto label_242204;
        case 0x242208u: goto label_242208;
        case 0x24220cu: goto label_24220c;
        case 0x242210u: goto label_242210;
        case 0x242214u: goto label_242214;
        case 0x242218u: goto label_242218;
        case 0x24221cu: goto label_24221c;
        case 0x242220u: goto label_242220;
        case 0x242224u: goto label_242224;
        case 0x242228u: goto label_242228;
        case 0x24222cu: goto label_24222c;
        case 0x242230u: goto label_242230;
        case 0x242234u: goto label_242234;
        case 0x242238u: goto label_242238;
        case 0x24223cu: goto label_24223c;
        case 0x242240u: goto label_242240;
        case 0x242244u: goto label_242244;
        case 0x242248u: goto label_242248;
        case 0x24224cu: goto label_24224c;
        case 0x242250u: goto label_242250;
        case 0x242254u: goto label_242254;
        case 0x242258u: goto label_242258;
        case 0x24225cu: goto label_24225c;
        case 0x242260u: goto label_242260;
        case 0x242264u: goto label_242264;
        case 0x242268u: goto label_242268;
        case 0x24226cu: goto label_24226c;
        case 0x242270u: goto label_242270;
        case 0x242274u: goto label_242274;
        case 0x242278u: goto label_242278;
        case 0x24227cu: goto label_24227c;
        case 0x242280u: goto label_242280;
        case 0x242284u: goto label_242284;
        case 0x242288u: goto label_242288;
        case 0x24228cu: goto label_24228c;
        case 0x242290u: goto label_242290;
        case 0x242294u: goto label_242294;
        case 0x242298u: goto label_242298;
        case 0x24229cu: goto label_24229c;
        case 0x2422a0u: goto label_2422a0;
        case 0x2422a4u: goto label_2422a4;
        case 0x2422a8u: goto label_2422a8;
        case 0x2422acu: goto label_2422ac;
        case 0x2422b0u: goto label_2422b0;
        case 0x2422b4u: goto label_2422b4;
        case 0x2422b8u: goto label_2422b8;
        case 0x2422bcu: goto label_2422bc;
        case 0x2422c0u: goto label_2422c0;
        case 0x2422c4u: goto label_2422c4;
        case 0x2422c8u: goto label_2422c8;
        case 0x2422ccu: goto label_2422cc;
        case 0x2422d0u: goto label_2422d0;
        case 0x2422d4u: goto label_2422d4;
        case 0x2422d8u: goto label_2422d8;
        case 0x2422dcu: goto label_2422dc;
        case 0x2422e0u: goto label_2422e0;
        case 0x2422e4u: goto label_2422e4;
        case 0x2422e8u: goto label_2422e8;
        case 0x2422ecu: goto label_2422ec;
        case 0x2422f0u: goto label_2422f0;
        case 0x2422f4u: goto label_2422f4;
        case 0x2422f8u: goto label_2422f8;
        case 0x2422fcu: goto label_2422fc;
        case 0x242300u: goto label_242300;
        case 0x242304u: goto label_242304;
        case 0x242308u: goto label_242308;
        case 0x24230cu: goto label_24230c;
        case 0x242310u: goto label_242310;
        case 0x242314u: goto label_242314;
        case 0x242318u: goto label_242318;
        case 0x24231cu: goto label_24231c;
        case 0x242320u: goto label_242320;
        case 0x242324u: goto label_242324;
        case 0x242328u: goto label_242328;
        case 0x24232cu: goto label_24232c;
        case 0x242330u: goto label_242330;
        case 0x242334u: goto label_242334;
        case 0x242338u: goto label_242338;
        case 0x24233cu: goto label_24233c;
        case 0x242340u: goto label_242340;
        case 0x242344u: goto label_242344;
        case 0x242348u: goto label_242348;
        case 0x24234cu: goto label_24234c;
        case 0x242350u: goto label_242350;
        case 0x242354u: goto label_242354;
        case 0x242358u: goto label_242358;
        case 0x24235cu: goto label_24235c;
        case 0x242360u: goto label_242360;
        case 0x242364u: goto label_242364;
        case 0x242368u: goto label_242368;
        case 0x24236cu: goto label_24236c;
        case 0x242370u: goto label_242370;
        case 0x242374u: goto label_242374;
        case 0x242378u: goto label_242378;
        case 0x24237cu: goto label_24237c;
        case 0x242380u: goto label_242380;
        case 0x242384u: goto label_242384;
        case 0x242388u: goto label_242388;
        case 0x24238cu: goto label_24238c;
        case 0x242390u: goto label_242390;
        case 0x242394u: goto label_242394;
        case 0x242398u: goto label_242398;
        case 0x24239cu: goto label_24239c;
        case 0x2423a0u: goto label_2423a0;
        case 0x2423a4u: goto label_2423a4;
        case 0x2423a8u: goto label_2423a8;
        case 0x2423acu: goto label_2423ac;
        case 0x2423b0u: goto label_2423b0;
        case 0x2423b4u: goto label_2423b4;
        case 0x2423b8u: goto label_2423b8;
        case 0x2423bcu: goto label_2423bc;
        case 0x2423c0u: goto label_2423c0;
        case 0x2423c4u: goto label_2423c4;
        case 0x2423c8u: goto label_2423c8;
        case 0x2423ccu: goto label_2423cc;
        case 0x2423d0u: goto label_2423d0;
        case 0x2423d4u: goto label_2423d4;
        case 0x2423d8u: goto label_2423d8;
        case 0x2423dcu: goto label_2423dc;
        case 0x2423e0u: goto label_2423e0;
        case 0x2423e4u: goto label_2423e4;
        case 0x2423e8u: goto label_2423e8;
        case 0x2423ecu: goto label_2423ec;
        case 0x2423f0u: goto label_2423f0;
        case 0x2423f4u: goto label_2423f4;
        case 0x2423f8u: goto label_2423f8;
        case 0x2423fcu: goto label_2423fc;
        case 0x242400u: goto label_242400;
        case 0x242404u: goto label_242404;
        case 0x242408u: goto label_242408;
        case 0x24240cu: goto label_24240c;
        case 0x242410u: goto label_242410;
        case 0x242414u: goto label_242414;
        case 0x242418u: goto label_242418;
        case 0x24241cu: goto label_24241c;
        case 0x242420u: goto label_242420;
        case 0x242424u: goto label_242424;
        case 0x242428u: goto label_242428;
        case 0x24242cu: goto label_24242c;
        case 0x242430u: goto label_242430;
        case 0x242434u: goto label_242434;
        case 0x242438u: goto label_242438;
        case 0x24243cu: goto label_24243c;
        case 0x242440u: goto label_242440;
        case 0x242444u: goto label_242444;
        case 0x242448u: goto label_242448;
        case 0x24244cu: goto label_24244c;
        case 0x242450u: goto label_242450;
        case 0x242454u: goto label_242454;
        case 0x242458u: goto label_242458;
        case 0x24245cu: goto label_24245c;
        case 0x242460u: goto label_242460;
        case 0x242464u: goto label_242464;
        case 0x242468u: goto label_242468;
        case 0x24246cu: goto label_24246c;
        case 0x242470u: goto label_242470;
        case 0x242474u: goto label_242474;
        case 0x242478u: goto label_242478;
        case 0x24247cu: goto label_24247c;
        case 0x242480u: goto label_242480;
        case 0x242484u: goto label_242484;
        case 0x242488u: goto label_242488;
        case 0x24248cu: goto label_24248c;
        case 0x242490u: goto label_242490;
        case 0x242494u: goto label_242494;
        case 0x242498u: goto label_242498;
        case 0x24249cu: goto label_24249c;
        case 0x2424a0u: goto label_2424a0;
        case 0x2424a4u: goto label_2424a4;
        case 0x2424a8u: goto label_2424a8;
        case 0x2424acu: goto label_2424ac;
        case 0x2424b0u: goto label_2424b0;
        case 0x2424b4u: goto label_2424b4;
        case 0x2424b8u: goto label_2424b8;
        case 0x2424bcu: goto label_2424bc;
        case 0x2424c0u: goto label_2424c0;
        case 0x2424c4u: goto label_2424c4;
        case 0x2424c8u: goto label_2424c8;
        case 0x2424ccu: goto label_2424cc;
        case 0x2424d0u: goto label_2424d0;
        case 0x2424d4u: goto label_2424d4;
        case 0x2424d8u: goto label_2424d8;
        case 0x2424dcu: goto label_2424dc;
        case 0x2424e0u: goto label_2424e0;
        case 0x2424e4u: goto label_2424e4;
        case 0x2424e8u: goto label_2424e8;
        case 0x2424ecu: goto label_2424ec;
        case 0x2424f0u: goto label_2424f0;
        case 0x2424f4u: goto label_2424f4;
        case 0x2424f8u: goto label_2424f8;
        case 0x2424fcu: goto label_2424fc;
        case 0x242500u: goto label_242500;
        case 0x242504u: goto label_242504;
        case 0x242508u: goto label_242508;
        case 0x24250cu: goto label_24250c;
        case 0x242510u: goto label_242510;
        case 0x242514u: goto label_242514;
        case 0x242518u: goto label_242518;
        case 0x24251cu: goto label_24251c;
        case 0x242520u: goto label_242520;
        case 0x242524u: goto label_242524;
        case 0x242528u: goto label_242528;
        case 0x24252cu: goto label_24252c;
        case 0x242530u: goto label_242530;
        case 0x242534u: goto label_242534;
        case 0x242538u: goto label_242538;
        case 0x24253cu: goto label_24253c;
        case 0x242540u: goto label_242540;
        case 0x242544u: goto label_242544;
        case 0x242548u: goto label_242548;
        case 0x24254cu: goto label_24254c;
        case 0x242550u: goto label_242550;
        case 0x242554u: goto label_242554;
        case 0x242558u: goto label_242558;
        case 0x24255cu: goto label_24255c;
        case 0x242560u: goto label_242560;
        case 0x242564u: goto label_242564;
        case 0x242568u: goto label_242568;
        case 0x24256cu: goto label_24256c;
        case 0x242570u: goto label_242570;
        case 0x242574u: goto label_242574;
        case 0x242578u: goto label_242578;
        case 0x24257cu: goto label_24257c;
        case 0x242580u: goto label_242580;
        case 0x242584u: goto label_242584;
        case 0x242588u: goto label_242588;
        case 0x24258cu: goto label_24258c;
        case 0x242590u: goto label_242590;
        case 0x242594u: goto label_242594;
        case 0x242598u: goto label_242598;
        case 0x24259cu: goto label_24259c;
        case 0x2425a0u: goto label_2425a0;
        case 0x2425a4u: goto label_2425a4;
        case 0x2425a8u: goto label_2425a8;
        case 0x2425acu: goto label_2425ac;
        case 0x2425b0u: goto label_2425b0;
        case 0x2425b4u: goto label_2425b4;
        case 0x2425b8u: goto label_2425b8;
        case 0x2425bcu: goto label_2425bc;
        case 0x2425c0u: goto label_2425c0;
        case 0x2425c4u: goto label_2425c4;
        case 0x2425c8u: goto label_2425c8;
        case 0x2425ccu: goto label_2425cc;
        case 0x2425d0u: goto label_2425d0;
        case 0x2425d4u: goto label_2425d4;
        case 0x2425d8u: goto label_2425d8;
        case 0x2425dcu: goto label_2425dc;
        case 0x2425e0u: goto label_2425e0;
        case 0x2425e4u: goto label_2425e4;
        case 0x2425e8u: goto label_2425e8;
        case 0x2425ecu: goto label_2425ec;
        case 0x2425f0u: goto label_2425f0;
        case 0x2425f4u: goto label_2425f4;
        case 0x2425f8u: goto label_2425f8;
        case 0x2425fcu: goto label_2425fc;
        case 0x242600u: goto label_242600;
        case 0x242604u: goto label_242604;
        case 0x242608u: goto label_242608;
        case 0x24260cu: goto label_24260c;
        case 0x242610u: goto label_242610;
        case 0x242614u: goto label_242614;
        case 0x242618u: goto label_242618;
        case 0x24261cu: goto label_24261c;
        case 0x242620u: goto label_242620;
        case 0x242624u: goto label_242624;
        case 0x242628u: goto label_242628;
        case 0x24262cu: goto label_24262c;
        case 0x242630u: goto label_242630;
        case 0x242634u: goto label_242634;
        case 0x242638u: goto label_242638;
        case 0x24263cu: goto label_24263c;
        case 0x242640u: goto label_242640;
        case 0x242644u: goto label_242644;
        case 0x242648u: goto label_242648;
        case 0x24264cu: goto label_24264c;
        case 0x242650u: goto label_242650;
        case 0x242654u: goto label_242654;
        case 0x242658u: goto label_242658;
        case 0x24265cu: goto label_24265c;
        case 0x242660u: goto label_242660;
        case 0x242664u: goto label_242664;
        case 0x242668u: goto label_242668;
        case 0x24266cu: goto label_24266c;
        case 0x242670u: goto label_242670;
        case 0x242674u: goto label_242674;
        case 0x242678u: goto label_242678;
        case 0x24267cu: goto label_24267c;
        case 0x242680u: goto label_242680;
        case 0x242684u: goto label_242684;
        case 0x242688u: goto label_242688;
        case 0x24268cu: goto label_24268c;
        case 0x242690u: goto label_242690;
        case 0x242694u: goto label_242694;
        case 0x242698u: goto label_242698;
        case 0x24269cu: goto label_24269c;
        case 0x2426a0u: goto label_2426a0;
        case 0x2426a4u: goto label_2426a4;
        case 0x2426a8u: goto label_2426a8;
        case 0x2426acu: goto label_2426ac;
        case 0x2426b0u: goto label_2426b0;
        case 0x2426b4u: goto label_2426b4;
        case 0x2426b8u: goto label_2426b8;
        case 0x2426bcu: goto label_2426bc;
        case 0x2426c0u: goto label_2426c0;
        case 0x2426c4u: goto label_2426c4;
        case 0x2426c8u: goto label_2426c8;
        case 0x2426ccu: goto label_2426cc;
        case 0x2426d0u: goto label_2426d0;
        case 0x2426d4u: goto label_2426d4;
        case 0x2426d8u: goto label_2426d8;
        case 0x2426dcu: goto label_2426dc;
        case 0x2426e0u: goto label_2426e0;
        case 0x2426e4u: goto label_2426e4;
        case 0x2426e8u: goto label_2426e8;
        case 0x2426ecu: goto label_2426ec;
        case 0x2426f0u: goto label_2426f0;
        case 0x2426f4u: goto label_2426f4;
        case 0x2426f8u: goto label_2426f8;
        case 0x2426fcu: goto label_2426fc;
        case 0x242700u: goto label_242700;
        case 0x242704u: goto label_242704;
        case 0x242708u: goto label_242708;
        case 0x24270cu: goto label_24270c;
        case 0x242710u: goto label_242710;
        case 0x242714u: goto label_242714;
        case 0x242718u: goto label_242718;
        case 0x24271cu: goto label_24271c;
        case 0x242720u: goto label_242720;
        case 0x242724u: goto label_242724;
        case 0x242728u: goto label_242728;
        case 0x24272cu: goto label_24272c;
        case 0x242730u: goto label_242730;
        case 0x242734u: goto label_242734;
        case 0x242738u: goto label_242738;
        case 0x24273cu: goto label_24273c;
        case 0x242740u: goto label_242740;
        case 0x242744u: goto label_242744;
        case 0x242748u: goto label_242748;
        case 0x24274cu: goto label_24274c;
        case 0x242750u: goto label_242750;
        case 0x242754u: goto label_242754;
        case 0x242758u: goto label_242758;
        case 0x24275cu: goto label_24275c;
        case 0x242760u: goto label_242760;
        case 0x242764u: goto label_242764;
        case 0x242768u: goto label_242768;
        case 0x24276cu: goto label_24276c;
        case 0x242770u: goto label_242770;
        case 0x242774u: goto label_242774;
        case 0x242778u: goto label_242778;
        case 0x24277cu: goto label_24277c;
        case 0x242780u: goto label_242780;
        case 0x242784u: goto label_242784;
        case 0x242788u: goto label_242788;
        case 0x24278cu: goto label_24278c;
        case 0x242790u: goto label_242790;
        case 0x242794u: goto label_242794;
        case 0x242798u: goto label_242798;
        case 0x24279cu: goto label_24279c;
        case 0x2427a0u: goto label_2427a0;
        case 0x2427a4u: goto label_2427a4;
        case 0x2427a8u: goto label_2427a8;
        case 0x2427acu: goto label_2427ac;
        case 0x2427b0u: goto label_2427b0;
        case 0x2427b4u: goto label_2427b4;
        case 0x2427b8u: goto label_2427b8;
        case 0x2427bcu: goto label_2427bc;
        case 0x2427c0u: goto label_2427c0;
        case 0x2427c4u: goto label_2427c4;
        case 0x2427c8u: goto label_2427c8;
        case 0x2427ccu: goto label_2427cc;
        case 0x2427d0u: goto label_2427d0;
        case 0x2427d4u: goto label_2427d4;
        case 0x2427d8u: goto label_2427d8;
        case 0x2427dcu: goto label_2427dc;
        case 0x2427e0u: goto label_2427e0;
        case 0x2427e4u: goto label_2427e4;
        case 0x2427e8u: goto label_2427e8;
        case 0x2427ecu: goto label_2427ec;
        case 0x2427f0u: goto label_2427f0;
        case 0x2427f4u: goto label_2427f4;
        case 0x2427f8u: goto label_2427f8;
        case 0x2427fcu: goto label_2427fc;
        case 0x242800u: goto label_242800;
        case 0x242804u: goto label_242804;
        case 0x242808u: goto label_242808;
        case 0x24280cu: goto label_24280c;
        case 0x242810u: goto label_242810;
        case 0x242814u: goto label_242814;
        case 0x242818u: goto label_242818;
        case 0x24281cu: goto label_24281c;
        case 0x242820u: goto label_242820;
        case 0x242824u: goto label_242824;
        case 0x242828u: goto label_242828;
        case 0x24282cu: goto label_24282c;
        default: return;
    }

label_242060:
    // 0x242060: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x242060u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_242064:
    // 0x242064: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x242064u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_242068:
    // 0x242068: 0xc0708ac  jal         func_1C22B0
label_24206c:
    if (ctx->pc == 0x24206Cu) {
        ctx->pc = 0x24206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242068u;
        // 0x24206c: 0x256bea80  addiu       $t3, $t3, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242070u;
        goto label_242070;
    }
    ctx->pc = 0x242068u;
    SET_GPR_U32(ctx, 31, 0x242070u);
    ctx->pc = 0x24206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242068u;
    // 0x24206c: 0x256bea80  addiu       $t3, $t3, -0x1580 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x242070u;
label_242070:
    // 0x242070: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x242070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_242074:
    // 0x242074: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x242074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_242078:
    // 0x242078: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x242078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_24207c:
    // 0x24207c: 0x24502520  addiu       $s0, $v0, 0x2520
    ctx->pc = 0x24207cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9504));
label_242080:
    // 0x242080: 0xc05e234  jal         func_1788D0
label_242084:
    if (ctx->pc == 0x242084u) {
        ctx->pc = 0x242084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242080u;
        // 0x242084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242088u;
        goto label_242088;
    }
    ctx->pc = 0x242080u;
    SET_GPR_U32(ctx, 31, 0x242088u);
    ctx->pc = 0x242084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242080u;
    // 0x242084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x242080u, 0x242088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242088u;
label_242088:
    // 0x242088: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x242088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_24208c:
    // 0x24208c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x24208cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_242090:
    // 0x242090: 0xc07091c  jal         func_1C2470
label_242094:
    if (ctx->pc == 0x242094u) {
        ctx->pc = 0x242094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242090u;
        // 0x242094: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242098u;
        goto label_242098;
    }
    ctx->pc = 0x242090u;
    SET_GPR_U32(ctx, 31, 0x242098u);
    ctx->pc = 0x242094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242090u;
    // 0x242094: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x242098u;
label_242098:
    // 0x242098: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x242098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24209c:
    // 0x24209c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24209cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2420a0:
    // 0x2420a0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2420a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2420a4:
    // 0x2420a4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2420a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2420a8:
    // 0x2420a8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2420a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2420ac:
    // 0x2420ac: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x2420acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2420b0:
    // 0x2420b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2420b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2420b4:
    // 0x2420b4: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2420b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_2420b8:
    // 0x2420b8: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x2420b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_2420bc:
    // 0x2420bc: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x2420bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2420c0:
    // 0x2420c0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2420c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2420c4:
    // 0x2420c4: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x2420c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2420c8:
    // 0x2420c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2420c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2420cc:
    // 0x2420cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2420ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2420d0:
    // 0x2420d0: 0xc05de30  jal         func_1778C0
label_2420d4:
    if (ctx->pc == 0x2420D4u) {
        ctx->pc = 0x2420D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2420D0u;
        // 0x2420d4: 0x240b00c0  addiu       $t3, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2420D8u;
        goto label_2420d8;
    }
    ctx->pc = 0x2420D0u;
    SET_GPR_U32(ctx, 31, 0x2420D8u);
    ctx->pc = 0x2420D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2420D0u;
    // 0x2420d4: 0x240b00c0  addiu       $t3, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x2420D0u, 0x2420D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2420D8u;
label_2420d8:
    // 0x2420d8: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x2420d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2420dc:
    // 0x2420dc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2420dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2420e0:
    // 0x2420e0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2420e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2420e4:
    // 0x2420e4: 0x24502680  addiu       $s0, $v0, 0x2680
    ctx->pc = 0x2420e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9856));
label_2420e8:
    // 0x2420e8: 0xc05e234  jal         func_1788D0
label_2420ec:
    if (ctx->pc == 0x2420ECu) {
        ctx->pc = 0x2420ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2420E8u;
        // 0x2420ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2420F0u;
        goto label_2420f0;
    }
    ctx->pc = 0x2420E8u;
    SET_GPR_U32(ctx, 31, 0x2420F0u);
    ctx->pc = 0x2420ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2420E8u;
    // 0x2420ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x2420E8u, 0x2420F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2420F0u;
label_2420f0:
    // 0x2420f0: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x2420f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_2420f4:
    // 0x2420f4: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x2420f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_2420f8:
    // 0x2420f8: 0xc07091c  jal         func_1C2470
label_2420fc:
    if (ctx->pc == 0x2420FCu) {
        ctx->pc = 0x2420FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2420F8u;
        // 0x2420fc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242100u;
        goto label_242100;
    }
    ctx->pc = 0x2420F8u;
    SET_GPR_U32(ctx, 31, 0x242100u);
    ctx->pc = 0x2420FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2420F8u;
    // 0x2420fc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x242100u;
label_242100:
    // 0x242100: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x242100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_242104:
    // 0x242104: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x242104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_242108:
    // 0x242108: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x242108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_24210c:
    // 0x24210c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x24210cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_242110:
    // 0x242110: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x242110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_242114:
    // 0x242114: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x242114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_242118:
    // 0x242118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24211c:
    // 0x24211c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x24211cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_242120:
    // 0x242120: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x242120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_242124:
    // 0x242124: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x242124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_242128:
    // 0x242128: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x242128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_24212c:
    // 0x24212c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x24212cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_242130:
    // 0x242130: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x242130u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242134:
    // 0x242134: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x242134u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242138:
    // 0x242138: 0xc05de30  jal         func_1778C0
label_24213c:
    if (ctx->pc == 0x24213Cu) {
        ctx->pc = 0x24213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242138u;
        // 0x24213c: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242140u;
        goto label_242140;
    }
    ctx->pc = 0x242138u;
    SET_GPR_U32(ctx, 31, 0x242140u);
    ctx->pc = 0x24213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242138u;
    // 0x24213c: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x242138u, 0x242140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242140u;
label_242140:
    // 0x242140: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x242140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_242144:
    // 0x242144: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x242144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_242148:
    // 0x242148: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x242148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_24214c:
    // 0x24214c: 0x245027e0  addiu       $s0, $v0, 0x27E0
    ctx->pc = 0x24214cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10208));
label_242150:
    // 0x242150: 0xc05e234  jal         func_1788D0
label_242154:
    if (ctx->pc == 0x242154u) {
        ctx->pc = 0x242154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242150u;
        // 0x242154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242158u;
        goto label_242158;
    }
    ctx->pc = 0x242150u;
    SET_GPR_U32(ctx, 31, 0x242158u);
    ctx->pc = 0x242154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242150u;
    // 0x242154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x242150u, 0x242158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242158u;
label_242158:
    // 0x242158: 0xc07082c  jal         func_1C20B0
label_24215c:
    if (ctx->pc == 0x24215Cu) {
        ctx->pc = 0x24215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242158u;
        // 0x24215c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242160u;
        goto label_242160;
    }
    ctx->pc = 0x242158u;
    SET_GPR_U32(ctx, 31, 0x242160u);
    ctx->pc = 0x24215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242158u;
    // 0x24215c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x242160u;
label_242160:
    // 0x242160: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x242160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_242164:
    // 0x242164: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x242164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_242168:
    // 0x242168: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x242168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_24216c:
    // 0x24216c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24216cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_242170:
    // 0x242170: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x242170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_242174:
    // 0x242174: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x242174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_242178:
    // 0x242178: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x242178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24217c:
    // 0x24217c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x24217cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_242180:
    // 0x242180: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x242180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_242184:
    // 0x242184: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x242184u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_242188:
    // 0x242188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24218c:
    // 0x24218c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x24218cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_242190:
    // 0x242190: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x242190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_242194:
    // 0x242194: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x242194u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_242198:
    // 0x242198: 0x240a0168  addiu       $t2, $zero, 0x168
    ctx->pc = 0x242198u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_24219c:
    // 0x24219c: 0xc05de30  jal         func_1778C0
label_2421a0:
    if (ctx->pc == 0x2421A0u) {
        ctx->pc = 0x2421A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24219Cu;
        // 0x2421a0: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2421A4u;
        goto label_2421a4;
    }
    ctx->pc = 0x24219Cu;
    SET_GPR_U32(ctx, 31, 0x2421A4u);
    ctx->pc = 0x2421A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24219Cu;
    // 0x2421a0: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x24219Cu, 0x2421A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2421A4u;
label_2421a4:
    // 0x2421a4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2421a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2421a8:
    // 0x2421a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2421a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2421ac:
    // 0x2421ac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2421acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2421b0:
    // 0x2421b0: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x2421b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_2421b4:
    // 0x2421b4: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2421b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_2421b8:
    // 0x2421b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2421b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2421bc:
    // 0x2421bc: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2421bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2421c0:
    // 0x2421c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2421c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2421c4:
    // 0x2421c4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x2421c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2421c8:
    // 0x2421c8: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x2421c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2421cc:
    // 0x2421cc: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2421ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2421d0:
    // 0x2421d0: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x2421d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2421d4:
    // 0x2421d4: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x2421d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2421d8:
    // 0x2421d8: 0x240a0178  addiu       $t2, $zero, 0x178
    ctx->pc = 0x2421d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
label_2421dc:
    // 0x2421dc: 0xc05de30  jal         func_1778C0
label_2421e0:
    if (ctx->pc == 0x2421E0u) {
        ctx->pc = 0x2421E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2421DCu;
        // 0x2421e0: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2421E4u;
        goto label_2421e4;
    }
    ctx->pc = 0x2421DCu;
    SET_GPR_U32(ctx, 31, 0x2421E4u);
    ctx->pc = 0x2421E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2421DCu;
    // 0x2421e0: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x2421DCu, 0x2421E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2421E4u;
label_2421e4:
    // 0x2421e4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2421e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2421e8:
    // 0x2421e8: 0x26b500b0  addiu       $s5, $s5, 0xB0
    ctx->pc = 0x2421e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
label_2421ec:
    // 0x2421ec: 0x27de48a0  addiu       $fp, $fp, 0x48A0
    ctx->pc = 0x2421ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 18592));
label_2421f0:
    // 0x2421f0: 0x26f73110  addiu       $s7, $s7, 0x3110
    ctx->pc = 0x2421f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12560));
label_2421f4:
    // 0x2421f4: 0x246302d0  addiu       $v1, $v1, 0x2D0
    ctx->pc = 0x2421f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
label_2421f8:
    // 0x2421f8: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x2421f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_2421fc:
    // 0x2421fc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2421fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_242200:
    // 0x242200: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x242200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_242204:
    // 0x242204: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x242204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_242208:
    // 0x242208: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x242208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_24220c:
    // 0x24220c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x24220cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_242210:
    // 0x242210: 0x1460fe35  bnez        $v1, . + 4 + (-0x1CB << 2)
label_242214:
    if (ctx->pc == 0x242214u) {
        ctx->pc = 0x242214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242210u;
        // 0x242214: 0x26d60150  addiu       $s6, $s6, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242218u;
        goto label_242218;
    }
    ctx->pc = 0x242210u;
    {
        const bool branch_taken_0x242210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x242214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242210u;
        // 0x242214: 0x26d60150  addiu       $s6, $s6, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242210) {
            ctx->pc = 0x241AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x241ae8; return; }
        }
    }
    ctx->pc = 0x242218u;
label_242218:
    // 0x242218: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x242218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_24221c:
    // 0x24221c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x24221cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_242220:
    // 0x242220: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x242220u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_242224:
    // 0x242224: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x242224u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_242228:
    // 0x242228: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x242228u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24222c:
    // 0x24222c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x24222cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_242230:
    // 0x242230: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x242230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_242234:
    // 0x242234: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x242234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_242238:
    // 0x242238: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x242238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24223c:
    // 0x24223c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24223cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_242240:
    // 0x242240: 0x3e00008  jr          $ra
label_242244:
    if (ctx->pc == 0x242244u) {
        ctx->pc = 0x242244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242240u;
        // 0x242244: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242248u;
        goto label_242248;
    }
    ctx->pc = 0x242240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242240u;
        // 0x242244: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242248u;
label_242248:
    // 0x242248: 0x0  nop
    ctx->pc = 0x242248u;
    // NOP
label_24224c:
    // 0x24224c: 0x0  nop
    ctx->pc = 0x24224cu;
    // NOP
label_242250:
    // 0x242250: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x242250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_242254:
    // 0x242254: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x242254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_242258:
    // 0x242258: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x242258u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_24225c:
    // 0x24225c: 0x3e00008  jr          $ra
label_242260:
    if (ctx->pc == 0x242260u) {
        ctx->pc = 0x242260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24225Cu;
        // 0x242260: 0x8c22238c  lw          $v0, 0x238C($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242264u;
        goto label_242264;
    }
    ctx->pc = 0x24225Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24225Cu;
        // 0x242260: 0x8c22238c  lw          $v0, 0x238C($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9100)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24225Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242264u;
label_242264:
    // 0x242264: 0x0  nop
    ctx->pc = 0x242264u;
    // NOP
label_242268:
    // 0x242268: 0x0  nop
    ctx->pc = 0x242268u;
    // NOP
label_24226c:
    // 0x24226c: 0x0  nop
    ctx->pc = 0x24226cu;
    // NOP
label_242270:
    // 0x242270: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x242270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_242274:
    // 0x242274: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x242274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_242278:
    // 0x242278: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x242278u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_24227c:
    // 0x24227c: 0x3e00008  jr          $ra
label_242280:
    if (ctx->pc == 0x242280u) {
        ctx->pc = 0x242280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24227Cu;
        // 0x242280: 0xac24238c  sw          $a0, 0x238C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242284u;
        goto label_242284;
    }
    ctx->pc = 0x24227Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24227Cu;
        // 0x242280: 0xac24238c  sw          $a0, 0x238C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24227Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242284u;
label_242284:
    // 0x242284: 0x0  nop
    ctx->pc = 0x242284u;
    // NOP
label_242288:
    // 0x242288: 0x0  nop
    ctx->pc = 0x242288u;
    // NOP
label_24228c:
    // 0x24228c: 0x0  nop
    ctx->pc = 0x24228cu;
    // NOP
label_242290:
    // 0x242290: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x242290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_242294:
    // 0x242294: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x242294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_242298:
    // 0x242298: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x242298u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_24229c:
    // 0x24229c: 0x3e00008  jr          $ra
label_2422a0:
    if (ctx->pc == 0x2422A0u) {
        ctx->pc = 0x2422A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24229Cu;
        // 0x2422a0: 0x8c222390  lw          $v0, 0x2390($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2422A4u;
        goto label_2422a4;
    }
    ctx->pc = 0x24229Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2422A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24229Cu;
        // 0x2422a0: 0x8c222390  lw          $v0, 0x2390($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24229Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2422A4u;
label_2422a4:
    // 0x2422a4: 0x0  nop
    ctx->pc = 0x2422a4u;
    // NOP
label_2422a8:
    // 0x2422a8: 0x0  nop
    ctx->pc = 0x2422a8u;
    // NOP
label_2422ac:
    // 0x2422ac: 0x0  nop
    ctx->pc = 0x2422acu;
    // NOP
label_2422b0:
    // 0x2422b0: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x2422b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2422b4:
    // 0x2422b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2422b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2422b8:
    // 0x2422b8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2422b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2422bc:
    // 0x2422bc: 0x3e00008  jr          $ra
label_2422c0:
    if (ctx->pc == 0x2422C0u) {
        ctx->pc = 0x2422C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2422BCu;
        // 0x2422c0: 0xac242390  sw          $a0, 0x2390($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2422C4u;
        goto label_2422c4;
    }
    ctx->pc = 0x2422BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2422C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2422BCu;
        // 0x2422c0: 0xac242390  sw          $a0, 0x2390($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2422BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2422C4u;
label_2422c4:
    // 0x2422c4: 0x0  nop
    ctx->pc = 0x2422c4u;
    // NOP
label_2422c8:
    // 0x2422c8: 0x0  nop
    ctx->pc = 0x2422c8u;
    // NOP
label_2422cc:
    // 0x2422cc: 0x0  nop
    ctx->pc = 0x2422ccu;
    // NOP
label_2422d0:
    // 0x2422d0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2422d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2422d4:
    // 0x2422d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2422d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2422d8:
    // 0x2422d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2422d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2422dc:
    // 0x2422dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2422dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2422e0:
    // 0x2422e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2422e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2422e4:
    // 0x2422e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2422e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2422e8:
    // 0x2422e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2422e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2422ec:
    // 0x2422ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2422ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2422f0:
    // 0x2422f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2422f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2422f4:
    // 0x2422f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2422f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2422f8:
    // 0x2422f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2422f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2422fc:
    // 0x2422fc: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x2422fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_242300:
    // 0x242300: 0x10600526  beqz        $v1, . + 4 + (0x526 << 2)
label_242304:
    if (ctx->pc == 0x242304u) {
        ctx->pc = 0x242304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242300u;
        // 0x242304: 0x3c070001  lui         $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242308u;
        goto label_242308;
    }
    ctx->pc = 0x242300u;
    {
        const bool branch_taken_0x242300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x242304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242300u;
        // 0x242304: 0x3c070001  lui         $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242300) {
            ctx->pc = 0x24379Cu;
            { ctx->pc = 0x24379c; return; }
        }
    }
    ctx->pc = 0x242308u;
label_242308:
    // 0x242308: 0x34e42384  ori         $a0, $a3, 0x2384
    ctx->pc = 0x242308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)9092);
label_24230c:
    // 0x24230c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x24230cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_242310:
    // 0x242310: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x242310u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_242314:
    // 0x242314: 0x11000521  beqz        $t0, . + 4 + (0x521 << 2)
label_242318:
    if (ctx->pc == 0x242318u) {
        ctx->pc = 0x24231Cu;
        goto label_24231c;
    }
    ctx->pc = 0x242314u;
    {
        const bool branch_taken_0x242314 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x242314) {
            ctx->pc = 0x24379Cu;
            { ctx->pc = 0x24379c; return; }
        }
    }
    ctx->pc = 0x24231Cu;
label_24231c:
    // 0x24231c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x24231cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_242320:
    // 0x242320: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x242320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_242324:
    // 0x242324: 0x34423ffc  ori         $v0, $v0, 0x3FFC
    ctx->pc = 0x242324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_242328:
    // 0x242328: 0x34e623ac  ori         $a2, $a3, 0x23AC
    ctx->pc = 0x242328u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)9132);
label_24232c:
    // 0x24232c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24232cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_242330:
    // 0x242330: 0x24a51e00  addiu       $a1, $a1, 0x1E00
    ctx->pc = 0x242330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
label_242334:
    // 0x242334: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x242334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_242338:
    // 0x242338: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x242338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24233c:
    // 0x24233c: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x24233cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_242340:
    // 0x242340: 0x104000bb  beqz        $v0, . + 4 + (0xBB << 2)
label_242344:
    if (ctx->pc == 0x242344u) {
        ctx->pc = 0x242344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242340u;
        // 0x242344: 0xa6b021  addu        $s6, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242348u;
        goto label_242348;
    }
    ctx->pc = 0x242340u;
    {
        const bool branch_taken_0x242340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242340u;
        // 0x242344: 0xa6b021  addu        $s6, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242340) {
            ctx->pc = 0x242630u;
            goto label_242630;
        }
    }
    ctx->pc = 0x242348u;
label_242348:
    // 0x242348: 0x81180  sll         $v0, $t0, 6
    ctx->pc = 0x242348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
label_24234c:
    // 0x24234c: 0x34e62394  ori         $a2, $a3, 0x2394
    ctx->pc = 0x24234cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)9108);
label_242350:
    // 0x242350: 0x482823  subu        $a1, $v0, $t0
    ctx->pc = 0x242350u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_242354:
    // 0x242354: 0x340afe00  ori         $t2, $zero, 0xFE00
    ctx->pc = 0x242354u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_242358:
    // 0x242358: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x242358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_24235c:
    // 0x24235c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24235cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_242360:
    // 0x242360: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x242360u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_242364:
    // 0x242364: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x242364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_242368:
    // 0x242368: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x242368u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_24236c:
    // 0x24236c: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x24236cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_242370:
    // 0x242370: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x242370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_242374:
    // 0x242374: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x242374u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_242378:
    // 0x242378: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x242378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_24237c:
    // 0x24237c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x24237cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_242380:
    // 0x242380: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x242380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_242384:
    // 0x242384: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x242384u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_242388:
    // 0x242388: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x242388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_24238c:
    // 0x24238c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x24238cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_242390:
    // 0x242390: 0x105100a  movz        $v0, $t0, $a1
    ctx->pc = 0x242390u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
label_242394:
    // 0x242394: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x242394u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_242398:
    // 0x242398: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x242398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_24239c:
    // 0x24239c: 0x24067ca0  addiu       $a2, $zero, 0x7CA0
    ctx->pc = 0x24239cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31904));
label_2423a0:
    // 0x2423a0: 0x2810  mfhi        $a1
    ctx->pc = 0x2423a0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2423a4:
    // 0x2423a4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2423a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2423a8:
    // 0x2423a8: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x2423a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2423ac:
    // 0x2423ac: 0x24047e80  addiu       $a0, $zero, 0x7E80
    ctx->pc = 0x2423acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32384));
label_2423b0:
    // 0x2423b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2423b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2423b4:
    // 0x2423b4: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2423b4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_2423b8:
    // 0x2423b8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2423b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2423bc:
    // 0x2423bc: 0x24b00280  addiu       $s0, $a1, 0x280
    ctx->pc = 0x2423bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
label_2423c0:
    // 0x2423c0: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x2423c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2423c4:
    // 0x2423c4: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x2423c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_2423c8:
    // 0x2423c8: 0x24e76c00  addiu       $a3, $a3, 0x6C00
    ctx->pc = 0x2423c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
label_2423cc:
    // 0x2423cc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2423ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2423d0:
    // 0x2423d0: 0xa52701f0  sh          $a3, 0x1F0($t1)
    ctx->pc = 0x2423d0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 496), (uint16_t)GPR_U32(ctx, 7));
label_2423d4:
    // 0x2423d4: 0x24a56c00  addiu       $a1, $a1, 0x6C00
    ctx->pc = 0x2423d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
label_2423d8:
    // 0x2423d8: 0xa52601f2  sh          $a2, 0x1F2($t1)
    ctx->pc = 0x2423d8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 498), (uint16_t)GPR_U32(ctx, 6));
label_2423dc:
    // 0x2423dc: 0xad2a01f4  sw          $t2, 0x1F4($t1)
    ctx->pc = 0x2423dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 500), GPR_U32(ctx, 10));
label_2423e0:
    // 0x2423e0: 0xa5250200  sh          $a1, 0x200($t1)
    ctx->pc = 0x2423e0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 512), (uint16_t)GPR_U32(ctx, 5));
label_2423e4:
    // 0x2423e4: 0xa5240202  sh          $a0, 0x202($t1)
    ctx->pc = 0x2423e4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 514), (uint16_t)GPR_U32(ctx, 4));
label_2423e8:
    // 0x2423e8: 0xad2a0204  sw          $t2, 0x204($t1)
    ctx->pc = 0x2423e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 516), GPR_U32(ctx, 10));
label_2423ec:
    // 0x2423ec: 0xa12201e0  sb          $v0, 0x1E0($t1)
    ctx->pc = 0x2423ecu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 480), (uint8_t)GPR_U32(ctx, 2));
label_2423f0:
    // 0x2423f0: 0xa12201e1  sb          $v0, 0x1E1($t1)
    ctx->pc = 0x2423f0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 481), (uint8_t)GPR_U32(ctx, 2));
label_2423f4:
    // 0x2423f4: 0xa12201e2  sb          $v0, 0x1E2($t1)
    ctx->pc = 0x2423f4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 482), (uint8_t)GPR_U32(ctx, 2));
label_2423f8:
    // 0x2423f8: 0xa12801e3  sb          $t0, 0x1E3($t1)
    ctx->pc = 0x2423f8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 483), (uint8_t)GPR_U32(ctx, 8));
label_2423fc:
    // 0x2423fc: 0xad2301e4  sw          $v1, 0x1E4($t1)
    ctx->pc = 0x2423fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 484), GPR_U32(ctx, 3));
label_242400:
    // 0x242400: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x242400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_242404:
    // 0x242404: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x242404u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_242408:
    // 0x242408: 0x8c2423a0  lw          $a0, 0x23A0($at)
    ctx->pc = 0x242408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9120)));
label_24240c:
    // 0x24240c: 0x2881000f  slti        $at, $a0, 0xF
    ctx->pc = 0x24240cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)15) ? 1 : 0);
label_242410:
    // 0x242410: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_242414:
    if (ctx->pc == 0x242414u) {
        ctx->pc = 0x242414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242410u;
        // 0x242414: 0x25310160  addiu       $s1, $t1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242418u;
        goto label_242418;
    }
    ctx->pc = 0x242410u;
    {
        const bool branch_taken_0x242410 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x242414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242410u;
        // 0x242414: 0x25310160  addiu       $s1, $t1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242410) {
            ctx->pc = 0x242428u;
            goto label_242428;
        }
    }
    ctx->pc = 0x242418u;
label_242418:
    // 0x242418: 0xc070a34  jal         func_1C28D0
label_24241c:
    if (ctx->pc == 0x24241Cu) {
        ctx->pc = 0x242420u;
        goto label_242420;
    }
    ctx->pc = 0x242418u;
    SET_GPR_U32(ctx, 31, 0x242420u);
    ctx->pc = 0x1C28D0u;
    { ctx->pc = 0x1c28d0; return; }
    ctx->pc = 0x242420u;
label_242420:
    // 0x242420: 0x10000004  b           . + 4 + (0x4 << 2)
label_242424:
    if (ctx->pc == 0x242424u) {
        ctx->pc = 0x242424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242420u;
        // 0x242424: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242428u;
        goto label_242428;
    }
    ctx->pc = 0x242420u;
    {
        const bool branch_taken_0x242420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242420u;
        // 0x242424: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242420) {
            ctx->pc = 0x242434u;
            goto label_242434;
        }
    }
    ctx->pc = 0x242428u;
label_242428:
    // 0x242428: 0xc070a34  jal         func_1C28D0
label_24242c:
    if (ctx->pc == 0x24242Cu) {
        ctx->pc = 0x24242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242428u;
        // 0x24242c: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242430u;
        goto label_242430;
    }
    ctx->pc = 0x242428u;
    SET_GPR_U32(ctx, 31, 0x242430u);
    ctx->pc = 0x24242Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242428u;
    // 0x24242c: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28D0u;
    { ctx->pc = 0x1c28d0; return; }
    ctx->pc = 0x242430u;
label_242430:
    // 0x242430: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x242430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_242434:
    // 0x242434: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x242434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_242438:
    // 0x242438: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x242438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_24243c:
    // 0x24243c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24243cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242440:
    // 0x242440: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x242440u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242444:
    // 0x242444: 0xc066c72  jal         func_19B1C8
label_242448:
    if (ctx->pc == 0x242448u) {
        ctx->pc = 0x242448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242444u;
        // 0x242448: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24244Cu;
        goto label_24244c;
    }
    ctx->pc = 0x242444u;
    SET_GPR_U32(ctx, 31, 0x24244Cu);
    ctx->pc = 0x242448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242444u;
    // 0x242448: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x242444u, 0x24244Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24244Cu;
label_24244c:
    // 0x24244c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x24244cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_242450:
    // 0x242450: 0x260400b6  addiu       $a0, $s0, 0xB6
    ctx->pc = 0x242450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 182));
label_242454:
    // 0x242454: 0x8c2e3ffc  lw          $t6, 0x3FFC($at)
    ctx->pc = 0x242454u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_242458:
    // 0x242458: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x242458u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_24245c:
    // 0x24245c: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x24245cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_242460:
    // 0x242460: 0x2484003c  addiu       $a0, $a0, 0x3C
    ctx->pc = 0x242460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
label_242464:
    // 0x242464: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x242464u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_242468:
    // 0x242468: 0x24aa6c00  addiu       $t2, $a1, 0x6C00
    ctx->pc = 0x242468u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
label_24246c:
    // 0x24246c: 0x24876c00  addiu       $a3, $a0, 0x6C00
    ctx->pc = 0x24246cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_242470:
    // 0x242470: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x242470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_242474:
    // 0x242474: 0x24097ca0  addiu       $t1, $zero, 0x7CA0
    ctx->pc = 0x242474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 31904));
label_242478:
    // 0x242478: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x242478u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_24247c:
    // 0x24247c: 0x24067e80  addiu       $a2, $zero, 0x7E80
    ctx->pc = 0x24247cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32384));
label_242480:
    // 0x242480: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x242480u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_242484:
    // 0x242484: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x242484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_242488:
    // 0x242488: 0xe2080  sll         $a0, $t6, 2
    ctx->pc = 0x242488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
label_24248c:
    // 0x24248c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x24248cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_242490:
    // 0x242490: 0x8e6821  addu        $t5, $a0, $t6
    ctx->pc = 0x242490u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
label_242494:
    // 0x242494: 0x8c2c2394  lw          $t4, 0x2394($at)
    ctx->pc = 0x242494u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9108)));
label_242498:
    // 0x242498: 0xd6840  sll         $t5, $t5, 1
    ctx->pc = 0x242498u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
label_24249c:
    // 0x24249c: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x24249cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_2424a0:
    // 0x2424a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2424a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2424a4:
    // 0x2424a4: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x2424a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_2424a8:
    // 0x2424a8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2424a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_2424ac:
    // 0x2424ac: 0x6d8821  addu        $s1, $v1, $t5
    ctx->pc = 0x2424acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
label_2424b0:
    // 0x2424b0: 0xa62a0090  sh          $t2, 0x90($s1)
    ctx->pc = 0x2424b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 144), (uint16_t)GPR_U32(ctx, 10));
label_2424b4:
    // 0x2424b4: 0x16c100a  movz        $v0, $t3, $t4
    ctx->pc = 0x2424b4u;
    if (GPR_U64(ctx, 12) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 11));
label_2424b8:
    // 0x2424b8: 0xa6290092  sh          $t1, 0x92($s1)
    ctx->pc = 0x2424b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 146), (uint16_t)GPR_U32(ctx, 9));
label_2424bc:
    // 0x2424bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2424bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2424c0:
    // 0x2424c0: 0xae280094  sw          $t0, 0x94($s1)
    ctx->pc = 0x2424c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 8));
label_2424c4:
    // 0x2424c4: 0xa62700a0  sh          $a3, 0xA0($s1)
    ctx->pc = 0x2424c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 160), (uint16_t)GPR_U32(ctx, 7));
label_2424c8:
    // 0x2424c8: 0xa62600a2  sh          $a2, 0xA2($s1)
    ctx->pc = 0x2424c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 6));
label_2424cc:
    // 0x2424cc: 0xae2800a4  sw          $t0, 0xA4($s1)
    ctx->pc = 0x2424ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 8));
label_2424d0:
    // 0x2424d0: 0xa2220080  sb          $v0, 0x80($s1)
    ctx->pc = 0x2424d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 128), (uint8_t)GPR_U32(ctx, 2));
label_2424d4:
    // 0x2424d4: 0xa2220081  sb          $v0, 0x81($s1)
    ctx->pc = 0x2424d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 129), (uint8_t)GPR_U32(ctx, 2));
label_2424d8:
    // 0x2424d8: 0xa2220082  sb          $v0, 0x82($s1)
    ctx->pc = 0x2424d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 130), (uint8_t)GPR_U32(ctx, 2));
label_2424dc:
    // 0x2424dc: 0xa2250083  sb          $a1, 0x83($s1)
    ctx->pc = 0x2424dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 131), (uint8_t)GPR_U32(ctx, 5));
label_2424e0:
    // 0x2424e0: 0xae240084  sw          $a0, 0x84($s1)
    ctx->pc = 0x2424e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 4));
label_2424e4:
    // 0x2424e4: 0x8f8292f8  lw          $v0, -0x6D08($gp)
    ctx->pc = 0x2424e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2424e8:
    // 0x2424e8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2424e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2424ec:
    // 0x2424ec: 0x8c24239c  lw          $a0, 0x239C($at)
    ctx->pc = 0x2424ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9116)));
label_2424f0:
    // 0x2424f0: 0x2882000a  slti        $v0, $a0, 0xA
    ctx->pc = 0x2424f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
label_2424f4:
    // 0x2424f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2424f8:
    if (ctx->pc == 0x2424F8u) {
        ctx->pc = 0x2424FCu;
        goto label_2424fc;
    }
    ctx->pc = 0x2424F4u;
    {
        const bool branch_taken_0x2424f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2424f4) {
            ctx->pc = 0x24250Cu;
            goto label_24250c;
        }
    }
    ctx->pc = 0x2424FCu;
label_2424fc:
    // 0x2424fc: 0xc070ae4  jal         func_1C2B90
label_242500:
    if (ctx->pc == 0x242500u) {
        ctx->pc = 0x242500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424FCu;
        // 0x242500: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242504u;
        goto label_242504;
    }
    ctx->pc = 0x2424FCu;
    SET_GPR_U32(ctx, 31, 0x242504u);
    ctx->pc = 0x242500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2424FCu;
    // 0x242500: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2B90u;
    { ctx->pc = 0x1c2b90; return; }
    ctx->pc = 0x242504u;
label_242504:
    // 0x242504: 0x10000004  b           . + 4 + (0x4 << 2)
label_242508:
    if (ctx->pc == 0x242508u) {
        ctx->pc = 0x242508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242504u;
        // 0x242508: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24250Cu;
        goto label_24250c;
    }
    ctx->pc = 0x242504u;
    {
        const bool branch_taken_0x242504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242504u;
        // 0x242508: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242504) {
            ctx->pc = 0x242518u;
            goto label_242518;
        }
    }
    ctx->pc = 0x24250Cu;
label_24250c:
    // 0x24250c: 0xc070ae4  jal         func_1C2B90
label_242510:
    if (ctx->pc == 0x242510u) {
        ctx->pc = 0x242514u;
        goto label_242514;
    }
    ctx->pc = 0x24250Cu;
    SET_GPR_U32(ctx, 31, 0x242514u);
    ctx->pc = 0x1C2B90u;
    { ctx->pc = 0x1c2b90; return; }
    ctx->pc = 0x242514u;
label_242514:
    // 0x242514: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x242514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_242518:
    // 0x242518: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x242518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24251c:
    // 0x24251c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x24251cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_242520:
    // 0x242520: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x242520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242524:
    // 0x242524: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x242524u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242528:
    // 0x242528: 0xc066c72  jal         func_19B1C8
label_24252c:
    if (ctx->pc == 0x24252Cu) {
        ctx->pc = 0x24252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242528u;
        // 0x24252c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242530u;
        goto label_242530;
    }
    ctx->pc = 0x242528u;
    SET_GPR_U32(ctx, 31, 0x242530u);
    ctx->pc = 0x24252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242528u;
    // 0x24252c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x242528u, 0x242530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242530u;
label_242530:
    // 0x242530: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x242530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_242534:
    // 0x242534: 0x2602fffc  addiu       $v0, $s0, -0x4
    ctx->pc = 0x242534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_242538:
    // 0x242538: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x242538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_24253c:
    // 0x24253c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x24253cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_242540:
    // 0x242540: 0x24656c00  addiu       $a1, $v1, 0x6C00
    ctx->pc = 0x242540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_242544:
    // 0x242544: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x242544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_242548:
    // 0x242548: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x242548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_24254c:
    // 0x24254c: 0x8f8492f8  lw          $a0, -0x6D08($gp)
    ctx->pc = 0x24254cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_242550:
    // 0x242550: 0x240c7c20  addiu       $t4, $zero, 0x7C20
    ctx->pc = 0x242550u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 31776));
label_242554:
    // 0x242554: 0x340bfe00  ori         $t3, $zero, 0xFE00
    ctx->pc = 0x242554u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_242558:
    // 0x242558: 0x24486c00  addiu       $t0, $v0, 0x6C00
    ctx->pc = 0x242558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_24255c:
    // 0x24255c: 0x260900a8  addiu       $t1, $s0, 0xA8
    ctx->pc = 0x24255cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
label_242560:
    // 0x242560: 0x240a7ca0  addiu       $t2, $zero, 0x7CA0
    ctx->pc = 0x242560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 31904));
label_242564:
    // 0x242564: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x242564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_242568:
    // 0x242568: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x242568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_24256c:
    // 0x24256c: 0x663823  subu        $a3, $v1, $a2
    ctx->pc = 0x24256cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_242570:
    // 0x242570: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x242570u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_242574:
    // 0x242574: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x242574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_242578:
    // 0x242578: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x242578u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_24257c:
    // 0x24257c: 0x25220070  addiu       $v0, $t1, 0x70
    ctx->pc = 0x24257cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 112));
label_242580:
    // 0x242580: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x242580u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_242584:
    // 0x242584: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x242584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_242588:
    // 0x242588: 0x866821  addu        $t5, $a0, $a2
    ctx->pc = 0x242588u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_24258c:
    // 0x24258c: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x24258cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_242590:
    // 0x242590: 0xa5a52870  sh          $a1, 0x2870($t5)
    ctx->pc = 0x242590u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 10352), (uint16_t)GPR_U32(ctx, 5));
label_242594:
    // 0x242594: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x242594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_242598:
    // 0x242598: 0xa5ac2872  sh          $t4, 0x2872($t5)
    ctx->pc = 0x242598u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 10354), (uint16_t)GPR_U32(ctx, 12));
label_24259c:
    // 0x24259c: 0x25a527e0  addiu       $a1, $t5, 0x27E0
    ctx->pc = 0x24259cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 10208));
label_2425a0:
    // 0x2425a0: 0xadab2874  sw          $t3, 0x2874($t5)
    ctx->pc = 0x2425a0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 10356), GPR_U32(ctx, 11));
label_2425a4:
    // 0x2425a4: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x2425a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2425a8:
    // 0x2425a8: 0xa5a82880  sh          $t0, 0x2880($t5)
    ctx->pc = 0x2425a8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 10368), (uint16_t)GPR_U32(ctx, 8));
label_2425ac:
    // 0x2425ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2425acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2425b0:
    // 0x2425b0: 0xa5aa2882  sh          $t2, 0x2882($t5)
    ctx->pc = 0x2425b0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 10370), (uint16_t)GPR_U32(ctx, 10));
label_2425b4:
    // 0x2425b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2425b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2425b8:
    // 0x2425b8: 0xadab2884  sw          $t3, 0x2884($t5)
    ctx->pc = 0x2425b8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 10372), GPR_U32(ctx, 11));
label_2425bc:
    // 0x2425bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2425bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2425c0:
    // 0x2425c0: 0xa5a32910  sh          $v1, 0x2910($t5)
    ctx->pc = 0x2425c0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 10512), (uint16_t)GPR_U32(ctx, 3));
label_2425c4:
    // 0x2425c4: 0xa5ac2912  sh          $t4, 0x2912($t5)
    ctx->pc = 0x2425c4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 10514), (uint16_t)GPR_U32(ctx, 12));
label_2425c8:
    // 0x2425c8: 0xadab2914  sw          $t3, 0x2914($t5)
    ctx->pc = 0x2425c8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 10516), GPR_U32(ctx, 11));
label_2425cc:
    // 0x2425cc: 0xa5a22920  sh          $v0, 0x2920($t5)
    ctx->pc = 0x2425ccu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 10528), (uint16_t)GPR_U32(ctx, 2));
label_2425d0:
    // 0x2425d0: 0xa5aa2922  sh          $t2, 0x2922($t5)
    ctx->pc = 0x2425d0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 10530), (uint16_t)GPR_U32(ctx, 10));
label_2425d4:
    // 0x2425d4: 0xc066c72  jal         func_19B1C8
label_2425d8:
    if (ctx->pc == 0x2425D8u) {
        ctx->pc = 0x2425D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2425D4u;
        // 0x2425d8: 0xadab2924  sw          $t3, 0x2924($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 10532), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2425DCu;
        goto label_2425dc;
    }
    ctx->pc = 0x2425D4u;
    SET_GPR_U32(ctx, 31, 0x2425DCu);
    ctx->pc = 0x2425D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2425D4u;
    // 0x2425d8: 0xadab2924  sw          $t3, 0x2924($t5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 13), 10532), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x2425D4u, 0x2425DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2425DCu;
label_2425dc:
    // 0x2425dc: 0x8f8392f8  lw          $v1, -0x6D08($gp)
    ctx->pc = 0x2425dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_2425e0:
    // 0x2425e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2425e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2425e4:
    // 0x2425e4: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x2425e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_2425e8:
    // 0x2425e8: 0x241500b4  addiu       $s5, $zero, 0xB4
    ctx->pc = 0x2425e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_2425ec:
    // 0x2425ec: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x2425ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_2425f0:
    // 0x2425f0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2425f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2425f4:
    // 0x2425f4: 0x8c242384  lw          $a0, 0x2384($at)
    ctx->pc = 0x2425f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9092)));
label_2425f8:
    // 0x2425f8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2425f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2425fc:
    // 0x2425fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2425fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_242600:
    // 0x242600: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x242600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_242604:
    // 0x242604: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x242604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_242608:
    // 0x242608: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x242608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24260c:
    // 0x24260c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x24260cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_242610:
    // 0x242610: 0x0  nop
    ctx->pc = 0x242610u;
    // NOP
label_242614:
    // 0x242614: 0x0  nop
    ctx->pc = 0x242614u;
    // NOP
label_242618:
    // 0x242618: 0x1010  mfhi        $v0
    ctx->pc = 0x242618u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_24261c:
    // 0x24261c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x24261cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_242620:
    // 0x242620: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x242620u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_242624:
    // 0x242624: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x242624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_242628:
    // 0x242628: 0x10000010  b           . + 4 + (0x10 << 2)
label_24262c:
    if (ctx->pc == 0x24262Cu) {
        ctx->pc = 0x24262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242628u;
        // 0x24262c: 0x2454fed4  addiu       $s4, $v0, -0x12C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966996));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242630u;
        goto label_242630;
    }
    ctx->pc = 0x242628u;
    {
        const bool branch_taken_0x242628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242628u;
        // 0x24262c: 0x2454fed4  addiu       $s4, $v0, -0x12C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966996));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242628) {
            ctx->pc = 0x24266Cu;
            goto label_24266c;
        }
    }
    ctx->pc = 0x242630u;
label_242630:
    // 0x242630: 0x81823  negu        $v1, $t0
    ctx->pc = 0x242630u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
label_242634:
    // 0x242634: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x242634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_242638:
    // 0x242638: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x242638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_24263c:
    // 0x24263c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x24263cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_242640:
    // 0x242640: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x242640u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_242644:
    // 0x242644: 0x24150070  addiu       $s5, $zero, 0x70
    ctx->pc = 0x242644u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_242648:
    // 0x242648: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x242648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_24264c:
    // 0x24264c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x24264cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_242650:
    // 0x242650: 0x0  nop
    ctx->pc = 0x242650u;
    // NOP
label_242654:
    // 0x242654: 0x0  nop
    ctx->pc = 0x242654u;
    // NOP
label_242658:
    // 0x242658: 0x1010  mfhi        $v0
    ctx->pc = 0x242658u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_24265c:
    // 0x24265c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x24265cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_242660:
    // 0x242660: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x242660u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_242664:
    // 0x242664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x242664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_242668:
    // 0x242668: 0x24540280  addiu       $s4, $v0, 0x280
    ctx->pc = 0x242668u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_24266c:
    // 0x24266c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24266cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242670:
    // 0x242670: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x242670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242674:
    // 0x242674: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x242674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242678:
    // 0x242678: 0x8f8692f8  lw          $a2, -0x6D08($gp)
    ctx->pc = 0x242678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_24267c:
    // 0x24267c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x24267cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_242680:
    // 0x242680: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x242680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_242684:
    // 0x242684: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x242684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_242688:
    // 0x242688: 0x34422394  ori         $v0, $v0, 0x2394
    ctx->pc = 0x242688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9108);
label_24268c:
    // 0x24268c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x24268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_242690:
    // 0x242690: 0xd12821  addu        $a1, $a2, $s1
    ctx->pc = 0x242690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_242694:
    // 0x242694: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x242694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_242698:
    // 0x242698: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x242698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24269c:
    // 0x24269c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24269cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2426a0:
    // 0x2426a0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2426a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2426a4:
    // 0x2426a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2426a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2426a8:
    // 0x2426a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2426a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2426ac:
    // 0x2426ac: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2426acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2426b0:
    // 0x2426b0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2426b4:
    if (ctx->pc == 0x2426B4u) {
        ctx->pc = 0x2426B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2426B0u;
        // 0x2426b4: 0x24731080  addiu       $s3, $v1, 0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2426B8u;
        goto label_2426b8;
    }
    ctx->pc = 0x2426B0u;
    {
        const bool branch_taken_0x2426b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2426B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2426B0u;
        // 0x2426b4: 0x24731080  addiu       $s3, $v1, 0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2426b0) {
            ctx->pc = 0x2426E4u;
            goto label_2426e4;
        }
    }
    ctx->pc = 0x2426B8u;
label_2426b8:
    // 0x2426b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2426b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2426bc:
    // 0x2426bc: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2426bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2426c0:
    // 0x2426c0: 0x8c22238c  lw          $v0, 0x238C($at)
    ctx->pc = 0x2426c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9100)));
label_2426c4:
    // 0x2426c4: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
label_2426c8:
    if (ctx->pc == 0x2426C8u) {
        ctx->pc = 0x2426C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2426C4u;
        // 0x2426c8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2426CCu;
        goto label_2426cc;
    }
    ctx->pc = 0x2426C4u;
    {
        const bool branch_taken_0x2426c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2426C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2426C4u;
        // 0x2426c8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2426c4) {
            ctx->pc = 0x2426E4u;
            goto label_2426e4;
        }
    }
    ctx->pc = 0x2426CCu;
label_2426cc:
    // 0x2426cc: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x2426ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_2426d0:
    // 0x2426d0: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x2426d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
label_2426d4:
    // 0x2426d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2426d8:
    if (ctx->pc == 0x2426D8u) {
        ctx->pc = 0x2426D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2426D4u;
        // 0x2426d8: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2426DCu;
        goto label_2426dc;
    }
    ctx->pc = 0x2426D4u;
    {
        const bool branch_taken_0x2426d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2426D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2426D4u;
        // 0x2426d8: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2426d4) {
            ctx->pc = 0x2426E4u;
            goto label_2426e4;
        }
    }
    ctx->pc = 0x2426DCu;
label_2426dc:
    // 0x2426dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2426e0:
    if (ctx->pc == 0x2426E0u) {
        ctx->pc = 0x2426E4u;
        goto label_2426e4;
    }
    ctx->pc = 0x2426DCu;
    {
        const bool branch_taken_0x2426dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2426dc) {
            ctx->pc = 0x2426ECu;
            goto label_2426ec;
        }
    }
    ctx->pc = 0x2426E4u;
label_2426e4:
    // 0x2426e4: 0x0  nop
    ctx->pc = 0x2426e4u;
    // NOP
label_2426e8:
    // 0x2426e8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2426e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2426ec:
    // 0x2426ec: 0x0  nop
    ctx->pc = 0x2426ecu;
    // NOP
label_2426f0:
    // 0x2426f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2426f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2426f4:
    // 0x2426f4: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x2426f4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2426f8:
    // 0x2426f8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2426f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_2426fc:
    // 0x2426fc: 0x34884a3b  ori         $t0, $a0, 0x4A3B
    ctx->pc = 0x2426fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19003);
label_242700:
    // 0x242700: 0x1057c2  srl         $t2, $s0, 31
    ctx->pc = 0x242700u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
label_242704:
    // 0x242704: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x242704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
label_242708:
    // 0x242708: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x242708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_24270c:
    // 0x24270c: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x24270cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
label_242710:
    // 0x242710: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x242710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_242714:
    // 0x242714: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x242714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_242718:
    // 0x242718: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x242718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_24271c:
    // 0x24271c: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x24271cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_242720:
    // 0x242720: 0x4010  mfhi        $t0
    ctx->pc = 0x242720u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_242724:
    // 0x242724: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x242724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
label_242728:
    // 0x242728: 0x34675556  ori         $a3, $v1, 0x5556
    ctx->pc = 0x242728u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
label_24272c:
    // 0x24272c: 0x3403fe00  ori         $v1, $zero, 0xFE00
    ctx->pc = 0x24272cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_242730:
    // 0x242730: 0xf00018  mult        $zero, $a3, $s0
    ctx->pc = 0x242730u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_242734:
    // 0x242734: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x242734u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_242738:
    // 0x242738: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x242738u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_24273c:
    // 0x24273c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x24273cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_242740:
    // 0x242740: 0x2875821  addu        $t3, $s4, $a3
    ctx->pc = 0x242740u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
label_242744:
    // 0x242744: 0xb3900  sll         $a3, $t3, 4
    ctx->pc = 0x242744u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_242748:
    // 0x242748: 0x24e86c00  addiu       $t0, $a3, 0x6C00
    ctx->pc = 0x242748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
label_24274c:
    // 0x24274c: 0x4810  mfhi        $t1
    ctx->pc = 0x24274cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_242750:
    // 0x242750: 0x2567003c  addiu       $a3, $t3, 0x3C
    ctx->pc = 0x242750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 60));
label_242754:
    // 0x242754: 0xa6680090  sh          $t0, 0x90($s3)
    ctx->pc = 0x242754u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 144), (uint16_t)GPR_U32(ctx, 8));
label_242758:
    // 0x242758: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x242758u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_24275c:
    // 0x24275c: 0x24e86c00  addiu       $t0, $a3, 0x6C00
    ctx->pc = 0x24275cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
label_242760:
    // 0x242760: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x242760u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_242764:
    // 0x242764: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x242764u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_242768:
    // 0x242768: 0xe94823  subu        $t1, $a3, $t1
    ctx->pc = 0x242768u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_24276c:
    // 0x24276c: 0x93880  sll         $a3, $t1, 2
    ctx->pc = 0x24276cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_242770:
    // 0x242770: 0xe93823  subu        $a3, $a3, $t1
    ctx->pc = 0x242770u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_242774:
    // 0x242774: 0x2a73821  addu        $a3, $s5, $a3
    ctx->pc = 0x242774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_242778:
    // 0x242778: 0x748c0  sll         $t1, $a3, 3
    ctx->pc = 0x242778u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_24277c:
    // 0x24277c: 0x25297900  addiu       $t1, $t1, 0x7900
    ctx->pc = 0x24277cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30976));
label_242780:
    // 0x242780: 0x24e7002d  addiu       $a3, $a3, 0x2D
    ctx->pc = 0x242780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 45));
label_242784:
    // 0x242784: 0xa6690092  sh          $t1, 0x92($s3)
    ctx->pc = 0x242784u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 146), (uint16_t)GPR_U32(ctx, 9));
label_242788:
    // 0x242788: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x242788u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_24278c:
    // 0x24278c: 0xae630094  sw          $v1, 0x94($s3)
    ctx->pc = 0x24278cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 3));
label_242790:
    // 0x242790: 0x24e77900  addiu       $a3, $a3, 0x7900
    ctx->pc = 0x242790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
label_242794:
    // 0x242794: 0xa66800a0  sh          $t0, 0xA0($s3)
    ctx->pc = 0x242794u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 160), (uint16_t)GPR_U32(ctx, 8));
label_242798:
    // 0x242798: 0xa66700a2  sh          $a3, 0xA2($s3)
    ctx->pc = 0x242798u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 162), (uint16_t)GPR_U32(ctx, 7));
label_24279c:
    // 0x24279c: 0xae6300a4  sw          $v1, 0xA4($s3)
    ctx->pc = 0x24279cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 3));
label_2427a0:
    // 0x2427a0: 0xa2620080  sb          $v0, 0x80($s3)
    ctx->pc = 0x2427a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 128), (uint8_t)GPR_U32(ctx, 2));
label_2427a4:
    // 0x2427a4: 0xa2620081  sb          $v0, 0x81($s3)
    ctx->pc = 0x2427a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 129), (uint8_t)GPR_U32(ctx, 2));
label_2427a8:
    // 0x2427a8: 0xa2620082  sb          $v0, 0x82($s3)
    ctx->pc = 0x2427a8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 130), (uint8_t)GPR_U32(ctx, 2));
label_2427ac:
    // 0x2427ac: 0xa2660083  sb          $a2, 0x83($s3)
    ctx->pc = 0x2427acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 131), (uint8_t)GPR_U32(ctx, 6));
label_2427b0:
    // 0x2427b0: 0xae650084  sw          $a1, 0x84($s3)
    ctx->pc = 0x2427b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 5));
label_2427b4:
    // 0x2427b4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2427b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2427b8:
    // 0x2427b8: 0x2881000f  slti        $at, $a0, 0xF
    ctx->pc = 0x2427b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)15) ? 1 : 0);
label_2427bc:
    // 0x2427bc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_2427c0:
    if (ctx->pc == 0x2427C0u) {
        ctx->pc = 0x2427C4u;
        goto label_2427c4;
    }
    ctx->pc = 0x2427BCu;
    {
        const bool branch_taken_0x2427bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2427bc) {
            ctx->pc = 0x2427D4u;
            goto label_2427d4;
        }
    }
    ctx->pc = 0x2427C4u;
label_2427c4:
    // 0x2427c4: 0xc070a34  jal         func_1C28D0
label_2427c8:
    if (ctx->pc == 0x2427C8u) {
        ctx->pc = 0x2427CCu;
        goto label_2427cc;
    }
    ctx->pc = 0x2427C4u;
    SET_GPR_U32(ctx, 31, 0x2427CCu);
    ctx->pc = 0x1C28D0u;
    { ctx->pc = 0x1c28d0; return; }
    ctx->pc = 0x2427CCu;
label_2427cc:
    // 0x2427cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2427d0:
    if (ctx->pc == 0x2427D0u) {
        ctx->pc = 0x2427D4u;
        goto label_2427d4;
    }
    ctx->pc = 0x2427CCu;
    {
        const bool branch_taken_0x2427cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2427cc) {
            ctx->pc = 0x2427E0u;
            goto label_2427e0;
        }
    }
    ctx->pc = 0x2427D4u;
label_2427d4:
    // 0x2427d4: 0x0  nop
    ctx->pc = 0x2427d4u;
    // NOP
label_2427d8:
    // 0x2427d8: 0xc070a34  jal         func_1C28D0
label_2427dc:
    if (ctx->pc == 0x2427DCu) {
        ctx->pc = 0x2427DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427D8u;
        // 0x2427dc: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2427E0u;
        goto label_2427e0;
    }
    ctx->pc = 0x2427D8u;
    SET_GPR_U32(ctx, 31, 0x2427E0u);
    ctx->pc = 0x2427DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2427D8u;
    // 0x2427dc: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28D0u;
    { ctx->pc = 0x1c28d0; return; }
    ctx->pc = 0x2427E0u;
label_2427e0:
    // 0x2427e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2427e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2427e4:
    // 0x2427e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2427e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2427e8:
    // 0x2427e8: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x2427e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2427ec:
    // 0x2427ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2427ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2427f0:
    // 0x2427f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2427f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2427f4:
    // 0x2427f4: 0xc066c72  jal         func_19B1C8
label_2427f8:
    if (ctx->pc == 0x2427F8u) {
        ctx->pc = 0x2427F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427F4u;
        // 0x2427f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2427FCu;
        goto label_2427fc;
    }
    ctx->pc = 0x2427F4u;
    SET_GPR_U32(ctx, 31, 0x2427FCu);
    ctx->pc = 0x2427F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2427F4u;
    // 0x2427f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x2427F4u, 0x2427FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2427FCu;
label_2427fc:
    // 0x2427fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2427fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_242800:
    // 0x242800: 0x26310160  addiu       $s1, $s1, 0x160
    ctx->pc = 0x242800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
label_242804:
    // 0x242804: 0x2a02000f  slti        $v0, $s0, 0xF
    ctx->pc = 0x242804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
label_242808:
    // 0x242808: 0x1440ff9b  bnez        $v0, . + 4 + (-0x65 << 2)
label_24280c:
    if (ctx->pc == 0x24280Cu) {
        ctx->pc = 0x24280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242808u;
        // 0x24280c: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242810u;
        goto label_242810;
    }
    ctx->pc = 0x242808u;
    {
        const bool branch_taken_0x242808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242808u;
        // 0x24280c: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242808) {
            ctx->pc = 0x242678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242678;
        }
    }
    ctx->pc = 0x242810u;
label_242810:
    // 0x242810: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x242810u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242814:
    // 0x242814: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x242814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242818:
    // 0x242818: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x242818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24281c:
    // 0x24281c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x24281cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_242820:
    // 0x242820: 0x8f8692f8  lw          $a2, -0x6D08($gp)
    ctx->pc = 0x242820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939384)));
label_242824:
    // 0x242824: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x242824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_242828:
    // 0x242828: 0xd02821  addu        $a1, $a2, $s0
    ctx->pc = 0x242828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_24282c:
    // 0x24282c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24282cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    ctx->pc = 0x242830u;
    return;
}
