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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part209(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x201108u: goto label_201108;
        case 0x20110cu: goto label_20110c;
        case 0x201110u: goto label_201110;
        case 0x201114u: goto label_201114;
        case 0x201118u: goto label_201118;
        case 0x20111cu: goto label_20111c;
        case 0x201120u: goto label_201120;
        case 0x201124u: goto label_201124;
        case 0x201128u: goto label_201128;
        case 0x20112cu: goto label_20112c;
        case 0x201130u: goto label_201130;
        case 0x201134u: goto label_201134;
        case 0x201138u: goto label_201138;
        case 0x20113cu: goto label_20113c;
        case 0x201140u: goto label_201140;
        case 0x201144u: goto label_201144;
        case 0x201148u: goto label_201148;
        case 0x20114cu: goto label_20114c;
        case 0x201150u: goto label_201150;
        case 0x201154u: goto label_201154;
        case 0x201158u: goto label_201158;
        case 0x20115cu: goto label_20115c;
        case 0x201160u: goto label_201160;
        case 0x201164u: goto label_201164;
        case 0x201168u: goto label_201168;
        case 0x20116cu: goto label_20116c;
        case 0x201170u: goto label_201170;
        case 0x201174u: goto label_201174;
        case 0x201178u: goto label_201178;
        case 0x20117cu: goto label_20117c;
        case 0x201180u: goto label_201180;
        case 0x201184u: goto label_201184;
        case 0x201188u: goto label_201188;
        case 0x20118cu: goto label_20118c;
        case 0x201190u: goto label_201190;
        case 0x201194u: goto label_201194;
        case 0x201198u: goto label_201198;
        case 0x20119cu: goto label_20119c;
        case 0x2011a0u: goto label_2011a0;
        case 0x2011a4u: goto label_2011a4;
        case 0x2011a8u: goto label_2011a8;
        case 0x2011acu: goto label_2011ac;
        case 0x2011b0u: goto label_2011b0;
        case 0x2011b4u: goto label_2011b4;
        case 0x2011b8u: goto label_2011b8;
        case 0x2011bcu: goto label_2011bc;
        case 0x2011c0u: goto label_2011c0;
        case 0x2011c4u: goto label_2011c4;
        case 0x2011c8u: goto label_2011c8;
        case 0x2011ccu: goto label_2011cc;
        case 0x2011d0u: goto label_2011d0;
        case 0x2011d4u: goto label_2011d4;
        case 0x2011d8u: goto label_2011d8;
        case 0x2011dcu: goto label_2011dc;
        case 0x2011e0u: goto label_2011e0;
        case 0x2011e4u: goto label_2011e4;
        case 0x2011e8u: goto label_2011e8;
        case 0x2011ecu: goto label_2011ec;
        case 0x2011f0u: goto label_2011f0;
        case 0x2011f4u: goto label_2011f4;
        case 0x2011f8u: goto label_2011f8;
        case 0x2011fcu: goto label_2011fc;
        case 0x201200u: goto label_201200;
        case 0x201204u: goto label_201204;
        case 0x201208u: goto label_201208;
        case 0x20120cu: goto label_20120c;
        case 0x201210u: goto label_201210;
        case 0x201214u: goto label_201214;
        case 0x201218u: goto label_201218;
        case 0x20121cu: goto label_20121c;
        case 0x201220u: goto label_201220;
        case 0x201224u: goto label_201224;
        case 0x201228u: goto label_201228;
        case 0x20122cu: goto label_20122c;
        case 0x201230u: goto label_201230;
        case 0x201234u: goto label_201234;
        case 0x201238u: goto label_201238;
        case 0x20123cu: goto label_20123c;
        case 0x201240u: goto label_201240;
        case 0x201244u: goto label_201244;
        case 0x201248u: goto label_201248;
        case 0x20124cu: goto label_20124c;
        case 0x201250u: goto label_201250;
        case 0x201254u: goto label_201254;
        case 0x201258u: goto label_201258;
        case 0x20125cu: goto label_20125c;
        case 0x201260u: goto label_201260;
        case 0x201264u: goto label_201264;
        case 0x201268u: goto label_201268;
        case 0x20126cu: goto label_20126c;
        case 0x201270u: goto label_201270;
        case 0x201274u: goto label_201274;
        case 0x201278u: goto label_201278;
        case 0x20127cu: goto label_20127c;
        case 0x201280u: goto label_201280;
        case 0x201284u: goto label_201284;
        case 0x201288u: goto label_201288;
        case 0x20128cu: goto label_20128c;
        case 0x201290u: goto label_201290;
        case 0x201294u: goto label_201294;
        case 0x201298u: goto label_201298;
        case 0x20129cu: goto label_20129c;
        case 0x2012a0u: goto label_2012a0;
        case 0x2012a4u: goto label_2012a4;
        case 0x2012a8u: goto label_2012a8;
        case 0x2012acu: goto label_2012ac;
        case 0x2012b0u: goto label_2012b0;
        case 0x2012b4u: goto label_2012b4;
        case 0x2012b8u: goto label_2012b8;
        case 0x2012bcu: goto label_2012bc;
        case 0x2012c0u: goto label_2012c0;
        case 0x2012c4u: goto label_2012c4;
        case 0x2012c8u: goto label_2012c8;
        case 0x2012ccu: goto label_2012cc;
        case 0x2012d0u: goto label_2012d0;
        case 0x2012d4u: goto label_2012d4;
        case 0x2012d8u: goto label_2012d8;
        case 0x2012dcu: goto label_2012dc;
        case 0x2012e0u: goto label_2012e0;
        case 0x2012e4u: goto label_2012e4;
        case 0x2012e8u: goto label_2012e8;
        case 0x2012ecu: goto label_2012ec;
        case 0x2012f0u: goto label_2012f0;
        case 0x2012f4u: goto label_2012f4;
        case 0x2012f8u: goto label_2012f8;
        case 0x2012fcu: goto label_2012fc;
        case 0x201300u: goto label_201300;
        case 0x201304u: goto label_201304;
        case 0x201308u: goto label_201308;
        case 0x20130cu: goto label_20130c;
        case 0x201310u: goto label_201310;
        case 0x201314u: goto label_201314;
        case 0x201318u: goto label_201318;
        case 0x20131cu: goto label_20131c;
        case 0x201320u: goto label_201320;
        case 0x201324u: goto label_201324;
        case 0x201328u: goto label_201328;
        case 0x20132cu: goto label_20132c;
        case 0x201330u: goto label_201330;
        case 0x201334u: goto label_201334;
        case 0x201338u: goto label_201338;
        case 0x20133cu: goto label_20133c;
        case 0x201340u: goto label_201340;
        case 0x201344u: goto label_201344;
        case 0x201348u: goto label_201348;
        case 0x20134cu: goto label_20134c;
        case 0x201350u: goto label_201350;
        case 0x201354u: goto label_201354;
        case 0x201358u: goto label_201358;
        case 0x20135cu: goto label_20135c;
        case 0x201360u: goto label_201360;
        case 0x201364u: goto label_201364;
        case 0x201368u: goto label_201368;
        case 0x20136cu: goto label_20136c;
        case 0x201370u: goto label_201370;
        case 0x201374u: goto label_201374;
        case 0x201378u: goto label_201378;
        case 0x20137cu: goto label_20137c;
        case 0x201380u: goto label_201380;
        case 0x201384u: goto label_201384;
        case 0x201388u: goto label_201388;
        case 0x20138cu: goto label_20138c;
        case 0x201390u: goto label_201390;
        case 0x201394u: goto label_201394;
        case 0x201398u: goto label_201398;
        case 0x20139cu: goto label_20139c;
        case 0x2013a0u: goto label_2013a0;
        case 0x2013a4u: goto label_2013a4;
        case 0x2013a8u: goto label_2013a8;
        case 0x2013acu: goto label_2013ac;
        case 0x2013b0u: goto label_2013b0;
        case 0x2013b4u: goto label_2013b4;
        case 0x2013b8u: goto label_2013b8;
        case 0x2013bcu: goto label_2013bc;
        case 0x2013c0u: goto label_2013c0;
        case 0x2013c4u: goto label_2013c4;
        case 0x2013c8u: goto label_2013c8;
        case 0x2013ccu: goto label_2013cc;
        case 0x2013d0u: goto label_2013d0;
        case 0x2013d4u: goto label_2013d4;
        case 0x2013d8u: goto label_2013d8;
        case 0x2013dcu: goto label_2013dc;
        case 0x2013e0u: goto label_2013e0;
        case 0x2013e4u: goto label_2013e4;
        case 0x2013e8u: goto label_2013e8;
        case 0x2013ecu: goto label_2013ec;
        case 0x2013f0u: goto label_2013f0;
        case 0x2013f4u: goto label_2013f4;
        case 0x2013f8u: goto label_2013f8;
        case 0x2013fcu: goto label_2013fc;
        case 0x201400u: goto label_201400;
        case 0x201404u: goto label_201404;
        case 0x201408u: goto label_201408;
        case 0x20140cu: goto label_20140c;
        case 0x201410u: goto label_201410;
        case 0x201414u: goto label_201414;
        case 0x201418u: goto label_201418;
        case 0x20141cu: goto label_20141c;
        case 0x201420u: goto label_201420;
        case 0x201424u: goto label_201424;
        case 0x201428u: goto label_201428;
        case 0x20142cu: goto label_20142c;
        case 0x201430u: goto label_201430;
        case 0x201434u: goto label_201434;
        case 0x201438u: goto label_201438;
        case 0x20143cu: goto label_20143c;
        case 0x201440u: goto label_201440;
        case 0x201444u: goto label_201444;
        case 0x201448u: goto label_201448;
        case 0x20144cu: goto label_20144c;
        case 0x201450u: goto label_201450;
        case 0x201454u: goto label_201454;
        case 0x201458u: goto label_201458;
        case 0x20145cu: goto label_20145c;
        case 0x201460u: goto label_201460;
        case 0x201464u: goto label_201464;
        case 0x201468u: goto label_201468;
        case 0x20146cu: goto label_20146c;
        case 0x201470u: goto label_201470;
        case 0x201474u: goto label_201474;
        case 0x201478u: goto label_201478;
        case 0x20147cu: goto label_20147c;
        case 0x201480u: goto label_201480;
        case 0x201484u: goto label_201484;
        case 0x201488u: goto label_201488;
        case 0x20148cu: goto label_20148c;
        case 0x201490u: goto label_201490;
        case 0x201494u: goto label_201494;
        case 0x201498u: goto label_201498;
        case 0x20149cu: goto label_20149c;
        case 0x2014a0u: goto label_2014a0;
        case 0x2014a4u: goto label_2014a4;
        case 0x2014a8u: goto label_2014a8;
        case 0x2014acu: goto label_2014ac;
        case 0x2014b0u: goto label_2014b0;
        case 0x2014b4u: goto label_2014b4;
        case 0x2014b8u: goto label_2014b8;
        case 0x2014bcu: goto label_2014bc;
        case 0x2014c0u: goto label_2014c0;
        case 0x2014c4u: goto label_2014c4;
        case 0x2014c8u: goto label_2014c8;
        case 0x2014ccu: goto label_2014cc;
        case 0x2014d0u: goto label_2014d0;
        case 0x2014d4u: goto label_2014d4;
        case 0x2014d8u: goto label_2014d8;
        case 0x2014dcu: goto label_2014dc;
        case 0x2014e0u: goto label_2014e0;
        case 0x2014e4u: goto label_2014e4;
        case 0x2014e8u: goto label_2014e8;
        case 0x2014ecu: goto label_2014ec;
        case 0x2014f0u: goto label_2014f0;
        case 0x2014f4u: goto label_2014f4;
        case 0x2014f8u: goto label_2014f8;
        case 0x2014fcu: goto label_2014fc;
        case 0x201500u: goto label_201500;
        case 0x201504u: goto label_201504;
        case 0x201508u: goto label_201508;
        case 0x20150cu: goto label_20150c;
        case 0x201510u: goto label_201510;
        case 0x201514u: goto label_201514;
        case 0x201518u: goto label_201518;
        case 0x20151cu: goto label_20151c;
        case 0x201520u: goto label_201520;
        case 0x201524u: goto label_201524;
        case 0x201528u: goto label_201528;
        case 0x20152cu: goto label_20152c;
        case 0x201530u: goto label_201530;
        case 0x201534u: goto label_201534;
        case 0x201538u: goto label_201538;
        case 0x20153cu: goto label_20153c;
        case 0x201540u: goto label_201540;
        case 0x201544u: goto label_201544;
        case 0x201548u: goto label_201548;
        case 0x20154cu: goto label_20154c;
        case 0x201550u: goto label_201550;
        case 0x201554u: goto label_201554;
        case 0x201558u: goto label_201558;
        case 0x20155cu: goto label_20155c;
        case 0x201560u: goto label_201560;
        case 0x201564u: goto label_201564;
        case 0x201568u: goto label_201568;
        case 0x20156cu: goto label_20156c;
        case 0x201570u: goto label_201570;
        case 0x201574u: goto label_201574;
        case 0x201578u: goto label_201578;
        case 0x20157cu: goto label_20157c;
        case 0x201580u: goto label_201580;
        case 0x201584u: goto label_201584;
        case 0x201588u: goto label_201588;
        case 0x20158cu: goto label_20158c;
        case 0x201590u: goto label_201590;
        case 0x201594u: goto label_201594;
        case 0x201598u: goto label_201598;
        case 0x20159cu: goto label_20159c;
        case 0x2015a0u: goto label_2015a0;
        case 0x2015a4u: goto label_2015a4;
        case 0x2015a8u: goto label_2015a8;
        case 0x2015acu: goto label_2015ac;
        case 0x2015b0u: goto label_2015b0;
        case 0x2015b4u: goto label_2015b4;
        case 0x2015b8u: goto label_2015b8;
        case 0x2015bcu: goto label_2015bc;
        case 0x2015c0u: goto label_2015c0;
        case 0x2015c4u: goto label_2015c4;
        case 0x2015c8u: goto label_2015c8;
        case 0x2015ccu: goto label_2015cc;
        case 0x2015d0u: goto label_2015d0;
        case 0x2015d4u: goto label_2015d4;
        case 0x2015d8u: goto label_2015d8;
        case 0x2015dcu: goto label_2015dc;
        case 0x2015e0u: goto label_2015e0;
        case 0x2015e4u: goto label_2015e4;
        case 0x2015e8u: goto label_2015e8;
        case 0x2015ecu: goto label_2015ec;
        case 0x2015f0u: goto label_2015f0;
        case 0x2015f4u: goto label_2015f4;
        case 0x2015f8u: goto label_2015f8;
        case 0x2015fcu: goto label_2015fc;
        case 0x201600u: goto label_201600;
        case 0x201604u: goto label_201604;
        case 0x201608u: goto label_201608;
        case 0x20160cu: goto label_20160c;
        case 0x201610u: goto label_201610;
        case 0x201614u: goto label_201614;
        case 0x201618u: goto label_201618;
        case 0x20161cu: goto label_20161c;
        case 0x201620u: goto label_201620;
        case 0x201624u: goto label_201624;
        case 0x201628u: goto label_201628;
        case 0x20162cu: goto label_20162c;
        case 0x201630u: goto label_201630;
        case 0x201634u: goto label_201634;
        case 0x201638u: goto label_201638;
        case 0x20163cu: goto label_20163c;
        case 0x201640u: goto label_201640;
        case 0x201644u: goto label_201644;
        case 0x201648u: goto label_201648;
        case 0x20164cu: goto label_20164c;
        case 0x201650u: goto label_201650;
        case 0x201654u: goto label_201654;
        case 0x201658u: goto label_201658;
        case 0x20165cu: goto label_20165c;
        case 0x201660u: goto label_201660;
        case 0x201664u: goto label_201664;
        case 0x201668u: goto label_201668;
        case 0x20166cu: goto label_20166c;
        case 0x201670u: goto label_201670;
        case 0x201674u: goto label_201674;
        case 0x201678u: goto label_201678;
        case 0x20167cu: goto label_20167c;
        case 0x201680u: goto label_201680;
        case 0x201684u: goto label_201684;
        case 0x201688u: goto label_201688;
        case 0x20168cu: goto label_20168c;
        case 0x201690u: goto label_201690;
        case 0x201694u: goto label_201694;
        case 0x201698u: goto label_201698;
        case 0x20169cu: goto label_20169c;
        case 0x2016a0u: goto label_2016a0;
        case 0x2016a4u: goto label_2016a4;
        case 0x2016a8u: goto label_2016a8;
        case 0x2016acu: goto label_2016ac;
        case 0x2016b0u: goto label_2016b0;
        case 0x2016b4u: goto label_2016b4;
        case 0x2016b8u: goto label_2016b8;
        case 0x2016bcu: goto label_2016bc;
        case 0x2016c0u: goto label_2016c0;
        case 0x2016c4u: goto label_2016c4;
        case 0x2016c8u: goto label_2016c8;
        case 0x2016ccu: goto label_2016cc;
        case 0x2016d0u: goto label_2016d0;
        case 0x2016d4u: goto label_2016d4;
        case 0x2016d8u: goto label_2016d8;
        case 0x2016dcu: goto label_2016dc;
        case 0x2016e0u: goto label_2016e0;
        case 0x2016e4u: goto label_2016e4;
        case 0x2016e8u: goto label_2016e8;
        case 0x2016ecu: goto label_2016ec;
        case 0x2016f0u: goto label_2016f0;
        case 0x2016f4u: goto label_2016f4;
        case 0x2016f8u: goto label_2016f8;
        case 0x2016fcu: goto label_2016fc;
        case 0x201700u: goto label_201700;
        case 0x201704u: goto label_201704;
        case 0x201708u: goto label_201708;
        case 0x20170cu: goto label_20170c;
        case 0x201710u: goto label_201710;
        case 0x201714u: goto label_201714;
        case 0x201718u: goto label_201718;
        case 0x20171cu: goto label_20171c;
        case 0x201720u: goto label_201720;
        case 0x201724u: goto label_201724;
        case 0x201728u: goto label_201728;
        case 0x20172cu: goto label_20172c;
        case 0x201730u: goto label_201730;
        case 0x201734u: goto label_201734;
        case 0x201738u: goto label_201738;
        case 0x20173cu: goto label_20173c;
        case 0x201740u: goto label_201740;
        case 0x201744u: goto label_201744;
        case 0x201748u: goto label_201748;
        case 0x20174cu: goto label_20174c;
        case 0x201750u: goto label_201750;
        case 0x201754u: goto label_201754;
        case 0x201758u: goto label_201758;
        case 0x20175cu: goto label_20175c;
        case 0x201760u: goto label_201760;
        case 0x201764u: goto label_201764;
        case 0x201768u: goto label_201768;
        case 0x20176cu: goto label_20176c;
        case 0x201770u: goto label_201770;
        case 0x201774u: goto label_201774;
        case 0x201778u: goto label_201778;
        case 0x20177cu: goto label_20177c;
        case 0x201780u: goto label_201780;
        case 0x201784u: goto label_201784;
        case 0x201788u: goto label_201788;
        case 0x20178cu: goto label_20178c;
        case 0x201790u: goto label_201790;
        case 0x201794u: goto label_201794;
        case 0x201798u: goto label_201798;
        case 0x20179cu: goto label_20179c;
        case 0x2017a0u: goto label_2017a0;
        case 0x2017a4u: goto label_2017a4;
        case 0x2017a8u: goto label_2017a8;
        case 0x2017acu: goto label_2017ac;
        case 0x2017b0u: goto label_2017b0;
        case 0x2017b4u: goto label_2017b4;
        case 0x2017b8u: goto label_2017b8;
        case 0x2017bcu: goto label_2017bc;
        case 0x2017c0u: goto label_2017c0;
        case 0x2017c4u: goto label_2017c4;
        case 0x2017c8u: goto label_2017c8;
        case 0x2017ccu: goto label_2017cc;
        case 0x2017d0u: goto label_2017d0;
        case 0x2017d4u: goto label_2017d4;
        case 0x2017d8u: goto label_2017d8;
        case 0x2017dcu: goto label_2017dc;
        case 0x2017e0u: goto label_2017e0;
        case 0x2017e4u: goto label_2017e4;
        case 0x2017e8u: goto label_2017e8;
        case 0x2017ecu: goto label_2017ec;
        case 0x2017f0u: goto label_2017f0;
        case 0x2017f4u: goto label_2017f4;
        case 0x2017f8u: goto label_2017f8;
        case 0x2017fcu: goto label_2017fc;
        case 0x201800u: goto label_201800;
        case 0x201804u: goto label_201804;
        case 0x201808u: goto label_201808;
        case 0x20180cu: goto label_20180c;
        case 0x201810u: goto label_201810;
        case 0x201814u: goto label_201814;
        case 0x201818u: goto label_201818;
        case 0x20181cu: goto label_20181c;
        case 0x201820u: goto label_201820;
        case 0x201824u: goto label_201824;
        case 0x201828u: goto label_201828;
        case 0x20182cu: goto label_20182c;
        case 0x201830u: goto label_201830;
        case 0x201834u: goto label_201834;
        case 0x201838u: goto label_201838;
        case 0x20183cu: goto label_20183c;
        case 0x201840u: goto label_201840;
        case 0x201844u: goto label_201844;
        case 0x201848u: goto label_201848;
        case 0x20184cu: goto label_20184c;
        case 0x201850u: goto label_201850;
        case 0x201854u: goto label_201854;
        case 0x201858u: goto label_201858;
        case 0x20185cu: goto label_20185c;
        case 0x201860u: goto label_201860;
        case 0x201864u: goto label_201864;
        case 0x201868u: goto label_201868;
        case 0x20186cu: goto label_20186c;
        case 0x201870u: goto label_201870;
        case 0x201874u: goto label_201874;
        case 0x201878u: goto label_201878;
        case 0x20187cu: goto label_20187c;
        case 0x201880u: goto label_201880;
        case 0x201884u: goto label_201884;
        case 0x201888u: goto label_201888;
        case 0x20188cu: goto label_20188c;
        case 0x201890u: goto label_201890;
        case 0x201894u: goto label_201894;
        case 0x201898u: goto label_201898;
        case 0x20189cu: goto label_20189c;
        case 0x2018a0u: goto label_2018a0;
        case 0x2018a4u: goto label_2018a4;
        case 0x2018a8u: goto label_2018a8;
        case 0x2018acu: goto label_2018ac;
        case 0x2018b0u: goto label_2018b0;
        case 0x2018b4u: goto label_2018b4;
        case 0x2018b8u: goto label_2018b8;
        case 0x2018bcu: goto label_2018bc;
        case 0x2018c0u: goto label_2018c0;
        case 0x2018c4u: goto label_2018c4;
        case 0x2018c8u: goto label_2018c8;
        case 0x2018ccu: goto label_2018cc;
        case 0x2018d0u: goto label_2018d0;
        case 0x2018d4u: goto label_2018d4;
        default: return;
    }

