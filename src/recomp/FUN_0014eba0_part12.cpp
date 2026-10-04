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


void FUN_0014eba0_part12(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x154190u: goto label_154190;
        case 0x154194u: goto label_154194;
        case 0x154198u: goto label_154198;
        case 0x15419cu: goto label_15419c;
        case 0x1541a0u: goto label_1541a0;
        case 0x1541a4u: goto label_1541a4;
        case 0x1541a8u: goto label_1541a8;
        case 0x1541acu: goto label_1541ac;
        case 0x1541b0u: goto label_1541b0;
        case 0x1541b4u: goto label_1541b4;
        case 0x1541b8u: goto label_1541b8;
        case 0x1541bcu: goto label_1541bc;
        case 0x1541c0u: goto label_1541c0;
        case 0x1541c4u: goto label_1541c4;
        case 0x1541c8u: goto label_1541c8;
        case 0x1541ccu: goto label_1541cc;
        case 0x1541d0u: goto label_1541d0;
        case 0x1541d4u: goto label_1541d4;
        case 0x1541d8u: goto label_1541d8;
        case 0x1541dcu: goto label_1541dc;
        case 0x1541e0u: goto label_1541e0;
        case 0x1541e4u: goto label_1541e4;
        case 0x1541e8u: goto label_1541e8;
        case 0x1541ecu: goto label_1541ec;
        case 0x1541f0u: goto label_1541f0;
        case 0x1541f4u: goto label_1541f4;
        case 0x1541f8u: goto label_1541f8;
        case 0x1541fcu: goto label_1541fc;
        case 0x154200u: goto label_154200;
        case 0x154204u: goto label_154204;
        case 0x154208u: goto label_154208;
        case 0x15420cu: goto label_15420c;
        case 0x154210u: goto label_154210;
        case 0x154214u: goto label_154214;
        case 0x154218u: goto label_154218;
        case 0x15421cu: goto label_15421c;
        case 0x154220u: goto label_154220;
        case 0x154224u: goto label_154224;
        case 0x154228u: goto label_154228;
        case 0x15422cu: goto label_15422c;
        case 0x154230u: goto label_154230;
        case 0x154234u: goto label_154234;
        case 0x154238u: goto label_154238;
        case 0x15423cu: goto label_15423c;
        case 0x154240u: goto label_154240;
        case 0x154244u: goto label_154244;
        case 0x154248u: goto label_154248;
        case 0x15424cu: goto label_15424c;
        case 0x154250u: goto label_154250;
        case 0x154254u: goto label_154254;
        case 0x154258u: goto label_154258;
        case 0x15425cu: goto label_15425c;
        case 0x154260u: goto label_154260;
        case 0x154264u: goto label_154264;
        case 0x154268u: goto label_154268;
        case 0x15426cu: goto label_15426c;
        case 0x154270u: goto label_154270;
        case 0x154274u: goto label_154274;
        case 0x154278u: goto label_154278;
        case 0x15427cu: goto label_15427c;
        case 0x154280u: goto label_154280;
        case 0x154284u: goto label_154284;
        case 0x154288u: goto label_154288;
        case 0x15428cu: goto label_15428c;
        case 0x154290u: goto label_154290;
        case 0x154294u: goto label_154294;
        case 0x154298u: goto label_154298;
        case 0x15429cu: goto label_15429c;
        case 0x1542a0u: goto label_1542a0;
        case 0x1542a4u: goto label_1542a4;
        case 0x1542a8u: goto label_1542a8;
        case 0x1542acu: goto label_1542ac;
        case 0x1542b0u: goto label_1542b0;
        case 0x1542b4u: goto label_1542b4;
        case 0x1542b8u: goto label_1542b8;
        case 0x1542bcu: goto label_1542bc;
        case 0x1542c0u: goto label_1542c0;
        case 0x1542c4u: goto label_1542c4;
        case 0x1542c8u: goto label_1542c8;
        case 0x1542ccu: goto label_1542cc;
        case 0x1542d0u: goto label_1542d0;
        case 0x1542d4u: goto label_1542d4;
        case 0x1542d8u: goto label_1542d8;
        case 0x1542dcu: goto label_1542dc;
        case 0x1542e0u: goto label_1542e0;
        case 0x1542e4u: goto label_1542e4;
        case 0x1542e8u: goto label_1542e8;
        case 0x1542ecu: goto label_1542ec;
        case 0x1542f0u: goto label_1542f0;
        case 0x1542f4u: goto label_1542f4;
        case 0x1542f8u: goto label_1542f8;
        case 0x1542fcu: goto label_1542fc;
        case 0x154300u: goto label_154300;
        case 0x154304u: goto label_154304;
        case 0x154308u: goto label_154308;
        case 0x15430cu: goto label_15430c;
        case 0x154310u: goto label_154310;
        case 0x154314u: goto label_154314;
        case 0x154318u: goto label_154318;
        case 0x15431cu: goto label_15431c;
        case 0x154320u: goto label_154320;
        case 0x154324u: goto label_154324;
        case 0x154328u: goto label_154328;
        case 0x15432cu: goto label_15432c;
        case 0x154330u: goto label_154330;
        case 0x154334u: goto label_154334;
        case 0x154338u: goto label_154338;
        case 0x15433cu: goto label_15433c;
        case 0x154340u: goto label_154340;
        case 0x154344u: goto label_154344;
        case 0x154348u: goto label_154348;
        case 0x15434cu: goto label_15434c;
        case 0x154350u: goto label_154350;
        case 0x154354u: goto label_154354;
        case 0x154358u: goto label_154358;
        case 0x15435cu: goto label_15435c;
        case 0x154360u: goto label_154360;
        case 0x154364u: goto label_154364;
        case 0x154368u: goto label_154368;
        case 0x15436cu: goto label_15436c;
        case 0x154370u: goto label_154370;
        case 0x154374u: goto label_154374;
        case 0x154378u: goto label_154378;
        case 0x15437cu: goto label_15437c;
        case 0x154380u: goto label_154380;
        case 0x154384u: goto label_154384;
        case 0x154388u: goto label_154388;
        case 0x15438cu: goto label_15438c;
        case 0x154390u: goto label_154390;
        case 0x154394u: goto label_154394;
        case 0x154398u: goto label_154398;
        case 0x15439cu: goto label_15439c;
        case 0x1543a0u: goto label_1543a0;
        case 0x1543a4u: goto label_1543a4;
        case 0x1543a8u: goto label_1543a8;
        case 0x1543acu: goto label_1543ac;
        case 0x1543b0u: goto label_1543b0;
        case 0x1543b4u: goto label_1543b4;
        case 0x1543b8u: goto label_1543b8;
        case 0x1543bcu: goto label_1543bc;
        case 0x1543c0u: goto label_1543c0;
        case 0x1543c4u: goto label_1543c4;
        case 0x1543c8u: goto label_1543c8;
        case 0x1543ccu: goto label_1543cc;
        case 0x1543d0u: goto label_1543d0;
        case 0x1543d4u: goto label_1543d4;
        case 0x1543d8u: goto label_1543d8;
        case 0x1543dcu: goto label_1543dc;
        case 0x1543e0u: goto label_1543e0;
        case 0x1543e4u: goto label_1543e4;
        case 0x1543e8u: goto label_1543e8;
        case 0x1543ecu: goto label_1543ec;
        case 0x1543f0u: goto label_1543f0;
        case 0x1543f4u: goto label_1543f4;
        case 0x1543f8u: goto label_1543f8;
        case 0x1543fcu: goto label_1543fc;
        case 0x154400u: goto label_154400;
        case 0x154404u: goto label_154404;
        case 0x154408u: goto label_154408;
        case 0x15440cu: goto label_15440c;
        case 0x154410u: goto label_154410;
        case 0x154414u: goto label_154414;
        case 0x154418u: goto label_154418;
        case 0x15441cu: goto label_15441c;
        case 0x154420u: goto label_154420;
        case 0x154424u: goto label_154424;
        case 0x154428u: goto label_154428;
        case 0x15442cu: goto label_15442c;
        case 0x154430u: goto label_154430;
        case 0x154434u: goto label_154434;
        case 0x154438u: goto label_154438;
        case 0x15443cu: goto label_15443c;
        case 0x154440u: goto label_154440;
        case 0x154444u: goto label_154444;
        case 0x154448u: goto label_154448;
        case 0x15444cu: goto label_15444c;
        case 0x154450u: goto label_154450;
        case 0x154454u: goto label_154454;
        case 0x154458u: goto label_154458;
        case 0x15445cu: goto label_15445c;
        case 0x154460u: goto label_154460;
        case 0x154464u: goto label_154464;
        case 0x154468u: goto label_154468;
        case 0x15446cu: goto label_15446c;
        case 0x154470u: goto label_154470;
        case 0x154474u: goto label_154474;
        case 0x154478u: goto label_154478;
        case 0x15447cu: goto label_15447c;
        case 0x154480u: goto label_154480;
        case 0x154484u: goto label_154484;
        case 0x154488u: goto label_154488;
        case 0x15448cu: goto label_15448c;
        case 0x154490u: goto label_154490;
        case 0x154494u: goto label_154494;
        case 0x154498u: goto label_154498;
        case 0x15449cu: goto label_15449c;
        case 0x1544a0u: goto label_1544a0;
        case 0x1544a4u: goto label_1544a4;
        case 0x1544a8u: goto label_1544a8;
        case 0x1544acu: goto label_1544ac;
        case 0x1544b0u: goto label_1544b0;
        case 0x1544b4u: goto label_1544b4;
        case 0x1544b8u: goto label_1544b8;
        case 0x1544bcu: goto label_1544bc;
        case 0x1544c0u: goto label_1544c0;
        case 0x1544c4u: goto label_1544c4;
        case 0x1544c8u: goto label_1544c8;
        case 0x1544ccu: goto label_1544cc;
        case 0x1544d0u: goto label_1544d0;
        case 0x1544d4u: goto label_1544d4;
        case 0x1544d8u: goto label_1544d8;
        case 0x1544dcu: goto label_1544dc;
        case 0x1544e0u: goto label_1544e0;
        case 0x1544e4u: goto label_1544e4;
        case 0x1544e8u: goto label_1544e8;
        case 0x1544ecu: goto label_1544ec;
        case 0x1544f0u: goto label_1544f0;
        case 0x1544f4u: goto label_1544f4;
        case 0x1544f8u: goto label_1544f8;
        case 0x1544fcu: goto label_1544fc;
        case 0x154500u: goto label_154500;
        case 0x154504u: goto label_154504;
        case 0x154508u: goto label_154508;
        case 0x15450cu: goto label_15450c;
        case 0x154510u: goto label_154510;
        case 0x154514u: goto label_154514;
        case 0x154518u: goto label_154518;
        case 0x15451cu: goto label_15451c;
        case 0x154520u: goto label_154520;
        case 0x154524u: goto label_154524;
        case 0x154528u: goto label_154528;
        case 0x15452cu: goto label_15452c;
        case 0x154530u: goto label_154530;
        case 0x154534u: goto label_154534;
        case 0x154538u: goto label_154538;
        case 0x15453cu: goto label_15453c;
        case 0x154540u: goto label_154540;
        case 0x154544u: goto label_154544;
        case 0x154548u: goto label_154548;
        case 0x15454cu: goto label_15454c;
        case 0x154550u: goto label_154550;
        case 0x154554u: goto label_154554;
        case 0x154558u: goto label_154558;
        case 0x15455cu: goto label_15455c;
        case 0x154560u: goto label_154560;
        case 0x154564u: goto label_154564;
        case 0x154568u: goto label_154568;
        case 0x15456cu: goto label_15456c;
        case 0x154570u: goto label_154570;
        case 0x154574u: goto label_154574;
        case 0x154578u: goto label_154578;
        case 0x15457cu: goto label_15457c;
        case 0x154580u: goto label_154580;
        case 0x154584u: goto label_154584;
        case 0x154588u: goto label_154588;
        case 0x15458cu: goto label_15458c;
        case 0x154590u: goto label_154590;
        case 0x154594u: goto label_154594;
        case 0x154598u: goto label_154598;
        case 0x15459cu: goto label_15459c;
        case 0x1545a0u: goto label_1545a0;
        case 0x1545a4u: goto label_1545a4;
        case 0x1545a8u: goto label_1545a8;
        case 0x1545acu: goto label_1545ac;
        case 0x1545b0u: goto label_1545b0;
        case 0x1545b4u: goto label_1545b4;
        case 0x1545b8u: goto label_1545b8;
        case 0x1545bcu: goto label_1545bc;
        case 0x1545c0u: goto label_1545c0;
        case 0x1545c4u: goto label_1545c4;
        case 0x1545c8u: goto label_1545c8;
        case 0x1545ccu: goto label_1545cc;
        case 0x1545d0u: goto label_1545d0;
        case 0x1545d4u: goto label_1545d4;
        case 0x1545d8u: goto label_1545d8;
        case 0x1545dcu: goto label_1545dc;
        case 0x1545e0u: goto label_1545e0;
        case 0x1545e4u: goto label_1545e4;
        case 0x1545e8u: goto label_1545e8;
        case 0x1545ecu: goto label_1545ec;
        case 0x1545f0u: goto label_1545f0;
        case 0x1545f4u: goto label_1545f4;
        case 0x1545f8u: goto label_1545f8;
        case 0x1545fcu: goto label_1545fc;
        case 0x154600u: goto label_154600;
        case 0x154604u: goto label_154604;
        case 0x154608u: goto label_154608;
        case 0x15460cu: goto label_15460c;
        case 0x154610u: goto label_154610;
        case 0x154614u: goto label_154614;
        case 0x154618u: goto label_154618;
        case 0x15461cu: goto label_15461c;
        case 0x154620u: goto label_154620;
        case 0x154624u: goto label_154624;
        case 0x154628u: goto label_154628;
        case 0x15462cu: goto label_15462c;
        case 0x154630u: goto label_154630;
        case 0x154634u: goto label_154634;
        case 0x154638u: goto label_154638;
        case 0x15463cu: goto label_15463c;
        case 0x154640u: goto label_154640;
        case 0x154644u: goto label_154644;
        case 0x154648u: goto label_154648;
        case 0x15464cu: goto label_15464c;
        case 0x154650u: goto label_154650;
        case 0x154654u: goto label_154654;
        case 0x154658u: goto label_154658;
        case 0x15465cu: goto label_15465c;
        case 0x154660u: goto label_154660;
        case 0x154664u: goto label_154664;
        case 0x154668u: goto label_154668;
        case 0x15466cu: goto label_15466c;
        case 0x154670u: goto label_154670;
        case 0x154674u: goto label_154674;
        case 0x154678u: goto label_154678;
        case 0x15467cu: goto label_15467c;
        case 0x154680u: goto label_154680;
        case 0x154684u: goto label_154684;
        case 0x154688u: goto label_154688;
        case 0x15468cu: goto label_15468c;
        case 0x154690u: goto label_154690;
        case 0x154694u: goto label_154694;
        case 0x154698u: goto label_154698;
        case 0x15469cu: goto label_15469c;
        case 0x1546a0u: goto label_1546a0;
        case 0x1546a4u: goto label_1546a4;
        case 0x1546a8u: goto label_1546a8;
        case 0x1546acu: goto label_1546ac;
        case 0x1546b0u: goto label_1546b0;
        case 0x1546b4u: goto label_1546b4;
        case 0x1546b8u: goto label_1546b8;
        case 0x1546bcu: goto label_1546bc;
        case 0x1546c0u: goto label_1546c0;
        case 0x1546c4u: goto label_1546c4;
        case 0x1546c8u: goto label_1546c8;
        case 0x1546ccu: goto label_1546cc;
        case 0x1546d0u: goto label_1546d0;
        case 0x1546d4u: goto label_1546d4;
        case 0x1546d8u: goto label_1546d8;
        case 0x1546dcu: goto label_1546dc;
        case 0x1546e0u: goto label_1546e0;
        case 0x1546e4u: goto label_1546e4;
        case 0x1546e8u: goto label_1546e8;
        case 0x1546ecu: goto label_1546ec;
        case 0x1546f0u: goto label_1546f0;
        case 0x1546f4u: goto label_1546f4;
        case 0x1546f8u: goto label_1546f8;
        case 0x1546fcu: goto label_1546fc;
        case 0x154700u: goto label_154700;
        case 0x154704u: goto label_154704;
        case 0x154708u: goto label_154708;
        case 0x15470cu: goto label_15470c;
        case 0x154710u: goto label_154710;
        case 0x154714u: goto label_154714;
        case 0x154718u: goto label_154718;
        case 0x15471cu: goto label_15471c;
        case 0x154720u: goto label_154720;
        case 0x154724u: goto label_154724;
        case 0x154728u: goto label_154728;
        case 0x15472cu: goto label_15472c;
        case 0x154730u: goto label_154730;
        case 0x154734u: goto label_154734;
        case 0x154738u: goto label_154738;
        case 0x15473cu: goto label_15473c;
        case 0x154740u: goto label_154740;
        case 0x154744u: goto label_154744;
        case 0x154748u: goto label_154748;
        case 0x15474cu: goto label_15474c;
        case 0x154750u: goto label_154750;
        case 0x154754u: goto label_154754;
        case 0x154758u: goto label_154758;
        case 0x15475cu: goto label_15475c;
        case 0x154760u: goto label_154760;
        case 0x154764u: goto label_154764;
        case 0x154768u: goto label_154768;
        case 0x15476cu: goto label_15476c;
        case 0x154770u: goto label_154770;
        case 0x154774u: goto label_154774;
        case 0x154778u: goto label_154778;
        case 0x15477cu: goto label_15477c;
        case 0x154780u: goto label_154780;
        case 0x154784u: goto label_154784;
        case 0x154788u: goto label_154788;
        case 0x15478cu: goto label_15478c;
        case 0x154790u: goto label_154790;
        case 0x154794u: goto label_154794;
        case 0x154798u: goto label_154798;
        case 0x15479cu: goto label_15479c;
        case 0x1547a0u: goto label_1547a0;
        case 0x1547a4u: goto label_1547a4;
        case 0x1547a8u: goto label_1547a8;
        case 0x1547acu: goto label_1547ac;
        case 0x1547b0u: goto label_1547b0;
        case 0x1547b4u: goto label_1547b4;
        case 0x1547b8u: goto label_1547b8;
        case 0x1547bcu: goto label_1547bc;
        case 0x1547c0u: goto label_1547c0;
        case 0x1547c4u: goto label_1547c4;
        case 0x1547c8u: goto label_1547c8;
        case 0x1547ccu: goto label_1547cc;
        case 0x1547d0u: goto label_1547d0;
        case 0x1547d4u: goto label_1547d4;
        case 0x1547d8u: goto label_1547d8;
        case 0x1547dcu: goto label_1547dc;
        case 0x1547e0u: goto label_1547e0;
        case 0x1547e4u: goto label_1547e4;
        case 0x1547e8u: goto label_1547e8;
        case 0x1547ecu: goto label_1547ec;
        case 0x1547f0u: goto label_1547f0;
        case 0x1547f4u: goto label_1547f4;
        case 0x1547f8u: goto label_1547f8;
        case 0x1547fcu: goto label_1547fc;
        case 0x154800u: goto label_154800;
        case 0x154804u: goto label_154804;
        case 0x154808u: goto label_154808;
        case 0x15480cu: goto label_15480c;
        case 0x154810u: goto label_154810;
        case 0x154814u: goto label_154814;
        case 0x154818u: goto label_154818;
        case 0x15481cu: goto label_15481c;
        case 0x154820u: goto label_154820;
        case 0x154824u: goto label_154824;
        case 0x154828u: goto label_154828;
        case 0x15482cu: goto label_15482c;
        case 0x154830u: goto label_154830;
        case 0x154834u: goto label_154834;
        case 0x154838u: goto label_154838;
        case 0x15483cu: goto label_15483c;
        case 0x154840u: goto label_154840;
        case 0x154844u: goto label_154844;
        case 0x154848u: goto label_154848;
        case 0x15484cu: goto label_15484c;
        case 0x154850u: goto label_154850;
        case 0x154854u: goto label_154854;
        case 0x154858u: goto label_154858;
        case 0x15485cu: goto label_15485c;
        case 0x154860u: goto label_154860;
        case 0x154864u: goto label_154864;
        case 0x154868u: goto label_154868;
        case 0x15486cu: goto label_15486c;
        case 0x154870u: goto label_154870;
        case 0x154874u: goto label_154874;
        case 0x154878u: goto label_154878;
        case 0x15487cu: goto label_15487c;
        case 0x154880u: goto label_154880;
        case 0x154884u: goto label_154884;
        case 0x154888u: goto label_154888;
        case 0x15488cu: goto label_15488c;
        case 0x154890u: goto label_154890;
        case 0x154894u: goto label_154894;
        case 0x154898u: goto label_154898;
        case 0x15489cu: goto label_15489c;
        case 0x1548a0u: goto label_1548a0;
        case 0x1548a4u: goto label_1548a4;
        case 0x1548a8u: goto label_1548a8;
        case 0x1548acu: goto label_1548ac;
        case 0x1548b0u: goto label_1548b0;
        case 0x1548b4u: goto label_1548b4;
        case 0x1548b8u: goto label_1548b8;
        case 0x1548bcu: goto label_1548bc;
        case 0x1548c0u: goto label_1548c0;
        case 0x1548c4u: goto label_1548c4;
        case 0x1548c8u: goto label_1548c8;
        case 0x1548ccu: goto label_1548cc;
        case 0x1548d0u: goto label_1548d0;
        case 0x1548d4u: goto label_1548d4;
        case 0x1548d8u: goto label_1548d8;
        case 0x1548dcu: goto label_1548dc;
        case 0x1548e0u: goto label_1548e0;
        case 0x1548e4u: goto label_1548e4;
        case 0x1548e8u: goto label_1548e8;
        case 0x1548ecu: goto label_1548ec;
        case 0x1548f0u: goto label_1548f0;
        case 0x1548f4u: goto label_1548f4;
        case 0x1548f8u: goto label_1548f8;
        case 0x1548fcu: goto label_1548fc;
        case 0x154900u: goto label_154900;
        case 0x154904u: goto label_154904;
        case 0x154908u: goto label_154908;
        case 0x15490cu: goto label_15490c;
        case 0x154910u: goto label_154910;
        case 0x154914u: goto label_154914;
        case 0x154918u: goto label_154918;
        case 0x15491cu: goto label_15491c;
        case 0x154920u: goto label_154920;
        case 0x154924u: goto label_154924;
        case 0x154928u: goto label_154928;
        case 0x15492cu: goto label_15492c;
        case 0x154930u: goto label_154930;
        case 0x154934u: goto label_154934;
        case 0x154938u: goto label_154938;
        case 0x15493cu: goto label_15493c;
        case 0x154940u: goto label_154940;
        case 0x154944u: goto label_154944;
        case 0x154948u: goto label_154948;
        case 0x15494cu: goto label_15494c;
        case 0x154950u: goto label_154950;
        case 0x154954u: goto label_154954;
        case 0x154958u: goto label_154958;
        case 0x15495cu: goto label_15495c;
        default: return;
    }

