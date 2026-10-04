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


void FUN_0014eba0_part18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x157070u: goto label_157070;
        case 0x157074u: goto label_157074;
        case 0x157078u: goto label_157078;
        case 0x15707cu: goto label_15707c;
        case 0x157080u: goto label_157080;
        case 0x157084u: goto label_157084;
        case 0x157088u: goto label_157088;
        case 0x15708cu: goto label_15708c;
        case 0x157090u: goto label_157090;
        case 0x157094u: goto label_157094;
        case 0x157098u: goto label_157098;
        case 0x15709cu: goto label_15709c;
        case 0x1570a0u: goto label_1570a0;
        case 0x1570a4u: goto label_1570a4;
        case 0x1570a8u: goto label_1570a8;
        case 0x1570acu: goto label_1570ac;
        case 0x1570b0u: goto label_1570b0;
        case 0x1570b4u: goto label_1570b4;
        case 0x1570b8u: goto label_1570b8;
        case 0x1570bcu: goto label_1570bc;
        case 0x1570c0u: goto label_1570c0;
        case 0x1570c4u: goto label_1570c4;
        case 0x1570c8u: goto label_1570c8;
        case 0x1570ccu: goto label_1570cc;
        case 0x1570d0u: goto label_1570d0;
        case 0x1570d4u: goto label_1570d4;
        case 0x1570d8u: goto label_1570d8;
        case 0x1570dcu: goto label_1570dc;
        case 0x1570e0u: goto label_1570e0;
        case 0x1570e4u: goto label_1570e4;
        case 0x1570e8u: goto label_1570e8;
        case 0x1570ecu: goto label_1570ec;
        case 0x1570f0u: goto label_1570f0;
        case 0x1570f4u: goto label_1570f4;
        case 0x1570f8u: goto label_1570f8;
        case 0x1570fcu: goto label_1570fc;
        case 0x157100u: goto label_157100;
        case 0x157104u: goto label_157104;
        case 0x157108u: goto label_157108;
        case 0x15710cu: goto label_15710c;
        case 0x157110u: goto label_157110;
        case 0x157114u: goto label_157114;
        case 0x157118u: goto label_157118;
        case 0x15711cu: goto label_15711c;
        case 0x157120u: goto label_157120;
        case 0x157124u: goto label_157124;
        case 0x157128u: goto label_157128;
        case 0x15712cu: goto label_15712c;
        case 0x157130u: goto label_157130;
        case 0x157134u: goto label_157134;
        case 0x157138u: goto label_157138;
        case 0x15713cu: goto label_15713c;
        case 0x157140u: goto label_157140;
        case 0x157144u: goto label_157144;
        case 0x157148u: goto label_157148;
        case 0x15714cu: goto label_15714c;
        case 0x157150u: goto label_157150;
        case 0x157154u: goto label_157154;
        case 0x157158u: goto label_157158;
        case 0x15715cu: goto label_15715c;
        case 0x157160u: goto label_157160;
        case 0x157164u: goto label_157164;
        case 0x157168u: goto label_157168;
        case 0x15716cu: goto label_15716c;
        case 0x157170u: goto label_157170;
        case 0x157174u: goto label_157174;
        case 0x157178u: goto label_157178;
        case 0x15717cu: goto label_15717c;
        case 0x157180u: goto label_157180;
        case 0x157184u: goto label_157184;
        case 0x157188u: goto label_157188;
        case 0x15718cu: goto label_15718c;
        case 0x157190u: goto label_157190;
        case 0x157194u: goto label_157194;
        case 0x157198u: goto label_157198;
        case 0x15719cu: goto label_15719c;
        case 0x1571a0u: goto label_1571a0;
        case 0x1571a4u: goto label_1571a4;
        case 0x1571a8u: goto label_1571a8;
        case 0x1571acu: goto label_1571ac;
        case 0x1571b0u: goto label_1571b0;
        case 0x1571b4u: goto label_1571b4;
        case 0x1571b8u: goto label_1571b8;
        case 0x1571bcu: goto label_1571bc;
        case 0x1571c0u: goto label_1571c0;
        case 0x1571c4u: goto label_1571c4;
        case 0x1571c8u: goto label_1571c8;
        case 0x1571ccu: goto label_1571cc;
        case 0x1571d0u: goto label_1571d0;
        case 0x1571d4u: goto label_1571d4;
        case 0x1571d8u: goto label_1571d8;
        case 0x1571dcu: goto label_1571dc;
        case 0x1571e0u: goto label_1571e0;
        case 0x1571e4u: goto label_1571e4;
        case 0x1571e8u: goto label_1571e8;
        case 0x1571ecu: goto label_1571ec;
        case 0x1571f0u: goto label_1571f0;
        case 0x1571f4u: goto label_1571f4;
        case 0x1571f8u: goto label_1571f8;
        case 0x1571fcu: goto label_1571fc;
        case 0x157200u: goto label_157200;
        case 0x157204u: goto label_157204;
        case 0x157208u: goto label_157208;
        case 0x15720cu: goto label_15720c;
        case 0x157210u: goto label_157210;
        case 0x157214u: goto label_157214;
        case 0x157218u: goto label_157218;
        case 0x15721cu: goto label_15721c;
        case 0x157220u: goto label_157220;
        case 0x157224u: goto label_157224;
        case 0x157228u: goto label_157228;
        case 0x15722cu: goto label_15722c;
        case 0x157230u: goto label_157230;
        case 0x157234u: goto label_157234;
        case 0x157238u: goto label_157238;
        case 0x15723cu: goto label_15723c;
        case 0x157240u: goto label_157240;
        case 0x157244u: goto label_157244;
        case 0x157248u: goto label_157248;
        case 0x15724cu: goto label_15724c;
        case 0x157250u: goto label_157250;
        case 0x157254u: goto label_157254;
        case 0x157258u: goto label_157258;
        case 0x15725cu: goto label_15725c;
        case 0x157260u: goto label_157260;
        case 0x157264u: goto label_157264;
        case 0x157268u: goto label_157268;
        case 0x15726cu: goto label_15726c;
        case 0x157270u: goto label_157270;
        case 0x157274u: goto label_157274;
        case 0x157278u: goto label_157278;
        case 0x15727cu: goto label_15727c;
        case 0x157280u: goto label_157280;
        case 0x157284u: goto label_157284;
        case 0x157288u: goto label_157288;
        case 0x15728cu: goto label_15728c;
        case 0x157290u: goto label_157290;
        case 0x157294u: goto label_157294;
        case 0x157298u: goto label_157298;
        case 0x15729cu: goto label_15729c;
        case 0x1572a0u: goto label_1572a0;
        case 0x1572a4u: goto label_1572a4;
        case 0x1572a8u: goto label_1572a8;
        case 0x1572acu: goto label_1572ac;
        case 0x1572b0u: goto label_1572b0;
        case 0x1572b4u: goto label_1572b4;
        case 0x1572b8u: goto label_1572b8;
        case 0x1572bcu: goto label_1572bc;
        case 0x1572c0u: goto label_1572c0;
        case 0x1572c4u: goto label_1572c4;
        case 0x1572c8u: goto label_1572c8;
        case 0x1572ccu: goto label_1572cc;
        case 0x1572d0u: goto label_1572d0;
        case 0x1572d4u: goto label_1572d4;
        case 0x1572d8u: goto label_1572d8;
        case 0x1572dcu: goto label_1572dc;
        case 0x1572e0u: goto label_1572e0;
        case 0x1572e4u: goto label_1572e4;
        case 0x1572e8u: goto label_1572e8;
        case 0x1572ecu: goto label_1572ec;
        case 0x1572f0u: goto label_1572f0;
        case 0x1572f4u: goto label_1572f4;
        case 0x1572f8u: goto label_1572f8;
        case 0x1572fcu: goto label_1572fc;
        case 0x157300u: goto label_157300;
        case 0x157304u: goto label_157304;
        case 0x157308u: goto label_157308;
        case 0x15730cu: goto label_15730c;
        case 0x157310u: goto label_157310;
        case 0x157314u: goto label_157314;
        case 0x157318u: goto label_157318;
        case 0x15731cu: goto label_15731c;
        case 0x157320u: goto label_157320;
        case 0x157324u: goto label_157324;
        case 0x157328u: goto label_157328;
        case 0x15732cu: goto label_15732c;
        case 0x157330u: goto label_157330;
        case 0x157334u: goto label_157334;
        case 0x157338u: goto label_157338;
        case 0x15733cu: goto label_15733c;
        case 0x157340u: goto label_157340;
        case 0x157344u: goto label_157344;
        case 0x157348u: goto label_157348;
        case 0x15734cu: goto label_15734c;
        case 0x157350u: goto label_157350;
        case 0x157354u: goto label_157354;
        case 0x157358u: goto label_157358;
        case 0x15735cu: goto label_15735c;
        case 0x157360u: goto label_157360;
        case 0x157364u: goto label_157364;
        case 0x157368u: goto label_157368;
        case 0x15736cu: goto label_15736c;
        case 0x157370u: goto label_157370;
        case 0x157374u: goto label_157374;
        case 0x157378u: goto label_157378;
        case 0x15737cu: goto label_15737c;
        case 0x157380u: goto label_157380;
        case 0x157384u: goto label_157384;
        case 0x157388u: goto label_157388;
        case 0x15738cu: goto label_15738c;
        case 0x157390u: goto label_157390;
        case 0x157394u: goto label_157394;
        case 0x157398u: goto label_157398;
        case 0x15739cu: goto label_15739c;
        case 0x1573a0u: goto label_1573a0;
        case 0x1573a4u: goto label_1573a4;
        case 0x1573a8u: goto label_1573a8;
        case 0x1573acu: goto label_1573ac;
        case 0x1573b0u: goto label_1573b0;
        case 0x1573b4u: goto label_1573b4;
        case 0x1573b8u: goto label_1573b8;
        case 0x1573bcu: goto label_1573bc;
        case 0x1573c0u: goto label_1573c0;
        case 0x1573c4u: goto label_1573c4;
        case 0x1573c8u: goto label_1573c8;
        case 0x1573ccu: goto label_1573cc;
        case 0x1573d0u: goto label_1573d0;
        case 0x1573d4u: goto label_1573d4;
        case 0x1573d8u: goto label_1573d8;
        case 0x1573dcu: goto label_1573dc;
        case 0x1573e0u: goto label_1573e0;
        case 0x1573e4u: goto label_1573e4;
        case 0x1573e8u: goto label_1573e8;
        case 0x1573ecu: goto label_1573ec;
        case 0x1573f0u: goto label_1573f0;
        case 0x1573f4u: goto label_1573f4;
        case 0x1573f8u: goto label_1573f8;
        case 0x1573fcu: goto label_1573fc;
        case 0x157400u: goto label_157400;
        case 0x157404u: goto label_157404;
        case 0x157408u: goto label_157408;
        case 0x15740cu: goto label_15740c;
        case 0x157410u: goto label_157410;
        case 0x157414u: goto label_157414;
        case 0x157418u: goto label_157418;
        case 0x15741cu: goto label_15741c;
        case 0x157420u: goto label_157420;
        case 0x157424u: goto label_157424;
        case 0x157428u: goto label_157428;
        case 0x15742cu: goto label_15742c;
        case 0x157430u: goto label_157430;
        case 0x157434u: goto label_157434;
        case 0x157438u: goto label_157438;
        case 0x15743cu: goto label_15743c;
        case 0x157440u: goto label_157440;
        case 0x157444u: goto label_157444;
        case 0x157448u: goto label_157448;
        case 0x15744cu: goto label_15744c;
        case 0x157450u: goto label_157450;
        case 0x157454u: goto label_157454;
        case 0x157458u: goto label_157458;
        case 0x15745cu: goto label_15745c;
        case 0x157460u: goto label_157460;
        case 0x157464u: goto label_157464;
        case 0x157468u: goto label_157468;
        case 0x15746cu: goto label_15746c;
        case 0x157470u: goto label_157470;
        case 0x157474u: goto label_157474;
        case 0x157478u: goto label_157478;
        case 0x15747cu: goto label_15747c;
        case 0x157480u: goto label_157480;
        case 0x157484u: goto label_157484;
        case 0x157488u: goto label_157488;
        case 0x15748cu: goto label_15748c;
        case 0x157490u: goto label_157490;
        case 0x157494u: goto label_157494;
        case 0x157498u: goto label_157498;
        case 0x15749cu: goto label_15749c;
        case 0x1574a0u: goto label_1574a0;
        case 0x1574a4u: goto label_1574a4;
        case 0x1574a8u: goto label_1574a8;
        case 0x1574acu: goto label_1574ac;
        case 0x1574b0u: goto label_1574b0;
        case 0x1574b4u: goto label_1574b4;
        case 0x1574b8u: goto label_1574b8;
        case 0x1574bcu: goto label_1574bc;
        case 0x1574c0u: goto label_1574c0;
        case 0x1574c4u: goto label_1574c4;
        case 0x1574c8u: goto label_1574c8;
        case 0x1574ccu: goto label_1574cc;
        case 0x1574d0u: goto label_1574d0;
        case 0x1574d4u: goto label_1574d4;
        case 0x1574d8u: goto label_1574d8;
        case 0x1574dcu: goto label_1574dc;
        case 0x1574e0u: goto label_1574e0;
        case 0x1574e4u: goto label_1574e4;
        case 0x1574e8u: goto label_1574e8;
        case 0x1574ecu: goto label_1574ec;
        case 0x1574f0u: goto label_1574f0;
        case 0x1574f4u: goto label_1574f4;
        case 0x1574f8u: goto label_1574f8;
        case 0x1574fcu: goto label_1574fc;
        case 0x157500u: goto label_157500;
        case 0x157504u: goto label_157504;
        case 0x157508u: goto label_157508;
        case 0x15750cu: goto label_15750c;
        case 0x157510u: goto label_157510;
        case 0x157514u: goto label_157514;
        case 0x157518u: goto label_157518;
        case 0x15751cu: goto label_15751c;
        case 0x157520u: goto label_157520;
        case 0x157524u: goto label_157524;
        case 0x157528u: goto label_157528;
        case 0x15752cu: goto label_15752c;
        case 0x157530u: goto label_157530;
        case 0x157534u: goto label_157534;
        case 0x157538u: goto label_157538;
        case 0x15753cu: goto label_15753c;
        case 0x157540u: goto label_157540;
        case 0x157544u: goto label_157544;
        case 0x157548u: goto label_157548;
        case 0x15754cu: goto label_15754c;
        case 0x157550u: goto label_157550;
        case 0x157554u: goto label_157554;
        case 0x157558u: goto label_157558;
        case 0x15755cu: goto label_15755c;
        case 0x157560u: goto label_157560;
        case 0x157564u: goto label_157564;
        case 0x157568u: goto label_157568;
        case 0x15756cu: goto label_15756c;
        case 0x157570u: goto label_157570;
        case 0x157574u: goto label_157574;
        case 0x157578u: goto label_157578;
        case 0x15757cu: goto label_15757c;
        case 0x157580u: goto label_157580;
        case 0x157584u: goto label_157584;
        case 0x157588u: goto label_157588;
        case 0x15758cu: goto label_15758c;
        case 0x157590u: goto label_157590;
        case 0x157594u: goto label_157594;
        case 0x157598u: goto label_157598;
        case 0x15759cu: goto label_15759c;
        case 0x1575a0u: goto label_1575a0;
        case 0x1575a4u: goto label_1575a4;
        case 0x1575a8u: goto label_1575a8;
        case 0x1575acu: goto label_1575ac;
        case 0x1575b0u: goto label_1575b0;
        case 0x1575b4u: goto label_1575b4;
        case 0x1575b8u: goto label_1575b8;
        case 0x1575bcu: goto label_1575bc;
        case 0x1575c0u: goto label_1575c0;
        case 0x1575c4u: goto label_1575c4;
        case 0x1575c8u: goto label_1575c8;
        case 0x1575ccu: goto label_1575cc;
        case 0x1575d0u: goto label_1575d0;
        case 0x1575d4u: goto label_1575d4;
        case 0x1575d8u: goto label_1575d8;
        case 0x1575dcu: goto label_1575dc;
        case 0x1575e0u: goto label_1575e0;
        case 0x1575e4u: goto label_1575e4;
        case 0x1575e8u: goto label_1575e8;
        case 0x1575ecu: goto label_1575ec;
        case 0x1575f0u: goto label_1575f0;
        case 0x1575f4u: goto label_1575f4;
        case 0x1575f8u: goto label_1575f8;
        case 0x1575fcu: goto label_1575fc;
        case 0x157600u: goto label_157600;
        case 0x157604u: goto label_157604;
        case 0x157608u: goto label_157608;
        case 0x15760cu: goto label_15760c;
        case 0x157610u: goto label_157610;
        case 0x157614u: goto label_157614;
        case 0x157618u: goto label_157618;
        case 0x15761cu: goto label_15761c;
        case 0x157620u: goto label_157620;
        case 0x157624u: goto label_157624;
        case 0x157628u: goto label_157628;
        case 0x15762cu: goto label_15762c;
        case 0x157630u: goto label_157630;
        case 0x157634u: goto label_157634;
        case 0x157638u: goto label_157638;
        case 0x15763cu: goto label_15763c;
        case 0x157640u: goto label_157640;
        case 0x157644u: goto label_157644;
        case 0x157648u: goto label_157648;
        case 0x15764cu: goto label_15764c;
        case 0x157650u: goto label_157650;
        case 0x157654u: goto label_157654;
        case 0x157658u: goto label_157658;
        case 0x15765cu: goto label_15765c;
        case 0x157660u: goto label_157660;
        case 0x157664u: goto label_157664;
        case 0x157668u: goto label_157668;
        case 0x15766cu: goto label_15766c;
        case 0x157670u: goto label_157670;
        case 0x157674u: goto label_157674;
        case 0x157678u: goto label_157678;
        case 0x15767cu: goto label_15767c;
        case 0x157680u: goto label_157680;
        case 0x157684u: goto label_157684;
        case 0x157688u: goto label_157688;
        case 0x15768cu: goto label_15768c;
        case 0x157690u: goto label_157690;
        case 0x157694u: goto label_157694;
        case 0x157698u: goto label_157698;
        case 0x15769cu: goto label_15769c;
        case 0x1576a0u: goto label_1576a0;
        case 0x1576a4u: goto label_1576a4;
        case 0x1576a8u: goto label_1576a8;
        case 0x1576acu: goto label_1576ac;
        case 0x1576b0u: goto label_1576b0;
        case 0x1576b4u: goto label_1576b4;
        case 0x1576b8u: goto label_1576b8;
        case 0x1576bcu: goto label_1576bc;
        case 0x1576c0u: goto label_1576c0;
        case 0x1576c4u: goto label_1576c4;
        case 0x1576c8u: goto label_1576c8;
        case 0x1576ccu: goto label_1576cc;
        case 0x1576d0u: goto label_1576d0;
        case 0x1576d4u: goto label_1576d4;
        case 0x1576d8u: goto label_1576d8;
        case 0x1576dcu: goto label_1576dc;
        case 0x1576e0u: goto label_1576e0;
        case 0x1576e4u: goto label_1576e4;
        case 0x1576e8u: goto label_1576e8;
        case 0x1576ecu: goto label_1576ec;
        case 0x1576f0u: goto label_1576f0;
        case 0x1576f4u: goto label_1576f4;
        case 0x1576f8u: goto label_1576f8;
        case 0x1576fcu: goto label_1576fc;
        case 0x157700u: goto label_157700;
        case 0x157704u: goto label_157704;
        case 0x157708u: goto label_157708;
        case 0x15770cu: goto label_15770c;
        case 0x157710u: goto label_157710;
        case 0x157714u: goto label_157714;
        case 0x157718u: goto label_157718;
        case 0x15771cu: goto label_15771c;
        case 0x157720u: goto label_157720;
        case 0x157724u: goto label_157724;
        case 0x157728u: goto label_157728;
        case 0x15772cu: goto label_15772c;
        case 0x157730u: goto label_157730;
        case 0x157734u: goto label_157734;
        case 0x157738u: goto label_157738;
        case 0x15773cu: goto label_15773c;
        case 0x157740u: goto label_157740;
        case 0x157744u: goto label_157744;
        case 0x157748u: goto label_157748;
        case 0x15774cu: goto label_15774c;
        case 0x157750u: goto label_157750;
        case 0x157754u: goto label_157754;
        case 0x157758u: goto label_157758;
        case 0x15775cu: goto label_15775c;
        case 0x157760u: goto label_157760;
        case 0x157764u: goto label_157764;
        case 0x157768u: goto label_157768;
        case 0x15776cu: goto label_15776c;
        case 0x157770u: goto label_157770;
        case 0x157774u: goto label_157774;
        case 0x157778u: goto label_157778;
        case 0x15777cu: goto label_15777c;
        case 0x157780u: goto label_157780;
        case 0x157784u: goto label_157784;
        case 0x157788u: goto label_157788;
        case 0x15778cu: goto label_15778c;
        case 0x157790u: goto label_157790;
        case 0x157794u: goto label_157794;
        case 0x157798u: goto label_157798;
        case 0x15779cu: goto label_15779c;
        case 0x1577a0u: goto label_1577a0;
        case 0x1577a4u: goto label_1577a4;
        case 0x1577a8u: goto label_1577a8;
        case 0x1577acu: goto label_1577ac;
        case 0x1577b0u: goto label_1577b0;
        case 0x1577b4u: goto label_1577b4;
        case 0x1577b8u: goto label_1577b8;
        case 0x1577bcu: goto label_1577bc;
        case 0x1577c0u: goto label_1577c0;
        case 0x1577c4u: goto label_1577c4;
        case 0x1577c8u: goto label_1577c8;
        case 0x1577ccu: goto label_1577cc;
        case 0x1577d0u: goto label_1577d0;
        case 0x1577d4u: goto label_1577d4;
        case 0x1577d8u: goto label_1577d8;
        case 0x1577dcu: goto label_1577dc;
        case 0x1577e0u: goto label_1577e0;
        case 0x1577e4u: goto label_1577e4;
        case 0x1577e8u: goto label_1577e8;
        case 0x1577ecu: goto label_1577ec;
        case 0x1577f0u: goto label_1577f0;
        case 0x1577f4u: goto label_1577f4;
        case 0x1577f8u: goto label_1577f8;
        case 0x1577fcu: goto label_1577fc;
        case 0x157800u: goto label_157800;
        case 0x157804u: goto label_157804;
        case 0x157808u: goto label_157808;
        case 0x15780cu: goto label_15780c;
        case 0x157810u: goto label_157810;
        case 0x157814u: goto label_157814;
        case 0x157818u: goto label_157818;
        case 0x15781cu: goto label_15781c;
        case 0x157820u: goto label_157820;
        case 0x157824u: goto label_157824;
        case 0x157828u: goto label_157828;
        case 0x15782cu: goto label_15782c;
        case 0x157830u: goto label_157830;
        case 0x157834u: goto label_157834;
        case 0x157838u: goto label_157838;
        case 0x15783cu: goto label_15783c;
        default: return;
    }