label_201108:
    // 0x201108: 0x10000046  b           . + 4 + (0x46 << 2)
label_20110c:
    if (ctx->pc == 0x20110Cu) {
        ctx->pc = 0x20110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201108u;
        // 0x20110c: 0x8f8490e0  lw          $a0, -0x6F20($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201110u;
        goto label_201110;
    }
    ctx->pc = 0x201108u;
    {
        const bool branch_taken_0x201108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201108u;
        // 0x20110c: 0x8f8490e0  lw          $a0, -0x6F20($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201108) {
            ctx->pc = 0x201224u;
            goto label_201224;
        }
    }
    ctx->pc = 0x201110u;
label_201110:
    // 0x201110: 0x8f8690c8  lw          $a2, -0x6F38($gp)
    ctx->pc = 0x201110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938824)));
label_201114:
    // 0x201114: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x201114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_201118:
    // 0x201118: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x201118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_20111c:
    // 0x20111c: 0xc08f20e  jal         func_23C838
label_201120:
    if (ctx->pc == 0x201120u) {
        ctx->pc = 0x201120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20111Cu;
        // 0x201120: 0x24a5d558  addiu       $a1, $a1, -0x2AA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201124u;
        goto label_201124;
    }
    ctx->pc = 0x20111Cu;
    SET_GPR_U32(ctx, 31, 0x201124u);
    ctx->pc = 0x201120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20111Cu;
    // 0x201120: 0x24a5d558  addiu       $a1, $a1, -0x2AA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x201124u;
