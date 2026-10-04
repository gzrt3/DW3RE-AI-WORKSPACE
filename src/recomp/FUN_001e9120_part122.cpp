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

// Function: FUN_001e9120
// Address: 0x1e9120 - 0x2291f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001e9120_part122(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x224270u: goto label_224270;
        case 0x224274u: goto label_224274;
        case 0x224278u: goto label_224278;
        case 0x22427cu: goto label_22427c;
        case 0x224280u: goto label_224280;
        case 0x224284u: goto label_224284;
        case 0x224288u: goto label_224288;
        case 0x22428cu: goto label_22428c;
        case 0x224290u: goto label_224290;
        case 0x224294u: goto label_224294;
        case 0x224298u: goto label_224298;
        case 0x22429cu: goto label_22429c;
        case 0x2242a0u: goto label_2242a0;
        case 0x2242a4u: goto label_2242a4;
        case 0x2242a8u: goto label_2242a8;
        case 0x2242acu: goto label_2242ac;
        case 0x2242b0u: goto label_2242b0;
        case 0x2242b4u: goto label_2242b4;
        case 0x2242b8u: goto label_2242b8;
        case 0x2242bcu: goto label_2242bc;
        case 0x2242c0u: goto label_2242c0;
        case 0x2242c4u: goto label_2242c4;
        case 0x2242c8u: goto label_2242c8;
        case 0x2242ccu: goto label_2242cc;
        case 0x2242d0u: goto label_2242d0;
        case 0x2242d4u: goto label_2242d4;
        case 0x2242d8u: goto label_2242d8;
        case 0x2242dcu: goto label_2242dc;
        case 0x2242e0u: goto label_2242e0;
        case 0x2242e4u: goto label_2242e4;
        case 0x2242e8u: goto label_2242e8;
        case 0x2242ecu: goto label_2242ec;
        case 0x2242f0u: goto label_2242f0;
        case 0x2242f4u: goto label_2242f4;
        case 0x2242f8u: goto label_2242f8;
        case 0x2242fcu: goto label_2242fc;
        case 0x224300u: goto label_224300;
        case 0x224304u: goto label_224304;
        case 0x224308u: goto label_224308;
        case 0x22430cu: goto label_22430c;
        case 0x224310u: goto label_224310;
        case 0x224314u: goto label_224314;
        case 0x224318u: goto label_224318;
        case 0x22431cu: goto label_22431c;
        case 0x224320u: goto label_224320;
        case 0x224324u: goto label_224324;
        case 0x224328u: goto label_224328;
        case 0x22432cu: goto label_22432c;
        case 0x224330u: goto label_224330;
        case 0x224334u: goto label_224334;
        case 0x224338u: goto label_224338;
        case 0x22433cu: goto label_22433c;
        case 0x224340u: goto label_224340;
        case 0x224344u: goto label_224344;
        case 0x224348u: goto label_224348;
        case 0x22434cu: goto label_22434c;
        case 0x224350u: goto label_224350;
        case 0x224354u: goto label_224354;
        case 0x224358u: goto label_224358;
        case 0x22435cu: goto label_22435c;
        case 0x224360u: goto label_224360;
        case 0x224364u: goto label_224364;
        case 0x224368u: goto label_224368;
        case 0x22436cu: goto label_22436c;
        case 0x224370u: goto label_224370;
        case 0x224374u: goto label_224374;
        case 0x224378u: goto label_224378;
        case 0x22437cu: goto label_22437c;
        case 0x224380u: goto label_224380;
        case 0x224384u: goto label_224384;
        case 0x224388u: goto label_224388;
        case 0x22438cu: goto label_22438c;
        case 0x224390u: goto label_224390;
        case 0x224394u: goto label_224394;
        case 0x224398u: goto label_224398;
        case 0x22439cu: goto label_22439c;
        case 0x2243a0u: goto label_2243a0;
        case 0x2243a4u: goto label_2243a4;
        case 0x2243a8u: goto label_2243a8;
        case 0x2243acu: goto label_2243ac;
        case 0x2243b0u: goto label_2243b0;
        case 0x2243b4u: goto label_2243b4;
        case 0x2243b8u: goto label_2243b8;
        case 0x2243bcu: goto label_2243bc;
        case 0x2243c0u: goto label_2243c0;
        case 0x2243c4u: goto label_2243c4;
        case 0x2243c8u: goto label_2243c8;
        case 0x2243ccu: goto label_2243cc;
        case 0x2243d0u: goto label_2243d0;
        case 0x2243d4u: goto label_2243d4;
        case 0x2243d8u: goto label_2243d8;
        case 0x2243dcu: goto label_2243dc;
        case 0x2243e0u: goto label_2243e0;
        case 0x2243e4u: goto label_2243e4;
        case 0x2243e8u: goto label_2243e8;
        case 0x2243ecu: goto label_2243ec;
        case 0x2243f0u: goto label_2243f0;
        case 0x2243f4u: goto label_2243f4;
        case 0x2243f8u: goto label_2243f8;
        case 0x2243fcu: goto label_2243fc;
        case 0x224400u: goto label_224400;
        case 0x224404u: goto label_224404;
        case 0x224408u: goto label_224408;
        case 0x22440cu: goto label_22440c;
        case 0x224410u: goto label_224410;
        case 0x224414u: goto label_224414;
        case 0x224418u: goto label_224418;
        case 0x22441cu: goto label_22441c;
        case 0x224420u: goto label_224420;
        case 0x224424u: goto label_224424;
        case 0x224428u: goto label_224428;
        case 0x22442cu: goto label_22442c;
        case 0x224430u: goto label_224430;
        case 0x224434u: goto label_224434;
        case 0x224438u: goto label_224438;
        case 0x22443cu: goto label_22443c;
        case 0x224440u: goto label_224440;
        case 0x224444u: goto label_224444;
        case 0x224448u: goto label_224448;
        case 0x22444cu: goto label_22444c;
        case 0x224450u: goto label_224450;
        case 0x224454u: goto label_224454;
        case 0x224458u: goto label_224458;
        case 0x22445cu: goto label_22445c;
        case 0x224460u: goto label_224460;
        case 0x224464u: goto label_224464;
        case 0x224468u: goto label_224468;
        case 0x22446cu: goto label_22446c;
        case 0x224470u: goto label_224470;
        case 0x224474u: goto label_224474;
        case 0x224478u: goto label_224478;
        case 0x22447cu: goto label_22447c;
        case 0x224480u: goto label_224480;
        case 0x224484u: goto label_224484;
        case 0x224488u: goto label_224488;
        case 0x22448cu: goto label_22448c;
        case 0x224490u: goto label_224490;
        case 0x224494u: goto label_224494;
        case 0x224498u: goto label_224498;
        case 0x22449cu: goto label_22449c;
        case 0x2244a0u: goto label_2244a0;
        case 0x2244a4u: goto label_2244a4;
        case 0x2244a8u: goto label_2244a8;
        case 0x2244acu: goto label_2244ac;
        case 0x2244b0u: goto label_2244b0;
        case 0x2244b4u: goto label_2244b4;
        case 0x2244b8u: goto label_2244b8;
        case 0x2244bcu: goto label_2244bc;
        case 0x2244c0u: goto label_2244c0;
        case 0x2244c4u: goto label_2244c4;
        case 0x2244c8u: goto label_2244c8;
        case 0x2244ccu: goto label_2244cc;
        case 0x2244d0u: goto label_2244d0;
        case 0x2244d4u: goto label_2244d4;
        case 0x2244d8u: goto label_2244d8;
        case 0x2244dcu: goto label_2244dc;
        case 0x2244e0u: goto label_2244e0;
        case 0x2244e4u: goto label_2244e4;
        case 0x2244e8u: goto label_2244e8;
        case 0x2244ecu: goto label_2244ec;
        case 0x2244f0u: goto label_2244f0;
        case 0x2244f4u: goto label_2244f4;
        case 0x2244f8u: goto label_2244f8;
        case 0x2244fcu: goto label_2244fc;
        case 0x224500u: goto label_224500;
        case 0x224504u: goto label_224504;
        case 0x224508u: goto label_224508;
        case 0x22450cu: goto label_22450c;
        case 0x224510u: goto label_224510;
        case 0x224514u: goto label_224514;
        case 0x224518u: goto label_224518;
        case 0x22451cu: goto label_22451c;
        case 0x224520u: goto label_224520;
        case 0x224524u: goto label_224524;
        case 0x224528u: goto label_224528;
        case 0x22452cu: goto label_22452c;
        case 0x224530u: goto label_224530;
        case 0x224534u: goto label_224534;
        case 0x224538u: goto label_224538;
        case 0x22453cu: goto label_22453c;
        case 0x224540u: goto label_224540;
        case 0x224544u: goto label_224544;
        case 0x224548u: goto label_224548;
        case 0x22454cu: goto label_22454c;
        case 0x224550u: goto label_224550;
        case 0x224554u: goto label_224554;
        case 0x224558u: goto label_224558;
        case 0x22455cu: goto label_22455c;
        case 0x224560u: goto label_224560;
        case 0x224564u: goto label_224564;
        case 0x224568u: goto label_224568;
        case 0x22456cu: goto label_22456c;
        case 0x224570u: goto label_224570;
        case 0x224574u: goto label_224574;
        case 0x224578u: goto label_224578;
        case 0x22457cu: goto label_22457c;
        case 0x224580u: goto label_224580;
        case 0x224584u: goto label_224584;
        case 0x224588u: goto label_224588;
        case 0x22458cu: goto label_22458c;
        case 0x224590u: goto label_224590;
        case 0x224594u: goto label_224594;
        case 0x224598u: goto label_224598;
        case 0x22459cu: goto label_22459c;
        case 0x2245a0u: goto label_2245a0;
        case 0x2245a4u: goto label_2245a4;
        case 0x2245a8u: goto label_2245a8;
        case 0x2245acu: goto label_2245ac;
        case 0x2245b0u: goto label_2245b0;
        case 0x2245b4u: goto label_2245b4;
        case 0x2245b8u: goto label_2245b8;
        case 0x2245bcu: goto label_2245bc;
        case 0x2245c0u: goto label_2245c0;
        case 0x2245c4u: goto label_2245c4;
        case 0x2245c8u: goto label_2245c8;
        case 0x2245ccu: goto label_2245cc;
        case 0x2245d0u: goto label_2245d0;
        case 0x2245d4u: goto label_2245d4;
        case 0x2245d8u: goto label_2245d8;
        case 0x2245dcu: goto label_2245dc;
        case 0x2245e0u: goto label_2245e0;
        case 0x2245e4u: goto label_2245e4;
        case 0x2245e8u: goto label_2245e8;
        case 0x2245ecu: goto label_2245ec;
        case 0x2245f0u: goto label_2245f0;
        case 0x2245f4u: goto label_2245f4;
        case 0x2245f8u: goto label_2245f8;
        case 0x2245fcu: goto label_2245fc;
        case 0x224600u: goto label_224600;
        case 0x224604u: goto label_224604;
        case 0x224608u: goto label_224608;
        case 0x22460cu: goto label_22460c;
        case 0x224610u: goto label_224610;
        case 0x224614u: goto label_224614;
        case 0x224618u: goto label_224618;
        case 0x22461cu: goto label_22461c;
        case 0x224620u: goto label_224620;
        case 0x224624u: goto label_224624;
        case 0x224628u: goto label_224628;
        case 0x22462cu: goto label_22462c;
        case 0x224630u: goto label_224630;
        case 0x224634u: goto label_224634;
        case 0x224638u: goto label_224638;
        case 0x22463cu: goto label_22463c;
        case 0x224640u: goto label_224640;
        case 0x224644u: goto label_224644;
        case 0x224648u: goto label_224648;
        case 0x22464cu: goto label_22464c;
        case 0x224650u: goto label_224650;
        case 0x224654u: goto label_224654;
        case 0x224658u: goto label_224658;
        case 0x22465cu: goto label_22465c;
        case 0x224660u: goto label_224660;
        case 0x224664u: goto label_224664;
        case 0x224668u: goto label_224668;
        case 0x22466cu: goto label_22466c;
        case 0x224670u: goto label_224670;
        case 0x224674u: goto label_224674;
        case 0x224678u: goto label_224678;
        case 0x22467cu: goto label_22467c;
        case 0x224680u: goto label_224680;
        case 0x224684u: goto label_224684;
        case 0x224688u: goto label_224688;
        case 0x22468cu: goto label_22468c;
        case 0x224690u: goto label_224690;
        case 0x224694u: goto label_224694;
        case 0x224698u: goto label_224698;
        case 0x22469cu: goto label_22469c;
        case 0x2246a0u: goto label_2246a0;
        case 0x2246a4u: goto label_2246a4;
        case 0x2246a8u: goto label_2246a8;
        case 0x2246acu: goto label_2246ac;
        case 0x2246b0u: goto label_2246b0;
        case 0x2246b4u: goto label_2246b4;
        case 0x2246b8u: goto label_2246b8;
        case 0x2246bcu: goto label_2246bc;
        case 0x2246c0u: goto label_2246c0;
        case 0x2246c4u: goto label_2246c4;
        case 0x2246c8u: goto label_2246c8;
        case 0x2246ccu: goto label_2246cc;
        case 0x2246d0u: goto label_2246d0;
        case 0x2246d4u: goto label_2246d4;
        case 0x2246d8u: goto label_2246d8;
        case 0x2246dcu: goto label_2246dc;
        case 0x2246e0u: goto label_2246e0;
        case 0x2246e4u: goto label_2246e4;
        case 0x2246e8u: goto label_2246e8;
        case 0x2246ecu: goto label_2246ec;
        case 0x2246f0u: goto label_2246f0;
        case 0x2246f4u: goto label_2246f4;
        case 0x2246f8u: goto label_2246f8;
        case 0x2246fcu: goto label_2246fc;
        case 0x224700u: goto label_224700;
        case 0x224704u: goto label_224704;
        case 0x224708u: goto label_224708;
        case 0x22470cu: goto label_22470c;
        case 0x224710u: goto label_224710;
        case 0x224714u: goto label_224714;
        case 0x224718u: goto label_224718;
        case 0x22471cu: goto label_22471c;
        case 0x224720u: goto label_224720;
        case 0x224724u: goto label_224724;
        case 0x224728u: goto label_224728;
        case 0x22472cu: goto label_22472c;
        case 0x224730u: goto label_224730;
        case 0x224734u: goto label_224734;
        case 0x224738u: goto label_224738;
        case 0x22473cu: goto label_22473c;
        case 0x224740u: goto label_224740;
        case 0x224744u: goto label_224744;
        case 0x224748u: goto label_224748;
        case 0x22474cu: goto label_22474c;
        case 0x224750u: goto label_224750;
        case 0x224754u: goto label_224754;
        case 0x224758u: goto label_224758;
        case 0x22475cu: goto label_22475c;
        case 0x224760u: goto label_224760;
        case 0x224764u: goto label_224764;
        case 0x224768u: goto label_224768;
        case 0x22476cu: goto label_22476c;
        case 0x224770u: goto label_224770;
        case 0x224774u: goto label_224774;
        case 0x224778u: goto label_224778;
        case 0x22477cu: goto label_22477c;
        case 0x224780u: goto label_224780;
        case 0x224784u: goto label_224784;
        case 0x224788u: goto label_224788;
        case 0x22478cu: goto label_22478c;
        case 0x224790u: goto label_224790;
        case 0x224794u: goto label_224794;
        case 0x224798u: goto label_224798;
        case 0x22479cu: goto label_22479c;
        case 0x2247a0u: goto label_2247a0;
        case 0x2247a4u: goto label_2247a4;
        case 0x2247a8u: goto label_2247a8;
        case 0x2247acu: goto label_2247ac;
        case 0x2247b0u: goto label_2247b0;
        case 0x2247b4u: goto label_2247b4;
        case 0x2247b8u: goto label_2247b8;
        case 0x2247bcu: goto label_2247bc;
        case 0x2247c0u: goto label_2247c0;
        case 0x2247c4u: goto label_2247c4;
        case 0x2247c8u: goto label_2247c8;
        case 0x2247ccu: goto label_2247cc;
        case 0x2247d0u: goto label_2247d0;
        case 0x2247d4u: goto label_2247d4;
        case 0x2247d8u: goto label_2247d8;
        case 0x2247dcu: goto label_2247dc;
        case 0x2247e0u: goto label_2247e0;
        case 0x2247e4u: goto label_2247e4;
        case 0x2247e8u: goto label_2247e8;
        case 0x2247ecu: goto label_2247ec;
        case 0x2247f0u: goto label_2247f0;
        case 0x2247f4u: goto label_2247f4;
        case 0x2247f8u: goto label_2247f8;
        case 0x2247fcu: goto label_2247fc;
        case 0x224800u: goto label_224800;
        case 0x224804u: goto label_224804;
        case 0x224808u: goto label_224808;
        case 0x22480cu: goto label_22480c;
        case 0x224810u: goto label_224810;
        case 0x224814u: goto label_224814;
        case 0x224818u: goto label_224818;
        case 0x22481cu: goto label_22481c;
        case 0x224820u: goto label_224820;
        case 0x224824u: goto label_224824;
        case 0x224828u: goto label_224828;
        case 0x22482cu: goto label_22482c;
        case 0x224830u: goto label_224830;
        case 0x224834u: goto label_224834;
        case 0x224838u: goto label_224838;
        case 0x22483cu: goto label_22483c;
        case 0x224840u: goto label_224840;
        case 0x224844u: goto label_224844;
        case 0x224848u: goto label_224848;
        case 0x22484cu: goto label_22484c;
        case 0x224850u: goto label_224850;
        case 0x224854u: goto label_224854;
        case 0x224858u: goto label_224858;
        case 0x22485cu: goto label_22485c;
        case 0x224860u: goto label_224860;
        case 0x224864u: goto label_224864;
        case 0x224868u: goto label_224868;
        case 0x22486cu: goto label_22486c;
        case 0x224870u: goto label_224870;
        case 0x224874u: goto label_224874;
        case 0x224878u: goto label_224878;
        case 0x22487cu: goto label_22487c;
        case 0x224880u: goto label_224880;
        case 0x224884u: goto label_224884;
        case 0x224888u: goto label_224888;
        case 0x22488cu: goto label_22488c;
        case 0x224890u: goto label_224890;
        case 0x224894u: goto label_224894;
        case 0x224898u: goto label_224898;
        case 0x22489cu: goto label_22489c;
        case 0x2248a0u: goto label_2248a0;
        case 0x2248a4u: goto label_2248a4;
        case 0x2248a8u: goto label_2248a8;
        case 0x2248acu: goto label_2248ac;
        case 0x2248b0u: goto label_2248b0;
        case 0x2248b4u: goto label_2248b4;
        case 0x2248b8u: goto label_2248b8;
        case 0x2248bcu: goto label_2248bc;
        case 0x2248c0u: goto label_2248c0;
        case 0x2248c4u: goto label_2248c4;
        case 0x2248c8u: goto label_2248c8;
        case 0x2248ccu: goto label_2248cc;
        case 0x2248d0u: goto label_2248d0;
        case 0x2248d4u: goto label_2248d4;
        case 0x2248d8u: goto label_2248d8;
        case 0x2248dcu: goto label_2248dc;
        case 0x2248e0u: goto label_2248e0;
        case 0x2248e4u: goto label_2248e4;
        case 0x2248e8u: goto label_2248e8;
        case 0x2248ecu: goto label_2248ec;
        case 0x2248f0u: goto label_2248f0;
        case 0x2248f4u: goto label_2248f4;
        case 0x2248f8u: goto label_2248f8;
        case 0x2248fcu: goto label_2248fc;
        case 0x224900u: goto label_224900;
        case 0x224904u: goto label_224904;
        case 0x224908u: goto label_224908;
        case 0x22490cu: goto label_22490c;
        case 0x224910u: goto label_224910;
        case 0x224914u: goto label_224914;
        case 0x224918u: goto label_224918;
        case 0x22491cu: goto label_22491c;
        case 0x224920u: goto label_224920;
        case 0x224924u: goto label_224924;
        case 0x224928u: goto label_224928;
        case 0x22492cu: goto label_22492c;
        case 0x224930u: goto label_224930;
        case 0x224934u: goto label_224934;
        case 0x224938u: goto label_224938;
        case 0x22493cu: goto label_22493c;
        case 0x224940u: goto label_224940;
        case 0x224944u: goto label_224944;
        case 0x224948u: goto label_224948;
        case 0x22494cu: goto label_22494c;
        case 0x224950u: goto label_224950;
        case 0x224954u: goto label_224954;
        case 0x224958u: goto label_224958;
        case 0x22495cu: goto label_22495c;
        case 0x224960u: goto label_224960;
        case 0x224964u: goto label_224964;
        case 0x224968u: goto label_224968;
        case 0x22496cu: goto label_22496c;
        case 0x224970u: goto label_224970;
        case 0x224974u: goto label_224974;
        case 0x224978u: goto label_224978;
        case 0x22497cu: goto label_22497c;
        case 0x224980u: goto label_224980;
        case 0x224984u: goto label_224984;
        case 0x224988u: goto label_224988;
        case 0x22498cu: goto label_22498c;
        case 0x224990u: goto label_224990;
        case 0x224994u: goto label_224994;
        case 0x224998u: goto label_224998;
        case 0x22499cu: goto label_22499c;
        case 0x2249a0u: goto label_2249a0;
        case 0x2249a4u: goto label_2249a4;
        case 0x2249a8u: goto label_2249a8;
        case 0x2249acu: goto label_2249ac;
        case 0x2249b0u: goto label_2249b0;
        case 0x2249b4u: goto label_2249b4;
        case 0x2249b8u: goto label_2249b8;
        case 0x2249bcu: goto label_2249bc;
        case 0x2249c0u: goto label_2249c0;
        case 0x2249c4u: goto label_2249c4;
        case 0x2249c8u: goto label_2249c8;
        case 0x2249ccu: goto label_2249cc;
        case 0x2249d0u: goto label_2249d0;
        case 0x2249d4u: goto label_2249d4;
        case 0x2249d8u: goto label_2249d8;
        case 0x2249dcu: goto label_2249dc;
        case 0x2249e0u: goto label_2249e0;
        case 0x2249e4u: goto label_2249e4;
        case 0x2249e8u: goto label_2249e8;
        case 0x2249ecu: goto label_2249ec;
        case 0x2249f0u: goto label_2249f0;
        case 0x2249f4u: goto label_2249f4;
        case 0x2249f8u: goto label_2249f8;
        case 0x2249fcu: goto label_2249fc;
        case 0x224a00u: goto label_224a00;
        case 0x224a04u: goto label_224a04;
        case 0x224a08u: goto label_224a08;
        case 0x224a0cu: goto label_224a0c;
        case 0x224a10u: goto label_224a10;
        case 0x224a14u: goto label_224a14;
        case 0x224a18u: goto label_224a18;
        case 0x224a1cu: goto label_224a1c;
        case 0x224a20u: goto label_224a20;
        case 0x224a24u: goto label_224a24;
        case 0x224a28u: goto label_224a28;
        case 0x224a2cu: goto label_224a2c;
        case 0x224a30u: goto label_224a30;
        case 0x224a34u: goto label_224a34;
        case 0x224a38u: goto label_224a38;
        case 0x224a3cu: goto label_224a3c;
        default: return;
    }