label_157070:
    // 0x157070: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x157070u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_157074:
    // 0x157074: 0xad2d01f8  sw          $t5, 0x1F8($t1)
    ctx->pc = 0x157074u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 504), GPR_U32(ctx, 13));
label_157078:
    // 0x157078: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x157078u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_15707c:
    // 0x15707c: 0xad2d0220  sw          $t5, 0x220($t1)
    ctx->pc = 0x15707cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 544), GPR_U32(ctx, 13));
label_157080:
    // 0x157080: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x157080u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_157084:
    // 0x157084: 0xad2d0224  sw          $t5, 0x224($t1)
    ctx->pc = 0x157084u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 548), GPR_U32(ctx, 13));
label_157088:
    // 0x157088: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x157088u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_15708c:
    // 0x15708c: 0xad2d0228  sw          $t5, 0x228($t1)
    ctx->pc = 0x15708cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 552), GPR_U32(ctx, 13));
label_157090:
    // 0x157090: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x157090u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_157094:
    // 0x157094: 0xad2d0250  sw          $t5, 0x250($t1)
    ctx->pc = 0x157094u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 592), GPR_U32(ctx, 13));
label_157098:
    // 0x157098: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x157098u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_15709c:
    // 0x15709c: 0xad2d0254  sw          $t5, 0x254($t1)
    ctx->pc = 0x15709cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 596), GPR_U32(ctx, 13));
