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


void FUN_0014eba0_part141(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x193160u: goto label_193160;
        case 0x193164u: goto label_193164;
        case 0x193168u: goto label_193168;
        case 0x19316cu: goto label_19316c;
        case 0x193170u: goto label_193170;
        case 0x193174u: goto label_193174;
        case 0x193178u: goto label_193178;
        case 0x19317cu: goto label_19317c;
        case 0x193180u: goto label_193180;
        case 0x193184u: goto label_193184;
        case 0x193188u: goto label_193188;
        case 0x19318cu: goto label_19318c;
        case 0x193190u: goto label_193190;
        case 0x193194u: goto label_193194;
        case 0x193198u: goto label_193198;
        case 0x19319cu: goto label_19319c;
        case 0x1931a0u: goto label_1931a0;
        case 0x1931a4u: goto label_1931a4;
        case 0x1931a8u: goto label_1931a8;
        case 0x1931acu: goto label_1931ac;
        case 0x1931b0u: goto label_1931b0;
        case 0x1931b4u: goto label_1931b4;
        case 0x1931b8u: goto label_1931b8;
        case 0x1931bcu: goto label_1931bc;
        case 0x1931c0u: goto label_1931c0;
        case 0x1931c4u: goto label_1931c4;
        case 0x1931c8u: goto label_1931c8;
        case 0x1931ccu: goto label_1931cc;
        case 0x1931d0u: goto label_1931d0;
        case 0x1931d4u: goto label_1931d4;
        case 0x1931d8u: goto label_1931d8;
        case 0x1931dcu: goto label_1931dc;
        case 0x1931e0u: goto label_1931e0;
        case 0x1931e4u: goto label_1931e4;
        case 0x1931e8u: goto label_1931e8;
        case 0x1931ecu: goto label_1931ec;
        case 0x1931f0u: goto label_1931f0;
        case 0x1931f4u: goto label_1931f4;
        case 0x1931f8u: goto label_1931f8;
        case 0x1931fcu: goto label_1931fc;
        case 0x193200u: goto label_193200;
        case 0x193204u: goto label_193204;
        case 0x193208u: goto label_193208;
        case 0x19320cu: goto label_19320c;
        case 0x193210u: goto label_193210;
        case 0x193214u: goto label_193214;
        case 0x193218u: goto label_193218;
        case 0x19321cu: goto label_19321c;
        case 0x193220u: goto label_193220;
        case 0x193224u: goto label_193224;
        case 0x193228u: goto label_193228;
        case 0x19322cu: goto label_19322c;
        case 0x193230u: goto label_193230;
        case 0x193234u: goto label_193234;
        case 0x193238u: goto label_193238;
        case 0x19323cu: goto label_19323c;
        case 0x193240u: goto label_193240;
        case 0x193244u: goto label_193244;
        case 0x193248u: goto label_193248;
        case 0x19324cu: goto label_19324c;
        case 0x193250u: goto label_193250;
        case 0x193254u: goto label_193254;
        case 0x193258u: goto label_193258;
        case 0x19325cu: goto label_19325c;
        case 0x193260u: goto label_193260;
        case 0x193264u: goto label_193264;
        case 0x193268u: goto label_193268;
        case 0x19326cu: goto label_19326c;
        case 0x193270u: goto label_193270;
        case 0x193274u: goto label_193274;
        case 0x193278u: goto label_193278;
        case 0x19327cu: goto label_19327c;
        case 0x193280u: goto label_193280;
        case 0x193284u: goto label_193284;
        case 0x193288u: goto label_193288;
        case 0x19328cu: goto label_19328c;
        case 0x193290u: goto label_193290;
        case 0x193294u: goto label_193294;
        case 0x193298u: goto label_193298;
        case 0x19329cu: goto label_19329c;
        case 0x1932a0u: goto label_1932a0;
        case 0x1932a4u: goto label_1932a4;
        case 0x1932a8u: goto label_1932a8;
        case 0x1932acu: goto label_1932ac;
        case 0x1932b0u: goto label_1932b0;
        case 0x1932b4u: goto label_1932b4;
        case 0x1932b8u: goto label_1932b8;
        case 0x1932bcu: goto label_1932bc;
        case 0x1932c0u: goto label_1932c0;
        case 0x1932c4u: goto label_1932c4;
        case 0x1932c8u: goto label_1932c8;
        case 0x1932ccu: goto label_1932cc;
        case 0x1932d0u: goto label_1932d0;
        case 0x1932d4u: goto label_1932d4;
        case 0x1932d8u: goto label_1932d8;
        case 0x1932dcu: goto label_1932dc;
        case 0x1932e0u: goto label_1932e0;
        case 0x1932e4u: goto label_1932e4;
        case 0x1932e8u: goto label_1932e8;
        case 0x1932ecu: goto label_1932ec;
        case 0x1932f0u: goto label_1932f0;
        case 0x1932f4u: goto label_1932f4;
        case 0x1932f8u: goto label_1932f8;
        case 0x1932fcu: goto label_1932fc;
        case 0x193300u: goto label_193300;
        case 0x193304u: goto label_193304;
        case 0x193308u: goto label_193308;
        case 0x19330cu: goto label_19330c;
        case 0x193310u: goto label_193310;
        case 0x193314u: goto label_193314;
        case 0x193318u: goto label_193318;
        case 0x19331cu: goto label_19331c;
        case 0x193320u: goto label_193320;
        case 0x193324u: goto label_193324;
        case 0x193328u: goto label_193328;
        case 0x19332cu: goto label_19332c;
        case 0x193330u: goto label_193330;
        case 0x193334u: goto label_193334;
        case 0x193338u: goto label_193338;
        case 0x19333cu: goto label_19333c;
        case 0x193340u: goto label_193340;
        case 0x193344u: goto label_193344;
        case 0x193348u: goto label_193348;
        case 0x19334cu: goto label_19334c;
        case 0x193350u: goto label_193350;
        case 0x193354u: goto label_193354;
        case 0x193358u: goto label_193358;
        case 0x19335cu: goto label_19335c;
        case 0x193360u: goto label_193360;
        case 0x193364u: goto label_193364;
        case 0x193368u: goto label_193368;
        case 0x19336cu: goto label_19336c;
        case 0x193370u: goto label_193370;
        case 0x193374u: goto label_193374;
        case 0x193378u: goto label_193378;
        case 0x19337cu: goto label_19337c;
        case 0x193380u: goto label_193380;
        case 0x193384u: goto label_193384;
        case 0x193388u: goto label_193388;
        case 0x19338cu: goto label_19338c;
        case 0x193390u: goto label_193390;
        case 0x193394u: goto label_193394;
        case 0x193398u: goto label_193398;
        case 0x19339cu: goto label_19339c;
        case 0x1933a0u: goto label_1933a0;
        case 0x1933a4u: goto label_1933a4;
        case 0x1933a8u: goto label_1933a8;
        case 0x1933acu: goto label_1933ac;
        case 0x1933b0u: goto label_1933b0;
        case 0x1933b4u: goto label_1933b4;
        case 0x1933b8u: goto label_1933b8;
        case 0x1933bcu: goto label_1933bc;
        case 0x1933c0u: goto label_1933c0;
        case 0x1933c4u: goto label_1933c4;
        case 0x1933c8u: goto label_1933c8;
        case 0x1933ccu: goto label_1933cc;
        case 0x1933d0u: goto label_1933d0;
        case 0x1933d4u: goto label_1933d4;
        case 0x1933d8u: goto label_1933d8;
        case 0x1933dcu: goto label_1933dc;
        case 0x1933e0u: goto label_1933e0;
        case 0x1933e4u: goto label_1933e4;
        case 0x1933e8u: goto label_1933e8;
        case 0x1933ecu: goto label_1933ec;
        case 0x1933f0u: goto label_1933f0;
        case 0x1933f4u: goto label_1933f4;
        case 0x1933f8u: goto label_1933f8;
        case 0x1933fcu: goto label_1933fc;
        case 0x193400u: goto label_193400;
        case 0x193404u: goto label_193404;
        case 0x193408u: goto label_193408;
        case 0x19340cu: goto label_19340c;
        case 0x193410u: goto label_193410;
        case 0x193414u: goto label_193414;
        case 0x193418u: goto label_193418;
        case 0x19341cu: goto label_19341c;
        case 0x193420u: goto label_193420;
        case 0x193424u: goto label_193424;
        case 0x193428u: goto label_193428;
        case 0x19342cu: goto label_19342c;
        case 0x193430u: goto label_193430;
        case 0x193434u: goto label_193434;
        case 0x193438u: goto label_193438;
        case 0x19343cu: goto label_19343c;
        case 0x193440u: goto label_193440;
        case 0x193444u: goto label_193444;
        case 0x193448u: goto label_193448;
        case 0x19344cu: goto label_19344c;
        case 0x193450u: goto label_193450;
        case 0x193454u: goto label_193454;
        case 0x193458u: goto label_193458;
        case 0x19345cu: goto label_19345c;
        case 0x193460u: goto label_193460;
        case 0x193464u: goto label_193464;
        case 0x193468u: goto label_193468;
        case 0x19346cu: goto label_19346c;
        case 0x193470u: goto label_193470;
        case 0x193474u: goto label_193474;
        case 0x193478u: goto label_193478;
        case 0x19347cu: goto label_19347c;
        case 0x193480u: goto label_193480;
        case 0x193484u: goto label_193484;
        case 0x193488u: goto label_193488;
        case 0x19348cu: goto label_19348c;
        case 0x193490u: goto label_193490;
        case 0x193494u: goto label_193494;
        case 0x193498u: goto label_193498;
        case 0x19349cu: goto label_19349c;
        case 0x1934a0u: goto label_1934a0;
        case 0x1934a4u: goto label_1934a4;
        case 0x1934a8u: goto label_1934a8;
        case 0x1934acu: goto label_1934ac;
        case 0x1934b0u: goto label_1934b0;
        case 0x1934b4u: goto label_1934b4;
        case 0x1934b8u: goto label_1934b8;
        case 0x1934bcu: goto label_1934bc;
        case 0x1934c0u: goto label_1934c0;
        case 0x1934c4u: goto label_1934c4;
        case 0x1934c8u: goto label_1934c8;
        case 0x1934ccu: goto label_1934cc;
        case 0x1934d0u: goto label_1934d0;
        case 0x1934d4u: goto label_1934d4;
        case 0x1934d8u: goto label_1934d8;
        case 0x1934dcu: goto label_1934dc;
        case 0x1934e0u: goto label_1934e0;
        case 0x1934e4u: goto label_1934e4;
        case 0x1934e8u: goto label_1934e8;
        case 0x1934ecu: goto label_1934ec;
        case 0x1934f0u: goto label_1934f0;
        case 0x1934f4u: goto label_1934f4;
        case 0x1934f8u: goto label_1934f8;
        case 0x1934fcu: goto label_1934fc;
        case 0x193500u: goto label_193500;
        case 0x193504u: goto label_193504;
        case 0x193508u: goto label_193508;
        case 0x19350cu: goto label_19350c;
        case 0x193510u: goto label_193510;
        case 0x193514u: goto label_193514;
        case 0x193518u: goto label_193518;
        case 0x19351cu: goto label_19351c;
        case 0x193520u: goto label_193520;
        case 0x193524u: goto label_193524;
        case 0x193528u: goto label_193528;
        case 0x19352cu: goto label_19352c;
        case 0x193530u: goto label_193530;
        case 0x193534u: goto label_193534;
        case 0x193538u: goto label_193538;
        case 0x19353cu: goto label_19353c;
        case 0x193540u: goto label_193540;
        case 0x193544u: goto label_193544;
        case 0x193548u: goto label_193548;
        case 0x19354cu: goto label_19354c;
        case 0x193550u: goto label_193550;
        case 0x193554u: goto label_193554;
        case 0x193558u: goto label_193558;
        case 0x19355cu: goto label_19355c;
        case 0x193560u: goto label_193560;
        case 0x193564u: goto label_193564;
        case 0x193568u: goto label_193568;
        case 0x19356cu: goto label_19356c;
        case 0x193570u: goto label_193570;
        case 0x193574u: goto label_193574;
        case 0x193578u: goto label_193578;
        case 0x19357cu: goto label_19357c;
        case 0x193580u: goto label_193580;
        case 0x193584u: goto label_193584;
        case 0x193588u: goto label_193588;
        case 0x19358cu: goto label_19358c;
        case 0x193590u: goto label_193590;
        case 0x193594u: goto label_193594;
        case 0x193598u: goto label_193598;
        case 0x19359cu: goto label_19359c;
        case 0x1935a0u: goto label_1935a0;
        case 0x1935a4u: goto label_1935a4;
        case 0x1935a8u: goto label_1935a8;
        case 0x1935acu: goto label_1935ac;
        case 0x1935b0u: goto label_1935b0;
        case 0x1935b4u: goto label_1935b4;
        case 0x1935b8u: goto label_1935b8;
        case 0x1935bcu: goto label_1935bc;
        case 0x1935c0u: goto label_1935c0;
        case 0x1935c4u: goto label_1935c4;
        case 0x1935c8u: goto label_1935c8;
        case 0x1935ccu: goto label_1935cc;
        case 0x1935d0u: goto label_1935d0;
        case 0x1935d4u: goto label_1935d4;
        case 0x1935d8u: goto label_1935d8;
        case 0x1935dcu: goto label_1935dc;
        case 0x1935e0u: goto label_1935e0;
        case 0x1935e4u: goto label_1935e4;
        case 0x1935e8u: goto label_1935e8;
        case 0x1935ecu: goto label_1935ec;
        case 0x1935f0u: goto label_1935f0;
        case 0x1935f4u: goto label_1935f4;
        case 0x1935f8u: goto label_1935f8;
        case 0x1935fcu: goto label_1935fc;
        case 0x193600u: goto label_193600;
        case 0x193604u: goto label_193604;
        case 0x193608u: goto label_193608;
        case 0x19360cu: goto label_19360c;
        case 0x193610u: goto label_193610;
        case 0x193614u: goto label_193614;
        case 0x193618u: goto label_193618;
        case 0x19361cu: goto label_19361c;
        case 0x193620u: goto label_193620;
        case 0x193624u: goto label_193624;
        case 0x193628u: goto label_193628;
        case 0x19362cu: goto label_19362c;
        case 0x193630u: goto label_193630;
        case 0x193634u: goto label_193634;
        case 0x193638u: goto label_193638;
        case 0x19363cu: goto label_19363c;
        case 0x193640u: goto label_193640;
        case 0x193644u: goto label_193644;
        case 0x193648u: goto label_193648;
        case 0x19364cu: goto label_19364c;
        case 0x193650u: goto label_193650;
        case 0x193654u: goto label_193654;
        case 0x193658u: goto label_193658;
        case 0x19365cu: goto label_19365c;
        case 0x193660u: goto label_193660;
        case 0x193664u: goto label_193664;
        case 0x193668u: goto label_193668;
        case 0x19366cu: goto label_19366c;
        case 0x193670u: goto label_193670;
        case 0x193674u: goto label_193674;
        case 0x193678u: goto label_193678;
        case 0x19367cu: goto label_19367c;
        case 0x193680u: goto label_193680;
        case 0x193684u: goto label_193684;
        case 0x193688u: goto label_193688;
        case 0x19368cu: goto label_19368c;
        case 0x193690u: goto label_193690;
        case 0x193694u: goto label_193694;
        case 0x193698u: goto label_193698;
        case 0x19369cu: goto label_19369c;
        case 0x1936a0u: goto label_1936a0;
        case 0x1936a4u: goto label_1936a4;
        case 0x1936a8u: goto label_1936a8;
        case 0x1936acu: goto label_1936ac;
        case 0x1936b0u: goto label_1936b0;
        case 0x1936b4u: goto label_1936b4;
        case 0x1936b8u: goto label_1936b8;
        case 0x1936bcu: goto label_1936bc;
        case 0x1936c0u: goto label_1936c0;
        case 0x1936c4u: goto label_1936c4;
        case 0x1936c8u: goto label_1936c8;
        case 0x1936ccu: goto label_1936cc;
        case 0x1936d0u: goto label_1936d0;
        case 0x1936d4u: goto label_1936d4;
        case 0x1936d8u: goto label_1936d8;
        case 0x1936dcu: goto label_1936dc;
        case 0x1936e0u: goto label_1936e0;
        case 0x1936e4u: goto label_1936e4;
        case 0x1936e8u: goto label_1936e8;
        case 0x1936ecu: goto label_1936ec;
        case 0x1936f0u: goto label_1936f0;
        case 0x1936f4u: goto label_1936f4;
        case 0x1936f8u: goto label_1936f8;
        case 0x1936fcu: goto label_1936fc;
        case 0x193700u: goto label_193700;
        case 0x193704u: goto label_193704;
        case 0x193708u: goto label_193708;
        case 0x19370cu: goto label_19370c;
        case 0x193710u: goto label_193710;
        case 0x193714u: goto label_193714;
        case 0x193718u: goto label_193718;
        case 0x19371cu: goto label_19371c;
        case 0x193720u: goto label_193720;
        case 0x193724u: goto label_193724;
        case 0x193728u: goto label_193728;
        case 0x19372cu: goto label_19372c;
        case 0x193730u: goto label_193730;
        case 0x193734u: goto label_193734;
        case 0x193738u: goto label_193738;
        case 0x19373cu: goto label_19373c;
        case 0x193740u: goto label_193740;
        case 0x193744u: goto label_193744;
        case 0x193748u: goto label_193748;
        case 0x19374cu: goto label_19374c;
        case 0x193750u: goto label_193750;
        case 0x193754u: goto label_193754;
        case 0x193758u: goto label_193758;
        case 0x19375cu: goto label_19375c;
        case 0x193760u: goto label_193760;
        case 0x193764u: goto label_193764;
        case 0x193768u: goto label_193768;
        case 0x19376cu: goto label_19376c;
        case 0x193770u: goto label_193770;
        case 0x193774u: goto label_193774;
        case 0x193778u: goto label_193778;
        case 0x19377cu: goto label_19377c;
        case 0x193780u: goto label_193780;
        case 0x193784u: goto label_193784;
        case 0x193788u: goto label_193788;
        case 0x19378cu: goto label_19378c;
        case 0x193790u: goto label_193790;
        case 0x193794u: goto label_193794;
        case 0x193798u: goto label_193798;
        case 0x19379cu: goto label_19379c;
        case 0x1937a0u: goto label_1937a0;
        case 0x1937a4u: goto label_1937a4;
        case 0x1937a8u: goto label_1937a8;
        case 0x1937acu: goto label_1937ac;
        case 0x1937b0u: goto label_1937b0;
        case 0x1937b4u: goto label_1937b4;
        case 0x1937b8u: goto label_1937b8;
        case 0x1937bcu: goto label_1937bc;
        case 0x1937c0u: goto label_1937c0;
        case 0x1937c4u: goto label_1937c4;
        case 0x1937c8u: goto label_1937c8;
        case 0x1937ccu: goto label_1937cc;
        case 0x1937d0u: goto label_1937d0;
        case 0x1937d4u: goto label_1937d4;
        case 0x1937d8u: goto label_1937d8;
        case 0x1937dcu: goto label_1937dc;
        case 0x1937e0u: goto label_1937e0;
        case 0x1937e4u: goto label_1937e4;
        case 0x1937e8u: goto label_1937e8;
        case 0x1937ecu: goto label_1937ec;
        case 0x1937f0u: goto label_1937f0;
        case 0x1937f4u: goto label_1937f4;
        case 0x1937f8u: goto label_1937f8;
        case 0x1937fcu: goto label_1937fc;
        case 0x193800u: goto label_193800;
        case 0x193804u: goto label_193804;
        case 0x193808u: goto label_193808;
        case 0x19380cu: goto label_19380c;
        case 0x193810u: goto label_193810;
        case 0x193814u: goto label_193814;
        case 0x193818u: goto label_193818;
        case 0x19381cu: goto label_19381c;
        case 0x193820u: goto label_193820;
        case 0x193824u: goto label_193824;
        case 0x193828u: goto label_193828;
        case 0x19382cu: goto label_19382c;
        case 0x193830u: goto label_193830;
        case 0x193834u: goto label_193834;
        case 0x193838u: goto label_193838;
        case 0x19383cu: goto label_19383c;
        case 0x193840u: goto label_193840;
        case 0x193844u: goto label_193844;
        case 0x193848u: goto label_193848;
        case 0x19384cu: goto label_19384c;
        case 0x193850u: goto label_193850;
        case 0x193854u: goto label_193854;
        case 0x193858u: goto label_193858;
        case 0x19385cu: goto label_19385c;
        case 0x193860u: goto label_193860;
        case 0x193864u: goto label_193864;
        case 0x193868u: goto label_193868;
        case 0x19386cu: goto label_19386c;
        case 0x193870u: goto label_193870;
        case 0x193874u: goto label_193874;
        case 0x193878u: goto label_193878;
        case 0x19387cu: goto label_19387c;
        case 0x193880u: goto label_193880;
        case 0x193884u: goto label_193884;
        case 0x193888u: goto label_193888;
        case 0x19388cu: goto label_19388c;
        case 0x193890u: goto label_193890;
        case 0x193894u: goto label_193894;
        case 0x193898u: goto label_193898;
        case 0x19389cu: goto label_19389c;
        case 0x1938a0u: goto label_1938a0;
        case 0x1938a4u: goto label_1938a4;
        case 0x1938a8u: goto label_1938a8;
        case 0x1938acu: goto label_1938ac;
        case 0x1938b0u: goto label_1938b0;
        case 0x1938b4u: goto label_1938b4;
        case 0x1938b8u: goto label_1938b8;
        case 0x1938bcu: goto label_1938bc;
        case 0x1938c0u: goto label_1938c0;
        case 0x1938c4u: goto label_1938c4;
        case 0x1938c8u: goto label_1938c8;
        case 0x1938ccu: goto label_1938cc;
        case 0x1938d0u: goto label_1938d0;
        case 0x1938d4u: goto label_1938d4;
        case 0x1938d8u: goto label_1938d8;
        case 0x1938dcu: goto label_1938dc;
        case 0x1938e0u: goto label_1938e0;
        case 0x1938e4u: goto label_1938e4;
        case 0x1938e8u: goto label_1938e8;
        case 0x1938ecu: goto label_1938ec;
        case 0x1938f0u: goto label_1938f0;
        case 0x1938f4u: goto label_1938f4;
        case 0x1938f8u: goto label_1938f8;
        case 0x1938fcu: goto label_1938fc;
        case 0x193900u: goto label_193900;
        case 0x193904u: goto label_193904;
        case 0x193908u: goto label_193908;
        case 0x19390cu: goto label_19390c;
        case 0x193910u: goto label_193910;
        case 0x193914u: goto label_193914;
        case 0x193918u: goto label_193918;
        case 0x19391cu: goto label_19391c;
        case 0x193920u: goto label_193920;
        case 0x193924u: goto label_193924;
        case 0x193928u: goto label_193928;
        case 0x19392cu: goto label_19392c;
        default: return;
    }

