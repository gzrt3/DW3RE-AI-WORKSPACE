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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x2648d8u: goto label_2648d8;
        case 0x2648dcu: goto label_2648dc;
        case 0x2648e0u: goto label_2648e0;
        case 0x2648e4u: goto label_2648e4;
        case 0x2648e8u: goto label_2648e8;
        case 0x2648ecu: goto label_2648ec;
        case 0x2648f0u: goto label_2648f0;
        case 0x2648f4u: goto label_2648f4;
        case 0x2648f8u: goto label_2648f8;
        case 0x2648fcu: goto label_2648fc;
        case 0x264900u: goto label_264900;
        case 0x264904u: goto label_264904;
        case 0x264908u: goto label_264908;
        case 0x26490cu: goto label_26490c;
        case 0x264910u: goto label_264910;
        case 0x264914u: goto label_264914;
        case 0x264918u: goto label_264918;
        case 0x26491cu: goto label_26491c;
        case 0x264920u: goto label_264920;
        case 0x264924u: goto label_264924;
        case 0x264928u: goto label_264928;
        case 0x26492cu: goto label_26492c;
        case 0x264930u: goto label_264930;
        case 0x264934u: goto label_264934;
        case 0x264938u: goto label_264938;
        case 0x26493cu: goto label_26493c;
        case 0x264940u: goto label_264940;
        case 0x264944u: goto label_264944;
        case 0x264948u: goto label_264948;
        case 0x26494cu: goto label_26494c;
        case 0x264950u: goto label_264950;
        case 0x264954u: goto label_264954;
        case 0x264958u: goto label_264958;
        case 0x26495cu: goto label_26495c;
        case 0x264960u: goto label_264960;
        case 0x264964u: goto label_264964;
        case 0x264968u: goto label_264968;
        case 0x26496cu: goto label_26496c;
        case 0x264970u: goto label_264970;
        case 0x264974u: goto label_264974;
        case 0x264978u: goto label_264978;
        case 0x26497cu: goto label_26497c;
        case 0x264980u: goto label_264980;
        case 0x264984u: goto label_264984;
        case 0x264988u: goto label_264988;
        case 0x26498cu: goto label_26498c;
        case 0x264990u: goto label_264990;
        case 0x264994u: goto label_264994;
        case 0x264998u: goto label_264998;
        case 0x26499cu: goto label_26499c;
        case 0x2649a0u: goto label_2649a0;
        case 0x2649a4u: goto label_2649a4;
        case 0x2649a8u: goto label_2649a8;
        case 0x2649acu: goto label_2649ac;
        case 0x2649b0u: goto label_2649b0;
        case 0x2649b4u: goto label_2649b4;
        case 0x2649b8u: goto label_2649b8;
        case 0x2649bcu: goto label_2649bc;
        case 0x2649c0u: goto label_2649c0;
        case 0x2649c4u: goto label_2649c4;
        case 0x2649c8u: goto label_2649c8;
        case 0x2649ccu: goto label_2649cc;
        case 0x2649d0u: goto label_2649d0;
        case 0x2649d4u: goto label_2649d4;
        case 0x2649d8u: goto label_2649d8;
        case 0x2649dcu: goto label_2649dc;
        case 0x2649e0u: goto label_2649e0;
        case 0x2649e4u: goto label_2649e4;
        case 0x2649e8u: goto label_2649e8;
        case 0x2649ecu: goto label_2649ec;
        case 0x2649f0u: goto label_2649f0;
        case 0x2649f4u: goto label_2649f4;
        case 0x2649f8u: goto label_2649f8;
        case 0x2649fcu: goto label_2649fc;
        case 0x264a00u: goto label_264a00;
        case 0x264a04u: goto label_264a04;
        case 0x264a08u: goto label_264a08;
        case 0x264a0cu: goto label_264a0c;
        case 0x264a10u: goto label_264a10;
        case 0x264a14u: goto label_264a14;
        case 0x264a18u: goto label_264a18;
        case 0x264a1cu: goto label_264a1c;
        case 0x264a20u: goto label_264a20;
        case 0x264a24u: goto label_264a24;
        case 0x264a28u: goto label_264a28;
        case 0x264a2cu: goto label_264a2c;
        case 0x264a30u: goto label_264a30;
        case 0x264a34u: goto label_264a34;
        case 0x264a38u: goto label_264a38;
        case 0x264a3cu: goto label_264a3c;
        case 0x264a40u: goto label_264a40;
        case 0x264a44u: goto label_264a44;
        case 0x264a48u: goto label_264a48;
        case 0x264a4cu: goto label_264a4c;
        case 0x264a50u: goto label_264a50;
        case 0x264a54u: goto label_264a54;
        case 0x264a58u: goto label_264a58;
        case 0x264a5cu: goto label_264a5c;
        case 0x264a60u: goto label_264a60;
        case 0x264a64u: goto label_264a64;
        case 0x264a68u: goto label_264a68;
        case 0x264a6cu: goto label_264a6c;
        case 0x264a70u: goto label_264a70;
        case 0x264a74u: goto label_264a74;
        case 0x264a78u: goto label_264a78;
        case 0x264a7cu: goto label_264a7c;
        case 0x264a80u: goto label_264a80;
        case 0x264a84u: goto label_264a84;
        case 0x264a88u: goto label_264a88;
        case 0x264a8cu: goto label_264a8c;
        case 0x264a90u: goto label_264a90;
        case 0x264a94u: goto label_264a94;
        case 0x264a98u: goto label_264a98;
        case 0x264a9cu: goto label_264a9c;
        case 0x264aa0u: goto label_264aa0;
        case 0x264aa4u: goto label_264aa4;
        case 0x264aa8u: goto label_264aa8;
        case 0x264aacu: goto label_264aac;
        case 0x264ab0u: goto label_264ab0;
        case 0x264ab4u: goto label_264ab4;
        case 0x264ab8u: goto label_264ab8;
        case 0x264abcu: goto label_264abc;
        case 0x264ac0u: goto label_264ac0;
        case 0x264ac4u: goto label_264ac4;
        case 0x264ac8u: goto label_264ac8;
        case 0x264accu: goto label_264acc;
        case 0x264ad0u: goto label_264ad0;
        case 0x264ad4u: goto label_264ad4;
        case 0x264ad8u: goto label_264ad8;
        case 0x264adcu: goto label_264adc;
        case 0x264ae0u: goto label_264ae0;
        case 0x264ae4u: goto label_264ae4;
        case 0x264ae8u: goto label_264ae8;
        case 0x264aecu: goto label_264aec;
        case 0x264af0u: goto label_264af0;
        case 0x264af4u: goto label_264af4;
        case 0x264af8u: goto label_264af8;
        case 0x264afcu: goto label_264afc;
        case 0x264b00u: goto label_264b00;
        case 0x264b04u: goto label_264b04;
        case 0x264b08u: goto label_264b08;
        case 0x264b0cu: goto label_264b0c;
        case 0x264b10u: goto label_264b10;
        case 0x264b14u: goto label_264b14;
        case 0x264b18u: goto label_264b18;
        case 0x264b1cu: goto label_264b1c;
        case 0x264b20u: goto label_264b20;
        case 0x264b24u: goto label_264b24;
        case 0x264b28u: goto label_264b28;
        case 0x264b2cu: goto label_264b2c;
        default: return;
    }

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
label_2648d8:
    // 0x2648d8: 0x0  nop
    ctx->pc = 0x2648d8u;
    // NOP
