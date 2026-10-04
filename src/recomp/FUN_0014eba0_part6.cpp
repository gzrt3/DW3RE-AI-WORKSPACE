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


void FUN_0014eba0_part6(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1512b0u: goto label_1512b0;
        case 0x1512b4u: goto label_1512b4;
        case 0x1512b8u: goto label_1512b8;
        case 0x1512bcu: goto label_1512bc;
        case 0x1512c0u: goto label_1512c0;
        case 0x1512c4u: goto label_1512c4;
        case 0x1512c8u: goto label_1512c8;
        case 0x1512ccu: goto label_1512cc;
        case 0x1512d0u: goto label_1512d0;
        case 0x1512d4u: goto label_1512d4;
        case 0x1512d8u: goto label_1512d8;
        case 0x1512dcu: goto label_1512dc;
        case 0x1512e0u: goto label_1512e0;
        case 0x1512e4u: goto label_1512e4;
        case 0x1512e8u: goto label_1512e8;
        case 0x1512ecu: goto label_1512ec;
        case 0x1512f0u: goto label_1512f0;
        case 0x1512f4u: goto label_1512f4;
        case 0x1512f8u: goto label_1512f8;
        case 0x1512fcu: goto label_1512fc;
        case 0x151300u: goto label_151300;
        case 0x151304u: goto label_151304;
        case 0x151308u: goto label_151308;
        case 0x15130cu: goto label_15130c;
        case 0x151310u: goto label_151310;
        case 0x151314u: goto label_151314;
        case 0x151318u: goto label_151318;
        case 0x15131cu: goto label_15131c;
        case 0x151320u: goto label_151320;
        case 0x151324u: goto label_151324;
        case 0x151328u: goto label_151328;
        case 0x15132cu: goto label_15132c;
        case 0x151330u: goto label_151330;
        case 0x151334u: goto label_151334;
        case 0x151338u: goto label_151338;
        case 0x15133cu: goto label_15133c;
        case 0x151340u: goto label_151340;
        case 0x151344u: goto label_151344;
        case 0x151348u: goto label_151348;
        case 0x15134cu: goto label_15134c;
        case 0x151350u: goto label_151350;
        case 0x151354u: goto label_151354;
        case 0x151358u: goto label_151358;
        case 0x15135cu: goto label_15135c;
        case 0x151360u: goto label_151360;
        case 0x151364u: goto label_151364;
        case 0x151368u: goto label_151368;
        case 0x15136cu: goto label_15136c;
        case 0x151370u: goto label_151370;
        case 0x151374u: goto label_151374;
        case 0x151378u: goto label_151378;
        case 0x15137cu: goto label_15137c;
        case 0x151380u: goto label_151380;
        case 0x151384u: goto label_151384;
        case 0x151388u: goto label_151388;
        case 0x15138cu: goto label_15138c;
        case 0x151390u: goto label_151390;
        case 0x151394u: goto label_151394;
        case 0x151398u: goto label_151398;
        case 0x15139cu: goto label_15139c;
        case 0x1513a0u: goto label_1513a0;
        case 0x1513a4u: goto label_1513a4;
        case 0x1513a8u: goto label_1513a8;
        case 0x1513acu: goto label_1513ac;
        case 0x1513b0u: goto label_1513b0;
        case 0x1513b4u: goto label_1513b4;
        case 0x1513b8u: goto label_1513b8;
        case 0x1513bcu: goto label_1513bc;
        case 0x1513c0u: goto label_1513c0;
        case 0x1513c4u: goto label_1513c4;
        case 0x1513c8u: goto label_1513c8;
        case 0x1513ccu: goto label_1513cc;
        case 0x1513d0u: goto label_1513d0;
        case 0x1513d4u: goto label_1513d4;
        case 0x1513d8u: goto label_1513d8;
        case 0x1513dcu: goto label_1513dc;
        case 0x1513e0u: goto label_1513e0;
        case 0x1513e4u: goto label_1513e4;
        case 0x1513e8u: goto label_1513e8;
        case 0x1513ecu: goto label_1513ec;
        case 0x1513f0u: goto label_1513f0;
        case 0x1513f4u: goto label_1513f4;
        case 0x1513f8u: goto label_1513f8;
        case 0x1513fcu: goto label_1513fc;
        case 0x151400u: goto label_151400;
        case 0x151404u: goto label_151404;
        case 0x151408u: goto label_151408;
        case 0x15140cu: goto label_15140c;
        case 0x151410u: goto label_151410;
        case 0x151414u: goto label_151414;
        case 0x151418u: goto label_151418;
        case 0x15141cu: goto label_15141c;
        case 0x151420u: goto label_151420;
        case 0x151424u: goto label_151424;
        case 0x151428u: goto label_151428;
        case 0x15142cu: goto label_15142c;
        case 0x151430u: goto label_151430;
        case 0x151434u: goto label_151434;
        case 0x151438u: goto label_151438;
        case 0x15143cu: goto label_15143c;
        case 0x151440u: goto label_151440;
        case 0x151444u: goto label_151444;
        case 0x151448u: goto label_151448;
        case 0x15144cu: goto label_15144c;
        case 0x151450u: goto label_151450;
        case 0x151454u: goto label_151454;
        case 0x151458u: goto label_151458;
        case 0x15145cu: goto label_15145c;
        case 0x151460u: goto label_151460;
        case 0x151464u: goto label_151464;
        case 0x151468u: goto label_151468;
        case 0x15146cu: goto label_15146c;
        case 0x151470u: goto label_151470;
        case 0x151474u: goto label_151474;
        case 0x151478u: goto label_151478;
        case 0x15147cu: goto label_15147c;
        case 0x151480u: goto label_151480;
        case 0x151484u: goto label_151484;
        case 0x151488u: goto label_151488;
        case 0x15148cu: goto label_15148c;
        case 0x151490u: goto label_151490;
        case 0x151494u: goto label_151494;
        case 0x151498u: goto label_151498;
        case 0x15149cu: goto label_15149c;
        case 0x1514a0u: goto label_1514a0;
        case 0x1514a4u: goto label_1514a4;
        case 0x1514a8u: goto label_1514a8;
        case 0x1514acu: goto label_1514ac;
        case 0x1514b0u: goto label_1514b0;
        case 0x1514b4u: goto label_1514b4;
        case 0x1514b8u: goto label_1514b8;
        case 0x1514bcu: goto label_1514bc;
        case 0x1514c0u: goto label_1514c0;
        case 0x1514c4u: goto label_1514c4;
        case 0x1514c8u: goto label_1514c8;
        case 0x1514ccu: goto label_1514cc;
        case 0x1514d0u: goto label_1514d0;
        case 0x1514d4u: goto label_1514d4;
        case 0x1514d8u: goto label_1514d8;
        case 0x1514dcu: goto label_1514dc;
        case 0x1514e0u: goto label_1514e0;
        case 0x1514e4u: goto label_1514e4;
        case 0x1514e8u: goto label_1514e8;
        case 0x1514ecu: goto label_1514ec;
        case 0x1514f0u: goto label_1514f0;
        case 0x1514f4u: goto label_1514f4;
        case 0x1514f8u: goto label_1514f8;
        case 0x1514fcu: goto label_1514fc;
        case 0x151500u: goto label_151500;
        case 0x151504u: goto label_151504;
        case 0x151508u: goto label_151508;
        case 0x15150cu: goto label_15150c;
        case 0x151510u: goto label_151510;
        case 0x151514u: goto label_151514;
        case 0x151518u: goto label_151518;
        case 0x15151cu: goto label_15151c;
        case 0x151520u: goto label_151520;
        case 0x151524u: goto label_151524;
        case 0x151528u: goto label_151528;
        case 0x15152cu: goto label_15152c;
        case 0x151530u: goto label_151530;
        case 0x151534u: goto label_151534;
        case 0x151538u: goto label_151538;
        case 0x15153cu: goto label_15153c;
        case 0x151540u: goto label_151540;
        case 0x151544u: goto label_151544;
        case 0x151548u: goto label_151548;
        case 0x15154cu: goto label_15154c;
        case 0x151550u: goto label_151550;
        case 0x151554u: goto label_151554;
        case 0x151558u: goto label_151558;
        case 0x15155cu: goto label_15155c;
        case 0x151560u: goto label_151560;
        case 0x151564u: goto label_151564;
        case 0x151568u: goto label_151568;
        case 0x15156cu: goto label_15156c;
        case 0x151570u: goto label_151570;
        case 0x151574u: goto label_151574;
        case 0x151578u: goto label_151578;
        case 0x15157cu: goto label_15157c;
        case 0x151580u: goto label_151580;
        case 0x151584u: goto label_151584;
        case 0x151588u: goto label_151588;
        case 0x15158cu: goto label_15158c;
        case 0x151590u: goto label_151590;
        case 0x151594u: goto label_151594;
        case 0x151598u: goto label_151598;
        case 0x15159cu: goto label_15159c;
        case 0x1515a0u: goto label_1515a0;
        case 0x1515a4u: goto label_1515a4;
        case 0x1515a8u: goto label_1515a8;
        case 0x1515acu: goto label_1515ac;
        case 0x1515b0u: goto label_1515b0;
        case 0x1515b4u: goto label_1515b4;
        case 0x1515b8u: goto label_1515b8;
        case 0x1515bcu: goto label_1515bc;
        case 0x1515c0u: goto label_1515c0;
        case 0x1515c4u: goto label_1515c4;
        case 0x1515c8u: goto label_1515c8;
        case 0x1515ccu: goto label_1515cc;
        case 0x1515d0u: goto label_1515d0;
        case 0x1515d4u: goto label_1515d4;
        case 0x1515d8u: goto label_1515d8;
        case 0x1515dcu: goto label_1515dc;
        case 0x1515e0u: goto label_1515e0;
        case 0x1515e4u: goto label_1515e4;
        case 0x1515e8u: goto label_1515e8;
        case 0x1515ecu: goto label_1515ec;
        case 0x1515f0u: goto label_1515f0;
        case 0x1515f4u: goto label_1515f4;
        case 0x1515f8u: goto label_1515f8;
        case 0x1515fcu: goto label_1515fc;
        case 0x151600u: goto label_151600;
        case 0x151604u: goto label_151604;
        case 0x151608u: goto label_151608;
        case 0x15160cu: goto label_15160c;
        case 0x151610u: goto label_151610;
        case 0x151614u: goto label_151614;
        case 0x151618u: goto label_151618;
        case 0x15161cu: goto label_15161c;
        case 0x151620u: goto label_151620;
        case 0x151624u: goto label_151624;
        case 0x151628u: goto label_151628;
        case 0x15162cu: goto label_15162c;
        case 0x151630u: goto label_151630;
        case 0x151634u: goto label_151634;
        case 0x151638u: goto label_151638;
        case 0x15163cu: goto label_15163c;
        case 0x151640u: goto label_151640;
        case 0x151644u: goto label_151644;
        case 0x151648u: goto label_151648;
        case 0x15164cu: goto label_15164c;
        case 0x151650u: goto label_151650;
        case 0x151654u: goto label_151654;
        case 0x151658u: goto label_151658;
        case 0x15165cu: goto label_15165c;
        case 0x151660u: goto label_151660;
        case 0x151664u: goto label_151664;
        case 0x151668u: goto label_151668;
        case 0x15166cu: goto label_15166c;
        case 0x151670u: goto label_151670;
        case 0x151674u: goto label_151674;
        case 0x151678u: goto label_151678;
        case 0x15167cu: goto label_15167c;
        case 0x151680u: goto label_151680;
        case 0x151684u: goto label_151684;
        case 0x151688u: goto label_151688;
        case 0x15168cu: goto label_15168c;
        case 0x151690u: goto label_151690;
        case 0x151694u: goto label_151694;
        case 0x151698u: goto label_151698;
        case 0x15169cu: goto label_15169c;
        case 0x1516a0u: goto label_1516a0;
        case 0x1516a4u: goto label_1516a4;
        case 0x1516a8u: goto label_1516a8;
        case 0x1516acu: goto label_1516ac;
        case 0x1516b0u: goto label_1516b0;
        case 0x1516b4u: goto label_1516b4;
        case 0x1516b8u: goto label_1516b8;
        case 0x1516bcu: goto label_1516bc;
        case 0x1516c0u: goto label_1516c0;
        case 0x1516c4u: goto label_1516c4;
        case 0x1516c8u: goto label_1516c8;
        case 0x1516ccu: goto label_1516cc;
        case 0x1516d0u: goto label_1516d0;
        case 0x1516d4u: goto label_1516d4;
        case 0x1516d8u: goto label_1516d8;
        case 0x1516dcu: goto label_1516dc;
        case 0x1516e0u: goto label_1516e0;
        case 0x1516e4u: goto label_1516e4;
        case 0x1516e8u: goto label_1516e8;
        case 0x1516ecu: goto label_1516ec;
        case 0x1516f0u: goto label_1516f0;
        case 0x1516f4u: goto label_1516f4;
        case 0x1516f8u: goto label_1516f8;
        case 0x1516fcu: goto label_1516fc;
        case 0x151700u: goto label_151700;
        case 0x151704u: goto label_151704;
        case 0x151708u: goto label_151708;
        case 0x15170cu: goto label_15170c;
        case 0x151710u: goto label_151710;
        case 0x151714u: goto label_151714;
        case 0x151718u: goto label_151718;
        case 0x15171cu: goto label_15171c;
        case 0x151720u: goto label_151720;
        case 0x151724u: goto label_151724;
        case 0x151728u: goto label_151728;
        case 0x15172cu: goto label_15172c;
        case 0x151730u: goto label_151730;
        case 0x151734u: goto label_151734;
        case 0x151738u: goto label_151738;
        case 0x15173cu: goto label_15173c;
        case 0x151740u: goto label_151740;
        case 0x151744u: goto label_151744;
        case 0x151748u: goto label_151748;
        case 0x15174cu: goto label_15174c;
        case 0x151750u: goto label_151750;
        case 0x151754u: goto label_151754;
        case 0x151758u: goto label_151758;
        case 0x15175cu: goto label_15175c;
        case 0x151760u: goto label_151760;
        case 0x151764u: goto label_151764;
        case 0x151768u: goto label_151768;
        case 0x15176cu: goto label_15176c;
        case 0x151770u: goto label_151770;
        case 0x151774u: goto label_151774;
        case 0x151778u: goto label_151778;
        case 0x15177cu: goto label_15177c;
        case 0x151780u: goto label_151780;
        case 0x151784u: goto label_151784;
        case 0x151788u: goto label_151788;
        case 0x15178cu: goto label_15178c;
        case 0x151790u: goto label_151790;
        case 0x151794u: goto label_151794;
        case 0x151798u: goto label_151798;
        case 0x15179cu: goto label_15179c;
        case 0x1517a0u: goto label_1517a0;
        case 0x1517a4u: goto label_1517a4;
        case 0x1517a8u: goto label_1517a8;
        case 0x1517acu: goto label_1517ac;
        case 0x1517b0u: goto label_1517b0;
        case 0x1517b4u: goto label_1517b4;
        case 0x1517b8u: goto label_1517b8;
        case 0x1517bcu: goto label_1517bc;
        case 0x1517c0u: goto label_1517c0;
        case 0x1517c4u: goto label_1517c4;
        case 0x1517c8u: goto label_1517c8;
        case 0x1517ccu: goto label_1517cc;
        case 0x1517d0u: goto label_1517d0;
        case 0x1517d4u: goto label_1517d4;
        case 0x1517d8u: goto label_1517d8;
        case 0x1517dcu: goto label_1517dc;
        case 0x1517e0u: goto label_1517e0;
        case 0x1517e4u: goto label_1517e4;
        case 0x1517e8u: goto label_1517e8;
        case 0x1517ecu: goto label_1517ec;
        case 0x1517f0u: goto label_1517f0;
        case 0x1517f4u: goto label_1517f4;
        case 0x1517f8u: goto label_1517f8;
        case 0x1517fcu: goto label_1517fc;
        case 0x151800u: goto label_151800;
        case 0x151804u: goto label_151804;
        case 0x151808u: goto label_151808;
        case 0x15180cu: goto label_15180c;
        case 0x151810u: goto label_151810;
        case 0x151814u: goto label_151814;
        case 0x151818u: goto label_151818;
        case 0x15181cu: goto label_15181c;
        case 0x151820u: goto label_151820;
        case 0x151824u: goto label_151824;
        case 0x151828u: goto label_151828;
        case 0x15182cu: goto label_15182c;
        case 0x151830u: goto label_151830;
        case 0x151834u: goto label_151834;
        case 0x151838u: goto label_151838;
        case 0x15183cu: goto label_15183c;
        case 0x151840u: goto label_151840;
        case 0x151844u: goto label_151844;
        case 0x151848u: goto label_151848;
        case 0x15184cu: goto label_15184c;
        case 0x151850u: goto label_151850;
        case 0x151854u: goto label_151854;
        case 0x151858u: goto label_151858;
        case 0x15185cu: goto label_15185c;
        case 0x151860u: goto label_151860;
        case 0x151864u: goto label_151864;
        case 0x151868u: goto label_151868;
        case 0x15186cu: goto label_15186c;
        case 0x151870u: goto label_151870;
        case 0x151874u: goto label_151874;
        case 0x151878u: goto label_151878;
        case 0x15187cu: goto label_15187c;
        case 0x151880u: goto label_151880;
        case 0x151884u: goto label_151884;
        case 0x151888u: goto label_151888;
        case 0x15188cu: goto label_15188c;
        case 0x151890u: goto label_151890;
        case 0x151894u: goto label_151894;
        case 0x151898u: goto label_151898;
        case 0x15189cu: goto label_15189c;
        case 0x1518a0u: goto label_1518a0;
        case 0x1518a4u: goto label_1518a4;
        case 0x1518a8u: goto label_1518a8;
        case 0x1518acu: goto label_1518ac;
        case 0x1518b0u: goto label_1518b0;
        case 0x1518b4u: goto label_1518b4;
        case 0x1518b8u: goto label_1518b8;
        case 0x1518bcu: goto label_1518bc;
        case 0x1518c0u: goto label_1518c0;
        case 0x1518c4u: goto label_1518c4;
        case 0x1518c8u: goto label_1518c8;
        case 0x1518ccu: goto label_1518cc;
        case 0x1518d0u: goto label_1518d0;
        case 0x1518d4u: goto label_1518d4;
        case 0x1518d8u: goto label_1518d8;
        case 0x1518dcu: goto label_1518dc;
        case 0x1518e0u: goto label_1518e0;
        case 0x1518e4u: goto label_1518e4;
        case 0x1518e8u: goto label_1518e8;
        case 0x1518ecu: goto label_1518ec;
        case 0x1518f0u: goto label_1518f0;
        case 0x1518f4u: goto label_1518f4;
        case 0x1518f8u: goto label_1518f8;
        case 0x1518fcu: goto label_1518fc;
        case 0x151900u: goto label_151900;
        case 0x151904u: goto label_151904;
        case 0x151908u: goto label_151908;
        case 0x15190cu: goto label_15190c;
        case 0x151910u: goto label_151910;
        case 0x151914u: goto label_151914;
        case 0x151918u: goto label_151918;
        case 0x15191cu: goto label_15191c;
        case 0x151920u: goto label_151920;
        case 0x151924u: goto label_151924;
        case 0x151928u: goto label_151928;
        case 0x15192cu: goto label_15192c;
        case 0x151930u: goto label_151930;
        case 0x151934u: goto label_151934;
        case 0x151938u: goto label_151938;
        case 0x15193cu: goto label_15193c;
        case 0x151940u: goto label_151940;
        case 0x151944u: goto label_151944;
        case 0x151948u: goto label_151948;
        case 0x15194cu: goto label_15194c;
        case 0x151950u: goto label_151950;
        case 0x151954u: goto label_151954;
        case 0x151958u: goto label_151958;
        case 0x15195cu: goto label_15195c;
        case 0x151960u: goto label_151960;
        case 0x151964u: goto label_151964;
        case 0x151968u: goto label_151968;
        case 0x15196cu: goto label_15196c;
        case 0x151970u: goto label_151970;
        case 0x151974u: goto label_151974;
        case 0x151978u: goto label_151978;
        case 0x15197cu: goto label_15197c;
        case 0x151980u: goto label_151980;
        case 0x151984u: goto label_151984;
        case 0x151988u: goto label_151988;
        case 0x15198cu: goto label_15198c;
        case 0x151990u: goto label_151990;
        case 0x151994u: goto label_151994;
        case 0x151998u: goto label_151998;
        case 0x15199cu: goto label_15199c;
        case 0x1519a0u: goto label_1519a0;
        case 0x1519a4u: goto label_1519a4;
        case 0x1519a8u: goto label_1519a8;
        case 0x1519acu: goto label_1519ac;
        case 0x1519b0u: goto label_1519b0;
        case 0x1519b4u: goto label_1519b4;
        case 0x1519b8u: goto label_1519b8;
        case 0x1519bcu: goto label_1519bc;
        case 0x1519c0u: goto label_1519c0;
        case 0x1519c4u: goto label_1519c4;
        case 0x1519c8u: goto label_1519c8;
        case 0x1519ccu: goto label_1519cc;
        case 0x1519d0u: goto label_1519d0;
        case 0x1519d4u: goto label_1519d4;
        case 0x1519d8u: goto label_1519d8;
        case 0x1519dcu: goto label_1519dc;
        case 0x1519e0u: goto label_1519e0;
        case 0x1519e4u: goto label_1519e4;
        case 0x1519e8u: goto label_1519e8;
        case 0x1519ecu: goto label_1519ec;
        case 0x1519f0u: goto label_1519f0;
        case 0x1519f4u: goto label_1519f4;
        case 0x1519f8u: goto label_1519f8;
        case 0x1519fcu: goto label_1519fc;
        case 0x151a00u: goto label_151a00;
        case 0x151a04u: goto label_151a04;
        case 0x151a08u: goto label_151a08;
        case 0x151a0cu: goto label_151a0c;
        case 0x151a10u: goto label_151a10;
        case 0x151a14u: goto label_151a14;
        case 0x151a18u: goto label_151a18;
        case 0x151a1cu: goto label_151a1c;
        case 0x151a20u: goto label_151a20;
        case 0x151a24u: goto label_151a24;
        case 0x151a28u: goto label_151a28;
        case 0x151a2cu: goto label_151a2c;
        case 0x151a30u: goto label_151a30;
        case 0x151a34u: goto label_151a34;
        case 0x151a38u: goto label_151a38;
        case 0x151a3cu: goto label_151a3c;
        case 0x151a40u: goto label_151a40;
        case 0x151a44u: goto label_151a44;
        case 0x151a48u: goto label_151a48;
        case 0x151a4cu: goto label_151a4c;
        case 0x151a50u: goto label_151a50;
        case 0x151a54u: goto label_151a54;
        case 0x151a58u: goto label_151a58;
        case 0x151a5cu: goto label_151a5c;
        case 0x151a60u: goto label_151a60;
        case 0x151a64u: goto label_151a64;
        case 0x151a68u: goto label_151a68;
        case 0x151a6cu: goto label_151a6c;
        case 0x151a70u: goto label_151a70;
        case 0x151a74u: goto label_151a74;
        case 0x151a78u: goto label_151a78;
        case 0x151a7cu: goto label_151a7c;
        default: return;
    }

