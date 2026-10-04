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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x212930u: goto label_212930;
        case 0x212934u: goto label_212934;
        case 0x212938u: goto label_212938;
        case 0x21293cu: goto label_21293c;
        case 0x212940u: goto label_212940;
        case 0x212944u: goto label_212944;
        case 0x212948u: goto label_212948;
        case 0x21294cu: goto label_21294c;
        case 0x212950u: goto label_212950;
        case 0x212954u: goto label_212954;
        case 0x212958u: goto label_212958;
        case 0x21295cu: goto label_21295c;
        case 0x212960u: goto label_212960;
        case 0x212964u: goto label_212964;
        case 0x212968u: goto label_212968;
        case 0x21296cu: goto label_21296c;
        case 0x212970u: goto label_212970;
        case 0x212974u: goto label_212974;
        case 0x212978u: goto label_212978;
        case 0x21297cu: goto label_21297c;
        case 0x212980u: goto label_212980;
        case 0x212984u: goto label_212984;
        case 0x212988u: goto label_212988;
        case 0x21298cu: goto label_21298c;
        case 0x212990u: goto label_212990;
        case 0x212994u: goto label_212994;
        case 0x212998u: goto label_212998;
        case 0x21299cu: goto label_21299c;
        case 0x2129a0u: goto label_2129a0;
        case 0x2129a4u: goto label_2129a4;
        case 0x2129a8u: goto label_2129a8;
        case 0x2129acu: goto label_2129ac;
        case 0x2129b0u: goto label_2129b0;
        case 0x2129b4u: goto label_2129b4;
        case 0x2129b8u: goto label_2129b8;
        case 0x2129bcu: goto label_2129bc;
        case 0x2129c0u: goto label_2129c0;
        case 0x2129c4u: goto label_2129c4;
        case 0x2129c8u: goto label_2129c8;
        case 0x2129ccu: goto label_2129cc;
        case 0x2129d0u: goto label_2129d0;
        case 0x2129d4u: goto label_2129d4;
        case 0x2129d8u: goto label_2129d8;
        case 0x2129dcu: goto label_2129dc;
        case 0x2129e0u: goto label_2129e0;
        case 0x2129e4u: goto label_2129e4;
        case 0x2129e8u: goto label_2129e8;
        case 0x2129ecu: goto label_2129ec;
        case 0x2129f0u: goto label_2129f0;
        case 0x2129f4u: goto label_2129f4;
        case 0x2129f8u: goto label_2129f8;
        case 0x2129fcu: goto label_2129fc;
        case 0x212a00u: goto label_212a00;
        case 0x212a04u: goto label_212a04;
        case 0x212a08u: goto label_212a08;
        case 0x212a0cu: goto label_212a0c;
        case 0x212a10u: goto label_212a10;
        case 0x212a14u: goto label_212a14;
        case 0x212a18u: goto label_212a18;
        case 0x212a1cu: goto label_212a1c;
        case 0x212a20u: goto label_212a20;
        case 0x212a24u: goto label_212a24;
        case 0x212a28u: goto label_212a28;
        case 0x212a2cu: goto label_212a2c;
        case 0x212a30u: goto label_212a30;
        case 0x212a34u: goto label_212a34;
        case 0x212a38u: goto label_212a38;
        case 0x212a3cu: goto label_212a3c;
        case 0x212a40u: goto label_212a40;
        case 0x212a44u: goto label_212a44;
        case 0x212a48u: goto label_212a48;
        case 0x212a4cu: goto label_212a4c;
        case 0x212a50u: goto label_212a50;
        case 0x212a54u: goto label_212a54;
        case 0x212a58u: goto label_212a58;
        case 0x212a5cu: goto label_212a5c;
        case 0x212a60u: goto label_212a60;
        case 0x212a64u: goto label_212a64;
        case 0x212a68u: goto label_212a68;
        case 0x212a6cu: goto label_212a6c;
        case 0x212a70u: goto label_212a70;
        case 0x212a74u: goto label_212a74;
        case 0x212a78u: goto label_212a78;
        case 0x212a7cu: goto label_212a7c;
        case 0x212a80u: goto label_212a80;
        case 0x212a84u: goto label_212a84;
        case 0x212a88u: goto label_212a88;
        case 0x212a8cu: goto label_212a8c;
        case 0x212a90u: goto label_212a90;
        case 0x212a94u: goto label_212a94;
        case 0x212a98u: goto label_212a98;
        case 0x212a9cu: goto label_212a9c;
        case 0x212aa0u: goto label_212aa0;
        case 0x212aa4u: goto label_212aa4;
        case 0x212aa8u: goto label_212aa8;
        case 0x212aacu: goto label_212aac;
        case 0x212ab0u: goto label_212ab0;
        case 0x212ab4u: goto label_212ab4;
        case 0x212ab8u: goto label_212ab8;
        case 0x212abcu: goto label_212abc;
        case 0x212ac0u: goto label_212ac0;
        case 0x212ac4u: goto label_212ac4;
        case 0x212ac8u: goto label_212ac8;
        case 0x212accu: goto label_212acc;
        case 0x212ad0u: goto label_212ad0;
        case 0x212ad4u: goto label_212ad4;
        case 0x212ad8u: goto label_212ad8;
        case 0x212adcu: goto label_212adc;
        case 0x212ae0u: goto label_212ae0;
        case 0x212ae4u: goto label_212ae4;
        case 0x212ae8u: goto label_212ae8;
        case 0x212aecu: goto label_212aec;
        case 0x212af0u: goto label_212af0;
        case 0x212af4u: goto label_212af4;
        case 0x212af8u: goto label_212af8;
        case 0x212afcu: goto label_212afc;
        case 0x212b00u: goto label_212b00;
        case 0x212b04u: goto label_212b04;
        case 0x212b08u: goto label_212b08;
        case 0x212b0cu: goto label_212b0c;
        case 0x212b10u: goto label_212b10;
        case 0x212b14u: goto label_212b14;
        case 0x212b18u: goto label_212b18;
        case 0x212b1cu: goto label_212b1c;
        case 0x212b20u: goto label_212b20;
        case 0x212b24u: goto label_212b24;
        case 0x212b28u: goto label_212b28;
        case 0x212b2cu: goto label_212b2c;
        case 0x212b30u: goto label_212b30;
        case 0x212b34u: goto label_212b34;
        case 0x212b38u: goto label_212b38;
        case 0x212b3cu: goto label_212b3c;
        case 0x212b40u: goto label_212b40;
        case 0x212b44u: goto label_212b44;
        case 0x212b48u: goto label_212b48;
        case 0x212b4cu: goto label_212b4c;
        default: return;
    }

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
    { ctx->pc = 0x23a4f8; return; }
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
    { ctx->pc = 0x23a4f8; return; }
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
    { ctx->pc = 0x23a4f8; return; }
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
    { ctx->pc = 0x23a4f8; return; }
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
    { ctx->pc = 0x23a4f8; return; }
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
    { ctx->pc = 0x2404e0; return; }
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
    { ctx->pc = 0x22f4e0; return; }
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
    { ctx->pc = 0x240580; return; }
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
            goto label_212a58;
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
label_212930:
    // 0x212930: 0x9242005f  lbu         $v0, 0x5F($s2)
    ctx->pc = 0x212930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 95)));