label_193160:
    // 0x193160: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x193160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_193164:
    // 0x193164: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x193164u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_193168:
    // 0x193168: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x193168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19316c:
    // 0x19316c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19316cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_193170:
    // 0x193170: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_193174:
    // 0x193174: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_193178:
    // 0x193178: 0x3e00008  jr          $ra
label_19317c:
    if (ctx->pc == 0x19317Cu) {
        ctx->pc = 0x19317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193178u;
        // 0x19317c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193180u;
        goto label_193180;
    }
    ctx->pc = 0x193178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193178u;
        // 0x19317c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193180u;
label_193180:
    // 0x193180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x193180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_193184:
    // 0x193184: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x193184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_193188:
    // 0x193188: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x193188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_19318c:
    // 0x19318c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x19318cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_193190:
    // 0x193190: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x193190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_193194:
    // 0x193194: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x193194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_193198:
    // 0x193198: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x193198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19319c:
    // 0x19319c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19319cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1931a0:
    // 0x1931a0: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1931a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1931a4:
    // 0x1931a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1931a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1931a8:
    // 0x1931a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1931a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1931ac:
    // 0x1931ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1931acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1931b0:
    // 0x1931b0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1931b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1931b4:
    // 0x1931b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1931b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1931b8:
    // 0x1931b8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1931b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1931bc:
    // 0x1931bc: 0xc049e3c  jal         func_1278F0