label_1570a0:
    // 0x1570a0: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x1570a0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_1570a4:
    // 0x1570a4: 0xad2d0258  sw          $t5, 0x258($t1)
    ctx->pc = 0x1570a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 600), GPR_U32(ctx, 13));
label_1570a8:
    // 0x1570a8: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x1570a8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1570ac:
    // 0x1570ac: 0xad2d0280  sw          $t5, 0x280($t1)
    ctx->pc = 0x1570acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 640), GPR_U32(ctx, 13));
label_1570b0:
    // 0x1570b0: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x1570b0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_1570b4:
    // 0x1570b4: 0xad2d0284  sw          $t5, 0x284($t1)
    ctx->pc = 0x1570b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 644), GPR_U32(ctx, 13));
label_1570b8:
    // 0x1570b8: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x1570b8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_1570bc:
    // 0x1570bc: 0xad2d0288  sw          $t5, 0x288($t1)
    ctx->pc = 0x1570bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 648), GPR_U32(ctx, 13));
label_1570c0:
    // 0x1570c0: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x1570c0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1570c4:
    // 0x1570c4: 0xad2d02b0  sw          $t5, 0x2B0($t1)
    ctx->pc = 0x1570c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 688), GPR_U32(ctx, 13));
label_1570c8:
    // 0x1570c8: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x1570c8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_1570cc:
    // 0x1570cc: 0xad2d02b4  sw          $t5, 0x2B4($t1)
    ctx->pc = 0x1570ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 692), GPR_U32(ctx, 13));
label_1570d0:
    // 0x1570d0: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x1570d0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_1570d4:
    // 0x1570d4: 0xad2d02b8  sw          $t5, 0x2B8($t1)
    ctx->pc = 0x1570d4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 696), GPR_U32(ctx, 13));
label_1570d8:
    // 0x1570d8: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x1570d8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1570dc:
    // 0x1570dc: 0xad2d02e0  sw          $t5, 0x2E0($t1)
    ctx->pc = 0x1570dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 736), GPR_U32(ctx, 13));
label_1570e0:
    // 0x1570e0: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x1570e0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_1570e4:
    // 0x1570e4: 0xad2d02e4  sw          $t5, 0x2E4($t1)
    ctx->pc = 0x1570e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 740), GPR_U32(ctx, 13));
label_1570e8:
    // 0x1570e8: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x1570e8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_1570ec:
    // 0x1570ec: 0x1580ffcb  bnez        $t4, . + 4 + (-0x35 << 2)
label_1570f0:
    if (ctx->pc == 0x1570F0u) {
        ctx->pc = 0x1570F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570ECu;
        // 0x1570f0: 0xad2d02e8  sw          $t5, 0x2E8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 744), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1570F4u;
        goto label_1570f4;
    }
    ctx->pc = 0x1570ECu;
    {
        const bool branch_taken_0x1570ec = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1570F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570ECu;
        // 0x1570f0: 0xad2d02e8  sw          $t5, 0x2E8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 744), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570ec) {
            ctx->pc = 0x15701Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x15701c; return; }
        }
    }
    ctx->pc = 0x1570F4u;
label_1570f4:
    // 0x1570f4: 0x29410022  slti        $at, $t2, 0x22
    ctx->pc = 0x1570f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)34) ? 1 : 0);
label_1570f8:
    // 0x1570f8: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_1570fc:
    if (ctx->pc == 0x1570FCu) {
        ctx->pc = 0x1570FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570F8u;
        // 0x1570fc: 0xa2840  sll         $a1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157100u;
        goto label_157100;
    }
    ctx->pc = 0x1570F8u;
    {
        const bool branch_taken_0x1570f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1570FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570F8u;
        // 0x1570fc: 0xa2840  sll         $a1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570f8) {
            ctx->pc = 0x157134u;
            goto label_157134;
        }
    }
    ctx->pc = 0x157100u;
label_157100:
    // 0x157100: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x157100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_157104:
    // 0x157104: 0x56100  sll         $t4, $a1, 4
    ctx->pc = 0x157104u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_157108:
    // 0x157108: 0x90e90000  lbu         $t1, 0x0($a3)
    ctx->pc = 0x157108u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_15710c:
    // 0x15710c: 0x10c6821  addu        $t5, $t0, $t4
    ctx->pc = 0x15710cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
label_157110:
    // 0x157110: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x157110u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_157114:
    // 0x157114: 0x29450022  slti        $a1, $t2, 0x22
    ctx->pc = 0x157114u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)34) ? 1 : 0);
label_157118:
    // 0x157118: 0x258c0030  addiu       $t4, $t4, 0x30
    ctx->pc = 0x157118u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 48));
label_15711c:
    // 0x15711c: 0xada90190  sw          $t1, 0x190($t5)
    ctx->pc = 0x15711cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 400), GPR_U32(ctx, 9));
label_157120:
    // 0x157120: 0x90e90001  lbu         $t1, 0x1($a3)
    ctx->pc = 0x157120u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_157124:
    // 0x157124: 0xada90194  sw          $t1, 0x194($t5)
    ctx->pc = 0x157124u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 404), GPR_U32(ctx, 9));
label_157128:
    // 0x157128: 0x90e90002  lbu         $t1, 0x2($a3)
    ctx->pc = 0x157128u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_15712c:
    // 0x15712c: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
label_157130:
    if (ctx->pc == 0x157130u) {
        ctx->pc = 0x157130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15712Cu;
        // 0x157130: 0xada90198  sw          $t1, 0x198($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 408), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157134u;
        goto label_157134;
    }
    ctx->pc = 0x15712Cu;
    {
        const bool branch_taken_0x15712c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x157130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15712Cu;
        // 0x157130: 0xada90198  sw          $t1, 0x198($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 408), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15712c) {
            ctx->pc = 0x157108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157108;
        }
    }
    ctx->pc = 0x157134u;
label_157134:
    // 0x157134: 0x0  nop
    ctx->pc = 0x157134u;
    // NOP
label_157138:
    // 0x157138: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x157138u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_15713c:
    // 0x15713c: 0x29650002  slti        $a1, $t3, 0x2
    ctx->pc = 0x15713cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
label_157140:
    // 0x157140: 0x14a0ffad  bnez        $a1, . + 4 + (-0x53 << 2)
label_157144:
    if (ctx->pc == 0x157144u) {
        ctx->pc = 0x157144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157140u;
        // 0x157144: 0x24c606c0  addiu       $a2, $a2, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157148u;
        goto label_157148;
    }
    ctx->pc = 0x157140u;
    {
        const bool branch_taken_0x157140 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x157144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157140u;
        // 0x157144: 0x24c606c0  addiu       $a2, $a2, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157140) {
            ctx->pc = 0x156FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x156ff8; return; }
        }
    }
    ctx->pc = 0x157148u;
label_157148:
    // 0x157148: 0x3e00008  jr          $ra
label_15714c:
    if (ctx->pc == 0x15714Cu) {
        ctx->pc = 0x157150u;
        goto label_157150;
    }
    ctx->pc = 0x157148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157150u;
label_157150:
    // 0x157150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x157150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_157154:
    // 0x157154: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x157154u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157158:
    // 0x157158: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x157158u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15715c:
    // 0x15715c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x15715cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157160:
    // 0x157160: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x157160u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_157164:
    // 0x157164: 0x27a70000  addiu       $a3, $sp, 0x0
    ctx->pc = 0x157164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_157168:
    // 0x157168: 0x24c61240  addiu       $a2, $a2, 0x1240
    ctx->pc = 0x157168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4672));
label_15716c:
    // 0x15716c: 0xe95821  addu        $t3, $a3, $t1
    ctx->pc = 0x15716cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_157170:
    // 0x157170: 0xca6021  addu        $t4, $a2, $t2
    ctx->pc = 0x157170u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_157174:
    // 0x157174: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x157174u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
label_157178:
    // 0x157178: 0x1801821  addu        $v1, $t4, $zero
    ctx->pc = 0x157178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 0)));
label_15717c:
    // 0x15717c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x15717cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_157180:
    // 0x157180: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x157180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_157184:
    // 0x157184: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x157184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_157188:
    // 0x157188: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x157188u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_15718c:
    // 0x15718c: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x15718cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157190:
    // 0x157190: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x157190u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
label_157194:
    // 0x157194: 0x29030004  slti        $v1, $t0, 0x4
    ctx->pc = 0x157194u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
label_157198:
    // 0x157198: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x157198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_15719c:
    // 0x15719c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15719cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1571a0:
    // 0x1571a0: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x1571a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_1571a4:
    // 0x1571a4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1571a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1571a8:
    // 0x1571a8: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x1571a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1571ac:
    // 0x1571ac: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x1571acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1571b0:
    // 0x1571b0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1571b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1571b4:
    // 0x1571b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1571b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1571b8:
    // 0x1571b8: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x1571b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_1571bc:
    // 0x1571bc: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x1571bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1571c0:
    // 0x1571c0: 0xc5810008  lwc1        $f1, 0x8($t4)
    ctx->pc = 0x1571c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1571c4:
    // 0x1571c4: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x1571c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1571c8:
    // 0x1571c8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1571c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1571cc:
    // 0x1571cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1571ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1571d0:
    // 0x1571d0: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x1571d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_1571d4:
    // 0x1571d4: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x1571d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1571d8:
    // 0x1571d8: 0xc581000c  lwc1        $f1, 0xC($t4)
    ctx->pc = 0x1571d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1571dc:
    // 0x1571dc: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x1571dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1571e0:
    // 0x1571e0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1571e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1571e4:
    // 0x1571e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1571e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1571e8:
    // 0x1571e8: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x1571e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_1571ec:
    // 0x1571ec: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x1571ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1571f0:
    // 0x1571f0: 0xc5810010  lwc1        $f1, 0x10($t4)
    ctx->pc = 0x1571f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1571f4:
    // 0x1571f4: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x1571f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1571f8:
    // 0x1571f8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1571f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1571fc:
    // 0x1571fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1571fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_157200:
    // 0x157200: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x157200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_157204:
    // 0x157204: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x157204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_157208:
    // 0x157208: 0xc5810014  lwc1        $f1, 0x14($t4)
    ctx->pc = 0x157208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15720c:
    // 0x15720c: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x15720cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157210:
    // 0x157210: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x157210u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_157214:
    // 0x157214: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_157218:
    // 0x157218: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x157218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_15721c:
    // 0x15721c: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x15721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_157220:
    // 0x157220: 0xc5810018  lwc1        $f1, 0x18($t4)
    ctx->pc = 0x157220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_157224:
    // 0x157224: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x157224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157228:
    // 0x157228: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x157228u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_15722c:
    // 0x15722c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15722cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_157230:
    // 0x157230: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x157230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_157234:
    // 0x157234: 0xc581001c  lwc1        $f1, 0x1C($t4)
    ctx->pc = 0x157234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_157238:
    // 0x157238: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x157238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15723c:
    // 0x15723c: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x15723cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157240:
    // 0x157240: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x157240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_157244:
    // 0x157244: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_157248:
    // 0x157248: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
