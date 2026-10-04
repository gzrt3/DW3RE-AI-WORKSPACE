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


void FUN_0014eba0_part51(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x167240u: goto label_167240;
        case 0x167244u: goto label_167244;
        case 0x167248u: goto label_167248;
        case 0x16724cu: goto label_16724c;
        case 0x167250u: goto label_167250;
        case 0x167254u: goto label_167254;
        case 0x167258u: goto label_167258;
        case 0x16725cu: goto label_16725c;
        case 0x167260u: goto label_167260;
        case 0x167264u: goto label_167264;
        case 0x167268u: goto label_167268;
        case 0x16726cu: goto label_16726c;
        case 0x167270u: goto label_167270;
        case 0x167274u: goto label_167274;
        case 0x167278u: goto label_167278;
        case 0x16727cu: goto label_16727c;
        case 0x167280u: goto label_167280;
        case 0x167284u: goto label_167284;
        case 0x167288u: goto label_167288;
        case 0x16728cu: goto label_16728c;
        case 0x167290u: goto label_167290;
        case 0x167294u: goto label_167294;
        case 0x167298u: goto label_167298;
        case 0x16729cu: goto label_16729c;
        case 0x1672a0u: goto label_1672a0;
        case 0x1672a4u: goto label_1672a4;
        case 0x1672a8u: goto label_1672a8;
        case 0x1672acu: goto label_1672ac;
        case 0x1672b0u: goto label_1672b0;
        case 0x1672b4u: goto label_1672b4;
        case 0x1672b8u: goto label_1672b8;
        case 0x1672bcu: goto label_1672bc;
        case 0x1672c0u: goto label_1672c0;
        case 0x1672c4u: goto label_1672c4;
        case 0x1672c8u: goto label_1672c8;
        case 0x1672ccu: goto label_1672cc;
        case 0x1672d0u: goto label_1672d0;
        case 0x1672d4u: goto label_1672d4;
        case 0x1672d8u: goto label_1672d8;
        case 0x1672dcu: goto label_1672dc;
        case 0x1672e0u: goto label_1672e0;
        case 0x1672e4u: goto label_1672e4;
        case 0x1672e8u: goto label_1672e8;
        case 0x1672ecu: goto label_1672ec;
        case 0x1672f0u: goto label_1672f0;
        case 0x1672f4u: goto label_1672f4;
        case 0x1672f8u: goto label_1672f8;
        case 0x1672fcu: goto label_1672fc;
        case 0x167300u: goto label_167300;
        case 0x167304u: goto label_167304;
        case 0x167308u: goto label_167308;
        case 0x16730cu: goto label_16730c;
        case 0x167310u: goto label_167310;
        case 0x167314u: goto label_167314;
        case 0x167318u: goto label_167318;
        case 0x16731cu: goto label_16731c;
        case 0x167320u: goto label_167320;
        case 0x167324u: goto label_167324;
        case 0x167328u: goto label_167328;
        case 0x16732cu: goto label_16732c;
        case 0x167330u: goto label_167330;
        case 0x167334u: goto label_167334;
        case 0x167338u: goto label_167338;
        case 0x16733cu: goto label_16733c;
        case 0x167340u: goto label_167340;
        case 0x167344u: goto label_167344;
        case 0x167348u: goto label_167348;
        case 0x16734cu: goto label_16734c;
        case 0x167350u: goto label_167350;
        case 0x167354u: goto label_167354;
        case 0x167358u: goto label_167358;
        case 0x16735cu: goto label_16735c;
        case 0x167360u: goto label_167360;
        case 0x167364u: goto label_167364;
        case 0x167368u: goto label_167368;
        case 0x16736cu: goto label_16736c;
        case 0x167370u: goto label_167370;
        case 0x167374u: goto label_167374;
        case 0x167378u: goto label_167378;
        case 0x16737cu: goto label_16737c;
        case 0x167380u: goto label_167380;
        case 0x167384u: goto label_167384;
        case 0x167388u: goto label_167388;
        case 0x16738cu: goto label_16738c;
        case 0x167390u: goto label_167390;
        case 0x167394u: goto label_167394;
        case 0x167398u: goto label_167398;
        case 0x16739cu: goto label_16739c;
        case 0x1673a0u: goto label_1673a0;
        case 0x1673a4u: goto label_1673a4;
        case 0x1673a8u: goto label_1673a8;
        case 0x1673acu: goto label_1673ac;
        case 0x1673b0u: goto label_1673b0;
        case 0x1673b4u: goto label_1673b4;
        case 0x1673b8u: goto label_1673b8;
        case 0x1673bcu: goto label_1673bc;
        case 0x1673c0u: goto label_1673c0;
        case 0x1673c4u: goto label_1673c4;
        case 0x1673c8u: goto label_1673c8;
        case 0x1673ccu: goto label_1673cc;
        case 0x1673d0u: goto label_1673d0;
        case 0x1673d4u: goto label_1673d4;
        case 0x1673d8u: goto label_1673d8;
        case 0x1673dcu: goto label_1673dc;
        case 0x1673e0u: goto label_1673e0;
        case 0x1673e4u: goto label_1673e4;
        case 0x1673e8u: goto label_1673e8;
        case 0x1673ecu: goto label_1673ec;
        case 0x1673f0u: goto label_1673f0;
        case 0x1673f4u: goto label_1673f4;
        case 0x1673f8u: goto label_1673f8;
        case 0x1673fcu: goto label_1673fc;
        case 0x167400u: goto label_167400;
        case 0x167404u: goto label_167404;
        case 0x167408u: goto label_167408;
        case 0x16740cu: goto label_16740c;
        case 0x167410u: goto label_167410;
        case 0x167414u: goto label_167414;
        case 0x167418u: goto label_167418;
        case 0x16741cu: goto label_16741c;
        case 0x167420u: goto label_167420;
        case 0x167424u: goto label_167424;
        case 0x167428u: goto label_167428;
        case 0x16742cu: goto label_16742c;
        case 0x167430u: goto label_167430;
        case 0x167434u: goto label_167434;
        case 0x167438u: goto label_167438;
        case 0x16743cu: goto label_16743c;
        case 0x167440u: goto label_167440;
        case 0x167444u: goto label_167444;
        case 0x167448u: goto label_167448;
        case 0x16744cu: goto label_16744c;
        case 0x167450u: goto label_167450;
        case 0x167454u: goto label_167454;
        case 0x167458u: goto label_167458;
        case 0x16745cu: goto label_16745c;
        case 0x167460u: goto label_167460;
        case 0x167464u: goto label_167464;
        case 0x167468u: goto label_167468;
        case 0x16746cu: goto label_16746c;
        case 0x167470u: goto label_167470;
        case 0x167474u: goto label_167474;
        case 0x167478u: goto label_167478;
        case 0x16747cu: goto label_16747c;
        case 0x167480u: goto label_167480;
        case 0x167484u: goto label_167484;
        case 0x167488u: goto label_167488;
        case 0x16748cu: goto label_16748c;
        case 0x167490u: goto label_167490;
        case 0x167494u: goto label_167494;
        case 0x167498u: goto label_167498;
        case 0x16749cu: goto label_16749c;
        case 0x1674a0u: goto label_1674a0;
        case 0x1674a4u: goto label_1674a4;
        case 0x1674a8u: goto label_1674a8;
        case 0x1674acu: goto label_1674ac;
        case 0x1674b0u: goto label_1674b0;
        case 0x1674b4u: goto label_1674b4;
        case 0x1674b8u: goto label_1674b8;
        case 0x1674bcu: goto label_1674bc;
        case 0x1674c0u: goto label_1674c0;
        case 0x1674c4u: goto label_1674c4;
        case 0x1674c8u: goto label_1674c8;
        case 0x1674ccu: goto label_1674cc;
        case 0x1674d0u: goto label_1674d0;
        case 0x1674d4u: goto label_1674d4;
        case 0x1674d8u: goto label_1674d8;
        case 0x1674dcu: goto label_1674dc;
        case 0x1674e0u: goto label_1674e0;
        case 0x1674e4u: goto label_1674e4;
        case 0x1674e8u: goto label_1674e8;
        case 0x1674ecu: goto label_1674ec;
        case 0x1674f0u: goto label_1674f0;
        case 0x1674f4u: goto label_1674f4;
        case 0x1674f8u: goto label_1674f8;
        case 0x1674fcu: goto label_1674fc;
        case 0x167500u: goto label_167500;
        case 0x167504u: goto label_167504;
        case 0x167508u: goto label_167508;
        case 0x16750cu: goto label_16750c;
        case 0x167510u: goto label_167510;
        case 0x167514u: goto label_167514;
        case 0x167518u: goto label_167518;
        case 0x16751cu: goto label_16751c;
        case 0x167520u: goto label_167520;
        case 0x167524u: goto label_167524;
        case 0x167528u: goto label_167528;
        case 0x16752cu: goto label_16752c;
        case 0x167530u: goto label_167530;
        case 0x167534u: goto label_167534;
        case 0x167538u: goto label_167538;
        case 0x16753cu: goto label_16753c;
        case 0x167540u: goto label_167540;
        case 0x167544u: goto label_167544;
        case 0x167548u: goto label_167548;
        case 0x16754cu: goto label_16754c;
        case 0x167550u: goto label_167550;
        case 0x167554u: goto label_167554;
        case 0x167558u: goto label_167558;
        case 0x16755cu: goto label_16755c;
        case 0x167560u: goto label_167560;
        case 0x167564u: goto label_167564;
        case 0x167568u: goto label_167568;
        case 0x16756cu: goto label_16756c;
        case 0x167570u: goto label_167570;
        case 0x167574u: goto label_167574;
        case 0x167578u: goto label_167578;
        case 0x16757cu: goto label_16757c;
        case 0x167580u: goto label_167580;
        case 0x167584u: goto label_167584;
        case 0x167588u: goto label_167588;
        case 0x16758cu: goto label_16758c;
        case 0x167590u: goto label_167590;
        case 0x167594u: goto label_167594;
        case 0x167598u: goto label_167598;
        case 0x16759cu: goto label_16759c;
        case 0x1675a0u: goto label_1675a0;
        case 0x1675a4u: goto label_1675a4;
        case 0x1675a8u: goto label_1675a8;
        case 0x1675acu: goto label_1675ac;
        case 0x1675b0u: goto label_1675b0;
        case 0x1675b4u: goto label_1675b4;
        case 0x1675b8u: goto label_1675b8;
        case 0x1675bcu: goto label_1675bc;
        case 0x1675c0u: goto label_1675c0;
        case 0x1675c4u: goto label_1675c4;
        case 0x1675c8u: goto label_1675c8;
        case 0x1675ccu: goto label_1675cc;
        case 0x1675d0u: goto label_1675d0;
        case 0x1675d4u: goto label_1675d4;
        case 0x1675d8u: goto label_1675d8;
        case 0x1675dcu: goto label_1675dc;
        case 0x1675e0u: goto label_1675e0;
        case 0x1675e4u: goto label_1675e4;
        case 0x1675e8u: goto label_1675e8;
        case 0x1675ecu: goto label_1675ec;
        case 0x1675f0u: goto label_1675f0;
        case 0x1675f4u: goto label_1675f4;
        case 0x1675f8u: goto label_1675f8;
        case 0x1675fcu: goto label_1675fc;
        case 0x167600u: goto label_167600;
        case 0x167604u: goto label_167604;
        case 0x167608u: goto label_167608;
        case 0x16760cu: goto label_16760c;
        case 0x167610u: goto label_167610;
        case 0x167614u: goto label_167614;
        case 0x167618u: goto label_167618;
        case 0x16761cu: goto label_16761c;
        case 0x167620u: goto label_167620;
        case 0x167624u: goto label_167624;
        case 0x167628u: goto label_167628;
        case 0x16762cu: goto label_16762c;
        case 0x167630u: goto label_167630;
        case 0x167634u: goto label_167634;
        case 0x167638u: goto label_167638;
        case 0x16763cu: goto label_16763c;
        case 0x167640u: goto label_167640;
        case 0x167644u: goto label_167644;
        case 0x167648u: goto label_167648;
        case 0x16764cu: goto label_16764c;
        case 0x167650u: goto label_167650;
        case 0x167654u: goto label_167654;
        case 0x167658u: goto label_167658;
        case 0x16765cu: goto label_16765c;
        case 0x167660u: goto label_167660;
        case 0x167664u: goto label_167664;
        case 0x167668u: goto label_167668;
        case 0x16766cu: goto label_16766c;
        case 0x167670u: goto label_167670;
        case 0x167674u: goto label_167674;
        case 0x167678u: goto label_167678;
        case 0x16767cu: goto label_16767c;
        case 0x167680u: goto label_167680;
        case 0x167684u: goto label_167684;
        case 0x167688u: goto label_167688;
        case 0x16768cu: goto label_16768c;
        case 0x167690u: goto label_167690;
        case 0x167694u: goto label_167694;
        case 0x167698u: goto label_167698;
        case 0x16769cu: goto label_16769c;
        case 0x1676a0u: goto label_1676a0;
        case 0x1676a4u: goto label_1676a4;
        case 0x1676a8u: goto label_1676a8;
        case 0x1676acu: goto label_1676ac;
        case 0x1676b0u: goto label_1676b0;
        case 0x1676b4u: goto label_1676b4;
        case 0x1676b8u: goto label_1676b8;
        case 0x1676bcu: goto label_1676bc;
        case 0x1676c0u: goto label_1676c0;
        case 0x1676c4u: goto label_1676c4;
        case 0x1676c8u: goto label_1676c8;
        case 0x1676ccu: goto label_1676cc;
        case 0x1676d0u: goto label_1676d0;
        case 0x1676d4u: goto label_1676d4;
        case 0x1676d8u: goto label_1676d8;
        case 0x1676dcu: goto label_1676dc;
        case 0x1676e0u: goto label_1676e0;
        case 0x1676e4u: goto label_1676e4;
        case 0x1676e8u: goto label_1676e8;
        case 0x1676ecu: goto label_1676ec;
        case 0x1676f0u: goto label_1676f0;
        case 0x1676f4u: goto label_1676f4;
        case 0x1676f8u: goto label_1676f8;
        case 0x1676fcu: goto label_1676fc;
        case 0x167700u: goto label_167700;
        case 0x167704u: goto label_167704;
        case 0x167708u: goto label_167708;
        case 0x16770cu: goto label_16770c;
        case 0x167710u: goto label_167710;
        case 0x167714u: goto label_167714;
        case 0x167718u: goto label_167718;
        case 0x16771cu: goto label_16771c;
        case 0x167720u: goto label_167720;
        case 0x167724u: goto label_167724;
        case 0x167728u: goto label_167728;
        case 0x16772cu: goto label_16772c;
        case 0x167730u: goto label_167730;
        case 0x167734u: goto label_167734;
        case 0x167738u: goto label_167738;
        case 0x16773cu: goto label_16773c;
        case 0x167740u: goto label_167740;
        case 0x167744u: goto label_167744;
        case 0x167748u: goto label_167748;
        case 0x16774cu: goto label_16774c;
        case 0x167750u: goto label_167750;
        case 0x167754u: goto label_167754;
        case 0x167758u: goto label_167758;
        case 0x16775cu: goto label_16775c;
        case 0x167760u: goto label_167760;
        case 0x167764u: goto label_167764;
        case 0x167768u: goto label_167768;
        case 0x16776cu: goto label_16776c;
        case 0x167770u: goto label_167770;
        case 0x167774u: goto label_167774;
        case 0x167778u: goto label_167778;
        case 0x16777cu: goto label_16777c;
        case 0x167780u: goto label_167780;
        case 0x167784u: goto label_167784;
        case 0x167788u: goto label_167788;
        case 0x16778cu: goto label_16778c;
        case 0x167790u: goto label_167790;
        case 0x167794u: goto label_167794;
        case 0x167798u: goto label_167798;
        case 0x16779cu: goto label_16779c;
        case 0x1677a0u: goto label_1677a0;
        case 0x1677a4u: goto label_1677a4;
        case 0x1677a8u: goto label_1677a8;
        case 0x1677acu: goto label_1677ac;
        case 0x1677b0u: goto label_1677b0;
        case 0x1677b4u: goto label_1677b4;
        case 0x1677b8u: goto label_1677b8;
        case 0x1677bcu: goto label_1677bc;
        case 0x1677c0u: goto label_1677c0;
        case 0x1677c4u: goto label_1677c4;
        case 0x1677c8u: goto label_1677c8;
        case 0x1677ccu: goto label_1677cc;
        case 0x1677d0u: goto label_1677d0;
        case 0x1677d4u: goto label_1677d4;
        case 0x1677d8u: goto label_1677d8;
        case 0x1677dcu: goto label_1677dc;
        case 0x1677e0u: goto label_1677e0;
        case 0x1677e4u: goto label_1677e4;
        case 0x1677e8u: goto label_1677e8;
        case 0x1677ecu: goto label_1677ec;
        case 0x1677f0u: goto label_1677f0;
        case 0x1677f4u: goto label_1677f4;
        case 0x1677f8u: goto label_1677f8;
        case 0x1677fcu: goto label_1677fc;
        case 0x167800u: goto label_167800;
        case 0x167804u: goto label_167804;
        case 0x167808u: goto label_167808;
        case 0x16780cu: goto label_16780c;
        case 0x167810u: goto label_167810;
        case 0x167814u: goto label_167814;
        case 0x167818u: goto label_167818;
        case 0x16781cu: goto label_16781c;
        case 0x167820u: goto label_167820;
        case 0x167824u: goto label_167824;
        case 0x167828u: goto label_167828;
        case 0x16782cu: goto label_16782c;
        case 0x167830u: goto label_167830;
        case 0x167834u: goto label_167834;
        case 0x167838u: goto label_167838;
        case 0x16783cu: goto label_16783c;
        case 0x167840u: goto label_167840;
        case 0x167844u: goto label_167844;
        case 0x167848u: goto label_167848;
        case 0x16784cu: goto label_16784c;
        case 0x167850u: goto label_167850;
        case 0x167854u: goto label_167854;
        case 0x167858u: goto label_167858;
        case 0x16785cu: goto label_16785c;
        case 0x167860u: goto label_167860;
        case 0x167864u: goto label_167864;
        case 0x167868u: goto label_167868;
        case 0x16786cu: goto label_16786c;
        case 0x167870u: goto label_167870;
        case 0x167874u: goto label_167874;
        case 0x167878u: goto label_167878;
        case 0x16787cu: goto label_16787c;
        case 0x167880u: goto label_167880;
        case 0x167884u: goto label_167884;
        case 0x167888u: goto label_167888;
        case 0x16788cu: goto label_16788c;
        case 0x167890u: goto label_167890;
        case 0x167894u: goto label_167894;
        case 0x167898u: goto label_167898;
        case 0x16789cu: goto label_16789c;
        case 0x1678a0u: goto label_1678a0;
        case 0x1678a4u: goto label_1678a4;
        case 0x1678a8u: goto label_1678a8;
        case 0x1678acu: goto label_1678ac;
        case 0x1678b0u: goto label_1678b0;
        case 0x1678b4u: goto label_1678b4;
        case 0x1678b8u: goto label_1678b8;
        case 0x1678bcu: goto label_1678bc;
        case 0x1678c0u: goto label_1678c0;
        case 0x1678c4u: goto label_1678c4;
        case 0x1678c8u: goto label_1678c8;
        case 0x1678ccu: goto label_1678cc;
        case 0x1678d0u: goto label_1678d0;
        case 0x1678d4u: goto label_1678d4;
        case 0x1678d8u: goto label_1678d8;
        case 0x1678dcu: goto label_1678dc;
        case 0x1678e0u: goto label_1678e0;
        case 0x1678e4u: goto label_1678e4;
        case 0x1678e8u: goto label_1678e8;
        case 0x1678ecu: goto label_1678ec;
        case 0x1678f0u: goto label_1678f0;
        case 0x1678f4u: goto label_1678f4;
        case 0x1678f8u: goto label_1678f8;
        case 0x1678fcu: goto label_1678fc;
        case 0x167900u: goto label_167900;
        case 0x167904u: goto label_167904;
        case 0x167908u: goto label_167908;
        case 0x16790cu: goto label_16790c;
        case 0x167910u: goto label_167910;
        case 0x167914u: goto label_167914;
        case 0x167918u: goto label_167918;
        case 0x16791cu: goto label_16791c;
        case 0x167920u: goto label_167920;
        case 0x167924u: goto label_167924;
        case 0x167928u: goto label_167928;
        case 0x16792cu: goto label_16792c;
        case 0x167930u: goto label_167930;
        case 0x167934u: goto label_167934;
        case 0x167938u: goto label_167938;
        case 0x16793cu: goto label_16793c;
        case 0x167940u: goto label_167940;
        case 0x167944u: goto label_167944;
        case 0x167948u: goto label_167948;
        case 0x16794cu: goto label_16794c;
        case 0x167950u: goto label_167950;
        case 0x167954u: goto label_167954;
        case 0x167958u: goto label_167958;
        case 0x16795cu: goto label_16795c;
        case 0x167960u: goto label_167960;
        case 0x167964u: goto label_167964;
        case 0x167968u: goto label_167968;
        case 0x16796cu: goto label_16796c;
        case 0x167970u: goto label_167970;
        case 0x167974u: goto label_167974;
        case 0x167978u: goto label_167978;
        case 0x16797cu: goto label_16797c;
        case 0x167980u: goto label_167980;
        case 0x167984u: goto label_167984;
        case 0x167988u: goto label_167988;
        case 0x16798cu: goto label_16798c;
        case 0x167990u: goto label_167990;
        case 0x167994u: goto label_167994;
        case 0x167998u: goto label_167998;
        case 0x16799cu: goto label_16799c;
        case 0x1679a0u: goto label_1679a0;
        case 0x1679a4u: goto label_1679a4;
        case 0x1679a8u: goto label_1679a8;
        case 0x1679acu: goto label_1679ac;
        case 0x1679b0u: goto label_1679b0;
        case 0x1679b4u: goto label_1679b4;
        case 0x1679b8u: goto label_1679b8;
        case 0x1679bcu: goto label_1679bc;
        case 0x1679c0u: goto label_1679c0;
        case 0x1679c4u: goto label_1679c4;
        case 0x1679c8u: goto label_1679c8;
        case 0x1679ccu: goto label_1679cc;
        case 0x1679d0u: goto label_1679d0;
        case 0x1679d4u: goto label_1679d4;
        case 0x1679d8u: goto label_1679d8;
        case 0x1679dcu: goto label_1679dc;
        case 0x1679e0u: goto label_1679e0;
        case 0x1679e4u: goto label_1679e4;
        case 0x1679e8u: goto label_1679e8;
        case 0x1679ecu: goto label_1679ec;
        case 0x1679f0u: goto label_1679f0;
        case 0x1679f4u: goto label_1679f4;
        case 0x1679f8u: goto label_1679f8;
        case 0x1679fcu: goto label_1679fc;
        case 0x167a00u: goto label_167a00;
        case 0x167a04u: goto label_167a04;
        case 0x167a08u: goto label_167a08;
        case 0x167a0cu: goto label_167a0c;
        default: return;
    }

