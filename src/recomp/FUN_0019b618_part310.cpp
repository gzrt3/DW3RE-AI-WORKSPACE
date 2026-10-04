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


void FUN_0019b618_part310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x232428u: goto label_232428;
        case 0x23242cu: goto label_23242c;
        case 0x232430u: goto label_232430;
        case 0x232434u: goto label_232434;
        case 0x232438u: goto label_232438;
        case 0x23243cu: goto label_23243c;
        case 0x232440u: goto label_232440;
        case 0x232444u: goto label_232444;
        case 0x232448u: goto label_232448;
        case 0x23244cu: goto label_23244c;
        case 0x232450u: goto label_232450;
        case 0x232454u: goto label_232454;
        case 0x232458u: goto label_232458;
        case 0x23245cu: goto label_23245c;
        case 0x232460u: goto label_232460;
        case 0x232464u: goto label_232464;
        case 0x232468u: goto label_232468;
        case 0x23246cu: goto label_23246c;
        case 0x232470u: goto label_232470;
        case 0x232474u: goto label_232474;
        case 0x232478u: goto label_232478;
        case 0x23247cu: goto label_23247c;
        case 0x232480u: goto label_232480;
        case 0x232484u: goto label_232484;
        case 0x232488u: goto label_232488;
        case 0x23248cu: goto label_23248c;
        case 0x232490u: goto label_232490;
        case 0x232494u: goto label_232494;
        case 0x232498u: goto label_232498;
        case 0x23249cu: goto label_23249c;
        case 0x2324a0u: goto label_2324a0;
        case 0x2324a4u: goto label_2324a4;
        case 0x2324a8u: goto label_2324a8;
        case 0x2324acu: goto label_2324ac;
        case 0x2324b0u: goto label_2324b0;
        case 0x2324b4u: goto label_2324b4;
        case 0x2324b8u: goto label_2324b8;
        case 0x2324bcu: goto label_2324bc;
        case 0x2324c0u: goto label_2324c0;
        case 0x2324c4u: goto label_2324c4;
        case 0x2324c8u: goto label_2324c8;
        case 0x2324ccu: goto label_2324cc;
        case 0x2324d0u: goto label_2324d0;
        case 0x2324d4u: goto label_2324d4;
        case 0x2324d8u: goto label_2324d8;
        case 0x2324dcu: goto label_2324dc;
        case 0x2324e0u: goto label_2324e0;
        case 0x2324e4u: goto label_2324e4;
        case 0x2324e8u: goto label_2324e8;
        case 0x2324ecu: goto label_2324ec;
        case 0x2324f0u: goto label_2324f0;
        case 0x2324f4u: goto label_2324f4;
        case 0x2324f8u: goto label_2324f8;
        case 0x2324fcu: goto label_2324fc;
        case 0x232500u: goto label_232500;
        case 0x232504u: goto label_232504;
        case 0x232508u: goto label_232508;
        case 0x23250cu: goto label_23250c;
        case 0x232510u: goto label_232510;
        case 0x232514u: goto label_232514;
        case 0x232518u: goto label_232518;
        case 0x23251cu: goto label_23251c;
        case 0x232520u: goto label_232520;
        case 0x232524u: goto label_232524;
        case 0x232528u: goto label_232528;
        case 0x23252cu: goto label_23252c;
        case 0x232530u: goto label_232530;
        case 0x232534u: goto label_232534;
        case 0x232538u: goto label_232538;
        case 0x23253cu: goto label_23253c;
        case 0x232540u: goto label_232540;
        case 0x232544u: goto label_232544;
        case 0x232548u: goto label_232548;
        case 0x23254cu: goto label_23254c;
        case 0x232550u: goto label_232550;
        case 0x232554u: goto label_232554;
        case 0x232558u: goto label_232558;
        case 0x23255cu: goto label_23255c;
        case 0x232560u: goto label_232560;
        case 0x232564u: goto label_232564;
        case 0x232568u: goto label_232568;
        case 0x23256cu: goto label_23256c;
        case 0x232570u: goto label_232570;
        case 0x232574u: goto label_232574;
        case 0x232578u: goto label_232578;
        case 0x23257cu: goto label_23257c;
        case 0x232580u: goto label_232580;
        case 0x232584u: goto label_232584;
        case 0x232588u: goto label_232588;
        case 0x23258cu: goto label_23258c;
        case 0x232590u: goto label_232590;
        case 0x232594u: goto label_232594;
        case 0x232598u: goto label_232598;
        case 0x23259cu: goto label_23259c;
        case 0x2325a0u: goto label_2325a0;
        case 0x2325a4u: goto label_2325a4;
        case 0x2325a8u: goto label_2325a8;
        case 0x2325acu: goto label_2325ac;
        case 0x2325b0u: goto label_2325b0;
        case 0x2325b4u: goto label_2325b4;
        case 0x2325b8u: goto label_2325b8;
        case 0x2325bcu: goto label_2325bc;
        case 0x2325c0u: goto label_2325c0;
        case 0x2325c4u: goto label_2325c4;
        case 0x2325c8u: goto label_2325c8;
        case 0x2325ccu: goto label_2325cc;
        case 0x2325d0u: goto label_2325d0;
        case 0x2325d4u: goto label_2325d4;
        case 0x2325d8u: goto label_2325d8;
        case 0x2325dcu: goto label_2325dc;
        case 0x2325e0u: goto label_2325e0;
        case 0x2325e4u: goto label_2325e4;
        case 0x2325e8u: goto label_2325e8;
        case 0x2325ecu: goto label_2325ec;
        case 0x2325f0u: goto label_2325f0;
        case 0x2325f4u: goto label_2325f4;
        case 0x2325f8u: goto label_2325f8;
        case 0x2325fcu: goto label_2325fc;
        case 0x232600u: goto label_232600;
        case 0x232604u: goto label_232604;
        case 0x232608u: goto label_232608;
        case 0x23260cu: goto label_23260c;
        case 0x232610u: goto label_232610;
        case 0x232614u: goto label_232614;
        case 0x232618u: goto label_232618;
        case 0x23261cu: goto label_23261c;
        case 0x232620u: goto label_232620;
        case 0x232624u: goto label_232624;
        case 0x232628u: goto label_232628;
        case 0x23262cu: goto label_23262c;
        case 0x232630u: goto label_232630;
        case 0x232634u: goto label_232634;
        case 0x232638u: goto label_232638;
        case 0x23263cu: goto label_23263c;
        case 0x232640u: goto label_232640;
        case 0x232644u: goto label_232644;
        case 0x232648u: goto label_232648;
        case 0x23264cu: goto label_23264c;
        case 0x232650u: goto label_232650;
        case 0x232654u: goto label_232654;
        case 0x232658u: goto label_232658;
        case 0x23265cu: goto label_23265c;
        case 0x232660u: goto label_232660;
        case 0x232664u: goto label_232664;
        case 0x232668u: goto label_232668;
        case 0x23266cu: goto label_23266c;
        case 0x232670u: goto label_232670;
        case 0x232674u: goto label_232674;
        case 0x232678u: goto label_232678;
        case 0x23267cu: goto label_23267c;
        case 0x232680u: goto label_232680;
        case 0x232684u: goto label_232684;
        case 0x232688u: goto label_232688;
        case 0x23268cu: goto label_23268c;
        case 0x232690u: goto label_232690;
        case 0x232694u: goto label_232694;
        case 0x232698u: goto label_232698;
        case 0x23269cu: goto label_23269c;
        case 0x2326a0u: goto label_2326a0;
        case 0x2326a4u: goto label_2326a4;
        case 0x2326a8u: goto label_2326a8;
        case 0x2326acu: goto label_2326ac;
        case 0x2326b0u: goto label_2326b0;
        case 0x2326b4u: goto label_2326b4;
        case 0x2326b8u: goto label_2326b8;
        case 0x2326bcu: goto label_2326bc;
        case 0x2326c0u: goto label_2326c0;
        case 0x2326c4u: goto label_2326c4;
        case 0x2326c8u: goto label_2326c8;
        case 0x2326ccu: goto label_2326cc;
        case 0x2326d0u: goto label_2326d0;
        case 0x2326d4u: goto label_2326d4;
        case 0x2326d8u: goto label_2326d8;
        case 0x2326dcu: goto label_2326dc;
        case 0x2326e0u: goto label_2326e0;
        case 0x2326e4u: goto label_2326e4;
        case 0x2326e8u: goto label_2326e8;
        case 0x2326ecu: goto label_2326ec;
        case 0x2326f0u: goto label_2326f0;
        case 0x2326f4u: goto label_2326f4;
        case 0x2326f8u: goto label_2326f8;
        case 0x2326fcu: goto label_2326fc;
        case 0x232700u: goto label_232700;
        case 0x232704u: goto label_232704;
        case 0x232708u: goto label_232708;
        case 0x23270cu: goto label_23270c;
        case 0x232710u: goto label_232710;
        case 0x232714u: goto label_232714;
        case 0x232718u: goto label_232718;
        case 0x23271cu: goto label_23271c;
        case 0x232720u: goto label_232720;
        case 0x232724u: goto label_232724;
        case 0x232728u: goto label_232728;
        case 0x23272cu: goto label_23272c;
        case 0x232730u: goto label_232730;
        case 0x232734u: goto label_232734;
        case 0x232738u: goto label_232738;
        case 0x23273cu: goto label_23273c;
        case 0x232740u: goto label_232740;
        case 0x232744u: goto label_232744;
        case 0x232748u: goto label_232748;
        case 0x23274cu: goto label_23274c;
        case 0x232750u: goto label_232750;
        case 0x232754u: goto label_232754;
        case 0x232758u: goto label_232758;
        case 0x23275cu: goto label_23275c;
        case 0x232760u: goto label_232760;
        case 0x232764u: goto label_232764;
        case 0x232768u: goto label_232768;
        case 0x23276cu: goto label_23276c;
        case 0x232770u: goto label_232770;
        case 0x232774u: goto label_232774;
        case 0x232778u: goto label_232778;
        case 0x23277cu: goto label_23277c;
        case 0x232780u: goto label_232780;
        case 0x232784u: goto label_232784;
        case 0x232788u: goto label_232788;
        case 0x23278cu: goto label_23278c;
        case 0x232790u: goto label_232790;
        case 0x232794u: goto label_232794;
        case 0x232798u: goto label_232798;
        case 0x23279cu: goto label_23279c;
        case 0x2327a0u: goto label_2327a0;
        case 0x2327a4u: goto label_2327a4;
        case 0x2327a8u: goto label_2327a8;
        case 0x2327acu: goto label_2327ac;
        case 0x2327b0u: goto label_2327b0;
        case 0x2327b4u: goto label_2327b4;
        case 0x2327b8u: goto label_2327b8;
        case 0x2327bcu: goto label_2327bc;
        case 0x2327c0u: goto label_2327c0;
        case 0x2327c4u: goto label_2327c4;
        case 0x2327c8u: goto label_2327c8;
        case 0x2327ccu: goto label_2327cc;
        case 0x2327d0u: goto label_2327d0;
        case 0x2327d4u: goto label_2327d4;
        case 0x2327d8u: goto label_2327d8;
        case 0x2327dcu: goto label_2327dc;
        case 0x2327e0u: goto label_2327e0;
        case 0x2327e4u: goto label_2327e4;
        case 0x2327e8u: goto label_2327e8;
        case 0x2327ecu: goto label_2327ec;
        case 0x2327f0u: goto label_2327f0;
        case 0x2327f4u: goto label_2327f4;
        case 0x2327f8u: goto label_2327f8;
        case 0x2327fcu: goto label_2327fc;
        case 0x232800u: goto label_232800;
        case 0x232804u: goto label_232804;
        case 0x232808u: goto label_232808;
        case 0x23280cu: goto label_23280c;
        case 0x232810u: goto label_232810;
        case 0x232814u: goto label_232814;
        case 0x232818u: goto label_232818;
        case 0x23281cu: goto label_23281c;
        case 0x232820u: goto label_232820;
        case 0x232824u: goto label_232824;
        case 0x232828u: goto label_232828;
        case 0x23282cu: goto label_23282c;
        case 0x232830u: goto label_232830;
        case 0x232834u: goto label_232834;
        case 0x232838u: goto label_232838;
        case 0x23283cu: goto label_23283c;
        case 0x232840u: goto label_232840;
        case 0x232844u: goto label_232844;
        case 0x232848u: goto label_232848;
        case 0x23284cu: goto label_23284c;
        case 0x232850u: goto label_232850;
        case 0x232854u: goto label_232854;
        case 0x232858u: goto label_232858;
        case 0x23285cu: goto label_23285c;
        case 0x232860u: goto label_232860;
        case 0x232864u: goto label_232864;
        case 0x232868u: goto label_232868;
        case 0x23286cu: goto label_23286c;
        case 0x232870u: goto label_232870;
        case 0x232874u: goto label_232874;
        case 0x232878u: goto label_232878;
        case 0x23287cu: goto label_23287c;
        case 0x232880u: goto label_232880;
        case 0x232884u: goto label_232884;
        case 0x232888u: goto label_232888;
        case 0x23288cu: goto label_23288c;
        case 0x232890u: goto label_232890;
        case 0x232894u: goto label_232894;
        case 0x232898u: goto label_232898;
        case 0x23289cu: goto label_23289c;
        case 0x2328a0u: goto label_2328a0;
        case 0x2328a4u: goto label_2328a4;
        case 0x2328a8u: goto label_2328a8;
        case 0x2328acu: goto label_2328ac;
        case 0x2328b0u: goto label_2328b0;
        case 0x2328b4u: goto label_2328b4;
        case 0x2328b8u: goto label_2328b8;
        case 0x2328bcu: goto label_2328bc;
        case 0x2328c0u: goto label_2328c0;
        case 0x2328c4u: goto label_2328c4;
        case 0x2328c8u: goto label_2328c8;
        case 0x2328ccu: goto label_2328cc;
        case 0x2328d0u: goto label_2328d0;
        case 0x2328d4u: goto label_2328d4;
        case 0x2328d8u: goto label_2328d8;
        case 0x2328dcu: goto label_2328dc;
        case 0x2328e0u: goto label_2328e0;
        case 0x2328e4u: goto label_2328e4;
        case 0x2328e8u: goto label_2328e8;
        case 0x2328ecu: goto label_2328ec;
        case 0x2328f0u: goto label_2328f0;
        case 0x2328f4u: goto label_2328f4;
        case 0x2328f8u: goto label_2328f8;
        case 0x2328fcu: goto label_2328fc;
        case 0x232900u: goto label_232900;
        case 0x232904u: goto label_232904;
        case 0x232908u: goto label_232908;
        case 0x23290cu: goto label_23290c;
        case 0x232910u: goto label_232910;
        case 0x232914u: goto label_232914;
        case 0x232918u: goto label_232918;
        case 0x23291cu: goto label_23291c;
        case 0x232920u: goto label_232920;
        case 0x232924u: goto label_232924;
        case 0x232928u: goto label_232928;
        case 0x23292cu: goto label_23292c;
        case 0x232930u: goto label_232930;
        case 0x232934u: goto label_232934;
        case 0x232938u: goto label_232938;
        case 0x23293cu: goto label_23293c;
        case 0x232940u: goto label_232940;
        case 0x232944u: goto label_232944;
        case 0x232948u: goto label_232948;
        case 0x23294cu: goto label_23294c;
        case 0x232950u: goto label_232950;
        case 0x232954u: goto label_232954;
        case 0x232958u: goto label_232958;
        case 0x23295cu: goto label_23295c;
        case 0x232960u: goto label_232960;
        case 0x232964u: goto label_232964;
        case 0x232968u: goto label_232968;
        case 0x23296cu: goto label_23296c;
        case 0x232970u: goto label_232970;
        case 0x232974u: goto label_232974;
        case 0x232978u: goto label_232978;
        case 0x23297cu: goto label_23297c;
        case 0x232980u: goto label_232980;
        case 0x232984u: goto label_232984;
        case 0x232988u: goto label_232988;
        case 0x23298cu: goto label_23298c;
        case 0x232990u: goto label_232990;
        case 0x232994u: goto label_232994;
        case 0x232998u: goto label_232998;
        case 0x23299cu: goto label_23299c;
        case 0x2329a0u: goto label_2329a0;
        case 0x2329a4u: goto label_2329a4;
        case 0x2329a8u: goto label_2329a8;
        case 0x2329acu: goto label_2329ac;
        case 0x2329b0u: goto label_2329b0;
        case 0x2329b4u: goto label_2329b4;
        case 0x2329b8u: goto label_2329b8;
        case 0x2329bcu: goto label_2329bc;
        case 0x2329c0u: goto label_2329c0;
        case 0x2329c4u: goto label_2329c4;
        case 0x2329c8u: goto label_2329c8;
        case 0x2329ccu: goto label_2329cc;
        case 0x2329d0u: goto label_2329d0;
        case 0x2329d4u: goto label_2329d4;
        case 0x2329d8u: goto label_2329d8;
        case 0x2329dcu: goto label_2329dc;
        case 0x2329e0u: goto label_2329e0;
        case 0x2329e4u: goto label_2329e4;
        case 0x2329e8u: goto label_2329e8;
        case 0x2329ecu: goto label_2329ec;
        case 0x2329f0u: goto label_2329f0;
        case 0x2329f4u: goto label_2329f4;
        case 0x2329f8u: goto label_2329f8;
        case 0x2329fcu: goto label_2329fc;
        case 0x232a00u: goto label_232a00;
        case 0x232a04u: goto label_232a04;
        case 0x232a08u: goto label_232a08;
        case 0x232a0cu: goto label_232a0c;
        case 0x232a10u: goto label_232a10;
        case 0x232a14u: goto label_232a14;
        case 0x232a18u: goto label_232a18;
        case 0x232a1cu: goto label_232a1c;
        case 0x232a20u: goto label_232a20;
        case 0x232a24u: goto label_232a24;
        case 0x232a28u: goto label_232a28;
        case 0x232a2cu: goto label_232a2c;
        case 0x232a30u: goto label_232a30;
        case 0x232a34u: goto label_232a34;
        case 0x232a38u: goto label_232a38;
        case 0x232a3cu: goto label_232a3c;
        case 0x232a40u: goto label_232a40;
        case 0x232a44u: goto label_232a44;
        case 0x232a48u: goto label_232a48;
        case 0x232a4cu: goto label_232a4c;
        case 0x232a50u: goto label_232a50;
        case 0x232a54u: goto label_232a54;
        case 0x232a58u: goto label_232a58;
        case 0x232a5cu: goto label_232a5c;
        case 0x232a60u: goto label_232a60;
        case 0x232a64u: goto label_232a64;
        case 0x232a68u: goto label_232a68;
        case 0x232a6cu: goto label_232a6c;
        case 0x232a70u: goto label_232a70;
        case 0x232a74u: goto label_232a74;
        case 0x232a78u: goto label_232a78;
        case 0x232a7cu: goto label_232a7c;
        case 0x232a80u: goto label_232a80;
        case 0x232a84u: goto label_232a84;
        case 0x232a88u: goto label_232a88;
        case 0x232a8cu: goto label_232a8c;
        case 0x232a90u: goto label_232a90;
        case 0x232a94u: goto label_232a94;
        case 0x232a98u: goto label_232a98;
        case 0x232a9cu: goto label_232a9c;
        case 0x232aa0u: goto label_232aa0;
        case 0x232aa4u: goto label_232aa4;
        case 0x232aa8u: goto label_232aa8;
        case 0x232aacu: goto label_232aac;
        case 0x232ab0u: goto label_232ab0;
        case 0x232ab4u: goto label_232ab4;
        case 0x232ab8u: goto label_232ab8;
        case 0x232abcu: goto label_232abc;
        case 0x232ac0u: goto label_232ac0;
        case 0x232ac4u: goto label_232ac4;
        case 0x232ac8u: goto label_232ac8;
        case 0x232accu: goto label_232acc;
        case 0x232ad0u: goto label_232ad0;
        case 0x232ad4u: goto label_232ad4;
        case 0x232ad8u: goto label_232ad8;
        case 0x232adcu: goto label_232adc;
        case 0x232ae0u: goto label_232ae0;
        case 0x232ae4u: goto label_232ae4;
        case 0x232ae8u: goto label_232ae8;
        case 0x232aecu: goto label_232aec;
        case 0x232af0u: goto label_232af0;
        case 0x232af4u: goto label_232af4;
        case 0x232af8u: goto label_232af8;
        case 0x232afcu: goto label_232afc;
        case 0x232b00u: goto label_232b00;
        case 0x232b04u: goto label_232b04;
        case 0x232b08u: goto label_232b08;
        case 0x232b0cu: goto label_232b0c;
        case 0x232b10u: goto label_232b10;
        case 0x232b14u: goto label_232b14;
        case 0x232b18u: goto label_232b18;
        case 0x232b1cu: goto label_232b1c;
        case 0x232b20u: goto label_232b20;
        case 0x232b24u: goto label_232b24;
        case 0x232b28u: goto label_232b28;
        case 0x232b2cu: goto label_232b2c;
        case 0x232b30u: goto label_232b30;
        case 0x232b34u: goto label_232b34;
        case 0x232b38u: goto label_232b38;
        case 0x232b3cu: goto label_232b3c;
        case 0x232b40u: goto label_232b40;
        case 0x232b44u: goto label_232b44;
        case 0x232b48u: goto label_232b48;
        case 0x232b4cu: goto label_232b4c;
        case 0x232b50u: goto label_232b50;
        case 0x232b54u: goto label_232b54;
        case 0x232b58u: goto label_232b58;
        case 0x232b5cu: goto label_232b5c;
        case 0x232b60u: goto label_232b60;
        case 0x232b64u: goto label_232b64;
        case 0x232b68u: goto label_232b68;
        case 0x232b6cu: goto label_232b6c;
        case 0x232b70u: goto label_232b70;
        case 0x232b74u: goto label_232b74;
        case 0x232b78u: goto label_232b78;
        case 0x232b7cu: goto label_232b7c;
        case 0x232b80u: goto label_232b80;
        case 0x232b84u: goto label_232b84;
        case 0x232b88u: goto label_232b88;
        case 0x232b8cu: goto label_232b8c;
        case 0x232b90u: goto label_232b90;
        case 0x232b94u: goto label_232b94;
        case 0x232b98u: goto label_232b98;
        case 0x232b9cu: goto label_232b9c;
        case 0x232ba0u: goto label_232ba0;
        case 0x232ba4u: goto label_232ba4;
        case 0x232ba8u: goto label_232ba8;
        case 0x232bacu: goto label_232bac;
        case 0x232bb0u: goto label_232bb0;
        case 0x232bb4u: goto label_232bb4;
        case 0x232bb8u: goto label_232bb8;
        case 0x232bbcu: goto label_232bbc;
        case 0x232bc0u: goto label_232bc0;
        case 0x232bc4u: goto label_232bc4;
        case 0x232bc8u: goto label_232bc8;
        case 0x232bccu: goto label_232bcc;
        case 0x232bd0u: goto label_232bd0;
        case 0x232bd4u: goto label_232bd4;
        case 0x232bd8u: goto label_232bd8;
        case 0x232bdcu: goto label_232bdc;
        case 0x232be0u: goto label_232be0;
        case 0x232be4u: goto label_232be4;
        case 0x232be8u: goto label_232be8;
        case 0x232becu: goto label_232bec;
        case 0x232bf0u: goto label_232bf0;
        case 0x232bf4u: goto label_232bf4;
        default: return;
    }