label_15724c:
    if (ctx->pc == 0x15724Cu) {
        ctx->pc = 0x15724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157248u;
        // 0x15724c: 0xe5600000  swc1        $f0, 0x0($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x157250u;
        goto label_157250;
    }
    ctx->pc = 0x157248u;
    {
        const bool branch_taken_0x157248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157248u;
        // 0x15724c: 0xe5600000  swc1        $f0, 0x0($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157248) {
            ctx->pc = 0x15716Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15716c;
        }
    }
    ctx->pc = 0x157250u;
label_157250:
    // 0x157250: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157254:
    // 0x157254: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x157254u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_157258:
    // 0x157258: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x157258u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
label_15725c:
    // 0x15725c: 0x27a80000  addiu       $t0, $sp, 0x0
    ctx->pc = 0x15725cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_157260:
    // 0x157260: 0x24e712c0  addiu       $a3, $a3, 0x12C0
    ctx->pc = 0x157260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4800));
label_157264:
    // 0x157264: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x157264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_157268:
    // 0x157268: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x157268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15726c:
    // 0x15726c: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
label_157270:
    if (ctx->pc == 0x157270u) {
        ctx->pc = 0x157270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15726Cu;
        // 0x157270: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157274u;
        goto label_157274;
    }
    ctx->pc = 0x15726Cu;
    {
        const bool branch_taken_0x15726c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x157270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15726Cu;
        // 0x157270: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15726c) {
            ctx->pc = 0x157374u;
            goto label_157374;
        }
    }
    ctx->pc = 0x157274u;
label_157274:
    // 0x157274: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x157274u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_157278:
    // 0x157278: 0x1420002c  bnez        $at, . + 4 + (0x2C << 2)
label_15727c:
    if (ctx->pc == 0x15727Cu) {
        ctx->pc = 0x15727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157278u;
        // 0x15727c: 0x246afff8  addiu       $t2, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157280u;
        goto label_157280;
    }
    ctx->pc = 0x157278u;
    {
        const bool branch_taken_0x157278 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157278u;
        // 0x15727c: 0x246afff8  addiu       $t2, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157278) {
            ctx->pc = 0x15732Cu;
            goto label_15732c;
        }
    }
    ctx->pc = 0x157280u;
label_157280:
    // 0x157280: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x157280u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157284:
    // 0x157284: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x157284u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157288:
    // 0x157288: 0xed2021  addu        $a0, $a3, $t5
    ctx->pc = 0x157288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
label_15728c:
    // 0x15728c: 0x24860000  addiu       $a2, $a0, 0x0
    ctx->pc = 0x15728cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_157290:
    // 0x157290: 0x10c7821  addu        $t7, $t0, $t4
    ctx->pc = 0x157290u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
label_157294:
    // 0x157294: 0xcb7021  addu        $t6, $a2, $t3
    ctx->pc = 0x157294u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_157298:
    // 0x157298: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x157298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_15729c:
    // 0x15729c: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x15729cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1572a0:
    // 0x1572a0: 0x12a202a  slt         $a0, $t1, $t2
    ctx->pc = 0x1572a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_1572a4:
    // 0x1572a4: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x1572a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1572a8:
    // 0x1572a8: 0x256b0080  addiu       $t3, $t3, 0x80
    ctx->pc = 0x1572a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 128));
label_1572ac:
    // 0x1572ac: 0xc5e10004  lwc1        $f1, 0x4($t7)
    ctx->pc = 0x1572acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1572b0:
    // 0x1572b0: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x1572b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
label_1572b4:
    // 0x1572b4: 0xc5c00010  lwc1        $f0, 0x10($t6)
    ctx->pc = 0x1572b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1572b8:
    // 0x1572b8: 0xc5eb0008  lwc1        $f11, 0x8($t7)
    ctx->pc = 0x1572b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1572bc:
    // 0x1572bc: 0xc5ca0020  lwc1        $f10, 0x20($t6)
    ctx->pc = 0x1572bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1572c0:
    // 0x1572c0: 0xc5e9000c  lwc1        $f9, 0xC($t7)
    ctx->pc = 0x1572c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1572c4:
    // 0x1572c4: 0x46021b42  mul.s       $f13, $f3, $f2
    ctx->pc = 0x1572c4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1572c8:
    // 0x1572c8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1572c8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1572cc:
    // 0x1572cc: 0x460d7380  add.s       $f14, $f14, $f13
    ctx->pc = 0x1572ccu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[13]);
label_1572d0:
    // 0x1572d0: 0xc5c80030  lwc1        $f8, 0x30($t6)
    ctx->pc = 0x1572d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1572d4:
    // 0x1572d4: 0x460a5a82  mul.s       $f10, $f11, $f10
    ctx->pc = 0x1572d4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
label_1572d8:
    // 0x1572d8: 0x460c7380  add.s       $f14, $f14, $f12
    ctx->pc = 0x1572d8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[12]);
label_1572dc:
    // 0x1572dc: 0xc5e70010  lwc1        $f7, 0x10($t7)
    ctx->pc = 0x1572dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1572e0:
    // 0x1572e0: 0xc5c60040  lwc1        $f6, 0x40($t6)
    ctx->pc = 0x1572e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1572e4:
    // 0x1572e4: 0x46084a02  mul.s       $f8, $f9, $f8
    ctx->pc = 0x1572e4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
label_1572e8:
    // 0x1572e8: 0x460a7380  add.s       $f14, $f14, $f10
    ctx->pc = 0x1572e8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[10]);
label_1572ec:
    // 0x1572ec: 0xc5e50014  lwc1        $f5, 0x14($t7)
    ctx->pc = 0x1572ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1572f0:
    // 0x1572f0: 0xc5c40050  lwc1        $f4, 0x50($t6)
    ctx->pc = 0x1572f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1572f4:
    // 0x1572f4: 0x46063982  mul.s       $f6, $f7, $f6
    ctx->pc = 0x1572f4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
label_1572f8:
    // 0x1572f8: 0x46087380  add.s       $f14, $f14, $f8
    ctx->pc = 0x1572f8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[8]);
label_1572fc:
    // 0x1572fc: 0xc5e30018  lwc1        $f3, 0x18($t7)
    ctx->pc = 0x1572fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_157300:
    // 0x157300: 0xc5c20060  lwc1        $f2, 0x60($t6)
    ctx->pc = 0x157300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_157304:
    // 0x157304: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x157304u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_157308:
    // 0x157308: 0x46067380  add.s       $f14, $f14, $f6
    ctx->pc = 0x157308u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[6]);
label_15730c:
    // 0x15730c: 0xc5e1001c  lwc1        $f1, 0x1C($t7)
    ctx->pc = 0x15730cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_157310:
    // 0x157310: 0xc5c00070  lwc1        $f0, 0x70($t6)
    ctx->pc = 0x157310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157314:
    // 0x157314: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x157314u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_157318:
    // 0x157318: 0x46047380  add.s       $f14, $f14, $f4
    ctx->pc = 0x157318u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[4]);
label_15731c:
    // 0x15731c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15731cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_157320:
    // 0x157320: 0x46027380  add.s       $f14, $f14, $f2
    ctx->pc = 0x157320u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[2]);
label_157324:
    // 0x157324: 0x1480ffda  bnez        $a0, . + 4 + (-0x26 << 2)
label_157328:
    if (ctx->pc == 0x157328u) {
        ctx->pc = 0x157328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157324u;
        // 0x157328: 0x46007380  add.s       $f14, $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15732Cu;
        goto label_15732c;
    }
    ctx->pc = 0x157324u;
    {
        const bool branch_taken_0x157324 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x157328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157324u;
        // 0x157328: 0x46007380  add.s       $f14, $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157324) {
            ctx->pc = 0x157290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157290;
        }
    }
    ctx->pc = 0x15732Cu;
label_15732c:
    // 0x15732c: 0x0  nop
    ctx->pc = 0x15732cu;
    // NOP
label_157330:
    // 0x157330: 0x123082a  slt         $at, $t1, $v1
    ctx->pc = 0x157330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_157334:
    // 0x157334: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_157338:
    if (ctx->pc == 0x157338u) {
        ctx->pc = 0x157338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157334u;
        // 0x157338: 0x95100  sll         $t2, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15733Cu;
        goto label_15733c;
    }
    ctx->pc = 0x157334u;
    {
        const bool branch_taken_0x157334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x157338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157334u;
        // 0x157338: 0x95100  sll         $t2, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157334) {
            ctx->pc = 0x157374u;
            goto label_157374;
        }
    }
    ctx->pc = 0x15733Cu;
label_15733c:
    // 0x15733c: 0x95880  sll         $t3, $t1, 2
    ctx->pc = 0x15733cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_157340:
    // 0x157340: 0xed2021  addu        $a0, $a3, $t5
    ctx->pc = 0x157340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
label_157344:
    // 0x157344: 0x24860000  addiu       $a2, $a0, 0x0
    ctx->pc = 0x157344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_157348:
    // 0x157348: 0x10b2021  addu        $a0, $t0, $t3
    ctx->pc = 0x157348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
label_15734c:
    // 0x15734c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x15734cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_157350:
    // 0x157350: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x157350u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_157354:
    // 0x157354: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x157354u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_157358:
    // 0x157358: 0xca2021  addu        $a0, $a2, $t2
    ctx->pc = 0x157358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_15735c:
    // 0x15735c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x15735cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157360:
    // 0x157360: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x157360u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_157364:
    // 0x157364: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x157364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_157368:
    // 0x157368: 0x123202a  slt         $a0, $t1, $v1
    ctx->pc = 0x157368u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15736c:
    // 0x15736c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
label_157370:
    if (ctx->pc == 0x157370u) {
        ctx->pc = 0x157370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15736Cu;
        // 0x157370: 0x46007380  add.s       $f14, $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x157374u;
        goto label_157374;
    }
    ctx->pc = 0x15736Cu;
    {
        const bool branch_taken_0x15736c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x157370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15736Cu;
        // 0x157370: 0x46007380  add.s       $f14, $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15736c) {
            ctx->pc = 0x157348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157348;
        }
    }
    ctx->pc = 0x157374u;
label_157374:
    // 0x157374: 0x0  nop
    ctx->pc = 0x157374u;
    // NOP
label_157378:
    // 0x157378: 0x10d3021  addu        $a2, $t0, $t5
    ctx->pc = 0x157378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
label_15737c:
    // 0x15737c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x15737cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157380:
    // 0x157380: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x157380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_157384:
    // 0x157384: 0x28640004  slti        $a0, $v1, 0x4
    ctx->pc = 0x157384u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_157388:
    // 0x157388: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x157388u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_15738c:
    // 0x15738c: 0x460e0001  sub.s       $f0, $f0, $f14
    ctx->pc = 0x15738cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
label_157390:
    // 0x157390: 0x1480ffb4  bnez        $a0, . + 4 + (-0x4C << 2)
label_157394:
    if (ctx->pc == 0x157394u) {
        ctx->pc = 0x157394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157390u;
        // 0x157394: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x157398u;
        goto label_157398;
    }
    ctx->pc = 0x157390u;
    {
        const bool branch_taken_0x157390 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x157394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157390u;
        // 0x157394: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157390) {
            ctx->pc = 0x157264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157264;
        }
    }
    ctx->pc = 0x157398u;
label_157398:
    // 0x157398: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x157398u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15739c:
    // 0x15739c: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x15739cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1573a0:
    // 0x1573a0: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x1573a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1573a4:
    // 0x1573a4: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1573a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