label_224270:
    // 0x224270: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x224270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_224274:
    // 0x224274: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x224274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_224278:
    // 0x224278: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x224278u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_22427c:
    // 0x22427c: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x22427cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_224280:
    // 0x224280: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x224280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224284:
    // 0x224284: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x224284u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_224288:
    // 0x224288: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x224288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_22428c:
    // 0x22428c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x22428cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224290:
    // 0x224290: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x224290u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_224294:
    // 0x224294: 0xc073504  jal         func_1CD410
label_224298:
    if (ctx->pc == 0x224298u) {
        ctx->pc = 0x224298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224294u;
        // 0x224298: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22429Cu;
        goto label_22429c;
    }
    ctx->pc = 0x224294u;
    SET_GPR_U32(ctx, 31, 0x22429Cu);
    ctx->pc = 0x224298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224294u;
    // 0x224298: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD410u, 0x224294u, 0x22429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22429Cu;
label_22429c:
    // 0x22429c: 0x10000022  b           . + 4 + (0x22 << 2)
label_2242a0:
    if (ctx->pc == 0x2242A0u) {
        ctx->pc = 0x2242A4u;
        goto label_2242a4;
    }
    ctx->pc = 0x22429Cu;
    {
        const bool branch_taken_0x22429c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22429c) {
            ctx->pc = 0x224328u;
            goto label_224328;
        }
    }
    ctx->pc = 0x2242A4u;