label_167240:
    // 0x167240: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_167244:
    if (ctx->pc == 0x167244u) {
        ctx->pc = 0x167244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167240u;
        // 0x167244: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167248u;
        goto label_167248;
    }
    ctx->pc = 0x167240u;
    {
        const bool branch_taken_0x167240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167240u;
        // 0x167244: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167240) {
            ctx->pc = 0x1671FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1671fc; return; }
        }
    }
    ctx->pc = 0x167248u;
label_167248:
    // 0x167248: 0x100000ab  b           . + 4 + (0xAB << 2)
label_16724c:
    if (ctx->pc == 0x16724Cu) {
        ctx->pc = 0x16724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167248u;
        // 0x16724c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167250u;
        goto label_167250;
    }
    ctx->pc = 0x167248u;
    {
        const bool branch_taken_0x167248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167248u;
        // 0x16724c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167248) {
            ctx->pc = 0x1674F8u;
            goto label_1674f8;
        }
    }
    ctx->pc = 0x167250u;
label_167250:
    // 0x167250: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x167250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_167254:
    // 0x167254: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_167258:
    // 0x167258: 0x240500a6  addiu       $a1, $zero, 0xA6
    ctx->pc = 0x167258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
label_16725c:
    // 0x16725c: 0x24060099  addiu       $a2, $zero, 0x99
    ctx->pc = 0x16725cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_167260:
    // 0x167260: 0x24070086  addiu       $a3, $zero, 0x86
    ctx->pc = 0x167260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_167264:
    // 0x167264: 0xc046574  jal         func_1195D0
