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


void FUN_0017d410_part46(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x193930u: goto label_193930;
        case 0x193934u: goto label_193934;
        case 0x193938u: goto label_193938;
        case 0x19393cu: goto label_19393c;
        case 0x193940u: goto label_193940;
        case 0x193944u: goto label_193944;
        case 0x193948u: goto label_193948;
        case 0x19394cu: goto label_19394c;
        case 0x193950u: goto label_193950;
        case 0x193954u: goto label_193954;
        case 0x193958u: goto label_193958;
        case 0x19395cu: goto label_19395c;
        case 0x193960u: goto label_193960;
        case 0x193964u: goto label_193964;
        case 0x193968u: goto label_193968;
        case 0x19396cu: goto label_19396c;
        case 0x193970u: goto label_193970;
        case 0x193974u: goto label_193974;
        case 0x193978u: goto label_193978;
        case 0x19397cu: goto label_19397c;
        case 0x193980u: goto label_193980;
        case 0x193984u: goto label_193984;
        case 0x193988u: goto label_193988;
        case 0x19398cu: goto label_19398c;
        case 0x193990u: goto label_193990;
        case 0x193994u: goto label_193994;
        case 0x193998u: goto label_193998;
        case 0x19399cu: goto label_19399c;
        case 0x1939a0u: goto label_1939a0;
        case 0x1939a4u: goto label_1939a4;
        case 0x1939a8u: goto label_1939a8;
        case 0x1939acu: goto label_1939ac;
        case 0x1939b0u: goto label_1939b0;
        case 0x1939b4u: goto label_1939b4;
        case 0x1939b8u: goto label_1939b8;
        case 0x1939bcu: goto label_1939bc;
        case 0x1939c0u: goto label_1939c0;
        case 0x1939c4u: goto label_1939c4;
        case 0x1939c8u: goto label_1939c8;
        case 0x1939ccu: goto label_1939cc;
        case 0x1939d0u: goto label_1939d0;
        case 0x1939d4u: goto label_1939d4;
        case 0x1939d8u: goto label_1939d8;
        case 0x1939dcu: goto label_1939dc;
        case 0x1939e0u: goto label_1939e0;
        case 0x1939e4u: goto label_1939e4;
        case 0x1939e8u: goto label_1939e8;
        case 0x1939ecu: goto label_1939ec;
        case 0x1939f0u: goto label_1939f0;
        case 0x1939f4u: goto label_1939f4;
        case 0x1939f8u: goto label_1939f8;
        case 0x1939fcu: goto label_1939fc;
        case 0x193a00u: goto label_193a00;
        case 0x193a04u: goto label_193a04;
        case 0x193a08u: goto label_193a08;
        case 0x193a0cu: goto label_193a0c;
        case 0x193a10u: goto label_193a10;
        case 0x193a14u: goto label_193a14;
        case 0x193a18u: goto label_193a18;
        case 0x193a1cu: goto label_193a1c;
        case 0x193a20u: goto label_193a20;
        case 0x193a24u: goto label_193a24;
        case 0x193a28u: goto label_193a28;
        case 0x193a2cu: goto label_193a2c;
        case 0x193a30u: goto label_193a30;
        case 0x193a34u: goto label_193a34;
        case 0x193a38u: goto label_193a38;
        case 0x193a3cu: goto label_193a3c;
        case 0x193a40u: goto label_193a40;
        case 0x193a44u: goto label_193a44;
        case 0x193a48u: goto label_193a48;
        case 0x193a4cu: goto label_193a4c;
        case 0x193a50u: goto label_193a50;
        case 0x193a54u: goto label_193a54;
        case 0x193a58u: goto label_193a58;
        case 0x193a5cu: goto label_193a5c;
        case 0x193a60u: goto label_193a60;
        case 0x193a64u: goto label_193a64;
        case 0x193a68u: goto label_193a68;
        case 0x193a6cu: goto label_193a6c;
        case 0x193a70u: goto label_193a70;
        case 0x193a74u: goto label_193a74;
        case 0x193a78u: goto label_193a78;
        case 0x193a7cu: goto label_193a7c;
        case 0x193a80u: goto label_193a80;
        case 0x193a84u: goto label_193a84;
        case 0x193a88u: goto label_193a88;
        case 0x193a8cu: goto label_193a8c;
        case 0x193a90u: goto label_193a90;
        case 0x193a94u: goto label_193a94;
        case 0x193a98u: goto label_193a98;
        case 0x193a9cu: goto label_193a9c;
        case 0x193aa0u: goto label_193aa0;
        case 0x193aa4u: goto label_193aa4;
        case 0x193aa8u: goto label_193aa8;
        case 0x193aacu: goto label_193aac;
        case 0x193ab0u: goto label_193ab0;
        case 0x193ab4u: goto label_193ab4;
        case 0x193ab8u: goto label_193ab8;
        case 0x193abcu: goto label_193abc;
        case 0x193ac0u: goto label_193ac0;
        case 0x193ac4u: goto label_193ac4;
        case 0x193ac8u: goto label_193ac8;
        case 0x193accu: goto label_193acc;
        case 0x193ad0u: goto label_193ad0;
        case 0x193ad4u: goto label_193ad4;
        case 0x193ad8u: goto label_193ad8;
        case 0x193adcu: goto label_193adc;
        case 0x193ae0u: goto label_193ae0;
        case 0x193ae4u: goto label_193ae4;
        case 0x193ae8u: goto label_193ae8;
        case 0x193aecu: goto label_193aec;
        case 0x193af0u: goto label_193af0;
        case 0x193af4u: goto label_193af4;
        case 0x193af8u: goto label_193af8;
        case 0x193afcu: goto label_193afc;
        case 0x193b00u: goto label_193b00;
        case 0x193b04u: goto label_193b04;
        case 0x193b08u: goto label_193b08;
        case 0x193b0cu: goto label_193b0c;
        case 0x193b10u: goto label_193b10;
        case 0x193b14u: goto label_193b14;
        case 0x193b18u: goto label_193b18;
        case 0x193b1cu: goto label_193b1c;
        case 0x193b20u: goto label_193b20;
        case 0x193b24u: goto label_193b24;
        case 0x193b28u: goto label_193b28;
        case 0x193b2cu: goto label_193b2c;
        case 0x193b30u: goto label_193b30;
        case 0x193b34u: goto label_193b34;
        case 0x193b38u: goto label_193b38;
        case 0x193b3cu: goto label_193b3c;
        case 0x193b40u: goto label_193b40;
        case 0x193b44u: goto label_193b44;
        case 0x193b48u: goto label_193b48;
        case 0x193b4cu: goto label_193b4c;
        case 0x193b50u: goto label_193b50;
        case 0x193b54u: goto label_193b54;
        case 0x193b58u: goto label_193b58;
        case 0x193b5cu: goto label_193b5c;
        case 0x193b60u: goto label_193b60;
        case 0x193b64u: goto label_193b64;
        case 0x193b68u: goto label_193b68;
        case 0x193b6cu: goto label_193b6c;
        default: return;
    }

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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x193870u, 0x193878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
            goto label_193984;
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
label_193930:
    // 0x193930: 0x108900  sll         $s1, $s0, 4
    ctx->pc = 0x193930u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_193934:
    // 0x193934: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x193934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_193938:
    // 0x193938: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x193938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_19393c:
    // 0x19393c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x19393cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_193940:
    // 0x193940: 0xc066e26  jal         func_19B898
