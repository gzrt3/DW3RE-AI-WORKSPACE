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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part6(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1821b0u: goto label_1821b0;
        case 0x1821b4u: goto label_1821b4;
        case 0x1821b8u: goto label_1821b8;
        case 0x1821bcu: goto label_1821bc;
        case 0x1821c0u: goto label_1821c0;
        case 0x1821c4u: goto label_1821c4;
        case 0x1821c8u: goto label_1821c8;
        case 0x1821ccu: goto label_1821cc;
        case 0x1821d0u: goto label_1821d0;
        case 0x1821d4u: goto label_1821d4;
        case 0x1821d8u: goto label_1821d8;
        case 0x1821dcu: goto label_1821dc;
        case 0x1821e0u: goto label_1821e0;
        case 0x1821e4u: goto label_1821e4;
        case 0x1821e8u: goto label_1821e8;
        case 0x1821ecu: goto label_1821ec;
        case 0x1821f0u: goto label_1821f0;
        case 0x1821f4u: goto label_1821f4;
        case 0x1821f8u: goto label_1821f8;
        case 0x1821fcu: goto label_1821fc;
        case 0x182200u: goto label_182200;
        case 0x182204u: goto label_182204;
        case 0x182208u: goto label_182208;
        case 0x18220cu: goto label_18220c;
        case 0x182210u: goto label_182210;
        case 0x182214u: goto label_182214;
        case 0x182218u: goto label_182218;
        case 0x18221cu: goto label_18221c;
        case 0x182220u: goto label_182220;
        case 0x182224u: goto label_182224;
        case 0x182228u: goto label_182228;
        case 0x18222cu: goto label_18222c;
        case 0x182230u: goto label_182230;
        case 0x182234u: goto label_182234;
        case 0x182238u: goto label_182238;
        case 0x18223cu: goto label_18223c;
        case 0x182240u: goto label_182240;
        case 0x182244u: goto label_182244;
        case 0x182248u: goto label_182248;
        case 0x18224cu: goto label_18224c;
        case 0x182250u: goto label_182250;
        case 0x182254u: goto label_182254;
        case 0x182258u: goto label_182258;
        case 0x18225cu: goto label_18225c;
        case 0x182260u: goto label_182260;
        case 0x182264u: goto label_182264;
        case 0x182268u: goto label_182268;
        case 0x18226cu: goto label_18226c;
        case 0x182270u: goto label_182270;
        case 0x182274u: goto label_182274;
        case 0x182278u: goto label_182278;
        case 0x18227cu: goto label_18227c;
        case 0x182280u: goto label_182280;
        case 0x182284u: goto label_182284;
        case 0x182288u: goto label_182288;
        case 0x18228cu: goto label_18228c;
        case 0x182290u: goto label_182290;
        case 0x182294u: goto label_182294;
        case 0x182298u: goto label_182298;
        case 0x18229cu: goto label_18229c;
        case 0x1822a0u: goto label_1822a0;
        case 0x1822a4u: goto label_1822a4;
        case 0x1822a8u: goto label_1822a8;
        case 0x1822acu: goto label_1822ac;
        case 0x1822b0u: goto label_1822b0;
        case 0x1822b4u: goto label_1822b4;
        case 0x1822b8u: goto label_1822b8;
        case 0x1822bcu: goto label_1822bc;
        case 0x1822c0u: goto label_1822c0;
        case 0x1822c4u: goto label_1822c4;
        case 0x1822c8u: goto label_1822c8;
        case 0x1822ccu: goto label_1822cc;
        case 0x1822d0u: goto label_1822d0;
        case 0x1822d4u: goto label_1822d4;
        case 0x1822d8u: goto label_1822d8;
        case 0x1822dcu: goto label_1822dc;
        case 0x1822e0u: goto label_1822e0;
        case 0x1822e4u: goto label_1822e4;
        case 0x1822e8u: goto label_1822e8;
        case 0x1822ecu: goto label_1822ec;
        case 0x1822f0u: goto label_1822f0;
        case 0x1822f4u: goto label_1822f4;
        case 0x1822f8u: goto label_1822f8;
        case 0x1822fcu: goto label_1822fc;
        case 0x182300u: goto label_182300;
        case 0x182304u: goto label_182304;
        case 0x182308u: goto label_182308;
        case 0x18230cu: goto label_18230c;
        case 0x182310u: goto label_182310;
        case 0x182314u: goto label_182314;
        case 0x182318u: goto label_182318;
        case 0x18231cu: goto label_18231c;
        case 0x182320u: goto label_182320;
        case 0x182324u: goto label_182324;
        case 0x182328u: goto label_182328;
        case 0x18232cu: goto label_18232c;
        case 0x182330u: goto label_182330;
        case 0x182334u: goto label_182334;
        case 0x182338u: goto label_182338;
        case 0x18233cu: goto label_18233c;
        case 0x182340u: goto label_182340;
        case 0x182344u: goto label_182344;
        case 0x182348u: goto label_182348;
        case 0x18234cu: goto label_18234c;
        case 0x182350u: goto label_182350;
        case 0x182354u: goto label_182354;
        case 0x182358u: goto label_182358;
        case 0x18235cu: goto label_18235c;
        case 0x182360u: goto label_182360;
        case 0x182364u: goto label_182364;
        case 0x182368u: goto label_182368;
        case 0x18236cu: goto label_18236c;
        case 0x182370u: goto label_182370;
        case 0x182374u: goto label_182374;
        case 0x182378u: goto label_182378;
        case 0x18237cu: goto label_18237c;
        case 0x182380u: goto label_182380;
        case 0x182384u: goto label_182384;
        case 0x182388u: goto label_182388;
        case 0x18238cu: goto label_18238c;
        case 0x182390u: goto label_182390;
        case 0x182394u: goto label_182394;
        case 0x182398u: goto label_182398;
        case 0x18239cu: goto label_18239c;
        case 0x1823a0u: goto label_1823a0;
        case 0x1823a4u: goto label_1823a4;
        case 0x1823a8u: goto label_1823a8;
        case 0x1823acu: goto label_1823ac;
        case 0x1823b0u: goto label_1823b0;
        case 0x1823b4u: goto label_1823b4;
        case 0x1823b8u: goto label_1823b8;
        case 0x1823bcu: goto label_1823bc;
        case 0x1823c0u: goto label_1823c0;
        case 0x1823c4u: goto label_1823c4;
        case 0x1823c8u: goto label_1823c8;
        case 0x1823ccu: goto label_1823cc;
        case 0x1823d0u: goto label_1823d0;
        case 0x1823d4u: goto label_1823d4;
        case 0x1823d8u: goto label_1823d8;
        case 0x1823dcu: goto label_1823dc;
        case 0x1823e0u: goto label_1823e0;
        case 0x1823e4u: goto label_1823e4;
        case 0x1823e8u: goto label_1823e8;
        case 0x1823ecu: goto label_1823ec;
        case 0x1823f0u: goto label_1823f0;
        case 0x1823f4u: goto label_1823f4;
        case 0x1823f8u: goto label_1823f8;
        case 0x1823fcu: goto label_1823fc;
        case 0x182400u: goto label_182400;
        case 0x182404u: goto label_182404;
        case 0x182408u: goto label_182408;
        case 0x18240cu: goto label_18240c;
        case 0x182410u: goto label_182410;
        case 0x182414u: goto label_182414;
        case 0x182418u: goto label_182418;
        case 0x18241cu: goto label_18241c;
        case 0x182420u: goto label_182420;
        case 0x182424u: goto label_182424;
        case 0x182428u: goto label_182428;
        case 0x18242cu: goto label_18242c;
        case 0x182430u: goto label_182430;
        case 0x182434u: goto label_182434;
        case 0x182438u: goto label_182438;
        case 0x18243cu: goto label_18243c;
        case 0x182440u: goto label_182440;
        case 0x182444u: goto label_182444;
        case 0x182448u: goto label_182448;
        case 0x18244cu: goto label_18244c;
        case 0x182450u: goto label_182450;
        case 0x182454u: goto label_182454;
        case 0x182458u: goto label_182458;
        case 0x18245cu: goto label_18245c;
        case 0x182460u: goto label_182460;
        case 0x182464u: goto label_182464;
        case 0x182468u: goto label_182468;
        case 0x18246cu: goto label_18246c;
        case 0x182470u: goto label_182470;
        case 0x182474u: goto label_182474;
        case 0x182478u: goto label_182478;
        case 0x18247cu: goto label_18247c;
        case 0x182480u: goto label_182480;
        case 0x182484u: goto label_182484;
        case 0x182488u: goto label_182488;
        case 0x18248cu: goto label_18248c;
        case 0x182490u: goto label_182490;
        case 0x182494u: goto label_182494;
        case 0x182498u: goto label_182498;
        case 0x18249cu: goto label_18249c;
        case 0x1824a0u: goto label_1824a0;
        case 0x1824a4u: goto label_1824a4;
        case 0x1824a8u: goto label_1824a8;
        case 0x1824acu: goto label_1824ac;
        case 0x1824b0u: goto label_1824b0;
        case 0x1824b4u: goto label_1824b4;
        case 0x1824b8u: goto label_1824b8;
        case 0x1824bcu: goto label_1824bc;
        case 0x1824c0u: goto label_1824c0;
        case 0x1824c4u: goto label_1824c4;
        case 0x1824c8u: goto label_1824c8;
        case 0x1824ccu: goto label_1824cc;
        case 0x1824d0u: goto label_1824d0;
        case 0x1824d4u: goto label_1824d4;
        case 0x1824d8u: goto label_1824d8;
        case 0x1824dcu: goto label_1824dc;
        case 0x1824e0u: goto label_1824e0;
        case 0x1824e4u: goto label_1824e4;
        case 0x1824e8u: goto label_1824e8;
        case 0x1824ecu: goto label_1824ec;
        case 0x1824f0u: goto label_1824f0;
        case 0x1824f4u: goto label_1824f4;
        case 0x1824f8u: goto label_1824f8;
        case 0x1824fcu: goto label_1824fc;
        case 0x182500u: goto label_182500;
        case 0x182504u: goto label_182504;
        case 0x182508u: goto label_182508;
        case 0x18250cu: goto label_18250c;
        case 0x182510u: goto label_182510;
        case 0x182514u: goto label_182514;
        case 0x182518u: goto label_182518;
        case 0x18251cu: goto label_18251c;
        case 0x182520u: goto label_182520;
        case 0x182524u: goto label_182524;
        case 0x182528u: goto label_182528;
        case 0x18252cu: goto label_18252c;
        case 0x182530u: goto label_182530;
        case 0x182534u: goto label_182534;
        case 0x182538u: goto label_182538;
        case 0x18253cu: goto label_18253c;
        case 0x182540u: goto label_182540;
        case 0x182544u: goto label_182544;
        case 0x182548u: goto label_182548;
        case 0x18254cu: goto label_18254c;
        case 0x182550u: goto label_182550;
        case 0x182554u: goto label_182554;
        case 0x182558u: goto label_182558;
        case 0x18255cu: goto label_18255c;
        case 0x182560u: goto label_182560;
        case 0x182564u: goto label_182564;
        case 0x182568u: goto label_182568;
        case 0x18256cu: goto label_18256c;
        case 0x182570u: goto label_182570;
        case 0x182574u: goto label_182574;
        case 0x182578u: goto label_182578;
        case 0x18257cu: goto label_18257c;
        case 0x182580u: goto label_182580;
        case 0x182584u: goto label_182584;
        case 0x182588u: goto label_182588;
        case 0x18258cu: goto label_18258c;
        case 0x182590u: goto label_182590;
        case 0x182594u: goto label_182594;
        case 0x182598u: goto label_182598;
        case 0x18259cu: goto label_18259c;
        case 0x1825a0u: goto label_1825a0;
        case 0x1825a4u: goto label_1825a4;
        case 0x1825a8u: goto label_1825a8;
        case 0x1825acu: goto label_1825ac;
        case 0x1825b0u: goto label_1825b0;
        case 0x1825b4u: goto label_1825b4;
        case 0x1825b8u: goto label_1825b8;
        case 0x1825bcu: goto label_1825bc;
        case 0x1825c0u: goto label_1825c0;
        case 0x1825c4u: goto label_1825c4;
        case 0x1825c8u: goto label_1825c8;
        case 0x1825ccu: goto label_1825cc;
        case 0x1825d0u: goto label_1825d0;
        case 0x1825d4u: goto label_1825d4;
        case 0x1825d8u: goto label_1825d8;
        case 0x1825dcu: goto label_1825dc;
        case 0x1825e0u: goto label_1825e0;
        case 0x1825e4u: goto label_1825e4;
        case 0x1825e8u: goto label_1825e8;
        case 0x1825ecu: goto label_1825ec;
        case 0x1825f0u: goto label_1825f0;
        case 0x1825f4u: goto label_1825f4;
        case 0x1825f8u: goto label_1825f8;
        case 0x1825fcu: goto label_1825fc;
        case 0x182600u: goto label_182600;
        case 0x182604u: goto label_182604;
        case 0x182608u: goto label_182608;
        case 0x18260cu: goto label_18260c;
        case 0x182610u: goto label_182610;
        case 0x182614u: goto label_182614;
        case 0x182618u: goto label_182618;
        case 0x18261cu: goto label_18261c;
        case 0x182620u: goto label_182620;
        case 0x182624u: goto label_182624;
        case 0x182628u: goto label_182628;
        case 0x18262cu: goto label_18262c;
        case 0x182630u: goto label_182630;
        case 0x182634u: goto label_182634;
        case 0x182638u: goto label_182638;
        case 0x18263cu: goto label_18263c;
        case 0x182640u: goto label_182640;
        case 0x182644u: goto label_182644;
        case 0x182648u: goto label_182648;
        case 0x18264cu: goto label_18264c;
        case 0x182650u: goto label_182650;
        case 0x182654u: goto label_182654;
        case 0x182658u: goto label_182658;
        case 0x18265cu: goto label_18265c;
        case 0x182660u: goto label_182660;
        case 0x182664u: goto label_182664;
        case 0x182668u: goto label_182668;
        case 0x18266cu: goto label_18266c;
        case 0x182670u: goto label_182670;
        case 0x182674u: goto label_182674;
        case 0x182678u: goto label_182678;
        case 0x18267cu: goto label_18267c;
        case 0x182680u: goto label_182680;
        case 0x182684u: goto label_182684;
        case 0x182688u: goto label_182688;
        case 0x18268cu: goto label_18268c;
        case 0x182690u: goto label_182690;
        case 0x182694u: goto label_182694;
        case 0x182698u: goto label_182698;
        case 0x18269cu: goto label_18269c;
        case 0x1826a0u: goto label_1826a0;
        case 0x1826a4u: goto label_1826a4;
        case 0x1826a8u: goto label_1826a8;
        case 0x1826acu: goto label_1826ac;
        case 0x1826b0u: goto label_1826b0;
        case 0x1826b4u: goto label_1826b4;
        case 0x1826b8u: goto label_1826b8;
        case 0x1826bcu: goto label_1826bc;
        case 0x1826c0u: goto label_1826c0;
        case 0x1826c4u: goto label_1826c4;
        case 0x1826c8u: goto label_1826c8;
        case 0x1826ccu: goto label_1826cc;
        case 0x1826d0u: goto label_1826d0;
        case 0x1826d4u: goto label_1826d4;
        case 0x1826d8u: goto label_1826d8;
        case 0x1826dcu: goto label_1826dc;
        case 0x1826e0u: goto label_1826e0;
        case 0x1826e4u: goto label_1826e4;
        case 0x1826e8u: goto label_1826e8;
        case 0x1826ecu: goto label_1826ec;
        case 0x1826f0u: goto label_1826f0;
        case 0x1826f4u: goto label_1826f4;
        case 0x1826f8u: goto label_1826f8;
        case 0x1826fcu: goto label_1826fc;
        case 0x182700u: goto label_182700;
        case 0x182704u: goto label_182704;
        case 0x182708u: goto label_182708;
        case 0x18270cu: goto label_18270c;
        case 0x182710u: goto label_182710;
        case 0x182714u: goto label_182714;
        case 0x182718u: goto label_182718;
        case 0x18271cu: goto label_18271c;
        case 0x182720u: goto label_182720;
        case 0x182724u: goto label_182724;
        case 0x182728u: goto label_182728;
        case 0x18272cu: goto label_18272c;
        case 0x182730u: goto label_182730;
        case 0x182734u: goto label_182734;
        case 0x182738u: goto label_182738;
        case 0x18273cu: goto label_18273c;
        case 0x182740u: goto label_182740;
        case 0x182744u: goto label_182744;
        case 0x182748u: goto label_182748;
        case 0x18274cu: goto label_18274c;
        case 0x182750u: goto label_182750;
        case 0x182754u: goto label_182754;
        case 0x182758u: goto label_182758;
        case 0x18275cu: goto label_18275c;
        case 0x182760u: goto label_182760;
        case 0x182764u: goto label_182764;
        case 0x182768u: goto label_182768;
        case 0x18276cu: goto label_18276c;
        case 0x182770u: goto label_182770;
        case 0x182774u: goto label_182774;
        case 0x182778u: goto label_182778;
        case 0x18277cu: goto label_18277c;
        case 0x182780u: goto label_182780;
        case 0x182784u: goto label_182784;
        case 0x182788u: goto label_182788;
        case 0x18278cu: goto label_18278c;
        case 0x182790u: goto label_182790;
        case 0x182794u: goto label_182794;
        case 0x182798u: goto label_182798;
        case 0x18279cu: goto label_18279c;
        case 0x1827a0u: goto label_1827a0;
        case 0x1827a4u: goto label_1827a4;
        case 0x1827a8u: goto label_1827a8;
        case 0x1827acu: goto label_1827ac;
        case 0x1827b0u: goto label_1827b0;
        case 0x1827b4u: goto label_1827b4;
        case 0x1827b8u: goto label_1827b8;
        case 0x1827bcu: goto label_1827bc;
        case 0x1827c0u: goto label_1827c0;
        case 0x1827c4u: goto label_1827c4;
        case 0x1827c8u: goto label_1827c8;
        case 0x1827ccu: goto label_1827cc;
        case 0x1827d0u: goto label_1827d0;
        case 0x1827d4u: goto label_1827d4;
        case 0x1827d8u: goto label_1827d8;
        case 0x1827dcu: goto label_1827dc;
        case 0x1827e0u: goto label_1827e0;
        case 0x1827e4u: goto label_1827e4;
        case 0x1827e8u: goto label_1827e8;
        case 0x1827ecu: goto label_1827ec;
        case 0x1827f0u: goto label_1827f0;
        case 0x1827f4u: goto label_1827f4;
        case 0x1827f8u: goto label_1827f8;
        case 0x1827fcu: goto label_1827fc;
        case 0x182800u: goto label_182800;
        case 0x182804u: goto label_182804;
        case 0x182808u: goto label_182808;
        case 0x18280cu: goto label_18280c;
        case 0x182810u: goto label_182810;
        case 0x182814u: goto label_182814;
        case 0x182818u: goto label_182818;
        case 0x18281cu: goto label_18281c;
        case 0x182820u: goto label_182820;
        case 0x182824u: goto label_182824;
        case 0x182828u: goto label_182828;
        case 0x18282cu: goto label_18282c;
        case 0x182830u: goto label_182830;
        case 0x182834u: goto label_182834;
        case 0x182838u: goto label_182838;
        case 0x18283cu: goto label_18283c;
        case 0x182840u: goto label_182840;
        case 0x182844u: goto label_182844;
        case 0x182848u: goto label_182848;
        case 0x18284cu: goto label_18284c;
        case 0x182850u: goto label_182850;
        case 0x182854u: goto label_182854;
        case 0x182858u: goto label_182858;
        case 0x18285cu: goto label_18285c;
        case 0x182860u: goto label_182860;
        case 0x182864u: goto label_182864;
        case 0x182868u: goto label_182868;
        case 0x18286cu: goto label_18286c;
        case 0x182870u: goto label_182870;
        case 0x182874u: goto label_182874;
        case 0x182878u: goto label_182878;
        case 0x18287cu: goto label_18287c;
        case 0x182880u: goto label_182880;
        case 0x182884u: goto label_182884;
        case 0x182888u: goto label_182888;
        case 0x18288cu: goto label_18288c;
        case 0x182890u: goto label_182890;
        case 0x182894u: goto label_182894;
        case 0x182898u: goto label_182898;
        case 0x18289cu: goto label_18289c;
        case 0x1828a0u: goto label_1828a0;
        case 0x1828a4u: goto label_1828a4;
        case 0x1828a8u: goto label_1828a8;
        case 0x1828acu: goto label_1828ac;
        case 0x1828b0u: goto label_1828b0;
        case 0x1828b4u: goto label_1828b4;
        case 0x1828b8u: goto label_1828b8;
        case 0x1828bcu: goto label_1828bc;
        case 0x1828c0u: goto label_1828c0;
        case 0x1828c4u: goto label_1828c4;
        case 0x1828c8u: goto label_1828c8;
        case 0x1828ccu: goto label_1828cc;
        case 0x1828d0u: goto label_1828d0;
        case 0x1828d4u: goto label_1828d4;
        case 0x1828d8u: goto label_1828d8;
        case 0x1828dcu: goto label_1828dc;
        case 0x1828e0u: goto label_1828e0;
        case 0x1828e4u: goto label_1828e4;
        case 0x1828e8u: goto label_1828e8;
        case 0x1828ecu: goto label_1828ec;
        case 0x1828f0u: goto label_1828f0;
        case 0x1828f4u: goto label_1828f4;
        case 0x1828f8u: goto label_1828f8;
        case 0x1828fcu: goto label_1828fc;
        case 0x182900u: goto label_182900;
        case 0x182904u: goto label_182904;
        case 0x182908u: goto label_182908;
        case 0x18290cu: goto label_18290c;
        case 0x182910u: goto label_182910;
        case 0x182914u: goto label_182914;
        case 0x182918u: goto label_182918;
        case 0x18291cu: goto label_18291c;
        case 0x182920u: goto label_182920;
        case 0x182924u: goto label_182924;
        case 0x182928u: goto label_182928;
        case 0x18292cu: goto label_18292c;
        case 0x182930u: goto label_182930;
        case 0x182934u: goto label_182934;
        case 0x182938u: goto label_182938;
        case 0x18293cu: goto label_18293c;
        case 0x182940u: goto label_182940;
        case 0x182944u: goto label_182944;
        case 0x182948u: goto label_182948;
        case 0x18294cu: goto label_18294c;
        case 0x182950u: goto label_182950;
        case 0x182954u: goto label_182954;
        case 0x182958u: goto label_182958;
        case 0x18295cu: goto label_18295c;
        case 0x182960u: goto label_182960;
        case 0x182964u: goto label_182964;
        case 0x182968u: goto label_182968;
        case 0x18296cu: goto label_18296c;
        case 0x182970u: goto label_182970;
        case 0x182974u: goto label_182974;
        case 0x182978u: goto label_182978;
        case 0x18297cu: goto label_18297c;
        default: return;
    }