label_2242a4:
    // 0x2242a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2242a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2242a8:
    // 0x2242a8: 0xc045bc4  jal         func_116F10
label_2242ac:
    if (ctx->pc == 0x2242ACu) {
        ctx->pc = 0x2242ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2242A8u;
        // 0x2242ac: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2242B0u;
        goto label_2242b0;
    }
    ctx->pc = 0x2242A8u;
    SET_GPR_U32(ctx, 31, 0x2242B0u);
    ctx->pc = 0x2242ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2242A8u;
    // 0x2242ac: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116F10u, 0x2242A8u, 0x2242B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2242B0u;
label_2242b0:
    // 0x2242b0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2242b4:
    if (ctx->pc == 0x2242B4u) {
        ctx->pc = 0x2242B8u;
        goto label_2242b8;
    }
    ctx->pc = 0x2242B0u;
    {
        const bool branch_taken_0x2242b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2242b0) {
            ctx->pc = 0x224328u;
            goto label_224328;
        }
    }
    ctx->pc = 0x2242B8u;
label_2242b8:
    // 0x2242b8: 0xc08f0cc  jal         func_23C330
label_2242bc:
    if (ctx->pc == 0x2242BCu) {
        ctx->pc = 0x2242C0u;
        goto label_2242c0;
    }
    ctx->pc = 0x2242B8u;
    SET_GPR_U32(ctx, 31, 0x2242C0u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x2242B8u, 0x2242C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2242C0u;
label_2242c0:
    // 0x2242c0: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x2242c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2242c4:
    // 0x2242c4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2242c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_2242c8:
    // 0x2242c8: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2242c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2242cc:
    // 0x2242cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2242ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2242d0:
    // 0x2242d0: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2242d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_2242d4:
    // 0x2242d4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2242d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_2242d8:
    // 0x2242d8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2242d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2242dc:
    // 0x2242dc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2242dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_2242e0:
    // 0x2242e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2242e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2242e4:
    // 0x2242e4: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x2242e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_2242e8:
    // 0x2242e8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2242e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2242ec:
    // 0x2242ec: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2242ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2242f0:
    // 0x2242f0: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x2242f0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[3];
label_2242f4:
    // 0x2242f4: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x2242f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
label_2242f8:
    // 0x2242f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2242f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2242fc:
    // 0x2242fc: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2242fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
label_224300:
    // 0x224300: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x224300u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_224304:
    // 0x224304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x224304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_224308:
    // 0x224308: 0x0  nop
    ctx->pc = 0x224308u;
    // NOP
label_22430c:
    // 0x22430c: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x22430cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_224310:
    // 0x224310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_224314:
    // 0x224314: 0x0  nop
    ctx->pc = 0x224314u;
    // NOP
label_224318:
    // 0x224318: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x224318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_22431c:
    // 0x22431c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22431cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_224320:
    // 0x224320: 0xc04a670  jal         func_1299C0
label_224324:
    if (ctx->pc == 0x224324u) {
        ctx->pc = 0x224324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224320u;
        // 0x224324: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x224328u;
        goto label_224328;
    }
    ctx->pc = 0x224320u;
    SET_GPR_U32(ctx, 31, 0x224328u);
    ctx->pc = 0x224324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224320u;
    // 0x224324: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299C0u, 0x224320u, 0x224328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224328u;
label_224328:
    // 0x224328: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x224328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22432c:
    // 0x22432c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22432cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_224330:
    // 0x224330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x224330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_224334:
    // 0x224334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_224338:
    // 0x224338: 0x3e00008  jr          $ra
label_22433c:
    if (ctx->pc == 0x22433Cu) {
        ctx->pc = 0x22433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224338u;
        // 0x22433c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224340u;
        goto label_224340;
    }
    ctx->pc = 0x224338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224338u;
        // 0x22433c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224340u;
label_224340:
    // 0x224340: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x224340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_224344:
    // 0x224344: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x224344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_224348:
    // 0x224348: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x224348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_22434c:
    // 0x22434c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22434cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_224350:
    // 0x224350: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x224350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_224354:
    // 0x224354: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x224354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_224358:
    // 0x224358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x224358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22435c:
    // 0x22435c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22435cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_224360:
    // 0x224360: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x224360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_224364:
    // 0x224364: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x224364u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_224368:
    // 0x224368: 0x10430509  beq         $v0, $v1, . + 4 + (0x509 << 2)
label_22436c:
    if (ctx->pc == 0x22436Cu) {
        ctx->pc = 0x22436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224368u;
        // 0x22436c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224370u;
        goto label_224370;
    }
    ctx->pc = 0x224368u;
    {
        const bool branch_taken_0x224368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224368u;
        // 0x22436c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224368) {
            ctx->pc = 0x225790u;
            { ctx->pc = 0x225790; return; }
        }
    }
    ctx->pc = 0x224370u;
label_224370:
    // 0x224370: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x224370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_224374:
    // 0x224374: 0x104304f8  beq         $v0, $v1, . + 4 + (0x4F8 << 2)
label_224378:
    if (ctx->pc == 0x224378u) {
        ctx->pc = 0x224378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224374u;
        // 0x224378: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22437Cu;
        goto label_22437c;
    }
    ctx->pc = 0x224374u;
    {
        const bool branch_taken_0x224374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x224378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224374u;
        // 0x224378: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224374) {
            ctx->pc = 0x225758u;
            { ctx->pc = 0x225758; return; }
        }
    }
    ctx->pc = 0x22437Cu;
label_22437c:
    // 0x22437c: 0x104304e1  beq         $v0, $v1, . + 4 + (0x4E1 << 2)
label_224380:
    if (ctx->pc == 0x224380u) {
        ctx->pc = 0x224380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22437Cu;
        // 0x224380: 0x3c12002f  lui         $s2, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224384u;
        goto label_224384;
    }
    ctx->pc = 0x22437Cu;
    {
        const bool branch_taken_0x22437c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x224380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22437Cu;
        // 0x224380: 0x3c12002f  lui         $s2, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22437c) {
            ctx->pc = 0x225704u;
            { ctx->pc = 0x225704; return; }
        }
    }
    ctx->pc = 0x224384u;
label_224384:
    // 0x224384: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x224384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_224388:
    // 0x224388: 0x104304bc  beq         $v0, $v1, . + 4 + (0x4BC << 2)
label_22438c:
    if (ctx->pc == 0x22438Cu) {
        ctx->pc = 0x22438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224388u;
        // 0x22438c: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224390u;
        goto label_224390;
    }
    ctx->pc = 0x224388u;
    {
        const bool branch_taken_0x224388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224388u;
        // 0x22438c: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224388) {
            ctx->pc = 0x22567Cu;
            { ctx->pc = 0x22567c; return; }
        }
    }
    ctx->pc = 0x224390u;
label_224390:
    // 0x224390: 0x104304a6  beq         $v0, $v1, . + 4 + (0x4A6 << 2)
label_224394:
    if (ctx->pc == 0x224394u) {
        ctx->pc = 0x224398u;
        goto label_224398;
    }
    ctx->pc = 0x224390u;
    {
        const bool branch_taken_0x224390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x224390) {
            ctx->pc = 0x22562Cu;
            { ctx->pc = 0x22562c; return; }
        }
    }
    ctx->pc = 0x224398u;
label_224398:
    // 0x224398: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x224398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_22439c:
    // 0x22439c: 0x1043042a  beq         $v0, $v1, . + 4 + (0x42A << 2)
