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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part412(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x264108u: goto label_264108;
        case 0x26410cu: goto label_26410c;
        case 0x264110u: goto label_264110;
        case 0x264114u: goto label_264114;
        case 0x264118u: goto label_264118;
        case 0x26411cu: goto label_26411c;
        case 0x264120u: goto label_264120;
        case 0x264124u: goto label_264124;
        case 0x264128u: goto label_264128;
        case 0x26412cu: goto label_26412c;
        case 0x264130u: goto label_264130;
        case 0x264134u: goto label_264134;
        case 0x264138u: goto label_264138;
        case 0x26413cu: goto label_26413c;
        case 0x264140u: goto label_264140;
        case 0x264144u: goto label_264144;
        case 0x264148u: goto label_264148;
        case 0x26414cu: goto label_26414c;
        case 0x264150u: goto label_264150;
        case 0x264154u: goto label_264154;
        case 0x264158u: goto label_264158;
        case 0x26415cu: goto label_26415c;
        case 0x264160u: goto label_264160;
        case 0x264164u: goto label_264164;
        case 0x264168u: goto label_264168;
        case 0x26416cu: goto label_26416c;
        case 0x264170u: goto label_264170;
        case 0x264174u: goto label_264174;
        case 0x264178u: goto label_264178;
        case 0x26417cu: goto label_26417c;
        case 0x264180u: goto label_264180;
        case 0x264184u: goto label_264184;
        case 0x264188u: goto label_264188;
        case 0x26418cu: goto label_26418c;
        case 0x264190u: goto label_264190;
        case 0x264194u: goto label_264194;
        case 0x264198u: goto label_264198;
        case 0x26419cu: goto label_26419c;
        case 0x2641a0u: goto label_2641a0;
        case 0x2641a4u: goto label_2641a4;
        case 0x2641a8u: goto label_2641a8;
        case 0x2641acu: goto label_2641ac;
        case 0x2641b0u: goto label_2641b0;
        case 0x2641b4u: goto label_2641b4;
        case 0x2641b8u: goto label_2641b8;
        case 0x2641bcu: goto label_2641bc;
        case 0x2641c0u: goto label_2641c0;
        case 0x2641c4u: goto label_2641c4;
        case 0x2641c8u: goto label_2641c8;
        case 0x2641ccu: goto label_2641cc;
        case 0x2641d0u: goto label_2641d0;
        case 0x2641d4u: goto label_2641d4;
        case 0x2641d8u: goto label_2641d8;
        case 0x2641dcu: goto label_2641dc;
        case 0x2641e0u: goto label_2641e0;
        case 0x2641e4u: goto label_2641e4;
        case 0x2641e8u: goto label_2641e8;
        case 0x2641ecu: goto label_2641ec;
        case 0x2641f0u: goto label_2641f0;
        case 0x2641f4u: goto label_2641f4;
        case 0x2641f8u: goto label_2641f8;
        case 0x2641fcu: goto label_2641fc;
        case 0x264200u: goto label_264200;
        case 0x264204u: goto label_264204;
        case 0x264208u: goto label_264208;
        case 0x26420cu: goto label_26420c;
        case 0x264210u: goto label_264210;
        case 0x264214u: goto label_264214;
        case 0x264218u: goto label_264218;
        case 0x26421cu: goto label_26421c;
        case 0x264220u: goto label_264220;
        case 0x264224u: goto label_264224;
        case 0x264228u: goto label_264228;
        case 0x26422cu: goto label_26422c;
        case 0x264230u: goto label_264230;
        case 0x264234u: goto label_264234;
        case 0x264238u: goto label_264238;
        case 0x26423cu: goto label_26423c;
        case 0x264240u: goto label_264240;
        case 0x264244u: goto label_264244;
        case 0x264248u: goto label_264248;
        case 0x26424cu: goto label_26424c;
        case 0x264250u: goto label_264250;
        case 0x264254u: goto label_264254;
        case 0x264258u: goto label_264258;
        case 0x26425cu: goto label_26425c;
        case 0x264260u: goto label_264260;
        case 0x264264u: goto label_264264;
        case 0x264268u: goto label_264268;
        case 0x26426cu: goto label_26426c;
        case 0x264270u: goto label_264270;
        case 0x264274u: goto label_264274;
        case 0x264278u: goto label_264278;
        case 0x26427cu: goto label_26427c;
        case 0x264280u: goto label_264280;
        case 0x264284u: goto label_264284;
        case 0x264288u: goto label_264288;
        case 0x26428cu: goto label_26428c;
        case 0x264290u: goto label_264290;
        case 0x264294u: goto label_264294;
        case 0x264298u: goto label_264298;
        case 0x26429cu: goto label_26429c;
        case 0x2642a0u: goto label_2642a0;
        case 0x2642a4u: goto label_2642a4;
        case 0x2642a8u: goto label_2642a8;
        case 0x2642acu: goto label_2642ac;
        case 0x2642b0u: goto label_2642b0;
        case 0x2642b4u: goto label_2642b4;
        case 0x2642b8u: goto label_2642b8;
        case 0x2642bcu: goto label_2642bc;
        case 0x2642c0u: goto label_2642c0;
        case 0x2642c4u: goto label_2642c4;
        case 0x2642c8u: goto label_2642c8;
        case 0x2642ccu: goto label_2642cc;
        case 0x2642d0u: goto label_2642d0;
        case 0x2642d4u: goto label_2642d4;
        case 0x2642d8u: goto label_2642d8;
        case 0x2642dcu: goto label_2642dc;
        case 0x2642e0u: goto label_2642e0;
        case 0x2642e4u: goto label_2642e4;
        case 0x2642e8u: goto label_2642e8;
        case 0x2642ecu: goto label_2642ec;
        case 0x2642f0u: goto label_2642f0;
        case 0x2642f4u: goto label_2642f4;
        case 0x2642f8u: goto label_2642f8;
        case 0x2642fcu: goto label_2642fc;
        case 0x264300u: goto label_264300;
        case 0x264304u: goto label_264304;
        case 0x264308u: goto label_264308;
        case 0x26430cu: goto label_26430c;
        case 0x264310u: goto label_264310;
        case 0x264314u: goto label_264314;
        case 0x264318u: goto label_264318;
        case 0x26431cu: goto label_26431c;
        case 0x264320u: goto label_264320;
        case 0x264324u: goto label_264324;
        case 0x264328u: goto label_264328;
        case 0x26432cu: goto label_26432c;
        case 0x264330u: goto label_264330;
        case 0x264334u: goto label_264334;
        case 0x264338u: goto label_264338;
        case 0x26433cu: goto label_26433c;
        case 0x264340u: goto label_264340;
        case 0x264344u: goto label_264344;
        case 0x264348u: goto label_264348;
        case 0x26434cu: goto label_26434c;
        case 0x264350u: goto label_264350;
        case 0x264354u: goto label_264354;
        case 0x264358u: goto label_264358;
        case 0x26435cu: goto label_26435c;
        case 0x264360u: goto label_264360;
        case 0x264364u: goto label_264364;
        case 0x264368u: goto label_264368;
        case 0x26436cu: goto label_26436c;
        case 0x264370u: goto label_264370;
        case 0x264374u: goto label_264374;
        case 0x264378u: goto label_264378;
        case 0x26437cu: goto label_26437c;
        case 0x264380u: goto label_264380;
        case 0x264384u: goto label_264384;
        case 0x264388u: goto label_264388;
        case 0x26438cu: goto label_26438c;
        case 0x264390u: goto label_264390;
        case 0x264394u: goto label_264394;
        case 0x264398u: goto label_264398;
        case 0x26439cu: goto label_26439c;
        case 0x2643a0u: goto label_2643a0;
        case 0x2643a4u: goto label_2643a4;
        case 0x2643a8u: goto label_2643a8;
        case 0x2643acu: goto label_2643ac;
        case 0x2643b0u: goto label_2643b0;
        case 0x2643b4u: goto label_2643b4;
        case 0x2643b8u: goto label_2643b8;
        case 0x2643bcu: goto label_2643bc;
        case 0x2643c0u: goto label_2643c0;
        case 0x2643c4u: goto label_2643c4;
        case 0x2643c8u: goto label_2643c8;
        case 0x2643ccu: goto label_2643cc;
        case 0x2643d0u: goto label_2643d0;
        case 0x2643d4u: goto label_2643d4;
        case 0x2643d8u: goto label_2643d8;
        case 0x2643dcu: goto label_2643dc;
        case 0x2643e0u: goto label_2643e0;
        case 0x2643e4u: goto label_2643e4;
        case 0x2643e8u: goto label_2643e8;
        case 0x2643ecu: goto label_2643ec;
        case 0x2643f0u: goto label_2643f0;
        case 0x2643f4u: goto label_2643f4;
        case 0x2643f8u: goto label_2643f8;
        case 0x2643fcu: goto label_2643fc;
        case 0x264400u: goto label_264400;
        case 0x264404u: goto label_264404;
        case 0x264408u: goto label_264408;
        case 0x26440cu: goto label_26440c;
        case 0x264410u: goto label_264410;
        case 0x264414u: goto label_264414;
        case 0x264418u: goto label_264418;
        case 0x26441cu: goto label_26441c;
        case 0x264420u: goto label_264420;
        case 0x264424u: goto label_264424;
        case 0x264428u: goto label_264428;
        case 0x26442cu: goto label_26442c;
        case 0x264430u: goto label_264430;
        case 0x264434u: goto label_264434;
        case 0x264438u: goto label_264438;
        case 0x26443cu: goto label_26443c;
        case 0x264440u: goto label_264440;
        case 0x264444u: goto label_264444;
        case 0x264448u: goto label_264448;
        case 0x26444cu: goto label_26444c;
        case 0x264450u: goto label_264450;
        case 0x264454u: goto label_264454;
        case 0x264458u: goto label_264458;
        case 0x26445cu: goto label_26445c;
        case 0x264460u: goto label_264460;
        case 0x264464u: goto label_264464;
        case 0x264468u: goto label_264468;
        case 0x26446cu: goto label_26446c;
        case 0x264470u: goto label_264470;
        case 0x264474u: goto label_264474;
        case 0x264478u: goto label_264478;
        case 0x26447cu: goto label_26447c;
        case 0x264480u: goto label_264480;
        case 0x264484u: goto label_264484;
        case 0x264488u: goto label_264488;
        case 0x26448cu: goto label_26448c;
        case 0x264490u: goto label_264490;
        case 0x264494u: goto label_264494;
        case 0x264498u: goto label_264498;
        case 0x26449cu: goto label_26449c;
        case 0x2644a0u: goto label_2644a0;
        case 0x2644a4u: goto label_2644a4;
        case 0x2644a8u: goto label_2644a8;
        case 0x2644acu: goto label_2644ac;
        case 0x2644b0u: goto label_2644b0;
        case 0x2644b4u: goto label_2644b4;
        case 0x2644b8u: goto label_2644b8;
        case 0x2644bcu: goto label_2644bc;
        case 0x2644c0u: goto label_2644c0;
        case 0x2644c4u: goto label_2644c4;
        case 0x2644c8u: goto label_2644c8;
        case 0x2644ccu: goto label_2644cc;
        case 0x2644d0u: goto label_2644d0;
        case 0x2644d4u: goto label_2644d4;
        case 0x2644d8u: goto label_2644d8;
        case 0x2644dcu: goto label_2644dc;
        case 0x2644e0u: goto label_2644e0;
        case 0x2644e4u: goto label_2644e4;
        case 0x2644e8u: goto label_2644e8;
        case 0x2644ecu: goto label_2644ec;
        case 0x2644f0u: goto label_2644f0;
        case 0x2644f4u: goto label_2644f4;
        case 0x2644f8u: goto label_2644f8;
        case 0x2644fcu: goto label_2644fc;
        case 0x264500u: goto label_264500;
        case 0x264504u: goto label_264504;
        case 0x264508u: goto label_264508;
        case 0x26450cu: goto label_26450c;
        case 0x264510u: goto label_264510;
        case 0x264514u: goto label_264514;
        case 0x264518u: goto label_264518;
        case 0x26451cu: goto label_26451c;
        case 0x264520u: goto label_264520;
        case 0x264524u: goto label_264524;
        case 0x264528u: goto label_264528;
        case 0x26452cu: goto label_26452c;
        case 0x264530u: goto label_264530;
        case 0x264534u: goto label_264534;
        case 0x264538u: goto label_264538;
        case 0x26453cu: goto label_26453c;
        case 0x264540u: goto label_264540;
        case 0x264544u: goto label_264544;
        case 0x264548u: goto label_264548;
        case 0x26454cu: goto label_26454c;
        case 0x264550u: goto label_264550;
        case 0x264554u: goto label_264554;
        case 0x264558u: goto label_264558;
        case 0x26455cu: goto label_26455c;
        case 0x264560u: goto label_264560;
        case 0x264564u: goto label_264564;
        case 0x264568u: goto label_264568;
        case 0x26456cu: goto label_26456c;
        case 0x264570u: goto label_264570;
        case 0x264574u: goto label_264574;
        case 0x264578u: goto label_264578;
        case 0x26457cu: goto label_26457c;
        case 0x264580u: goto label_264580;
        case 0x264584u: goto label_264584;
        case 0x264588u: goto label_264588;
        case 0x26458cu: goto label_26458c;
        case 0x264590u: goto label_264590;
        case 0x264594u: goto label_264594;
        case 0x264598u: goto label_264598;
        case 0x26459cu: goto label_26459c;
        case 0x2645a0u: goto label_2645a0;
        case 0x2645a4u: goto label_2645a4;
        case 0x2645a8u: goto label_2645a8;
        case 0x2645acu: goto label_2645ac;
        case 0x2645b0u: goto label_2645b0;
        case 0x2645b4u: goto label_2645b4;
        case 0x2645b8u: goto label_2645b8;
        case 0x2645bcu: goto label_2645bc;
        case 0x2645c0u: goto label_2645c0;
        case 0x2645c4u: goto label_2645c4;
        case 0x2645c8u: goto label_2645c8;
        case 0x2645ccu: goto label_2645cc;
        case 0x2645d0u: goto label_2645d0;
        case 0x2645d4u: goto label_2645d4;
        case 0x2645d8u: goto label_2645d8;
        case 0x2645dcu: goto label_2645dc;
        case 0x2645e0u: goto label_2645e0;
        case 0x2645e4u: goto label_2645e4;
        case 0x2645e8u: goto label_2645e8;
        case 0x2645ecu: goto label_2645ec;
        case 0x2645f0u: goto label_2645f0;
        case 0x2645f4u: goto label_2645f4;
        case 0x2645f8u: goto label_2645f8;
        case 0x2645fcu: goto label_2645fc;
        case 0x264600u: goto label_264600;
        case 0x264604u: goto label_264604;
        case 0x264608u: goto label_264608;
        case 0x26460cu: goto label_26460c;
        case 0x264610u: goto label_264610;
        case 0x264614u: goto label_264614;
        case 0x264618u: goto label_264618;
        case 0x26461cu: goto label_26461c;
        case 0x264620u: goto label_264620;
        case 0x264624u: goto label_264624;
        case 0x264628u: goto label_264628;
        case 0x26462cu: goto label_26462c;
        case 0x264630u: goto label_264630;
        case 0x264634u: goto label_264634;
        case 0x264638u: goto label_264638;
        case 0x26463cu: goto label_26463c;
        case 0x264640u: goto label_264640;
        case 0x264644u: goto label_264644;
        case 0x264648u: goto label_264648;
        case 0x26464cu: goto label_26464c;
        case 0x264650u: goto label_264650;
        case 0x264654u: goto label_264654;
        case 0x264658u: goto label_264658;
        case 0x26465cu: goto label_26465c;
        case 0x264660u: goto label_264660;
        case 0x264664u: goto label_264664;
        case 0x264668u: goto label_264668;
        case 0x26466cu: goto label_26466c;
        case 0x264670u: goto label_264670;
        case 0x264674u: goto label_264674;
        case 0x264678u: goto label_264678;
        case 0x26467cu: goto label_26467c;
        case 0x264680u: goto label_264680;
        case 0x264684u: goto label_264684;
        case 0x264688u: goto label_264688;
        case 0x26468cu: goto label_26468c;
        case 0x264690u: goto label_264690;
        case 0x264694u: goto label_264694;
        case 0x264698u: goto label_264698;
        case 0x26469cu: goto label_26469c;
        case 0x2646a0u: goto label_2646a0;
        case 0x2646a4u: goto label_2646a4;
        case 0x2646a8u: goto label_2646a8;
        case 0x2646acu: goto label_2646ac;
        case 0x2646b0u: goto label_2646b0;
        case 0x2646b4u: goto label_2646b4;
        case 0x2646b8u: goto label_2646b8;
        case 0x2646bcu: goto label_2646bc;
        case 0x2646c0u: goto label_2646c0;
        case 0x2646c4u: goto label_2646c4;
        case 0x2646c8u: goto label_2646c8;
        case 0x2646ccu: goto label_2646cc;
        case 0x2646d0u: goto label_2646d0;
        case 0x2646d4u: goto label_2646d4;
        case 0x2646d8u: goto label_2646d8;
        case 0x2646dcu: goto label_2646dc;
        case 0x2646e0u: goto label_2646e0;
        case 0x2646e4u: goto label_2646e4;
        case 0x2646e8u: goto label_2646e8;
        case 0x2646ecu: goto label_2646ec;
        case 0x2646f0u: goto label_2646f0;
        case 0x2646f4u: goto label_2646f4;
        case 0x2646f8u: goto label_2646f8;
        case 0x2646fcu: goto label_2646fc;
        case 0x264700u: goto label_264700;
        case 0x264704u: goto label_264704;
        case 0x264708u: goto label_264708;
        case 0x26470cu: goto label_26470c;
        case 0x264710u: goto label_264710;
        case 0x264714u: goto label_264714;
        case 0x264718u: goto label_264718;
        case 0x26471cu: goto label_26471c;
        case 0x264720u: goto label_264720;
        case 0x264724u: goto label_264724;
        case 0x264728u: goto label_264728;
        case 0x26472cu: goto label_26472c;
        case 0x264730u: goto label_264730;
        case 0x264734u: goto label_264734;
        case 0x264738u: goto label_264738;
        case 0x26473cu: goto label_26473c;
        case 0x264740u: goto label_264740;
        case 0x264744u: goto label_264744;
        case 0x264748u: goto label_264748;
        case 0x26474cu: goto label_26474c;
        case 0x264750u: goto label_264750;
        case 0x264754u: goto label_264754;
        case 0x264758u: goto label_264758;
        case 0x26475cu: goto label_26475c;
        case 0x264760u: goto label_264760;
        case 0x264764u: goto label_264764;
        case 0x264768u: goto label_264768;
        case 0x26476cu: goto label_26476c;
        case 0x264770u: goto label_264770;
        case 0x264774u: goto label_264774;
        case 0x264778u: goto label_264778;
        case 0x26477cu: goto label_26477c;
        case 0x264780u: goto label_264780;
        case 0x264784u: goto label_264784;
        case 0x264788u: goto label_264788;
        case 0x26478cu: goto label_26478c;
        case 0x264790u: goto label_264790;
        case 0x264794u: goto label_264794;
        case 0x264798u: goto label_264798;
        case 0x26479cu: goto label_26479c;
        case 0x2647a0u: goto label_2647a0;
        case 0x2647a4u: goto label_2647a4;
        case 0x2647a8u: goto label_2647a8;
        case 0x2647acu: goto label_2647ac;
        case 0x2647b0u: goto label_2647b0;
        case 0x2647b4u: goto label_2647b4;
        case 0x2647b8u: goto label_2647b8;
        case 0x2647bcu: goto label_2647bc;
        case 0x2647c0u: goto label_2647c0;
        case 0x2647c4u: goto label_2647c4;
        case 0x2647c8u: goto label_2647c8;
        case 0x2647ccu: goto label_2647cc;
        case 0x2647d0u: goto label_2647d0;
        case 0x2647d4u: goto label_2647d4;
        case 0x2647d8u: goto label_2647d8;
        case 0x2647dcu: goto label_2647dc;
        case 0x2647e0u: goto label_2647e0;
        case 0x2647e4u: goto label_2647e4;
        case 0x2647e8u: goto label_2647e8;
        case 0x2647ecu: goto label_2647ec;
        case 0x2647f0u: goto label_2647f0;
        case 0x2647f4u: goto label_2647f4;
        case 0x2647f8u: goto label_2647f8;
        case 0x2647fcu: goto label_2647fc;
        case 0x264800u: goto label_264800;
        case 0x264804u: goto label_264804;
        case 0x264808u: goto label_264808;
        case 0x26480cu: goto label_26480c;
        case 0x264810u: goto label_264810;
        case 0x264814u: goto label_264814;
        case 0x264818u: goto label_264818;
        case 0x26481cu: goto label_26481c;
        case 0x264820u: goto label_264820;
        case 0x264824u: goto label_264824;
        case 0x264828u: goto label_264828;
        case 0x26482cu: goto label_26482c;
        case 0x264830u: goto label_264830;
        case 0x264834u: goto label_264834;
        case 0x264838u: goto label_264838;
        case 0x26483cu: goto label_26483c;
        case 0x264840u: goto label_264840;
        case 0x264844u: goto label_264844;
        case 0x264848u: goto label_264848;
        case 0x26484cu: goto label_26484c;
        case 0x264850u: goto label_264850;
        case 0x264854u: goto label_264854;
        case 0x264858u: goto label_264858;
        case 0x26485cu: goto label_26485c;
        case 0x264860u: goto label_264860;
        case 0x264864u: goto label_264864;
        case 0x264868u: goto label_264868;
        case 0x26486cu: goto label_26486c;
        case 0x264870u: goto label_264870;
        case 0x264874u: goto label_264874;
        case 0x264878u: goto label_264878;
        case 0x26487cu: goto label_26487c;
        case 0x264880u: goto label_264880;
        case 0x264884u: goto label_264884;
        case 0x264888u: goto label_264888;
        case 0x26488cu: goto label_26488c;
        case 0x264890u: goto label_264890;
        case 0x264894u: goto label_264894;
        case 0x264898u: goto label_264898;
        case 0x26489cu: goto label_26489c;
        case 0x2648a0u: goto label_2648a0;
        case 0x2648a4u: goto label_2648a4;
        case 0x2648a8u: goto label_2648a8;
        case 0x2648acu: goto label_2648ac;
        case 0x2648b0u: goto label_2648b0;
        case 0x2648b4u: goto label_2648b4;
        case 0x2648b8u: goto label_2648b8;
        case 0x2648bcu: goto label_2648bc;
        case 0x2648c0u: goto label_2648c0;
        case 0x2648c4u: goto label_2648c4;
        case 0x2648c8u: goto label_2648c8;
        case 0x2648ccu: goto label_2648cc;
        case 0x2648d0u: goto label_2648d0;
        case 0x2648d4u: goto label_2648d4;
        default: return;
    }

