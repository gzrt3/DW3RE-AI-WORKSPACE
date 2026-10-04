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


void FUN_0014eba0_part45(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x164360u: goto label_164360;
        case 0x164364u: goto label_164364;
        case 0x164368u: goto label_164368;
        case 0x16436cu: goto label_16436c;
        case 0x164370u: goto label_164370;
        case 0x164374u: goto label_164374;
        case 0x164378u: goto label_164378;
        case 0x16437cu: goto label_16437c;
        case 0x164380u: goto label_164380;
        case 0x164384u: goto label_164384;
        case 0x164388u: goto label_164388;
        case 0x16438cu: goto label_16438c;
        case 0x164390u: goto label_164390;
        case 0x164394u: goto label_164394;
        case 0x164398u: goto label_164398;
        case 0x16439cu: goto label_16439c;
        case 0x1643a0u: goto label_1643a0;
        case 0x1643a4u: goto label_1643a4;
        case 0x1643a8u: goto label_1643a8;
        case 0x1643acu: goto label_1643ac;
        case 0x1643b0u: goto label_1643b0;
        case 0x1643b4u: goto label_1643b4;
        case 0x1643b8u: goto label_1643b8;
        case 0x1643bcu: goto label_1643bc;
        case 0x1643c0u: goto label_1643c0;
        case 0x1643c4u: goto label_1643c4;
        case 0x1643c8u: goto label_1643c8;
        case 0x1643ccu: goto label_1643cc;
        case 0x1643d0u: goto label_1643d0;
        case 0x1643d4u: goto label_1643d4;
        case 0x1643d8u: goto label_1643d8;
        case 0x1643dcu: goto label_1643dc;
        case 0x1643e0u: goto label_1643e0;
        case 0x1643e4u: goto label_1643e4;
        case 0x1643e8u: goto label_1643e8;
        case 0x1643ecu: goto label_1643ec;
        case 0x1643f0u: goto label_1643f0;
        case 0x1643f4u: goto label_1643f4;
        case 0x1643f8u: goto label_1643f8;
        case 0x1643fcu: goto label_1643fc;
        case 0x164400u: goto label_164400;
        case 0x164404u: goto label_164404;
        case 0x164408u: goto label_164408;
        case 0x16440cu: goto label_16440c;
        case 0x164410u: goto label_164410;
        case 0x164414u: goto label_164414;
        case 0x164418u: goto label_164418;
        case 0x16441cu: goto label_16441c;
        case 0x164420u: goto label_164420;
        case 0x164424u: goto label_164424;
        case 0x164428u: goto label_164428;
        case 0x16442cu: goto label_16442c;
        case 0x164430u: goto label_164430;
        case 0x164434u: goto label_164434;
        case 0x164438u: goto label_164438;
        case 0x16443cu: goto label_16443c;
        case 0x164440u: goto label_164440;
        case 0x164444u: goto label_164444;
        case 0x164448u: goto label_164448;
        case 0x16444cu: goto label_16444c;
        case 0x164450u: goto label_164450;
        case 0x164454u: goto label_164454;
        case 0x164458u: goto label_164458;
        case 0x16445cu: goto label_16445c;
        case 0x164460u: goto label_164460;
        case 0x164464u: goto label_164464;
        case 0x164468u: goto label_164468;
        case 0x16446cu: goto label_16446c;
        case 0x164470u: goto label_164470;
        case 0x164474u: goto label_164474;
        case 0x164478u: goto label_164478;
        case 0x16447cu: goto label_16447c;
        case 0x164480u: goto label_164480;
        case 0x164484u: goto label_164484;
        case 0x164488u: goto label_164488;
        case 0x16448cu: goto label_16448c;
        case 0x164490u: goto label_164490;
        case 0x164494u: goto label_164494;
        case 0x164498u: goto label_164498;
        case 0x16449cu: goto label_16449c;
        case 0x1644a0u: goto label_1644a0;
        case 0x1644a4u: goto label_1644a4;
        case 0x1644a8u: goto label_1644a8;
        case 0x1644acu: goto label_1644ac;
        case 0x1644b0u: goto label_1644b0;
        case 0x1644b4u: goto label_1644b4;
        case 0x1644b8u: goto label_1644b8;
        case 0x1644bcu: goto label_1644bc;
        case 0x1644c0u: goto label_1644c0;
        case 0x1644c4u: goto label_1644c4;
        case 0x1644c8u: goto label_1644c8;
        case 0x1644ccu: goto label_1644cc;
        case 0x1644d0u: goto label_1644d0;
        case 0x1644d4u: goto label_1644d4;
        case 0x1644d8u: goto label_1644d8;
        case 0x1644dcu: goto label_1644dc;
        case 0x1644e0u: goto label_1644e0;
        case 0x1644e4u: goto label_1644e4;
        case 0x1644e8u: goto label_1644e8;
        case 0x1644ecu: goto label_1644ec;
        case 0x1644f0u: goto label_1644f0;
        case 0x1644f4u: goto label_1644f4;
        case 0x1644f8u: goto label_1644f8;
        case 0x1644fcu: goto label_1644fc;
        case 0x164500u: goto label_164500;
        case 0x164504u: goto label_164504;
        case 0x164508u: goto label_164508;
        case 0x16450cu: goto label_16450c;
        case 0x164510u: goto label_164510;
        case 0x164514u: goto label_164514;
        case 0x164518u: goto label_164518;
        case 0x16451cu: goto label_16451c;
        case 0x164520u: goto label_164520;
        case 0x164524u: goto label_164524;
        case 0x164528u: goto label_164528;
        case 0x16452cu: goto label_16452c;
        case 0x164530u: goto label_164530;
        case 0x164534u: goto label_164534;
        case 0x164538u: goto label_164538;
        case 0x16453cu: goto label_16453c;
        case 0x164540u: goto label_164540;
        case 0x164544u: goto label_164544;
        case 0x164548u: goto label_164548;
        case 0x16454cu: goto label_16454c;
        case 0x164550u: goto label_164550;
        case 0x164554u: goto label_164554;
        case 0x164558u: goto label_164558;
        case 0x16455cu: goto label_16455c;
        case 0x164560u: goto label_164560;
        case 0x164564u: goto label_164564;
        case 0x164568u: goto label_164568;
        case 0x16456cu: goto label_16456c;
        case 0x164570u: goto label_164570;
        case 0x164574u: goto label_164574;
        case 0x164578u: goto label_164578;
        case 0x16457cu: goto label_16457c;
        case 0x164580u: goto label_164580;
        case 0x164584u: goto label_164584;
        case 0x164588u: goto label_164588;
        case 0x16458cu: goto label_16458c;
        case 0x164590u: goto label_164590;
        case 0x164594u: goto label_164594;
        case 0x164598u: goto label_164598;
        case 0x16459cu: goto label_16459c;
        case 0x1645a0u: goto label_1645a0;
        case 0x1645a4u: goto label_1645a4;
        case 0x1645a8u: goto label_1645a8;
        case 0x1645acu: goto label_1645ac;
        case 0x1645b0u: goto label_1645b0;
        case 0x1645b4u: goto label_1645b4;
        case 0x1645b8u: goto label_1645b8;
        case 0x1645bcu: goto label_1645bc;
        case 0x1645c0u: goto label_1645c0;
        case 0x1645c4u: goto label_1645c4;
        case 0x1645c8u: goto label_1645c8;
        case 0x1645ccu: goto label_1645cc;
        case 0x1645d0u: goto label_1645d0;
        case 0x1645d4u: goto label_1645d4;
        case 0x1645d8u: goto label_1645d8;
        case 0x1645dcu: goto label_1645dc;
        case 0x1645e0u: goto label_1645e0;
        case 0x1645e4u: goto label_1645e4;
        case 0x1645e8u: goto label_1645e8;
        case 0x1645ecu: goto label_1645ec;
        case 0x1645f0u: goto label_1645f0;
        case 0x1645f4u: goto label_1645f4;
        case 0x1645f8u: goto label_1645f8;
        case 0x1645fcu: goto label_1645fc;
        case 0x164600u: goto label_164600;
        case 0x164604u: goto label_164604;
        case 0x164608u: goto label_164608;
        case 0x16460cu: goto label_16460c;
        case 0x164610u: goto label_164610;
        case 0x164614u: goto label_164614;
        case 0x164618u: goto label_164618;
        case 0x16461cu: goto label_16461c;
        case 0x164620u: goto label_164620;
        case 0x164624u: goto label_164624;
        case 0x164628u: goto label_164628;
        case 0x16462cu: goto label_16462c;
        case 0x164630u: goto label_164630;
        case 0x164634u: goto label_164634;
        case 0x164638u: goto label_164638;
        case 0x16463cu: goto label_16463c;
        case 0x164640u: goto label_164640;
        case 0x164644u: goto label_164644;
        case 0x164648u: goto label_164648;
        case 0x16464cu: goto label_16464c;
        case 0x164650u: goto label_164650;
        case 0x164654u: goto label_164654;
        case 0x164658u: goto label_164658;
        case 0x16465cu: goto label_16465c;
        case 0x164660u: goto label_164660;
        case 0x164664u: goto label_164664;
        case 0x164668u: goto label_164668;
        case 0x16466cu: goto label_16466c;
        case 0x164670u: goto label_164670;
        case 0x164674u: goto label_164674;
        case 0x164678u: goto label_164678;
        case 0x16467cu: goto label_16467c;
        case 0x164680u: goto label_164680;
        case 0x164684u: goto label_164684;
        case 0x164688u: goto label_164688;
        case 0x16468cu: goto label_16468c;
        case 0x164690u: goto label_164690;
        case 0x164694u: goto label_164694;
        case 0x164698u: goto label_164698;
        case 0x16469cu: goto label_16469c;
        case 0x1646a0u: goto label_1646a0;
        case 0x1646a4u: goto label_1646a4;
        case 0x1646a8u: goto label_1646a8;
        case 0x1646acu: goto label_1646ac;
        case 0x1646b0u: goto label_1646b0;
        case 0x1646b4u: goto label_1646b4;
        case 0x1646b8u: goto label_1646b8;
        case 0x1646bcu: goto label_1646bc;
        case 0x1646c0u: goto label_1646c0;
        case 0x1646c4u: goto label_1646c4;
        case 0x1646c8u: goto label_1646c8;
        case 0x1646ccu: goto label_1646cc;
        case 0x1646d0u: goto label_1646d0;
        case 0x1646d4u: goto label_1646d4;
        case 0x1646d8u: goto label_1646d8;
        case 0x1646dcu: goto label_1646dc;
        case 0x1646e0u: goto label_1646e0;
        case 0x1646e4u: goto label_1646e4;
        case 0x1646e8u: goto label_1646e8;
        case 0x1646ecu: goto label_1646ec;
        case 0x1646f0u: goto label_1646f0;
        case 0x1646f4u: goto label_1646f4;
        case 0x1646f8u: goto label_1646f8;
        case 0x1646fcu: goto label_1646fc;
        case 0x164700u: goto label_164700;
        case 0x164704u: goto label_164704;
        case 0x164708u: goto label_164708;
        case 0x16470cu: goto label_16470c;
        case 0x164710u: goto label_164710;
        case 0x164714u: goto label_164714;
        case 0x164718u: goto label_164718;
        case 0x16471cu: goto label_16471c;
        case 0x164720u: goto label_164720;
        case 0x164724u: goto label_164724;
        case 0x164728u: goto label_164728;
        case 0x16472cu: goto label_16472c;
        case 0x164730u: goto label_164730;
        case 0x164734u: goto label_164734;
        case 0x164738u: goto label_164738;
        case 0x16473cu: goto label_16473c;
        case 0x164740u: goto label_164740;
        case 0x164744u: goto label_164744;
        case 0x164748u: goto label_164748;
        case 0x16474cu: goto label_16474c;
        case 0x164750u: goto label_164750;
        case 0x164754u: goto label_164754;
        case 0x164758u: goto label_164758;
        case 0x16475cu: goto label_16475c;
        case 0x164760u: goto label_164760;
        case 0x164764u: goto label_164764;
        case 0x164768u: goto label_164768;
        case 0x16476cu: goto label_16476c;
        case 0x164770u: goto label_164770;
        case 0x164774u: goto label_164774;
        case 0x164778u: goto label_164778;
        case 0x16477cu: goto label_16477c;
        case 0x164780u: goto label_164780;
        case 0x164784u: goto label_164784;
        case 0x164788u: goto label_164788;
        case 0x16478cu: goto label_16478c;
        case 0x164790u: goto label_164790;
        case 0x164794u: goto label_164794;
        case 0x164798u: goto label_164798;
        case 0x16479cu: goto label_16479c;
        case 0x1647a0u: goto label_1647a0;
        case 0x1647a4u: goto label_1647a4;
        case 0x1647a8u: goto label_1647a8;
        case 0x1647acu: goto label_1647ac;
        case 0x1647b0u: goto label_1647b0;
        case 0x1647b4u: goto label_1647b4;
        case 0x1647b8u: goto label_1647b8;
        case 0x1647bcu: goto label_1647bc;
        case 0x1647c0u: goto label_1647c0;
        case 0x1647c4u: goto label_1647c4;
        case 0x1647c8u: goto label_1647c8;
        case 0x1647ccu: goto label_1647cc;
        case 0x1647d0u: goto label_1647d0;
        case 0x1647d4u: goto label_1647d4;
        case 0x1647d8u: goto label_1647d8;
        case 0x1647dcu: goto label_1647dc;
        case 0x1647e0u: goto label_1647e0;
        case 0x1647e4u: goto label_1647e4;
        case 0x1647e8u: goto label_1647e8;
        case 0x1647ecu: goto label_1647ec;
        case 0x1647f0u: goto label_1647f0;
        case 0x1647f4u: goto label_1647f4;
        case 0x1647f8u: goto label_1647f8;
        case 0x1647fcu: goto label_1647fc;
        case 0x164800u: goto label_164800;
        case 0x164804u: goto label_164804;
        case 0x164808u: goto label_164808;
        case 0x16480cu: goto label_16480c;
        case 0x164810u: goto label_164810;
        case 0x164814u: goto label_164814;
        case 0x164818u: goto label_164818;
        case 0x16481cu: goto label_16481c;
        case 0x164820u: goto label_164820;
        case 0x164824u: goto label_164824;
        case 0x164828u: goto label_164828;
        case 0x16482cu: goto label_16482c;
        case 0x164830u: goto label_164830;
        case 0x164834u: goto label_164834;
        case 0x164838u: goto label_164838;
        case 0x16483cu: goto label_16483c;
        case 0x164840u: goto label_164840;
        case 0x164844u: goto label_164844;
        case 0x164848u: goto label_164848;
        case 0x16484cu: goto label_16484c;
        case 0x164850u: goto label_164850;
        case 0x164854u: goto label_164854;
        case 0x164858u: goto label_164858;
        case 0x16485cu: goto label_16485c;
        case 0x164860u: goto label_164860;
        case 0x164864u: goto label_164864;
        case 0x164868u: goto label_164868;
        case 0x16486cu: goto label_16486c;
        case 0x164870u: goto label_164870;
        case 0x164874u: goto label_164874;
        case 0x164878u: goto label_164878;
        case 0x16487cu: goto label_16487c;
        case 0x164880u: goto label_164880;
        case 0x164884u: goto label_164884;
        case 0x164888u: goto label_164888;
        case 0x16488cu: goto label_16488c;
        case 0x164890u: goto label_164890;
        case 0x164894u: goto label_164894;
        case 0x164898u: goto label_164898;
        case 0x16489cu: goto label_16489c;
        case 0x1648a0u: goto label_1648a0;
        case 0x1648a4u: goto label_1648a4;
        case 0x1648a8u: goto label_1648a8;
        case 0x1648acu: goto label_1648ac;
        case 0x1648b0u: goto label_1648b0;
        case 0x1648b4u: goto label_1648b4;
        case 0x1648b8u: goto label_1648b8;
        case 0x1648bcu: goto label_1648bc;
        case 0x1648c0u: goto label_1648c0;
        case 0x1648c4u: goto label_1648c4;
        case 0x1648c8u: goto label_1648c8;
        case 0x1648ccu: goto label_1648cc;
        case 0x1648d0u: goto label_1648d0;
        case 0x1648d4u: goto label_1648d4;
        case 0x1648d8u: goto label_1648d8;
        case 0x1648dcu: goto label_1648dc;
        case 0x1648e0u: goto label_1648e0;
        case 0x1648e4u: goto label_1648e4;
        case 0x1648e8u: goto label_1648e8;
        case 0x1648ecu: goto label_1648ec;
        case 0x1648f0u: goto label_1648f0;
        case 0x1648f4u: goto label_1648f4;
        case 0x1648f8u: goto label_1648f8;
        case 0x1648fcu: goto label_1648fc;
        case 0x164900u: goto label_164900;
        case 0x164904u: goto label_164904;
        case 0x164908u: goto label_164908;
        case 0x16490cu: goto label_16490c;
        case 0x164910u: goto label_164910;
        case 0x164914u: goto label_164914;
        case 0x164918u: goto label_164918;
        case 0x16491cu: goto label_16491c;
        case 0x164920u: goto label_164920;
        case 0x164924u: goto label_164924;
        case 0x164928u: goto label_164928;
        case 0x16492cu: goto label_16492c;
        case 0x164930u: goto label_164930;
        case 0x164934u: goto label_164934;
        case 0x164938u: goto label_164938;
        case 0x16493cu: goto label_16493c;
        case 0x164940u: goto label_164940;
        case 0x164944u: goto label_164944;
        case 0x164948u: goto label_164948;
        case 0x16494cu: goto label_16494c;
        case 0x164950u: goto label_164950;
        case 0x164954u: goto label_164954;
        case 0x164958u: goto label_164958;
        case 0x16495cu: goto label_16495c;
        case 0x164960u: goto label_164960;
        case 0x164964u: goto label_164964;
        case 0x164968u: goto label_164968;
        case 0x16496cu: goto label_16496c;
        case 0x164970u: goto label_164970;
        case 0x164974u: goto label_164974;
        case 0x164978u: goto label_164978;
        case 0x16497cu: goto label_16497c;
        case 0x164980u: goto label_164980;
        case 0x164984u: goto label_164984;
        case 0x164988u: goto label_164988;
        case 0x16498cu: goto label_16498c;
        case 0x164990u: goto label_164990;
        case 0x164994u: goto label_164994;
        case 0x164998u: goto label_164998;
        case 0x16499cu: goto label_16499c;
        case 0x1649a0u: goto label_1649a0;
        case 0x1649a4u: goto label_1649a4;
        case 0x1649a8u: goto label_1649a8;
        case 0x1649acu: goto label_1649ac;
        case 0x1649b0u: goto label_1649b0;
        case 0x1649b4u: goto label_1649b4;
        case 0x1649b8u: goto label_1649b8;
        case 0x1649bcu: goto label_1649bc;
        case 0x1649c0u: goto label_1649c0;
        case 0x1649c4u: goto label_1649c4;
        case 0x1649c8u: goto label_1649c8;
        case 0x1649ccu: goto label_1649cc;
        case 0x1649d0u: goto label_1649d0;
        case 0x1649d4u: goto label_1649d4;
        case 0x1649d8u: goto label_1649d8;
        case 0x1649dcu: goto label_1649dc;
        case 0x1649e0u: goto label_1649e0;
        case 0x1649e4u: goto label_1649e4;
        case 0x1649e8u: goto label_1649e8;
        case 0x1649ecu: goto label_1649ec;
        case 0x1649f0u: goto label_1649f0;
        case 0x1649f4u: goto label_1649f4;
        case 0x1649f8u: goto label_1649f8;
        case 0x1649fcu: goto label_1649fc;
        case 0x164a00u: goto label_164a00;
        case 0x164a04u: goto label_164a04;
        case 0x164a08u: goto label_164a08;
        case 0x164a0cu: goto label_164a0c;
        case 0x164a10u: goto label_164a10;
        case 0x164a14u: goto label_164a14;
        case 0x164a18u: goto label_164a18;
        case 0x164a1cu: goto label_164a1c;
        case 0x164a20u: goto label_164a20;
        case 0x164a24u: goto label_164a24;
        case 0x164a28u: goto label_164a28;
        case 0x164a2cu: goto label_164a2c;
        case 0x164a30u: goto label_164a30;
        case 0x164a34u: goto label_164a34;
        case 0x164a38u: goto label_164a38;
        case 0x164a3cu: goto label_164a3c;
        case 0x164a40u: goto label_164a40;
        case 0x164a44u: goto label_164a44;
        case 0x164a48u: goto label_164a48;
        case 0x164a4cu: goto label_164a4c;
        case 0x164a50u: goto label_164a50;
        case 0x164a54u: goto label_164a54;
        case 0x164a58u: goto label_164a58;
        case 0x164a5cu: goto label_164a5c;
        case 0x164a60u: goto label_164a60;
        case 0x164a64u: goto label_164a64;
        case 0x164a68u: goto label_164a68;
        case 0x164a6cu: goto label_164a6c;
        case 0x164a70u: goto label_164a70;
        case 0x164a74u: goto label_164a74;
        case 0x164a78u: goto label_164a78;
        case 0x164a7cu: goto label_164a7c;
        case 0x164a80u: goto label_164a80;
        case 0x164a84u: goto label_164a84;
        case 0x164a88u: goto label_164a88;
        case 0x164a8cu: goto label_164a8c;
        case 0x164a90u: goto label_164a90;
        case 0x164a94u: goto label_164a94;
        case 0x164a98u: goto label_164a98;
        case 0x164a9cu: goto label_164a9c;
        case 0x164aa0u: goto label_164aa0;
        case 0x164aa4u: goto label_164aa4;
        case 0x164aa8u: goto label_164aa8;
        case 0x164aacu: goto label_164aac;
        case 0x164ab0u: goto label_164ab0;
        case 0x164ab4u: goto label_164ab4;
        case 0x164ab8u: goto label_164ab8;
        case 0x164abcu: goto label_164abc;
        case 0x164ac0u: goto label_164ac0;
        case 0x164ac4u: goto label_164ac4;
        case 0x164ac8u: goto label_164ac8;
        case 0x164accu: goto label_164acc;
        case 0x164ad0u: goto label_164ad0;
        case 0x164ad4u: goto label_164ad4;
        case 0x164ad8u: goto label_164ad8;
        case 0x164adcu: goto label_164adc;
        case 0x164ae0u: goto label_164ae0;
        case 0x164ae4u: goto label_164ae4;
        case 0x164ae8u: goto label_164ae8;
        case 0x164aecu: goto label_164aec;
        case 0x164af0u: goto label_164af0;
        case 0x164af4u: goto label_164af4;
        case 0x164af8u: goto label_164af8;
        case 0x164afcu: goto label_164afc;
        case 0x164b00u: goto label_164b00;
        case 0x164b04u: goto label_164b04;
        case 0x164b08u: goto label_164b08;
        case 0x164b0cu: goto label_164b0c;
        case 0x164b10u: goto label_164b10;
        case 0x164b14u: goto label_164b14;
        case 0x164b18u: goto label_164b18;
        case 0x164b1cu: goto label_164b1c;
        case 0x164b20u: goto label_164b20;
        case 0x164b24u: goto label_164b24;
        case 0x164b28u: goto label_164b28;
        case 0x164b2cu: goto label_164b2c;
        default: return;
    }

