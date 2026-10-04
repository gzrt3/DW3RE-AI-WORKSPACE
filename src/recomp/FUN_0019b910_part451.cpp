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


void FUN_0019b910_part451(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2774b0u: goto label_2774b0;
        case 0x2774b4u: goto label_2774b4;
        case 0x2774b8u: goto label_2774b8;
        case 0x2774bcu: goto label_2774bc;
        case 0x2774c0u: goto label_2774c0;
        case 0x2774c4u: goto label_2774c4;
        case 0x2774c8u: goto label_2774c8;
        case 0x2774ccu: goto label_2774cc;
        case 0x2774d0u: goto label_2774d0;
        case 0x2774d4u: goto label_2774d4;
        case 0x2774d8u: goto label_2774d8;
        case 0x2774dcu: goto label_2774dc;
        case 0x2774e0u: goto label_2774e0;
        case 0x2774e4u: goto label_2774e4;
        case 0x2774e8u: goto label_2774e8;
        case 0x2774ecu: goto label_2774ec;
        case 0x2774f0u: goto label_2774f0;
        case 0x2774f4u: goto label_2774f4;
        case 0x2774f8u: goto label_2774f8;
        case 0x2774fcu: goto label_2774fc;
        case 0x277500u: goto label_277500;
        case 0x277504u: goto label_277504;
        case 0x277508u: goto label_277508;
        case 0x27750cu: goto label_27750c;
        case 0x277510u: goto label_277510;
        case 0x277514u: goto label_277514;
        case 0x277518u: goto label_277518;
        case 0x27751cu: goto label_27751c;
        case 0x277520u: goto label_277520;
        case 0x277524u: goto label_277524;
        case 0x277528u: goto label_277528;
        case 0x27752cu: goto label_27752c;
        case 0x277530u: goto label_277530;
        case 0x277534u: goto label_277534;
        case 0x277538u: goto label_277538;
        case 0x27753cu: goto label_27753c;
        case 0x277540u: goto label_277540;
        case 0x277544u: goto label_277544;
        case 0x277548u: goto label_277548;
        case 0x27754cu: goto label_27754c;
        case 0x277550u: goto label_277550;
        case 0x277554u: goto label_277554;
        case 0x277558u: goto label_277558;
        case 0x27755cu: goto label_27755c;
        case 0x277560u: goto label_277560;
        case 0x277564u: goto label_277564;
        case 0x277568u: goto label_277568;
        case 0x27756cu: goto label_27756c;
        case 0x277570u: goto label_277570;
        case 0x277574u: goto label_277574;
        case 0x277578u: goto label_277578;
        case 0x27757cu: goto label_27757c;
        case 0x277580u: goto label_277580;
        case 0x277584u: goto label_277584;
        case 0x277588u: goto label_277588;
        case 0x27758cu: goto label_27758c;
        case 0x277590u: goto label_277590;
        case 0x277594u: goto label_277594;
        case 0x277598u: goto label_277598;
        case 0x27759cu: goto label_27759c;
        case 0x2775a0u: goto label_2775a0;
        case 0x2775a4u: goto label_2775a4;
        case 0x2775a8u: goto label_2775a8;
        case 0x2775acu: goto label_2775ac;
        case 0x2775b0u: goto label_2775b0;
        case 0x2775b4u: goto label_2775b4;
        case 0x2775b8u: goto label_2775b8;
        case 0x2775bcu: goto label_2775bc;
        case 0x2775c0u: goto label_2775c0;
        case 0x2775c4u: goto label_2775c4;
        case 0x2775c8u: goto label_2775c8;
        case 0x2775ccu: goto label_2775cc;
        case 0x2775d0u: goto label_2775d0;
        case 0x2775d4u: goto label_2775d4;
        case 0x2775d8u: goto label_2775d8;
        case 0x2775dcu: goto label_2775dc;
        case 0x2775e0u: goto label_2775e0;
        case 0x2775e4u: goto label_2775e4;
        case 0x2775e8u: goto label_2775e8;
        case 0x2775ecu: goto label_2775ec;
        case 0x2775f0u: goto label_2775f0;
        case 0x2775f4u: goto label_2775f4;
        case 0x2775f8u: goto label_2775f8;
        case 0x2775fcu: goto label_2775fc;
        case 0x277600u: goto label_277600;
        case 0x277604u: goto label_277604;
        case 0x277608u: goto label_277608;
        case 0x27760cu: goto label_27760c;
        case 0x277610u: goto label_277610;
        case 0x277614u: goto label_277614;
        case 0x277618u: goto label_277618;
        case 0x27761cu: goto label_27761c;
        case 0x277620u: goto label_277620;
        case 0x277624u: goto label_277624;
        case 0x277628u: goto label_277628;
        case 0x27762cu: goto label_27762c;
        case 0x277630u: goto label_277630;
        case 0x277634u: goto label_277634;
        case 0x277638u: goto label_277638;
        case 0x27763cu: goto label_27763c;
        case 0x277640u: goto label_277640;
        case 0x277644u: goto label_277644;
        case 0x277648u: goto label_277648;
        case 0x27764cu: goto label_27764c;
        case 0x277650u: goto label_277650;
        case 0x277654u: goto label_277654;
        case 0x277658u: goto label_277658;
        case 0x27765cu: goto label_27765c;
        case 0x277660u: goto label_277660;
        case 0x277664u: goto label_277664;
        case 0x277668u: goto label_277668;
        case 0x27766cu: goto label_27766c;
        case 0x277670u: goto label_277670;
        case 0x277674u: goto label_277674;
        case 0x277678u: goto label_277678;
        case 0x27767cu: goto label_27767c;
        case 0x277680u: goto label_277680;
        case 0x277684u: goto label_277684;
        case 0x277688u: goto label_277688;
        case 0x27768cu: goto label_27768c;
        case 0x277690u: goto label_277690;
        case 0x277694u: goto label_277694;
        case 0x277698u: goto label_277698;
        case 0x27769cu: goto label_27769c;
        case 0x2776a0u: goto label_2776a0;
        case 0x2776a4u: goto label_2776a4;
        case 0x2776a8u: goto label_2776a8;
        case 0x2776acu: goto label_2776ac;
        case 0x2776b0u: goto label_2776b0;
        case 0x2776b4u: goto label_2776b4;
        case 0x2776b8u: goto label_2776b8;
        case 0x2776bcu: goto label_2776bc;
        case 0x2776c0u: goto label_2776c0;
        case 0x2776c4u: goto label_2776c4;
        case 0x2776c8u: goto label_2776c8;
        case 0x2776ccu: goto label_2776cc;
        case 0x2776d0u: goto label_2776d0;
        case 0x2776d4u: goto label_2776d4;
        case 0x2776d8u: goto label_2776d8;
        case 0x2776dcu: goto label_2776dc;
        case 0x2776e0u: goto label_2776e0;
        case 0x2776e4u: goto label_2776e4;
        case 0x2776e8u: goto label_2776e8;
        case 0x2776ecu: goto label_2776ec;
        case 0x2776f0u: goto label_2776f0;
        case 0x2776f4u: goto label_2776f4;
        case 0x2776f8u: goto label_2776f8;
        case 0x2776fcu: goto label_2776fc;
        case 0x277700u: goto label_277700;
        case 0x277704u: goto label_277704;
        case 0x277708u: goto label_277708;
        case 0x27770cu: goto label_27770c;
        case 0x277710u: goto label_277710;
        case 0x277714u: goto label_277714;
        case 0x277718u: goto label_277718;
        case 0x27771cu: goto label_27771c;
        case 0x277720u: goto label_277720;
        case 0x277724u: goto label_277724;
        case 0x277728u: goto label_277728;
        case 0x27772cu: goto label_27772c;
        case 0x277730u: goto label_277730;
        case 0x277734u: goto label_277734;
        case 0x277738u: goto label_277738;
        case 0x27773cu: goto label_27773c;
        case 0x277740u: goto label_277740;
        case 0x277744u: goto label_277744;
        case 0x277748u: goto label_277748;
        case 0x27774cu: goto label_27774c;
        case 0x277750u: goto label_277750;
        case 0x277754u: goto label_277754;
        case 0x277758u: goto label_277758;
        case 0x27775cu: goto label_27775c;
        case 0x277760u: goto label_277760;
        case 0x277764u: goto label_277764;
        case 0x277768u: goto label_277768;
        case 0x27776cu: goto label_27776c;
        case 0x277770u: goto label_277770;
        case 0x277774u: goto label_277774;
        case 0x277778u: goto label_277778;
        case 0x27777cu: goto label_27777c;
        case 0x277780u: goto label_277780;
        case 0x277784u: goto label_277784;
        case 0x277788u: goto label_277788;
        case 0x27778cu: goto label_27778c;
        case 0x277790u: goto label_277790;
        case 0x277794u: goto label_277794;
        case 0x277798u: goto label_277798;
        case 0x27779cu: goto label_27779c;
        case 0x2777a0u: goto label_2777a0;
        case 0x2777a4u: goto label_2777a4;
        case 0x2777a8u: goto label_2777a8;
        case 0x2777acu: goto label_2777ac;
        case 0x2777b0u: goto label_2777b0;
        case 0x2777b4u: goto label_2777b4;
        case 0x2777b8u: goto label_2777b8;
        case 0x2777bcu: goto label_2777bc;
        case 0x2777c0u: goto label_2777c0;
        case 0x2777c4u: goto label_2777c4;
        case 0x2777c8u: goto label_2777c8;
        case 0x2777ccu: goto label_2777cc;
        case 0x2777d0u: goto label_2777d0;
        case 0x2777d4u: goto label_2777d4;
        case 0x2777d8u: goto label_2777d8;
        case 0x2777dcu: goto label_2777dc;
        case 0x2777e0u: goto label_2777e0;
        case 0x2777e4u: goto label_2777e4;
        case 0x2777e8u: goto label_2777e8;
        case 0x2777ecu: goto label_2777ec;
        case 0x2777f0u: goto label_2777f0;
        case 0x2777f4u: goto label_2777f4;
        case 0x2777f8u: goto label_2777f8;
        case 0x2777fcu: goto label_2777fc;
        case 0x277800u: goto label_277800;
        case 0x277804u: goto label_277804;
        case 0x277808u: goto label_277808;
        case 0x27780cu: goto label_27780c;
        case 0x277810u: goto label_277810;
        case 0x277814u: goto label_277814;
        case 0x277818u: goto label_277818;
        case 0x27781cu: goto label_27781c;
        case 0x277820u: goto label_277820;
        case 0x277824u: goto label_277824;
        case 0x277828u: goto label_277828;
        case 0x27782cu: goto label_27782c;
        case 0x277830u: goto label_277830;
        case 0x277834u: goto label_277834;
        case 0x277838u: goto label_277838;
        case 0x27783cu: goto label_27783c;
        case 0x277840u: goto label_277840;
        case 0x277844u: goto label_277844;
        case 0x277848u: goto label_277848;
        case 0x27784cu: goto label_27784c;
        case 0x277850u: goto label_277850;
        case 0x277854u: goto label_277854;
        case 0x277858u: goto label_277858;
        case 0x27785cu: goto label_27785c;
        case 0x277860u: goto label_277860;
        case 0x277864u: goto label_277864;
        case 0x277868u: goto label_277868;
        case 0x27786cu: goto label_27786c;
        case 0x277870u: goto label_277870;
        case 0x277874u: goto label_277874;
        case 0x277878u: goto label_277878;
        case 0x27787cu: goto label_27787c;
        case 0x277880u: goto label_277880;
        case 0x277884u: goto label_277884;
        case 0x277888u: goto label_277888;
        case 0x27788cu: goto label_27788c;
        case 0x277890u: goto label_277890;
        case 0x277894u: goto label_277894;
        case 0x277898u: goto label_277898;
        case 0x27789cu: goto label_27789c;
        case 0x2778a0u: goto label_2778a0;
        case 0x2778a4u: goto label_2778a4;
        case 0x2778a8u: goto label_2778a8;
        case 0x2778acu: goto label_2778ac;
        case 0x2778b0u: goto label_2778b0;
        case 0x2778b4u: goto label_2778b4;
        case 0x2778b8u: goto label_2778b8;
        case 0x2778bcu: goto label_2778bc;
        case 0x2778c0u: goto label_2778c0;
        case 0x2778c4u: goto label_2778c4;
        case 0x2778c8u: goto label_2778c8;
        case 0x2778ccu: goto label_2778cc;
        case 0x2778d0u: goto label_2778d0;
        case 0x2778d4u: goto label_2778d4;
        case 0x2778d8u: goto label_2778d8;
        case 0x2778dcu: goto label_2778dc;
        case 0x2778e0u: goto label_2778e0;
        case 0x2778e4u: goto label_2778e4;
        case 0x2778e8u: goto label_2778e8;
        case 0x2778ecu: goto label_2778ec;
        case 0x2778f0u: goto label_2778f0;
        case 0x2778f4u: goto label_2778f4;
        case 0x2778f8u: goto label_2778f8;
        case 0x2778fcu: goto label_2778fc;
        case 0x277900u: goto label_277900;
        case 0x277904u: goto label_277904;
        case 0x277908u: goto label_277908;
        case 0x27790cu: goto label_27790c;
        case 0x277910u: goto label_277910;
        case 0x277914u: goto label_277914;
        case 0x277918u: goto label_277918;
        case 0x27791cu: goto label_27791c;
        case 0x277920u: goto label_277920;
        case 0x277924u: goto label_277924;
        case 0x277928u: goto label_277928;
        case 0x27792cu: goto label_27792c;
        case 0x277930u: goto label_277930;
        case 0x277934u: goto label_277934;
        case 0x277938u: goto label_277938;
        case 0x27793cu: goto label_27793c;
        case 0x277940u: goto label_277940;
        case 0x277944u: goto label_277944;
        case 0x277948u: goto label_277948;
        case 0x27794cu: goto label_27794c;
        case 0x277950u: goto label_277950;
        case 0x277954u: goto label_277954;
        case 0x277958u: goto label_277958;
        case 0x27795cu: goto label_27795c;
        case 0x277960u: goto label_277960;
        case 0x277964u: goto label_277964;
        case 0x277968u: goto label_277968;
        case 0x27796cu: goto label_27796c;
        case 0x277970u: goto label_277970;
        case 0x277974u: goto label_277974;
        case 0x277978u: goto label_277978;
        case 0x27797cu: goto label_27797c;
        case 0x277980u: goto label_277980;
        case 0x277984u: goto label_277984;
        case 0x277988u: goto label_277988;
        case 0x27798cu: goto label_27798c;
        case 0x277990u: goto label_277990;
        case 0x277994u: goto label_277994;
        case 0x277998u: goto label_277998;
        case 0x27799cu: goto label_27799c;
        case 0x2779a0u: goto label_2779a0;
        case 0x2779a4u: goto label_2779a4;
        case 0x2779a8u: goto label_2779a8;
        case 0x2779acu: goto label_2779ac;
        case 0x2779b0u: goto label_2779b0;
        case 0x2779b4u: goto label_2779b4;
        case 0x2779b8u: goto label_2779b8;
        case 0x2779bcu: goto label_2779bc;
        case 0x2779c0u: goto label_2779c0;
        case 0x2779c4u: goto label_2779c4;
        case 0x2779c8u: goto label_2779c8;
        case 0x2779ccu: goto label_2779cc;
        case 0x2779d0u: goto label_2779d0;
        case 0x2779d4u: goto label_2779d4;
        case 0x2779d8u: goto label_2779d8;
        case 0x2779dcu: goto label_2779dc;
        case 0x2779e0u: goto label_2779e0;
        case 0x2779e4u: goto label_2779e4;
        case 0x2779e8u: goto label_2779e8;
        case 0x2779ecu: goto label_2779ec;
        case 0x2779f0u: goto label_2779f0;
        case 0x2779f4u: goto label_2779f4;
        case 0x2779f8u: goto label_2779f8;
        case 0x2779fcu: goto label_2779fc;
        case 0x277a00u: goto label_277a00;
        case 0x277a04u: goto label_277a04;
        case 0x277a08u: goto label_277a08;
        case 0x277a0cu: goto label_277a0c;
        case 0x277a10u: goto label_277a10;
        case 0x277a14u: goto label_277a14;
        case 0x277a18u: goto label_277a18;
        case 0x277a1cu: goto label_277a1c;
        case 0x277a20u: goto label_277a20;
        case 0x277a24u: goto label_277a24;
        case 0x277a28u: goto label_277a28;
        case 0x277a2cu: goto label_277a2c;
        case 0x277a30u: goto label_277a30;
        case 0x277a34u: goto label_277a34;
        case 0x277a38u: goto label_277a38;
        case 0x277a3cu: goto label_277a3c;
        case 0x277a40u: goto label_277a40;
        case 0x277a44u: goto label_277a44;
        case 0x277a48u: goto label_277a48;
        case 0x277a4cu: goto label_277a4c;
        case 0x277a50u: goto label_277a50;
        case 0x277a54u: goto label_277a54;
        case 0x277a58u: goto label_277a58;
        case 0x277a5cu: goto label_277a5c;
        case 0x277a60u: goto label_277a60;
        case 0x277a64u: goto label_277a64;
        case 0x277a68u: goto label_277a68;
        case 0x277a6cu: goto label_277a6c;
        case 0x277a70u: goto label_277a70;
        case 0x277a74u: goto label_277a74;
        case 0x277a78u: goto label_277a78;
        case 0x277a7cu: goto label_277a7c;
        case 0x277a80u: goto label_277a80;
        case 0x277a84u: goto label_277a84;
        case 0x277a88u: goto label_277a88;
        case 0x277a8cu: goto label_277a8c;
        case 0x277a90u: goto label_277a90;
        case 0x277a94u: goto label_277a94;
        case 0x277a98u: goto label_277a98;
        case 0x277a9cu: goto label_277a9c;
        case 0x277aa0u: goto label_277aa0;
        case 0x277aa4u: goto label_277aa4;
        case 0x277aa8u: goto label_277aa8;
        case 0x277aacu: goto label_277aac;
        case 0x277ab0u: goto label_277ab0;
        case 0x277ab4u: goto label_277ab4;
        case 0x277ab8u: goto label_277ab8;
        case 0x277abcu: goto label_277abc;
        case 0x277ac0u: goto label_277ac0;
        case 0x277ac4u: goto label_277ac4;
        case 0x277ac8u: goto label_277ac8;
        case 0x277accu: goto label_277acc;
        case 0x277ad0u: goto label_277ad0;
        case 0x277ad4u: goto label_277ad4;
        case 0x277ad8u: goto label_277ad8;
        case 0x277adcu: goto label_277adc;
        case 0x277ae0u: goto label_277ae0;
        case 0x277ae4u: goto label_277ae4;
        case 0x277ae8u: goto label_277ae8;
        case 0x277aecu: goto label_277aec;
        case 0x277af0u: goto label_277af0;
        case 0x277af4u: goto label_277af4;
        case 0x277af8u: goto label_277af8;
        case 0x277afcu: goto label_277afc;
        case 0x277b00u: goto label_277b00;
        case 0x277b04u: goto label_277b04;
        case 0x277b08u: goto label_277b08;
        case 0x277b0cu: goto label_277b0c;
        case 0x277b10u: goto label_277b10;
        case 0x277b14u: goto label_277b14;
        case 0x277b18u: goto label_277b18;
        case 0x277b1cu: goto label_277b1c;
        case 0x277b20u: goto label_277b20;
        case 0x277b24u: goto label_277b24;
        case 0x277b28u: goto label_277b28;
        case 0x277b2cu: goto label_277b2c;
        case 0x277b30u: goto label_277b30;
        case 0x277b34u: goto label_277b34;
        case 0x277b38u: goto label_277b38;
        case 0x277b3cu: goto label_277b3c;
        case 0x277b40u: goto label_277b40;
        case 0x277b44u: goto label_277b44;
        case 0x277b48u: goto label_277b48;
        case 0x277b4cu: goto label_277b4c;
        case 0x277b50u: goto label_277b50;
        case 0x277b54u: goto label_277b54;
        case 0x277b58u: goto label_277b58;
        case 0x277b5cu: goto label_277b5c;
        case 0x277b60u: goto label_277b60;
        case 0x277b64u: goto label_277b64;
        case 0x277b68u: goto label_277b68;
        case 0x277b6cu: goto label_277b6c;
        case 0x277b70u: goto label_277b70;
        case 0x277b74u: goto label_277b74;
        case 0x277b78u: goto label_277b78;
        case 0x277b7cu: goto label_277b7c;
        case 0x277b80u: goto label_277b80;
        case 0x277b84u: goto label_277b84;
        case 0x277b88u: goto label_277b88;
        case 0x277b8cu: goto label_277b8c;
        case 0x277b90u: goto label_277b90;
        case 0x277b94u: goto label_277b94;
        case 0x277b98u: goto label_277b98;
        case 0x277b9cu: goto label_277b9c;
        case 0x277ba0u: goto label_277ba0;
        case 0x277ba4u: goto label_277ba4;
        case 0x277ba8u: goto label_277ba8;
        case 0x277bacu: goto label_277bac;
        case 0x277bb0u: goto label_277bb0;
        case 0x277bb4u: goto label_277bb4;
        case 0x277bb8u: goto label_277bb8;
        case 0x277bbcu: goto label_277bbc;
        case 0x277bc0u: goto label_277bc0;
        case 0x277bc4u: goto label_277bc4;
        case 0x277bc8u: goto label_277bc8;
        case 0x277bccu: goto label_277bcc;
        case 0x277bd0u: goto label_277bd0;
        case 0x277bd4u: goto label_277bd4;
        case 0x277bd8u: goto label_277bd8;
        case 0x277bdcu: goto label_277bdc;
        case 0x277be0u: goto label_277be0;
        case 0x277be4u: goto label_277be4;
        case 0x277be8u: goto label_277be8;
        case 0x277becu: goto label_277bec;
        case 0x277bf0u: goto label_277bf0;
        case 0x277bf4u: goto label_277bf4;
        case 0x277bf8u: goto label_277bf8;
        case 0x277bfcu: goto label_277bfc;
        case 0x277c00u: goto label_277c00;
        case 0x277c04u: goto label_277c04;
        case 0x277c08u: goto label_277c08;
        case 0x277c0cu: goto label_277c0c;
        case 0x277c10u: goto label_277c10;
        case 0x277c14u: goto label_277c14;
        case 0x277c18u: goto label_277c18;
        case 0x277c1cu: goto label_277c1c;
        case 0x277c20u: goto label_277c20;
        case 0x277c24u: goto label_277c24;
        case 0x277c28u: goto label_277c28;
        case 0x277c2cu: goto label_277c2c;
        case 0x277c30u: goto label_277c30;
        case 0x277c34u: goto label_277c34;
        case 0x277c38u: goto label_277c38;
        case 0x277c3cu: goto label_277c3c;
        case 0x277c40u: goto label_277c40;
        case 0x277c44u: goto label_277c44;
        case 0x277c48u: goto label_277c48;
        case 0x277c4cu: goto label_277c4c;
        case 0x277c50u: goto label_277c50;
        case 0x277c54u: goto label_277c54;
        case 0x277c58u: goto label_277c58;
        case 0x277c5cu: goto label_277c5c;
        case 0x277c60u: goto label_277c60;
        case 0x277c64u: goto label_277c64;
        case 0x277c68u: goto label_277c68;
        case 0x277c6cu: goto label_277c6c;
        case 0x277c70u: goto label_277c70;
        case 0x277c74u: goto label_277c74;
        case 0x277c78u: goto label_277c78;
        case 0x277c7cu: goto label_277c7c;
        default: return;
    }