label_264108:
    // 0x264108: 0x0  nop
    ctx->pc = 0x264108u;
    // NOP
label_26410c:
    // 0x26410c: 0x0  nop
    ctx->pc = 0x26410cu;
    // NOP
label_264110:
    // 0x264110: 0xead2  .word       0x0000EAD2                   # mflo        $sp # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264110u;
    SET_GPR_U64(ctx, 29, ctx->lo);
label_264114:
    // 0x264114: 0x7150  .word       0x00007150                   # mfhi        $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264114u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_264118:
    // 0x264118: 0x0  nop
    ctx->pc = 0x264118u;
    // NOP
label_26411c:
    // 0x26411c: 0x0  nop
    ctx->pc = 0x26411cu;
    // NOP
label_264120:
    // 0x264120: 0xeae1  .word       0x0000EAE1                   # addu        $sp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_264124:
    // 0x264124: 0x6e00  sll         $t5, $zero, 24
    ctx->pc = 0x264124u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_264128:
    // 0x264128: 0x0  nop
    ctx->pc = 0x264128u;
    // NOP
label_26412c:
    // 0x26412c: 0x0  nop
    ctx->pc = 0x26412cu;
    // NOP
label_264130:
    // 0x264130: 0xeaef  .word       0x0000EAEF                   # dsubu       $sp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264130u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_264134:
    // 0x264134: 0x3970  tge         $zero, $zero, 229
    ctx->pc = 0x264134u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264138:
    // 0x264138: 0x0  nop
    ctx->pc = 0x264138u;
    // NOP
