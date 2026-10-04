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


void FUN_0017d410_part304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x211340u: goto label_211340;
        case 0x211344u: goto label_211344;
        case 0x211348u: goto label_211348;
        case 0x21134cu: goto label_21134c;
        case 0x211350u: goto label_211350;
        case 0x211354u: goto label_211354;
        case 0x211358u: goto label_211358;
        case 0x21135cu: goto label_21135c;
        case 0x211360u: goto label_211360;
        case 0x211364u: goto label_211364;
        case 0x211368u: goto label_211368;
        case 0x21136cu: goto label_21136c;
        case 0x211370u: goto label_211370;
        case 0x211374u: goto label_211374;
        case 0x211378u: goto label_211378;
        case 0x21137cu: goto label_21137c;
        case 0x211380u: goto label_211380;
        case 0x211384u: goto label_211384;
        case 0x211388u: goto label_211388;
        case 0x21138cu: goto label_21138c;
        case 0x211390u: goto label_211390;
        case 0x211394u: goto label_211394;
        case 0x211398u: goto label_211398;
        case 0x21139cu: goto label_21139c;
        case 0x2113a0u: goto label_2113a0;
        case 0x2113a4u: goto label_2113a4;
        case 0x2113a8u: goto label_2113a8;
        case 0x2113acu: goto label_2113ac;
        case 0x2113b0u: goto label_2113b0;
        case 0x2113b4u: goto label_2113b4;
        case 0x2113b8u: goto label_2113b8;
        case 0x2113bcu: goto label_2113bc;
        case 0x2113c0u: goto label_2113c0;
        case 0x2113c4u: goto label_2113c4;
        case 0x2113c8u: goto label_2113c8;
        case 0x2113ccu: goto label_2113cc;
        case 0x2113d0u: goto label_2113d0;
        case 0x2113d4u: goto label_2113d4;
        case 0x2113d8u: goto label_2113d8;
        case 0x2113dcu: goto label_2113dc;
        case 0x2113e0u: goto label_2113e0;
        case 0x2113e4u: goto label_2113e4;
        case 0x2113e8u: goto label_2113e8;
        case 0x2113ecu: goto label_2113ec;
        case 0x2113f0u: goto label_2113f0;
        case 0x2113f4u: goto label_2113f4;
        case 0x2113f8u: goto label_2113f8;
        case 0x2113fcu: goto label_2113fc;
        case 0x211400u: goto label_211400;
        case 0x211404u: goto label_211404;
        case 0x211408u: goto label_211408;
        case 0x21140cu: goto label_21140c;
        case 0x211410u: goto label_211410;
        case 0x211414u: goto label_211414;
        case 0x211418u: goto label_211418;
        case 0x21141cu: goto label_21141c;
        case 0x211420u: goto label_211420;
        case 0x211424u: goto label_211424;
        case 0x211428u: goto label_211428;
        case 0x21142cu: goto label_21142c;
        case 0x211430u: goto label_211430;
        case 0x211434u: goto label_211434;
        case 0x211438u: goto label_211438;
        case 0x21143cu: goto label_21143c;
        case 0x211440u: goto label_211440;
        case 0x211444u: goto label_211444;
        case 0x211448u: goto label_211448;
        case 0x21144cu: goto label_21144c;
        case 0x211450u: goto label_211450;
        case 0x211454u: goto label_211454;
        case 0x211458u: goto label_211458;
        case 0x21145cu: goto label_21145c;
        case 0x211460u: goto label_211460;
        case 0x211464u: goto label_211464;
        case 0x211468u: goto label_211468;
        case 0x21146cu: goto label_21146c;
        case 0x211470u: goto label_211470;
        case 0x211474u: goto label_211474;
        case 0x211478u: goto label_211478;
        case 0x21147cu: goto label_21147c;
        case 0x211480u: goto label_211480;
        case 0x211484u: goto label_211484;
        case 0x211488u: goto label_211488;
        case 0x21148cu: goto label_21148c;
        case 0x211490u: goto label_211490;
        case 0x211494u: goto label_211494;
        case 0x211498u: goto label_211498;
        case 0x21149cu: goto label_21149c;
        case 0x2114a0u: goto label_2114a0;
        case 0x2114a4u: goto label_2114a4;
        case 0x2114a8u: goto label_2114a8;
        case 0x2114acu: goto label_2114ac;
        case 0x2114b0u: goto label_2114b0;
        case 0x2114b4u: goto label_2114b4;
        case 0x2114b8u: goto label_2114b8;
        case 0x2114bcu: goto label_2114bc;
        case 0x2114c0u: goto label_2114c0;
        case 0x2114c4u: goto label_2114c4;
        case 0x2114c8u: goto label_2114c8;
        case 0x2114ccu: goto label_2114cc;
        case 0x2114d0u: goto label_2114d0;
        case 0x2114d4u: goto label_2114d4;
        case 0x2114d8u: goto label_2114d8;
        case 0x2114dcu: goto label_2114dc;
        case 0x2114e0u: goto label_2114e0;
        case 0x2114e4u: goto label_2114e4;
        case 0x2114e8u: goto label_2114e8;
        case 0x2114ecu: goto label_2114ec;
        case 0x2114f0u: goto label_2114f0;
        case 0x2114f4u: goto label_2114f4;
        case 0x2114f8u: goto label_2114f8;
        case 0x2114fcu: goto label_2114fc;
        case 0x211500u: goto label_211500;
        case 0x211504u: goto label_211504;
        case 0x211508u: goto label_211508;
        case 0x21150cu: goto label_21150c;
        case 0x211510u: goto label_211510;
        case 0x211514u: goto label_211514;
        case 0x211518u: goto label_211518;
        case 0x21151cu: goto label_21151c;
        case 0x211520u: goto label_211520;
        case 0x211524u: goto label_211524;
        case 0x211528u: goto label_211528;
        case 0x21152cu: goto label_21152c;
        case 0x211530u: goto label_211530;
        case 0x211534u: goto label_211534;
        case 0x211538u: goto label_211538;
        case 0x21153cu: goto label_21153c;
        case 0x211540u: goto label_211540;
        case 0x211544u: goto label_211544;
        case 0x211548u: goto label_211548;
        case 0x21154cu: goto label_21154c;
        case 0x211550u: goto label_211550;
        case 0x211554u: goto label_211554;
        case 0x211558u: goto label_211558;
        case 0x21155cu: goto label_21155c;
        case 0x211560u: goto label_211560;
        case 0x211564u: goto label_211564;
        case 0x211568u: goto label_211568;
        case 0x21156cu: goto label_21156c;
        case 0x211570u: goto label_211570;
        case 0x211574u: goto label_211574;
        case 0x211578u: goto label_211578;
        case 0x21157cu: goto label_21157c;
        case 0x211580u: goto label_211580;
        case 0x211584u: goto label_211584;
        case 0x211588u: goto label_211588;
        case 0x21158cu: goto label_21158c;
        case 0x211590u: goto label_211590;
        case 0x211594u: goto label_211594;
        case 0x211598u: goto label_211598;
        case 0x21159cu: goto label_21159c;
        case 0x2115a0u: goto label_2115a0;
        case 0x2115a4u: goto label_2115a4;
        case 0x2115a8u: goto label_2115a8;
        case 0x2115acu: goto label_2115ac;
        case 0x2115b0u: goto label_2115b0;
        case 0x2115b4u: goto label_2115b4;
        case 0x2115b8u: goto label_2115b8;
        case 0x2115bcu: goto label_2115bc;
        case 0x2115c0u: goto label_2115c0;
        case 0x2115c4u: goto label_2115c4;
        case 0x2115c8u: goto label_2115c8;
        case 0x2115ccu: goto label_2115cc;
        case 0x2115d0u: goto label_2115d0;
        case 0x2115d4u: goto label_2115d4;
        case 0x2115d8u: goto label_2115d8;
        case 0x2115dcu: goto label_2115dc;
        case 0x2115e0u: goto label_2115e0;
        case 0x2115e4u: goto label_2115e4;
        case 0x2115e8u: goto label_2115e8;
        case 0x2115ecu: goto label_2115ec;
        case 0x2115f0u: goto label_2115f0;
        case 0x2115f4u: goto label_2115f4;
        case 0x2115f8u: goto label_2115f8;
        case 0x2115fcu: goto label_2115fc;
        case 0x211600u: goto label_211600;
        case 0x211604u: goto label_211604;
        case 0x211608u: goto label_211608;
        case 0x21160cu: goto label_21160c;
        case 0x211610u: goto label_211610;
        case 0x211614u: goto label_211614;
        case 0x211618u: goto label_211618;
        case 0x21161cu: goto label_21161c;
        case 0x211620u: goto label_211620;
        case 0x211624u: goto label_211624;
        case 0x211628u: goto label_211628;
        case 0x21162cu: goto label_21162c;
        case 0x211630u: goto label_211630;
        case 0x211634u: goto label_211634;
        case 0x211638u: goto label_211638;
        case 0x21163cu: goto label_21163c;
        case 0x211640u: goto label_211640;
        case 0x211644u: goto label_211644;
        case 0x211648u: goto label_211648;
        case 0x21164cu: goto label_21164c;
        case 0x211650u: goto label_211650;
        case 0x211654u: goto label_211654;
        case 0x211658u: goto label_211658;
        case 0x21165cu: goto label_21165c;
        case 0x211660u: goto label_211660;
        case 0x211664u: goto label_211664;
        case 0x211668u: goto label_211668;
        case 0x21166cu: goto label_21166c;
        case 0x211670u: goto label_211670;
        case 0x211674u: goto label_211674;
        case 0x211678u: goto label_211678;
        case 0x21167cu: goto label_21167c;
        case 0x211680u: goto label_211680;
        case 0x211684u: goto label_211684;
        case 0x211688u: goto label_211688;
        case 0x21168cu: goto label_21168c;
        case 0x211690u: goto label_211690;
        case 0x211694u: goto label_211694;
        case 0x211698u: goto label_211698;
        case 0x21169cu: goto label_21169c;
        case 0x2116a0u: goto label_2116a0;
        case 0x2116a4u: goto label_2116a4;
        case 0x2116a8u: goto label_2116a8;
        case 0x2116acu: goto label_2116ac;
        case 0x2116b0u: goto label_2116b0;
        case 0x2116b4u: goto label_2116b4;
        case 0x2116b8u: goto label_2116b8;
        case 0x2116bcu: goto label_2116bc;
        case 0x2116c0u: goto label_2116c0;
        case 0x2116c4u: goto label_2116c4;
        case 0x2116c8u: goto label_2116c8;
        case 0x2116ccu: goto label_2116cc;
        case 0x2116d0u: goto label_2116d0;
        case 0x2116d4u: goto label_2116d4;
        case 0x2116d8u: goto label_2116d8;
        case 0x2116dcu: goto label_2116dc;
        case 0x2116e0u: goto label_2116e0;
        case 0x2116e4u: goto label_2116e4;
        case 0x2116e8u: goto label_2116e8;
        case 0x2116ecu: goto label_2116ec;
        case 0x2116f0u: goto label_2116f0;
        case 0x2116f4u: goto label_2116f4;
        case 0x2116f8u: goto label_2116f8;
        case 0x2116fcu: goto label_2116fc;
        case 0x211700u: goto label_211700;
        case 0x211704u: goto label_211704;
        case 0x211708u: goto label_211708;
        case 0x21170cu: goto label_21170c;
        case 0x211710u: goto label_211710;
        case 0x211714u: goto label_211714;
        case 0x211718u: goto label_211718;
        case 0x21171cu: goto label_21171c;
        case 0x211720u: goto label_211720;
        case 0x211724u: goto label_211724;
        case 0x211728u: goto label_211728;
        case 0x21172cu: goto label_21172c;
        case 0x211730u: goto label_211730;
        case 0x211734u: goto label_211734;
        case 0x211738u: goto label_211738;
        case 0x21173cu: goto label_21173c;
        case 0x211740u: goto label_211740;
        case 0x211744u: goto label_211744;
        case 0x211748u: goto label_211748;
        case 0x21174cu: goto label_21174c;
        case 0x211750u: goto label_211750;
        case 0x211754u: goto label_211754;
        case 0x211758u: goto label_211758;
        case 0x21175cu: goto label_21175c;
        case 0x211760u: goto label_211760;
        case 0x211764u: goto label_211764;
        case 0x211768u: goto label_211768;
        case 0x21176cu: goto label_21176c;
        case 0x211770u: goto label_211770;
        case 0x211774u: goto label_211774;
        case 0x211778u: goto label_211778;
        case 0x21177cu: goto label_21177c;
        case 0x211780u: goto label_211780;
        case 0x211784u: goto label_211784;
        case 0x211788u: goto label_211788;
        case 0x21178cu: goto label_21178c;
        case 0x211790u: goto label_211790;
        case 0x211794u: goto label_211794;
        case 0x211798u: goto label_211798;
        case 0x21179cu: goto label_21179c;
        case 0x2117a0u: goto label_2117a0;
        case 0x2117a4u: goto label_2117a4;
        case 0x2117a8u: goto label_2117a8;
        case 0x2117acu: goto label_2117ac;
        case 0x2117b0u: goto label_2117b0;
        case 0x2117b4u: goto label_2117b4;
        case 0x2117b8u: goto label_2117b8;
        case 0x2117bcu: goto label_2117bc;
        case 0x2117c0u: goto label_2117c0;
        case 0x2117c4u: goto label_2117c4;
        case 0x2117c8u: goto label_2117c8;
        case 0x2117ccu: goto label_2117cc;
        case 0x2117d0u: goto label_2117d0;
        case 0x2117d4u: goto label_2117d4;
        case 0x2117d8u: goto label_2117d8;
        case 0x2117dcu: goto label_2117dc;
        case 0x2117e0u: goto label_2117e0;
        case 0x2117e4u: goto label_2117e4;
        case 0x2117e8u: goto label_2117e8;
        case 0x2117ecu: goto label_2117ec;
        case 0x2117f0u: goto label_2117f0;
        case 0x2117f4u: goto label_2117f4;
        case 0x2117f8u: goto label_2117f8;
        case 0x2117fcu: goto label_2117fc;
        case 0x211800u: goto label_211800;
        case 0x211804u: goto label_211804;
        case 0x211808u: goto label_211808;
        case 0x21180cu: goto label_21180c;
        case 0x211810u: goto label_211810;
        case 0x211814u: goto label_211814;
        case 0x211818u: goto label_211818;
        case 0x21181cu: goto label_21181c;
        case 0x211820u: goto label_211820;
        case 0x211824u: goto label_211824;
        case 0x211828u: goto label_211828;
        case 0x21182cu: goto label_21182c;
        case 0x211830u: goto label_211830;
        case 0x211834u: goto label_211834;
        case 0x211838u: goto label_211838;
        case 0x21183cu: goto label_21183c;
        case 0x211840u: goto label_211840;
        case 0x211844u: goto label_211844;
        case 0x211848u: goto label_211848;
        case 0x21184cu: goto label_21184c;
        case 0x211850u: goto label_211850;
        case 0x211854u: goto label_211854;
        case 0x211858u: goto label_211858;
        case 0x21185cu: goto label_21185c;
        case 0x211860u: goto label_211860;
        case 0x211864u: goto label_211864;
        case 0x211868u: goto label_211868;
        case 0x21186cu: goto label_21186c;
        case 0x211870u: goto label_211870;
        case 0x211874u: goto label_211874;
        case 0x211878u: goto label_211878;
        case 0x21187cu: goto label_21187c;
        case 0x211880u: goto label_211880;
        case 0x211884u: goto label_211884;
        case 0x211888u: goto label_211888;
        case 0x21188cu: goto label_21188c;
        case 0x211890u: goto label_211890;
        case 0x211894u: goto label_211894;
        case 0x211898u: goto label_211898;
        case 0x21189cu: goto label_21189c;
        case 0x2118a0u: goto label_2118a0;
        case 0x2118a4u: goto label_2118a4;
        case 0x2118a8u: goto label_2118a8;
        case 0x2118acu: goto label_2118ac;
        case 0x2118b0u: goto label_2118b0;
        case 0x2118b4u: goto label_2118b4;
        case 0x2118b8u: goto label_2118b8;
        case 0x2118bcu: goto label_2118bc;
        case 0x2118c0u: goto label_2118c0;
        case 0x2118c4u: goto label_2118c4;
        case 0x2118c8u: goto label_2118c8;
        case 0x2118ccu: goto label_2118cc;
        case 0x2118d0u: goto label_2118d0;
        case 0x2118d4u: goto label_2118d4;
        case 0x2118d8u: goto label_2118d8;
        case 0x2118dcu: goto label_2118dc;
        case 0x2118e0u: goto label_2118e0;
        case 0x2118e4u: goto label_2118e4;
        case 0x2118e8u: goto label_2118e8;
        case 0x2118ecu: goto label_2118ec;
        case 0x2118f0u: goto label_2118f0;
        case 0x2118f4u: goto label_2118f4;
        case 0x2118f8u: goto label_2118f8;
        case 0x2118fcu: goto label_2118fc;
        case 0x211900u: goto label_211900;
        case 0x211904u: goto label_211904;
        case 0x211908u: goto label_211908;
        case 0x21190cu: goto label_21190c;
        case 0x211910u: goto label_211910;
        case 0x211914u: goto label_211914;
        case 0x211918u: goto label_211918;
        case 0x21191cu: goto label_21191c;
        case 0x211920u: goto label_211920;
        case 0x211924u: goto label_211924;
        case 0x211928u: goto label_211928;
        case 0x21192cu: goto label_21192c;
        case 0x211930u: goto label_211930;
        case 0x211934u: goto label_211934;
        case 0x211938u: goto label_211938;
        case 0x21193cu: goto label_21193c;
        case 0x211940u: goto label_211940;
        case 0x211944u: goto label_211944;
        case 0x211948u: goto label_211948;
        case 0x21194cu: goto label_21194c;
        case 0x211950u: goto label_211950;
        case 0x211954u: goto label_211954;
        case 0x211958u: goto label_211958;
        case 0x21195cu: goto label_21195c;
        case 0x211960u: goto label_211960;
        case 0x211964u: goto label_211964;
        case 0x211968u: goto label_211968;
        case 0x21196cu: goto label_21196c;
        case 0x211970u: goto label_211970;
        case 0x211974u: goto label_211974;
        case 0x211978u: goto label_211978;
        case 0x21197cu: goto label_21197c;
        case 0x211980u: goto label_211980;
        case 0x211984u: goto label_211984;
        case 0x211988u: goto label_211988;
        case 0x21198cu: goto label_21198c;
        case 0x211990u: goto label_211990;
        case 0x211994u: goto label_211994;
        case 0x211998u: goto label_211998;
        case 0x21199cu: goto label_21199c;
        case 0x2119a0u: goto label_2119a0;
        case 0x2119a4u: goto label_2119a4;
        case 0x2119a8u: goto label_2119a8;
        case 0x2119acu: goto label_2119ac;
        case 0x2119b0u: goto label_2119b0;
        case 0x2119b4u: goto label_2119b4;
        case 0x2119b8u: goto label_2119b8;
        case 0x2119bcu: goto label_2119bc;
        case 0x2119c0u: goto label_2119c0;
        case 0x2119c4u: goto label_2119c4;
        case 0x2119c8u: goto label_2119c8;
        case 0x2119ccu: goto label_2119cc;
        case 0x2119d0u: goto label_2119d0;
        case 0x2119d4u: goto label_2119d4;
        case 0x2119d8u: goto label_2119d8;
        case 0x2119dcu: goto label_2119dc;
        case 0x2119e0u: goto label_2119e0;
        case 0x2119e4u: goto label_2119e4;
        case 0x2119e8u: goto label_2119e8;
        case 0x2119ecu: goto label_2119ec;
        case 0x2119f0u: goto label_2119f0;
        case 0x2119f4u: goto label_2119f4;
        case 0x2119f8u: goto label_2119f8;
        case 0x2119fcu: goto label_2119fc;
        case 0x211a00u: goto label_211a00;
        case 0x211a04u: goto label_211a04;
        case 0x211a08u: goto label_211a08;
        case 0x211a0cu: goto label_211a0c;
        case 0x211a10u: goto label_211a10;
        case 0x211a14u: goto label_211a14;
        case 0x211a18u: goto label_211a18;
        case 0x211a1cu: goto label_211a1c;
        case 0x211a20u: goto label_211a20;
        case 0x211a24u: goto label_211a24;
        case 0x211a28u: goto label_211a28;
        case 0x211a2cu: goto label_211a2c;
        case 0x211a30u: goto label_211a30;
        case 0x211a34u: goto label_211a34;
        case 0x211a38u: goto label_211a38;
        case 0x211a3cu: goto label_211a3c;
        case 0x211a40u: goto label_211a40;
        case 0x211a44u: goto label_211a44;
        case 0x211a48u: goto label_211a48;
        case 0x211a4cu: goto label_211a4c;
        case 0x211a50u: goto label_211a50;
        case 0x211a54u: goto label_211a54;
        case 0x211a58u: goto label_211a58;
        case 0x211a5cu: goto label_211a5c;
        case 0x211a60u: goto label_211a60;
        case 0x211a64u: goto label_211a64;
        case 0x211a68u: goto label_211a68;
        case 0x211a6cu: goto label_211a6c;
        case 0x211a70u: goto label_211a70;
        case 0x211a74u: goto label_211a74;
        case 0x211a78u: goto label_211a78;
        case 0x211a7cu: goto label_211a7c;
        case 0x211a80u: goto label_211a80;
        case 0x211a84u: goto label_211a84;
        case 0x211a88u: goto label_211a88;
        case 0x211a8cu: goto label_211a8c;
        case 0x211a90u: goto label_211a90;
        case 0x211a94u: goto label_211a94;
        case 0x211a98u: goto label_211a98;
        case 0x211a9cu: goto label_211a9c;
        case 0x211aa0u: goto label_211aa0;
        case 0x211aa4u: goto label_211aa4;
        case 0x211aa8u: goto label_211aa8;
        case 0x211aacu: goto label_211aac;
        case 0x211ab0u: goto label_211ab0;
        case 0x211ab4u: goto label_211ab4;
        case 0x211ab8u: goto label_211ab8;
        case 0x211abcu: goto label_211abc;
        case 0x211ac0u: goto label_211ac0;
        case 0x211ac4u: goto label_211ac4;
        case 0x211ac8u: goto label_211ac8;
        case 0x211accu: goto label_211acc;
        case 0x211ad0u: goto label_211ad0;
        case 0x211ad4u: goto label_211ad4;
        case 0x211ad8u: goto label_211ad8;
        case 0x211adcu: goto label_211adc;
        case 0x211ae0u: goto label_211ae0;
        case 0x211ae4u: goto label_211ae4;
        case 0x211ae8u: goto label_211ae8;
        case 0x211aecu: goto label_211aec;
        case 0x211af0u: goto label_211af0;
        case 0x211af4u: goto label_211af4;
        case 0x211af8u: goto label_211af8;
        case 0x211afcu: goto label_211afc;
        case 0x211b00u: goto label_211b00;
        case 0x211b04u: goto label_211b04;
        case 0x211b08u: goto label_211b08;
        case 0x211b0cu: goto label_211b0c;
        default: return;
    }