label_1821b0:
    // 0x1821b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1821b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1821b4:
    // 0x1821b4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1821b8:
    if (ctx->pc == 0x1821B8u) {
        ctx->pc = 0x1821B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821B4u;
        // 0x1821b8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1821BCu;
        goto label_1821bc;
    }
    ctx->pc = 0x1821B4u;
    {
        const bool branch_taken_0x1821b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1821B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821B4u;
        // 0x1821b8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1821b4) {
            ctx->pc = 0x1821ECu;
            goto label_1821ec;
        }
    }
    ctx->pc = 0x1821BCu;
label_1821bc:
    // 0x1821bc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1821bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1821c0:
    // 0x1821c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1821c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1821c4:
    // 0x1821c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1821c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1821c8:
    // 0x1821c8: 0x0  nop
    ctx->pc = 0x1821c8u;
    // NOP
label_1821cc:
    // 0x1821cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1821ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1821d0:
    // 0x1821d0: 0x0  nop
    ctx->pc = 0x1821d0u;
    // NOP
label_1821d4:
    // 0x1821d4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1821d8:
    if (ctx->pc == 0x1821D8u) {
        ctx->pc = 0x1821D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821D4u;
        // 0x1821d8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1821DCu;
        goto label_1821dc;
    }
    ctx->pc = 0x1821D4u;
    {
        const bool branch_taken_0x1821d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1821D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821D4u;
        // 0x1821d8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1821d4) {
            ctx->pc = 0x1821ECu;
            goto label_1821ec;
        }
    }
    ctx->pc = 0x1821DCu;