label_212934:
    // 0x212934: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x212934u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
label_212938:
    // 0x212938: 0x92420060  lbu         $v0, 0x60($s2)
    ctx->pc = 0x212938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
label_21293c:
    // 0x21293c: 0xa2220009  sb          $v0, 0x9($s1)
    ctx->pc = 0x21293cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 2));
label_212940:
    // 0x212940: 0x92420061  lbu         $v0, 0x61($s2)
    ctx->pc = 0x212940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 97)));
label_212944:
    // 0x212944: 0xa222000a  sb          $v0, 0xA($s1)
    ctx->pc = 0x212944u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 2));
label_212948:
    // 0x212948: 0x92420062  lbu         $v0, 0x62($s2)
    ctx->pc = 0x212948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 98)));
label_21294c:
    // 0x21294c: 0xc0568a8  jal         func_15A2A0
label_212950:
    if (ctx->pc == 0x212950u) {
        ctx->pc = 0x212950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21294Cu;
        // 0x212950: 0xa222000b  sb          $v0, 0xB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212954u;
        goto label_212954;
    }
    ctx->pc = 0x21294Cu;
    SET_GPR_U32(ctx, 31, 0x212954u);
    ctx->pc = 0x212950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21294Cu;
    // 0x212950: 0xa222000b  sb          $v0, 0xB($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A2A0u, 0x21294Cu, 0x212954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212954u;