label_1512b0:
    // 0x1512b0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1512b4:
    if (ctx->pc == 0x1512B4u) {
        ctx->pc = 0x1512B8u;
        goto label_1512b8;
    }
    ctx->pc = 0x1512B0u;
    {
        const bool branch_taken_0x1512b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1512b0) {
            ctx->pc = 0x1512C0u;
            goto label_1512c0;
        }
    }
    ctx->pc = 0x1512B8u;
label_1512b8:
    // 0x1512b8: 0x10000034  b           . + 4 + (0x34 << 2)
label_1512bc:
    if (ctx->pc == 0x1512BCu) {
        ctx->pc = 0x1512BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512B8u;
        // 0x1512bc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1512C0u;
        goto label_1512c0;
    }
    ctx->pc = 0x1512B8u;
    {
        const bool branch_taken_0x1512b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1512BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512B8u;
        // 0x1512bc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512b8) {
            ctx->pc = 0x15138Cu;
            goto label_15138c;
        }
    }
    ctx->pc = 0x1512C0u;
label_1512c0:
    // 0x1512c0: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x1512c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
label_1512c4:
    // 0x1512c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1512c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1512c8:
    // 0x1512c8: 0x26106ae0  addiu       $s0, $s0, 0x6AE0
    ctx->pc = 0x1512c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27360));