label_211340:
    // 0x211340: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211344:
    // 0x211344: 0x26850026  addiu       $a1, $s4, 0x26
    ctx->pc = 0x211344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 38));
label_211348:
    // 0x211348: 0x260f809  jalr        $s3
label_21134c:
    if (ctx->pc == 0x21134Cu) {
        ctx->pc = 0x21134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211348u;
        // 0x21134c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211350u;
        goto label_211350;
    }
    ctx->pc = 0x211348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211350u);
        ctx->pc = 0x21134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211348u;
        // 0x21134c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211348u, 0x211350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211350u;
label_211350:
    // 0x211350: 0x26850028  addiu       $a1, $s4, 0x28
    ctx->pc = 0x211350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_211354:
    // 0x211354: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211358:
    // 0x211358: 0x260f809  jalr        $s3
label_21135c:
    if (ctx->pc == 0x21135Cu) {
        ctx->pc = 0x21135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211358u;
        // 0x21135c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211360u;
        goto label_211360;
    }
    ctx->pc = 0x211358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211360u);
        ctx->pc = 0x21135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211358u;
        // 0x21135c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211358u, 0x211360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211360u;
label_211360:
    // 0x211360: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x211360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_211364:
    // 0x211364: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x211364u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_211368:
    // 0x211368: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