label_212954:
    // 0x212954: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x212954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_212958:
    // 0x212958: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x212958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_21295c:
    // 0x21295c: 0x3463869f  ori         $v1, $v1, 0x869F
    ctx->pc = 0x21295cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34463);
label_212960:
    // 0x212960: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x212960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_212964:
    // 0x212964: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x212964u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_212968:
    // 0x212968: 0x61100a  movz        $v0, $v1, $at
    ctx->pc = 0x212968u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_21296c:
    // 0x21296c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x21296cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_212970:
    // 0x212970: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x212970u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_212974:
    // 0x212974: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x212974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_212978:
    // 0x212978: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x212978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_21297c:
    // 0x21297c: 0x92460070  lbu         $a2, 0x70($s2)
    ctx->pc = 0x21297cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 112)));
label_212980:
    // 0x212980: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x212980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_212984:
    // 0x212984: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x212984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_212988:
    // 0x212988: 0x34214b98  ori         $at, $at, 0x4B98
    ctx->pc = 0x212988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19352);
label_21298c:
    // 0x21298c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21298cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_212990:
    // 0x212990: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x212990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_212994:
    // 0x212994: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x212994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_212998:
    // 0x212998: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x212998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_21299c:
    // 0x21299c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x21299cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2129a0:
    // 0x2129a0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2129a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2129a4:
    // 0x2129a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2129a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2129a8:
    // 0x2129a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2129a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2129ac:
    // 0x2129ac: 0xc056870  jal         func_15A1C0
label_2129b0:
    if (ctx->pc == 0x2129B0u) {
        ctx->pc = 0x2129B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2129ACu;
        // 0x2129b0: 0x419821  addu        $s3, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2129B4u;
        goto label_2129b4;
    }
    ctx->pc = 0x2129ACu;
    SET_GPR_U32(ctx, 31, 0x2129B4u);
    ctx->pc = 0x2129B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2129ACu;
    // 0x2129b0: 0x419821  addu        $s3, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A1C0u, 0x2129ACu, 0x2129B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2129B4u;
label_2129b4:
    // 0x2129b4: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x2129b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_2129b8:
    // 0x2129b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2129b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2129bc:
    // 0x2129bc: 0x3421869f  ori         $at, $at, 0x869F
    ctx->pc = 0x2129bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34463);
label_2129c0:
    // 0x2129c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2129c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2129c4:
    // 0x2129c4: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x2129c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2129c8:
    // 0x2129c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2129cc:
    if (ctx->pc == 0x2129CCu) {
        ctx->pc = 0x2129D0u;
        goto label_2129d0;
    }
    ctx->pc = 0x2129C8u;
    {
        const bool branch_taken_0x2129c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2129c8) {
            ctx->pc = 0x2129D8u;
            goto label_2129d8;
        }
    }
    ctx->pc = 0x2129D0u;
label_2129d0:
    // 0x2129d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2129d4:
    if (ctx->pc == 0x2129D4u) {
        ctx->pc = 0x2129D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2129D0u;
        // 0x2129d4: 0x2082a  slt         $at, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2129D8u;
        goto label_2129d8;
    }
    ctx->pc = 0x2129D0u;
    {
        const bool branch_taken_0x2129d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2129D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2129D0u;
        // 0x2129d4: 0x2082a  slt         $at, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2129d0) {
            ctx->pc = 0x2129E4u;
            goto label_2129e4;
        }
    }
    ctx->pc = 0x2129D8u;