label_193944:
    if (ctx->pc == 0x193944u) {
        ctx->pc = 0x193944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193940u;
        // 0x193944: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193948u;
        goto label_193948;
    }
    ctx->pc = 0x193940u;
    SET_GPR_U32(ctx, 31, 0x193948u);
    ctx->pc = 0x193944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193940u;
    // 0x193944: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x193948u;
label_193948:
    // 0x193948: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x193948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_19394c:
    // 0x19394c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x19394cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_193950:
    // 0x193950: 0x244261a0  addiu       $v0, $v0, 0x61A0
    ctx->pc = 0x193950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24992));
label_193954:
    // 0x193954: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x193954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_193958:
    // 0x193958: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x193958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_19395c:
    // 0x19395c: 0xc066e26  jal         func_19B898
label_193960:
    if (ctx->pc == 0x193960u) {
        ctx->pc = 0x193960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19395Cu;
        // 0x193960: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193964u;
        goto label_193964;
    }
    ctx->pc = 0x19395Cu;
    SET_GPR_U32(ctx, 31, 0x193964u);
    ctx->pc = 0x193960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19395Cu;
    // 0x193960: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x193964u;
label_193964:
    // 0x193964: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x193964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_193968:
    // 0x193968: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x193968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19396c:
    // 0x19396c: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x19396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