label_2243a0:
    if (ctx->pc == 0x2243A0u) {
        ctx->pc = 0x2243A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22439Cu;
        // 0x2243a0: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2243A4u;
        goto label_2243a4;
    }
    ctx->pc = 0x22439Cu;
    {
        const bool branch_taken_0x22439c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2243A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22439Cu;
        // 0x2243a0: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22439c) {
            ctx->pc = 0x225448u;
            { ctx->pc = 0x225448; return; }
        }
    }
    ctx->pc = 0x2243A4u;
label_2243a4:
    // 0x2243a4: 0x104303ec  beq         $v0, $v1, . + 4 + (0x3EC << 2)
label_2243a8:
    if (ctx->pc == 0x2243A8u) {
        ctx->pc = 0x2243ACu;
        goto label_2243ac;
    }
    ctx->pc = 0x2243A4u;
    {
        const bool branch_taken_0x2243a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2243a4) {
            ctx->pc = 0x225358u;
            { ctx->pc = 0x225358; return; }
        }
    }
    ctx->pc = 0x2243ACu;
label_2243ac:
    // 0x2243ac: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2243acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2243b0:
    // 0x2243b0: 0x104303e3  beq         $v0, $v1, . + 4 + (0x3E3 << 2)
label_2243b4:
    if (ctx->pc == 0x2243B4u) {
        ctx->pc = 0x2243B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243B0u;
        // 0x2243b4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2243B8u;
        goto label_2243b8;
    }
    ctx->pc = 0x2243B0u;
    {
        const bool branch_taken_0x2243b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2243B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243B0u;
        // 0x2243b4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243b0) {
            ctx->pc = 0x225340u;
            { ctx->pc = 0x225340; return; }
        }
    }
    ctx->pc = 0x2243B8u;
label_2243b8:
    // 0x2243b8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2243b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2243bc:
    // 0x2243bc: 0x10430376  beq         $v0, $v1, . + 4 + (0x376 << 2)
label_2243c0:
    if (ctx->pc == 0x2243C0u) {
        ctx->pc = 0x2243C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243BCu;
        // 0x2243c0: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2243C4u;
        goto label_2243c4;
    }
    ctx->pc = 0x2243BCu;
    {
        const bool branch_taken_0x2243bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2243C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243BCu;
        // 0x2243c0: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243bc) {
            ctx->pc = 0x225198u;
            { ctx->pc = 0x225198; return; }
        }
    }
    ctx->pc = 0x2243C4u;
label_2243c4:
    // 0x2243c4: 0x104302b2  beq         $v0, $v1, . + 4 + (0x2B2 << 2)
label_2243c8:
    if (ctx->pc == 0x2243C8u) {
        ctx->pc = 0x2243CCu;
        goto label_2243cc;
    }
    ctx->pc = 0x2243C4u;
    {
        const bool branch_taken_0x2243c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2243c4) {
            ctx->pc = 0x224E90u;
            { ctx->pc = 0x224e90; return; }
        }
    }
    ctx->pc = 0x2243CCu;
label_2243cc:
    // 0x2243cc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2243ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2243d0:
    // 0x2243d0: 0x1043026c  beq         $v0, $v1, . + 4 + (0x26C << 2)
label_2243d4:
    if (ctx->pc == 0x2243D4u) {
        ctx->pc = 0x2243D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243D0u;
        // 0x2243d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2243D8u;
        goto label_2243d8;
    }
    ctx->pc = 0x2243D0u;
    {
        const bool branch_taken_0x2243d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2243D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243D0u;
        // 0x2243d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243d0) {
            ctx->pc = 0x224D84u;
            { ctx->pc = 0x224d84; return; }
        }
    }
    ctx->pc = 0x2243D8u;
label_2243d8:
    // 0x2243d8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2243d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2243dc:
    // 0x2243dc: 0x1043024c  beq         $v0, $v1, . + 4 + (0x24C << 2)
label_2243e0:
    if (ctx->pc == 0x2243E0u) {
        ctx->pc = 0x2243E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243DCu;
        // 0x2243e0: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2243E4u;
        goto label_2243e4;
    }
    ctx->pc = 0x2243DCu;
    {
        const bool branch_taken_0x2243dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2243E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243DCu;
        // 0x2243e0: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243dc) {
            ctx->pc = 0x224D10u;
            { ctx->pc = 0x224d10; return; }
        }
    }
    ctx->pc = 0x2243E4u;
label_2243e4:
    // 0x2243e4: 0x10430235  beq         $v0, $v1, . + 4 + (0x235 << 2)
label_2243e8:
    if (ctx->pc == 0x2243E8u) {
        ctx->pc = 0x2243ECu;
        goto label_2243ec;
    }
    ctx->pc = 0x2243E4u;
    {
        const bool branch_taken_0x2243e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2243e4) {
            ctx->pc = 0x224CBCu;
            { ctx->pc = 0x224cbc; return; }
        }
    }
    ctx->pc = 0x2243ECu;
label_2243ec:
    // 0x2243ec: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2243ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2243f0:
    // 0x2243f0: 0x10430218  beq         $v0, $v1, . + 4 + (0x218 << 2)
label_2243f4:
    if (ctx->pc == 0x2243F4u) {
        ctx->pc = 0x2243F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243F0u;
        // 0x2243f4: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2243F8u;
        goto label_2243f8;
    }
    ctx->pc = 0x2243F0u;
    {
        const bool branch_taken_0x2243f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2243F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243F0u;
        // 0x2243f4: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243f0) {
            ctx->pc = 0x224C54u;
            { ctx->pc = 0x224c54; return; }
        }
    }
    ctx->pc = 0x2243F8u;
label_2243f8:
    // 0x2243f8: 0x104301e3  beq         $v0, $v1, . + 4 + (0x1E3 << 2)
label_2243fc:
    if (ctx->pc == 0x2243FCu) {
        ctx->pc = 0x224400u;
        goto label_224400;
    }
    ctx->pc = 0x2243F8u;
    {
        const bool branch_taken_0x2243f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2243f8) {
            ctx->pc = 0x224B88u;
            { ctx->pc = 0x224b88; return; }
        }
    }
    ctx->pc = 0x224400u;
label_224400:
    // 0x224400: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x224400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_224404:
    // 0x224404: 0x1043018d  beq         $v0, $v1, . + 4 + (0x18D << 2)
label_224408:
    if (ctx->pc == 0x224408u) {
        ctx->pc = 0x224408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224404u;
        // 0x224408: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22440Cu;
        goto label_22440c;
    }
    ctx->pc = 0x224404u;
    {
        const bool branch_taken_0x224404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x224408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224404u;
        // 0x224408: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224404) {
            ctx->pc = 0x224A3Cu;
            goto label_224a3c;
        }
    }
    ctx->pc = 0x22440Cu;
label_22440c:
    // 0x22440c: 0x10430161  beq         $v0, $v1, . + 4 + (0x161 << 2)
label_224410:
    if (ctx->pc == 0x224410u) {
        ctx->pc = 0x224414u;
        goto label_224414;
    }
    ctx->pc = 0x22440Cu;
    {
        const bool branch_taken_0x22440c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x22440c) {
            ctx->pc = 0x224994u;
            goto label_224994;
        }
    }
    ctx->pc = 0x224414u;
label_224414:
    // 0x224414: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x224414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_224418:
    // 0x224418: 0x1043011e  beq         $v0, $v1, . + 4 + (0x11E << 2)
label_22441c:
    if (ctx->pc == 0x22441Cu) {
        ctx->pc = 0x22441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224418u;
        // 0x22441c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224420u;
        goto label_224420;
    }
    ctx->pc = 0x224418u;
    {
        const bool branch_taken_0x224418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224418u;
        // 0x22441c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224418) {
            ctx->pc = 0x224894u;
            goto label_224894;
        }
    }
    ctx->pc = 0x224420u;
label_224420:
    // 0x224420: 0x10430106  beq         $v0, $v1, . + 4 + (0x106 << 2)
label_224424:
    if (ctx->pc == 0x224424u) {
        ctx->pc = 0x224428u;
        goto label_224428;
    }
    ctx->pc = 0x224420u;
    {
        const bool branch_taken_0x224420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x224420) {
            ctx->pc = 0x22483Cu;
            goto label_22483c;
        }
    }
    ctx->pc = 0x224428u;
label_224428:
    // 0x224428: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x224428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_22442c:
    // 0x22442c: 0x104300d9  beq         $v0, $v1, . + 4 + (0xD9 << 2)
label_224430:
    if (ctx->pc == 0x224430u) {
        ctx->pc = 0x224430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22442Cu;
        // 0x224430: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224434u;
        goto label_224434;
    }
    ctx->pc = 0x22442Cu;
    {
        const bool branch_taken_0x22442c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x224430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22442Cu;
        // 0x224430: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22442c) {
            ctx->pc = 0x224794u;
            goto label_224794;
        }
    }
    ctx->pc = 0x224434u;
label_224434:
    // 0x224434: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x224434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_224438:
    // 0x224438: 0x104300b2  beq         $v0, $v1, . + 4 + (0xB2 << 2)
label_22443c:
    if (ctx->pc == 0x22443Cu) {
        ctx->pc = 0x22443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224438u;
        // 0x22443c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224440u;
        goto label_224440;
    }
    ctx->pc = 0x224438u;
    {
        const bool branch_taken_0x224438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224438u;
        // 0x22443c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224438) {
            ctx->pc = 0x224704u;
            goto label_224704;
        }
    }
    ctx->pc = 0x224440u;
label_224440:
    // 0x224440: 0x1043008c  beq         $v0, $v1, . + 4 + (0x8C << 2)
label_224444:
    if (ctx->pc == 0x224444u) {
        ctx->pc = 0x224448u;
        goto label_224448;
    }
    ctx->pc = 0x224440u;
    {
        const bool branch_taken_0x224440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x224440) {
            ctx->pc = 0x224674u;
            goto label_224674;
        }
    }
    ctx->pc = 0x224448u;
label_224448:
    // 0x224448: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x224448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22444c:
    // 0x22444c: 0x10430058  beq         $v0, $v1, . + 4 + (0x58 << 2)
label_224450:
    if (ctx->pc == 0x224450u) {
        ctx->pc = 0x224450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22444Cu;
        // 0x224450: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224454u;
        goto label_224454;
    }
    ctx->pc = 0x22444Cu;
    {
        const bool branch_taken_0x22444c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x224450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22444Cu;
        // 0x224450: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22444c) {
            ctx->pc = 0x2245B0u;
            goto label_2245b0;
        }
    }
    ctx->pc = 0x224454u;
label_224454:
    // 0x224454: 0x10460023  beq         $v0, $a2, . + 4 + (0x23 << 2)
label_224458:
    if (ctx->pc == 0x224458u) {
        ctx->pc = 0x22445Cu;
        goto label_22445c;
    }
    ctx->pc = 0x224454u;
    {
        const bool branch_taken_0x224454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x224454) {
            ctx->pc = 0x2244E4u;
            goto label_2244e4;
        }
    }
    ctx->pc = 0x22445Cu;