label_201124:
    // 0x201124: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x201124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_201128:
    // 0x201128: 0x27c80050  addiu       $t0, $fp, 0x50
    ctx->pc = 0x201128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
label_20112c:
    // 0x20112c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x20112cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_201130:
    // 0x201130: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x201130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_201134:
    // 0x201134: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x201134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_201138:
    // 0x201138: 0x24090130  addiu       $t1, $zero, 0x130
    ctx->pc = 0x201138u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_20113c:
    // 0x20113c: 0xc054e5c  jal         func_153970
label_201140:
    if (ctx->pc == 0x201140u) {
        ctx->pc = 0x201140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20113Cu;
        // 0x201140: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x201144u;
        goto label_201144;
    }
    ctx->pc = 0x20113Cu;
    SET_GPR_U32(ctx, 31, 0x201144u);
    ctx->pc = 0x201140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20113Cu;
    // 0x201140: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x20113Cu, 0x201144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201144u;
label_201144:
    // 0x201144: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x201144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201148:
    // 0x201148: 0x26047fe0  addiu       $a0, $s0, 0x7FE0
    ctx->pc = 0x201148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32736));
label_20114c:
    // 0x20114c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x20114cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_201150:
    // 0x201150: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x201150u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_201154:
    // 0x201154: 0xc054e74  jal         func_1539D0
label_201158:
    if (ctx->pc == 0x201158u) {
        ctx->pc = 0x201158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201154u;
        // 0x201158: 0x27a800d0  addiu       $t0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20115Cu;
        goto label_20115c;
    }
    ctx->pc = 0x201154u;
    SET_GPR_U32(ctx, 31, 0x20115Cu);
    ctx->pc = 0x201158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201154u;
    // 0x201158: 0x27a800d0  addiu       $t0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x201154u, 0x20115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20115Cu;
label_20115c:
    // 0x20115c: 0x8f8390c4  lw          $v1, -0x6F3C($gp)
    ctx->pc = 0x20115cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938820)));
label_201160:
    // 0x201160: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x201160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_201164:
    // 0x201164: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_201168:
    if (ctx->pc == 0x201168u) {
        ctx->pc = 0x201168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201164u;
        // 0x201168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20116Cu;
        goto label_20116c;
    }
    ctx->pc = 0x201164u;
    {
        const bool branch_taken_0x201164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x201168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201164u;
        // 0x201168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201164) {
            ctx->pc = 0x201170u;
            goto label_201170;
        }
    }
    ctx->pc = 0x20116Cu;
label_20116c:
    // 0x20116c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20116cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201170:
    // 0x201170: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_201174:
    if (ctx->pc == 0x201174u) {
        ctx->pc = 0x201174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201170u;
        // 0x201174: 0x27c80050  addiu       $t0, $fp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201178u;
        goto label_201178;
    }
    ctx->pc = 0x201170u;
    {
        const bool branch_taken_0x201170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x201174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201170u;
        // 0x201174: 0x27c80050  addiu       $t0, $fp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201170) {
            ctx->pc = 0x20117Cu;
            goto label_20117c;
        }
    }
    ctx->pc = 0x201178u;
label_201178:
    // 0x201178: 0x27c80048  addiu       $t0, $fp, 0x48
    ctx->pc = 0x201178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 72));
label_20117c:
    // 0x20117c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x20117cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_201180:
    // 0x201180: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x201180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_201184:
    // 0x201184: 0x45200a  movz        $a0, $v0, $a1
    ctx->pc = 0x201184u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_201188:
    // 0x201188: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x201188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_20118c:
    // 0x20118c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x20118cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_201190:
    // 0x201190: 0x24090148  addiu       $t1, $zero, 0x148
    ctx->pc = 0x201190u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
label_201194:
    // 0x201194: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x201194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_201198:
    // 0x201198: 0xc054e5c  jal         func_153970
label_20119c:
    if (ctx->pc == 0x20119Cu) {
        ctx->pc = 0x20119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201198u;
        // 0x20119c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011A0u;
        goto label_2011a0;
    }
    ctx->pc = 0x201198u;
    SET_GPR_U32(ctx, 31, 0x2011A0u);
    ctx->pc = 0x20119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201198u;
    // 0x20119c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x201198u, 0x2011A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2011A0u;
label_2011a0:
    // 0x2011a0: 0x8f8390c4  lw          $v1, -0x6F3C($gp)
    ctx->pc = 0x2011a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938820)));
label_2011a4:
    // 0x2011a4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x2011a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_2011a8:
    // 0x2011a8: 0x340180b0  ori         $at, $zero, 0x80B0
    ctx->pc = 0x2011a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32944);
label_2011ac:
    // 0x2011ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2011acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2011b0:
    // 0x2011b0: 0x24423370  addiu       $v0, $v0, 0x3370
    ctx->pc = 0x2011b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13168));
label_2011b4:
    // 0x2011b4: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2011b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_2011b8:
    // 0x2011b8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2011b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2011bc:
    // 0x2011bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2011bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2011c0:
    // 0x2011c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2011c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2011c4:
    // 0x2011c4: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x2011c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2011c8:
    // 0x2011c8: 0xc054e74  jal         func_1539D0
label_2011cc:
    if (ctx->pc == 0x2011CCu) {
        ctx->pc = 0x2011CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011C8u;
        // 0x2011cc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011D0u;
        goto label_2011d0;
    }
    ctx->pc = 0x2011C8u;
    SET_GPR_U32(ctx, 31, 0x2011D0u);
    ctx->pc = 0x2011CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2011C8u;
    // 0x2011cc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x2011C8u, 0x2011D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2011D0u;
label_2011d0:
    // 0x2011d0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2011d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2011d4:
    // 0x2011d4: 0x27c80050  addiu       $t0, $fp, 0x50
    ctx->pc = 0x2011d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
label_2011d8:
    // 0x2011d8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2011d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2011dc:
    // 0x2011dc: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2011dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2011e0:
    // 0x2011e0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2011e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2011e4:
    // 0x2011e4: 0x24090160  addiu       $t1, $zero, 0x160
    ctx->pc = 0x2011e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_2011e8:
    // 0x2011e8: 0xc054e5c  jal         func_153970
label_2011ec:
    if (ctx->pc == 0x2011ECu) {
        ctx->pc = 0x2011ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2011E8u;
        // 0x2011ec: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2011F0u;
        goto label_2011f0;
    }
    ctx->pc = 0x2011E8u;
    SET_GPR_U32(ctx, 31, 0x2011F0u);
    ctx->pc = 0x2011ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2011E8u;
    // 0x2011ec: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x2011E8u, 0x2011F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2011F0u;
label_2011f0:
    // 0x2011f0: 0x8f8390c0  lw          $v1, -0x6F40($gp)
    ctx->pc = 0x2011f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938816)));
label_2011f4:
    // 0x2011f4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x2011f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_2011f8:
    // 0x2011f8: 0x34018730  ori         $at, $zero, 0x8730
    ctx->pc = 0x2011f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34608);
label_2011fc:
    // 0x2011fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2011fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201200:
    // 0x201200: 0x24423390  addiu       $v0, $v0, 0x3390
    ctx->pc = 0x201200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13200));
label_201204:
    // 0x201204: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x201204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_201208:
    // 0x201208: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x201208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_20120c:
    // 0x20120c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20120cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_201210:
    // 0x201210: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201214:
    // 0x201214: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x201214u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_201218:
    // 0x201218: 0xc054e74  jal         func_1539D0
label_20121c:
    if (ctx->pc == 0x20121Cu) {
        ctx->pc = 0x20121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201218u;
        // 0x20121c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201220u;
        goto label_201220;
    }
    ctx->pc = 0x201218u;
    SET_GPR_U32(ctx, 31, 0x201220u);
    ctx->pc = 0x20121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201218u;
    // 0x20121c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x201218u, 0x201220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201220u;
label_201220:
    // 0x201220: 0x8f8490e0  lw          $a0, -0x6F20($gp)
    ctx->pc = 0x201220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938848)));
label_201224:
    // 0x201224: 0xc070e2c  jal         func_1C38B0
label_201228:
    if (ctx->pc == 0x201228u) {
        ctx->pc = 0x201228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201224u;
        // 0x201228: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20122Cu;
        goto label_20122c;
    }
    ctx->pc = 0x201224u;
    SET_GPR_U32(ctx, 31, 0x20122Cu);
    ctx->pc = 0x201228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201224u;
    // 0x201228: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x20122Cu;