label_154190:
    // 0x154190: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x154190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_154194:
    // 0x154194: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x154194u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_154198:
    // 0x154198: 0x1230c0  sll         $a2, $s2, 3
    ctx->pc = 0x154198u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_15419c:
    // 0x15419c: 0x24c27900  addiu       $v0, $a2, 0x7900
    ctx->pc = 0x15419cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
label_1541a0:
    // 0x1541a0: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1541a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
label_1541a4:
    // 0x1541a4: 0x26a6000f  addiu       $a2, $s5, 0xF
    ctx->pc = 0x1541a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 15));
label_1541a8:
    // 0x1541a8: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1541a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1541ac:
    // 0x1541ac: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1541acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_1541b0:
    // 0x1541b0: 0x24a57900  addiu       $a1, $a1, 0x7900
    ctx->pc = 0x1541b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
label_1541b4:
    // 0x1541b4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1541b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_1541b8:
    // 0x1541b8: 0x24090068  addiu       $t1, $zero, 0x68
    ctx->pc = 0x1541b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_1541bc:
    // 0x1541bc: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1541bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
label_1541c0:
    // 0x1541c0: 0xe64025  or          $t0, $a3, $a2
    ctx->pc = 0x1541c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_1541c4:
    // 0x1541c4: 0x16303c  dsll32      $a2, $s6, 0
    ctx->pc = 0x1541c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) << (32 + 0));