label_2774b0:
    // 0x2774b0: 0xe9cd  break       0, 935
    ctx->pc = 0x2774b0u;
    runtime->handleBreak(rdram, ctx);
label_2774b4:
    // 0x2774b4: 0x4270  tge         $zero, $zero, 265
    ctx->pc = 0x2774b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2774b8:
    // 0x2774b8: 0x0  nop
    ctx->pc = 0x2774b8u;
    // NOP
label_2774bc:
    // 0x2774bc: 0x0  nop
    ctx->pc = 0x2774bcu;
    // NOP
label_2774c0:
    // 0x2774c0: 0xe9d6  .word       0x0000E9D6                   # dsrlv       $sp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2774c0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2774c4:
    // 0x2774c4: 0x66c0  sll         $t4, $zero, 27
    ctx->pc = 0x2774c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2774c8:
    // 0x2774c8: 0x0  nop
    ctx->pc = 0x2774c8u;
    // NOP
label_2774cc:
    // 0x2774cc: 0x0  nop
    ctx->pc = 0x2774ccu;
    // NOP
label_2774d0:
    // 0x2774d0: 0xe9e3  .word       0x0000E9E3                   # negu        $sp, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2774d0u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2774d4:
    // 0x2774d4: 0x57c0  sll         $t2, $zero, 31
    ctx->pc = 0x2774d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2774d8:
    // 0x2774d8: 0x0  nop
    ctx->pc = 0x2774d8u;
    // NOP