label_1573a8:
    // 0x1573a8: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1573a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1573ac:
    // 0x1573ac: 0x24e712c0  addiu       $a3, $a3, 0x12C0
    ctx->pc = 0x1573acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4800));
label_1573b0:
    // 0x1573b0: 0x27a60000  addiu       $a2, $sp, 0x0
    ctx->pc = 0x1573b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_1573b4:
    // 0x1573b4: 0x258d0001  addiu       $t5, $t4, 0x1
    ctx->pc = 0x1573b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_1573b8:
    // 0x1573b8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1573b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1573bc:
    // 0x1573bc: 0x29a10004  slti        $at, $t5, 0x4
    ctx->pc = 0x1573bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)4) ? 1 : 0);
label_1573c0:
    // 0x1573c0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_1573c4:
    if (ctx->pc == 0x1573C4u) {
        ctx->pc = 0x1573C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573C0u;
        // 0x1573c4: 0xd4880  sll         $t1, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1573C8u;
        goto label_1573c8;
    }
    ctx->pc = 0x1573C0u;
    {
        const bool branch_taken_0x1573c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1573C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573C0u;
        // 0x1573c4: 0xd4880  sll         $t1, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573c0) {
            ctx->pc = 0x1573F8u;
            goto label_1573f8;
        }
    }
    ctx->pc = 0x1573C8u;
label_1573c8:
    // 0x1573c8: 0xea1821  addu        $v1, $a3, $t2
    ctx->pc = 0x1573c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_1573cc:
    // 0x1573cc: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x1573ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1573d0:
    // 0x1573d0: 0x1091821  addu        $v1, $t0, $t1
    ctx->pc = 0x1573d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_1573d4:
    // 0x1573d4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1573d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1573d8:
    // 0x1573d8: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1573d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_1573dc:
    // 0x1573dc: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x1573dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_1573e0:
    // 0x1573e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1573e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1573e4:
    // 0x1573e4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1573e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_1573e8:
    // 0x1573e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1573e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1573ec:
    // 0x1573ec: 0x29a30004  slti        $v1, $t5, 0x4
    ctx->pc = 0x1573ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)4) ? 1 : 0);
label_1573f0:
    // 0x1573f0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1573f4:
    if (ctx->pc == 0x1573F4u) {
        ctx->pc = 0x1573F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573F0u;
        // 0x1573f4: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1573F8u;
        goto label_1573f8;
    }
    ctx->pc = 0x1573F0u;
    {
        const bool branch_taken_0x1573f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1573F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573F0u;
        // 0x1573f4: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573f0) {
            ctx->pc = 0x1573D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1573d0;
        }
    }
    ctx->pc = 0x1573F8u;
label_1573f8:
    // 0x1573f8: 0xcb1821  addu        $v1, $a2, $t3
    ctx->pc = 0x1573f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_1573fc:
    // 0x1573fc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1573fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_157400:
    // 0x157400: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x157400u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_157404:
    // 0x157404: 0xea1821  addu        $v1, $a3, $t2
    ctx->pc = 0x157404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_157408:
    // 0x157408: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x157408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_15740c:
    // 0x15740c: 0x254afff0  addiu       $t2, $t2, -0x10
    ctx->pc = 0x15740cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967280));
label_157410:
    // 0x157410: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x157410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_157414:
    // 0x157414: 0x10b1821  addu        $v1, $t0, $t3
    ctx->pc = 0x157414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
label_157418:
    // 0x157418: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x157418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15741c:
    // 0x15741c: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x15741cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
label_157420:
    // 0x157420: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x157420u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_157424:
    // 0x157424: 0x0  nop
    ctx->pc = 0x157424u;
    // NOP
label_157428:
    // 0x157428: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x157428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_15742c:
    // 0x15742c: 0x581ffe1  bgez        $t4, . + 4 + (-0x1F << 2)
label_157430:
    if (ctx->pc == 0x157430u) {
        ctx->pc = 0x157430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15742Cu;
        // 0x157430: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x157434u;
        goto label_157434;
    }
    ctx->pc = 0x15742Cu;
    {
        const bool branch_taken_0x15742c = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x157430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15742Cu;
        // 0x157430: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15742c) {
            ctx->pc = 0x1573B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1573b4;
        }
    }
    ctx->pc = 0x157434u;
label_157434:
    // 0x157434: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x157434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157438:
    // 0x157438: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x157438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_15743c:
    // 0x15743c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x15743cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157440:
    // 0x157440: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x157440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_157444:
    // 0x157444: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x157444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157448:
    // 0x157448: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x157448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_15744c:
    // 0x15744c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x15744cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157450:
    // 0x157450: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x157450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_157454:
    // 0x157454: 0x3e00008  jr          $ra
label_157458:
    if (ctx->pc == 0x157458u) {
        ctx->pc = 0x157458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157454u;
        // 0x157458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15745Cu;
        goto label_15745c;
    }
    ctx->pc = 0x157454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157454u;
        // 0x157458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15745Cu;
label_15745c:
    // 0x15745c: 0x0  nop
    ctx->pc = 0x15745cu;
    // NOP
label_157460:
    // 0x157460: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x157460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_157464:
    // 0x157464: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x157464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_157468:
    // 0x157468: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x157468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15746c:
    // 0x15746c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15746cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_157470:
    // 0x157470: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x157470u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157474:
    // 0x157474: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x157474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_157478:
    // 0x157478: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x157478u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15747c:
    // 0x15747c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15747cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_157480:
    // 0x157480: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x157480u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157484:
    // 0x157484: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x157484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_157488:
    // 0x157488: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x157488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15748c:
    // 0x15748c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15748cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_157490:
    // 0x157490: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x157490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157494:
    // 0x157494: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_157498:
    // 0x157498: 0xc0660dc  jal         func_198370
label_15749c:
    if (ctx->pc == 0x15749Cu) {
        ctx->pc = 0x15749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157498u;
        // 0x15749c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1574A0u;
        goto label_1574a0;
    }
    ctx->pc = 0x157498u;
    SET_GPR_U32(ctx, 31, 0x1574A0u);
    ctx->pc = 0x15749Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157498u;
    // 0x15749c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198370u;
    { ctx->pc = 0x198370; return; }
    ctx->pc = 0x1574A0u;
label_1574a0:
    // 0x1574a0: 0xc0560b8  jal         func_1582E0
label_1574a4:
    if (ctx->pc == 0x1574A4u) {
        ctx->pc = 0x1574A8u;
        goto label_1574a8;
    }
    ctx->pc = 0x1574A0u;
    SET_GPR_U32(ctx, 31, 0x1574A8u);
    ctx->pc = 0x1582E0u;
    { ctx->pc = 0x1582e0; return; }
    ctx->pc = 0x1574A8u;
label_1574a8:
    // 0x1574a8: 0xc080808  jal         func_202020
label_1574ac:
    if (ctx->pc == 0x1574ACu) {
        ctx->pc = 0x1574B0u;
        goto label_1574b0;
    }
    ctx->pc = 0x1574A8u;
    SET_GPR_U32(ctx, 31, 0x1574B0u);
    ctx->pc = 0x202020u;
    { ctx->pc = 0x202020; return; }
    ctx->pc = 0x1574B0u;
label_1574b0:
    // 0x1574b0: 0xc080698  jal         func_201A60
label_1574b4:
    if (ctx->pc == 0x1574B4u) {
        ctx->pc = 0x1574B8u;
        goto label_1574b8;
    }
    ctx->pc = 0x1574B0u;
    SET_GPR_U32(ctx, 31, 0x1574B8u);
    ctx->pc = 0x201A60u;
    { ctx->pc = 0x201a60; return; }
    ctx->pc = 0x1574B8u;
label_1574b8:
    // 0x1574b8: 0xc0805f0  jal         func_2017C0
label_1574bc:
    if (ctx->pc == 0x1574BCu) {
        ctx->pc = 0x1574C0u;
        goto label_1574c0;
    }
    ctx->pc = 0x1574B8u;
    SET_GPR_U32(ctx, 31, 0x1574C0u);
    ctx->pc = 0x2017C0u;
    { ctx->pc = 0x2017c0; return; }
    ctx->pc = 0x1574C0u;
label_1574c0:
    // 0x1574c0: 0xc07010c  jal         func_1C0430
label_1574c4:
    if (ctx->pc == 0x1574C4u) {
        ctx->pc = 0x1574C8u;
        goto label_1574c8;
    }
    ctx->pc = 0x1574C0u;
    SET_GPR_U32(ctx, 31, 0x1574C8u);
    ctx->pc = 0x1C0430u;
    { ctx->pc = 0x1c0430; return; }
    ctx->pc = 0x1574C8u;
label_1574c8:
    // 0x1574c8: 0x2e010016  sltiu       $at, $s0, 0x16
    ctx->pc = 0x1574c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_1574cc:
    // 0x1574cc: 0x10200062  beqz        $at, . + 4 + (0x62 << 2)
label_1574d0:
    if (ctx->pc == 0x1574D0u) {
        ctx->pc = 0x1574D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574CCu;
        // 0x1574d0: 0x24110016  addiu       $s1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1574D4u;
        goto label_1574d4;
    }
    ctx->pc = 0x1574CCu;
    {
        const bool branch_taken_0x1574cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1574D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574CCu;
        // 0x1574d0: 0x24110016  addiu       $s1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1574cc) {
            ctx->pc = 0x157658u;
            goto label_157658;
        }
    }
    ctx->pc = 0x1574D4u;
label_1574d4:
    // 0x1574d4: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1574d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
label_1574d8:
    // 0x1574d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1574d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1574dc:
    // 0x1574dc: 0x24635a00  addiu       $v1, $v1, 0x5A00
    ctx->pc = 0x1574dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23040));
label_1574e0:
    // 0x1574e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1574e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1574e4:
    // 0x1574e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1574e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1574e8:
    // 0x1574e8: 0x400008  jr          $v0
label_1574ec:
    if (ctx->pc == 0x1574ECu) {
        ctx->pc = 0x1574F0u;
        goto label_1574f0;
    }
    ctx->pc = 0x1574E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1574F0u: goto label_1574f0;
            case 0x157544u: goto label_157544;
            case 0x157574u: goto label_157574;
            case 0x157594u: goto label_157594;
            case 0x1575C0u: goto label_1575c0;
            case 0x1575E4u: goto label_1575e4;
            case 0x1575F8u: goto label_1575f8;
            case 0x157608u: goto label_157608;
            case 0x157618u: goto label_157618;
            case 0x157630u: goto label_157630;
            case 0x157648u: goto label_157648;
            case 0x157658u: goto label_157658;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1574E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1574F0u;
label_1574f0:
    // 0x1574f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1574f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1574f4:
    // 0x1574f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1574f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1574f8:
    // 0x1574f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1574f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1574fc:
    // 0x1574fc: 0xc05a3ec  jal         func_168FB0
label_157500:
    if (ctx->pc == 0x157500u) {
        ctx->pc = 0x157500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574FCu;
        // 0x157500: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157504u;
        goto label_157504;
    }
    ctx->pc = 0x1574FCu;
    SET_GPR_U32(ctx, 31, 0x157504u);
    ctx->pc = 0x157500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1574FCu;
    // 0x157500: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168FB0u;
    { ctx->pc = 0x168fb0; return; }
    ctx->pc = 0x157504u;
label_157504:
    // 0x157504: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_157508:
    if (ctx->pc == 0x157508u) {
        ctx->pc = 0x157508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157504u;
        // 0x157508: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15750Cu;
        goto label_15750c;
    }
    ctx->pc = 0x157504u;
    {
        const bool branch_taken_0x157504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157504u;
        // 0x157508: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157504) {
            ctx->pc = 0x157538u;
            goto label_157538;
        }
    }
    ctx->pc = 0x15750Cu;