label_2648dc:
    // 0x2648dc: 0x0  nop
    ctx->pc = 0x2648dcu;
    // NOP
label_2648e0:
    // 0x2648e0: 0xf1a3  .word       0x0000F1A3                   # negu        $fp, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2648e0u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2648e4:
    // 0x2648e4: 0x69c0  sll         $t5, $zero, 7
    ctx->pc = 0x2648e4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_2648e8:
    // 0x2648e8: 0x0  nop
    ctx->pc = 0x2648e8u;
    // NOP
label_2648ec:
    // 0x2648ec: 0x0  nop
    ctx->pc = 0x2648ecu;
    // NOP
label_2648f0:
    // 0x2648f0: 0xf1b1  tgeu        $zero, $zero, 966
    ctx->pc = 0x2648f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2648f4:
    // 0x2648f4: 0x7680  sll         $t6, $zero, 26
    ctx->pc = 0x2648f4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_2648f8:
    // 0x2648f8: 0x0  nop
    ctx->pc = 0x2648f8u;
    // NOP
label_2648fc:
    // 0x2648fc: 0x0  nop
    ctx->pc = 0x2648fcu;
    // NOP
label_264900:
    // 0x264900: 0xf1c0  sll         $fp, $zero, 7
    ctx->pc = 0x264900u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_264904:
    // 0x264904: 0x63c0  sll         $t4, $zero, 15
    ctx->pc = 0x264904u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_264908:
    // 0x264908: 0x0  nop
    ctx->pc = 0x264908u;
    // NOP