label_1931c0:
    if (ctx->pc == 0x1931C0u) {
        ctx->pc = 0x1931C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931BCu;
        // 0x1931c0: 0xac4000ac  sw          $zero, 0xAC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1931C4u;
        goto label_1931c4;
    }
    ctx->pc = 0x1931BCu;
    SET_GPR_U32(ctx, 31, 0x1931C4u);
    ctx->pc = 0x1931C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1931BCu;
    // 0x1931c0: 0xac4000ac  sw          $zero, 0xAC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278F0u, 0x1931BCu, 0x1931C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1931C4u;
label_1931c4:
    // 0x1931c4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1931c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1931c8:
    // 0x1931c8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1931c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1931cc:
    // 0x1931cc: 0x0  nop
    ctx->pc = 0x1931ccu;
    // NOP
label_1931d0:
    // 0x1931d0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1931d4:
    if (ctx->pc == 0x1931D4u) {
        ctx->pc = 0x1931D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931D0u;
        // 0x1931d4: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1931D8u;
        goto label_1931d8;
    }
    ctx->pc = 0x1931D0u;
    {
        const bool branch_taken_0x1931d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1931D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931D0u;
        // 0x1931d4: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1931d0) {
            ctx->pc = 0x1931DCu;
            goto label_1931dc;
        }
    }
    ctx->pc = 0x1931D8u;
label_1931d8:
    // 0x1931d8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1931d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1931dc:
    // 0x1931dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1931dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1931e0:
    // 0x1931e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1931e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1931e4:
    // 0x1931e4: 0x0  nop
    ctx->pc = 0x1931e4u;
    // NOP
label_1931e8:
    // 0x1931e8: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1931e8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1931ec:
    // 0x1931ec: 0xc06d448  jal         func_1B5120
label_1931f0:
    if (ctx->pc == 0x1931F0u) {
        ctx->pc = 0x1931F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931ECu;
        // 0x1931f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1931F4u;
        goto label_1931f4;
    }
    ctx->pc = 0x1931ECu;
    SET_GPR_U32(ctx, 31, 0x1931F4u);
    ctx->pc = 0x1931F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1931ECu;
    // 0x1931f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1931F4u;
label_1931f4:
    // 0x1931f4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1931f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1931f8:
    // 0x1931f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1931f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1931fc:
    // 0x1931fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1931fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_193200:
    // 0x193200: 0x0  nop
    ctx->pc = 0x193200u;
    // NOP
label_193204:
    // 0x193204: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x193204u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_193208:
    // 0x193208: 0x0  nop
    ctx->pc = 0x193208u;
    // NOP
label_19320c:
    // 0x19320c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_193210:
    if (ctx->pc == 0x193210u) {
        ctx->pc = 0x193210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19320Cu;
        // 0x193210: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193214u;
        goto label_193214;
    }
    ctx->pc = 0x19320Cu;
    {
        const bool branch_taken_0x19320c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x193210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19320Cu;
        // 0x193210: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19320c) {
            ctx->pc = 0x193230u;
            goto label_193230;
        }
    }
    ctx->pc = 0x193214u;
label_193214:
    // 0x193214: 0x0  nop
    ctx->pc = 0x193214u;
    // NOP
label_193218:
    // 0x193218: 0x0  nop
    ctx->pc = 0x193218u;
    // NOP
label_19321c:
    // 0x19321c: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x19321cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[1];
label_193220:
    // 0x193220: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193220u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_193224:
    // 0x193224: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193228:
    // 0x193228: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x193228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19322c:
    // 0x19322c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x19322cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_193230:
    // 0x193230: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x193230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_193234:
    // 0x193234: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193238:
    // 0x193238: 0x0  nop
    ctx->pc = 0x193238u;
    // NOP
label_19323c:
    // 0x19323c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x19323cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_193240:
    // 0x193240: 0x0  nop
    ctx->pc = 0x193240u;
    // NOP
label_193244:
    // 0x193244: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_193248:
    if (ctx->pc == 0x193248u) {
        ctx->pc = 0x19324Cu;
        goto label_19324c;
    }
    ctx->pc = 0x193244u;
    {
        const bool branch_taken_0x193244 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193244) {
            ctx->pc = 0x193260u;
            goto label_193260;
        }
    }
    ctx->pc = 0x19324Cu;
