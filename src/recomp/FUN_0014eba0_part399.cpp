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


void FUN_0014eba0_part399(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x211100u: goto label_211100;
        case 0x211104u: goto label_211104;
        case 0x211108u: goto label_211108;
        case 0x21110cu: goto label_21110c;
        case 0x211110u: goto label_211110;
        case 0x211114u: goto label_211114;
        case 0x211118u: goto label_211118;
        case 0x21111cu: goto label_21111c;
        case 0x211120u: goto label_211120;
        case 0x211124u: goto label_211124;
        case 0x211128u: goto label_211128;
        case 0x21112cu: goto label_21112c;
        case 0x211130u: goto label_211130;
        case 0x211134u: goto label_211134;
        case 0x211138u: goto label_211138;
        case 0x21113cu: goto label_21113c;
        case 0x211140u: goto label_211140;
        case 0x211144u: goto label_211144;
        case 0x211148u: goto label_211148;
        case 0x21114cu: goto label_21114c;
        case 0x211150u: goto label_211150;
        case 0x211154u: goto label_211154;
        case 0x211158u: goto label_211158;
        case 0x21115cu: goto label_21115c;
        case 0x211160u: goto label_211160;
        case 0x211164u: goto label_211164;
        case 0x211168u: goto label_211168;
        case 0x21116cu: goto label_21116c;
        case 0x211170u: goto label_211170;
        case 0x211174u: goto label_211174;
        case 0x211178u: goto label_211178;
        case 0x21117cu: goto label_21117c;
        case 0x211180u: goto label_211180;
        case 0x211184u: goto label_211184;
        case 0x211188u: goto label_211188;
        case 0x21118cu: goto label_21118c;
        case 0x211190u: goto label_211190;
        case 0x211194u: goto label_211194;
        case 0x211198u: goto label_211198;
        case 0x21119cu: goto label_21119c;
        case 0x2111a0u: goto label_2111a0;
        case 0x2111a4u: goto label_2111a4;
        case 0x2111a8u: goto label_2111a8;
        case 0x2111acu: goto label_2111ac;
        case 0x2111b0u: goto label_2111b0;
        case 0x2111b4u: goto label_2111b4;
        case 0x2111b8u: goto label_2111b8;
        case 0x2111bcu: goto label_2111bc;
        case 0x2111c0u: goto label_2111c0;
        case 0x2111c4u: goto label_2111c4;
        case 0x2111c8u: goto label_2111c8;
        case 0x2111ccu: goto label_2111cc;
        case 0x2111d0u: goto label_2111d0;
        case 0x2111d4u: goto label_2111d4;
        case 0x2111d8u: goto label_2111d8;
        case 0x2111dcu: goto label_2111dc;
        case 0x2111e0u: goto label_2111e0;
        case 0x2111e4u: goto label_2111e4;
        case 0x2111e8u: goto label_2111e8;
        case 0x2111ecu: goto label_2111ec;
        case 0x2111f0u: goto label_2111f0;
        case 0x2111f4u: goto label_2111f4;
        case 0x2111f8u: goto label_2111f8;
        case 0x2111fcu: goto label_2111fc;
        case 0x211200u: goto label_211200;
        case 0x211204u: goto label_211204;
        case 0x211208u: goto label_211208;
        case 0x21120cu: goto label_21120c;
        case 0x211210u: goto label_211210;
        case 0x211214u: goto label_211214;
        case 0x211218u: goto label_211218;
        case 0x21121cu: goto label_21121c;
        case 0x211220u: goto label_211220;
        case 0x211224u: goto label_211224;
        case 0x211228u: goto label_211228;
        case 0x21122cu: goto label_21122c;
        case 0x211230u: goto label_211230;
        case 0x211234u: goto label_211234;
        case 0x211238u: goto label_211238;
        case 0x21123cu: goto label_21123c;
        case 0x211240u: goto label_211240;
        case 0x211244u: goto label_211244;
        case 0x211248u: goto label_211248;
        case 0x21124cu: goto label_21124c;
        case 0x211250u: goto label_211250;
        case 0x211254u: goto label_211254;
        case 0x211258u: goto label_211258;
        case 0x21125cu: goto label_21125c;
        case 0x211260u: goto label_211260;
        case 0x211264u: goto label_211264;
        case 0x211268u: goto label_211268;
        case 0x21126cu: goto label_21126c;
        case 0x211270u: goto label_211270;
        case 0x211274u: goto label_211274;
        case 0x211278u: goto label_211278;
        case 0x21127cu: goto label_21127c;
        case 0x211280u: goto label_211280;
        case 0x211284u: goto label_211284;
        case 0x211288u: goto label_211288;
        case 0x21128cu: goto label_21128c;
        case 0x211290u: goto label_211290;
        case 0x211294u: goto label_211294;
        case 0x211298u: goto label_211298;
        case 0x21129cu: goto label_21129c;
        case 0x2112a0u: goto label_2112a0;
        case 0x2112a4u: goto label_2112a4;
        case 0x2112a8u: goto label_2112a8;
        case 0x2112acu: goto label_2112ac;
        case 0x2112b0u: goto label_2112b0;
        case 0x2112b4u: goto label_2112b4;
        case 0x2112b8u: goto label_2112b8;
        case 0x2112bcu: goto label_2112bc;
        case 0x2112c0u: goto label_2112c0;
        case 0x2112c4u: goto label_2112c4;
        case 0x2112c8u: goto label_2112c8;
        case 0x2112ccu: goto label_2112cc;
        case 0x2112d0u: goto label_2112d0;
        case 0x2112d4u: goto label_2112d4;
        case 0x2112d8u: goto label_2112d8;
        case 0x2112dcu: goto label_2112dc;
        case 0x2112e0u: goto label_2112e0;
        case 0x2112e4u: goto label_2112e4;
        case 0x2112e8u: goto label_2112e8;
        case 0x2112ecu: goto label_2112ec;
        case 0x2112f0u: goto label_2112f0;
        case 0x2112f4u: goto label_2112f4;
        case 0x2112f8u: goto label_2112f8;
        case 0x2112fcu: goto label_2112fc;
        case 0x211300u: goto label_211300;
        case 0x211304u: goto label_211304;
        case 0x211308u: goto label_211308;
        case 0x21130cu: goto label_21130c;
        case 0x211310u: goto label_211310;
        case 0x211314u: goto label_211314;
        case 0x211318u: goto label_211318;
        case 0x21131cu: goto label_21131c;
        case 0x211320u: goto label_211320;
        case 0x211324u: goto label_211324;
        case 0x211328u: goto label_211328;
        case 0x21132cu: goto label_21132c;
        case 0x211330u: goto label_211330;
        case 0x211334u: goto label_211334;
        case 0x211338u: goto label_211338;
        case 0x21133cu: goto label_21133c;
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
        default: return;
    }