label_15750c:
    // 0x15750c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15750cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157510:
    // 0x157510: 0xc05a3ec  jal         func_168FB0
label_157514:
    if (ctx->pc == 0x157514u) {
        ctx->pc = 0x157514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157510u;
        // 0x157514: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157518u;
        goto label_157518;
    }
    ctx->pc = 0x157510u;
    SET_GPR_U32(ctx, 31, 0x157518u);
    ctx->pc = 0x157514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157510u;
    // 0x157514: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168FB0u;
    { ctx->pc = 0x168fb0; return; }
    ctx->pc = 0x157518u;
label_157518:
    // 0x157518: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_15751c:
    if (ctx->pc == 0x15751Cu) {
        ctx->pc = 0x15751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157518u;
        // 0x15751c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157520u;
        goto label_157520;
    }
    ctx->pc = 0x157518u;
    {
        const bool branch_taken_0x157518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157518u;
        // 0x15751c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157518) {
            ctx->pc = 0x157538u;
            goto label_157538;
        }
    }
    ctx->pc = 0x157520u;
label_157520:
    // 0x157520: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x157520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_157524:
    // 0x157524: 0xc05a3ec  jal         func_168FB0
label_157528:
    if (ctx->pc == 0x157528u) {
        ctx->pc = 0x157528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157524u;
        // 0x157528: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15752Cu;
        goto label_15752c;
    }
    ctx->pc = 0x157524u;
    SET_GPR_U32(ctx, 31, 0x15752Cu);
    ctx->pc = 0x157528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157524u;
    // 0x157528: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168FB0u;
    { ctx->pc = 0x168fb0; return; }
    ctx->pc = 0x15752Cu;
label_15752c:
    // 0x15752c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_157530:
    if (ctx->pc == 0x157530u) {
        ctx->pc = 0x157534u;
        goto label_157534;
    }
    ctx->pc = 0x15752Cu;
    {
        const bool branch_taken_0x15752c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15752c) {
            ctx->pc = 0x157538u;
            goto label_157538;
        }
    }
    ctx->pc = 0x157534u;
label_157534:
    // 0x157534: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x157534u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157538:
    // 0x157538: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x157538u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15753c:
    // 0x15753c: 0x10000047  b           . + 4 + (0x47 << 2)
label_157540:
    if (ctx->pc == 0x157540u) {
        ctx->pc = 0x157540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15753Cu;
        // 0x157540: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157544u;
        goto label_157544;
    }
    ctx->pc = 0x15753Cu;
    {
        const bool branch_taken_0x15753c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15753Cu;
        // 0x157540: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15753c) {
            ctx->pc = 0x15765Cu;
            goto label_15765c;
        }
    }
    ctx->pc = 0x157544u;
label_157544:
    // 0x157544: 0x0  nop
    ctx->pc = 0x157544u;
    // NOP
label_157548:
    // 0x157548: 0xc056078  jal         func_1581E0
label_15754c:
    if (ctx->pc == 0x15754Cu) {
        ctx->pc = 0x15754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157548u;
        // 0x15754c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157550u;
        goto label_157550;
    }
    ctx->pc = 0x157548u;
    SET_GPR_U32(ctx, 31, 0x157550u);
    ctx->pc = 0x15754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157548u;
    // 0x15754c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1581E0u;
    { ctx->pc = 0x1581e0; return; }
    ctx->pc = 0x157550u;
label_157550:
    // 0x157550: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_157554:
    if (ctx->pc == 0x157554u) {
        ctx->pc = 0x157554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157550u;
        // 0x157554: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157558u;
        goto label_157558;
    }
    ctx->pc = 0x157550u;
    {
        const bool branch_taken_0x157550 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x157554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157550u;
        // 0x157554: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157550) {
            ctx->pc = 0x157564u;
            goto label_157564;
        }
    }
    ctx->pc = 0x157558u;
label_157558:
    // 0x157558: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x157558u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15755c:
    // 0x15755c: 0x1000003f  b           . + 4 + (0x3F << 2)
label_157560:
    if (ctx->pc == 0x157560u) {
        ctx->pc = 0x157560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15755Cu;
        // 0x157560: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157564u;
        goto label_157564;
    }
    ctx->pc = 0x15755Cu;
    {
        const bool branch_taken_0x15755c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15755Cu;
        // 0x157560: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15755c) {
            ctx->pc = 0x15765Cu;
            goto label_15765c;
        }
    }
    ctx->pc = 0x157564u;
label_157564:
    // 0x157564: 0x0  nop
    ctx->pc = 0x157564u;
    // NOP
label_157568:
    // 0x157568: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x157568u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15756c:
    // 0x15756c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_157570:
    if (ctx->pc == 0x157570u) {
        ctx->pc = 0x157570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15756Cu;
        // 0x157570: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157574u;
        goto label_157574;
    }
    ctx->pc = 0x15756Cu;
    {
        const bool branch_taken_0x15756c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15756Cu;
        // 0x157570: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15756c) {
            ctx->pc = 0x15765Cu;
            goto label_15765c;
        }
    }
    ctx->pc = 0x157574u;
label_157574:
    // 0x157574: 0x0  nop
    ctx->pc = 0x157574u;
    // NOP
label_157578:
    // 0x157578: 0xc08fd30  jal         func_23F4C0
label_15757c:
    if (ctx->pc == 0x15757Cu) {
        ctx->pc = 0x15757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157578u;
        // 0x15757c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157580u;
        goto label_157580;
    }
    ctx->pc = 0x157578u;
    SET_GPR_U32(ctx, 31, 0x157580u);
    ctx->pc = 0x15757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157578u;
    // 0x15757c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F4C0u;
    { ctx->pc = 0x23f4c0; return; }
    ctx->pc = 0x157580u;
label_157580:
    // 0x157580: 0xc169934  jal         func_5A64D0
label_157584:
    if (ctx->pc == 0x157584u) {
        ctx->pc = 0x157584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157580u;
        // 0x157584: 0xaf80863c  sw          $zero, -0x79C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157588u;
        goto label_157588;
    }
    ctx->pc = 0x157580u;
    SET_GPR_U32(ctx, 31, 0x157588u);
    ctx->pc = 0x157584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157580u;
    // 0x157584: 0xaf80863c  sw          $zero, -0x79C4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5A64D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5A64D0u, 0x157580u, 0x157588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157588u;
label_157588:
    // 0x157588: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x157588u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15758c:
    // 0x15758c: 0x10000033  b           . + 4 + (0x33 << 2)
label_157590:
    if (ctx->pc == 0x157590u) {
        ctx->pc = 0x157590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15758Cu;
        // 0x157590: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157594u;
        goto label_157594;
    }
    ctx->pc = 0x15758Cu;
    {
        const bool branch_taken_0x15758c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15758Cu;
        // 0x157590: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15758c) {
            ctx->pc = 0x15765Cu;
            goto label_15765c;
        }
    }
    ctx->pc = 0x157594u;
label_157594:
    // 0x157594: 0x0  nop
    ctx->pc = 0x157594u;
    // NOP
label_157598:
    // 0x157598: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x157598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15759c:
    // 0x15759c: 0xc075c98  jal         func_1D7260
label_1575a0:
    if (ctx->pc == 0x1575A0u) {
        ctx->pc = 0x1575A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15759Cu;
        // 0x1575a0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1575A4u;
        goto label_1575a4;
    }
    ctx->pc = 0x15759Cu;
    SET_GPR_U32(ctx, 31, 0x1575A4u);
    ctx->pc = 0x1575A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15759Cu;
    // 0x1575a0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7260u;
    { ctx->pc = 0x1d7260; return; }
    ctx->pc = 0x1575A4u;
label_1575a4:
    // 0x1575a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1575a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1575a8:
    // 0x1575a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1575a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1575ac:
    // 0x1575ac: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
label_1575b0:
    if (ctx->pc == 0x1575B0u) {
        ctx->pc = 0x1575B4u;
        goto label_1575b4;
    }
    ctx->pc = 0x1575ACu;
    {
        const bool branch_taken_0x1575ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1575ac) {
            ctx->pc = 0x1575B8u;
            goto label_1575b8;
        }
    }
    ctx->pc = 0x1575B4u;
label_1575b4:
    // 0x1575b4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1575b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1575b8:
    // 0x1575b8: 0x10000028  b           . + 4 + (0x28 << 2)
label_1575bc:
    if (ctx->pc == 0x1575BCu) {
        ctx->pc = 0x1575BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1575B8u;
        // 0x1575bc: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1575C0u;
        goto label_1575c0;
    }
    ctx->pc = 0x1575B8u;
    {
        const bool branch_taken_0x1575b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1575BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1575B8u;
        // 0x1575bc: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1575b8) {
            ctx->pc = 0x15765Cu;
            goto label_15765c;
        }
    }
    ctx->pc = 0x1575C0u;
label_1575c0:
    // 0x1575c0: 0xc05600c  jal         func_158030
label_1575c4:
    if (ctx->pc == 0x1575C4u) {
        ctx->pc = 0x1575C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1575C0u;
        // 0x1575c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1575C8u;
        goto label_1575c8;
    }
    ctx->pc = 0x1575C0u;
    SET_GPR_U32(ctx, 31, 0x1575C8u);
    ctx->pc = 0x1575C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1575C0u;
    // 0x1575c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158030u;
    { ctx->pc = 0x158030; return; }
    ctx->pc = 0x1575C8u;
label_1575c8:
    // 0x1575c8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1575cc:
    if (ctx->pc == 0x1575CCu) {
        ctx->pc = 0x1575D0u;
        goto label_1575d0;
    }
    ctx->pc = 0x1575C8u;
    {
        const bool branch_taken_0x1575c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1575c8) {
            ctx->pc = 0x15765Cu;
            goto label_15765c;
        }
    }
    ctx->pc = 0x1575D0u;
label_1575d0:
    // 0x1575d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1575d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1575d4:
    // 0x1575d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1575d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1575d8:
    // 0x1575d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1575d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1575dc:
    // 0x1575dc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1575e0:
    if (ctx->pc == 0x1575E0u) {
        ctx->pc = 0x1575E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1575DCu;
        // 0x1575e0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1575E4u;
        goto label_1575e4;
    }
    ctx->pc = 0x1575DCu;
    {
        const bool branch_taken_0x1575dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1575E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1575DCu;
        // 0x1575e0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1575dc) {
            ctx->pc = 0x15765Cu;
            goto label_15765c;
        }
    }
    ctx->pc = 0x1575E4u;
label_1575e4:
    // 0x1575e4: 0x0  nop
    ctx->pc = 0x1575e4u;
    // NOP
label_1575e8:
    // 0x1575e8: 0xc055f8c  jal         func_157E30
label_1575ec:
    if (ctx->pc == 0x1575ECu) {
        ctx->pc = 0x1575ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1575E8u;
        // 0x1575ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1575F0u;
        goto label_1575f0;
    }
    ctx->pc = 0x1575E8u;
    SET_GPR_U32(ctx, 31, 0x1575F0u);
    ctx->pc = 0x1575ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1575E8u;
    // 0x1575ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157E30u;
    { ctx->pc = 0x157e30; return; }
    ctx->pc = 0x1575F0u;
label_1575f0:
    // 0x1575f0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1575f4:
    if (ctx->pc == 0x1575F4u) {
        ctx->pc = 0x1575F8u;
        goto label_1575f8;
    }
    ctx->pc = 0x1575F0u;
    {
        const bool branch_taken_0x1575f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1575f0) {
            ctx->pc = 0x15765Cu;
            goto label_15765c;
        }
    }
    ctx->pc = 0x1575F8u;
label_1575f8:
    // 0x1575f8: 0xc055f48  jal         func_157D20