label_19324c:
    // 0x19324c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19324cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_193250:
    // 0x193250: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x193250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_193254:
    // 0x193254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193258:
    // 0x193258: 0x1000000e  b           . + 4 + (0xE << 2)
label_19325c:
    if (ctx->pc == 0x19325Cu) {
        ctx->pc = 0x19325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193258u;
        // 0x19325c: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x193260u;
        goto label_193260;
    }
    ctx->pc = 0x193258u;
    {
        const bool branch_taken_0x193258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193258u;
        // 0x19325c: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193258) {
            ctx->pc = 0x193294u;
            goto label_193294;
        }
    }
    ctx->pc = 0x193260u;
label_193260:
    // 0x193260: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x193260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_193264:
    // 0x193264: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x193264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_193268:
    // 0x193268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19326c:
    // 0x19326c: 0x0  nop
    ctx->pc = 0x19326cu;
    // NOP
label_193270:
    // 0x193270: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x193270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_193274:
    // 0x193274: 0x0  nop
    ctx->pc = 0x193274u;
    // NOP
label_193278:
    // 0x193278: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_19327c:
    if (ctx->pc == 0x19327Cu) {
        ctx->pc = 0x193280u;
        goto label_193280;
    }
    ctx->pc = 0x193278u;
    {
        const bool branch_taken_0x193278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193278) {
            ctx->pc = 0x193294u;
            goto label_193294;
        }
    }
    ctx->pc = 0x193280u;
label_193280:
    // 0x193280: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x193280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_193284:
    // 0x193284: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x193284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_193288:
    // 0x193288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19328c:
    // 0x19328c: 0x0  nop
    ctx->pc = 0x19328cu;
    // NOP
label_193290:
    // 0x193290: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x193290u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_193294:
    // 0x193294: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x193294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_193298:
    // 0x193298: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x193298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_19329c:
    // 0x19329c: 0x244299c0  addiu       $v0, $v0, -0x6640
    ctx->pc = 0x19329cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941120));
label_1932a0:
    // 0x1932a0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1932a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1932a4:
    // 0x1932a4: 0xc066e44  jal         func_19B910
label_1932a8:
    if (ctx->pc == 0x1932A8u) {
        ctx->pc = 0x1932A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1932A4u;
        // 0x1932a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1932ACu;
        goto label_1932ac;
    }
    ctx->pc = 0x1932A4u;
    SET_GPR_U32(ctx, 31, 0x1932ACu);
    ctx->pc = 0x1932A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1932A4u;
    // 0x1932a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x1932ACu;
label_1932ac:
    // 0x1932ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1932acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1932b0:
    // 0x1932b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1932b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1932b4:
    // 0x1932b4: 0xc066ec0  jal         func_19BB00
label_1932b8:
    if (ctx->pc == 0x1932B8u) {
        ctx->pc = 0x1932B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1932B4u;
        // 0x1932b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1932BCu;
        goto label_1932bc;
    }
    ctx->pc = 0x1932B4u;
    SET_GPR_U32(ctx, 31, 0x1932BCu);
    ctx->pc = 0x1932B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1932B4u;
    // 0x1932b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1932BCu;
label_1932bc:
    // 0x1932bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1932bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1932c0:
    // 0x1932c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1932c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1932c4:
    // 0x1932c4: 0xc066e1a  jal         func_19B868
label_1932c8:
    if (ctx->pc == 0x1932C8u) {
        ctx->pc = 0x1932C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1932C4u;
        // 0x1932c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1932CCu;
        goto label_1932cc;
    }
    ctx->pc = 0x1932C4u;
    SET_GPR_U32(ctx, 31, 0x1932CCu);
    ctx->pc = 0x1932C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1932C4u;
    // 0x1932c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x1932CCu;
label_1932cc:
    // 0x1932cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1932ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1932d0:
    // 0x1932d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1932d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1932d4:
    // 0x1932d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1932d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1932d8:
    // 0x1932d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1932d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1932dc:
    // 0x1932dc: 0x3e00008  jr          $ra
label_1932e0:
    if (ctx->pc == 0x1932E0u) {
        ctx->pc = 0x1932E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1932DCu;
        // 0x1932e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1932E4u;
        goto label_1932e4;
    }
    ctx->pc = 0x1932DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1932E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1932DCu;
        // 0x1932e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1932DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1932E4u;
label_1932e4:
    // 0x1932e4: 0x0  nop
    ctx->pc = 0x1932e4u;
    // NOP
label_1932e8:
    // 0x1932e8: 0x0  nop
    ctx->pc = 0x1932e8u;
    // NOP
label_1932ec:
    // 0x1932ec: 0x0  nop
    ctx->pc = 0x1932ecu;
    // NOP
label_1932f0:
    // 0x1932f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1932f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1932f4:
    // 0x1932f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1932f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1932f8:
    // 0x1932f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1932f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1932fc:
    // 0x1932fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1932fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_193300:
    // 0x193300: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x193300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_193304:
    // 0x193304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x193304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_193308:
    // 0x193308: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x193308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_19330c:
    // 0x19330c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19330cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_193310:
    // 0x193310: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x193310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_193314:
    // 0x193314: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x193314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_193318:
    // 0x193318: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x193318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19331c:
    // 0x19331c: 0xc0434f4  jal         func_10D3D0
label_193320:
    if (ctx->pc == 0x193320u) {
        ctx->pc = 0x193320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19331Cu;
        // 0x193320: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193324u;
        goto label_193324;
    }
    ctx->pc = 0x19331Cu;
    SET_GPR_U32(ctx, 31, 0x193324u);
    ctx->pc = 0x193320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19331Cu;
    // 0x193320: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D3D0u, 0x19331Cu, 0x193324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193324u;
label_193324:
    // 0x193324: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x193324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_193328:
    // 0x193328: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x193328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_19332c:
    // 0x19332c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19332cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193330:
    // 0x193330: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x193330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_193334:
    // 0x193334: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x193334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193338:
    // 0x193338: 0xc042704  jal         func_109C10
label_19333c:
    if (ctx->pc == 0x19333Cu) {
        ctx->pc = 0x19333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193338u;
        // 0x19333c: 0x27a8008c  addiu       $t0, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193340u;
        goto label_193340;
    }
    ctx->pc = 0x193338u;
    SET_GPR_U32(ctx, 31, 0x193340u);
    ctx->pc = 0x19333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193338u;
    // 0x19333c: 0x27a8008c  addiu       $t0, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109C10u, 0x193338u, 0x193340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193340u;
label_193340:
    // 0x193340: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_193344:
    if (ctx->pc == 0x193344u) {
        ctx->pc = 0x193348u;
        goto label_193348;
    }
    ctx->pc = 0x193340u;
    {
        const bool branch_taken_0x193340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193340) {
            ctx->pc = 0x19335Cu;
            goto label_19335c;
        }
    }
    ctx->pc = 0x193348u;
label_193348:
    // 0x193348: 0x94430056  lhu         $v1, 0x56($v0)
    ctx->pc = 0x193348u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 86)));
label_19334c:
    // 0x19334c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x19334cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_193350:
    // 0x193350: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_193354:
    if (ctx->pc == 0x193354u) {
        ctx->pc = 0x193358u;
        goto label_193358;
    }
    ctx->pc = 0x193350u;
    {
        const bool branch_taken_0x193350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x193350) {
            ctx->pc = 0x19335Cu;
            goto label_19335c;
        }
    }
    ctx->pc = 0x193358u;
label_193358:
    // 0x193358: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x193358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19335c:
    // 0x19335c: 0x122000bf  beqz        $s1, . + 4 + (0xBF << 2)
label_193360:
    if (ctx->pc == 0x193360u) {
        ctx->pc = 0x193364u;
        goto label_193364;
    }
    ctx->pc = 0x19335Cu;
    {
        const bool branch_taken_0x19335c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19335c) {
            ctx->pc = 0x19365Cu;
            goto label_19365c;
        }
    }
    ctx->pc = 0x193364u;
label_193364:
    // 0x193364: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
label_193368:
    if (ctx->pc == 0x193368u) {
        ctx->pc = 0x19336Cu;
        goto label_19336c;
    }
    ctx->pc = 0x193364u;
    {
        const bool branch_taken_0x193364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193364) {
            ctx->pc = 0x19365Cu;
            goto label_19365c;
        }
    }
    ctx->pc = 0x19336Cu;
label_19336c:
    // 0x19336c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x19336cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_193370:
    // 0x193370: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x193370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193374:
    // 0x193374: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x193374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_193378:
    // 0x193378: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x193378u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_19337c:
    // 0x19337c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x19337cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_193380:
    // 0x193380: 0x46000344  c1          0x344
    ctx->pc = 0x193380u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_193384:
    // 0x193384: 0x0  nop
    ctx->pc = 0x193384u;
    // NOP
label_193388:
    // 0x193388: 0x0  nop
    ctx->pc = 0x193388u;
    // NOP
label_19338c:
    // 0x19338c: 0xc06d51e  jal         func_1B5478