label_167268:
    if (ctx->pc == 0x167268u) {
        ctx->pc = 0x167268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167264u;
        // 0x167268: 0x240800a0  addiu       $t0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16726Cu;
        goto label_16726c;
    }
    ctx->pc = 0x167264u;
    SET_GPR_U32(ctx, 31, 0x16726Cu);
    ctx->pc = 0x167268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167264u;
    // 0x167268: 0x240800a0  addiu       $t0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1195D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1195D0u, 0x167264u, 0x16726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16726Cu;
label_16726c:
    // 0x16726c: 0xc08f0cc  jal         func_23C330
label_167270:
    if (ctx->pc == 0x167270u) {
        ctx->pc = 0x167270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16726Cu;
        // 0x167270: 0xa6600050  sh          $zero, 0x50($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167274u;
        goto label_167274;
    }
    ctx->pc = 0x16726Cu;
    SET_GPR_U32(ctx, 31, 0x167274u);
    ctx->pc = 0x167270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16726Cu;
    // 0x167270: 0xa6600050  sh          $zero, 0x50($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x167274u;
label_167274:
    // 0x167274: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x167274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_167278:
    // 0x167278: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x167278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
label_16727c:
    // 0x16727c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16727cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_167280:
    // 0x167280: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x167280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_167284:
    // 0x167284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167288:
    // 0x167288: 0x0  nop
    ctx->pc = 0x167288u;
    // NOP
label_16728c:
    // 0x16728c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x16728cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_167290:
    // 0x167290: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x167290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_167294:
    // 0x167294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167298:
    // 0x167298: 0x0  nop
    ctx->pc = 0x167298u;
    // NOP
label_16729c:
    // 0x16729c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16729cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1672a0:
    // 0x1672a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1672a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1672a4:
    // 0x1672a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1672a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1672a8:
    // 0x1672a8: 0x0  nop
    ctx->pc = 0x1672a8u;
    // NOP
label_1672ac:
    // 0x1672ac: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1672acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1672b0:
    // 0x1672b0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1672b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1672b4:
    // 0x1672b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1672b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1672b8:
    // 0x1672b8: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1672b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_1672bc:
    // 0x1672bc: 0xa6620052  sh          $v0, 0x52($s3)
    ctx->pc = 0x1672bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 82), (uint16_t)GPR_U32(ctx, 2));
label_1672c0:
    // 0x1672c0: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1672c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1672c4:
    // 0x1672c4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1672c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_1672c8:
    // 0x1672c8: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x1672c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_1672cc:
    // 0x1672cc: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1672ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_1672d0:
    // 0x1672d0: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1672d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_1672d4:
    // 0x1672d4: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x1672d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_1672d8:
    // 0x1672d8: 0x8c23bd68  lw          $v1, -0x4298($at)
    ctx->pc = 0x1672d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950248)));
label_1672dc:
    // 0x1672dc: 0x938486b2  lbu         $a0, -0x794E($gp)
    ctx->pc = 0x1672dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936242)));
label_1672e0:
    // 0x1672e0: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1672e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_1672e4:
    // 0x1672e4: 0x8c228928  lw          $v0, -0x76D8($at)
    ctx->pc = 0x1672e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294936872)));
label_1672e8:
    // 0x1672e8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1672e8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1672ec:
    // 0x1672ec: 0x0  nop
    ctx->pc = 0x1672ecu;
    // NOP
label_1672f0:
    // 0x1672f0: 0x0  nop
    ctx->pc = 0x1672f0u;
    // NOP
label_1672f4:
    // 0x1672f4: 0x1812  mflo        $v1
    ctx->pc = 0x1672f4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1672f8:
    // 0x1672f8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1672fc:
    if (ctx->pc == 0x1672FCu) {
        ctx->pc = 0x1672FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672F8u;
        // 0x1672fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167300u;
        goto label_167300;
    }
    ctx->pc = 0x1672F8u;
    {
        const bool branch_taken_0x1672f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1672FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672F8u;
        // 0x1672fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672f8) {
            ctx->pc = 0x16732Cu;
            goto label_16732c;
        }
    }
    ctx->pc = 0x167300u;
label_167300:
    // 0x167300: 0xc41007  srav        $v0, $a0, $a2
    ctx->pc = 0x167300u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
label_167304:
    // 0x167304: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x167304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_167308:
    // 0x167308: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_16730c:
    if (ctx->pc == 0x16730Cu) {
        ctx->pc = 0x16730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167308u;
        // 0x16730c: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167310u;
        goto label_167310;
    }
    ctx->pc = 0x167308u;
    {
        const bool branch_taken_0x167308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167308u;
        // 0x16730c: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167308) {
            ctx->pc = 0x167328u;
            goto label_167328;
        }
    }
    ctx->pc = 0x167310u;
label_167310:
    // 0x167310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167314:
    // 0x167314: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x167314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
label_167318:
    // 0x167318: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x167318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16731c:
    // 0x16731c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x16731cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_167320:
    // 0x167320: 0x10000008  b           . + 4 + (0x8 << 2)
label_167324:
    if (ctx->pc == 0x167324u) {
        ctx->pc = 0x167324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167320u;
        // 0x167324: 0xa38286b2  sb          $v0, -0x794E($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936242), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167328u;
        goto label_167328;
    }
    ctx->pc = 0x167320u;
    {
        const bool branch_taken_0x167320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167320u;
        // 0x167324: 0xa38286b2  sb          $v0, -0x794E($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936242), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167320) {
            ctx->pc = 0x167344u;
            goto label_167344;
        }
    }
    ctx->pc = 0x167328u;
label_167328:
    // 0x167328: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x167328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16732c:
    // 0x16732c: 0x0  nop
    ctx->pc = 0x16732cu;
    // NOP
label_167330:
    // 0x167330: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x167330u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_167334:
    // 0x167334: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x167334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_167338:
    // 0x167338: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_16733c:
    if (ctx->pc == 0x16733Cu) {
        ctx->pc = 0x16733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167338u;
        // 0x16733c: 0x3246000f  andi        $a2, $s2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167340u;
        goto label_167340;
    }
    ctx->pc = 0x167338u;
    {
        const bool branch_taken_0x167338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167338u;
        // 0x16733c: 0x3246000f  andi        $a2, $s2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167338) {
            ctx->pc = 0x167300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167300;
        }
    }
    ctx->pc = 0x167340u;
label_167340:
    // 0x167340: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x167340u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_167344:
    // 0x167344: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x167344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_167348:
    // 0x167348: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
label_16734c:
    if (ctx->pc == 0x16734Cu) {
        ctx->pc = 0x16734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167348u;
        // 0x16734c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167350u;
        goto label_167350;
    }
    ctx->pc = 0x167348u;
    {
        const bool branch_taken_0x167348 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x16734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167348u;
        // 0x16734c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167348) {
            ctx->pc = 0x167370u;
            goto label_167370;
        }
    }
    ctx->pc = 0x167350u;
label_167350:
    // 0x167350: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x167350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_167354:
    // 0x167354: 0xc059744  jal         func_165D10
label_167358:
    if (ctx->pc == 0x167358u) {
        ctx->pc = 0x167358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167354u;
        // 0x167358: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16735Cu;
        goto label_16735c;
    }
    ctx->pc = 0x167354u;
    SET_GPR_U32(ctx, 31, 0x16735Cu);
    ctx->pc = 0x167358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167354u;
    // 0x167358: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165D10u;
    { ctx->pc = 0x165d10; return; }
    ctx->pc = 0x16735Cu;
label_16735c:
    // 0x16735c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16735cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_167360:
    // 0x167360: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x167360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_167364:
    // 0x167364: 0xc05967c  jal         func_1659F0
label_167368:
    if (ctx->pc == 0x167368u) {
        ctx->pc = 0x167368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167364u;
        // 0x167368: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16736Cu;
        goto label_16736c;
    }
    ctx->pc = 0x167364u;
    SET_GPR_U32(ctx, 31, 0x16736Cu);
    ctx->pc = 0x167368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167364u;
    // 0x167368: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659F0u;
    { ctx->pc = 0x1659f0; return; }
    ctx->pc = 0x16736Cu;
label_16736c:
    // 0x16736c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16736cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_167370:
    // 0x167370: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x167370u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167374:
    // 0x167374: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x167374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_167378:
    // 0x167378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16737c:
    // 0x16737c: 0x278486a8  addiu       $a0, $gp, -0x7958
    ctx->pc = 0x16737cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936232));
label_167380:
    // 0x167380: 0x0  nop
    ctx->pc = 0x167380u;
    // NOP
label_167384:
    // 0x167384: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x167384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_167388:
    // 0x167388: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x167388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16738c:
    // 0x16738c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_167390:
    if (ctx->pc == 0x167390u) {
        ctx->pc = 0x167390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16738Cu;
        // 0x167390: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167394u;
        goto label_167394;
    }
    ctx->pc = 0x16738Cu;
    {
        const bool branch_taken_0x16738c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16738Cu;
        // 0x167390: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16738c) {
            ctx->pc = 0x1673A8u;
            goto label_1673a8;
        }
    }
    ctx->pc = 0x167394u;
label_167394:
    // 0x167394: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x167394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_167398:
    // 0x167398: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x167398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_16739c:
    // 0x16739c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16739cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1673a0:
    // 0x1673a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1673a4:
    if (ctx->pc == 0x1673A4u) {
        ctx->pc = 0x1673A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673A0u;
        // 0x1673a4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1673A8u;
        goto label_1673a8;
    }
    ctx->pc = 0x1673A0u;
    {
        const bool branch_taken_0x1673a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1673A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673A0u;
        // 0x1673a4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1673a0) {
            ctx->pc = 0x1673BCu;
            goto label_1673bc;
        }
    }
    ctx->pc = 0x1673A8u;