label_22445c:
    // 0x22445c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_224460:
    if (ctx->pc == 0x224460u) {
        ctx->pc = 0x224464u;
        goto label_224464;
    }
    ctx->pc = 0x22445Cu;
    {
        const bool branch_taken_0x22445c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22445c) {
            ctx->pc = 0x22446Cu;
            goto label_22446c;
        }
    }
    ctx->pc = 0x224464u;
label_224464:
    // 0x224464: 0x100004cc  b           . + 4 + (0x4CC << 2)
label_224468:
    if (ctx->pc == 0x224468u) {
        ctx->pc = 0x224468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224464u;
        // 0x224468: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22446Cu;
        goto label_22446c;
    }
    ctx->pc = 0x224464u;
    {
        const bool branch_taken_0x224464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224464u;
        // 0x224468: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224464) {
            ctx->pc = 0x225798u;
            { ctx->pc = 0x225798; return; }
        }
    }
    ctx->pc = 0x22446Cu;
label_22446c:
    // 0x22446c: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x22446cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_224470:
    // 0x224470: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_224474:
    if (ctx->pc == 0x224474u) {
        ctx->pc = 0x224474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224470u;
        // 0x224474: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224478u;
        goto label_224478;
    }
    ctx->pc = 0x224470u;
    {
        const bool branch_taken_0x224470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224470u;
        // 0x224474: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224470) {
            ctx->pc = 0x2244A4u;
            goto label_2244a4;
        }
    }
    ctx->pc = 0x224478u;
label_224478:
    // 0x224478: 0x8623000a  lh          $v1, 0xA($s1)
    ctx->pc = 0x224478u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_22447c:
    // 0x22447c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22447cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_224480:
    // 0x224480: 0x8c244900  lw          $a0, 0x4900($at)
    ctx->pc = 0x224480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_224484:
    // 0x224484: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x224484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_224488:
    // 0x224488: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x224488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22448c:
    // 0x22448c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22448cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_224490:
    // 0x224490: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x224490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_224494:
    // 0x224494: 0x144004bf  bnez        $v0, . + 4 + (0x4BF << 2)
label_224498:
    if (ctx->pc == 0x224498u) {
        ctx->pc = 0x22449Cu;
        goto label_22449c;
    }
    ctx->pc = 0x224494u;
    {
        const bool branch_taken_0x224494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224494) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x22449Cu;
label_22449c:
    // 0x22449c: 0x100004bd  b           . + 4 + (0x4BD << 2)
label_2244a0:
    if (ctx->pc == 0x2244A0u) {
        ctx->pc = 0x2244A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22449Cu;
        // 0x2244a0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2244A4u;
        goto label_2244a4;
    }
    ctx->pc = 0x22449Cu;
    {
        const bool branch_taken_0x22449c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2244A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22449Cu;
        // 0x2244a0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22449c) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x2244A4u;
label_2244a4:
    // 0x2244a4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2244a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2244a8:
    // 0x2244a8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2244a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_2244ac:
    // 0x2244ac: 0x8623000a  lh          $v1, 0xA($s1)
    ctx->pc = 0x2244acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_2244b0:
    // 0x2244b0: 0x244250dc  addiu       $v0, $v0, 0x50DC
    ctx->pc = 0x2244b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20700));
label_2244b4:
    // 0x2244b4: 0x8c244900  lw          $a0, 0x4900($at)
    ctx->pc = 0x2244b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_2244b8:
    // 0x2244b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2244b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2244bc:
    // 0x2244bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2244bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2244c0:
    // 0x2244c0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2244c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2244c4:
    // 0x2244c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2244c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2244c8:
    // 0x2244c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2244c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2244cc:
    // 0x2244cc: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x2244ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2244d0:
    // 0x2244d0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2244d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2244d4:
    // 0x2244d4: 0x144004af  bnez        $v0, . + 4 + (0x4AF << 2)
label_2244d8:
    if (ctx->pc == 0x2244D8u) {
        ctx->pc = 0x2244DCu;
        goto label_2244dc;
    }
    ctx->pc = 0x2244D4u;
    {
        const bool branch_taken_0x2244d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2244d4) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x2244DCu;
label_2244dc:
    // 0x2244dc: 0x100004ad  b           . + 4 + (0x4AD << 2)
label_2244e0:
    if (ctx->pc == 0x2244E0u) {
        ctx->pc = 0x2244E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244DCu;
        // 0x2244e0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2244E4u;
        goto label_2244e4;
    }
    ctx->pc = 0x2244DCu;
    {
        const bool branch_taken_0x2244dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2244E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2244DCu;
        // 0x2244e0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2244dc) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x2244E4u;
label_2244e4:
    // 0x2244e4: 0x8623000a  lh          $v1, 0xA($s1)
    ctx->pc = 0x2244e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_2244e8:
    // 0x2244e8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2244e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2244ec:
    // 0x2244ec: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
label_2244f0:
    if (ctx->pc == 0x2244F0u) {
        ctx->pc = 0x2244F4u;
        goto label_2244f4;
    }
    ctx->pc = 0x2244ECu;
    {
        const bool branch_taken_0x2244ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2244ec) {
            ctx->pc = 0x224564u;
            goto label_224564;
        }
    }
    ctx->pc = 0x2244F4u;
label_2244f4:
    // 0x2244f4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2244f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_2244f8:
    // 0x2244f8: 0x246349b0  addiu       $v1, $v1, 0x49B0
    ctx->pc = 0x2244f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18864));
label_2244fc:
    // 0x2244fc: 0x9062005c  lbu         $v0, 0x5C($v1)
    ctx->pc = 0x2244fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 92)));
label_224500:
    // 0x224500: 0x104004a4  beqz        $v0, . + 4 + (0x4A4 << 2)
label_224504:
    if (ctx->pc == 0x224504u) {
        ctx->pc = 0x224508u;
        goto label_224508;
    }
    ctx->pc = 0x224500u;
    {
        const bool branch_taken_0x224500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224500) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224508u;
label_224508:
    // 0x224508: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x224508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_22450c:
    // 0x22450c: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x22450cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_224510:
    // 0x224510: 0x14a204a0  bne         $a1, $v0, . + 4 + (0x4A0 << 2)
label_224514:
    if (ctx->pc == 0x224514u) {
        ctx->pc = 0x224518u;
        goto label_224518;
    }
    ctx->pc = 0x224510u;
    {
        const bool branch_taken_0x224510 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x224510) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224518u;
label_224518:
    // 0x224518: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x224518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_22451c:
    // 0x22451c: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x22451cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_224520:
    // 0x224520: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x224520u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_224524:
    // 0x224524: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x224524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_224528:
    // 0x224528: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x224528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_22452c:
    // 0x22452c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x22452cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_224530:
    // 0x224530: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x224530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_224534:
    // 0x224534: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x224534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_224538:
    // 0x224538: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22453c:
    // 0x22453c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x22453cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_224540:
    // 0x224540: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x224540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_224544:
    // 0x224544: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x224544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_224548:
    // 0x224548: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x224548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_22454c:
    // 0x22454c: 0xc0448bc  jal         func_1122F0
label_224550:
    if (ctx->pc == 0x224550u) {
        ctx->pc = 0x224550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22454Cu;
        // 0x224550: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224554u;
        goto label_224554;
    }
    ctx->pc = 0x22454Cu;
    SET_GPR_U32(ctx, 31, 0x224554u);
    ctx->pc = 0x224550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22454Cu;
    // 0x224550: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1122F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122F0u, 0x22454Cu, 0x224554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224554u;
label_224554:
    // 0x224554: 0x1040048f  beqz        $v0, . + 4 + (0x48F << 2)
label_224558:
    if (ctx->pc == 0x224558u) {
        ctx->pc = 0x22455Cu;
        goto label_22455c;
    }
    ctx->pc = 0x224554u;
    {
        const bool branch_taken_0x224554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224554) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x22455Cu;
label_22455c:
    // 0x22455c: 0x1000048d  b           . + 4 + (0x48D << 2)
label_224560:
    if (ctx->pc == 0x224560u) {
        ctx->pc = 0x224560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22455Cu;
        // 0x224560: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224564u;
        goto label_224564;
    }
    ctx->pc = 0x22455Cu;
    {
        const bool branch_taken_0x22455c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22455Cu;
        // 0x224560: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22455c) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224564u;
label_224564:
    // 0x224564: 0x86250008  lh          $a1, 0x8($s1)
    ctx->pc = 0x224564u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_224568:
    // 0x224568: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x224568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_22456c:
    // 0x22456c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22456cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_224570:
    // 0x224570: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x224570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_224574:
    // 0x224574: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x224574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_224578:
    // 0x224578: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x224578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_22457c:
    // 0x22457c: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x22457cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_224580:
    // 0x224580: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x224580u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_224584:
    // 0x224584: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x224584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_224588:
    // 0x224588: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x224588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_22458c:
    // 0x22458c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x22458cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_224590:
    // 0x224590: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x224590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_224594:
    // 0x224594: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x224594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_224598:
    // 0x224598: 0xc0448bc  jal         func_1122F0
label_22459c:
    if (ctx->pc == 0x22459Cu) {
        ctx->pc = 0x22459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224598u;
        // 0x22459c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2245A0u;
        goto label_2245a0;
    }
    ctx->pc = 0x224598u;
    SET_GPR_U32(ctx, 31, 0x2245A0u);
    ctx->pc = 0x22459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224598u;
    // 0x22459c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1122F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122F0u, 0x224598u, 0x2245A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2245A0u;
label_2245a0:
    // 0x2245a0: 0x1040047c  beqz        $v0, . + 4 + (0x47C << 2)
label_2245a4:
    if (ctx->pc == 0x2245A4u) {
        ctx->pc = 0x2245A8u;
        goto label_2245a8;
    }
    ctx->pc = 0x2245A0u;
    {
        const bool branch_taken_0x2245a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2245a0) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x2245A8u;
label_2245a8:
    // 0x2245a8: 0x1000047a  b           . + 4 + (0x47A << 2)
label_2245ac:
    if (ctx->pc == 0x2245ACu) {
        ctx->pc = 0x2245ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245A8u;
        // 0x2245ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2245B0u;
        goto label_2245b0;
    }
    ctx->pc = 0x2245A8u;
    {
        const bool branch_taken_0x2245a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2245ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245A8u;
        // 0x2245ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2245a8) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x2245B0u;
label_2245b0:
    // 0x2245b0: 0x8623000a  lh          $v1, 0xA($s1)
    ctx->pc = 0x2245b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_2245b4:
    // 0x2245b4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2245b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2245b8:
    // 0x2245b8: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_2245bc:
    if (ctx->pc == 0x2245BCu) {
        ctx->pc = 0x2245BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245B8u;
        // 0x2245bc: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2245C0u;
        goto label_2245c0;
    }
    ctx->pc = 0x2245B8u;
    {
        const bool branch_taken_0x2245b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2245BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245B8u;
        // 0x2245bc: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2245b8) {
            ctx->pc = 0x224628u;
            goto label_224628;
        }
    }
    ctx->pc = 0x2245C0u;
label_2245c0:
    // 0x2245c0: 0x248449b0  addiu       $a0, $a0, 0x49B0
    ctx->pc = 0x2245c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18864));