label_2129d8:
    // 0x2129d8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2129d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2129dc:
    // 0x2129dc: 0x3442869f  ori         $v0, $v0, 0x869F
    ctx->pc = 0x2129dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_2129e0:
    // 0x2129e0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2129e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2129e4:
    // 0x2129e4: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x2129e4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2129e8:
    // 0x2129e8: 0xae6200ac  sw          $v0, 0xAC($s3)
    ctx->pc = 0x2129e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 2));
label_2129ec:
    // 0x2129ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2129ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2129f0:
    // 0x2129f0: 0x9242000e  lbu         $v0, 0xE($s2)
    ctx->pc = 0x2129f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 14)));
label_2129f4:
    // 0x2129f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2129f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2129f8:
    // 0x2129f8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2129f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2129fc:
    // 0x2129fc: 0x92420063  lbu         $v0, 0x63($s2)
    ctx->pc = 0x2129fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 99)));
label_212a00:
    // 0x212a00: 0xa262009d  sb          $v0, 0x9D($s3)
    ctx->pc = 0x212a00u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 157), (uint8_t)GPR_U32(ctx, 2));
label_212a04:
    // 0x212a04: 0x92420064  lbu         $v0, 0x64($s2)
    ctx->pc = 0x212a04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 100)));
label_212a08:
    // 0x212a08: 0xa262009e  sb          $v0, 0x9E($s3)
    ctx->pc = 0x212a08u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 158), (uint8_t)GPR_U32(ctx, 2));
label_212a0c:
    // 0x212a0c: 0x92420065  lbu         $v0, 0x65($s2)
    ctx->pc = 0x212a0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 101)));
label_212a10:
    // 0x212a10: 0xa262009f  sb          $v0, 0x9F($s3)
    ctx->pc = 0x212a10u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 159), (uint8_t)GPR_U32(ctx, 2));
label_212a14:
    // 0x212a14: 0x92420066  lbu         $v0, 0x66($s2)
    ctx->pc = 0x212a14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 102)));
label_212a18:
    // 0x212a18: 0xa26200a0  sb          $v0, 0xA0($s3)
    ctx->pc = 0x212a18u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 160), (uint8_t)GPR_U32(ctx, 2));
label_212a1c:
    // 0x212a1c: 0x92420067  lbu         $v0, 0x67($s2)
    ctx->pc = 0x212a1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 103)));
label_212a20:
    // 0x212a20: 0xa26200a1  sb          $v0, 0xA1($s3)
    ctx->pc = 0x212a20u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 161), (uint8_t)GPR_U32(ctx, 2));
label_212a24:
    // 0x212a24: 0x92420068  lbu         $v0, 0x68($s2)
    ctx->pc = 0x212a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
label_212a28:
    // 0x212a28: 0xa26200a2  sb          $v0, 0xA2($s3)
    ctx->pc = 0x212a28u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 162), (uint8_t)GPR_U32(ctx, 2));
label_212a2c:
    // 0x212a2c: 0x92420069  lbu         $v0, 0x69($s2)
    ctx->pc = 0x212a2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 105)));
label_212a30:
    // 0x212a30: 0xc0568a8  jal         func_15A2A0
label_212a34:
    if (ctx->pc == 0x212A34u) {
        ctx->pc = 0x212A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A30u;
        // 0x212a34: 0xa2620099  sb          $v0, 0x99($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 153), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A38u;
        goto label_212a38;
    }
    ctx->pc = 0x212A30u;
    SET_GPR_U32(ctx, 31, 0x212A38u);
    ctx->pc = 0x212A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212A30u;
    // 0x212a34: 0xa2620099  sb          $v0, 0x99($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 153), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A2A0u, 0x212A30u, 0x212A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212A38u;
label_212a38:
    // 0x212a38: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_212a3c:
    // 0x212a3c: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x212a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_212a40:
    // 0x212a40: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x212a40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_212a44:
    // 0x212a44: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x212a44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_212a48:
    // 0x212a48: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_212a4c:
    // 0x212a4c: 0x8c264900  lw          $a2, 0x4900($at)
    ctx->pc = 0x212a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_212a50:
    // 0x212a50: 0xc0900ec  jal         func_2403B0