label_1821dc:
    // 0x1821dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1821dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1821e0:
    // 0x1821e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1821e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1821e4:
    // 0x1821e4: 0x10000001  b           . + 4 + (0x1 << 2)
label_1821e8:
    if (ctx->pc == 0x1821E8u) {
        ctx->pc = 0x1821E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821E4u;
        // 0x1821e8: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1821ECu;
        goto label_1821ec;
    }
    ctx->pc = 0x1821E4u;
    {
        const bool branch_taken_0x1821e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1821E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821E4u;
        // 0x1821e8: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1821e4) {
            ctx->pc = 0x1821ECu;
            goto label_1821ec;
        }
    }
    ctx->pc = 0x1821ECu;
label_1821ec:
    // 0x1821ec: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x1821ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_1821f0:
    // 0x1821f0: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x1821f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_1821f4:
    // 0x1821f4: 0xc6400150  lwc1        $f0, 0x150($s2)
    ctx->pc = 0x1821f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1821f8:
    // 0x1821f8: 0x3c0268db  lui         $v0, 0x68DB
    ctx->pc = 0x1821f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26843 << 16));
label_1821fc:
    // 0x1821fc: 0x34478bad  ori         $a3, $v0, 0x8BAD
    ctx->pc = 0x1821fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35757);
label_182200:
    // 0x182200: 0x34654dd3  ori         $a1, $v1, 0x4DD3
    ctx->pc = 0x182200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_182204:
    // 0x182204: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x182204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_182208:
    // 0x182208: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x182208u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18220c:
    // 0x18220c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18220cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_182210:
    // 0x182210: 0x0  nop
    ctx->pc = 0x182210u;
    // NOP
label_182214:
    // 0x182214: 0xe30018  mult        $zero, $a3, $v1
    ctx->pc = 0x182214u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_182218:
    // 0x182218: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x182218u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_18221c:
    // 0x18221c: 0x0  nop
    ctx->pc = 0x18221cu;
    // NOP
label_182220:
    // 0x182220: 0x1810  mfhi        $v1
    ctx->pc = 0x182220u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_182224:
    // 0x182224: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x182224u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_182228:
    // 0x182228: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x182228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18222c:
    // 0x18222c: 0xa2230022  sb          $v1, 0x22($s1)
    ctx->pc = 0x18222cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 3));
label_182230:
    // 0x182230: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x182230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182234:
    // 0x182234: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x182234u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_182238:
    // 0x182238: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x182238u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18223c:
    // 0x18223c: 0x0  nop
    ctx->pc = 0x18223cu;
    // NOP
label_182240:
    // 0x182240: 0xe30018  mult        $zero, $a3, $v1
    ctx->pc = 0x182240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_182244:
    // 0x182244: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x182244u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_182248:
    // 0x182248: 0x0  nop
    ctx->pc = 0x182248u;
    // NOP
label_18224c:
    // 0x18224c: 0x1810  mfhi        $v1
    ctx->pc = 0x18224cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_182250:
    // 0x182250: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x182250u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_182254:
    // 0x182254: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x182254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_182258:
    // 0x182258: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x182258u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
label_18225c:
    // 0x18225c: 0x92230022  lbu         $v1, 0x22($s1)
    ctx->pc = 0x18225cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_182260:
    // 0x182260: 0xa2430218  sb          $v1, 0x218($s2)
    ctx->pc = 0x182260u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 536), (uint8_t)GPR_U32(ctx, 3));
label_182264:
    // 0x182264: 0xa2230026  sb          $v1, 0x26($s1)
    ctx->pc = 0x182264u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 38), (uint8_t)GPR_U32(ctx, 3));
label_182268:
    // 0x182268: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x182268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_18226c:
    // 0x18226c: 0xa2430219  sb          $v1, 0x219($s2)
    ctx->pc = 0x18226cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 537), (uint8_t)GPR_U32(ctx, 3));
label_182270:
    // 0x182270: 0xa2230027  sb          $v1, 0x27($s1)
    ctx->pc = 0x182270u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 39), (uint8_t)GPR_U32(ctx, 3));
label_182274:
    // 0x182274: 0xc6400150  lwc1        $f0, 0x150($s2)
    ctx->pc = 0x182274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182278:
    // 0x182278: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x182278u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18227c:
    // 0x18227c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18227cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_182280:
    // 0x182280: 0x0  nop
    ctx->pc = 0x182280u;
    // NOP
label_182284:
    // 0x182284: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x182284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_182288:
    // 0x182288: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x182288u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_18228c:
    // 0x18228c: 0x0  nop
    ctx->pc = 0x18228cu;
    // NOP
label_182290:
    // 0x182290: 0x1810  mfhi        $v1
    ctx->pc = 0x182290u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_182294:
    // 0x182294: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x182294u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_182298:
    // 0x182298: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x182298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18229c:
    // 0x18229c: 0xa243021a  sb          $v1, 0x21A($s2)
    ctx->pc = 0x18229cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 538), (uint8_t)GPR_U32(ctx, 3));
label_1822a0:
    // 0x1822a0: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x1822a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1822a4:
    // 0x1822a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1822a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1822a8:
    // 0x1822a8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1822a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1822ac:
    // 0x1822ac: 0x0  nop
    ctx->pc = 0x1822acu;
    // NOP
label_1822b0:
    // 0x1822b0: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x1822b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1822b4:
    // 0x1822b4: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1822b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1822b8:
    // 0x1822b8: 0x0  nop
    ctx->pc = 0x1822b8u;
    // NOP
label_1822bc:
    // 0x1822bc: 0x1810  mfhi        $v1
    ctx->pc = 0x1822bcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1822c0:
    // 0x1822c0: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x1822c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_1822c4:
    // 0x1822c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1822c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1822c8:
    // 0x1822c8: 0xa243021b  sb          $v1, 0x21B($s2)
    ctx->pc = 0x1822c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 539), (uint8_t)GPR_U32(ctx, 3));
label_1822cc:
    // 0x1822cc: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1822ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1822d0:
    // 0x1822d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1822d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1822d4:
    // 0x1822d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1822d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1822d8:
    // 0x1822d8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1822dc:
    if (ctx->pc == 0x1822DCu) {
        ctx->pc = 0x1822E0u;
        goto label_1822e0;
    }
    ctx->pc = 0x1822D8u;
    {
        const bool branch_taken_0x1822d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1822d8) {
            ctx->pc = 0x182338u;
            goto label_182338;
        }
    }
    ctx->pc = 0x1822E0u;
label_1822e0:
    // 0x1822e0: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1822e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1822e4:
    // 0x1822e4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1822e8:
    if (ctx->pc == 0x1822E8u) {
        ctx->pc = 0x1822ECu;
        goto label_1822ec;
    }
    ctx->pc = 0x1822E4u;
    {
        const bool branch_taken_0x1822e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1822e4) {
            ctx->pc = 0x182380u;
            goto label_182380;
        }
    }
    ctx->pc = 0x1822ECu;
label_1822ec:
    // 0x1822ec: 0x8c420190  lw          $v0, 0x190($v0)
    ctx->pc = 0x1822ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 400)));
label_1822f0:
    // 0x1822f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1822f4:
    if (ctx->pc == 0x1822F4u) {
        ctx->pc = 0x1822F8u;
        goto label_1822f8;
    }
    ctx->pc = 0x1822F0u;
    {
        const bool branch_taken_0x1822f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1822f0) {
            ctx->pc = 0x182308u;
            goto label_182308;
        }
    }
    ctx->pc = 0x1822F8u;
label_1822f8:
    // 0x1822f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1822f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1822fc:
    // 0x1822fc: 0xa242023f  sb          $v0, 0x23F($s2)
    ctx->pc = 0x1822fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 575), (uint8_t)GPR_U32(ctx, 2));
label_182300:
    // 0x182300: 0x1000001f  b           . + 4 + (0x1F << 2)
label_182304:
    if (ctx->pc == 0x182304u) {
        ctx->pc = 0x182304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182300u;
        // 0x182304: 0xa222003a  sb          $v0, 0x3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182308u;
        goto label_182308;
    }
    ctx->pc = 0x182300u;
    {
        const bool branch_taken_0x182300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182300u;
        // 0x182304: 0xa222003a  sb          $v0, 0x3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182300) {
            ctx->pc = 0x182380u;
            goto label_182380;
        }
    }
    ctx->pc = 0x182308u;
label_182308:
    // 0x182308: 0x94420056  lhu         $v0, 0x56($v0)
    ctx->pc = 0x182308u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 86)));
label_18230c:
    // 0x18230c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x18230cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_182310:
    // 0x182310: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_182314:
    if (ctx->pc == 0x182314u) {
        ctx->pc = 0x182318u;
        goto label_182318;
    }
    ctx->pc = 0x182310u;
    {
        const bool branch_taken_0x182310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182310) {
            ctx->pc = 0x182328u;
            goto label_182328;
        }
    }
    ctx->pc = 0x182318u;
label_182318:
    // 0x182318: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x182318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18231c:
    // 0x18231c: 0xa242023f  sb          $v0, 0x23F($s2)
    ctx->pc = 0x18231cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 575), (uint8_t)GPR_U32(ctx, 2));
label_182320:
    // 0x182320: 0x10000017  b           . + 4 + (0x17 << 2)
label_182324:
    if (ctx->pc == 0x182324u) {
        ctx->pc = 0x182324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182320u;
        // 0x182324: 0xa222003a  sb          $v0, 0x3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182328u;
        goto label_182328;
    }
    ctx->pc = 0x182320u;
    {
        const bool branch_taken_0x182320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182320u;
        // 0x182324: 0xa222003a  sb          $v0, 0x3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182320) {
            ctx->pc = 0x182380u;
            goto label_182380;
        }
    }
    ctx->pc = 0x182328u;
label_182328:
    // 0x182328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18232c:
    // 0x18232c: 0xa242023f  sb          $v0, 0x23F($s2)
    ctx->pc = 0x18232cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 575), (uint8_t)GPR_U32(ctx, 2));
label_182330:
    // 0x182330: 0x10000013  b           . + 4 + (0x13 << 2)
label_182334:
    if (ctx->pc == 0x182334u) {
        ctx->pc = 0x182334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182330u;
        // 0x182334: 0xa222003a  sb          $v0, 0x3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182338u;
        goto label_182338;
    }
    ctx->pc = 0x182330u;
    {
        const bool branch_taken_0x182330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182330u;
        // 0x182334: 0xa222003a  sb          $v0, 0x3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182330) {
            ctx->pc = 0x182380u;
            goto label_182380;
        }
    }
    ctx->pc = 0x182338u;
label_182338:
    // 0x182338: 0x8e420190  lw          $v0, 0x190($s2)
    ctx->pc = 0x182338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