label_26490c:
    // 0x26490c: 0x0  nop
    ctx->pc = 0x26490cu;
    // NOP
label_264910:
    // 0x264910: 0xf1cd  break       0, 967
    ctx->pc = 0x264910u;
    runtime->handleBreak(rdram, ctx);
label_264914:
    // 0x264914: 0x49c0  sll         $t1, $zero, 7
    ctx->pc = 0x264914u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_264918:
    // 0x264918: 0x0  nop
    ctx->pc = 0x264918u;
    // NOP
label_26491c:
    // 0x26491c: 0x0  nop
    ctx->pc = 0x26491cu;
    // NOP
label_264920:
    // 0x264920: 0xf1d7  .word       0x0000F1D7                   # dsrav       $fp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264920u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_264924:
    // 0x264924: 0x45c0  sll         $t0, $zero, 23
    ctx->pc = 0x264924u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_264928:
    // 0x264928: 0x0  nop
    ctx->pc = 0x264928u;
    // NOP
label_26492c:
    // 0x26492c: 0x0  nop
    ctx->pc = 0x26492cu;
    // NOP
label_264930:
    // 0x264930: 0xf1e0  .word       0x0000F1E0                   # add         $fp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264930u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_264934:
    // 0x264934: 0x64f0  tge         $zero, $zero, 403
    ctx->pc = 0x264934u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264938:
    // 0x264938: 0x0  nop
    ctx->pc = 0x264938u;
    // NOP
label_26493c:
    // 0x26493c: 0x0  nop
    ctx->pc = 0x26493cu;
    // NOP
label_264940:
    // 0x264940: 0xf1ed  .word       0x0000F1ED                   # daddu       $fp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264940u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264944:
    // 0x264944: 0x36f0  tge         $zero, $zero, 219
    ctx->pc = 0x264944u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264948:
    // 0x264948: 0x0  nop
    ctx->pc = 0x264948u;
    // NOP
label_26494c:
    // 0x26494c: 0x0  nop
    ctx->pc = 0x26494cu;
    // NOP
label_264950:
    // 0x264950: 0xf1f4  teq         $zero, $zero, 967
    ctx->pc = 0x264950u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264954:
    // 0x264954: 0x6e80  sll         $t5, $zero, 26
    ctx->pc = 0x264954u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_264958:
    // 0x264958: 0x0  nop
    ctx->pc = 0x264958u;
    // NOP
label_26495c:
    // 0x26495c: 0x0  nop
    ctx->pc = 0x26495cu;
    // NOP
label_264960:
    // 0x264960: 0xf202  srl         $fp, $zero, 8
    ctx->pc = 0x264960u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_264964:
    // 0x264964: 0x5dc0  sll         $t3, $zero, 23
    ctx->pc = 0x264964u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_264968:
    // 0x264968: 0x0  nop
    ctx->pc = 0x264968u;
    // NOP
label_26496c:
    // 0x26496c: 0x0  nop
    ctx->pc = 0x26496cu;
    // NOP
label_264970:
    // 0x264970: 0xf20e  .word       0x0000F20E                   # INVALID     $zero, $zero, -0xDF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264970u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x264970 raw=0x0000F20E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264974:
    // 0x264974: 0x8370  tge         $zero, $zero, 525
    ctx->pc = 0x264974u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264978:
    // 0x264978: 0x0  nop
    ctx->pc = 0x264978u;
    // NOP
label_26497c:
    // 0x26497c: 0x0  nop
    ctx->pc = 0x26497cu;
    // NOP
label_264980:
    // 0x264980: 0xf21f  .word       0x0000F21F                   # ddivu       $fp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264980u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x264980 raw=0x0000F21F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264984:
    // 0x264984: 0x5a90  .word       0x00005A90                   # mfhi        $t3 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264984u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_264988:
    // 0x264988: 0x0  nop
    ctx->pc = 0x264988u;
    // NOP
label_26498c:
    // 0x26498c: 0x0  nop
    ctx->pc = 0x26498cu;
    // NOP
label_264990:
    // 0x264990: 0xf22b  .word       0x0000F22B                   # sltu        $fp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264990u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_264994:
    // 0x264994: 0x5e30  tge         $zero, $zero, 376
    ctx->pc = 0x264994u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264998:
    // 0x264998: 0x0  nop
    ctx->pc = 0x264998u;
    // NOP
