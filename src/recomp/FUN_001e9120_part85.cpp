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


void FUN_001e9120_part85(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x212160u: goto label_212160;
        case 0x212164u: goto label_212164;
        case 0x212168u: goto label_212168;
        case 0x21216cu: goto label_21216c;
        case 0x212170u: goto label_212170;
        case 0x212174u: goto label_212174;
        case 0x212178u: goto label_212178;
        case 0x21217cu: goto label_21217c;
        case 0x212180u: goto label_212180;
        case 0x212184u: goto label_212184;
        case 0x212188u: goto label_212188;
        case 0x21218cu: goto label_21218c;
        case 0x212190u: goto label_212190;
        case 0x212194u: goto label_212194;
        case 0x212198u: goto label_212198;
        case 0x21219cu: goto label_21219c;
        case 0x2121a0u: goto label_2121a0;
        case 0x2121a4u: goto label_2121a4;
        case 0x2121a8u: goto label_2121a8;
        case 0x2121acu: goto label_2121ac;
        case 0x2121b0u: goto label_2121b0;
        case 0x2121b4u: goto label_2121b4;
        case 0x2121b8u: goto label_2121b8;
        case 0x2121bcu: goto label_2121bc;
        case 0x2121c0u: goto label_2121c0;
        case 0x2121c4u: goto label_2121c4;
        case 0x2121c8u: goto label_2121c8;
        case 0x2121ccu: goto label_2121cc;
        case 0x2121d0u: goto label_2121d0;
        case 0x2121d4u: goto label_2121d4;
        case 0x2121d8u: goto label_2121d8;
        case 0x2121dcu: goto label_2121dc;
        case 0x2121e0u: goto label_2121e0;
        case 0x2121e4u: goto label_2121e4;
        case 0x2121e8u: goto label_2121e8;
        case 0x2121ecu: goto label_2121ec;
        case 0x2121f0u: goto label_2121f0;
        case 0x2121f4u: goto label_2121f4;
        case 0x2121f8u: goto label_2121f8;
        case 0x2121fcu: goto label_2121fc;
        case 0x212200u: goto label_212200;
        case 0x212204u: goto label_212204;
        case 0x212208u: goto label_212208;
        case 0x21220cu: goto label_21220c;
        case 0x212210u: goto label_212210;
        case 0x212214u: goto label_212214;
        case 0x212218u: goto label_212218;
        case 0x21221cu: goto label_21221c;
        case 0x212220u: goto label_212220;
        case 0x212224u: goto label_212224;
        case 0x212228u: goto label_212228;
        case 0x21222cu: goto label_21222c;
        case 0x212230u: goto label_212230;
        case 0x212234u: goto label_212234;
        case 0x212238u: goto label_212238;
        case 0x21223cu: goto label_21223c;
        case 0x212240u: goto label_212240;
        case 0x212244u: goto label_212244;
        case 0x212248u: goto label_212248;
        case 0x21224cu: goto label_21224c;
        case 0x212250u: goto label_212250;
        case 0x212254u: goto label_212254;
        case 0x212258u: goto label_212258;
        case 0x21225cu: goto label_21225c;
        case 0x212260u: goto label_212260;
        case 0x212264u: goto label_212264;
        case 0x212268u: goto label_212268;
        case 0x21226cu: goto label_21226c;
        case 0x212270u: goto label_212270;
        case 0x212274u: goto label_212274;
        case 0x212278u: goto label_212278;
        case 0x21227cu: goto label_21227c;
        case 0x212280u: goto label_212280;
        case 0x212284u: goto label_212284;
        case 0x212288u: goto label_212288;
        case 0x21228cu: goto label_21228c;
        case 0x212290u: goto label_212290;
        case 0x212294u: goto label_212294;
        case 0x212298u: goto label_212298;
        case 0x21229cu: goto label_21229c;
        case 0x2122a0u: goto label_2122a0;
        case 0x2122a4u: goto label_2122a4;
        case 0x2122a8u: goto label_2122a8;
        case 0x2122acu: goto label_2122ac;
        case 0x2122b0u: goto label_2122b0;
        case 0x2122b4u: goto label_2122b4;
        case 0x2122b8u: goto label_2122b8;
        case 0x2122bcu: goto label_2122bc;
        case 0x2122c0u: goto label_2122c0;
        case 0x2122c4u: goto label_2122c4;
        case 0x2122c8u: goto label_2122c8;
        case 0x2122ccu: goto label_2122cc;
        case 0x2122d0u: goto label_2122d0;
        case 0x2122d4u: goto label_2122d4;
        case 0x2122d8u: goto label_2122d8;
        case 0x2122dcu: goto label_2122dc;
        case 0x2122e0u: goto label_2122e0;
        case 0x2122e4u: goto label_2122e4;
        case 0x2122e8u: goto label_2122e8;
        case 0x2122ecu: goto label_2122ec;
        case 0x2122f0u: goto label_2122f0;
        case 0x2122f4u: goto label_2122f4;
        case 0x2122f8u: goto label_2122f8;
        case 0x2122fcu: goto label_2122fc;
        case 0x212300u: goto label_212300;
        case 0x212304u: goto label_212304;
        case 0x212308u: goto label_212308;
        case 0x21230cu: goto label_21230c;
        case 0x212310u: goto label_212310;
        case 0x212314u: goto label_212314;
        case 0x212318u: goto label_212318;
        case 0x21231cu: goto label_21231c;
        case 0x212320u: goto label_212320;
        case 0x212324u: goto label_212324;
        case 0x212328u: goto label_212328;
        case 0x21232cu: goto label_21232c;
        case 0x212330u: goto label_212330;
        case 0x212334u: goto label_212334;
        case 0x212338u: goto label_212338;
        case 0x21233cu: goto label_21233c;
        case 0x212340u: goto label_212340;
        case 0x212344u: goto label_212344;
        case 0x212348u: goto label_212348;
        case 0x21234cu: goto label_21234c;
        case 0x212350u: goto label_212350;
        case 0x212354u: goto label_212354;
        case 0x212358u: goto label_212358;
        case 0x21235cu: goto label_21235c;
        case 0x212360u: goto label_212360;
        case 0x212364u: goto label_212364;
        case 0x212368u: goto label_212368;
        case 0x21236cu: goto label_21236c;
        case 0x212370u: goto label_212370;
        case 0x212374u: goto label_212374;
        case 0x212378u: goto label_212378;
        case 0x21237cu: goto label_21237c;
        case 0x212380u: goto label_212380;
        case 0x212384u: goto label_212384;
        case 0x212388u: goto label_212388;
        case 0x21238cu: goto label_21238c;
        case 0x212390u: goto label_212390;
        case 0x212394u: goto label_212394;
        case 0x212398u: goto label_212398;
        case 0x21239cu: goto label_21239c;
        case 0x2123a0u: goto label_2123a0;
        case 0x2123a4u: goto label_2123a4;
        case 0x2123a8u: goto label_2123a8;
        case 0x2123acu: goto label_2123ac;
        case 0x2123b0u: goto label_2123b0;
        case 0x2123b4u: goto label_2123b4;
        case 0x2123b8u: goto label_2123b8;
        case 0x2123bcu: goto label_2123bc;
        case 0x2123c0u: goto label_2123c0;
        case 0x2123c4u: goto label_2123c4;
        case 0x2123c8u: goto label_2123c8;
        case 0x2123ccu: goto label_2123cc;
        case 0x2123d0u: goto label_2123d0;
        case 0x2123d4u: goto label_2123d4;
        case 0x2123d8u: goto label_2123d8;
        case 0x2123dcu: goto label_2123dc;
        case 0x2123e0u: goto label_2123e0;
        case 0x2123e4u: goto label_2123e4;
        case 0x2123e8u: goto label_2123e8;
        case 0x2123ecu: goto label_2123ec;
        case 0x2123f0u: goto label_2123f0;
        case 0x2123f4u: goto label_2123f4;
        case 0x2123f8u: goto label_2123f8;
        case 0x2123fcu: goto label_2123fc;
        case 0x212400u: goto label_212400;
        case 0x212404u: goto label_212404;
        case 0x212408u: goto label_212408;
        case 0x21240cu: goto label_21240c;
        case 0x212410u: goto label_212410;
        case 0x212414u: goto label_212414;
        case 0x212418u: goto label_212418;
        case 0x21241cu: goto label_21241c;
        case 0x212420u: goto label_212420;
        case 0x212424u: goto label_212424;
        case 0x212428u: goto label_212428;
        case 0x21242cu: goto label_21242c;
        case 0x212430u: goto label_212430;
        case 0x212434u: goto label_212434;
        case 0x212438u: goto label_212438;
        case 0x21243cu: goto label_21243c;
        case 0x212440u: goto label_212440;
        case 0x212444u: goto label_212444;
        case 0x212448u: goto label_212448;
        case 0x21244cu: goto label_21244c;
        case 0x212450u: goto label_212450;
        case 0x212454u: goto label_212454;
        case 0x212458u: goto label_212458;
        case 0x21245cu: goto label_21245c;
        case 0x212460u: goto label_212460;
        case 0x212464u: goto label_212464;
        case 0x212468u: goto label_212468;
        case 0x21246cu: goto label_21246c;
        case 0x212470u: goto label_212470;
        case 0x212474u: goto label_212474;
        case 0x212478u: goto label_212478;
        case 0x21247cu: goto label_21247c;
        case 0x212480u: goto label_212480;
        case 0x212484u: goto label_212484;
        case 0x212488u: goto label_212488;
        case 0x21248cu: goto label_21248c;
        case 0x212490u: goto label_212490;
        case 0x212494u: goto label_212494;
        case 0x212498u: goto label_212498;
        case 0x21249cu: goto label_21249c;
        case 0x2124a0u: goto label_2124a0;
        case 0x2124a4u: goto label_2124a4;
        case 0x2124a8u: goto label_2124a8;
        case 0x2124acu: goto label_2124ac;
        case 0x2124b0u: goto label_2124b0;
        case 0x2124b4u: goto label_2124b4;
        case 0x2124b8u: goto label_2124b8;
        case 0x2124bcu: goto label_2124bc;
        case 0x2124c0u: goto label_2124c0;
        case 0x2124c4u: goto label_2124c4;
        case 0x2124c8u: goto label_2124c8;
        case 0x2124ccu: goto label_2124cc;
        case 0x2124d0u: goto label_2124d0;
        case 0x2124d4u: goto label_2124d4;
        case 0x2124d8u: goto label_2124d8;
        case 0x2124dcu: goto label_2124dc;
        case 0x2124e0u: goto label_2124e0;
        case 0x2124e4u: goto label_2124e4;
        case 0x2124e8u: goto label_2124e8;
        case 0x2124ecu: goto label_2124ec;
        case 0x2124f0u: goto label_2124f0;
        case 0x2124f4u: goto label_2124f4;
        case 0x2124f8u: goto label_2124f8;
        case 0x2124fcu: goto label_2124fc;
        case 0x212500u: goto label_212500;
        case 0x212504u: goto label_212504;
        case 0x212508u: goto label_212508;
        case 0x21250cu: goto label_21250c;
        case 0x212510u: goto label_212510;
        case 0x212514u: goto label_212514;
        case 0x212518u: goto label_212518;
        case 0x21251cu: goto label_21251c;
        case 0x212520u: goto label_212520;
        case 0x212524u: goto label_212524;
        case 0x212528u: goto label_212528;
        case 0x21252cu: goto label_21252c;
        case 0x212530u: goto label_212530;
        case 0x212534u: goto label_212534;
        case 0x212538u: goto label_212538;
        case 0x21253cu: goto label_21253c;
        case 0x212540u: goto label_212540;
        case 0x212544u: goto label_212544;
        case 0x212548u: goto label_212548;
        case 0x21254cu: goto label_21254c;
        case 0x212550u: goto label_212550;
        case 0x212554u: goto label_212554;
        case 0x212558u: goto label_212558;
        case 0x21255cu: goto label_21255c;
        case 0x212560u: goto label_212560;
        case 0x212564u: goto label_212564;
        case 0x212568u: goto label_212568;
        case 0x21256cu: goto label_21256c;
        case 0x212570u: goto label_212570;
        case 0x212574u: goto label_212574;
        case 0x212578u: goto label_212578;
        case 0x21257cu: goto label_21257c;
        case 0x212580u: goto label_212580;
        case 0x212584u: goto label_212584;
        case 0x212588u: goto label_212588;
        case 0x21258cu: goto label_21258c;
        case 0x212590u: goto label_212590;
        case 0x212594u: goto label_212594;
        case 0x212598u: goto label_212598;
        case 0x21259cu: goto label_21259c;
        case 0x2125a0u: goto label_2125a0;
        case 0x2125a4u: goto label_2125a4;
        case 0x2125a8u: goto label_2125a8;
        case 0x2125acu: goto label_2125ac;
        case 0x2125b0u: goto label_2125b0;
        case 0x2125b4u: goto label_2125b4;
        case 0x2125b8u: goto label_2125b8;
        case 0x2125bcu: goto label_2125bc;
        case 0x2125c0u: goto label_2125c0;
        case 0x2125c4u: goto label_2125c4;
        case 0x2125c8u: goto label_2125c8;
        case 0x2125ccu: goto label_2125cc;
        case 0x2125d0u: goto label_2125d0;
        case 0x2125d4u: goto label_2125d4;
        case 0x2125d8u: goto label_2125d8;
        case 0x2125dcu: goto label_2125dc;
        case 0x2125e0u: goto label_2125e0;
        case 0x2125e4u: goto label_2125e4;
        case 0x2125e8u: goto label_2125e8;
        case 0x2125ecu: goto label_2125ec;
        case 0x2125f0u: goto label_2125f0;
        case 0x2125f4u: goto label_2125f4;
        case 0x2125f8u: goto label_2125f8;
        case 0x2125fcu: goto label_2125fc;
        case 0x212600u: goto label_212600;
        case 0x212604u: goto label_212604;
        case 0x212608u: goto label_212608;
        case 0x21260cu: goto label_21260c;
        case 0x212610u: goto label_212610;
        case 0x212614u: goto label_212614;
        case 0x212618u: goto label_212618;
        case 0x21261cu: goto label_21261c;
        case 0x212620u: goto label_212620;
        case 0x212624u: goto label_212624;
        case 0x212628u: goto label_212628;
        case 0x21262cu: goto label_21262c;
        case 0x212630u: goto label_212630;
        case 0x212634u: goto label_212634;
        case 0x212638u: goto label_212638;
        case 0x21263cu: goto label_21263c;
        case 0x212640u: goto label_212640;
        case 0x212644u: goto label_212644;
        case 0x212648u: goto label_212648;
        case 0x21264cu: goto label_21264c;
        case 0x212650u: goto label_212650;
        case 0x212654u: goto label_212654;
        case 0x212658u: goto label_212658;
        case 0x21265cu: goto label_21265c;
        case 0x212660u: goto label_212660;
        case 0x212664u: goto label_212664;
        case 0x212668u: goto label_212668;
        case 0x21266cu: goto label_21266c;
        case 0x212670u: goto label_212670;
        case 0x212674u: goto label_212674;
        case 0x212678u: goto label_212678;
        case 0x21267cu: goto label_21267c;
        case 0x212680u: goto label_212680;
        case 0x212684u: goto label_212684;
        case 0x212688u: goto label_212688;
        case 0x21268cu: goto label_21268c;
        case 0x212690u: goto label_212690;
        case 0x212694u: goto label_212694;
        case 0x212698u: goto label_212698;
        case 0x21269cu: goto label_21269c;
        case 0x2126a0u: goto label_2126a0;
        case 0x2126a4u: goto label_2126a4;
        case 0x2126a8u: goto label_2126a8;
        case 0x2126acu: goto label_2126ac;
        case 0x2126b0u: goto label_2126b0;
        case 0x2126b4u: goto label_2126b4;
        case 0x2126b8u: goto label_2126b8;
        case 0x2126bcu: goto label_2126bc;
        case 0x2126c0u: goto label_2126c0;
        case 0x2126c4u: goto label_2126c4;
        case 0x2126c8u: goto label_2126c8;
        case 0x2126ccu: goto label_2126cc;
        case 0x2126d0u: goto label_2126d0;
        case 0x2126d4u: goto label_2126d4;
        case 0x2126d8u: goto label_2126d8;
        case 0x2126dcu: goto label_2126dc;
        case 0x2126e0u: goto label_2126e0;
        case 0x2126e4u: goto label_2126e4;
        case 0x2126e8u: goto label_2126e8;
        case 0x2126ecu: goto label_2126ec;
        case 0x2126f0u: goto label_2126f0;
        case 0x2126f4u: goto label_2126f4;
        case 0x2126f8u: goto label_2126f8;
        case 0x2126fcu: goto label_2126fc;
        case 0x212700u: goto label_212700;
        case 0x212704u: goto label_212704;
        case 0x212708u: goto label_212708;
        case 0x21270cu: goto label_21270c;
        case 0x212710u: goto label_212710;
        case 0x212714u: goto label_212714;
        case 0x212718u: goto label_212718;
        case 0x21271cu: goto label_21271c;
        case 0x212720u: goto label_212720;
        case 0x212724u: goto label_212724;
        case 0x212728u: goto label_212728;
        case 0x21272cu: goto label_21272c;
        case 0x212730u: goto label_212730;
        case 0x212734u: goto label_212734;
        case 0x212738u: goto label_212738;
        case 0x21273cu: goto label_21273c;
        case 0x212740u: goto label_212740;
        case 0x212744u: goto label_212744;
        case 0x212748u: goto label_212748;
        case 0x21274cu: goto label_21274c;
        case 0x212750u: goto label_212750;
        case 0x212754u: goto label_212754;
        case 0x212758u: goto label_212758;
        case 0x21275cu: goto label_21275c;
        case 0x212760u: goto label_212760;
        case 0x212764u: goto label_212764;
        case 0x212768u: goto label_212768;
        case 0x21276cu: goto label_21276c;
        case 0x212770u: goto label_212770;
        case 0x212774u: goto label_212774;
        case 0x212778u: goto label_212778;
        case 0x21277cu: goto label_21277c;
        case 0x212780u: goto label_212780;
        case 0x212784u: goto label_212784;
        case 0x212788u: goto label_212788;
        case 0x21278cu: goto label_21278c;
        case 0x212790u: goto label_212790;
        case 0x212794u: goto label_212794;
        case 0x212798u: goto label_212798;
        case 0x21279cu: goto label_21279c;
        case 0x2127a0u: goto label_2127a0;
        case 0x2127a4u: goto label_2127a4;
        case 0x2127a8u: goto label_2127a8;
        case 0x2127acu: goto label_2127ac;
        case 0x2127b0u: goto label_2127b0;
        case 0x2127b4u: goto label_2127b4;
        case 0x2127b8u: goto label_2127b8;
        case 0x2127bcu: goto label_2127bc;
        case 0x2127c0u: goto label_2127c0;
        case 0x2127c4u: goto label_2127c4;
        case 0x2127c8u: goto label_2127c8;
        case 0x2127ccu: goto label_2127cc;
        case 0x2127d0u: goto label_2127d0;
        case 0x2127d4u: goto label_2127d4;
        case 0x2127d8u: goto label_2127d8;
        case 0x2127dcu: goto label_2127dc;
        case 0x2127e0u: goto label_2127e0;
        case 0x2127e4u: goto label_2127e4;
        case 0x2127e8u: goto label_2127e8;
        case 0x2127ecu: goto label_2127ec;
        case 0x2127f0u: goto label_2127f0;
        case 0x2127f4u: goto label_2127f4;
        case 0x2127f8u: goto label_2127f8;
        case 0x2127fcu: goto label_2127fc;
        case 0x212800u: goto label_212800;
        case 0x212804u: goto label_212804;
        case 0x212808u: goto label_212808;
        case 0x21280cu: goto label_21280c;
        case 0x212810u: goto label_212810;
        case 0x212814u: goto label_212814;
        case 0x212818u: goto label_212818;
        case 0x21281cu: goto label_21281c;
        case 0x212820u: goto label_212820;
        case 0x212824u: goto label_212824;
        case 0x212828u: goto label_212828;
        case 0x21282cu: goto label_21282c;
        case 0x212830u: goto label_212830;
        case 0x212834u: goto label_212834;
        case 0x212838u: goto label_212838;
        case 0x21283cu: goto label_21283c;
        case 0x212840u: goto label_212840;
        case 0x212844u: goto label_212844;
        case 0x212848u: goto label_212848;
        case 0x21284cu: goto label_21284c;
        case 0x212850u: goto label_212850;
        case 0x212854u: goto label_212854;
        case 0x212858u: goto label_212858;
        case 0x21285cu: goto label_21285c;
        case 0x212860u: goto label_212860;
        case 0x212864u: goto label_212864;
        case 0x212868u: goto label_212868;
        case 0x21286cu: goto label_21286c;
        case 0x212870u: goto label_212870;
        case 0x212874u: goto label_212874;
        case 0x212878u: goto label_212878;
        case 0x21287cu: goto label_21287c;
        case 0x212880u: goto label_212880;
        case 0x212884u: goto label_212884;
        case 0x212888u: goto label_212888;
        case 0x21288cu: goto label_21288c;
        case 0x212890u: goto label_212890;
        case 0x212894u: goto label_212894;
        case 0x212898u: goto label_212898;
        case 0x21289cu: goto label_21289c;
        case 0x2128a0u: goto label_2128a0;
        case 0x2128a4u: goto label_2128a4;
        case 0x2128a8u: goto label_2128a8;
        case 0x2128acu: goto label_2128ac;
        case 0x2128b0u: goto label_2128b0;
        case 0x2128b4u: goto label_2128b4;
        case 0x2128b8u: goto label_2128b8;
        case 0x2128bcu: goto label_2128bc;
        case 0x2128c0u: goto label_2128c0;
        case 0x2128c4u: goto label_2128c4;
        case 0x2128c8u: goto label_2128c8;
        case 0x2128ccu: goto label_2128cc;
        case 0x2128d0u: goto label_2128d0;
        case 0x2128d4u: goto label_2128d4;
        case 0x2128d8u: goto label_2128d8;
        case 0x2128dcu: goto label_2128dc;
        case 0x2128e0u: goto label_2128e0;
        case 0x2128e4u: goto label_2128e4;
        case 0x2128e8u: goto label_2128e8;
        case 0x2128ecu: goto label_2128ec;
        case 0x2128f0u: goto label_2128f0;
        case 0x2128f4u: goto label_2128f4;
        case 0x2128f8u: goto label_2128f8;
        case 0x2128fcu: goto label_2128fc;
        case 0x212900u: goto label_212900;
        case 0x212904u: goto label_212904;
        case 0x212908u: goto label_212908;
        case 0x21290cu: goto label_21290c;
        case 0x212910u: goto label_212910;
        case 0x212914u: goto label_212914;
        case 0x212918u: goto label_212918;
        case 0x21291cu: goto label_21291c;
        case 0x212920u: goto label_212920;
        case 0x212924u: goto label_212924;
        case 0x212928u: goto label_212928;
        case 0x21292cu: goto label_21292c;
        default: return;
    }