label_1541c8:
    // 0x1541c8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1541c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_1541cc:
    // 0x1541cc: 0x63e38  dsll        $a3, $a2, 24
    ctx->pc = 0x1541ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << 24);
label_1541d0:
    // 0x1541d0: 0x26c60017  addiu       $a2, $s6, 0x17
    ctx->pc = 0x1541d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 23));
label_1541d4:
    // 0x1541d4: 0xe84025  or          $t0, $a3, $t0
    ctx->pc = 0x1541d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_1541d8:
    // 0x1541d8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1541d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_1541dc:
    // 0x1541dc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1541dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_1541e0:
    // 0x1541e0: 0x638bc  dsll32      $a3, $a2, 2
    ctx->pc = 0x1541e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 2));
label_1541e4:
    // 0x1541e4: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1541e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_1541e8:
    // 0x1541e8: 0x153100  sll         $a2, $s5, 4
    ctx->pc = 0x1541e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_1541ec:
    // 0x1541ec: 0x24c80008  addiu       $t0, $a2, 0x8
    ctx->pc = 0x1541ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1541f0:
    // 0x1541f0: 0xfe870008  sd          $a3, 0x8($s4)
    ctx->pc = 0x1541f0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 7));
label_1541f4:
    // 0x1541f4: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x1541f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_1541f8:
    // 0x1541f8: 0xa6880020  sh          $t0, 0x20($s4)
    ctx->pc = 0x1541f8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 32), (uint16_t)GPR_U32(ctx, 8));
label_1541fc:
    // 0x1541fc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1541fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_154200:
    // 0x154200: 0x24ca0008  addiu       $t2, $a2, 0x8
    ctx->pc = 0x154200u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_154204:
    // 0x154204: 0x163100  sll         $a2, $s6, 4
    ctx->pc = 0x154204u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_154208:
    // 0x154208: 0x24c70008  addiu       $a3, $a2, 0x8
    ctx->pc = 0x154208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_15420c:
    // 0x15420c: 0xa6870022  sh          $a3, 0x22($s4)
    ctx->pc = 0x15420cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 34), (uint16_t)GPR_U32(ctx, 7));
label_154210:
    // 0x154210: 0x26c60018  addiu       $a2, $s6, 0x18
    ctx->pc = 0x154210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_154214:
    // 0x154214: 0xa68a0038  sh          $t2, 0x38($s4)
    ctx->pc = 0x154214u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 56), (uint16_t)GPR_U32(ctx, 10));
label_154218:
    // 0x154218: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x154218u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_15421c:
    // 0x15421c: 0xa687003a  sh          $a3, 0x3A($s4)
    ctx->pc = 0x15421cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 58), (uint16_t)GPR_U32(ctx, 7));
label_154220:
    // 0x154220: 0x24cb0008  addiu       $t3, $a2, 0x8
    ctx->pc = 0x154220u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_154224:
    // 0x154224: 0xa6880050  sh          $t0, 0x50($s4)
    ctx->pc = 0x154224u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 80), (uint16_t)GPR_U32(ctx, 8));
label_154228:
    // 0x154228: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x154228u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_15422c:
    // 0x15422c: 0xa68b0052  sh          $t3, 0x52($s4)
    ctx->pc = 0x15422cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 82), (uint16_t)GPR_U32(ctx, 11));
label_154230:
    // 0x154230: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x154230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_154234:
    // 0x154234: 0xa68a0068  sh          $t2, 0x68($s4)
    ctx->pc = 0x154234u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 104), (uint16_t)GPR_U32(ctx, 10));
label_154238:
    // 0x154238: 0x173040  sll         $a2, $s7, 1
    ctx->pc = 0x154238u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
label_15423c:
    // 0x15423c: 0xa68b006a  sh          $t3, 0x6A($s4)
    ctx->pc = 0x15423cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 106), (uint16_t)GPR_U32(ctx, 11));
label_154240:
    // 0x154240: 0xd75021  addu        $t2, $a2, $s7
    ctx->pc = 0x154240u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
label_154244:
    // 0x154244: 0xa6830028  sh          $v1, 0x28($s4)
    ctx->pc = 0x154244u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 40), (uint16_t)GPR_U32(ctx, 3));
label_154248:
    // 0x154248: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x154248u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_15424c:
    // 0x15424c: 0xa682002a  sh          $v0, 0x2A($s4)
    ctx->pc = 0x15424cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 42), (uint16_t)GPR_U32(ctx, 2));
label_154250:
    // 0x154250: 0x24c659c0  addiu       $a2, $a2, 0x59C0
    ctx->pc = 0x154250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22976));
label_154254:
    // 0x154254: 0xae91002c  sw          $s1, 0x2C($s4)
    ctx->pc = 0x154254u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 17));
label_154258:
    // 0x154258: 0xca5821  addu        $t3, $a2, $t2
    ctx->pc = 0x154258u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_15425c:
    // 0x15425c: 0xa6840040  sh          $a0, 0x40($s4)
    ctx->pc = 0x15425cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 64), (uint16_t)GPR_U32(ctx, 4));
label_154260:
    // 0x154260: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x154260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_154264:
    // 0x154264: 0xa6820042  sh          $v0, 0x42($s4)
    ctx->pc = 0x154264u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 66), (uint16_t)GPR_U32(ctx, 2));
label_154268:
    // 0x154268: 0x24c659c1  addiu       $a2, $a2, 0x59C1
    ctx->pc = 0x154268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22977));
label_15426c:
    // 0x15426c: 0xae910044  sw          $s1, 0x44($s4)
    ctx->pc = 0x15426cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 17));
label_154270:
    // 0x154270: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x154270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_154274:
    // 0x154274: 0xa6830058  sh          $v1, 0x58($s4)
    ctx->pc = 0x154274u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 88), (uint16_t)GPR_U32(ctx, 3));
label_154278:
    // 0x154278: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x154278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_15427c:
    // 0x15427c: 0xa685005a  sh          $a1, 0x5A($s4)
    ctx->pc = 0x15427cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 90), (uint16_t)GPR_U32(ctx, 5));
label_154280:
    // 0x154280: 0x244259c2  addiu       $v0, $v0, 0x59C2
    ctx->pc = 0x154280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22978));
label_154284:
    // 0x154284: 0xae91005c  sw          $s1, 0x5C($s4)
    ctx->pc = 0x154284u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 17));
label_154288:
    // 0x154288: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x154288u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_15428c:
    // 0x15428c: 0xa6840070  sh          $a0, 0x70($s4)
    ctx->pc = 0x15428cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 112), (uint16_t)GPR_U32(ctx, 4));
label_154290:
    // 0x154290: 0x26820080  addiu       $v0, $s4, 0x80
    ctx->pc = 0x154290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_154294:
    // 0x154294: 0xa6850072  sh          $a1, 0x72($s4)
    ctx->pc = 0x154294u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 114), (uint16_t)GPR_U32(ctx, 5));
label_154298:
    // 0x154298: 0xae910074  sw          $s1, 0x74($s4)
    ctx->pc = 0x154298u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 17));
label_15429c:
    // 0x15429c: 0xa2890018  sb          $t1, 0x18($s4)
    ctx->pc = 0x15429cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 24), (uint8_t)GPR_U32(ctx, 9));
label_1542a0:
    // 0x1542a0: 0xa2890019  sb          $t1, 0x19($s4)
    ctx->pc = 0x1542a0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 25), (uint8_t)GPR_U32(ctx, 9));
label_1542a4:
    // 0x1542a4: 0xa289001a  sb          $t1, 0x1A($s4)
    ctx->pc = 0x1542a4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 26), (uint8_t)GPR_U32(ctx, 9));
label_1542a8:
    // 0x1542a8: 0xa288001b  sb          $t0, 0x1B($s4)
    ctx->pc = 0x1542a8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 27), (uint8_t)GPR_U32(ctx, 8));
label_1542ac:
    // 0x1542ac: 0xae87001c  sw          $a3, 0x1C($s4)
    ctx->pc = 0x1542acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 7));
label_1542b0:
    // 0x1542b0: 0xa2890030  sb          $t1, 0x30($s4)
    ctx->pc = 0x1542b0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 48), (uint8_t)GPR_U32(ctx, 9));
label_1542b4:
    // 0x1542b4: 0xa2890031  sb          $t1, 0x31($s4)
    ctx->pc = 0x1542b4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 9));
label_1542b8:
    // 0x1542b8: 0xa2890032  sb          $t1, 0x32($s4)
    ctx->pc = 0x1542b8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 50), (uint8_t)GPR_U32(ctx, 9));
label_1542bc:
    // 0x1542bc: 0xa2880033  sb          $t0, 0x33($s4)
    ctx->pc = 0x1542bcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 51), (uint8_t)GPR_U32(ctx, 8));
label_1542c0:
    // 0x1542c0: 0xae870034  sw          $a3, 0x34($s4)
    ctx->pc = 0x1542c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 7));
label_1542c4:
    // 0x1542c4: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x1542c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_1542c8:
    // 0x1542c8: 0xa2830048  sb          $v1, 0x48($s4)
    ctx->pc = 0x1542c8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 72), (uint8_t)GPR_U32(ctx, 3));
label_1542cc:
    // 0x1542cc: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1542ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1542d0:
    // 0x1542d0: 0xa2830049  sb          $v1, 0x49($s4)
    ctx->pc = 0x1542d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 73), (uint8_t)GPR_U32(ctx, 3));
label_1542d4:
    // 0x1542d4: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x1542d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1542d8:
    // 0x1542d8: 0xa283004a  sb          $v1, 0x4A($s4)
    ctx->pc = 0x1542d8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 74), (uint8_t)GPR_U32(ctx, 3));
label_1542dc:
    // 0x1542dc: 0xa288004b  sb          $t0, 0x4B($s4)
    ctx->pc = 0x1542dcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 75), (uint8_t)GPR_U32(ctx, 8));
label_1542e0:
    // 0x1542e0: 0xae87004c  sw          $a3, 0x4C($s4)
    ctx->pc = 0x1542e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 7));
label_1542e4:
    // 0x1542e4: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x1542e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_1542e8:
    // 0x1542e8: 0xa2830060  sb          $v1, 0x60($s4)
    ctx->pc = 0x1542e8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 96), (uint8_t)GPR_U32(ctx, 3));
label_1542ec:
    // 0x1542ec: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1542ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1542f0:
    // 0x1542f0: 0xa2830061  sb          $v1, 0x61($s4)
    ctx->pc = 0x1542f0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 97), (uint8_t)GPR_U32(ctx, 3));
label_1542f4:
    // 0x1542f4: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x1542f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1542f8:
    // 0x1542f8: 0xa2830062  sb          $v1, 0x62($s4)
    ctx->pc = 0x1542f8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 98), (uint8_t)GPR_U32(ctx, 3));