label_26499c:
    // 0x26499c: 0x0  nop
    ctx->pc = 0x26499cu;
    // NOP
label_2649a0:
    // 0x2649a0: 0xf237  .word       0x0000F237                   # INVALID     $zero, $zero, -0xDC9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2649a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2649A0 raw=0x0000F237"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2649a4:
    // 0x2649a4: 0xab50  .word       0x0000AB50                   # mfhi        $s5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2649a4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_2649a8:
    // 0x2649a8: 0x0  nop
    ctx->pc = 0x2649a8u;
    // NOP
label_2649ac:
    // 0x2649ac: 0x0  nop
    ctx->pc = 0x2649acu;
    // NOP
label_2649b0:
    // 0x2649b0: 0xf24d  break       0, 969
    ctx->pc = 0x2649b0u;
    runtime->handleBreak(rdram, ctx);
label_2649b4:
    // 0x2649b4: 0x3fc0  sll         $a3, $zero, 31
    ctx->pc = 0x2649b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2649b8:
    // 0x2649b8: 0x0  nop
    ctx->pc = 0x2649b8u;
    // NOP
label_2649bc:
    // 0x2649bc: 0x0  nop
    ctx->pc = 0x2649bcu;
    // NOP
label_2649c0:
    // 0x2649c0: 0xf255  .word       0x0000F255                   # INVALID     $zero, $zero, -0xDAB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2649c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2649C0 raw=0x0000F255"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2649c4:
    // 0x2649c4: 0x5df0  tge         $zero, $zero, 375
    ctx->pc = 0x2649c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2649c8:
    // 0x2649c8: 0x0  nop
    ctx->pc = 0x2649c8u;
    // NOP
label_2649cc:
    // 0x2649cc: 0x0  nop
    ctx->pc = 0x2649ccu;
    // NOP
label_2649d0:
    // 0x2649d0: 0xf261  .word       0x0000F261                   # addu        $fp, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2649d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2649d4:
    // 0x2649d4: 0x4220  .word       0x00004220                   # add         $t0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2649d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2649d8:
    // 0x2649d8: 0x0  nop
    ctx->pc = 0x2649d8u;
    // NOP
label_2649dc:
    // 0x2649dc: 0x0  nop
    ctx->pc = 0x2649dcu;
    // NOP
label_2649e0:
    // 0x2649e0: 0xf26a  .word       0x0000F26A                   # slt         $fp, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2649e0u;
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2649e4:
    // 0x2649e4: 0x57b0  tge         $zero, $zero, 350
    ctx->pc = 0x2649e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2649e8:
    // 0x2649e8: 0x0  nop
    ctx->pc = 0x2649e8u;
    // NOP
label_2649ec:
    // 0x2649ec: 0x0  nop
    ctx->pc = 0x2649ecu;
    // NOP
label_2649f0:
    // 0x2649f0: 0xf275  .word       0x0000F275                   # INVALID     $zero, $zero, -0xD8B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2649f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2649F0 raw=0x0000F275"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2649f4:
    // 0x2649f4: 0x5000  sll         $t2, $zero, 0
    ctx->pc = 0x2649f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2649f8:
    // 0x2649f8: 0x0  nop
    ctx->pc = 0x2649f8u;
    // NOP
label_2649fc:
    // 0x2649fc: 0x0  nop
    ctx->pc = 0x2649fcu;
    // NOP
label_264a00:
    // 0x264a00: 0xf27f  dsra32      $fp, $zero, 9
    ctx->pc = 0x264a00u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> (32 + 9));
label_264a04:
    // 0x264a04: 0x3c60  .word       0x00003C60                   # add         $a3, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264a04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_264a08:
    // 0x264a08: 0x0  nop
    ctx->pc = 0x264a08u;
    // NOP
label_264a0c:
    // 0x264a0c: 0x0  nop
    ctx->pc = 0x264a0cu;
    // NOP
label_264a10:
    // 0x264a10: 0xf287  .word       0x0000F287                   # srav        $fp, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264a10u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_264a14:
    // 0x264a14: 0x6760  .word       0x00006760                   # add         $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264a14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_264a18:
    // 0x264a18: 0x0  nop
    ctx->pc = 0x264a18u;
    // NOP
label_264a1c:
    // 0x264a1c: 0x0  nop
    ctx->pc = 0x264a1cu;
    // NOP