label_232428:
    if (ctx->pc == 0x232428u) {
        ctx->pc = 0x232428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232424u;
        // 0x232428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23242Cu;
        goto label_23242c;
    }
    ctx->pc = 0x232424u;
    ctx->pc = 0x232428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232424u;
    // 0x232428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x23242Cu;
label_23242c:
    // 0x23242c: 0x0  nop
    ctx->pc = 0x23242cu;
    // NOP
label_232430:
    // 0x232430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x232430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_232434:
    // 0x232434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_232438:
    // 0x232438: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x232438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23243c:
    // 0x23243c: 0xc06b518  jal         func_1AD460
label_232440:
    if (ctx->pc == 0x232440u) {
        ctx->pc = 0x232440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23243Cu;
        // 0x232440: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232444u;
        goto label_232444;
    }
    ctx->pc = 0x23243Cu;
    SET_GPR_U32(ctx, 31, 0x232444u);
    ctx->pc = 0x232440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23243Cu;
    // 0x232440: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x232444u;
label_232444:
    // 0x232444: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x232444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_232448:
    // 0x232448: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x232448u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_23244c:
    // 0x23244c: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x23244cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
label_232450:
    // 0x232450: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x232450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_232454:
    // 0x232454: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x232454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_232458:
    // 0x232458: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x232458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_23245c:
    // 0x23245c: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x23245cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