label_212a54:
    if (ctx->pc == 0x212A54u) {
        ctx->pc = 0x212A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A50u;
        // 0x212a54: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A58u;
        goto label_212a58;
    }
    ctx->pc = 0x212A50u;
    SET_GPR_U32(ctx, 31, 0x212A58u);
    ctx->pc = 0x212A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212A50u;
    // 0x212a54: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2403B0u;
    { ctx->pc = 0x2403b0; return; }
    ctx->pc = 0x212A58u;
label_212a58:
    // 0x212a58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x212a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_212a5c:
    // 0x212a5c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x212a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_212a60:
    // 0x212a60: 0x1440ff94  bnez        $v0, . + 4 + (-0x6C << 2)
label_212a64:
    if (ctx->pc == 0x212A64u) {
        ctx->pc = 0x212A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A60u;
        // 0x212a64: 0x26940090  addiu       $s4, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A68u;
        goto label_212a68;
    }
    ctx->pc = 0x212A60u;
    {
        const bool branch_taken_0x212a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x212A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A60u;
        // 0x212a64: 0x26940090  addiu       $s4, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212a60) {
            ctx->pc = 0x2128B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2128b4;
        }
    }
    ctx->pc = 0x212A68u;
label_212a68:
    // 0x212a68: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_212a6c:
    // 0x212a6c: 0xc08bc40  jal         func_22F100
label_212a70:
    if (ctx->pc == 0x212A70u) {
        ctx->pc = 0x212A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A6Cu;
        // 0x212a70: 0x9024490c  lbu         $a0, 0x490C($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A74u;
        goto label_212a74;
    }
    ctx->pc = 0x212A6Cu;
    SET_GPR_U32(ctx, 31, 0x212A74u);
    ctx->pc = 0x212A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212A6Cu;
    // 0x212a70: 0x9024490c  lbu         $a0, 0x490C($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F100u;
    { ctx->pc = 0x22f100; return; }
    ctx->pc = 0x212A74u;
label_212a74:
    // 0x212a74: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x212a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_212a78:
    // 0x212a78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x212a78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_212a7c:
    // 0x212a7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x212a7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_212a80:
    // 0x212a80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x212a80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_212a84:
    // 0x212a84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x212a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_212a88:
    // 0x212a88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x212a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_212a8c:
    // 0x212a8c: 0x3e00008  jr          $ra
label_212a90:
    if (ctx->pc == 0x212A90u) {
        ctx->pc = 0x212A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A8Cu;
        // 0x212a90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212A94u;
        goto label_212a94;
    }
    ctx->pc = 0x212A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212A8Cu;
        // 0x212a90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212A94u;
label_212a94:
    // 0x212a94: 0x0  nop
    ctx->pc = 0x212a94u;
    // NOP
label_212a98:
    // 0x212a98: 0x0  nop
    ctx->pc = 0x212a98u;
    // NOP
label_212a9c:
    // 0x212a9c: 0x0  nop
    ctx->pc = 0x212a9cu;
    // NOP
label_212aa0:
    // 0x212aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_212aa4:
    // 0x212aa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x212aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_212aa8:
    // 0x212aa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x212aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_212aac:
    // 0x212aac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x212aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_212ab0:
    // 0x212ab0: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x212ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
label_212ab4:
    // 0x212ab4: 0xc0867a0  jal         func_219E80
label_212ab8:
    if (ctx->pc == 0x212AB8u) {
        ctx->pc = 0x212AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AB4u;
        // 0x212ab8: 0x26104920  addiu       $s0, $s0, 0x4920 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212ABCu;
        goto label_212abc;
    }
    ctx->pc = 0x212AB4u;
    SET_GPR_U32(ctx, 31, 0x212ABCu);
    ctx->pc = 0x212AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212AB4u;
    // 0x212ab8: 0x26104920  addiu       $s0, $s0, 0x4920 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219E80u;
    { ctx->pc = 0x219e80; return; }
    ctx->pc = 0x212ABCu;