label_1512cc:
    // 0x1512cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1512ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1512d0:
    // 0x1512d0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1512d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1512d4:
    // 0x1512d4: 0x24420f60  addiu       $v0, $v0, 0xF60
    ctx->pc = 0x1512d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3936));
label_1512d8:
    // 0x1512d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1512d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1512dc:
    // 0x1512dc: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1512dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1512e0:
    // 0x1512e0: 0xc0415a4  jal         func_105690
label_1512e4:
    if (ctx->pc == 0x1512E4u) {
        ctx->pc = 0x1512E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512E0u;
        // 0x1512e4: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1512E8u;
        goto label_1512e8;
    }
    ctx->pc = 0x1512E0u;
    SET_GPR_U32(ctx, 31, 0x1512E8u);
    ctx->pc = 0x1512E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1512E0u;
    // 0x1512e4: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x1512E0u, 0x1512E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1512E8u;
label_1512e8:
    // 0x1512e8: 0x27828130  addiu       $v0, $gp, -0x7ED0
    ctx->pc = 0x1512e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934832));
label_1512ec:
    // 0x1512ec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1512ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1512f0:
    // 0x1512f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1512f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1512f4:
    // 0x1512f4: 0xc0415a4  jal         func_105690
label_1512f8:
    if (ctx->pc == 0x1512F8u) {
        ctx->pc = 0x1512F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512F4u;
        // 0x1512f8: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1512FCu;
        goto label_1512fc;
    }
    ctx->pc = 0x1512F4u;
    SET_GPR_U32(ctx, 31, 0x1512FCu);
    ctx->pc = 0x1512F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1512F4u;
    // 0x1512f8: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x1512F4u, 0x1512FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1512FCu;
label_1512fc:
    // 0x1512fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1512fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_151300:
    // 0x151300: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x151300u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_151304:
    // 0x151304: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x151304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_151308:
    // 0x151308: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_15130c:
    if (ctx->pc == 0x15130Cu) {
        ctx->pc = 0x15130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151308u;
        // 0x15130c: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151310u;
        goto label_151310;
    }
    ctx->pc = 0x151308u;
    {
        const bool branch_taken_0x151308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151308u;
        // 0x15130c: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151308) {
            ctx->pc = 0x1512D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1512d0;
        }
    }
    ctx->pc = 0x151310u;
label_151310:
    // 0x151310: 0x3c110029  lui         $s1, 0x29
    ctx->pc = 0x151310u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
label_151314:
    // 0x151314: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x151314u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
label_151318:
    // 0x151318: 0x2631b082  addiu       $s1, $s1, -0x4F7E
    ctx->pc = 0x151318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946946));
label_15131c:
    // 0x15131c: 0x261067b0  addiu       $s0, $s0, 0x67B0
    ctx->pc = 0x15131cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26544));
label_151320:
    // 0x151320: 0x86240006  lh          $a0, 0x6($s1)
    ctx->pc = 0x151320u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_151324:
    // 0x151324: 0xc0415a4  jal         func_105690
label_151328:
    if (ctx->pc == 0x151328u) {
        ctx->pc = 0x151328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151324u;
        // 0x151328: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15132Cu;
        goto label_15132c;
    }
    ctx->pc = 0x151324u;
    SET_GPR_U32(ctx, 31, 0x15132Cu);
    ctx->pc = 0x151328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151324u;
    // 0x151328: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x151324u, 0x15132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15132Cu;
label_15132c:
    // 0x15132c: 0x86240008  lh          $a0, 0x8($s1)
    ctx->pc = 0x15132cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_151330:
    // 0x151330: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x151330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_151334:
    // 0x151334: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_151338:
    if (ctx->pc == 0x151338u) {
        ctx->pc = 0x15133Cu;
        goto label_15133c;
    }
    ctx->pc = 0x151334u;
    {
        const bool branch_taken_0x151334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x151334) {
            ctx->pc = 0x15134Cu;
            goto label_15134c;
        }
    }
    ctx->pc = 0x15133Cu;
label_15133c:
    // 0x15133c: 0xc0415a4  jal         func_105690
label_151340:
    if (ctx->pc == 0x151340u) {
        ctx->pc = 0x151340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15133Cu;
        // 0x151340: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151344u;
        goto label_151344;
    }
    ctx->pc = 0x15133Cu;
    SET_GPR_U32(ctx, 31, 0x151344u);
    ctx->pc = 0x151340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15133Cu;
    // 0x151340: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x15133Cu, 0x151344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151344u;
label_151344:
    // 0x151344: 0x10000003  b           . + 4 + (0x3 << 2)
label_151348:
    if (ctx->pc == 0x151348u) {
        ctx->pc = 0x151348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151344u;
        // 0x151348: 0x86240008  lh          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15134Cu;
        goto label_15134c;
    }
    ctx->pc = 0x151344u;
    {
        const bool branch_taken_0x151344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151344u;
        // 0x151348: 0x86240008  lh          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151344) {
            ctx->pc = 0x151354u;
            goto label_151354;
        }
    }
    ctx->pc = 0x15134Cu;
label_15134c:
    // 0x15134c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x15134cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_151350:
    // 0x151350: 0x86240008  lh          $a0, 0x8($s1)
    ctx->pc = 0x151350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_151354:
    // 0x151354: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x151354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_151358:
    // 0x151358: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_15135c:
    if (ctx->pc == 0x15135Cu) {
        ctx->pc = 0x151360u;
        goto label_151360;
    }
    ctx->pc = 0x151358u;
    {
        const bool branch_taken_0x151358 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x151358) {
            ctx->pc = 0x151368u;
            goto label_151368;
        }
    }
    ctx->pc = 0x151360u;
label_151360:
    // 0x151360: 0x10000007  b           . + 4 + (0x7 << 2)
label_151364:
    if (ctx->pc == 0x151364u) {
        ctx->pc = 0x151364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151360u;
        // 0x151364: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151368u;
        goto label_151368;
    }
    ctx->pc = 0x151360u;
    {
        const bool branch_taken_0x151360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151360u;
        // 0x151364: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151360) {
            ctx->pc = 0x151380u;
            goto label_151380;
        }
    }
    ctx->pc = 0x151368u;
label_151368:
    // 0x151368: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x151368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_15136c:
    // 0x15136c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15136cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_151370:
    // 0x151370: 0x24630cf8  addiu       $v1, $v1, 0xCF8
    ctx->pc = 0x151370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3320));
label_151374:
    // 0x151374: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x151374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_151378:
    // 0x151378: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x151378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15137c:
    // 0x15137c: 0x0  nop
    ctx->pc = 0x15137cu;
    // NOP
label_151380:
    // 0x151380: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x151380u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_151384:
    // 0x151384: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x151384u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_151388:
    // 0x151388: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x151388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15138c:
    // 0x15138c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15138cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_151390:
    // 0x151390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_151394:
    // 0x151394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_151398:
    // 0x151398: 0x3e00008  jr          $ra
label_15139c:
    if (ctx->pc == 0x15139Cu) {
        ctx->pc = 0x15139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151398u;
        // 0x15139c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1513A0u;
        goto label_1513a0;
    }
    ctx->pc = 0x151398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151398u;
        // 0x15139c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1513A0u;
label_1513a0:
    // 0x1513a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1513a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1513a4:
    // 0x1513a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1513a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1513a8:
    // 0x1513a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1513a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1513ac:
    // 0x1513ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1513acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1513b0:
    // 0x1513b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1513b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1513b4:
    // 0x1513b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1513b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1513b8:
    // 0x1513b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1513b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1513bc:
    // 0x1513bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1513bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1513c0:
    // 0x1513c0: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x1513c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
label_1513c4:
    // 0x1513c4: 0x261067c0  addiu       $s0, $s0, 0x67C0
    ctx->pc = 0x1513c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26560));
label_1513c8:
    // 0x1513c8: 0xc060668  jal         func_1819A0
label_1513cc:
    if (ctx->pc == 0x1513CCu) {
        ctx->pc = 0x1513CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1513C8u;
        // 0x1513cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1513D0u;
        goto label_1513d0;
    }
    ctx->pc = 0x1513C8u;
    SET_GPR_U32(ctx, 31, 0x1513D0u);
    ctx->pc = 0x1513CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1513C8u;
    // 0x1513cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819A0u;
    { ctx->pc = 0x1819a0; return; }
    ctx->pc = 0x1513D0u;
label_1513d0:
    // 0x1513d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1513d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1513d4:
    // 0x1513d4: 0xc060678  jal         func_1819E0
label_1513d8:
    if (ctx->pc == 0x1513D8u) {
        ctx->pc = 0x1513D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1513D4u;
        // 0x1513d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1513DCu;
        goto label_1513dc;
    }
    ctx->pc = 0x1513D4u;
    SET_GPR_U32(ctx, 31, 0x1513DCu);
    ctx->pc = 0x1513D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1513D4u;
    // 0x1513d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    { ctx->pc = 0x1819e0; return; }
    ctx->pc = 0x1513DCu;