label_21136c:
    if (ctx->pc == 0x21136Cu) {
        ctx->pc = 0x21136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211368u;
        // 0x21136c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211370u;
        goto label_211370;
    }
    ctx->pc = 0x211368u;
    {
        const bool branch_taken_0x211368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211368u;
        // 0x21136c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211368) {
            ctx->pc = 0x2112E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x2112e8; return; }
        }
    }
    ctx->pc = 0x211370u;
label_211370:
    // 0x211370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211374:
    // 0x211374: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x211374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_211378:
    // 0x211378: 0x260f809  jalr        $s3
label_21137c:
    if (ctx->pc == 0x21137Cu) {
        ctx->pc = 0x21137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211378u;
        // 0x21137c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211380u;
        goto label_211380;
    }
    ctx->pc = 0x211378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211380u);
        ctx->pc = 0x21137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211378u;
        // 0x21137c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211378u, 0x211380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211380u;
label_211380:
    // 0x211380: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211384:
    // 0x211384: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x211384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_211388:
    // 0x211388: 0x260f809  jalr        $s3
label_21138c:
    if (ctx->pc == 0x21138Cu) {
        ctx->pc = 0x21138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211388u;
        // 0x21138c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211390u;
        goto label_211390;
    }
    ctx->pc = 0x211388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211390u);
        ctx->pc = 0x21138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211388u;
        // 0x21138c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211388u, 0x211390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211390u;
label_211390:
    // 0x211390: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211394:
    // 0x211394: 0x26450021  addiu       $a1, $s2, 0x21
    ctx->pc = 0x211394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
label_211398:
    // 0x211398: 0x260f809  jalr        $s3
label_21139c:
    if (ctx->pc == 0x21139Cu) {
        ctx->pc = 0x21139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211398u;
        // 0x21139c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2113A0u;
        goto label_2113a0;
    }
    ctx->pc = 0x211398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2113A0u);
        ctx->pc = 0x21139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211398u;
        // 0x21139c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211398u, 0x2113A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2113A0u;
label_2113a0:
    // 0x2113a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2113a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2113a4:
    // 0x2113a4: 0x2645002a  addiu       $a1, $s2, 0x2A
    ctx->pc = 0x2113a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 42));
label_2113a8:
    // 0x2113a8: 0x260f809  jalr        $s3
label_2113ac:
    if (ctx->pc == 0x2113ACu) {
        ctx->pc = 0x2113ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113A8u;
        // 0x2113ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2113B0u;
        goto label_2113b0;
    }
    ctx->pc = 0x2113A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2113B0u);
        ctx->pc = 0x2113ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113A8u;
        // 0x2113ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2113A8u, 0x2113B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2113B0u;
label_2113b0:
    // 0x2113b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2113b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2113b4:
    // 0x2113b4: 0x2645002b  addiu       $a1, $s2, 0x2B
    ctx->pc = 0x2113b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 43));
label_2113b8:
    // 0x2113b8: 0x260f809  jalr        $s3
label_2113bc:
    if (ctx->pc == 0x2113BCu) {
        ctx->pc = 0x2113BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113B8u;
        // 0x2113bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2113C0u;
        goto label_2113c0;
    }
    ctx->pc = 0x2113B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2113C0u);
        ctx->pc = 0x2113BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113B8u;
        // 0x2113bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2113B8u, 0x2113C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2113C0u;
label_2113c0:
    // 0x2113c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2113c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2113c4:
    // 0x2113c4: 0x2645002c  addiu       $a1, $s2, 0x2C
    ctx->pc = 0x2113c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_2113c8:
    // 0x2113c8: 0x260f809  jalr        $s3
label_2113cc:
    if (ctx->pc == 0x2113CCu) {
        ctx->pc = 0x2113CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113C8u;
        // 0x2113cc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2113D0u;
        goto label_2113d0;
    }
    ctx->pc = 0x2113C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2113D0u);
        ctx->pc = 0x2113CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113C8u;
        // 0x2113cc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2113C8u, 0x2113D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2113D0u;
label_2113d0:
    // 0x2113d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2113d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2113d4:
    // 0x2113d4: 0x2645002e  addiu       $a1, $s2, 0x2E
    ctx->pc = 0x2113d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 46));
label_2113d8:
    // 0x2113d8: 0x260f809  jalr        $s3
label_2113dc:
    if (ctx->pc == 0x2113DCu) {
        ctx->pc = 0x2113DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113D8u;
        // 0x2113dc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2113E0u;
        goto label_2113e0;
    }
    ctx->pc = 0x2113D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2113E0u);
        ctx->pc = 0x2113DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113D8u;
        // 0x2113dc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2113D8u, 0x2113E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2113E0u;
label_2113e0:
    // 0x2113e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2113e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2113e4:
    // 0x2113e4: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x2113e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_2113e8:
    // 0x2113e8: 0x260f809  jalr        $s3
label_2113ec:
    if (ctx->pc == 0x2113ECu) {
        ctx->pc = 0x2113ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113E8u;
        // 0x2113ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2113F0u;
        goto label_2113f0;
    }
    ctx->pc = 0x2113E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2113F0u);
        ctx->pc = 0x2113ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113E8u;
        // 0x2113ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2113E8u, 0x2113F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2113F0u;
label_2113f0:
    // 0x2113f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2113f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2113f4:
    // 0x2113f4: 0x26450032  addiu       $a1, $s2, 0x32
    ctx->pc = 0x2113f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 50));
label_2113f8:
    // 0x2113f8: 0x260f809  jalr        $s3
label_2113fc:
    if (ctx->pc == 0x2113FCu) {
        ctx->pc = 0x2113FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113F8u;
        // 0x2113fc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211400u;
        goto label_211400;
    }
    ctx->pc = 0x2113F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211400u);
        ctx->pc = 0x2113FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113F8u;
        // 0x2113fc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2113F8u, 0x211400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211400u;
label_211400:
    // 0x211400: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211404:
    // 0x211404: 0x26450034  addiu       $a1, $s2, 0x34
    ctx->pc = 0x211404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
label_211408:
    // 0x211408: 0x260f809  jalr        $s3
label_21140c:
    if (ctx->pc == 0x21140Cu) {
        ctx->pc = 0x21140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211408u;
        // 0x21140c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211410u;
        goto label_211410;
    }
    ctx->pc = 0x211408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211410u);
        ctx->pc = 0x21140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211408u;
        // 0x21140c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211408u, 0x211410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211410u;
label_211410:
    // 0x211410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211414:
    // 0x211414: 0x26450035  addiu       $a1, $s2, 0x35
    ctx->pc = 0x211414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 53));
label_211418:
    // 0x211418: 0x260f809  jalr        $s3
label_21141c:
    if (ctx->pc == 0x21141Cu) {
        ctx->pc = 0x21141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211418u;
        // 0x21141c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211420u;
        goto label_211420;
    }
    ctx->pc = 0x211418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211420u);
        ctx->pc = 0x21141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211418u;
        // 0x21141c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211418u, 0x211420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211420u;
label_211420:
    // 0x211420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211424:
    // 0x211424: 0x26450036  addiu       $a1, $s2, 0x36
    ctx->pc = 0x211424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 54));
label_211428:
    // 0x211428: 0x260f809  jalr        $s3
label_21142c:
    if (ctx->pc == 0x21142Cu) {
        ctx->pc = 0x21142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211428u;
        // 0x21142c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211430u;
        goto label_211430;
    }
    ctx->pc = 0x211428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211430u);
        ctx->pc = 0x21142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211428u;
        // 0x21142c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211428u, 0x211430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211430u;
label_211430:
    // 0x211430: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211434:
    // 0x211434: 0x26450037  addiu       $a1, $s2, 0x37
    ctx->pc = 0x211434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 55));
label_211438:
    // 0x211438: 0x260f809  jalr        $s3
label_21143c:
    if (ctx->pc == 0x21143Cu) {
        ctx->pc = 0x21143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211438u;
        // 0x21143c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211440u;
        goto label_211440;
    }
    ctx->pc = 0x211438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211440u);
        ctx->pc = 0x21143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211438u;
        // 0x21143c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211438u, 0x211440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211440u;
label_211440:
    // 0x211440: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211444:
    // 0x211444: 0x26450038  addiu       $a1, $s2, 0x38
    ctx->pc = 0x211444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
label_211448:
    // 0x211448: 0x260f809  jalr        $s3
label_21144c:
    if (ctx->pc == 0x21144Cu) {
        ctx->pc = 0x21144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211448u;
        // 0x21144c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211450u;
        goto label_211450;
    }
    ctx->pc = 0x211448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211450u);
        ctx->pc = 0x21144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211448u;
        // 0x21144c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211448u, 0x211450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211450u;
label_211450:
    // 0x211450: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211454:
    // 0x211454: 0x26450039  addiu       $a1, $s2, 0x39
    ctx->pc = 0x211454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 57));
label_211458:
    // 0x211458: 0x260f809  jalr        $s3
label_21145c:
    if (ctx->pc == 0x21145Cu) {
        ctx->pc = 0x21145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211458u;
        // 0x21145c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211460u;
        goto label_211460;
    }
    ctx->pc = 0x211458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211460u);
        ctx->pc = 0x21145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211458u;
        // 0x21145c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211458u, 0x211460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211460u;
label_211460:
    // 0x211460: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211464:
    // 0x211464: 0x2645003a  addiu       $a1, $s2, 0x3A
    ctx->pc = 0x211464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 58));
label_211468:
    // 0x211468: 0x260f809  jalr        $s3
label_21146c:
    if (ctx->pc == 0x21146Cu) {
        ctx->pc = 0x21146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211468u;
        // 0x21146c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211470u;
        goto label_211470;
    }
    ctx->pc = 0x211468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211470u);
        ctx->pc = 0x21146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211468u;
        // 0x21146c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211468u, 0x211470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211470u;
label_211470:
    // 0x211470: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211474:
    // 0x211474: 0x2645003b  addiu       $a1, $s2, 0x3B
    ctx->pc = 0x211474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 59));
label_211478:
    // 0x211478: 0x260f809  jalr        $s3
label_21147c:
    if (ctx->pc == 0x21147Cu) {
        ctx->pc = 0x21147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211478u;
        // 0x21147c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211480u;
        goto label_211480;
    }
    ctx->pc = 0x211478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211480u);
        ctx->pc = 0x21147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211478u;
        // 0x21147c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211478u, 0x211480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211480u;
label_211480:
    // 0x211480: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211484:
    // 0x211484: 0x2645003c  addiu       $a1, $s2, 0x3C
    ctx->pc = 0x211484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