label_18233c:
    // 0x18233c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_182340:
    if (ctx->pc == 0x182340u) {
        ctx->pc = 0x182344u;
        goto label_182344;
    }
    ctx->pc = 0x18233Cu;
    {
        const bool branch_taken_0x18233c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18233c) {
            ctx->pc = 0x182354u;
            goto label_182354;
        }
    }
    ctx->pc = 0x182344u;
label_182344:
    // 0x182344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182348:
    // 0x182348: 0xa242023f  sb          $v0, 0x23F($s2)
    ctx->pc = 0x182348u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 575), (uint8_t)GPR_U32(ctx, 2));
label_18234c:
    // 0x18234c: 0x1000000c  b           . + 4 + (0xC << 2)
label_182350:
    if (ctx->pc == 0x182350u) {
        ctx->pc = 0x182350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18234Cu;
        // 0x182350: 0xa222003a  sb          $v0, 0x3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182354u;
        goto label_182354;
    }
    ctx->pc = 0x18234Cu;
    {
        const bool branch_taken_0x18234c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18234Cu;
        // 0x182350: 0xa222003a  sb          $v0, 0x3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18234c) {
            ctx->pc = 0x182380u;
            goto label_182380;
        }
    }
    ctx->pc = 0x182354u;
label_182354:
    // 0x182354: 0x94420056  lhu         $v0, 0x56($v0)
    ctx->pc = 0x182354u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 86)));
label_182358:
    // 0x182358: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x182358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_18235c:
    // 0x18235c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_182360:
    if (ctx->pc == 0x182360u) {
        ctx->pc = 0x182364u;
        goto label_182364;
    }
    ctx->pc = 0x18235Cu;
    {
        const bool branch_taken_0x18235c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18235c) {
            ctx->pc = 0x182374u;
            goto label_182374;
        }
    }
    ctx->pc = 0x182364u;
label_182364:
    // 0x182364: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x182364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_182368:
    // 0x182368: 0xa242023f  sb          $v0, 0x23F($s2)
    ctx->pc = 0x182368u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 575), (uint8_t)GPR_U32(ctx, 2));
label_18236c:
    // 0x18236c: 0x10000004  b           . + 4 + (0x4 << 2)
label_182370:
    if (ctx->pc == 0x182370u) {
        ctx->pc = 0x182370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18236Cu;
        // 0x182370: 0xa222003a  sb          $v0, 0x3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182374u;
        goto label_182374;
    }
    ctx->pc = 0x18236Cu;
    {
        const bool branch_taken_0x18236c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18236Cu;
        // 0x182370: 0xa222003a  sb          $v0, 0x3A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18236c) {
            ctx->pc = 0x182380u;
            goto label_182380;
        }
    }
    ctx->pc = 0x182374u;
label_182374:
    // 0x182374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182378:
    // 0x182378: 0xa242023f  sb          $v0, 0x23F($s2)
    ctx->pc = 0x182378u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 575), (uint8_t)GPR_U32(ctx, 2));
label_18237c:
    // 0x18237c: 0xa222003a  sb          $v0, 0x3A($s1)
    ctx->pc = 0x18237cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 2));
label_182380:
    // 0x182380: 0xc62c001c  lwc1        $f12, 0x1C($s1)
    ctx->pc = 0x182380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_182384:
    // 0x182384: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x182384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_182388:
    // 0x182388: 0xc062900  jal         func_18A400
label_18238c:
    if (ctx->pc == 0x18238Cu) {
        ctx->pc = 0x18238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182388u;
        // 0x18238c: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182390u;
        goto label_182390;
    }
    ctx->pc = 0x182388u;
    SET_GPR_U32(ctx, 31, 0x182390u);
    ctx->pc = 0x18238Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182388u;
    // 0x18238c: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A400u;
    { ctx->pc = 0x18a400; return; }
    ctx->pc = 0x182390u;
label_182390:
    // 0x182390: 0x92440237  lbu         $a0, 0x237($s2)
    ctx->pc = 0x182390u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 567)));
label_182394:
    // 0x182394: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x182394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_182398:
    // 0x182398: 0x10830042  beq         $a0, $v1, . + 4 + (0x42 << 2)
label_18239c:
    if (ctx->pc == 0x18239Cu) {
        ctx->pc = 0x18239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182398u;
        // 0x18239c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1823A0u;
        goto label_1823a0;
    }
    ctx->pc = 0x182398u;
    {
        const bool branch_taken_0x182398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182398u;
        // 0x18239c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182398) {
            ctx->pc = 0x1824A4u;
            goto label_1824a4;
        }
    }
    ctx->pc = 0x1823A0u;
label_1823a0:
    // 0x1823a0: 0x10880012  beq         $a0, $t0, . + 4 + (0x12 << 2)
label_1823a4:
    if (ctx->pc == 0x1823A4u) {
        ctx->pc = 0x1823A8u;
        goto label_1823a8;
    }
    ctx->pc = 0x1823A0u;
    {
        const bool branch_taken_0x1823a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        if (branch_taken_0x1823a0) {
            ctx->pc = 0x1823ECu;
            goto label_1823ec;
        }
    }
    ctx->pc = 0x1823A8u;
label_1823a8:
    // 0x1823a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1823ac:
    if (ctx->pc == 0x1823ACu) {
        ctx->pc = 0x1823ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823A8u;
        // 0x1823ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1823B0u;
        goto label_1823b0;
    }
    ctx->pc = 0x1823A8u;
    {
        const bool branch_taken_0x1823a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1823ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823A8u;
        // 0x1823ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823a8) {
            ctx->pc = 0x1823B8u;
            goto label_1823b8;
        }
    }
    ctx->pc = 0x1823B0u;
label_1823b0:
    // 0x1823b0: 0x10000045  b           . + 4 + (0x45 << 2)
label_1823b4:
    if (ctx->pc == 0x1823B4u) {
        ctx->pc = 0x1823B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823B0u;
        // 0x1823b4: 0xa2200036  sb          $zero, 0x36($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1823B8u;
        goto label_1823b8;
    }
    ctx->pc = 0x1823B0u;
    {
        const bool branch_taken_0x1823b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1823B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823B0u;
        // 0x1823b4: 0xa2200036  sb          $zero, 0x36($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823b0) {
            ctx->pc = 0x1824C8u;
            goto label_1824c8;
        }
    }
    ctx->pc = 0x1823B8u;
label_1823b8:
    // 0x1823b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1823b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1823bc:
    // 0x1823bc: 0x26260038  addiu       $a2, $s1, 0x38
    ctx->pc = 0x1823bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_1823c0:
    // 0x1823c0: 0xc052d84  jal         func_14B610
label_1823c4:
    if (ctx->pc == 0x1823C4u) {
        ctx->pc = 0x1823C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823C0u;
        // 0x1823c4: 0x27a7004f  addiu       $a3, $sp, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1823C8u;
        goto label_1823c8;
    }
    ctx->pc = 0x1823C0u;
    SET_GPR_U32(ctx, 31, 0x1823C8u);
    ctx->pc = 0x1823C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1823C0u;
    // 0x1823c4: 0x27a7004f  addiu       $a3, $sp, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B610u, 0x1823C0u, 0x1823C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1823C8u;
label_1823c8:
    // 0x1823c8: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_1823cc:
    if (ctx->pc == 0x1823CCu) {
        ctx->pc = 0x1823D0u;
        goto label_1823d0;
    }
    ctx->pc = 0x1823C8u;
    {
        const bool branch_taken_0x1823c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1823c8) {
            ctx->pc = 0x1824CCu;
            goto label_1824cc;
        }
    }
    ctx->pc = 0x1823D0u;
label_1823d0:
    // 0x1823d0: 0x93a4004f  lbu         $a0, 0x4F($sp)
    ctx->pc = 0x1823d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 79)));
label_1823d4:
    // 0x1823d4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1823d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1823d8:
    // 0x1823d8: 0x1483003c  bne         $a0, $v1, . + 4 + (0x3C << 2)
label_1823dc:
    if (ctx->pc == 0x1823DCu) {
        ctx->pc = 0x1823DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823D8u;
        // 0x1823dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1823E0u;
        goto label_1823e0;
    }
    ctx->pc = 0x1823D8u;
    {
        const bool branch_taken_0x1823d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1823DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823D8u;
        // 0x1823dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823d8) {
            ctx->pc = 0x1824CCu;
            goto label_1824cc;
        }
    }
    ctx->pc = 0x1823E0u;
label_1823e0:
    // 0x1823e0: 0xa2430237  sb          $v1, 0x237($s2)
    ctx->pc = 0x1823e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 567), (uint8_t)GPR_U32(ctx, 3));
label_1823e4:
    // 0x1823e4: 0x10000039  b           . + 4 + (0x39 << 2)
label_1823e8:
    if (ctx->pc == 0x1823E8u) {
        ctx->pc = 0x1823E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823E4u;
        // 0x1823e8: 0xa2230036  sb          $v1, 0x36($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1823ECu;
        goto label_1823ec;
    }
    ctx->pc = 0x1823E4u;
    {
        const bool branch_taken_0x1823e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1823E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823E4u;
        // 0x1823e8: 0xa2230036  sb          $v1, 0x36($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823e4) {
            ctx->pc = 0x1824CCu;
            goto label_1824cc;
        }
    }
    ctx->pc = 0x1823ECu;
label_1823ec:
    // 0x1823ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1823ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1823f0:
    // 0x1823f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1823f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1823f4:
    // 0x1823f4: 0x26260038  addiu       $a2, $s1, 0x38
    ctx->pc = 0x1823f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_1823f8:
    // 0x1823f8: 0xc052d84  jal         func_14B610
label_1823fc:
    if (ctx->pc == 0x1823FCu) {
        ctx->pc = 0x1823FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823F8u;
        // 0x1823fc: 0x27a7004f  addiu       $a3, $sp, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182400u;
        goto label_182400;
    }
    ctx->pc = 0x1823F8u;
    SET_GPR_U32(ctx, 31, 0x182400u);
    ctx->pc = 0x1823FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1823F8u;
    // 0x1823fc: 0x27a7004f  addiu       $a3, $sp, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B610u, 0x1823F8u, 0x182400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182400u;
label_182400:
    // 0x182400: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_182404:
    if (ctx->pc == 0x182404u) {
        ctx->pc = 0x182408u;
        goto label_182408;
    }
    ctx->pc = 0x182400u;
    {
        const bool branch_taken_0x182400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182400) {
            ctx->pc = 0x182498u;
            goto label_182498;
        }
    }
    ctx->pc = 0x182408u;
label_182408:
    // 0x182408: 0x93a4004f  lbu         $a0, 0x4F($sp)
    ctx->pc = 0x182408u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 79)));
label_18240c:
    // 0x18240c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x18240cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_182410:
    // 0x182410: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
label_182414:
    if (ctx->pc == 0x182414u) {
        ctx->pc = 0x182414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182410u;
        // 0x182414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182418u;
        goto label_182418;
    }
    ctx->pc = 0x182410u;
    {
        const bool branch_taken_0x182410 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x182414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182410u;
        // 0x182414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182410) {
            ctx->pc = 0x182498u;
            goto label_182498;
        }
    }
    ctx->pc = 0x182418u;
label_182418:
    // 0x182418: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x182418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18241c:
    // 0x18241c: 0xc052530  jal         func_1494C0
label_182420:
    if (ctx->pc == 0x182420u) {
        ctx->pc = 0x182420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18241Cu;
        // 0x182420: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182424u;
        goto label_182424;
    }
    ctx->pc = 0x18241Cu;
    SET_GPR_U32(ctx, 31, 0x182424u);
    ctx->pc = 0x182420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18241Cu;
    // 0x182420: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1494C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1494C0u, 0x18241Cu, 0x182424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182424u;