label_211100:
    // 0x211100: 0x260f809  jalr        $s3
label_211104:
    if (ctx->pc == 0x211104u) {
        ctx->pc = 0x211104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211100u;
        // 0x211104: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211108u;
        goto label_211108;
    }
    ctx->pc = 0x211100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211108u);
        ctx->pc = 0x211104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211100u;
        // 0x211104: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211100u, 0x211108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211108u;
label_211108:
    // 0x211108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21110c:
    // 0x21110c: 0x26250006  addiu       $a1, $s1, 0x6
    ctx->pc = 0x21110cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
label_211110:
    // 0x211110: 0x260f809  jalr        $s3
label_211114:
    if (ctx->pc == 0x211114u) {
        ctx->pc = 0x211114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211110u;
        // 0x211114: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211118u;
        goto label_211118;
    }
    ctx->pc = 0x211110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211118u);
        ctx->pc = 0x211114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211110u;
        // 0x211114: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211110u, 0x211118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211118u;
label_211118:
    // 0x211118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21111c:
    // 0x21111c: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x21111cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_211120:
    // 0x211120: 0x260f809  jalr        $s3
label_211124:
    if (ctx->pc == 0x211124u) {
        ctx->pc = 0x211124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211120u;
        // 0x211124: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211128u;
        goto label_211128;
    }
    ctx->pc = 0x211120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211128u);
        ctx->pc = 0x211124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211120u;
        // 0x211124: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211120u, 0x211128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211128u;
label_211128:
    // 0x211128: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21112c:
    // 0x21112c: 0x2625000a  addiu       $a1, $s1, 0xA
    ctx->pc = 0x21112cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
label_211130:
    // 0x211130: 0x260f809  jalr        $s3
label_211134:
    if (ctx->pc == 0x211134u) {
        ctx->pc = 0x211134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211130u;
        // 0x211134: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211138u;
        goto label_211138;
    }
    ctx->pc = 0x211130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211138u);
        ctx->pc = 0x211134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211130u;
        // 0x211134: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211130u, 0x211138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211138u;