label_26413c:
    // 0x26413c: 0x0  nop
    ctx->pc = 0x26413cu;
    // NOP
label_264140:
    // 0x264140: 0xeaf7  .word       0x0000EAF7                   # INVALID     $zero, $zero, -0x1509 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264140u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x264140 raw=0x0000EAF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264144:
    // 0x264144: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x264144u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_264148:
    // 0x264148: 0x0  nop
    ctx->pc = 0x264148u;
    // NOP
label_26414c:
    // 0x26414c: 0x0  nop
    ctx->pc = 0x26414cu;
    // NOP
label_264150:
    // 0x264150: 0xeaff  dsra32      $sp, $zero, 11
    ctx->pc = 0x264150u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> (32 + 11));
label_264154:
    // 0x264154: 0x2c40  sll         $a1, $zero, 17
    ctx->pc = 0x264154u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_264158:
    // 0x264158: 0x0  nop
    ctx->pc = 0x264158u;
    // NOP
label_26415c:
    // 0x26415c: 0x0  nop
    ctx->pc = 0x26415cu;
    // NOP
label_264160:
    // 0x264160: 0xeb05  .word       0x0000EB05                   # INVALID     $zero, $zero, -0x14FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x264160 raw=0x0000EB05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264164:
    // 0x264164: 0x5a80  sll         $t3, $zero, 10
    ctx->pc = 0x264164u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_264168:
    // 0x264168: 0x0  nop
    ctx->pc = 0x264168u;
    // NOP
label_26416c:
    // 0x26416c: 0x0  nop
    ctx->pc = 0x26416cu;
    // NOP
label_264170:
    // 0x264170: 0xeb11  .word       0x0000EB11                   # mthi        $zero # 0000EB00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264170u;
    ctx->hi = GPR_U64(ctx, 0);
label_264174:
    // 0x264174: 0x35b0  tge         $zero, $zero, 214
    ctx->pc = 0x264174u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264178:
    // 0x264178: 0x0  nop
    ctx->pc = 0x264178u;
    // NOP
label_26417c:
    // 0x26417c: 0x0  nop
    ctx->pc = 0x26417cu;
    // NOP
label_264180:
    // 0x264180: 0xeb18  .word       0x0000EB18                   # mult        $sp, $zero, $zero # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x264180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_264184:
    // 0x264184: 0x4da0  .word       0x00004DA0                   # add         $t1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264184u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_264188:
    // 0x264188: 0x0  nop
    ctx->pc = 0x264188u;
    // NOP
label_26418c:
    // 0x26418c: 0x0  nop
    ctx->pc = 0x26418cu;
    // NOP
label_264190:
    // 0x264190: 0xeb22  .word       0x0000EB22                   # neg         $sp, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264190u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_264194:
    // 0x264194: 0x50b0  tge         $zero, $zero, 322
    ctx->pc = 0x264194u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264198:
    // 0x264198: 0x0  nop
    ctx->pc = 0x264198u;
    // NOP
label_26419c:
    // 0x26419c: 0x0  nop
    ctx->pc = 0x26419cu;
    // NOP
label_2641a0:
    // 0x2641a0: 0xeb2d  .word       0x0000EB2D                   # daddu       $sp, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2641a0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2641a4:
    // 0x2641a4: 0x9360  .word       0x00009360                   # add         $s2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2641a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2641a8:
    // 0x2641a8: 0x0  nop
    ctx->pc = 0x2641a8u;
    // NOP
label_2641ac:
    // 0x2641ac: 0x0  nop
    ctx->pc = 0x2641acu;
    // NOP
label_2641b0:
    // 0x2641b0: 0xeb40  sll         $sp, $zero, 13
    ctx->pc = 0x2641b0u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_2641b4:
    // 0x2641b4: 0x9b20  .word       0x00009B20                   # add         $s3, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2641b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2641b8:
    // 0x2641b8: 0x0  nop
    ctx->pc = 0x2641b8u;
    // NOP
label_2641bc:
    // 0x2641bc: 0x0  nop
    ctx->pc = 0x2641bcu;
    // NOP
label_2641c0:
    // 0x2641c0: 0xeb54  .word       0x0000EB54                   # dsllv       $sp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2641c0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2641c4:
    // 0x2641c4: 0x66c0  sll         $t4, $zero, 27
    ctx->pc = 0x2641c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2641c8:
    // 0x2641c8: 0x0  nop
    ctx->pc = 0x2641c8u;
    // NOP
label_2641cc:
    // 0x2641cc: 0x0  nop
    ctx->pc = 0x2641ccu;
    // NOP
label_2641d0:
    // 0x2641d0: 0xeb61  .word       0x0000EB61                   # addu        $sp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2641d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2641d4:
    // 0x2641d4: 0x5300  sll         $t2, $zero, 12
    ctx->pc = 0x2641d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_2641d8:
    // 0x2641d8: 0x0  nop
    ctx->pc = 0x2641d8u;
    // NOP
label_2641dc:
    // 0x2641dc: 0x0  nop
    ctx->pc = 0x2641dcu;
    // NOP
label_2641e0:
    // 0x2641e0: 0xeb6c  .word       0x0000EB6C                   # dadd        $sp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2641e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_2641e4:
    // 0x2641e4: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x2641e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2641e8:
    // 0x2641e8: 0x0  nop
    ctx->pc = 0x2641e8u;
    // NOP
label_2641ec:
    // 0x2641ec: 0x0  nop
    ctx->pc = 0x2641ecu;
    // NOP
label_2641f0:
    // 0x2641f0: 0xeb77  .word       0x0000EB77                   # INVALID     $zero, $zero, -0x1489 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2641f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2641F0 raw=0x0000EB77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2641f4:
    // 0x2641f4: 0x5d20  .word       0x00005D20                   # add         $t3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2641f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2641f8:
    // 0x2641f8: 0x0  nop
    ctx->pc = 0x2641f8u;
    // NOP
label_2641fc:
    // 0x2641fc: 0x0  nop
    ctx->pc = 0x2641fcu;
    // NOP
label_264200:
    // 0x264200: 0xeb83  sra         $sp, $zero, 14
    ctx->pc = 0x264200u;
    SET_GPR_S32(ctx, 29, SRA32(GPR_S32(ctx, 0), 14));
label_264204:
    // 0x264204: 0x5b10  .word       0x00005B10                   # mfhi        $t3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264204u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_264208:
    // 0x264208: 0x0  nop
    ctx->pc = 0x264208u;
    // NOP
label_26420c:
    // 0x26420c: 0x0  nop
    ctx->pc = 0x26420cu;
    // NOP
label_264210:
    // 0x264210: 0xeb8f  .word       0x0000EB8F                   # sync # 0000E800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264210u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_264214:
    // 0x264214: 0x46e0  .word       0x000046E0                   # add         $t0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264214u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_264218:
    // 0x264218: 0x0  nop
    ctx->pc = 0x264218u;
    // NOP
label_26421c:
    // 0x26421c: 0x0  nop
    ctx->pc = 0x26421cu;
    // NOP
label_264220:
    // 0x264220: 0xeb98  .word       0x0000EB98                   # mult        $sp, $zero, $zero # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x264220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_264224:
    // 0x264224: 0x5ff0  tge         $zero, $zero, 383
    ctx->pc = 0x264224u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264228:
    // 0x264228: 0x0  nop
    ctx->pc = 0x264228u;
    // NOP
label_26422c:
    // 0x26422c: 0x0  nop
    ctx->pc = 0x26422cu;
    // NOP