label_264a20:
    // 0x264a20: 0xf294  .word       0x0000F294                   # dsllv       $fp, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264a20u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_264a24:
    // 0x264a24: 0x8240  sll         $s0, $zero, 9
    ctx->pc = 0x264a24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_264a28:
    // 0x264a28: 0x0  nop
    ctx->pc = 0x264a28u;
    // NOP
label_264a2c:
    // 0x264a2c: 0x0  nop
    ctx->pc = 0x264a2cu;
    // NOP
label_264a30:
    // 0x264a30: 0xf2a5  .word       0x0000F2A5                   # move        $fp, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264a30u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_264a34:
    // 0x264a34: 0x40f0  tge         $zero, $zero, 259
    ctx->pc = 0x264a34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264a38:
    // 0x264a38: 0x0  nop
    ctx->pc = 0x264a38u;
    // NOP
label_264a3c:
    // 0x264a3c: 0x0  nop
    ctx->pc = 0x264a3cu;
    // NOP
label_264a40:
    // 0x264a40: 0xf2ae  .word       0x0000F2AE                   # dsub        $fp, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264a40u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, r); }
label_264a44:
    // 0x264a44: 0x3ca0  .word       0x00003CA0                   # add         $a3, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264a44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_264a48:
    // 0x264a48: 0x0  nop
    ctx->pc = 0x264a48u;
    // NOP
label_264a4c:
    // 0x264a4c: 0x0  nop
    ctx->pc = 0x264a4cu;
    // NOP
label_264a50:
    // 0x264a50: 0xf2b6  tne         $zero, $zero, 970
    ctx->pc = 0x264a50u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264a54:
    // 0x264a54: 0x4ff0  tge         $zero, $zero, 319
    ctx->pc = 0x264a54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264a58:
    // 0x264a58: 0x0  nop
    ctx->pc = 0x264a58u;
    // NOP
label_264a5c:
    // 0x264a5c: 0x0  nop
    ctx->pc = 0x264a5cu;
    // NOP
label_264a60:
    // 0x264a60: 0xf2c0  sll         $fp, $zero, 11
    ctx->pc = 0x264a60u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_264a64:
    // 0x264a64: 0x57f0  tge         $zero, $zero, 351
    ctx->pc = 0x264a64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264a68:
    // 0x264a68: 0x0  nop
    ctx->pc = 0x264a68u;
    // NOP
label_264a6c:
    // 0x264a6c: 0x0  nop
    ctx->pc = 0x264a6cu;
    // NOP
label_264a70:
    // 0x264a70: 0xf2cb  .word       0x0000F2CB                   # movn        $fp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264a70u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_264a74:
    // 0x264a74: 0x4680  sll         $t0, $zero, 26
    ctx->pc = 0x264a74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_264a78:
    // 0x264a78: 0x0  nop
    ctx->pc = 0x264a78u;
    // NOP
label_264a7c:
    // 0x264a7c: 0x0  nop
    ctx->pc = 0x264a7cu;
    // NOP
label_264a80:
    // 0x264a80: 0xf2d4  .word       0x0000F2D4                   # dsllv       $fp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264a80u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_264a84:
    // 0x264a84: 0x6020  add         $t4, $zero, $zero
    ctx->pc = 0x264a84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_264a88:
    // 0x264a88: 0x0  nop
    ctx->pc = 0x264a88u;
    // NOP
label_264a8c:
    // 0x264a8c: 0x0  nop
    ctx->pc = 0x264a8cu;
    // NOP
label_264a90:
    // 0x264a90: 0xf2e1  .word       0x0000F2E1                   # addu        $fp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264a90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_264a94:
    // 0x264a94: 0x6cf0  tge         $zero, $zero, 435
    ctx->pc = 0x264a94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264a98:
    // 0x264a98: 0x0  nop
    ctx->pc = 0x264a98u;
    // NOP
label_264a9c:
    // 0x264a9c: 0x0  nop
    ctx->pc = 0x264a9cu;
    // NOP
label_264aa0:
    // 0x264aa0: 0xf2ef  .word       0x0000F2EF                   # dsubu       $fp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264aa0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_264aa4:
    // 0x264aa4: 0x37e0  .word       0x000037E0                   # add         $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264aa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_264aa8:
    // 0x264aa8: 0x0  nop
    ctx->pc = 0x264aa8u;
    // NOP
label_264aac:
    // 0x264aac: 0x0  nop
    ctx->pc = 0x264aacu;
    // NOP