label_232460:
    // 0x232460: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x232460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
label_232464:
    // 0x232464: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x232464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_232468:
    // 0x232468: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x232468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
label_23246c:
    // 0x23246c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x23246cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_232470:
    // 0x232470: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x232470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_232474:
    // 0x232474: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x232474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_232478:
    // 0x232478: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x232478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23247c:
    // 0x23247c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23247cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_232480:
    // 0x232480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_232484:
    // 0x232484: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x232484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_232488:
    // 0x232488: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x232488u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_23248c:
    // 0x23248c: 0x806b52a  j           func_1AD4A8
label_232490:
    if (ctx->pc == 0x232490u) {
        ctx->pc = 0x232490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23248Cu;
        // 0x232490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232494u;
        goto label_232494;
    }
    ctx->pc = 0x23248Cu;
    ctx->pc = 0x232490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23248Cu;
    // 0x232490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x232494u;
label_232494:
    // 0x232494: 0x0  nop
    ctx->pc = 0x232494u;
    // NOP
label_232498:
    // 0x232498: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x232498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_23249c:
    // 0x23249c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x23249cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_2324a0:
    // 0x2324a0: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x2324a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
label_2324a4:
    // 0x2324a4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2324a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
label_2324a8:
    // 0x2324a8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2324a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_2324ac:
    // 0x2324ac: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2324acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_2324b0:
    // 0x2324b0: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x2324b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_2324b4:
    // 0x2324b4: 0x3e00008  jr          $ra
label_2324b8:
    if (ctx->pc == 0x2324B8u) {
        ctx->pc = 0x2324B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324B4u;
        // 0x2324b8: 0xfc850000  sd          $a1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2324BCu;
        goto label_2324bc;
    }
    ctx->pc = 0x2324B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2324B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2324B4u;
        // 0x2324b8: 0xfc850000  sd          $a1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2324B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2324BCu;
label_2324bc:
    // 0x2324bc: 0x0  nop
    ctx->pc = 0x2324bcu;
    // NOP
label_2324c0:
    // 0x2324c0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x2324c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_2324c4:
    // 0x2324c4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2324c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2324c8:
    // 0x2324c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2324c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2324cc:
    // 0x2324cc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2324ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_2324d0:
    // 0x2324d0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2324d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_2324d4:
    // 0x2324d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2324d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2324d8:
    // 0x2324d8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2324d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2324dc:
    // 0x2324dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2324dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2324e0:
    // 0x2324e0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2324e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_2324e4:
    // 0x2324e4: 0x752c0  sll         $t2, $a3, 11
    ctx->pc = 0x2324e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
label_2324e8:
    // 0x2324e8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2324e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2324ec:
    // 0x2324ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2324ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2324f0:
    // 0x2324f0: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x2324f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
label_2324f4:
    // 0x2324f4: 0xae0a0018  sw          $t2, 0x18($s0)
    ctx->pc = 0x2324f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 10));
label_2324f8:
    // 0x2324f8: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x2324f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_2324fc:
    // 0x2324fc: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2324fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_232500:
    // 0x232500: 0xae080050  sw          $t0, 0x50($s0)
    ctx->pc = 0x232500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
label_232504:
    // 0x232504: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x232504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
label_232508:
    // 0x232508: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x232508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_23250c:
    // 0x23250c: 0xc069208  jal         func_1A4820
label_232510:
    if (ctx->pc == 0x232510u) {
        ctx->pc = 0x232510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23250Cu;
        // 0x232510: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232514u;
        goto label_232514;
    }
    ctx->pc = 0x23250Cu;
    SET_GPR_U32(ctx, 31, 0x232514u);
    ctx->pc = 0x232510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23250Cu;
    // 0x232510: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x232514u;