label_193390:
    if (ctx->pc == 0x193390u) {
        ctx->pc = 0x193394u;
        goto label_193394;
    }
    ctx->pc = 0x19338Cu;
    SET_GPR_U32(ctx, 31, 0x193394u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x193394u;
label_193394:
    // 0x193394: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x193394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_193398:
    // 0x193398: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x193398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_19339c:
    // 0x19339c: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x19339cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1933a0:
    // 0x1933a0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1933a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1933a4:
    // 0x1933a4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1933a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1933a8:
    // 0x1933a8: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1933a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1933ac:
    // 0x1933ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1933acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1933b0:
    // 0x1933b0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1933b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1933b4:
    // 0x1933b4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1933b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1933b8:
    // 0x1933b8: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x1933b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_1933bc:
    // 0x1933bc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1933bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1933c0:
    // 0x1933c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1933c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1933c4:
    // 0x1933c4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1933c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1933c8:
    // 0x1933c8: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1933c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_1933cc:
    // 0x1933cc: 0x46000344  c1          0x344
    ctx->pc = 0x1933ccu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_1933d0:
    // 0x1933d0: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x1933d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1933d4:
    // 0x1933d4: 0x0  nop
    ctx->pc = 0x1933d4u;
    // NOP
label_1933d8:
    // 0x1933d8: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x1933d8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[1];
label_1933dc:
    // 0x1933dc: 0x0  nop
    ctx->pc = 0x1933dcu;
    // NOP
label_1933e0:
    // 0x1933e0: 0x0  nop
    ctx->pc = 0x1933e0u;
    // NOP
label_1933e4:
    // 0x1933e4: 0xc06d51e  jal         func_1B5478
label_1933e8:
    if (ctx->pc == 0x1933E8u) {
        ctx->pc = 0x1933E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1933E4u;
        // 0x1933e8: 0xe78088ac  swc1        $f0, -0x7754($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936748), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1933ECu;
        goto label_1933ec;
    }
    ctx->pc = 0x1933E4u;
    SET_GPR_U32(ctx, 31, 0x1933ECu);
    ctx->pc = 0x1933E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1933E4u;
    // 0x1933e8: 0xe78088ac  swc1        $f0, -0x7754($gp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936748), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x1933ECu;
label_1933ec:
    // 0x1933ec: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1933ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_1933f0:
    // 0x1933f0: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x1933f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
label_1933f4:
    // 0x1933f4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1933f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1933f8:
    // 0x1933f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1933f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1933fc:
    // 0x1933fc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1933fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_193400:
    // 0x193400: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x193400u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_193404:
    // 0x193404: 0x0  nop
    ctx->pc = 0x193404u;
    // NOP
label_193408:
    // 0x193408: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x193408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_19340c:
    // 0x19340c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x19340cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_193410:
    // 0x193410: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x193410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_193414:
    // 0x193414: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x193414u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_193418:
    // 0x193418: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19341c:
    // 0x19341c: 0xc78388ac  lwc1        $f3, -0x7754($gp)
    ctx->pc = 0x19341cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_193420:
    // 0x193420: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x193420u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_193424:
    // 0x193424: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x193424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_193428:
    // 0x193428: 0x0  nop
    ctx->pc = 0x193428u;
    // NOP
label_19342c:
    // 0x19342c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x19342cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_193430:
    // 0x193430: 0x0  nop
    ctx->pc = 0x193430u;
    // NOP
label_193434:
    // 0x193434: 0x45000043  bc1f        . + 4 + (0x43 << 2)
label_193438:
    if (ctx->pc == 0x193438u) {
        ctx->pc = 0x193438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193434u;
        // 0x193438: 0xe78088a8  swc1        $f0, -0x7758($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936744), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19343Cu;
        goto label_19343c;
    }
    ctx->pc = 0x193434u;
    {
        const bool branch_taken_0x193434 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x193438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193434u;
        // 0x193438: 0xe78088a8  swc1        $f0, -0x7758($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936744), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193434) {
            ctx->pc = 0x193544u;
            goto label_193544;
        }
    }
    ctx->pc = 0x19343Cu;
label_19343c:
    // 0x19343c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19343cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_193440:
    // 0x193440: 0x0  nop
    ctx->pc = 0x193440u;
    // NOP
label_193444:
    // 0x193444: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x193444u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_193448:
    // 0x193448: 0x0  nop
    ctx->pc = 0x193448u;
    // NOP
label_19344c:
    // 0x19344c: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
label_193450:
    if (ctx->pc == 0x193450u) {
        ctx->pc = 0x193454u;
        goto label_193454;
    }
    ctx->pc = 0x19344Cu;
    {
        const bool branch_taken_0x19344c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19344c) {
            ctx->pc = 0x193544u;
            goto label_193544;
        }
    }
    ctx->pc = 0x193454u;
label_193454:
    // 0x193454: 0xc78088a8  lwc1        $f0, -0x7758($gp)
    ctx->pc = 0x193454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193458:
    // 0x193458: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x193458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19345c:
    // 0x19345c: 0x0  nop
    ctx->pc = 0x19345cu;
    // NOP
label_193460:
    // 0x193460: 0x45000038  bc1f        . + 4 + (0x38 << 2)
label_193464:
    if (ctx->pc == 0x193464u) {
        ctx->pc = 0x193468u;
        goto label_193468;
    }
    ctx->pc = 0x193460u;
    {
        const bool branch_taken_0x193460 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193460) {
            ctx->pc = 0x193544u;
            goto label_193544;
        }
    }
    ctx->pc = 0x193468u;
label_193468:
    // 0x193468: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x193468u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19346c:
    // 0x19346c: 0x0  nop
    ctx->pc = 0x19346cu;
    // NOP
label_193470:
    // 0x193470: 0x45010034  bc1t        . + 4 + (0x34 << 2)
label_193474:
    if (ctx->pc == 0x193474u) {
        ctx->pc = 0x193474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193470u;
        // 0x193474: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193478u;
        goto label_193478;
    }
    ctx->pc = 0x193470u;
    {
        const bool branch_taken_0x193470 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x193474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193470u;
        // 0x193474: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193470) {
            ctx->pc = 0x193544u;
            goto label_193544;
        }
    }
    ctx->pc = 0x193478u;
label_193478:
    // 0x193478: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x193478u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_19347c:
    // 0x19347c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x19347cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_193480:
    // 0x193480: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x193480u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_193484:
    // 0x193484: 0x4a0002ff  vnop
    ctx->pc = 0x193484u;
    // NOP operation, no action needed for VU0
label_193488:
    // 0x193488: 0x4a0002ff  vnop
    ctx->pc = 0x193488u;
    // NOP operation, no action needed for VU0
label_19348c:
    // 0x19348c: 0x4a0002ff  vnop
    ctx->pc = 0x19348cu;
    // NOP operation, no action needed for VU0
label_193490:
    // 0x193490: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x193490u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_193494:
    // 0x193494: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x193494u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_193498:
    // 0x193498: 0x4a0002ff  vnop
    ctx->pc = 0x193498u;
    // NOP operation, no action needed for VU0
label_19349c:
    // 0x19349c: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x19349cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1934a0:
    // 0x1934a0: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x1934a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1934a4:
    // 0x1934a4: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x1934a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1934a8:
    // 0x1934a8: 0x4a0002ff  vnop
    ctx->pc = 0x1934a8u;
    // NOP operation, no action needed for VU0
label_1934ac:
    // 0x1934ac: 0x4a0002ff  vnop
    ctx->pc = 0x1934acu;
    // NOP operation, no action needed for VU0
label_1934b0:
    // 0x1934b0: 0x4a0002ff  vnop
    ctx->pc = 0x1934b0u;
    // NOP operation, no action needed for VU0
label_1934b4:
    // 0x1934b4: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1934b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1934b8:
    // 0x1934b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1934b8u;
    // VWAITQ (Q already resolved in this runtime)
label_1934bc:
    // 0x1934bc: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x1934bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1934c0:
    // 0x1934c0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1934c0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1934c4:
    // 0x1934c4: 0xaf8988a0  sw          $t1, -0x7760($gp)
    ctx->pc = 0x1934c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936736), GPR_U32(ctx, 9));
label_1934c8:
    // 0x1934c8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1934c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1934cc:
    // 0x1934cc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1934ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1934d0:
    // 0x1934d0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1934d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1934d4:
    // 0x1934d4: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1934d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1934d8:
    // 0x1934d8: 0x4a0002ff  vnop
    ctx->pc = 0x1934d8u;
    // NOP operation, no action needed for VU0
label_1934dc:
    // 0x1934dc: 0x4a0002ff  vnop
    ctx->pc = 0x1934dcu;
    // NOP operation, no action needed for VU0
label_1934e0:
    // 0x1934e0: 0x4a0002ff  vnop
    ctx->pc = 0x1934e0u;
    // NOP operation, no action needed for VU0
label_1934e4:
    // 0x1934e4: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x1934e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1934e8:
    // 0x1934e8: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x1934e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1934ec:
    // 0x1934ec: 0x4a0002ff  vnop
    ctx->pc = 0x1934ecu;
    // NOP operation, no action needed for VU0
label_1934f0:
    // 0x1934f0: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x1934f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1934f4:
    // 0x1934f4: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x1934f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1934f8:
    // 0x1934f8: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x1934f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1934fc:
    // 0x1934fc: 0x4a0002ff  vnop
    ctx->pc = 0x1934fcu;
    // NOP operation, no action needed for VU0
label_193500:
    // 0x193500: 0x4a0002ff  vnop
    ctx->pc = 0x193500u;
    // NOP operation, no action needed for VU0
label_193504:
    // 0x193504: 0x4a0002ff  vnop
    ctx->pc = 0x193504u;
    // NOP operation, no action needed for VU0
label_193508:
    // 0x193508: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x193508u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_19350c:
    // 0x19350c: 0x4a0003bf  vwaitq
    ctx->pc = 0x19350cu;
    // VWAITQ (Q already resolved in this runtime)
label_193510:
    // 0x193510: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x193510u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_193514:
    // 0x193514: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x193514u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193518:
    // 0x193518: 0xaf8988a4  sw          $t1, -0x775C($gp)
    ctx->pc = 0x193518u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936740), GPR_U32(ctx, 9));