label_164360:
    if (ctx->pc == 0x164360u) {
        ctx->pc = 0x164364u;
        goto label_164364;
    }
    ctx->pc = 0x16435Cu;
    SET_GPR_U32(ctx, 31, 0x164364u);
    ctx->pc = 0x1C4FB0u;
    { ctx->pc = 0x1c4fb0; return; }
    ctx->pc = 0x164364u;
label_164364:
    // 0x164364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164368:
    // 0x164368: 0x3e00008  jr          $ra
label_16436c:
    if (ctx->pc == 0x16436Cu) {
        ctx->pc = 0x16436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164368u;
        // 0x16436c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164370u;
        goto label_164370;
    }
    ctx->pc = 0x164368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164368u;
        // 0x16436c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164370u;
label_164370:
    // 0x164370: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x164370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_164374:
    // 0x164374: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x164374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_164378:
    // 0x164378: 0x106200c0  beq         $v1, $v0, . + 4 + (0xC0 << 2)
label_16437c:
    if (ctx->pc == 0x16437Cu) {
        ctx->pc = 0x16437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164378u;
        // 0x16437c: 0xaf808648  sw          $zero, -0x79B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164380u;
        goto label_164380;
    }
    ctx->pc = 0x164378u;
    {
        const bool branch_taken_0x164378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164378u;
        // 0x16437c: 0xaf808648  sw          $zero, -0x79B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164378) {
            ctx->pc = 0x16467Cu;
            goto label_16467c;
        }
    }
    ctx->pc = 0x164380u;
label_164380:
    // 0x164380: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x164380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_164384:
    // 0x164384: 0x106200a2  beq         $v1, $v0, . + 4 + (0xA2 << 2)
label_164388:
    if (ctx->pc == 0x164388u) {
        ctx->pc = 0x164388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164384u;
        // 0x164388: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16438Cu;
        goto label_16438c;
    }
    ctx->pc = 0x164384u;
    {
        const bool branch_taken_0x164384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164384u;
        // 0x164388: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164384) {
            ctx->pc = 0x164610u;
            goto label_164610;
        }
    }
    ctx->pc = 0x16438Cu;
label_16438c:
    // 0x16438c: 0x10620082  beq         $v1, $v0, . + 4 + (0x82 << 2)
label_164390:
    if (ctx->pc == 0x164390u) {
        ctx->pc = 0x164394u;
        goto label_164394;
    }
    ctx->pc = 0x16438Cu;
    {
        const bool branch_taken_0x16438c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16438c) {
            ctx->pc = 0x164598u;
            goto label_164598;
        }
    }
    ctx->pc = 0x164394u;
label_164394:
    // 0x164394: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x164394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_164398:
    // 0x164398: 0x10620063  beq         $v1, $v0, . + 4 + (0x63 << 2)
label_16439c:
    if (ctx->pc == 0x16439Cu) {
        ctx->pc = 0x16439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164398u;
        // 0x16439c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1643A0u;
        goto label_1643a0;
    }
    ctx->pc = 0x164398u;
    {
        const bool branch_taken_0x164398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164398u;
        // 0x16439c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164398) {
            ctx->pc = 0x164528u;
            goto label_164528;
        }
    }
    ctx->pc = 0x1643A0u;
label_1643a0:
    // 0x1643a0: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
label_1643a4:
    if (ctx->pc == 0x1643A4u) {
        ctx->pc = 0x1643A8u;
        goto label_1643a8;
    }
    ctx->pc = 0x1643A0u;
    {
        const bool branch_taken_0x1643a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1643a0) {
            ctx->pc = 0x1644B0u;
            goto label_1644b0;
        }
    }
    ctx->pc = 0x1643A8u;
label_1643a8:
    // 0x1643a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1643a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1643ac:
    // 0x1643ac: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_1643b0:
    if (ctx->pc == 0x1643B0u) {
        ctx->pc = 0x1643B4u;
        goto label_1643b4;
    }
    ctx->pc = 0x1643ACu;
    {
        const bool branch_taken_0x1643ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1643ac) {
            ctx->pc = 0x164438u;
            goto label_164438;
        }
    }
    ctx->pc = 0x1643B4u;
label_1643b4:
    // 0x1643b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1643b8:
    if (ctx->pc == 0x1643B8u) {
        ctx->pc = 0x1643BCu;
        goto label_1643bc;
    }
    ctx->pc = 0x1643B4u;
    {
        const bool branch_taken_0x1643b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1643b4) {
            ctx->pc = 0x1643C4u;
            goto label_1643c4;
        }
    }
    ctx->pc = 0x1643BCu;
label_1643bc:
    // 0x1643bc: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_1643c0:
    if (ctx->pc == 0x1643C0u) {
        ctx->pc = 0x1643C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643BCu;
        // 0x1643c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1643C4u;
        goto label_1643c4;
    }
    ctx->pc = 0x1643BCu;
    {
        const bool branch_taken_0x1643bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1643C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643BCu;
        // 0x1643c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1643bc) {
            ctx->pc = 0x1646E4u;
            goto label_1646e4;
        }
    }
    ctx->pc = 0x1643C4u;
label_1643c4:
    // 0x1643c4: 0x8f83869c  lw          $v1, -0x7964($gp)
    ctx->pc = 0x1643c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936220)));
label_1643c8:
    // 0x1643c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1643cc:
    if (ctx->pc == 0x1643CCu) {
        ctx->pc = 0x1643CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643C8u;
        // 0x1643cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1643D0u;
        goto label_1643d0;
    }
    ctx->pc = 0x1643C8u;
    {
        const bool branch_taken_0x1643c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1643CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643C8u;
        // 0x1643cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1643c8) {
            ctx->pc = 0x1643E0u;
            goto label_1643e0;
        }
    }
    ctx->pc = 0x1643D0u;