label_1673a8:
    // 0x1673a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1673a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1673ac:
    // 0x1673ac: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1673acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1673b0:
    // 0x1673b0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1673b4:
    if (ctx->pc == 0x1673B4u) {
        ctx->pc = 0x1673B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673B0u;
        // 0x1673b4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1673B8u;
        goto label_1673b8;
    }
    ctx->pc = 0x1673B0u;
    {
        const bool branch_taken_0x1673b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1673B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673B0u;
        // 0x1673b4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1673b0) {
            ctx->pc = 0x167380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167380;
        }
    }
    ctx->pc = 0x1673B8u;
label_1673b8:
    // 0x1673b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1673b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1673bc:
    // 0x1673bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1673c0:
    if (ctx->pc == 0x1673C0u) {
        ctx->pc = 0x1673C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673BCu;
        // 0x1673c0: 0x3c010025  lui         $at, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1673C4u;
        goto label_1673c4;
    }
    ctx->pc = 0x1673BCu;
    {
        const bool branch_taken_0x1673bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1673C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673BCu;
        // 0x1673c0: 0x3c010025  lui         $at, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1673bc) {
            ctx->pc = 0x1673D0u;
            goto label_1673d0;
        }
    }
    ctx->pc = 0x1673C4u;
label_1673c4:
    // 0x1673c4: 0x8c246238  lw          $a0, 0x6238($at)
    ctx->pc = 0x1673c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25144)));
label_1673c8:
    // 0x1673c8: 0xc05ac40  jal         func_16B100
label_1673cc:
    if (ctx->pc == 0x1673CCu) {
        ctx->pc = 0x1673CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673C8u;
        // 0x1673cc: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1673D0u;
        goto label_1673d0;
    }
    ctx->pc = 0x1673C8u;
    SET_GPR_U32(ctx, 31, 0x1673D0u);
    ctx->pc = 0x1673CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1673C8u;
    // 0x1673cc: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B100u;
    { ctx->pc = 0x16b100; return; }
    ctx->pc = 0x1673D0u;
label_1673d0:
    // 0x1673d0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1673d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1673d4:
    // 0x1673d4: 0xc066e26  jal         func_19B898
label_1673d8:
    if (ctx->pc == 0x1673D8u) {
        ctx->pc = 0x1673D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673D4u;
        // 0x1673d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1673DCu;
        goto label_1673dc;
    }
    ctx->pc = 0x1673D4u;
    SET_GPR_U32(ctx, 31, 0x1673DCu);
    ctx->pc = 0x1673D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1673D4u;
    // 0x1673d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1673DCu;
label_1673dc:
    // 0x1673dc: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1673dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1673e0:
    // 0x1673e0: 0xc066e26  jal         func_19B898
label_1673e4:
    if (ctx->pc == 0x1673E4u) {
        ctx->pc = 0x1673E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673E0u;
        // 0x1673e4: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1673E8u;
        goto label_1673e8;
    }
    ctx->pc = 0x1673E0u;
    SET_GPR_U32(ctx, 31, 0x1673E8u);
    ctx->pc = 0x1673E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1673E0u;
    // 0x1673e4: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1673E8u;
label_1673e8:
    // 0x1673e8: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1673e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1673ec:
    // 0x1673ec: 0xc066e26  jal         func_19B898
label_1673f0:
    if (ctx->pc == 0x1673F0u) {
        ctx->pc = 0x1673F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673ECu;
        // 0x1673f0: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1673F4u;
        goto label_1673f4;
    }
    ctx->pc = 0x1673ECu;
    SET_GPR_U32(ctx, 31, 0x1673F4u);
    ctx->pc = 0x1673F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1673ECu;
    // 0x1673f0: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1673F4u;
label_1673f4:
    // 0x1673f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1673f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1673f8:
    // 0x1673f8: 0xc066e26  jal         func_19B898
label_1673fc:
    if (ctx->pc == 0x1673FCu) {
        ctx->pc = 0x1673FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673F8u;
        // 0x1673fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167400u;
        goto label_167400;
    }
    ctx->pc = 0x1673F8u;
    SET_GPR_U32(ctx, 31, 0x167400u);
    ctx->pc = 0x1673FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1673F8u;
    // 0x1673fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x167400u;
label_167400:
    // 0x167400: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x167400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167404:
    // 0x167404: 0xc06468c  jal         func_191A30
label_167408:
    if (ctx->pc == 0x167408u) {
        ctx->pc = 0x167408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167404u;
        // 0x167408: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16740Cu;
        goto label_16740c;
    }
    ctx->pc = 0x167404u;
    SET_GPR_U32(ctx, 31, 0x16740Cu);
    ctx->pc = 0x167408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167404u;
    // 0x167408: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    { ctx->pc = 0x191a30; return; }
    ctx->pc = 0x16740Cu;
label_16740c:
    // 0x16740c: 0x8e660048  lw          $a2, 0x48($s3)
    ctx->pc = 0x16740cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_167410:
    // 0x167410: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x167410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_167414:
    // 0x167414: 0xc066e08  jal         func_19B820
label_167418:
    if (ctx->pc == 0x167418u) {
        ctx->pc = 0x167418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167414u;
        // 0x167418: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16741Cu;
        goto label_16741c;
    }
    ctx->pc = 0x167414u;
    SET_GPR_U32(ctx, 31, 0x16741Cu);
    ctx->pc = 0x167418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167414u;
    // 0x167418: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x16741Cu;
label_16741c:
    // 0x16741c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x16741cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_167420:
    // 0x167420: 0xc066da0  jal         func_19B680
label_167424:
    if (ctx->pc == 0x167424u) {
        ctx->pc = 0x167424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167420u;
        // 0x167424: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167428u;
        goto label_167428;
    }
    ctx->pc = 0x167420u;
    SET_GPR_U32(ctx, 31, 0x167428u);
    ctx->pc = 0x167424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167420u;
    // 0x167424: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B680u;
    { ctx->pc = 0x19b680; return; }
    ctx->pc = 0x167428u;
label_167428:
    // 0x167428: 0x0  nop
    ctx->pc = 0x167428u;
    // NOP
label_16742c:
    // 0x16742c: 0x0  nop
    ctx->pc = 0x16742cu;
    // NOP
label_167430:
    // 0x167430: 0x46000004  c1          0x4
    ctx->pc = 0x167430u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_167434:
    // 0x167434: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x167434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
label_167438:
    // 0x167438: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x167438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16743c:
    // 0x16743c: 0x0  nop
    ctx->pc = 0x16743cu;
    // NOP
label_167440:
    // 0x167440: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x167440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_167444:
    // 0x167444: 0x0  nop
    ctx->pc = 0x167444u;
    // NOP
label_167448:
    // 0x167448: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16744c:
    if (ctx->pc == 0x16744Cu) {
        ctx->pc = 0x16744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167448u;
        // 0x16744c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167450u;
        goto label_167450;
    }
    ctx->pc = 0x167448u;
    {
        const bool branch_taken_0x167448 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167448u;
        // 0x16744c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167448) {
            ctx->pc = 0x167460u;
            goto label_167460;
        }
    }
    ctx->pc = 0x167450u;
label_167450:
    // 0x167450: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x167450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167454:
    // 0x167454: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x167454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_167458:
    // 0x167458: 0xc07586c  jal         func_1D61B0
label_16745c:
    if (ctx->pc == 0x16745Cu) {
        ctx->pc = 0x16745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167458u;
        // 0x16745c: 0x240700c8  addiu       $a3, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167460u;
        goto label_167460;
    }
    ctx->pc = 0x167458u;
    SET_GPR_U32(ctx, 31, 0x167460u);
    ctx->pc = 0x16745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167458u;
    // 0x16745c: 0x240700c8  addiu       $a3, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D61B0u;
    { ctx->pc = 0x1d61b0; return; }
    ctx->pc = 0x167460u;
label_167460:
    // 0x167460: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x167460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_167464:
    // 0x167464: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x167464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_167468:
    // 0x167468: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_16746c:
    if (ctx->pc == 0x16746Cu) {
        ctx->pc = 0x16746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167468u;
        // 0x16746c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167470u;
        goto label_167470;
    }
    ctx->pc = 0x167468u;
    {
        const bool branch_taken_0x167468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167468u;
        // 0x16746c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167468) {
            ctx->pc = 0x1674CCu;
            goto label_1674cc;
        }
    }
    ctx->pc = 0x167470u;
label_167470:
    // 0x167470: 0xc06468c  jal         func_191A30
label_167474:
    if (ctx->pc == 0x167474u) {
        ctx->pc = 0x167474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167470u;
        // 0x167474: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167478u;
        goto label_167478;
    }
    ctx->pc = 0x167470u;
    SET_GPR_U32(ctx, 31, 0x167478u);
    ctx->pc = 0x167474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167470u;
    // 0x167474: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    { ctx->pc = 0x191a30; return; }
    ctx->pc = 0x167478u;
label_167478:
    // 0x167478: 0x8e660048  lw          $a2, 0x48($s3)
    ctx->pc = 0x167478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_16747c:
    // 0x16747c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x16747cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_167480:
    // 0x167480: 0xc066e08  jal         func_19B820
label_167484:
    if (ctx->pc == 0x167484u) {
        ctx->pc = 0x167484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167480u;
        // 0x167484: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167488u;
        goto label_167488;
    }
    ctx->pc = 0x167480u;
    SET_GPR_U32(ctx, 31, 0x167488u);
    ctx->pc = 0x167484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167480u;
    // 0x167484: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x167488u;
label_167488:
    // 0x167488: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x167488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_16748c:
    // 0x16748c: 0xc066da0  jal         func_19B680
label_167490:
    if (ctx->pc == 0x167490u) {
        ctx->pc = 0x167490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16748Cu;
        // 0x167490: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167494u;
        goto label_167494;
    }
    ctx->pc = 0x16748Cu;
    SET_GPR_U32(ctx, 31, 0x167494u);
    ctx->pc = 0x167490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16748Cu;
    // 0x167490: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B680u;
    { ctx->pc = 0x19b680; return; }
    ctx->pc = 0x167494u;
label_167494:
    // 0x167494: 0x0  nop
    ctx->pc = 0x167494u;
    // NOP
label_167498:
    // 0x167498: 0x0  nop
    ctx->pc = 0x167498u;
    // NOP
label_16749c:
    // 0x16749c: 0x46000044  c1          0x44
    ctx->pc = 0x16749cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_1674a0:
    // 0x1674a0: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x1674a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
label_1674a4:
    // 0x1674a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1674a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1674a8:
    // 0x1674a8: 0x0  nop
    ctx->pc = 0x1674a8u;
    // NOP
label_1674ac:
    // 0x1674ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1674acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1674b0:
    // 0x1674b0: 0x0  nop
    ctx->pc = 0x1674b0u;
    // NOP
label_1674b4:
    // 0x1674b4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1674b8:
    if (ctx->pc == 0x1674B8u) {
        ctx->pc = 0x1674B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674B4u;
        // 0x1674b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1674BCu;
        goto label_1674bc;
    }
    ctx->pc = 0x1674B4u;
    {
        const bool branch_taken_0x1674b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1674B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674B4u;
        // 0x1674b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674b4) {
            ctx->pc = 0x1674CCu;
            goto label_1674cc;
        }
    }
    ctx->pc = 0x1674BCu;