label_1542fc:
    // 0x1542fc: 0xa2880063  sb          $t0, 0x63($s4)
    ctx->pc = 0x1542fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 99), (uint8_t)GPR_U32(ctx, 8));
label_154300:
    // 0x154300: 0xae870064  sw          $a3, 0x64($s4)
    ctx->pc = 0x154300u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 7));
label_154304:
    // 0x154304: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x154304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_154308:
    // 0x154308: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x154308u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15430c:
    // 0x15430c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15430cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_154310:
    // 0x154310: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x154310u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_154314:
    // 0x154314: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x154314u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_154318:
    // 0x154318: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x154318u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15431c:
    // 0x15431c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15431cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_154320:
    // 0x154320: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x154320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_154324:
    // 0x154324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x154324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_154328:
    // 0x154328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15432c:
    // 0x15432c: 0x3e00008  jr          $ra
label_154330:
    if (ctx->pc == 0x154330u) {
        ctx->pc = 0x154330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15432Cu;
        // 0x154330: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154334u;
        goto label_154334;
    }
    ctx->pc = 0x15432Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15432Cu;
        // 0x154330: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15432Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154334u;
label_154334:
    // 0x154334: 0x0  nop
    ctx->pc = 0x154334u;
    // NOP
label_154338:
    // 0x154338: 0x0  nop
    ctx->pc = 0x154338u;
    // NOP
label_15433c:
    // 0x15433c: 0x0  nop
    ctx->pc = 0x15433cu;
    // NOP
label_154340:
    // 0x154340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x154340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_154344:
    // 0x154344: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x154344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_154348:
    // 0x154348: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x154348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15434c:
    // 0x15434c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15434cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_154350:
    // 0x154350: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x154350u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_154354:
    // 0x154354: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x154354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_154358:
    // 0x154358: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x154358u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15435c:
    // 0x15435c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15435cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_154360:
    // 0x154360: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x154360u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_154364:
    // 0x154364: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x154364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_154368:
    // 0x154368: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x154368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15436c:
    // 0x15436c: 0x1000005f  b           . + 4 + (0x5F << 2)
label_154370:
    if (ctx->pc == 0x154370u) {
        ctx->pc = 0x154370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15436Cu;
        // 0x154370: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154374u;
        goto label_154374;
    }
    ctx->pc = 0x15436Cu;
    {
        const bool branch_taken_0x15436c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15436Cu;
        // 0x154370: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15436c) {
            ctx->pc = 0x1544ECu;
            goto label_1544ec;
        }
    }
    ctx->pc = 0x154374u;
label_154374:
    // 0x154374: 0xc0551bc  jal         func_1546F0
label_154378:
    if (ctx->pc == 0x154378u) {
        ctx->pc = 0x154378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154374u;
        // 0x154378: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15437Cu;
        goto label_15437c;
    }
    ctx->pc = 0x154374u;
    SET_GPR_U32(ctx, 31, 0x15437Cu);
    ctx->pc = 0x154378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154374u;
    // 0x154378: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1546F0u;
    goto label_1546f0;
    ctx->pc = 0x15437Cu;
label_15437c:
    // 0x15437c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_154380:
    if (ctx->pc == 0x154380u) {
        ctx->pc = 0x154384u;
        goto label_154384;
    }
    ctx->pc = 0x15437Cu;
    {
        const bool branch_taken_0x15437c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15437c) {
            ctx->pc = 0x1543B8u;
            goto label_1543b8;
        }
    }
    ctx->pc = 0x154384u;
label_154384:
    // 0x154384: 0x8f8485d8  lw          $a0, -0x7A28($gp)
    ctx->pc = 0x154384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936024)));
label_154388:
    // 0x154388: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x154388u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15438c:
    // 0x15438c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15438cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154390:
    // 0x154390: 0xa4180a  movz        $v1, $a1, $a0
    ctx->pc = 0x154390u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_154394:
    // 0x154394: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x154394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_154398:
    // 0x154398: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15439c:
    // 0x15439c: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x15439cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1543a0:
    // 0x1543a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1543a4:
    if (ctx->pc == 0x1543A4u) {
        ctx->pc = 0x1543A8u;
        goto label_1543a8;
    }
    ctx->pc = 0x1543A0u;
    {
        const bool branch_taken_0x1543a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1543a0) {
            ctx->pc = 0x1543B0u;
            goto label_1543b0;
        }
    }
    ctx->pc = 0x1543A8u;
label_1543a8:
    // 0x1543a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1543ac:
    if (ctx->pc == 0x1543ACu) {
        ctx->pc = 0x1543B0u;
        goto label_1543b0;
    }
    ctx->pc = 0x1543A8u;
    {
        const bool branch_taken_0x1543a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1543a8) {
            ctx->pc = 0x1543BCu;
            goto label_1543bc;
        }
    }
    ctx->pc = 0x1543B0u;
label_1543b0:
    // 0x1543b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1543b4:
    if (ctx->pc == 0x1543B4u) {
        ctx->pc = 0x1543B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543B0u;
        // 0x1543b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1543B8u;
        goto label_1543b8;
    }
    ctx->pc = 0x1543B0u;
    {
        const bool branch_taken_0x1543b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1543B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543B0u;
        // 0x1543b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1543b0) {
            ctx->pc = 0x1543BCu;
            goto label_1543bc;
        }
    }
    ctx->pc = 0x1543B8u;
label_1543b8:
    // 0x1543b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1543b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1543bc:
    // 0x1543bc: 0x0  nop
    ctx->pc = 0x1543bcu;
    // NOP
label_1543c0:
    // 0x1543c0: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
label_1543c4:
    if (ctx->pc == 0x1543C4u) {
        ctx->pc = 0x1543C8u;
        goto label_1543c8;
    }
    ctx->pc = 0x1543C0u;
    {
        const bool branch_taken_0x1543c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1543c0) {
            ctx->pc = 0x1543F8u;
            goto label_1543f8;
        }
    }
    ctx->pc = 0x1543C8u;
label_1543c8:
    // 0x1543c8: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x1543c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1543cc:
    // 0x1543cc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1543ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1543d0:
    // 0x1543d0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1543d4:
    if (ctx->pc == 0x1543D4u) {
        ctx->pc = 0x1543D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543D0u;
        // 0x1543d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1543D8u;
        goto label_1543d8;
    }
    ctx->pc = 0x1543D0u;
    {
        const bool branch_taken_0x1543d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1543D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543D0u;
        // 0x1543d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1543d0) {
            ctx->pc = 0x1543DCu;
            goto label_1543dc;
        }
    }
    ctx->pc = 0x1543D8u;
label_1543d8:
    // 0x1543d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1543d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1543dc:
    // 0x1543dc: 0x0  nop
    ctx->pc = 0x1543dcu;
    // NOP
label_1543e0:
    // 0x1543e0: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x1543e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1543e4:
    // 0x1543e4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1543e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1543e8:
    // 0x1543e8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1543ec:
    if (ctx->pc == 0x1543ECu) {
        ctx->pc = 0x1543F0u;
        goto label_1543f0;
    }
    ctx->pc = 0x1543E8u;
    {
        const bool branch_taken_0x1543e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1543e8) {
            ctx->pc = 0x1543F4u;
            goto label_1543f4;
        }
    }
    ctx->pc = 0x1543F0u;
label_1543f0:
    // 0x1543f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1543f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1543f4:
    // 0x1543f4: 0x0  nop
    ctx->pc = 0x1543f4u;
    // NOP
label_1543f8:
    // 0x1543f8: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x1543f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1543fc:
    // 0x1543fc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1543fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_154400:
    // 0x154400: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_154404:
    if (ctx->pc == 0x154404u) {
        ctx->pc = 0x154404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154400u;
        // 0x154404: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154408u;
        goto label_154408;
    }
    ctx->pc = 0x154400u;
    {
        const bool branch_taken_0x154400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154400u;
        // 0x154404: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154400) {
            ctx->pc = 0x154428u;
            goto label_154428;
        }
    }
    ctx->pc = 0x154408u;
label_154408:
    // 0x154408: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x154408u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_15440c:
    // 0x15440c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x15440cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_154410:
    // 0x154410: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_154414:
    if (ctx->pc == 0x154414u) {
        ctx->pc = 0x154414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154410u;
        // 0x154414: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154418u;
        goto label_154418;
    }
    ctx->pc = 0x154410u;
    {
        const bool branch_taken_0x154410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154410u;
        // 0x154414: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154410) {
            ctx->pc = 0x15441Cu;
            goto label_15441c;
        }
    }
    ctx->pc = 0x154418u;
label_154418:
    // 0x154418: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x154418u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_15441c:
    // 0x15441c: 0x0  nop
    ctx->pc = 0x15441cu;
    // NOP
label_154420:
    // 0x154420: 0x1000002c  b           . + 4 + (0x2C << 2)
label_154424:
    if (ctx->pc == 0x154424u) {
        ctx->pc = 0x154428u;
        goto label_154428;
    }
    ctx->pc = 0x154420u;
    {
        const bool branch_taken_0x154420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154420) {
            ctx->pc = 0x1544D4u;
            goto label_1544d4;
        }
    }
    ctx->pc = 0x154428u;
label_154428:
    // 0x154428: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x154428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_15442c:
    // 0x15442c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_154430:
    if (ctx->pc == 0x154430u) {
        ctx->pc = 0x154434u;
        goto label_154434;
    }
    ctx->pc = 0x15442Cu;
    {
        const bool branch_taken_0x15442c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15442c) {
            ctx->pc = 0x154468u;
            goto label_154468;
        }
    }
    ctx->pc = 0x154434u;
label_154434:
    // 0x154434: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x154434u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_154438:
    // 0x154438: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x154438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_15443c:
    // 0x15443c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_154440:
    if (ctx->pc == 0x154440u) {
        ctx->pc = 0x154440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15443Cu;
        // 0x154440: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154444u;
        goto label_154444;
    }
    ctx->pc = 0x15443Cu;
    {
        const bool branch_taken_0x15443c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15443Cu;
        // 0x154440: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15443c) {
            ctx->pc = 0x15444Cu;
            goto label_15444c;
        }
    }
    ctx->pc = 0x154444u;
label_154444:
    // 0x154444: 0x10000023  b           . + 4 + (0x23 << 2)
label_154448:
    if (ctx->pc == 0x154448u) {
        ctx->pc = 0x154448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154444u;
        // 0x154448: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15444Cu;
        goto label_15444c;
    }
    ctx->pc = 0x154444u;
    {
        const bool branch_taken_0x154444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154444u;
        // 0x154448: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154444) {
            ctx->pc = 0x1544D4u;
            goto label_1544d4;
        }
    }
    ctx->pc = 0x15444Cu;
label_15444c:
    // 0x15444c: 0x0  nop
    ctx->pc = 0x15444cu;
    // NOP
label_154450:
    // 0x154450: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x154450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_154454:
    // 0x154454: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_154458:
    if (ctx->pc == 0x154458u) {
        ctx->pc = 0x15445Cu;
        goto label_15445c;
    }
    ctx->pc = 0x154454u;
    {
        const bool branch_taken_0x154454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x154454) {
            ctx->pc = 0x1544D4u;
            goto label_1544d4;
        }
    }
    ctx->pc = 0x15445Cu;
label_15445c:
    // 0x15445c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15445cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_154460:
    // 0x154460: 0x1000001c  b           . + 4 + (0x1C << 2)
label_154464:
    if (ctx->pc == 0x154464u) {
        ctx->pc = 0x154464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154460u;
        // 0x154464: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154468u;
        goto label_154468;
    }
    ctx->pc = 0x154460u;
    {
        const bool branch_taken_0x154460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154460u;
        // 0x154464: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154460) {
            ctx->pc = 0x1544D4u;
            goto label_1544d4;
        }
    }
    ctx->pc = 0x154468u;