label_2245c4:
    // 0x2245c4: 0x9082005c  lbu         $v0, 0x5C($a0)
    ctx->pc = 0x2245c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 92)));
label_2245c8:
    // 0x2245c8: 0x10400472  beqz        $v0, . + 4 + (0x472 << 2)
label_2245cc:
    if (ctx->pc == 0x2245CCu) {
        ctx->pc = 0x2245D0u;
        goto label_2245d0;
    }
    ctx->pc = 0x2245C8u;
    {
        const bool branch_taken_0x2245c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2245c8) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x2245D0u;
label_2245d0:
    // 0x2245d0: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x2245d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_2245d4:
    // 0x2245d4: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x2245d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_2245d8:
    // 0x2245d8: 0x1462046e  bne         $v1, $v0, . + 4 + (0x46E << 2)
label_2245dc:
    if (ctx->pc == 0x2245DCu) {
        ctx->pc = 0x2245DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245D8u;
        // 0x2245dc: 0x31200  sll         $v0, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2245E0u;
        goto label_2245e0;
    }
    ctx->pc = 0x2245D8u;
    {
        const bool branch_taken_0x2245d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2245DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245D8u;
        // 0x2245dc: 0x31200  sll         $v0, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2245d8) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x2245E0u;
label_2245e0:
    // 0x2245e0: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x2245e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_2245e4:
    // 0x2245e4: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x2245e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2245e8:
    // 0x2245e8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2245e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2245ec:
    // 0x2245ec: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2245ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_2245f0:
    // 0x2245f0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2245f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2245f4:
    // 0x2245f4: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x2245f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_2245f8:
    // 0x2245f8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2245f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2245fc:
    // 0x2245fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2245fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_224600:
    // 0x224600: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x224600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_224604:
    // 0x224604: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x224604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_224608:
    // 0x224608: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x224608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22460c:
    // 0x22460c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22460cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_224610:
    // 0x224610: 0xc04485c  jal         func_112170
label_224614:
    if (ctx->pc == 0x224614u) {
        ctx->pc = 0x224614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224610u;
        // 0x224614: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224618u;
        goto label_224618;
    }
    ctx->pc = 0x224610u;
    SET_GPR_U32(ctx, 31, 0x224618u);
    ctx->pc = 0x224614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224610u;
    // 0x224614: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112170u, 0x224610u, 0x224618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224618u;
label_224618:
    // 0x224618: 0x1040045e  beqz        $v0, . + 4 + (0x45E << 2)
label_22461c:
    if (ctx->pc == 0x22461Cu) {
        ctx->pc = 0x224620u;
        goto label_224620;
    }
    ctx->pc = 0x224618u;
    {
        const bool branch_taken_0x224618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224618) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224620u;
label_224620:
    // 0x224620: 0x1000045c  b           . + 4 + (0x45C << 2)
label_224624:
    if (ctx->pc == 0x224624u) {
        ctx->pc = 0x224624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224620u;
        // 0x224624: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224628u;
        goto label_224628;
    }
    ctx->pc = 0x224620u;
    {
        const bool branch_taken_0x224620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224620u;
        // 0x224624: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224620) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224628u;
label_224628:
    // 0x224628: 0x86250008  lh          $a1, 0x8($s1)
    ctx->pc = 0x224628u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_22462c:
    // 0x22462c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x22462cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_224630:
    // 0x224630: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_224634:
    // 0x224634: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x224634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_224638:
    // 0x224638: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x224638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_22463c:
    // 0x22463c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x22463cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_224640:
    // 0x224640: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x224640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_224644:
    // 0x224644: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x224644u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_224648:
    // 0x224648: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x224648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_22464c:
    // 0x22464c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22464cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_224650:
    // 0x224650: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x224650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_224654:
    // 0x224654: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x224654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_224658:
    // 0x224658: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x224658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_22465c:
    // 0x22465c: 0xc04485c  jal         func_112170
label_224660:
    if (ctx->pc == 0x224660u) {
        ctx->pc = 0x224660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22465Cu;
        // 0x224660: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224664u;
        goto label_224664;
    }
    ctx->pc = 0x22465Cu;
    SET_GPR_U32(ctx, 31, 0x224664u);
    ctx->pc = 0x224660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22465Cu;
    // 0x224660: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112170u, 0x22465Cu, 0x224664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224664u;
label_224664:
    // 0x224664: 0x1040044b  beqz        $v0, . + 4 + (0x44B << 2)
label_224668:
    if (ctx->pc == 0x224668u) {
        ctx->pc = 0x22466Cu;
        goto label_22466c;
    }
    ctx->pc = 0x224664u;
    {
        const bool branch_taken_0x224664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224664) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x22466Cu;
label_22466c:
    // 0x22466c: 0x10000449  b           . + 4 + (0x449 << 2)
label_224670:
    if (ctx->pc == 0x224670u) {
        ctx->pc = 0x224670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22466Cu;
        // 0x224670: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224674u;
        goto label_224674;
    }
    ctx->pc = 0x22466Cu;
    {
        const bool branch_taken_0x22466c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22466Cu;
        // 0x224670: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22466c) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224674u;
label_224674:
    // 0x224674: 0x86280008  lh          $t0, 0x8($s1)
    ctx->pc = 0x224674u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_224678:
    // 0x224678: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x224678u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_22467c:
    // 0x22467c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x22467cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_224680:
    // 0x224680: 0x8629000a  lh          $t1, 0xA($s1)
    ctx->pc = 0x224680u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_224684:
    // 0x224684: 0x24c625ae  addiu       $a2, $a2, 0x25AE
    ctx->pc = 0x224684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9646));
label_224688:
    // 0x224688: 0x24631532  addiu       $v1, $v1, 0x1532
    ctx->pc = 0x224688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5426));
label_22468c:
    // 0x22468c: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x22468cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_224690:
    // 0x224690: 0x82a00  sll         $a1, $t0, 8
    ctx->pc = 0x224690u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_224694:
    // 0x224694: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x224694u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_224698:
    // 0x224698: 0xa83823  subu        $a3, $a1, $t0
    ctx->pc = 0x224698u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_22469c:
    // 0x22469c: 0x882821  addu        $a1, $a0, $t0
    ctx->pc = 0x22469cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_2246a0:
    // 0x2246a0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x2246a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2246a4:
    // 0x2246a4: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x2246a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2246a8:
    // 0x2246a8: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x2246a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_2246ac:
    // 0x2246ac: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2246acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_2246b0:
    // 0x2246b0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2246b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2246b4:
    // 0x2246b4: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x2246b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2246b8:
    // 0x2246b8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2246b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2246bc:
    // 0x2246bc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2246bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2246c0:
    // 0x2246c0: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2246c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2246c4:
    // 0x2246c4: 0x24c50000  addiu       $a1, $a2, 0x0
    ctx->pc = 0x2246c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
label_2246c8:
    // 0x2246c8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2246c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_2246cc:
    // 0x2246cc: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2246ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2246d0:
    // 0x2246d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2246d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2246d4:
    // 0x2246d4: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x2246d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2246d8:
    // 0x2246d8: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x2246d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_2246dc:
    // 0x2246dc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2246dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2246e0:
    // 0x2246e0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2246e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2246e4:
    // 0x2246e4: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2246e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_2246e8:
    // 0x2246e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2246e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2246ec:
    // 0x2246ec: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2246ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2246f0:
    // 0x2246f0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2246f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2246f4:
    // 0x2246f4: 0x10200427  beqz        $at, . + 4 + (0x427 << 2)
label_2246f8:
    if (ctx->pc == 0x2246F8u) {
        ctx->pc = 0x2246FCu;
        goto label_2246fc;
    }
    ctx->pc = 0x2246F4u;
    {
        const bool branch_taken_0x2246f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2246f4) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x2246FCu;
label_2246fc:
    // 0x2246fc: 0x10000425  b           . + 4 + (0x425 << 2)
label_224700:
    if (ctx->pc == 0x224700u) {
        ctx->pc = 0x224700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246FCu;
        // 0x224700: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224704u;
        goto label_224704;
    }
    ctx->pc = 0x2246FCu;
    {
        const bool branch_taken_0x2246fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2246FCu;
        // 0x224700: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2246fc) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224704u;
label_224704:
    // 0x224704: 0x86280008  lh          $t0, 0x8($s1)
    ctx->pc = 0x224704u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_224708:
    // 0x224708: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x224708u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_22470c:
    // 0x22470c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x22470cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_224710:
    // 0x224710: 0x8629000a  lh          $t1, 0xA($s1)
    ctx->pc = 0x224710u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_224714:
    // 0x224714: 0x24c625ae  addiu       $a2, $a2, 0x25AE
    ctx->pc = 0x224714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9646));
label_224718:
    // 0x224718: 0x24631532  addiu       $v1, $v1, 0x1532
    ctx->pc = 0x224718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5426));
label_22471c:
    // 0x22471c: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x22471cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_224720:
    // 0x224720: 0x82a00  sll         $a1, $t0, 8
    ctx->pc = 0x224720u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_224724:
    // 0x224724: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x224724u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_224728:
    // 0x224728: 0xa83823  subu        $a3, $a1, $t0
    ctx->pc = 0x224728u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_22472c:
    // 0x22472c: 0x882821  addu        $a1, $a0, $t0
    ctx->pc = 0x22472cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_224730:
    // 0x224730: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x224730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_224734:
    // 0x224734: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x224734u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_224738:
    // 0x224738: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x224738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_22473c:
    // 0x22473c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x22473cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_224740:
    // 0x224740: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x224740u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_224744:
    // 0x224744: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x224744u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_224748:
    // 0x224748: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x224748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_22474c:
    // 0x22474c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x22474cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_224750:
    // 0x224750: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x224750u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_224754:
    // 0x224754: 0x24c50000  addiu       $a1, $a2, 0x0
    ctx->pc = 0x224754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
label_224758:
    // 0x224758: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x224758u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_22475c:
    // 0x22475c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x22475cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_224760:
    // 0x224760: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x224760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_224764:
    // 0x224764: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x224764u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_224768:
    // 0x224768: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x224768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_22476c:
    // 0x22476c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x22476cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_224770:
    // 0x224770: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x224770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_224774:
    // 0x224774: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x224774u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_224778:
    // 0x224778: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x224778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22477c:
    // 0x22477c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x22477cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_224780:
    // 0x224780: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x224780u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_224784:
    // 0x224784: 0x10200403  beqz        $at, . + 4 + (0x403 << 2)