label_264230:
    // 0x264230: 0xeba4  .word       0x0000EBA4                   # and         $sp, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264230u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_264234:
    // 0x264234: 0x7d80  sll         $t7, $zero, 22
    ctx->pc = 0x264234u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_264238:
    // 0x264238: 0x0  nop
    ctx->pc = 0x264238u;
    // NOP
label_26423c:
    // 0x26423c: 0x0  nop
    ctx->pc = 0x26423cu;
    // NOP
label_264240:
    // 0x264240: 0xebb4  teq         $zero, $zero, 942
    ctx->pc = 0x264240u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264244:
    // 0x264244: 0x5cf0  tge         $zero, $zero, 371
    ctx->pc = 0x264244u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264248:
    // 0x264248: 0x0  nop
    ctx->pc = 0x264248u;
    // NOP
label_26424c:
    // 0x26424c: 0x0  nop
    ctx->pc = 0x26424cu;
    // NOP
label_264250:
    // 0x264250: 0xebc0  sll         $sp, $zero, 15
    ctx->pc = 0x264250u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_264254:
    // 0x264254: 0x7350  .word       0x00007350                   # mfhi        $t6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264254u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_264258:
    // 0x264258: 0x0  nop
    ctx->pc = 0x264258u;
    // NOP
label_26425c:
    // 0x26425c: 0x0  nop
    ctx->pc = 0x26425cu;
    // NOP
label_264260:
    // 0x264260: 0xebcf  .word       0x0000EBCF                   # sync # 0000E800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264260u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_264264:
    // 0x264264: 0x68d0  .word       0x000068D0                   # mfhi        $t5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264264u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_264268:
    // 0x264268: 0x0  nop
    ctx->pc = 0x264268u;
    // NOP
label_26426c:
    // 0x26426c: 0x0  nop
    ctx->pc = 0x26426cu;
    // NOP
label_264270:
    // 0x264270: 0xebdd  .word       0x0000EBDD                   # dmultu      $zero, $zero # 0000EBC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264270u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x264270 raw=0x0000EBDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264274:
    // 0x264274: 0x4880  sll         $t1, $zero, 2
    ctx->pc = 0x264274u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_264278:
    // 0x264278: 0x0  nop
    ctx->pc = 0x264278u;
    // NOP
label_26427c:
    // 0x26427c: 0x0  nop
    ctx->pc = 0x26427cu;
    // NOP
label_264280:
    // 0x264280: 0xebe7  .word       0x0000EBE7                   # not         $sp, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264280u;
    SET_GPR_U64(ctx, 29, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_264284:
    // 0x264284: 0x38a0  .word       0x000038A0                   # add         $a3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_264288:
    // 0x264288: 0x0  nop
    ctx->pc = 0x264288u;
    // NOP
label_26428c:
    // 0x26428c: 0x0  nop
    ctx->pc = 0x26428cu;
    // NOP
label_264290:
    // 0x264290: 0xebef  .word       0x0000EBEF                   # dsubu       $sp, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264290u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_264294:
    // 0x264294: 0x33d0  .word       0x000033D0                   # mfhi        $a2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264294u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_264298:
    // 0x264298: 0x0  nop
    ctx->pc = 0x264298u;
    // NOP
label_26429c:
    // 0x26429c: 0x0  nop
    ctx->pc = 0x26429cu;
    // NOP
label_2642a0:
    // 0x2642a0: 0xebf6  tne         $zero, $zero, 943
    ctx->pc = 0x2642a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2642a4:
    // 0x2642a4: 0x5790  .word       0x00005790                   # mfhi        $t2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2642a4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2642a8:
    // 0x2642a8: 0x0  nop
    ctx->pc = 0x2642a8u;
    // NOP
label_2642ac:
    // 0x2642ac: 0x0  nop
    ctx->pc = 0x2642acu;
    // NOP
label_2642b0:
    // 0x2642b0: 0xec01  .word       0x0000EC01                   # INVALID     $zero, $zero, -0x13FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2642b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2642B0 raw=0x0000EC01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2642b4:
    // 0x2642b4: 0x8ab0  tge         $zero, $zero, 554
    ctx->pc = 0x2642b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2642b8:
    // 0x2642b8: 0x0  nop
    ctx->pc = 0x2642b8u;
    // NOP
label_2642bc:
    // 0x2642bc: 0x0  nop
    ctx->pc = 0x2642bcu;
    // NOP
label_2642c0:
    // 0x2642c0: 0xec13  .word       0x0000EC13                   # mtlo        $zero # 0000EC00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2642c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2642c4:
    // 0x2642c4: 0x4140  sll         $t0, $zero, 5
    ctx->pc = 0x2642c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2642c8:
    // 0x2642c8: 0x0  nop
    ctx->pc = 0x2642c8u;
    // NOP
label_2642cc:
    // 0x2642cc: 0x0  nop
    ctx->pc = 0x2642ccu;
    // NOP
label_2642d0:
    // 0x2642d0: 0xec1c  .word       0x0000EC1C                   # dmult       $zero, $zero # 0000EC00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2642d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2642D0 raw=0x0000EC1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2642d4:
    // 0x2642d4: 0x3050  .word       0x00003050                   # mfhi        $a2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2642d4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2642d8:
    // 0x2642d8: 0x0  nop
    ctx->pc = 0x2642d8u;
    // NOP
label_2642dc:
    // 0x2642dc: 0x0  nop
    ctx->pc = 0x2642dcu;
    // NOP
label_2642e0:
    // 0x2642e0: 0xec23  .word       0x0000EC23                   # negu        $sp, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2642e0u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2642e4:
    // 0x2642e4: 0x24c0  sll         $a0, $zero, 19
    ctx->pc = 0x2642e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2642e8:
    // 0x2642e8: 0x0  nop
    ctx->pc = 0x2642e8u;
    // NOP
label_2642ec:
    // 0x2642ec: 0x0  nop
    ctx->pc = 0x2642ecu;
    // NOP
label_2642f0:
    // 0x2642f0: 0xec28  .word       0x0000EC28                   # mfsa        $sp # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2642f0u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_2642f4:
    // 0x2642f4: 0x3a40  sll         $a3, $zero, 9
    ctx->pc = 0x2642f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2642f8:
    // 0x2642f8: 0x0  nop
    ctx->pc = 0x2642f8u;
    // NOP
label_2642fc:
    // 0x2642fc: 0x0  nop
    ctx->pc = 0x2642fcu;
    // NOP
label_264300:
    // 0x264300: 0xec30  tge         $zero, $zero, 944
    ctx->pc = 0x264300u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264304:
    // 0x264304: 0x2770  tge         $zero, $zero, 157
    ctx->pc = 0x264304u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264308:
    // 0x264308: 0x0  nop
    ctx->pc = 0x264308u;
    // NOP
label_26430c:
    // 0x26430c: 0x0  nop
    ctx->pc = 0x26430cu;
    // NOP
label_264310:
    // 0x264310: 0xec35  .word       0x0000EC35                   # INVALID     $zero, $zero, -0x13CB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264310u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x264310 raw=0x0000EC35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264314:
    // 0x264314: 0x4e30  tge         $zero, $zero, 312
    ctx->pc = 0x264314u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264318:
    // 0x264318: 0x0  nop
    ctx->pc = 0x264318u;
    // NOP
label_26431c:
    // 0x26431c: 0x0  nop
    ctx->pc = 0x26431cu;
    // NOP
label_264320:
    // 0x264320: 0xec3f  dsra32      $sp, $zero, 16
    ctx->pc = 0x264320u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> (32 + 16));
label_264324:
    // 0x264324: 0x53d0  .word       0x000053D0                   # mfhi        $t2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264324u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_264328:
    // 0x264328: 0x0  nop
    ctx->pc = 0x264328u;
    // NOP
label_26432c:
    // 0x26432c: 0x0  nop
    ctx->pc = 0x26432cu;
    // NOP
label_264330:
    // 0x264330: 0xec4a  .word       0x0000EC4A                   # movz        $sp, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264330u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 29, GPR_VEC(ctx, 0));
label_264334:
    // 0x264334: 0x99c0  sll         $s3, $zero, 7
    ctx->pc = 0x264334u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_264338:
    // 0x264338: 0x0  nop
    ctx->pc = 0x264338u;
    // NOP
label_26433c:
    // 0x26433c: 0x0  nop
    ctx->pc = 0x26433cu;
    // NOP
label_264340:
    // 0x264340: 0xec5e  .word       0x0000EC5E                   # ddiv        $sp, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x264340 raw=0x0000EC5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264344:
    // 0x264344: 0x8190  .word       0x00008190                   # mfhi        $s0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264344u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_264348:
    // 0x264348: 0x0  nop
    ctx->pc = 0x264348u;
    // NOP
label_26434c:
    // 0x26434c: 0x0  nop
    ctx->pc = 0x26434cu;
    // NOP
label_264350:
    // 0x264350: 0xec6f  .word       0x0000EC6F                   # dsubu       $sp, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264350u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_264354:
    // 0x264354: 0x5cb0  tge         $zero, $zero, 370
    ctx->pc = 0x264354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264358:
    // 0x264358: 0x0  nop
    ctx->pc = 0x264358u;
    // NOP
label_26435c:
    // 0x26435c: 0x0  nop
    ctx->pc = 0x26435cu;
    // NOP
label_264360:
    // 0x264360: 0xec7b  dsra        $sp, $zero, 17
    ctx->pc = 0x264360u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> 17);
label_264364:
    // 0x264364: 0x4500  sll         $t0, $zero, 20
    ctx->pc = 0x264364u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_264368:
    // 0x264368: 0x0  nop
    ctx->pc = 0x264368u;
    // NOP
label_26436c:
    // 0x26436c: 0x0  nop
    ctx->pc = 0x26436cu;
    // NOP
label_264370:
    // 0x264370: 0xec84  .word       0x0000EC84                   # sllv        $sp, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264370u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_264374:
    // 0x264374: 0x51b0  tge         $zero, $zero, 326
    ctx->pc = 0x264374u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264378:
    // 0x264378: 0x0  nop
    ctx->pc = 0x264378u;
    // NOP
label_26437c:
    // 0x26437c: 0x0  nop
    ctx->pc = 0x26437cu;
    // NOP
label_264380:
    // 0x264380: 0xec8f  .word       0x0000EC8F                   # sync.p # 0000E800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264380u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_264384:
    // 0x264384: 0x6500  sll         $t4, $zero, 20
    ctx->pc = 0x264384u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_264388:
    // 0x264388: 0x0  nop
    ctx->pc = 0x264388u;
    // NOP
label_26438c:
    // 0x26438c: 0x0  nop
    ctx->pc = 0x26438cu;
    // NOP