label_182424:
    // 0x182424: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_182428:
    if (ctx->pc == 0x182428u) {
        ctx->pc = 0x182428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182424u;
        // 0x182428: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18242Cu;
        goto label_18242c;
    }
    ctx->pc = 0x182424u;
    {
        const bool branch_taken_0x182424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182424u;
        // 0x182428: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182424) {
            ctx->pc = 0x1824CCu;
            goto label_1824cc;
        }
    }
    ctx->pc = 0x18242Cu;
label_18242c:
    // 0x18242c: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x18242cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_182430:
    // 0x182430: 0xa2230036  sb          $v1, 0x36($s1)
    ctx->pc = 0x182430u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 3));
label_182434:
    // 0x182434: 0xa6240040  sh          $a0, 0x40($s1)
    ctx->pc = 0x182434u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 4));
label_182438:
    // 0x182438: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x182438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_18243c:
    // 0x18243c: 0x92440236  lbu         $a0, 0x236($s2)
    ctx->pc = 0x18243cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 566)));
label_182440:
    // 0x182440: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_182444:
    if (ctx->pc == 0x182444u) {
        ctx->pc = 0x182448u;
        goto label_182448;
    }
    ctx->pc = 0x182440u;
    {
        const bool branch_taken_0x182440 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x182440) {
            ctx->pc = 0x182488u;
            goto label_182488;
        }
    }
    ctx->pc = 0x182448u;
label_182448:
    // 0x182448: 0x101a00  sll         $v1, $s0, 8
    ctx->pc = 0x182448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
label_18244c:
    // 0x18244c: 0x92260038  lbu         $a2, 0x38($s1)
    ctx->pc = 0x18244cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
label_182450:
    // 0x182450: 0x702823  subu        $a1, $v1, $s0
    ctx->pc = 0x182450u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_182454:
    // 0x182454: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x182454u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_182458:
    // 0x182458: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x182458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_18245c:
    // 0x18245c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x18245cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_182460:
    // 0x182460: 0x246325a9  addiu       $v1, $v1, 0x25A9
    ctx->pc = 0x182460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9641));
label_182464:
    // 0x182464: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x182464u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_182468:
    // 0x182468: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x182468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18246c:
    // 0x18246c: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x18246cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_182470:
    // 0x182470: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x182470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_182474:
    // 0x182474: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x182474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_182478:
    // 0x182478: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x182478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_18247c:
    // 0x18247c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18247cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_182480:
    // 0x182480: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x182480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_182484:
    // 0x182484: 0xa2430236  sb          $v1, 0x236($s2)
    ctx->pc = 0x182484u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 566), (uint8_t)GPR_U32(ctx, 3));
label_182488:
    // 0x182488: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x182488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_18248c:
    // 0x18248c: 0xa2430237  sb          $v1, 0x237($s2)
    ctx->pc = 0x18248cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 567), (uint8_t)GPR_U32(ctx, 3));
label_182490:
    // 0x182490: 0x1000000e  b           . + 4 + (0xE << 2)
label_182494:
    if (ctx->pc == 0x182494u) {
        ctx->pc = 0x182494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182490u;
        // 0x182494: 0xa2230036  sb          $v1, 0x36($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182498u;
        goto label_182498;
    }
    ctx->pc = 0x182490u;
    {
        const bool branch_taken_0x182490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182490u;
        // 0x182494: 0xa2230036  sb          $v1, 0x36($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182490) {
            ctx->pc = 0x1824CCu;
            goto label_1824cc;
        }
    }
    ctx->pc = 0x182498u;
label_182498:
    // 0x182498: 0xa2400237  sb          $zero, 0x237($s2)
    ctx->pc = 0x182498u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 567), (uint8_t)GPR_U32(ctx, 0));
label_18249c:
    // 0x18249c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1824a0:
    if (ctx->pc == 0x1824A0u) {
        ctx->pc = 0x1824A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18249Cu;
        // 0x1824a0: 0xa2200036  sb          $zero, 0x36($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1824A4u;
        goto label_1824a4;
    }
    ctx->pc = 0x18249Cu;
    {
        const bool branch_taken_0x18249c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1824A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18249Cu;
        // 0x1824a0: 0xa2200036  sb          $zero, 0x36($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18249c) {
            ctx->pc = 0x1824CCu;
            goto label_1824cc;
        }
    }
    ctx->pc = 0x1824A4u;
label_1824a4:
    // 0x1824a4: 0x92250038  lbu         $a1, 0x38($s1)
    ctx->pc = 0x1824a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
label_1824a8:
    // 0x1824a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1824a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1824ac:
    // 0x1824ac: 0xc05257c  jal         func_1495F0
label_1824b0:
    if (ctx->pc == 0x1824B0u) {
        ctx->pc = 0x1824B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824ACu;
        // 0x1824b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1824B4u;
        goto label_1824b4;
    }
    ctx->pc = 0x1824ACu;
    SET_GPR_U32(ctx, 31, 0x1824B4u);
    ctx->pc = 0x1824B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1824ACu;
    // 0x1824b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1495F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1495F0u, 0x1824ACu, 0x1824B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1824B4u;
label_1824b4:
    // 0x1824b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1824b8:
    if (ctx->pc == 0x1824B8u) {
        ctx->pc = 0x1824B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824B4u;
        // 0x1824b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1824BCu;
        goto label_1824bc;
    }
    ctx->pc = 0x1824B4u;
    {
        const bool branch_taken_0x1824b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1824B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824B4u;
        // 0x1824b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1824b4) {
            ctx->pc = 0x1824CCu;
            goto label_1824cc;
        }
    }
    ctx->pc = 0x1824BCu;
label_1824bc:
    // 0x1824bc: 0xa2230036  sb          $v1, 0x36($s1)
    ctx->pc = 0x1824bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 3));
label_1824c0:
    // 0x1824c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1824c4:
    if (ctx->pc == 0x1824C4u) {
        ctx->pc = 0x1824C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824C0u;
        // 0x1824c4: 0xa2430237  sb          $v1, 0x237($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 567), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1824C8u;
        goto label_1824c8;
    }
    ctx->pc = 0x1824C0u;
    {
        const bool branch_taken_0x1824c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1824C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824C0u;
        // 0x1824c4: 0xa2430237  sb          $v1, 0x237($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 567), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1824c0) {
            ctx->pc = 0x1824CCu;
            goto label_1824cc;
        }
    }
    ctx->pc = 0x1824C8u;
label_1824c8:
    // 0x1824c8: 0xa2400237  sb          $zero, 0x237($s2)
    ctx->pc = 0x1824c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 567), (uint8_t)GPR_U32(ctx, 0));
label_1824cc:
    // 0x1824cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1824ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1824d0:
    // 0x1824d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1824d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1824d4:
    // 0x1824d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1824d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1824d8:
    // 0x1824d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1824d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1824dc:
    // 0x1824dc: 0x3e00008  jr          $ra
label_1824e0:
    if (ctx->pc == 0x1824E0u) {
        ctx->pc = 0x1824E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824DCu;
        // 0x1824e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1824E4u;
        goto label_1824e4;
    }
    ctx->pc = 0x1824DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1824E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824DCu;
        // 0x1824e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1824DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1824E4u;
label_1824e4:
    // 0x1824e4: 0x0  nop
    ctx->pc = 0x1824e4u;
    // NOP
label_1824e8:
    // 0x1824e8: 0x0  nop
    ctx->pc = 0x1824e8u;
    // NOP
label_1824ec:
    // 0x1824ec: 0x0  nop
    ctx->pc = 0x1824ecu;
    // NOP
label_1824f0:
    // 0x1824f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1824f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1824f4:
    // 0x1824f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1824f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1824f8:
    // 0x1824f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1824f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1824fc:
    // 0x1824fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1824fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_182500:
    // 0x182500: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x182500u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_182504:
    // 0x182504: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_182508:
    // 0x182508: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x182508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18250c:
    // 0x18250c: 0x9083023a  lbu         $v1, 0x23A($a0)
    ctx->pc = 0x18250cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 570)));
label_182510:
    // 0x182510: 0x14600228  bnez        $v1, . + 4 + (0x228 << 2)
label_182514:
    if (ctx->pc == 0x182514u) {
        ctx->pc = 0x182514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182510u;
        // 0x182514: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182518u;
        goto label_182518;
    }
    ctx->pc = 0x182510u;
    {
        const bool branch_taken_0x182510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x182514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182510u;
        // 0x182514: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182510) {
            ctx->pc = 0x182DB4u;
            { ctx->pc = 0x182db4; return; }
        }
    }
    ctx->pc = 0x182518u;
label_182518:
    // 0x182518: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x182518u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_18251c:
    // 0x18251c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18251cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182520:
    // 0x182520: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_182524:
    if (ctx->pc == 0x182524u) {
        ctx->pc = 0x182524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182520u;
        // 0x182524: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182528u;
        goto label_182528;
    }
    ctx->pc = 0x182520u;
    {
        const bool branch_taken_0x182520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x182524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182520u;
        // 0x182524: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182520) {
            ctx->pc = 0x182530u;
            goto label_182530;
        }
    }
    ctx->pc = 0x182528u;
label_182528:
    // 0x182528: 0xc060bac  jal         func_182EB0
label_18252c:
    if (ctx->pc == 0x18252Cu) {
        ctx->pc = 0x182530u;
        goto label_182530;
    }
    ctx->pc = 0x182528u;
    SET_GPR_U32(ctx, 31, 0x182530u);
    ctx->pc = 0x182EB0u;
    { ctx->pc = 0x182eb0; return; }
    ctx->pc = 0x182530u;
label_182530:
    // 0x182530: 0xc045a10  jal         func_116840
label_182534:
    if (ctx->pc == 0x182534u) {
        ctx->pc = 0x182534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182530u;
        // 0x182534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182538u;
        goto label_182538;
    }
    ctx->pc = 0x182530u;
    SET_GPR_U32(ctx, 31, 0x182538u);
    ctx->pc = 0x182534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182530u;
    // 0x182534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116840u, 0x182530u, 0x182538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182538u;
label_182538:
    // 0x182538: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x182538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_18253c:
    // 0x18253c: 0x8c224900  lw          $v0, 0x4900($at)
    ctx->pc = 0x18253cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_182540:
    // 0x182540: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_182544:
    if (ctx->pc == 0x182544u) {
        ctx->pc = 0x182544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182540u;
        // 0x182544: 0x30440007  andi        $a0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182548u;
        goto label_182548;
    }
    ctx->pc = 0x182540u;
    {
        const bool branch_taken_0x182540 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x182544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182540u;
        // 0x182544: 0x30440007  andi        $a0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182540) {
            ctx->pc = 0x182554u;
            goto label_182554;
        }
    }
    ctx->pc = 0x182548u;
label_182548:
    // 0x182548: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_18254c:
    if (ctx->pc == 0x18254Cu) {
        ctx->pc = 0x182550u;
        goto label_182550;
    }
    ctx->pc = 0x182548u;
    {
        const bool branch_taken_0x182548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x182548) {
            ctx->pc = 0x182554u;
            goto label_182554;
        }
    }
    ctx->pc = 0x182550u;
label_182550:
    // 0x182550: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x182550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
label_182554:
    // 0x182554: 0x92430238  lbu         $v1, 0x238($s2)
    ctx->pc = 0x182554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 568)));
label_182558:
    // 0x182558: 0x92420233  lbu         $v0, 0x233($s2)
    ctx->pc = 0x182558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 563)));
label_18255c:
    // 0x18255c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18255cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_182560:
    // 0x182560: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_182564:
    if (ctx->pc == 0x182564u) {
        ctx->pc = 0x182564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182560u;
        // 0x182564: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182568u;
        goto label_182568;
    }
    ctx->pc = 0x182560u;
    {
        const bool branch_taken_0x182560 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x182564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182560u;
        // 0x182564: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182560) {
            ctx->pc = 0x182574u;
            goto label_182574;
        }
    }
    ctx->pc = 0x182568u;