label_1643d0:
    // 0x1643d0: 0x8f828648  lw          $v0, -0x79B8($gp)
    ctx->pc = 0x1643d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
label_1643d4:
    // 0x1643d4: 0x24a50370  addiu       $a1, $a1, 0x370
    ctx->pc = 0x1643d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 880));
label_1643d8:
    // 0x1643d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1643d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1643dc:
    // 0x1643dc: 0xaf828648  sw          $v0, -0x79B8($gp)
    ctx->pc = 0x1643dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 2));
label_1643e0:
    // 0x1643e0: 0x8f878648  lw          $a3, -0x79B8($gp)
    ctx->pc = 0x1643e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
label_1643e4:
    // 0x1643e4: 0x28e1001e  slti        $at, $a3, 0x1E
    ctx->pc = 0x1643e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
label_1643e8:
    // 0x1643e8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1643ec:
    if (ctx->pc == 0x1643ECu) {
        ctx->pc = 0x1643ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643E8u;
        // 0x1643ec: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1643F0u;
        goto label_1643f0;
    }
    ctx->pc = 0x1643E8u;
    {
        const bool branch_taken_0x1643e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1643ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643E8u;
        // 0x1643ec: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1643e8) {
            ctx->pc = 0x1643FCu;
            goto label_1643fc;
        }
    }
    ctx->pc = 0x1643F0u;
label_1643f0:
    // 0x1643f0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1643f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1643f4:
    // 0x1643f4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1643f8:
    if (ctx->pc == 0x1643F8u) {
        ctx->pc = 0x1643FCu;
        goto label_1643fc;
    }
    ctx->pc = 0x1643F4u;
    {
        const bool branch_taken_0x1643f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1643f4) {
            ctx->pc = 0x1643D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1643d0;
        }
    }
    ctx->pc = 0x1643FCu;
label_1643fc:
    // 0x1643fc: 0x0  nop
    ctx->pc = 0x1643fcu;
    // NOP
label_164400:
    // 0x164400: 0x28e2001e  slti        $v0, $a3, 0x1E
    ctx->pc = 0x164400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
label_164404:
    // 0x164404: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_164408:
    if (ctx->pc == 0x164408u) {
        ctx->pc = 0x164408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164404u;
        // 0x164408: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16440Cu;
        goto label_16440c;
    }
    ctx->pc = 0x164404u;
    {
        const bool branch_taken_0x164404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164404u;
        // 0x164408: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164404) {
            ctx->pc = 0x164414u;
            goto label_164414;
        }
    }
    ctx->pc = 0x16440Cu;
label_16440c:
    // 0x16440c: 0x100000ee  b           . + 4 + (0xEE << 2)
label_164410:
    if (ctx->pc == 0x164410u) {
        ctx->pc = 0x164410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16440Cu;
        // 0x164410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164414u;
        goto label_164414;
    }
    ctx->pc = 0x16440Cu;
    {
        const bool branch_taken_0x16440c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16440Cu;
        // 0x164410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16440c) {
            ctx->pc = 0x1647C8u;
            goto label_1647c8;
        }
    }
    ctx->pc = 0x164414u;
label_164414:
    // 0x164414: 0x8f82869c  lw          $v0, -0x7964($gp)
    ctx->pc = 0x164414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936220)));
label_164418:
    // 0x164418: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x164418u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_16441c:
    // 0x16441c: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x16441cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_164420:
    // 0x164420: 0x8f838698  lw          $v1, -0x7968($gp)
    ctx->pc = 0x164420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936216)));
label_164424:
    // 0x164424: 0x8f858694  lw          $a1, -0x796C($gp)
    ctx->pc = 0x164424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936212)));
label_164428:
    // 0x164428: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x164428u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_16442c:
    // 0x16442c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x16442cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_164430:
    // 0x164430: 0x100000ae  b           . + 4 + (0xAE << 2)
label_164434:
    if (ctx->pc == 0x164434u) {
        ctx->pc = 0x164434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164430u;
        // 0x164434: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164438u;
        goto label_164438;
    }
    ctx->pc = 0x164430u;
    {
        const bool branch_taken_0x164430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164430u;
        // 0x164434: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164430) {
            ctx->pc = 0x1646ECu;
            goto label_1646ec;
        }
    }
    ctx->pc = 0x164438u;
label_164438:
    // 0x164438: 0x8f838690  lw          $v1, -0x7970($gp)
    ctx->pc = 0x164438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936208)));
label_16443c:
    // 0x16443c: 0x10000005  b           . + 4 + (0x5 << 2)
label_164440:
    if (ctx->pc == 0x164440u) {
        ctx->pc = 0x164440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16443Cu;
        // 0x164440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164444u;
        goto label_164444;
    }
    ctx->pc = 0x16443Cu;
    {
        const bool branch_taken_0x16443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16443Cu;
        // 0x164440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16443c) {
            ctx->pc = 0x164454u;
            goto label_164454;
        }
    }
    ctx->pc = 0x164444u;
label_164444:
    // 0x164444: 0x8f828648  lw          $v0, -0x79B8($gp)
    ctx->pc = 0x164444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
label_164448:
    // 0x164448: 0x24a50370  addiu       $a1, $a1, 0x370
    ctx->pc = 0x164448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 880));
label_16444c:
    // 0x16444c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_164450:
    // 0x164450: 0xaf828648  sw          $v0, -0x79B8($gp)
    ctx->pc = 0x164450u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 2));
label_164454:
    // 0x164454: 0x0  nop
    ctx->pc = 0x164454u;
    // NOP
label_164458:
    // 0x164458: 0x8f878648  lw          $a3, -0x79B8($gp)
    ctx->pc = 0x164458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
label_16445c:
    // 0x16445c: 0x28e1012c  slti        $at, $a3, 0x12C
    ctx->pc = 0x16445cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)300) ? 1 : 0);
label_164460:
    // 0x164460: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_164464:
    if (ctx->pc == 0x164464u) {
        ctx->pc = 0x164464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164460u;
        // 0x164464: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164468u;
        goto label_164468;
    }
    ctx->pc = 0x164460u;
    {
        const bool branch_taken_0x164460 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x164464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164460u;
        // 0x164464: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164460) {
            ctx->pc = 0x164474u;
            goto label_164474;
        }
    }
    ctx->pc = 0x164468u;
label_164468:
    // 0x164468: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x164468u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16446c:
    // 0x16446c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_164470:
    if (ctx->pc == 0x164470u) {
        ctx->pc = 0x164474u;
        goto label_164474;
    }
    ctx->pc = 0x16446Cu;
    {
        const bool branch_taken_0x16446c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16446c) {
            ctx->pc = 0x164444u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164444;
        }
    }
    ctx->pc = 0x164474u;
label_164474:
    // 0x164474: 0x0  nop
    ctx->pc = 0x164474u;
    // NOP
label_164478:
    // 0x164478: 0x28e2012c  slti        $v0, $a3, 0x12C
    ctx->pc = 0x164478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)300) ? 1 : 0);
label_16447c:
    // 0x16447c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_164480:
    if (ctx->pc == 0x164480u) {
        ctx->pc = 0x164480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16447Cu;
        // 0x164480: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164484u;
        goto label_164484;
    }
    ctx->pc = 0x16447Cu;
    {
        const bool branch_taken_0x16447c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16447Cu;
        // 0x164480: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16447c) {
            ctx->pc = 0x16448Cu;
            goto label_16448c;
        }
    }
    ctx->pc = 0x164484u;
label_164484:
    // 0x164484: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_164488:
    if (ctx->pc == 0x164488u) {
        ctx->pc = 0x164488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164484u;
        // 0x164488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16448Cu;
        goto label_16448c;
    }
    ctx->pc = 0x164484u;
    {
        const bool branch_taken_0x164484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164484u;
        // 0x164488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164484) {
            ctx->pc = 0x1647C8u;
            goto label_1647c8;
        }
    }
    ctx->pc = 0x16448Cu;
label_16448c:
    // 0x16448c: 0x8f828690  lw          $v0, -0x7970($gp)
    ctx->pc = 0x16448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936208)));
label_164490:
    // 0x164490: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x164490u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_164494:
    // 0x164494: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x164494u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_164498:
    // 0x164498: 0x8f83868c  lw          $v1, -0x7974($gp)
    ctx->pc = 0x164498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936204)));
label_16449c:
    // 0x16449c: 0x8f858688  lw          $a1, -0x7978($gp)
    ctx->pc = 0x16449cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936200)));
label_1644a0:
    // 0x1644a0: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1644a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1644a4:
    // 0x1644a4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1644a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1644a8:
    // 0x1644a8: 0x10000090  b           . + 4 + (0x90 << 2)
label_1644ac:
    if (ctx->pc == 0x1644ACu) {
        ctx->pc = 0x1644ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644A8u;
        // 0x1644ac: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1644B0u;
        goto label_1644b0;
    }
    ctx->pc = 0x1644A8u;
    {
        const bool branch_taken_0x1644a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1644ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644A8u;
        // 0x1644ac: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644a8) {
            ctx->pc = 0x1646ECu;
            goto label_1646ec;
        }
    }
    ctx->pc = 0x1644B0u;
label_1644b0:
    // 0x1644b0: 0x8f838678  lw          $v1, -0x7988($gp)
    ctx->pc = 0x1644b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
label_1644b4:
    // 0x1644b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1644b8:
    if (ctx->pc == 0x1644B8u) {
        ctx->pc = 0x1644B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644B4u;
        // 0x1644b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1644BCu;
        goto label_1644bc;
    }
    ctx->pc = 0x1644B4u;
    {
        const bool branch_taken_0x1644b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1644B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644B4u;
        // 0x1644b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644b4) {
            ctx->pc = 0x1644CCu;
            goto label_1644cc;
        }
    }
    ctx->pc = 0x1644BCu;
label_1644bc:
    // 0x1644bc: 0x8f828648  lw          $v0, -0x79B8($gp)
    ctx->pc = 0x1644bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
label_1644c0:
    // 0x1644c0: 0x24a50de0  addiu       $a1, $a1, 0xDE0
    ctx->pc = 0x1644c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3552));
label_1644c4:
    // 0x1644c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1644c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1644c8:
    // 0x1644c8: 0xaf828648  sw          $v0, -0x79B8($gp)
    ctx->pc = 0x1644c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 2));
label_1644cc:
    // 0x1644cc: 0x0  nop
    ctx->pc = 0x1644ccu;
    // NOP
label_1644d0:
    // 0x1644d0: 0x8f878648  lw          $a3, -0x79B8($gp)
    ctx->pc = 0x1644d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
label_1644d4:
    // 0x1644d4: 0x28e1001e  slti        $at, $a3, 0x1E
    ctx->pc = 0x1644d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
label_1644d8:
    // 0x1644d8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1644dc:
    if (ctx->pc == 0x1644DCu) {
        ctx->pc = 0x1644DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644D8u;
        // 0x1644dc: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1644E0u;
        goto label_1644e0;
    }
    ctx->pc = 0x1644D8u;
    {
        const bool branch_taken_0x1644d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1644DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644D8u;
        // 0x1644dc: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644d8) {
            ctx->pc = 0x1644ECu;
            goto label_1644ec;
        }
    }
    ctx->pc = 0x1644E0u;
label_1644e0:
    // 0x1644e0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1644e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1644e4:
    // 0x1644e4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1644e8:
    if (ctx->pc == 0x1644E8u) {
        ctx->pc = 0x1644ECu;
        goto label_1644ec;
    }
    ctx->pc = 0x1644E4u;
    {
        const bool branch_taken_0x1644e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1644e4) {
            ctx->pc = 0x1644BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1644bc;
        }
    }
    ctx->pc = 0x1644ECu;
label_1644ec:
    // 0x1644ec: 0x0  nop
    ctx->pc = 0x1644ecu;
    // NOP
label_1644f0:
    // 0x1644f0: 0x28e2001e  slti        $v0, $a3, 0x1E
    ctx->pc = 0x1644f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
label_1644f4:
    // 0x1644f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1644f8:
    if (ctx->pc == 0x1644F8u) {
        ctx->pc = 0x1644F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644F4u;
        // 0x1644f8: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1644FCu;
        goto label_1644fc;
    }
    ctx->pc = 0x1644F4u;
    {
        const bool branch_taken_0x1644f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1644F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644F4u;
        // 0x1644f8: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644f4) {
            ctx->pc = 0x164504u;
            goto label_164504;
        }
    }
    ctx->pc = 0x1644FCu;
label_1644fc:
    // 0x1644fc: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_164500:
    if (ctx->pc == 0x164500u) {
        ctx->pc = 0x164500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644FCu;
        // 0x164500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164504u;
        goto label_164504;
    }
    ctx->pc = 0x1644FCu;
    {
        const bool branch_taken_0x1644fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644FCu;
        // 0x164500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644fc) {
            ctx->pc = 0x1647C8u;
            goto label_1647c8;
        }
    }
    ctx->pc = 0x164504u;
label_164504:
    // 0x164504: 0x8f828678  lw          $v0, -0x7988($gp)
    ctx->pc = 0x164504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
label_164508:
    // 0x164508: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x164508u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_16450c:
    // 0x16450c: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x16450cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_164510:
    // 0x164510: 0x8f838674  lw          $v1, -0x798C($gp)
    ctx->pc = 0x164510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
label_164514:
    // 0x164514: 0x8f858670  lw          $a1, -0x7990($gp)
    ctx->pc = 0x164514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936176)));
label_164518:
    // 0x164518: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x164518u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_16451c:
    // 0x16451c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x16451cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_164520:
    // 0x164520: 0x10000072  b           . + 4 + (0x72 << 2)
label_164524:
    if (ctx->pc == 0x164524u) {
        ctx->pc = 0x164524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164520u;
        // 0x164524: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164528u;
        goto label_164528;
    }
    ctx->pc = 0x164520u;
    {
        const bool branch_taken_0x164520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164520u;
        // 0x164524: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164520) {
            ctx->pc = 0x1646ECu;
            goto label_1646ec;
        }
    }
    ctx->pc = 0x164528u;
label_164528:
    // 0x164528: 0x8f838660  lw          $v1, -0x79A0($gp)
    ctx->pc = 0x164528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
label_16452c:
    // 0x16452c: 0x10000005  b           . + 4 + (0x5 << 2)
label_164530:
    if (ctx->pc == 0x164530u) {
        ctx->pc = 0x164530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16452Cu;
        // 0x164530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164534u;
        goto label_164534;
    }
    ctx->pc = 0x16452Cu;
    {
        const bool branch_taken_0x16452c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16452Cu;
        // 0x164530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16452c) {
            ctx->pc = 0x164544u;
            goto label_164544;
        }
    }
    ctx->pc = 0x164534u;