label_19351c:
    // 0x19351c: 0xc79488a0  lwc1        $f20, -0x7760($gp)
    ctx->pc = 0x19351cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_193520:
    // 0x193520: 0xc78088a4  lwc1        $f0, -0x775C($gp)
    ctx->pc = 0x193520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193524:
    // 0x193524: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x193524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_193528:
    // 0x193528: 0x0  nop
    ctx->pc = 0x193528u;
    // NOP
label_19352c:
    // 0x19352c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_193530:
    if (ctx->pc == 0x193530u) {
        ctx->pc = 0x193534u;
        goto label_193534;
    }
    ctx->pc = 0x19352Cu;
    {
        const bool branch_taken_0x19352c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19352c) {
            ctx->pc = 0x19353Cu;
            goto label_19353c;
        }
    }
    ctx->pc = 0x193534u;
label_193534:
    // 0x193534: 0x100000be  b           . + 4 + (0xBE << 2)
label_193538:
    if (ctx->pc == 0x193538u) {
        ctx->pc = 0x193538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193534u;
        // 0x193538: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19353Cu;
        goto label_19353c;
    }
    ctx->pc = 0x193534u;
    {
        const bool branch_taken_0x193534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193534u;
        // 0x193538: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193534) {
            ctx->pc = 0x193830u;
            goto label_193830;
        }
    }
    ctx->pc = 0x19353Cu;
label_19353c:
    // 0x19353c: 0x100000bb  b           . + 4 + (0xBB << 2)
label_193540:
    if (ctx->pc == 0x193540u) {
        ctx->pc = 0x193540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19353Cu;
        // 0x193540: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x193544u;
        goto label_193544;
    }
    ctx->pc = 0x19353Cu;
    {
        const bool branch_taken_0x19353c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19353Cu;
        // 0x193540: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19353c) {
            ctx->pc = 0x19382Cu;
            goto label_19382c;
        }
    }
    ctx->pc = 0x193544u;
label_193544:
    // 0x193544: 0xc78188ac  lwc1        $f1, -0x7754($gp)
    ctx->pc = 0x193544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_193548:
    // 0x193548: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x193548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_19354c:
    // 0x19354c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19354cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193550:
    // 0x193550: 0x0  nop
    ctx->pc = 0x193550u;
    // NOP
label_193554:
    // 0x193554: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x193554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_193558:
    // 0x193558: 0x0  nop
    ctx->pc = 0x193558u;
    // NOP
label_19355c:
    // 0x19355c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_193560:
    if (ctx->pc == 0x193560u) {
        ctx->pc = 0x193564u;
        goto label_193564;
    }
    ctx->pc = 0x19355Cu;
    {
        const bool branch_taken_0x19355c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19355c) {
            ctx->pc = 0x1935D0u;
            goto label_1935d0;
        }
    }
    ctx->pc = 0x193564u;
label_193564:
    // 0x193564: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x193564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193568:
    // 0x193568: 0x0  nop
    ctx->pc = 0x193568u;
    // NOP
label_19356c:
    // 0x19356c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19356cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_193570:
    // 0x193570: 0x0  nop
    ctx->pc = 0x193570u;
    // NOP
label_193574:
    // 0x193574: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_193578:
    if (ctx->pc == 0x193578u) {
        ctx->pc = 0x193578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193574u;
        // 0x193578: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19357Cu;
        goto label_19357c;
    }
    ctx->pc = 0x193574u;
    {
        const bool branch_taken_0x193574 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x193578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193574u;
        // 0x193578: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193574) {
            ctx->pc = 0x1935D0u;
            goto label_1935d0;
        }
    }
    ctx->pc = 0x19357Cu;
label_19357c:
    // 0x19357c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x19357cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_193580:
    // 0x193580: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x193580u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_193584:
    // 0x193584: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x193584u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_193588:
    // 0x193588: 0x4a0002ff  vnop
    ctx->pc = 0x193588u;
    // NOP operation, no action needed for VU0
label_19358c:
    // 0x19358c: 0x4a0002ff  vnop
    ctx->pc = 0x19358cu;
    // NOP operation, no action needed for VU0
label_193590:
    // 0x193590: 0x4a0002ff  vnop
    ctx->pc = 0x193590u;
    // NOP operation, no action needed for VU0
label_193594:
    // 0x193594: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x193594u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_193598:
    // 0x193598: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x193598u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_19359c:
    // 0x19359c: 0x4a0002ff  vnop
    ctx->pc = 0x19359cu;
    // NOP operation, no action needed for VU0
label_1935a0:
    // 0x1935a0: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x1935a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1935a4:
    // 0x1935a4: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x1935a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1935a8:
    // 0x1935a8: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x1935a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1935ac:
    // 0x1935ac: 0x4a0002ff  vnop
    ctx->pc = 0x1935acu;
    // NOP operation, no action needed for VU0
label_1935b0:
    // 0x1935b0: 0x4a0002ff  vnop
    ctx->pc = 0x1935b0u;
    // NOP operation, no action needed for VU0
label_1935b4:
    // 0x1935b4: 0x4a0002ff  vnop
    ctx->pc = 0x1935b4u;
    // NOP operation, no action needed for VU0
label_1935b8:
    // 0x1935b8: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1935b8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1935bc:
    // 0x1935bc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1935bcu;
    // VWAITQ (Q already resolved in this runtime)
label_1935c0:
    // 0x1935c0: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x1935c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1935c4:
    // 0x1935c4: 0x4489a000  mtc1        $t1, $f20
    ctx->pc = 0x1935c4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1935c8:
    // 0x1935c8: 0x10000098  b           . + 4 + (0x98 << 2)
label_1935cc:
    if (ctx->pc == 0x1935CCu) {
        ctx->pc = 0x1935D0u;
        goto label_1935d0;
    }
    ctx->pc = 0x1935C8u;
    {
        const bool branch_taken_0x1935c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1935c8) {
            ctx->pc = 0x19382Cu;
            goto label_19382c;
        }
    }
    ctx->pc = 0x1935D0u;
label_1935d0:
    // 0x1935d0: 0xc78188a8  lwc1        $f1, -0x7758($gp)
    ctx->pc = 0x1935d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1935d4:
    // 0x1935d4: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x1935d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_1935d8:
    // 0x1935d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1935d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1935dc:
    // 0x1935dc: 0x0  nop
    ctx->pc = 0x1935dcu;
    // NOP
label_1935e0:
    // 0x1935e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1935e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1935e4:
    // 0x1935e4: 0x0  nop
    ctx->pc = 0x1935e4u;
    // NOP
label_1935e8:
    // 0x1935e8: 0x45000090  bc1f        . + 4 + (0x90 << 2)
label_1935ec:
    if (ctx->pc == 0x1935ECu) {
        ctx->pc = 0x1935F0u;
        goto label_1935f0;
    }
    ctx->pc = 0x1935E8u;
    {
        const bool branch_taken_0x1935e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1935e8) {
            ctx->pc = 0x19382Cu;
            goto label_19382c;
        }
    }
    ctx->pc = 0x1935F0u;
label_1935f0:
    // 0x1935f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1935f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1935f4:
    // 0x1935f4: 0x0  nop
    ctx->pc = 0x1935f4u;
    // NOP
label_1935f8:
    // 0x1935f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1935f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1935fc:
    // 0x1935fc: 0x0  nop
    ctx->pc = 0x1935fcu;
    // NOP
label_193600:
    // 0x193600: 0x4501008a  bc1t        . + 4 + (0x8A << 2)
label_193604:
    if (ctx->pc == 0x193604u) {
        ctx->pc = 0x193604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193600u;
        // 0x193604: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193608u;
        goto label_193608;
    }
    ctx->pc = 0x193600u;
    {
        const bool branch_taken_0x193600 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x193604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193600u;
        // 0x193604: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193600) {
            ctx->pc = 0x19382Cu;
            goto label_19382c;
        }
    }
    ctx->pc = 0x193608u;
label_193608:
    // 0x193608: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x193608u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_19360c:
    // 0x19360c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x19360cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_193610:
    // 0x193610: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x193610u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_193614:
    // 0x193614: 0x4a0002ff  vnop
    ctx->pc = 0x193614u;
    // NOP operation, no action needed for VU0
label_193618:
    // 0x193618: 0x4a0002ff  vnop
    ctx->pc = 0x193618u;
    // NOP operation, no action needed for VU0
label_19361c:
    // 0x19361c: 0x4a0002ff  vnop
    ctx->pc = 0x19361cu;
    // NOP operation, no action needed for VU0
label_193620:
    // 0x193620: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x193620u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_193624:
    // 0x193624: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x193624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_193628:
    // 0x193628: 0x4a0002ff  vnop
    ctx->pc = 0x193628u;
    // NOP operation, no action needed for VU0
label_19362c:
    // 0x19362c: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x19362cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_193630:
    // 0x193630: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x193630u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_193634:
    // 0x193634: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x193634u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_193638:
    // 0x193638: 0x4a0002ff  vnop
    ctx->pc = 0x193638u;
    // NOP operation, no action needed for VU0
label_19363c:
    // 0x19363c: 0x4a0002ff  vnop
    ctx->pc = 0x19363cu;
    // NOP operation, no action needed for VU0
label_193640:
    // 0x193640: 0x4a0002ff  vnop
    ctx->pc = 0x193640u;
    // NOP operation, no action needed for VU0
label_193644:
    // 0x193644: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x193644u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_193648:
    // 0x193648: 0x4a0003bf  vwaitq
    ctx->pc = 0x193648u;
    // VWAITQ (Q already resolved in this runtime)