label_1674bc:
    // 0x1674bc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1674bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1674c0:
    // 0x1674c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1674c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1674c4:
    // 0x1674c4: 0xc07586c  jal         func_1D61B0
label_1674c8:
    if (ctx->pc == 0x1674C8u) {
        ctx->pc = 0x1674C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674C4u;
        // 0x1674c8: 0x240700c8  addiu       $a3, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1674CCu;
        goto label_1674cc;
    }
    ctx->pc = 0x1674C4u;
    SET_GPR_U32(ctx, 31, 0x1674CCu);
    ctx->pc = 0x1674C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1674C4u;
    // 0x1674c8: 0x240700c8  addiu       $a3, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D61B0u;
    { ctx->pc = 0x1d61b0; return; }
    ctx->pc = 0x1674CCu;
label_1674cc:
    // 0x1674cc: 0x9263004c  lbu         $v1, 0x4C($s3)
    ctx->pc = 0x1674ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_1674d0:
    // 0x1674d0: 0x8f8286b8  lw          $v0, -0x7948($gp)
    ctx->pc = 0x1674d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
label_1674d4:
    // 0x1674d4: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1674d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_1674d8:
    // 0x1674d8: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x1674d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_1674dc:
    // 0x1674dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1674dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1674e0:
    // 0x1674e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1674e4:
    if (ctx->pc == 0x1674E4u) {
        ctx->pc = 0x1674E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674E0u;
        // 0x1674e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1674E8u;
        goto label_1674e8;
    }
    ctx->pc = 0x1674E0u;
    {
        const bool branch_taken_0x1674e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1674E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674E0u;
        // 0x1674e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674e0) {
            ctx->pc = 0x1674F0u;
            goto label_1674f0;
        }
    }
    ctx->pc = 0x1674E8u;
label_1674e8:
    // 0x1674e8: 0x10000028  b           . + 4 + (0x28 << 2)
label_1674ec:
    if (ctx->pc == 0x1674ECu) {
        ctx->pc = 0x1674ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674E8u;
        // 0x1674ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1674F0u;
        goto label_1674f0;
    }
    ctx->pc = 0x1674E8u;
    {
        const bool branch_taken_0x1674e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1674ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674E8u;
        // 0x1674ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674e8) {
            ctx->pc = 0x16758Cu;
            goto label_16758c;
        }
    }
    ctx->pc = 0x1674F0u;
label_1674f0:
    // 0x1674f0: 0x10000026  b           . + 4 + (0x26 << 2)
label_1674f4:
    if (ctx->pc == 0x1674F4u) {
        ctx->pc = 0x1674F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674F0u;
        // 0x1674f4: 0xa262004e  sb          $v0, 0x4E($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 78), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1674F8u;
        goto label_1674f8;
    }
    ctx->pc = 0x1674F0u;
    {
        const bool branch_taken_0x1674f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1674F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674F0u;
        // 0x1674f4: 0xa262004e  sb          $v0, 0x4E($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 78), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674f0) {
            ctx->pc = 0x16758Cu;
            goto label_16758c;
        }
    }
    ctx->pc = 0x1674F8u;
label_1674f8:
    // 0x1674f8: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x1674f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1674fc:
    // 0x1674fc: 0xc066e02  jal         func_19B808
label_167500:
    if (ctx->pc == 0x167500u) {
        ctx->pc = 0x167500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674FCu;
        // 0x167500: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167504u;
        goto label_167504;
    }
    ctx->pc = 0x1674FCu;
    SET_GPR_U32(ctx, 31, 0x167504u);
    ctx->pc = 0x167500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1674FCu;
    // 0x167500: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x167504u;
label_167504:
    // 0x167504: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x167504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_167508:
    // 0x167508: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x167508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16750c:
    // 0x16750c: 0xc066e02  jal         func_19B808
label_167510:
    if (ctx->pc == 0x167510u) {
        ctx->pc = 0x167510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16750Cu;
        // 0x167510: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167514u;
        goto label_167514;
    }
    ctx->pc = 0x16750Cu;
    SET_GPR_U32(ctx, 31, 0x167514u);
    ctx->pc = 0x167510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16750Cu;
    // 0x167510: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x167514u;
label_167514:
    // 0x167514: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x167514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_167518:
    // 0x167518: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x167518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_16751c:
    // 0x16751c: 0xc066e02  jal         func_19B808
label_167520:
    if (ctx->pc == 0x167520u) {
        ctx->pc = 0x167520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16751Cu;
        // 0x167520: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167524u;
        goto label_167524;
    }
    ctx->pc = 0x16751Cu;
    SET_GPR_U32(ctx, 31, 0x167524u);
    ctx->pc = 0x167520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16751Cu;
    // 0x167520: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x167524u;
label_167524:
    // 0x167524: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x167524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_167528:
    // 0x167528: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x167528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_16752c:
    // 0x16752c: 0xc066e02  jal         func_19B808
label_167530:
    if (ctx->pc == 0x167530u) {
        ctx->pc = 0x167530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16752Cu;
        // 0x167530: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167534u;
        goto label_167534;
    }
    ctx->pc = 0x16752Cu;
    SET_GPR_U32(ctx, 31, 0x167534u);
    ctx->pc = 0x167530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16752Cu;
    // 0x167530: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x167534u;
label_167534:
    // 0x167534: 0xc066e44  jal         func_19B910
label_167538:
    if (ctx->pc == 0x167538u) {
        ctx->pc = 0x167538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167534u;
        // 0x167538: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16753Cu;
        goto label_16753c;
    }
    ctx->pc = 0x167534u;
    SET_GPR_U32(ctx, 31, 0x16753Cu);
    ctx->pc = 0x167538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167534u;
    // 0x167538: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x16753Cu;
label_16753c:
    // 0x16753c: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x16753cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_167540:
    // 0x167540: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x167540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_167544:
    // 0x167544: 0xc066e96  jal         func_19BA58
label_167548:
    if (ctx->pc == 0x167548u) {
        ctx->pc = 0x167548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167544u;
        // 0x167548: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16754Cu;
        goto label_16754c;
    }
    ctx->pc = 0x167544u;
    SET_GPR_U32(ctx, 31, 0x16754Cu);
    ctx->pc = 0x167548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167544u;
    // 0x167548: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x16754Cu;
label_16754c:
    // 0x16754c: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x16754cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_167550:
    // 0x167550: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x167550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_167554:
    // 0x167554: 0xc066e6c  jal         func_19B9B0
label_167558:
    if (ctx->pc == 0x167558u) {
        ctx->pc = 0x167558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167554u;
        // 0x167558: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16755Cu;
        goto label_16755c;
    }
    ctx->pc = 0x167554u;
    SET_GPR_U32(ctx, 31, 0x16755Cu);
    ctx->pc = 0x167558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167554u;
    // 0x167558: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x16755Cu;
label_16755c:
    // 0x16755c: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x16755cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_167560:
    // 0x167560: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x167560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_167564:
    // 0x167564: 0xc066ec0  jal         func_19BB00
label_167568:
    if (ctx->pc == 0x167568u) {
        ctx->pc = 0x167568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167564u;
        // 0x167568: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16756Cu;
        goto label_16756c;
    }
    ctx->pc = 0x167564u;
    SET_GPR_U32(ctx, 31, 0x16756Cu);
    ctx->pc = 0x167568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167564u;
    // 0x167568: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x16756Cu;
label_16756c:
    // 0x16756c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16756cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167570:
    // 0x167570: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x167570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_167574:
    // 0x167574: 0xc066e1a  jal         func_19B868
label_167578:
    if (ctx->pc == 0x167578u) {
        ctx->pc = 0x167578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167574u;
        // 0x167578: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16757Cu;
        goto label_16757c;
    }
    ctx->pc = 0x167574u;
    SET_GPR_U32(ctx, 31, 0x16757Cu);
    ctx->pc = 0x167578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167574u;
    // 0x167578: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x16757Cu;
label_16757c:
    // 0x16757c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16757cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_167580:
    // 0x167580: 0xc041b88  jal         func_106E20
label_167584:
    if (ctx->pc == 0x167584u) {
        ctx->pc = 0x167584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167580u;
        // 0x167584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167588u;
        goto label_167588;
    }
    ctx->pc = 0x167580u;
    SET_GPR_U32(ctx, 31, 0x167588u);
    ctx->pc = 0x167584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167580u;
    // 0x167584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E20u, 0x167580u, 0x167588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167588u;
label_167588:
    // 0x167588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16758c:
    // 0x16758c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16758cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_167590:
    // 0x167590: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x167590u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_167594:
    // 0x167594: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x167594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_167598:
    // 0x167598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16759c:
    // 0x16759c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16759cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1675a0:
    // 0x1675a0: 0x3e00008  jr          $ra
label_1675a4:
    if (ctx->pc == 0x1675A4u) {
        ctx->pc = 0x1675A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675A0u;
        // 0x1675a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1675A8u;
        goto label_1675a8;
    }
    ctx->pc = 0x1675A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1675A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675A0u;
        // 0x1675a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1675A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1675A8u;
label_1675a8:
    // 0x1675a8: 0x0  nop
    ctx->pc = 0x1675a8u;
    // NOP
label_1675ac:
    // 0x1675ac: 0x0  nop
    ctx->pc = 0x1675acu;
    // NOP
label_1675b0:
    // 0x1675b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1675b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1675b4:
    // 0x1675b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1675b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1675b8:
    // 0x1675b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1675b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1675bc:
    // 0x1675bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1675bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1675c0:
    // 0x1675c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1675c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1675c4:
    // 0x1675c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1675c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1675c8:
    // 0x1675c8: 0x8c860048  lw          $a2, 0x48($a0)
    ctx->pc = 0x1675c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_1675cc:
    // 0x1675cc: 0x9083004c  lbu         $v1, 0x4C($a0)
    ctx->pc = 0x1675ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 76)));
label_1675d0:
    // 0x1675d0: 0x8f8286b8  lw          $v0, -0x7948($gp)
    ctx->pc = 0x1675d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
label_1675d4:
    // 0x1675d4: 0x8cd0004c  lw          $s0, 0x4C($a2)
    ctx->pc = 0x1675d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
label_1675d8:
    // 0x1675d8: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1675d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_1675dc:
    // 0x1675dc: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x1675dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_1675e0:
    // 0x1675e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1675e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1675e4:
    // 0x1675e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1675e8:
    if (ctx->pc == 0x1675E8u) {
        ctx->pc = 0x1675E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675E4u;
        // 0x1675e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1675ECu;
        goto label_1675ec;
    }
    ctx->pc = 0x1675E4u;
    {
        const bool branch_taken_0x1675e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1675E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675E4u;
        // 0x1675e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675e4) {
            ctx->pc = 0x1675FCu;
            goto label_1675fc;
        }
    }
    ctx->pc = 0x1675ECu;
label_1675ec:
    // 0x1675ec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1675ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1675f0:
    // 0x1675f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1675f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1675f4:
    // 0x1675f4: 0x10000066  b           . + 4 + (0x66 << 2)
label_1675f8:
    if (ctx->pc == 0x1675F8u) {
        ctx->pc = 0x1675F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675F4u;
        // 0x1675f8: 0xa243004e  sb          $v1, 0x4E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 78), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1675FCu;
        goto label_1675fc;
    }
    ctx->pc = 0x1675F4u;
    {
        const bool branch_taken_0x1675f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675F4u;
        // 0x1675f8: 0xa243004e  sb          $v1, 0x4E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 78), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675f4) {
            ctx->pc = 0x167790u;
            goto label_167790;
        }
    }
    ctx->pc = 0x1675FCu;