label_2774dc:
    // 0x2774dc: 0x0  nop
    ctx->pc = 0x2774dcu;
    // NOP
label_2774e0:
    // 0x2774e0: 0xe9ee  .word       0x0000E9EE                   # dsub        $sp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2774e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_2774e4:
    // 0x2774e4: 0x2080  sll         $a0, $zero, 2
    ctx->pc = 0x2774e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2774e8:
    // 0x2774e8: 0x0  nop
    ctx->pc = 0x2774e8u;
    // NOP
label_2774ec:
    // 0x2774ec: 0x0  nop
    ctx->pc = 0x2774ecu;
    // NOP
label_2774f0:
    // 0x2774f0: 0xe9f3  tltu        $zero, $zero, 935
    ctx->pc = 0x2774f0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2774f4:
    // 0x2774f4: 0x4290  .word       0x00004290                   # mfhi        $t0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2774f4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2774f8:
    // 0x2774f8: 0x0  nop
    ctx->pc = 0x2774f8u;
    // NOP
label_2774fc:
    // 0x2774fc: 0x0  nop
    ctx->pc = 0x2774fcu;
    // NOP
label_277500:
    // 0x277500: 0xe9fc  dsll32      $sp, $zero, 7
    ctx->pc = 0x277500u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << (32 + 7));
label_277504:
    // 0x277504: 0x3310  .word       0x00003310                   # mfhi        $a2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277504u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_277508:
    // 0x277508: 0x0  nop
    ctx->pc = 0x277508u;
    // NOP
label_27750c:
    // 0x27750c: 0x0  nop
    ctx->pc = 0x27750cu;
    // NOP
label_277510:
    // 0x277510: 0xea03  sra         $sp, $zero, 8
    ctx->pc = 0x277510u;
    SET_GPR_S32(ctx, 29, SRA32(GPR_S32(ctx, 0), 8));
label_277514:
    // 0x277514: 0x7210  .word       0x00007210                   # mfhi        $t6 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277514u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_277518:
    // 0x277518: 0x0  nop
    ctx->pc = 0x277518u;
    // NOP
label_27751c:
    // 0x27751c: 0x0  nop
    ctx->pc = 0x27751cu;
    // NOP
label_277520:
    // 0x277520: 0xea12  .word       0x0000EA12                   # mflo        $sp # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277520u;
    SET_GPR_U64(ctx, 29, ctx->lo);
label_277524:
    // 0x277524: 0x4140  sll         $t0, $zero, 5
    ctx->pc = 0x277524u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_277528:
    // 0x277528: 0x0  nop
    ctx->pc = 0x277528u;
    // NOP
label_27752c:
    // 0x27752c: 0x0  nop
    ctx->pc = 0x27752cu;
    // NOP
label_277530:
    // 0x277530: 0xea1b  .word       0x0000EA1B                   # divu        $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277530u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_277534:
    // 0x277534: 0x6600  sll         $t4, $zero, 24
    ctx->pc = 0x277534u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_277538:
    // 0x277538: 0x0  nop
    ctx->pc = 0x277538u;
    // NOP
label_27753c:
    // 0x27753c: 0x0  nop
    ctx->pc = 0x27753cu;
    // NOP
label_277540:
    // 0x277540: 0xea28  .word       0x0000EA28                   # mfsa        $sp # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x277540u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_277544:
    // 0x277544: 0x7230  tge         $zero, $zero, 456
    ctx->pc = 0x277544u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277548:
    // 0x277548: 0x0  nop
    ctx->pc = 0x277548u;
    // NOP
label_27754c:
    // 0x27754c: 0x0  nop
    ctx->pc = 0x27754cu;
    // NOP
label_277550:
    // 0x277550: 0xea37  .word       0x0000EA37                   # INVALID     $zero, $zero, -0x15C9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277550u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x277550 raw=0x0000EA37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277554:
    // 0x277554: 0x4530  tge         $zero, $zero, 276
    ctx->pc = 0x277554u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277558:
    // 0x277558: 0x0  nop
    ctx->pc = 0x277558u;
    // NOP
label_27755c:
    // 0x27755c: 0x0  nop
    ctx->pc = 0x27755cu;
    // NOP
label_277560:
    // 0x277560: 0xea40  sll         $sp, $zero, 9
    ctx->pc = 0x277560u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_277564:
    // 0x277564: 0x4ba0  .word       0x00004BA0                   # add         $t1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277564u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_277568:
    // 0x277568: 0x0  nop
    ctx->pc = 0x277568u;
    // NOP
label_27756c:
    // 0x27756c: 0x0  nop
    ctx->pc = 0x27756cu;
    // NOP
label_277570:
    // 0x277570: 0xea4a  .word       0x0000EA4A                   # movz        $sp, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277570u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 29, GPR_VEC(ctx, 0));
label_277574:
    // 0x277574: 0x87c0  sll         $s0, $zero, 31
    ctx->pc = 0x277574u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_277578:
    // 0x277578: 0x0  nop
    ctx->pc = 0x277578u;
    // NOP
label_27757c:
    // 0x27757c: 0x0  nop
    ctx->pc = 0x27757cu;
    // NOP
label_277580:
    // 0x277580: 0xea5b  .word       0x0000EA5B                   # divu        $sp, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277580u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_277584:
    // 0x277584: 0x9530  tge         $zero, $zero, 596
    ctx->pc = 0x277584u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277588:
    // 0x277588: 0x0  nop
    ctx->pc = 0x277588u;
    // NOP
label_27758c:
    // 0x27758c: 0x0  nop
    ctx->pc = 0x27758cu;
    // NOP
label_277590:
    // 0x277590: 0xea6e  .word       0x0000EA6E                   # dsub        $sp, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277590u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_277594:
    // 0x277594: 0x91f0  tge         $zero, $zero, 583
    ctx->pc = 0x277594u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277598:
    // 0x277598: 0x0  nop
    ctx->pc = 0x277598u;
    // NOP
label_27759c:
    // 0x27759c: 0x0  nop
    ctx->pc = 0x27759cu;
    // NOP
label_2775a0:
    // 0x2775a0: 0xea81  .word       0x0000EA81                   # INVALID     $zero, $zero, -0x157F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2775a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2775A0 raw=0x0000EA81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2775a4:
    // 0x2775a4: 0x7150  .word       0x00007150                   # mfhi        $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2775a4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2775a8:
    // 0x2775a8: 0x0  nop
    ctx->pc = 0x2775a8u;
    // NOP
label_2775ac:
    // 0x2775ac: 0x0  nop
    ctx->pc = 0x2775acu;
    // NOP
label_2775b0:
    // 0x2775b0: 0xea90  .word       0x0000EA90                   # mfhi        $sp # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2775b0u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_2775b4:
    // 0x2775b4: 0x4170  tge         $zero, $zero, 261
    ctx->pc = 0x2775b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2775b8:
    // 0x2775b8: 0x0  nop
    ctx->pc = 0x2775b8u;
    // NOP
label_2775bc:
    // 0x2775bc: 0x0  nop
    ctx->pc = 0x2775bcu;
    // NOP