label_211138:
    // 0x211138: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21113c:
    // 0x21113c: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x21113cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_211140:
    // 0x211140: 0x260f809  jalr        $s3
label_211144:
    if (ctx->pc == 0x211144u) {
        ctx->pc = 0x211144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211140u;
        // 0x211144: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211148u;
        goto label_211148;
    }
    ctx->pc = 0x211140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211148u);
        ctx->pc = 0x211144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211140u;
        // 0x211144: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211140u, 0x211148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211148u;
label_211148:
    // 0x211148: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21114c:
    // 0x21114c: 0x2625000e  addiu       $a1, $s1, 0xE
    ctx->pc = 0x21114cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
label_211150:
    // 0x211150: 0x260f809  jalr        $s3
label_211154:
    if (ctx->pc == 0x211154u) {
        ctx->pc = 0x211154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211150u;
        // 0x211154: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211158u;
        goto label_211158;
    }
    ctx->pc = 0x211150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211158u);
        ctx->pc = 0x211154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211150u;
        // 0x211154: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211150u, 0x211158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211158u;
label_211158:
    // 0x211158: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21115c:
    // 0x21115c: 0x2625000f  addiu       $a1, $s1, 0xF
    ctx->pc = 0x21115cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
label_211160:
    // 0x211160: 0x260f809  jalr        $s3
label_211164:
    if (ctx->pc == 0x211164u) {
        ctx->pc = 0x211164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211160u;
        // 0x211164: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211168u;
        goto label_211168;
    }
    ctx->pc = 0x211160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211168u);
        ctx->pc = 0x211164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211160u;
        // 0x211164: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211160u, 0x211168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211168u;
label_211168:
    // 0x211168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21116c:
    // 0x21116c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x21116cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_211170:
    // 0x211170: 0x260f809  jalr        $s3
label_211174:
    if (ctx->pc == 0x211174u) {
        ctx->pc = 0x211174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211170u;
        // 0x211174: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211178u;
        goto label_211178;
    }
    ctx->pc = 0x211170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211178u);
        ctx->pc = 0x211174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211170u;
        // 0x211174: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211170u, 0x211178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211178u;
label_211178:
    // 0x211178: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21117c:
    // 0x21117c: 0x26250011  addiu       $a1, $s1, 0x11
    ctx->pc = 0x21117cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 17));
label_211180:
    // 0x211180: 0x260f809  jalr        $s3
label_211184:
    if (ctx->pc == 0x211184u) {
        ctx->pc = 0x211184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211180u;
        // 0x211184: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211188u;
        goto label_211188;
    }
    ctx->pc = 0x211180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211188u);
        ctx->pc = 0x211184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211180u;
        // 0x211184: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211180u, 0x211188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211188u;
label_211188:
    // 0x211188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21118c:
    // 0x21118c: 0x26250012  addiu       $a1, $s1, 0x12
    ctx->pc = 0x21118cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
label_211190:
    // 0x211190: 0x260f809  jalr        $s3
label_211194:
    if (ctx->pc == 0x211194u) {
        ctx->pc = 0x211194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211190u;
        // 0x211194: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211198u;
        goto label_211198;
    }
    ctx->pc = 0x211190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211198u);
        ctx->pc = 0x211194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211190u;
        // 0x211194: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211190u, 0x211198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211198u;
label_211198:
    // 0x211198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21119c:
    // 0x21119c: 0x26250013  addiu       $a1, $s1, 0x13
    ctx->pc = 0x21119cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 19));
label_2111a0:
    // 0x2111a0: 0x260f809  jalr        $s3
label_2111a4:
    if (ctx->pc == 0x2111A4u) {
        ctx->pc = 0x2111A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111A0u;
        // 0x2111a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2111A8u;
        goto label_2111a8;
    }
    ctx->pc = 0x2111A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2111A8u);
        ctx->pc = 0x2111A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111A0u;
        // 0x2111a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2111A0u, 0x2111A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2111A8u;
label_2111a8:
    // 0x2111a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2111a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2111ac:
    // 0x2111ac: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x2111acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_2111b0:
    // 0x2111b0: 0x260f809  jalr        $s3