label_1675fc:
    // 0x1675fc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1675fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_167600:
    // 0x167600: 0x9022497c  lbu         $v0, 0x497C($at)
    ctx->pc = 0x167600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18812)));
label_167604:
    // 0x167604: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_167608:
    if (ctx->pc == 0x167608u) {
        ctx->pc = 0x167608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167604u;
        // 0x167608: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16760Cu;
        goto label_16760c;
    }
    ctx->pc = 0x167604u;
    {
        const bool branch_taken_0x167604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167604u;
        // 0x167608: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167604) {
            ctx->pc = 0x167658u;
            goto label_167658;
        }
    }
    ctx->pc = 0x16760Cu;
label_16760c:
    // 0x16760c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16760cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_167610:
    // 0x167610: 0x8c224968  lw          $v0, 0x4968($at)
    ctx->pc = 0x167610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18792)));
label_167614:
    // 0x167614: 0xc066e08  jal         func_19B820
label_167618:
    if (ctx->pc == 0x167618u) {
        ctx->pc = 0x167618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167614u;
        // 0x167618: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16761Cu;
        goto label_16761c;
    }
    ctx->pc = 0x167614u;
    SET_GPR_U32(ctx, 31, 0x16761Cu);
    ctx->pc = 0x167618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167614u;
    // 0x167618: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x16761Cu;
label_16761c:
    // 0x16761c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16761cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_167620:
    // 0x167620: 0xc066da0  jal         func_19B680
label_167624:
    if (ctx->pc == 0x167624u) {
        ctx->pc = 0x167624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167620u;
        // 0x167624: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167628u;
        goto label_167628;
    }
    ctx->pc = 0x167620u;
    SET_GPR_U32(ctx, 31, 0x167628u);
    ctx->pc = 0x167624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167620u;
    // 0x167624: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B680u;
    { ctx->pc = 0x19b680; return; }
    ctx->pc = 0x167628u;
label_167628:
    // 0x167628: 0x0  nop
    ctx->pc = 0x167628u;
    // NOP
label_16762c:
    // 0x16762c: 0x0  nop
    ctx->pc = 0x16762cu;
    // NOP
label_167630:
    // 0x167630: 0x46000044  c1          0x44
    ctx->pc = 0x167630u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_167634:
    // 0x167634: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x167634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
label_167638:
    // 0x167638: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x167638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_16763c:
    // 0x16763c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16763cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167640:
    // 0x167640: 0x0  nop
    ctx->pc = 0x167640u;
    // NOP
label_167644:
    // 0x167644: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x167644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_167648:
    // 0x167648: 0x0  nop
    ctx->pc = 0x167648u;
    // NOP
label_16764c:
    // 0x16764c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_167650:
    if (ctx->pc == 0x167650u) {
        ctx->pc = 0x167654u;
        goto label_167654;
    }
    ctx->pc = 0x16764Cu;
    {
        const bool branch_taken_0x16764c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16764c) {
            ctx->pc = 0x167658u;
            goto label_167658;
        }
    }
    ctx->pc = 0x167654u;
label_167654:
    // 0x167654: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x167654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167658:
    // 0x167658: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x167658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_16765c:
    // 0x16765c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x16765cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_167660:
    // 0x167660: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_167664:
    if (ctx->pc == 0x167664u) {
        ctx->pc = 0x167664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167660u;
        // 0x167664: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167668u;
        goto label_167668;
    }
    ctx->pc = 0x167660u;
    {
        const bool branch_taken_0x167660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167660u;
        // 0x167664: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167660) {
            ctx->pc = 0x1676C8u;
            goto label_1676c8;
        }
    }
    ctx->pc = 0x167668u;
label_167668:
    // 0x167668: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x167668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_16766c:
    // 0x16766c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_167670:
    if (ctx->pc == 0x167670u) {
        ctx->pc = 0x167674u;
        goto label_167674;
    }
    ctx->pc = 0x16766Cu;
    {
        const bool branch_taken_0x16766c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16766c) {
            ctx->pc = 0x1676C8u;
            goto label_1676c8;
        }
    }
    ctx->pc = 0x167674u;
label_167674:
    // 0x167674: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x167674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_167678:
    // 0x167678: 0x8e460048  lw          $a2, 0x48($s2)
    ctx->pc = 0x167678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_16767c:
    // 0x16767c: 0x8c2249f8  lw          $v0, 0x49F8($at)
    ctx->pc = 0x16767cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18936)));
label_167680:
    // 0x167680: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x167680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_167684:
    // 0x167684: 0xc066e08  jal         func_19B820
label_167688:
    if (ctx->pc == 0x167688u) {
        ctx->pc = 0x167688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167684u;
        // 0x167688: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16768Cu;
        goto label_16768c;
    }
    ctx->pc = 0x167684u;
    SET_GPR_U32(ctx, 31, 0x16768Cu);
    ctx->pc = 0x167688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167684u;
    // 0x167688: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x16768Cu;
label_16768c:
    // 0x16768c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16768cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_167690:
    // 0x167690: 0xc066da0  jal         func_19B680
label_167694:
    if (ctx->pc == 0x167694u) {
        ctx->pc = 0x167694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167690u;
        // 0x167694: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167698u;
        goto label_167698;
    }
    ctx->pc = 0x167690u;
    SET_GPR_U32(ctx, 31, 0x167698u);
    ctx->pc = 0x167694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167690u;
    // 0x167694: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B680u;
    { ctx->pc = 0x19b680; return; }
    ctx->pc = 0x167698u;
label_167698:
    // 0x167698: 0x0  nop
    ctx->pc = 0x167698u;
    // NOP
label_16769c:
    // 0x16769c: 0x0  nop
    ctx->pc = 0x16769cu;
    // NOP
label_1676a0:
    // 0x1676a0: 0x46000044  c1          0x44
    ctx->pc = 0x1676a0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_1676a4:
    // 0x1676a4: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x1676a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
label_1676a8:
    // 0x1676a8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1676a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1676ac:
    // 0x1676ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1676acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1676b0:
    // 0x1676b0: 0x0  nop
    ctx->pc = 0x1676b0u;
    // NOP
label_1676b4:
    // 0x1676b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1676b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1676b8:
    // 0x1676b8: 0x0  nop
    ctx->pc = 0x1676b8u;
    // NOP
label_1676bc:
    // 0x1676bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1676c0:
    if (ctx->pc == 0x1676C0u) {
        ctx->pc = 0x1676C4u;
        goto label_1676c4;
    }
    ctx->pc = 0x1676BCu;
    {
        const bool branch_taken_0x1676bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1676bc) {
            ctx->pc = 0x1676C8u;
            goto label_1676c8;
        }
    }
    ctx->pc = 0x1676C4u;
label_1676c4:
    // 0x1676c4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1676c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1676c8:
    // 0x1676c8: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_1676cc:
    if (ctx->pc == 0x1676CCu) {
        ctx->pc = 0x1676CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676C8u;
        // 0x1676cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1676D0u;
        goto label_1676d0;
    }
    ctx->pc = 0x1676C8u;
    {
        const bool branch_taken_0x1676c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1676CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676C8u;
        // 0x1676cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1676c8) {
            ctx->pc = 0x167790u;
            goto label_167790;
        }
    }
    ctx->pc = 0x1676D0u;
label_1676d0:
    // 0x1676d0: 0x96430050  lhu         $v1, 0x50($s2)
    ctx->pc = 0x1676d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
label_1676d4:
    // 0x1676d4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1676d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1676d8:
    // 0x1676d8: 0xa6420050  sh          $v0, 0x50($s2)
    ctx->pc = 0x1676d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 80), (uint16_t)GPR_U32(ctx, 2));
label_1676dc:
    // 0x1676dc: 0x96420052  lhu         $v0, 0x52($s2)
    ctx->pc = 0x1676dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 82)));
label_1676e0:
    // 0x1676e0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1676e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1676e4:
    // 0x1676e4: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_1676e8:
    if (ctx->pc == 0x1676E8u) {
        ctx->pc = 0x1676ECu;
        goto label_1676ec;
    }
    ctx->pc = 0x1676E4u;
    {
        const bool branch_taken_0x1676e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1676e4) {
            ctx->pc = 0x16778Cu;
            goto label_16778c;
        }
    }
    ctx->pc = 0x1676ECu;
label_1676ec:
    // 0x1676ec: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1676ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1676f0:
    // 0x1676f0: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x1676f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_1676f4:
    // 0x1676f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1676f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1676f8:
    // 0x1676f8: 0xc08f0cc  jal         func_23C330
label_1676fc:
    if (ctx->pc == 0x1676FCu) {
        ctx->pc = 0x1676FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676F8u;
        // 0x1676fc: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167700u;
        goto label_167700;
    }
    ctx->pc = 0x1676F8u;
    SET_GPR_U32(ctx, 31, 0x167700u);
    ctx->pc = 0x1676FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1676F8u;
    // 0x1676fc: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x167700u;
label_167700:
    // 0x167700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167704:
    // 0x167704: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x167704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_167708:
    // 0x167708: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x167708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_16770c:
    // 0x16770c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x16770cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_167710:
    // 0x167710: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x167710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_167714:
    // 0x167714: 0x0  nop
    ctx->pc = 0x167714u;
    // NOP
label_167718:
    // 0x167718: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x167718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16771c:
    // 0x16771c: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x16771cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_167720:
    // 0x167720: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x167720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_167724:
    // 0x167724: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x167724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_167728:
    // 0x167728: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x167728u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_16772c:
    // 0x16772c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16772cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_167730:
    // 0x167730: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x167730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_167734:
    // 0x167734: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x167734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_167738:
    // 0x167738: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x167738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_16773c:
    // 0x16773c: 0xc08f0cc  jal         func_23C330
label_167740:
    if (ctx->pc == 0x167740u) {
        ctx->pc = 0x167740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16773Cu;
        // 0x167740: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167744u;
        goto label_167744;
    }
    ctx->pc = 0x16773Cu;
    SET_GPR_U32(ctx, 31, 0x167744u);
    ctx->pc = 0x167740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16773Cu;
    // 0x167740: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x167744u;
label_167744:
    // 0x167744: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x167744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_167748:
    // 0x167748: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x167748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_16774c:
    // 0x16774c: 0x3c03c0a0  lui         $v1, 0xC0A0
    ctx->pc = 0x16774cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49312 << 16));
label_167750:
    // 0x167750: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x167750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_167754:
    // 0x167754: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x167754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_167758:
    // 0x167758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16775c:
    // 0x16775c: 0x0  nop
    ctx->pc = 0x16775cu;
    // NOP
label_167760:
    // 0x167760: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x167760u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_167764:
    // 0x167764: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x167764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167768:
    // 0x167768: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x167768u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16776c:
    // 0x16776c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16776cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167770:
    // 0x167770: 0x0  nop
    ctx->pc = 0x167770u;
    // NOP
label_167774:
    // 0x167774: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x167774u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_167778:
    // 0x167778: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x167778u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_16777c:
    // 0x16777c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16777cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_167780:
    // 0x167780: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x167780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_167784:
    // 0x167784: 0x10000002  b           . + 4 + (0x2 << 2)
label_167788:
    if (ctx->pc == 0x167788u) {
        ctx->pc = 0x167788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167784u;
        // 0x167788: 0xe6400018  swc1        $f0, 0x18($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16778Cu;
        goto label_16778c;
    }
    ctx->pc = 0x167784u;
    {
        const bool branch_taken_0x167784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167784u;
        // 0x167788: 0xe6400018  swc1        $f0, 0x18($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167784) {
            ctx->pc = 0x167790u;
            goto label_167790;
        }
    }
    ctx->pc = 0x16778Cu;