label_232514:
    // 0x232514: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x232514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_232518:
    // 0x232518: 0xc08c94e  jal         func_232538
label_23251c:
    if (ctx->pc == 0x23251Cu) {
        ctx->pc = 0x23251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232518u;
        // 0x23251c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232520u;
        goto label_232520;
    }
    ctx->pc = 0x232518u;
    SET_GPR_U32(ctx, 31, 0x232520u);
    ctx->pc = 0x23251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232518u;
    // 0x23251c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232538u;
    goto label_232538;
    ctx->pc = 0x232520u;
label_232520:
    // 0x232520: 0xfe000048  sd          $zero, 0x48($s0)
    ctx->pc = 0x232520u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 0));
label_232524:
    // 0x232524: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x232524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_232528:
    // 0x232528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23252c:
    // 0x23252c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23252cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_232530:
    // 0x232530: 0x3e00008  jr          $ra
label_232534:
    if (ctx->pc == 0x232534u) {
        ctx->pc = 0x232534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232530u;
        // 0x232534: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232538u;
        goto label_232538;
    }
    ctx->pc = 0x232530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232530u;
        // 0x232534: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232538u;
label_232538:
    // 0x232538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23253c:
    // 0x23253c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232540:
    // 0x232540: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_232544:
    // 0x232544: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x232544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_232548:
    // 0x232548: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x232548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23254c:
    // 0x23254c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23254cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232550:
    // 0x232550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_232554:
    // 0x232554: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x232554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_232558:
    // 0x232558: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x232558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_23255c:
    // 0x23255c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x23255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_232560:
    // 0x232560: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x232560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_232564:
    // 0x232564: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x232564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_232568:
    // 0x232568: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x232568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_23256c:
    // 0x23256c: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x23256cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_232570:
    // 0x232570: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_232574:
    if (ctx->pc == 0x232574u) {
        ctx->pc = 0x232574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232570u;
        // 0x232574: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232578u;
        goto label_232578;
    }
    ctx->pc = 0x232570u;
    {
        const bool branch_taken_0x232570 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x232574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232570u;
        // 0x232574: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232570) {
            ctx->pc = 0x2325A4u;
            goto label_2325a4;
        }
    }
    ctx->pc = 0x232578u;
label_232578:
    // 0x232578: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x232578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_23257c:
    // 0x23257c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23257cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_232580:
    // 0x232580: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x232580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_232584:
    // 0x232584: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x232584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_232588:
    // 0x232588: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x232588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_23258c:
    // 0x23258c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x23258cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
label_232590:
    // 0x232590: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x232590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_232594:
    // 0x232594: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x232594u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
label_232598:
    // 0x232598: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x232598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23259c:
    // 0x23259c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2325a0:
    if (ctx->pc == 0x2325A0u) {
        ctx->pc = 0x2325A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23259Cu;
        // 0x2325a0: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2325A4u;
        goto label_2325a4;
    }
    ctx->pc = 0x23259Cu;
    {
        const bool branch_taken_0x23259c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2325A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23259Cu;
        // 0x2325a0: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23259c) {
            ctx->pc = 0x232580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232580;
        }
    }
    ctx->pc = 0x2325A4u;
label_2325a4:
    // 0x2325a4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2325a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2325a8:
    // 0x2325a8: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_2325ac:
    if (ctx->pc == 0x2325ACu) {
        ctx->pc = 0x2325ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2325A8u;
        // 0x2325ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2325B0u;
        goto label_2325b0;
    }
    ctx->pc = 0x2325A8u;
    {
        const bool branch_taken_0x2325a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2325ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2325A8u;
        // 0x2325ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2325a8) {
            ctx->pc = 0x2325F8u;
            goto label_2325f8;
        }
    }
    ctx->pc = 0x2325B0u;
label_2325b0:
    // 0x2325b0: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x2325b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
label_2325b4:
    // 0x2325b4: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x2325b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_2325b8:
    // 0x2325b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2325b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2325bc:
    // 0x2325bc: 0x0  nop
    ctx->pc = 0x2325bcu;
    // NOP
label_2325c0:
    // 0x2325c0: 0x122ac0  sll         $a1, $s2, 11
    ctx->pc = 0x2325c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
label_2325c4:
    // 0x2325c4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2325c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2325c8:
    // 0x2325c8: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x2325c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_2325cc:
    // 0x2325cc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2325ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2325d0:
    // 0x2325d0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2325d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2325d4:
    // 0x2325d4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2325d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2325d8:
    // 0x2325d8: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x2325d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
label_2325dc:
    // 0x2325dc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2325dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2325e0:
    // 0x2325e0: 0xc08c926  jal         func_232498
label_2325e4:
    if (ctx->pc == 0x2325E4u) {
        ctx->pc = 0x2325E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2325E0u;
        // 0x2325e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2325E8u;
        goto label_2325e8;
    }
    ctx->pc = 0x2325E0u;
    SET_GPR_U32(ctx, 31, 0x2325E8u);
    ctx->pc = 0x2325E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2325E0u;
    // 0x2325e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232498u;
    goto label_232498;
    ctx->pc = 0x2325E8u;
label_2325e8:
    // 0x2325e8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2325e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2325ec:
    // 0x2325ec: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2325ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2325f0:
    // 0x2325f0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_2325f4:
    if (ctx->pc == 0x2325F4u) {
        ctx->pc = 0x2325F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2325F0u;
        // 0x2325f4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2325F8u;
        goto label_2325f8;
    }
    ctx->pc = 0x2325F0u;
    {
        const bool branch_taken_0x2325f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2325f0) {
            ctx->pc = 0x2325F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2325F0u;
            // 0x2325f4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2325C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2325c0;
        }
    }
    ctx->pc = 0x2325F8u;
label_2325f8:
    // 0x2325f8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2325f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2325fc:
    // 0x2325fc: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x2325fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
label_232600:
    // 0x232600: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x232600u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_232604:
    // 0x232604: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x232604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_232608:
    // 0x232608: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x232608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_23260c:
    // 0x23260c: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x23260cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
label_232610:
    // 0x232610: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x232610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232614:
    // 0x232614: 0xc08c926  jal         func_232498
label_232618:
    if (ctx->pc == 0x232618u) {
        ctx->pc = 0x232618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232614u;
        // 0x232618: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23261Cu;
        goto label_23261c;
    }
    ctx->pc = 0x232614u;
    SET_GPR_U32(ctx, 31, 0x23261Cu);
    ctx->pc = 0x232618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232614u;
    // 0x232618: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232498u;
    goto label_232498;
    ctx->pc = 0x23261Cu;
label_23261c:
    // 0x23261c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x23261cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_232620:
    // 0x232620: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x232620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_232624:
    // 0x232624: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x232624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_232628:
    // 0x232628: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x232628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23262c:
    // 0x23262c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x23262cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_232630:
    // 0x232630: 0xd03024  and         $a2, $a2, $s0
    ctx->pc = 0x232630u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
label_232634:
    // 0x232634: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x232634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
label_232638:
    // 0x232638: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x232638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_23263c:
    // 0x23263c: 0x34a5b430  ori         $a1, $a1, 0xB430
    ctx->pc = 0x23263cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46128);
label_232640:
    // 0x232640: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x232640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
label_232644:
    // 0x232644: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x232644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_232648:
    // 0x232648: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x232648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23264c:
    // 0x23264c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23264cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_232650:
    // 0x232650: 0xc08c90c  jal         func_232430
label_232654:
    if (ctx->pc == 0x232654u) {
        ctx->pc = 0x232654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232650u;
        // 0x232654: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232658u;
        goto label_232658;
    }
    ctx->pc = 0x232650u;
    SET_GPR_U32(ctx, 31, 0x232658u);
    ctx->pc = 0x232654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232650u;
    // 0x232654: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232430u;
    goto label_232430;
    ctx->pc = 0x232658u;
label_232658:
    // 0x232658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23265c:
    // 0x23265c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23265cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_232660:
    // 0x232660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_232664:
    // 0x232664: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x232664u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_232668:
    // 0x232668: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x232668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23266c:
    // 0x23266c: 0x3e00008  jr          $ra
label_232670:
    if (ctx->pc == 0x232670u) {
        ctx->pc = 0x232670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23266Cu;
        // 0x232670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232674u;
        goto label_232674;
    }
    ctx->pc = 0x23266Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23266Cu;
        // 0x232670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23266Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232674u;
label_232674:
    // 0x232674: 0x0  nop
    ctx->pc = 0x232674u;
    // NOP
label_232678:
    // 0x232678: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23267c:
    // 0x23267c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23267cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_232680:
    // 0x232680: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_232684:
    // 0x232684: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_232688:
    // 0x232688: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x232688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23268c:
    // 0x23268c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23268cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_232690:
    // 0x232690: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x232690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_232694:
    // 0x232694: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x232694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_232698:
    // 0x232698: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x232698u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23269c:
    // 0x23269c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23269cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2326a0:
    // 0x2326a0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2326a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2326a4:
    // 0x2326a4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2326a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2326a8:
    // 0x2326a8: 0xc069218  jal         func_1A4860
label_2326ac:
    if (ctx->pc == 0x2326ACu) {
        ctx->pc = 0x2326ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326A8u;
        // 0x2326ac: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2326B0u;
        goto label_2326b0;
    }
    ctx->pc = 0x2326A8u;
    SET_GPR_U32(ctx, 31, 0x2326B0u);
    ctx->pc = 0x2326ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2326A8u;
    // 0x2326ac: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x2326B0u;