label_211488:
    // 0x211488: 0x260f809  jalr        $s3
label_21148c:
    if (ctx->pc == 0x21148Cu) {
        ctx->pc = 0x21148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211488u;
        // 0x21148c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211490u;
        goto label_211490;
    }
    ctx->pc = 0x211488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211490u);
        ctx->pc = 0x21148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211488u;
        // 0x21148c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211488u, 0x211490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211490u;
label_211490:
    // 0x211490: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211494:
    // 0x211494: 0x2645003d  addiu       $a1, $s2, 0x3D
    ctx->pc = 0x211494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 61));
label_211498:
    // 0x211498: 0x260f809  jalr        $s3
label_21149c:
    if (ctx->pc == 0x21149Cu) {
        ctx->pc = 0x21149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211498u;
        // 0x21149c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2114A0u;
        goto label_2114a0;
    }
    ctx->pc = 0x211498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2114A0u);
        ctx->pc = 0x21149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211498u;
        // 0x21149c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211498u, 0x2114A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2114A0u;
label_2114a0:
    // 0x2114a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2114a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2114a4:
    // 0x2114a4: 0x2645003e  addiu       $a1, $s2, 0x3E
    ctx->pc = 0x2114a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 62));
label_2114a8:
    // 0x2114a8: 0x260f809  jalr        $s3
label_2114ac:
    if (ctx->pc == 0x2114ACu) {
        ctx->pc = 0x2114ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114A8u;
        // 0x2114ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2114B0u;
        goto label_2114b0;
    }
    ctx->pc = 0x2114A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2114B0u);
        ctx->pc = 0x2114ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114A8u;
        // 0x2114ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2114A8u, 0x2114B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2114B0u;
label_2114b0:
    // 0x2114b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2114b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2114b4:
    // 0x2114b4: 0x2645003f  addiu       $a1, $s2, 0x3F
    ctx->pc = 0x2114b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
label_2114b8:
    // 0x2114b8: 0x260f809  jalr        $s3
label_2114bc:
    if (ctx->pc == 0x2114BCu) {
        ctx->pc = 0x2114BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114B8u;
        // 0x2114bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2114C0u;
        goto label_2114c0;
    }
    ctx->pc = 0x2114B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2114C0u);
        ctx->pc = 0x2114BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114B8u;
        // 0x2114bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2114B8u, 0x2114C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2114C0u;
label_2114c0:
    // 0x2114c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2114c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2114c4:
    // 0x2114c4: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x2114c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_2114c8:
    // 0x2114c8: 0x260f809  jalr        $s3
label_2114cc:
    if (ctx->pc == 0x2114CCu) {
        ctx->pc = 0x2114CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114C8u;
        // 0x2114cc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2114D0u;
        goto label_2114d0;
    }
    ctx->pc = 0x2114C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2114D0u);
        ctx->pc = 0x2114CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114C8u;
        // 0x2114cc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2114C8u, 0x2114D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2114D0u;
label_2114d0:
    // 0x2114d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2114d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2114d4:
    // 0x2114d4: 0x26450042  addiu       $a1, $s2, 0x42
    ctx->pc = 0x2114d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 66));
label_2114d8:
    // 0x2114d8: 0x260f809  jalr        $s3
label_2114dc:
    if (ctx->pc == 0x2114DCu) {
        ctx->pc = 0x2114DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114D8u;
        // 0x2114dc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2114E0u;
        goto label_2114e0;
    }
    ctx->pc = 0x2114D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2114E0u);
        ctx->pc = 0x2114DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114D8u;
        // 0x2114dc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2114D8u, 0x2114E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2114E0u;
label_2114e0:
    // 0x2114e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2114e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2114e4:
    // 0x2114e4: 0x26450044  addiu       $a1, $s2, 0x44
    ctx->pc = 0x2114e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
label_2114e8:
    // 0x2114e8: 0x260f809  jalr        $s3
label_2114ec:
    if (ctx->pc == 0x2114ECu) {
        ctx->pc = 0x2114ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114E8u;
        // 0x2114ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2114F0u;
        goto label_2114f0;
    }
    ctx->pc = 0x2114E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2114F0u);
        ctx->pc = 0x2114ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114E8u;
        // 0x2114ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2114E8u, 0x2114F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2114F0u;
label_2114f0:
    // 0x2114f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2114f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2114f4:
    // 0x2114f4: 0x26450045  addiu       $a1, $s2, 0x45
    ctx->pc = 0x2114f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 69));
label_2114f8:
    // 0x2114f8: 0x260f809  jalr        $s3
label_2114fc:
    if (ctx->pc == 0x2114FCu) {
        ctx->pc = 0x2114FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114F8u;
        // 0x2114fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211500u;
        goto label_211500;
    }
    ctx->pc = 0x2114F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211500u);
        ctx->pc = 0x2114FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114F8u;
        // 0x2114fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2114F8u, 0x211500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211500u;
label_211500:
    // 0x211500: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211504:
    // 0x211504: 0x26450046  addiu       $a1, $s2, 0x46
    ctx->pc = 0x211504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 70));
label_211508:
    // 0x211508: 0x260f809  jalr        $s3
label_21150c:
    if (ctx->pc == 0x21150Cu) {
        ctx->pc = 0x21150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211508u;
        // 0x21150c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211510u;
        goto label_211510;
    }
    ctx->pc = 0x211508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211510u);
        ctx->pc = 0x21150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211508u;
        // 0x21150c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211508u, 0x211510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211510u;
label_211510:
    // 0x211510: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211514:
    // 0x211514: 0x26450047  addiu       $a1, $s2, 0x47
    ctx->pc = 0x211514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 71));
label_211518:
    // 0x211518: 0x260f809  jalr        $s3
label_21151c:
    if (ctx->pc == 0x21151Cu) {
        ctx->pc = 0x21151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211518u;
        // 0x21151c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211520u;
        goto label_211520;
    }
    ctx->pc = 0x211518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211520u);
        ctx->pc = 0x21151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211518u;
        // 0x21151c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211518u, 0x211520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211520u;
label_211520:
    // 0x211520: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x211520u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_211524:
    // 0x211524: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x211524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_211528:
    // 0x211528: 0x2ae301fe  slti        $v1, $s7, 0x1FE
    ctx->pc = 0x211528u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)510) ? 1 : 0);
label_21152c:
    // 0x21152c: 0x1460fee4  bnez        $v1, . + 4 + (-0x11C << 2)
label_211530:
    if (ctx->pc == 0x211530u) {
        ctx->pc = 0x211530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21152Cu;
        // 0x211530: 0x26520048  addiu       $s2, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211534u;
        goto label_211534;
    }
    ctx->pc = 0x21152Cu;
    {
        const bool branch_taken_0x21152c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21152Cu;
        // 0x211530: 0x26520048  addiu       $s2, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21152c) {
            ctx->pc = 0x2110C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x2110c0; return; }
        }
    }
    ctx->pc = 0x211534u;
label_211534:
    // 0x211534: 0x3401d010  ori         $at, $zero, 0xD010
    ctx->pc = 0x211534u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53264);
label_211538:
    // 0x211538: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21153c:
    // 0x21153c: 0x2c1b821  addu        $s7, $s6, $at
    ctx->pc = 0x21153cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 1)));
label_211540:
    // 0x211540: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x211540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211544:
    // 0x211544: 0x260f809  jalr        $s3
label_211548:
    if (ctx->pc == 0x211548u) {
        ctx->pc = 0x211548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211544u;
        // 0x211548: 0x26e537f0  addiu       $a1, $s7, 0x37F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 14320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21154Cu;
        goto label_21154c;
    }
    ctx->pc = 0x211544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21154Cu);
        ctx->pc = 0x211548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211544u;
        // 0x211548: 0x26e537f0  addiu       $a1, $s7, 0x37F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 14320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211544u, 0x21154Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21154Cu;
label_21154c:
    // 0x21154c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21154cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211550:
    // 0x211550: 0x26e537f1  addiu       $a1, $s7, 0x37F1
    ctx->pc = 0x211550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 14321));
label_211554:
    // 0x211554: 0x260f809  jalr        $s3
label_211558:
    if (ctx->pc == 0x211558u) {
        ctx->pc = 0x211558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211554u;
        // 0x211558: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21155Cu;
        goto label_21155c;
    }
    ctx->pc = 0x211554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21155Cu);
        ctx->pc = 0x211558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211554u;
        // 0x211558: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211554u, 0x21155Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21155Cu;
label_21155c:
    // 0x21155c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21155cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211560:
    // 0x211560: 0x26e537f2  addiu       $a1, $s7, 0x37F2
    ctx->pc = 0x211560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 14322));
label_211564:
    // 0x211564: 0x260f809  jalr        $s3
label_211568:
    if (ctx->pc == 0x211568u) {
        ctx->pc = 0x211568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211564u;
        // 0x211568: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21156Cu;
        goto label_21156c;
    }
    ctx->pc = 0x211564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21156Cu);
        ctx->pc = 0x211568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211564u;
        // 0x211568: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211564u, 0x21156Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21156Cu;
label_21156c:
    // 0x21156c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21156cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211570:
    // 0x211570: 0x26e537f3  addiu       $a1, $s7, 0x37F3
    ctx->pc = 0x211570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 14323));
label_211574:
    // 0x211574: 0x260f809  jalr        $s3
label_211578:
    if (ctx->pc == 0x211578u) {
        ctx->pc = 0x211578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211574u;
        // 0x211578: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21157Cu;
        goto label_21157c;
    }
    ctx->pc = 0x211574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21157Cu);
        ctx->pc = 0x211578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211574u;
        // 0x211578: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211574u, 0x21157Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21157Cu;
label_21157c:
    // 0x21157c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21157cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211580:
    // 0x211580: 0x26e537f4  addiu       $a1, $s7, 0x37F4
    ctx->pc = 0x211580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 14324));
label_211584:
    // 0x211584: 0x260f809  jalr        $s3
label_211588:
    if (ctx->pc == 0x211588u) {
        ctx->pc = 0x211588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211584u;
        // 0x211588: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21158Cu;
        goto label_21158c;
    }
    ctx->pc = 0x211584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21158Cu);
        ctx->pc = 0x211588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211584u;
        // 0x211588: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211584u, 0x21158Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21158Cu;
label_21158c:
    // 0x21158c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21158cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211590:
    // 0x211590: 0x26e537f6  addiu       $a1, $s7, 0x37F6
    ctx->pc = 0x211590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 14326));
label_211594:
    // 0x211594: 0x260f809  jalr        $s3
label_211598:
    if (ctx->pc == 0x211598u) {
        ctx->pc = 0x211598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211594u;
        // 0x211598: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21159Cu;
        goto label_21159c;
    }
    ctx->pc = 0x211594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21159Cu);
        ctx->pc = 0x211598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211594u;
        // 0x211598: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211594u, 0x21159Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21159Cu;
label_21159c:
    // 0x21159c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21159cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2115a0:
    // 0x2115a0: 0x26e537f7  addiu       $a1, $s7, 0x37F7
    ctx->pc = 0x2115a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 14327));
label_2115a4:
    // 0x2115a4: 0x260f809  jalr        $s3
label_2115a8:
    if (ctx->pc == 0x2115A8u) {
        ctx->pc = 0x2115A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115A4u;
        // 0x2115a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2115ACu;
        goto label_2115ac;
    }
    ctx->pc = 0x2115A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2115ACu);
        ctx->pc = 0x2115A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115A4u;
        // 0x2115a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2115A4u, 0x2115ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2115ACu;
label_2115ac:
    // 0x2115ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2115acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2115b0:
    // 0x2115b0: 0x26e537fc  addiu       $a1, $s7, 0x37FC
    ctx->pc = 0x2115b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 14332));