label_16778c:
    // 0x16778c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167790:
    // 0x167790: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x167790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_167794:
    // 0x167794: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x167794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_167798:
    // 0x167798: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16779c:
    // 0x16779c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16779cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1677a0:
    // 0x1677a0: 0x3e00008  jr          $ra
label_1677a4:
    if (ctx->pc == 0x1677A4u) {
        ctx->pc = 0x1677A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677A0u;
        // 0x1677a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1677A8u;
        goto label_1677a8;
    }
    ctx->pc = 0x1677A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1677A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677A0u;
        // 0x1677a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1677A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1677A8u;
label_1677a8:
    // 0x1677a8: 0x0  nop
    ctx->pc = 0x1677a8u;
    // NOP
label_1677ac:
    // 0x1677ac: 0x0  nop
    ctx->pc = 0x1677acu;
    // NOP
label_1677b0:
    // 0x1677b0: 0x3c02bc0e  lui         $v0, 0xBC0E
    ctx->pc = 0x1677b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48142 << 16));
label_1677b4:
    // 0x1677b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1677b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1677b8:
    // 0x1677b8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x1677b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_1677bc:
    // 0x1677bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1677bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1677c0:
    // 0x1677c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1677c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1677c4:
    // 0x1677c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1677c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1677c8:
    // 0x1677c8: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x1677c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_1677cc:
    // 0x1677cc: 0xc059b50  jal         func_166D40
label_1677d0:
    if (ctx->pc == 0x1677D0u) {
        ctx->pc = 0x1677D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677CCu;
        // 0x1677d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1677D4u;
        goto label_1677d4;
    }
    ctx->pc = 0x1677CCu;
    SET_GPR_U32(ctx, 31, 0x1677D4u);
    ctx->pc = 0x1677D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1677CCu;
    // 0x1677d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D40u;
    { ctx->pc = 0x166d40; return; }
    ctx->pc = 0x1677D4u;
label_1677d4:
    // 0x1677d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1677d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1677d8:
    // 0x1677d8: 0x3e00008  jr          $ra
label_1677dc:
    if (ctx->pc == 0x1677DCu) {
        ctx->pc = 0x1677DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677D8u;
        // 0x1677dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1677E0u;
        goto label_1677e0;
    }
    ctx->pc = 0x1677D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1677DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677D8u;
        // 0x1677dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1677D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1677E0u;
label_1677e0:
    // 0x1677e0: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x1677e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
label_1677e4:
    // 0x1677e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1677e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1677e8:
    // 0x1677e8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x1677e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_1677ec:
    // 0x1677ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1677ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1677f0:
    // 0x1677f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1677f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1677f4:
    // 0x1677f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1677f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1677f8:
    // 0x1677f8: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x1677f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_1677fc:
    // 0x1677fc: 0xc059b50  jal         func_166D40
label_167800:
    if (ctx->pc == 0x167800u) {
        ctx->pc = 0x167800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677FCu;
        // 0x167800: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167804u;
        goto label_167804;
    }
    ctx->pc = 0x1677FCu;
    SET_GPR_U32(ctx, 31, 0x167804u);
    ctx->pc = 0x167800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1677FCu;
    // 0x167800: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D40u;
    { ctx->pc = 0x166d40; return; }
    ctx->pc = 0x167804u;
label_167804:
    // 0x167804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_167808:
    // 0x167808: 0x3e00008  jr          $ra
label_16780c:
    if (ctx->pc == 0x16780Cu) {
        ctx->pc = 0x16780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167808u;
        // 0x16780c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167810u;
        goto label_167810;
    }
    ctx->pc = 0x167808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167808u;
        // 0x16780c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167810u;
label_167810:
    // 0x167810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x167810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_167814:
    // 0x167814: 0x278586b8  addiu       $a1, $gp, -0x7948
    ctx->pc = 0x167814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936248));
label_167818:
    // 0x167818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16781c:
    // 0x16781c: 0xc08e93e  jal         func_23A4F8
label_167820:
    if (ctx->pc == 0x167820u) {
        ctx->pc = 0x167820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16781Cu;
        // 0x167820: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167824u;
        goto label_167824;
    }
    ctx->pc = 0x16781Cu;
    SET_GPR_U32(ctx, 31, 0x167824u);
    ctx->pc = 0x167820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16781Cu;
    // 0x167820: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x167824u;
label_167824:
    // 0x167824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_167828:
    // 0x167828: 0x3e00008  jr          $ra
label_16782c:
    if (ctx->pc == 0x16782Cu) {
        ctx->pc = 0x16782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167828u;
        // 0x16782c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167830u;
        goto label_167830;
    }
    ctx->pc = 0x167828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167828u;
        // 0x16782c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167830u;
label_167830:
    // 0x167830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_167834:
    // 0x167834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_167838:
    // 0x167838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16783c:
    // 0x16783c: 0x8f9086e0  lw          $s0, -0x7920($gp)
    ctx->pc = 0x16783cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936288)));
label_167840:
    // 0x167840: 0x12000054  beqz        $s0, . + 4 + (0x54 << 2)
label_167844:
    if (ctx->pc == 0x167844u) {
        ctx->pc = 0x167848u;
        goto label_167848;
    }
    ctx->pc = 0x167840u;
    {
        const bool branch_taken_0x167840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x167840) {
            ctx->pc = 0x167994u;
            goto label_167994;
        }
    }
    ctx->pc = 0x167848u;
label_167848:
    // 0x167848: 0x9205004c  lbu         $a1, 0x4C($s0)
    ctx->pc = 0x167848u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_16784c:
    // 0x16784c: 0x8f8386b8  lw          $v1, -0x7948($gp)
    ctx->pc = 0x16784cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
label_167850:
    // 0x167850: 0x30a4001f  andi        $a0, $a1, 0x1F
    ctx->pc = 0x167850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_167854:
    // 0x167854: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x167854u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_167858:
    // 0x167858: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x167858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_16785c:
    // 0x16785c: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
label_167860:
    if (ctx->pc == 0x167860u) {
        ctx->pc = 0x167860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16785Cu;
        // 0x167860: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167864u;
        goto label_167864;
    }
    ctx->pc = 0x16785Cu;
    {
        const bool branch_taken_0x16785c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16785Cu;
        // 0x167860: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16785c) {
            ctx->pc = 0x167984u;
            goto label_167984;
        }
    }
    ctx->pc = 0x167864u;
label_167864:
    // 0x167864: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x167864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_167868:
    // 0x167868: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x167868u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_16786c:
    // 0x16786c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_167870:
    if (ctx->pc == 0x167870u) {
        ctx->pc = 0x167870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16786Cu;
        // 0x167870: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167874u;
        goto label_167874;
    }
    ctx->pc = 0x16786Cu;
    {
        const bool branch_taken_0x16786c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x167870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16786Cu;
        // 0x167870: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16786c) {
            ctx->pc = 0x16787Cu;
            goto label_16787c;
        }
    }
    ctx->pc = 0x167874u;
label_167874:
    // 0x167874: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
label_167878:
    if (ctx->pc == 0x167878u) {
        ctx->pc = 0x16787Cu;
        goto label_16787c;
    }
    ctx->pc = 0x167874u;
    {
        const bool branch_taken_0x167874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x167874) {
            ctx->pc = 0x1678ACu;
            goto label_1678ac;
        }
    }
    ctx->pc = 0x16787Cu;
label_16787c:
    // 0x16787c: 0x0  nop
    ctx->pc = 0x16787cu;
    // NOP
label_167880:
    // 0x167880: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x167880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_167884:
    // 0x167884: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_167888:
    if (ctx->pc == 0x167888u) {
        ctx->pc = 0x167888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167884u;
        // 0x167888: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16788Cu;
        goto label_16788c;
    }
    ctx->pc = 0x167884u;
    {
        const bool branch_taken_0x167884 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x167888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167884u;
        // 0x167888: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167884) {
            ctx->pc = 0x167894u;
            goto label_167894;
        }
    }
    ctx->pc = 0x16788Cu;
label_16788c:
    // 0x16788c: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
label_167890:
    if (ctx->pc == 0x167890u) {
        ctx->pc = 0x167894u;
        goto label_167894;
    }
    ctx->pc = 0x16788Cu;
    {
        const bool branch_taken_0x16788c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x16788c) {
            ctx->pc = 0x1678ACu;
            goto label_1678ac;
        }
    }
    ctx->pc = 0x167894u;
label_167894:
    // 0x167894: 0x0  nop
    ctx->pc = 0x167894u;
    // NOP
label_167898:
    // 0x167898: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x167898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_16789c:
    // 0x16789c: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
label_1678a0:
    if (ctx->pc == 0x1678A0u) {
        ctx->pc = 0x1678A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16789Cu;
        // 0x1678a0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1678A4u;
        goto label_1678a4;
    }
    ctx->pc = 0x16789Cu;
    {
        const bool branch_taken_0x16789c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1678A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16789Cu;
        // 0x1678a0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16789c) {
            ctx->pc = 0x16791Cu;
            goto label_16791c;
        }
    }
    ctx->pc = 0x1678A4u;
label_1678a4:
    // 0x1678a4: 0x14a3001d  bne         $a1, $v1, . + 4 + (0x1D << 2)
label_1678a8:
    if (ctx->pc == 0x1678A8u) {
        ctx->pc = 0x1678ACu;
        goto label_1678ac;
    }
    ctx->pc = 0x1678A4u;
    {
        const bool branch_taken_0x1678a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1678a4) {
            ctx->pc = 0x16791Cu;
            goto label_16791c;
        }
    }
    ctx->pc = 0x1678ACu;
label_1678ac:
    // 0x1678ac: 0x0  nop
    ctx->pc = 0x1678acu;
    // NOP
label_1678b0:
    // 0x1678b0: 0x9203004d  lbu         $v1, 0x4D($s0)
    ctx->pc = 0x1678b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
label_1678b4:
    // 0x1678b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1678b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1678b8:
    // 0x1678b8: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
label_1678bc:
    if (ctx->pc == 0x1678BCu) {
        ctx->pc = 0x1678C0u;
        goto label_1678c0;
    }
    ctx->pc = 0x1678B8u;
    {
        const bool branch_taken_0x1678b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1678b8) {
            ctx->pc = 0x1678F4u;
            goto label_1678f4;
        }
    }
    ctx->pc = 0x1678C0u;
label_1678c0:
    // 0x1678c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1678c4:
    if (ctx->pc == 0x1678C4u) {
        ctx->pc = 0x1678C8u;
        goto label_1678c8;
    }
    ctx->pc = 0x1678C0u;
    {
        const bool branch_taken_0x1678c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1678c0) {
            ctx->pc = 0x1678D0u;
            goto label_1678d0;
        }
    }
    ctx->pc = 0x1678C8u;
label_1678c8:
    // 0x1678c8: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1678cc:
    if (ctx->pc == 0x1678CCu) {
        ctx->pc = 0x1678D0u;
        goto label_1678d0;
    }
    ctx->pc = 0x1678C8u;
    {
        const bool branch_taken_0x1678c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1678c8) {
            ctx->pc = 0x167984u;
            goto label_167984;
        }
    }
    ctx->pc = 0x1678D0u;
label_1678d0:
    // 0x1678d0: 0x3c02bc0d  lui         $v0, 0xBC0D
    ctx->pc = 0x1678d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48141 << 16));