label_2775c0:
    // 0x2775c0: 0xea99  .word       0x0000EA99                   # multu       $zero, $zero # 0000EA80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2775c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_2775c4:
    // 0x2775c4: 0x9340  sll         $s2, $zero, 13
    ctx->pc = 0x2775c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_2775c8:
    // 0x2775c8: 0x0  nop
    ctx->pc = 0x2775c8u;
    // NOP
label_2775cc:
    // 0x2775cc: 0x0  nop
    ctx->pc = 0x2775ccu;
    // NOP
label_2775d0:
    // 0x2775d0: 0xeaac  .word       0x0000EAAC                   # dadd        $sp, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2775d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_2775d4:
    // 0x2775d4: 0x7a40  sll         $t7, $zero, 9
    ctx->pc = 0x2775d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2775d8:
    // 0x2775d8: 0x0  nop
    ctx->pc = 0x2775d8u;
    // NOP
label_2775dc:
    // 0x2775dc: 0x0  nop
    ctx->pc = 0x2775dcu;
    // NOP
label_2775e0:
    // 0x2775e0: 0xeabc  dsll32      $sp, $zero, 10
    ctx->pc = 0x2775e0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << (32 + 10));
label_2775e4:
    // 0x2775e4: 0x3e10  .word       0x00003E10                   # mfhi        $a3 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2775e4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2775e8:
    // 0x2775e8: 0x0  nop
    ctx->pc = 0x2775e8u;
    // NOP
label_2775ec:
    // 0x2775ec: 0x0  nop
    ctx->pc = 0x2775ecu;
    // NOP
label_2775f0:
    // 0x2775f0: 0xeac4  .word       0x0000EAC4                   # sllv        $sp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2775f0u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2775f4:
    // 0x2775f4: 0x78d0  .word       0x000078D0                   # mfhi        $t7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2775f4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2775f8:
    // 0x2775f8: 0x0  nop
    ctx->pc = 0x2775f8u;
    // NOP
label_2775fc:
    // 0x2775fc: 0x0  nop
    ctx->pc = 0x2775fcu;
    // NOP
label_277600:
    // 0x277600: 0xead4  .word       0x0000EAD4                   # dsllv       $sp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277600u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_277604:
    // 0x277604: 0x4ee0  .word       0x00004EE0                   # add         $t1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277604u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_277608:
    // 0x277608: 0x0  nop
    ctx->pc = 0x277608u;
    // NOP
label_27760c:
    // 0x27760c: 0x0  nop
    ctx->pc = 0x27760cu;
    // NOP
label_277610:
    // 0x277610: 0xeade  .word       0x0000EADE                   # ddiv        $sp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277610u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x277610 raw=0x0000EADE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277614:
    // 0x277614: 0x71a0  .word       0x000071A0                   # add         $t6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277614u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_277618:
    // 0x277618: 0x0  nop
    ctx->pc = 0x277618u;
    // NOP
label_27761c:
    // 0x27761c: 0x0  nop
    ctx->pc = 0x27761cu;
    // NOP
label_277620:
    // 0x277620: 0xeaed  .word       0x0000EAED                   # daddu       $sp, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277620u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277624:
    // 0x277624: 0x7990  .word       0x00007990                   # mfhi        $t7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277624u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_277628:
    // 0x277628: 0x0  nop
    ctx->pc = 0x277628u;
    // NOP
label_27762c:
    // 0x27762c: 0x0  nop
    ctx->pc = 0x27762cu;
    // NOP
label_277630:
    // 0x277630: 0xeafd  .word       0x0000EAFD                   # INVALID     $zero, $zero, -0x1503 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x277630 raw=0x0000EAFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277634:
    // 0x277634: 0x3ce0  .word       0x00003CE0                   # add         $a3, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_277638:
    // 0x277638: 0x0  nop
    ctx->pc = 0x277638u;
    // NOP
label_27763c:
    // 0x27763c: 0x0  nop
    ctx->pc = 0x27763cu;
    // NOP
label_277640:
    // 0x277640: 0xeb05  .word       0x0000EB05                   # INVALID     $zero, $zero, -0x14FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x277640 raw=0x0000EB05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277644:
    // 0x277644: 0x6020  add         $t4, $zero, $zero
    ctx->pc = 0x277644u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_277648:
    // 0x277648: 0x0  nop
    ctx->pc = 0x277648u;
    // NOP
label_27764c:
    // 0x27764c: 0x0  nop
    ctx->pc = 0x27764cu;
    // NOP
label_277650:
    // 0x277650: 0xeb12  .word       0x0000EB12                   # mflo        $sp # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277650u;
    SET_GPR_U64(ctx, 29, ctx->lo);
label_277654:
    // 0x277654: 0x6c20  .word       0x00006C20                   # add         $t5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277654u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_277658:
    // 0x277658: 0x0  nop
    ctx->pc = 0x277658u;
    // NOP
label_27765c:
    // 0x27765c: 0x0  nop
    ctx->pc = 0x27765cu;
    // NOP
label_277660:
    // 0x277660: 0xeb20  .word       0x0000EB20                   # add         $sp, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277660u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_277664:
    // 0x277664: 0x8a70  tge         $zero, $zero, 553
    ctx->pc = 0x277664u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277668:
    // 0x277668: 0x0  nop
    ctx->pc = 0x277668u;
    // NOP
label_27766c:
    // 0x27766c: 0x0  nop
    ctx->pc = 0x27766cu;
    // NOP
label_277670:
    // 0x277670: 0xeb32  tlt         $zero, $zero, 940
    ctx->pc = 0x277670u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277674:
    // 0x277674: 0x7010  mfhi        $t6
    ctx->pc = 0x277674u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_277678:
    // 0x277678: 0x0  nop
    ctx->pc = 0x277678u;
    // NOP
label_27767c:
    // 0x27767c: 0x0  nop
    ctx->pc = 0x27767cu;
    // NOP
label_277680:
    // 0x277680: 0xeb41  .word       0x0000EB41                   # INVALID     $zero, $zero, -0x14BF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277680u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x277680 raw=0x0000EB41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277684:
    // 0x277684: 0xa040  sll         $s4, $zero, 1
    ctx->pc = 0x277684u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_277688:
    // 0x277688: 0x0  nop
    ctx->pc = 0x277688u;
    // NOP
label_27768c:
    // 0x27768c: 0x0  nop
    ctx->pc = 0x27768cu;
    // NOP
label_277690:
    // 0x277690: 0xeb56  .word       0x0000EB56                   # dsrlv       $sp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277690u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_277694:
    // 0x277694: 0x9cf0  tge         $zero, $zero, 627
    ctx->pc = 0x277694u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277698:
    // 0x277698: 0x0  nop
    ctx->pc = 0x277698u;
    // NOP
label_27769c:
    // 0x27769c: 0x0  nop
    ctx->pc = 0x27769cu;
    // NOP
label_2776a0:
    // 0x2776a0: 0xeb6a  .word       0x0000EB6A                   # slt         $sp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2776a0u;
    SET_GPR_U64(ctx, 29, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2776a4:
    // 0x2776a4: 0xaa50  .word       0x0000AA50                   # mfhi        $s5 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2776a4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_2776a8:
    // 0x2776a8: 0x0  nop
    ctx->pc = 0x2776a8u;
    // NOP
label_2776ac:
    // 0x2776ac: 0x0  nop
    ctx->pc = 0x2776acu;
    // NOP
label_2776b0:
    // 0x2776b0: 0xeb80  sll         $sp, $zero, 14
    ctx->pc = 0x2776b0u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_2776b4:
    // 0x2776b4: 0x5fd0  .word       0x00005FD0                   # mfhi        $t3 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2776b4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2776b8:
    // 0x2776b8: 0x0  nop
    ctx->pc = 0x2776b8u;
    // NOP
label_2776bc:
    // 0x2776bc: 0x0  nop
    ctx->pc = 0x2776bcu;
    // NOP
label_2776c0:
    // 0x2776c0: 0xeb8c  syscall     942
    ctx->pc = 0x2776c0u;
    ctx->pc = 0x2776C4u;
runtime->handleSyscall(rdram, ctx, 0x3AEu);
label_2776c4:
    // 0x2776c4: 0x5bc0  sll         $t3, $zero, 15
    ctx->pc = 0x2776c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_2776c8:
    // 0x2776c8: 0x0  nop
    ctx->pc = 0x2776c8u;
    // NOP
label_2776cc:
    // 0x2776cc: 0x0  nop
    ctx->pc = 0x2776ccu;
    // NOP
label_2776d0:
    // 0x2776d0: 0xeb98  .word       0x0000EB98                   # mult        $sp, $zero, $zero # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2776d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_2776d4:
    // 0x2776d4: 0x6c70  tge         $zero, $zero, 433
    ctx->pc = 0x2776d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2776d8:
    // 0x2776d8: 0x0  nop
    ctx->pc = 0x2776d8u;
    // NOP
label_2776dc:
    // 0x2776dc: 0x0  nop
    ctx->pc = 0x2776dcu;
    // NOP
label_2776e0:
    // 0x2776e0: 0xeba6  .word       0x0000EBA6                   # xor         $sp, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2776e0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2776e4:
    // 0x2776e4: 0x4b00  sll         $t1, $zero, 12
    ctx->pc = 0x2776e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_2776e8:
    // 0x2776e8: 0x0  nop
    ctx->pc = 0x2776e8u;
    // NOP
label_2776ec:
    // 0x2776ec: 0x0  nop
    ctx->pc = 0x2776ecu;
    // NOP
label_2776f0:
    // 0x2776f0: 0xebb0  tge         $zero, $zero, 942
    ctx->pc = 0x2776f0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2776f4:
    // 0x2776f4: 0x47a0  .word       0x000047A0                   # add         $t0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2776f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2776f8:
    // 0x2776f8: 0x0  nop
    ctx->pc = 0x2776f8u;
    // NOP
label_2776fc:
    // 0x2776fc: 0x0  nop
    ctx->pc = 0x2776fcu;
    // NOP
label_277700:
    // 0x277700: 0xebb9  .word       0x0000EBB9                   # INVALID     $zero, $zero, -0x1447 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277700u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x277700 raw=0x0000EBB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277704:
    // 0x277704: 0x9a20  .word       0x00009A20                   # add         $s3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277704u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_277708:
    // 0x277708: 0x0  nop
    ctx->pc = 0x277708u;
    // NOP
label_27770c:
    // 0x27770c: 0x0  nop
    ctx->pc = 0x27770cu;
    // NOP
label_277710:
    // 0x277710: 0xebcd  break       0, 943
    ctx->pc = 0x277710u;
    runtime->handleBreak(rdram, ctx);
label_277714:
    // 0x277714: 0x9b00  sll         $s3, $zero, 12
    ctx->pc = 0x277714u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_277718:
    // 0x277718: 0x0  nop
    ctx->pc = 0x277718u;
    // NOP
label_27771c:
    // 0x27771c: 0x0  nop
    ctx->pc = 0x27771cu;
    // NOP
label_277720:
    // 0x277720: 0xebe1  .word       0x0000EBE1                   # addu        $sp, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_277724:
    // 0x277724: 0x5f00  sll         $t3, $zero, 28
    ctx->pc = 0x277724u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_277728:
    // 0x277728: 0x0  nop
    ctx->pc = 0x277728u;
    // NOP
label_27772c:
    // 0x27772c: 0x0  nop
    ctx->pc = 0x27772cu;
    // NOP
label_277730:
    // 0x277730: 0xebed  .word       0x0000EBED                   # daddu       $sp, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277730u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277734:
    // 0x277734: 0x63a0  .word       0x000063A0                   # add         $t4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277734u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_277738:
    // 0x277738: 0x0  nop
    ctx->pc = 0x277738u;
    // NOP
label_27773c:
    // 0x27773c: 0x0  nop
    ctx->pc = 0x27773cu;
    // NOP
label_277740:
    // 0x277740: 0xebfa  dsrl        $sp, $zero, 15
    ctx->pc = 0x277740u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) >> 15);