label_2111b4:
    if (ctx->pc == 0x2111B4u) {
        ctx->pc = 0x2111B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111B0u;
        // 0x2111b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2111B8u;
        goto label_2111b8;
    }
    ctx->pc = 0x2111B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2111B8u);
        ctx->pc = 0x2111B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111B0u;
        // 0x2111b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2111B0u, 0x2111B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2111B8u;
label_2111b8:
    // 0x2111b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2111b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2111bc:
    // 0x2111bc: 0x26250015  addiu       $a1, $s1, 0x15
    ctx->pc = 0x2111bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 21));
label_2111c0:
    // 0x2111c0: 0x260f809  jalr        $s3
label_2111c4:
    if (ctx->pc == 0x2111C4u) {
        ctx->pc = 0x2111C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111C0u;
        // 0x2111c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2111C8u;
        goto label_2111c8;
    }
    ctx->pc = 0x2111C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2111C8u);
        ctx->pc = 0x2111C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111C0u;
        // 0x2111c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2111C0u, 0x2111C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2111C8u;
label_2111c8:
    // 0x2111c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2111c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2111cc:
    // 0x2111cc: 0x26250016  addiu       $a1, $s1, 0x16
    ctx->pc = 0x2111ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 22));
label_2111d0:
    // 0x2111d0: 0x260f809  jalr        $s3
label_2111d4:
    if (ctx->pc == 0x2111D4u) {
        ctx->pc = 0x2111D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111D0u;
        // 0x2111d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2111D8u;
        goto label_2111d8;
    }
    ctx->pc = 0x2111D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2111D8u);
        ctx->pc = 0x2111D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111D0u;
        // 0x2111d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2111D0u, 0x2111D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2111D8u;
label_2111d8:
    // 0x2111d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2111d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2111dc:
    // 0x2111dc: 0x26250017  addiu       $a1, $s1, 0x17
    ctx->pc = 0x2111dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 23));
label_2111e0:
    // 0x2111e0: 0x260f809  jalr        $s3
label_2111e4:
    if (ctx->pc == 0x2111E4u) {
        ctx->pc = 0x2111E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111E0u;
        // 0x2111e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2111E8u;
        goto label_2111e8;
    }
    ctx->pc = 0x2111E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2111E8u);
        ctx->pc = 0x2111E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111E0u;
        // 0x2111e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2111E0u, 0x2111E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2111E8u;
label_2111e8:
    // 0x2111e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2111e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2111ec:
    // 0x2111ec: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x2111ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_2111f0:
    // 0x2111f0: 0x260f809  jalr        $s3
label_2111f4:
    if (ctx->pc == 0x2111F4u) {
        ctx->pc = 0x2111F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111F0u;
        // 0x2111f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2111F8u;
        goto label_2111f8;
    }
    ctx->pc = 0x2111F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2111F8u);
        ctx->pc = 0x2111F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111F0u;
        // 0x2111f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2111F0u, 0x2111F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2111F8u;
label_2111f8:
    // 0x2111f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2111f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2111fc:
    // 0x2111fc: 0x2625001a  addiu       $a1, $s1, 0x1A
    ctx->pc = 0x2111fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 26));
label_211200:
    // 0x211200: 0x260f809  jalr        $s3
label_211204:
    if (ctx->pc == 0x211204u) {
        ctx->pc = 0x211204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211200u;
        // 0x211204: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211208u;
        goto label_211208;
    }
    ctx->pc = 0x211200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211208u);
        ctx->pc = 0x211204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211200u;
        // 0x211204: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211200u, 0x211208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211208u;
label_211208:
    // 0x211208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21120c:
    // 0x21120c: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x21120cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_211210:
    // 0x211210: 0x260f809  jalr        $s3
label_211214:
    if (ctx->pc == 0x211214u) {
        ctx->pc = 0x211214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211210u;
        // 0x211214: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211218u;
        goto label_211218;
    }
    ctx->pc = 0x211210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211218u);
        ctx->pc = 0x211214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211210u;
        // 0x211214: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211210u, 0x211218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211218u;
label_211218:
    // 0x211218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21121c:
    // 0x21121c: 0x2625001e  addiu       $a1, $s1, 0x1E
    ctx->pc = 0x21121cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 30));
label_211220:
    // 0x211220: 0x260f809  jalr        $s3
label_211224:
    if (ctx->pc == 0x211224u) {
        ctx->pc = 0x211224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211220u;
        // 0x211224: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211228u;
        goto label_211228;
    }
    ctx->pc = 0x211220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211228u);
        ctx->pc = 0x211224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211220u;
        // 0x211224: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211220u, 0x211228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211228u;