label_2115b4:
    // 0x2115b4: 0x260f809  jalr        $s3
label_2115b8:
    if (ctx->pc == 0x2115B8u) {
        ctx->pc = 0x2115B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115B4u;
        // 0x2115b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2115BCu;
        goto label_2115bc;
    }
    ctx->pc = 0x2115B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2115BCu);
        ctx->pc = 0x2115B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115B4u;
        // 0x2115b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2115B4u, 0x2115BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2115BCu;
label_2115bc:
    // 0x2115bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2115bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2115c0:
    // 0x2115c0: 0x26e537f8  addiu       $a1, $s7, 0x37F8
    ctx->pc = 0x2115c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 14328));
label_2115c4:
    // 0x2115c4: 0x260f809  jalr        $s3
label_2115c8:
    if (ctx->pc == 0x2115C8u) {
        ctx->pc = 0x2115C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115C4u;
        // 0x2115c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2115CCu;
        goto label_2115cc;
    }
    ctx->pc = 0x2115C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2115CCu);
        ctx->pc = 0x2115C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115C4u;
        // 0x2115c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2115C4u, 0x2115CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2115CCu;
label_2115cc:
    // 0x2115cc: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x2115ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2115d0:
    // 0x2115d0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2115d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2115d4:
    // 0x2115d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2115d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2115d8:
    // 0x2115d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2115d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2115dc:
    // 0x2115dc: 0x0  nop
    ctx->pc = 0x2115dcu;
    // NOP
label_2115e0:
    // 0x2115e0: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x2115e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2115e4:
    // 0x2115e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2115e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2115e8:
    // 0x2115e8: 0x260f809  jalr        $s3
label_2115ec:
    if (ctx->pc == 0x2115ECu) {
        ctx->pc = 0x2115ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115E8u;
        // 0x2115ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2115F0u;
        goto label_2115f0;
    }
    ctx->pc = 0x2115E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2115F0u);
        ctx->pc = 0x2115ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115E8u;
        // 0x2115ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2115E8u, 0x2115F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2115F0u;
label_2115f0:
    // 0x2115f0: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x2115f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2115f4:
    // 0x2115f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2115f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2115f8:
    // 0x2115f8: 0x2465016a  addiu       $a1, $v1, 0x16A
    ctx->pc = 0x2115f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 362));
label_2115fc:
    // 0x2115fc: 0x260f809  jalr        $s3
label_211600:
    if (ctx->pc == 0x211600u) {
        ctx->pc = 0x211600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115FCu;
        // 0x211600: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211604u;
        goto label_211604;
    }
    ctx->pc = 0x2115FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211604u);
        ctx->pc = 0x211600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115FCu;
        // 0x211600: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2115FCu, 0x211604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211604u;
label_211604:
    // 0x211604: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x211604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_211608:
    // 0x211608: 0x2a4300b5  slti        $v1, $s2, 0xB5
    ctx->pc = 0x211608u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)181) ? 1 : 0);
label_21160c:
    // 0x21160c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_211610:
    if (ctx->pc == 0x211610u) {
        ctx->pc = 0x211610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21160Cu;
        // 0x211610: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211614u;
        goto label_211614;
    }
    ctx->pc = 0x21160Cu;
    {
        const bool branch_taken_0x21160c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21160Cu;
        // 0x211610: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21160c) {
            ctx->pc = 0x2115DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2115dc;
        }
    }
    ctx->pc = 0x211614u;
label_211614:
    // 0x211614: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211618:
    // 0x211618: 0x2605021f  addiu       $a1, $s0, 0x21F
    ctx->pc = 0x211618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 543));
label_21161c:
    // 0x21161c: 0x260f809  jalr        $s3
label_211620:
    if (ctx->pc == 0x211620u) {
        ctx->pc = 0x211620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21161Cu;
        // 0x211620: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211624u;
        goto label_211624;
    }
    ctx->pc = 0x21161Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211624u);
        ctx->pc = 0x211620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21161Cu;
        // 0x211620: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21161Cu, 0x211624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211624u;
label_211624:
    // 0x211624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211628:
    // 0x211628: 0x26050220  addiu       $a1, $s0, 0x220
    ctx->pc = 0x211628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
label_21162c:
    // 0x21162c: 0x260f809  jalr        $s3
label_211630:
    if (ctx->pc == 0x211630u) {
        ctx->pc = 0x211630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21162Cu;
        // 0x211630: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211634u;
        goto label_211634;
    }
    ctx->pc = 0x21162Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211634u);
        ctx->pc = 0x211630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21162Cu;
        // 0x211630: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21162Cu, 0x211634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211634u;
label_211634:
    // 0x211634: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211638:
    // 0x211638: 0x26050221  addiu       $a1, $s0, 0x221
    ctx->pc = 0x211638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 545));
label_21163c:
    // 0x21163c: 0x260f809  jalr        $s3
label_211640:
    if (ctx->pc == 0x211640u) {
        ctx->pc = 0x211640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21163Cu;
        // 0x211640: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211644u;
        goto label_211644;
    }
    ctx->pc = 0x21163Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211644u);
        ctx->pc = 0x211640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21163Cu;
        // 0x211640: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21163Cu, 0x211644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211644u;
label_211644:
    // 0x211644: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211648:
    // 0x211648: 0x26050222  addiu       $a1, $s0, 0x222
    ctx->pc = 0x211648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 546));
label_21164c:
    // 0x21164c: 0x260f809  jalr        $s3
label_211650:
    if (ctx->pc == 0x211650u) {
        ctx->pc = 0x211650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21164Cu;
        // 0x211650: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211654u;
        goto label_211654;
    }
    ctx->pc = 0x21164Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211654u);
        ctx->pc = 0x211650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21164Cu;
        // 0x211650: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21164Cu, 0x211654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211654u;
label_211654:
    // 0x211654: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211658:
    // 0x211658: 0x26050223  addiu       $a1, $s0, 0x223
    ctx->pc = 0x211658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 547));
label_21165c:
    // 0x21165c: 0x260f809  jalr        $s3
label_211660:
    if (ctx->pc == 0x211660u) {
        ctx->pc = 0x211660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21165Cu;
        // 0x211660: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211664u;
        goto label_211664;
    }
    ctx->pc = 0x21165Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211664u);
        ctx->pc = 0x211660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21165Cu;
        // 0x211660: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21165Cu, 0x211664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211664u;
label_211664:
    // 0x211664: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211668:
    // 0x211668: 0x26050224  addiu       $a1, $s0, 0x224
    ctx->pc = 0x211668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 548));
label_21166c:
    // 0x21166c: 0x260f809  jalr        $s3
label_211670:
    if (ctx->pc == 0x211670u) {
        ctx->pc = 0x211670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21166Cu;
        // 0x211670: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211674u;
        goto label_211674;
    }
    ctx->pc = 0x21166Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211674u);
        ctx->pc = 0x211670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21166Cu;
        // 0x211670: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21166Cu, 0x211674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211674u;
label_211674:
    // 0x211674: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211678:
    // 0x211678: 0x26050226  addiu       $a1, $s0, 0x226
    ctx->pc = 0x211678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 550));
label_21167c:
    // 0x21167c: 0x260f809  jalr        $s3
label_211680:
    if (ctx->pc == 0x211680u) {
        ctx->pc = 0x211680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21167Cu;
        // 0x211680: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211684u;
        goto label_211684;
    }
    ctx->pc = 0x21167Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211684u);
        ctx->pc = 0x211680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21167Cu;
        // 0x211680: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21167Cu, 0x211684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211684u;
label_211684:
    // 0x211684: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211688:
    // 0x211688: 0x26050228  addiu       $a1, $s0, 0x228
    ctx->pc = 0x211688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
label_21168c:
    // 0x21168c: 0x260f809  jalr        $s3
label_211690:
    if (ctx->pc == 0x211690u) {
        ctx->pc = 0x211690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21168Cu;
        // 0x211690: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211694u;
        goto label_211694;
    }
    ctx->pc = 0x21168Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211694u);
        ctx->pc = 0x211690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21168Cu;
        // 0x211690: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21168Cu, 0x211694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211694u;
label_211694:
    // 0x211694: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211698:
    // 0x211698: 0x2605022c  addiu       $a1, $s0, 0x22C
    ctx->pc = 0x211698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 556));
label_21169c:
    // 0x21169c: 0x260f809  jalr        $s3
label_2116a0:
    if (ctx->pc == 0x2116A0u) {
        ctx->pc = 0x2116A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21169Cu;
        // 0x2116a0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2116A4u;
        goto label_2116a4;
    }
    ctx->pc = 0x21169Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2116A4u);
        ctx->pc = 0x2116A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21169Cu;
        // 0x2116a0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21169Cu, 0x2116A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2116A4u;
label_2116a4:
    // 0x2116a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2116a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2116a8:
    // 0x2116a8: 0x26050230  addiu       $a1, $s0, 0x230
    ctx->pc = 0x2116a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_2116ac:
    // 0x2116ac: 0x260f809  jalr        $s3
label_2116b0:
    if (ctx->pc == 0x2116B0u) {
        ctx->pc = 0x2116B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116ACu;
        // 0x2116b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2116B4u;
        goto label_2116b4;
    }
    ctx->pc = 0x2116ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2116B4u);
        ctx->pc = 0x2116B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116ACu;
        // 0x2116b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2116ACu, 0x2116B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2116B4u;
label_2116b4:
    // 0x2116b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2116b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2116b8:
    // 0x2116b8: 0x26050232  addiu       $a1, $s0, 0x232
    ctx->pc = 0x2116b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 562));
label_2116bc:
    // 0x2116bc: 0x260f809  jalr        $s3
label_2116c0:
    if (ctx->pc == 0x2116C0u) {
        ctx->pc = 0x2116C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116BCu;
        // 0x2116c0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2116C4u;
        goto label_2116c4;
    }
    ctx->pc = 0x2116BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2116C4u);
        ctx->pc = 0x2116C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116BCu;
        // 0x2116c0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2116BCu, 0x2116C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2116C4u;
label_2116c4:
    // 0x2116c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2116c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2116c8:
    // 0x2116c8: 0x26050234  addiu       $a1, $s0, 0x234
    ctx->pc = 0x2116c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 564));
label_2116cc:
    // 0x2116cc: 0x260f809  jalr        $s3
label_2116d0:
    if (ctx->pc == 0x2116D0u) {
        ctx->pc = 0x2116D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116CCu;
        // 0x2116d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2116D4u;
        goto label_2116d4;
    }
    ctx->pc = 0x2116CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2116D4u);
        ctx->pc = 0x2116D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116CCu;
        // 0x2116d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2116CCu, 0x2116D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2116D4u;
label_2116d4:
    // 0x2116d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2116d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2116d8:
    // 0x2116d8: 0x26050238  addiu       $a1, $s0, 0x238
    ctx->pc = 0x2116d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
label_2116dc:
    // 0x2116dc: 0x260f809  jalr        $s3
label_2116e0:
    if (ctx->pc == 0x2116E0u) {
        ctx->pc = 0x2116E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116DCu;
        // 0x2116e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2116E4u;
        goto label_2116e4;
    }
    ctx->pc = 0x2116DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2116E4u);
        ctx->pc = 0x2116E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116DCu;
        // 0x2116e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2116DCu, 0x2116E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2116E4u;
label_2116e4:
    // 0x2116e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2116e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2116e8:
    // 0x2116e8: 0x2605023c  addiu       $a1, $s0, 0x23C
    ctx->pc = 0x2116e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
label_2116ec:
    // 0x2116ec: 0x260f809  jalr        $s3
label_2116f0:
    if (ctx->pc == 0x2116F0u) {
        ctx->pc = 0x2116F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116ECu;
        // 0x2116f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2116F4u;
        goto label_2116f4;
    }
    ctx->pc = 0x2116ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2116F4u);
        ctx->pc = 0x2116F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116ECu;
        // 0x2116f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2116ECu, 0x2116F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2116F4u;