label_182568:
    // 0x182568: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_18256c:
    if (ctx->pc == 0x18256Cu) {
        ctx->pc = 0x182570u;
        goto label_182570;
    }
    ctx->pc = 0x182568u;
    {
        const bool branch_taken_0x182568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182568) {
            ctx->pc = 0x182574u;
            goto label_182574;
        }
    }
    ctx->pc = 0x182570u;
label_182570:
    // 0x182570: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x182570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_182574:
    // 0x182574: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_182578:
    if (ctx->pc == 0x182578u) {
        ctx->pc = 0x182578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182574u;
        // 0x182578: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18257Cu;
        goto label_18257c;
    }
    ctx->pc = 0x182574u;
    {
        const bool branch_taken_0x182574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x182578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182574u;
        // 0x182578: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182574) {
            ctx->pc = 0x18258Cu;
            goto label_18258c;
        }
    }
    ctx->pc = 0x18257Cu;
label_18257c:
    // 0x18257c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x18257cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_182580:
    // 0x182580: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x182580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_182584:
    // 0x182584: 0x146200fd  bne         $v1, $v0, . + 4 + (0xFD << 2)
label_182588:
    if (ctx->pc == 0x182588u) {
        ctx->pc = 0x182588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182584u;
        // 0x182588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18258Cu;
        goto label_18258c;
    }
    ctx->pc = 0x182584u;
    {
        const bool branch_taken_0x182584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x182588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182584u;
        // 0x182588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182584) {
            ctx->pc = 0x18297Cu;
            goto label_18297c;
        }
    }
    ctx->pc = 0x18258Cu;
label_18258c:
    // 0x18258c: 0x8243023d  lb          $v1, 0x23D($s2)
    ctx->pc = 0x18258cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_182590:
    // 0x182590: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x182590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_182594:
    // 0x182594: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x182594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_182598:
    // 0x182598: 0xa243023d  sb          $v1, 0x23D($s2)
    ctx->pc = 0x182598u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 3));
label_18259c:
    // 0x18259c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18259cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1825a0:
    // 0x1825a0: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x1825a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
label_1825a4:
    // 0x1825a4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1825a8:
    if (ctx->pc == 0x1825A8u) {
        ctx->pc = 0x1825A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825A4u;
        // 0x1825a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1825ACu;
        goto label_1825ac;
    }
    ctx->pc = 0x1825A4u;
    {
        const bool branch_taken_0x1825a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1825A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825A4u;
        // 0x1825a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825a4) {
            ctx->pc = 0x1825B8u;
            goto label_1825b8;
        }
    }
    ctx->pc = 0x1825ACu;
label_1825ac:
    // 0x1825ac: 0xa222003a  sb          $v0, 0x3A($s1)
    ctx->pc = 0x1825acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 2));
label_1825b0:
    // 0x1825b0: 0x10000013  b           . + 4 + (0x13 << 2)
label_1825b4:
    if (ctx->pc == 0x1825B4u) {
        ctx->pc = 0x1825B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825B0u;
        // 0x1825b4: 0xa242023f  sb          $v0, 0x23F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 575), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1825B8u;
        goto label_1825b8;
    }
    ctx->pc = 0x1825B0u;
    {
        const bool branch_taken_0x1825b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1825B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825B0u;
        // 0x1825b4: 0xa242023f  sb          $v0, 0x23F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 575), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825b0) {
            ctx->pc = 0x182600u;
            goto label_182600;
        }
    }
    ctx->pc = 0x1825B8u;
label_1825b8:
    // 0x1825b8: 0x9222003a  lbu         $v0, 0x3A($s1)
    ctx->pc = 0x1825b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
label_1825bc:
    // 0x1825bc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1825c0:
    if (ctx->pc == 0x1825C0u) {
        ctx->pc = 0x1825C4u;
        goto label_1825c4;
    }
    ctx->pc = 0x1825BCu;
    {
        const bool branch_taken_0x1825bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1825bc) {
            ctx->pc = 0x182600u;
            goto label_182600;
        }
    }
    ctx->pc = 0x1825C4u;
label_1825c4:
    // 0x1825c4: 0x8e420190  lw          $v0, 0x190($s2)
    ctx->pc = 0x1825c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
label_1825c8:
    // 0x1825c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1825cc:
    if (ctx->pc == 0x1825CCu) {
        ctx->pc = 0x1825D0u;
        goto label_1825d0;
    }
    ctx->pc = 0x1825C8u;
    {
        const bool branch_taken_0x1825c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1825c8) {
            ctx->pc = 0x1825DCu;
            goto label_1825dc;
        }
    }
    ctx->pc = 0x1825D0u;
label_1825d0:
    // 0x1825d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1825d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1825d4:
    // 0x1825d4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1825d8:
    if (ctx->pc == 0x1825D8u) {
        ctx->pc = 0x1825D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825D4u;
        // 0x1825d8: 0xa242023f  sb          $v0, 0x23F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 575), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1825DCu;
        goto label_1825dc;
    }
    ctx->pc = 0x1825D4u;
    {
        const bool branch_taken_0x1825d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1825D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825D4u;
        // 0x1825d8: 0xa242023f  sb          $v0, 0x23F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 575), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825d4) {
            ctx->pc = 0x182600u;
            goto label_182600;
        }
    }
    ctx->pc = 0x1825DCu;
label_1825dc:
    // 0x1825dc: 0x94420056  lhu         $v0, 0x56($v0)
    ctx->pc = 0x1825dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 86)));
label_1825e0:
    // 0x1825e0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1825e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1825e4:
    // 0x1825e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1825e8:
    if (ctx->pc == 0x1825E8u) {
        ctx->pc = 0x1825ECu;
        goto label_1825ec;
    }
    ctx->pc = 0x1825E4u;
    {
        const bool branch_taken_0x1825e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1825e4) {
            ctx->pc = 0x1825F8u;
            goto label_1825f8;
        }
    }
    ctx->pc = 0x1825ECu;
label_1825ec:
    // 0x1825ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1825ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1825f0:
    // 0x1825f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1825f4:
    if (ctx->pc == 0x1825F4u) {
        ctx->pc = 0x1825F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825F0u;
        // 0x1825f4: 0xa242023f  sb          $v0, 0x23F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 575), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1825F8u;
        goto label_1825f8;
    }
    ctx->pc = 0x1825F0u;
    {
        const bool branch_taken_0x1825f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1825F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825F0u;
        // 0x1825f4: 0xa242023f  sb          $v0, 0x23F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 575), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825f0) {
            ctx->pc = 0x182600u;
            goto label_182600;
        }
    }
    ctx->pc = 0x1825F8u;
label_1825f8:
    // 0x1825f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1825f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1825fc:
    // 0x1825fc: 0xa242023f  sb          $v0, 0x23F($s2)
    ctx->pc = 0x1825fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 575), (uint8_t)GPR_U32(ctx, 2));
label_182600:
    // 0x182600: 0xc6400150  lwc1        $f0, 0x150($s2)
    ctx->pc = 0x182600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182604:
    // 0x182604: 0x3c0268db  lui         $v0, 0x68DB
    ctx->pc = 0x182604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26843 << 16));
label_182608:
    // 0x182608: 0x34468bad  ori         $a2, $v0, 0x8BAD
    ctx->pc = 0x182608u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35757);
label_18260c:
    // 0x18260c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18260cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_182610:
    // 0x182610: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x182610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_182614:
    // 0x182614: 0x34454dd3  ori         $a1, $v0, 0x4DD3
    ctx->pc = 0x182614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_182618:
    // 0x182618: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x182618u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18261c:
    // 0x18261c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18261cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_182620:
    // 0x182620: 0x0  nop
    ctx->pc = 0x182620u;
    // NOP
label_182624:
    // 0x182624: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x182624u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_182628:
    // 0x182628: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x182628u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_18262c:
    // 0x18262c: 0x0  nop
    ctx->pc = 0x18262cu;
    // NOP
label_182630:
    // 0x182630: 0x1010  mfhi        $v0
    ctx->pc = 0x182630u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_182634:
    // 0x182634: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x182634u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_182638:
    // 0x182638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18263c:
    // 0x18263c: 0xa2420218  sb          $v0, 0x218($s2)
    ctx->pc = 0x18263cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 536), (uint8_t)GPR_U32(ctx, 2));
label_182640:
    // 0x182640: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x182640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182644:
    // 0x182644: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x182644u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_182648:
    // 0x182648: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x182648u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_18264c:
    // 0x18264c: 0x0  nop
    ctx->pc = 0x18264cu;
    // NOP
label_182650:
    // 0x182650: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x182650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_182654:
    // 0x182654: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x182654u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_182658:
    // 0x182658: 0x0  nop
    ctx->pc = 0x182658u;
    // NOP
label_18265c:
    // 0x18265c: 0x1010  mfhi        $v0
    ctx->pc = 0x18265cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_182660:
    // 0x182660: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x182660u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_182664:
    // 0x182664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_182668:
    // 0x182668: 0xa2420219  sb          $v0, 0x219($s2)
    ctx->pc = 0x182668u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 537), (uint8_t)GPR_U32(ctx, 2));
label_18266c:
    // 0x18266c: 0xc6400150  lwc1        $f0, 0x150($s2)
    ctx->pc = 0x18266cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_182670:
    // 0x182670: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x182670u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_182674:
    // 0x182674: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x182674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_182678:
    // 0x182678: 0x0  nop
    ctx->pc = 0x182678u;
    // NOP
label_18267c:
    // 0x18267c: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x18267cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_182680:
    // 0x182680: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x182680u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_182684:
    // 0x182684: 0x0  nop
    ctx->pc = 0x182684u;
    // NOP
label_182688:
    // 0x182688: 0x1010  mfhi        $v0
    ctx->pc = 0x182688u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18268c:
    // 0x18268c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x18268cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_182690:
    // 0x182690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_182694:
    // 0x182694: 0xa242021a  sb          $v0, 0x21A($s2)
    ctx->pc = 0x182694u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 538), (uint8_t)GPR_U32(ctx, 2));
label_182698:
    // 0x182698: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x182698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18269c:
    // 0x18269c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18269cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1826a0:
    // 0x1826a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1826a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1826a4:
    // 0x1826a4: 0x0  nop
    ctx->pc = 0x1826a4u;
    // NOP
label_1826a8:
    // 0x1826a8: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x1826a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1826ac:
    // 0x1826ac: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1826acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1826b0:
    // 0x1826b0: 0x0  nop
    ctx->pc = 0x1826b0u;
    // NOP
label_1826b4:
    // 0x1826b4: 0x1010  mfhi        $v0
    ctx->pc = 0x1826b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1826b8:
    // 0x1826b8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1826b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1826bc:
    // 0x1826bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1826bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1826c0:
    // 0x1826c0: 0xc062b5c  jal         func_18AD70
label_1826c4:
    if (ctx->pc == 0x1826C4u) {
        ctx->pc = 0x1826C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826C0u;
        // 0x1826c4: 0xa242021b  sb          $v0, 0x21B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 539), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1826C8u;
        goto label_1826c8;
    }
    ctx->pc = 0x1826C0u;
    SET_GPR_U32(ctx, 31, 0x1826C8u);
    ctx->pc = 0x1826C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1826C0u;
    // 0x1826c4: 0xa242021b  sb          $v0, 0x21B($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 539), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    { ctx->pc = 0x18ad70; return; }
    ctx->pc = 0x1826C8u;
label_1826c8:
    // 0x1826c8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1826cc:
    if (ctx->pc == 0x1826CCu) {
        ctx->pc = 0x1826D0u;
        goto label_1826d0;
    }
    ctx->pc = 0x1826C8u;
    {
        const bool branch_taken_0x1826c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1826c8) {
            ctx->pc = 0x182710u;
            goto label_182710;
        }
    }
    ctx->pc = 0x1826D0u;