label_212160:
    // 0x212160: 0x260f809  jalr        $s3
label_212164:
    if (ctx->pc == 0x212164u) {
        ctx->pc = 0x212164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212160u;
        // 0x212164: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212168u;
        goto label_212168;
    }
    ctx->pc = 0x212160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x212168u);
        ctx->pc = 0x212164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212160u;
        // 0x212164: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212160u, 0x212168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212168u;
label_212168:
    // 0x212168: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x212168u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_21216c:
    // 0x21216c: 0x2a830003  slti        $v1, $s4, 0x3
    ctx->pc = 0x21216cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
label_212170:
    // 0x212170: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_212174:
    if (ctx->pc == 0x212174u) {
        ctx->pc = 0x212174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212170u;
        // 0x212174: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212178u;
        goto label_212178;
    }
    ctx->pc = 0x212170u;
    {
        const bool branch_taken_0x212170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x212174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212170u;
        // 0x212174: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212170) {
            ctx->pc = 0x212144u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x212144; return; }
        }
    }
    ctx->pc = 0x212178u;
label_212178:
    // 0x212178: 0x26320064  addiu       $s2, $s1, 0x64
    ctx->pc = 0x212178u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_21217c:
    // 0x21217c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21217cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212180:
    // 0x212180: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x212180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_212184:
    // 0x212184: 0x260f809  jalr        $s3