label_212abc:
    // 0x212abc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x212abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212ac0:
    // 0x212ac0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_212ac4:
    if (ctx->pc == 0x212AC4u) {
        ctx->pc = 0x212AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AC0u;
        // 0x212ac4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212AC8u;
        goto label_212ac8;
    }
    ctx->pc = 0x212AC0u;
    {
        const bool branch_taken_0x212ac0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x212AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AC0u;
        // 0x212ac4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ac0) {
            ctx->pc = 0x212AD0u;
            goto label_212ad0;
        }
    }
    ctx->pc = 0x212AC8u;
label_212ac8:
    // 0x212ac8: 0x16240007  bne         $s1, $a0, . + 4 + (0x7 << 2)
label_212acc:
    if (ctx->pc == 0x212ACCu) {
        ctx->pc = 0x212ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AC8u;
        // 0x212acc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212AD0u;
        goto label_212ad0;
    }
    ctx->pc = 0x212AC8u;
    {
        const bool branch_taken_0x212ac8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        ctx->pc = 0x212ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AC8u;
        // 0x212acc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ac8) {
            ctx->pc = 0x212AE8u;
            goto label_212ae8;
        }
    }
    ctx->pc = 0x212AD0u;
label_212ad0:
    // 0x212ad0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x212ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_212ad4:
    // 0x212ad4: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x212ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_212ad8:
    // 0x212ad8: 0xc0900a8  jal         func_2402A0
label_212adc:
    if (ctx->pc == 0x212ADCu) {
        ctx->pc = 0x212ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AD8u;
        // 0x212adc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212AE0u;
        goto label_212ae0;
    }
    ctx->pc = 0x212AD8u;
    SET_GPR_U32(ctx, 31, 0x212AE0u);
    ctx->pc = 0x212ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212AD8u;
    // 0x212adc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2402A0u;
    { ctx->pc = 0x2402a0; return; }
    ctx->pc = 0x212AE0u;
label_212ae0:
    // 0x212ae0: 0x10000037  b           . + 4 + (0x37 << 2)
label_212ae4:
    if (ctx->pc == 0x212AE4u) {
        ctx->pc = 0x212AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AE0u;
        // 0x212ae4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212AE8u;
        goto label_212ae8;
    }
    ctx->pc = 0x212AE0u;
    {
        const bool branch_taken_0x212ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AE0u;
        // 0x212ae4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ae0) {
            ctx->pc = 0x212BC0u;
            { ctx->pc = 0x212bc0; return; }
        }
    }
    ctx->pc = 0x212AE8u;
label_212ae8:
    // 0x212ae8: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
label_212aec:
    if (ctx->pc == 0x212AECu) {
        ctx->pc = 0x212AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AE8u;
        // 0x212aec: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212AF0u;
        goto label_212af0;
    }
    ctx->pc = 0x212AE8u;
    {
        const bool branch_taken_0x212ae8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x212AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AE8u;
        // 0x212aec: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ae8) {
            ctx->pc = 0x212B08u;
            goto label_212b08;
        }
    }
    ctx->pc = 0x212AF0u;
label_212af0:
    // 0x212af0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x212af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_212af4:
    // 0x212af4: 0x8c264900  lw          $a2, 0x4900($at)
    ctx->pc = 0x212af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_212af8:
    // 0x212af8: 0xc0900a8  jal         func_2402A0
label_212afc:
    if (ctx->pc == 0x212AFCu) {
        ctx->pc = 0x212AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212AF8u;
        // 0x212afc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B00u;
        goto label_212b00;
    }
    ctx->pc = 0x212AF8u;
    SET_GPR_U32(ctx, 31, 0x212B00u);
    ctx->pc = 0x212AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212AF8u;
    // 0x212afc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2402A0u;
    { ctx->pc = 0x2402a0; return; }
    ctx->pc = 0x212B00u;
label_212b00:
    // 0x212b00: 0x1000002e  b           . + 4 + (0x2E << 2)