label_2326b0:
    // 0x2326b0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2326b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2326b4:
    // 0x2326b4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2326b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2326b8:
    // 0x2326b8: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2326b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2326bc:
    // 0x2326bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2326bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2326c0:
    // 0x2326c0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2326c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2326c4:
    // 0x2326c4: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x2326c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_2326c8:
    // 0x2326c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2326c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2326cc:
    // 0x2326cc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2326ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2326d0:
    // 0x2326d0: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_2326d4:
    if (ctx->pc == 0x2326D4u) {
        ctx->pc = 0x2326D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326D0u;
        // 0x2326d4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2326D8u;
        goto label_2326d8;
    }
    ctx->pc = 0x2326D0u;
    {
        const bool branch_taken_0x2326d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2326d0) {
            ctx->pc = 0x2326D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2326D0u;
            // 0x2326d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2326D8u;
            goto label_2326d8;
        }
    }
    ctx->pc = 0x2326D8u;
label_2326d8:
    // 0x2326d8: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x2326d8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2326dc:
    // 0x2326dc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2326dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2326e0:
    // 0x2326e0: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x2326e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_2326e4:
    // 0x2326e4: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x2326e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_2326e8:
    // 0x2326e8: 0x462823  subu        $a1, $v0, $a2
    ctx->pc = 0x2326e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2326ec:
    // 0x2326ec: 0x3810  mfhi        $a3
    ctx->pc = 0x2326ecu;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2326f0:
    // 0x2326f0: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x2326f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2326f4:
    // 0x2326f4: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2326f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2326f8:
    // 0x2326f8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2326fc:
    if (ctx->pc == 0x2326FCu) {
        ctx->pc = 0x2326FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2326F8u;
        // 0x2326fc: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232700u;
        goto label_232700;
    }
    ctx->pc = 0x2326F8u;
    {
        const bool branch_taken_0x2326f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2326f8) {
            ctx->pc = 0x2326FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2326F8u;
            // 0x2326fc: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232720u;
            goto label_232720;
        }
    }
    ctx->pc = 0x232700u;
label_232700:
    // 0x232700: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x232700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232704:
    // 0x232704: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x232704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_232708:
    // 0x232708: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x232708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_23270c:
    // 0x23270c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x23270cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_232710:
    // 0x232710: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x232710u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_232714:
    // 0x232714: 0x1000000a  b           . + 4 + (0xA << 2)
label_232718:
    if (ctx->pc == 0x232718u) {
        ctx->pc = 0x232718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232714u;
        // 0x232718: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23271Cu;
        goto label_23271c;
    }
    ctx->pc = 0x232714u;
    {
        const bool branch_taken_0x232714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232714u;
        // 0x232718: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232714) {
            ctx->pc = 0x232740u;
            goto label_232740;
        }
    }
    ctx->pc = 0x23271Cu;
label_23271c:
    // 0x23271c: 0x0  nop
    ctx->pc = 0x23271cu;
    // NOP
label_232720:
    // 0x232720: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x232720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232724:
    // 0x232724: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x232724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_232728:
    // 0x232728: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x232728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_23272c:
    // 0x23272c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x23272cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_232730:
    // 0x232730: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x232730u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_232734:
    // 0x232734: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x232734u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_232738:
    // 0x232738: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x232738u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_23273c:
    // 0x23273c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x23273cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_232740:
    // 0x232740: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x232740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_232744:
    // 0x232744: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_232748:
    // 0x232748: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23274c:
    // 0x23274c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23274cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_232750:
    // 0x232750: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x232750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_232754:
    // 0x232754: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x232754u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_232758:
    // 0x232758: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x232758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23275c:
    // 0x23275c: 0x8069210  j           func_1A4840
label_232760:
    if (ctx->pc == 0x232760u) {
        ctx->pc = 0x232760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23275Cu;
        // 0x232760: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232764u;
        goto label_232764;
    }
    ctx->pc = 0x23275Cu;
    ctx->pc = 0x232760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23275Cu;
    // 0x232760: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x232764u;
label_232764:
    // 0x232764: 0x0  nop
    ctx->pc = 0x232764u;
    // NOP
label_232768:
    // 0x232768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23276c:
    // 0x23276c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23276cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_232770:
    // 0x232770: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_232774:
    // 0x232774: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_232778:
    // 0x232778: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x232778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23277c:
    // 0x23277c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23277cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_232780:
    // 0x232780: 0xc069218  jal         func_1A4860
label_232784:
    if (ctx->pc == 0x232784u) {
        ctx->pc = 0x232784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232780u;
        // 0x232784: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232788u;
        goto label_232788;
    }
    ctx->pc = 0x232780u;
    SET_GPR_U32(ctx, 31, 0x232788u);
    ctx->pc = 0x232784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232780u;
    // 0x232784: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x232788u;
label_232788:
    // 0x232788: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x232788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_23278c:
    // 0x23278c: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x23278cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
label_232790:
    // 0x232790: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x232790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_232794:
    // 0x232794: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x232794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_232798:
    // 0x232798: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x232798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_23279c:
    // 0x23279c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23279cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2327a0:
    // 0x2327a0: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2327a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_2327a4:
    // 0x2327a4: 0xfe020048  sd          $v0, 0x48($s0)
    ctx->pc = 0x2327a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
label_2327a8:
    // 0x2327a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2327a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2327ac:
    // 0x2327ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2327acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2327b0:
    // 0x2327b0: 0x8069210  j           func_1A4840
label_2327b4:
    if (ctx->pc == 0x2327B4u) {
        ctx->pc = 0x2327B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327B0u;
        // 0x2327b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2327B8u;
        goto label_2327b8;
    }
    ctx->pc = 0x2327B0u;
    ctx->pc = 0x2327B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327B0u;
    // 0x2327b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x2327B8u;
label_2327b8:
    // 0x2327b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2327b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2327bc:
    // 0x2327bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2327bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2327c0:
    // 0x2327c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2327c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2327c4:
    // 0x2327c4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2327c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_2327c8:
    // 0x2327c8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2327c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2327cc:
    // 0x2327cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2327ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2327d0:
    // 0x2327d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2327d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2327d4:
    // 0x2327d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2327d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2327d8:
    // 0x2327d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2327d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2327dc:
    // 0x2327dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2327dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2327e0:
    // 0x2327e0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2327e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2327e4:
    // 0x2327e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2327e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2327e8:
    // 0x2327e8: 0xc069218  jal         func_1A4860
label_2327ec:
    if (ctx->pc == 0x2327ECu) {
        ctx->pc = 0x2327ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327E8u;
        // 0x2327ec: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2327F0u;
        goto label_2327f0;
    }
    ctx->pc = 0x2327E8u;
    SET_GPR_U32(ctx, 31, 0x2327F0u);
    ctx->pc = 0x2327ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327E8u;
    // 0x2327ec: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x2327F0u;
label_2327f0:
    // 0x2327f0: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x2327f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2327f4:
    // 0x2327f4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2327f8:
    if (ctx->pc == 0x2327F8u) {
        ctx->pc = 0x2327FCu;
        goto label_2327fc;
    }
    ctx->pc = 0x2327F4u;
    {
        const bool branch_taken_0x2327f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2327f4) {
            ctx->pc = 0x232810u;
            goto label_232810;
        }
    }
    ctx->pc = 0x2327FCu;
label_2327fc:
    // 0x2327fc: 0xc069210  jal         func_1A4840
label_232800:
    if (ctx->pc == 0x232800u) {
        ctx->pc = 0x232800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2327FCu;
        // 0x232800: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232804u;
        goto label_232804;
    }
    ctx->pc = 0x2327FCu;
    SET_GPR_U32(ctx, 31, 0x232804u);
    ctx->pc = 0x232800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2327FCu;
    // 0x232800: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x232804u;
label_232804:
    // 0x232804: 0x10000060  b           . + 4 + (0x60 << 2)
label_232808:
    if (ctx->pc == 0x232808u) {
        ctx->pc = 0x232808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232804u;
        // 0x232808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23280Cu;
        goto label_23280c;
    }
    ctx->pc = 0x232804u;
    {
        const bool branch_taken_0x232804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232804u;
        // 0x232808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232804) {
            ctx->pc = 0x232988u;
            goto label_232988;
        }
    }
    ctx->pc = 0x23280Cu;
label_23280c:
    // 0x23280c: 0x0  nop
    ctx->pc = 0x23280cu;
    // NOP
label_232810:
    // 0x232810: 0xc08c90c  jal         func_232430
label_232814:
    if (ctx->pc == 0x232814u) {
        ctx->pc = 0x232814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232810u;
        // 0x232814: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232818u;
        goto label_232818;
    }
    ctx->pc = 0x232810u;
    SET_GPR_U32(ctx, 31, 0x232818u);
    ctx->pc = 0x232814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232810u;
    // 0x232814: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232430u;
    goto label_232430;
    ctx->pc = 0x232818u;
label_232818:
    // 0x232818: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x232818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_23281c:
    // 0x23281c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x23281cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_232820:
    // 0x232820: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x232820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
label_232824:
    // 0x232824: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x232824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
label_232828:
    // 0x232828: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x232828u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23282c:
    // 0x23282c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23282cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_232830:
    // 0x232830: 0xc08c8e2  jal         func_232388