label_277744:
    // 0x277744: 0x67e0  .word       0x000067E0                   # add         $t4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277744u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_277748:
    // 0x277748: 0x0  nop
    ctx->pc = 0x277748u;
    // NOP
label_27774c:
    // 0x27774c: 0x0  nop
    ctx->pc = 0x27774cu;
    // NOP
label_277750:
    // 0x277750: 0xec07  .word       0x0000EC07                   # srav        $sp, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277750u;
    SET_GPR_S32(ctx, 29, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_277754:
    // 0x277754: 0x9420  .word       0x00009420                   # add         $s2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277754u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_277758:
    // 0x277758: 0x0  nop
    ctx->pc = 0x277758u;
    // NOP
label_27775c:
    // 0x27775c: 0x0  nop
    ctx->pc = 0x27775cu;
    // NOP
label_277760:
    // 0x277760: 0xec1a  .word       0x0000EC1A                   # div         $sp, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277760u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_277764:
    // 0x277764: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x277764u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_277768:
    // 0x277768: 0x0  nop
    ctx->pc = 0x277768u;
    // NOP
label_27776c:
    // 0x27776c: 0x0  nop
    ctx->pc = 0x27776cu;
    // NOP
label_277770:
    // 0x277770: 0xec28  .word       0x0000EC28                   # mfsa        $sp # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x277770u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_277774:
    // 0x277774: 0x4020  add         $t0, $zero, $zero
    ctx->pc = 0x277774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_277778:
    // 0x277778: 0x0  nop
    ctx->pc = 0x277778u;
    // NOP
label_27777c:
    // 0x27777c: 0x0  nop
    ctx->pc = 0x27777cu;
    // NOP
label_277780:
    // 0x277780: 0xec31  tgeu        $zero, $zero, 944
    ctx->pc = 0x277780u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277784:
    // 0x277784: 0x7de0  .word       0x00007DE0                   # add         $t7, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277784u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_277788:
    // 0x277788: 0x0  nop
    ctx->pc = 0x277788u;
    // NOP
label_27778c:
    // 0x27778c: 0x0  nop
    ctx->pc = 0x27778cu;
    // NOP
label_277790:
    // 0x277790: 0xec41  .word       0x0000EC41                   # INVALID     $zero, $zero, -0x13BF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277790u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x277790 raw=0x0000EC41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277794:
    // 0x277794: 0x7b00  sll         $t7, $zero, 12
    ctx->pc = 0x277794u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_277798:
    // 0x277798: 0x0  nop
    ctx->pc = 0x277798u;
    // NOP
label_27779c:
    // 0x27779c: 0x0  nop
    ctx->pc = 0x27779cu;
    // NOP
label_2777a0:
    // 0x2777a0: 0xec51  .word       0x0000EC51                   # mthi        $zero # 0000EC40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2777a0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2777a4:
    // 0x2777a4: 0x5900  sll         $t3, $zero, 4
    ctx->pc = 0x2777a4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2777a8:
    // 0x2777a8: 0x0  nop
    ctx->pc = 0x2777a8u;
    // NOP
label_2777ac:
    // 0x2777ac: 0x0  nop
    ctx->pc = 0x2777acu;
    // NOP
label_2777b0:
    // 0x2777b0: 0xec5d  .word       0x0000EC5D                   # dmultu      $zero, $zero # 0000EC40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2777b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2777B0 raw=0x0000EC5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2777b4:
    // 0x2777b4: 0x4b90  .word       0x00004B90                   # mfhi        $t1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2777b4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2777b8:
    // 0x2777b8: 0x0  nop
    ctx->pc = 0x2777b8u;
    // NOP
label_2777bc:
    // 0x2777bc: 0x0  nop
    ctx->pc = 0x2777bcu;
    // NOP
label_2777c0:
    // 0x2777c0: 0xec67  .word       0x0000EC67                   # not         $sp, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2777c0u;
    SET_GPR_U64(ctx, 29, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2777c4:
    // 0x2777c4: 0x3ec0  sll         $a3, $zero, 27
    ctx->pc = 0x2777c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2777c8:
    // 0x2777c8: 0x0  nop
    ctx->pc = 0x2777c8u;
    // NOP
label_2777cc:
    // 0x2777cc: 0x0  nop
    ctx->pc = 0x2777ccu;
    // NOP
label_2777d0:
    // 0x2777d0: 0xec6f  .word       0x0000EC6F                   # dsubu       $sp, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2777d0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2777d4:
    // 0x2777d4: 0x4180  sll         $t0, $zero, 6
    ctx->pc = 0x2777d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_2777d8:
    // 0x2777d8: 0x0  nop
    ctx->pc = 0x2777d8u;
    // NOP
label_2777dc:
    // 0x2777dc: 0x0  nop
    ctx->pc = 0x2777dcu;
    // NOP
label_2777e0:
    // 0x2777e0: 0xec78  dsll        $sp, $zero, 17
    ctx->pc = 0x2777e0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << 17);
label_2777e4:
    // 0x2777e4: 0x3cd0  .word       0x00003CD0                   # mfhi        $a3 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2777e4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2777e8:
    // 0x2777e8: 0x0  nop
    ctx->pc = 0x2777e8u;
    // NOP
label_2777ec:
    // 0x2777ec: 0x0  nop
    ctx->pc = 0x2777ecu;
    // NOP
label_2777f0:
    // 0x2777f0: 0xec80  sll         $sp, $zero, 18
    ctx->pc = 0x2777f0u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2777f4:
    // 0x2777f4: 0x6000  sll         $t4, $zero, 0
    ctx->pc = 0x2777f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2777f8:
    // 0x2777f8: 0x0  nop
    ctx->pc = 0x2777f8u;
    // NOP
label_2777fc:
    // 0x2777fc: 0x0  nop
    ctx->pc = 0x2777fcu;
    // NOP
label_277800:
    // 0x277800: 0xec8c  syscall     946
    ctx->pc = 0x277800u;
    ctx->pc = 0x277804u;
runtime->handleSyscall(rdram, ctx, 0x3B2u);
label_277804:
    // 0x277804: 0x70e0  .word       0x000070E0                   # add         $t6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277804u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_277808:
    // 0x277808: 0x0  nop
    ctx->pc = 0x277808u;
    // NOP
label_27780c:
    // 0x27780c: 0x0  nop
    ctx->pc = 0x27780cu;
    // NOP
label_277810:
    // 0x277810: 0xec9b  .word       0x0000EC9B                   # divu        $sp, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277810u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_277814:
    // 0x277814: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277814u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_277818:
    // 0x277818: 0x0  nop
    ctx->pc = 0x277818u;
    // NOP
label_27781c:
    // 0x27781c: 0x0  nop
    ctx->pc = 0x27781cu;
    // NOP
label_277820:
    // 0x277820: 0xecaa  .word       0x0000ECAA                   # slt         $sp, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277820u;
    SET_GPR_U64(ctx, 29, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_277824:
    // 0x277824: 0x7f10  .word       0x00007F10                   # mfhi        $t7 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277824u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_277828:
    // 0x277828: 0x0  nop
    ctx->pc = 0x277828u;
    // NOP
label_27782c:
    // 0x27782c: 0x0  nop
    ctx->pc = 0x27782cu;
    // NOP
label_277830:
    // 0x277830: 0xecba  dsrl        $sp, $zero, 18
    ctx->pc = 0x277830u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) >> 18);
label_277834:
    // 0x277834: 0x9de0  .word       0x00009DE0                   # add         $s3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277834u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_277838:
    // 0x277838: 0x0  nop
    ctx->pc = 0x277838u;
    // NOP
label_27783c:
    // 0x27783c: 0x0  nop
    ctx->pc = 0x27783cu;
    // NOP
label_277840:
    // 0x277840: 0xecce  .word       0x0000ECCE                   # INVALID     $zero, $zero, -0x1332 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277840u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x277840 raw=0x0000ECCE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277844:
    // 0x277844: 0x7790  .word       0x00007790                   # mfhi        $t6 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277844u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_277848:
    // 0x277848: 0x0  nop
    ctx->pc = 0x277848u;
    // NOP
label_27784c:
    // 0x27784c: 0x0  nop
    ctx->pc = 0x27784cu;
    // NOP
label_277850:
    // 0x277850: 0xecdd  .word       0x0000ECDD                   # dmultu      $zero, $zero # 0000ECC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277850u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x277850 raw=0x0000ECDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277854:
    // 0x277854: 0x5d60  .word       0x00005D60                   # add         $t3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_277858:
    // 0x277858: 0x0  nop
    ctx->pc = 0x277858u;
    // NOP
label_27785c:
    // 0x27785c: 0x0  nop
    ctx->pc = 0x27785cu;
    // NOP
label_277860:
    // 0x277860: 0xece9  .word       0x0000ECE9                   # mtsa        $zero # 0000ECC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x277860u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_277864:
    // 0x277864: 0x6dd0  .word       0x00006DD0                   # mfhi        $t5 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277864u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_277868:
    // 0x277868: 0x0  nop
    ctx->pc = 0x277868u;
    // NOP
label_27786c:
    // 0x27786c: 0x0  nop
    ctx->pc = 0x27786cu;
    // NOP
label_277870:
    // 0x277870: 0xecf7  .word       0x0000ECF7                   # INVALID     $zero, $zero, -0x1309 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x277870 raw=0x0000ECF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277874:
    // 0x277874: 0x7940  sll         $t7, $zero, 5
    ctx->pc = 0x277874u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_277878:
    // 0x277878: 0x0  nop
    ctx->pc = 0x277878u;
    // NOP