label_20122c:
    // 0x20122c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x20122cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_201230:
    // 0x201230: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x201230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201234:
    // 0x201234: 0x240608ce  addiu       $a2, $zero, 0x8CE
    ctx->pc = 0x201234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2254));
label_201238:
    // 0x201238: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x201238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20123c:
    // 0x20123c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20123cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201240:
    // 0x201240: 0xc066c72  jal         func_19B1C8
label_201244:
    if (ctx->pc == 0x201244u) {
        ctx->pc = 0x201244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201240u;
        // 0x201244: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201248u;
        goto label_201248;
    }
    ctx->pc = 0x201240u;
    SET_GPR_U32(ctx, 31, 0x201248u);
    ctx->pc = 0x201244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201240u;
    // 0x201244: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x201240u, 0x201248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201248u;
label_201248:
    // 0x201248: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x201248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_20124c:
    // 0x20124c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x20124cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_201250:
    // 0x201250: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x201250u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_201254:
    // 0x201254: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x201254u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_201258:
    // 0x201258: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x201258u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20125c:
    // 0x20125c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20125cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_201260:
    // 0x201260: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x201260u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_201264:
    // 0x201264: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x201264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_201268:
    // 0x201268: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x201268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20126c:
    // 0x20126c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20126cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_201270:
    // 0x201270: 0x3e00008  jr          $ra
label_201274:
    if (ctx->pc == 0x201274u) {
        ctx->pc = 0x201274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201270u;
        // 0x201274: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201278u;
        goto label_201278;
    }
    ctx->pc = 0x201270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201270u;
        // 0x201274: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201278u;
label_201278:
    // 0x201278: 0x0  nop
    ctx->pc = 0x201278u;
    // NOP
label_20127c:
    // 0x20127c: 0x0  nop
    ctx->pc = 0x20127cu;
    // NOP
label_201280:
    // 0x201280: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x201280u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_201284:
    // 0x201284: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201288:
    // 0x201288: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x201288u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_20128c:
    // 0x20128c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x20128cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_201290:
    // 0x201290: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
label_201294:
    if (ctx->pc == 0x201294u) {
        ctx->pc = 0x201294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201290u;
        // 0x201294: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201298u;
        goto label_201298;
    }
    ctx->pc = 0x201290u;
    {
        const bool branch_taken_0x201290 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x201294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201290u;
        // 0x201294: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201290) {
            ctx->pc = 0x2012A0u;
            goto label_2012a0;
        }
    }
    ctx->pc = 0x201298u;
label_201298:
    // 0x201298: 0x90870074  lbu         $a3, 0x74($a0)
    ctx->pc = 0x201298u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 116)));
label_20129c:
    // 0x20129c: 0x0  nop
    ctx->pc = 0x20129cu;
    // NOP
label_2012a0:
    // 0x2012a0: 0x28e1000f  slti        $at, $a3, 0xF
    ctx->pc = 0x2012a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)15) ? 1 : 0);
label_2012a4:
    // 0x2012a4: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
label_2012a8:
    if (ctx->pc == 0x2012A8u) {
        ctx->pc = 0x2012A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012A4u;
        // 0x2012a8: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2012ACu;
        goto label_2012ac;
    }
    ctx->pc = 0x2012A4u;
    {
        const bool branch_taken_0x2012a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2012A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012A4u;
        // 0x2012a8: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012a4) {
            ctx->pc = 0x2013C0u;
            goto label_2013c0;
        }
    }
    ctx->pc = 0x2012ACu;
label_2012ac:
    // 0x2012ac: 0x3c0a002b  lui         $t2, 0x2B
    ctx->pc = 0x2012acu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43 << 16));
label_2012b0:
    // 0x2012b0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2012b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2012b4:
    // 0x2012b4: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x2012b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_2012b8:
    // 0x2012b8: 0x358c0  sll         $t3, $v1, 3
    ctx->pc = 0x2012b8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2012bc:
    // 0x2012bc: 0x254a13cb  addiu       $t2, $t2, 0x13CB
    ctx->pc = 0x2012bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 5067));
label_2012c0:
    // 0x2012c0: 0x14b3821  addu        $a3, $t2, $t3
    ctx->pc = 0x2012c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_2012c4:
    // 0x2012c4: 0x24c65370  addiu       $a2, $a2, 0x5370
    ctx->pc = 0x2012c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21360));
label_2012c8:
    // 0x2012c8: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x2012c8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_2012cc:
    // 0x2012cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2012ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2012d0:
    // 0x2012d0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2012d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2012d4:
    // 0x2012d4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2012d4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2012d8:
    // 0x2012d8: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x2012d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_2012dc:
    // 0x2012dc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2012dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2012e0:
    // 0x2012e0: 0x90c6003b  lbu         $a2, 0x3B($a2)
    ctx->pc = 0x2012e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 59)));
label_2012e4:
    // 0x2012e4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2012e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2012e8:
    // 0x2012e8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2012e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_2012ec:
    // 0x2012ec: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x2012ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
label_2012f0:
    // 0x2012f0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x2012f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_2012f4:
    // 0x2012f4: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x2012f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
label_2012f8:
    // 0x2012f8: 0x2463a4b0  addiu       $v1, $v1, -0x5B50
    ctx->pc = 0x2012f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943920));
label_2012fc:
    // 0x2012fc: 0xcb3821  addu        $a3, $a2, $t3
    ctx->pc = 0x2012fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_201300:
    // 0x201300: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x201300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_201304:
    // 0x201304: 0x24e70000  addiu       $a3, $a3, 0x0
    ctx->pc = 0x201304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
label_201308:
    // 0x201308: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x201308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20130c:
    // 0x20130c: 0xec5821  addu        $t3, $a3, $t4
    ctx->pc = 0x20130cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_201310:
    // 0x201310: 0x34214a30  ori         $at, $at, 0x4A30
    ctx->pc = 0x201310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18992);
label_201314:
    // 0x201314: 0x1615821  addu        $t3, $t3, $at
    ctx->pc = 0x201314u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 1)));
label_201318:
    // 0x201318: 0x916d0000  lbu         $t5, 0x0($t3)
    ctx->pc = 0x201318u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_20131c:
    // 0x20131c: 0x11a60023  beq         $t5, $a2, . + 4 + (0x23 << 2)
label_201320:
    if (ctx->pc == 0x201320u) {
        ctx->pc = 0x201324u;
        goto label_201324;
    }
    ctx->pc = 0x20131Cu;
    {
        const bool branch_taken_0x20131c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 6));
        if (branch_taken_0x20131c) {
            ctx->pc = 0x2013ACu;
            goto label_2013ac;
        }
    }
    ctx->pc = 0x201324u;
label_201324:
    // 0x201324: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x201324u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_201328:
    // 0x201328: 0x6d6821  addu        $t5, $v1, $t5
    ctx->pc = 0x201328u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
label_20132c:
    // 0x20132c: 0xddaf0000  ld          $t7, 0x0($t5)
    ctx->pc = 0x20132cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 13), 0)));
label_201330:
    // 0x201330: 0x31ed0008  andi        $t5, $t7, 0x8
    ctx->pc = 0x201330u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
label_201334:
    // 0x201334: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
label_201338:
    if (ctx->pc == 0x201338u) {
        ctx->pc = 0x20133Cu;
        goto label_20133c;
    }
    ctx->pc = 0x201334u;
    {
        const bool branch_taken_0x201334 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x201334) {
            ctx->pc = 0x20134Cu;
            goto label_20134c;
        }
    }
    ctx->pc = 0x20133Cu;
label_20133c:
    // 0x20133c: 0x916e0001  lbu         $t6, 0x1($t3)
    ctx->pc = 0x20133cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
label_201340:
    // 0x201340: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x201340u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201344:
    // 0x201344: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x201344u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_201348:
    // 0x201348: 0xacad0000  sw          $t5, 0x0($a1)
    ctx->pc = 0x201348u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 13));
label_20134c:
    // 0x20134c: 0x0  nop
    ctx->pc = 0x20134cu;
    // NOP
label_201350:
    // 0x201350: 0x31ed0004  andi        $t5, $t7, 0x4
    ctx->pc = 0x201350u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)4);
label_201354:
    // 0x201354: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
label_201358:
    if (ctx->pc == 0x201358u) {
        ctx->pc = 0x20135Cu;
        goto label_20135c;
    }
    ctx->pc = 0x201354u;
    {
        const bool branch_taken_0x201354 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x201354) {
            ctx->pc = 0x20136Cu;
            goto label_20136c;
        }
    }
    ctx->pc = 0x20135Cu;
label_20135c:
    // 0x20135c: 0x916e0001  lbu         $t6, 0x1($t3)
    ctx->pc = 0x20135cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
label_201360:
    // 0x201360: 0x8cad0004  lw          $t5, 0x4($a1)
    ctx->pc = 0x201360u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_201364:
    // 0x201364: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x201364u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_201368:
    // 0x201368: 0xacad0004  sw          $t5, 0x4($a1)
    ctx->pc = 0x201368u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 13));
label_20136c:
    // 0x20136c: 0x0  nop
    ctx->pc = 0x20136cu;
    // NOP
label_201370:
    // 0x201370: 0x31ed0010  andi        $t5, $t7, 0x10
    ctx->pc = 0x201370u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)16);
label_201374:
    // 0x201374: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
label_201378:
    if (ctx->pc == 0x201378u) {
        ctx->pc = 0x20137Cu;
        goto label_20137c;
    }
    ctx->pc = 0x201374u;
    {
        const bool branch_taken_0x201374 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x201374) {
            ctx->pc = 0x20138Cu;
            goto label_20138c;
        }
    }
    ctx->pc = 0x20137Cu;
label_20137c:
    // 0x20137c: 0x916e0001  lbu         $t6, 0x1($t3)
    ctx->pc = 0x20137cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
label_201380:
    // 0x201380: 0x8cad0008  lw          $t5, 0x8($a1)
    ctx->pc = 0x201380u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_201384:
    // 0x201384: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x201384u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_201388:
    // 0x201388: 0xacad0008  sw          $t5, 0x8($a1)
    ctx->pc = 0x201388u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 13));
label_20138c:
    // 0x20138c: 0x0  nop
    ctx->pc = 0x20138cu;
    // NOP
label_201390:
    // 0x201390: 0x31ed0020  andi        $t5, $t7, 0x20
    ctx->pc = 0x201390u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)32);
label_201394:
    // 0x201394: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
label_201398:
    if (ctx->pc == 0x201398u) {
        ctx->pc = 0x20139Cu;
        goto label_20139c;
    }
    ctx->pc = 0x201394u;
    {
        const bool branch_taken_0x201394 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x201394) {
            ctx->pc = 0x2013ACu;
            goto label_2013ac;
        }
    }
    ctx->pc = 0x20139Cu;
label_20139c:
    // 0x20139c: 0x916d0001  lbu         $t5, 0x1($t3)
    ctx->pc = 0x20139cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