label_1513dc:
    // 0x1513dc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1513dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1513e0:
    // 0x1513e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1513e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1513e4:
    // 0x1513e4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1513e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1513e8:
    // 0x1513e8: 0x24420f60  addiu       $v0, $v0, 0xF60
    ctx->pc = 0x1513e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3936));
label_1513ec:
    // 0x1513ec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1513ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1513f0:
    // 0x1513f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1513f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1513f4:
    // 0x1513f4: 0xc044c6c  jal         func_1131B0
label_1513f8:
    if (ctx->pc == 0x1513F8u) {
        ctx->pc = 0x1513F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1513F4u;
        // 0x1513f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1513FCu;
        goto label_1513fc;
    }
    ctx->pc = 0x1513F4u;
    SET_GPR_U32(ctx, 31, 0x1513FCu);
    ctx->pc = 0x1513F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1513F4u;
    // 0x1513f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1131B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1131B0u, 0x1513F4u, 0x1513FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1513FCu;
label_1513fc:
    // 0x1513fc: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
label_151400:
    if (ctx->pc == 0x151400u) {
        ctx->pc = 0x151400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1513FCu;
        // 0x151400: 0x240400e4  addiu       $a0, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151404u;
        goto label_151404;
    }
    ctx->pc = 0x1513FCu;
    {
        const bool branch_taken_0x1513fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x151400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1513FCu;
        // 0x151400: 0x240400e4  addiu       $a0, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1513fc) {
            ctx->pc = 0x151438u;
            goto label_151438;
        }
    }
    ctx->pc = 0x151404u;
label_151404:
    // 0x151404: 0xc041738  jal         func_105CE0
label_151408:
    if (ctx->pc == 0x151408u) {
        ctx->pc = 0x15140Cu;
        goto label_15140c;
    }
    ctx->pc = 0x151404u;
    SET_GPR_U32(ctx, 31, 0x15140Cu);
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x151404u, 0x15140Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15140Cu;
label_15140c:
    // 0x15140c: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x15140cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_151410:
    // 0x151410: 0xc070080  jal         func_1C0200
label_151414:
    if (ctx->pc == 0x151414u) {
        ctx->pc = 0x151414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151410u;
        // 0x151414: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151418u;
        goto label_151418;
    }
    ctx->pc = 0x151410u;
    SET_GPR_U32(ctx, 31, 0x151418u);
    ctx->pc = 0x151414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151410u;
    // 0x151414: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x151418u;
label_151418:
    // 0x151418: 0x240400e4  addiu       $a0, $zero, 0xE4
    ctx->pc = 0x151418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_15141c:
    // 0x15141c: 0xc0416e4  jal         func_105B90
label_151420:
    if (ctx->pc == 0x151420u) {
        ctx->pc = 0x151420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15141Cu;
        // 0x151420: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151424u;
        goto label_151424;
    }
    ctx->pc = 0x15141Cu;
    SET_GPR_U32(ctx, 31, 0x151424u);
    ctx->pc = 0x151420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15141Cu;
    // 0x151420: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x15141Cu, 0x151424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151424u;
label_151424:
    // 0x151424: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x151424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_151428:
    // 0x151428: 0xc044ed8  jal         func_113B60
label_15142c:
    if (ctx->pc == 0x15142Cu) {
        ctx->pc = 0x15142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151428u;
        // 0x15142c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151430u;
        goto label_151430;
    }
    ctx->pc = 0x151428u;
    SET_GPR_U32(ctx, 31, 0x151430u);
    ctx->pc = 0x15142Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151428u;
    // 0x15142c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B60u, 0x151428u, 0x151430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151430u;
label_151430:
    // 0x151430: 0x10000006  b           . + 4 + (0x6 << 2)
label_151434:
    if (ctx->pc == 0x151434u) {
        ctx->pc = 0x151438u;
        goto label_151438;
    }
    ctx->pc = 0x151430u;
    {
        const bool branch_taken_0x151430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151430) {
            ctx->pc = 0x15144Cu;
            goto label_15144c;
        }
    }
    ctx->pc = 0x151438u;
label_151438:
    // 0x151438: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x151438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
label_15143c:
    // 0x15143c: 0x8c2267c8  lw          $v0, 0x67C8($at)
    ctx->pc = 0x15143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26568)));
label_151440:
    // 0x151440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151444:
    // 0x151444: 0xc044f30  jal         func_113CC0
label_151448:
    if (ctx->pc == 0x151448u) {
        ctx->pc = 0x151448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151444u;
        // 0x151448: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15144Cu;
        goto label_15144c;
    }
    ctx->pc = 0x151444u;
    SET_GPR_U32(ctx, 31, 0x15144Cu);
    ctx->pc = 0x151448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151444u;
    // 0x151448: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113CC0u, 0x151444u, 0x15144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15144Cu;
label_15144c:
    // 0x15144c: 0x0  nop
    ctx->pc = 0x15144cu;
    // NOP
label_151450:
    // 0x151450: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x151450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_151454:
    // 0x151454: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x151454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_151458:
    // 0x151458: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x151458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15145c:
    // 0x15145c: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x15145cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_151460:
    // 0x151460: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x151460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_151464:
    // 0x151464: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x151464u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_151468:
    // 0x151468: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
label_15146c:
    if (ctx->pc == 0x15146Cu) {
        ctx->pc = 0x15146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151468u;
        // 0x15146c: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151470u;
        goto label_151470;
    }
    ctx->pc = 0x151468u;
    {
        const bool branch_taken_0x151468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151468u;
        // 0x15146c: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151468) {
            ctx->pc = 0x1513C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1513c8;
        }
    }
    ctx->pc = 0x151470u;
label_151470:
    // 0x151470: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x151470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
label_151474:
    // 0x151474: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x151474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_151478:
    // 0x151478: 0x248467a0  addiu       $a0, $a0, 0x67A0
    ctx->pc = 0x151478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26528));
label_15147c:
    // 0x15147c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15147cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151480:
    // 0x151480: 0xc044b10  jal         func_112C40
label_151484:
    if (ctx->pc == 0x151484u) {
        ctx->pc = 0x151484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151480u;
        // 0x151484: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151488u;
        goto label_151488;
    }
    ctx->pc = 0x151480u;
    SET_GPR_U32(ctx, 31, 0x151488u);
    ctx->pc = 0x151484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151480u;
    // 0x151484: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112C40u, 0x151480u, 0x151488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151488u;
label_151488:
    // 0x151488: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x151488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15148c:
    // 0x15148c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15148cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_151490:
    // 0x151490: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x151490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_151494:
    // 0x151494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_151498:
    // 0x151498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15149c:
    // 0x15149c: 0x3e00008  jr          $ra
label_1514a0:
    if (ctx->pc == 0x1514A0u) {
        ctx->pc = 0x1514A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15149Cu;
        // 0x1514a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1514A4u;
        goto label_1514a4;
    }
    ctx->pc = 0x15149Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1514A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15149Cu;
        // 0x1514a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15149Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1514A4u;
label_1514a4:
    // 0x1514a4: 0x0  nop
    ctx->pc = 0x1514a4u;
    // NOP
label_1514a8:
    // 0x1514a8: 0x0  nop
    ctx->pc = 0x1514a8u;
    // NOP
label_1514ac:
    // 0x1514ac: 0x0  nop
    ctx->pc = 0x1514acu;
    // NOP
label_1514b0:
    // 0x1514b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1514b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1514b4:
    // 0x1514b4: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x1514b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
label_1514b8:
    // 0x1514b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1514b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1514bc:
    // 0x1514bc: 0x246312a0  addiu       $v1, $v1, 0x12A0
    ctx->pc = 0x1514bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
label_1514c0:
    // 0x1514c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1514c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1514c4:
    // 0x1514c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1514c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1514c8:
    // 0x1514c8: 0xaf838128  sw          $v1, -0x7ED8($gp)
    ctx->pc = 0x1514c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934824), GPR_U32(ctx, 3));
label_1514cc:
    // 0x1514cc: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1514ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1514d0:
    // 0x1514d0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1514d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1514d4:
    // 0x1514d4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_1514d8:
    if (ctx->pc == 0x1514D8u) {
        ctx->pc = 0x1514D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514D4u;
        // 0x1514d8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1514DCu;
        goto label_1514dc;
    }
    ctx->pc = 0x1514D4u;
    {
        const bool branch_taken_0x1514d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1514D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514D4u;
        // 0x1514d8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514d4) {
            ctx->pc = 0x151528u;
            goto label_151528;
        }
    }
    ctx->pc = 0x1514DCu;
label_1514dc:
    // 0x1514dc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1514dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1514e0:
    // 0x1514e0: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1514e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1514e4:
    // 0x1514e4: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
label_1514e8:
    if (ctx->pc == 0x1514E8u) {
        ctx->pc = 0x1514ECu;
        goto label_1514ec;
    }
    ctx->pc = 0x1514E4u;
    {
        const bool branch_taken_0x1514e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1514e4) {
            ctx->pc = 0x151528u;
            goto label_151528;
        }
    }
    ctx->pc = 0x1514ECu;
label_1514ec:
    // 0x1514ec: 0x8f908128  lw          $s0, -0x7ED8($gp)
    ctx->pc = 0x1514ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934824)));
label_1514f0:
    // 0x1514f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1514f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1514f4:
    // 0x1514f4: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x1514f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_1514f8:
    // 0x1514f8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1514fc:
    if (ctx->pc == 0x1514FCu) {
        ctx->pc = 0x151500u;
        goto label_151500;
    }
    ctx->pc = 0x1514F8u;
    {
        const bool branch_taken_0x1514f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1514f8) {
            ctx->pc = 0x151518u;
            goto label_151518;
        }
    }
    ctx->pc = 0x151500u;
label_151500:
    // 0x151500: 0x8604020a  lh          $a0, 0x20A($s0)
    ctx->pc = 0x151500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 522)));
label_151504:
    // 0x151504: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x151504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_151508:
    // 0x151508: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_15150c:
    if (ctx->pc == 0x15150Cu) {
        ctx->pc = 0x15150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151508u;
        // 0x15150c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151510u;
        goto label_151510;
    }
    ctx->pc = 0x151508u;
    {
        const bool branch_taken_0x151508 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151508u;
        // 0x15150c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151508) {
            ctx->pc = 0x151518u;
            goto label_151518;
        }
    }
    ctx->pc = 0x151510u;
label_151510:
    // 0x151510: 0xc08c204  jal         func_230810
label_151514:
    if (ctx->pc == 0x151514u) {
        ctx->pc = 0x151518u;
        goto label_151518;
    }
    ctx->pc = 0x151510u;
    SET_GPR_U32(ctx, 31, 0x151518u);
    ctx->pc = 0x230810u;
    { ctx->pc = 0x230810; return; }
    ctx->pc = 0x151518u;
label_151518:
    // 0x151518: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x151518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15151c:
    // 0x15151c: 0x2a230028  slti        $v1, $s1, 0x28
    ctx->pc = 0x15151cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
label_151520:
    // 0x151520: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_151524:
    if (ctx->pc == 0x151524u) {
        ctx->pc = 0x151524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151520u;
        // 0x151524: 0x26100220  addiu       $s0, $s0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151528u;
        goto label_151528;
    }
    ctx->pc = 0x151520u;
    {
        const bool branch_taken_0x151520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x151524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151520u;
        // 0x151524: 0x26100220  addiu       $s0, $s0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151520) {
            ctx->pc = 0x1514F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1514f4;
        }
    }
    ctx->pc = 0x151528u;