label_164534:
    // 0x164534: 0x8f828648  lw          $v0, -0x79B8($gp)
    ctx->pc = 0x164534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
label_164538:
    // 0x164538: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x164538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
label_16453c:
    // 0x16453c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16453cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_164540:
    // 0x164540: 0xaf828648  sw          $v0, -0x79B8($gp)
    ctx->pc = 0x164540u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 2));
label_164544:
    // 0x164544: 0x0  nop
    ctx->pc = 0x164544u;
    // NOP
label_164548:
    // 0x164548: 0x8f868648  lw          $a2, -0x79B8($gp)
    ctx->pc = 0x164548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
label_16454c:
    // 0x16454c: 0x28c100c8  slti        $at, $a2, 0xC8
    ctx->pc = 0x16454cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)200) ? 1 : 0);
label_164550:
    // 0x164550: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_164554:
    if (ctx->pc == 0x164554u) {
        ctx->pc = 0x164554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164550u;
        // 0x164554: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164558u;
        goto label_164558;
    }
    ctx->pc = 0x164550u;
    {
        const bool branch_taken_0x164550 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x164554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164550u;
        // 0x164554: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164550) {
            ctx->pc = 0x164564u;
            goto label_164564;
        }
    }
    ctx->pc = 0x164558u;
label_164558:
    // 0x164558: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x164558u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16455c:
    // 0x16455c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_164560:
    if (ctx->pc == 0x164560u) {
        ctx->pc = 0x164564u;
        goto label_164564;
    }
    ctx->pc = 0x16455Cu;
    {
        const bool branch_taken_0x16455c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16455c) {
            ctx->pc = 0x164534u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164534;
        }
    }
    ctx->pc = 0x164564u;
label_164564:
    // 0x164564: 0x0  nop
    ctx->pc = 0x164564u;
    // NOP
label_164568:
    // 0x164568: 0x28c200c8  slti        $v0, $a2, 0xC8
    ctx->pc = 0x164568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)200) ? 1 : 0);
label_16456c:
    // 0x16456c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_164570:
    if (ctx->pc == 0x164570u) {
        ctx->pc = 0x164570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16456Cu;
        // 0x164570: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164574u;
        goto label_164574;
    }
    ctx->pc = 0x16456Cu;
    {
        const bool branch_taken_0x16456c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16456Cu;
        // 0x164570: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16456c) {
            ctx->pc = 0x16457Cu;
            goto label_16457c;
        }
    }
    ctx->pc = 0x164574u;
label_164574:
    // 0x164574: 0x10000094  b           . + 4 + (0x94 << 2)
label_164578:
    if (ctx->pc == 0x164578u) {
        ctx->pc = 0x164578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164574u;
        // 0x164578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16457Cu;
        goto label_16457c;
    }
    ctx->pc = 0x164574u;
    {
        const bool branch_taken_0x164574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164574u;
        // 0x164578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164574) {
            ctx->pc = 0x1647C8u;
            goto label_1647c8;
        }
    }
    ctx->pc = 0x16457Cu;
label_16457c:
    // 0x16457c: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x16457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
label_164580:
    // 0x164580: 0x662823  subu        $a1, $v1, $a2
    ctx->pc = 0x164580u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_164584:
    // 0x164584: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x164584u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_164588:
    // 0x164588: 0x8f83865c  lw          $v1, -0x79A4($gp)
    ctx->pc = 0x164588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936156)));
label_16458c:
    // 0x16458c: 0x8f858658  lw          $a1, -0x79A8($gp)
    ctx->pc = 0x16458cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936152)));
label_164590:
    // 0x164590: 0x10000056  b           . + 4 + (0x56 << 2)
label_164594:
    if (ctx->pc == 0x164594u) {
        ctx->pc = 0x164594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164590u;
        // 0x164594: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164598u;
        goto label_164598;
    }
    ctx->pc = 0x164590u;
    {
        const bool branch_taken_0x164590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164590u;
        // 0x164594: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164590) {
            ctx->pc = 0x1646ECu;
            goto label_1646ec;
        }
    }
    ctx->pc = 0x164598u;
label_164598:
    // 0x164598: 0x8f838684  lw          $v1, -0x797C($gp)
    ctx->pc = 0x164598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936196)));
label_16459c:
    // 0x16459c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1645a0:
    if (ctx->pc == 0x1645A0u) {
        ctx->pc = 0x1645A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16459Cu;
        // 0x1645a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1645A4u;
        goto label_1645a4;
    }
    ctx->pc = 0x16459Cu;
    {
        const bool branch_taken_0x16459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1645A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16459Cu;
        // 0x1645a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16459c) {
            ctx->pc = 0x1645B4u;
            goto label_1645b4;
        }
    }
    ctx->pc = 0x1645A4u;
label_1645a4:
    // 0x1645a4: 0x8f828648  lw          $v0, -0x79B8($gp)
    ctx->pc = 0x1645a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
label_1645a8:
    // 0x1645a8: 0x24a50370  addiu       $a1, $a1, 0x370
    ctx->pc = 0x1645a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 880));
label_1645ac:
    // 0x1645ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1645acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1645b0:
    // 0x1645b0: 0xaf828648  sw          $v0, -0x79B8($gp)
    ctx->pc = 0x1645b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 2));
label_1645b4:
    // 0x1645b4: 0x0  nop
    ctx->pc = 0x1645b4u;
    // NOP
label_1645b8:
    // 0x1645b8: 0x8f878648  lw          $a3, -0x79B8($gp)
    ctx->pc = 0x1645b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
label_1645bc:
    // 0x1645bc: 0x28e10258  slti        $at, $a3, 0x258
    ctx->pc = 0x1645bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)600) ? 1 : 0);
label_1645c0:
    // 0x1645c0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1645c4:
    if (ctx->pc == 0x1645C4u) {
        ctx->pc = 0x1645C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645C0u;
        // 0x1645c4: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1645C8u;
        goto label_1645c8;
    }
    ctx->pc = 0x1645C0u;
    {
        const bool branch_taken_0x1645c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1645C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645C0u;
        // 0x1645c4: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645c0) {
            ctx->pc = 0x1645D4u;
            goto label_1645d4;
        }
    }
    ctx->pc = 0x1645C8u;
label_1645c8:
    // 0x1645c8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1645c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1645cc:
    // 0x1645cc: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1645d0:
    if (ctx->pc == 0x1645D0u) {
        ctx->pc = 0x1645D4u;
        goto label_1645d4;
    }
    ctx->pc = 0x1645CCu;
    {
        const bool branch_taken_0x1645cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1645cc) {
            ctx->pc = 0x1645A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1645a4;
        }
    }
    ctx->pc = 0x1645D4u;
label_1645d4:
    // 0x1645d4: 0x0  nop
    ctx->pc = 0x1645d4u;
    // NOP
label_1645d8:
    // 0x1645d8: 0x28e20258  slti        $v0, $a3, 0x258
    ctx->pc = 0x1645d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)600) ? 1 : 0);
label_1645dc:
    // 0x1645dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1645e0:
    if (ctx->pc == 0x1645E0u) {
        ctx->pc = 0x1645E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645DCu;
        // 0x1645e0: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1645E4u;
        goto label_1645e4;
    }
    ctx->pc = 0x1645DCu;
    {
        const bool branch_taken_0x1645dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1645E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645DCu;
        // 0x1645e0: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645dc) {
            ctx->pc = 0x1645ECu;
            goto label_1645ec;
        }
    }
    ctx->pc = 0x1645E4u;
label_1645e4:
    // 0x1645e4: 0x10000078  b           . + 4 + (0x78 << 2)
label_1645e8:
    if (ctx->pc == 0x1645E8u) {
        ctx->pc = 0x1645E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645E4u;
        // 0x1645e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1645ECu;
        goto label_1645ec;
    }
    ctx->pc = 0x1645E4u;
    {
        const bool branch_taken_0x1645e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1645E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645E4u;
        // 0x1645e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645e4) {
            ctx->pc = 0x1647C8u;
            goto label_1647c8;
        }
    }
    ctx->pc = 0x1645ECu;
label_1645ec:
    // 0x1645ec: 0x8f828684  lw          $v0, -0x797C($gp)
    ctx->pc = 0x1645ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936196)));
label_1645f0:
    // 0x1645f0: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x1645f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1645f4:
    // 0x1645f4: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x1645f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1645f8:
    // 0x1645f8: 0x8f838680  lw          $v1, -0x7980($gp)
    ctx->pc = 0x1645f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936192)));
label_1645fc:
    // 0x1645fc: 0x8f85867c  lw          $a1, -0x7984($gp)
    ctx->pc = 0x1645fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936188)));
label_164600:
    // 0x164600: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x164600u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_164604:
    // 0x164604: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x164604u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_164608:
    // 0x164608: 0x10000038  b           . + 4 + (0x38 << 2)
label_16460c:
    if (ctx->pc == 0x16460Cu) {
        ctx->pc = 0x16460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164608u;
        // 0x16460c: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164610u;
        goto label_164610;
    }
    ctx->pc = 0x164608u;
    {
        const bool branch_taken_0x164608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164608u;
        // 0x16460c: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164608) {
            ctx->pc = 0x1646ECu;
            goto label_1646ec;
        }
    }
    ctx->pc = 0x164610u;
label_164610:
    // 0x164610: 0x8f83866c  lw          $v1, -0x7994($gp)
    ctx->pc = 0x164610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936172)));
label_164614:
    // 0x164614: 0x10000005  b           . + 4 + (0x5 << 2)
label_164618:
    if (ctx->pc == 0x164618u) {
        ctx->pc = 0x164618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164614u;
        // 0x164618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16461Cu;
        goto label_16461c;
    }
    ctx->pc = 0x164614u;
    {
        const bool branch_taken_0x164614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164614u;
        // 0x164618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164614) {
            ctx->pc = 0x16462Cu;
            goto label_16462c;
        }
    }
    ctx->pc = 0x16461Cu;
label_16461c:
    // 0x16461c: 0x8f828648  lw          $v0, -0x79B8($gp)
    ctx->pc = 0x16461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
label_164620:
    // 0x164620: 0x24a519a0  addiu       $a1, $a1, 0x19A0
    ctx->pc = 0x164620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6560));
label_164624:
    // 0x164624: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x164624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_164628:
    // 0x164628: 0xaf828648  sw          $v0, -0x79B8($gp)
    ctx->pc = 0x164628u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 2));
label_16462c:
    // 0x16462c: 0x0  nop
    ctx->pc = 0x16462cu;
    // NOP
label_164630:
    // 0x164630: 0x8f868648  lw          $a2, -0x79B8($gp)
    ctx->pc = 0x164630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
label_164634:
    // 0x164634: 0x28c10032  slti        $at, $a2, 0x32
    ctx->pc = 0x164634u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
label_164638:
    // 0x164638: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_16463c:
    if (ctx->pc == 0x16463Cu) {
        ctx->pc = 0x16463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164638u;
        // 0x16463c: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164640u;
        goto label_164640;
    }
    ctx->pc = 0x164638u;
    {
        const bool branch_taken_0x164638 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164638u;
        // 0x16463c: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164638) {
            ctx->pc = 0x16464Cu;
            goto label_16464c;
        }
    }
    ctx->pc = 0x164640u;
label_164640:
    // 0x164640: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x164640u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_164644:
    // 0x164644: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_164648:
    if (ctx->pc == 0x164648u) {
        ctx->pc = 0x16464Cu;
        goto label_16464c;
    }
    ctx->pc = 0x164644u;
    {
        const bool branch_taken_0x164644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164644) {
            ctx->pc = 0x16461Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16461c;
        }
    }
    ctx->pc = 0x16464Cu;
label_16464c:
    // 0x16464c: 0x0  nop
    ctx->pc = 0x16464cu;
    // NOP
label_164650:
    // 0x164650: 0x28c20032  slti        $v0, $a2, 0x32
    ctx->pc = 0x164650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
label_164654:
    // 0x164654: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_164658:
    if (ctx->pc == 0x164658u) {
        ctx->pc = 0x164658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164654u;
        // 0x164658: 0x240319a0  addiu       $v1, $zero, 0x19A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16465Cu;
        goto label_16465c;
    }
    ctx->pc = 0x164654u;
    {
        const bool branch_taken_0x164654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164654u;
        // 0x164658: 0x240319a0  addiu       $v1, $zero, 0x19A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164654) {
            ctx->pc = 0x164664u;
            goto label_164664;
        }
    }
    ctx->pc = 0x16465Cu;
label_16465c:
    // 0x16465c: 0x1000005a  b           . + 4 + (0x5A << 2)
label_164660:
    if (ctx->pc == 0x164660u) {
        ctx->pc = 0x164660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16465Cu;
        // 0x164660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164664u;
        goto label_164664;
    }
    ctx->pc = 0x16465Cu;
    {
        const bool branch_taken_0x16465c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16465Cu;
        // 0x164660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16465c) {
            ctx->pc = 0x1647C8u;
            goto label_1647c8;
        }
    }
    ctx->pc = 0x164664u;
label_164664:
    // 0x164664: 0x8f82866c  lw          $v0, -0x7994($gp)
    ctx->pc = 0x164664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936172)));
label_164668:
    // 0x164668: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x164668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_16466c:
    // 0x16466c: 0x8f858664  lw          $a1, -0x799C($gp)
    ctx->pc = 0x16466cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936164)));
label_164670:
    // 0x164670: 0x8f838668  lw          $v1, -0x7998($gp)
    ctx->pc = 0x164670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
label_164674:
    // 0x164674: 0x1000001d  b           . + 4 + (0x1D << 2)
label_164678:
    if (ctx->pc == 0x164678u) {
        ctx->pc = 0x164678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164674u;
        // 0x164678: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16467Cu;
        goto label_16467c;
    }
    ctx->pc = 0x164674u;
    {
        const bool branch_taken_0x164674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164674u;
        // 0x164678: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164674) {
            ctx->pc = 0x1646ECu;
            goto label_1646ec;
        }
    }
    ctx->pc = 0x16467Cu;
label_16467c:
    // 0x16467c: 0x8f838654  lw          $v1, -0x79AC($gp)
    ctx->pc = 0x16467cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936148)));
label_164680:
    // 0x164680: 0x10000005  b           . + 4 + (0x5 << 2)