label_232834:
    if (ctx->pc == 0x232834u) {
        ctx->pc = 0x232834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232830u;
        // 0x232834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232838u;
        goto label_232838;
    }
    ctx->pc = 0x232830u;
    SET_GPR_U32(ctx, 31, 0x232838u);
    ctx->pc = 0x232834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232830u;
    // 0x232834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232388u;
    { ctx->pc = 0x232388; return; }
    ctx->pc = 0x232838u;
label_232838:
    // 0x232838: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x232838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23283c:
    // 0x23283c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x23283cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_232840:
    // 0x232840: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x232840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_232844:
    // 0x232844: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_232848:
    if (ctx->pc == 0x232848u) {
        ctx->pc = 0x232848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232844u;
        // 0x232848: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23284Cu;
        goto label_23284c;
    }
    ctx->pc = 0x232844u;
    {
        const bool branch_taken_0x232844 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x232844) {
            ctx->pc = 0x232848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232844u;
            // 0x232848: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23284Cu;
            goto label_23284c;
        }
    }
    ctx->pc = 0x23284Cu;
label_23284c:
    // 0x23284c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23284cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_232850:
    // 0x232850: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x232850u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_232854:
    // 0x232854: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x232854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_232858:
    // 0x232858: 0x2010  mfhi        $a0
    ctx->pc = 0x232858u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_23285c:
    // 0x23285c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23285cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_232860:
    // 0x232860: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x232860u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_232864:
    // 0x232864: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x232864u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_232868:
    // 0x232868: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x232868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_23286c:
    // 0x23286c: 0x2810  mfhi        $a1
    ctx->pc = 0x23286cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_232870:
    // 0x232870: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x232870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_232874:
    // 0x232874: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x232874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
label_232878:
    // 0x232878: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x232878u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_23287c:
    // 0x23287c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x23287cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_232880:
    // 0x232880: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x232880u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_232884:
    // 0x232884: 0x248507ff  addiu       $a1, $a0, 0x7FF
    ctx->pc = 0x232884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2047));
label_232888:
    // 0x232888: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x232888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23288c:
    // 0x23288c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x23288cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_232890:
    // 0x232890: 0x29ac3  sra         $s3, $v0, 11
    ctx->pc = 0x232890u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 11));
label_232894:
    // 0x232894: 0x131ac0  sll         $v1, $s3, 11
    ctx->pc = 0x232894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
label_232898:
    // 0x232898: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x232898u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_23289c:
    // 0x23289c: 0x8010  mfhi        $s0
    ctx->pc = 0x23289cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2328a0:
    // 0x2328a0: 0x1a600011  blez        $s3, . + 4 + (0x11 << 2)
label_2328a4:
    if (ctx->pc == 0x2328A4u) {
        ctx->pc = 0x2328A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328A0u;
        // 0x2328a4: 0xae240014  sw          $a0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2328A8u;
        goto label_2328a8;
    }
    ctx->pc = 0x2328A0u;
    {
        const bool branch_taken_0x2328a0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2328A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328A0u;
        // 0x2328a4: 0xae240014  sw          $a0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2328a0) {
            ctx->pc = 0x2328E8u;
            goto label_2328e8;
        }
    }
    ctx->pc = 0x2328A8u;
label_2328a8:
    // 0x2328a8: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x2328a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2328ac:
    // 0x2328ac: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2328acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2328b0:
    // 0x2328b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2328b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2328b4:
    // 0x2328b4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_2328b8:
    if (ctx->pc == 0x2328B8u) {
        ctx->pc = 0x2328B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328B4u;
        // 0x2328b8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2328BCu;
        goto label_2328bc;
    }
    ctx->pc = 0x2328B4u;
    {
        const bool branch_taken_0x2328b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2328b4) {
            ctx->pc = 0x2328B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2328B4u;
            // 0x2328b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2328BCu;
            goto label_2328bc;
        }
    }
    ctx->pc = 0x2328BCu;
label_2328bc:
    // 0x2328bc: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x2328bcu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2328c0:
    // 0x2328c0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2328c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2328c4:
    // 0x2328c4: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x2328c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2328c8:
    // 0x2328c8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2328c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2328cc:
    // 0x2328cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2328ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2328d0:
    // 0x2328d0: 0x2010  mfhi        $a0
    ctx->pc = 0x2328d0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2328d4:
    // 0x2328d4: 0x42ac0  sll         $a1, $a0, 11
    ctx->pc = 0x2328d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
label_2328d8:
    // 0x2328d8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2328d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2328dc:
    // 0x2328dc: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x2328dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_2328e0:
    // 0x2328e0: 0xc08c926  jal         func_232498
label_2328e4:
    if (ctx->pc == 0x2328E4u) {
        ctx->pc = 0x2328E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328E0u;
        // 0x2328e4: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2328E8u;
        goto label_2328e8;
    }
    ctx->pc = 0x2328E0u;
    SET_GPR_U32(ctx, 31, 0x2328E8u);
    ctx->pc = 0x2328E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2328E0u;
    // 0x2328e4: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232498u;
    goto label_232498;
    ctx->pc = 0x2328E8u;
label_2328e8:
    // 0x2328e8: 0x1a600018  blez        $s3, . + 4 + (0x18 << 2)
label_2328ec:
    if (ctx->pc == 0x2328ECu) {
        ctx->pc = 0x2328ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328E8u;
        // 0x2328ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2328F0u;
        goto label_2328f0;
    }
    ctx->pc = 0x2328E8u;
    {
        const bool branch_taken_0x2328e8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2328ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2328E8u;
        // 0x2328ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2328e8) {
            ctx->pc = 0x23294Cu;
            goto label_23294c;
        }
    }
    ctx->pc = 0x2328F0u;
label_2328f0:
    // 0x2328f0: 0x2674ffff  addiu       $s4, $s3, -0x1
    ctx->pc = 0x2328f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2328f4:
    // 0x2328f4: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x2328f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2328f8:
    // 0x2328f8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2328f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2328fc:
    // 0x2328fc: 0x2543826  xor         $a3, $s2, $s4
    ctx->pc = 0x2328fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 20));
label_232900:
    // 0x232900: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x232900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_232904:
    // 0x232904: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x232904u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_232908:
    // 0x232908: 0x102ac0  sll         $a1, $s0, 11
    ctx->pc = 0x232908u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
label_23290c:
    // 0x23290c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23290cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232910:
    // 0x232910: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x232910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_232914:
    // 0x232914: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x232914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_232918:
    // 0x232918: 0x2c7300b  movn        $a2, $s6, $a3
    ctx->pc = 0x232918u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 22));
label_23291c:
    // 0x23291c: 0xc08c926  jal         func_232498
label_232920:
    if (ctx->pc == 0x232920u) {
        ctx->pc = 0x232920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23291Cu;
        // 0x232920: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232924u;
        goto label_232924;
    }
    ctx->pc = 0x23291Cu;
    SET_GPR_U32(ctx, 31, 0x232924u);
    ctx->pc = 0x232920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23291Cu;
    // 0x232920: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232498u;
    goto label_232498;
    ctx->pc = 0x232924u;
label_232924:
    // 0x232924: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x232924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_232928:
    // 0x232928: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x232928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23292c:
    // 0x23292c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23292cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_232930:
    // 0x232930: 0x253282a  slt         $a1, $s2, $s3
    ctx->pc = 0x232930u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_232934:
    // 0x232934: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x232934u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_232938:
    // 0x232938: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_23293c:
    if (ctx->pc == 0x23293Cu) {
        ctx->pc = 0x23293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232938u;
        // 0x23293c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x232940u;
        goto label_232940;
    }
    ctx->pc = 0x232938u;
    {
        const bool branch_taken_0x232938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232938) {
            ctx->pc = 0x23293Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232938u;
            // 0x23293c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x232940u;
            goto label_232940;
        }
    }
    ctx->pc = 0x232940u;
label_232940:
    // 0x232940: 0x2010  mfhi        $a0
    ctx->pc = 0x232940u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_232944:
    // 0x232944: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
label_232948:
    if (ctx->pc == 0x232948u) {
        ctx->pc = 0x232948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232944u;
        // 0x232948: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23294Cu;
        goto label_23294c;
    }
    ctx->pc = 0x232944u;
    {
        const bool branch_taken_0x232944 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x232948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232944u;
        // 0x232948: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232944) {
            ctx->pc = 0x2328F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2328f8;
        }
    }
    ctx->pc = 0x23294Cu;
label_23294c:
    // 0x23294c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x23294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_232950:
    // 0x232950: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x232950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_232954:
    // 0x232954: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_232958:
    if (ctx->pc == 0x232958u) {
        ctx->pc = 0x232958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232954u;
        // 0x232958: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23295Cu;
        goto label_23295c;
    }
    ctx->pc = 0x232954u;
    {
        const bool branch_taken_0x232954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232954u;
        // 0x232958: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232954) {
            ctx->pc = 0x23297Cu;
            goto label_23297c;
        }
    }
    ctx->pc = 0x23295Cu;
label_23295c:
    // 0x23295c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_232960:
    if (ctx->pc == 0x232960u) {
        ctx->pc = 0x232960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23295Cu;
        // 0x232960: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232964u;
        goto label_232964;
    }
    ctx->pc = 0x23295Cu;
    {
        const bool branch_taken_0x23295c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x232960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23295Cu;
        // 0x232960: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23295c) {
            ctx->pc = 0x232974u;
            goto label_232974;
        }
    }
    ctx->pc = 0x232964u;
label_232964:
    // 0x232964: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x232964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_232968:
    // 0x232968: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x232968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_23296c:
    // 0x23296c: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x23296cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_232970:
    // 0x232970: 0x43a825  or          $s5, $v0, $v1
    ctx->pc = 0x232970u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_232974:
    // 0x232974: 0xc08c90c  jal         func_232430