label_193970:
    // 0x193970: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x193970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_193974:
    // 0x193974: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x193974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_193978:
    // 0x193978: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x193978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_19397c:
    // 0x19397c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19397cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_193980:
    // 0x193980: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x193980u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_193984:
    // 0x193984: 0x102000c6  beqz        $at, . + 4 + (0xC6 << 2)
label_193988:
    if (ctx->pc == 0x193988u) {
        ctx->pc = 0x193988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193984u;
        // 0x193988: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19398Cu;
        goto label_19398c;
    }
    ctx->pc = 0x193984u;
    {
        const bool branch_taken_0x193984 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x193988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193984u;
        // 0x193988: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193984) {
            ctx->pc = 0x193CA0u;
            { ctx->pc = 0x193ca0; return; }
        }
    }
    ctx->pc = 0x19398Cu;
label_19398c:
    // 0x19398c: 0x0  nop
    ctx->pc = 0x19398cu;
    // NOP
label_193990:
    // 0x193990: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x193990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_193994:
    // 0x193994: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x193994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_193998:
    // 0x193998: 0x11a880  sll         $s5, $s1, 2
    ctx->pc = 0x193998u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_19399c:
    // 0x19399c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x19399cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_1939a0:
    // 0x1939a0: 0x3a0c0  sll         $s4, $v1, 3
    ctx->pc = 0x1939a0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1939a4:
    // 0x1939a4: 0x24426420  addiu       $v0, $v0, 0x6420
    ctx->pc = 0x1939a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25632));
label_1939a8:
    // 0x1939a8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1939a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1939ac:
    // 0x1939ac: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1939acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_1939b0:
    // 0x1939b0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1939b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1939b4:
    // 0x1939b4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1939b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1939b8:
    // 0x1939b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1939b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1939bc:
    // 0x1939bc: 0x108000b4  beqz        $a0, . + 4 + (0xB4 << 2)
label_1939c0:
    if (ctx->pc == 0x1939C0u) {
        ctx->pc = 0x1939C4u;
        goto label_1939c4;
    }
    ctx->pc = 0x1939BCu;
    {
        const bool branch_taken_0x1939bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1939bc) {
            ctx->pc = 0x193C90u;
            { ctx->pc = 0x193c90; return; }
        }
    }
    ctx->pc = 0x1939C4u;
label_1939c4:
    // 0x1939c4: 0x94830056  lhu         $v1, 0x56($a0)
    ctx->pc = 0x1939c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 86)));
label_1939c8:
    // 0x1939c8: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1939c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_1939cc:
    // 0x1939cc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_1939d0:
    if (ctx->pc == 0x1939D0u) {
        ctx->pc = 0x1939D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939CCu;
        // 0x1939d0: 0x2a210009  slti        $at, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1939D4u;
        goto label_1939d4;
    }
    ctx->pc = 0x1939CCu;
    {
        const bool branch_taken_0x1939cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1939D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939CCu;
        // 0x1939d0: 0x2a210009  slti        $at, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939cc) {
            ctx->pc = 0x193A74u;
            goto label_193a74;
        }
    }
    ctx->pc = 0x1939D4u;
label_1939d4:
    // 0x1939d4: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_1939d8:
    if (ctx->pc == 0x1939D8u) {
        ctx->pc = 0x1939D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939D4u;
        // 0x1939d8: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1939DCu;
        goto label_1939dc;
    }
    ctx->pc = 0x1939D4u;
    {
        const bool branch_taken_0x1939d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1939D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939D4u;
        // 0x1939d8: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939d4) {
            ctx->pc = 0x193A64u;
            goto label_193a64;
        }
    }
    ctx->pc = 0x1939DCu;