label_212188:
    if (ctx->pc == 0x212188u) {
        ctx->pc = 0x212188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212184u;
        // 0x212188: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21218Cu;
        goto label_21218c;
    }
    ctx->pc = 0x212184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21218Cu);
        ctx->pc = 0x212188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212184u;
        // 0x212188: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212184u, 0x21218Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21218Cu;
label_21218c:
    // 0x21218c: 0x26450002  addiu       $a1, $s2, 0x2
    ctx->pc = 0x21218cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_212190:
    // 0x212190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212194:
    // 0x212194: 0x260f809  jalr        $s3
label_212198:
    if (ctx->pc == 0x212198u) {
        ctx->pc = 0x212198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212194u;
        // 0x212198: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21219Cu;
        goto label_21219c;
    }
    ctx->pc = 0x212194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21219Cu);
        ctx->pc = 0x212198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212194u;
        // 0x212198: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212194u, 0x21219Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21219Cu;
label_21219c:
    // 0x21219c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21219cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2121a0:
    // 0x2121a0: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x2121a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_2121a4:
    // 0x2121a4: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
label_2121a8:
    if (ctx->pc == 0x2121A8u) {
        ctx->pc = 0x2121A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121A4u;
        // 0x2121a8: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2121ACu;
        goto label_2121ac;
    }
    ctx->pc = 0x2121A4u;
    {
        const bool branch_taken_0x2121a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2121A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121A4u;
        // 0x2121a8: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2121a4) {
            ctx->pc = 0x21207Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x21207c; return; }
        }
    }
    ctx->pc = 0x2121ACu;
label_2121ac:
    // 0x2121ac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2121acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2121b0:
    // 0x2121b0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2121b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2121b4:
    // 0x2121b4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2121b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2121b8:
    // 0x2121b8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2121b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2121bc:
    // 0x2121bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2121bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2121c0:
    // 0x2121c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2121c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2121c4:
    // 0x2121c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2121c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2121c8:
    // 0x2121c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2121c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2121cc:
    // 0x2121cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2121ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2121d0:
    // 0x2121d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2121d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2121d4:
    // 0x2121d4: 0x3e00008  jr          $ra
label_2121d8:
    if (ctx->pc == 0x2121D8u) {
        ctx->pc = 0x2121D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121D4u;
        // 0x2121d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2121DCu;
        goto label_2121dc;
    }
    ctx->pc = 0x2121D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2121D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2121D4u;
        // 0x2121d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2121D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2121DCu;
label_2121dc:
    // 0x2121dc: 0x0  nop
    ctx->pc = 0x2121dcu;
    // NOP
label_2121e0:
    // 0x2121e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2121e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2121e4:
    // 0x2121e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2121e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2121e8:
    // 0x2121e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2121e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2121ec:
    // 0x2121ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2121ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2121f0:
    // 0x2121f0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2121f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2121f4:
    // 0x2121f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2121f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2121f8:
    // 0x2121f8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2121f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2121fc:
    // 0x2121fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2121fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_212200:
    // 0x212200: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x212200u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_212204:
    // 0x212204: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x212204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_212208:
    // 0x212208: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x212208u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_21220c:
    // 0x21220c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21220cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_212210:
    // 0x212210: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x212210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_212214:
    // 0x212214: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
label_212218:
    if (ctx->pc == 0x212218u) {
        ctx->pc = 0x212218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212214u;
        // 0x212218: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21221Cu;
        goto label_21221c;
    }
    ctx->pc = 0x212214u;
    {
        const bool branch_taken_0x212214 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x212218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212214u;
        // 0x212218: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212214) {
            ctx->pc = 0x21233Cu;
            goto label_21233c;
        }
    }
    ctx->pc = 0x21221Cu;
label_21221c:
    // 0x21221c: 0x26c501a0  addiu       $a1, $s6, 0x1A0
    ctx->pc = 0x21221cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 416));
label_212220:
    // 0x212220: 0x2a0f809  jalr        $s5
label_212224:
    if (ctx->pc == 0x212224u) {
        ctx->pc = 0x212224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212220u;
        // 0x212224: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212228u;
        goto label_212228;
    }
    ctx->pc = 0x212220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x212228u);
        ctx->pc = 0x212224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212220u;
        // 0x212224: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212220u, 0x212228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212228u;
label_212228:
    // 0x212228: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21222c:
    // 0x21222c: 0x26d30058  addiu       $s3, $s6, 0x58
    ctx->pc = 0x21222cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 88));
label_212230:
    // 0x212230: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x212230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212234:
    // 0x212234: 0x0  nop
    ctx->pc = 0x212234u;
    // NOP
label_212238:
    // 0x212238: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x212238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21223c:
    // 0x21223c: 0x0  nop
    ctx->pc = 0x21223cu;
    // NOP
label_212240:
    // 0x212240: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x212240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_212244:
    // 0x212244: 0x2a0f809  jalr        $s5
label_212248:
    if (ctx->pc == 0x212248u) {
        ctx->pc = 0x212248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212244u;
        // 0x212248: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21224Cu;
        goto label_21224c;
    }
    ctx->pc = 0x212244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x21224Cu);
        ctx->pc = 0x212248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212244u;
        // 0x212248: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212244u, 0x21224Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21224Cu;
label_21224c:
    // 0x21224c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21224cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212250:
    // 0x212250: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x212250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_212254:
    // 0x212254: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x212254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
label_212258:
    // 0x212258: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_21225c:
    if (ctx->pc == 0x21225Cu) {
        ctx->pc = 0x21225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212258u;
        // 0x21225c: 0x26650014  addiu       $a1, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212260u;
        goto label_212260;
    }
    ctx->pc = 0x212258u;
    {
        const bool branch_taken_0x212258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212258u;
        // 0x21225c: 0x26650014  addiu       $a1, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212258) {
            ctx->pc = 0x21223Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21223c;
        }
    }
    ctx->pc = 0x212260u;
label_212260:
    // 0x212260: 0x2a0f809  jalr        $s5
label_212264:
    if (ctx->pc == 0x212264u) {
        ctx->pc = 0x212264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212260u;
        // 0x212264: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212268u;
        goto label_212268;
    }
    ctx->pc = 0x212260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x212268u);
        ctx->pc = 0x212264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212260u;
        // 0x212264: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212260u, 0x212268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212268u;