label_1575fc:
    if (ctx->pc == 0x1575FCu) {
        ctx->pc = 0x157600u;
        goto label_157600;
    }
    ctx->pc = 0x1575F8u;
    SET_GPR_U32(ctx, 31, 0x157600u);
    ctx->pc = 0x157D20u;
    { ctx->pc = 0x157d20; return; }
    ctx->pc = 0x157600u;
label_157600:
    // 0x157600: 0x10000016  b           . + 4 + (0x16 << 2)
label_157604:
    if (ctx->pc == 0x157604u) {
        ctx->pc = 0x157608u;
        goto label_157608;
    }
    ctx->pc = 0x157600u;
    {
        const bool branch_taken_0x157600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157600) {
            ctx->pc = 0x15765Cu;
            goto label_15765c;
        }
    }
    ctx->pc = 0x157608u;
label_157608:
    // 0x157608: 0xc055eb0  jal         func_157AC0
label_15760c:
    if (ctx->pc == 0x15760Cu) {
        ctx->pc = 0x15760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157608u;
        // 0x15760c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157610u;
        goto label_157610;
    }
    ctx->pc = 0x157608u;
    SET_GPR_U32(ctx, 31, 0x157610u);
    ctx->pc = 0x15760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157608u;
    // 0x15760c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157AC0u;
    { ctx->pc = 0x157ac0; return; }
    ctx->pc = 0x157610u;
label_157610:
    // 0x157610: 0x10000012  b           . + 4 + (0x12 << 2)
label_157614:
    if (ctx->pc == 0x157614u) {
        ctx->pc = 0x157618u;
        goto label_157618;
    }
    ctx->pc = 0x157610u;
    {
        const bool branch_taken_0x157610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157610) {
            ctx->pc = 0x15765Cu;
            goto label_15765c;
        }
    }
    ctx->pc = 0x157618u;
label_157618:
    // 0x157618: 0xc08fd30  jal         func_23F4C0
label_15761c:
    if (ctx->pc == 0x15761Cu) {
        ctx->pc = 0x15761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157618u;
        // 0x15761c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157620u;
        goto label_157620;
    }
    ctx->pc = 0x157618u;
    SET_GPR_U32(ctx, 31, 0x157620u);
    ctx->pc = 0x15761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157618u;
    // 0x15761c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F4C0u;
    { ctx->pc = 0x23f4c0; return; }
    ctx->pc = 0x157620u;
label_157620:
    // 0x157620: 0xc169820  jal         func_5A6080
label_157624:
    if (ctx->pc == 0x157624u) {
        ctx->pc = 0x157628u;
        goto label_157628;
    }
    ctx->pc = 0x157620u;
    SET_GPR_U32(ctx, 31, 0x157628u);
    ctx->pc = 0x5A6080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5A6080u, 0x157620u, 0x157628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157628u;
label_157628:
    // 0x157628: 0x1000000c  b           . + 4 + (0xC << 2)
label_15762c:
    if (ctx->pc == 0x15762Cu) {
        ctx->pc = 0x157630u;
        goto label_157630;
    }
    ctx->pc = 0x157628u;
    {
        const bool branch_taken_0x157628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157628) {
            ctx->pc = 0x15765Cu;
            goto label_15765c;
        }
    }
    ctx->pc = 0x157630u;
label_157630:
    // 0x157630: 0xc08fd30  jal         func_23F4C0
label_157634:
    if (ctx->pc == 0x157634u) {
        ctx->pc = 0x157634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157630u;
        // 0x157634: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157638u;
        goto label_157638;
    }
    ctx->pc = 0x157630u;
    SET_GPR_U32(ctx, 31, 0x157638u);
    ctx->pc = 0x157634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157630u;
    // 0x157634: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F4C0u;
    { ctx->pc = 0x23f4c0; return; }
    ctx->pc = 0x157638u;
label_157638:
    // 0x157638: 0xc169e88  jal         func_5A7A20
label_15763c:
    if (ctx->pc == 0x15763Cu) {
        ctx->pc = 0x157640u;
        goto label_157640;
    }
    ctx->pc = 0x157638u;
    SET_GPR_U32(ctx, 31, 0x157640u);
    ctx->pc = 0x5A7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5A7A20u, 0x157638u, 0x157640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157640u;
label_157640:
    // 0x157640: 0x10000006  b           . + 4 + (0x6 << 2)
label_157644:
    if (ctx->pc == 0x157644u) {
        ctx->pc = 0x157648u;
        goto label_157648;
    }
    ctx->pc = 0x157640u;
    {
        const bool branch_taken_0x157640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157640) {
            ctx->pc = 0x15765Cu;
            goto label_15765c;
        }
    }
    ctx->pc = 0x157648u;
label_157648:
    // 0x157648: 0xc08fd74  jal         func_23F5D0
label_15764c:
    if (ctx->pc == 0x15764Cu) {
        ctx->pc = 0x157650u;
        goto label_157650;
    }
    ctx->pc = 0x157648u;
    SET_GPR_U32(ctx, 31, 0x157650u);
    ctx->pc = 0x23F5D0u;
    { ctx->pc = 0x23f5d0; return; }
    ctx->pc = 0x157650u;
label_157650:
    // 0x157650: 0x10000002  b           . + 4 + (0x2 << 2)
label_157654:
    if (ctx->pc == 0x157654u) {
        ctx->pc = 0x157658u;
        goto label_157658;
    }
    ctx->pc = 0x157650u;
    {
        const bool branch_taken_0x157650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157650) {
            ctx->pc = 0x15765Cu;
            goto label_15765c;
        }
    }
    ctx->pc = 0x157658u;
label_157658:
    // 0x157658: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x157658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15765c:
    // 0x15765c: 0x0  nop
    ctx->pc = 0x15765cu;
    // NOP
label_157660:
    // 0x157660: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x157660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_157664:
    // 0x157664: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
label_157668:
    if (ctx->pc == 0x157668u) {
        ctx->pc = 0x157668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157664u;
        // 0x157668: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15766Cu;
        goto label_15766c;
    }
    ctx->pc = 0x157664u;
    {
        const bool branch_taken_0x157664 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x157668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157664u;
        // 0x157668: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157664) {
            ctx->pc = 0x157670u;
            goto label_157670;
        }
    }
    ctx->pc = 0x15766Cu;
label_15766c:
    // 0x15766c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x15766cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_157670:
    // 0x157670: 0x1000ff95  b           . + 4 + (-0x6B << 2)
label_157674:
    if (ctx->pc == 0x157674u) {
        ctx->pc = 0x157674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157670u;
        // 0x157674: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157678u;
        goto label_157678;
    }
    ctx->pc = 0x157670u;
    {
        const bool branch_taken_0x157670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157670u;
        // 0x157674: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157670) {
            ctx->pc = 0x1574C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1574c8;
        }
    }
    ctx->pc = 0x157678u;
label_157678:
    // 0x157678: 0x0  nop
    ctx->pc = 0x157678u;
    // NOP
label_15767c:
    // 0x15767c: 0x0  nop
    ctx->pc = 0x15767cu;
    // NOP
label_157680:
    // 0x157680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x157680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_157684:
    // 0x157684: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x157684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_157688:
    // 0x157688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15768c:
    // 0x15768c: 0xc05b564  jal         func_16D590
label_157690:
    if (ctx->pc == 0x157690u) {
        ctx->pc = 0x157690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15768Cu;
        // 0x157690: 0x8c24c9ac  lw          $a0, -0x3654($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157694u;
        goto label_157694;
    }
    ctx->pc = 0x15768Cu;
    SET_GPR_U32(ctx, 31, 0x157694u);
    ctx->pc = 0x157690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15768Cu;
    // 0x157690: 0x8c24c9ac  lw          $a0, -0x3654($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D590u;
    { ctx->pc = 0x16d590; return; }
    ctx->pc = 0x157694u;
label_157694:
    // 0x157694: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x157694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_157698:
    // 0x157698: 0x8c22c9b0  lw          $v0, -0x3650($at)
    ctx->pc = 0x157698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953392)));
label_15769c:
    // 0x15769c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1576a0:
    if (ctx->pc == 0x1576A0u) {
        ctx->pc = 0x1576A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15769Cu;
        // 0x1576a0: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1576A4u;
        goto label_1576a4;
    }
    ctx->pc = 0x15769Cu;
    {
        const bool branch_taken_0x15769c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1576A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15769Cu;
        // 0x1576a0: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15769c) {
            ctx->pc = 0x1576B0u;
            goto label_1576b0;
        }
    }
    ctx->pc = 0x1576A4u;
label_1576a4:
    // 0x1576a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1576a8:
    if (ctx->pc == 0x1576A8u) {
        ctx->pc = 0x1576A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576A4u;
        // 0x1576a8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1576ACu;
        goto label_1576ac;
    }
    ctx->pc = 0x1576A4u;
    {
        const bool branch_taken_0x1576a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1576A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576A4u;
        // 0x1576a8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576a4) {
            ctx->pc = 0x1576B4u;
            goto label_1576b4;
        }
    }
    ctx->pc = 0x1576ACu;
label_1576ac:
    // 0x1576ac: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1576acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1576b0:
    // 0x1576b0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1576b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1576b4:
    // 0x1576b4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1576b8:
    if (ctx->pc == 0x1576B8u) {
        ctx->pc = 0x1576B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576B4u;
        // 0x1576b8: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1576BCu;
        goto label_1576bc;
    }
    ctx->pc = 0x1576B4u;
    {
        const bool branch_taken_0x1576b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1576B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576B4u;
        // 0x1576b8: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576b4) {
            ctx->pc = 0x1576CCu;
            goto label_1576cc;
        }
    }
    ctx->pc = 0x1576BCu;
label_1576bc:
    // 0x1576bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1576c0:
    if (ctx->pc == 0x1576C0u) {
        ctx->pc = 0x1576C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576BCu;
        // 0x1576c0: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1576C4u;
        goto label_1576c4;
    }
    ctx->pc = 0x1576BCu;
    {
        const bool branch_taken_0x1576bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1576C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576BCu;
        // 0x1576c0: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576bc) {
            ctx->pc = 0x1576D0u;
            goto label_1576d0;
        }
    }
    ctx->pc = 0x1576C4u;
label_1576c4:
    // 0x1576c4: 0x10000011  b           . + 4 + (0x11 << 2)
label_1576c8:
    if (ctx->pc == 0x1576C8u) {
        ctx->pc = 0x1576C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576C4u;
        // 0x1576c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1576CCu;
        goto label_1576cc;
    }
    ctx->pc = 0x1576C4u;
    {
        const bool branch_taken_0x1576c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1576C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576C4u;
        // 0x1576c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1576c4) {
            ctx->pc = 0x15770Cu;
            goto label_15770c;
        }
    }
    ctx->pc = 0x1576CCu;
label_1576cc:
    // 0x1576cc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1576ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_1576d0:
    // 0x1576d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1576d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1576d4:
    // 0x1576d4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1576d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1576d8:
    // 0x1576d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1576d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1576dc:
    // 0x1576dc: 0x82282d  daddu       $a1, $a0, $v0
    ctx->pc = 0x1576dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_1576e0:
    // 0x1576e0: 0x41138  dsll        $v0, $a0, 4
    ctx->pc = 0x1576e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 4);
label_1576e4:
    // 0x1576e4: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1576e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_1576e8:
    // 0x1576e8: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x1576e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
label_1576ec:
    // 0x1576ec: 0x44182d  daddu       $v1, $v0, $a0
    ctx->pc = 0x1576ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_1576f0:
    // 0x1576f0: 0x310f8  dsll        $v0, $v1, 3
    ctx->pc = 0x1576f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 3);
label_1576f4:
    // 0x1576f4: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x1576f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_1576f8:
    // 0x1576f8: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x1576f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
label_1576fc:
    // 0x1576fc: 0xc06d554  jal         func_1B5550