label_2013a0:
    // 0x2013a0: 0x8cab000c  lw          $t3, 0xC($a1)
    ctx->pc = 0x2013a0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2013a4:
    // 0x2013a4: 0x16d5821  addu        $t3, $t3, $t5
    ctx->pc = 0x2013a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
label_2013a8:
    // 0x2013a8: 0xacab000c  sw          $t3, 0xC($a1)
    ctx->pc = 0x2013a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 11));
label_2013ac:
    // 0x2013ac: 0x0  nop
    ctx->pc = 0x2013acu;
    // NOP
label_2013b0:
    // 0x2013b0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2013b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2013b4:
    // 0x2013b4: 0x294b0003  slti        $t3, $t2, 0x3
    ctx->pc = 0x2013b4u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
label_2013b8:
    // 0x2013b8: 0x1560ffd3  bnez        $t3, . + 4 + (-0x2D << 2)
label_2013bc:
    if (ctx->pc == 0x2013BCu) {
        ctx->pc = 0x2013BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013B8u;
        // 0x2013bc: 0x258c0002  addiu       $t4, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2013C0u;
        goto label_2013c0;
    }
    ctx->pc = 0x2013B8u;
    {
        const bool branch_taken_0x2013b8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x2013BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013B8u;
        // 0x2013bc: 0x258c0002  addiu       $t4, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013b8) {
            ctx->pc = 0x201308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201308;
        }
    }
    ctx->pc = 0x2013C0u;
label_2013c0:
    // 0x2013c0: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
label_2013c4:
    if (ctx->pc == 0x2013C4u) {
        ctx->pc = 0x2013C8u;
        goto label_2013c8;
    }
    ctx->pc = 0x2013C0u;
    {
        const bool branch_taken_0x2013c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2013c0) {
            ctx->pc = 0x2013D0u;
            goto label_2013d0;
        }
    }
    ctx->pc = 0x2013C8u;
label_2013c8:
    // 0x2013c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2013cc:
    if (ctx->pc == 0x2013CCu) {
        ctx->pc = 0x2013CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013C8u;
        // 0x2013cc: 0x2921000a  slti        $at, $t1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2013D0u;
        goto label_2013d0;
    }
    ctx->pc = 0x2013C8u;
    {
        const bool branch_taken_0x2013c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013C8u;
        // 0x2013cc: 0x2921000a  slti        $at, $t1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013c8) {
            ctx->pc = 0x2013DCu;
            goto label_2013dc;
        }
    }
    ctx->pc = 0x2013D0u;
label_2013d0:
    // 0x2013d0: 0x90890075  lbu         $t1, 0x75($a0)
    ctx->pc = 0x2013d0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 117)));
label_2013d4:
    // 0x2013d4: 0x0  nop
    ctx->pc = 0x2013d4u;
    // NOP
label_2013d8:
    // 0x2013d8: 0x2921000a  slti        $at, $t1, 0xA
    ctx->pc = 0x2013d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
label_2013dc:
    // 0x2013dc: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_2013e0:
    if (ctx->pc == 0x2013E0u) {
        ctx->pc = 0x2013E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013DCu;
        // 0x2013e0: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2013E4u;
        goto label_2013e4;
    }
    ctx->pc = 0x2013DCu;
    {
        const bool branch_taken_0x2013dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013DCu;
        // 0x2013e0: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013dc) {
            ctx->pc = 0x201484u;
            goto label_201484;
        }
    }
    ctx->pc = 0x2013E4u;
label_2013e4:
    // 0x2013e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2013e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2013e8:
    // 0x2013e8: 0x92040  sll         $a0, $t1, 1
    ctx->pc = 0x2013e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_2013ec:
    // 0x2013ec: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x2013ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_2013f0:
    // 0x2013f0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2013f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2013f4:
    // 0x2013f4: 0x34214a18  ori         $at, $at, 0x4A18
    ctx->pc = 0x2013f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18968);
label_2013f8:
    // 0x2013f8: 0x813821  addu        $a3, $a0, $at
    ctx->pc = 0x2013f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_2013fc:
    // 0x2013fc: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x2013fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_201400:
    // 0x201400: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x201400u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_201404:
    // 0x201404: 0x2463a4b0  addiu       $v1, $v1, -0x5B50
    ctx->pc = 0x201404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943920));
label_201408:
    // 0x201408: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x201408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_20140c:
    // 0x20140c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20140cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_201410:
    // 0x201410: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x201410u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_201414:
    // 0x201414: 0x30c30008  andi        $v1, $a2, 0x8
    ctx->pc = 0x201414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_201418:
    // 0x201418: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_20141c:
    if (ctx->pc == 0x20141Cu) {
        ctx->pc = 0x201420u;
        goto label_201420;
    }
    ctx->pc = 0x201418u;
    {
        const bool branch_taken_0x201418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x201418) {
            ctx->pc = 0x201430u;
            goto label_201430;
        }
    }
    ctx->pc = 0x201420u;
label_201420:
    // 0x201420: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x201420u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_201424:
    // 0x201424: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201428:
    // 0x201428: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20142c:
    // 0x20142c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x20142cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_201430:
    // 0x201430: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x201430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_201434:
    // 0x201434: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_201438:
    if (ctx->pc == 0x201438u) {
        ctx->pc = 0x201438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201434u;
        // 0x201438: 0x30c30010  andi        $v1, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20143Cu;
        goto label_20143c;
    }
    ctx->pc = 0x201434u;
    {
        const bool branch_taken_0x201434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201434u;
        // 0x201438: 0x30c30010  andi        $v1, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201434) {
            ctx->pc = 0x201450u;
            goto label_201450;
        }
    }
    ctx->pc = 0x20143Cu;
label_20143c:
    // 0x20143c: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x20143cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_201440:
    // 0x201440: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x201440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_201444:
    // 0x201444: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_201448:
    // 0x201448: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x201448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_20144c:
    // 0x20144c: 0x30c30010  andi        $v1, $a2, 0x10
    ctx->pc = 0x20144cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_201450:
    // 0x201450: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_201454:
    if (ctx->pc == 0x201454u) {
        ctx->pc = 0x201454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201450u;
        // 0x201454: 0x30c30020  andi        $v1, $a2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x201458u;
        goto label_201458;
    }
    ctx->pc = 0x201450u;
    {
        const bool branch_taken_0x201450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201450u;
        // 0x201454: 0x30c30020  andi        $v1, $a2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201450) {
            ctx->pc = 0x20146Cu;
            goto label_20146c;
        }
    }
    ctx->pc = 0x201458u;
label_201458:
    // 0x201458: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x201458u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_20145c:
    // 0x20145c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x20145cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_201460:
    // 0x201460: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_201464:
    // 0x201464: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x201464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_201468:
    // 0x201468: 0x30c30020  andi        $v1, $a2, 0x20
    ctx->pc = 0x201468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
label_20146c:
    // 0x20146c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_201470:
    if (ctx->pc == 0x201470u) {
        ctx->pc = 0x201474u;
        goto label_201474;
    }
    ctx->pc = 0x20146Cu;
    {
        const bool branch_taken_0x20146c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20146c) {
            ctx->pc = 0x201484u;
            goto label_201484;
        }
    }
    ctx->pc = 0x201474u;
label_201474:
    // 0x201474: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x201474u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_201478:
    // 0x201478: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x201478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_20147c:
    // 0x20147c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20147cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_201480:
    // 0x201480: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x201480u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_201484:
    // 0x201484: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201488:
    // 0x201488: 0x28610097  slti        $at, $v1, 0x97
    ctx->pc = 0x201488u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)151) ? 1 : 0);
label_20148c:
    // 0x20148c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_201490:
    if (ctx->pc == 0x201490u) {
        ctx->pc = 0x201494u;
        goto label_201494;
    }
    ctx->pc = 0x20148Cu;
    {
        const bool branch_taken_0x20148c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20148c) {
            ctx->pc = 0x201498u;
            goto label_201498;
        }
    }
    ctx->pc = 0x201494u;
label_201494:
    // 0x201494: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x201494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_201498:
    // 0x201498: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x201498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_20149c:
    // 0x20149c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x20149cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2014a0:
    // 0x2014a0: 0x28610097  slti        $at, $v1, 0x97
    ctx->pc = 0x2014a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)151) ? 1 : 0);
label_2014a4:
    // 0x2014a4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2014a8:
    if (ctx->pc == 0x2014A8u) {
        ctx->pc = 0x2014ACu;
        goto label_2014ac;
    }
    ctx->pc = 0x2014A4u;
    {
        const bool branch_taken_0x2014a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2014a4) {
            ctx->pc = 0x2014B0u;
            goto label_2014b0;
        }
    }
    ctx->pc = 0x2014ACu;
label_2014ac:
    // 0x2014ac: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x2014acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_2014b0:
    // 0x2014b0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2014b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_2014b4:
    // 0x2014b4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2014b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2014b8:
    // 0x2014b8: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x2014b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
label_2014bc:
    // 0x2014bc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2014c0:
    if (ctx->pc == 0x2014C0u) {
        ctx->pc = 0x2014C4u;
        goto label_2014c4;
    }
    ctx->pc = 0x2014BCu;
    {
        const bool branch_taken_0x2014bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2014bc) {
            ctx->pc = 0x2014C8u;
            goto label_2014c8;
        }
    }
    ctx->pc = 0x2014C4u;
label_2014c4:
    // 0x2014c4: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2014c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2014c8:
    // 0x2014c8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2014c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_2014cc:
    // 0x2014cc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2014ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2014d0:
    // 0x2014d0: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x2014d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
label_2014d4:
    // 0x2014d4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2014d8:
    if (ctx->pc == 0x2014D8u) {
        ctx->pc = 0x2014DCu;
        goto label_2014dc;
    }
    ctx->pc = 0x2014D4u;
    {
        const bool branch_taken_0x2014d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2014d4) {
            ctx->pc = 0x2014E0u;
            goto label_2014e0;
        }
    }
    ctx->pc = 0x2014DCu;
label_2014dc:
    // 0x2014dc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2014dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2014e0:
    // 0x2014e0: 0x3e00008  jr          $ra
label_2014e4:
    if (ctx->pc == 0x2014E4u) {
        ctx->pc = 0x2014E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014E0u;
        // 0x2014e4: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2014E8u;
        goto label_2014e8;
    }
    ctx->pc = 0x2014E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2014E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014E0u;
        // 0x2014e4: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2014E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2014E8u;
label_2014e8:
    // 0x2014e8: 0x0  nop
    ctx->pc = 0x2014e8u;
    // NOP
label_2014ec:
    // 0x2014ec: 0x0  nop
    ctx->pc = 0x2014ecu;
    // NOP