label_151528:
    // 0x151528: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x151528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15152c:
    // 0x15152c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15152cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_151530:
    // 0x151530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_151534:
    // 0x151534: 0x3e00008  jr          $ra
label_151538:
    if (ctx->pc == 0x151538u) {
        ctx->pc = 0x151538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151534u;
        // 0x151538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15153Cu;
        goto label_15153c;
    }
    ctx->pc = 0x151534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151534u;
        // 0x151538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15153Cu;
label_15153c:
    // 0x15153c: 0x0  nop
    ctx->pc = 0x15153cu;
    // NOP
label_151540:
    // 0x151540: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x151540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
label_151544:
    // 0x151544: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x151544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151548:
    // 0x151548: 0x2463bda0  addiu       $v1, $v1, -0x4260
    ctx->pc = 0x151548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950304));
label_15154c:
    // 0x15154c: 0xaf838128  sw          $v1, -0x7ED8($gp)
    ctx->pc = 0x15154cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934824), GPR_U32(ctx, 3));
label_151550:
    // 0x151550: 0x8f858128  lw          $a1, -0x7ED8($gp)
    ctx->pc = 0x151550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934824)));
label_151554:
    // 0x151554: 0x0  nop
    ctx->pc = 0x151554u;
    // NOP
label_151558:
    // 0x151558: 0xaca00200  sw          $zero, 0x200($a1)
    ctx->pc = 0x151558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 512), GPR_U32(ctx, 0));
label_15155c:
    // 0x15155c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_151560:
    // 0x151560: 0xaca00204  sw          $zero, 0x204($a1)
    ctx->pc = 0x151560u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 516), GPR_U32(ctx, 0));
label_151564:
    // 0x151564: 0x28830028  slti        $v1, $a0, 0x28
    ctx->pc = 0x151564u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
label_151568:
    // 0x151568: 0xaca0020c  sw          $zero, 0x20C($a1)
    ctx->pc = 0x151568u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 0));
label_15156c:
    // 0x15156c: 0xa4a00208  sh          $zero, 0x208($a1)
    ctx->pc = 0x15156cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 520), (uint16_t)GPR_U32(ctx, 0));
label_151570:
    // 0x151570: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_151574:
    if (ctx->pc == 0x151574u) {
        ctx->pc = 0x151574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151570u;
        // 0x151574: 0x24a50220  addiu       $a1, $a1, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151578u;
        goto label_151578;
    }
    ctx->pc = 0x151570u;
    {
        const bool branch_taken_0x151570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x151574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151570u;
        // 0x151574: 0x24a50220  addiu       $a1, $a1, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151570) {
            ctx->pc = 0x151558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151558;
        }
    }
    ctx->pc = 0x151578u;
label_151578:
    // 0x151578: 0x3e00008  jr          $ra
label_15157c:
    if (ctx->pc == 0x15157Cu) {
        ctx->pc = 0x151580u;
        goto label_151580;
    }
    ctx->pc = 0x151578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151580u;
label_151580:
    // 0x151580: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x151580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_151584:
    // 0x151584: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x151584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_151588:
    // 0x151588: 0x24421010  addiu       $v0, $v0, 0x1010
    ctx->pc = 0x151588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4112));
label_15158c:
    // 0x15158c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15158cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_151590:
    // 0x151590: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x151590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151594:
    // 0x151594: 0x0  nop
    ctx->pc = 0x151594u;
    // NOP
label_151598:
    // 0x151598: 0x44096000  mfc1        $t1, $f12
    ctx->pc = 0x151598u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_15159c:
    // 0x15159c: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x15159cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_1515a0:
    // 0x1515a0: 0x4a000138  vcallms     0x20
    ctx->pc = 0x1515a0u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_1515a4:
    // 0x1515a4: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x1515a4u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_1515a8:
    // 0x1515a8: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x1515a8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1515ac:
    // 0x1515ac: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x1515acu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_1515b0:
    // 0x1515b0: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x1515b0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1515b4:
    // 0x1515b4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1515b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1515b8:
    // 0x1515b8: 0x24421014  addiu       $v0, $v0, 0x1014
    ctx->pc = 0x1515b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4116));
label_1515bc:
    // 0x1515bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1515bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1515c0:
    // 0x1515c0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1515c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1515c4:
    // 0x1515c4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1515c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1515c8:
    // 0x1515c8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1515c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1515cc:
    // 0x1515cc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1515ccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1515d0:
    // 0x1515d0: 0x4603181c  madd.s      $f0, $f3, $f3
    ctx->pc = 0x1515d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_1515d4:
    // 0x1515d4: 0x46000004  c1          0x4
    ctx->pc = 0x1515d4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_1515d8:
    // 0x1515d8: 0x0  nop
    ctx->pc = 0x1515d8u;
    // NOP
label_1515dc:
    // 0x1515dc: 0x0  nop
    ctx->pc = 0x1515dcu;
    // NOP
label_1515e0:
    // 0x1515e0: 0x3e00008  jr          $ra
label_1515e4:
    if (ctx->pc == 0x1515E4u) {
        ctx->pc = 0x1515E8u;
        goto label_1515e8;
    }
    ctx->pc = 0x1515E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1515E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1515E8u;
label_1515e8:
    // 0x1515e8: 0x0  nop
    ctx->pc = 0x1515e8u;
    // NOP
label_1515ec:
    // 0x1515ec: 0x0  nop
    ctx->pc = 0x1515ecu;
    // NOP
label_1515f0:
    // 0x1515f0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1515f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1515f4:
    // 0x1515f4: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x1515f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1515f8:
    // 0x1515f8: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x1515f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
label_1515fc:
    // 0x1515fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1515fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_151600:
    // 0x151600: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x151600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_151604:
    // 0x151604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x151604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_151608:
    // 0x151608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15160c:
    // 0x15160c: 0xc066e26  jal         func_19B898
label_151610:
    if (ctx->pc == 0x151610u) {
        ctx->pc = 0x151610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15160Cu;
        // 0x151610: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151614u;
        goto label_151614;
    }
    ctx->pc = 0x15160Cu;
    SET_GPR_U32(ctx, 31, 0x151614u);
    ctx->pc = 0x151610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15160Cu;
    // 0x151610: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x151614u;
label_151614:
    // 0x151614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_151618:
    // 0x151618: 0x3e00008  jr          $ra
label_15161c:
    if (ctx->pc == 0x15161Cu) {
        ctx->pc = 0x15161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151618u;
        // 0x15161c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151620u;
        goto label_151620;
    }
    ctx->pc = 0x151618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151618u;
        // 0x15161c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151620u;
label_151620:
    // 0x151620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x151620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_151624:
    // 0x151624: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x151624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_151628:
    // 0x151628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x151628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_15162c:
    // 0x15162c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x15162cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_151630:
    // 0x151630: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_151634:
    // 0x151634: 0x84254af4  lh          $a1, 0x4AF4($at)
    ctx->pc = 0x151634u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_151638:
    // 0x151638: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_15163c:
    if (ctx->pc == 0x15163Cu) {
        ctx->pc = 0x15163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151638u;
        // 0x15163c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151640u;
        goto label_151640;
    }
    ctx->pc = 0x151638u;
    {
        const bool branch_taken_0x151638 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x15163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151638u;
        // 0x15163c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151638) {
            ctx->pc = 0x151650u;
            goto label_151650;
        }
    }
    ctx->pc = 0x151640u;
label_151640:
    // 0x151640: 0x92040234  lbu         $a0, 0x234($s0)
    ctx->pc = 0x151640u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 564)));
label_151644:
    // 0x151644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_151648:
    // 0x151648: 0x14830053  bne         $a0, $v1, . + 4 + (0x53 << 2)
label_15164c:
    if (ctx->pc == 0x15164Cu) {
        ctx->pc = 0x151650u;
        goto label_151650;
    }
    ctx->pc = 0x151648u;
    {
        const bool branch_taken_0x151648 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x151648) {
            ctx->pc = 0x151798u;
            goto label_151798;
        }
    }
    ctx->pc = 0x151650u;
label_151650:
    // 0x151650: 0x8f83863c  lw          $v1, -0x79C4($gp)
    ctx->pc = 0x151650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_151654:
    // 0x151654: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_151658:
    if (ctx->pc == 0x151658u) {
        ctx->pc = 0x151658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151654u;
        // 0x151658: 0x92040248  lbu         $a0, 0x248($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15165Cu;
        goto label_15165c;
    }
    ctx->pc = 0x151654u;
    {
        const bool branch_taken_0x151654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x151658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151654u;
        // 0x151658: 0x92040248  lbu         $a0, 0x248($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151654) {
            ctx->pc = 0x151670u;
            goto label_151670;
        }
    }
    ctx->pc = 0x15165Cu;
label_15165c:
    // 0x15165c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15165cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_151660:
    // 0x151660: 0x90234af3  lbu         $v1, 0x4AF3($at)
    ctx->pc = 0x151660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19187)));
label_151664:
    // 0x151664: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x151664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_151668:
    // 0x151668: 0x1460004b  bnez        $v1, . + 4 + (0x4B << 2)
label_15166c:
    if (ctx->pc == 0x15166Cu) {
        ctx->pc = 0x151670u;
        goto label_151670;
    }
    ctx->pc = 0x151668u;
    {
        const bool branch_taken_0x151668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151668) {
            ctx->pc = 0x151798u;
            goto label_151798;
        }
    }
    ctx->pc = 0x151670u;
label_151670:
    // 0x151670: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x151670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_151674:
    // 0x151674: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_151678:
    if (ctx->pc == 0x151678u) {
        ctx->pc = 0x151678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151674u;
        // 0x151678: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15167Cu;
        goto label_15167c;
    }
    ctx->pc = 0x151674u;
    {
        const bool branch_taken_0x151674 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x151678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151674u;
        // 0x151678: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151674) {
            ctx->pc = 0x15168Cu;
            goto label_15168c;
        }
    }
    ctx->pc = 0x15167Cu;
label_15167c:
    // 0x15167c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x15167cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_151680:
    // 0x151680: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_151684:
    if (ctx->pc == 0x151684u) {
        ctx->pc = 0x151688u;
        goto label_151688;
    }
    ctx->pc = 0x151680u;
    {
        const bool branch_taken_0x151680 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x151680) {
            ctx->pc = 0x15169Cu;
            goto label_15169c;
        }
    }
    ctx->pc = 0x151688u;
label_151688:
    // 0x151688: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x151688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_15168c:
    // 0x15168c: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
label_151690:
    if (ctx->pc == 0x151690u) {
        ctx->pc = 0x151690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15168Cu;
        // 0x151690: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151694u;
        goto label_151694;
    }
    ctx->pc = 0x15168Cu;
    {
        const bool branch_taken_0x15168c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x151690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15168Cu;
        // 0x151690: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15168c) {
            ctx->pc = 0x15176Cu;
            goto label_15176c;
        }
    }
    ctx->pc = 0x151694u;
label_151694:
    // 0x151694: 0x10000034  b           . + 4 + (0x34 << 2)