label_264390:
    // 0x264390: 0xec9c  .word       0x0000EC9C                   # dmult       $zero, $zero # 0000EC80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264390u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x264390 raw=0x0000EC9C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264394:
    // 0x264394: 0xa790  .word       0x0000A790                   # mfhi        $s4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264394u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_264398:
    // 0x264398: 0x0  nop
    ctx->pc = 0x264398u;
    // NOP
label_26439c:
    // 0x26439c: 0x0  nop
    ctx->pc = 0x26439cu;
    // NOP
label_2643a0:
    // 0x2643a0: 0xecb1  tgeu        $zero, $zero, 946
    ctx->pc = 0x2643a0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2643a4:
    // 0x2643a4: 0x5f10  .word       0x00005F10                   # mfhi        $t3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2643a4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2643a8:
    // 0x2643a8: 0x0  nop
    ctx->pc = 0x2643a8u;
    // NOP
label_2643ac:
    // 0x2643ac: 0x0  nop
    ctx->pc = 0x2643acu;
    // NOP
label_2643b0:
    // 0x2643b0: 0xecbd  .word       0x0000ECBD                   # INVALID     $zero, $zero, -0x1343 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2643b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2643B0 raw=0x0000ECBD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2643b4:
    // 0x2643b4: 0xade0  .word       0x0000ADE0                   # add         $s5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2643b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2643b8:
    // 0x2643b8: 0x0  nop
    ctx->pc = 0x2643b8u;
    // NOP
label_2643bc:
    // 0x2643bc: 0x0  nop
    ctx->pc = 0x2643bcu;
    // NOP
label_2643c0:
    // 0x2643c0: 0xecd3  .word       0x0000ECD3                   # mtlo        $zero # 0000ECC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2643c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2643c4:
    // 0x2643c4: 0xb8b0  tge         $zero, $zero, 738
    ctx->pc = 0x2643c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2643c8:
    // 0x2643c8: 0x0  nop
    ctx->pc = 0x2643c8u;
    // NOP
label_2643cc:
    // 0x2643cc: 0x0  nop
    ctx->pc = 0x2643ccu;
    // NOP
label_2643d0:
    // 0x2643d0: 0xeceb  .word       0x0000ECEB                   # sltu        $sp, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2643d0u;
    SET_GPR_U64(ctx, 29, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2643d4:
    // 0x2643d4: 0x7b10  .word       0x00007B10                   # mfhi        $t7 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2643d4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2643d8:
    // 0x2643d8: 0x0  nop
    ctx->pc = 0x2643d8u;
    // NOP
label_2643dc:
    // 0x2643dc: 0x0  nop
    ctx->pc = 0x2643dcu;
    // NOP
label_2643e0:
    // 0x2643e0: 0xecfb  dsra        $sp, $zero, 19
    ctx->pc = 0x2643e0u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> 19);
label_2643e4:
    // 0x2643e4: 0xccb0  tge         $zero, $zero, 818
    ctx->pc = 0x2643e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2643e8:
    // 0x2643e8: 0x0  nop
    ctx->pc = 0x2643e8u;
    // NOP
label_2643ec:
    // 0x2643ec: 0x0  nop
    ctx->pc = 0x2643ecu;
    // NOP
label_2643f0:
    // 0x2643f0: 0xed15  .word       0x0000ED15                   # INVALID     $zero, $zero, -0x12EB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2643f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2643F0 raw=0x0000ED15"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2643f4:
    // 0x2643f4: 0x7520  .word       0x00007520                   # add         $t6, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2643f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2643f8:
    // 0x2643f8: 0x0  nop
    ctx->pc = 0x2643f8u;
    // NOP
label_2643fc:
    // 0x2643fc: 0x0  nop
    ctx->pc = 0x2643fcu;
    // NOP
label_264400:
    // 0x264400: 0xed24  .word       0x0000ED24                   # and         $sp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264400u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_264404:
    // 0x264404: 0x8970  tge         $zero, $zero, 549
    ctx->pc = 0x264404u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264408:
    // 0x264408: 0x0  nop
    ctx->pc = 0x264408u;
    // NOP
label_26440c:
    // 0x26440c: 0x0  nop
    ctx->pc = 0x26440cu;
    // NOP
label_264410:
    // 0x264410: 0xed36  tne         $zero, $zero, 948
    ctx->pc = 0x264410u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264414:
    // 0x264414: 0x8860  .word       0x00008860                   # add         $s1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264414u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_264418:
    // 0x264418: 0x0  nop
    ctx->pc = 0x264418u;
    // NOP
label_26441c:
    // 0x26441c: 0x0  nop
    ctx->pc = 0x26441cu;
    // NOP
label_264420:
    // 0x264420: 0xed48  .word       0x0000ED48                   # jr          $zero # 0000ED40 <InstrIdType: CPU_SPECIAL>
label_264424:
    if (ctx->pc == 0x264424u) {
        ctx->pc = 0x264424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264420u;
        // 0x264424: 0x73c0  sll         $t6, $zero, 15 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264428u;
        goto label_264428;
    }
    ctx->pc = 0x264420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x264424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264420u;
        // 0x264424: 0x73c0  sll         $t6, $zero, 15 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264420u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x264428u;
label_264428:
    // 0x264428: 0x0  nop
    ctx->pc = 0x264428u;
    // NOP
label_26442c:
    // 0x26442c: 0x0  nop
    ctx->pc = 0x26442cu;
    // NOP
label_264430:
    // 0x264430: 0xed57  .word       0x0000ED57                   # dsrav       $sp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264430u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_264434:
    // 0x264434: 0x7790  .word       0x00007790                   # mfhi        $t6 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264434u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_264438:
    // 0x264438: 0x0  nop
    ctx->pc = 0x264438u;
    // NOP
label_26443c:
    // 0x26443c: 0x0  nop
    ctx->pc = 0x26443cu;
    // NOP
label_264440:
    // 0x264440: 0xed66  .word       0x0000ED66                   # xor         $sp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264440u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_264444:
    // 0x264444: 0x74c0  sll         $t6, $zero, 19
    ctx->pc = 0x264444u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_264448:
    // 0x264448: 0x0  nop
    ctx->pc = 0x264448u;
    // NOP
label_26444c:
    // 0x26444c: 0x0  nop
    ctx->pc = 0x26444cu;
    // NOP
label_264450:
    // 0x264450: 0xed75  .word       0x0000ED75                   # INVALID     $zero, $zero, -0x128B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264450u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x264450 raw=0x0000ED75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264454:
    // 0x264454: 0x49b0  tge         $zero, $zero, 294
    ctx->pc = 0x264454u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264458:
    // 0x264458: 0x0  nop
    ctx->pc = 0x264458u;
    // NOP
label_26445c:
    // 0x26445c: 0x0  nop
    ctx->pc = 0x26445cu;
    // NOP
label_264460:
    // 0x264460: 0xed7f  dsra32      $sp, $zero, 21
    ctx->pc = 0x264460u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> (32 + 21));
label_264464:
    // 0x264464: 0x61e0  .word       0x000061E0                   # add         $t4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264464u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_264468:
    // 0x264468: 0x0  nop
    ctx->pc = 0x264468u;
    // NOP
label_26446c:
    // 0x26446c: 0x0  nop
    ctx->pc = 0x26446cu;
    // NOP
label_264470:
    // 0x264470: 0xed8c  syscall     950
    ctx->pc = 0x264470u;
    ctx->pc = 0x264474u;
runtime->handleSyscall(rdram, ctx, 0x3B6u);
label_264474:
    // 0x264474: 0xc500  sll         $t8, $zero, 20
    ctx->pc = 0x264474u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_264478:
    // 0x264478: 0x0  nop
    ctx->pc = 0x264478u;
    // NOP
label_26447c:
    // 0x26447c: 0x0  nop
    ctx->pc = 0x26447cu;
    // NOP
label_264480:
    // 0x264480: 0xeda5  .word       0x0000EDA5                   # move        $sp, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264480u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_264484:
    // 0x264484: 0x6340  sll         $t4, $zero, 13
    ctx->pc = 0x264484u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_264488:
    // 0x264488: 0x0  nop
    ctx->pc = 0x264488u;
    // NOP
label_26448c:
    // 0x26448c: 0x0  nop
    ctx->pc = 0x26448cu;
    // NOP
label_264490:
    // 0x264490: 0xedb2  tlt         $zero, $zero, 950
    ctx->pc = 0x264490u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264494:
    // 0x264494: 0x6dc0  sll         $t5, $zero, 23
    ctx->pc = 0x264494u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_264498:
    // 0x264498: 0x0  nop
    ctx->pc = 0x264498u;
    // NOP
label_26449c:
    // 0x26449c: 0x0  nop
    ctx->pc = 0x26449cu;
    // NOP
label_2644a0:
    // 0x2644a0: 0xedc0  sll         $sp, $zero, 23
    ctx->pc = 0x2644a0u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_2644a4:
    // 0x2644a4: 0x8750  .word       0x00008750                   # mfhi        $s0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2644a4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2644a8:
    // 0x2644a8: 0x0  nop
    ctx->pc = 0x2644a8u;
    // NOP
label_2644ac:
    // 0x2644ac: 0x0  nop
    ctx->pc = 0x2644acu;
    // NOP
label_2644b0:
    // 0x2644b0: 0xedd1  .word       0x0000EDD1                   # mthi        $zero # 0000EDC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2644b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2644b4:
    // 0x2644b4: 0xa9b0  tge         $zero, $zero, 678
    ctx->pc = 0x2644b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2644b8:
    // 0x2644b8: 0x0  nop
    ctx->pc = 0x2644b8u;
    // NOP
label_2644bc:
    // 0x2644bc: 0x0  nop
    ctx->pc = 0x2644bcu;
    // NOP
label_2644c0:
    // 0x2644c0: 0xede7  .word       0x0000EDE7                   # not         $sp, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2644c0u;
    SET_GPR_U64(ctx, 29, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2644c4:
    // 0x2644c4: 0xa300  sll         $s4, $zero, 12
    ctx->pc = 0x2644c4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_2644c8:
    // 0x2644c8: 0x0  nop
    ctx->pc = 0x2644c8u;
    // NOP
label_2644cc:
    // 0x2644cc: 0x0  nop
    ctx->pc = 0x2644ccu;
    // NOP
label_2644d0:
    // 0x2644d0: 0xedfc  dsll32      $sp, $zero, 23
    ctx->pc = 0x2644d0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << (32 + 23));
label_2644d4:
    // 0x2644d4: 0xa030  tge         $zero, $zero, 640
    ctx->pc = 0x2644d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2644d8:
    // 0x2644d8: 0x0  nop
    ctx->pc = 0x2644d8u;
    // NOP