label_212268:
    // 0x212268: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21226c:
    // 0x21226c: 0x26650018  addiu       $a1, $s3, 0x18
    ctx->pc = 0x21226cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_212270:
    // 0x212270: 0x2a0f809  jalr        $s5
label_212274:
    if (ctx->pc == 0x212274u) {
        ctx->pc = 0x212274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212270u;
        // 0x212274: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212278u;
        goto label_212278;
    }
    ctx->pc = 0x212270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x212278u);
        ctx->pc = 0x212274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212270u;
        // 0x212274: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212270u, 0x212278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212278u;
label_212278:
    // 0x212278: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21227c:
    // 0x21227c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21227cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_212280:
    // 0x212280: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x212280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
label_212284:
    // 0x212284: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_212288:
    if (ctx->pc == 0x212288u) {
        ctx->pc = 0x212288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212284u;
        // 0x212288: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21228Cu;
        goto label_21228c;
    }
    ctx->pc = 0x212284u;
    {
        const bool branch_taken_0x212284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212284u;
        // 0x212288: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212284) {
            ctx->pc = 0x212234u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212234;
        }
    }
    ctx->pc = 0x21228Cu;
label_21228c:
    // 0x21228c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21228cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212290:
    // 0x212290: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x212290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212294:
    // 0x212294: 0x0  nop
    ctx->pc = 0x212294u;
    // NOP
label_212298:
    // 0x212298: 0x2d29821  addu        $s3, $s6, $s2
    ctx->pc = 0x212298u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_21229c:
    // 0x21229c: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x21229cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_2122a0:
    // 0x2122a0: 0x2a0f809  jalr        $s5
label_2122a4:
    if (ctx->pc == 0x2122A4u) {
        ctx->pc = 0x2122A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122A0u;
        // 0x2122a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122A8u;
        goto label_2122a8;
    }
    ctx->pc = 0x2122A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2122A8u);
        ctx->pc = 0x2122A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122A0u;
        // 0x2122a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2122A0u, 0x2122A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2122A8u;
label_2122a8:
    // 0x2122a8: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x2122a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_2122ac:
    // 0x2122ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2122acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2122b0:
    // 0x2122b0: 0x2a0f809  jalr        $s5
label_2122b4:
    if (ctx->pc == 0x2122B4u) {
        ctx->pc = 0x2122B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122B0u;
        // 0x2122b4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122B8u;
        goto label_2122b8;
    }
    ctx->pc = 0x2122B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2122B8u);
        ctx->pc = 0x2122B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122B0u;
        // 0x2122b4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2122B0u, 0x2122B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2122B8u;
label_2122b8:
    // 0x2122b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2122b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2122bc:
    // 0x2122bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2122bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2122c0:
    // 0x2122c0: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x2122c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_2122c4:
    // 0x2122c4: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_2122c8:
    if (ctx->pc == 0x2122C8u) {
        ctx->pc = 0x2122C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122C4u;
        // 0x2122c8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122CCu;
        goto label_2122cc;
    }
    ctx->pc = 0x2122C4u;
    {
        const bool branch_taken_0x2122c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2122C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122C4u;
        // 0x2122c8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2122c4) {
            ctx->pc = 0x212294u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212294;
        }
    }
    ctx->pc = 0x2122CCu;
label_2122cc:
    // 0x2122cc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2122ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2122d0:
    // 0x2122d0: 0x2a0f809  jalr        $s5
label_2122d4:
    if (ctx->pc == 0x2122D4u) {
        ctx->pc = 0x2122D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122D0u;
        // 0x2122d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122D8u;
        goto label_2122d8;
    }
    ctx->pc = 0x2122D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2122D8u);
        ctx->pc = 0x2122D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122D0u;
        // 0x2122d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2122D0u, 0x2122D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2122D8u;
label_2122d8:
    // 0x2122d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2122d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2122dc:
    // 0x2122dc: 0x26c50001  addiu       $a1, $s6, 0x1
    ctx->pc = 0x2122dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2122e0:
    // 0x2122e0: 0x2a0f809  jalr        $s5
label_2122e4:
    if (ctx->pc == 0x2122E4u) {
        ctx->pc = 0x2122E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122E0u;
        // 0x2122e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122E8u;
        goto label_2122e8;
    }
    ctx->pc = 0x2122E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2122E8u);
        ctx->pc = 0x2122E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122E0u;
        // 0x2122e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2122E0u, 0x2122E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2122E8u;
label_2122e8:
    // 0x2122e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2122e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2122ec:
    // 0x2122ec: 0x26c50004  addiu       $a1, $s6, 0x4
    ctx->pc = 0x2122ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_2122f0:
    // 0x2122f0: 0x2a0f809  jalr        $s5
label_2122f4:
    if (ctx->pc == 0x2122F4u) {
        ctx->pc = 0x2122F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122F0u;
        // 0x2122f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2122F8u;
        goto label_2122f8;
    }
    ctx->pc = 0x2122F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2122F8u);
        ctx->pc = 0x2122F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122F0u;
        // 0x2122f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2122F0u, 0x2122F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2122F8u;
label_2122f8:
    // 0x2122f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2122f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2122fc:
    // 0x2122fc: 0x26c50198  addiu       $a1, $s6, 0x198
    ctx->pc = 0x2122fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 408));
label_212300:
    // 0x212300: 0x2a0f809  jalr        $s5
label_212304:
    if (ctx->pc == 0x212304u) {
        ctx->pc = 0x212304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212300u;
        // 0x212304: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212308u;
        goto label_212308;
    }
    ctx->pc = 0x212300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x212308u);
        ctx->pc = 0x212304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212300u;
        // 0x212304: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212300u, 0x212308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212308u;
label_212308:
    // 0x212308: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21230c:
    // 0x21230c: 0x26c501a1  addiu       $a1, $s6, 0x1A1
    ctx->pc = 0x21230cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 417));
label_212310:
    // 0x212310: 0x2a0f809  jalr        $s5
label_212314:
    if (ctx->pc == 0x212314u) {
        ctx->pc = 0x212314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212310u;
        // 0x212314: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212318u;
        goto label_212318;
    }
    ctx->pc = 0x212310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x212318u);
        ctx->pc = 0x212314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212310u;
        // 0x212314: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212310u, 0x212318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212318u;
label_212318:
    // 0x212318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21231c:
    // 0x21231c: 0x26c501a2  addiu       $a1, $s6, 0x1A2
    ctx->pc = 0x21231cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 418));
label_212320:
    // 0x212320: 0x2a0f809  jalr        $s5
label_212324:
    if (ctx->pc == 0x212324u) {
        ctx->pc = 0x212324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212320u;
        // 0x212324: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212328u;
        goto label_212328;
    }
    ctx->pc = 0x212320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x212328u);
        ctx->pc = 0x212324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212320u;
        // 0x212324: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212320u, 0x212328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212328u;
label_212328:
    // 0x212328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21232c:
    // 0x21232c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21232cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_212330:
    // 0x212330: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x212330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_212334:
    // 0x212334: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
label_212338:
    if (ctx->pc == 0x212338u) {
        ctx->pc = 0x212338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212334u;
        // 0x212338: 0x26d601a8  addiu       $s6, $s6, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21233Cu;
        goto label_21233c;
    }
    ctx->pc = 0x212334u;
    {
        const bool branch_taken_0x212334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212334u;
        // 0x212338: 0x26d601a8  addiu       $s6, $s6, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212334) {
            ctx->pc = 0x21221Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21221c;
        }
    }
    ctx->pc = 0x21233Cu;
label_21233c:
    // 0x21233c: 0x0  nop
    ctx->pc = 0x21233cu;
    // NOP
label_212340:
    // 0x212340: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x212340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_212344:
    // 0x212344: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x212344u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_212348:
    // 0x212348: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x212348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21234c:
    // 0x21234c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21234cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_212350:
    // 0x212350: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x212350u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_212354:
    // 0x212354: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x212354u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_212358:
    // 0x212358: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x212358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21235c:
    // 0x21235c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21235cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_212360:
    // 0x212360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x212360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_212364:
    // 0x212364: 0x3e00008  jr          $ra
label_212368:
    if (ctx->pc == 0x212368u) {
        ctx->pc = 0x212368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212364u;
        // 0x212368: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21236Cu;
        goto label_21236c;
    }
    ctx->pc = 0x212364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212364u;
        // 0x212368: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21236Cu;
label_21236c:
    // 0x21236c: 0x0  nop
    ctx->pc = 0x21236cu;
    // NOP
label_212370:
    // 0x212370: 0x3e00008  jr          $ra
label_212374:
    if (ctx->pc == 0x212374u) {
        ctx->pc = 0x212374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212370u;
        // 0x212374: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212378u;
        goto label_212378;
    }
    ctx->pc = 0x212370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212370u;
        // 0x212374: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212378u;
label_212378:
    // 0x212378: 0x0  nop
    ctx->pc = 0x212378u;
    // NOP
label_21237c:
    // 0x21237c: 0x0  nop
    ctx->pc = 0x21237cu;
    // NOP
label_212380:
    // 0x212380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_212384:
    // 0x212384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x212384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_212388:
    // 0x212388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x212388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21238c:
    // 0x21238c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21238cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_212390:
    // 0x212390: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x212390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_212394:
    // 0x212394: 0xc08e93e  jal         func_23A4F8
label_212398:
    if (ctx->pc == 0x212398u) {
        ctx->pc = 0x212398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212394u;
        // 0x212398: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21239Cu;
        goto label_21239c;
    }
    ctx->pc = 0x212394u;
    SET_GPR_U32(ctx, 31, 0x21239Cu);
    ctx->pc = 0x212398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212394u;
    // 0x212398: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x212394u, 0x21239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21239Cu;
label_21239c:
    // 0x21239c: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x21239cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2123a0:
    // 0x2123a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2123a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2123a4:
    // 0x2123a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2123a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2123a8:
    // 0x2123a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2123a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2123ac:
    // 0x2123ac: 0x3e00008  jr          $ra
label_2123b0:
    if (ctx->pc == 0x2123B0u) {
        ctx->pc = 0x2123B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123ACu;
        // 0x2123b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123B4u;
        goto label_2123b4;
    }
    ctx->pc = 0x2123ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2123B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123ACu;
        // 0x2123b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2123ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2123B4u;