label_1678d4:
    // 0x1678d4: 0x34428c2f  ori         $v0, $v0, 0x8C2F
    ctx->pc = 0x1678d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35887);
label_1678d8:
    // 0x1678d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1678d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1678dc:
    // 0x1678dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1678dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1678e0:
    // 0x1678e0: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x1678e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_1678e4:
    // 0x1678e4: 0xc059b50  jal         func_166D40
label_1678e8:
    if (ctx->pc == 0x1678E8u) {
        ctx->pc = 0x1678E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1678E4u;
        // 0x1678e8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1678ECu;
        goto label_1678ec;
    }
    ctx->pc = 0x1678E4u;
    SET_GPR_U32(ctx, 31, 0x1678ECu);
    ctx->pc = 0x1678E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1678E4u;
    // 0x1678e8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D40u;
    { ctx->pc = 0x166d40; return; }
    ctx->pc = 0x1678ECu;
label_1678ec:
    // 0x1678ec: 0x10000025  b           . + 4 + (0x25 << 2)
label_1678f0:
    if (ctx->pc == 0x1678F0u) {
        ctx->pc = 0x1678F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1678ECu;
        // 0x1678f0: 0xa200004e  sb          $zero, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1678F4u;
        goto label_1678f4;
    }
    ctx->pc = 0x1678ECu;
    {
        const bool branch_taken_0x1678ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1678F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1678ECu;
        // 0x1678f0: 0xa200004e  sb          $zero, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1678ec) {
            ctx->pc = 0x167984u;
            goto label_167984;
        }
    }
    ctx->pc = 0x1678F4u;
label_1678f4:
    // 0x1678f4: 0x0  nop
    ctx->pc = 0x1678f4u;
    // NOP
label_1678f8:
    // 0x1678f8: 0x3c023c0d  lui         $v0, 0x3C0D
    ctx->pc = 0x1678f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15373 << 16));
label_1678fc:
    // 0x1678fc: 0x34428c2f  ori         $v0, $v0, 0x8C2F
    ctx->pc = 0x1678fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35887);
label_167900:
    // 0x167900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167904:
    // 0x167904: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_167908:
    // 0x167908: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x167908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_16790c:
    // 0x16790c: 0xc059b50  jal         func_166D40
label_167910:
    if (ctx->pc == 0x167910u) {
        ctx->pc = 0x167910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16790Cu;
        // 0x167910: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167914u;
        goto label_167914;
    }
    ctx->pc = 0x16790Cu;
    SET_GPR_U32(ctx, 31, 0x167914u);
    ctx->pc = 0x167910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16790Cu;
    // 0x167910: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D40u;
    { ctx->pc = 0x166d40; return; }
    ctx->pc = 0x167914u;
label_167914:
    // 0x167914: 0x1000001b  b           . + 4 + (0x1B << 2)
label_167918:
    if (ctx->pc == 0x167918u) {
        ctx->pc = 0x167918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167914u;
        // 0x167918: 0xa200004e  sb          $zero, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16791Cu;
        goto label_16791c;
    }
    ctx->pc = 0x167914u;
    {
        const bool branch_taken_0x167914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167914u;
        // 0x167918: 0xa200004e  sb          $zero, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167914) {
            ctx->pc = 0x167984u;
            goto label_167984;
        }
    }
    ctx->pc = 0x16791Cu;
label_16791c:
    // 0x16791c: 0x0  nop
    ctx->pc = 0x16791cu;
    // NOP
label_167920:
    // 0x167920: 0x9203004d  lbu         $v1, 0x4D($s0)
    ctx->pc = 0x167920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
label_167924:
    // 0x167924: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x167924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167928:
    // 0x167928: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
label_16792c:
    if (ctx->pc == 0x16792Cu) {
        ctx->pc = 0x167930u;
        goto label_167930;
    }
    ctx->pc = 0x167928u;
    {
        const bool branch_taken_0x167928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x167928) {
            ctx->pc = 0x167964u;
            goto label_167964;
        }
    }
    ctx->pc = 0x167930u;
label_167930:
    // 0x167930: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_167934:
    if (ctx->pc == 0x167934u) {
        ctx->pc = 0x167938u;
        goto label_167938;
    }
    ctx->pc = 0x167930u;
    {
        const bool branch_taken_0x167930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x167930) {
            ctx->pc = 0x167940u;
            goto label_167940;
        }
    }
    ctx->pc = 0x167938u;
label_167938:
    // 0x167938: 0x10000012  b           . + 4 + (0x12 << 2)
label_16793c:
    if (ctx->pc == 0x16793Cu) {
        ctx->pc = 0x167940u;
        goto label_167940;
    }
    ctx->pc = 0x167938u;
    {
        const bool branch_taken_0x167938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167938) {
            ctx->pc = 0x167984u;
            goto label_167984;
        }
    }
    ctx->pc = 0x167940u;
label_167940:
    // 0x167940: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x167940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
label_167944:
    // 0x167944: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x167944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_167948:
    // 0x167948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16794c:
    // 0x16794c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16794cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_167950:
    // 0x167950: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x167950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_167954:
    // 0x167954: 0xc059b50  jal         func_166D40
label_167958:
    if (ctx->pc == 0x167958u) {
        ctx->pc = 0x167958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167954u;
        // 0x167958: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16795Cu;
        goto label_16795c;
    }
    ctx->pc = 0x167954u;
    SET_GPR_U32(ctx, 31, 0x16795Cu);
    ctx->pc = 0x167958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167954u;
    // 0x167958: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D40u;
    { ctx->pc = 0x166d40; return; }
    ctx->pc = 0x16795Cu;
label_16795c:
    // 0x16795c: 0x10000009  b           . + 4 + (0x9 << 2)
label_167960:
    if (ctx->pc == 0x167960u) {
        ctx->pc = 0x167964u;
        goto label_167964;
    }
    ctx->pc = 0x16795Cu;
    {
        const bool branch_taken_0x16795c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16795c) {
            ctx->pc = 0x167984u;
            goto label_167984;
        }
    }
    ctx->pc = 0x167964u;
label_167964:
    // 0x167964: 0x0  nop
    ctx->pc = 0x167964u;
    // NOP
label_167968:
    // 0x167968: 0x3c02bc0e  lui         $v0, 0xBC0E
    ctx->pc = 0x167968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48142 << 16));
label_16796c:
    // 0x16796c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x16796cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_167970:
    // 0x167970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167974:
    // 0x167974: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_167978:
    // 0x167978: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x167978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_16797c:
    // 0x16797c: 0xc059b50  jal         func_166D40
label_167980:
    if (ctx->pc == 0x167980u) {
        ctx->pc = 0x167980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16797Cu;
        // 0x167980: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167984u;
        goto label_167984;
    }
    ctx->pc = 0x16797Cu;
    SET_GPR_U32(ctx, 31, 0x167984u);
    ctx->pc = 0x167980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16797Cu;
    // 0x167980: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D40u;
    { ctx->pc = 0x166d40; return; }
    ctx->pc = 0x167984u;
label_167984:
    // 0x167984: 0x0  nop
    ctx->pc = 0x167984u;
    // NOP
label_167988:
    // 0x167988: 0x8e100044  lw          $s0, 0x44($s0)
    ctx->pc = 0x167988u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_16798c:
    // 0x16798c: 0x1600ffae  bnez        $s0, . + 4 + (-0x52 << 2)
label_167990:
    if (ctx->pc == 0x167990u) {
        ctx->pc = 0x167994u;
        goto label_167994;
    }
    ctx->pc = 0x16798Cu;
    {
        const bool branch_taken_0x16798c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16798c) {
            ctx->pc = 0x167848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167848;
        }
    }
    ctx->pc = 0x167994u;
label_167994:
    // 0x167994: 0x0  nop
    ctx->pc = 0x167994u;
    // NOP
label_167998:
    // 0x167998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16799c:
    // 0x16799c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16799cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1679a0:
    // 0x1679a0: 0x3e00008  jr          $ra
label_1679a4:
    if (ctx->pc == 0x1679A4u) {
        ctx->pc = 0x1679A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679A0u;
        // 0x1679a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1679A8u;
        goto label_1679a8;
    }
    ctx->pc = 0x1679A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1679A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679A0u;
        // 0x1679a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1679A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1679A8u;
label_1679a8:
    // 0x1679a8: 0x0  nop
    ctx->pc = 0x1679a8u;
    // NOP
label_1679ac:
    // 0x1679ac: 0x0  nop
    ctx->pc = 0x1679acu;
    // NOP
label_1679b0:
    // 0x1679b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1679b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1679b4:
    // 0x1679b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1679b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1679b8:
    // 0x1679b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1679b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1679bc:
    // 0x1679bc: 0x278486b8  addiu       $a0, $gp, -0x7948
    ctx->pc = 0x1679bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936248));
label_1679c0:
    // 0x1679c0: 0xc08e93e  jal         func_23A4F8
label_1679c4:
    if (ctx->pc == 0x1679C4u) {
        ctx->pc = 0x1679C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679C0u;
        // 0x1679c4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1679C8u;
        goto label_1679c8;
    }
    ctx->pc = 0x1679C0u;
    SET_GPR_U32(ctx, 31, 0x1679C8u);
    ctx->pc = 0x1679C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1679C0u;
    // 0x1679c4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1679C8u;
label_1679c8:
    // 0x1679c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1679c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1679cc:
    // 0x1679cc: 0x3e00008  jr          $ra
label_1679d0:
    if (ctx->pc == 0x1679D0u) {
        ctx->pc = 0x1679D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679CCu;
        // 0x1679d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1679D4u;
        goto label_1679d4;
    }
    ctx->pc = 0x1679CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1679D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679CCu;
        // 0x1679d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1679CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1679D4u;
label_1679d4:
    // 0x1679d4: 0x0  nop
    ctx->pc = 0x1679d4u;
    // NOP
label_1679d8:
    // 0x1679d8: 0x0  nop
    ctx->pc = 0x1679d8u;
    // NOP
label_1679dc:
    // 0x1679dc: 0x0  nop
    ctx->pc = 0x1679dcu;
    // NOP
label_1679e0:
    // 0x1679e0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1679e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1679e4:
    // 0x1679e4: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x1679e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_1679e8:
    // 0x1679e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1679e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1679ec:
    // 0x1679ec: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1679ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_1679f0:
    // 0x1679f0: 0x8f8386b8  lw          $v1, -0x7948($gp)
    ctx->pc = 0x1679f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
label_1679f4:
    // 0x1679f4: 0x802027  not         $a0, $a0
    ctx->pc = 0x1679f4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_1679f8:
    // 0x1679f8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1679f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1679fc:
    // 0x1679fc: 0x3e00008  jr          $ra
label_167a00:
    if (ctx->pc == 0x167A00u) {
        ctx->pc = 0x167A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679FCu;
        // 0x167a00: 0xaf8386b8  sw          $v1, -0x7948($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167A04u;
        goto label_167a04;
    }
    ctx->pc = 0x1679FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1679FCu;
        // 0x167a00: 0xaf8386b8  sw          $v1, -0x7948($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1679FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167A04u;
label_167a04:
    // 0x167a04: 0x0  nop
    ctx->pc = 0x167a04u;
    // NOP
label_167a08:
    // 0x167a08: 0x0  nop
    ctx->pc = 0x167a08u;
    // NOP
label_167a0c:
    // 0x167a0c: 0x0  nop
    ctx->pc = 0x167a0cu;
    // NOP
    ctx->pc = 0x167a10u;
    return;
}