label_1826d0:
    // 0x1826d0: 0xae400194  sw          $zero, 0x194($s2)
    ctx->pc = 0x1826d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 0));
label_1826d4:
    // 0x1826d4: 0x92430233  lbu         $v1, 0x233($s2)
    ctx->pc = 0x1826d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 563)));
label_1826d8:
    // 0x1826d8: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x1826d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
label_1826dc:
    // 0x1826dc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1826e0:
    if (ctx->pc == 0x1826E0u) {
        ctx->pc = 0x1826E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826DCu;
        // 0x1826e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1826E4u;
        goto label_1826e4;
    }
    ctx->pc = 0x1826DCu;
    {
        const bool branch_taken_0x1826dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1826E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826DCu;
        // 0x1826e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1826dc) {
            ctx->pc = 0x1826FCu;
            goto label_1826fc;
        }
    }
    ctx->pc = 0x1826E4u;
label_1826e4:
    // 0x1826e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1826e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1826e8:
    // 0x1826e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1826e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1826ec:
    // 0x1826ec: 0xc060cf0  jal         func_1833C0
label_1826f0:
    if (ctx->pc == 0x1826F0u) {
        ctx->pc = 0x1826F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826ECu;
        // 0x1826f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1826F4u;
        goto label_1826f4;
    }
    ctx->pc = 0x1826ECu;
    SET_GPR_U32(ctx, 31, 0x1826F4u);
    ctx->pc = 0x1826F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1826ECu;
    // 0x1826f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1833C0u;
    { ctx->pc = 0x1833c0; return; }
    ctx->pc = 0x1826F4u;
label_1826f4:
    // 0x1826f4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1826f8:
    if (ctx->pc == 0x1826F8u) {
        ctx->pc = 0x1826F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826F4u;
        // 0x1826f8: 0x92460244  lbu         $a2, 0x244($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1826FCu;
        goto label_1826fc;
    }
    ctx->pc = 0x1826F4u;
    {
        const bool branch_taken_0x1826f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1826F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1826F4u;
        // 0x1826f8: 0x92460244  lbu         $a2, 0x244($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1826f4) {
            ctx->pc = 0x182740u;
            goto label_182740;
        }
    }
    ctx->pc = 0x1826FCu;
label_1826fc:
    // 0x1826fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1826fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182700:
    // 0x182700: 0xc060cac  jal         func_1832B0
label_182704:
    if (ctx->pc == 0x182704u) {
        ctx->pc = 0x182704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182700u;
        // 0x182704: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182708u;
        goto label_182708;
    }
    ctx->pc = 0x182700u;
    SET_GPR_U32(ctx, 31, 0x182708u);
    ctx->pc = 0x182704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182700u;
    // 0x182704: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1832B0u;
    { ctx->pc = 0x1832b0; return; }
    ctx->pc = 0x182708u;
label_182708:
    // 0x182708: 0x1000000c  b           . + 4 + (0xC << 2)
label_18270c:
    if (ctx->pc == 0x18270Cu) {
        ctx->pc = 0x182710u;
        goto label_182710;
    }
    ctx->pc = 0x182708u;
    {
        const bool branch_taken_0x182708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182708) {
            ctx->pc = 0x18273Cu;
            goto label_18273c;
        }
    }
    ctx->pc = 0x182710u;
label_182710:
    // 0x182710: 0x92440233  lbu         $a0, 0x233($s2)
    ctx->pc = 0x182710u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 563)));
label_182714:
    // 0x182714: 0x9203002d  lbu         $v1, 0x2D($s0)
    ctx->pc = 0x182714u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
label_182718:
    // 0x182718: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_18271c:
    if (ctx->pc == 0x18271Cu) {
        ctx->pc = 0x18271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182718u;
        // 0x18271c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182720u;
        goto label_182720;
    }
    ctx->pc = 0x182718u;
    {
        const bool branch_taken_0x182718 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182718u;
        // 0x18271c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182718) {
            ctx->pc = 0x18273Cu;
            goto label_18273c;
        }
    }
    ctx->pc = 0x182720u;
label_182720:
    // 0x182720: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x182720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_182724:
    // 0x182724: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x182724u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_182728:
    // 0x182728: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_18272c:
    if (ctx->pc == 0x18272Cu) {
        ctx->pc = 0x18272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182728u;
        // 0x18272c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182730u;
        goto label_182730;
    }
    ctx->pc = 0x182728u;
    {
        const bool branch_taken_0x182728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182728u;
        // 0x18272c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182728) {
            ctx->pc = 0x18273Cu;
            goto label_18273c;
        }
    }
    ctx->pc = 0x182730u;
label_182730:
    // 0x182730: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x182730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182734:
    // 0x182734: 0xc060f18  jal         func_183C60
label_182738:
    if (ctx->pc == 0x182738u) {
        ctx->pc = 0x182738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182734u;
        // 0x182738: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18273Cu;
        goto label_18273c;
    }
    ctx->pc = 0x182734u;
    SET_GPR_U32(ctx, 31, 0x18273Cu);
    ctx->pc = 0x182738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182734u;
    // 0x182738: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183C60u;
    { ctx->pc = 0x183c60; return; }
    ctx->pc = 0x18273Cu;
label_18273c:
    // 0x18273c: 0x92460244  lbu         $a2, 0x244($s2)
    ctx->pc = 0x18273cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 580)));
label_182740:
    // 0x182740: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x182740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_182744:
    // 0x182744: 0x8643003c  lh          $v1, 0x3C($s2)
    ctx->pc = 0x182744u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_182748:
    // 0x182748: 0x2484aec4  addiu       $a0, $a0, -0x513C
    ctx->pc = 0x182748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946500));
label_18274c:
    // 0x18274c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x18274cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_182750:
    // 0x182750: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x182750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_182754:
    // 0x182754: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x182754u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_182758:
    // 0x182758: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x182758u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_18275c:
    // 0x18275c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18275cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_182760:
    // 0x182760: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x182760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_182764:
    // 0x182764: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x182764u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182768:
    // 0x182768: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_18276c:
    if (ctx->pc == 0x18276Cu) {
        ctx->pc = 0x18276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182768u;
        // 0x18276c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x182770u;
        goto label_182770;
    }
    ctx->pc = 0x182768u;
    {
        const bool branch_taken_0x182768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182768u;
        // 0x18276c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x182768) {
            ctx->pc = 0x182778u;
            goto label_182778;
        }
    }
    ctx->pc = 0x182770u;
label_182770:
    // 0x182770: 0x10000002  b           . + 4 + (0x2 << 2)
label_182774:
    if (ctx->pc == 0x182774u) {
        ctx->pc = 0x182774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182770u;
        // 0x182774: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182778u;
        goto label_182778;
    }
    ctx->pc = 0x182770u;
    {
        const bool branch_taken_0x182770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182770u;
        // 0x182774: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182770) {
            ctx->pc = 0x18277Cu;
            goto label_18277c;
        }
    }
    ctx->pc = 0x182778u;
label_182778:
    // 0x182778: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x182778u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18277c:
    // 0x18277c: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
label_182780:
    if (ctx->pc == 0x182780u) {
        ctx->pc = 0x182784u;
        goto label_182784;
    }
    ctx->pc = 0x18277Cu;
    {
        const bool branch_taken_0x18277c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18277c) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x182784u;
label_182784:
    // 0x182784: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x182784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_182788:
    // 0x182788: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x182788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
label_18278c:
    // 0x18278c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_182790:
    if (ctx->pc == 0x182790u) {
        ctx->pc = 0x182790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18278Cu;
        // 0x182790: 0x328c3  sra         $a1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182794u;
        goto label_182794;
    }
    ctx->pc = 0x18278Cu;
    {
        const bool branch_taken_0x18278c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x182790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18278Cu;
        // 0x182790: 0x328c3  sra         $a1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18278c) {
            ctx->pc = 0x18279Cu;
            goto label_18279c;
        }
    }
    ctx->pc = 0x182794u;
label_182794:
    // 0x182794: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x182794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_182798:
    // 0x182798: 0x328c3  sra         $a1, $v1, 3
    ctx->pc = 0x182798u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 3));
label_18279c:
    // 0x18279c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x18279cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1827a0:
    // 0x1827a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1827a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1827a4:
    // 0x1827a4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1827a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1827a8:
    // 0x1827a8: 0x0  nop
    ctx->pc = 0x1827a8u;
    // NOP
label_1827ac:
    // 0x1827ac: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1827b0:
    if (ctx->pc == 0x1827B0u) {
        ctx->pc = 0x1827B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827ACu;
        // 0x1827b0: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1827B4u;
        goto label_1827b4;
    }
    ctx->pc = 0x1827ACu;
    {
        const bool branch_taken_0x1827ac = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1827B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827ACu;
        // 0x1827b0: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1827ac) {
            ctx->pc = 0x1827BCu;
            goto label_1827bc;
        }
    }
    ctx->pc = 0x1827B4u;
label_1827b4:
    // 0x1827b4: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x1827b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_1827b8:
    // 0x1827b8: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1827b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1827bc:
    // 0x1827bc: 0x14a3005e  bne         $a1, $v1, . + 4 + (0x5E << 2)
label_1827c0:
    if (ctx->pc == 0x1827C0u) {
        ctx->pc = 0x1827C4u;
        goto label_1827c4;
    }
    ctx->pc = 0x1827BCu;
    {
        const bool branch_taken_0x1827bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1827bc) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x1827C4u;
label_1827c4:
    // 0x1827c4: 0x92440231  lbu         $a0, 0x231($s2)
    ctx->pc = 0x1827c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 561)));
label_1827c8:
    // 0x1827c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1827c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1827cc:
    // 0x1827cc: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
label_1827d0:
    if (ctx->pc == 0x1827D0u) {
        ctx->pc = 0x1827D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827CCu;
        // 0x1827d0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1827D4u;
        goto label_1827d4;
    }
    ctx->pc = 0x1827CCu;
    {
        const bool branch_taken_0x1827cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1827D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827CCu;
        // 0x1827d0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1827cc) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x1827D4u;
label_1827d4:
    // 0x1827d4: 0x10830058  beq         $a0, $v1, . + 4 + (0x58 << 2)
label_1827d8:
    if (ctx->pc == 0x1827D8u) {
        ctx->pc = 0x1827D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827D4u;
        // 0x1827d8: 0x46010802  mul.s       $f0, $f1, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1827DCu;
        goto label_1827dc;
    }
    ctx->pc = 0x1827D4u;
    {
        const bool branch_taken_0x1827d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1827D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1827D4u;
        // 0x1827d8: 0x46010802  mul.s       $f0, $f1, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1827d4) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x1827DCu;
label_1827dc:
    // 0x1827dc: 0xc6410260  lwc1        $f1, 0x260($s2)
    ctx->pc = 0x1827dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1827e0:
    // 0x1827e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1827e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1827e4:
    // 0x1827e4: 0x0  nop
    ctx->pc = 0x1827e4u;
    // NOP
label_1827e8:
    // 0x1827e8: 0x45000053  bc1f        . + 4 + (0x53 << 2)
label_1827ec:
    if (ctx->pc == 0x1827ECu) {
        ctx->pc = 0x1827F0u;
        goto label_1827f0;
    }
    ctx->pc = 0x1827E8u;
    {
        const bool branch_taken_0x1827e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1827e8) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x1827F0u;
label_1827f0:
    // 0x1827f0: 0xc6420264  lwc1        $f2, 0x264($s2)
    ctx->pc = 0x1827f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1827f4:
    // 0x1827f4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1827f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1827f8:
    // 0x1827f8: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x1827f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1827fc:
    // 0x1827fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1827fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_182800:
    // 0x182800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182804:
    // 0x182804: 0x0  nop
    ctx->pc = 0x182804u;
    // NOP
label_182808:
    // 0x182808: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x182808u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_18280c:
    // 0x18280c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18280cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182810:
    // 0x182810: 0x0  nop
    ctx->pc = 0x182810u;
    // NOP
label_182814:
    // 0x182814: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_182818:
    if (ctx->pc == 0x182818u) {
        ctx->pc = 0x182818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182814u;
        // 0x182818: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18281Cu;
        goto label_18281c;
    }
    ctx->pc = 0x182814u;
    {
        const bool branch_taken_0x182814 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182814u;
        // 0x182818: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182814) {
            ctx->pc = 0x182830u;
            goto label_182830;
        }
    }
    ctx->pc = 0x18281Cu;
label_18281c:
    // 0x18281c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18281cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_182820:
    // 0x182820: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x182820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_182824:
    // 0x182824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182828:
    // 0x182828: 0x1000000d  b           . + 4 + (0xD << 2)
label_18282c:
    if (ctx->pc == 0x18282Cu) {
        ctx->pc = 0x18282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182828u;
        // 0x18282c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182830u;
        goto label_182830;
    }
    ctx->pc = 0x182828u;
    {
        const bool branch_taken_0x182828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182828u;
        // 0x18282c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182828) {
            ctx->pc = 0x182860u;
            goto label_182860;
        }
    }
    ctx->pc = 0x182830u;