label_19364c:
    // 0x19364c: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x19364cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_193650:
    // 0x193650: 0x4489a000  mtc1        $t1, $f20
    ctx->pc = 0x193650u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_193654:
    // 0x193654: 0x10000075  b           . + 4 + (0x75 << 2)
label_193658:
    if (ctx->pc == 0x193658u) {
        ctx->pc = 0x19365Cu;
        goto label_19365c;
    }
    ctx->pc = 0x193654u;
    {
        const bool branch_taken_0x193654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193654) {
            ctx->pc = 0x19382Cu;
            goto label_19382c;
        }
    }
    ctx->pc = 0x19365Cu;
label_19365c:
    // 0x19365c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_193660:
    if (ctx->pc == 0x193660u) {
        ctx->pc = 0x193664u;
        goto label_193664;
    }
    ctx->pc = 0x19365Cu;
    {
        const bool branch_taken_0x19365c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19365c) {
            ctx->pc = 0x193748u;
            goto label_193748;
        }
    }
    ctx->pc = 0x193664u;
label_193664:
    // 0x193664: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x193664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_193668:
    // 0x193668: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x193668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19366c:
    // 0x19366c: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x19366cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_193670:
    // 0x193670: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x193670u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_193674:
    // 0x193674: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x193674u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_193678:
    // 0x193678: 0x46000344  c1          0x344
    ctx->pc = 0x193678u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_19367c:
    // 0x19367c: 0x0  nop
    ctx->pc = 0x19367cu;
    // NOP
label_193680:
    // 0x193680: 0x0  nop
    ctx->pc = 0x193680u;
    // NOP
label_193684:
    // 0x193684: 0xc06d51e  jal         func_1B5478
label_193688:
    if (ctx->pc == 0x193688u) {
        ctx->pc = 0x19368Cu;
        goto label_19368c;
    }
    ctx->pc = 0x193684u;
    SET_GPR_U32(ctx, 31, 0x19368Cu);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x19368Cu;
label_19368c:
    // 0x19368c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x19368cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_193690:
    // 0x193690: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x193690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
label_193694:
    // 0x193694: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x193694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_193698:
    // 0x193698: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x193698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19369c:
    // 0x19369c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x19369cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1936a0:
    // 0x1936a0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1936a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1936a4:
    // 0x1936a4: 0x0  nop
    ctx->pc = 0x1936a4u;
    // NOP
label_1936a8:
    // 0x1936a8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1936a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1936ac:
    // 0x1936ac: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1936acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1936b0:
    // 0x1936b0: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x1936b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_1936b4:
    // 0x1936b4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1936b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1936b8:
    // 0x1936b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1936b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1936bc:
    // 0x1936bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1936bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1936c0:
    // 0x1936c0: 0x0  nop
    ctx->pc = 0x1936c0u;
    // NOP
label_1936c4:
    // 0x1936c4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1936c4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1936c8:
    // 0x1936c8: 0x0  nop
    ctx->pc = 0x1936c8u;
    // NOP
label_1936cc:
    // 0x1936cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1936ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1936d0:
    // 0x1936d0: 0x0  nop
    ctx->pc = 0x1936d0u;
    // NOP
label_1936d4:
    // 0x1936d4: 0x45000055  bc1f        . + 4 + (0x55 << 2)
label_1936d8:
    if (ctx->pc == 0x1936D8u) {
        ctx->pc = 0x1936D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936D4u;
        // 0x1936d8: 0xe781889c  swc1        $f1, -0x7764($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936732), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1936DCu;
        goto label_1936dc;
    }
    ctx->pc = 0x1936D4u;
    {
        const bool branch_taken_0x1936d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1936D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936D4u;
        // 0x1936d8: 0xe781889c  swc1        $f1, -0x7764($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936732), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936d4) {
            ctx->pc = 0x19382Cu;
            goto label_19382c;
        }
    }
    ctx->pc = 0x1936DCu;
label_1936dc:
    // 0x1936dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1936dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1936e0:
    // 0x1936e0: 0x0  nop
    ctx->pc = 0x1936e0u;
    // NOP
label_1936e4:
    // 0x1936e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1936e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1936e8:
    // 0x1936e8: 0x0  nop
    ctx->pc = 0x1936e8u;
    // NOP
label_1936ec:
    // 0x1936ec: 0x4501004f  bc1t        . + 4 + (0x4F << 2)
label_1936f0:
    if (ctx->pc == 0x1936F0u) {
        ctx->pc = 0x1936F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936ECu;
        // 0x1936f0: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1936F4u;
        goto label_1936f4;
    }
    ctx->pc = 0x1936ECu;
    {
        const bool branch_taken_0x1936ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1936F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936ECu;
        // 0x1936f0: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936ec) {
            ctx->pc = 0x19382Cu;
            goto label_19382c;
        }
    }
    ctx->pc = 0x1936F4u;
label_1936f4:
    // 0x1936f4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1936f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1936f8:
    // 0x1936f8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1936f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1936fc:
    // 0x1936fc: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1936fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_193700:
    // 0x193700: 0x4a0002ff  vnop
    ctx->pc = 0x193700u;
    // NOP operation, no action needed for VU0
label_193704:
    // 0x193704: 0x4a0002ff  vnop
    ctx->pc = 0x193704u;
    // NOP operation, no action needed for VU0
label_193708:
    // 0x193708: 0x4a0002ff  vnop
    ctx->pc = 0x193708u;
    // NOP operation, no action needed for VU0
label_19370c:
    // 0x19370c: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x19370cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_193710:
    // 0x193710: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x193710u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_193714:
    // 0x193714: 0x4a0002ff  vnop
    ctx->pc = 0x193714u;
    // NOP operation, no action needed for VU0
label_193718:
    // 0x193718: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x193718u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_19371c:
    // 0x19371c: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x19371cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_193720:
    // 0x193720: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x193720u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_193724:
    // 0x193724: 0x4a0002ff  vnop
    ctx->pc = 0x193724u;
    // NOP operation, no action needed for VU0
label_193728:
    // 0x193728: 0x4a0002ff  vnop
    ctx->pc = 0x193728u;
    // NOP operation, no action needed for VU0
label_19372c:
    // 0x19372c: 0x4a0002ff  vnop
    ctx->pc = 0x19372cu;
    // NOP operation, no action needed for VU0
label_193730:
    // 0x193730: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x193730u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_193734:
    // 0x193734: 0x4a0003bf  vwaitq
    ctx->pc = 0x193734u;
    // VWAITQ (Q already resolved in this runtime)
label_193738:
    // 0x193738: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x193738u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_19373c:
    // 0x19373c: 0x4489a000  mtc1        $t1, $f20
    ctx->pc = 0x19373cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_193740:
    // 0x193740: 0x1000003a  b           . + 4 + (0x3A << 2)
label_193744:
    if (ctx->pc == 0x193744u) {
        ctx->pc = 0x193748u;
        goto label_193748;
    }
    ctx->pc = 0x193740u;
    {
        const bool branch_taken_0x193740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193740) {
            ctx->pc = 0x19382Cu;
            goto label_19382c;
        }
    }
    ctx->pc = 0x193748u;
label_193748:
    // 0x193748: 0x12200038  beqz        $s1, . + 4 + (0x38 << 2)
label_19374c:
    if (ctx->pc == 0x19374Cu) {
        ctx->pc = 0x193750u;
        goto label_193750;
    }
    ctx->pc = 0x193748u;
    {
        const bool branch_taken_0x193748 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x193748) {
            ctx->pc = 0x19382Cu;
            goto label_19382c;
        }
    }
    ctx->pc = 0x193750u;
label_193750:
    // 0x193750: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x193750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_193754:
    // 0x193754: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x193754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193758:
    // 0x193758: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x193758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19375c:
    // 0x19375c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x19375cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_193760:
    // 0x193760: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x193760u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_193764:
    // 0x193764: 0x46000344  c1          0x344
    ctx->pc = 0x193764u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_193768:
    // 0x193768: 0x0  nop
    ctx->pc = 0x193768u;
    // NOP
label_19376c:
    // 0x19376c: 0x0  nop
    ctx->pc = 0x19376cu;
    // NOP
label_193770:
    // 0x193770: 0xc06d51e  jal         func_1B5478
label_193774:
    if (ctx->pc == 0x193774u) {
        ctx->pc = 0x193778u;
        goto label_193778;
    }
    ctx->pc = 0x193770u;
    SET_GPR_U32(ctx, 31, 0x193778u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x193778u;
label_193778:
    // 0x193778: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x193778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_19377c:
    // 0x19377c: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x19377cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
label_193780:
    // 0x193780: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x193780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_193784:
    // 0x193784: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x193784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_193788:
    // 0x193788: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x193788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_19378c:
    // 0x19378c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x19378cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_193790:
    // 0x193790: 0x0  nop
    ctx->pc = 0x193790u;
    // NOP
label_193794:
    // 0x193794: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x193794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_193798:
    // 0x193798: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x193798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_19379c:
    // 0x19379c: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x19379cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_1937a0:
    // 0x1937a0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1937a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1937a4:
    // 0x1937a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1937a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1937a8:
    // 0x1937a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1937a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1937ac:
    // 0x1937ac: 0x0  nop
    ctx->pc = 0x1937acu;
    // NOP
label_1937b0:
    // 0x1937b0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1937b0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1937b4:
    // 0x1937b4: 0x0  nop
    ctx->pc = 0x1937b4u;
    // NOP
label_1937b8:
    // 0x1937b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1937b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1937bc:
    // 0x1937bc: 0x0  nop
    ctx->pc = 0x1937bcu;
    // NOP
label_1937c0:
    // 0x1937c0: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_1937c4:
    if (ctx->pc == 0x1937C4u) {
        ctx->pc = 0x1937C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937C0u;
        // 0x1937c4: 0xe7818898  swc1        $f1, -0x7768($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936728), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1937C8u;
        goto label_1937c8;
    }
    ctx->pc = 0x1937C0u;
    {
        const bool branch_taken_0x1937c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1937C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937C0u;
        // 0x1937c4: 0xe7818898  swc1        $f1, -0x7768($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936728), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937c0) {
            ctx->pc = 0x19382Cu;
            goto label_19382c;
        }
    }
    ctx->pc = 0x1937C8u;