label_264ab0:
    // 0x264ab0: 0xf2f6  tne         $zero, $zero, 971
    ctx->pc = 0x264ab0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_264ab4:
    // 0x264ab4: 0x97c0  sll         $s2, $zero, 31
    ctx->pc = 0x264ab4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_264ab8:
    // 0x264ab8: 0x0  nop
    ctx->pc = 0x264ab8u;
    // NOP
label_264abc:
    // 0x264abc: 0x0  nop
    ctx->pc = 0x264abcu;
    // NOP
label_264ac0:
    // 0x264ac0: 0xf309  .word       0x0000F309                   # jalr        $fp, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
label_264ac4:
    if (ctx->pc == 0x264AC4u) {
        ctx->pc = 0x264AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AC0u;
        // 0x264ac4: 0x7dd0  .word       0x00007DD0                   # mfhi        $t7 # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x264AC8u;
        goto label_264ac8;
    }
    ctx->pc = 0x264AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 30, 0x264AC8u);
        ctx->pc = 0x264AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264AC0u;
        // 0x264ac4: 0x7dd0  .word       0x00007DD0                   # mfhi        $t7 # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264AC0u, 0x264AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x264AC8u;
label_264ac8:
    // 0x264ac8: 0x0  nop
    ctx->pc = 0x264ac8u;
    // NOP
label_264acc:
    // 0x264acc: 0x0  nop
    ctx->pc = 0x264accu;
    // NOP
label_264ad0:
    // 0x264ad0: 0xf319  .word       0x0000F319                   # multu       $zero, $zero # 0000F300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ad0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_264ad4:
    // 0x264ad4: 0xac90  .word       0x0000AC90                   # mfhi        $s5 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ad4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_264ad8:
    // 0x264ad8: 0x0  nop
    ctx->pc = 0x264ad8u;
    // NOP
label_264adc:
    // 0x264adc: 0x0  nop
    ctx->pc = 0x264adcu;
    // NOP
label_264ae0:
    // 0x264ae0: 0xf32f  .word       0x0000F32F                   # dsubu       $fp, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ae0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_264ae4:
    // 0x264ae4: 0x4960  .word       0x00004960                   # add         $t1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264ae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_264ae8:
    // 0x264ae8: 0x0  nop
    ctx->pc = 0x264ae8u;
    // NOP
label_264aec:
    // 0x264aec: 0x0  nop
    ctx->pc = 0x264aecu;
    // NOP
label_264af0:
    // 0x264af0: 0xf339  .word       0x0000F339                   # INVALID     $zero, $zero, -0xCC7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264af0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x264AF0 raw=0x0000F339"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_264af4:
    // 0x264af4: 0x6450  .word       0x00006450                   # mfhi        $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264af4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_264af8:
    // 0x264af8: 0x0  nop
    ctx->pc = 0x264af8u;
    // NOP
label_264afc:
    // 0x264afc: 0x0  nop
    ctx->pc = 0x264afcu;
    // NOP
label_264b00:
    // 0x264b00: 0xf346  .word       0x0000F346                   # srlv        $fp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b00u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_264b04:
    // 0x264b04: 0x48e0  .word       0x000048E0                   # add         $t1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_264b08:
    // 0x264b08: 0x0  nop
    ctx->pc = 0x264b08u;
    // NOP
label_264b0c:
    // 0x264b0c: 0x0  nop
    ctx->pc = 0x264b0cu;
    // NOP
label_264b10:
    // 0x264b10: 0xf350  .word       0x0000F350                   # mfhi        $fp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b10u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_264b14:
    // 0x264b14: 0x4690  .word       0x00004690                   # mfhi        $t0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b14u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_264b18:
    // 0x264b18: 0x0  nop
    ctx->pc = 0x264b18u;
    // NOP
label_264b1c:
    // 0x264b1c: 0x0  nop
    ctx->pc = 0x264b1cu;
    // NOP
label_264b20:
    // 0x264b20: 0xf359  .word       0x0000F359                   # multu       $zero, $zero # 0000F340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b20u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_264b24:
    // 0x264b24: 0x85d0  .word       0x000085D0                   # mfhi        $s0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x264b24u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_264b28:
    // 0x264b28: 0x0  nop
    ctx->pc = 0x264b28u;
    // NOP
label_264b2c:
    // 0x264b2c: 0x0  nop
    ctx->pc = 0x264b2cu;
    // NOP
    ctx->pc = 0x264b30u;
    return;
}