label_27787c:
    // 0x27787c: 0x0  nop
    ctx->pc = 0x27787cu;
    // NOP
label_277880:
    // 0x277880: 0xed07  .word       0x0000ED07                   # srav        $sp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277880u;
    SET_GPR_S32(ctx, 29, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_277884:
    // 0x277884: 0x3a70  tge         $zero, $zero, 233
    ctx->pc = 0x277884u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277888:
    // 0x277888: 0x0  nop
    ctx->pc = 0x277888u;
    // NOP
label_27788c:
    // 0x27788c: 0x0  nop
    ctx->pc = 0x27788cu;
    // NOP
label_277890:
    // 0x277890: 0xed0f  .word       0x0000ED0F                   # sync.p # 0000E800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277890u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_277894:
    // 0x277894: 0xa6c0  sll         $s4, $zero, 27
    ctx->pc = 0x277894u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_277898:
    // 0x277898: 0x0  nop
    ctx->pc = 0x277898u;
    // NOP
label_27789c:
    // 0x27789c: 0x0  nop
    ctx->pc = 0x27789cu;
    // NOP
label_2778a0:
    // 0x2778a0: 0xed24  .word       0x0000ED24                   # and         $sp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2778a0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2778a4:
    // 0x2778a4: 0x9a70  tge         $zero, $zero, 617
    ctx->pc = 0x2778a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2778a8:
    // 0x2778a8: 0x0  nop
    ctx->pc = 0x2778a8u;
    // NOP
label_2778ac:
    // 0x2778ac: 0x0  nop
    ctx->pc = 0x2778acu;
    // NOP
label_2778b0:
    // 0x2778b0: 0xed38  dsll        $sp, $zero, 20
    ctx->pc = 0x2778b0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << 20);
label_2778b4:
    // 0x2778b4: 0xaea0  .word       0x0000AEA0                   # add         $s5, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2778b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2778b8:
    // 0x2778b8: 0x0  nop
    ctx->pc = 0x2778b8u;
    // NOP
label_2778bc:
    // 0x2778bc: 0x0  nop
    ctx->pc = 0x2778bcu;
    // NOP
label_2778c0:
    // 0x2778c0: 0xed4e  .word       0x0000ED4E                   # INVALID     $zero, $zero, -0x12B2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2778c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2778C0 raw=0x0000ED4E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2778c4:
    // 0x2778c4: 0x7300  sll         $t6, $zero, 12
    ctx->pc = 0x2778c4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_2778c8:
    // 0x2778c8: 0x0  nop
    ctx->pc = 0x2778c8u;
    // NOP
label_2778cc:
    // 0x2778cc: 0x0  nop
    ctx->pc = 0x2778ccu;
    // NOP
label_2778d0:
    // 0x2778d0: 0xed5d  .word       0x0000ED5D                   # dmultu      $zero, $zero # 0000ED40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2778d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2778D0 raw=0x0000ED5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2778d4:
    // 0x2778d4: 0x4250  .word       0x00004250                   # mfhi        $t0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2778d4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2778d8:
    // 0x2778d8: 0x0  nop
    ctx->pc = 0x2778d8u;
    // NOP
label_2778dc:
    // 0x2778dc: 0x0  nop
    ctx->pc = 0x2778dcu;
    // NOP
label_2778e0:
    // 0x2778e0: 0xed66  .word       0x0000ED66                   # xor         $sp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2778e0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2778e4:
    // 0x2778e4: 0xa710  .word       0x0000A710                   # mfhi        $s4 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2778e4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_2778e8:
    // 0x2778e8: 0x0  nop
    ctx->pc = 0x2778e8u;
    // NOP
label_2778ec:
    // 0x2778ec: 0x0  nop
    ctx->pc = 0x2778ecu;
    // NOP
label_2778f0:
    // 0x2778f0: 0xed7b  dsra        $sp, $zero, 21
    ctx->pc = 0x2778f0u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> 21);
label_2778f4:
    // 0x2778f4: 0x5880  sll         $t3, $zero, 2
    ctx->pc = 0x2778f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2778f8:
    // 0x2778f8: 0x0  nop
    ctx->pc = 0x2778f8u;
    // NOP
label_2778fc:
    // 0x2778fc: 0x0  nop
    ctx->pc = 0x2778fcu;
    // NOP