label_2123b4:
    // 0x2123b4: 0x0  nop
    ctx->pc = 0x2123b4u;
    // NOP
label_2123b8:
    // 0x2123b8: 0x0  nop
    ctx->pc = 0x2123b8u;
    // NOP
label_2123bc:
    // 0x2123bc: 0x0  nop
    ctx->pc = 0x2123bcu;
    // NOP
label_2123c0:
    // 0x2123c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2123c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2123c4:
    // 0x2123c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2123c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2123c8:
    // 0x2123c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2123c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2123cc:
    // 0x2123cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2123ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2123d0:
    // 0x2123d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2123d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2123d4:
    // 0x2123d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2123d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2123d8:
    // 0x2123d8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2123d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2123dc:
    // 0x2123dc: 0xc08e93e  jal         func_23A4F8
label_2123e0:
    if (ctx->pc == 0x2123E0u) {
        ctx->pc = 0x2123E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123DCu;
        // 0x2123e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123E4u;
        goto label_2123e4;
    }
    ctx->pc = 0x2123DCu;
    SET_GPR_U32(ctx, 31, 0x2123E4u);
    ctx->pc = 0x2123E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2123DCu;
    // 0x2123e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x2123DCu, 0x2123E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2123E4u;
label_2123e4:
    // 0x2123e4: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2123e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2123e8:
    // 0x2123e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2123e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2123ec:
    // 0x2123ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2123ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2123f0:
    // 0x2123f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2123f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2123f4:
    // 0x2123f4: 0x3e00008  jr          $ra
label_2123f8:
    if (ctx->pc == 0x2123F8u) {
        ctx->pc = 0x2123F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123F4u;
        // 0x2123f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2123FCu;
        goto label_2123fc;
    }
    ctx->pc = 0x2123F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2123F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123F4u;
        // 0x2123f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2123F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2123FCu;
label_2123fc:
    // 0x2123fc: 0x0  nop
    ctx->pc = 0x2123fcu;
    // NOP
label_212400:
    // 0x212400: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x212400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_212404:
    // 0x212404: 0x3e00008  jr          $ra
label_212408:
    if (ctx->pc == 0x212408u) {
        ctx->pc = 0x212408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212404u;
        // 0x212408: 0x8c22e298  lw          $v0, -0x1D68($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21240Cu;
        goto label_21240c;
    }
    ctx->pc = 0x212404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212404u;
        // 0x212408: 0x8c22e298  lw          $v0, -0x1D68($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959768)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21240Cu;
label_21240c:
    // 0x21240c: 0x0  nop
    ctx->pc = 0x21240cu;
    // NOP
label_212410:
    // 0x212410: 0x240201a8  addiu       $v0, $zero, 0x1A8
    ctx->pc = 0x212410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
label_212414:
    // 0x212414: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x212414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_212418:
    // 0x212418: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x212418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_21241c:
    // 0x21241c: 0x2442fc20  addiu       $v0, $v0, -0x3E0
    ctx->pc = 0x21241cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966304));
label_212420:
    // 0x212420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_212424:
    // 0x212424: 0x3e00008  jr          $ra
label_212428:
    if (ctx->pc == 0x212428u) {
        ctx->pc = 0x212428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212424u;
        // 0x212428: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21242Cu;
        goto label_21242c;
    }
    ctx->pc = 0x212424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212424u;
        // 0x212428: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21242Cu;
label_21242c:
    // 0x21242c: 0x0  nop
    ctx->pc = 0x21242cu;
    // NOP
label_212430:
    // 0x212430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_212434:
    // 0x212434: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x212434u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_212438:
    // 0x212438: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
label_21243c:
    if (ctx->pc == 0x21243Cu) {
        ctx->pc = 0x21243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212438u;
        // 0x21243c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212440u;
        goto label_212440;
    }
    ctx->pc = 0x212438u;
    {
        const bool branch_taken_0x212438 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212438u;
        // 0x21243c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212438) {
            ctx->pc = 0x2124F8u;
            goto label_2124f8;
        }
    }
    ctx->pc = 0x212440u;
label_212440:
    // 0x212440: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x212440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_212444:
    // 0x212444: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
label_212448:
    if (ctx->pc == 0x212448u) {
        ctx->pc = 0x212448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212444u;
        // 0x212448: 0x240601a8  addiu       $a2, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21244Cu;
        goto label_21244c;
    }
    ctx->pc = 0x212444u;
    {
        const bool branch_taken_0x212444 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x212448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212444u;
        // 0x212448: 0x240601a8  addiu       $a2, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212444) {
            ctx->pc = 0x212488u;
            goto label_212488;
        }
    }
    ctx->pc = 0x21244Cu;
label_21244c:
    // 0x21244c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x21244cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_212450:
    // 0x212450: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x212450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_212454:
    // 0x212454: 0x24847560  addiu       $a0, $a0, 0x7560
    ctx->pc = 0x212454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30048));
label_212458:
    // 0x212458: 0x24a5f270  addiu       $a1, $a1, -0xD90
    ctx->pc = 0x212458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963824));
label_21245c:
    // 0x21245c: 0xc08e93e  jal         func_23A4F8
label_212460:
    if (ctx->pc == 0x212460u) {
        ctx->pc = 0x212460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21245Cu;
        // 0x212460: 0x240601a8  addiu       $a2, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212464u;
        goto label_212464;
    }
    ctx->pc = 0x21245Cu;
    SET_GPR_U32(ctx, 31, 0x212464u);
    ctx->pc = 0x212460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21245Cu;
    // 0x212460: 0x240601a8  addiu       $a2, $zero, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x21245Cu, 0x212464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212464u;
label_212464:
    // 0x212464: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x212464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_212468:
    // 0x212468: 0x9023e930  lbu         $v1, -0x16D0($at)
    ctx->pc = 0x212468u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961456)));
label_21246c:
    // 0x21246c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x21246cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_212470:
    // 0x212470: 0x9022e9c0  lbu         $v0, -0x1640($at)
    ctx->pc = 0x212470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961600)));
label_212474:
    // 0x212474: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x212474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_212478:
    // 0x212478: 0xac23caec  sw          $v1, -0x3514($at)
    ctx->pc = 0x212478u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953708), GPR_U32(ctx, 3));
label_21247c:
    // 0x21247c: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x21247cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_212480:
    // 0x212480: 0x10000013  b           . + 4 + (0x13 << 2)
label_212484:
    if (ctx->pc == 0x212484u) {
        ctx->pc = 0x212484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212480u;
        // 0x212484: 0xac22caf0  sw          $v0, -0x3510($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294953712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212488u;
        goto label_212488;
    }
    ctx->pc = 0x212480u;
    {
        const bool branch_taken_0x212480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212480u;
        // 0x212484: 0xac22caf0  sw          $v0, -0x3510($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294953712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212480) {
            ctx->pc = 0x2124D0u;
            goto label_2124d0;
        }
    }
    ctx->pc = 0x212488u;
label_212488:
    // 0x212488: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x212488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_21248c:
    // 0x21248c: 0x861818  mult        $v1, $a0, $a2
    ctx->pc = 0x21248cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_212490:
    // 0x212490: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x212490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_212494:
    // 0x212494: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x212494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_212498:
    // 0x212498: 0x342130f0  ori         $at, $at, 0x30F0
    ctx->pc = 0x212498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12528);
label_21249c:
    // 0x21249c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2124a0:
    // 0x2124a0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2124a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_2124a4:
    // 0x2124a4: 0x24847560  addiu       $a0, $a0, 0x7560
    ctx->pc = 0x2124a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30048));
label_2124a8:
    // 0x2124a8: 0xc08e93e  jal         func_23A4F8
label_2124ac:
    if (ctx->pc == 0x2124ACu) {
        ctx->pc = 0x2124ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124A8u;
        // 0x2124ac: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2124B0u;
        goto label_2124b0;
    }
    ctx->pc = 0x2124A8u;
    SET_GPR_U32(ctx, 31, 0x2124B0u);
    ctx->pc = 0x2124ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2124A8u;
    // 0x2124ac: 0x412821  addu        $a1, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x2124A8u, 0x2124B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2124B0u;
label_2124b0:
    // 0x2124b0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2124b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2124b4:
    // 0x2124b4: 0x90237702  lbu         $v1, 0x7702($at)
    ctx->pc = 0x2124b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30466)));
label_2124b8:
    // 0x2124b8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2124b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2124bc:
    // 0x2124bc: 0x90227703  lbu         $v0, 0x7703($at)
    ctx->pc = 0x2124bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30467)));
label_2124c0:
    // 0x2124c0: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x2124c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_2124c4:
    // 0x2124c4: 0xac23caec  sw          $v1, -0x3514($at)
    ctx->pc = 0x2124c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953708), GPR_U32(ctx, 3));
label_2124c8:
    // 0x2124c8: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x2124c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_2124cc:
    // 0x2124cc: 0xac22caf0  sw          $v0, -0x3510($at)
    ctx->pc = 0x2124ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953712), GPR_U32(ctx, 2));
label_2124d0:
    // 0x2124d0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2124d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2124d4:
    // 0x2124d4: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x2124d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_2124d8:
    // 0x2124d8: 0x90247560  lbu         $a0, 0x7560($at)
    ctx->pc = 0x2124d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30048)));
label_2124dc:
    // 0x2124dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2124dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2124e0:
    // 0x2124e0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2124e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2124e4:
    // 0x2124e4: 0x90267701  lbu         $a2, 0x7701($at)
    ctx->pc = 0x2124e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30465)));
label_2124e8:
    // 0x2124e8: 0xc056690  jal         func_159A40
label_2124ec:
    if (ctx->pc == 0x2124ECu) {
        ctx->pc = 0x2124ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124E8u;
        // 0x2124ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2124F0u;
        goto label_2124f0;
    }
    ctx->pc = 0x2124E8u;
    SET_GPR_U32(ctx, 31, 0x2124F0u);
    ctx->pc = 0x2124ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2124E8u;
    // 0x2124ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A40u, 0x2124E8u, 0x2124F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2124F0u;
label_2124f0:
    // 0x2124f0: 0x10000057  b           . + 4 + (0x57 << 2)