label_1939dc:
    // 0x1939dc: 0x119900  sll         $s3, $s1, 4
    ctx->pc = 0x1939dcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1939e0:
    // 0x1939e0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1939e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1939e4:
    // 0x1939e4: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x1939e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_1939e8:
    // 0x1939e8: 0x246362e0  addiu       $v1, $v1, 0x62E0
    ctx->pc = 0x1939e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25312));
label_1939ec:
    // 0x1939ec: 0x553821  addu        $a3, $v0, $s5
    ctx->pc = 0x1939ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1939f0:
    // 0x1939f0: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x1939f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1939f4:
    // 0x1939f4: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x1939f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_1939f8:
    // 0x1939f8: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1939f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1939fc:
    // 0x1939fc: 0x2b140  sll         $s6, $v0, 5
    ctx->pc = 0x1939fcu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_193a00:
    // 0x193a00: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x193a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_193a04:
    // 0x193a04: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x193a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_193a08:
    // 0x193a08: 0x2b900  sll         $s7, $v0, 4
    ctx->pc = 0x193a08u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_193a0c:
    // 0x193a0c: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x193a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_193a10:
    // 0x193a10: 0x772821  addu        $a1, $v1, $s7
    ctx->pc = 0x193a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_193a14:
    // 0x193a14: 0xc066e26  jal         func_19B898
label_193a18:
    if (ctx->pc == 0x193A18u) {
        ctx->pc = 0x193A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A14u;
        // 0x193a18: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A1Cu;
        goto label_193a1c;
    }
    ctx->pc = 0x193A14u;
    SET_GPR_U32(ctx, 31, 0x193A1Cu);
    ctx->pc = 0x193A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193A14u;
    // 0x193a18: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x193A1Cu;
label_193a1c:
    // 0x193a1c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x193a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_193a20:
    // 0x193a20: 0x244261a0  addiu       $v0, $v0, 0x61A0
    ctx->pc = 0x193a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24992));
label_193a24:
    // 0x193a24: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x193a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_193a28:
    // 0x193a28: 0x572821  addu        $a1, $v0, $s7
    ctx->pc = 0x193a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_193a2c:
    // 0x193a2c: 0xc066e26  jal         func_19B898
label_193a30:
    if (ctx->pc == 0x193A30u) {
        ctx->pc = 0x193A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A2Cu;
        // 0x193a30: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A34u;
        goto label_193a34;
    }
    ctx->pc = 0x193A2Cu;
    SET_GPR_U32(ctx, 31, 0x193A34u);
    ctx->pc = 0x193A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193A2Cu;
    // 0x193a30: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x193A34u;
label_193a34:
    // 0x193a34: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x193a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_193a38:
    // 0x193a38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x193a38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_193a3c:
    // 0x193a3c: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x193a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
label_193a40:
    // 0x193a40: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x193a40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_193a44:
    // 0x193a44: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x193a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_193a48:
    // 0x193a48: 0x24430000  addiu       $v1, $v0, 0x0
    ctx->pc = 0x193a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_193a4c:
    // 0x193a4c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x193a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_193a50:
    // 0x193a50: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x193a50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
label_193a54:
    // 0x193a54: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x193a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193a58:
    // 0x193a58: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x193a58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_193a5c:
    // 0x193a5c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_193a60:
    if (ctx->pc == 0x193A60u) {
        ctx->pc = 0x193A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A5Cu;
        // 0x193a60: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A64u;
        goto label_193a64;
    }
    ctx->pc = 0x193A5Cu;
    {
        const bool branch_taken_0x193a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A5Cu;
        // 0x193a60: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a5c) {
            ctx->pc = 0x1939E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1939e0;
        }
    }
    ctx->pc = 0x193A64u;
label_193a64:
    // 0x193a64: 0x0  nop
    ctx->pc = 0x193a64u;
    // NOP
label_193a68:
    // 0x193a68: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x193a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_193a6c:
    // 0x193a6c: 0x10000088  b           . + 4 + (0x88 << 2)