label_2116f4:
    // 0x2116f4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2116f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2116f8:
    // 0x2116f8: 0x2a830018  slti        $v1, $s4, 0x18
    ctx->pc = 0x2116f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)24) ? 1 : 0);
label_2116fc:
    // 0x2116fc: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
label_211700:
    if (ctx->pc == 0x211700u) {
        ctx->pc = 0x211700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116FCu;
        // 0x211700: 0x26100240  addiu       $s0, $s0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211704u;
        goto label_211704;
    }
    ctx->pc = 0x2116FCu;
    {
        const bool branch_taken_0x2116fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116FCu;
        // 0x211700: 0x26100240  addiu       $s0, $s0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2116fc) {
            ctx->pc = 0x2115D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2115d4;
        }
    }
    ctx->pc = 0x211704u;
label_211704:
    // 0x211704: 0x26f03600  addiu       $s0, $s7, 0x3600
    ctx->pc = 0x211704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 13824));
label_211708:
    // 0x211708: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x211708u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21170c:
    // 0x21170c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21170cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211710:
    // 0x211710: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x211710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_211714:
    // 0x211714: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211718:
    // 0x211718: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x211718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_21171c:
    // 0x21171c: 0x260f809  jalr        $s3
label_211720:
    if (ctx->pc == 0x211720u) {
        ctx->pc = 0x211720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21171Cu;
        // 0x211720: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211724u;
        goto label_211724;
    }
    ctx->pc = 0x21171Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211724u);
        ctx->pc = 0x211720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21171Cu;
        // 0x211720: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21171Cu, 0x211724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211724u;
label_211724:
    // 0x211724: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x211724u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_211728:
    // 0x211728: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x211728u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_21172c:
    // 0x21172c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_211730:
    if (ctx->pc == 0x211730u) {
        ctx->pc = 0x211730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21172Cu;
        // 0x211730: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211734u;
        goto label_211734;
    }
    ctx->pc = 0x21172Cu;
    {
        const bool branch_taken_0x21172c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21172Cu;
        // 0x211730: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21172c) {
            ctx->pc = 0x211710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211710;
        }
    }
    ctx->pc = 0x211734u;
label_211734:
    // 0x211734: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211738:
    // 0x211738: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x211738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21173c:
    // 0x21173c: 0x260f809  jalr        $s3
label_211740:
    if (ctx->pc == 0x211740u) {
        ctx->pc = 0x211740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21173Cu;
        // 0x211740: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211744u;
        goto label_211744;
    }
    ctx->pc = 0x21173Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211744u);
        ctx->pc = 0x211740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21173Cu;
        // 0x211740: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21173Cu, 0x211744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211744u;
label_211744:
    // 0x211744: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211748:
    // 0x211748: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x211748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_21174c:
    // 0x21174c: 0x260f809  jalr        $s3
label_211750:
    if (ctx->pc == 0x211750u) {
        ctx->pc = 0x211750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21174Cu;
        // 0x211750: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211754u;
        goto label_211754;
    }
    ctx->pc = 0x21174Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211754u);
        ctx->pc = 0x211750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21174Cu;
        // 0x211750: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21174Cu, 0x211754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211754u;
label_211754:
    // 0x211754: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211758:
    // 0x211758: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x211758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_21175c:
    // 0x21175c: 0x260f809  jalr        $s3
label_211760:
    if (ctx->pc == 0x211760u) {
        ctx->pc = 0x211760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21175Cu;
        // 0x211760: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211764u;
        goto label_211764;
    }
    ctx->pc = 0x21175Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211764u);
        ctx->pc = 0x211760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21175Cu;
        // 0x211760: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21175Cu, 0x211764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211764u;
label_211764:
    // 0x211764: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211768:
    // 0x211768: 0x2605000d  addiu       $a1, $s0, 0xD
    ctx->pc = 0x211768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_21176c:
    // 0x21176c: 0x260f809  jalr        $s3
label_211770:
    if (ctx->pc == 0x211770u) {
        ctx->pc = 0x211770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21176Cu;
        // 0x211770: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211774u;
        goto label_211774;
    }
    ctx->pc = 0x21176Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211774u);
        ctx->pc = 0x211770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21176Cu;
        // 0x211770: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21176Cu, 0x211774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211774u;
label_211774:
    // 0x211774: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211778:
    // 0x211778: 0x2605000e  addiu       $a1, $s0, 0xE
    ctx->pc = 0x211778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_21177c:
    // 0x21177c: 0x260f809  jalr        $s3
label_211780:
    if (ctx->pc == 0x211780u) {
        ctx->pc = 0x211780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21177Cu;
        // 0x211780: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211784u;
        goto label_211784;
    }
    ctx->pc = 0x21177Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211784u);
        ctx->pc = 0x211780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21177Cu;
        // 0x211780: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21177Cu, 0x211784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211784u;
label_211784:
    // 0x211784: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211788:
    // 0x211788: 0x2605000f  addiu       $a1, $s0, 0xF
    ctx->pc = 0x211788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_21178c:
    // 0x21178c: 0x260f809  jalr        $s3
label_211790:
    if (ctx->pc == 0x211790u) {
        ctx->pc = 0x211790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21178Cu;
        // 0x211790: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211794u;
        goto label_211794;
    }
    ctx->pc = 0x21178Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211794u);
        ctx->pc = 0x211790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21178Cu;
        // 0x211790: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21178Cu, 0x211794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211794u;
label_211794:
    // 0x211794: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211798:
    // 0x211798: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x211798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_21179c:
    // 0x21179c: 0x260f809  jalr        $s3
label_2117a0:
    if (ctx->pc == 0x2117A0u) {
        ctx->pc = 0x2117A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21179Cu;
        // 0x2117a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2117A4u;
        goto label_2117a4;
    }
    ctx->pc = 0x21179Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2117A4u);
        ctx->pc = 0x2117A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21179Cu;
        // 0x2117a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21179Cu, 0x2117A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2117A4u;
label_2117a4:
    // 0x2117a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2117a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2117a8:
    // 0x2117a8: 0x26050011  addiu       $a1, $s0, 0x11
    ctx->pc = 0x2117a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
label_2117ac:
    // 0x2117ac: 0x260f809  jalr        $s3
label_2117b0:
    if (ctx->pc == 0x2117B0u) {
        ctx->pc = 0x2117B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117ACu;
        // 0x2117b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2117B4u;
        goto label_2117b4;
    }
    ctx->pc = 0x2117ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2117B4u);
        ctx->pc = 0x2117B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117ACu;
        // 0x2117b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2117ACu, 0x2117B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2117B4u;
label_2117b4:
    // 0x2117b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2117b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2117b8:
    // 0x2117b8: 0x26050012  addiu       $a1, $s0, 0x12
    ctx->pc = 0x2117b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_2117bc:
    // 0x2117bc: 0x260f809  jalr        $s3
label_2117c0:
    if (ctx->pc == 0x2117C0u) {
        ctx->pc = 0x2117C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117BCu;
        // 0x2117c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2117C4u;
        goto label_2117c4;
    }
    ctx->pc = 0x2117BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2117C4u);
        ctx->pc = 0x2117C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117BCu;
        // 0x2117c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2117BCu, 0x2117C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2117C4u;
label_2117c4:
    // 0x2117c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2117c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2117c8:
    // 0x2117c8: 0x26050013  addiu       $a1, $s0, 0x13
    ctx->pc = 0x2117c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 19));
label_2117cc:
    // 0x2117cc: 0x260f809  jalr        $s3
label_2117d0:
    if (ctx->pc == 0x2117D0u) {
        ctx->pc = 0x2117D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117CCu;
        // 0x2117d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2117D4u;
        goto label_2117d4;
    }
    ctx->pc = 0x2117CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2117D4u);
        ctx->pc = 0x2117D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117CCu;
        // 0x2117d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2117CCu, 0x2117D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2117D4u;
label_2117d4:
    // 0x2117d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2117d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2117d8:
    // 0x2117d8: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x2117d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_2117dc:
    // 0x2117dc: 0x260f809  jalr        $s3
label_2117e0:
    if (ctx->pc == 0x2117E0u) {
        ctx->pc = 0x2117E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117DCu;
        // 0x2117e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2117E4u;
        goto label_2117e4;
    }
    ctx->pc = 0x2117DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2117E4u);
        ctx->pc = 0x2117E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117DCu;
        // 0x2117e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2117DCu, 0x2117E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2117E4u;
label_2117e4:
    // 0x2117e4: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x2117e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2117e8:
    // 0x2117e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2117e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2117ec:
    // 0x2117ec: 0x260f809  jalr        $s3
label_2117f0:
    if (ctx->pc == 0x2117F0u) {
        ctx->pc = 0x2117F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117ECu;
        // 0x2117f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2117F4u;
        goto label_2117f4;
    }
    ctx->pc = 0x2117ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2117F4u);
        ctx->pc = 0x2117F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2117ECu;
        // 0x2117f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2117ECu, 0x2117F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2117F4u;
label_2117f4:
    // 0x2117f4: 0x26f03620  addiu       $s0, $s7, 0x3620
    ctx->pc = 0x2117f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 13856));
label_2117f8:
    // 0x2117f8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2117f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2117fc:
    // 0x2117fc: 0x26140010  addiu       $s4, $s0, 0x10
    ctx->pc = 0x2117fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_211800:
    // 0x211800: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x211800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211804:
    // 0x211804: 0x0  nop
    ctx->pc = 0x211804u;
    // NOP
label_211808:
    // 0x211808: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x211808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21180c:
    // 0x21180c: 0x0  nop
    ctx->pc = 0x21180cu;
    // NOP
label_211810:
    // 0x211810: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x211810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_211814:
    // 0x211814: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211818:
    // 0x211818: 0x260f809  jalr        $s3
label_21181c:
    if (ctx->pc == 0x21181Cu) {
        ctx->pc = 0x21181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211818u;
        // 0x21181c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211820u;
        goto label_211820;
    }
    ctx->pc = 0x211818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211820u);
        ctx->pc = 0x21181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211818u;
        // 0x21181c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211818u, 0x211820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211820u;
label_211820:
    // 0x211820: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x211820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_211824:
    // 0x211824: 0x2a230014  slti        $v1, $s1, 0x14
    ctx->pc = 0x211824u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
label_211828:
    // 0x211828: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_21182c:
    if (ctx->pc == 0x21182Cu) {
        ctx->pc = 0x21182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211828u;
        // 0x21182c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211830u;
        goto label_211830;
    }
    ctx->pc = 0x211828u;
    {
        const bool branch_taken_0x211828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211828u;
        // 0x21182c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211828) {
            ctx->pc = 0x21180Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21180c;
        }
    }
    ctx->pc = 0x211830u;
label_211830:
    // 0x211830: 0x26850014  addiu       $a1, $s4, 0x14
    ctx->pc = 0x211830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_211834:
    // 0x211834: 0x260f809  jalr        $s3
label_211838:
    if (ctx->pc == 0x211838u) {
        ctx->pc = 0x211838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211834u;
        // 0x211838: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21183Cu;
        goto label_21183c;
    }
    ctx->pc = 0x211834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21183Cu);
        ctx->pc = 0x211838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211834u;
        // 0x211838: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211834u, 0x21183Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21183Cu;
label_21183c:
    // 0x21183c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21183cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211840:
    // 0x211840: 0x26850018  addiu       $a1, $s4, 0x18
    ctx->pc = 0x211840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_211844:
    // 0x211844: 0x260f809  jalr        $s3