label_154468:
    // 0x154468: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x154468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_15446c:
    // 0x15446c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_154470:
    if (ctx->pc == 0x154470u) {
        ctx->pc = 0x154470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15446Cu;
        // 0x154470: 0x28610080  slti        $at, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x154474u;
        goto label_154474;
    }
    ctx->pc = 0x15446Cu;
    {
        const bool branch_taken_0x15446c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15446Cu;
        // 0x154470: 0x28610080  slti        $at, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15446c) {
            ctx->pc = 0x1544D4u;
            goto label_1544d4;
        }
    }
    ctx->pc = 0x154474u;
label_154474:
    // 0x154474: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_154478:
    if (ctx->pc == 0x154478u) {
        ctx->pc = 0x15447Cu;
        goto label_15447c;
    }
    ctx->pc = 0x154474u;
    {
        const bool branch_taken_0x154474 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x154474) {
            ctx->pc = 0x1544D4u;
            goto label_1544d4;
        }
    }
    ctx->pc = 0x15447Cu;
label_15447c:
    // 0x15447c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_154480:
    if (ctx->pc == 0x154480u) {
        ctx->pc = 0x154480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15447Cu;
        // 0x154480: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154484u;
        goto label_154484;
    }
    ctx->pc = 0x15447Cu;
    {
        const bool branch_taken_0x15447c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x154480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15447Cu;
        // 0x154480: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15447c) {
            ctx->pc = 0x1544A4u;
            goto label_1544a4;
        }
    }
    ctx->pc = 0x154484u;
label_154484:
    // 0x154484: 0x8f8285d8  lw          $v0, -0x7A28($gp)
    ctx->pc = 0x154484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936024)));
label_154488:
    // 0x154488: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15448c:
    if (ctx->pc == 0x15448Cu) {
        ctx->pc = 0x15448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154488u;
        // 0x15448c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154490u;
        goto label_154490;
    }
    ctx->pc = 0x154488u;
    {
        const bool branch_taken_0x154488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154488u;
        // 0x15448c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154488) {
            ctx->pc = 0x154498u;
            goto label_154498;
        }
    }
    ctx->pc = 0x154490u;
label_154490:
    // 0x154490: 0x10000002  b           . + 4 + (0x2 << 2)
label_154494:
    if (ctx->pc == 0x154494u) {
        ctx->pc = 0x154498u;
        goto label_154498;
    }
    ctx->pc = 0x154490u;
    {
        const bool branch_taken_0x154490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154490) {
            ctx->pc = 0x15449Cu;
            goto label_15449c;
        }
    }
    ctx->pc = 0x154498u;
label_154498:
    // 0x154498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15449c:
    // 0x15449c: 0x0  nop
    ctx->pc = 0x15449cu;
    // NOP
label_1544a0:
    // 0x1544a0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1544a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1544a4:
    // 0x1544a4: 0x0  nop
    ctx->pc = 0x1544a4u;
    // NOP
label_1544a8:
    // 0x1544a8: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1544a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_1544ac:
    // 0x1544ac: 0x24421d30  addiu       $v0, $v0, 0x1D30
    ctx->pc = 0x1544acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7472));
label_1544b0:
    // 0x1544b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1544b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1544b4:
    // 0x1544b4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1544b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1544b8:
    // 0x1544b8: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x1544b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1544bc:
    // 0x1544bc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1544c0:
    if (ctx->pc == 0x1544C0u) {
        ctx->pc = 0x1544C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544BCu;
        // 0x1544c0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1544C4u;
        goto label_1544c4;
    }
    ctx->pc = 0x1544BCu;
    {
        const bool branch_taken_0x1544bc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1544C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544BCu;
        // 0x1544c0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544bc) {
            ctx->pc = 0x1544CCu;
            goto label_1544cc;
        }
    }
    ctx->pc = 0x1544C4u;
label_1544c4:
    // 0x1544c4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1544c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1544c8:
    // 0x1544c8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1544c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1544cc:
    // 0x1544cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1544ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1544d0:
    // 0x1544d0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1544d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1544d4:
    // 0x1544d4: 0x0  nop
    ctx->pc = 0x1544d4u;
    // NOP
label_1544d8:
    // 0x1544d8: 0x230082a  slt         $at, $s1, $s0
    ctx->pc = 0x1544d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1544dc:
    // 0x1544dc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1544e0:
    if (ctx->pc == 0x1544E0u) {
        ctx->pc = 0x1544E4u;
        goto label_1544e4;
    }
    ctx->pc = 0x1544DCu;
    {
        const bool branch_taken_0x1544dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1544dc) {
            ctx->pc = 0x1544ECu;
            goto label_1544ec;
        }
    }
    ctx->pc = 0x1544E4u;
label_1544e4:
    // 0x1544e4: 0x10000001  b           . + 4 + (0x1 << 2)
label_1544e8:
    if (ctx->pc == 0x1544E8u) {
        ctx->pc = 0x1544E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544E4u;
        // 0x1544e8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1544ECu;
        goto label_1544ec;
    }
    ctx->pc = 0x1544E4u;
    {
        const bool branch_taken_0x1544e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1544E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544E4u;
        // 0x1544e8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544e4) {
            ctx->pc = 0x1544ECu;
            goto label_1544ec;
        }
    }
    ctx->pc = 0x1544ECu;
label_1544ec:
    // 0x1544ec: 0x0  nop
    ctx->pc = 0x1544ecu;
    // NOP
label_1544f0:
    // 0x1544f0: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x1544f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1544f4:
    // 0x1544f4: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
label_1544f8:
    if (ctx->pc == 0x1544F8u) {
        ctx->pc = 0x1544F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544F4u;
        // 0x1544f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1544FCu;
        goto label_1544fc;
    }
    ctx->pc = 0x1544F4u;
    {
        const bool branch_taken_0x1544f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1544F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544F4u;
        // 0x1544f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544f4) {
            ctx->pc = 0x154374u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154374;
        }
    }
    ctx->pc = 0x1544FCu;
label_1544fc:
    // 0x1544fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1544fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_154500:
    // 0x154500: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x154500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_154504:
    // 0x154504: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x154504u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_154508:
    // 0x154508: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x154508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15450c:
    // 0x15450c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15450cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_154510:
    // 0x154510: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x154510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_154514:
    // 0x154514: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_154518:
    // 0x154518: 0x3e00008  jr          $ra
label_15451c:
    if (ctx->pc == 0x15451Cu) {
        ctx->pc = 0x15451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154518u;
        // 0x15451c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154520u;
        goto label_154520;
    }
    ctx->pc = 0x154518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154518u;
        // 0x15451c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154520u;
label_154520:
    // 0x154520: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x154520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_154524:
    // 0x154524: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x154524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_154528:
    // 0x154528: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x154528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15452c:
    // 0x15452c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15452cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_154530:
    // 0x154530: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x154530u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_154534:
    // 0x154534: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x154534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_154538:
    // 0x154538: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x154538u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15453c:
    // 0x15453c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15453cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_154540:
    // 0x154540: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x154540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_154544:
    // 0x154544: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x154544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_154548:
    // 0x154548: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x154548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15454c:
    // 0x15454c: 0x10000059  b           . + 4 + (0x59 << 2)
label_154550:
    if (ctx->pc == 0x154550u) {
        ctx->pc = 0x154550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15454Cu;
        // 0x154550: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154554u;
        goto label_154554;
    }
    ctx->pc = 0x15454Cu;
    {
        const bool branch_taken_0x15454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15454Cu;
        // 0x154550: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15454c) {
            ctx->pc = 0x1546B4u;
            goto label_1546b4;
        }
    }
    ctx->pc = 0x154554u;
label_154554:
    // 0x154554: 0xc0551bc  jal         func_1546F0
label_154558:
    if (ctx->pc == 0x154558u) {
        ctx->pc = 0x154558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154554u;
        // 0x154558: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15455Cu;
        goto label_15455c;
    }
    ctx->pc = 0x154554u;
    SET_GPR_U32(ctx, 31, 0x15455Cu);
    ctx->pc = 0x154558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154554u;
    // 0x154558: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1546F0u;
    goto label_1546f0;
    ctx->pc = 0x15455Cu;
label_15455c:
    // 0x15455c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_154560:
    if (ctx->pc == 0x154560u) {
        ctx->pc = 0x154564u;
        goto label_154564;
    }
    ctx->pc = 0x15455Cu;
    {
        const bool branch_taken_0x15455c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15455c) {
            ctx->pc = 0x154598u;
            goto label_154598;
        }
    }
    ctx->pc = 0x154564u;
label_154564:
    // 0x154564: 0x8f8485d8  lw          $a0, -0x7A28($gp)
    ctx->pc = 0x154564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936024)));
label_154568:
    // 0x154568: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x154568u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15456c:
    // 0x15456c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15456cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154570:
    // 0x154570: 0xa4180a  movz        $v1, $a1, $a0
    ctx->pc = 0x154570u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_154574:
    // 0x154574: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x154574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_154578:
    // 0x154578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15457c:
    // 0x15457c: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x15457cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_154580:
    // 0x154580: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_154584:
    if (ctx->pc == 0x154584u) {
        ctx->pc = 0x154588u;
        goto label_154588;
    }
    ctx->pc = 0x154580u;
    {
        const bool branch_taken_0x154580 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x154580) {
            ctx->pc = 0x154590u;
            goto label_154590;
        }
    }
    ctx->pc = 0x154588u;
label_154588:
    // 0x154588: 0x10000004  b           . + 4 + (0x4 << 2)
label_15458c:
    if (ctx->pc == 0x15458Cu) {
        ctx->pc = 0x154590u;
        goto label_154590;
    }
    ctx->pc = 0x154588u;
    {
        const bool branch_taken_0x154588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154588) {
            ctx->pc = 0x15459Cu;
            goto label_15459c;
        }
    }
    ctx->pc = 0x154590u;
label_154590:
    // 0x154590: 0x10000002  b           . + 4 + (0x2 << 2)
label_154594:
    if (ctx->pc == 0x154594u) {
        ctx->pc = 0x154594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154590u;
        // 0x154594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154598u;
        goto label_154598;
    }
    ctx->pc = 0x154590u;
    {
        const bool branch_taken_0x154590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154590u;
        // 0x154594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154590) {
            ctx->pc = 0x15459Cu;
            goto label_15459c;
        }
    }
    ctx->pc = 0x154598u;
label_154598:
    // 0x154598: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x154598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15459c:
    // 0x15459c: 0x0  nop
    ctx->pc = 0x15459cu;
    // NOP
label_1545a0:
    // 0x1545a0: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
label_1545a4:
    if (ctx->pc == 0x1545A4u) {
        ctx->pc = 0x1545A8u;
        goto label_1545a8;
    }
    ctx->pc = 0x1545A0u;
    {
        const bool branch_taken_0x1545a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1545a0) {
            ctx->pc = 0x1545D8u;
            goto label_1545d8;
        }
    }
    ctx->pc = 0x1545A8u;
label_1545a8:
    // 0x1545a8: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x1545a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1545ac:
    // 0x1545ac: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1545acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1545b0:
    // 0x1545b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1545b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1545b4:
    // 0x1545b4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1545b8:
    if (ctx->pc == 0x1545B8u) {
        ctx->pc = 0x1545B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545B4u;
        // 0x1545b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1545BCu;
        goto label_1545bc;
    }
    ctx->pc = 0x1545B4u;
    {
        const bool branch_taken_0x1545b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1545B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545B4u;
        // 0x1545b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545b4) {
            ctx->pc = 0x1545C0u;
            goto label_1545c0;
        }
    }
    ctx->pc = 0x1545BCu;
label_1545bc:
    // 0x1545bc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1545bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1545c0:
    // 0x1545c0: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x1545c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1545c4:
    // 0x1545c4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1545c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1545c8:
    // 0x1545c8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1545cc:
    if (ctx->pc == 0x1545CCu) {
        ctx->pc = 0x1545D0u;
        goto label_1545d0;
    }
    ctx->pc = 0x1545C8u;
    {
        const bool branch_taken_0x1545c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1545c8) {
            ctx->pc = 0x1545D4u;
            goto label_1545d4;
        }
    }
    ctx->pc = 0x1545D0u;