label_151698:
    if (ctx->pc == 0x151698u) {
        ctx->pc = 0x151698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151694u;
        // 0x151698: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15169Cu;
        goto label_15169c;
    }
    ctx->pc = 0x151694u;
    {
        const bool branch_taken_0x151694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151694u;
        // 0x151698: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151694) {
            ctx->pc = 0x151768u;
            goto label_151768;
        }
    }
    ctx->pc = 0x15169Cu;
label_15169c:
    // 0x15169c: 0x92060249  lbu         $a2, 0x249($s0)
    ctx->pc = 0x15169cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
label_1516a0:
    // 0x1516a0: 0x28c10008  slti        $at, $a2, 0x8
    ctx->pc = 0x1516a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
label_1516a4:
    // 0x1516a4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1516a8:
    if (ctx->pc == 0x1516A8u) {
        ctx->pc = 0x1516A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516A4u;
        // 0x1516a8: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1516ACu;
        goto label_1516ac;
    }
    ctx->pc = 0x1516A4u;
    {
        const bool branch_taken_0x1516a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1516A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516A4u;
        // 0x1516a8: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516a4) {
            ctx->pc = 0x1516BCu;
            goto label_1516bc;
        }
    }
    ctx->pc = 0x1516ACu;
label_1516ac:
    // 0x1516ac: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1516acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1516b0:
    // 0x1516b0: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
label_1516b4:
    if (ctx->pc == 0x1516B4u) {
        ctx->pc = 0x1516B8u;
        goto label_1516b8;
    }
    ctx->pc = 0x1516B0u;
    {
        const bool branch_taken_0x1516b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1516b0) {
            ctx->pc = 0x151764u;
            goto label_151764;
        }
    }
    ctx->pc = 0x1516B8u;
label_1516b8:
    // 0x1516b8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1516b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1516bc:
    // 0x1516bc: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
label_1516c0:
    if (ctx->pc == 0x1516C0u) {
        ctx->pc = 0x1516C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516BCu;
        // 0x1516c0: 0x28810010  slti        $at, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1516C4u;
        goto label_1516c4;
    }
    ctx->pc = 0x1516BCu;
    {
        const bool branch_taken_0x1516bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1516C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516BCu;
        // 0x1516c0: 0x28810010  slti        $at, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516bc) {
            ctx->pc = 0x151718u;
            goto label_151718;
        }
    }
    ctx->pc = 0x1516C4u;
label_1516c4:
    // 0x1516c4: 0x28c30010  slti        $v1, $a2, 0x10
    ctx->pc = 0x1516c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
label_1516c8:
    // 0x1516c8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_1516cc:
    if (ctx->pc == 0x1516CCu) {
        ctx->pc = 0x1516CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516C8u;
        // 0x1516cc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1516D0u;
        goto label_1516d0;
    }
    ctx->pc = 0x1516C8u;
    {
        const bool branch_taken_0x1516c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1516CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516C8u;
        // 0x1516cc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516c8) {
            ctx->pc = 0x151710u;
            goto label_151710;
        }
    }
    ctx->pc = 0x1516D0u;
label_1516d0:
    // 0x1516d0: 0xc08f0cc  jal         func_23C330
label_1516d4:
    if (ctx->pc == 0x1516D4u) {
        ctx->pc = 0x1516D8u;
        goto label_1516d8;
    }
    ctx->pc = 0x1516D0u;
    SET_GPR_U32(ctx, 31, 0x1516D8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1516D8u;
label_1516d8:
    // 0x1516d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1516d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1516dc:
    // 0x1516dc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1516dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1516e0:
    // 0x1516e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1516e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1516e4:
    // 0x1516e4: 0x0  nop
    ctx->pc = 0x1516e4u;
    // NOP
label_1516e8:
    // 0x1516e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1516e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1516ec:
    // 0x1516ec: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1516ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1516f0:
    // 0x1516f0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1516f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1516f4:
    // 0x1516f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1516f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1516f8:
    // 0x1516f8: 0x0  nop
    ctx->pc = 0x1516f8u;
    // NOP
label_1516fc:
    // 0x1516fc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1516fcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_151700:
    // 0x151700: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x151700u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_151704:
    // 0x151704: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x151704u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_151708:
    // 0x151708: 0x10000017  b           . + 4 + (0x17 << 2)
label_15170c:
    if (ctx->pc == 0x15170Cu) {
        ctx->pc = 0x15170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151708u;
        // 0x15170c: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151710u;
        goto label_151710;
    }
    ctx->pc = 0x151708u;
    {
        const bool branch_taken_0x151708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151708u;
        // 0x15170c: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151708) {
            ctx->pc = 0x151768u;
            goto label_151768;
        }
    }
    ctx->pc = 0x151710u;
label_151710:
    // 0x151710: 0x10000015  b           . + 4 + (0x15 << 2)
label_151714:
    if (ctx->pc == 0x151714u) {
        ctx->pc = 0x151718u;
        goto label_151718;
    }
    ctx->pc = 0x151710u;
    {
        const bool branch_taken_0x151710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151710) {
            ctx->pc = 0x151768u;
            goto label_151768;
        }
    }
    ctx->pc = 0x151718u;
label_151718:
    // 0x151718: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_15171c:
    if (ctx->pc == 0x15171Cu) {
        ctx->pc = 0x15171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151718u;
        // 0x15171c: 0x30850003  andi        $a1, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x151720u;
        goto label_151720;
    }
    ctx->pc = 0x151718u;
    {
        const bool branch_taken_0x151718 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151718u;
        // 0x15171c: 0x30850003  andi        $a1, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151718) {
            ctx->pc = 0x151768u;
            goto label_151768;
        }
    }
    ctx->pc = 0x151720u;
label_151720:
    // 0x151720: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
label_151724:
    if (ctx->pc == 0x151724u) {
        ctx->pc = 0x151724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151720u;
        // 0x151724: 0x28a10003  slti        $at, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x151728u;
        goto label_151728;
    }
    ctx->pc = 0x151720u;
    {
        const bool branch_taken_0x151720 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x151724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151720u;
        // 0x151724: 0x28a10003  slti        $at, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151720) {
            ctx->pc = 0x151738u;
            goto label_151738;
        }
    }
    ctx->pc = 0x151728u;
label_151728:
    // 0x151728: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_15172c:
    if (ctx->pc == 0x15172Cu) {
        ctx->pc = 0x151730u;
        goto label_151730;
    }
    ctx->pc = 0x151728u;
    {
        const bool branch_taken_0x151728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x151728) {
            ctx->pc = 0x151734u;
            goto label_151734;
        }
    }
    ctx->pc = 0x151730u;
label_151730:
    // 0x151730: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x151730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
label_151734:
    // 0x151734: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x151734u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_151738:
    // 0x151738: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_15173c:
    if (ctx->pc == 0x15173Cu) {
        ctx->pc = 0x15173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151738u;
        // 0x15173c: 0x618c3  sra         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151740u;
        goto label_151740;
    }
    ctx->pc = 0x151738u;
    {
        const bool branch_taken_0x151738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151738u;
        // 0x15173c: 0x618c3  sra         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151738) {
            ctx->pc = 0x151768u;
            goto label_151768;
        }
    }
    ctx->pc = 0x151740u;
label_151740:
    // 0x151740: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
label_151744:
    if (ctx->pc == 0x151744u) {
        ctx->pc = 0x151744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151740u;
        // 0x151744: 0xa3082a  slt         $at, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x151748u;
        goto label_151748;
    }
    ctx->pc = 0x151740u;
    {
        const bool branch_taken_0x151740 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x151744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151740u;
        // 0x151744: 0xa3082a  slt         $at, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151740) {
            ctx->pc = 0x151754u;
            goto label_151754;
        }
    }
    ctx->pc = 0x151748u;
label_151748:
    // 0x151748: 0x24c30007  addiu       $v1, $a2, 0x7
    ctx->pc = 0x151748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_15174c:
    // 0x15174c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x15174cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_151750:
    // 0x151750: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x151750u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_151754:
    // 0x151754: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_151758:
    if (ctx->pc == 0x151758u) {
        ctx->pc = 0x15175Cu;
        goto label_15175c;
    }
    ctx->pc = 0x151754u;
    {
        const bool branch_taken_0x151754 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x151754) {
            ctx->pc = 0x151768u;
            goto label_151768;
        }
    }
    ctx->pc = 0x15175Cu;
label_15175c:
    // 0x15175c: 0x10000002  b           . + 4 + (0x2 << 2)
label_151760:
    if (ctx->pc == 0x151760u) {
        ctx->pc = 0x151760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15175Cu;
        // 0x151760: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151764u;
        goto label_151764;
    }
    ctx->pc = 0x15175Cu;
    {
        const bool branch_taken_0x15175c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15175Cu;
        // 0x151760: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15175c) {
            ctx->pc = 0x151768u;
            goto label_151768;
        }
    }
    ctx->pc = 0x151764u;
label_151764:
    // 0x151764: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x151764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_151768:
    // 0x151768: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x151768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15176c:
    // 0x15176c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_151770:
    if (ctx->pc == 0x151770u) {
        ctx->pc = 0x151770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15176Cu;
        // 0x151770: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151774u;
        goto label_151774;
    }
    ctx->pc = 0x15176Cu;
    {
        const bool branch_taken_0x15176c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x151770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15176Cu;
        // 0x151770: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15176c) {
            ctx->pc = 0x151798u;
            goto label_151798;
        }
    }
    ctx->pc = 0x151774u;
label_151774:
    // 0x151774: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x151774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151778:
    // 0x151778: 0xc054864  jal         func_152190
label_15177c:
    if (ctx->pc == 0x15177Cu) {
        ctx->pc = 0x15177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151778u;
        // 0x15177c: 0x24060e10  addiu       $a2, $zero, 0xE10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151780u;
        goto label_151780;
    }
    ctx->pc = 0x151778u;
    SET_GPR_U32(ctx, 31, 0x151780u);
    ctx->pc = 0x15177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151778u;
    // 0x15177c: 0x24060e10  addiu       $a2, $zero, 0xE10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152190u;
    { ctx->pc = 0x152190; return; }
    ctx->pc = 0x151780u;
label_151780:
    // 0x151780: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x151780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151784:
    // 0x151784: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x151784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_151788:
    // 0x151788: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x151788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_15178c:
    // 0x15178c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x15178cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_151790:
    // 0x151790: 0xc05b4d4  jal         func_16D350
label_151794:
    if (ctx->pc == 0x151794u) {
        ctx->pc = 0x151794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151790u;
        // 0x151794: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151798u;
        goto label_151798;
    }
    ctx->pc = 0x151790u;
    SET_GPR_U32(ctx, 31, 0x151798u);
    ctx->pc = 0x151794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151790u;
    // 0x151794: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    { ctx->pc = 0x16d350; return; }
    ctx->pc = 0x151798u;
label_151798:
    // 0x151798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x151798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15179c:
    // 0x15179c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15179cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1517a0:
    // 0x1517a0: 0x3e00008  jr          $ra
label_1517a4:
    if (ctx->pc == 0x1517A4u) {
        ctx->pc = 0x1517A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1517A0u;
        // 0x1517a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1517A8u;
        goto label_1517a8;
    }
    ctx->pc = 0x1517A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1517A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1517A0u;
        // 0x1517a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1517A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1517A8u;
label_1517a8:
    // 0x1517a8: 0x0  nop
    ctx->pc = 0x1517a8u;
    // NOP