label_2014f0:
    // 0x2014f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2014f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2014f4:
    // 0x2014f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2014f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2014f8:
    // 0x2014f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2014f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2014fc:
    // 0x2014fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2014fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_201500:
    // 0x201500: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x201500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_201504:
    // 0x201504: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x201504u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_201508:
    // 0x201508: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x201508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20150c:
    // 0x20150c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x20150cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_201510:
    // 0x201510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_201514:
    // 0x201514: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x201514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_201518:
    // 0x201518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x201518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20151c:
    // 0x20151c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x20151cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_201520:
    // 0x201520: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x201520u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_201524:
    // 0x201524: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x201524u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_201528:
    // 0x201528: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x201528u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_20152c:
    // 0x20152c: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
label_201530:
    if (ctx->pc == 0x201530u) {
        ctx->pc = 0x201530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20152Cu;
        // 0x201530: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201534u;
        goto label_201534;
    }
    ctx->pc = 0x20152Cu;
    {
        const bool branch_taken_0x20152c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x201530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20152Cu;
        // 0x201530: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20152c) {
            ctx->pc = 0x20153Cu;
            goto label_20153c;
        }
    }
    ctx->pc = 0x201534u;
label_201534:
    // 0x201534: 0x9287005d  lbu         $a3, 0x5D($s4)
    ctx->pc = 0x201534u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 93)));
label_201538:
    // 0x201538: 0x0  nop
    ctx->pc = 0x201538u;
    // NOP
label_20153c:
    // 0x20153c: 0x240300ab  addiu       $v1, $zero, 0xAB
    ctx->pc = 0x20153cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_201540:
    // 0x201540: 0x10e30043  beq         $a3, $v1, . + 4 + (0x43 << 2)
label_201544:
    if (ctx->pc == 0x201544u) {
        ctx->pc = 0x201544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201540u;
        // 0x201544: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201548u;
        goto label_201548;
    }
    ctx->pc = 0x201540u;
    {
        const bool branch_taken_0x201540 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x201544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201540u;
        // 0x201544: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201540) {
            ctx->pc = 0x201650u;
            goto label_201650;
        }
    }
    ctx->pc = 0x201548u;
label_201548:
    // 0x201548: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x201548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_20154c:
    // 0x20154c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x20154cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_201550:
    // 0x201550: 0x244203aa  addiu       $v0, $v0, 0x3AA
    ctx->pc = 0x201550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 938));
label_201554:
    // 0x201554: 0x380c0  sll         $s0, $v1, 3
    ctx->pc = 0x201554u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_201558:
    // 0x201558: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x201558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20155c:
    // 0x20155c: 0xc0657f0  jal         func_195FC0
label_201560:
    if (ctx->pc == 0x201560u) {
        ctx->pc = 0x201560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20155Cu;
        // 0x201560: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201564u;
        goto label_201564;
    }
    ctx->pc = 0x20155Cu;
    SET_GPR_U32(ctx, 31, 0x201564u);
    ctx->pc = 0x201560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20155Cu;
    // 0x201560: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195FC0u, 0x20155Cu, 0x201564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201564u;
label_201564:
    // 0x201564: 0x9044003b  lbu         $a0, 0x3B($v0)
    ctx->pc = 0x201564u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 59)));
label_201568:
    // 0x201568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x201568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20156c:
    // 0x20156c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x20156cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_201570:
    // 0x201570: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x201570u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201574:
    // 0x201574: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_201578:
    // 0x201578: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x201578u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_20157c:
    // 0x20157c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x20157cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
label_201580:
    // 0x201580: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x201580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_201584:
    // 0x201584: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x201584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
label_201588:
    // 0x201588: 0x2463a230  addiu       $v1, $v1, -0x5DD0
    ctx->pc = 0x201588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943280));
label_20158c:
    // 0x20158c: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x20158cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_201590:
    // 0x201590: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x201590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_201594:
    // 0x201594: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x201594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_201598:
    // 0x201598: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x201598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20159c:
    // 0x20159c: 0xa83821  addu        $a3, $a1, $t0
    ctx->pc = 0x20159cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_2015a0:
    // 0x2015a0: 0x34213a10  ori         $at, $at, 0x3A10
    ctx->pc = 0x2015a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14864);
label_2015a4:
    // 0x2015a4: 0xe13821  addu        $a3, $a3, $at
    ctx->pc = 0x2015a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_2015a8:
    // 0x2015a8: 0x90e90000  lbu         $t1, 0x0($a3)
    ctx->pc = 0x2015a8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_2015ac:
    // 0x2015ac: 0x11240023  beq         $t1, $a0, . + 4 + (0x23 << 2)
label_2015b0:
    if (ctx->pc == 0x2015B0u) {
        ctx->pc = 0x2015B4u;
        goto label_2015b4;
    }
    ctx->pc = 0x2015ACu;
    {
        const bool branch_taken_0x2015ac = (GPR_U64(ctx, 9) == GPR_U64(ctx, 4));
        if (branch_taken_0x2015ac) {
            ctx->pc = 0x20163Cu;
            goto label_20163c;
        }
    }
    ctx->pc = 0x2015B4u;
label_2015b4:
    // 0x2015b4: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x2015b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_2015b8:
    // 0x2015b8: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x2015b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_2015bc:
    // 0x2015bc: 0xdd2b0000  ld          $t3, 0x0($t1)
    ctx->pc = 0x2015bcu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 9), 0)));
label_2015c0:
    // 0x2015c0: 0x31690008  andi        $t1, $t3, 0x8
    ctx->pc = 0x2015c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)8);
label_2015c4:
    // 0x2015c4: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
label_2015c8:
    if (ctx->pc == 0x2015C8u) {
        ctx->pc = 0x2015CCu;
        goto label_2015cc;
    }
    ctx->pc = 0x2015C4u;
    {
        const bool branch_taken_0x2015c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2015c4) {
            ctx->pc = 0x2015DCu;
            goto label_2015dc;
        }
    }
    ctx->pc = 0x2015CCu;
label_2015cc:
    // 0x2015cc: 0x90ea0001  lbu         $t2, 0x1($a3)
    ctx->pc = 0x2015ccu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_2015d0:
    // 0x2015d0: 0x8e690000  lw          $t1, 0x0($s3)
    ctx->pc = 0x2015d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2015d4:
    // 0x2015d4: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2015d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_2015d8:
    // 0x2015d8: 0xae690000  sw          $t1, 0x0($s3)
    ctx->pc = 0x2015d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 9));
label_2015dc:
    // 0x2015dc: 0x0  nop
    ctx->pc = 0x2015dcu;
    // NOP
label_2015e0:
    // 0x2015e0: 0x31690004  andi        $t1, $t3, 0x4
    ctx->pc = 0x2015e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)4);
label_2015e4:
    // 0x2015e4: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
label_2015e8:
    if (ctx->pc == 0x2015E8u) {
        ctx->pc = 0x2015ECu;
        goto label_2015ec;
    }
    ctx->pc = 0x2015E4u;
    {
        const bool branch_taken_0x2015e4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2015e4) {
            ctx->pc = 0x2015FCu;
            goto label_2015fc;
        }
    }
    ctx->pc = 0x2015ECu;
label_2015ec:
    // 0x2015ec: 0x90ea0001  lbu         $t2, 0x1($a3)
    ctx->pc = 0x2015ecu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_2015f0:
    // 0x2015f0: 0x8e690004  lw          $t1, 0x4($s3)
    ctx->pc = 0x2015f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2015f4:
    // 0x2015f4: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2015f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_2015f8:
    // 0x2015f8: 0xae690004  sw          $t1, 0x4($s3)
    ctx->pc = 0x2015f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 9));
label_2015fc:
    // 0x2015fc: 0x0  nop
    ctx->pc = 0x2015fcu;
    // NOP
label_201600:
    // 0x201600: 0x31690010  andi        $t1, $t3, 0x10
    ctx->pc = 0x201600u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)16);
label_201604:
    // 0x201604: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
label_201608:
    if (ctx->pc == 0x201608u) {
        ctx->pc = 0x20160Cu;
        goto label_20160c;
    }
    ctx->pc = 0x201604u;
    {
        const bool branch_taken_0x201604 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x201604) {
            ctx->pc = 0x20161Cu;
            goto label_20161c;
        }
    }
    ctx->pc = 0x20160Cu;
label_20160c:
    // 0x20160c: 0x90ea0001  lbu         $t2, 0x1($a3)
    ctx->pc = 0x20160cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_201610:
    // 0x201610: 0x8e690008  lw          $t1, 0x8($s3)
    ctx->pc = 0x201610u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_201614:
    // 0x201614: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x201614u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_201618:
    // 0x201618: 0xae690008  sw          $t1, 0x8($s3)
    ctx->pc = 0x201618u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 9));
label_20161c:
    // 0x20161c: 0x0  nop
    ctx->pc = 0x20161cu;
    // NOP
label_201620:
    // 0x201620: 0x31690020  andi        $t1, $t3, 0x20
    ctx->pc = 0x201620u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32);
label_201624:
    // 0x201624: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
label_201628:
    if (ctx->pc == 0x201628u) {
        ctx->pc = 0x20162Cu;
        goto label_20162c;
    }
    ctx->pc = 0x201624u;
    {
        const bool branch_taken_0x201624 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x201624) {
            ctx->pc = 0x20163Cu;
            goto label_20163c;
        }
    }
    ctx->pc = 0x20162Cu;
label_20162c:
    // 0x20162c: 0x90e90001  lbu         $t1, 0x1($a3)
    ctx->pc = 0x20162cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_201630:
    // 0x201630: 0x8e67000c  lw          $a3, 0xC($s3)
    ctx->pc = 0x201630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_201634:
    // 0x201634: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x201634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_201638:
    // 0x201638: 0xae67000c  sw          $a3, 0xC($s3)
    ctx->pc = 0x201638u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 7));
label_20163c:
    // 0x20163c: 0x0  nop
    ctx->pc = 0x20163cu;
    // NOP
label_201640:
    // 0x201640: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x201640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_201644:
    // 0x201644: 0x28c70005  slti        $a3, $a2, 0x5
    ctx->pc = 0x201644u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
label_201648:
    // 0x201648: 0x14e0ffd3  bnez        $a3, . + 4 + (-0x2D << 2)
label_20164c:
    if (ctx->pc == 0x20164Cu) {
        ctx->pc = 0x20164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201648u;
        // 0x20164c: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201650u;
        goto label_201650;
    }
    ctx->pc = 0x201648u;
    {
        const bool branch_taken_0x201648 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x20164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201648u;
        // 0x20164c: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201648) {
            ctx->pc = 0x201598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201598;
        }
    }
    ctx->pc = 0x201650u;
label_201650:
    // 0x201650: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x201650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201654:
    // 0x201654: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x201654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
label_201658:
    // 0x201658: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x201658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_20165c:
    // 0x20165c: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x20165cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
label_201660:
    // 0x201660: 0x2463a230  addiu       $v1, $v1, -0x5DD0
    ctx->pc = 0x201660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943280));
label_201664:
    // 0x201664: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x201664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_201668:
    // 0x201668: 0x16460003  bne         $s2, $a2, . + 4 + (0x3 << 2)