label_224788:
    if (ctx->pc == 0x224788u) {
        ctx->pc = 0x22478Cu;
        goto label_22478c;
    }
    ctx->pc = 0x224784u;
    {
        const bool branch_taken_0x224784 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x224784) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x22478Cu;
label_22478c:
    // 0x22478c: 0x10000401  b           . + 4 + (0x401 << 2)
label_224790:
    if (ctx->pc == 0x224790u) {
        ctx->pc = 0x224790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22478Cu;
        // 0x224790: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224794u;
        goto label_224794;
    }
    ctx->pc = 0x22478Cu;
    {
        const bool branch_taken_0x22478c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22478Cu;
        // 0x224790: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22478c) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224794u;
label_224794:
    // 0x224794: 0x84244908  lh          $a0, 0x4908($at)
    ctx->pc = 0x224794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 18696)));
label_224798:
    // 0x224798: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x224798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_22479c:
    // 0x22479c: 0x8422490a  lh          $v0, 0x490A($at)
    ctx->pc = 0x22479cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 18698)));
label_2247a0:
    // 0x2247a0: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x2247a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2247a4:
    // 0x2247a4: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x2247a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_2247a8:
    // 0x2247a8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2247ac:
    if (ctx->pc == 0x2247ACu) {
        ctx->pc = 0x2247B0u;
        goto label_2247b0;
    }
    ctx->pc = 0x2247A8u;
    {
        const bool branch_taken_0x2247a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2247a8) {
            ctx->pc = 0x2247B8u;
            goto label_2247b8;
        }
    }
    ctx->pc = 0x2247B0u;
label_2247b0:
    // 0x2247b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2247b4:
    if (ctx->pc == 0x2247B4u) {
        ctx->pc = 0x2247B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247B0u;
        // 0x2247b4: 0x86220008  lh          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2247B8u;
        goto label_2247b8;
    }
    ctx->pc = 0x2247B0u;
    {
        const bool branch_taken_0x2247b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2247B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247B0u;
        // 0x2247b4: 0x86220008  lh          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2247b0) {
            ctx->pc = 0x2247C0u;
            goto label_2247c0;
        }
    }
    ctx->pc = 0x2247B8u;
label_2247b8:
    // 0x2247b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2247b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2247bc:
    // 0x2247bc: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x2247bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_2247c0:
    // 0x2247c0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2247c4:
    if (ctx->pc == 0x2247C4u) {
        ctx->pc = 0x2247C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247C0u;
        // 0x2247c4: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2247C8u;
        goto label_2247c8;
    }
    ctx->pc = 0x2247C0u;
    {
        const bool branch_taken_0x2247c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2247C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247C0u;
        // 0x2247c4: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2247c0) {
            ctx->pc = 0x224804u;
            goto label_224804;
        }
    }
    ctx->pc = 0x2247C8u;
label_2247c8:
    // 0x2247c8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2247c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2247cc:
    // 0x2247cc: 0x8622000a  lh          $v0, 0xA($s1)
    ctx->pc = 0x2247ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_2247d0:
    // 0x2247d0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2247d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2247d4:
    // 0x2247d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2247d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2247d8:
    // 0x2247d8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2247d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2247dc:
    // 0x2247dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2247dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2247e0:
    // 0x2247e0: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x2247e0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2247e4:
    // 0x2247e4: 0x0  nop
    ctx->pc = 0x2247e4u;
    // NOP
label_2247e8:
    // 0x2247e8: 0x0  nop
    ctx->pc = 0x2247e8u;
    // NOP
label_2247ec:
    // 0x2247ec: 0x1812  mflo        $v1
    ctx->pc = 0x2247ecu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_2247f0:
    // 0x2247f0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2247f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2247f4:
    // 0x2247f4: 0x102003e7  beqz        $at, . + 4 + (0x3E7 << 2)
label_2247f8:
    if (ctx->pc == 0x2247F8u) {
        ctx->pc = 0x2247FCu;
        goto label_2247fc;
    }
    ctx->pc = 0x2247F4u;
    {
        const bool branch_taken_0x2247f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2247f4) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x2247FCu;
label_2247fc:
    // 0x2247fc: 0x100003e5  b           . + 4 + (0x3E5 << 2)
label_224800:
    if (ctx->pc == 0x224800u) {
        ctx->pc = 0x224800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247FCu;
        // 0x224800: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224804u;
        goto label_224804;
    }
    ctx->pc = 0x2247FCu;
    {
        const bool branch_taken_0x2247fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247FCu;
        // 0x224800: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2247fc) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224804u;
label_224804:
    // 0x224804: 0x8622000a  lh          $v0, 0xA($s1)
    ctx->pc = 0x224804u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_224808:
    // 0x224808: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x224808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22480c:
    // 0x22480c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x22480cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_224810:
    // 0x224810: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x224810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_224814:
    // 0x224814: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x224814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_224818:
    // 0x224818: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x224818u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_22481c:
    // 0x22481c: 0x0  nop
    ctx->pc = 0x22481cu;
    // NOP
label_224820:
    // 0x224820: 0x0  nop
    ctx->pc = 0x224820u;
    // NOP
label_224824:
    // 0x224824: 0x1812  mflo        $v1
    ctx->pc = 0x224824u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_224828:
    // 0x224828: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x224828u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22482c:
    // 0x22482c: 0x102003d9  beqz        $at, . + 4 + (0x3D9 << 2)
label_224830:
    if (ctx->pc == 0x224830u) {
        ctx->pc = 0x224834u;
        goto label_224834;
    }
    ctx->pc = 0x22482Cu;
    {
        const bool branch_taken_0x22482c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22482c) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224834u;
label_224834:
    // 0x224834: 0x100003d7  b           . + 4 + (0x3D7 << 2)
label_224838:
    if (ctx->pc == 0x224838u) {
        ctx->pc = 0x224838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224834u;
        // 0x224838: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22483Cu;
        goto label_22483c;
    }
    ctx->pc = 0x224834u;
    {
        const bool branch_taken_0x224834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224834u;
        // 0x224838: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224834) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x22483Cu;
label_22483c:
    // 0x22483c: 0x86260008  lh          $a2, 0x8($s1)
    ctx->pc = 0x22483cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_224840:
    // 0x224840: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x224840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_224844:
    // 0x224844: 0x8624000a  lh          $a0, 0xA($s1)
    ctx->pc = 0x224844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_224848:
    // 0x224848: 0x24a5259a  addiu       $a1, $a1, 0x259A
    ctx->pc = 0x224848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9626));
label_22484c:
    // 0x22484c: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x22484cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_224850:
    // 0x224850: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x224850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_224854:
    // 0x224854: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x224854u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_224858:
    // 0x224858: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x224858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_22485c:
    // 0x22485c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22485cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_224860:
    // 0x224860: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x224860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_224864:
    // 0x224864: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x224864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_224868:
    // 0x224868: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x224868u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_22486c:
    // 0x22486c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x22486cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_224870:
    // 0x224870: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x224870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_224874:
    // 0x224874: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x224874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_224878:
    // 0x224878: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x224878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22487c:
    // 0x22487c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x22487cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_224880:
    // 0x224880: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x224880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_224884:
    // 0x224884: 0x102003c3  beqz        $at, . + 4 + (0x3C3 << 2)
label_224888:
    if (ctx->pc == 0x224888u) {
        ctx->pc = 0x22488Cu;
        goto label_22488c;
    }
    ctx->pc = 0x224884u;
    {
        const bool branch_taken_0x224884 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x224884) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x22488Cu;
label_22488c:
    // 0x22488c: 0x100003c1  b           . + 4 + (0x3C1 << 2)
label_224890:
    if (ctx->pc == 0x224890u) {
        ctx->pc = 0x224890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22488Cu;
        // 0x224890: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224894u;
        goto label_224894;
    }
    ctx->pc = 0x22488Cu;
    {
        const bool branch_taken_0x22488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22488Cu;
        // 0x224890: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22488c) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224894u;
label_224894:
    // 0x224894: 0x8623000a  lh          $v1, 0xA($s1)
    ctx->pc = 0x224894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_224898:
    // 0x224898: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x224898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_22489c:
    // 0x22489c: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
label_2248a0:
    if (ctx->pc == 0x2248A0u) {
        ctx->pc = 0x2248A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22489Cu;
        // 0x2248a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2248A4u;
        goto label_2248a4;
    }
    ctx->pc = 0x22489Cu;
    {
        const bool branch_taken_0x22489c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2248A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22489Cu;
        // 0x2248a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22489c) {
            ctx->pc = 0x224940u;
            goto label_224940;
        }
    }
    ctx->pc = 0x2248A4u;
label_2248a4:
    // 0x2248a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2248a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2248a8:
    // 0x2248a8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2248a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_2248ac:
    // 0x2248ac: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x2248acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_2248b0:
    // 0x2248b0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2248b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2248b4:
    // 0x2248b4: 0x24443620  addiu       $a0, $v0, 0x3620
    ctx->pc = 0x2248b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
label_2248b8:
    // 0x2248b8: 0x9042367c  lbu         $v0, 0x367C($v0)
    ctx->pc = 0x2248b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13948)));
label_2248bc:
    // 0x2248bc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2248c0:
    if (ctx->pc == 0x2248C0u) {
        ctx->pc = 0x2248C4u;
        goto label_2248c4;
    }
    ctx->pc = 0x2248BCu;
    {
        const bool branch_taken_0x2248bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2248bc) {
            ctx->pc = 0x224928u;
            goto label_224928;
        }
    }
    ctx->pc = 0x2248C4u;
label_2248c4:
    // 0x2248c4: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x2248c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_2248c8:
    // 0x2248c8: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x2248c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_2248cc:
    // 0x2248cc: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_2248d0:
    if (ctx->pc == 0x2248D0u) {
        ctx->pc = 0x2248D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248CCu;
        // 0x2248d0: 0x31200  sll         $v0, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2248D4u;
        goto label_2248d4;
    }
    ctx->pc = 0x2248CCu;
    {
        const bool branch_taken_0x2248cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2248D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248CCu;
        // 0x2248d0: 0x31200  sll         $v0, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2248cc) {
            ctx->pc = 0x224928u;
            goto label_224928;
        }
    }
    ctx->pc = 0x2248D4u;
label_2248d4:
    // 0x2248d4: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x2248d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_2248d8:
    // 0x2248d8: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x2248d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2248dc:
    // 0x2248dc: 0x8625000c  lh          $a1, 0xC($s1)
    ctx->pc = 0x2248dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2248e0:
    // 0x2248e0: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2248e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2248e4:
    // 0x2248e4: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2248e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_2248e8:
    // 0x2248e8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2248e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2248ec:
    // 0x2248ec: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x2248ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_2248f0:
    // 0x2248f0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2248f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2248f4:
    // 0x2248f4: 0x8626000e  lh          $a2, 0xE($s1)
    ctx->pc = 0x2248f4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_2248f8:
    // 0x2248f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2248f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2248fc:
    // 0x2248fc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2248fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_224900:
    // 0x224900: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x224900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_224904:
    // 0x224904: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x224904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_224908:
    // 0x224908: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x224908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_22490c:
    // 0x22490c: 0xc089658  jal         func_225960