label_2124f4:
    if (ctx->pc == 0x2124F4u) {
        ctx->pc = 0x2124F8u;
        goto label_2124f8;
    }
    ctx->pc = 0x2124F0u;
    {
        const bool branch_taken_0x2124f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2124f0) {
            ctx->pc = 0x212650u;
            goto label_212650;
        }
    }
    ctx->pc = 0x2124F8u;
label_2124f8:
    // 0x2124f8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2124f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2124fc:
    // 0x2124fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2124fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212500:
    // 0x212500: 0xa0204af0  sb          $zero, 0x4AF0($at)
    ctx->pc = 0x212500u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19184), (uint8_t)GPR_U32(ctx, 0));
label_212504:
    // 0x212504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x212504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212508:
    // 0x212508: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21250c:
    // 0x21250c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21250cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212510:
    // 0x212510: 0xa0207561  sb          $zero, 0x7561($at)
    ctx->pc = 0x212510u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 30049), (uint8_t)GPR_U32(ctx, 0));
label_212514:
    // 0x212514: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_212518:
    // 0x212518: 0xac207564  sw          $zero, 0x7564($at)
    ctx->pc = 0x212518u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30052), GPR_U32(ctx, 0));
label_21251c:
    // 0x21251c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21251cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_212520:
    // 0x212520: 0x80254970  lb          $a1, 0x4970($at)
    ctx->pc = 0x212520u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 18800)));
label_212524:
    // 0x212524: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_212528:
    // 0x212528: 0x90244999  lbu         $a0, 0x4999($at)
    ctx->pc = 0x212528u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18841)));
label_21252c:
    // 0x21252c: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x21252cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_212530:
    // 0x212530: 0x8023caec  lb          $v1, -0x3514($at)
    ctx->pc = 0x212530u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294953708)));
label_212534:
    // 0x212534: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x212534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_212538:
    // 0x212538: 0x8022caf0  lb          $v0, -0x3510($at)
    ctx->pc = 0x212538u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294953712)));
label_21253c:
    // 0x21253c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21253cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_212540:
    // 0x212540: 0xa0257560  sb          $a1, 0x7560($at)
    ctx->pc = 0x212540u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 30048), (uint8_t)GPR_U32(ctx, 5));
label_212544:
    // 0x212544: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_212548:
    // 0x212548: 0xa0247701  sb          $a0, 0x7701($at)
    ctx->pc = 0x212548u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 30465), (uint8_t)GPR_U32(ctx, 4));
label_21254c:
    // 0x21254c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21254cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_212550:
    // 0x212550: 0xa0237702  sb          $v1, 0x7702($at)
    ctx->pc = 0x212550u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 30466), (uint8_t)GPR_U32(ctx, 3));
label_212554:
    // 0x212554: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_212558:
    // 0x212558: 0xa0227703  sb          $v0, 0x7703($at)
    ctx->pc = 0x212558u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 30467), (uint8_t)GPR_U32(ctx, 2));
label_21255c:
    // 0x21255c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x21255cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_212560:
    // 0x212560: 0x24637560  addiu       $v1, $v1, 0x7560
    ctx->pc = 0x212560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30048));
label_212564:
    // 0x212564: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x212564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_212568:
    // 0x212568: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x212568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_21256c:
    // 0x21256c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x21256cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_212570:
    // 0x212570: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x212570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212574:
    // 0x212574: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x212574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_212578:
    // 0x212578: 0xaca0006c  sw          $zero, 0x6C($a1)
    ctx->pc = 0x212578u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 0));
label_21257c:
    // 0x21257c: 0x0  nop
    ctx->pc = 0x21257cu;
    // NOP
label_212580:
    // 0x212580: 0xa44821  addu        $t1, $a1, $a0
    ctx->pc = 0x212580u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_212584:
    // 0x212584: 0xa1200058  sb          $zero, 0x58($t1)
    ctx->pc = 0x212584u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 88), (uint8_t)GPR_U32(ctx, 0));
label_212588:
    // 0x212588: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x212588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_21258c:
    // 0x21258c: 0xa1200059  sb          $zero, 0x59($t1)
    ctx->pc = 0x21258cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 89), (uint8_t)GPR_U32(ctx, 0));
label_212590:
    // 0x212590: 0x2882000c  slti        $v0, $a0, 0xC
    ctx->pc = 0x212590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
label_212594:
    // 0x212594: 0xa120005a  sb          $zero, 0x5A($t1)
    ctx->pc = 0x212594u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 90), (uint8_t)GPR_U32(ctx, 0));
label_212598:
    // 0x212598: 0xa120005b  sb          $zero, 0x5B($t1)
    ctx->pc = 0x212598u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 91), (uint8_t)GPR_U32(ctx, 0));
label_21259c:
    // 0x21259c: 0xa120005c  sb          $zero, 0x5C($t1)
    ctx->pc = 0x21259cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 92), (uint8_t)GPR_U32(ctx, 0));
label_2125a0:
    // 0x2125a0: 0xa120005d  sb          $zero, 0x5D($t1)
    ctx->pc = 0x2125a0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 93), (uint8_t)GPR_U32(ctx, 0));
label_2125a4:
    // 0x2125a4: 0xa120005e  sb          $zero, 0x5E($t1)
    ctx->pc = 0x2125a4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 94), (uint8_t)GPR_U32(ctx, 0));
label_2125a8:
    // 0x2125a8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_2125ac:
    if (ctx->pc == 0x2125ACu) {
        ctx->pc = 0x2125ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125A8u;
        // 0x2125ac: 0xa120005f  sb          $zero, 0x5F($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 95), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2125B0u;
        goto label_2125b0;
    }
    ctx->pc = 0x2125A8u;
    {
        const bool branch_taken_0x2125a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2125ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125A8u;
        // 0x2125ac: 0xa120005f  sb          $zero, 0x5F($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 95), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2125a8) {
            ctx->pc = 0x21257Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21257c;
        }
    }
    ctx->pc = 0x2125B0u;
label_2125b0:
    // 0x2125b0: 0x28810014  slti        $at, $a0, 0x14
    ctx->pc = 0x2125b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
label_2125b4:
    // 0x2125b4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_2125b8:
    if (ctx->pc == 0x2125B8u) {
        ctx->pc = 0x2125BCu;
        goto label_2125bc;
    }
    ctx->pc = 0x2125B4u;
    {
        const bool branch_taken_0x2125b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2125b4) {
            ctx->pc = 0x2125DCu;
            goto label_2125dc;
        }
    }
    ctx->pc = 0x2125BCu;
label_2125bc:
    // 0x2125bc: 0x0  nop
    ctx->pc = 0x2125bcu;
    // NOP
label_2125c0:
    // 0x2125c0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2125c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2125c4:
    // 0x2125c4: 0xa0400058  sb          $zero, 0x58($v0)
    ctx->pc = 0x2125c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 88), (uint8_t)GPR_U32(ctx, 0));
label_2125c8:
    // 0x2125c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2125c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2125cc:
    // 0x2125cc: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x2125ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
label_2125d0:
    // 0x2125d0: 0x0  nop
    ctx->pc = 0x2125d0u;
    // NOP
label_2125d4:
    // 0x2125d4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2125d8:
    if (ctx->pc == 0x2125D8u) {
        ctx->pc = 0x2125DCu;
        goto label_2125dc;
    }
    ctx->pc = 0x2125D4u;
    {
        const bool branch_taken_0x2125d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2125d4) {
            ctx->pc = 0x2125BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2125bc;
        }
    }
    ctx->pc = 0x2125DCu;
label_2125dc:
    // 0x2125dc: 0x0  nop
    ctx->pc = 0x2125dcu;
    // NOP
label_2125e0:
    // 0x2125e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2125e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2125e4:
    // 0x2125e4: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x2125e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_2125e8:
    // 0x2125e8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2125e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2125ec:
    // 0x2125ec: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_2125f0:
    if (ctx->pc == 0x2125F0u) {
        ctx->pc = 0x2125F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125ECu;
        // 0x2125f0: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2125F4u;
        goto label_2125f4;
    }
    ctx->pc = 0x2125ECu;
    {
        const bool branch_taken_0x2125ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2125F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125ECu;
        // 0x2125f0: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2125ec) {
            ctx->pc = 0x212564u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212564;
        }
    }
    ctx->pc = 0x2125F4u;
label_2125f4:
    // 0x2125f4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2125f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2125f8:
    // 0x2125f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2125f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2125fc:
    // 0x2125fc: 0xfc2076f8  sd          $zero, 0x76F8($at)
    ctx->pc = 0x2125fcu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 30456), GPR_U64(ctx, 0));
label_212600:
    // 0x212600: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x212600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212604:
    // 0x212604: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x212604u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
label_212608:
    // 0x212608: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x212608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21260c:
    // 0x21260c: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x21260cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
label_212610:
    // 0x212610: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x212610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_212614:
    // 0x212614: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x212614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_212618:
    // 0x212618: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x212618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_21261c:
    // 0x21261c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x21261cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_212620:
    // 0x212620: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x212620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
label_212624:
    // 0x212624: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
label_212628:
    if (ctx->pc == 0x212628u) {
        ctx->pc = 0x212628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212624u;
        // 0x212628: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21262Cu;
        goto label_21262c;
    }
    ctx->pc = 0x212624u;
    {
        const bool branch_taken_0x212624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x212628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212624u;
        // 0x212628: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212624) {
            ctx->pc = 0x212640u;
            goto label_212640;
        }
    }
    ctx->pc = 0x21262Cu;
label_21262c:
    // 0x21262c: 0x1041814  dsllv       $v1, $a0, $t0
    ctx->pc = 0x21262cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (GPR_U32(ctx, 8) & 0x3F));
label_212630:
    // 0x212630: 0xdc2276f8  ld          $v0, 0x76F8($at)
    ctx->pc = 0x212630u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 30456)));
label_212634:
    // 0x212634: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x212634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_212638:
    // 0x212638: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21263c:
    // 0x21263c: 0xfc2276f8  sd          $v0, 0x76F8($at)
    ctx->pc = 0x21263cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 30456), GPR_U64(ctx, 2));
label_212640:
    // 0x212640: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x212640u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_212644:
    // 0x212644: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x212644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