label_20166c:
    if (ctx->pc == 0x20166Cu) {
        ctx->pc = 0x20166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201668u;
        // 0x20166c: 0x2863821  addu        $a3, $s4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201670u;
        goto label_201670;
    }
    ctx->pc = 0x201668u;
    {
        const bool branch_taken_0x201668 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 6));
        ctx->pc = 0x20166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201668u;
        // 0x20166c: 0x2863821  addu        $a3, $s4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201668) {
            ctx->pc = 0x201678u;
            goto label_201678;
        }
    }
    ctx->pc = 0x201670u;
label_201670:
    // 0x201670: 0x10000003  b           . + 4 + (0x3 << 2)
label_201674:
    if (ctx->pc == 0x201674u) {
        ctx->pc = 0x201674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201670u;
        // 0x201674: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201678u;
        goto label_201678;
    }
    ctx->pc = 0x201670u;
    {
        const bool branch_taken_0x201670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201670u;
        // 0x201674: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201670) {
            ctx->pc = 0x201680u;
            goto label_201680;
        }
    }
    ctx->pc = 0x201678u;
label_201678:
    // 0x201678: 0x90e7005e  lbu         $a3, 0x5E($a3)
    ctx->pc = 0x201678u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 94)));
label_20167c:
    // 0x20167c: 0x0  nop
    ctx->pc = 0x20167cu;
    // NOP
label_201680:
    // 0x201680: 0x10e50028  beq         $a3, $a1, . + 4 + (0x28 << 2)
label_201684:
    if (ctx->pc == 0x201684u) {
        ctx->pc = 0x201688u;
        goto label_201688;
    }
    ctx->pc = 0x201680u;
    {
        const bool branch_taken_0x201680 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x201680) {
            ctx->pc = 0x201724u;
            goto label_201724;
        }
    }
    ctx->pc = 0x201688u;
label_201688:
    // 0x201688: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x201688u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_20168c:
    // 0x20168c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20168cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_201690:
    // 0x201690: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x201690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_201694:
    // 0x201694: 0x342139c0  ori         $at, $at, 0x39C0
    ctx->pc = 0x201694u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14784);
label_201698:
    // 0x201698: 0xe13821  addu        $a3, $a3, $at
    ctx->pc = 0x201698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_20169c:
    // 0x20169c: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x20169cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_2016a0:
    // 0x2016a0: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2016a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_2016a4:
    // 0x2016a4: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x2016a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_2016a8:
    // 0x2016a8: 0xdd0a0000  ld          $t2, 0x0($t0)
    ctx->pc = 0x2016a8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 8), 0)));
label_2016ac:
    // 0x2016ac: 0x31480008  andi        $t0, $t2, 0x8
    ctx->pc = 0x2016acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)8);
label_2016b0:
    // 0x2016b0: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
label_2016b4:
    if (ctx->pc == 0x2016B4u) {
        ctx->pc = 0x2016B8u;
        goto label_2016b8;
    }
    ctx->pc = 0x2016B0u;
    {
        const bool branch_taken_0x2016b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2016b0) {
            ctx->pc = 0x2016C8u;
            goto label_2016c8;
        }
    }
    ctx->pc = 0x2016B8u;
label_2016b8:
    // 0x2016b8: 0x90e90001  lbu         $t1, 0x1($a3)
    ctx->pc = 0x2016b8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_2016bc:
    // 0x2016bc: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x2016bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2016c0:
    // 0x2016c0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2016c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_2016c4:
    // 0x2016c4: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x2016c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
label_2016c8:
    // 0x2016c8: 0x31480004  andi        $t0, $t2, 0x4
    ctx->pc = 0x2016c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4);
label_2016cc:
    // 0x2016cc: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
label_2016d0:
    if (ctx->pc == 0x2016D0u) {
        ctx->pc = 0x2016D4u;
        goto label_2016d4;
    }
    ctx->pc = 0x2016CCu;
    {
        const bool branch_taken_0x2016cc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2016cc) {
            ctx->pc = 0x2016E4u;
            goto label_2016e4;
        }
    }
    ctx->pc = 0x2016D4u;
label_2016d4:
    // 0x2016d4: 0x90e90001  lbu         $t1, 0x1($a3)
    ctx->pc = 0x2016d4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_2016d8:
    // 0x2016d8: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x2016d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2016dc:
    // 0x2016dc: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2016dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_2016e0:
    // 0x2016e0: 0xae680004  sw          $t0, 0x4($s3)
    ctx->pc = 0x2016e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 8));
label_2016e4:
    // 0x2016e4: 0x0  nop
    ctx->pc = 0x2016e4u;
    // NOP
label_2016e8:
    // 0x2016e8: 0x31480010  andi        $t0, $t2, 0x10
    ctx->pc = 0x2016e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)16);
label_2016ec:
    // 0x2016ec: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
label_2016f0:
    if (ctx->pc == 0x2016F0u) {
        ctx->pc = 0x2016F4u;
        goto label_2016f4;
    }
    ctx->pc = 0x2016ECu;
    {
        const bool branch_taken_0x2016ec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2016ec) {
            ctx->pc = 0x201704u;
            goto label_201704;
        }
    }
    ctx->pc = 0x2016F4u;
label_2016f4:
    // 0x2016f4: 0x90e90001  lbu         $t1, 0x1($a3)
    ctx->pc = 0x2016f4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_2016f8:
    // 0x2016f8: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x2016f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2016fc:
    // 0x2016fc: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2016fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_201700:
    // 0x201700: 0xae680008  sw          $t0, 0x8($s3)
    ctx->pc = 0x201700u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 8));
label_201704:
    // 0x201704: 0x0  nop
    ctx->pc = 0x201704u;
    // NOP
label_201708:
    // 0x201708: 0x31480020  andi        $t0, $t2, 0x20
    ctx->pc = 0x201708u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)32);
label_20170c:
    // 0x20170c: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
label_201710:
    if (ctx->pc == 0x201710u) {
        ctx->pc = 0x201714u;
        goto label_201714;
    }
    ctx->pc = 0x20170Cu;
    {
        const bool branch_taken_0x20170c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x20170c) {
            ctx->pc = 0x201724u;
            goto label_201724;
        }
    }
    ctx->pc = 0x201714u;
label_201714:
    // 0x201714: 0x90e80001  lbu         $t0, 0x1($a3)
    ctx->pc = 0x201714u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_201718:
    // 0x201718: 0x8e67000c  lw          $a3, 0xC($s3)
    ctx->pc = 0x201718u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_20171c:
    // 0x20171c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x20171cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_201720:
    // 0x201720: 0xae67000c  sw          $a3, 0xC($s3)
    ctx->pc = 0x201720u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 7));
label_201724:
    // 0x201724: 0x0  nop
    ctx->pc = 0x201724u;
    // NOP
label_201728:
    // 0x201728: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x201728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_20172c:
    // 0x20172c: 0x28c70005  slti        $a3, $a2, 0x5
    ctx->pc = 0x20172cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
label_201730:
    // 0x201730: 0x14e0ffcd  bnez        $a3, . + 4 + (-0x33 << 2)
label_201734:
    if (ctx->pc == 0x201734u) {
        ctx->pc = 0x201738u;
        goto label_201738;
    }
    ctx->pc = 0x201730u;
    {
        const bool branch_taken_0x201730 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x201730) {
            ctx->pc = 0x201668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201668;
        }
    }
    ctx->pc = 0x201738u;
label_201738:
    // 0x201738: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x201738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20173c:
    // 0x20173c: 0x28610097  slti        $at, $v1, 0x97
    ctx->pc = 0x20173cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)151) ? 1 : 0);
label_201740:
    // 0x201740: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_201744:
    if (ctx->pc == 0x201744u) {
        ctx->pc = 0x201748u;
        goto label_201748;
    }
    ctx->pc = 0x201740u;
    {
        const bool branch_taken_0x201740 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x201740) {
            ctx->pc = 0x20174Cu;
            goto label_20174c;
        }
    }
    ctx->pc = 0x201748u;
label_201748:
    // 0x201748: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x201748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_20174c:
    // 0x20174c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x20174cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_201750:
    // 0x201750: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x201750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_201754:
    // 0x201754: 0x28610097  slti        $at, $v1, 0x97
    ctx->pc = 0x201754u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)151) ? 1 : 0);
label_201758:
    // 0x201758: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_20175c:
    if (ctx->pc == 0x20175Cu) {
        ctx->pc = 0x201760u;
        goto label_201760;
    }
    ctx->pc = 0x201758u;
    {
        const bool branch_taken_0x201758 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x201758) {
            ctx->pc = 0x201764u;
            goto label_201764;
        }
    }
    ctx->pc = 0x201760u;
label_201760:
    // 0x201760: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x201760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_201764:
    // 0x201764: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x201764u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_201768:
    // 0x201768: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x201768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_20176c:
    // 0x20176c: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x20176cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
label_201770:
    // 0x201770: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_201774:
    if (ctx->pc == 0x201774u) {
        ctx->pc = 0x201778u;
        goto label_201778;
    }
    ctx->pc = 0x201770u;
    {
        const bool branch_taken_0x201770 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x201770) {
            ctx->pc = 0x20177Cu;
            goto label_20177c;
        }
    }
    ctx->pc = 0x201778u;
label_201778:
    // 0x201778: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x201778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_20177c:
    // 0x20177c: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x20177cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_201780:
    // 0x201780: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x201780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_201784:
    // 0x201784: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x201784u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
label_201788:
    // 0x201788: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_20178c:
    if (ctx->pc == 0x20178Cu) {
        ctx->pc = 0x201790u;
        goto label_201790;
    }
    ctx->pc = 0x201788u;
    {
        const bool branch_taken_0x201788 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x201788) {
            ctx->pc = 0x201794u;
            goto label_201794;
        }
    }
    ctx->pc = 0x201790u;
label_201790:
    // 0x201790: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x201790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_201794:
    // 0x201794: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x201794u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_201798:
    // 0x201798: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x201798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20179c:
    // 0x20179c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20179cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2017a0:
    // 0x2017a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2017a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2017a4:
    // 0x2017a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2017a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2017a8:
    // 0x2017a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2017a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2017ac:
    // 0x2017ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2017acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2017b0:
    // 0x2017b0: 0x3e00008  jr          $ra
label_2017b4:
    if (ctx->pc == 0x2017B4u) {
        ctx->pc = 0x2017B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2017B0u;
        // 0x2017b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2017B8u;
        goto label_2017b8;
    }
    ctx->pc = 0x2017B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2017B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2017B0u;
        // 0x2017b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2017B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2017B8u;
label_2017b8:
    // 0x2017b8: 0x0  nop
    ctx->pc = 0x2017b8u;
    // NOP
label_2017bc:
    // 0x2017bc: 0x0  nop
    ctx->pc = 0x2017bcu;
    // NOP
label_2017c0:
    // 0x2017c0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2017c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_2017c4:
    // 0x2017c4: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2017c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_2017c8:
    // 0x2017c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2017c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2017cc:
    // 0x2017cc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2017ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2017d0:
    // 0x2017d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2017d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2017d4:
    // 0x2017d4: 0x2463f700  addiu       $v1, $v1, -0x900
    ctx->pc = 0x2017d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964992));