label_277900:
    // 0x277900: 0xed87  .word       0x0000ED87                   # srav        $sp, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277900u;
    SET_GPR_S32(ctx, 29, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_277904:
    // 0x277904: 0x82e0  .word       0x000082E0                   # add         $s0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277904u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_277908:
    // 0x277908: 0x0  nop
    ctx->pc = 0x277908u;
    // NOP
label_27790c:
    // 0x27790c: 0x0  nop
    ctx->pc = 0x27790cu;
    // NOP
label_277910:
    // 0x277910: 0xed98  .word       0x0000ED98                   # mult        $sp, $zero, $zero # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x277910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_277914:
    // 0x277914: 0xae40  sll         $s5, $zero, 25
    ctx->pc = 0x277914u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_277918:
    // 0x277918: 0x0  nop
    ctx->pc = 0x277918u;
    // NOP
label_27791c:
    // 0x27791c: 0x0  nop
    ctx->pc = 0x27791cu;
    // NOP
label_277920:
    // 0x277920: 0xedae  .word       0x0000EDAE                   # dsub        $sp, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277920u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_277924:
    // 0x277924: 0x70d0  .word       0x000070D0                   # mfhi        $t6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277924u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_277928:
    // 0x277928: 0x0  nop
    ctx->pc = 0x277928u;
    // NOP
label_27792c:
    // 0x27792c: 0x0  nop
    ctx->pc = 0x27792cu;
    // NOP
label_277930:
    // 0x277930: 0xedbd  .word       0x0000EDBD                   # INVALID     $zero, $zero, -0x1243 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x277930 raw=0x0000EDBD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277934:
    // 0x277934: 0x3c10  .word       0x00003C10                   # mfhi        $a3 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277934u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_277938:
    // 0x277938: 0x0  nop
    ctx->pc = 0x277938u;
    // NOP
label_27793c:
    // 0x27793c: 0x0  nop
    ctx->pc = 0x27793cu;
    // NOP
label_277940:
    // 0x277940: 0xedc5  .word       0x0000EDC5                   # INVALID     $zero, $zero, -0x123B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x277940 raw=0x0000EDC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277944:
    // 0x277944: 0x73a0  .word       0x000073A0                   # add         $t6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277944u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_277948:
    // 0x277948: 0x0  nop
    ctx->pc = 0x277948u;
    // NOP
label_27794c:
    // 0x27794c: 0x0  nop
    ctx->pc = 0x27794cu;
    // NOP
label_277950:
    // 0x277950: 0xedd4  .word       0x0000EDD4                   # dsllv       $sp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277950u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_277954:
    // 0x277954: 0x5540  sll         $t2, $zero, 21
    ctx->pc = 0x277954u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_277958:
    // 0x277958: 0x0  nop
    ctx->pc = 0x277958u;
    // NOP
label_27795c:
    // 0x27795c: 0x0  nop
    ctx->pc = 0x27795cu;
    // NOP
label_277960:
    // 0x277960: 0xeddf  .word       0x0000EDDF                   # ddivu       $sp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277960u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x277960 raw=0x0000EDDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277964:
    // 0x277964: 0x9a80  sll         $s3, $zero, 10
    ctx->pc = 0x277964u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_277968:
    // 0x277968: 0x0  nop
    ctx->pc = 0x277968u;
    // NOP
label_27796c:
    // 0x27796c: 0x0  nop
    ctx->pc = 0x27796cu;
    // NOP
label_277970:
    // 0x277970: 0xedf3  tltu        $zero, $zero, 951
    ctx->pc = 0x277970u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277974:
    // 0x277974: 0x6740  sll         $t4, $zero, 29
    ctx->pc = 0x277974u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_277978:
    // 0x277978: 0x0  nop
    ctx->pc = 0x277978u;
    // NOP
label_27797c:
    // 0x27797c: 0x0  nop
    ctx->pc = 0x27797cu;
    // NOP
label_277980:
    // 0x277980: 0xee00  sll         $sp, $zero, 24
    ctx->pc = 0x277980u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_277984:
    // 0x277984: 0x78a0  .word       0x000078A0                   # add         $t7, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277984u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_277988:
    // 0x277988: 0x0  nop
    ctx->pc = 0x277988u;
    // NOP
label_27798c:
    // 0x27798c: 0x0  nop
    ctx->pc = 0x27798cu;
    // NOP
label_277990:
    // 0x277990: 0xee10  .word       0x0000EE10                   # mfhi        $sp # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277990u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_277994:
    // 0x277994: 0x8b00  sll         $s1, $zero, 12
    ctx->pc = 0x277994u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_277998:
    // 0x277998: 0x0  nop
    ctx->pc = 0x277998u;
    // NOP
label_27799c:
    // 0x27799c: 0x0  nop
    ctx->pc = 0x27799cu;
    // NOP
label_2779a0:
    // 0x2779a0: 0xee22  .word       0x0000EE22                   # neg         $sp, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2779a0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_2779a4:
    // 0x2779a4: 0x81b0  tge         $zero, $zero, 518
    ctx->pc = 0x2779a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2779a8:
    // 0x2779a8: 0x0  nop
    ctx->pc = 0x2779a8u;
    // NOP
label_2779ac:
    // 0x2779ac: 0x0  nop
    ctx->pc = 0x2779acu;
    // NOP
label_2779b0:
    // 0x2779b0: 0xee33  tltu        $zero, $zero, 952
    ctx->pc = 0x2779b0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2779b4:
    // 0x2779b4: 0x8f80  sll         $s1, $zero, 30
    ctx->pc = 0x2779b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_2779b8:
    // 0x2779b8: 0x0  nop
    ctx->pc = 0x2779b8u;
    // NOP
label_2779bc:
    // 0x2779bc: 0x0  nop
    ctx->pc = 0x2779bcu;
    // NOP
label_2779c0:
    // 0x2779c0: 0xee45  .word       0x0000EE45                   # INVALID     $zero, $zero, -0x11BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2779c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2779C0 raw=0x0000EE45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2779c4:
    // 0x2779c4: 0xab10  .word       0x0000AB10                   # mfhi        $s5 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2779c4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_2779c8:
    // 0x2779c8: 0x0  nop
    ctx->pc = 0x2779c8u;
    // NOP
label_2779cc:
    // 0x2779cc: 0x0  nop
    ctx->pc = 0x2779ccu;
    // NOP
label_2779d0:
    // 0x2779d0: 0xee5b  .word       0x0000EE5B                   # divu        $sp, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2779d0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2779d4:
    // 0x2779d4: 0x5cf0  tge         $zero, $zero, 371
    ctx->pc = 0x2779d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2779d8:
    // 0x2779d8: 0x0  nop
    ctx->pc = 0x2779d8u;
    // NOP
label_2779dc:
    // 0x2779dc: 0x0  nop
    ctx->pc = 0x2779dcu;
    // NOP
label_2779e0:
    // 0x2779e0: 0xee67  .word       0x0000EE67                   # not         $sp, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2779e0u;
    SET_GPR_U64(ctx, 29, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2779e4:
    // 0x2779e4: 0x8950  .word       0x00008950                   # mfhi        $s1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2779e4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2779e8:
    // 0x2779e8: 0x0  nop
    ctx->pc = 0x2779e8u;
    // NOP
label_2779ec:
    // 0x2779ec: 0x0  nop
    ctx->pc = 0x2779ecu;
    // NOP
label_2779f0:
    // 0x2779f0: 0xee79  .word       0x0000EE79                   # INVALID     $zero, $zero, -0x1187 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2779f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2779F0 raw=0x0000EE79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2779f4:
    // 0x2779f4: 0x65e0  .word       0x000065E0                   # add         $t4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2779f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2779f8:
    // 0x2779f8: 0x0  nop
    ctx->pc = 0x2779f8u;
    // NOP
label_2779fc:
    // 0x2779fc: 0x0  nop
    ctx->pc = 0x2779fcu;
    // NOP
label_277a00:
    // 0x277a00: 0xee86  .word       0x0000EE86                   # srlv        $sp, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277a00u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_277a04:
    // 0x277a04: 0x32d0  .word       0x000032D0                   # mfhi        $a2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277a04u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_277a08:
    // 0x277a08: 0x0  nop
    ctx->pc = 0x277a08u;
    // NOP
label_277a0c:
    // 0x277a0c: 0x0  nop
    ctx->pc = 0x277a0cu;
    // NOP
label_277a10:
    // 0x277a10: 0xee8d  break       0, 954
    ctx->pc = 0x277a10u;
    runtime->handleBreak(rdram, ctx);
label_277a14:
    // 0x277a14: 0x36d0  .word       0x000036D0                   # mfhi        $a2 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277a14u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_277a18:
    // 0x277a18: 0x0  nop
    ctx->pc = 0x277a18u;
    // NOP
label_277a1c:
    // 0x277a1c: 0x0  nop
    ctx->pc = 0x277a1cu;
    // NOP
label_277a20:
    // 0x277a20: 0xee94  .word       0x0000EE94                   # dsllv       $sp, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277a20u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_277a24:
    // 0x277a24: 0x5ca0  .word       0x00005CA0                   # add         $t3, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277a24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_277a28:
    // 0x277a28: 0x0  nop
    ctx->pc = 0x277a28u;
    // NOP
label_277a2c:
    // 0x277a2c: 0x0  nop
    ctx->pc = 0x277a2cu;
    // NOP
label_277a30:
    // 0x277a30: 0xeea0  .word       0x0000EEA0                   # add         $sp, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277a30u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_277a34:
    // 0x277a34: 0x7030  tge         $zero, $zero, 448
    ctx->pc = 0x277a34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277a38:
    // 0x277a38: 0x0  nop
    ctx->pc = 0x277a38u;
    // NOP
label_277a3c:
    // 0x277a3c: 0x0  nop
    ctx->pc = 0x277a3cu;
    // NOP
label_277a40:
    // 0x277a40: 0xeeaf  .word       0x0000EEAF                   # dsubu       $sp, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277a40u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_277a44:
    // 0x277a44: 0x3930  tge         $zero, $zero, 228
    ctx->pc = 0x277a44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277a48:
    // 0x277a48: 0x0  nop
    ctx->pc = 0x277a48u;
    // NOP
label_277a4c:
    // 0x277a4c: 0x0  nop
    ctx->pc = 0x277a4cu;
    // NOP
label_277a50:
    // 0x277a50: 0xeeb7  .word       0x0000EEB7                   # INVALID     $zero, $zero, -0x1149 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277a50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x277A50 raw=0x0000EEB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277a54:
    // 0x277a54: 0x61c0  sll         $t4, $zero, 7
    ctx->pc = 0x277a54u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_277a58:
    // 0x277a58: 0x0  nop
    ctx->pc = 0x277a58u;
    // NOP
label_277a5c:
    // 0x277a5c: 0x0  nop
    ctx->pc = 0x277a5cu;
    // NOP
label_277a60:
    // 0x277a60: 0xeec4  .word       0x0000EEC4                   # sllv        $sp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277a60u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_277a64:
    // 0x277a64: 0x4880  sll         $t1, $zero, 2
    ctx->pc = 0x277a64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_277a68:
    // 0x277a68: 0x0  nop
    ctx->pc = 0x277a68u;
    // NOP
label_277a6c:
    // 0x277a6c: 0x0  nop
    ctx->pc = 0x277a6cu;
    // NOP
label_277a70:
    // 0x277a70: 0xeece  .word       0x0000EECE                   # INVALID     $zero, $zero, -0x1132 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277a70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x277A70 raw=0x0000EECE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277a74:
    // 0x277a74: 0x5f10  .word       0x00005F10                   # mfhi        $t3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277a74u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_277a78:
    // 0x277a78: 0x0  nop
    ctx->pc = 0x277a78u;
    // NOP
label_277a7c:
    // 0x277a7c: 0x0  nop
    ctx->pc = 0x277a7cu;
    // NOP
label_277a80:
    // 0x277a80: 0xeeda  .word       0x0000EEDA                   # div         $sp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277a80u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_277a84:
    // 0x277a84: 0x4e20  .word       0x00004E20                   # add         $t1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277a84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_277a88:
    // 0x277a88: 0x0  nop
    ctx->pc = 0x277a88u;
    // NOP
label_277a8c:
    // 0x277a8c: 0x0  nop
    ctx->pc = 0x277a8cu;
    // NOP
label_277a90:
    // 0x277a90: 0xeee4  .word       0x0000EEE4                   # and         $sp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277a90u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_277a94:
    // 0x277a94: 0x6970  tge         $zero, $zero, 421
    ctx->pc = 0x277a94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277a98:
    // 0x277a98: 0x0  nop
    ctx->pc = 0x277a98u;
    // NOP
label_277a9c:
    // 0x277a9c: 0x0  nop
    ctx->pc = 0x277a9cu;
    // NOP
label_277aa0:
    // 0x277aa0: 0xeef2  tlt         $zero, $zero, 955
    ctx->pc = 0x277aa0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277aa4:
    // 0x277aa4: 0x7400  sll         $t6, $zero, 16
    ctx->pc = 0x277aa4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_277aa8:
    // 0x277aa8: 0x0  nop
    ctx->pc = 0x277aa8u;
    // NOP
label_277aac:
    // 0x277aac: 0x0  nop
    ctx->pc = 0x277aacu;
    // NOP
label_277ab0:
    // 0x277ab0: 0xef01  .word       0x0000EF01                   # INVALID     $zero, $zero, -0x10FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ab0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x277AB0 raw=0x0000EF01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277ab4:
    // 0x277ab4: 0xc2c0  sll         $t8, $zero, 11
    ctx->pc = 0x277ab4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_277ab8:
    // 0x277ab8: 0x0  nop
    ctx->pc = 0x277ab8u;
    // NOP
label_277abc:
    // 0x277abc: 0x0  nop
    ctx->pc = 0x277abcu;
    // NOP
label_277ac0:
    // 0x277ac0: 0xef1a  .word       0x0000EF1A                   # div         $sp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ac0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_277ac4:
    // 0x277ac4: 0x4460  .word       0x00004460                   # add         $t0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_277ac8:
    // 0x277ac8: 0x0  nop
    ctx->pc = 0x277ac8u;
    // NOP
label_277acc:
    // 0x277acc: 0x0  nop
    ctx->pc = 0x277accu;
    // NOP
label_277ad0:
    // 0x277ad0: 0xef23  .word       0x0000EF23                   # negu        $sp, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_277ad4:
    // 0x277ad4: 0x3b40  sll         $a3, $zero, 13
    ctx->pc = 0x277ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_277ad8:
    // 0x277ad8: 0x0  nop
    ctx->pc = 0x277ad8u;
    // NOP
label_277adc:
    // 0x277adc: 0x0  nop
    ctx->pc = 0x277adcu;
    // NOP
label_277ae0:
    // 0x277ae0: 0xef2b  .word       0x0000EF2B                   # sltu        $sp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ae0u;
    SET_GPR_U64(ctx, 29, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_277ae4:
    // 0x277ae4: 0x1be0  .word       0x00001BE0                   # add         $v1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_277ae8:
    // 0x277ae8: 0x0  nop
    ctx->pc = 0x277ae8u;
    // NOP
label_277aec:
    // 0x277aec: 0x0  nop
    ctx->pc = 0x277aecu;
    // NOP
label_277af0:
    // 0x277af0: 0xef2f  .word       0x0000EF2F                   # dsubu       $sp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277af0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_277af4:
    // 0x277af4: 0x45d0  .word       0x000045D0                   # mfhi        $t0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277af4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_277af8:
    // 0x277af8: 0x0  nop
    ctx->pc = 0x277af8u;
    // NOP
label_277afc:
    // 0x277afc: 0x0  nop
    ctx->pc = 0x277afcu;
    // NOP
label_277b00:
    // 0x277b00: 0xef38  dsll        $sp, $zero, 28
    ctx->pc = 0x277b00u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << 28);
label_277b04:
    // 0x277b04: 0x3430  tge         $zero, $zero, 208
    ctx->pc = 0x277b04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277b08:
    // 0x277b08: 0x0  nop
    ctx->pc = 0x277b08u;
    // NOP
label_277b0c:
    // 0x277b0c: 0x0  nop
    ctx->pc = 0x277b0cu;
    // NOP
label_277b10:
    // 0x277b10: 0xef3f  dsra32      $sp, $zero, 28
    ctx->pc = 0x277b10u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> (32 + 28));
label_277b14:
    // 0x277b14: 0x5660  .word       0x00005660                   # add         $t2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277b14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_277b18:
    // 0x277b18: 0x0  nop
    ctx->pc = 0x277b18u;
    // NOP
label_277b1c:
    // 0x277b1c: 0x0  nop
    ctx->pc = 0x277b1cu;
    // NOP
label_277b20:
    // 0x277b20: 0xef4a  .word       0x0000EF4A                   # movz        $sp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277b20u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 29, GPR_VEC(ctx, 0));
label_277b24:
    // 0x277b24: 0x6750  .word       0x00006750                   # mfhi        $t4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277b24u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_277b28:
    // 0x277b28: 0x0  nop
    ctx->pc = 0x277b28u;
    // NOP
label_277b2c:
    // 0x277b2c: 0x0  nop
    ctx->pc = 0x277b2cu;
    // NOP
label_277b30:
    // 0x277b30: 0xef57  .word       0x0000EF57                   # dsrav       $sp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277b30u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_277b34:
    // 0x277b34: 0x9850  .word       0x00009850                   # mfhi        $s3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277b34u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_277b38:
    // 0x277b38: 0x0  nop
    ctx->pc = 0x277b38u;
    // NOP
label_277b3c:
    // 0x277b3c: 0x0  nop
    ctx->pc = 0x277b3cu;
    // NOP
label_277b40:
    // 0x277b40: 0xef6b  .word       0x0000EF6B                   # sltu        $sp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277b40u;
    SET_GPR_U64(ctx, 29, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_277b44:
    // 0x277b44: 0x9900  sll         $s3, $zero, 4
    ctx->pc = 0x277b44u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_277b48:
    // 0x277b48: 0x0  nop
    ctx->pc = 0x277b48u;
    // NOP
label_277b4c:
    // 0x277b4c: 0x0  nop
    ctx->pc = 0x277b4cu;
    // NOP
label_277b50:
    // 0x277b50: 0xef7f  dsra32      $sp, $zero, 29
    ctx->pc = 0x277b50u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> (32 + 29));
label_277b54:
    // 0x277b54: 0xa530  tge         $zero, $zero, 660
    ctx->pc = 0x277b54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277b58:
    // 0x277b58: 0x0  nop
    ctx->pc = 0x277b58u;
    // NOP
label_277b5c:
    // 0x277b5c: 0x0  nop
    ctx->pc = 0x277b5cu;
    // NOP
label_277b60:
    // 0x277b60: 0xef94  .word       0x0000EF94                   # dsllv       $sp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277b60u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_277b64:
    // 0x277b64: 0x5a00  sll         $t3, $zero, 8
    ctx->pc = 0x277b64u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_277b68:
    // 0x277b68: 0x0  nop
    ctx->pc = 0x277b68u;
    // NOP
label_277b6c:
    // 0x277b6c: 0x0  nop
    ctx->pc = 0x277b6cu;
    // NOP
label_277b70:
    // 0x277b70: 0xefa0  .word       0x0000EFA0                   # add         $sp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277b70u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_277b74:
    // 0x277b74: 0xae80  sll         $s5, $zero, 26
    ctx->pc = 0x277b74u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_277b78:
    // 0x277b78: 0x0  nop
    ctx->pc = 0x277b78u;
    // NOP
label_277b7c:
    // 0x277b7c: 0x0  nop
    ctx->pc = 0x277b7cu;
    // NOP
label_277b80:
    // 0x277b80: 0xefb6  tne         $zero, $zero, 958
    ctx->pc = 0x277b80u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277b84:
    // 0x277b84: 0x55e0  .word       0x000055E0                   # add         $t2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277b84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_277b88:
    // 0x277b88: 0x0  nop
    ctx->pc = 0x277b88u;
    // NOP
label_277b8c:
    // 0x277b8c: 0x0  nop
    ctx->pc = 0x277b8cu;
    // NOP
label_277b90:
    // 0x277b90: 0xefc1  .word       0x0000EFC1                   # INVALID     $zero, $zero, -0x103F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277b90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x277B90 raw=0x0000EFC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277b94:
    // 0x277b94: 0x2620  .word       0x00002620                   # add         $a0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277b94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_277b98:
    // 0x277b98: 0x0  nop
    ctx->pc = 0x277b98u;
    // NOP
label_277b9c:
    // 0x277b9c: 0x0  nop
    ctx->pc = 0x277b9cu;
    // NOP
label_277ba0:
    // 0x277ba0: 0xefc6  .word       0x0000EFC6                   # srlv        $sp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_277ba4:
    // 0x277ba4: 0x31c0  sll         $a2, $zero, 7
    ctx->pc = 0x277ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_277ba8:
    // 0x277ba8: 0x0  nop
    ctx->pc = 0x277ba8u;
    // NOP
label_277bac:
    // 0x277bac: 0x0  nop
    ctx->pc = 0x277bacu;
    // NOP
label_277bb0:
    // 0x277bb0: 0xefcd  break       0, 959
    ctx->pc = 0x277bb0u;
    runtime->handleBreak(rdram, ctx);
label_277bb4:
    // 0x277bb4: 0x4730  tge         $zero, $zero, 284
    ctx->pc = 0x277bb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277bb8:
    // 0x277bb8: 0x0  nop
    ctx->pc = 0x277bb8u;
    // NOP
label_277bbc:
    // 0x277bbc: 0x0  nop
    ctx->pc = 0x277bbcu;
    // NOP
label_277bc0:
    // 0x277bc0: 0xefd6  .word       0x0000EFD6                   # dsrlv       $sp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277bc0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_277bc4:
    // 0x277bc4: 0x60d0  .word       0x000060D0                   # mfhi        $t4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277bc4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_277bc8:
    // 0x277bc8: 0x0  nop
    ctx->pc = 0x277bc8u;
    // NOP
label_277bcc:
    // 0x277bcc: 0x0  nop
    ctx->pc = 0x277bccu;
    // NOP
label_277bd0:
    // 0x277bd0: 0xefe3  .word       0x0000EFE3                   # negu        $sp, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_277bd4:
    // 0x277bd4: 0x6350  .word       0x00006350                   # mfhi        $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277bd4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_277bd8:
    // 0x277bd8: 0x0  nop
    ctx->pc = 0x277bd8u;
    // NOP
label_277bdc:
    // 0x277bdc: 0x0  nop
    ctx->pc = 0x277bdcu;
    // NOP
label_277be0:
    // 0x277be0: 0xeff0  tge         $zero, $zero, 959
    ctx->pc = 0x277be0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277be4:
    // 0x277be4: 0x70a0  .word       0x000070A0                   # add         $t6, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277be4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_277be8:
    // 0x277be8: 0x0  nop
    ctx->pc = 0x277be8u;
    // NOP
label_277bec:
    // 0x277bec: 0x0  nop
    ctx->pc = 0x277becu;
    // NOP
label_277bf0:
    // 0x277bf0: 0xefff  dsra32      $sp, $zero, 31
    ctx->pc = 0x277bf0u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> (32 + 31));