label_1517ac:
    // 0x1517ac: 0x0  nop
    ctx->pc = 0x1517acu;
    // NOP
label_1517b0:
    // 0x1517b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1517b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1517b4:
    // 0x1517b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1517b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1517b8:
    // 0x1517b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1517b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1517bc:
    // 0x1517bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1517bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1517c0:
    // 0x1517c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1517c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1517c4:
    // 0x1517c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1517c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1517c8:
    // 0x1517c8: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x1517c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_1517cc:
    // 0x1517cc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1517d0:
    if (ctx->pc == 0x1517D0u) {
        ctx->pc = 0x1517D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1517CCu;
        // 0x1517d0: 0x2626000c  addiu       $a2, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1517D4u;
        goto label_1517d4;
    }
    ctx->pc = 0x1517CCu;
    {
        const bool branch_taken_0x1517cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1517D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1517CCu;
        // 0x1517d0: 0x2626000c  addiu       $a2, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1517cc) {
            ctx->pc = 0x15180Cu;
            goto label_15180c;
        }
    }
    ctx->pc = 0x1517D4u;
label_1517d4:
    // 0x1517d4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1517d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1517d8:
    // 0x1517d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1517d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1517dc:
    // 0x1517dc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1517dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1517e0:
    // 0x1517e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1517e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1517e4:
    // 0x1517e4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1517e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1517e8:
    // 0x1517e8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1517e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1517ec:
    // 0x1517ec: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1517ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1517f0:
    // 0x1517f0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1517f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1517f4:
    // 0x1517f4: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1517f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_1517f8:
    // 0x1517f8: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x1517f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_1517fc:
    // 0x1517fc: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1517fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_151800:
    // 0x151800: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x151800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_151804:
    // 0x151804: 0xc054864  jal         func_152190
label_151808:
    if (ctx->pc == 0x151808u) {
        ctx->pc = 0x151808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151804u;
        // 0x151808: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15180Cu;
        goto label_15180c;
    }
    ctx->pc = 0x151804u;
    SET_GPR_U32(ctx, 31, 0x15180Cu);
    ctx->pc = 0x151808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151804u;
    // 0x151808: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152190u;
    { ctx->pc = 0x152190; return; }
    ctx->pc = 0x15180Cu;
label_15180c:
    // 0x15180c: 0x0  nop
    ctx->pc = 0x15180cu;
    // NOP
label_151810:
    // 0x151810: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x151810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_151814:
    // 0x151814: 0x2a030014  slti        $v1, $s0, 0x14
    ctx->pc = 0x151814u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
label_151818:
    // 0x151818: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_15181c:
    if (ctx->pc == 0x15181Cu) {
        ctx->pc = 0x15181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151818u;
        // 0x15181c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151820u;
        goto label_151820;
    }
    ctx->pc = 0x151818u;
    {
        const bool branch_taken_0x151818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151818u;
        // 0x15181c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151818) {
            ctx->pc = 0x1517C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1517c8;
        }
    }
    ctx->pc = 0x151820u;
label_151820:
    // 0x151820: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x151820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_151824:
    // 0x151824: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_151828:
    // 0x151828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15182c:
    // 0x15182c: 0x3e00008  jr          $ra
label_151830:
    if (ctx->pc == 0x151830u) {
        ctx->pc = 0x151830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15182Cu;
        // 0x151830: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151834u;
        goto label_151834;
    }
    ctx->pc = 0x15182Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15182Cu;
        // 0x151830: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15182Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151834u;
label_151834:
    // 0x151834: 0x0  nop
    ctx->pc = 0x151834u;
    // NOP
label_151838:
    // 0x151838: 0x0  nop
    ctx->pc = 0x151838u;
    // NOP
label_15183c:
    // 0x15183c: 0x0  nop
    ctx->pc = 0x15183cu;
    // NOP
label_151840:
    // 0x151840: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x151840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
label_151844:
    // 0x151844: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x151844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151848:
    // 0x151848: 0x24a56c70  addiu       $a1, $a1, 0x6C70
    ctx->pc = 0x151848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27760));
label_15184c:
    // 0x15184c: 0x8ca303c0  lw          $v1, 0x3C0($a1)
    ctx->pc = 0x15184cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 960)));
label_151850:
    // 0x151850: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_151854:
    if (ctx->pc == 0x151854u) {
        ctx->pc = 0x151854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151850u;
        // 0x151854: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151858u;
        goto label_151858;
    }
    ctx->pc = 0x151850u;
    {
        const bool branch_taken_0x151850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x151854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151850u;
        // 0x151854: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151850) {
            ctx->pc = 0x151868u;
            goto label_151868;
        }
    }
    ctx->pc = 0x151858u;
label_151858:
    // 0x151858: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x151858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_15185c:
    // 0x15185c: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x15185cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
label_151860:
    // 0x151860: 0x10000015  b           . + 4 + (0x15 << 2)
label_151864:
    if (ctx->pc == 0x151864u) {
        ctx->pc = 0x151864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151860u;
        // 0x151864: 0xa4c00002  sh          $zero, 0x2($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151868u;
        goto label_151868;
    }
    ctx->pc = 0x151860u;
    {
        const bool branch_taken_0x151860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151860u;
        // 0x151864: 0xa4c00002  sh          $zero, 0x2($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151860) {
            ctx->pc = 0x1518B8u;
            goto label_1518b8;
        }
    }
    ctx->pc = 0x151868u;
label_151868:
    // 0x151868: 0x8ca303c4  lw          $v1, 0x3C4($a1)
    ctx->pc = 0x151868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 964)));
label_15186c:
    // 0x15186c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_151870:
    if (ctx->pc == 0x151870u) {
        ctx->pc = 0x151874u;
        goto label_151874;
    }
    ctx->pc = 0x15186Cu;
    {
        const bool branch_taken_0x15186c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15186c) {
            ctx->pc = 0x15188Cu;
            goto label_15188c;
        }
    }
    ctx->pc = 0x151874u;
label_151874:
    // 0x151874: 0xc4600150  lwc1        $f0, 0x150($v1)
    ctx->pc = 0x151874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151878:
    // 0x151878: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x151878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_15187c:
    // 0x15187c: 0x8ca303c4  lw          $v1, 0x3C4($a1)
    ctx->pc = 0x15187cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 964)));
label_151880:
    // 0x151880: 0xc4600158  lwc1        $f0, 0x158($v1)
    ctx->pc = 0x151880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151884:
    // 0x151884: 0x10000006  b           . + 4 + (0x6 << 2)
label_151888:
    if (ctx->pc == 0x151888u) {
        ctx->pc = 0x151888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151884u;
        // 0x151888: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15188Cu;
        goto label_15188c;
    }
    ctx->pc = 0x151884u;
    {
        const bool branch_taken_0x151884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151884u;
        // 0x151888: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151884) {
            ctx->pc = 0x1518A0u;
            goto label_1518a0;
        }
    }
    ctx->pc = 0x15188Cu;
label_15188c:
    // 0x15188c: 0x0  nop
    ctx->pc = 0x15188cu;
    // NOP
label_151890:
    // 0x151890: 0xc4a003b0  lwc1        $f0, 0x3B0($a1)
    ctx->pc = 0x151890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151894:
    // 0x151894: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x151894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_151898:
    // 0x151898: 0xc4a003b8  lwc1        $f0, 0x3B8($a1)
    ctx->pc = 0x151898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15189c:
    // 0x15189c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x15189cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1518a0:
    // 0x1518a0: 0x84a303cc  lh          $v1, 0x3CC($a1)
    ctx->pc = 0x1518a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 972)));
label_1518a4:
    // 0x1518a4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1518a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1518a8:
    // 0x1518a8: 0x84a303c8  lh          $v1, 0x3C8($a1)
    ctx->pc = 0x1518a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 968)));
label_1518ac:
    // 0x1518ac: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x1518acu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_1518b0:
    // 0x1518b0: 0x84a303ca  lh          $v1, 0x3CA($a1)
    ctx->pc = 0x1518b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 970)));
label_1518b4:
    // 0x1518b4: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x1518b4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
label_1518b8:
    // 0x1518b8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1518b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1518bc:
    // 0x1518bc: 0x28e30014  slti        $v1, $a3, 0x14
    ctx->pc = 0x1518bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)20) ? 1 : 0);
label_1518c0:
    // 0x1518c0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1518c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1518c4:
    // 0x1518c4: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_1518c8:
    if (ctx->pc == 0x1518C8u) {
        ctx->pc = 0x1518C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1518C4u;
        // 0x1518c8: 0x24a503d0  addiu       $a1, $a1, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1518CCu;
        goto label_1518cc;
    }
    ctx->pc = 0x1518C4u;
    {
        const bool branch_taken_0x1518c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1518C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1518C4u;
        // 0x1518c8: 0x24a503d0  addiu       $a1, $a1, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1518c4) {
            ctx->pc = 0x15184Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15184c;
        }
    }
    ctx->pc = 0x1518CCu;
label_1518cc:
    // 0x1518cc: 0x3e00008  jr          $ra
label_1518d0:
    if (ctx->pc == 0x1518D0u) {
        ctx->pc = 0x1518D4u;
        goto label_1518d4;
    }
    ctx->pc = 0x1518CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1518CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1518D4u;
label_1518d4:
    // 0x1518d4: 0x0  nop
    ctx->pc = 0x1518d4u;
    // NOP
label_1518d8:
    // 0x1518d8: 0x0  nop
    ctx->pc = 0x1518d8u;
    // NOP
label_1518dc:
    // 0x1518dc: 0x0  nop
    ctx->pc = 0x1518dcu;
    // NOP
label_1518e0:
    // 0x1518e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1518e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1518e4:
    // 0x1518e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1518e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1518e8:
    // 0x1518e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1518e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1518ec:
    // 0x1518ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1518ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1518f0:
    // 0x1518f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1518f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1518f4:
    // 0x1518f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1518f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1518f8:
    // 0x1518f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1518f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1518fc:
    // 0x1518fc: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x1518fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
label_151900:
    // 0x151900: 0x1000003f  b           . + 4 + (0x3F << 2)
label_151904:
    if (ctx->pc == 0x151904u) {
        ctx->pc = 0x151904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151900u;
        // 0x151904: 0x26106c70  addiu       $s0, $s0, 0x6C70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151908u;
        goto label_151908;
    }
    ctx->pc = 0x151900u;
    {
        const bool branch_taken_0x151900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151900u;
        // 0x151904: 0x26106c70  addiu       $s0, $s0, 0x6C70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151900) {
            ctx->pc = 0x151A00u;
            goto label_151a00;
        }
    }
    ctx->pc = 0x151908u;
label_151908:
    // 0x151908: 0x8e0303c0  lw          $v1, 0x3C0($s0)
    ctx->pc = 0x151908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
label_15190c:
    // 0x15190c: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_151910:
    if (ctx->pc == 0x151910u) {
        ctx->pc = 0x151914u;
        goto label_151914;
    }
    ctx->pc = 0x15190Cu;
    {
        const bool branch_taken_0x15190c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15190c) {
            ctx->pc = 0x1519F8u;
            goto label_1519f8;
        }
    }
    ctx->pc = 0x151914u;
label_151914:
    // 0x151914: 0x8e0303c4  lw          $v1, 0x3C4($s0)
    ctx->pc = 0x151914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