label_164684:
    if (ctx->pc == 0x164684u) {
        ctx->pc = 0x164684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164680u;
        // 0x164684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164688u;
        goto label_164688;
    }
    ctx->pc = 0x164680u;
    {
        const bool branch_taken_0x164680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164680u;
        // 0x164684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164680) {
            ctx->pc = 0x164698u;
            goto label_164698;
        }
    }
    ctx->pc = 0x164688u;
label_164688:
    // 0x164688: 0x8f828648  lw          $v0, -0x79B8($gp)
    ctx->pc = 0x164688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
label_16468c:
    // 0x16468c: 0x24a51560  addiu       $a1, $a1, 0x1560
    ctx->pc = 0x16468cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5472));
label_164690:
    // 0x164690: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x164690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_164694:
    // 0x164694: 0xaf828648  sw          $v0, -0x79B8($gp)
    ctx->pc = 0x164694u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936136), GPR_U32(ctx, 2));
label_164698:
    // 0x164698: 0x8f868648  lw          $a2, -0x79B8($gp)
    ctx->pc = 0x164698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
label_16469c:
    // 0x16469c: 0x28c10032  slti        $at, $a2, 0x32
    ctx->pc = 0x16469cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
label_1646a0:
    // 0x1646a0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1646a4:
    if (ctx->pc == 0x1646A4u) {
        ctx->pc = 0x1646A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646A0u;
        // 0x1646a4: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1646A8u;
        goto label_1646a8;
    }
    ctx->pc = 0x1646A0u;
    {
        const bool branch_taken_0x1646a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1646A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646A0u;
        // 0x1646a4: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646a0) {
            ctx->pc = 0x1646B4u;
            goto label_1646b4;
        }
    }
    ctx->pc = 0x1646A8u;
label_1646a8:
    // 0x1646a8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1646a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1646ac:
    // 0x1646ac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1646b0:
    if (ctx->pc == 0x1646B0u) {
        ctx->pc = 0x1646B4u;
        goto label_1646b4;
    }
    ctx->pc = 0x1646ACu;
    {
        const bool branch_taken_0x1646ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1646ac) {
            ctx->pc = 0x164688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164688;
        }
    }
    ctx->pc = 0x1646B4u;
label_1646b4:
    // 0x1646b4: 0x0  nop
    ctx->pc = 0x1646b4u;
    // NOP
label_1646b8:
    // 0x1646b8: 0x28c20032  slti        $v0, $a2, 0x32
    ctx->pc = 0x1646b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
label_1646bc:
    // 0x1646bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1646c0:
    if (ctx->pc == 0x1646C0u) {
        ctx->pc = 0x1646C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646BCu;
        // 0x1646c0: 0x24031560  addiu       $v1, $zero, 0x1560 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1646C4u;
        goto label_1646c4;
    }
    ctx->pc = 0x1646BCu;
    {
        const bool branch_taken_0x1646bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1646C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646BCu;
        // 0x1646c0: 0x24031560  addiu       $v1, $zero, 0x1560 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646bc) {
            ctx->pc = 0x1646CCu;
            goto label_1646cc;
        }
    }
    ctx->pc = 0x1646C4u;
label_1646c4:
    // 0x1646c4: 0x10000040  b           . + 4 + (0x40 << 2)
label_1646c8:
    if (ctx->pc == 0x1646C8u) {
        ctx->pc = 0x1646C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646C4u;
        // 0x1646c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1646CCu;
        goto label_1646cc;
    }
    ctx->pc = 0x1646C4u;
    {
        const bool branch_taken_0x1646c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1646C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646C4u;
        // 0x1646c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646c4) {
            ctx->pc = 0x1647C8u;
            goto label_1647c8;
        }
    }
    ctx->pc = 0x1646CCu;
label_1646cc:
    // 0x1646cc: 0x8f828654  lw          $v0, -0x79AC($gp)
    ctx->pc = 0x1646ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936148)));
label_1646d0:
    // 0x1646d0: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x1646d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1646d4:
    // 0x1646d4: 0x8f85864c  lw          $a1, -0x79B4($gp)
    ctx->pc = 0x1646d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936140)));
label_1646d8:
    // 0x1646d8: 0x8f838650  lw          $v1, -0x79B0($gp)
    ctx->pc = 0x1646d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936144)));
label_1646dc:
    // 0x1646dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1646e0:
    if (ctx->pc == 0x1646E0u) {
        ctx->pc = 0x1646E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646DCu;
        // 0x1646e0: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1646E4u;
        goto label_1646e4;
    }
    ctx->pc = 0x1646DCu;
    {
        const bool branch_taken_0x1646dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1646E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646DCu;
        // 0x1646e0: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646dc) {
            ctx->pc = 0x1646ECu;
            goto label_1646ec;
        }
    }
    ctx->pc = 0x1646E4u;
label_1646e4:
    // 0x1646e4: 0x10000038  b           . + 4 + (0x38 << 2)
label_1646e8:
    if (ctx->pc == 0x1646E8u) {
        ctx->pc = 0x1646ECu;
        goto label_1646ec;
    }
    ctx->pc = 0x1646E4u;
    {
        const bool branch_taken_0x1646e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1646e4) {
            ctx->pc = 0x1647C8u;
            goto label_1647c8;
        }
    }
    ctx->pc = 0x1646ECu;
label_1646ec:
    // 0x1646ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1646f0:
    if (ctx->pc == 0x1646F0u) {
        ctx->pc = 0x1646F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646ECu;
        // 0x1646f0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1646F4u;
        goto label_1646f4;
    }
    ctx->pc = 0x1646ECu;
    {
        const bool branch_taken_0x1646ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1646F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646ECu;
        // 0x1646f0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646ec) {
            ctx->pc = 0x1646FCu;
            goto label_1646fc;
        }
    }
    ctx->pc = 0x1646F4u;
label_1646f4:
    // 0x1646f4: 0x10000034  b           . + 4 + (0x34 << 2)
label_1646f8:
    if (ctx->pc == 0x1646F8u) {
        ctx->pc = 0x1646F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646F4u;
        // 0x1646f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1646FCu;
        goto label_1646fc;
    }
    ctx->pc = 0x1646F4u;
    {
        const bool branch_taken_0x1646f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1646F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646F4u;
        // 0x1646f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646f4) {
            ctx->pc = 0x1647C8u;
            goto label_1647c8;
        }
    }
    ctx->pc = 0x1646FCu;
label_1646fc:
    // 0x1646fc: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x1646fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
label_164700:
    // 0x164700: 0x87868648  lh          $a2, -0x79B8($gp)
    ctx->pc = 0x164700u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936136)));
label_164704:
    // 0x164704: 0xa4460002  sh          $a2, 0x2($v0)
    ctx->pc = 0x164704u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 6));
label_164708:
    // 0x164708: 0xa4440004  sh          $a0, 0x4($v0)
    ctx->pc = 0x164708u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
label_16470c:
    // 0x16470c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_164710:
    if (ctx->pc == 0x164710u) {
        ctx->pc = 0x164710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16470Cu;
        // 0x164710: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164714u;
        goto label_164714;
    }
    ctx->pc = 0x16470Cu;
    {
        const bool branch_taken_0x16470c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x164710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16470Cu;
        // 0x164710: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16470c) {
            ctx->pc = 0x164720u;
            goto label_164720;
        }
    }
    ctx->pc = 0x164714u;
label_164714:
    // 0x164714: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x164714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_164718:
    // 0x164718: 0x10000003  b           . + 4 + (0x3 << 2)
label_16471c:
    if (ctx->pc == 0x16471Cu) {
        ctx->pc = 0x16471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164718u;
        // 0x16471c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164720u;
        goto label_164720;
    }
    ctx->pc = 0x164718u;
    {
        const bool branch_taken_0x164718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164718u;
        // 0x16471c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164718) {
            ctx->pc = 0x164728u;
            goto label_164728;
        }
    }
    ctx->pc = 0x164720u;
label_164720:
    // 0x164720: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x164720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
label_164724:
    // 0x164724: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x164724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_164728:
    // 0x164728: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x164728u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_16472c:
    // 0x16472c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x16472cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_164730:
    // 0x164730: 0x10a40023  beq         $a1, $a0, . + 4 + (0x23 << 2)
label_164734:
    if (ctx->pc == 0x164734u) {
        ctx->pc = 0x164734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164730u;
        // 0x164734: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164738u;
        goto label_164738;
    }
    ctx->pc = 0x164730u;
    {
        const bool branch_taken_0x164730 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x164734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164730u;
        // 0x164734: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164730) {
            ctx->pc = 0x1647C0u;
            goto label_1647c0;
        }
    }
    ctx->pc = 0x164738u;
label_164738:
    // 0x164738: 0x10a4001e  beq         $a1, $a0, . + 4 + (0x1E << 2)
label_16473c:
    if (ctx->pc == 0x16473Cu) {
        ctx->pc = 0x164740u;
        goto label_164740;
    }
    ctx->pc = 0x164738u;
    {
        const bool branch_taken_0x164738 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x164738) {
            ctx->pc = 0x1647B4u;
            goto label_1647b4;
        }
    }
    ctx->pc = 0x164740u;
label_164740:
    // 0x164740: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x164740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_164744:
    // 0x164744: 0x10a40018  beq         $a1, $a0, . + 4 + (0x18 << 2)
label_164748:
    if (ctx->pc == 0x164748u) {
        ctx->pc = 0x164748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164744u;
        // 0x164748: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16474Cu;
        goto label_16474c;
    }
    ctx->pc = 0x164744u;
    {
        const bool branch_taken_0x164744 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x164748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164744u;
        // 0x164748: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164744) {
            ctx->pc = 0x1647A8u;
            goto label_1647a8;
        }
    }
    ctx->pc = 0x16474Cu;
label_16474c:
    // 0x16474c: 0x10a40013  beq         $a1, $a0, . + 4 + (0x13 << 2)
label_164750:
    if (ctx->pc == 0x164750u) {
        ctx->pc = 0x164754u;
        goto label_164754;
    }
    ctx->pc = 0x16474Cu;
    {
        const bool branch_taken_0x16474c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x16474c) {
            ctx->pc = 0x16479Cu;
            goto label_16479c;
        }
    }
    ctx->pc = 0x164754u;
label_164754:
    // 0x164754: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x164754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_164758:
    // 0x164758: 0x10a4000d  beq         $a1, $a0, . + 4 + (0xD << 2)
label_16475c:
    if (ctx->pc == 0x16475Cu) {
        ctx->pc = 0x16475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164758u;
        // 0x16475c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164760u;
        goto label_164760;
    }
    ctx->pc = 0x164758u;
    {
        const bool branch_taken_0x164758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x16475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164758u;
        // 0x16475c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164758) {
            ctx->pc = 0x164790u;
            goto label_164790;
        }
    }
    ctx->pc = 0x164760u;
label_164760:
    // 0x164760: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
label_164764:
    if (ctx->pc == 0x164764u) {
        ctx->pc = 0x164768u;
        goto label_164768;
    }
    ctx->pc = 0x164760u;
    {
        const bool branch_taken_0x164760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x164760) {
            ctx->pc = 0x164784u;
            goto label_164784;
        }
    }
    ctx->pc = 0x164768u;
label_164768:
    // 0x164768: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_16476c:
    if (ctx->pc == 0x16476Cu) {
        ctx->pc = 0x164770u;
        goto label_164770;
    }
    ctx->pc = 0x164768u;
    {
        const bool branch_taken_0x164768 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x164768) {
            ctx->pc = 0x164778u;
            goto label_164778;
        }
    }
    ctx->pc = 0x164770u;
label_164770:
    // 0x164770: 0x10000015  b           . + 4 + (0x15 << 2)
label_164774:
    if (ctx->pc == 0x164774u) {
        ctx->pc = 0x164778u;
        goto label_164778;
    }
    ctx->pc = 0x164770u;
    {
        const bool branch_taken_0x164770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164770) {
            ctx->pc = 0x1647C8u;
            goto label_1647c8;
        }
    }
    ctx->pc = 0x164778u;
label_164778:
    // 0x164778: 0xaf838698  sw          $v1, -0x7968($gp)
    ctx->pc = 0x164778u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936216), GPR_U32(ctx, 3));
label_16477c:
    // 0x16477c: 0x10000012  b           . + 4 + (0x12 << 2)
label_164780:
    if (ctx->pc == 0x164780u) {
        ctx->pc = 0x164780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16477Cu;
        // 0x164780: 0xaf828694  sw          $v0, -0x796C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164784u;
        goto label_164784;
    }
    ctx->pc = 0x16477Cu;
    {
        const bool branch_taken_0x16477c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16477Cu;
        // 0x164780: 0xaf828694  sw          $v0, -0x796C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16477c) {
            ctx->pc = 0x1647C8u;
            goto label_1647c8;
        }
    }
    ctx->pc = 0x164784u;
label_164784:
    // 0x164784: 0xaf83868c  sw          $v1, -0x7974($gp)
    ctx->pc = 0x164784u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936204), GPR_U32(ctx, 3));
label_164788:
    // 0x164788: 0x1000000f  b           . + 4 + (0xF << 2)
label_16478c:
    if (ctx->pc == 0x16478Cu) {
        ctx->pc = 0x16478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164788u;
        // 0x16478c: 0xaf828688  sw          $v0, -0x7978($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164790u;
        goto label_164790;
    }
    ctx->pc = 0x164788u;
    {
        const bool branch_taken_0x164788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164788u;
        // 0x16478c: 0xaf828688  sw          $v0, -0x7978($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164788) {
            ctx->pc = 0x1647C8u;
            goto label_1647c8;
        }
    }
    ctx->pc = 0x164790u;
label_164790:
    // 0x164790: 0xaf838674  sw          $v1, -0x798C($gp)
    ctx->pc = 0x164790u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936180), GPR_U32(ctx, 3));
label_164794:
    // 0x164794: 0x1000000c  b           . + 4 + (0xC << 2)
label_164798:
    if (ctx->pc == 0x164798u) {
        ctx->pc = 0x164798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164794u;
        // 0x164798: 0xaf828670  sw          $v0, -0x7990($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16479Cu;
        goto label_16479c;
    }
    ctx->pc = 0x164794u;
    {
        const bool branch_taken_0x164794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164794u;
        // 0x164798: 0xaf828670  sw          $v0, -0x7990($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164794) {
            ctx->pc = 0x1647C8u;
            goto label_1647c8;
        }
    }
    ctx->pc = 0x16479Cu;
label_16479c:
    // 0x16479c: 0xaf83865c  sw          $v1, -0x79A4($gp)
    ctx->pc = 0x16479cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 3));