label_2644dc:
    // 0x2644dc: 0x0  nop
    ctx->pc = 0x2644dcu;
    // NOP
label_2644e0:
    // 0x2644e0: 0xee11  .word       0x0000EE11                   # mthi        $zero # 0000EE00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2644e0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2644e4:
    // 0x2644e4: 0xbe50  .word       0x0000BE50                   # mfhi        $s7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2644e4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_2644e8:
    // 0x2644e8: 0x0  nop
    ctx->pc = 0x2644e8u;
    // NOP
label_2644ec:
    // 0x2644ec: 0x0  nop
    ctx->pc = 0x2644ecu;
    // NOP
label_2644f0:
    // 0x2644f0: 0xee29  .word       0x0000EE29                   # mtsa        $zero # 0000EE00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2644f0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2644f4:
    // 0x2644f4: 0x7840  sll         $t7, $zero, 1
    ctx->pc = 0x2644f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2644f8:
    // 0x2644f8: 0x0  nop
    ctx->pc = 0x2644f8u;
    // NOP
label_2644fc:
    // 0x2644fc: 0x0  nop
    ctx->pc = 0x2644fcu;
    // NOP
label_264500:
    // 0x264500: 0xee39  .word       0x0000EE39                   # INVALID     $zero, $zero, -0x11C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264500u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x264500 raw=0x0000EE39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264504:
    // 0x264504: 0x7b70  tge         $zero, $zero, 493
    ctx->pc = 0x264504u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264508:
    // 0x264508: 0x0  nop
    ctx->pc = 0x264508u;
    // NOP
label_26450c:
    // 0x26450c: 0x0  nop
    ctx->pc = 0x26450cu;
    // NOP
label_264510:
    // 0x264510: 0xee49  .word       0x0000EE49                   # jalr        $sp, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
label_264514:
    if (ctx->pc == 0x264514u) {
        ctx->pc = 0x264514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264510u;
        // 0x264514: 0xa3b0  tge         $zero, $zero, 654 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x264518u;
        goto label_264518;
    }
    ctx->pc = 0x264510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 29, 0x264518u);
        ctx->pc = 0x264514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264510u;
        // 0x264514: 0xa3b0  tge         $zero, $zero, 654 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264510u, 0x264518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x264518u;
label_264518:
    // 0x264518: 0x0  nop
    ctx->pc = 0x264518u;
    // NOP
label_26451c:
    // 0x26451c: 0x0  nop
    ctx->pc = 0x26451cu;
    // NOP
label_264520:
    // 0x264520: 0xee5e  .word       0x0000EE5E                   # ddiv        $sp, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264520u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x264520 raw=0x0000EE5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264524:
    // 0x264524: 0x6810  mfhi        $t5
    ctx->pc = 0x264524u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_264528:
    // 0x264528: 0x0  nop
    ctx->pc = 0x264528u;
    // NOP
label_26452c:
    // 0x26452c: 0x0  nop
    ctx->pc = 0x26452cu;
    // NOP
label_264530:
    // 0x264530: 0xee6c  .word       0x0000EE6C                   # dadd        $sp, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264530u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_264534:
    // 0x264534: 0x5f80  sll         $t3, $zero, 30
    ctx->pc = 0x264534u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_264538:
    // 0x264538: 0x0  nop
    ctx->pc = 0x264538u;
    // NOP
label_26453c:
    // 0x26453c: 0x0  nop
    ctx->pc = 0x26453cu;
    // NOP
label_264540:
    // 0x264540: 0xee78  dsll        $sp, $zero, 25
    ctx->pc = 0x264540u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << 25);
label_264544:
    // 0x264544: 0x6520  .word       0x00006520                   # add         $t4, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_264548:
    // 0x264548: 0x0  nop
    ctx->pc = 0x264548u;
    // NOP
label_26454c:
    // 0x26454c: 0x0  nop
    ctx->pc = 0x26454cu;
    // NOP
label_264550:
    // 0x264550: 0xee85  .word       0x0000EE85                   # INVALID     $zero, $zero, -0x117B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264550u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x264550 raw=0x0000EE85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264554:
    // 0x264554: 0x9a90  .word       0x00009A90                   # mfhi        $s3 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264554u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_264558:
    // 0x264558: 0x0  nop
    ctx->pc = 0x264558u;
    // NOP
label_26455c:
    // 0x26455c: 0x0  nop
    ctx->pc = 0x26455cu;
    // NOP
label_264560:
    // 0x264560: 0xee99  .word       0x0000EE99                   # multu       $zero, $zero # 0000EE80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264560u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_264564:
    // 0x264564: 0x8870  tge         $zero, $zero, 545
    ctx->pc = 0x264564u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264568:
    // 0x264568: 0x0  nop
    ctx->pc = 0x264568u;
    // NOP
label_26456c:
    // 0x26456c: 0x0  nop
    ctx->pc = 0x26456cu;
    // NOP
label_264570:
    // 0x264570: 0xeeab  .word       0x0000EEAB                   # sltu        $sp, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264570u;
    SET_GPR_U64(ctx, 29, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_264574:
    // 0x264574: 0xb6c0  sll         $s6, $zero, 27
    ctx->pc = 0x264574u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_264578:
    // 0x264578: 0x0  nop
    ctx->pc = 0x264578u;
    // NOP
label_26457c:
    // 0x26457c: 0x0  nop
    ctx->pc = 0x26457cu;
    // NOP
label_264580:
    // 0x264580: 0xeec2  srl         $sp, $zero, 27
    ctx->pc = 0x264580u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 27));
label_264584:
    // 0x264584: 0x74d0  .word       0x000074D0                   # mfhi        $t6 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264584u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_264588:
    // 0x264588: 0x0  nop
    ctx->pc = 0x264588u;
    // NOP
label_26458c:
    // 0x26458c: 0x0  nop
    ctx->pc = 0x26458cu;
    // NOP
label_264590:
    // 0x264590: 0xeed1  .word       0x0000EED1                   # mthi        $zero # 0000EEC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264590u;
    ctx->hi = GPR_U64(ctx, 0);
label_264594:
    // 0x264594: 0x6ad0  .word       0x00006AD0                   # mfhi        $t5 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264594u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_264598:
    // 0x264598: 0x0  nop
    ctx->pc = 0x264598u;
    // NOP
label_26459c:
    // 0x26459c: 0x0  nop
    ctx->pc = 0x26459cu;
    // NOP
label_2645a0:
    // 0x2645a0: 0xeedf  .word       0x0000EEDF                   # ddivu       $sp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2645a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2645A0 raw=0x0000EEDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2645a4:
    // 0x2645a4: 0x4c20  .word       0x00004C20                   # add         $t1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2645a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2645a8:
    // 0x2645a8: 0x0  nop
    ctx->pc = 0x2645a8u;
    // NOP
label_2645ac:
    // 0x2645ac: 0x0  nop
    ctx->pc = 0x2645acu;
    // NOP
label_2645b0:
    // 0x2645b0: 0xeee9  .word       0x0000EEE9                   # mtsa        $zero # 0000EEC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2645b0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2645b4:
    // 0x2645b4: 0x3850  .word       0x00003850                   # mfhi        $a3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2645b4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2645b8:
    // 0x2645b8: 0x0  nop
    ctx->pc = 0x2645b8u;
    // NOP
label_2645bc:
    // 0x2645bc: 0x0  nop
    ctx->pc = 0x2645bcu;
    // NOP
label_2645c0:
    // 0x2645c0: 0xeef1  tgeu        $zero, $zero, 955
    ctx->pc = 0x2645c0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2645c4:
    // 0x2645c4: 0x94f0  tge         $zero, $zero, 595
    ctx->pc = 0x2645c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2645c8:
    // 0x2645c8: 0x0  nop
    ctx->pc = 0x2645c8u;
    // NOP
label_2645cc:
    // 0x2645cc: 0x0  nop
    ctx->pc = 0x2645ccu;
    // NOP
label_2645d0:
    // 0x2645d0: 0xef04  .word       0x0000EF04                   # sllv        $sp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2645d0u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2645d4:
    // 0x2645d4: 0xa560  .word       0x0000A560                   # add         $s4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2645d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2645d8:
    // 0x2645d8: 0x0  nop
    ctx->pc = 0x2645d8u;
    // NOP
label_2645dc:
    // 0x2645dc: 0x0  nop
    ctx->pc = 0x2645dcu;
    // NOP
label_2645e0:
    // 0x2645e0: 0xef19  .word       0x0000EF19                   # multu       $zero, $zero # 0000EF00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2645e0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_2645e4:
    // 0x2645e4: 0x4e60  .word       0x00004E60                   # add         $t1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2645e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2645e8:
    // 0x2645e8: 0x0  nop
    ctx->pc = 0x2645e8u;
    // NOP
label_2645ec:
    // 0x2645ec: 0x0  nop
    ctx->pc = 0x2645ecu;
    // NOP
label_2645f0:
    // 0x2645f0: 0xef23  .word       0x0000EF23                   # negu        $sp, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2645f0u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2645f4:
    // 0x2645f4: 0x5050  .word       0x00005050                   # mfhi        $t2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2645f4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2645f8:
    // 0x2645f8: 0x0  nop
    ctx->pc = 0x2645f8u;
    // NOP
label_2645fc:
    // 0x2645fc: 0x0  nop
    ctx->pc = 0x2645fcu;
    // NOP
label_264600:
    // 0x264600: 0xef2e  .word       0x0000EF2E                   # dsub        $sp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264600u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_264604:
    // 0x264604: 0x6080  sll         $t4, $zero, 2
    ctx->pc = 0x264604u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_264608:
    // 0x264608: 0x0  nop
    ctx->pc = 0x264608u;
    // NOP
label_26460c:
    // 0x26460c: 0x0  nop
    ctx->pc = 0x26460cu;
    // NOP
label_264610:
    // 0x264610: 0xef3b  dsra        $sp, $zero, 28
    ctx->pc = 0x264610u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> 28);
label_264614:
    // 0x264614: 0x5200  sll         $t2, $zero, 8
    ctx->pc = 0x264614u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_264618:
    // 0x264618: 0x0  nop
    ctx->pc = 0x264618u;
    // NOP
label_26461c:
    // 0x26461c: 0x0  nop
    ctx->pc = 0x26461cu;
    // NOP
label_264620:
    // 0x264620: 0xef46  .word       0x0000EF46                   # srlv        $sp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264620u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_264624:
    // 0x264624: 0x33a0  .word       0x000033A0                   # add         $a2, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_264628:
    // 0x264628: 0x0  nop
    ctx->pc = 0x264628u;
    // NOP
label_26462c:
    // 0x26462c: 0x0  nop
    ctx->pc = 0x26462cu;
    // NOP