label_1545d0:
    // 0x1545d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1545d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1545d4:
    // 0x1545d4: 0x0  nop
    ctx->pc = 0x1545d4u;
    // NOP
label_1545d8:
    // 0x1545d8: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x1545d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1545dc:
    // 0x1545dc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1545dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1545e0:
    // 0x1545e0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1545e4:
    if (ctx->pc == 0x1545E4u) {
        ctx->pc = 0x1545E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545E0u;
        // 0x1545e4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1545E8u;
        goto label_1545e8;
    }
    ctx->pc = 0x1545E0u;
    {
        const bool branch_taken_0x1545e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1545E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545E0u;
        // 0x1545e4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545e0) {
            ctx->pc = 0x154608u;
            goto label_154608;
        }
    }
    ctx->pc = 0x1545E8u;
label_1545e8:
    // 0x1545e8: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x1545e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1545ec:
    // 0x1545ec: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1545ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1545f0:
    // 0x1545f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1545f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1545f4:
    // 0x1545f4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1545f8:
    if (ctx->pc == 0x1545F8u) {
        ctx->pc = 0x1545F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545F4u;
        // 0x1545f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1545FCu;
        goto label_1545fc;
    }
    ctx->pc = 0x1545F4u;
    {
        const bool branch_taken_0x1545f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1545F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545F4u;
        // 0x1545f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545f4) {
            ctx->pc = 0x154600u;
            goto label_154600;
        }
    }
    ctx->pc = 0x1545FCu;
label_1545fc:
    // 0x1545fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1545fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_154600:
    // 0x154600: 0x1000002c  b           . + 4 + (0x2C << 2)
label_154604:
    if (ctx->pc == 0x154604u) {
        ctx->pc = 0x154608u;
        goto label_154608;
    }
    ctx->pc = 0x154600u;
    {
        const bool branch_taken_0x154600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154600) {
            ctx->pc = 0x1546B4u;
            goto label_1546b4;
        }
    }
    ctx->pc = 0x154608u;
label_154608:
    // 0x154608: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x154608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_15460c:
    // 0x15460c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_154610:
    if (ctx->pc == 0x154610u) {
        ctx->pc = 0x154614u;
        goto label_154614;
    }
    ctx->pc = 0x15460Cu;
    {
        const bool branch_taken_0x15460c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15460c) {
            ctx->pc = 0x154648u;
            goto label_154648;
        }
    }
    ctx->pc = 0x154614u;
label_154614:
    // 0x154614: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x154614u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_154618:
    // 0x154618: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x154618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_15461c:
    // 0x15461c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_154620:
    if (ctx->pc == 0x154620u) {
        ctx->pc = 0x154620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15461Cu;
        // 0x154620: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154624u;
        goto label_154624;
    }
    ctx->pc = 0x15461Cu;
    {
        const bool branch_taken_0x15461c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15461Cu;
        // 0x154620: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15461c) {
            ctx->pc = 0x15462Cu;
            goto label_15462c;
        }
    }
    ctx->pc = 0x154624u;
label_154624:
    // 0x154624: 0x10000023  b           . + 4 + (0x23 << 2)
label_154628:
    if (ctx->pc == 0x154628u) {
        ctx->pc = 0x154628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154624u;
        // 0x154628: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15462Cu;
        goto label_15462c;
    }
    ctx->pc = 0x154624u;
    {
        const bool branch_taken_0x154624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154624u;
        // 0x154628: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154624) {
            ctx->pc = 0x1546B4u;
            goto label_1546b4;
        }
    }
    ctx->pc = 0x15462Cu;
label_15462c:
    // 0x15462c: 0x0  nop
    ctx->pc = 0x15462cu;
    // NOP
label_154630:
    // 0x154630: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x154630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_154634:
    // 0x154634: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_154638:
    if (ctx->pc == 0x154638u) {
        ctx->pc = 0x15463Cu;
        goto label_15463c;
    }
    ctx->pc = 0x154634u;
    {
        const bool branch_taken_0x154634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x154634) {
            ctx->pc = 0x1546B4u;
            goto label_1546b4;
        }
    }
    ctx->pc = 0x15463Cu;
label_15463c:
    // 0x15463c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15463cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_154640:
    // 0x154640: 0x1000001c  b           . + 4 + (0x1C << 2)
label_154644:
    if (ctx->pc == 0x154644u) {
        ctx->pc = 0x154644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154640u;
        // 0x154644: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154648u;
        goto label_154648;
    }
    ctx->pc = 0x154640u;
    {
        const bool branch_taken_0x154640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154640u;
        // 0x154644: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154640) {
            ctx->pc = 0x1546B4u;
            goto label_1546b4;
        }
    }
    ctx->pc = 0x154648u;
label_154648:
    // 0x154648: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x154648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_15464c:
    // 0x15464c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_154650:
    if (ctx->pc == 0x154650u) {
        ctx->pc = 0x154650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15464Cu;
        // 0x154650: 0x28610080  slti        $at, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x154654u;
        goto label_154654;
    }
    ctx->pc = 0x15464Cu;
    {
        const bool branch_taken_0x15464c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15464Cu;
        // 0x154650: 0x28610080  slti        $at, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15464c) {
            ctx->pc = 0x1546B4u;
            goto label_1546b4;
        }
    }
    ctx->pc = 0x154654u;
label_154654:
    // 0x154654: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_154658:
    if (ctx->pc == 0x154658u) {
        ctx->pc = 0x15465Cu;
        goto label_15465c;
    }
    ctx->pc = 0x154654u;
    {
        const bool branch_taken_0x154654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x154654) {
            ctx->pc = 0x1546B4u;
            goto label_1546b4;
        }
    }
    ctx->pc = 0x15465Cu;
label_15465c:
    // 0x15465c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_154660:
    if (ctx->pc == 0x154660u) {
        ctx->pc = 0x154660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15465Cu;
        // 0x154660: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154664u;
        goto label_154664;
    }
    ctx->pc = 0x15465Cu;
    {
        const bool branch_taken_0x15465c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x154660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15465Cu;
        // 0x154660: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15465c) {
            ctx->pc = 0x154684u;
            goto label_154684;
        }
    }
    ctx->pc = 0x154664u;
label_154664:
    // 0x154664: 0x8f8285d8  lw          $v0, -0x7A28($gp)
    ctx->pc = 0x154664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936024)));
label_154668:
    // 0x154668: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15466c:
    if (ctx->pc == 0x15466Cu) {
        ctx->pc = 0x15466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154668u;
        // 0x15466c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154670u;
        goto label_154670;
    }
    ctx->pc = 0x154668u;
    {
        const bool branch_taken_0x154668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154668u;
        // 0x15466c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154668) {
            ctx->pc = 0x154678u;
            goto label_154678;
        }
    }
    ctx->pc = 0x154670u;
label_154670:
    // 0x154670: 0x10000002  b           . + 4 + (0x2 << 2)
label_154674:
    if (ctx->pc == 0x154674u) {
        ctx->pc = 0x154678u;
        goto label_154678;
    }
    ctx->pc = 0x154670u;
    {
        const bool branch_taken_0x154670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154670) {
            ctx->pc = 0x15467Cu;
            goto label_15467c;
        }
    }
    ctx->pc = 0x154678u;
label_154678:
    // 0x154678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15467c:
    // 0x15467c: 0x0  nop
    ctx->pc = 0x15467cu;
    // NOP
label_154680:
    // 0x154680: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x154680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_154684:
    // 0x154684: 0x0  nop
    ctx->pc = 0x154684u;
    // NOP
label_154688:
    // 0x154688: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x154688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_15468c:
    // 0x15468c: 0x24421d30  addiu       $v0, $v0, 0x1D30
    ctx->pc = 0x15468cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7472));
label_154690:
    // 0x154690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154694:
    // 0x154694: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x154694u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_154698:
    // 0x154698: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x154698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15469c:
    // 0x15469c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1546a0:
    if (ctx->pc == 0x1546A0u) {
        ctx->pc = 0x1546A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15469Cu;
        // 0x1546a0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1546A4u;
        goto label_1546a4;
    }
    ctx->pc = 0x15469Cu;
    {
        const bool branch_taken_0x15469c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1546A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15469Cu;
        // 0x1546a0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15469c) {
            ctx->pc = 0x1546ACu;
            goto label_1546ac;
        }
    }
    ctx->pc = 0x1546A4u;
label_1546a4:
    // 0x1546a4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1546a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1546a8:
    // 0x1546a8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1546a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1546ac:
    // 0x1546ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1546acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1546b0:
    // 0x1546b0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1546b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1546b4:
    // 0x1546b4: 0x0  nop
    ctx->pc = 0x1546b4u;
    // NOP
label_1546b8:
    // 0x1546b8: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x1546b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1546bc:
    // 0x1546bc: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
label_1546c0:
    if (ctx->pc == 0x1546C0u) {
        ctx->pc = 0x1546C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546BCu;
        // 0x1546c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1546C4u;
        goto label_1546c4;
    }
    ctx->pc = 0x1546BCu;
    {
        const bool branch_taken_0x1546bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1546C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546BCu;
        // 0x1546c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546bc) {
            ctx->pc = 0x154554u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154554;
        }
    }
    ctx->pc = 0x1546C4u;
label_1546c4:
    // 0x1546c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1546c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1546c8:
    // 0x1546c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1546c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1546cc:
    // 0x1546cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1546ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1546d0:
    // 0x1546d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1546d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1546d4:
    // 0x1546d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1546d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1546d8:
    // 0x1546d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1546d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1546dc:
    // 0x1546dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1546dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1546e0:
    // 0x1546e0: 0x3e00008  jr          $ra
label_1546e4:
    if (ctx->pc == 0x1546E4u) {
        ctx->pc = 0x1546E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546E0u;
        // 0x1546e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1546E8u;
        goto label_1546e8;
    }
    ctx->pc = 0x1546E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1546E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546E0u;
        // 0x1546e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1546E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1546E8u;
label_1546e8:
    // 0x1546e8: 0x0  nop
    ctx->pc = 0x1546e8u;
    // NOP
label_1546ec:
    // 0x1546ec: 0x0  nop
    ctx->pc = 0x1546ecu;
    // NOP
label_1546f0:
    // 0x1546f0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1546f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1546f4:
    // 0x1546f4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1546f8:
    if (ctx->pc == 0x1546F8u) {
        ctx->pc = 0x1546F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546F4u;
        // 0x1546f8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1546FCu;
        goto label_1546fc;
    }
    ctx->pc = 0x1546F4u;
    {
        const bool branch_taken_0x1546f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1546F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546F4u;
        // 0x1546f8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546f4) {
            ctx->pc = 0x154704u;
            goto label_154704;
        }
    }
    ctx->pc = 0x1546FCu;
label_1546fc:
    // 0x1546fc: 0x10000009  b           . + 4 + (0x9 << 2)
label_154700:
    if (ctx->pc == 0x154700u) {
        ctx->pc = 0x154700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546FCu;
        // 0x154700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154704u;
        goto label_154704;
    }
    ctx->pc = 0x1546FCu;
    {
        const bool branch_taken_0x1546fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546FCu;
        // 0x154700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546fc) {
            ctx->pc = 0x154724u;
            goto label_154724;
        }
    }
    ctx->pc = 0x154704u;
label_154704:
    // 0x154704: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_154708:
    if (ctx->pc == 0x154708u) {
        ctx->pc = 0x15470Cu;
        goto label_15470c;
    }
    ctx->pc = 0x154704u;
    {
        const bool branch_taken_0x154704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x154704) {
            ctx->pc = 0x154714u;
            goto label_154714;
        }
    }
    ctx->pc = 0x15470Cu;