label_211228:
    // 0x211228: 0x17c00010  bnez        $fp, . + 4 + (0x10 << 2)
label_21122c:
    if (ctx->pc == 0x21122Cu) {
        ctx->pc = 0x211230u;
        goto label_211230;
    }
    ctx->pc = 0x211228u;
    {
        const bool branch_taken_0x211228 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x211228) {
            ctx->pc = 0x21126Cu;
            goto label_21126c;
        }
    }
    ctx->pc = 0x211230u;
label_211230:
    // 0x211230: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x211230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_211234:
    // 0x211234: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x211234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
label_211238:
    // 0x211238: 0x2463b4e0  addiu       $v1, $v1, -0x4B20
    ctx->pc = 0x211238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948064));
label_21123c:
    // 0x21123c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x21123cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_211240:
    // 0x211240: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_211244:
    if (ctx->pc == 0x211244u) {
        ctx->pc = 0x211244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211240u;
        // 0x211244: 0x41943  sra         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211248u;
        goto label_211248;
    }
    ctx->pc = 0x211240u;
    {
        const bool branch_taken_0x211240 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x211244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211240u;
        // 0x211244: 0x41943  sra         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211240) {
            ctx->pc = 0x211250u;
            goto label_211250;
        }
    }
    ctx->pc = 0x211248u;
label_211248:
    // 0x211248: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x211248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
label_21124c:
    // 0x21124c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x21124cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_211250:
    // 0x211250: 0xa7a300ae  sh          $v1, 0xAE($sp)
    ctx->pc = 0x211250u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 3));
label_211254:
    // 0x211254: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211258:
    // 0x211258: 0x27a500ae  addiu       $a1, $sp, 0xAE
    ctx->pc = 0x211258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 174));
label_21125c:
    // 0x21125c: 0x260f809  jalr        $s3
label_211260:
    if (ctx->pc == 0x211260u) {
        ctx->pc = 0x211260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21125Cu;
        // 0x211260: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211264u;
        goto label_211264;
    }
    ctx->pc = 0x21125Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211264u);
        ctx->pc = 0x211260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21125Cu;
        // 0x211260: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21125Cu, 0x211264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211264u;
label_211264:
    // 0x211264: 0x1000001d  b           . + 4 + (0x1D << 2)
label_211268:
    if (ctx->pc == 0x211268u) {
        ctx->pc = 0x21126Cu;
        goto label_21126c;
    }
    ctx->pc = 0x211264u;
    {
        const bool branch_taken_0x211264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211264) {
            ctx->pc = 0x2112DCu;
            goto label_2112dc;
        }
    }
    ctx->pc = 0x21126Cu;
label_21126c:
    // 0x21126c: 0x0  nop
    ctx->pc = 0x21126cu;
    // NOP
label_211270:
    // 0x211270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211274:
    // 0x211274: 0x27a500ae  addiu       $a1, $sp, 0xAE
    ctx->pc = 0x211274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 174));
label_211278:
    // 0x211278: 0x260f809  jalr        $s3
label_21127c:
    if (ctx->pc == 0x21127Cu) {
        ctx->pc = 0x21127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211278u;
        // 0x21127c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211280u;
        goto label_211280;
    }
    ctx->pc = 0x211278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211280u);
        ctx->pc = 0x21127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211278u;
        // 0x21127c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211278u, 0x211280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211280u;
label_211280:
    // 0x211280: 0x87a700ae  lh          $a3, 0xAE($sp)
    ctx->pc = 0x211280u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 174)));
label_211284:
    // 0x211284: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x211284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
label_211288:
    // 0x211288: 0x34848081  ori         $a0, $a0, 0x8081
    ctx->pc = 0x211288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32897);
label_21128c:
    // 0x21128c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x21128cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
label_211290:
    // 0x211290: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x211290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_211294:
    // 0x211294: 0x2463b4e0  addiu       $v1, $v1, -0x4B20
    ctx->pc = 0x211294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948064));
label_211298:
    // 0x211298: 0x870018  mult        $zero, $a0, $a3
    ctx->pc = 0x211298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21129c:
    // 0x21129c: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x21129cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_2112a0:
    // 0x2112a0: 0x0  nop
    ctx->pc = 0x2112a0u;
    // NOP