label_264630:
    // 0x264630: 0xef4d  break       0, 957
    ctx->pc = 0x264630u;
    runtime->handleBreak(rdram, ctx);
label_264634:
    // 0x264634: 0x6720  .word       0x00006720                   # add         $t4, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_264638:
    // 0x264638: 0x0  nop
    ctx->pc = 0x264638u;
    // NOP
label_26463c:
    // 0x26463c: 0x0  nop
    ctx->pc = 0x26463cu;
    // NOP
label_264640:
    // 0x264640: 0xef5a  .word       0x0000EF5A                   # div         $sp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264640u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_264644:
    // 0x264644: 0x7880  sll         $t7, $zero, 2
    ctx->pc = 0x264644u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_264648:
    // 0x264648: 0x0  nop
    ctx->pc = 0x264648u;
    // NOP
label_26464c:
    // 0x26464c: 0x0  nop
    ctx->pc = 0x26464cu;
    // NOP
label_264650:
    // 0x264650: 0xef6a  .word       0x0000EF6A                   # slt         $sp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264650u;
    SET_GPR_U64(ctx, 29, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_264654:
    // 0x264654: 0xc090  .word       0x0000C090                   # mfhi        $t8 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264654u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_264658:
    // 0x264658: 0x0  nop
    ctx->pc = 0x264658u;
    // NOP
label_26465c:
    // 0x26465c: 0x0  nop
    ctx->pc = 0x26465cu;
    // NOP
label_264660:
    // 0x264660: 0xef83  sra         $sp, $zero, 30
    ctx->pc = 0x264660u;
    SET_GPR_S32(ctx, 29, SRA32(GPR_S32(ctx, 0), 30));
label_264664:
    // 0x264664: 0xe5a0  .word       0x0000E5A0                   # add         $gp, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264664u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_264668:
    // 0x264668: 0x0  nop
    ctx->pc = 0x264668u;
    // NOP
label_26466c:
    // 0x26466c: 0x0  nop
    ctx->pc = 0x26466cu;
    // NOP
label_264670:
    // 0x264670: 0xefa0  .word       0x0000EFA0                   # add         $sp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264670u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_264674:
    // 0x264674: 0x7710  .word       0x00007710                   # mfhi        $t6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264674u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_264678:
    // 0x264678: 0x0  nop
    ctx->pc = 0x264678u;
    // NOP
label_26467c:
    // 0x26467c: 0x0  nop
    ctx->pc = 0x26467cu;
    // NOP
label_264680:
    // 0x264680: 0xefaf  .word       0x0000EFAF                   # dsubu       $sp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264680u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_264684:
    // 0x264684: 0x4970  tge         $zero, $zero, 293
    ctx->pc = 0x264684u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264688:
    // 0x264688: 0x0  nop
    ctx->pc = 0x264688u;
    // NOP
label_26468c:
    // 0x26468c: 0x0  nop
    ctx->pc = 0x26468cu;
    // NOP
label_264690:
    // 0x264690: 0xefb9  .word       0x0000EFB9                   # INVALID     $zero, $zero, -0x1047 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x264690 raw=0x0000EFB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264694:
    // 0x264694: 0x6dc0  sll         $t5, $zero, 23
    ctx->pc = 0x264694u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_264698:
    // 0x264698: 0x0  nop
    ctx->pc = 0x264698u;
    // NOP
label_26469c:
    // 0x26469c: 0x0  nop
    ctx->pc = 0x26469cu;
    // NOP
label_2646a0:
    // 0x2646a0: 0xefc7  .word       0x0000EFC7                   # srav        $sp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2646a0u;
    SET_GPR_S32(ctx, 29, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2646a4:
    // 0x2646a4: 0x5500  sll         $t2, $zero, 20
    ctx->pc = 0x2646a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2646a8:
    // 0x2646a8: 0x0  nop
    ctx->pc = 0x2646a8u;
    // NOP
label_2646ac:
    // 0x2646ac: 0x0  nop
    ctx->pc = 0x2646acu;
    // NOP
label_2646b0:
    // 0x2646b0: 0xefd2  .word       0x0000EFD2                   # mflo        $sp # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2646b0u;
    SET_GPR_U64(ctx, 29, ctx->lo);
label_2646b4:
    // 0x2646b4: 0x2be0  .word       0x00002BE0                   # add         $a1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2646b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_2646b8:
    // 0x2646b8: 0x0  nop
    ctx->pc = 0x2646b8u;
    // NOP
label_2646bc:
    // 0x2646bc: 0x0  nop
    ctx->pc = 0x2646bcu;
    // NOP
label_2646c0:
    // 0x2646c0: 0xefd8  .word       0x0000EFD8                   # mult        $sp, $zero, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2646c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_2646c4:
    // 0x2646c4: 0x72b0  tge         $zero, $zero, 458
    ctx->pc = 0x2646c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2646c8:
    // 0x2646c8: 0x0  nop
    ctx->pc = 0x2646c8u;
    // NOP
label_2646cc:
    // 0x2646cc: 0x0  nop
    ctx->pc = 0x2646ccu;
    // NOP
label_2646d0:
    // 0x2646d0: 0xefe7  .word       0x0000EFE7                   # not         $sp, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2646d0u;
    SET_GPR_U64(ctx, 29, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2646d4:
    // 0x2646d4: 0x7180  sll         $t6, $zero, 6
    ctx->pc = 0x2646d4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_2646d8:
    // 0x2646d8: 0x0  nop
    ctx->pc = 0x2646d8u;
    // NOP
label_2646dc:
    // 0x2646dc: 0x0  nop
    ctx->pc = 0x2646dcu;
    // NOP
label_2646e0:
    // 0x2646e0: 0xeff6  tne         $zero, $zero, 959
    ctx->pc = 0x2646e0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2646e4:
    // 0x2646e4: 0xa270  tge         $zero, $zero, 649
    ctx->pc = 0x2646e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2646e8:
    // 0x2646e8: 0x0  nop
    ctx->pc = 0x2646e8u;
    // NOP
label_2646ec:
    // 0x2646ec: 0x0  nop
    ctx->pc = 0x2646ecu;
    // NOP
label_2646f0:
    // 0x2646f0: 0xf00b  movn        $fp, $zero, $zero
    ctx->pc = 0x2646f0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_2646f4:
    // 0x2646f4: 0x97b0  tge         $zero, $zero, 606
    ctx->pc = 0x2646f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2646f8:
    // 0x2646f8: 0x0  nop
    ctx->pc = 0x2646f8u;
    // NOP
label_2646fc:
    // 0x2646fc: 0x0  nop
    ctx->pc = 0x2646fcu;
    // NOP
label_264700:
    // 0x264700: 0xf01e  ddiv        $fp, $zero, $zero
    ctx->pc = 0x264700u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x264700 raw=0x0000F01E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264704:
    // 0x264704: 0x4c20  .word       0x00004C20                   # add         $t1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264704u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_264708:
    // 0x264708: 0x0  nop
    ctx->pc = 0x264708u;
    // NOP
label_26470c:
    // 0x26470c: 0x0  nop
    ctx->pc = 0x26470cu;
    // NOP
label_264710:
    // 0x264710: 0xf028  mfsa        $fp
    ctx->pc = 0x264710u;
    SET_GPR_U32(ctx, 30, ctx->sa);
label_264714:
    // 0x264714: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x264714u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_264718:
    // 0x264718: 0x0  nop
    ctx->pc = 0x264718u;
    // NOP
label_26471c:
    // 0x26471c: 0x0  nop
    ctx->pc = 0x26471cu;
    // NOP
label_264720:
    // 0x264720: 0xf036  tne         $zero, $zero, 960
    ctx->pc = 0x264720u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264724:
    // 0x264724: 0x4160  .word       0x00004160                   # add         $t0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264724u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_264728:
    // 0x264728: 0x0  nop
    ctx->pc = 0x264728u;
    // NOP
label_26472c:
    // 0x26472c: 0x0  nop
    ctx->pc = 0x26472cu;
    // NOP
label_264730:
    // 0x264730: 0xf03f  dsra32      $fp, $zero, 0
    ctx->pc = 0x264730u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> (32 + 0));
label_264734:
    // 0x264734: 0x3fd0  .word       0x00003FD0                   # mfhi        $a3 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264734u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_264738:
    // 0x264738: 0x0  nop
    ctx->pc = 0x264738u;
    // NOP
label_26473c:
    // 0x26473c: 0x0  nop
    ctx->pc = 0x26473cu;
    // NOP
label_264740:
    // 0x264740: 0xf047  .word       0x0000F047                   # srav        $fp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264740u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_264744:
    // 0x264744: 0x23f0  tge         $zero, $zero, 143
    ctx->pc = 0x264744u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264748:
    // 0x264748: 0x0  nop
    ctx->pc = 0x264748u;
    // NOP
label_26474c:
    // 0x26474c: 0x0  nop
    ctx->pc = 0x26474cu;
    // NOP
label_264750:
    // 0x264750: 0xf04c  syscall     961
    ctx->pc = 0x264750u;
    ctx->pc = 0x264754u;
runtime->handleSyscall(rdram, ctx, 0x3C1u);
label_264754:
    // 0x264754: 0x58d0  .word       0x000058D0                   # mfhi        $t3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264754u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_264758:
    // 0x264758: 0x0  nop
    ctx->pc = 0x264758u;
    // NOP
label_26475c:
    // 0x26475c: 0x0  nop
    ctx->pc = 0x26475cu;
    // NOP
label_264760:
    // 0x264760: 0xf058  .word       0x0000F058                   # mult        $fp, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x264760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_264764:
    // 0x264764: 0x8ef0  tge         $zero, $zero, 571
    ctx->pc = 0x264764u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264768:
    // 0x264768: 0x0  nop
    ctx->pc = 0x264768u;
    // NOP
label_26476c:
    // 0x26476c: 0x0  nop
    ctx->pc = 0x26476cu;
    // NOP
label_264770:
    // 0x264770: 0xf06a  .word       0x0000F06A                   # slt         $fp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264770u;
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_264774:
    // 0x264774: 0x3510  .word       0x00003510                   # mfhi        $a2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264774u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_264778:
    // 0x264778: 0x0  nop
    ctx->pc = 0x264778u;
    // NOP
label_26477c:
    // 0x26477c: 0x0  nop
    ctx->pc = 0x26477cu;
    // NOP
label_264780:
    // 0x264780: 0xf071  tgeu        $zero, $zero, 961
    ctx->pc = 0x264780u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264784:
    // 0x264784: 0x4300  sll         $t0, $zero, 12
    ctx->pc = 0x264784u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_264788:
    // 0x264788: 0x0  nop
    ctx->pc = 0x264788u;
    // NOP
label_26478c:
    // 0x26478c: 0x0  nop
    ctx->pc = 0x26478cu;
    // NOP
label_264790:
    // 0x264790: 0xf07a  dsrl        $fp, $zero, 1
    ctx->pc = 0x264790u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> 1);
label_264794:
    // 0x264794: 0x3a40  sll         $a3, $zero, 9
    ctx->pc = 0x264794u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_264798:
    // 0x264798: 0x0  nop
    ctx->pc = 0x264798u;
    // NOP
label_26479c:
    // 0x26479c: 0x0  nop
    ctx->pc = 0x26479cu;
    // NOP
label_2647a0:
    // 0x2647a0: 0xf082  srl         $fp, $zero, 2
    ctx->pc = 0x2647a0u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_2647a4:
    // 0x2647a4: 0x5b40  sll         $t3, $zero, 13
    ctx->pc = 0x2647a4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_2647a8:
    // 0x2647a8: 0x0  nop
    ctx->pc = 0x2647a8u;
    // NOP
label_2647ac:
    // 0x2647ac: 0x0  nop
    ctx->pc = 0x2647acu;
    // NOP
label_2647b0:
    // 0x2647b0: 0xf08e  .word       0x0000F08E                   # INVALID     $zero, $zero, -0xF72 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2647b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2647B0 raw=0x0000F08E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2647b4:
    // 0x2647b4: 0x3310  .word       0x00003310                   # mfhi        $a2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2647b4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2647b8:
    // 0x2647b8: 0x0  nop
    ctx->pc = 0x2647b8u;
    // NOP
label_2647bc:
    // 0x2647bc: 0x0  nop
    ctx->pc = 0x2647bcu;
    // NOP
label_2647c0:
    // 0x2647c0: 0xf095  .word       0x0000F095                   # INVALID     $zero, $zero, -0xF6B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2647c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2647C0 raw=0x0000F095"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2647c4:
    // 0x2647c4: 0x5a70  tge         $zero, $zero, 361
    ctx->pc = 0x2647c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2647c8:
    // 0x2647c8: 0x0  nop
    ctx->pc = 0x2647c8u;
    // NOP
label_2647cc:
    // 0x2647cc: 0x0  nop
    ctx->pc = 0x2647ccu;
    // NOP
label_2647d0:
    // 0x2647d0: 0xf0a1  .word       0x0000F0A1                   # addu        $fp, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2647d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2647d4:
    // 0x2647d4: 0x8960  .word       0x00008960                   # add         $s1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2647d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2647d8:
    // 0x2647d8: 0x0  nop
    ctx->pc = 0x2647d8u;
    // NOP
label_2647dc:
    // 0x2647dc: 0x0  nop
    ctx->pc = 0x2647dcu;
    // NOP
label_2647e0:
    // 0x2647e0: 0xf0b3  tltu        $zero, $zero, 962
    ctx->pc = 0x2647e0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2647e4:
    // 0x2647e4: 0x8e20  .word       0x00008E20                   # add         $s1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2647e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2647e8:
    // 0x2647e8: 0x0  nop
    ctx->pc = 0x2647e8u;
    // NOP
label_2647ec:
    // 0x2647ec: 0x0  nop
    ctx->pc = 0x2647ecu;
    // NOP
label_2647f0:
    // 0x2647f0: 0xf0c5  .word       0x0000F0C5                   # INVALID     $zero, $zero, -0xF3B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2647f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2647F0 raw=0x0000F0C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2647f4:
    // 0x2647f4: 0x7bd0  .word       0x00007BD0                   # mfhi        $t7 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2647f4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2647f8:
    // 0x2647f8: 0x0  nop
    ctx->pc = 0x2647f8u;
    // NOP
label_2647fc:
    // 0x2647fc: 0x0  nop
    ctx->pc = 0x2647fcu;
    // NOP
label_264800:
    // 0x264800: 0xf0d5  .word       0x0000F0D5                   # INVALID     $zero, $zero, -0xF2B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x264800 raw=0x0000F0D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264804:
    // 0x264804: 0x6730  tge         $zero, $zero, 412
    ctx->pc = 0x264804u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264808:
    // 0x264808: 0x0  nop
    ctx->pc = 0x264808u;
    // NOP
label_26480c:
    // 0x26480c: 0x0  nop
    ctx->pc = 0x26480cu;
    // NOP
label_264810:
    // 0x264810: 0xf0e2  .word       0x0000F0E2                   # neg         $fp, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264810u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_264814:
    // 0x264814: 0x4f50  .word       0x00004F50                   # mfhi        $t1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264814u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_264818:
    // 0x264818: 0x0  nop
    ctx->pc = 0x264818u;
    // NOP
label_26481c:
    // 0x26481c: 0x0  nop
    ctx->pc = 0x26481cu;
    // NOP
label_264820:
    // 0x264820: 0xf0ec  .word       0x0000F0EC                   # dadd        $fp, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264820u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, r); }
label_264824:
    // 0x264824: 0x6790  .word       0x00006790                   # mfhi        $t4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264824u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_264828:
    // 0x264828: 0x0  nop
    ctx->pc = 0x264828u;
    // NOP
label_26482c:
    // 0x26482c: 0x0  nop
    ctx->pc = 0x26482cu;
    // NOP
label_264830:
    // 0x264830: 0xf0f9  .word       0x0000F0F9                   # INVALID     $zero, $zero, -0xF07 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264830u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x264830 raw=0x0000F0F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264834:
    // 0x264834: 0x7050  .word       0x00007050                   # mfhi        $t6 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264834u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_264838:
    // 0x264838: 0x0  nop
    ctx->pc = 0x264838u;
    // NOP
label_26483c:
    // 0x26483c: 0x0  nop
    ctx->pc = 0x26483cu;
    // NOP
label_264840:
    // 0x264840: 0xf108  .word       0x0000F108                   # jr          $zero # 0000F100 <InstrIdType: CPU_SPECIAL>
label_264844:
    if (ctx->pc == 0x264844u) {
        ctx->pc = 0x264844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264840u;
        // 0x264844: 0x7bb0  tge         $zero, $zero, 494 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x264848u;
        goto label_264848;
    }
    ctx->pc = 0x264840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x264844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264840u;
        // 0x264844: 0x7bb0  tge         $zero, $zero, 494 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264840u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x264848u;
label_264848:
    // 0x264848: 0x0  nop
    ctx->pc = 0x264848u;
    // NOP
label_26484c:
    // 0x26484c: 0x0  nop
    ctx->pc = 0x26484cu;
    // NOP
label_264850:
    // 0x264850: 0xf118  .word       0x0000F118                   # mult        $fp, $zero, $zero # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x264850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_264854:
    // 0x264854: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x264854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_264858:
    // 0x264858: 0x0  nop
    ctx->pc = 0x264858u;
    // NOP
label_26485c:
    // 0x26485c: 0x0  nop
    ctx->pc = 0x26485cu;
    // NOP
label_264860:
    // 0x264860: 0xf129  .word       0x0000F129                   # mtsa        $zero # 0000F100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x264860u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_264864:
    // 0x264864: 0x9fb0  tge         $zero, $zero, 638
    ctx->pc = 0x264864u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264868:
    // 0x264868: 0x0  nop
    ctx->pc = 0x264868u;
    // NOP
label_26486c:
    // 0x26486c: 0x0  nop
    ctx->pc = 0x26486cu;
    // NOP
label_264870:
    // 0x264870: 0xf13d  .word       0x0000F13D                   # INVALID     $zero, $zero, -0xEC3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x264870 raw=0x0000F13D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264874:
    // 0x264874: 0xd080  sll         $k0, $zero, 2
    ctx->pc = 0x264874u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_264878:
    // 0x264878: 0x0  nop
    ctx->pc = 0x264878u;
    // NOP
label_26487c:
    // 0x26487c: 0x0  nop
    ctx->pc = 0x26487cu;
    // NOP
label_264880:
    // 0x264880: 0xf158  .word       0x0000F158                   # mult        $fp, $zero, $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x264880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_264884:
    // 0x264884: 0x4350  .word       0x00004350                   # mfhi        $t0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264884u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_264888:
    // 0x264888: 0x0  nop
    ctx->pc = 0x264888u;
    // NOP
label_26488c:
    // 0x26488c: 0x0  nop
    ctx->pc = 0x26488cu;
    // NOP
label_264890:
    // 0x264890: 0xf161  .word       0x0000F161                   # addu        $fp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264890u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_264894:
    // 0x264894: 0xb1b0  tge         $zero, $zero, 710
    ctx->pc = 0x264894u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264898:
    // 0x264898: 0x0  nop
    ctx->pc = 0x264898u;
    // NOP
label_26489c:
    // 0x26489c: 0x0  nop
    ctx->pc = 0x26489cu;
    // NOP
label_2648a0:
    // 0x2648a0: 0xf178  dsll        $fp, $zero, 5
    ctx->pc = 0x2648a0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) << 5);