label_1937c8:
    // 0x1937c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1937c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1937cc:
    // 0x1937cc: 0x0  nop
    ctx->pc = 0x1937ccu;
    // NOP
label_1937d0:
    // 0x1937d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1937d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1937d4:
    // 0x1937d4: 0x0  nop
    ctx->pc = 0x1937d4u;
    // NOP
label_1937d8:
    // 0x1937d8: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_1937dc:
    if (ctx->pc == 0x1937DCu) {
        ctx->pc = 0x1937DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937D8u;
        // 0x1937dc: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1937E0u;
        goto label_1937e0;
    }
    ctx->pc = 0x1937D8u;
    {
        const bool branch_taken_0x1937d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1937DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937D8u;
        // 0x1937dc: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937d8) {
            ctx->pc = 0x19382Cu;
            goto label_19382c;
        }
    }
    ctx->pc = 0x1937E0u;
label_1937e0:
    // 0x1937e0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1937e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1937e4:
    // 0x1937e4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1937e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1937e8:
    // 0x1937e8: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1937e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1937ec:
    // 0x1937ec: 0x4a0002ff  vnop
    ctx->pc = 0x1937ecu;
    // NOP operation, no action needed for VU0
label_1937f0:
    // 0x1937f0: 0x4a0002ff  vnop
    ctx->pc = 0x1937f0u;
    // NOP operation, no action needed for VU0
label_1937f4:
    // 0x1937f4: 0x4a0002ff  vnop
    ctx->pc = 0x1937f4u;
    // NOP operation, no action needed for VU0
label_1937f8:
    // 0x1937f8: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x1937f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1937fc:
    // 0x1937fc: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x1937fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_193800:
    // 0x193800: 0x4a0002ff  vnop
    ctx->pc = 0x193800u;
    // NOP operation, no action needed for VU0
label_193804:
    // 0x193804: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x193804u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_193808:
    // 0x193808: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x193808u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_19380c:
    // 0x19380c: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x19380cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_193810:
    // 0x193810: 0x4a0002ff  vnop
    ctx->pc = 0x193810u;
    // NOP operation, no action needed for VU0
label_193814:
    // 0x193814: 0x4a0002ff  vnop
    ctx->pc = 0x193814u;
    // NOP operation, no action needed for VU0
label_193818:
    // 0x193818: 0x4a0002ff  vnop
    ctx->pc = 0x193818u;
    // NOP operation, no action needed for VU0
label_19381c:
    // 0x19381c: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x19381cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_193820:
    // 0x193820: 0x4a0003bf  vwaitq
    ctx->pc = 0x193820u;
    // VWAITQ (Q already resolved in this runtime)
label_193824:
    // 0x193824: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x193824u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_193828:
    // 0x193828: 0x4489a000  mtc1        $t1, $f20
    ctx->pc = 0x193828u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_19382c:
    // 0x19382c: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x19382cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_193830:
    // 0x193830: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x193830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_193834:
    // 0x193834: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x193834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_193838:
    // 0x193838: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x193838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19383c:
    // 0x19383c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19383cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_193840:
    // 0x193840: 0x3e00008  jr          $ra
label_193844:
    if (ctx->pc == 0x193844u) {
        ctx->pc = 0x193844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193840u;
        // 0x193844: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193848u;
        goto label_193848;
    }
    ctx->pc = 0x193840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193840u;
        // 0x193844: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193848u;
label_193848:
    // 0x193848: 0x0  nop
    ctx->pc = 0x193848u;
    // NOP
label_19384c:
    // 0x19384c: 0x0  nop
    ctx->pc = 0x19384cu;
    // NOP
label_193850:
    // 0x193850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_193854:
    // 0x193854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193858:
    // 0x193858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19385c:
    // 0x19385c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19385cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_193860:
    // 0x193860: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x193860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_193864:
    // 0x193864: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x193864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_193868:
    // 0x193868: 0x27a20028  addiu       $v0, $sp, 0x28
    ctx->pc = 0x193868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_19386c:
    // 0x19386c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x19386cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_193870:
    // 0x193870: 0xc05f3d0  jal         func_17CF40
label_193874:
    if (ctx->pc == 0x193874u) {
        ctx->pc = 0x193874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193870u;
        // 0x193874: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193878u;
        goto label_193878;
    }
    ctx->pc = 0x193870u;
    SET_GPR_U32(ctx, 31, 0x193878u);
    ctx->pc = 0x193874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193870u;
    // 0x193874: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    { ctx->pc = 0x17cf40; return; }
    ctx->pc = 0x193878u;
label_193878:
    // 0x193878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19387c:
    // 0x19387c: 0x3e00008  jr          $ra
label_193880:
    if (ctx->pc == 0x193880u) {
        ctx->pc = 0x193880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19387Cu;
        // 0x193880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193884u;
        goto label_193884;
    }
    ctx->pc = 0x19387Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19387Cu;
        // 0x193880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19387Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193884u;
label_193884:
    // 0x193884: 0x0  nop
    ctx->pc = 0x193884u;
    // NOP
label_193888:
    // 0x193888: 0x0  nop
    ctx->pc = 0x193888u;
    // NOP
label_19388c:
    // 0x19388c: 0x0  nop
    ctx->pc = 0x19388cu;
    // NOP
label_193890:
    // 0x193890: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x193890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_193894:
    // 0x193894: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x193894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_193898:
    // 0x193898: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x193898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_19389c:
    // 0x19389c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19389cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1938a0:
    // 0x1938a0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1938a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1938a4:
    // 0x1938a4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1938a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1938a8:
    // 0x1938a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1938a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1938ac:
    // 0x1938ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1938acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1938b0:
    // 0x1938b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1938b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1938b4:
    // 0x1938b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1938b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1938b8:
    // 0x1938b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1938b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1938bc:
    // 0x1938bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1938bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1938c0:
    // 0x1938c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1938c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1938c4:
    // 0x1938c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1938c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1938c8:
    // 0x1938c8: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x1938c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
label_1938cc:
    // 0x1938cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1938ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1938d0:
    // 0x1938d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1938d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1938d4:
    // 0x1938d4: 0xc042100  jal         func_108400
label_1938d8:
    if (ctx->pc == 0x1938D8u) {
        ctx->pc = 0x1938D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938D4u;
        // 0x1938d8: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1938DCu;
        goto label_1938dc;
    }
    ctx->pc = 0x1938D4u;
    SET_GPR_U32(ctx, 31, 0x1938DCu);
    ctx->pc = 0x1938D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1938D4u;
    // 0x1938d8: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108400u, 0x1938D4u, 0x1938DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1938DCu;
label_1938dc:
    // 0x1938dc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1938dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1938e0:
    // 0x1938e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1938e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1938e4:
    // 0x1938e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1938e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1938e8:
    // 0x1938e8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1938e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1938ec:
    // 0x1938ec: 0xc0434f4  jal         func_10D3D0
label_1938f0:
    if (ctx->pc == 0x1938F0u) {
        ctx->pc = 0x1938F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938ECu;
        // 0x1938f0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1938F4u;
        goto label_1938f4;
    }
    ctx->pc = 0x1938ECu;
    SET_GPR_U32(ctx, 31, 0x1938F4u);
    ctx->pc = 0x1938F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1938ECu;
    // 0x1938f0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D3D0u, 0x1938ECu, 0x1938F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1938F4u;
label_1938f4:
    // 0x1938f4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1938f8:
    if (ctx->pc == 0x1938F8u) {
        ctx->pc = 0x1938F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938F4u;
        // 0x1938f8: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1938FCu;
        goto label_1938fc;
    }
    ctx->pc = 0x1938F4u;
    {
        const bool branch_taken_0x1938f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1938F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938F4u;
        // 0x1938f8: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1938f4) {
            ctx->pc = 0x193984u;
            { ctx->pc = 0x193984; return; }
        }
    }
    ctx->pc = 0x1938FCu;
label_1938fc:
    // 0x1938fc: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x1938fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_193900:
    // 0x193900: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x193900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_193904:
    // 0x193904: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x193904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_193908:
    // 0x193908: 0x24426420  addiu       $v0, $v0, 0x6420
    ctx->pc = 0x193908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25632));
label_19390c:
    // 0x19390c: 0x3a0c0  sll         $s4, $v1, 3
    ctx->pc = 0x19390cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_193910:
    // 0x193910: 0x39140  sll         $s2, $v1, 5
    ctx->pc = 0x193910u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_193914:
    // 0x193914: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x193914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_193918:
    // 0x193918: 0x109880  sll         $s3, $s0, 2
    ctx->pc = 0x193918u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_19391c:
    // 0x19391c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x19391cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_193920:
    // 0x193920: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x193920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_193924:
    // 0x193924: 0x244262e0  addiu       $v0, $v0, 0x62E0
    ctx->pc = 0x193924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25312));
label_193928:
    // 0x193928: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x193928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_19392c:
    // 0x19392c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x19392cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x193930u;
    return;
}