label_2112a4:
    // 0x2112a4: 0x2010  mfhi        $a0
    ctx->pc = 0x2112a4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2112a8:
    // 0x2112a8: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x2112a8u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2112ac:
    // 0x2112ac: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2112acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2112b0:
    // 0x2112b0: 0x421c3  sra         $a0, $a0, 7
    ctx->pc = 0x2112b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 7));
label_2112b4:
    // 0x2112b4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2112b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2112b8:
    // 0x2112b8: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x2112b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_2112bc:
    // 0x2112bc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2112bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2112c0:
    // 0x2112c0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2112c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2112c4:
    // 0x2112c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2112c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2112c8:
    // 0x2112c8: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x2112c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_2112cc:
    // 0x2112cc: 0x2010  mfhi        $a0
    ctx->pc = 0x2112ccu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2112d0:
    // 0x2112d0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2112d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2112d4:
    // 0x2112d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2112d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2112d8:
    // 0x2112d8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2112d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2112dc:
    // 0x2112dc: 0x0  nop
    ctx->pc = 0x2112dcu;
    // NOP
label_2112e0:
    // 0x2112e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2112e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2112e4:
    // 0x2112e4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2112e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2112e8:
    // 0x2112e8: 0x255a021  addu        $s4, $s2, $s5
    ctx->pc = 0x2112e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2112ec:
    // 0x2112ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2112ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2112f0:
    // 0x2112f0: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x2112f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_2112f4:
    // 0x2112f4: 0x260f809  jalr        $s3
label_2112f8:
    if (ctx->pc == 0x2112F8u) {
        ctx->pc = 0x2112F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2112F4u;
        // 0x2112f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2112FCu;
        goto label_2112fc;
    }
    ctx->pc = 0x2112F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2112FCu);
        ctx->pc = 0x2112F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2112F4u;
        // 0x2112f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2112F4u, 0x2112FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2112FCu;
label_2112fc:
    // 0x2112fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2112fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211300:
    // 0x211300: 0x2685000c  addiu       $a1, $s4, 0xC
    ctx->pc = 0x211300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_211304:
    // 0x211304: 0x260f809  jalr        $s3
label_211308:
    if (ctx->pc == 0x211308u) {
        ctx->pc = 0x211308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211304u;
        // 0x211308: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21130Cu;
        goto label_21130c;
    }
    ctx->pc = 0x211304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21130Cu);
        ctx->pc = 0x211308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211304u;
        // 0x211308: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211304u, 0x21130Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21130Cu;
label_21130c:
    // 0x21130c: 0x26850014  addiu       $a1, $s4, 0x14
    ctx->pc = 0x21130cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_211310:
    // 0x211310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211314:
    // 0x211314: 0x260f809  jalr        $s3
label_211318:
    if (ctx->pc == 0x211318u) {
        ctx->pc = 0x211318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211314u;
        // 0x211318: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21131Cu;
        goto label_21131c;
    }
    ctx->pc = 0x211314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x21131Cu);
        ctx->pc = 0x211318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211314u;
        // 0x211318: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211314u, 0x21131Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21131Cu;
label_21131c:
    // 0x21131c: 0x250a021  addu        $s4, $s2, $s0
    ctx->pc = 0x21131cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_211320:
    // 0x211320: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211324:
    // 0x211324: 0x26850022  addiu       $a1, $s4, 0x22
    ctx->pc = 0x211324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 34));
label_211328:
    // 0x211328: 0x260f809  jalr        $s3
label_21132c:
    if (ctx->pc == 0x21132Cu) {
        ctx->pc = 0x21132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211328u;
        // 0x21132c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211330u;
        goto label_211330;
    }
    ctx->pc = 0x211328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211330u);
        ctx->pc = 0x21132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211328u;
        // 0x21132c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211328u, 0x211330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211330u;
label_211330:
    // 0x211330: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211334:
    // 0x211334: 0x26850024  addiu       $a1, $s4, 0x24
    ctx->pc = 0x211334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
label_211338:
    // 0x211338: 0x260f809  jalr        $s3
label_21133c:
    if (ctx->pc == 0x21133Cu) {
        ctx->pc = 0x21133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211338u;
        // 0x21133c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211340u;
        goto label_211340;
    }
    ctx->pc = 0x211338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x211340u);
        ctx->pc = 0x21133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211338u;
        // 0x21133c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211338u, 0x211340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211340u;
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
            goto label_2112e8;
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
    ctx->pc = 0x2118d0u;
    return;
}