label_15470c:
    // 0x15470c: 0x10000005  b           . + 4 + (0x5 << 2)
label_154710:
    if (ctx->pc == 0x154710u) {
        ctx->pc = 0x154710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15470Cu;
        // 0x154710: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154714u;
        goto label_154714;
    }
    ctx->pc = 0x15470Cu;
    {
        const bool branch_taken_0x15470c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15470Cu;
        // 0x154710: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15470c) {
            ctx->pc = 0x154724u;
            goto label_154724;
        }
    }
    ctx->pc = 0x154714u;
label_154714:
    // 0x154714: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x154714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_154718:
    // 0x154718: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_15471c:
    if (ctx->pc == 0x15471Cu) {
        ctx->pc = 0x15471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154718u;
        // 0x15471c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154720u;
        goto label_154720;
    }
    ctx->pc = 0x154718u;
    {
        const bool branch_taken_0x154718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154718u;
        // 0x15471c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154718) {
            ctx->pc = 0x154724u;
            goto label_154724;
        }
    }
    ctx->pc = 0x154720u;
label_154720:
    // 0x154720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154724:
    // 0x154724: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_154728:
    if (ctx->pc == 0x154728u) {
        ctx->pc = 0x15472Cu;
        goto label_15472c;
    }
    ctx->pc = 0x154724u;
    {
        const bool branch_taken_0x154724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154724) {
            ctx->pc = 0x15476Cu;
            goto label_15476c;
        }
    }
    ctx->pc = 0x15472Cu;
label_15472c:
    // 0x15472c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x15472cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_154730:
    // 0x154730: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x154730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_154734:
    // 0x154734: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x154734u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_154738:
    // 0x154738: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_15473c:
    if (ctx->pc == 0x15473Cu) {
        ctx->pc = 0x15473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154738u;
        // 0x15473c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154740u;
        goto label_154740;
    }
    ctx->pc = 0x154738u;
    {
        const bool branch_taken_0x154738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154738u;
        // 0x15473c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154738) {
            ctx->pc = 0x154764u;
            goto label_154764;
        }
    }
    ctx->pc = 0x154740u;
label_154740:
    // 0x154740: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x154740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_154744:
    // 0x154744: 0x80221d30  lb          $v0, 0x1D30($at)
    ctx->pc = 0x154744u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 7472)));
label_154748:
    // 0x154748: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x154748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15474c:
    // 0x15474c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_154750:
    if (ctx->pc == 0x154750u) {
        ctx->pc = 0x154750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15474Cu;
        // 0x154750: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154754u;
        goto label_154754;
    }
    ctx->pc = 0x15474Cu;
    {
        const bool branch_taken_0x15474c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x154750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15474Cu;
        // 0x154750: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15474c) {
            ctx->pc = 0x15475Cu;
            goto label_15475c;
        }
    }
    ctx->pc = 0x154754u;
label_154754:
    // 0x154754: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x154754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_154758:
    // 0x154758: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x154758u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_15475c:
    // 0x15475c: 0x10000064  b           . + 4 + (0x64 << 2)
label_154760:
    if (ctx->pc == 0x154760u) {
        ctx->pc = 0x154760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15475Cu;
        // 0x154760: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154764u;
        goto label_154764;
    }
    ctx->pc = 0x15475Cu;
    {
        const bool branch_taken_0x15475c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15475Cu;
        // 0x154760: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15475c) {
            ctx->pc = 0x1548F0u;
            goto label_1548f0;
        }
    }
    ctx->pc = 0x154764u;
label_154764:
    // 0x154764: 0x10000062  b           . + 4 + (0x62 << 2)
label_154768:
    if (ctx->pc == 0x154768u) {
        ctx->pc = 0x15476Cu;
        goto label_15476c;
    }
    ctx->pc = 0x154764u;
    {
        const bool branch_taken_0x154764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154764) {
            ctx->pc = 0x1548F0u;
            goto label_1548f0;
        }
    }
    ctx->pc = 0x15476Cu;
label_15476c:
    // 0x15476c: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x15476cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_154770:
    // 0x154770: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x154770u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
label_154774:
    // 0x154774: 0x14600045  bnez        $v1, . + 4 + (0x45 << 2)
label_154778:
    if (ctx->pc == 0x154778u) {
        ctx->pc = 0x154778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154774u;
        // 0x154778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15477Cu;
        goto label_15477c;
    }
    ctx->pc = 0x154774u;
    {
        const bool branch_taken_0x154774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x154778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154774u;
        // 0x154778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154774) {
            ctx->pc = 0x15488Cu;
            goto label_15488c;
        }
    }
    ctx->pc = 0x15477Cu;
label_15477c:
    // 0x15477c: 0x28c10080  slti        $at, $a2, 0x80
    ctx->pc = 0x15477cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
label_154780:
    // 0x154780: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
label_154784:
    if (ctx->pc == 0x154784u) {
        ctx->pc = 0x154784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154780u;
        // 0x154784: 0x3c03002b  lui         $v1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154788u;
        goto label_154788;
    }
    ctx->pc = 0x154780u;
    {
        const bool branch_taken_0x154780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x154784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154780u;
        // 0x154784: 0x3c03002b  lui         $v1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154780) {
            ctx->pc = 0x15488Cu;
            goto label_15488c;
        }
    }
    ctx->pc = 0x154788u;
label_154788:
    // 0x154788: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x154788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
label_15478c:
    // 0x15478c: 0x24631d30  addiu       $v1, $v1, 0x1D30
    ctx->pc = 0x15478cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7472));
label_154790:
    // 0x154790: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x154790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_154794:
    // 0x154794: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x154794u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_154798:
    // 0x154798: 0x653018  mult        $a2, $v1, $a1
    ctx->pc = 0x154798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_15479c:
    // 0x15479c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1547a0:
    if (ctx->pc == 0x1547A0u) {
        ctx->pc = 0x1547A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15479Cu;
        // 0x1547a0: 0x61903  sra         $v1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1547A4u;
        goto label_1547a4;
    }
    ctx->pc = 0x15479Cu;
    {
        const bool branch_taken_0x15479c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1547A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15479Cu;
        // 0x1547a0: 0x61903  sra         $v1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15479c) {
            ctx->pc = 0x1547ACu;
            goto label_1547ac;
        }
    }
    ctx->pc = 0x1547A4u;
label_1547a4:
    // 0x1547a4: 0x24c3000f  addiu       $v1, $a2, 0xF
    ctx->pc = 0x1547a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1547a8:
    // 0x1547a8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1547a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1547ac:
    // 0x1547ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1547acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1547b0:
    // 0x1547b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1547b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1547b4:
    // 0x1547b4: 0x10000035  b           . + 4 + (0x35 << 2)
label_1547b8:
    if (ctx->pc == 0x1547B8u) {
        ctx->pc = 0x1547B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547B4u;
        // 0x1547b8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1547BCu;
        goto label_1547bc;
    }
    ctx->pc = 0x1547B4u;
    {
        const bool branch_taken_0x1547b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1547B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547B4u;
        // 0x1547b8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1547b4) {
            ctx->pc = 0x15488Cu;
            goto label_15488c;
        }
    }
    ctx->pc = 0x1547BCu;
label_1547bc:
    // 0x1547bc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1547bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1547c0:
    // 0x1547c0: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x1547c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
label_1547c4:
    // 0x1547c4: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_1547c8:
    if (ctx->pc == 0x1547C8u) {
        ctx->pc = 0x1547C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547C4u;
        // 0x1547c8: 0x28c10080  slti        $at, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1547CCu;
        goto label_1547cc;
    }
    ctx->pc = 0x1547C4u;
    {
        const bool branch_taken_0x1547c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1547C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547C4u;
        // 0x1547c8: 0x28c10080  slti        $at, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1547c4) {
            ctx->pc = 0x154828u;
            goto label_154828;
        }
    }
    ctx->pc = 0x1547CCu;
label_1547cc:
    // 0x1547cc: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1547d0:
    if (ctx->pc == 0x1547D0u) {
        ctx->pc = 0x1547D4u;
        goto label_1547d4;
    }
    ctx->pc = 0x1547CCu;
    {
        const bool branch_taken_0x1547cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1547cc) {
            ctx->pc = 0x154828u;
            goto label_154828;
        }
    }
    ctx->pc = 0x1547D4u;
label_1547d4:
    // 0x1547d4: 0x8f8385d8  lw          $v1, -0x7A28($gp)
    ctx->pc = 0x1547d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936024)));
label_1547d8:
    // 0x1547d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1547dc:
    if (ctx->pc == 0x1547DCu) {
        ctx->pc = 0x1547DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547D8u;
        // 0x1547dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1547E0u;
        goto label_1547e0;
    }
    ctx->pc = 0x1547D8u;
    {
        const bool branch_taken_0x1547d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1547DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547D8u;
        // 0x1547dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1547d8) {
            ctx->pc = 0x1547E8u;
            goto label_1547e8;
        }
    }
    ctx->pc = 0x1547E0u;
label_1547e0:
    // 0x1547e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1547e4:
    if (ctx->pc == 0x1547E4u) {
        ctx->pc = 0x1547E8u;
        goto label_1547e8;
    }
    ctx->pc = 0x1547E0u;
    {
        const bool branch_taken_0x1547e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1547e0) {
            ctx->pc = 0x1547ECu;
            goto label_1547ec;
        }
    }
    ctx->pc = 0x1547E8u;
label_1547e8:
    // 0x1547e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1547e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1547ec:
    // 0x1547ec: 0x0  nop
    ctx->pc = 0x1547ecu;
    // NOP
label_1547f0:
    // 0x1547f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1547f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1547f4:
    // 0x1547f4: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1547f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_1547f8:
    // 0x1547f8: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1547f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
label_1547fc:
    // 0x1547fc: 0x24631d30  addiu       $v1, $v1, 0x1D30
    ctx->pc = 0x1547fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7472));
label_154800:
    // 0x154800: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x154800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_154804:
    // 0x154804: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x154804u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_154808:
    // 0x154808: 0x653018  mult        $a2, $v1, $a1
    ctx->pc = 0x154808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_15480c:
    // 0x15480c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_154810:
    if (ctx->pc == 0x154810u) {
        ctx->pc = 0x154810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15480Cu;
        // 0x154810: 0x61903  sra         $v1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154814u;
        goto label_154814;
    }
    ctx->pc = 0x15480Cu;
    {
        const bool branch_taken_0x15480c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x154810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15480Cu;
        // 0x154810: 0x61903  sra         $v1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15480c) {
            ctx->pc = 0x15481Cu;
            goto label_15481c;
        }
    }
    ctx->pc = 0x154814u;
label_154814:
    // 0x154814: 0x24c3000f  addiu       $v1, $a2, 0xF
    ctx->pc = 0x154814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_154818:
    // 0x154818: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x154818u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_15481c:
    // 0x15481c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15481cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_154820:
    // 0x154820: 0x10000018  b           . + 4 + (0x18 << 2)
label_154824:
    if (ctx->pc == 0x154824u) {
        ctx->pc = 0x154824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154820u;
        // 0x154824: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154828u;
        goto label_154828;
    }
    ctx->pc = 0x154820u;
    {
        const bool branch_taken_0x154820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154820u;
        // 0x154824: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154820) {
            ctx->pc = 0x154884u;
            goto label_154884;
        }
    }
    ctx->pc = 0x154828u;
label_154828:
    // 0x154828: 0x7363c  dsll32      $a2, $a3, 24
    ctx->pc = 0x154828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 24));
label_15482c:
    // 0x15482c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x15482cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_154830:
    // 0x154830: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x154830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_154834:
    // 0x154834: 0x14c30002  bne         $a2, $v1, . + 4 + (0x2 << 2)