label_2648a4:
    // 0x2648a4: 0x6280  sll         $t4, $zero, 10
    ctx->pc = 0x2648a4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2648a8:
    // 0x2648a8: 0x0  nop
    ctx->pc = 0x2648a8u;
    // NOP
label_2648ac:
    // 0x2648ac: 0x0  nop
    ctx->pc = 0x2648acu;
    // NOP
label_2648b0:
    // 0x2648b0: 0xf185  .word       0x0000F185                   # INVALID     $zero, $zero, -0xE7B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2648b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2648B0 raw=0x0000F185"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2648b4:
    // 0x2648b4: 0x5680  sll         $t2, $zero, 26
    ctx->pc = 0x2648b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_2648b8:
    // 0x2648b8: 0x0  nop
    ctx->pc = 0x2648b8u;
    // NOP
label_2648bc:
    // 0x2648bc: 0x0  nop
    ctx->pc = 0x2648bcu;
    // NOP
label_2648c0:
    // 0x2648c0: 0xf190  .word       0x0000F190                   # mfhi        $fp # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2648c0u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_2648c4:
    // 0x2648c4: 0x6b50  .word       0x00006B50                   # mfhi        $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2648c4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2648c8:
    // 0x2648c8: 0x0  nop
    ctx->pc = 0x2648c8u;
    // NOP
label_2648cc:
    // 0x2648cc: 0x0  nop
    ctx->pc = 0x2648ccu;
    // NOP
label_2648d0:
    // 0x2648d0: 0xf19e  .word       0x0000F19E                   # ddiv        $fp, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2648d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2648D0 raw=0x0000F19E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2648d4:
    // 0x2648d4: 0x2620  .word       0x00002620                   # add         $a0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2648d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    ctx->pc = 0x2648d8u;
    return;
}