label_232978:
    if (ctx->pc == 0x232978u) {
        ctx->pc = 0x232978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232974u;
        // 0x232978: 0x36a40100  ori         $a0, $s5, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23297Cu;
        goto label_23297c;
    }
    ctx->pc = 0x232974u;
    SET_GPR_U32(ctx, 31, 0x23297Cu);
    ctx->pc = 0x232978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232974u;
    // 0x232978: 0x36a40100  ori         $a0, $s5, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x232430u;
    goto label_232430;
    ctx->pc = 0x23297Cu;
label_23297c:
    // 0x23297c: 0xc069210  jal         func_1A4840
label_232980:
    if (ctx->pc == 0x232980u) {
        ctx->pc = 0x232980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23297Cu;
        // 0x232980: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232984u;
        goto label_232984;
    }
    ctx->pc = 0x23297Cu;
    SET_GPR_U32(ctx, 31, 0x232984u);
    ctx->pc = 0x232980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23297Cu;
    // 0x232980: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x232984u;
label_232984:
    // 0x232984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232988:
    // 0x232988: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23298c:
    // 0x23298c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23298cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_232990:
    // 0x232990: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x232990u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_232994:
    // 0x232994: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x232994u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_232998:
    // 0x232998: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x232998u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23299c:
    // 0x23299c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x23299cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2329a0:
    // 0x2329a0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2329a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2329a4:
    // 0x2329a4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2329a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2329a8:
    // 0x2329a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2329a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2329ac:
    // 0x2329ac: 0x3e00008  jr          $ra
label_2329b0:
    if (ctx->pc == 0x2329B0u) {
        ctx->pc = 0x2329B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329ACu;
        // 0x2329b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2329B4u;
        goto label_2329b4;
    }
    ctx->pc = 0x2329ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2329B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329ACu;
        // 0x2329b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2329ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2329B4u;
label_2329b4:
    // 0x2329b4: 0x0  nop
    ctx->pc = 0x2329b4u;
    // NOP
label_2329b8:
    // 0x2329b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2329b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2329bc:
    // 0x2329bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2329bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2329c0:
    // 0x2329c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2329c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2329c4:
    // 0x2329c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2329c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2329c8:
    // 0x2329c8: 0xc069218  jal         func_1A4860
label_2329cc:
    if (ctx->pc == 0x2329CCu) {
        ctx->pc = 0x2329CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329C8u;
        // 0x2329cc: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2329D0u;
        goto label_2329d0;
    }
    ctx->pc = 0x2329C8u;
    SET_GPR_U32(ctx, 31, 0x2329D0u);
    ctx->pc = 0x2329CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2329C8u;
    // 0x2329cc: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x2329D0u;
label_2329d0:
    // 0x2329d0: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2329d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_2329d4:
    // 0x2329d4: 0xc08c90c  jal         func_232430
label_2329d8:
    if (ctx->pc == 0x2329D8u) {
        ctx->pc = 0x2329D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329D4u;
        // 0x2329d8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2329DCu;
        goto label_2329dc;
    }
    ctx->pc = 0x2329D4u;
    SET_GPR_U32(ctx, 31, 0x2329DCu);
    ctx->pc = 0x2329D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2329D4u;
    // 0x2329d8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232430u;
    goto label_232430;
    ctx->pc = 0x2329DCu;
label_2329dc:
    // 0x2329dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2329dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_2329e0:
    // 0x2329e0: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x2329e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
label_2329e4:
    // 0x2329e4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2329e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_2329e8:
    // 0x2329e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2329e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2329ec:
    // 0x2329ec: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x2329ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
label_2329f0:
    // 0x2329f0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2329f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_2329f4:
    // 0x2329f4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2329f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_2329f8:
    // 0x2329f8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2329f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_2329fc:
    // 0x2329fc: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x2329fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
label_232a00:
    // 0x232a00: 0x34c6b400  ori         $a2, $a2, 0xB400
    ctx->pc = 0x232a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46080);
label_232a04:
    // 0x232a04: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x232a04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_232a08:
    // 0x232a08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x232a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_232a0c:
    // 0x232a0c: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x232a0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
label_232a10:
    // 0x232a10: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x232a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_232a14:
    // 0x232a14: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x232a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_232a18:
    // 0x232a18: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x232a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_232a1c:
    // 0x232a1c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x232a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_232a20:
    // 0x232a20: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x232a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_232a24:
    // 0x232a24: 0x0  nop
    ctx->pc = 0x232a24u;
    // NOP
label_232a28:
    // 0x232a28: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x232a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_232a2c:
    // 0x232a2c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x232a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_232a30:
    // 0x232a30: 0x0  nop
    ctx->pc = 0x232a30u;
    // NOP
label_232a34:
    // 0x232a34: 0x0  nop
    ctx->pc = 0x232a34u;
    // NOP
label_232a38:
    // 0x232a38: 0x0  nop
    ctx->pc = 0x232a38u;
    // NOP
label_232a3c:
    // 0x232a3c: 0x0  nop
    ctx->pc = 0x232a3cu;
    // NOP
label_232a40:
    // 0x232a40: 0x0  nop
    ctx->pc = 0x232a40u;
    // NOP
label_232a44:
    // 0x232a44: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_232a48:
    if (ctx->pc == 0x232A48u) {
        ctx->pc = 0x232A4Cu;
        goto label_232a4c;
    }
    ctx->pc = 0x232A44u;
    {
        const bool branch_taken_0x232a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232a44) {
            ctx->pc = 0x232A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232a28;
        }
    }
    ctx->pc = 0x232A4Cu;
label_232a4c:
    // 0x232a4c: 0xc08c8f2  jal         func_2323C8
label_232a50:
    if (ctx->pc == 0x232A50u) {
        ctx->pc = 0x232A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A4Cu;
        // 0x232a50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232A54u;
        goto label_232a54;
    }
    ctx->pc = 0x232A4Cu;
    SET_GPR_U32(ctx, 31, 0x232A54u);
    ctx->pc = 0x232A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A4Cu;
    // 0x232a50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2323C8u;
    { ctx->pc = 0x2323c8; return; }
    ctx->pc = 0x232A54u;
label_232a54:
    // 0x232a54: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x232a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_232a58:
    // 0x232a58: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x232a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
label_232a5c:
    // 0x232a5c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x232a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_232a60:
    // 0x232a60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x232a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_232a64:
    // 0x232a64: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x232a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
label_232a68:
    // 0x232a68: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x232a68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_232a6c:
    // 0x232a6c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x232a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_232a70:
    // 0x232a70: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x232a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
label_232a74:
    // 0x232a74: 0x34c6b000  ori         $a2, $a2, 0xB000
    ctx->pc = 0x232a74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
label_232a78:
    // 0x232a78: 0x34e72020  ori         $a3, $a3, 0x2020
    ctx->pc = 0x232a78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8224);
label_232a7c:
    // 0x232a7c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x232a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_232a80:
    // 0x232a80: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x232a80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_232a84:
    // 0x232a84: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x232a84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
label_232a88:
    // 0x232a88: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x232a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_232a8c:
    // 0x232a8c: 0xae080030  sw          $t0, 0x30($s0)
    ctx->pc = 0x232a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 8));
label_232a90:
    // 0x232a90: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x232a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_232a94:
    // 0x232a94: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x232a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_232a98:
    // 0x232a98: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x232a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_232a9c:
    // 0x232a9c: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x232a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_232aa0:
    // 0x232aa0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x232aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_232aa4:
    // 0x232aa4: 0xc069210  jal         func_1A4840
label_232aa8:
    if (ctx->pc == 0x232AA8u) {
        ctx->pc = 0x232AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AA4u;
        // 0x232aa8: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232AACu;
        goto label_232aac;
    }
    ctx->pc = 0x232AA4u;
    SET_GPR_U32(ctx, 31, 0x232AACu);
    ctx->pc = 0x232AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232AA4u;
    // 0x232aa8: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x232AACu;
label_232aac:
    // 0x232aac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232ab0:
    // 0x232ab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232ab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_232ab4:
    // 0x232ab4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x232ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_232ab8:
    // 0x232ab8: 0x3e00008  jr          $ra
label_232abc:
    if (ctx->pc == 0x232ABCu) {
        ctx->pc = 0x232ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AB8u;
        // 0x232abc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232AC0u;
        goto label_232ac0;
    }
    ctx->pc = 0x232AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AB8u;
        // 0x232abc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232AC0u;
label_232ac0:
    // 0x232ac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x232ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_232ac4:
    // 0x232ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_232ac8:
    // 0x232ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_232acc:
    // 0x232acc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x232accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_232ad0:
    // 0x232ad0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x232ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_232ad4:
    // 0x232ad4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x232ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_232ad8:
    // 0x232ad8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x232ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_232adc:
    // 0x232adc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x232adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_232ae0:
    // 0x232ae0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_232ae4:
    // 0x232ae4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x232ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_232ae8:
    // 0x232ae8: 0xc069218  jal         func_1A4860
label_232aec:
    if (ctx->pc == 0x232AECu) {
        ctx->pc = 0x232AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AE8u;
        // 0x232aec: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232AF0u;
        goto label_232af0;
    }
    ctx->pc = 0x232AE8u;
    SET_GPR_U32(ctx, 31, 0x232AF0u);
    ctx->pc = 0x232AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232AE8u;
    // 0x232aec: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x232AF0u;
label_232af0:
    // 0x232af0: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x232af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_232af4:
    // 0x232af4: 0x8e09001c  lw          $t1, 0x1C($s0)
    ctx->pc = 0x232af4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_232af8:
    // 0x232af8: 0x30820f00  andi        $v0, $a0, 0xF00
    ctx->pc = 0x232af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