label_154838:
    if (ctx->pc == 0x154838u) {
        ctx->pc = 0x154838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154834u;
        // 0x154838: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15483Cu;
        goto label_15483c;
    }
    ctx->pc = 0x154834u;
    {
        const bool branch_taken_0x154834 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x154838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154834u;
        // 0x154838: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154834) {
            ctx->pc = 0x154840u;
            goto label_154840;
        }
    }
    ctx->pc = 0x15483Cu;
label_15483c:
    // 0x15483c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15483cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154840:
    // 0x154840: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_154844:
    if (ctx->pc == 0x154844u) {
        ctx->pc = 0x154848u;
        goto label_154848;
    }
    ctx->pc = 0x154840u;
    {
        const bool branch_taken_0x154840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x154840) {
            ctx->pc = 0x154884u;
            goto label_154884;
        }
    }
    ctx->pc = 0x154848u;
label_154848:
    // 0x154848: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x154848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15484c:
    // 0x15484c: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x15484cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_154850:
    // 0x154850: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x154850u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_154854:
    // 0x154854: 0x10c30008  beq         $a2, $v1, . + 4 + (0x8 << 2)
label_154858:
    if (ctx->pc == 0x154858u) {
        ctx->pc = 0x154858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154854u;
        // 0x154858: 0x24030047  addiu       $v1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15485Cu;
        goto label_15485c;
    }
    ctx->pc = 0x154854u;
    {
        const bool branch_taken_0x154854 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x154858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154854u;
        // 0x154858: 0x24030047  addiu       $v1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154854) {
            ctx->pc = 0x154878u;
            goto label_154878;
        }
    }
    ctx->pc = 0x15485Cu;
label_15485c:
    // 0x15485c: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
label_154860:
    if (ctx->pc == 0x154860u) {
        ctx->pc = 0x154864u;
        goto label_154864;
    }
    ctx->pc = 0x15485Cu;
    {
        const bool branch_taken_0x15485c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x15485c) {
            ctx->pc = 0x15486Cu;
            goto label_15486c;
        }
    }
    ctx->pc = 0x154864u;
label_154864:
    // 0x154864: 0x10000009  b           . + 4 + (0x9 << 2)
label_154868:
    if (ctx->pc == 0x154868u) {
        ctx->pc = 0x15486Cu;
        goto label_15486c;
    }
    ctx->pc = 0x154864u;
    {
        const bool branch_taken_0x154864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154864) {
            ctx->pc = 0x15488Cu;
            goto label_15488c;
        }
    }
    ctx->pc = 0x15486Cu;
label_15486c:
    // 0x15486c: 0x0  nop
    ctx->pc = 0x15486cu;
    // NOP
label_154870:
    // 0x154870: 0x10000006  b           . + 4 + (0x6 << 2)
label_154874:
    if (ctx->pc == 0x154874u) {
        ctx->pc = 0x154874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154870u;
        // 0x154874: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154878u;
        goto label_154878;
    }
    ctx->pc = 0x154870u;
    {
        const bool branch_taken_0x154870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154870u;
        // 0x154874: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154870) {
            ctx->pc = 0x15488Cu;
            goto label_15488c;
        }
    }
    ctx->pc = 0x154878u;
label_154878:
    // 0x154878: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x154878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_15487c:
    // 0x15487c: 0x10000003  b           . + 4 + (0x3 << 2)
label_154880:
    if (ctx->pc == 0x154880u) {
        ctx->pc = 0x154880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15487Cu;
        // 0x154880: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154884u;
        goto label_154884;
    }
    ctx->pc = 0x15487Cu;
    {
        const bool branch_taken_0x15487c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15487Cu;
        // 0x154880: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15487c) {
            ctx->pc = 0x15488Cu;
            goto label_15488c;
        }
    }
    ctx->pc = 0x154884u;
label_154884:
    // 0x154884: 0x0  nop
    ctx->pc = 0x154884u;
    // NOP
label_154888:
    // 0x154888: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x154888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15488c:
    // 0x15488c: 0x0  nop
    ctx->pc = 0x15488cu;
    // NOP
label_154890:
    // 0x154890: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x154890u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_154894:
    // 0x154894: 0x63e3c  dsll32      $a3, $a2, 24
    ctx->pc = 0x154894u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 24));
label_154898:
    // 0x154898: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x154898u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
label_15489c:
    // 0x15489c: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_1548a0:
    if (ctx->pc == 0x1548A0u) {
        ctx->pc = 0x1548A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15489Cu;
        // 0x1548a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1548A4u;
        goto label_1548a4;
    }
    ctx->pc = 0x15489Cu;
    {
        const bool branch_taken_0x15489c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1548A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15489Cu;
        // 0x1548a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15489c) {
            ctx->pc = 0x1548ACu;
            goto label_1548ac;
        }
    }
    ctx->pc = 0x1548A4u;
label_1548a4:
    // 0x1548a4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1548a8:
    if (ctx->pc == 0x1548A8u) {
        ctx->pc = 0x1548ACu;
        goto label_1548ac;
    }
    ctx->pc = 0x1548A4u;
    {
        const bool branch_taken_0x1548a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1548a4) {
            ctx->pc = 0x1548E4u;
            goto label_1548e4;
        }
    }
    ctx->pc = 0x1548ACu;
label_1548ac:
    // 0x1548ac: 0x0  nop
    ctx->pc = 0x1548acu;
    // NOP
label_1548b0:
    // 0x1548b0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1548b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1548b4:
    // 0x1548b4: 0x14e30003  bne         $a3, $v1, . + 4 + (0x3 << 2)
label_1548b8:
    if (ctx->pc == 0x1548B8u) {
        ctx->pc = 0x1548B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548B4u;
        // 0x1548b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1548BCu;
        goto label_1548bc;
    }
    ctx->pc = 0x1548B4u;
    {
        const bool branch_taken_0x1548b4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x1548B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548B4u;
        // 0x1548b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1548b4) {
            ctx->pc = 0x1548C4u;
            goto label_1548c4;
        }
    }
    ctx->pc = 0x1548BCu;
label_1548bc:
    // 0x1548bc: 0x10000009  b           . + 4 + (0x9 << 2)
label_1548c0:
    if (ctx->pc == 0x1548C0u) {
        ctx->pc = 0x1548C4u;
        goto label_1548c4;
    }
    ctx->pc = 0x1548BCu;
    {
        const bool branch_taken_0x1548bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1548bc) {
            ctx->pc = 0x1548E4u;
            goto label_1548e4;
        }
    }
    ctx->pc = 0x1548C4u;
label_1548c4:
    // 0x1548c4: 0x0  nop
    ctx->pc = 0x1548c4u;
    // NOP
label_1548c8:
    // 0x1548c8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1548c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1548cc:
    // 0x1548cc: 0x14e30003  bne         $a3, $v1, . + 4 + (0x3 << 2)
label_1548d0:
    if (ctx->pc == 0x1548D0u) {
        ctx->pc = 0x1548D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548CCu;
        // 0x1548d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1548D4u;
        goto label_1548d4;
    }
    ctx->pc = 0x1548CCu;
    {
        const bool branch_taken_0x1548cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x1548D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548CCu;
        // 0x1548d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1548cc) {
            ctx->pc = 0x1548DCu;
            goto label_1548dc;
        }
    }
    ctx->pc = 0x1548D4u;
label_1548d4:
    // 0x1548d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1548d8:
    if (ctx->pc == 0x1548D8u) {
        ctx->pc = 0x1548DCu;
        goto label_1548dc;
    }
    ctx->pc = 0x1548D4u;
    {
        const bool branch_taken_0x1548d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1548d4) {
            ctx->pc = 0x1548E4u;
            goto label_1548e4;
        }
    }
    ctx->pc = 0x1548DCu;
label_1548dc:
    // 0x1548dc: 0x0  nop
    ctx->pc = 0x1548dcu;
    // NOP
label_1548e0:
    // 0x1548e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1548e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1548e4:
    // 0x1548e4: 0x0  nop
    ctx->pc = 0x1548e4u;
    // NOP
label_1548e8:
    // 0x1548e8: 0x1060ffb4  beqz        $v1, . + 4 + (-0x4C << 2)
label_1548ec:
    if (ctx->pc == 0x1548ECu) {
        ctx->pc = 0x1548F0u;
        goto label_1548f0;
    }
    ctx->pc = 0x1548E8u;
    {
        const bool branch_taken_0x1548e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1548e8) {
            ctx->pc = 0x1547BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1547bc;
        }
    }
    ctx->pc = 0x1548F0u;
label_1548f0:
    // 0x1548f0: 0x3e00008  jr          $ra
label_1548f4:
    if (ctx->pc == 0x1548F4u) {
        ctx->pc = 0x1548F8u;
        goto label_1548f8;
    }
    ctx->pc = 0x1548F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1548F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1548F8u;
label_1548f8:
    // 0x1548f8: 0x0  nop
    ctx->pc = 0x1548f8u;
    // NOP
label_1548fc:
    // 0x1548fc: 0x0  nop
    ctx->pc = 0x1548fcu;
    // NOP
label_154900:
    // 0x154900: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x154900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_154904:
    // 0x154904: 0x24421d30  addiu       $v0, $v0, 0x1D30
    ctx->pc = 0x154904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7472));
label_154908:
    // 0x154908: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x154908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_15490c:
    // 0x15490c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x15490cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_154910:
    // 0x154910: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x154910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_154914:
    // 0x154914: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_154918:
    if (ctx->pc == 0x154918u) {
        ctx->pc = 0x154918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154914u;
        // 0x154918: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15491Cu;
        goto label_15491c;
    }
    ctx->pc = 0x154914u;
    {
        const bool branch_taken_0x154914 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x154918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154914u;
        // 0x154918: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154914) {
            ctx->pc = 0x154924u;
            goto label_154924;
        }
    }
    ctx->pc = 0x15491Cu;
label_15491c:
    // 0x15491c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x15491cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_154920:
    // 0x154920: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x154920u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_154924:
    // 0x154924: 0x3e00008  jr          $ra
label_154928:
    if (ctx->pc == 0x154928u) {
        ctx->pc = 0x154928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154924u;
        // 0x154928: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15492Cu;
        goto label_15492c;
    }
    ctx->pc = 0x154924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154924u;
        // 0x154928: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15492Cu;
label_15492c:
    // 0x15492c: 0x0  nop
    ctx->pc = 0x15492cu;
    // NOP
label_154930:
    // 0x154930: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x154930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_154934:
    // 0x154934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x154934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_154938:
    // 0x154938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x154938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15493c:
    // 0x15493c: 0x14a0001b  bnez        $a1, . + 4 + (0x1B << 2)
label_154940:
    if (ctx->pc == 0x154940u) {
        ctx->pc = 0x154940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15493Cu;
        // 0x154940: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154944u;
        goto label_154944;
    }
    ctx->pc = 0x15493Cu;
    {
        const bool branch_taken_0x15493c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x154940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15493Cu;
        // 0x154940: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15493c) {
            ctx->pc = 0x1549ACu;
            { ctx->pc = 0x1549ac; return; }
        }
    }
    ctx->pc = 0x154944u;
label_154944:
    // 0x154944: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_154948:
    // 0x154948: 0x68980  sll         $s1, $a2, 6
    ctx->pc = 0x154948u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_15494c:
    // 0x15494c: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x15494cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
label_154950:
    // 0x154950: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x154950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_154954:
    // 0x154954: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x154954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_154958:
    // 0x154958: 0xc066e26  jal         func_19B898
label_15495c:
    if (ctx->pc == 0x15495Cu) {
        ctx->pc = 0x15495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154958u;
        // 0x15495c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154960u;
        { ctx->pc = 0x154960; return; }
    }
    ctx->pc = 0x154958u;
    SET_GPR_U32(ctx, 31, 0x154960u);
    ctx->pc = 0x15495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154958u;
    // 0x15495c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x154960u;
    ctx->pc = 0x154960u;
    return;
}