label_151918:
    // 0x151918: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
label_15191c:
    if (ctx->pc == 0x15191Cu) {
        ctx->pc = 0x151920u;
        goto label_151920;
    }
    ctx->pc = 0x151918u;
    {
        const bool branch_taken_0x151918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151918) {
            ctx->pc = 0x1519F8u;
            goto label_1519f8;
        }
    }
    ctx->pc = 0x151920u;
label_151920:
    // 0x151920: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x151920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_151924:
    // 0x151924: 0x260403b0  addiu       $a0, $s0, 0x3B0
    ctx->pc = 0x151924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
label_151928:
    // 0x151928: 0x24630150  addiu       $v1, $v1, 0x150
    ctx->pc = 0x151928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
label_15192c:
    // 0x15192c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x15192cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_151930:
    // 0x151930: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x151930u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_151934:
    // 0x151934: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x151934u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_151938:
    // 0x151938: 0x4a0002ff  vnop
    ctx->pc = 0x151938u;
    // NOP operation, no action needed for VU0
label_15193c:
    // 0x15193c: 0x4a0002ff  vnop
    ctx->pc = 0x15193cu;
    // NOP operation, no action needed for VU0
label_151940:
    // 0x151940: 0x4a0002ff  vnop
    ctx->pc = 0x151940u;
    // NOP operation, no action needed for VU0
label_151944:
    // 0x151944: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x151944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_151948:
    // 0x151948: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x151948u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_15194c:
    // 0x15194c: 0x4a0002ff  vnop
    ctx->pc = 0x15194cu;
    // NOP operation, no action needed for VU0
label_151950:
    // 0x151950: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x151950u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_151954:
    // 0x151954: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x151954u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_151958:
    // 0x151958: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x151958u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_15195c:
    // 0x15195c: 0x4a0002ff  vnop
    ctx->pc = 0x15195cu;
    // NOP operation, no action needed for VU0
label_151960:
    // 0x151960: 0x4a0002ff  vnop
    ctx->pc = 0x151960u;
    // NOP operation, no action needed for VU0
label_151964:
    // 0x151964: 0x4a0002ff  vnop
    ctx->pc = 0x151964u;
    // NOP operation, no action needed for VU0
label_151968:
    // 0x151968: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x151968u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_15196c:
    // 0x15196c: 0x4a0003bf  vwaitq
    ctx->pc = 0x15196cu;
    // VWAITQ (Q already resolved in this runtime)
label_151970:
    // 0x151970: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x151970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_151974:
    // 0x151974: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x151974u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_151978:
    // 0x151978: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x151978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
label_15197c:
    // 0x15197c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15197cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_151980:
    // 0x151980: 0x0  nop
    ctx->pc = 0x151980u;
    // NOP
label_151984:
    // 0x151984: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x151984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_151988:
    // 0x151988: 0x0  nop
    ctx->pc = 0x151988u;
    // NOP
label_15198c:
    // 0x15198c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_151990:
    if (ctx->pc == 0x151990u) {
        ctx->pc = 0x151994u;
        goto label_151994;
    }
    ctx->pc = 0x15198Cu;
    {
        const bool branch_taken_0x15198c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15198c) {
            ctx->pc = 0x1519F8u;
            goto label_1519f8;
        }
    }
    ctx->pc = 0x151994u;
label_151994:
    // 0x151994: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x151994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_151998:
    // 0x151998: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_15199c:
    if (ctx->pc == 0x15199Cu) {
        ctx->pc = 0x15199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151998u;
        // 0x15199c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1519A0u;
        goto label_1519a0;
    }
    ctx->pc = 0x151998u;
    {
        const bool branch_taken_0x151998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151998u;
        // 0x15199c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151998) {
            ctx->pc = 0x1519A8u;
            goto label_1519a8;
        }
    }
    ctx->pc = 0x1519A0u;
label_1519a0:
    // 0x1519a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1519a4:
    if (ctx->pc == 0x1519A4u) {
        ctx->pc = 0x1519A8u;
        goto label_1519a8;
    }
    ctx->pc = 0x1519A0u;
    {
        const bool branch_taken_0x1519a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1519a0) {
            ctx->pc = 0x1519ACu;
            goto label_1519ac;
        }
    }
    ctx->pc = 0x1519A8u;
label_1519a8:
    // 0x1519a8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1519a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1519ac:
    // 0x1519ac: 0x0  nop
    ctx->pc = 0x1519acu;
    // NOP
label_1519b0:
    // 0x1519b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1519b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1519b4:
    // 0x1519b4: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1519b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1519b8:
    // 0x1519b8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1519b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1519bc:
    // 0x1519bc: 0xc05b4d4  jal         func_16D350
label_1519c0:
    if (ctx->pc == 0x1519C0u) {
        ctx->pc = 0x1519C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519BCu;
        // 0x1519c0: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1519C4u;
        goto label_1519c4;
    }
    ctx->pc = 0x1519BCu;
    SET_GPR_U32(ctx, 31, 0x1519C4u);
    ctx->pc = 0x1519C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1519BCu;
    // 0x1519c0: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    { ctx->pc = 0x16d350; return; }
    ctx->pc = 0x1519C4u;
label_1519c4:
    // 0x1519c4: 0x8e0203c4  lw          $v0, 0x3C4($s0)
    ctx->pc = 0x1519c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
label_1519c8:
    // 0x1519c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1519cc:
    if (ctx->pc == 0x1519CCu) {
        ctx->pc = 0x1519D0u;
        goto label_1519d0;
    }
    ctx->pc = 0x1519C8u;
    {
        const bool branch_taken_0x1519c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1519c8) {
            ctx->pc = 0x1519D8u;
            goto label_1519d8;
        }
    }
    ctx->pc = 0x1519D0u;
label_1519d0:
    // 0x1519d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1519d4:
    if (ctx->pc == 0x1519D4u) {
        ctx->pc = 0x1519D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519D0u;
        // 0x1519d4: 0x90420232  lbu         $v0, 0x232($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 562)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1519D8u;
        goto label_1519d8;
    }
    ctx->pc = 0x1519D0u;
    {
        const bool branch_taken_0x1519d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1519D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519D0u;
        // 0x1519d4: 0x90420232  lbu         $v0, 0x232($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 562)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1519d0) {
            ctx->pc = 0x1519DCu;
            goto label_1519dc;
        }
    }
    ctx->pc = 0x1519D8u;
label_1519d8:
    // 0x1519d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1519d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1519dc:
    // 0x1519dc: 0x0  nop
    ctx->pc = 0x1519dcu;
    // NOP
label_1519e0:
    // 0x1519e0: 0x960303cc  lhu         $v1, 0x3CC($s0)
    ctx->pc = 0x1519e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 972)));
label_1519e4:
    // 0x1519e4: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x1519e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1519e8:
    // 0x1519e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1519e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1519ec:
    // 0x1519ec: 0xc05482c  jal         func_1520B0
label_1519f0:
    if (ctx->pc == 0x1519F0u) {
        ctx->pc = 0x1519F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519ECu;
        // 0x1519f0: 0x432025  or          $a0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1519F4u;
        goto label_1519f4;
    }
    ctx->pc = 0x1519ECu;
    SET_GPR_U32(ctx, 31, 0x1519F4u);
    ctx->pc = 0x1519F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1519ECu;
    // 0x1519f0: 0x432025  or          $a0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    { ctx->pc = 0x1520b0; return; }
    ctx->pc = 0x1519F4u;
label_1519f4:
    // 0x1519f4: 0xae0003c0  sw          $zero, 0x3C0($s0)
    ctx->pc = 0x1519f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
label_1519f8:
    // 0x1519f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1519f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1519fc:
    // 0x1519fc: 0x261003d0  addiu       $s0, $s0, 0x3D0
    ctx->pc = 0x1519fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
label_151a00:
    // 0x151a00: 0x2a230014  slti        $v1, $s1, 0x14
    ctx->pc = 0x151a00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
label_151a04:
    // 0x151a04: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
label_151a08:
    if (ctx->pc == 0x151A08u) {
        ctx->pc = 0x151A0Cu;
        goto label_151a0c;
    }
    ctx->pc = 0x151A04u;
    {
        const bool branch_taken_0x151a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151a04) {
            ctx->pc = 0x151908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151908;
        }
    }
    ctx->pc = 0x151A0Cu;
label_151a0c:
    // 0x151a0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x151a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_151a10:
    // 0x151a10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x151a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_151a14:
    // 0x151a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_151a18:
    // 0x151a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_151a1c:
    // 0x151a1c: 0x3e00008  jr          $ra
label_151a20:
    if (ctx->pc == 0x151A20u) {
        ctx->pc = 0x151A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A1Cu;
        // 0x151a20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151A24u;
        goto label_151a24;
    }
    ctx->pc = 0x151A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A1Cu;
        // 0x151a20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151A24u;
label_151a24:
    // 0x151a24: 0x0  nop
    ctx->pc = 0x151a24u;
    // NOP
label_151a28:
    // 0x151a28: 0x0  nop
    ctx->pc = 0x151a28u;
    // NOP
label_151a2c:
    // 0x151a2c: 0x0  nop
    ctx->pc = 0x151a2cu;
    // NOP
label_151a30:
    // 0x151a30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x151a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_151a34:
    // 0x151a34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x151a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_151a38:
    // 0x151a38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x151a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_151a3c:
    // 0x151a3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x151a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_151a40:
    // 0x151a40: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x151a40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_151a44:
    // 0x151a44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x151a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_151a48:
    // 0x151a48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_151a4c:
    // 0x151a4c: 0xc05473c  jal         func_151CF0
label_151a50:
    if (ctx->pc == 0x151A50u) {
        ctx->pc = 0x151A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A4Cu;
        // 0x151a50: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151A54u;
        goto label_151a54;
    }
    ctx->pc = 0x151A4Cu;
    SET_GPR_U32(ctx, 31, 0x151A54u);
    ctx->pc = 0x151A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A4Cu;
    // 0x151a50: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151CF0u;
    { ctx->pc = 0x151cf0; return; }
    ctx->pc = 0x151A54u;
label_151a54:
    // 0x151a54: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x151a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_151a58:
    // 0x151a58: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x151a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_151a5c:
    // 0x151a5c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x151a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_151a60:
    // 0x151a60: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x151a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_151a64:
    // 0x151a64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x151a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151a68:
    // 0x151a68: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x151a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_151a6c:
    // 0x151a6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x151a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_151a70:
    // 0x151a70: 0x2813c  dsll32      $s0, $v0, 4
    ctx->pc = 0x151a70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 4));
label_151a74:
    // 0x151a74: 0x10813e  dsrl32      $s0, $s0, 4
    ctx->pc = 0x151a74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 4));
label_151a78:
    // 0x151a78: 0xc066c5c  jal         func_19B170
label_151a7c:
    if (ctx->pc == 0x151A7Cu) {
        ctx->pc = 0x151A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A78u;
        // 0x151a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151A80u;
        { ctx->pc = 0x151a80; return; }
    }
    ctx->pc = 0x151A78u;
    SET_GPR_U32(ctx, 31, 0x151A80u);
    ctx->pc = 0x151A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A78u;
    // 0x151a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    { ctx->pc = 0x19b170; return; }
    ctx->pc = 0x151A80u;
    ctx->pc = 0x151a80u;
    return;
}