label_212648:
    // 0x212648: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_21264c:
    if (ctx->pc == 0x21264Cu) {
        ctx->pc = 0x21264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212648u;
        // 0x21264c: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212650u;
        goto label_212650;
    }
    ctx->pc = 0x212648u;
    {
        const bool branch_taken_0x212648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212648u;
        // 0x21264c: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212648) {
            ctx->pc = 0x212614u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212614;
        }
    }
    ctx->pc = 0x212650u;
label_212650:
    // 0x212650: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_212654:
    // 0x212654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_212658:
    // 0x212658: 0x90227561  lbu         $v0, 0x7561($at)
    ctx->pc = 0x212658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30049)));
label_21265c:
    // 0x21265c: 0x3e00008  jr          $ra
label_212660:
    if (ctx->pc == 0x212660u) {
        ctx->pc = 0x212660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21265Cu;
        // 0x212660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212664u;
        goto label_212664;
    }
    ctx->pc = 0x21265Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21265Cu;
        // 0x212660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21265Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212664u;
label_212664:
    // 0x212664: 0x0  nop
    ctx->pc = 0x212664u;
    // NOP
label_212668:
    // 0x212668: 0x0  nop
    ctx->pc = 0x212668u;
    // NOP
label_21266c:
    // 0x21266c: 0x0  nop
    ctx->pc = 0x21266cu;
    // NOP
label_212670:
    // 0x212670: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x212670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_212674:
    // 0x212674: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_212678:
    if (ctx->pc == 0x212678u) {
        ctx->pc = 0x212678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212674u;
        // 0x212678: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21267Cu;
        goto label_21267c;
    }
    ctx->pc = 0x212674u;
    {
        const bool branch_taken_0x212674 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x212678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212674u;
        // 0x212678: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212674) {
            ctx->pc = 0x212690u;
            goto label_212690;
        }
    }
    ctx->pc = 0x21267Cu;
label_21267c:
    // 0x21267c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x21267cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_212680:
    // 0x212680: 0x8c23f274  lw          $v1, -0xD8C($at)
    ctx->pc = 0x212680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963828)));
label_212684:
    // 0x212684: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_212688:
    // 0x212688: 0x10000002  b           . + 4 + (0x2 << 2)
label_21268c:
    if (ctx->pc == 0x21268Cu) {
        ctx->pc = 0x21268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212688u;
        // 0x21268c: 0xac237564  sw          $v1, 0x7564($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 30052), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212690u;
        goto label_212690;
    }
    ctx->pc = 0x212688u;
    {
        const bool branch_taken_0x212688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212688u;
        // 0x21268c: 0xac237564  sw          $v1, 0x7564($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 30052), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212688) {
            ctx->pc = 0x212694u;
            goto label_212694;
        }
    }
    ctx->pc = 0x212690u;
label_212690:
    // 0x212690: 0xac207564  sw          $zero, 0x7564($at)
    ctx->pc = 0x212690u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30052), GPR_U32(ctx, 0));
label_212694:
    // 0x212694: 0x3e00008  jr          $ra
label_212698:
    if (ctx->pc == 0x212698u) {
        ctx->pc = 0x21269Cu;
        goto label_21269c;
    }
    ctx->pc = 0x212694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21269Cu;
label_21269c:
    // 0x21269c: 0x0  nop
    ctx->pc = 0x21269cu;
    // NOP
label_2126a0:
    // 0x2126a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2126a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2126a4:
    // 0x2126a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2126a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2126a8:
    // 0x2126a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2126a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2126ac:
    // 0x2126ac: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2126acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2126b0:
    // 0x2126b0: 0x90254999  lbu         $a1, 0x4999($at)
    ctx->pc = 0x2126b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18841)));
label_2126b4:
    // 0x2126b4: 0x3448869f  ori         $t0, $v0, 0x869F
    ctx->pc = 0x2126b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_2126b8:
    // 0x2126b8: 0x8386863c  lb          $a2, -0x79C4($gp)
    ctx->pc = 0x2126b8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_2126bc:
    // 0x2126bc: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x2126bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_2126c0:
    // 0x2126c0: 0x8024caec  lb          $a0, -0x3514($at)
    ctx->pc = 0x2126c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294953708)));
label_2126c4:
    // 0x2126c4: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x2126c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_2126c8:
    // 0x2126c8: 0x8023caf0  lb          $v1, -0x3510($at)
    ctx->pc = 0x2126c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294953712)));
label_2126cc:
    // 0x2126cc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2126ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2126d0:
    // 0x2126d0: 0x90274af1  lbu         $a3, 0x4AF1($at)
    ctx->pc = 0x2126d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19185)));
label_2126d4:
    // 0x2126d4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2126d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2126d8:
    // 0x2126d8: 0x80224970  lb          $v0, 0x4970($at)
    ctx->pc = 0x2126d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 18800)));
label_2126dc:
    // 0x2126dc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2126dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2126e0:
    // 0x2126e0: 0xa0267700  sb          $a2, 0x7700($at)
    ctx->pc = 0x2126e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 30464), (uint8_t)GPR_U32(ctx, 6));
label_2126e4:
    // 0x2126e4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2126e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2126e8:
    // 0x2126e8: 0xa0257701  sb          $a1, 0x7701($at)
    ctx->pc = 0x2126e8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 30465), (uint8_t)GPR_U32(ctx, 5));
label_2126ec:
    // 0x2126ec: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2126ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2126f0:
    // 0x2126f0: 0xa0247702  sb          $a0, 0x7702($at)
    ctx->pc = 0x2126f0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 30466), (uint8_t)GPR_U32(ctx, 4));
label_2126f4:
    // 0x2126f4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2126f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2126f8:
    // 0x2126f8: 0xa0237703  sb          $v1, 0x7703($at)
    ctx->pc = 0x2126f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 30467), (uint8_t)GPR_U32(ctx, 3));
label_2126fc:
    // 0x2126fc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2126fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_212700:
    // 0x212700: 0x71e3c  dsll32      $v1, $a3, 24
    ctx->pc = 0x212700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
label_212704:
    // 0x212704: 0x8c254954  lw          $a1, 0x4954($at)
    ctx->pc = 0x212704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18772)));
label_212708:
    // 0x212708: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x212708u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_21270c:
    // 0x21270c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21270cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_212710:
    // 0x212710: 0xa0227560  sb          $v0, 0x7560($at)
    ctx->pc = 0x212710u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 30048), (uint8_t)GPR_U32(ctx, 2));
label_212714:
    // 0x212714: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x212714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_212718:
    // 0x212718: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21271c:
    // 0x21271c: 0xa0227561  sb          $v0, 0x7561($at)
    ctx->pc = 0x21271cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 30049), (uint8_t)GPR_U32(ctx, 2));
label_212720:
    // 0x212720: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_212724:
    // 0x212724: 0x8c244958  lw          $a0, 0x4958($at)
    ctx->pc = 0x212724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18776)));
label_212728:
    // 0x212728: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21272c:
    // 0x21272c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x21272cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_212730:
    // 0x212730: 0x8c23495c  lw          $v1, 0x495C($at)
    ctx->pc = 0x212730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18780)));
label_212734:
    // 0x212734: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_212738:
    // 0x212738: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x212738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21273c:
    // 0x21273c: 0x8c224960  lw          $v0, 0x4960($at)
    ctx->pc = 0x21273cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18784)));
label_212740:
    // 0x212740: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x212740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_212744:
    // 0x212744: 0x105082a  slt         $at, $t0, $a1
    ctx->pc = 0x212744u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_212748:
    // 0x212748: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_21274c:
    if (ctx->pc == 0x21274Cu) {
        ctx->pc = 0x212750u;
        goto label_212750;
    }
    ctx->pc = 0x212748u;
    {
        const bool branch_taken_0x212748 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x212748) {
            ctx->pc = 0x212754u;
            goto label_212754;
        }
    }
    ctx->pc = 0x212750u;
label_212750:
    // 0x212750: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x212750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_212754:
    // 0x212754: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x212754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_212758:
    // 0x212758: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x212758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_21275c:
    // 0x21275c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x21275cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_212760:
    // 0x212760: 0x24427568  addiu       $v0, $v0, 0x7568
    ctx->pc = 0x212760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30056));
label_212764:
    // 0x212764: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x212764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_212768:
    // 0x212768: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21276c:
    // 0x21276c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x21276cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_212770:
    // 0x212770: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x212770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_212774:
    // 0x212774: 0x8c284900  lw          $t0, 0x4900($at)
    ctx->pc = 0x212774u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_212778:
    // 0x212778: 0x24427590  addiu       $v0, $v0, 0x7590
    ctx->pc = 0x212778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30096));
label_21277c:
    // 0x21277c: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x21277cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_212780:
    // 0x212780: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x212780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_212784:
    // 0x212784: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x212784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_212788:
    // 0x212788: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x212788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_21278c:
    // 0x21278c: 0x24427560  addiu       $v0, $v0, 0x7560
    ctx->pc = 0x21278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30048));
label_212790:
    // 0x212790: 0x24a54930  addiu       $a1, $a1, 0x4930
    ctx->pc = 0x212790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18736));
label_212794:
    // 0x212794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_212798:
    // 0x212798: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x212798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_21279c:
    // 0x21279c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x21279cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2127a0:
    // 0x2127a0: 0xc08e93e  jal         func_23A4F8
label_2127a4:
    if (ctx->pc == 0x2127A4u) {
        ctx->pc = 0x2127A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127A0u;
        // 0x2127a4: 0xace80000  sw          $t0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2127A8u;
        goto label_2127a8;
    }
    ctx->pc = 0x2127A0u;
    SET_GPR_U32(ctx, 31, 0x2127A8u);
    ctx->pc = 0x2127A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2127A0u;
    // 0x2127a4: 0xace80000  sw          $t0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x2127A0u, 0x2127A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2127A8u;
label_2127a8:
    // 0x2127a8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2127a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2127ac:
    // 0x2127ac: 0xc056a20  jal         func_15A880
label_2127b0:
    if (ctx->pc == 0x2127B0u) {
        ctx->pc = 0x2127B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127ACu;
        // 0x2127b0: 0x8c244970  lw          $a0, 0x4970($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2127B4u;
        goto label_2127b4;
    }
    ctx->pc = 0x2127ACu;
    SET_GPR_U32(ctx, 31, 0x2127B4u);
    ctx->pc = 0x2127B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2127ACu;
    // 0x2127b0: 0x8c244970  lw          $a0, 0x4970($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A880u, 0x2127ACu, 0x2127B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2127B4u;