label_2017d8:
    // 0x2017d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2017d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2017dc:
    // 0x2017dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2017dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2017e0:
    // 0x2017e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2017e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2017e4:
    // 0x2017e4: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x2017e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_2017e8:
    // 0x2017e8: 0x8c25f468  lw          $a1, -0xB98($at)
    ctx->pc = 0x2017e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_2017ec:
    // 0x2017ec: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2017ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_2017f0:
    // 0x2017f0: 0x2610f440  addiu       $s0, $s0, -0xBC0
    ctx->pc = 0x2017f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964288));
label_2017f4:
    // 0x2017f4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2017f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2017f8:
    // 0x2017f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2017f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2017fc:
    // 0x2017fc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2017fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_201800:
    // 0x201800: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x201800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_201804:
    // 0x201804: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x201804u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_201808:
    // 0x201808: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x201808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20180c:
    // 0x20180c: 0x8e43048c  lw          $v1, 0x48C($s2)
    ctx->pc = 0x20180cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
label_201810:
    // 0x201810: 0x1460007a  bnez        $v1, . + 4 + (0x7A << 2)
label_201814:
    if (ctx->pc == 0x201814u) {
        ctx->pc = 0x201814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201810u;
        // 0x201814: 0x2631f460  addiu       $s1, $s1, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201818u;
        goto label_201818;
    }
    ctx->pc = 0x201810u;
    {
        const bool branch_taken_0x201810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x201814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201810u;
        // 0x201814: 0x2631f460  addiu       $s1, $s1, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201810) {
            ctx->pc = 0x2019FCu;
            { ctx->pc = 0x2019fc; return; }
        }
    }
    ctx->pc = 0x201818u;
label_201818:
    // 0x201818: 0xc080f84  jal         func_203E10
label_20181c:
    if (ctx->pc == 0x20181Cu) {
        ctx->pc = 0x20181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201818u;
        // 0x20181c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201820u;
        goto label_201820;
    }
    ctx->pc = 0x201818u;
    SET_GPR_U32(ctx, 31, 0x201820u);
    ctx->pc = 0x20181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201818u;
    // 0x20181c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E10u;
    { ctx->pc = 0x203e10; return; }
    ctx->pc = 0x201820u;
label_201820:
    // 0x201820: 0x10000064  b           . + 4 + (0x64 << 2)
label_201824:
    if (ctx->pc == 0x201824u) {
        ctx->pc = 0x201828u;
        goto label_201828;
    }
    ctx->pc = 0x201820u;
    {
        const bool branch_taken_0x201820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201820) {
            ctx->pc = 0x2019B4u;
            { ctx->pc = 0x2019b4; return; }
        }
    }
    ctx->pc = 0x201828u;
label_201828:
    // 0x201828: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x201828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20182c:
    // 0x20182c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20182cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_201830:
    // 0x201830: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_201834:
    if (ctx->pc == 0x201834u) {
        ctx->pc = 0x201834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201830u;
        // 0x201834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201838u;
        goto label_201838;
    }
    ctx->pc = 0x201830u;
    {
        const bool branch_taken_0x201830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x201834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201830u;
        // 0x201834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201830) {
            ctx->pc = 0x201884u;
            goto label_201884;
        }
    }
    ctx->pc = 0x201838u;
label_201838:
    // 0x201838: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_20183c:
    if (ctx->pc == 0x20183Cu) {
        ctx->pc = 0x201840u;
        goto label_201840;
    }
    ctx->pc = 0x201838u;
    {
        const bool branch_taken_0x201838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x201838) {
            ctx->pc = 0x201858u;
            goto label_201858;
        }
    }
    ctx->pc = 0x201840u;
label_201840:
    // 0x201840: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_201844:
    if (ctx->pc == 0x201844u) {
        ctx->pc = 0x201848u;
        goto label_201848;
    }
    ctx->pc = 0x201840u;
    {
        const bool branch_taken_0x201840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x201840) {
            ctx->pc = 0x201850u;
            goto label_201850;
        }
    }
    ctx->pc = 0x201848u;
label_201848:
    // 0x201848: 0x1000000c  b           . + 4 + (0xC << 2)
label_20184c:
    if (ctx->pc == 0x20184Cu) {
        ctx->pc = 0x201850u;
        goto label_201850;
    }
    ctx->pc = 0x201848u;
    {
        const bool branch_taken_0x201848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201848) {
            ctx->pc = 0x20187Cu;
            goto label_20187c;
        }
    }
    ctx->pc = 0x201850u;
label_201850:
    // 0x201850: 0x1000000a  b           . + 4 + (0xA << 2)
label_201854:
    if (ctx->pc == 0x201854u) {
        ctx->pc = 0x201854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201850u;
        // 0x201854: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201858u;
        goto label_201858;
    }
    ctx->pc = 0x201850u;
    {
        const bool branch_taken_0x201850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201850u;
        // 0x201854: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201850) {
            ctx->pc = 0x20187Cu;
            goto label_20187c;
        }
    }
    ctx->pc = 0x201858u;
label_201858:
    // 0x201858: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x201858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_20185c:
    // 0x20185c: 0xc080fe4  jal         func_203F90
label_201860:
    if (ctx->pc == 0x201860u) {
        ctx->pc = 0x201860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20185Cu;
        // 0x201860: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201864u;
        goto label_201864;
    }
    ctx->pc = 0x20185Cu;
    SET_GPR_U32(ctx, 31, 0x201864u);
    ctx->pc = 0x201860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20185Cu;
    // 0x201860: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    { ctx->pc = 0x203f90; return; }
    ctx->pc = 0x201864u;
label_201864:
    // 0x201864: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x201864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_201868:
    // 0x201868: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x201868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_20186c:
    // 0x20186c: 0xc08f390  jal         func_23CE40
label_201870:
    if (ctx->pc == 0x201870u) {
        ctx->pc = 0x201870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20186Cu;
        // 0x201870: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201874u;
        goto label_201874;
    }
    ctx->pc = 0x20186Cu;
    SET_GPR_U32(ctx, 31, 0x201874u);
    ctx->pc = 0x201870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20186Cu;
    // 0x201870: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    { ctx->pc = 0x23ce40; return; }
    ctx->pc = 0x201874u;
label_201874:
    // 0x201874: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x201874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_201878:
    // 0x201878: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x201878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_20187c:
    // 0x20187c: 0x0  nop
    ctx->pc = 0x20187cu;
    // NOP
label_201880:
    // 0x201880: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x201880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_201884:
    // 0x201884: 0x0  nop
    ctx->pc = 0x201884u;
    // NOP
label_201888:
    // 0x201888: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x201888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20188c:
    // 0x20188c: 0x8c22f460  lw          $v0, -0xBA0($at)
    ctx->pc = 0x20188cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964320)));
label_201890:
    // 0x201890: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x201890u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
label_201894:
    // 0x201894: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x201894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201898:
    // 0x201898: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
label_20189c:
    if (ctx->pc == 0x20189Cu) {
        ctx->pc = 0x20189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201898u;
        // 0x20189c: 0x2673f460  addiu       $s3, $s3, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2018A0u;
        goto label_2018a0;
    }
    ctx->pc = 0x201898u;
    {
        const bool branch_taken_0x201898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x20189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201898u;
        // 0x20189c: 0x2673f460  addiu       $s3, $s3, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201898) {
            ctx->pc = 0x2018C0u;
            goto label_2018c0;
        }
    }
    ctx->pc = 0x2018A0u;
label_2018a0:
    // 0x2018a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2018a4:
    if (ctx->pc == 0x2018A4u) {
        ctx->pc = 0x2018A8u;
        goto label_2018a8;
    }
    ctx->pc = 0x2018A0u;
    {
        const bool branch_taken_0x2018a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2018a0) {
            ctx->pc = 0x2018B0u;
            goto label_2018b0;
        }
    }
    ctx->pc = 0x2018A8u;
label_2018a8:
    // 0x2018a8: 0x10000028  b           . + 4 + (0x28 << 2)
label_2018ac:
    if (ctx->pc == 0x2018ACu) {
        ctx->pc = 0x2018B0u;
        goto label_2018b0;
    }
    ctx->pc = 0x2018A8u;
    {
        const bool branch_taken_0x2018a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2018a8) {
            ctx->pc = 0x20194Cu;
            { ctx->pc = 0x20194c; return; }
        }
    }
    ctx->pc = 0x2018B0u;
label_2018b0:
    // 0x2018b0: 0xc0810f0  jal         func_2043C0
label_2018b4:
    if (ctx->pc == 0x2018B4u) {
        ctx->pc = 0x2018B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018B0u;
        // 0x2018b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2018B8u;
        goto label_2018b8;
    }
    ctx->pc = 0x2018B0u;
    SET_GPR_U32(ctx, 31, 0x2018B8u);
    ctx->pc = 0x2018B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2018B0u;
    // 0x2018b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2043C0u;
    { ctx->pc = 0x2043c0; return; }
    ctx->pc = 0x2018B8u;
label_2018b8:
    // 0x2018b8: 0x10000024  b           . + 4 + (0x24 << 2)
label_2018bc:
    if (ctx->pc == 0x2018BCu) {
        ctx->pc = 0x2018C0u;
        goto label_2018c0;
    }
    ctx->pc = 0x2018B8u;
    {
        const bool branch_taken_0x2018b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2018b8) {
            ctx->pc = 0x20194Cu;
            { ctx->pc = 0x20194c; return; }
        }
    }
    ctx->pc = 0x2018C0u;
label_2018c0:
    // 0x2018c0: 0x27a5015c  addiu       $a1, $sp, 0x15C
    ctx->pc = 0x2018c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_2018c4:
    // 0x2018c4: 0xc06c672  jal         func_1B19C8
label_2018c8:
    if (ctx->pc == 0x2018C8u) {
        ctx->pc = 0x2018C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018C4u;
        // 0x2018c8: 0x27a60158  addiu       $a2, $sp, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2018CCu;
        goto label_2018cc;
    }
    ctx->pc = 0x2018C4u;
    SET_GPR_U32(ctx, 31, 0x2018CCu);
    ctx->pc = 0x2018C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2018C4u;
    // 0x2018c8: 0x27a60158  addiu       $a2, $sp, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B19C8u;
    { ctx->pc = 0x1b19c8; return; }
    ctx->pc = 0x2018CCu;
label_2018cc:
    // 0x2018cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2018ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2018d0:
    // 0x2018d0: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
label_2018d4:
    if (ctx->pc == 0x2018D4u) {
        ctx->pc = 0x2018D8u;
        { ctx->pc = 0x2018d8; return; }
    }
    ctx->pc = 0x2018D0u;
    {
        const bool branch_taken_0x2018d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2018d0) {
            ctx->pc = 0x20194Cu;
            { ctx->pc = 0x20194c; return; }
        }
    }
    ctx->pc = 0x2018D8u;
    ctx->pc = 0x2018d8u;
    return;
}