label_1647a0:
    // 0x1647a0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1647a4:
    if (ctx->pc == 0x1647A4u) {
        ctx->pc = 0x1647A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647A0u;
        // 0x1647a4: 0xaf828658  sw          $v0, -0x79A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1647A8u;
        goto label_1647a8;
    }
    ctx->pc = 0x1647A0u;
    {
        const bool branch_taken_0x1647a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1647A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647A0u;
        // 0x1647a4: 0xaf828658  sw          $v0, -0x79A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647a0) {
            ctx->pc = 0x1647C8u;
            goto label_1647c8;
        }
    }
    ctx->pc = 0x1647A8u;
label_1647a8:
    // 0x1647a8: 0xaf838680  sw          $v1, -0x7980($gp)
    ctx->pc = 0x1647a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936192), GPR_U32(ctx, 3));
label_1647ac:
    // 0x1647ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_1647b0:
    if (ctx->pc == 0x1647B0u) {
        ctx->pc = 0x1647B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647ACu;
        // 0x1647b0: 0xaf82867c  sw          $v0, -0x7984($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1647B4u;
        goto label_1647b4;
    }
    ctx->pc = 0x1647ACu;
    {
        const bool branch_taken_0x1647ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1647B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647ACu;
        // 0x1647b0: 0xaf82867c  sw          $v0, -0x7984($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647ac) {
            ctx->pc = 0x1647C8u;
            goto label_1647c8;
        }
    }
    ctx->pc = 0x1647B4u;
label_1647b4:
    // 0x1647b4: 0xaf838668  sw          $v1, -0x7998($gp)
    ctx->pc = 0x1647b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936168), GPR_U32(ctx, 3));
label_1647b8:
    // 0x1647b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1647bc:
    if (ctx->pc == 0x1647BCu) {
        ctx->pc = 0x1647BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647B8u;
        // 0x1647bc: 0xaf828664  sw          $v0, -0x799C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1647C0u;
        goto label_1647c0;
    }
    ctx->pc = 0x1647B8u;
    {
        const bool branch_taken_0x1647b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1647BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647B8u;
        // 0x1647bc: 0xaf828664  sw          $v0, -0x799C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647b8) {
            ctx->pc = 0x1647C8u;
            goto label_1647c8;
        }
    }
    ctx->pc = 0x1647C0u;
label_1647c0:
    // 0x1647c0: 0xaf838650  sw          $v1, -0x79B0($gp)
    ctx->pc = 0x1647c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936144), GPR_U32(ctx, 3));
label_1647c4:
    // 0x1647c4: 0xaf82864c  sw          $v0, -0x79B4($gp)
    ctx->pc = 0x1647c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936140), GPR_U32(ctx, 2));
label_1647c8:
    // 0x1647c8: 0x3e00008  jr          $ra
label_1647cc:
    if (ctx->pc == 0x1647CCu) {
        ctx->pc = 0x1647D0u;
        goto label_1647d0;
    }
    ctx->pc = 0x1647C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1647C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1647D0u;
label_1647d0:
    // 0x1647d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1647d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1647d4:
    // 0x1647d4: 0x3e00008  jr          $ra
label_1647d8:
    if (ctx->pc == 0x1647D8u) {
        ctx->pc = 0x1647D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647D4u;
        // 0x1647d8: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1647DCu;
        goto label_1647dc;
    }
    ctx->pc = 0x1647D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1647D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647D4u;
        // 0x1647d8: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1647D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1647DCu;
label_1647dc:
    // 0x1647dc: 0x0  nop
    ctx->pc = 0x1647dcu;
    // NOP
label_1647e0:
    // 0x1647e0: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1647e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
label_1647e4:
    // 0x1647e4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1647e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1647e8:
    // 0x1647e8: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x1647e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
label_1647ec:
    // 0x1647ec: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x1647ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1647f0:
    // 0x1647f0: 0x10a30023  beq         $a1, $v1, . + 4 + (0x23 << 2)
label_1647f4:
    if (ctx->pc == 0x1647F4u) {
        ctx->pc = 0x1647F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647F0u;
        // 0x1647f4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1647F8u;
        goto label_1647f8;
    }
    ctx->pc = 0x1647F0u;
    {
        const bool branch_taken_0x1647f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1647F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647F0u;
        // 0x1647f4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647f0) {
            ctx->pc = 0x164880u;
            goto label_164880;
        }
    }
    ctx->pc = 0x1647F8u;
label_1647f8:
    // 0x1647f8: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
label_1647fc:
    if (ctx->pc == 0x1647FCu) {
        ctx->pc = 0x164800u;
        goto label_164800;
    }
    ctx->pc = 0x1647F8u;
    {
        const bool branch_taken_0x1647f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1647f8) {
            ctx->pc = 0x164874u;
            goto label_164874;
        }
    }
    ctx->pc = 0x164800u;
label_164800:
    // 0x164800: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x164800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_164804:
    // 0x164804: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_164808:
    if (ctx->pc == 0x164808u) {
        ctx->pc = 0x164808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164804u;
        // 0x164808: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16480Cu;
        goto label_16480c;
    }
    ctx->pc = 0x164804u;
    {
        const bool branch_taken_0x164804 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x164808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164804u;
        // 0x164808: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164804) {
            ctx->pc = 0x164868u;
            goto label_164868;
        }
    }
    ctx->pc = 0x16480Cu;
label_16480c:
    // 0x16480c: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_164810:
    if (ctx->pc == 0x164810u) {
        ctx->pc = 0x164814u;
        goto label_164814;
    }
    ctx->pc = 0x16480Cu;
    {
        const bool branch_taken_0x16480c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x16480c) {
            ctx->pc = 0x16485Cu;
            goto label_16485c;
        }
    }
    ctx->pc = 0x164814u;
label_164814:
    // 0x164814: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x164814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_164818:
    // 0x164818: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
label_16481c:
    if (ctx->pc == 0x16481Cu) {
        ctx->pc = 0x16481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164818u;
        // 0x16481c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164820u;
        goto label_164820;
    }
    ctx->pc = 0x164818u;
    {
        const bool branch_taken_0x164818 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x16481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164818u;
        // 0x16481c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164818) {
            ctx->pc = 0x164850u;
            goto label_164850;
        }
    }
    ctx->pc = 0x164820u;
label_164820:
    // 0x164820: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_164824:
    if (ctx->pc == 0x164824u) {
        ctx->pc = 0x164828u;
        goto label_164828;
    }
    ctx->pc = 0x164820u;
    {
        const bool branch_taken_0x164820 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x164820) {
            ctx->pc = 0x164844u;
            goto label_164844;
        }
    }
    ctx->pc = 0x164828u;
label_164828:
    // 0x164828: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_16482c:
    if (ctx->pc == 0x16482Cu) {
        ctx->pc = 0x164830u;
        goto label_164830;
    }
    ctx->pc = 0x164828u;
    {
        const bool branch_taken_0x164828 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x164828) {
            ctx->pc = 0x164838u;
            goto label_164838;
        }
    }
    ctx->pc = 0x164830u;
label_164830:
    // 0x164830: 0x10000016  b           . + 4 + (0x16 << 2)
label_164834:
    if (ctx->pc == 0x164834u) {
        ctx->pc = 0x164838u;
        goto label_164838;
    }
    ctx->pc = 0x164830u;
    {
        const bool branch_taken_0x164830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164830) {
            ctx->pc = 0x16488Cu;
            goto label_16488c;
        }
    }
    ctx->pc = 0x164838u;
label_164838:
    // 0x164838: 0x8f878694  lw          $a3, -0x796C($gp)
    ctx->pc = 0x164838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936212)));
label_16483c:
    // 0x16483c: 0x10000015  b           . + 4 + (0x15 << 2)
label_164840:
    if (ctx->pc == 0x164840u) {
        ctx->pc = 0x164840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16483Cu;
        // 0x164840: 0x8f868698  lw          $a2, -0x7968($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164844u;
        goto label_164844;
    }
    ctx->pc = 0x16483Cu;
    {
        const bool branch_taken_0x16483c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16483Cu;
        // 0x164840: 0x8f868698  lw          $a2, -0x7968($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16483c) {
            ctx->pc = 0x164894u;
            goto label_164894;
        }
    }
    ctx->pc = 0x164844u;
label_164844:
    // 0x164844: 0x8f878688  lw          $a3, -0x7978($gp)
    ctx->pc = 0x164844u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936200)));
label_164848:
    // 0x164848: 0x10000012  b           . + 4 + (0x12 << 2)
label_16484c:
    if (ctx->pc == 0x16484Cu) {
        ctx->pc = 0x16484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164848u;
        // 0x16484c: 0x8f86868c  lw          $a2, -0x7974($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164850u;
        goto label_164850;
    }
    ctx->pc = 0x164848u;
    {
        const bool branch_taken_0x164848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164848u;
        // 0x16484c: 0x8f86868c  lw          $a2, -0x7974($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164848) {
            ctx->pc = 0x164894u;
            goto label_164894;
        }
    }
    ctx->pc = 0x164850u;
label_164850:
    // 0x164850: 0x8f878670  lw          $a3, -0x7990($gp)
    ctx->pc = 0x164850u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936176)));
label_164854:
    // 0x164854: 0x1000000f  b           . + 4 + (0xF << 2)
label_164858:
    if (ctx->pc == 0x164858u) {
        ctx->pc = 0x164858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164854u;
        // 0x164858: 0x8f868674  lw          $a2, -0x798C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16485Cu;
        goto label_16485c;
    }
    ctx->pc = 0x164854u;
    {
        const bool branch_taken_0x164854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164854u;
        // 0x164858: 0x8f868674  lw          $a2, -0x798C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164854) {
            ctx->pc = 0x164894u;
            goto label_164894;
        }
    }
    ctx->pc = 0x16485Cu;
label_16485c:
    // 0x16485c: 0x8f878658  lw          $a3, -0x79A8($gp)
    ctx->pc = 0x16485cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936152)));
label_164860:
    // 0x164860: 0x1000000c  b           . + 4 + (0xC << 2)
label_164864:
    if (ctx->pc == 0x164864u) {
        ctx->pc = 0x164864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164860u;
        // 0x164864: 0x8f86865c  lw          $a2, -0x79A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164868u;
        goto label_164868;
    }
    ctx->pc = 0x164860u;
    {
        const bool branch_taken_0x164860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164860u;
        // 0x164864: 0x8f86865c  lw          $a2, -0x79A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164860) {
            ctx->pc = 0x164894u;
            goto label_164894;
        }
    }
    ctx->pc = 0x164868u;
label_164868:
    // 0x164868: 0x8f87867c  lw          $a3, -0x7984($gp)
    ctx->pc = 0x164868u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936188)));
label_16486c:
    // 0x16486c: 0x10000009  b           . + 4 + (0x9 << 2)
label_164870:
    if (ctx->pc == 0x164870u) {
        ctx->pc = 0x164870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16486Cu;
        // 0x164870: 0x8f868680  lw          $a2, -0x7980($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164874u;
        goto label_164874;
    }
    ctx->pc = 0x16486Cu;
    {
        const bool branch_taken_0x16486c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16486Cu;
        // 0x164870: 0x8f868680  lw          $a2, -0x7980($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16486c) {
            ctx->pc = 0x164894u;
            goto label_164894;
        }
    }
    ctx->pc = 0x164874u;
label_164874:
    // 0x164874: 0x8f878664  lw          $a3, -0x799C($gp)
    ctx->pc = 0x164874u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936164)));
label_164878:
    // 0x164878: 0x10000006  b           . + 4 + (0x6 << 2)
label_16487c:
    if (ctx->pc == 0x16487Cu) {
        ctx->pc = 0x16487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164878u;
        // 0x16487c: 0x8f868668  lw          $a2, -0x7998($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164880u;
        goto label_164880;
    }
    ctx->pc = 0x164878u;
    {
        const bool branch_taken_0x164878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164878u;
        // 0x16487c: 0x8f868668  lw          $a2, -0x7998($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164878) {
            ctx->pc = 0x164894u;
            goto label_164894;
        }
    }
    ctx->pc = 0x164880u;
label_164880:
    // 0x164880: 0x8f87864c  lw          $a3, -0x79B4($gp)
    ctx->pc = 0x164880u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936140)));
label_164884:
    // 0x164884: 0x10000003  b           . + 4 + (0x3 << 2)
label_164888:
    if (ctx->pc == 0x164888u) {
        ctx->pc = 0x164888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164884u;
        // 0x164888: 0x8f868650  lw          $a2, -0x79B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16488Cu;
        goto label_16488c;
    }
    ctx->pc = 0x164884u;
    {
        const bool branch_taken_0x164884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164884u;
        // 0x164888: 0x8f868650  lw          $a2, -0x79B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164884) {
            ctx->pc = 0x164894u;
            goto label_164894;
        }
    }
    ctx->pc = 0x16488Cu;
label_16488c:
    // 0x16488c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_164890:
    if (ctx->pc == 0x164890u) {
        ctx->pc = 0x164894u;
        goto label_164894;
    }
    ctx->pc = 0x16488Cu;
    {
        const bool branch_taken_0x16488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16488c) {
            ctx->pc = 0x164988u;
            goto label_164988;
        }
    }
    ctx->pc = 0x164894u;
label_164894:
    // 0x164894: 0x14c70004  bne         $a2, $a3, . + 4 + (0x4 << 2)
label_164898:
    if (ctx->pc == 0x164898u) {
        ctx->pc = 0x16489Cu;
        goto label_16489c;
    }
    ctx->pc = 0x164894u;
    {
        const bool branch_taken_0x164894 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x164894) {
            ctx->pc = 0x1648A8u;
            goto label_1648a8;
        }
    }
    ctx->pc = 0x16489Cu;
label_16489c:
    // 0x16489c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16489cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1648a0:
    // 0x1648a0: 0x10000011  b           . + 4 + (0x11 << 2)
label_1648a4:
    if (ctx->pc == 0x1648A4u) {
        ctx->pc = 0x1648A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648A0u;
        // 0x1648a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1648A8u;
        goto label_1648a8;
    }
    ctx->pc = 0x1648A0u;
    {
        const bool branch_taken_0x1648a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1648A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648A0u;
        // 0x1648a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648a0) {
            ctx->pc = 0x1648E8u;
            goto label_1648e8;
        }
    }
    ctx->pc = 0x1648A8u;
label_1648a8:
    // 0x1648a8: 0x14c40004  bne         $a2, $a0, . + 4 + (0x4 << 2)
label_1648ac:
    if (ctx->pc == 0x1648ACu) {
        ctx->pc = 0x1648B0u;
        goto label_1648b0;
    }
    ctx->pc = 0x1648A8u;
    {
        const bool branch_taken_0x1648a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x1648a8) {
            ctx->pc = 0x1648BCu;
            goto label_1648bc;
        }
    }
    ctx->pc = 0x1648B0u;