label_193a70:
    if (ctx->pc == 0x193A70u) {
        ctx->pc = 0x193A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A6Cu;
        // 0x193a70: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A74u;
        goto label_193a74;
    }
    ctx->pc = 0x193A6Cu;
    {
        const bool branch_taken_0x193a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A6Cu;
        // 0x193a70: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a6c) {
            ctx->pc = 0x193C90u;
            { ctx->pc = 0x193c90; return; }
        }
    }
    ctx->pc = 0x193A74u;
label_193a74:
    // 0x193a74: 0x0  nop
    ctx->pc = 0x193a74u;
    // NOP
label_193a78:
    // 0x193a78: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x193a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_193a7c:
    // 0x193a7c: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_193a80:
    if (ctx->pc == 0x193A80u) {
        ctx->pc = 0x193A84u;
        goto label_193a84;
    }
    ctx->pc = 0x193A7Cu;
    {
        const bool branch_taken_0x193a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193a7c) {
            ctx->pc = 0x193B74u;
            { ctx->pc = 0x193b74; return; }
        }
    }
    ctx->pc = 0x193A84u;
label_193a84:
    // 0x193a84: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x193a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_193a88:
    // 0x193a88: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_193a8c:
    if (ctx->pc == 0x193A8Cu) {
        ctx->pc = 0x193A90u;
        goto label_193a90;
    }
    ctx->pc = 0x193A88u;
    {
        const bool branch_taken_0x193a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193a88) {
            ctx->pc = 0x193ACCu;
            goto label_193acc;
        }
    }
    ctx->pc = 0x193A90u;
label_193a90:
    // 0x193a90: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x193a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_193a94:
    // 0x193a94: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x193a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_193a98:
    // 0x193a98: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x193a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_193a9c:
    // 0x193a9c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_193aa0:
    if (ctx->pc == 0x193AA0u) {
        ctx->pc = 0x193AA4u;
        goto label_193aa4;
    }
    ctx->pc = 0x193A9Cu;
    {
        const bool branch_taken_0x193a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193a9c) {
            ctx->pc = 0x193ACCu;
            goto label_193acc;
        }
    }
    ctx->pc = 0x193AA4u;
label_193aa4:
    // 0x193aa4: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x193aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_193aa8:
    // 0x193aa8: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x193aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
label_193aac:
    // 0x193aac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_193ab0:
    if (ctx->pc == 0x193AB0u) {
        ctx->pc = 0x193AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AACu;
        // 0x193ab0: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193AB4u;
        goto label_193ab4;
    }
    ctx->pc = 0x193AACu;
    {
        const bool branch_taken_0x193aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AACu;
        // 0x193ab0: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193aac) {
            ctx->pc = 0x193AC0u;
            goto label_193ac0;
        }
    }
    ctx->pc = 0x193AB4u;
label_193ab4:
    // 0x193ab4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x193ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_193ab8:
    // 0x193ab8: 0x10000004  b           . + 4 + (0x4 << 2)
label_193abc:
    if (ctx->pc == 0x193ABCu) {
        ctx->pc = 0x193ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AB8u;
        // 0x193abc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193AC0u;
        goto label_193ac0;
    }
    ctx->pc = 0x193AB8u;
    {
        const bool branch_taken_0x193ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AB8u;
        // 0x193abc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ab8) {
            ctx->pc = 0x193ACCu;
            goto label_193acc;
        }
    }
    ctx->pc = 0x193AC0u;
label_193ac0:
    // 0x193ac0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x193ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_193ac4:
    // 0x193ac4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x193ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_193ac8:
    // 0x193ac8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x193ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_193acc:
    // 0x193acc: 0x0  nop
    ctx->pc = 0x193accu;
    // NOP
label_193ad0:
    // 0x193ad0: 0x2a210009  slti        $at, $s1, 0x9
    ctx->pc = 0x193ad0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_193ad4:
    // 0x193ad4: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_193ad8:
    if (ctx->pc == 0x193AD8u) {
        ctx->pc = 0x193AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AD4u;
        // 0x193ad8: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193ADCu;
        goto label_193adc;
    }
    ctx->pc = 0x193AD4u;
    {
        const bool branch_taken_0x193ad4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x193AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AD4u;
        // 0x193ad8: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ad4) {
            ctx->pc = 0x193B64u;
            goto label_193b64;
        }
    }
    ctx->pc = 0x193ADCu;