label_224910:
    if (ctx->pc == 0x224910u) {
        ctx->pc = 0x224910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22490Cu;
        // 0x224910: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224914u;
        goto label_224914;
    }
    ctx->pc = 0x22490Cu;
    SET_GPR_U32(ctx, 31, 0x224914u);
    ctx->pc = 0x224910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22490Cu;
    // 0x224910: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225960u;
    { ctx->pc = 0x225960; return; }
    ctx->pc = 0x224914u;
label_224914:
    // 0x224914: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_224918:
    if (ctx->pc == 0x224918u) {
        ctx->pc = 0x22491Cu;
        goto label_22491c;
    }
    ctx->pc = 0x224914u;
    {
        const bool branch_taken_0x224914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224914) {
            ctx->pc = 0x224928u;
            goto label_224928;
        }
    }
    ctx->pc = 0x22491Cu;
label_22491c:
    // 0x22491c: 0xaf9292e4  sw          $s2, -0x6D1C($gp)
    ctx->pc = 0x22491cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939364), GPR_U32(ctx, 18));
label_224920:
    // 0x224920: 0x1000039c  b           . + 4 + (0x39C << 2)
label_224924:
    if (ctx->pc == 0x224924u) {
        ctx->pc = 0x224924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224920u;
        // 0x224924: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224928u;
        goto label_224928;
    }
    ctx->pc = 0x224920u;
    {
        const bool branch_taken_0x224920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224920u;
        // 0x224924: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224920) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224928u;
label_224928:
    // 0x224928: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x224928u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22492c:
    // 0x22492c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x22492cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_224930:
    // 0x224930: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_224934:
    if (ctx->pc == 0x224934u) {
        ctx->pc = 0x224934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224930u;
        // 0x224934: 0x26730090  addiu       $s3, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224938u;
        goto label_224938;
    }
    ctx->pc = 0x224930u;
    {
        const bool branch_taken_0x224930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224930u;
        // 0x224934: 0x26730090  addiu       $s3, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224930) {
            ctx->pc = 0x2248A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2248a8;
        }
    }
    ctx->pc = 0x224938u;
label_224938:
    // 0x224938: 0x10000396  b           . + 4 + (0x396 << 2)
label_22493c:
    if (ctx->pc == 0x22493Cu) {
        ctx->pc = 0x224940u;
        goto label_224940;
    }
    ctx->pc = 0x224938u;
    {
        const bool branch_taken_0x224938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224938) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224940u;
label_224940:
    // 0x224940: 0x86270008  lh          $a3, 0x8($s1)
    ctx->pc = 0x224940u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_224944:
    // 0x224944: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x224944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_224948:
    // 0x224948: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22494c:
    // 0x22494c: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x22494cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_224950:
    // 0x224950: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x224950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_224954:
    // 0x224954: 0x8625000c  lh          $a1, 0xC($s1)
    ctx->pc = 0x224954u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_224958:
    // 0x224958: 0x8626000e  lh          $a2, 0xE($s1)
    ctx->pc = 0x224958u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_22495c:
    // 0x22495c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x22495cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_224960:
    // 0x224960: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x224960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_224964:
    // 0x224964: 0x473823  subu        $a3, $v0, $a3
    ctx->pc = 0x224964u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_224968:
    // 0x224968: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x224968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_22496c:
    // 0x22496c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x22496cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_224970:
    // 0x224970: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x224970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_224974:
    // 0x224974: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x224974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_224978:
    // 0x224978: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x224978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_22497c:
    // 0x22497c: 0xc089658  jal         func_225960
label_224980:
    if (ctx->pc == 0x224980u) {
        ctx->pc = 0x224980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22497Cu;
        // 0x224980: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224984u;
        goto label_224984;
    }
    ctx->pc = 0x22497Cu;
    SET_GPR_U32(ctx, 31, 0x224984u);
    ctx->pc = 0x224980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22497Cu;
    // 0x224980: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225960u;
    { ctx->pc = 0x225960; return; }
    ctx->pc = 0x224984u;
label_224984:
    // 0x224984: 0x10400383  beqz        $v0, . + 4 + (0x383 << 2)
label_224988:
    if (ctx->pc == 0x224988u) {
        ctx->pc = 0x22498Cu;
        goto label_22498c;
    }
    ctx->pc = 0x224984u;
    {
        const bool branch_taken_0x224984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224984) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x22498Cu;
label_22498c:
    // 0x22498c: 0x10000381  b           . + 4 + (0x381 << 2)
label_224990:
    if (ctx->pc == 0x224990u) {
        ctx->pc = 0x224990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22498Cu;
        // 0x224990: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224994u;
        goto label_224994;
    }
    ctx->pc = 0x22498Cu;
    {
        const bool branch_taken_0x22498c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22498Cu;
        // 0x224990: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22498c) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224994u;
label_224994:
    // 0x224994: 0x86260008  lh          $a2, 0x8($s1)
    ctx->pc = 0x224994u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_224998:
    // 0x224998: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x224998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_22499c:
    // 0x22499c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x22499cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_2249a0:
    // 0x2249a0: 0x8624000a  lh          $a0, 0xA($s1)
    ctx->pc = 0x2249a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_2249a4:
    // 0x2249a4: 0x244225ae  addiu       $v0, $v0, 0x25AE
    ctx->pc = 0x2249a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9646));
label_2249a8:
    // 0x2249a8: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x2249a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_2249ac:
    // 0x2249ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2249acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2249b0:
    // 0x2249b0: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x2249b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_2249b4:
    // 0x2249b4: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x2249b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2249b8:
    // 0x2249b8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2249b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2249bc:
    // 0x2249bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2249bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2249c0:
    // 0x2249c0: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2249c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2249c4:
    // 0x2249c4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2249c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2249c8:
    // 0x2249c8: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2249c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2249cc:
    // 0x2249cc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2249ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2249d0:
    // 0x2249d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2249d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2249d4:
    // 0x2249d4: 0xa49021  addu        $s2, $a1, $a0
    ctx->pc = 0x2249d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2249d8:
    // 0x2249d8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x2249d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_2249dc:
    // 0x2249dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2249dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2249e0:
    // 0x2249e0: 0x90530000  lbu         $s3, 0x0($v0)
    ctx->pc = 0x2249e0u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2249e4:
    // 0x2249e4: 0x0  nop
    ctx->pc = 0x2249e4u;
    // NOP
label_2249e8:
    // 0x2249e8: 0x9242003e  lbu         $v0, 0x3E($s2)
    ctx->pc = 0x2249e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 62)));
label_2249ec:
    // 0x2249ec: 0x1453000d  bne         $v0, $s3, . + 4 + (0xD << 2)
label_2249f0:
    if (ctx->pc == 0x2249F0u) {
        ctx->pc = 0x2249F4u;
        goto label_2249f4;
    }
    ctx->pc = 0x2249ECu;
    {
        const bool branch_taken_0x2249ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2249ec) {
            ctx->pc = 0x224A24u;
            goto label_224a24;
        }
    }
    ctx->pc = 0x2249F4u;
label_2249f4:
    // 0x2249f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2249f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2249f8:
    // 0x2249f8: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x2249f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_2249fc:
    // 0x2249fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_224a00:
    if (ctx->pc == 0x224A00u) {
        ctx->pc = 0x224A04u;
        goto label_224a04;
    }
    ctx->pc = 0x2249FCu;
    {
        const bool branch_taken_0x2249fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2249fc) {
            ctx->pc = 0x224A24u;
            goto label_224a24;
        }
    }
    ctx->pc = 0x224A04u;
label_224a04:
    // 0x224a04: 0x8625000c  lh          $a1, 0xC($s1)
    ctx->pc = 0x224a04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_224a08:
    // 0x224a08: 0x8626000e  lh          $a2, 0xE($s1)
    ctx->pc = 0x224a08u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_224a0c:
    // 0x224a0c: 0xc089658  jal         func_225960
label_224a10:
    if (ctx->pc == 0x224A10u) {
        ctx->pc = 0x224A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A0Cu;
        // 0x224a10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224A14u;
        goto label_224a14;
    }
    ctx->pc = 0x224A0Cu;
    SET_GPR_U32(ctx, 31, 0x224A14u);
    ctx->pc = 0x224A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224A0Cu;
    // 0x224a10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225960u;
    { ctx->pc = 0x225960; return; }
    ctx->pc = 0x224A14u;
label_224a14:
    // 0x224a14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_224a18:
    if (ctx->pc == 0x224A18u) {
        ctx->pc = 0x224A1Cu;
        goto label_224a1c;
    }
    ctx->pc = 0x224A14u;
    {
        const bool branch_taken_0x224a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224a14) {
            ctx->pc = 0x224A24u;
            goto label_224a24;
        }
    }
    ctx->pc = 0x224A1Cu;
label_224a1c:
    // 0x224a1c: 0x1000035d  b           . + 4 + (0x35D << 2)
label_224a20:
    if (ctx->pc == 0x224A20u) {
        ctx->pc = 0x224A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A1Cu;
        // 0x224a20: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224A24u;
        goto label_224a24;
    }
    ctx->pc = 0x224A1Cu;
    {
        const bool branch_taken_0x224a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A1Cu;
        // 0x224a20: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a1c) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224A24u;
label_224a24:
    // 0x224a24: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x224a24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_224a28:
    // 0x224a28: 0x2a8200ff  slti        $v0, $s4, 0xFF
    ctx->pc = 0x224a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)255) ? 1 : 0);
label_224a2c:
    // 0x224a2c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_224a30:
    if (ctx->pc == 0x224A30u) {
        ctx->pc = 0x224A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A2Cu;
        // 0x224a30: 0x26520048  addiu       $s2, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224A34u;
        goto label_224a34;
    }
    ctx->pc = 0x224A2Cu;
    {
        const bool branch_taken_0x224a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A2Cu;
        // 0x224a30: 0x26520048  addiu       $s2, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a2c) {
            ctx->pc = 0x2249E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2249e8;
        }
    }
    ctx->pc = 0x224A34u;
label_224a34:
    // 0x224a34: 0x10000357  b           . + 4 + (0x357 << 2)
label_224a38:
    if (ctx->pc == 0x224A38u) {
        ctx->pc = 0x224A3Cu;
        goto label_224a3c;
    }
    ctx->pc = 0x224A34u;
    {
        const bool branch_taken_0x224a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224a34) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224A3Cu;
label_224a3c:
    // 0x224a3c: 0x8623000a  lh          $v1, 0xA($s1)
    ctx->pc = 0x224a3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    ctx->pc = 0x224a40u;
    return;
}