label_182830:
    // 0x182830: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x182830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_182834:
    // 0x182834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182838:
    // 0x182838: 0x0  nop
    ctx->pc = 0x182838u;
    // NOP
label_18283c:
    // 0x18283c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18283cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182840:
    // 0x182840: 0x0  nop
    ctx->pc = 0x182840u;
    // NOP
label_182844:
    // 0x182844: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_182848:
    if (ctx->pc == 0x182848u) {
        ctx->pc = 0x18284Cu;
        goto label_18284c;
    }
    ctx->pc = 0x182844u;
    {
        const bool branch_taken_0x182844 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182844) {
            ctx->pc = 0x182860u;
            goto label_182860;
        }
    }
    ctx->pc = 0x18284Cu;
label_18284c:
    // 0x18284c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18284cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_182850:
    // 0x182850: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x182850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_182854:
    // 0x182854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182858:
    // 0x182858: 0x10000001  b           . + 4 + (0x1 << 2)
label_18285c:
    if (ctx->pc == 0x18285Cu) {
        ctx->pc = 0x18285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182858u;
        // 0x18285c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x182860u;
        goto label_182860;
    }
    ctx->pc = 0x182858u;
    {
        const bool branch_taken_0x182858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182858u;
        // 0x18285c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182858) {
            ctx->pc = 0x182860u;
            goto label_182860;
        }
    }
    ctx->pc = 0x182860u;
label_182860:
    // 0x182860: 0xc06d448  jal         func_1B5120
label_182864:
    if (ctx->pc == 0x182864u) {
        ctx->pc = 0x182868u;
        goto label_182868;
    }
    ctx->pc = 0x182860u;
    SET_GPR_U32(ctx, 31, 0x182868u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x182868u;
label_182868:
    // 0x182868: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x182868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
label_18286c:
    // 0x18286c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18286cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_182870:
    // 0x182870: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x182870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_182874:
    // 0x182874: 0x0  nop
    ctx->pc = 0x182874u;
    // NOP
label_182878:
    // 0x182878: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x182878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18287c:
    // 0x18287c: 0x0  nop
    ctx->pc = 0x18287cu;
    // NOP
label_182880:
    // 0x182880: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_182884:
    if (ctx->pc == 0x182884u) {
        ctx->pc = 0x182888u;
        goto label_182888;
    }
    ctx->pc = 0x182880u;
    {
        const bool branch_taken_0x182880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182880) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x182888u;
label_182888:
    // 0x182888: 0x92440236  lbu         $a0, 0x236($s2)
    ctx->pc = 0x182888u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 566)));
label_18288c:
    // 0x18288c: 0x2881004a  slti        $at, $a0, 0x4A
    ctx->pc = 0x18288cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)74) ? 1 : 0);
label_182890:
    // 0x182890: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_182894:
    if (ctx->pc == 0x182894u) {
        ctx->pc = 0x182898u;
        goto label_182898;
    }
    ctx->pc = 0x182890u;
    {
        const bool branch_taken_0x182890 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x182890) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x182898u;
label_182898:
    // 0x182898: 0x92430235  lbu         $v1, 0x235($s2)
    ctx->pc = 0x182898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 565)));
label_18289c:
    // 0x18289c: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x18289cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_1828a0:
    // 0x1828a0: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
label_1828a4:
    if (ctx->pc == 0x1828A4u) {
        ctx->pc = 0x1828A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1828A0u;
        // 0x1828a4: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1828A8u;
        goto label_1828a8;
    }
    ctx->pc = 0x1828A0u;
    {
        const bool branch_taken_0x1828a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1828A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1828A0u;
        // 0x1828a4: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1828a0) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x1828A8u;
label_1828a8:
    // 0x1828a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1828a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1828ac:
    // 0x1828ac: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1828acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1828b0:
    // 0x1828b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1828b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1828b4:
    // 0x1828b4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1828b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1828b8:
    // 0x1828b8: 0x8f8484e0  lw          $a0, -0x7B20($gp)
    ctx->pc = 0x1828b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1828bc:
    // 0x1828bc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1828bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1828c0:
    // 0x1828c0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1828c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1828c4:
    // 0x1828c4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1828c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1828c8:
    // 0x1828c8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1828c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1828cc:
    // 0x1828cc: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
label_1828d0:
    if (ctx->pc == 0x1828D0u) {
        ctx->pc = 0x1828D4u;
        goto label_1828d4;
    }
    ctx->pc = 0x1828CCu;
    {
        const bool branch_taken_0x1828cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1828cc) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x1828D4u;
label_1828d4:
    // 0x1828d4: 0x90a30232  lbu         $v1, 0x232($a1)
    ctx->pc = 0x1828d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
label_1828d8:
    // 0x1828d8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1828dc:
    if (ctx->pc == 0x1828DCu) {
        ctx->pc = 0x1828E0u;
        goto label_1828e0;
    }
    ctx->pc = 0x1828D8u;
    {
        const bool branch_taken_0x1828d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1828d8) {
            ctx->pc = 0x1828F8u;
            goto label_1828f8;
        }
    }
    ctx->pc = 0x1828E0u;
label_1828e0:
    // 0x1828e0: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1828e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1828e4:
    // 0x1828e4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1828e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1828e8:
    // 0x1828e8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1828e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1828ec:
    // 0x1828ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1828ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1828f0:
    // 0x1828f0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_1828f4:
    if (ctx->pc == 0x1828F4u) {
        ctx->pc = 0x1828F8u;
        goto label_1828f8;
    }
    ctx->pc = 0x1828F0u;
    {
        const bool branch_taken_0x1828f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1828f0) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x1828F8u;
label_1828f8:
    // 0x1828f8: 0x924301a2  lbu         $v1, 0x1A2($s2)
    ctx->pc = 0x1828f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 418)));
label_1828fc:
    // 0x1828fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_182900:
    if (ctx->pc == 0x182900u) {
        ctx->pc = 0x182904u;
        goto label_182904;
    }
    ctx->pc = 0x1828FCu;
    {
        const bool branch_taken_0x1828fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1828fc) {
            ctx->pc = 0x182910u;
            goto label_182910;
        }
    }
    ctx->pc = 0x182904u;
label_182904:
    // 0x182904: 0x90a301a2  lbu         $v1, 0x1A2($a1)
    ctx->pc = 0x182904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 418)));
label_182908:
    // 0x182908: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_18290c:
    if (ctx->pc == 0x18290Cu) {
        ctx->pc = 0x182910u;
        goto label_182910;
    }
    ctx->pc = 0x182908u;
    {
        const bool branch_taken_0x182908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x182908) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x182910u;
label_182910:
    // 0x182910: 0x90a3023b  lbu         $v1, 0x23B($a1)
    ctx->pc = 0x182910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 571)));
label_182914:
    // 0x182914: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_182918:
    if (ctx->pc == 0x182918u) {
        ctx->pc = 0x18291Cu;
        goto label_18291c;
    }
    ctx->pc = 0x182914u;
    {
        const bool branch_taken_0x182914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182914) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x18291Cu;
label_18291c:
    // 0x18291c: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x18291cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_182920:
    // 0x182920: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x182920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_182924:
    // 0x182924: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x182924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_182928:
    // 0x182928: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_18292c:
    if (ctx->pc == 0x18292Cu) {
        ctx->pc = 0x18292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182928u;
        // 0x18292c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182930u;
        goto label_182930;
    }
    ctx->pc = 0x182928u;
    {
        const bool branch_taken_0x182928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182928u;
        // 0x18292c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182928) {
            ctx->pc = 0x182938u;
            goto label_182938;
        }
    }
    ctx->pc = 0x182930u;
label_182930:
    // 0x182930: 0xc040930  jal         func_1024C0
label_182934:
    if (ctx->pc == 0x182934u) {
        ctx->pc = 0x182938u;
        goto label_182938;
    }
    ctx->pc = 0x182930u;
    SET_GPR_U32(ctx, 31, 0x182938u);
    ctx->pc = 0x1024C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1024C0u, 0x182930u, 0x182938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182938u;
label_182938:
    // 0x182938: 0x8644003c  lh          $a0, 0x3C($s2)
    ctx->pc = 0x182938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_18293c:
    // 0x18293c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x18293cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_182940:
    // 0x182940: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_182944:
    if (ctx->pc == 0x182944u) {
        ctx->pc = 0x182944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182940u;
        // 0x182944: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182948u;
        goto label_182948;
    }
    ctx->pc = 0x182940u;
    {
        const bool branch_taken_0x182940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x182944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182940u;
        // 0x182944: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182940) {
            ctx->pc = 0x18296Cu;
            goto label_18296c;
        }
    }
    ctx->pc = 0x182948u;
label_182948:
    // 0x182948: 0x14830103  bne         $a0, $v1, . + 4 + (0x103 << 2)
label_18294c:
    if (ctx->pc == 0x18294Cu) {
        ctx->pc = 0x182950u;
        goto label_182950;
    }
    ctx->pc = 0x182948u;
    {
        const bool branch_taken_0x182948 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x182948) {
            ctx->pc = 0x182D58u;
            { ctx->pc = 0x182d58; return; }
        }
    }
    ctx->pc = 0x182950u;
label_182950:
    // 0x182950: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x182950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_182954:
    // 0x182954: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x182954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_182958:
    // 0x182958: 0x0  nop
    ctx->pc = 0x182958u;
    // NOP
label_18295c:
    // 0x18295c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18295cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_182960:
    // 0x182960: 0x0  nop
    ctx->pc = 0x182960u;
    // NOP
label_182964:
    // 0x182964: 0x450000fc  bc1f        . + 4 + (0xFC << 2)
label_182968:
    if (ctx->pc == 0x182968u) {
        ctx->pc = 0x18296Cu;
        goto label_18296c;
    }
    ctx->pc = 0x182964u;
    {
        const bool branch_taken_0x182964 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182964) {
            ctx->pc = 0x182D58u;
            { ctx->pc = 0x182d58; return; }
        }
    }
    ctx->pc = 0x18296Cu;
label_18296c:
    // 0x18296c: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x18296cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_182970:
    // 0x182970: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x182970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_182974:
    // 0x182974: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_182978:
    if (ctx->pc == 0x182978u) {
        ctx->pc = 0x182978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182974u;
        // 0x182978: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18297Cu;
        goto label_18297c;
    }
    ctx->pc = 0x182974u;
    {
        const bool branch_taken_0x182974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182974u;
        // 0x182978: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182974) {
            ctx->pc = 0x182D58u;
            { ctx->pc = 0x182d58; return; }
        }
    }
    ctx->pc = 0x18297Cu;
label_18297c:
    // 0x18297c: 0xc062ca4  jal         func_18B290
    ctx->pc = 0x182980u;
    return;
}