label_211848:
    if (ctx->pc == 0x211848u) {
        ctx->pc = 0x211848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211844u;
        // 0x211848: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21184Cu;
        goto label_21184c;
    }
    ctx->pc = 0x211844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21184Cu);
        ctx->pc = 0x211848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211844u;
        // 0x211848: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211844u, 0x21184Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21184Cu;
label_21184c:
    // 0x21184c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21184cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_211850:
    // 0x211850: 0x1a40ffec  blez        $s2, . + 4 + (-0x14 << 2)
label_211854:
    if (ctx->pc == 0x211854u) {
        ctx->pc = 0x211854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211850u;
        // 0x211854: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211858u;
        goto label_211858;
    }
    ctx->pc = 0x211850u;
    {
        const bool branch_taken_0x211850 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x211854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211850u;
        // 0x211854: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211850) {
            ctx->pc = 0x211804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211804;
        }
    }
    ctx->pc = 0x211858u;
label_211858:
    // 0x211858: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21185c:
    // 0x21185c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21185cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_211860:
    // 0x211860: 0x260f809  jalr        $s3
label_211864:
    if (ctx->pc == 0x211864u) {
        ctx->pc = 0x211864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211860u;
        // 0x211864: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211868u;
        goto label_211868;
    }
    ctx->pc = 0x211860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211868u);
        ctx->pc = 0x211864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211860u;
        // 0x211864: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211860u, 0x211868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211868u;
label_211868:
    // 0x211868: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21186c:
    // 0x21186c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x21186cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_211870:
    // 0x211870: 0x260f809  jalr        $s3
label_211874:
    if (ctx->pc == 0x211874u) {
        ctx->pc = 0x211874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211870u;
        // 0x211874: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211878u;
        goto label_211878;
    }
    ctx->pc = 0x211870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211878u);
        ctx->pc = 0x211874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211870u;
        // 0x211874: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211870u, 0x211878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211878u;
label_211878:
    // 0x211878: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21187c:
    // 0x21187c: 0x26050006  addiu       $a1, $s0, 0x6
    ctx->pc = 0x21187cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
label_211880:
    // 0x211880: 0x260f809  jalr        $s3
label_211884:
    if (ctx->pc == 0x211884u) {
        ctx->pc = 0x211884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211880u;
        // 0x211884: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211888u;
        goto label_211888;
    }
    ctx->pc = 0x211880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211888u);
        ctx->pc = 0x211884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211880u;
        // 0x211884: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211880u, 0x211888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211888u;
label_211888:
    // 0x211888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21188c:
    // 0x21188c: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x21188cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_211890:
    // 0x211890: 0x260f809  jalr        $s3
label_211894:
    if (ctx->pc == 0x211894u) {
        ctx->pc = 0x211894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211890u;
        // 0x211894: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211898u;
        goto label_211898;
    }
    ctx->pc = 0x211890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211898u);
        ctx->pc = 0x211894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211890u;
        // 0x211894: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211890u, 0x211898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211898u;
label_211898:
    // 0x211898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21189c:
    // 0x21189c: 0x26050009  addiu       $a1, $s0, 0x9
    ctx->pc = 0x21189cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_2118a0:
    // 0x2118a0: 0x260f809  jalr        $s3
label_2118a4:
    if (ctx->pc == 0x2118A4u) {
        ctx->pc = 0x2118A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118A0u;
        // 0x2118a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118A8u;
        goto label_2118a8;
    }
    ctx->pc = 0x2118A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2118A8u);
        ctx->pc = 0x2118A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118A0u;
        // 0x2118a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2118A0u, 0x2118A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2118A8u;
label_2118a8:
    // 0x2118a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2118a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2118ac:
    // 0x2118ac: 0x2605000a  addiu       $a1, $s0, 0xA
    ctx->pc = 0x2118acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_2118b0:
    // 0x2118b0: 0x260f809  jalr        $s3
label_2118b4:
    if (ctx->pc == 0x2118B4u) {
        ctx->pc = 0x2118B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118B0u;
        // 0x2118b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118B8u;
        goto label_2118b8;
    }
    ctx->pc = 0x2118B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2118B8u);
        ctx->pc = 0x2118B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118B0u;
        // 0x2118b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2118B0u, 0x2118B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2118B8u;
label_2118b8:
    // 0x2118b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2118b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2118bc:
    // 0x2118bc: 0x2605000b  addiu       $a1, $s0, 0xB
    ctx->pc = 0x2118bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
label_2118c0:
    // 0x2118c0: 0x260f809  jalr        $s3
label_2118c4:
    if (ctx->pc == 0x2118C4u) {
        ctx->pc = 0x2118C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118C0u;
        // 0x2118c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118C8u;
        goto label_2118c8;
    }
    ctx->pc = 0x2118C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2118C8u);
        ctx->pc = 0x2118C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118C0u;
        // 0x2118c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2118C0u, 0x2118C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2118C8u;
label_2118c8:
    // 0x2118c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2118c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2118cc:
    // 0x2118cc: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x2118ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_2118d0:
    // 0x2118d0: 0x260f809  jalr        $s3
label_2118d4:
    if (ctx->pc == 0x2118D4u) {
        ctx->pc = 0x2118D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118D0u;
        // 0x2118d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118D8u;
        goto label_2118d8;
    }
    ctx->pc = 0x2118D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2118D8u);
        ctx->pc = 0x2118D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118D0u;
        // 0x2118d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2118D0u, 0x2118D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2118D8u;
label_2118d8:
    // 0x2118d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2118d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2118dc:
    // 0x2118dc: 0x2605000d  addiu       $a1, $s0, 0xD
    ctx->pc = 0x2118dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_2118e0:
    // 0x2118e0: 0x260f809  jalr        $s3
label_2118e4:
    if (ctx->pc == 0x2118E4u) {
        ctx->pc = 0x2118E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118E0u;
        // 0x2118e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118E8u;
        goto label_2118e8;
    }
    ctx->pc = 0x2118E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2118E8u);
        ctx->pc = 0x2118E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118E0u;
        // 0x2118e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2118E0u, 0x2118E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2118E8u;
label_2118e8:
    // 0x2118e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2118e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2118ec:
    // 0x2118ec: 0x2605000e  addiu       $a1, $s0, 0xE
    ctx->pc = 0x2118ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_2118f0:
    // 0x2118f0: 0x260f809  jalr        $s3
label_2118f4:
    if (ctx->pc == 0x2118F4u) {
        ctx->pc = 0x2118F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118F0u;
        // 0x2118f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2118F8u;
        goto label_2118f8;
    }
    ctx->pc = 0x2118F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2118F8u);
        ctx->pc = 0x2118F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118F0u;
        // 0x2118f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2118F0u, 0x2118F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2118F8u;
label_2118f8:
    // 0x2118f8: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x2118f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2118fc:
    // 0x2118fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2118fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211900:
    // 0x211900: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x211900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_211904:
    // 0x211904: 0x260f809  jalr        $s3
label_211908:
    if (ctx->pc == 0x211908u) {
        ctx->pc = 0x211908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211904u;
        // 0x211908: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21190Cu;
        goto label_21190c;
    }
    ctx->pc = 0x211904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21190Cu);
        ctx->pc = 0x211908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211904u;
        // 0x211908: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211904u, 0x21190Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21190Cu;
label_21190c:
    // 0x21190c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21190cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211910:
    // 0x211910: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x211910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_211914:
    // 0x211914: 0x260f809  jalr        $s3
label_211918:
    if (ctx->pc == 0x211918u) {
        ctx->pc = 0x211918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211914u;
        // 0x211918: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21191Cu;
        goto label_21191c;
    }
    ctx->pc = 0x211914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21191Cu);
        ctx->pc = 0x211918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211914u;
        // 0x211918: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211914u, 0x21191Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21191Cu;
label_21191c:
    // 0x21191c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21191cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211920:
    // 0x211920: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x211920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_211924:
    // 0x211924: 0x260f809  jalr        $s3
label_211928:
    if (ctx->pc == 0x211928u) {
        ctx->pc = 0x211928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211924u;
        // 0x211928: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21192Cu;
        goto label_21192c;
    }
    ctx->pc = 0x211924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21192Cu);
        ctx->pc = 0x211928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211924u;
        // 0x211928: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211924u, 0x21192Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21192Cu;
label_21192c:
    // 0x21192c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21192cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211930:
    // 0x211930: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x211930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_211934:
    // 0x211934: 0x260f809  jalr        $s3
label_211938:
    if (ctx->pc == 0x211938u) {
        ctx->pc = 0x211938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211934u;
        // 0x211938: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21193Cu;
        goto label_21193c;
    }
    ctx->pc = 0x211934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21193Cu);
        ctx->pc = 0x211938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211934u;
        // 0x211938: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211934u, 0x21193Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21193Cu;
label_21193c:
    // 0x21193c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21193cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211940:
    // 0x211940: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x211940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_211944:
    // 0x211944: 0x260f809  jalr        $s3
label_211948:
    if (ctx->pc == 0x211948u) {
        ctx->pc = 0x211948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211944u;
        // 0x211948: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21194Cu;
        goto label_21194c;
    }
    ctx->pc = 0x211944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21194Cu);
        ctx->pc = 0x211948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211944u;
        // 0x211948: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211944u, 0x21194Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21194Cu;
label_21194c:
    // 0x21194c: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x21194cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_211950:
    // 0x211950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211954:
    // 0x211954: 0x260f809  jalr        $s3
label_211958:
    if (ctx->pc == 0x211958u) {
        ctx->pc = 0x211958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211954u;
        // 0x211958: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21195Cu;
        goto label_21195c;
    }
    ctx->pc = 0x211954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21195Cu);
        ctx->pc = 0x211958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211954u;
        // 0x211958: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211954u, 0x21195Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21195Cu;
label_21195c:
    // 0x21195c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21195cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211960:
    // 0x211960: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x211960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_211964:
    // 0x211964: 0x2465005e  addiu       $a1, $v1, 0x5E
    ctx->pc = 0x211964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 94));
label_211968:
    // 0x211968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21196c:
    // 0x21196c: 0x260f809  jalr        $s3
label_211970:
    if (ctx->pc == 0x211970u) {
        ctx->pc = 0x211970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21196Cu;
        // 0x211970: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211974u;
        goto label_211974;
    }
    ctx->pc = 0x21196Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211974u);
        ctx->pc = 0x211970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21196Cu;
        // 0x211970: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21196Cu, 0x211974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211974u;
label_211974:
    // 0x211974: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x211974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_211978:
    // 0x211978: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x211978u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_21197c:
    // 0x21197c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_211980:
    if (ctx->pc == 0x211980u) {
        ctx->pc = 0x211984u;
        goto label_211984;
    }
    ctx->pc = 0x21197Cu;
    {
        const bool branch_taken_0x21197c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21197c) {
            ctx->pc = 0x211960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211960;
        }
    }
    ctx->pc = 0x211984u;
label_211984:
    // 0x211984: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x211984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211988:
    // 0x211988: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x211988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_21198c:
    // 0x21198c: 0x24650063  addiu       $a1, $v1, 0x63
    ctx->pc = 0x21198cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 99));
label_211990:
    // 0x211990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211994:
    // 0x211994: 0x260f809  jalr        $s3
label_211998:
    if (ctx->pc == 0x211998u) {
        ctx->pc = 0x211998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211994u;
        // 0x211998: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21199Cu;
        goto label_21199c;
    }
    ctx->pc = 0x211994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21199Cu);
        ctx->pc = 0x211998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211994u;
        // 0x211998: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211994u, 0x21199Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21199Cu;
label_21199c:
    // 0x21199c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21199cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2119a0:
    // 0x2119a0: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x2119a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_2119a4:
    // 0x2119a4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_2119a8:
    if (ctx->pc == 0x2119A8u) {
        ctx->pc = 0x2119ACu;
        goto label_2119ac;
    }
    ctx->pc = 0x2119A4u;
    {
        const bool branch_taken_0x2119a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2119a4) {
            ctx->pc = 0x211988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211988;
        }
    }
    ctx->pc = 0x2119ACu;