label_212b04:
    if (ctx->pc == 0x212B04u) {
        ctx->pc = 0x212B08u;
        goto label_212b08;
    }
    ctx->pc = 0x212B00u;
    {
        const bool branch_taken_0x212b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212b00) {
            ctx->pc = 0x212BBCu;
            { ctx->pc = 0x212bbc; return; }
        }
    }
    ctx->pc = 0x212B08u;
label_212b08:
    // 0x212b08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x212b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_212b0c:
    // 0x212b0c: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
label_212b10:
    if (ctx->pc == 0x212B10u) {
        ctx->pc = 0x212B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B0Cu;
        // 0x212b10: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B14u;
        goto label_212b14;
    }
    ctx->pc = 0x212B0Cu;
    {
        const bool branch_taken_0x212b0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x212B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B0Cu;
        // 0x212b10: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b0c) {
            ctx->pc = 0x212B44u;
            goto label_212b44;
        }
    }
    ctx->pc = 0x212B14u;
label_212b14:
    // 0x212b14: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_212b18:
    // 0x212b18: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x212b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_212b1c:
    // 0x212b1c: 0x8c264900  lw          $a2, 0x4900($at)
    ctx->pc = 0x212b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_212b20:
    // 0x212b20: 0xc0900a8  jal         func_2402A0
label_212b24:
    if (ctx->pc == 0x212B24u) {
        ctx->pc = 0x212B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B20u;
        // 0x212b24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B28u;
        goto label_212b28;
    }
    ctx->pc = 0x212B20u;
    SET_GPR_U32(ctx, 31, 0x212B28u);
    ctx->pc = 0x212B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212B20u;
    // 0x212b24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2402A0u;
    { ctx->pc = 0x2402a0; return; }
    ctx->pc = 0x212B28u;
label_212b28:
    // 0x212b28: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_212b2c:
    if (ctx->pc == 0x212B2Cu) {
        ctx->pc = 0x212B30u;
        goto label_212b30;
    }
    ctx->pc = 0x212B28u;
    {
        const bool branch_taken_0x212b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212b28) {
            ctx->pc = 0x212BBCu;
            { ctx->pc = 0x212bbc; return; }
        }
    }
    ctx->pc = 0x212B30u;
label_212b30:
    // 0x212b30: 0xc07aebc  jal         func_1EBAF0
label_212b34:
    if (ctx->pc == 0x212B34u) {
        ctx->pc = 0x212B38u;
        goto label_212b38;
    }
    ctx->pc = 0x212B30u;
    SET_GPR_U32(ctx, 31, 0x212B38u);
    ctx->pc = 0x1EBAF0u;
    { ctx->pc = 0x1ebaf0; return; }
    ctx->pc = 0x212B38u;
label_212b38:
    // 0x212b38: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x212b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_212b3c:
    // 0x212b3c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_212b40:
    if (ctx->pc == 0x212B40u) {
        ctx->pc = 0x212B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B3Cu;
        // 0x212b40: 0xac22ccd4  sw          $v0, -0x332C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B44u;
        goto label_212b44;
    }
    ctx->pc = 0x212B3Cu;
    {
        const bool branch_taken_0x212b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B3Cu;
        // 0x212b40: 0xac22ccd4  sw          $v0, -0x332C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b3c) {
            ctx->pc = 0x212BBCu;
            { ctx->pc = 0x212bbc; return; }
        }
    }
    ctx->pc = 0x212B44u;
label_212b44:
    // 0x212b44: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_212b48:
    if (ctx->pc == 0x212B48u) {
        ctx->pc = 0x212B4Cu;
        goto label_212b4c;
    }
    ctx->pc = 0x212B44u;
    {
        const bool branch_taken_0x212b44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x212b44) {
            ctx->pc = 0x212B6Cu;
            { ctx->pc = 0x212b6c; return; }
        }
    }
    ctx->pc = 0x212B4Cu;
label_212b4c:
    // 0x212b4c: 0xc08a614  jal         func_229850
    ctx->pc = 0x212b50u;
    return;
}