label_277bf4:
    // 0x277bf4: 0x4d90  .word       0x00004D90                   # mfhi        $t1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277bf4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_277bf8:
    // 0x277bf8: 0x0  nop
    ctx->pc = 0x277bf8u;
    // NOP
label_277bfc:
    // 0x277bfc: 0x0  nop
    ctx->pc = 0x277bfcu;
    // NOP
label_277c00:
    // 0x277c00: 0xf009  jalr        $fp, $zero
label_277c04:
    if (ctx->pc == 0x277C04u) {
        ctx->pc = 0x277C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C00u;
        // 0x277c04: 0x89f0  tge         $zero, $zero, 551 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277C08u;
        goto label_277c08;
    }
    ctx->pc = 0x277C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 30, 0x277C08u);
        ctx->pc = 0x277C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C00u;
        // 0x277c04: 0x89f0  tge         $zero, $zero, 551 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277C00u, 0x277C08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277C08u;
label_277c08:
    // 0x277c08: 0x0  nop
    ctx->pc = 0x277c08u;
    // NOP
label_277c0c:
    // 0x277c0c: 0x0  nop
    ctx->pc = 0x277c0cu;
    // NOP
label_277c10:
    // 0x277c10: 0xf01b  divu        $fp, $zero, $zero
    ctx->pc = 0x277c10u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_277c14:
    // 0x277c14: 0x4730  tge         $zero, $zero, 284
    ctx->pc = 0x277c14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277c18:
    // 0x277c18: 0x0  nop
    ctx->pc = 0x277c18u;
    // NOP
label_277c1c:
    // 0x277c1c: 0x0  nop
    ctx->pc = 0x277c1cu;
    // NOP
label_277c20:
    // 0x277c20: 0xf024  and         $fp, $zero, $zero
    ctx->pc = 0x277c20u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_277c24:
    // 0x277c24: 0x31d0  .word       0x000031D0                   # mfhi        $a2 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277c24u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_277c28:
    // 0x277c28: 0x0  nop
    ctx->pc = 0x277c28u;
    // NOP
label_277c2c:
    // 0x277c2c: 0x0  nop
    ctx->pc = 0x277c2cu;
    // NOP
label_277c30:
    // 0x277c30: 0xf02b  sltu        $fp, $zero, $zero
    ctx->pc = 0x277c30u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_277c34:
    // 0x277c34: 0x6900  sll         $t5, $zero, 4
    ctx->pc = 0x277c34u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_277c38:
    // 0x277c38: 0x0  nop
    ctx->pc = 0x277c38u;
    // NOP
label_277c3c:
    // 0x277c3c: 0x0  nop
    ctx->pc = 0x277c3cu;
    // NOP
label_277c40:
    // 0x277c40: 0xf039  .word       0x0000F039                   # INVALID     $zero, $zero, -0xFC7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277c40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x277C40 raw=0x0000F039"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_277c44:
    // 0x277c44: 0x66a0  .word       0x000066A0                   # add         $t4, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277c44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_277c48:
    // 0x277c48: 0x0  nop
    ctx->pc = 0x277c48u;
    // NOP
label_277c4c:
    // 0x277c4c: 0x0  nop
    ctx->pc = 0x277c4cu;
    // NOP
label_277c50:
    // 0x277c50: 0xf046  .word       0x0000F046                   # srlv        $fp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277c50u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_277c54:
    // 0x277c54: 0x46d0  .word       0x000046D0                   # mfhi        $t0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277c54u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_277c58:
    // 0x277c58: 0x0  nop
    ctx->pc = 0x277c58u;
    // NOP
label_277c5c:
    // 0x277c5c: 0x0  nop
    ctx->pc = 0x277c5cu;
    // NOP
label_277c60:
    // 0x277c60: 0xf04f  .word       0x0000F04F                   # sync # 0000F000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277c60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_277c64:
    // 0x277c64: 0x51b0  tge         $zero, $zero, 326
    ctx->pc = 0x277c64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_277c68:
    // 0x277c68: 0x0  nop
    ctx->pc = 0x277c68u;
    // NOP
label_277c6c:
    // 0x277c6c: 0x0  nop
    ctx->pc = 0x277c6cu;
    // NOP
label_277c70:
    // 0x277c70: 0xf05a  .word       0x0000F05A                   # div         $fp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277c70u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_277c74:
    // 0x277c74: 0x4120  .word       0x00004120                   # add         $t0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277c74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_277c78:
    // 0x277c78: 0x0  nop
    ctx->pc = 0x277c78u;
    // NOP
label_277c7c:
    // 0x277c7c: 0x0  nop
    ctx->pc = 0x277c7cu;
    // NOP
    ctx->pc = 0x277c80u;
    return;
}