label_1648b0:
    // 0x1648b0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1648b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1648b4:
    // 0x1648b4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1648b8:
    if (ctx->pc == 0x1648B8u) {
        ctx->pc = 0x1648B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648B4u;
        // 0x1648b8: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1648BCu;
        goto label_1648bc;
    }
    ctx->pc = 0x1648B4u;
    {
        const bool branch_taken_0x1648b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1648B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648B4u;
        // 0x1648b8: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648b4) {
            ctx->pc = 0x1648E8u;
            goto label_1648e8;
        }
    }
    ctx->pc = 0x1648BCu;
label_1648bc:
    // 0x1648bc: 0x14e40004  bne         $a3, $a0, . + 4 + (0x4 << 2)
label_1648c0:
    if (ctx->pc == 0x1648C0u) {
        ctx->pc = 0x1648C4u;
        goto label_1648c4;
    }
    ctx->pc = 0x1648BCu;
    {
        const bool branch_taken_0x1648bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x1648bc) {
            ctx->pc = 0x1648D0u;
            goto label_1648d0;
        }
    }
    ctx->pc = 0x1648C4u;
label_1648c4:
    // 0x1648c4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1648c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1648c8:
    // 0x1648c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1648cc:
    if (ctx->pc == 0x1648CCu) {
        ctx->pc = 0x1648CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648C8u;
        // 0x1648cc: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1648D0u;
        goto label_1648d0;
    }
    ctx->pc = 0x1648C8u;
    {
        const bool branch_taken_0x1648c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1648CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648C8u;
        // 0x1648cc: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648c8) {
            ctx->pc = 0x1648E8u;
            goto label_1648e8;
        }
    }
    ctx->pc = 0x1648D0u;
label_1648d0:
    // 0x1648d0: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1648d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1648d4:
    // 0x1648d4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1648d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1648d8:
    // 0x1648d8: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1648d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1648dc:
    // 0x1648dc: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1648dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1648e0:
    // 0x1648e0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1648e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1648e4:
    // 0x1648e4: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x1648e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
label_1648e8:
    // 0x1648e8: 0x94840004  lhu         $a0, 0x4($a0)
    ctx->pc = 0x1648e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1648ec:
    // 0x1648ec: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1648ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1648f0:
    // 0x1648f0: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
label_1648f4:
    if (ctx->pc == 0x1648F4u) {
        ctx->pc = 0x1648F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648F0u;
        // 0x1648f4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1648F8u;
        goto label_1648f8;
    }
    ctx->pc = 0x1648F0u;
    {
        const bool branch_taken_0x1648f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1648F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648F0u;
        // 0x1648f4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648f0) {
            ctx->pc = 0x164980u;
            goto label_164980;
        }
    }
    ctx->pc = 0x1648F8u;
label_1648f8:
    // 0x1648f8: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
label_1648fc:
    if (ctx->pc == 0x1648FCu) {
        ctx->pc = 0x164900u;
        goto label_164900;
    }
    ctx->pc = 0x1648F8u;
    {
        const bool branch_taken_0x1648f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1648f8) {
            ctx->pc = 0x164974u;
            goto label_164974;
        }
    }
    ctx->pc = 0x164900u;
label_164900:
    // 0x164900: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x164900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_164904:
    // 0x164904: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
label_164908:
    if (ctx->pc == 0x164908u) {
        ctx->pc = 0x164908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164904u;
        // 0x164908: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16490Cu;
        goto label_16490c;
    }
    ctx->pc = 0x164904u;
    {
        const bool branch_taken_0x164904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x164908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164904u;
        // 0x164908: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164904) {
            ctx->pc = 0x164968u;
            goto label_164968;
        }
    }
    ctx->pc = 0x16490Cu;
label_16490c:
    // 0x16490c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
label_164910:
    if (ctx->pc == 0x164910u) {
        ctx->pc = 0x164914u;
        goto label_164914;
    }
    ctx->pc = 0x16490Cu;
    {
        const bool branch_taken_0x16490c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16490c) {
            ctx->pc = 0x16495Cu;
            goto label_16495c;
        }
    }
    ctx->pc = 0x164914u;
label_164914:
    // 0x164914: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x164914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_164918:
    // 0x164918: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_16491c:
    if (ctx->pc == 0x16491Cu) {
        ctx->pc = 0x16491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164918u;
        // 0x16491c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164920u;
        goto label_164920;
    }
    ctx->pc = 0x164918u;
    {
        const bool branch_taken_0x164918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164918u;
        // 0x16491c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164918) {
            ctx->pc = 0x164950u;
            goto label_164950;
        }
    }
    ctx->pc = 0x164920u;
label_164920:
    // 0x164920: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_164924:
    if (ctx->pc == 0x164924u) {
        ctx->pc = 0x164928u;
        goto label_164928;
    }
    ctx->pc = 0x164920u;
    {
        const bool branch_taken_0x164920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x164920) {
            ctx->pc = 0x164944u;
            goto label_164944;
        }
    }
    ctx->pc = 0x164928u;
label_164928:
    // 0x164928: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_16492c:
    if (ctx->pc == 0x16492Cu) {
        ctx->pc = 0x164930u;
        goto label_164930;
    }
    ctx->pc = 0x164928u;
    {
        const bool branch_taken_0x164928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x164928) {
            ctx->pc = 0x164938u;
            goto label_164938;
        }
    }
    ctx->pc = 0x164930u;
label_164930:
    // 0x164930: 0x10000015  b           . + 4 + (0x15 << 2)
label_164934:
    if (ctx->pc == 0x164934u) {
        ctx->pc = 0x164938u;
        goto label_164938;
    }
    ctx->pc = 0x164930u;
    {
        const bool branch_taken_0x164930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164930) {
            ctx->pc = 0x164988u;
            goto label_164988;
        }
    }
    ctx->pc = 0x164938u;
label_164938:
    // 0x164938: 0xaf868698  sw          $a2, -0x7968($gp)
    ctx->pc = 0x164938u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936216), GPR_U32(ctx, 6));
label_16493c:
    // 0x16493c: 0x10000012  b           . + 4 + (0x12 << 2)
label_164940:
    if (ctx->pc == 0x164940u) {
        ctx->pc = 0x164940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16493Cu;
        // 0x164940: 0xaf878694  sw          $a3, -0x796C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936212), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164944u;
        goto label_164944;
    }
    ctx->pc = 0x16493Cu;
    {
        const bool branch_taken_0x16493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16493Cu;
        // 0x164940: 0xaf878694  sw          $a3, -0x796C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936212), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16493c) {
            ctx->pc = 0x164988u;
            goto label_164988;
        }
    }
    ctx->pc = 0x164944u;
label_164944:
    // 0x164944: 0xaf86868c  sw          $a2, -0x7974($gp)
    ctx->pc = 0x164944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936204), GPR_U32(ctx, 6));
label_164948:
    // 0x164948: 0x1000000f  b           . + 4 + (0xF << 2)
label_16494c:
    if (ctx->pc == 0x16494Cu) {
        ctx->pc = 0x16494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164948u;
        // 0x16494c: 0xaf878688  sw          $a3, -0x7978($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936200), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164950u;
        goto label_164950;
    }
    ctx->pc = 0x164948u;
    {
        const bool branch_taken_0x164948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164948u;
        // 0x16494c: 0xaf878688  sw          $a3, -0x7978($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936200), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164948) {
            ctx->pc = 0x164988u;
            goto label_164988;
        }
    }
    ctx->pc = 0x164950u;
label_164950:
    // 0x164950: 0xaf868674  sw          $a2, -0x798C($gp)
    ctx->pc = 0x164950u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936180), GPR_U32(ctx, 6));
label_164954:
    // 0x164954: 0x1000000c  b           . + 4 + (0xC << 2)
label_164958:
    if (ctx->pc == 0x164958u) {
        ctx->pc = 0x164958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164954u;
        // 0x164958: 0xaf878670  sw          $a3, -0x7990($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936176), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16495Cu;
        goto label_16495c;
    }
    ctx->pc = 0x164954u;
    {
        const bool branch_taken_0x164954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164954u;
        // 0x164958: 0xaf878670  sw          $a3, -0x7990($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936176), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164954) {
            ctx->pc = 0x164988u;
            goto label_164988;
        }
    }
    ctx->pc = 0x16495Cu;
label_16495c:
    // 0x16495c: 0xaf86865c  sw          $a2, -0x79A4($gp)
    ctx->pc = 0x16495cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 6));
label_164960:
    // 0x164960: 0x10000009  b           . + 4 + (0x9 << 2)
label_164964:
    if (ctx->pc == 0x164964u) {
        ctx->pc = 0x164964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164960u;
        // 0x164964: 0xaf878658  sw          $a3, -0x79A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936152), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164968u;
        goto label_164968;
    }
    ctx->pc = 0x164960u;
    {
        const bool branch_taken_0x164960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164960u;
        // 0x164964: 0xaf878658  sw          $a3, -0x79A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936152), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164960) {
            ctx->pc = 0x164988u;
            goto label_164988;
        }
    }
    ctx->pc = 0x164968u;
label_164968:
    // 0x164968: 0xaf868680  sw          $a2, -0x7980($gp)
    ctx->pc = 0x164968u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936192), GPR_U32(ctx, 6));
label_16496c:
    // 0x16496c: 0x10000006  b           . + 4 + (0x6 << 2)
label_164970:
    if (ctx->pc == 0x164970u) {
        ctx->pc = 0x164970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16496Cu;
        // 0x164970: 0xaf87867c  sw          $a3, -0x7984($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936188), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164974u;
        goto label_164974;
    }
    ctx->pc = 0x16496Cu;
    {
        const bool branch_taken_0x16496c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16496Cu;
        // 0x164970: 0xaf87867c  sw          $a3, -0x7984($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936188), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16496c) {
            ctx->pc = 0x164988u;
            goto label_164988;
        }
    }
    ctx->pc = 0x164974u;
label_164974:
    // 0x164974: 0xaf868668  sw          $a2, -0x7998($gp)
    ctx->pc = 0x164974u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936168), GPR_U32(ctx, 6));
label_164978:
    // 0x164978: 0x10000003  b           . + 4 + (0x3 << 2)
label_16497c:
    if (ctx->pc == 0x16497Cu) {
        ctx->pc = 0x16497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164978u;
        // 0x16497c: 0xaf878664  sw          $a3, -0x799C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936164), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164980u;
        goto label_164980;
    }
    ctx->pc = 0x164978u;
    {
        const bool branch_taken_0x164978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164978u;
        // 0x16497c: 0xaf878664  sw          $a3, -0x799C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936164), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164978) {
            ctx->pc = 0x164988u;
            goto label_164988;
        }
    }
    ctx->pc = 0x164980u;
label_164980:
    // 0x164980: 0xaf868650  sw          $a2, -0x79B0($gp)
    ctx->pc = 0x164980u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936144), GPR_U32(ctx, 6));
label_164984:
    // 0x164984: 0xaf87864c  sw          $a3, -0x79B4($gp)
    ctx->pc = 0x164984u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936140), GPR_U32(ctx, 7));
label_164988:
    // 0x164988: 0x3e00008  jr          $ra
label_16498c:
    if (ctx->pc == 0x16498Cu) {
        ctx->pc = 0x164990u;
        goto label_164990;
    }
    ctx->pc = 0x164988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164990u;
label_164990:
    // 0x164990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_164994:
    // 0x164994: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x164994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_164998:
    // 0x164998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16499c:
    // 0x16499c: 0xc070080  jal         func_1C0200
label_1649a0:
    if (ctx->pc == 0x1649A0u) {
        ctx->pc = 0x1649A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16499Cu;
        // 0x1649a0: 0x24056720  addiu       $a1, $zero, 0x6720 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1649A4u;
        goto label_1649a4;
    }
    ctx->pc = 0x16499Cu;
    SET_GPR_U32(ctx, 31, 0x1649A4u);
    ctx->pc = 0x1649A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16499Cu;
    // 0x1649a0: 0x24056720  addiu       $a1, $zero, 0x6720 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1649A4u;
label_1649a4:
    // 0x1649a4: 0xaf82869c  sw          $v0, -0x7964($gp)
    ctx->pc = 0x1649a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936220), GPR_U32(ctx, 2));
label_1649a8:
    // 0x1649a8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1649a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1649ac:
    // 0x1649ac: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1649acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_1649b0:
    // 0x1649b0: 0xc070080  jal         func_1C0200
label_1649b4:
    if (ctx->pc == 0x1649B4u) {
        ctx->pc = 0x1649B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1649B0u;
        // 0x1649b4: 0x34450740  ori         $a1, $v0, 0x740 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1856);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1649B8u;
        goto label_1649b8;
    }
    ctx->pc = 0x1649B0u;
    SET_GPR_U32(ctx, 31, 0x1649B8u);
    ctx->pc = 0x1649B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649B0u;
    // 0x1649b4: 0x34450740  ori         $a1, $v0, 0x740 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1856);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1649B8u;
label_1649b8:
    // 0x1649b8: 0xaf828690  sw          $v0, -0x7970($gp)
    ctx->pc = 0x1649b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936208), GPR_U32(ctx, 2));
label_1649bc:
    // 0x1649bc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1649bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1649c0:
    // 0x1649c0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1649c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_1649c4:
    // 0x1649c4: 0xc070080  jal         func_1C0200
label_1649c8:
    if (ctx->pc == 0x1649C8u) {
        ctx->pc = 0x1649C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1649C4u;
        // 0x1649c8: 0x34450e80  ori         $a1, $v0, 0xE80 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3712);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1649CCu;
        goto label_1649cc;
    }
    ctx->pc = 0x1649C4u;
    SET_GPR_U32(ctx, 31, 0x1649CCu);
    ctx->pc = 0x1649C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649C4u;
    // 0x1649c8: 0x34450e80  ori         $a1, $v0, 0xE80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3712);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1649CCu;
label_1649cc:
    // 0x1649cc: 0xaf828684  sw          $v0, -0x797C($gp)
    ctx->pc = 0x1649ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936196), GPR_U32(ctx, 2));
label_1649d0:
    // 0x1649d0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1649d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1649d4:
    // 0x1649d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1649d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1649d8:
    // 0x1649d8: 0xc070080  jal         func_1C0200