label_193adc:
    // 0x193adc: 0x119900  sll         $s3, $s1, 4
    ctx->pc = 0x193adcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_193ae0:
    // 0x193ae0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x193ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_193ae4:
    // 0x193ae4: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x193ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_193ae8:
    // 0x193ae8: 0x246362e0  addiu       $v1, $v1, 0x62E0
    ctx->pc = 0x193ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25312));
label_193aec:
    // 0x193aec: 0x553821  addu        $a3, $v0, $s5
    ctx->pc = 0x193aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_193af0:
    // 0x193af0: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x193af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_193af4:
    // 0x193af4: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x193af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_193af8:
    // 0x193af8: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x193af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_193afc:
    // 0x193afc: 0x2b140  sll         $s6, $v0, 5
    ctx->pc = 0x193afcu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_193b00:
    // 0x193b00: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x193b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_193b04:
    // 0x193b04: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x193b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_193b08:
    // 0x193b08: 0x2b900  sll         $s7, $v0, 4
    ctx->pc = 0x193b08u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_193b0c:
    // 0x193b0c: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x193b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_193b10:
    // 0x193b10: 0x772821  addu        $a1, $v1, $s7
    ctx->pc = 0x193b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_193b14:
    // 0x193b14: 0xc066e26  jal         func_19B898
label_193b18:
    if (ctx->pc == 0x193B18u) {
        ctx->pc = 0x193B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B14u;
        // 0x193b18: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B1Cu;
        goto label_193b1c;
    }
    ctx->pc = 0x193B14u;
    SET_GPR_U32(ctx, 31, 0x193B1Cu);
    ctx->pc = 0x193B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B14u;
    // 0x193b18: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x193B1Cu;
label_193b1c:
    // 0x193b1c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x193b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_193b20:
    // 0x193b20: 0x244261a0  addiu       $v0, $v0, 0x61A0
    ctx->pc = 0x193b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24992));
label_193b24:
    // 0x193b24: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x193b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_193b28:
    // 0x193b28: 0x572821  addu        $a1, $v0, $s7
    ctx->pc = 0x193b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_193b2c:
    // 0x193b2c: 0xc066e26  jal         func_19B898
label_193b30:
    if (ctx->pc == 0x193B30u) {
        ctx->pc = 0x193B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B2Cu;
        // 0x193b30: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B34u;
        goto label_193b34;
    }
    ctx->pc = 0x193B2Cu;
    SET_GPR_U32(ctx, 31, 0x193B34u);
    ctx->pc = 0x193B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B2Cu;
    // 0x193b30: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x193B34u;
label_193b34:
    // 0x193b34: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x193b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_193b38:
    // 0x193b38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x193b38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_193b3c:
    // 0x193b3c: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x193b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
label_193b40:
    // 0x193b40: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x193b40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_193b44:
    // 0x193b44: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x193b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_193b48:
    // 0x193b48: 0x24430000  addiu       $v1, $v0, 0x0
    ctx->pc = 0x193b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_193b4c:
    // 0x193b4c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x193b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_193b50:
    // 0x193b50: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x193b50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
label_193b54:
    // 0x193b54: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x193b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193b58:
    // 0x193b58: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x193b58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_193b5c:
    // 0x193b5c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_193b60:
    if (ctx->pc == 0x193B60u) {
        ctx->pc = 0x193B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B5Cu;
        // 0x193b60: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B64u;
        goto label_193b64;
    }
    ctx->pc = 0x193B5Cu;
    {
        const bool branch_taken_0x193b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B5Cu;
        // 0x193b60: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b5c) {
            ctx->pc = 0x193AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193ae0;
        }
    }
    ctx->pc = 0x193B64u;
label_193b64:
    // 0x193b64: 0x0  nop
    ctx->pc = 0x193b64u;
    // NOP
label_193b68:
    // 0x193b68: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x193b68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_193b6c:
    // 0x193b6c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x193b70u;
    return;
}