label_157700:
    if (ctx->pc == 0x157700u) {
        ctx->pc = 0x157700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1576FCu;
        // 0x157700: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157704u;
        goto label_157704;
    }
    ctx->pc = 0x1576FCu;
    SET_GPR_U32(ctx, 31, 0x157704u);
    ctx->pc = 0x157700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1576FCu;
    // 0x157700: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    { ctx->pc = 0x1b5550; return; }
    ctx->pc = 0x157704u;
label_157704:
    // 0x157704: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x157704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_157708:
    // 0x157708: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x157708u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_15770c:
    // 0x15770c: 0xc05af40  jal         func_16BD00
label_157710:
    if (ctx->pc == 0x157710u) {
        ctx->pc = 0x157714u;
        goto label_157714;
    }
    ctx->pc = 0x15770Cu;
    SET_GPR_U32(ctx, 31, 0x157714u);
    ctx->pc = 0x16BD00u;
    { ctx->pc = 0x16bd00; return; }
    ctx->pc = 0x157714u;
label_157714:
    // 0x157714: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x157714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_157718:
    // 0x157718: 0x8c22c9b4  lw          $v0, -0x364C($at)
    ctx->pc = 0x157718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953396)));
label_15771c:
    // 0x15771c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_157720:
    if (ctx->pc == 0x157720u) {
        ctx->pc = 0x157720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15771Cu;
        // 0x157720: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x157724u;
        goto label_157724;
    }
    ctx->pc = 0x15771Cu;
    {
        const bool branch_taken_0x15771c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x157720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15771Cu;
        // 0x157720: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15771c) {
            ctx->pc = 0x157730u;
            goto label_157730;
        }
    }
    ctx->pc = 0x157724u;
label_157724:
    // 0x157724: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_157728:
    if (ctx->pc == 0x157728u) {
        ctx->pc = 0x157728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157724u;
        // 0x157728: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15772Cu;
        goto label_15772c;
    }
    ctx->pc = 0x157724u;
    {
        const bool branch_taken_0x157724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157724u;
        // 0x157728: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157724) {
            ctx->pc = 0x157734u;
            goto label_157734;
        }
    }
    ctx->pc = 0x15772Cu;
label_15772c:
    // 0x15772c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x15772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_157730:
    // 0x157730: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x157730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_157734:
    // 0x157734: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_157738:
    if (ctx->pc == 0x157738u) {
        ctx->pc = 0x157738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157734u;
        // 0x157738: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15773Cu;
        goto label_15773c;
    }
    ctx->pc = 0x157734u;
    {
        const bool branch_taken_0x157734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157734u;
        // 0x157738: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157734) {
            ctx->pc = 0x15774Cu;
            goto label_15774c;
        }
    }
    ctx->pc = 0x15773Cu;
label_15773c:
    // 0x15773c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_157740:
    if (ctx->pc == 0x157740u) {
        ctx->pc = 0x157740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15773Cu;
        // 0x157740: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157744u;
        goto label_157744;
    }
    ctx->pc = 0x15773Cu;
    {
        const bool branch_taken_0x15773c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15773Cu;
        // 0x157740: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15773c) {
            ctx->pc = 0x15774Cu;
            goto label_15774c;
        }
    }
    ctx->pc = 0x157744u;
label_157744:
    // 0x157744: 0x1000000b  b           . + 4 + (0xB << 2)
label_157748:
    if (ctx->pc == 0x157748u) {
        ctx->pc = 0x15774Cu;
        goto label_15774c;
    }
    ctx->pc = 0x157744u;
    {
        const bool branch_taken_0x157744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157744) {
            ctx->pc = 0x157774u;
            goto label_157774;
        }
    }
    ctx->pc = 0x15774Cu;
label_15774c:
    // 0x15774c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15774cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_157750:
    // 0x157750: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x157750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_157754:
    // 0x157754: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x157754u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_157758:
    // 0x157758: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x157758u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_15775c:
    // 0x15775c: 0x62282d  daddu       $a1, $v1, $v0
    ctx->pc = 0x15775cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_157760:
    // 0x157760: 0x313b8  dsll        $v0, $v1, 14
    ctx->pc = 0x157760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 14);
label_157764:
    // 0x157764: 0xc06d554  jal         func_1B5550
label_157768:
    if (ctx->pc == 0x157768u) {
        ctx->pc = 0x157768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157764u;
        // 0x157768: 0x43202f  dsubu       $a0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15776Cu;
        goto label_15776c;
    }
    ctx->pc = 0x157764u;
    SET_GPR_U32(ctx, 31, 0x15776Cu);
    ctx->pc = 0x157768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157764u;
    // 0x157768: 0x43202f  dsubu       $a0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    { ctx->pc = 0x1b5550; return; }
    ctx->pc = 0x15776Cu;
label_15776c:
    // 0x15776c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x15776cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_157770:
    // 0x157770: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x157770u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_157774:
    // 0x157774: 0xc05b228  jal         func_16C8A0
label_157778:
    if (ctx->pc == 0x157778u) {
        ctx->pc = 0x15777Cu;
        goto label_15777c;
    }
    ctx->pc = 0x157774u;
    SET_GPR_U32(ctx, 31, 0x15777Cu);
    ctx->pc = 0x16C8A0u;
    { ctx->pc = 0x16c8a0; return; }
    ctx->pc = 0x15777Cu;
label_15777c:
    // 0x15777c: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x15777cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_157780:
    // 0x157780: 0x8c24ca48  lw          $a0, -0x35B8($at)
    ctx->pc = 0x157780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
label_157784:
    // 0x157784: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x157784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_157788:
    // 0x157788: 0xc06dfe4  jal         func_1B7F90
label_15778c:
    if (ctx->pc == 0x15778Cu) {
        ctx->pc = 0x15778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157788u;
        // 0x15778c: 0x8c25ca4c  lw          $a1, -0x35B4($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157790u;
        goto label_157790;
    }
    ctx->pc = 0x157788u;
    SET_GPR_U32(ctx, 31, 0x157790u);
    ctx->pc = 0x15778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157788u;
    // 0x15778c: 0x8c25ca4c  lw          $a1, -0x35B4($at) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F90u;
    { ctx->pc = 0x1b7f90; return; }
    ctx->pc = 0x157790u;
label_157790:
    // 0x157790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_157794:
    // 0x157794: 0x3e00008  jr          $ra
label_157798:
    if (ctx->pc == 0x157798u) {
        ctx->pc = 0x157798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157794u;
        // 0x157798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15779Cu;
        goto label_15779c;
    }
    ctx->pc = 0x157794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157794u;
        // 0x157798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15779Cu;
label_15779c:
    // 0x15779c: 0x0  nop
    ctx->pc = 0x15779cu;
    // NOP
label_1577a0:
    // 0x1577a0: 0x28810018  slti        $at, $a0, 0x18
    ctx->pc = 0x1577a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
label_1577a4:
    // 0x1577a4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_1577a8:
    if (ctx->pc == 0x1577A8u) {
        ctx->pc = 0x1577A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577A4u;
        // 0x1577a8: 0x28810034  slti        $at, $a0, 0x34 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)52) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1577ACu;
        goto label_1577ac;
    }
    ctx->pc = 0x1577A4u;
    {
        const bool branch_taken_0x1577a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1577A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577A4u;
        // 0x1577a8: 0x28810034  slti        $at, $a0, 0x34 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)52) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577a4) {
            ctx->pc = 0x1577D8u;
            goto label_1577d8;
        }
    }
    ctx->pc = 0x1577ACu;
label_1577ac:
    // 0x1577ac: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1577acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1577b0:
    // 0x1577b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1577b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1577b4:
    // 0x1577b4: 0x24632740  addiu       $v1, $v1, 0x2740
    ctx->pc = 0x1577b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10048));
label_1577b8:
    // 0x1577b8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1577b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_1577bc:
    // 0x1577bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1577bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1577c0:
    // 0x1577c0: 0x8c241880  lw          $a0, 0x1880($at)
    ctx->pc = 0x1577c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
label_1577c4:
    // 0x1577c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1577c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1577c8:
    // 0x1577c8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1577c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_1577cc:
    // 0x1577cc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1577ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1577d0:
    // 0x1577d0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1577d4:
    if (ctx->pc == 0x1577D4u) {
        ctx->pc = 0x1577D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577D0u;
        // 0x1577d4: 0xac231880  sw          $v1, 0x1880($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1577D8u;
        goto label_1577d8;
    }
    ctx->pc = 0x1577D0u;
    {
        const bool branch_taken_0x1577d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1577D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1577D0u;
        // 0x1577d4: 0xac231880  sw          $v1, 0x1880($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1577d0) {
            ctx->pc = 0x157800u;
            goto label_157800;
        }
    }
    ctx->pc = 0x1577D8u;
label_1577d8:
    // 0x1577d8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1577dc:
    if (ctx->pc == 0x1577DCu) {
        ctx->pc = 0x1577E0u;
        goto label_1577e0;
    }
    ctx->pc = 0x1577D8u;
    {
        const bool branch_taken_0x1577d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1577d8) {
            ctx->pc = 0x157800u;
            goto label_157800;
        }
    }
    ctx->pc = 0x1577E0u;
label_1577e0:
    // 0x1577e0: 0x2484ffe8  addiu       $a0, $a0, -0x18
    ctx->pc = 0x1577e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
label_1577e4:
    // 0x1577e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1577e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1577e8:
    // 0x1577e8: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1577e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_1577ec:
    // 0x1577ec: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1577ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_1577f0:
    // 0x1577f0: 0x8c231898  lw          $v1, 0x1898($at)
    ctx->pc = 0x1577f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6296)));
label_1577f4:
    // 0x1577f4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1577f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1577f8:
    // 0x1577f8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1577f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_1577fc:
    // 0x1577fc: 0xac231898  sw          $v1, 0x1898($at)
    ctx->pc = 0x1577fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6296), GPR_U32(ctx, 3));
label_157800:
    // 0x157800: 0x3e00008  jr          $ra
label_157804:
    if (ctx->pc == 0x157804u) {
        ctx->pc = 0x157808u;
        goto label_157808;
    }
    ctx->pc = 0x157800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157808u;
label_157808:
    // 0x157808: 0x0  nop
    ctx->pc = 0x157808u;
    // NOP
label_15780c:
    // 0x15780c: 0x0  nop
    ctx->pc = 0x15780cu;
    // NOP
label_157810:
    // 0x157810: 0x28810026  slti        $at, $a0, 0x26
    ctx->pc = 0x157810u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)38) ? 1 : 0);
label_157814:
    // 0x157814: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_157818:
    if (ctx->pc == 0x157818u) {
        ctx->pc = 0x15781Cu;
        goto label_15781c;
    }
    ctx->pc = 0x157814u;
    {
        const bool branch_taken_0x157814 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x157814) {
            ctx->pc = 0x157840u;
            { ctx->pc = 0x157840; return; }
        }
    }
    ctx->pc = 0x15781Cu;
label_15781c:
    // 0x15781c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x15781cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_157820:
    // 0x157820: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157824:
    // 0x157824: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x157824u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_157828:
    // 0x157828: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x157828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_15782c:
    // 0x15782c: 0x832014  dsllv       $a0, $v1, $a0
    ctx->pc = 0x15782cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (GPR_U32(ctx, 4) & 0x3F));
label_157830:
    // 0x157830: 0xdc231888  ld          $v1, 0x1888($at)
    ctx->pc = 0x157830u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 6280)));
label_157834:
    // 0x157834: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x157834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_157838:
    // 0x157838: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x157838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_15783c:
    // 0x15783c: 0xfc231888  sd          $v1, 0x1888($at)
    ctx->pc = 0x15783cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 6280), GPR_U64(ctx, 3));
    ctx->pc = 0x157840u;
    return;
}