label_1649dc:
    if (ctx->pc == 0x1649DCu) {
        ctx->pc = 0x1649DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1649D8u;
        // 0x1649dc: 0x3445a040  ori         $a1, $v0, 0xA040 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1649E0u;
        goto label_1649e0;
    }
    ctx->pc = 0x1649D8u;
    SET_GPR_U32(ctx, 31, 0x1649E0u);
    ctx->pc = 0x1649DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649D8u;
    // 0x1649dc: 0x3445a040  ori         $a1, $v0, 0xA040 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1649E0u;
label_1649e0:
    // 0x1649e0: 0xaf828678  sw          $v0, -0x7988($gp)
    ctx->pc = 0x1649e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936184), GPR_U32(ctx, 2));
label_1649e4:
    // 0x1649e4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1649e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1649e8:
    // 0x1649e8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1649e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_1649ec:
    // 0x1649ec: 0xc070080  jal         func_1C0200
label_1649f0:
    if (ctx->pc == 0x1649F0u) {
        ctx->pc = 0x1649F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1649ECu;
        // 0x1649f0: 0x34450140  ori         $a1, $v0, 0x140 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)320);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1649F4u;
        goto label_1649f4;
    }
    ctx->pc = 0x1649ECu;
    SET_GPR_U32(ctx, 31, 0x1649F4u);
    ctx->pc = 0x1649F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649ECu;
    // 0x1649f0: 0x34450140  ori         $a1, $v0, 0x140 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)320);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1649F4u;
label_1649f4:
    // 0x1649f4: 0xaf82866c  sw          $v0, -0x7994($gp)
    ctx->pc = 0x1649f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936172), GPR_U32(ctx, 2));
label_1649f8:
    // 0x1649f8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1649f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1649fc:
    // 0x1649fc: 0xc070080  jal         func_1C0200
label_164a00:
    if (ctx->pc == 0x164A00u) {
        ctx->pc = 0x164A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1649FCu;
        // 0x164a00: 0x24055780  addiu       $a1, $zero, 0x5780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164A04u;
        goto label_164a04;
    }
    ctx->pc = 0x1649FCu;
    SET_GPR_U32(ctx, 31, 0x164A04u);
    ctx->pc = 0x164A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649FCu;
    // 0x164a00: 0x24055780  addiu       $a1, $zero, 0x5780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x164A04u;
label_164a04:
    // 0x164a04: 0xaf828660  sw          $v0, -0x79A0($gp)
    ctx->pc = 0x164a04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936160), GPR_U32(ctx, 2));
label_164a08:
    // 0x164a08: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x164a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_164a0c:
    // 0x164a0c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x164a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_164a10:
    // 0x164a10: 0xc070080  jal         func_1C0200
label_164a14:
    if (ctx->pc == 0x164A14u) {
        ctx->pc = 0x164A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A10u;
        // 0x164a14: 0x34452cc0  ori         $a1, $v0, 0x2CC0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11456);
        ctx->in_delay_slot = false;
        ctx->pc = 0x164A18u;
        goto label_164a18;
    }
    ctx->pc = 0x164A10u;
    SET_GPR_U32(ctx, 31, 0x164A18u);
    ctx->pc = 0x164A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A10u;
    // 0x164a14: 0x34452cc0  ori         $a1, $v0, 0x2CC0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11456);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x164A18u;
label_164a18:
    // 0x164a18: 0xc05cde8  jal         func_1737A0
label_164a1c:
    if (ctx->pc == 0x164A1Cu) {
        ctx->pc = 0x164A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A18u;
        // 0x164a1c: 0xaf828654  sw          $v0, -0x79AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164A20u;
        goto label_164a20;
    }
    ctx->pc = 0x164A18u;
    SET_GPR_U32(ctx, 31, 0x164A20u);
    ctx->pc = 0x164A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A18u;
    // 0x164a1c: 0xaf828654  sw          $v0, -0x79AC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1737A0u;
    { ctx->pc = 0x1737a0; return; }
    ctx->pc = 0x164A20u;
label_164a20:
    // 0x164a20: 0xc07f10c  jal         func_1FC430
label_164a24:
    if (ctx->pc == 0x164A24u) {
        ctx->pc = 0x164A28u;
        goto label_164a28;
    }
    ctx->pc = 0x164A20u;
    SET_GPR_U32(ctx, 31, 0x164A28u);
    ctx->pc = 0x1FC430u;
    { ctx->pc = 0x1fc430; return; }
    ctx->pc = 0x164A28u;
label_164a28:
    // 0x164a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164a2c:
    // 0x164a2c: 0x3e00008  jr          $ra
label_164a30:
    if (ctx->pc == 0x164A30u) {
        ctx->pc = 0x164A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A2Cu;
        // 0x164a30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164A34u;
        goto label_164a34;
    }
    ctx->pc = 0x164A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A2Cu;
        // 0x164a30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164A34u;
label_164a34:
    // 0x164a34: 0x0  nop
    ctx->pc = 0x164a34u;
    // NOP
label_164a38:
    // 0x164a38: 0x0  nop
    ctx->pc = 0x164a38u;
    // NOP
label_164a3c:
    // 0x164a3c: 0x0  nop
    ctx->pc = 0x164a3cu;
    // NOP
label_164a40:
    // 0x164a40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_164a44:
    // 0x164a44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x164a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_164a48:
    // 0x164a48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_164a4c:
    // 0x164a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_164a50:
    // 0x164a50: 0x1000000d  b           . + 4 + (0xD << 2)
label_164a54:
    if (ctx->pc == 0x164A54u) {
        ctx->pc = 0x164A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A50u;
        // 0x164a54: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164A58u;
        goto label_164a58;
    }
    ctx->pc = 0x164A50u;
    {
        const bool branch_taken_0x164a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A50u;
        // 0x164a54: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a50) {
            ctx->pc = 0x164A88u;
            goto label_164a88;
        }
    }
    ctx->pc = 0x164A58u;
label_164a58:
    // 0x164a58: 0x8f8386b8  lw          $v1, -0x7948($gp)
    ctx->pc = 0x164a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
label_164a5c:
    // 0x164a5c: 0x3224001f  andi        $a0, $s1, 0x1F
    ctx->pc = 0x164a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
label_164a60:
    // 0x164a60: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x164a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_164a64:
    // 0x164a64: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x164a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_164a68:
    // 0x164a68: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_164a6c:
    if (ctx->pc == 0x164A6Cu) {
        ctx->pc = 0x164A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A68u;
        // 0x164a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164A70u;
        goto label_164a70;
    }
    ctx->pc = 0x164A68u;
    {
        const bool branch_taken_0x164a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A68u;
        // 0x164a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a68) {
            ctx->pc = 0x164A80u;
            goto label_164a80;
        }
    }
    ctx->pc = 0x164A70u;
label_164a70:
    // 0x164a70: 0xc0592ec  jal         func_164BB0
label_164a74:
    if (ctx->pc == 0x164A74u) {
        ctx->pc = 0x164A78u;
        goto label_164a78;
    }
    ctx->pc = 0x164A70u;
    SET_GPR_U32(ctx, 31, 0x164A78u);
    ctx->pc = 0x164BB0u;
    { ctx->pc = 0x164bb0; return; }
    ctx->pc = 0x164A78u;
label_164a78:
    // 0x164a78: 0xc04f5bc  jal         func_13D6F0
label_164a7c:
    if (ctx->pc == 0x164A7Cu) {
        ctx->pc = 0x164A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A78u;
        // 0x164a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164A80u;
        goto label_164a80;
    }
    ctx->pc = 0x164A78u;
    SET_GPR_U32(ctx, 31, 0x164A80u);
    ctx->pc = 0x164A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A78u;
    // 0x164a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D6F0u, 0x164A78u, 0x164A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A80u;
label_164a80:
    // 0x164a80: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x164a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_164a84:
    // 0x164a84: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x164a84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_164a88:
    // 0x164a88: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x164a88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_164a8c:
    // 0x164a8c: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x164a8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_164a90:
    // 0x164a90: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_164a94:
    if (ctx->pc == 0x164A94u) {
        ctx->pc = 0x164A98u;
        goto label_164a98;
    }
    ctx->pc = 0x164A90u;
    {
        const bool branch_taken_0x164a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164a90) {
            ctx->pc = 0x164A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164a58;
        }
    }
    ctx->pc = 0x164A98u;
label_164a98:
    // 0x164a98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x164a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_164a9c:
    // 0x164a9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_164aa0:
    // 0x164aa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_164aa4:
    // 0x164aa4: 0x3e00008  jr          $ra
label_164aa8:
    if (ctx->pc == 0x164AA8u) {
        ctx->pc = 0x164AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AA4u;
        // 0x164aa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164AACu;
        goto label_164aac;
    }
    ctx->pc = 0x164AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AA4u;
        // 0x164aa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164AACu;
label_164aac:
    // 0x164aac: 0x0  nop
    ctx->pc = 0x164aacu;
    // NOP
label_164ab0:
    // 0x164ab0: 0x8f8a85d0  lw          $t2, -0x7A30($gp)
    ctx->pc = 0x164ab0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_164ab4:
    // 0x164ab4: 0x1140001d  beqz        $t2, . + 4 + (0x1D << 2)
label_164ab8:
    if (ctx->pc == 0x164AB8u) {
        ctx->pc = 0x164AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AB4u;
        // 0x164ab8: 0x8f8984b0  lw          $t1, -0x7B50($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164ABCu;
        goto label_164abc;
    }
    ctx->pc = 0x164AB4u;
    {
        const bool branch_taken_0x164ab4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x164AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AB4u;
        // 0x164ab8: 0x8f8984b0  lw          $t1, -0x7B50($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ab4) {
            ctx->pc = 0x164B2Cu;
            goto label_164b2c;
        }
    }
    ctx->pc = 0x164ABCu;
label_164abc:
    // 0x164abc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x164abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_164ac0:
    // 0x164ac0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x164ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_164ac4:
    // 0x164ac4: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x164ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_164ac8:
    // 0x164ac8: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x164ac8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_164acc:
    // 0x164acc: 0x91430096  lbu         $v1, 0x96($t2)
    ctx->pc = 0x164accu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 150)));
label_164ad0:
    // 0x164ad0: 0x14680013  bne         $v1, $t0, . + 4 + (0x13 << 2)
label_164ad4:
    if (ctx->pc == 0x164AD4u) {
        ctx->pc = 0x164AD8u;
        goto label_164ad8;
    }
    ctx->pc = 0x164AD0u;
    {
        const bool branch_taken_0x164ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x164ad0) {
            ctx->pc = 0x164B20u;
            goto label_164b20;
        }
    }
    ctx->pc = 0x164AD8u;
label_164ad8:
    // 0x164ad8: 0x91430094  lbu         $v1, 0x94($t2)
    ctx->pc = 0x164ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 148)));
label_164adc:
    // 0x164adc: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_164ae0:
    if (ctx->pc == 0x164AE0u) {
        ctx->pc = 0x164AE4u;
        goto label_164ae4;
    }
    ctx->pc = 0x164ADCu;
    {
        const bool branch_taken_0x164adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164adc) {
            ctx->pc = 0x164B20u;
            goto label_164b20;
        }
    }
    ctx->pc = 0x164AE4u;
label_164ae4:
    // 0x164ae4: 0x91430097  lbu         $v1, 0x97($t2)
    ctx->pc = 0x164ae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 151)));
label_164ae8:
    // 0x164ae8: 0x14670006  bne         $v1, $a3, . + 4 + (0x6 << 2)
label_164aec:
    if (ctx->pc == 0x164AECu) {
        ctx->pc = 0x164AF0u;
        goto label_164af0;
    }
    ctx->pc = 0x164AE8u;
    {
        const bool branch_taken_0x164ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x164ae8) {
            ctx->pc = 0x164B04u;
            goto label_164b04;
        }
    }
    ctx->pc = 0x164AF0u;
label_164af0:
    // 0x164af0: 0xa1460097  sb          $a2, 0x97($t2)
    ctx->pc = 0x164af0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 151), (uint8_t)GPR_U32(ctx, 6));
label_164af4:
    // 0x164af4: 0x8d430090  lw          $v1, 0x90($t2)
    ctx->pc = 0x164af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 144)));
label_164af8:
    // 0x164af8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x164af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_164afc:
    // 0x164afc: 0x10000008  b           . + 4 + (0x8 << 2)
label_164b00:
    if (ctx->pc == 0x164B00u) {
        ctx->pc = 0x164B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AFCu;
        // 0x164b00: 0xad430090  sw          $v1, 0x90($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164B04u;
        goto label_164b04;
    }
    ctx->pc = 0x164AFCu;
    {
        const bool branch_taken_0x164afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AFCu;
        // 0x164b00: 0xad430090  sw          $v1, 0x90($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164afc) {
            ctx->pc = 0x164B20u;
            goto label_164b20;
        }
    }
    ctx->pc = 0x164B04u;
label_164b04:
    // 0x164b04: 0x0  nop
    ctx->pc = 0x164b04u;
    // NOP
label_164b08:
    // 0x164b08: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
label_164b0c:
    if (ctx->pc == 0x164B0Cu) {
        ctx->pc = 0x164B10u;
        goto label_164b10;
    }
    ctx->pc = 0x164B08u;
    {
        const bool branch_taken_0x164b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x164b08) {
            ctx->pc = 0x164B20u;
            goto label_164b20;
        }
    }
    ctx->pc = 0x164B10u;
label_164b10:
    // 0x164b10: 0xa1470097  sb          $a3, 0x97($t2)
    ctx->pc = 0x164b10u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 151), (uint8_t)GPR_U32(ctx, 7));
label_164b14:
    // 0x164b14: 0x8d430090  lw          $v1, 0x90($t2)
    ctx->pc = 0x164b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 144)));
label_164b18:
    // 0x164b18: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x164b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_164b1c:
    // 0x164b1c: 0xad430090  sw          $v1, 0x90($t2)
    ctx->pc = 0x164b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 144), GPR_U32(ctx, 3));
label_164b20:
    // 0x164b20: 0x8d4a0084  lw          $t2, 0x84($t2)
    ctx->pc = 0x164b20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
label_164b24:
    // 0x164b24: 0x1540ffe9  bnez        $t2, . + 4 + (-0x17 << 2)
label_164b28:
    if (ctx->pc == 0x164B28u) {
        ctx->pc = 0x164B2Cu;
        goto label_164b2c;
    }
    ctx->pc = 0x164B24u;
    {
        const bool branch_taken_0x164b24 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x164b24) {
            ctx->pc = 0x164ACCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164acc;
        }
    }
    ctx->pc = 0x164B2Cu;
label_164b2c:
    // 0x164b2c: 0x0  nop
    ctx->pc = 0x164b2cu;
    // NOP
    ctx->pc = 0x164b30u;
    return;
}