label_232afc:
    // 0x232afc: 0x41c02  srl         $v1, $a0, 16
    ctx->pc = 0x232afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
label_232b00:
    // 0x232b00: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x232b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_232b04:
    // 0x232b04: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x232b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_232b08:
    // 0x232b08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x232b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_232b0c:
    // 0x232b0c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x232b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232b10:
    // 0x232b10: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x232b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_232b14:
    // 0x232b14: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x232b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_232b18:
    // 0x232b18: 0x1229023  subu        $s2, $t1, $v0
    ctx->pc = 0x232b18u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_232b1c:
    // 0x232b1c: 0x8e0a0028  lw          $t2, 0x28($s0)
    ctx->pc = 0x232b1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_232b20:
    // 0x232b20: 0x247102b  sltu        $v0, $s2, $a3
    ctx->pc = 0x232b20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_232b24:
    // 0x232b24: 0xa3a821  addu        $s5, $a1, $v1
    ctx->pc = 0x232b24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_232b28:
    // 0x232b28: 0x3096007f  andi        $s6, $a0, 0x7F
    ctx->pc = 0x232b28u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
label_232b2c:
    // 0x232b2c: 0x8e140020  lw          $s4, 0x20($s0)
    ctx->pc = 0x232b2cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_232b30:
    // 0x232b30: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_232b34:
    if (ctx->pc == 0x232B34u) {
        ctx->pc = 0x232B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B30u;
        // 0x232b34: 0x35530100  ori         $s3, $t2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x232B38u;
        goto label_232b38;
    }
    ctx->pc = 0x232B30u;
    {
        const bool branch_taken_0x232b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B30u;
        // 0x232b34: 0x35530100  ori         $s3, $t2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b30) {
            ctx->pc = 0x232BE0u;
            goto label_232be0;
        }
    }
    ctx->pc = 0x232B38u;
label_232b38:
    // 0x232b38: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x232b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_232b3c:
    // 0x232b3c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x232b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_232b40:
    // 0x232b40: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x232b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_232b44:
    // 0x232b44: 0xf22023  subu        $a0, $a3, $s2
    ctx->pc = 0x232b44u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
label_232b48:
    // 0x232b48: 0x642c0  sll         $t0, $a2, 11
    ctx->pc = 0x232b48u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
label_232b4c:
    // 0x232b4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x232b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_232b50:
    // 0x232b50: 0x62a024  and         $s4, $v1, $v0
    ctx->pc = 0x232b50u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_232b54:
    // 0x232b54: 0x4a902  srl         $s5, $a0, 4
    ctx->pc = 0x232b54u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
label_232b58:
    // 0x232b58: 0x11270004  beq         $t1, $a3, . + 4 + (0x4 << 2)
label_232b5c:
    if (ctx->pc == 0x232B5Cu) {
        ctx->pc = 0x232B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B58u;
        // 0x232b5c: 0x2489021  addu        $s2, $s2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232B60u;
        goto label_232b60;
    }
    ctx->pc = 0x232B58u;
    {
        const bool branch_taken_0x232b58 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        ctx->pc = 0x232B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B58u;
        // 0x232b5c: 0x2489021  addu        $s2, $s2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b58) {
            ctx->pc = 0x232B6Cu;
            goto label_232b6c;
        }
    }
    ctx->pc = 0x232B60u;
label_232b60:
    // 0x232b60: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x232b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_232b64:
    // 0x232b64: 0x15220002  bne         $t1, $v0, . + 4 + (0x2 << 2)
label_232b68:
    if (ctx->pc == 0x232B68u) {
        ctx->pc = 0x232B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B64u;
        // 0x232b68: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232B6Cu;
        goto label_232b6c;
    }
    ctx->pc = 0x232B64u;
    {
        const bool branch_taken_0x232b64 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x232B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B64u;
        // 0x232b68: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b64) {
            ctx->pc = 0x232B70u;
            goto label_232b70;
        }
    }
    ctx->pc = 0x232B6Cu;
label_232b6c:
    // 0x232b6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x232b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232b70:
    // 0x232b70: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x232b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_232b74:
    // 0x232b74: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x232b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_232b78:
    // 0x232b78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x232b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_232b7c:
    // 0x232b7c: 0x42700  sll         $a0, $a0, 28
    ctx->pc = 0x232b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 28));
label_232b80:
    // 0x232b80: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x232b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_232b84:
    // 0x232b84: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x232b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
label_232b88:
    // 0x232b88: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x232b88u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_232b8c:
    // 0x232b8c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x232b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_232b90:
    // 0x232b90: 0x34530100  ori         $s3, $v0, 0x100
    ctx->pc = 0x232b90u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_232b94:
    // 0x232b94: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_232b98:
    if (ctx->pc == 0x232B98u) {
        ctx->pc = 0x232B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B94u;
        // 0x232b98: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x232B9Cu;
        goto label_232b9c;
    }
    ctx->pc = 0x232B94u;
    {
        const bool branch_taken_0x232b94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x232b94) {
            ctx->pc = 0x232B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232B94u;
            // 0x232b98: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x232B9Cu;
            goto label_232b9c;
        }
    }
    ctx->pc = 0x232B9Cu;
label_232b9c:
    // 0x232b9c: 0x2810  mfhi        $a1
    ctx->pc = 0x232b9cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_232ba0:
    // 0x232ba0: 0x4a20009  bltzl       $a1, . + 4 + (0x9 << 2)
label_232ba4:
    if (ctx->pc == 0x232BA4u) {
        ctx->pc = 0x232BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BA0u;
        // 0x232ba4: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232BA8u;
        goto label_232ba8;
    }
    ctx->pc = 0x232BA0u;
    {
        const bool branch_taken_0x232ba0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x232ba0) {
            ctx->pc = 0x232BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232BA0u;
            // 0x232ba4: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232BC8u;
            goto label_232bc8;
        }
    }
    ctx->pc = 0x232BA8u;
label_232ba8:
    // 0x232ba8: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_232bac:
    if (ctx->pc == 0x232BACu) {
        ctx->pc = 0x232BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BA8u;
        // 0x232bac: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x232BB0u;
        goto label_232bb0;
    }
    ctx->pc = 0x232BA8u;
    {
        const bool branch_taken_0x232ba8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x232ba8) {
            ctx->pc = 0x232BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232BA8u;
            // 0x232bac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x232BB0u;
            goto label_232bb0;
        }
    }
    ctx->pc = 0x232BB0u;
label_232bb0:
    // 0x232bb0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x232bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_232bb4:
    // 0x232bb4: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x232bb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_232bb8:
    // 0x232bb8: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
label_232bbc:
    if (ctx->pc == 0x232BBCu) {
        ctx->pc = 0x232BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BB8u;
        // 0x232bbc: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232BC0u;
        goto label_232bc0;
    }
    ctx->pc = 0x232BB8u;
    {
        const bool branch_taken_0x232bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232bb8) {
            ctx->pc = 0x232BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232BB8u;
            // 0x232bbc: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232CC8u;
            { ctx->pc = 0x232cc8; return; }
        }
    }
    ctx->pc = 0x232BC0u;
label_232bc0:
    // 0x232bc0: 0x10000002  b           . + 4 + (0x2 << 2)
label_232bc4:
    if (ctx->pc == 0x232BC4u) {
        ctx->pc = 0x232BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BC0u;
        // 0x232bc4: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232BC8u;
        goto label_232bc8;
    }
    ctx->pc = 0x232BC0u;
    {
        const bool branch_taken_0x232bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BC0u;
        // 0x232bc4: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232bc0) {
            ctx->pc = 0x232BCCu;
            goto label_232bcc;
        }
    }
    ctx->pc = 0x232BC8u;
label_232bc8:
    // 0x232bc8: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x232bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_232bcc:
    // 0x232bcc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x232bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_232bd0:
    // 0x232bd0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x232bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_232bd4:
    // 0x232bd4: 0x1000003b  b           . + 4 + (0x3B << 2)
label_232bd8:
    if (ctx->pc == 0x232BD8u) {
        ctx->pc = 0x232BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BD4u;
        // 0x232bd8: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232BDCu;
        goto label_232bdc;
    }
    ctx->pc = 0x232BD4u;
    {
        const bool branch_taken_0x232bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BD4u;
        // 0x232bd8: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232bd4) {
            ctx->pc = 0x232CC4u;
            { ctx->pc = 0x232cc4; return; }
        }
    }
    ctx->pc = 0x232BDCu;
label_232bdc:
    // 0x232bdc: 0x0  nop
    ctx->pc = 0x232bdcu;
    // NOP
label_232be0:
    // 0x232be0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x232be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_232be4:
    // 0x232be4: 0xc08c8e2  jal         func_232388
label_232be8:
    if (ctx->pc == 0x232BE8u) {
        ctx->pc = 0x232BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BE4u;
        // 0x232be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232BECu;
        goto label_232bec;
    }
    ctx->pc = 0x232BE4u;
    SET_GPR_U32(ctx, 31, 0x232BECu);
    ctx->pc = 0x232BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232BE4u;
    // 0x232be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232388u;
    { ctx->pc = 0x232388; return; }
    ctx->pc = 0x232BECu;
label_232bec:
    // 0x232bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232bf0:
    // 0x232bf0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x232bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_232bf4:
    // 0x232bf4: 0xc08c8e2  jal         func_232388
    ctx->pc = 0x232bf8u;
    return;
}