label_2127b4:
    // 0x2127b4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2127b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2127b8:
    // 0x2127b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2127b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2127bc:
    // 0x2127bc: 0x90257561  lbu         $a1, 0x7561($at)
    ctx->pc = 0x2127bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30049)));
label_2127c0:
    // 0x2127c0: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x2127c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_2127c4:
    // 0x2127c4: 0xc056a04  jal         func_15A810
label_2127c8:
    if (ctx->pc == 0x2127C8u) {
        ctx->pc = 0x2127C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127C4u;
        // 0x2127c8: 0x27a7001c  addiu       $a3, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2127CCu;
        goto label_2127cc;
    }
    ctx->pc = 0x2127C4u;
    SET_GPR_U32(ctx, 31, 0x2127CCu);
    ctx->pc = 0x2127C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2127C4u;
    // 0x2127c8: 0x27a7001c  addiu       $a3, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A810u, 0x2127C4u, 0x2127CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2127CCu;
label_2127cc:
    // 0x2127cc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2127ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2127d0:
    // 0x2127d0: 0x90257561  lbu         $a1, 0x7561($at)
    ctx->pc = 0x2127d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30049)));
label_2127d4:
    // 0x2127d4: 0xc0514e4  jal         func_145390
label_2127d8:
    if (ctx->pc == 0x2127D8u) {
        ctx->pc = 0x2127D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2127D4u;
        // 0x2127d8: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2127DCu;
        goto label_2127dc;
    }
    ctx->pc = 0x2127D4u;
    SET_GPR_U32(ctx, 31, 0x2127DCu);
    ctx->pc = 0x2127D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2127D4u;
    // 0x2127d8: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145390u, 0x2127D4u, 0x2127DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2127DCu;
label_2127dc:
    // 0x2127dc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2127e0:
    if (ctx->pc == 0x2127E0u) {
        ctx->pc = 0x2127E4u;
        goto label_2127e4;
    }
    ctx->pc = 0x2127DCu;
    {
        const bool branch_taken_0x2127dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2127dc) {
            ctx->pc = 0x212828u;
            goto label_212828;
        }
    }
    ctx->pc = 0x2127E4u;
label_2127e4:
    // 0x2127e4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2127e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2127e8:
    // 0x2127e8: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x2127e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_2127ec:
    // 0x2127ec: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x2127ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_2127f0:
    // 0x2127f0: 0x2442ff8c  addiu       $v0, $v0, -0x74
    ctx->pc = 0x2127f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967180));
label_2127f4:
    // 0x2127f4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2127f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2127f8:
    // 0x2127f8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2127f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2127fc:
    // 0x2127fc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2127fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_212800:
    // 0x212800: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x212800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_212804:
    // 0x212804: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x212804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_212808:
    // 0x212808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x212808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21280c:
    // 0x21280c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x21280cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_212810:
    // 0x212810: 0xc090138  jal         func_2404E0
label_212814:
    if (ctx->pc == 0x212814u) {
        ctx->pc = 0x212814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212810u;
        // 0x212814: 0x90247560  lbu         $a0, 0x7560($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212818u;
        goto label_212818;
    }
    ctx->pc = 0x212810u;
    SET_GPR_U32(ctx, 31, 0x212818u);
    ctx->pc = 0x212814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212810u;
    // 0x212814: 0x90247560  lbu         $a0, 0x7560($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2404E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2404E0u, 0x212810u, 0x212818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212818u;
label_212818:
    // 0x212818: 0xc08bd38  jal         func_22F4E0
label_21281c:
    if (ctx->pc == 0x21281Cu) {
        ctx->pc = 0x212820u;
        goto label_212820;
    }
    ctx->pc = 0x212818u;
    SET_GPR_U32(ctx, 31, 0x212820u);
    ctx->pc = 0x22F4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F4E0u, 0x212818u, 0x212820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212820u;
label_212820:
    // 0x212820: 0x10000014  b           . + 4 + (0x14 << 2)
label_212824:
    if (ctx->pc == 0x212824u) {
        ctx->pc = 0x212828u;
        goto label_212828;
    }
    ctx->pc = 0x212820u;
    {
        const bool branch_taken_0x212820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212820) {
            ctx->pc = 0x212874u;
            goto label_212874;
        }
    }
    ctx->pc = 0x212828u;
label_212828:
    // 0x212828: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21282c:
    // 0x21282c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x21282cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_212830:
    // 0x212830: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x212830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_212834:
    // 0x212834: 0x2442ff8c  addiu       $v0, $v0, -0x74
    ctx->pc = 0x212834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967180));
label_212838:
    // 0x212838: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x212838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_21283c:
    // 0x21283c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21283cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_212840:
    // 0x212840: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x212840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_212844:
    // 0x212844: 0x90254af1  lbu         $a1, 0x4AF1($at)
    ctx->pc = 0x212844u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19185)));
label_212848:
    // 0x212848: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x212848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_21284c:
    // 0x21284c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x21284cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_212850:
    // 0x212850: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x212850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_212854:
    // 0x212854: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x212854u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_212858:
    // 0x212858: 0x41280a  movz        $a1, $v0, $at
    ctx->pc = 0x212858u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_21285c:
    // 0x21285c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x21285cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_212860:
    // 0x212860: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_212864:
    // 0x212864: 0x90247560  lbu         $a0, 0x7560($at)
    ctx->pc = 0x212864u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30048)));
label_212868:
    // 0x212868: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21286c:
    // 0x21286c: 0xc090160  jal         func_240580
label_212870:
    if (ctx->pc == 0x212870u) {
        ctx->pc = 0x212870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21286Cu;
        // 0x212870: 0x90257561  lbu         $a1, 0x7561($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30049)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212874u;
        goto label_212874;
    }
    ctx->pc = 0x21286Cu;
    SET_GPR_U32(ctx, 31, 0x212874u);
    ctx->pc = 0x212870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21286Cu;
    // 0x212870: 0x90257561  lbu         $a1, 0x7561($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30049)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240580u, 0x21286Cu, 0x212874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212874u;
label_212874:
    // 0x212874: 0xc084a24  jal         func_212890
label_212878:
    if (ctx->pc == 0x212878u) {
        ctx->pc = 0x21287Cu;
        goto label_21287c;
    }
    ctx->pc = 0x212874u;
    SET_GPR_U32(ctx, 31, 0x21287Cu);
    ctx->pc = 0x212890u;
    goto label_212890;
    ctx->pc = 0x21287Cu;
label_21287c:
    // 0x21287c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21287cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_212880:
    // 0x212880: 0x3e00008  jr          $ra
label_212884:
    if (ctx->pc == 0x212884u) {
        ctx->pc = 0x212884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212880u;
        // 0x212884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212888u;
        goto label_212888;
    }
    ctx->pc = 0x212880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212880u;
        // 0x212884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212888u;
label_212888:
    // 0x212888: 0x0  nop
    ctx->pc = 0x212888u;
    // NOP
label_21288c:
    // 0x21288c: 0x0  nop
    ctx->pc = 0x21288cu;
    // NOP
label_212890:
    // 0x212890: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x212890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_212894:
    // 0x212894: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x212894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_212898:
    // 0x212898: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x212898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_21289c:
    // 0x21289c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21289cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2128a0:
    // 0x2128a0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2128a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2128a4:
    // 0x2128a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2128a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2128a8:
    // 0x2128a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2128a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2128ac:
    // 0x2128ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2128acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2128b0:
    // 0x2128b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2128b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2128b4:
    // 0x2128b4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2128b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_2128b8:
    // 0x2128b8: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x2128b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_2128bc:
    // 0x2128bc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2128bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2128c0:
    // 0x2128c0: 0x24523620  addiu       $s2, $v0, 0x3620
    ctx->pc = 0x2128c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
label_2128c4:
    // 0x2128c4: 0x9042367c  lbu         $v0, 0x367C($v0)
    ctx->pc = 0x2128c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13948)));
label_2128c8:
    // 0x2128c8: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_2128cc:
    if (ctx->pc == 0x2128CCu) {
        ctx->pc = 0x2128D0u;
        goto label_2128d0;
    }
    ctx->pc = 0x2128C8u;
    {
        const bool branch_taken_0x2128c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2128c8) {
            ctx->pc = 0x212A58u;
            { ctx->pc = 0x212a58; return; }
        }
    }
    ctx->pc = 0x2128D0u;
label_2128d0:
    // 0x2128d0: 0x8e470050  lw          $a3, 0x50($s2)
    ctx->pc = 0x2128d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2128d4:
    // 0x2128d4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2128d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_2128d8:
    // 0x2128d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2128d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2128dc:
    // 0x2128dc: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x2128dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_2128e0:
    // 0x2128e0: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x2128e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_2128e4:
    // 0x2128e4: 0x342135e8  ori         $at, $at, 0x35E8
    ctx->pc = 0x2128e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13800);
label_2128e8:
    // 0x2128e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2128e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2128ec:
    // 0x2128ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2128ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2128f0:
    // 0x2128f0: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x2128f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2128f4:
    // 0x2128f4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2128f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2128f8:
    // 0x2128f8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2128f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2128fc:
    // 0x2128fc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2128fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_212900:
    // 0x212900: 0x618821  addu        $s1, $v1, $at
    ctx->pc = 0x212900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_212904:
    // 0x212904: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x212904u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_212908:
    // 0x212908: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x212908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_21290c:
    // 0x21290c: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x21290cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_212910:
    // 0x212910: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x212910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_212914:
    // 0x212914: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x212914u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
label_212918:
    // 0x212918: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x212918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
label_21291c:
    // 0x21291c: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x21291cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
label_212920:
    // 0x212920: 0x9242005d  lbu         $v0, 0x5D($s2)
    ctx->pc = 0x212920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 93)));
label_212924:
    // 0x212924: 0xa2220006  sb          $v0, 0x6($s1)
    ctx->pc = 0x212924u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 2));
label_212928:
    // 0x212928: 0x9242005e  lbu         $v0, 0x5E($s2)
    ctx->pc = 0x212928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 94)));
label_21292c:
    // 0x21292c: 0xa2220007  sb          $v0, 0x7($s1)
    ctx->pc = 0x21292cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x212930u;
    return;
}