label_2119ac:
    // 0x2119ac: 0x17c00023  bnez        $fp, . + 4 + (0x23 << 2)
label_2119b0:
    if (ctx->pc == 0x2119B0u) {
        ctx->pc = 0x2119B4u;
        goto label_2119b4;
    }
    ctx->pc = 0x2119ACu;
    {
        const bool branch_taken_0x2119ac = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x2119ac) {
            ctx->pc = 0x211A3Cu;
            goto label_211a3c;
        }
    }
    ctx->pc = 0x2119B4u;
label_2119b4:
    // 0x2119b4: 0x8e080048  lw          $t0, 0x48($s0)
    ctx->pc = 0x2119b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2119b8:
    // 0x2119b8: 0x3c0363e7  lui         $v1, 0x63E7
    ctx->pc = 0x2119b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25575 << 16));
label_2119bc:
    // 0x2119bc: 0x8f8784d0  lw          $a3, -0x7B30($gp)
    ctx->pc = 0x2119bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935760)));
label_2119c0:
    // 0x2119c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2119c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2119c4:
    // 0x2119c4: 0x3463063f  ori         $v1, $v1, 0x63F
    ctx->pc = 0x2119c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1599);
label_2119c8:
    // 0x2119c8: 0x27a500ae  addiu       $a1, $sp, 0xAE
    ctx->pc = 0x2119c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 174));
label_2119cc:
    // 0x2119cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2119ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2119d0:
    // 0x2119d0: 0x1071023  subu        $v0, $t0, $a3
    ctx->pc = 0x2119d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_2119d4:
    // 0x2119d4: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x2119d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2119d8:
    // 0x2119d8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2119d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_2119dc:
    // 0x2119dc: 0x0  nop
    ctx->pc = 0x2119dcu;
    // NOP
label_2119e0:
    // 0x2119e0: 0x1010  mfhi        $v0
    ctx->pc = 0x2119e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2119e4:
    // 0x2119e4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2119e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_2119e8:
    // 0x2119e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2119e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2119ec:
    // 0x2119ec: 0x260f809  jalr        $s3
label_2119f0:
    if (ctx->pc == 0x2119F0u) {
        ctx->pc = 0x2119F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119ECu;
        // 0x2119f0: 0xa7a200ae  sh          $v0, 0xAE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2119F4u;
        goto label_2119f4;
    }
    ctx->pc = 0x2119ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2119F4u);
        ctx->pc = 0x2119F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119ECu;
        // 0x2119f0: 0xa7a200ae  sh          $v0, 0xAE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2119ECu, 0x2119F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2119F4u;
label_2119f4:
    // 0x2119f4: 0x8e08006c  lw          $t0, 0x6C($s0)
    ctx->pc = 0x2119f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_2119f8:
    // 0x2119f8: 0x3c0363e7  lui         $v1, 0x63E7
    ctx->pc = 0x2119f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25575 << 16));
label_2119fc:
    // 0x2119fc: 0x8f8784d0  lw          $a3, -0x7B30($gp)
    ctx->pc = 0x2119fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935760)));
label_211a00:
    // 0x211a00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211a04:
    // 0x211a04: 0x3463063f  ori         $v1, $v1, 0x63F
    ctx->pc = 0x211a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1599);
label_211a08:
    // 0x211a08: 0x27a500ae  addiu       $a1, $sp, 0xAE
    ctx->pc = 0x211a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 174));
label_211a0c:
    // 0x211a0c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x211a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_211a10:
    // 0x211a10: 0x1071023  subu        $v0, $t0, $a3
    ctx->pc = 0x211a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_211a14:
    // 0x211a14: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x211a14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_211a18:
    // 0x211a18: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x211a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_211a1c:
    // 0x211a1c: 0x0  nop
    ctx->pc = 0x211a1cu;
    // NOP
label_211a20:
    // 0x211a20: 0x1010  mfhi        $v0
    ctx->pc = 0x211a20u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_211a24:
    // 0x211a24: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x211a24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_211a28:
    // 0x211a28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_211a2c:
    // 0x211a2c: 0x260f809  jalr        $s3
label_211a30:
    if (ctx->pc == 0x211A30u) {
        ctx->pc = 0x211A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A2Cu;
        // 0x211a30: 0xa7a200ae  sh          $v0, 0xAE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211A34u;
        goto label_211a34;
    }
    ctx->pc = 0x211A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211A34u);
        ctx->pc = 0x211A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A2Cu;
        // 0x211a30: 0xa7a200ae  sh          $v0, 0xAE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211A2Cu, 0x211A34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211A34u;
label_211a34:
    // 0x211a34: 0x1000001c  b           . + 4 + (0x1C << 2)
label_211a38:
    if (ctx->pc == 0x211A38u) {
        ctx->pc = 0x211A3Cu;
        goto label_211a3c;
    }
    ctx->pc = 0x211A34u;
    {
        const bool branch_taken_0x211a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211a34) {
            ctx->pc = 0x211AA8u;
            goto label_211aa8;
        }
    }
    ctx->pc = 0x211A3Cu;
label_211a3c:
    // 0x211a3c: 0x0  nop
    ctx->pc = 0x211a3cu;
    // NOP
label_211a40:
    // 0x211a40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211a44:
    // 0x211a44: 0x27a500ae  addiu       $a1, $sp, 0xAE
    ctx->pc = 0x211a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 174));
label_211a48:
    // 0x211a48: 0x260f809  jalr        $s3
label_211a4c:
    if (ctx->pc == 0x211A4Cu) {
        ctx->pc = 0x211A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A48u;
        // 0x211a4c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211A50u;
        goto label_211a50;
    }
    ctx->pc = 0x211A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211A50u);
        ctx->pc = 0x211A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A48u;
        // 0x211a4c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211A48u, 0x211A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211A50u;
label_211a50:
    // 0x211a50: 0x87a700ae  lh          $a3, 0xAE($sp)
    ctx->pc = 0x211a50u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 174)));
label_211a54:
    // 0x211a54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211a58:
    // 0x211a58: 0x8f8284d0  lw          $v0, -0x7B30($gp)
    ctx->pc = 0x211a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935760)));
label_211a5c:
    // 0x211a5c: 0x27a500ae  addiu       $a1, $sp, 0xAE
    ctx->pc = 0x211a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 174));
label_211a60:
    // 0x211a60: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x211a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_211a64:
    // 0x211a64: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x211a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_211a68:
    // 0x211a68: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x211a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_211a6c:
    // 0x211a6c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x211a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_211a70:
    // 0x211a70: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x211a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_211a74:
    // 0x211a74: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x211a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_211a78:
    // 0x211a78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x211a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_211a7c:
    // 0x211a7c: 0x260f809  jalr        $s3
label_211a80:
    if (ctx->pc == 0x211A80u) {
        ctx->pc = 0x211A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A7Cu;
        // 0x211a80: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211A84u;
        goto label_211a84;
    }
    ctx->pc = 0x211A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211A84u);
        ctx->pc = 0x211A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A7Cu;
        // 0x211a80: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211A7Cu, 0x211A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211A84u;
label_211a84:
    // 0x211a84: 0x87a500ae  lh          $a1, 0xAE($sp)
    ctx->pc = 0x211a84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 174)));
label_211a88:
    // 0x211a88: 0x8f8384d0  lw          $v1, -0x7B30($gp)
    ctx->pc = 0x211a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935760)));
label_211a8c:
    // 0x211a8c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x211a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_211a90:
    // 0x211a90: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x211a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_211a94:
    // 0x211a94: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x211a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_211a98:
    // 0x211a98: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x211a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_211a9c:
    // 0x211a9c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x211a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_211aa0:
    // 0x211aa0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x211aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_211aa4:
    // 0x211aa4: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x211aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
label_211aa8:
    // 0x211aa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211aac:
    // 0x211aac: 0x2605004c  addiu       $a1, $s0, 0x4C
    ctx->pc = 0x211aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
label_211ab0:
    // 0x211ab0: 0x260f809  jalr        $s3
label_211ab4:
    if (ctx->pc == 0x211AB4u) {
        ctx->pc = 0x211AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211AB0u;
        // 0x211ab4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211AB8u;
        goto label_211ab8;
    }
    ctx->pc = 0x211AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211AB8u);
        ctx->pc = 0x211AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211AB0u;
        // 0x211ab4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211AB0u, 0x211AB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211AB8u;
label_211ab8:
    // 0x211ab8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211abc:
    // 0x211abc: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x211abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_211ac0:
    // 0x211ac0: 0x260f809  jalr        $s3
label_211ac4:
    if (ctx->pc == 0x211AC4u) {
        ctx->pc = 0x211AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211AC0u;
        // 0x211ac4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211AC8u;
        goto label_211ac8;
    }
    ctx->pc = 0x211AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211AC8u);
        ctx->pc = 0x211AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211AC0u;
        // 0x211ac4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211AC0u, 0x211AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211AC8u;
label_211ac8:
    // 0x211ac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211acc:
    // 0x211acc: 0x26050054  addiu       $a1, $s0, 0x54
    ctx->pc = 0x211accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_211ad0:
    // 0x211ad0: 0x260f809  jalr        $s3
label_211ad4:
    if (ctx->pc == 0x211AD4u) {
        ctx->pc = 0x211AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211AD0u;
        // 0x211ad4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211AD8u;
        goto label_211ad8;
    }
    ctx->pc = 0x211AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211AD8u);
        ctx->pc = 0x211AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211AD0u;
        // 0x211ad4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211AD0u, 0x211AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211AD8u;
label_211ad8:
    // 0x211ad8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211adc:
    // 0x211adc: 0x26050058  addiu       $a1, $s0, 0x58
    ctx->pc = 0x211adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_211ae0:
    // 0x211ae0: 0x260f809  jalr        $s3
label_211ae4:
    if (ctx->pc == 0x211AE4u) {
        ctx->pc = 0x211AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211AE0u;
        // 0x211ae4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211AE8u;
        goto label_211ae8;
    }
    ctx->pc = 0x211AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211AE8u);
        ctx->pc = 0x211AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211AE0u;
        // 0x211ae4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211AE0u, 0x211AE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211AE8u;
label_211ae8:
    // 0x211ae8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211aec:
    // 0x211aec: 0x26050059  addiu       $a1, $s0, 0x59
    ctx->pc = 0x211aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 89));
label_211af0:
    // 0x211af0: 0x260f809  jalr        $s3
label_211af4:
    if (ctx->pc == 0x211AF4u) {
        ctx->pc = 0x211AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211AF0u;
        // 0x211af4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211AF8u;
        goto label_211af8;
    }
    ctx->pc = 0x211AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211AF8u);
        ctx->pc = 0x211AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211AF0u;
        // 0x211af4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211AF0u, 0x211AF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211AF8u;
label_211af8:
    // 0x211af8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211afc:
    // 0x211afc: 0x2605005a  addiu       $a1, $s0, 0x5A
    ctx->pc = 0x211afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 90));
label_211b00:
    // 0x211b00: 0x260f809  jalr        $s3
label_211b04:
    if (ctx->pc == 0x211B04u) {
        ctx->pc = 0x211B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B00u;
        // 0x211b04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211B08u;
        goto label_211b08;
    }
    ctx->pc = 0x211B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211B08u);
        ctx->pc = 0x211B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B00u;
        // 0x211b04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211B00u, 0x211B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211B08u;
label_211b08:
    // 0x211b08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211b0c:
    // 0x211b0c: 0x2605005b  addiu       $a1, $s0, 0x5B
    ctx->pc = 0x211b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 91));
    ctx->pc = 0x211b10u;
    return;
}
