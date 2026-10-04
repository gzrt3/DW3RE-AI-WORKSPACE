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


void FUN_0017d410_part44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x192400u: goto label_192400;
        case 0x192404u: goto label_192404;
        case 0x192408u: goto label_192408;
        case 0x19240cu: goto label_19240c;
        case 0x192410u: goto label_192410;
        case 0x192414u: goto label_192414;
        case 0x192418u: goto label_192418;
        case 0x19241cu: goto label_19241c;
        case 0x192420u: goto label_192420;
        case 0x192424u: goto label_192424;
        case 0x192428u: goto label_192428;
        case 0x19242cu: goto label_19242c;
        case 0x192430u: goto label_192430;
        case 0x192434u: goto label_192434;
        case 0x192438u: goto label_192438;
        case 0x19243cu: goto label_19243c;
        case 0x192440u: goto label_192440;
        case 0x192444u: goto label_192444;
        case 0x192448u: goto label_192448;
        case 0x19244cu: goto label_19244c;
        case 0x192450u: goto label_192450;
        case 0x192454u: goto label_192454;
        case 0x192458u: goto label_192458;
        case 0x19245cu: goto label_19245c;
        case 0x192460u: goto label_192460;
        case 0x192464u: goto label_192464;
        case 0x192468u: goto label_192468;
        case 0x19246cu: goto label_19246c;
        case 0x192470u: goto label_192470;
        case 0x192474u: goto label_192474;
        case 0x192478u: goto label_192478;
        case 0x19247cu: goto label_19247c;
        case 0x192480u: goto label_192480;
        case 0x192484u: goto label_192484;
        case 0x192488u: goto label_192488;
        case 0x19248cu: goto label_19248c;
        case 0x192490u: goto label_192490;
        case 0x192494u: goto label_192494;
        case 0x192498u: goto label_192498;
        case 0x19249cu: goto label_19249c;
        case 0x1924a0u: goto label_1924a0;
        case 0x1924a4u: goto label_1924a4;
        case 0x1924a8u: goto label_1924a8;
        case 0x1924acu: goto label_1924ac;
        case 0x1924b0u: goto label_1924b0;
        case 0x1924b4u: goto label_1924b4;
        case 0x1924b8u: goto label_1924b8;
        case 0x1924bcu: goto label_1924bc;
        case 0x1924c0u: goto label_1924c0;
        case 0x1924c4u: goto label_1924c4;
        case 0x1924c8u: goto label_1924c8;
        case 0x1924ccu: goto label_1924cc;
        case 0x1924d0u: goto label_1924d0;
        case 0x1924d4u: goto label_1924d4;
        case 0x1924d8u: goto label_1924d8;
        case 0x1924dcu: goto label_1924dc;
        case 0x1924e0u: goto label_1924e0;
        case 0x1924e4u: goto label_1924e4;
        case 0x1924e8u: goto label_1924e8;
        case 0x1924ecu: goto label_1924ec;
        case 0x1924f0u: goto label_1924f0;
        case 0x1924f4u: goto label_1924f4;
        case 0x1924f8u: goto label_1924f8;
        case 0x1924fcu: goto label_1924fc;
        case 0x192500u: goto label_192500;
        case 0x192504u: goto label_192504;
        case 0x192508u: goto label_192508;
        case 0x19250cu: goto label_19250c;
        case 0x192510u: goto label_192510;
        case 0x192514u: goto label_192514;
        case 0x192518u: goto label_192518;
        case 0x19251cu: goto label_19251c;
        case 0x192520u: goto label_192520;
        case 0x192524u: goto label_192524;
        case 0x192528u: goto label_192528;
        case 0x19252cu: goto label_19252c;
        case 0x192530u: goto label_192530;
        case 0x192534u: goto label_192534;
        case 0x192538u: goto label_192538;
        case 0x19253cu: goto label_19253c;
        case 0x192540u: goto label_192540;
        case 0x192544u: goto label_192544;
        case 0x192548u: goto label_192548;
        case 0x19254cu: goto label_19254c;
        case 0x192550u: goto label_192550;
        case 0x192554u: goto label_192554;
        case 0x192558u: goto label_192558;
        case 0x19255cu: goto label_19255c;
        case 0x192560u: goto label_192560;
        case 0x192564u: goto label_192564;
        case 0x192568u: goto label_192568;
        case 0x19256cu: goto label_19256c;
        case 0x192570u: goto label_192570;
        case 0x192574u: goto label_192574;
        case 0x192578u: goto label_192578;
        case 0x19257cu: goto label_19257c;
        case 0x192580u: goto label_192580;
        case 0x192584u: goto label_192584;
        case 0x192588u: goto label_192588;
        case 0x19258cu: goto label_19258c;
        case 0x192590u: goto label_192590;
        case 0x192594u: goto label_192594;
        case 0x192598u: goto label_192598;
        case 0x19259cu: goto label_19259c;
        case 0x1925a0u: goto label_1925a0;
        case 0x1925a4u: goto label_1925a4;
        case 0x1925a8u: goto label_1925a8;
        case 0x1925acu: goto label_1925ac;
        case 0x1925b0u: goto label_1925b0;
        case 0x1925b4u: goto label_1925b4;
        case 0x1925b8u: goto label_1925b8;
        case 0x1925bcu: goto label_1925bc;
        case 0x1925c0u: goto label_1925c0;
        case 0x1925c4u: goto label_1925c4;
        case 0x1925c8u: goto label_1925c8;
        case 0x1925ccu: goto label_1925cc;
        case 0x1925d0u: goto label_1925d0;
        case 0x1925d4u: goto label_1925d4;
        case 0x1925d8u: goto label_1925d8;
        case 0x1925dcu: goto label_1925dc;
        case 0x1925e0u: goto label_1925e0;
        case 0x1925e4u: goto label_1925e4;
        case 0x1925e8u: goto label_1925e8;
        case 0x1925ecu: goto label_1925ec;
        case 0x1925f0u: goto label_1925f0;
        case 0x1925f4u: goto label_1925f4;
        case 0x1925f8u: goto label_1925f8;
        case 0x1925fcu: goto label_1925fc;
        case 0x192600u: goto label_192600;
        case 0x192604u: goto label_192604;
        case 0x192608u: goto label_192608;
        case 0x19260cu: goto label_19260c;
        case 0x192610u: goto label_192610;
        case 0x192614u: goto label_192614;
        case 0x192618u: goto label_192618;
        case 0x19261cu: goto label_19261c;
        case 0x192620u: goto label_192620;
        case 0x192624u: goto label_192624;
        case 0x192628u: goto label_192628;
        case 0x19262cu: goto label_19262c;
        case 0x192630u: goto label_192630;
        case 0x192634u: goto label_192634;
        case 0x192638u: goto label_192638;
        case 0x19263cu: goto label_19263c;
        case 0x192640u: goto label_192640;
        case 0x192644u: goto label_192644;
        case 0x192648u: goto label_192648;
        case 0x19264cu: goto label_19264c;
        case 0x192650u: goto label_192650;
        case 0x192654u: goto label_192654;
        case 0x192658u: goto label_192658;
        case 0x19265cu: goto label_19265c;
        case 0x192660u: goto label_192660;
        case 0x192664u: goto label_192664;
        case 0x192668u: goto label_192668;
        case 0x19266cu: goto label_19266c;
        case 0x192670u: goto label_192670;
        case 0x192674u: goto label_192674;
        case 0x192678u: goto label_192678;
        case 0x19267cu: goto label_19267c;
        case 0x192680u: goto label_192680;
        case 0x192684u: goto label_192684;
        case 0x192688u: goto label_192688;
        case 0x19268cu: goto label_19268c;
        case 0x192690u: goto label_192690;
        case 0x192694u: goto label_192694;
        case 0x192698u: goto label_192698;
        case 0x19269cu: goto label_19269c;
        case 0x1926a0u: goto label_1926a0;
        case 0x1926a4u: goto label_1926a4;
        case 0x1926a8u: goto label_1926a8;
        case 0x1926acu: goto label_1926ac;
        case 0x1926b0u: goto label_1926b0;
        case 0x1926b4u: goto label_1926b4;
        case 0x1926b8u: goto label_1926b8;
        case 0x1926bcu: goto label_1926bc;
        case 0x1926c0u: goto label_1926c0;
        case 0x1926c4u: goto label_1926c4;
        case 0x1926c8u: goto label_1926c8;
        case 0x1926ccu: goto label_1926cc;
        case 0x1926d0u: goto label_1926d0;
        case 0x1926d4u: goto label_1926d4;
        case 0x1926d8u: goto label_1926d8;
        case 0x1926dcu: goto label_1926dc;
        case 0x1926e0u: goto label_1926e0;
        case 0x1926e4u: goto label_1926e4;
        case 0x1926e8u: goto label_1926e8;
        case 0x1926ecu: goto label_1926ec;
        case 0x1926f0u: goto label_1926f0;
        case 0x1926f4u: goto label_1926f4;
        case 0x1926f8u: goto label_1926f8;
        case 0x1926fcu: goto label_1926fc;
        case 0x192700u: goto label_192700;
        case 0x192704u: goto label_192704;
        case 0x192708u: goto label_192708;
        case 0x19270cu: goto label_19270c;
        case 0x192710u: goto label_192710;
        case 0x192714u: goto label_192714;
        case 0x192718u: goto label_192718;
        case 0x19271cu: goto label_19271c;
        case 0x192720u: goto label_192720;
        case 0x192724u: goto label_192724;
        case 0x192728u: goto label_192728;
        case 0x19272cu: goto label_19272c;
        case 0x192730u: goto label_192730;
        case 0x192734u: goto label_192734;
        case 0x192738u: goto label_192738;
        case 0x19273cu: goto label_19273c;
        case 0x192740u: goto label_192740;
        case 0x192744u: goto label_192744;
        case 0x192748u: goto label_192748;
        case 0x19274cu: goto label_19274c;
        case 0x192750u: goto label_192750;
        case 0x192754u: goto label_192754;
        case 0x192758u: goto label_192758;
        case 0x19275cu: goto label_19275c;
        case 0x192760u: goto label_192760;
        case 0x192764u: goto label_192764;
        case 0x192768u: goto label_192768;
        case 0x19276cu: goto label_19276c;
        case 0x192770u: goto label_192770;
        case 0x192774u: goto label_192774;
        case 0x192778u: goto label_192778;
        case 0x19277cu: goto label_19277c;
        case 0x192780u: goto label_192780;
        case 0x192784u: goto label_192784;
        case 0x192788u: goto label_192788;
        case 0x19278cu: goto label_19278c;
        case 0x192790u: goto label_192790;
        case 0x192794u: goto label_192794;
        case 0x192798u: goto label_192798;
        case 0x19279cu: goto label_19279c;
        case 0x1927a0u: goto label_1927a0;
        case 0x1927a4u: goto label_1927a4;
        case 0x1927a8u: goto label_1927a8;
        case 0x1927acu: goto label_1927ac;
        case 0x1927b0u: goto label_1927b0;
        case 0x1927b4u: goto label_1927b4;
        case 0x1927b8u: goto label_1927b8;
        case 0x1927bcu: goto label_1927bc;
        case 0x1927c0u: goto label_1927c0;
        case 0x1927c4u: goto label_1927c4;
        case 0x1927c8u: goto label_1927c8;
        case 0x1927ccu: goto label_1927cc;
        case 0x1927d0u: goto label_1927d0;
        case 0x1927d4u: goto label_1927d4;
        case 0x1927d8u: goto label_1927d8;
        case 0x1927dcu: goto label_1927dc;
        case 0x1927e0u: goto label_1927e0;
        case 0x1927e4u: goto label_1927e4;
        case 0x1927e8u: goto label_1927e8;
        case 0x1927ecu: goto label_1927ec;
        case 0x1927f0u: goto label_1927f0;
        case 0x1927f4u: goto label_1927f4;
        case 0x1927f8u: goto label_1927f8;
        case 0x1927fcu: goto label_1927fc;
        case 0x192800u: goto label_192800;
        case 0x192804u: goto label_192804;
        case 0x192808u: goto label_192808;
        case 0x19280cu: goto label_19280c;
        case 0x192810u: goto label_192810;
        case 0x192814u: goto label_192814;
        case 0x192818u: goto label_192818;
        case 0x19281cu: goto label_19281c;
        case 0x192820u: goto label_192820;
        case 0x192824u: goto label_192824;
        case 0x192828u: goto label_192828;
        case 0x19282cu: goto label_19282c;
        case 0x192830u: goto label_192830;
        case 0x192834u: goto label_192834;
        case 0x192838u: goto label_192838;
        case 0x19283cu: goto label_19283c;
        case 0x192840u: goto label_192840;
        case 0x192844u: goto label_192844;
        case 0x192848u: goto label_192848;
        case 0x19284cu: goto label_19284c;
        case 0x192850u: goto label_192850;
        case 0x192854u: goto label_192854;
        case 0x192858u: goto label_192858;
        case 0x19285cu: goto label_19285c;
        case 0x192860u: goto label_192860;
        case 0x192864u: goto label_192864;
        case 0x192868u: goto label_192868;
        case 0x19286cu: goto label_19286c;
        case 0x192870u: goto label_192870;
        case 0x192874u: goto label_192874;
        case 0x192878u: goto label_192878;
        case 0x19287cu: goto label_19287c;
        case 0x192880u: goto label_192880;
        case 0x192884u: goto label_192884;
        case 0x192888u: goto label_192888;
        case 0x19288cu: goto label_19288c;
        case 0x192890u: goto label_192890;
        case 0x192894u: goto label_192894;
        case 0x192898u: goto label_192898;
        case 0x19289cu: goto label_19289c;
        case 0x1928a0u: goto label_1928a0;
        case 0x1928a4u: goto label_1928a4;
        case 0x1928a8u: goto label_1928a8;
        case 0x1928acu: goto label_1928ac;
        case 0x1928b0u: goto label_1928b0;
        case 0x1928b4u: goto label_1928b4;
        case 0x1928b8u: goto label_1928b8;
        case 0x1928bcu: goto label_1928bc;
        case 0x1928c0u: goto label_1928c0;
        case 0x1928c4u: goto label_1928c4;
        case 0x1928c8u: goto label_1928c8;
        case 0x1928ccu: goto label_1928cc;
        case 0x1928d0u: goto label_1928d0;
        case 0x1928d4u: goto label_1928d4;
        case 0x1928d8u: goto label_1928d8;
        case 0x1928dcu: goto label_1928dc;
        case 0x1928e0u: goto label_1928e0;
        case 0x1928e4u: goto label_1928e4;
        case 0x1928e8u: goto label_1928e8;
        case 0x1928ecu: goto label_1928ec;
        case 0x1928f0u: goto label_1928f0;
        case 0x1928f4u: goto label_1928f4;
        case 0x1928f8u: goto label_1928f8;
        case 0x1928fcu: goto label_1928fc;
        case 0x192900u: goto label_192900;
        case 0x192904u: goto label_192904;
        case 0x192908u: goto label_192908;
        case 0x19290cu: goto label_19290c;
        case 0x192910u: goto label_192910;
        case 0x192914u: goto label_192914;
        case 0x192918u: goto label_192918;
        case 0x19291cu: goto label_19291c;
        case 0x192920u: goto label_192920;
        case 0x192924u: goto label_192924;
        case 0x192928u: goto label_192928;
        case 0x19292cu: goto label_19292c;
        case 0x192930u: goto label_192930;
        case 0x192934u: goto label_192934;
        case 0x192938u: goto label_192938;
        case 0x19293cu: goto label_19293c;
        case 0x192940u: goto label_192940;
        case 0x192944u: goto label_192944;
        case 0x192948u: goto label_192948;
        case 0x19294cu: goto label_19294c;
        case 0x192950u: goto label_192950;
        case 0x192954u: goto label_192954;
        case 0x192958u: goto label_192958;
        case 0x19295cu: goto label_19295c;
        case 0x192960u: goto label_192960;
        case 0x192964u: goto label_192964;
        case 0x192968u: goto label_192968;
        case 0x19296cu: goto label_19296c;
        case 0x192970u: goto label_192970;
        case 0x192974u: goto label_192974;
        case 0x192978u: goto label_192978;
        case 0x19297cu: goto label_19297c;
        case 0x192980u: goto label_192980;
        case 0x192984u: goto label_192984;
        case 0x192988u: goto label_192988;
        case 0x19298cu: goto label_19298c;
        case 0x192990u: goto label_192990;
        case 0x192994u: goto label_192994;
        case 0x192998u: goto label_192998;
        case 0x19299cu: goto label_19299c;
        case 0x1929a0u: goto label_1929a0;
        case 0x1929a4u: goto label_1929a4;
        case 0x1929a8u: goto label_1929a8;
        case 0x1929acu: goto label_1929ac;
        case 0x1929b0u: goto label_1929b0;
        case 0x1929b4u: goto label_1929b4;
        case 0x1929b8u: goto label_1929b8;
        case 0x1929bcu: goto label_1929bc;
        case 0x1929c0u: goto label_1929c0;
        case 0x1929c4u: goto label_1929c4;
        case 0x1929c8u: goto label_1929c8;
        case 0x1929ccu: goto label_1929cc;
        case 0x1929d0u: goto label_1929d0;
        case 0x1929d4u: goto label_1929d4;
        case 0x1929d8u: goto label_1929d8;
        case 0x1929dcu: goto label_1929dc;
        case 0x1929e0u: goto label_1929e0;
        case 0x1929e4u: goto label_1929e4;
        case 0x1929e8u: goto label_1929e8;
        case 0x1929ecu: goto label_1929ec;
        case 0x1929f0u: goto label_1929f0;
        case 0x1929f4u: goto label_1929f4;
        case 0x1929f8u: goto label_1929f8;
        case 0x1929fcu: goto label_1929fc;
        case 0x192a00u: goto label_192a00;
        case 0x192a04u: goto label_192a04;
        case 0x192a08u: goto label_192a08;
        case 0x192a0cu: goto label_192a0c;
        case 0x192a10u: goto label_192a10;
        case 0x192a14u: goto label_192a14;
        case 0x192a18u: goto label_192a18;
        case 0x192a1cu: goto label_192a1c;
        case 0x192a20u: goto label_192a20;
        case 0x192a24u: goto label_192a24;
        case 0x192a28u: goto label_192a28;
        case 0x192a2cu: goto label_192a2c;
        case 0x192a30u: goto label_192a30;
        case 0x192a34u: goto label_192a34;
        case 0x192a38u: goto label_192a38;
        case 0x192a3cu: goto label_192a3c;
        case 0x192a40u: goto label_192a40;
        case 0x192a44u: goto label_192a44;
        case 0x192a48u: goto label_192a48;
        case 0x192a4cu: goto label_192a4c;
        case 0x192a50u: goto label_192a50;
        case 0x192a54u: goto label_192a54;
        case 0x192a58u: goto label_192a58;
        case 0x192a5cu: goto label_192a5c;
        case 0x192a60u: goto label_192a60;
        case 0x192a64u: goto label_192a64;
        case 0x192a68u: goto label_192a68;
        case 0x192a6cu: goto label_192a6c;
        case 0x192a70u: goto label_192a70;
        case 0x192a74u: goto label_192a74;
        case 0x192a78u: goto label_192a78;
        case 0x192a7cu: goto label_192a7c;
        case 0x192a80u: goto label_192a80;
        case 0x192a84u: goto label_192a84;
        case 0x192a88u: goto label_192a88;
        case 0x192a8cu: goto label_192a8c;
        case 0x192a90u: goto label_192a90;
        case 0x192a94u: goto label_192a94;
        case 0x192a98u: goto label_192a98;
        case 0x192a9cu: goto label_192a9c;
        case 0x192aa0u: goto label_192aa0;
        case 0x192aa4u: goto label_192aa4;
        case 0x192aa8u: goto label_192aa8;
        case 0x192aacu: goto label_192aac;
        case 0x192ab0u: goto label_192ab0;
        case 0x192ab4u: goto label_192ab4;
        case 0x192ab8u: goto label_192ab8;
        case 0x192abcu: goto label_192abc;
        case 0x192ac0u: goto label_192ac0;
        case 0x192ac4u: goto label_192ac4;
        case 0x192ac8u: goto label_192ac8;
        case 0x192accu: goto label_192acc;
        case 0x192ad0u: goto label_192ad0;
        case 0x192ad4u: goto label_192ad4;
        case 0x192ad8u: goto label_192ad8;
        case 0x192adcu: goto label_192adc;
        case 0x192ae0u: goto label_192ae0;
        case 0x192ae4u: goto label_192ae4;
        case 0x192ae8u: goto label_192ae8;
        case 0x192aecu: goto label_192aec;
        case 0x192af0u: goto label_192af0;
        case 0x192af4u: goto label_192af4;
        case 0x192af8u: goto label_192af8;
        case 0x192afcu: goto label_192afc;
        case 0x192b00u: goto label_192b00;
        case 0x192b04u: goto label_192b04;
        case 0x192b08u: goto label_192b08;
        case 0x192b0cu: goto label_192b0c;
        case 0x192b10u: goto label_192b10;
        case 0x192b14u: goto label_192b14;
        case 0x192b18u: goto label_192b18;
        case 0x192b1cu: goto label_192b1c;
        case 0x192b20u: goto label_192b20;
        case 0x192b24u: goto label_192b24;
        case 0x192b28u: goto label_192b28;
        case 0x192b2cu: goto label_192b2c;
        case 0x192b30u: goto label_192b30;
        case 0x192b34u: goto label_192b34;
        case 0x192b38u: goto label_192b38;
        case 0x192b3cu: goto label_192b3c;
        case 0x192b40u: goto label_192b40;
        case 0x192b44u: goto label_192b44;
        case 0x192b48u: goto label_192b48;
        case 0x192b4cu: goto label_192b4c;
        case 0x192b50u: goto label_192b50;
        case 0x192b54u: goto label_192b54;
        case 0x192b58u: goto label_192b58;
        case 0x192b5cu: goto label_192b5c;
        case 0x192b60u: goto label_192b60;
        case 0x192b64u: goto label_192b64;
        case 0x192b68u: goto label_192b68;
        case 0x192b6cu: goto label_192b6c;
        case 0x192b70u: goto label_192b70;
        case 0x192b74u: goto label_192b74;
        case 0x192b78u: goto label_192b78;
        case 0x192b7cu: goto label_192b7c;
        case 0x192b80u: goto label_192b80;
        case 0x192b84u: goto label_192b84;
        case 0x192b88u: goto label_192b88;
        case 0x192b8cu: goto label_192b8c;
        case 0x192b90u: goto label_192b90;
        case 0x192b94u: goto label_192b94;
        case 0x192b98u: goto label_192b98;
        case 0x192b9cu: goto label_192b9c;
        case 0x192ba0u: goto label_192ba0;
        case 0x192ba4u: goto label_192ba4;
        case 0x192ba8u: goto label_192ba8;
        case 0x192bacu: goto label_192bac;
        case 0x192bb0u: goto label_192bb0;
        case 0x192bb4u: goto label_192bb4;
        case 0x192bb8u: goto label_192bb8;
        case 0x192bbcu: goto label_192bbc;
        case 0x192bc0u: goto label_192bc0;
        case 0x192bc4u: goto label_192bc4;
        case 0x192bc8u: goto label_192bc8;
        case 0x192bccu: goto label_192bcc;
        default: return;
    }

label_192400:
    // 0x192400: 0x1460ff4f  bnez        $v1, . + 4 + (-0xB1 << 2)
label_192404:
    if (ctx->pc == 0x192404u) {
        ctx->pc = 0x192404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192400u;
        // 0x192404: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192408u;
        goto label_192408;
    }
    ctx->pc = 0x192400u;
    {
        const bool branch_taken_0x192400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x192404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192400u;
        // 0x192404: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192400) {
            ctx->pc = 0x192140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x192140; return; }
        }
    }
    ctx->pc = 0x192408u;
label_192408:
    // 0x192408: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x192408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19240c:
    // 0x19240c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19240cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_192410:
    // 0x192410: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x192410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_192414:
    // 0x192414: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x192414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_192418:
    // 0x192418: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x192418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19241c:
    // 0x19241c: 0x3e00008  jr          $ra
label_192420:
    if (ctx->pc == 0x192420u) {
        ctx->pc = 0x192420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19241Cu;
        // 0x192420: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192424u;
        goto label_192424;
    }
    ctx->pc = 0x19241Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19241Cu;
        // 0x192420: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19241Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192424u;
label_192424:
    // 0x192424: 0x0  nop
    ctx->pc = 0x192424u;
    // NOP
label_192428:
    // 0x192428: 0x0  nop
    ctx->pc = 0x192428u;
    // NOP
label_19242c:
    // 0x19242c: 0x0  nop
    ctx->pc = 0x19242cu;
    // NOP
label_192430:
    // 0x192430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x192430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_192434:
    // 0x192434: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x192434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_192438:
    // 0x192438: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x192438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_19243c:
    // 0x19243c: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x19243cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_192440:
    // 0x192440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_192444:
    // 0x192444: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x192444u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_192448:
    // 0x192448: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x192448u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_19244c:
    // 0x19244c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x19244cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_192450:
    // 0x192450: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x192450u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_192454:
    // 0x192454: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x192454u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_192458:
    // 0x192458: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x192458u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19245c:
    // 0x19245c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x19245cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_192460:
    // 0x192460: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x192460u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_192464:
    // 0x192464: 0xc7b40058  lwc1        $f20, 0x58($sp)
    ctx->pc = 0x192464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_192468:
    // 0x192468: 0x46006706  mov.s       $f28, $f12
    ctx->pc = 0x192468u;
    ctx->f[28] = FPU_MOV_S(ctx->f[12]);
label_19246c:
    // 0x19246c: 0x46006e86  mov.s       $f26, $f13
    ctx->pc = 0x19246cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[13]);
label_192470:
    // 0x192470: 0x46007646  mov.s       $f25, $f14
    ctx->pc = 0x192470u;
    ctx->f[25] = FPU_MOV_S(ctx->f[14]);
label_192474:
    // 0x192474: 0x46007ec6  mov.s       $f27, $f15
    ctx->pc = 0x192474u;
    ctx->f[27] = FPU_MOV_S(ctx->f[15]);
label_192478:
    // 0x192478: 0x46008606  mov.s       $f24, $f16
    ctx->pc = 0x192478u;
    ctx->f[24] = FPU_MOV_S(ctx->f[16]);
label_19247c:
    // 0x19247c: 0x46008dc6  mov.s       $f23, $f17
    ctx->pc = 0x19247cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[17]);
label_192480:
    // 0x192480: 0x46009586  mov.s       $f22, $f18
    ctx->pc = 0x192480u;
    ctx->f[22] = FPU_MOV_S(ctx->f[18]);
label_192484:
    // 0x192484: 0xc066e44  jal         func_19B910
label_192488:
    if (ctx->pc == 0x192488u) {
        ctx->pc = 0x192488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192484u;
        // 0x192488: 0x46009d46  mov.s       $f21, $f19 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[19]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19248Cu;
        goto label_19248c;
    }
    ctx->pc = 0x192484u;
    SET_GPR_U32(ctx, 31, 0x19248Cu);
    ctx->pc = 0x192488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192484u;
    // 0x192488: 0x46009d46  mov.s       $f21, $f19 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[19]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x19248Cu;
label_19248c:
    // 0x19248c: 0x461ca002  mul.s       $f0, $f20, $f28
    ctx->pc = 0x19248cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[28]);
label_192490:
    // 0x192490: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x192490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_192494:
    // 0x192494: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x192494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_192498:
    // 0x192498: 0x46190043  div.s       $f1, $f0, $f25
    ctx->pc = 0x192498u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[25];
label_19249c:
    // 0x19249c: 0x461bc802  mul.s       $f0, $f25, $f27
    ctx->pc = 0x19249cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[27]);
label_1924a0:
    // 0x1924a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1924a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1924a4:
    // 0x1924a4: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1924a4u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
label_1924a8:
    // 0x1924a8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1924a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1924ac:
    // 0x1924ac: 0x461aa002  mul.s       $f0, $f20, $f26
    ctx->pc = 0x1924acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[26]);
label_1924b0:
    // 0x1924b0: 0x46190043  div.s       $f1, $f0, $f25
    ctx->pc = 0x1924b0u;
    if (ctx->f[25] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[25];
label_1924b4:
    // 0x1924b4: 0x4618c802  mul.s       $f0, $f25, $f24
    ctx->pc = 0x1924b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[24]);
label_1924b8:
    // 0x1924b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1924b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1924bc:
    // 0x1924bc: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1924bcu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
label_1924c0:
    // 0x1924c0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1924c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_1924c4:
    // 0x1924c4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1924c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1924c8:
    // 0x1924c8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1924c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1924cc:
    // 0x1924cc: 0x0  nop
    ctx->pc = 0x1924ccu;
    // NOP
label_1924d0:
    // 0x1924d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1924d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1924d4:
    // 0x1924d4: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1924d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1924d8:
    // 0x1924d8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1924d8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1924dc:
    // 0x1924dc: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1924dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_1924e0:
    // 0x1924e0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1924e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1924e4:
    // 0x1924e4: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1924e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1924e8:
    // 0x1924e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1924e8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1924ec:
    // 0x1924ec: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1924ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1924f0:
    // 0x1924f0: 0xe6170030  swc1        $f23, 0x30($s0)
    ctx->pc = 0x1924f0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1924f4:
    // 0x1924f4: 0xe6160034  swc1        $f22, 0x34($s0)
    ctx->pc = 0x1924f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1924f8:
    // 0x1924f8: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1924f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
label_1924fc:
    // 0x1924fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1924fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_192500:
    // 0x192500: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x192500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_192504:
    // 0x192504: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x192504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_192508:
    // 0x192508: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x192508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_19250c:
    // 0x19250c: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x19250cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_192510:
    // 0x192510: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x192510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_192514:
    // 0x192514: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x192514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_192518:
    // 0x192518: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x192518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_19251c:
    // 0x19251c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x19251cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_192520:
    // 0x192520: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x192520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_192524:
    // 0x192524: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x192524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_192528:
    // 0x192528: 0x3e00008  jr          $ra
label_19252c:
    if (ctx->pc == 0x19252Cu) {
        ctx->pc = 0x19252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192528u;
        // 0x19252c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192530u;
        goto label_192530;
    }
    ctx->pc = 0x192528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192528u;
        // 0x19252c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192530u;
label_192530:
    // 0x192530: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x192530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_192534:
    // 0x192534: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x192534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_192538:
    // 0x192538: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x192538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_19253c:
    // 0x19253c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x19253cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_192540:
    // 0x192540: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_192544:
    // 0x192544: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x192544u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_192548:
    // 0x192548: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x192548u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19254c:
    // 0x19254c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x19254cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_192550:
    // 0x192550: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x192550u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_192554:
    // 0x192554: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x192554u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
label_192558:
    // 0x192558: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x192558u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
label_19255c:
    // 0x19255c: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x19255cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_192560:
    // 0x192560: 0x46007d46  mov.s       $f21, $f15
    ctx->pc = 0x192560u;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
label_192564:
    // 0x192564: 0xc066e44  jal         func_19B910
label_192568:
    if (ctx->pc == 0x192568u) {
        ctx->pc = 0x192568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192564u;
        // 0x192568: 0x46008506  mov.s       $f20, $f16 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19256Cu;
        goto label_19256c;
    }
    ctx->pc = 0x192564u;
    SET_GPR_U32(ctx, 31, 0x19256Cu);
    ctx->pc = 0x192568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192564u;
    // 0x192568: 0x46008506  mov.s       $f20, $f16 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[16]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x19256Cu;
label_19256c:
    // 0x19256c: 0x0  nop
    ctx->pc = 0x19256cu;
    // NOP
label_192570:
    // 0x192570: 0x0  nop
    ctx->pc = 0x192570u;
    // NOP
label_192574:
    // 0x192574: 0x4618b043  div.s       $f1, $f22, $f24
    ctx->pc = 0x192574u;
    if (ctx->f[24] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[1] = ctx->f[22] / ctx->f[24];
label_192578:
    // 0x192578: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x192578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_19257c:
    // 0x19257c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x19257cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_192580:
    // 0x192580: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x192580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_192584:
    // 0x192584: 0x4617b003  div.s       $f0, $f22, $f23
    ctx->pc = 0x192584u;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[23];
label_192588:
    // 0x192588: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x192588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_19258c:
    // 0x19258c: 0x4615a042  mul.s       $f1, $f20, $f21
    ctx->pc = 0x19258cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
label_192590:
    // 0x192590: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x192590u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192594:
    // 0x192594: 0x4615a080  add.s       $f2, $f20, $f21
    ctx->pc = 0x192594u;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
label_192598:
    // 0x192598: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x192598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19259c:
    // 0x19259c: 0x4615a0c1  sub.s       $f3, $f20, $f21
    ctx->pc = 0x19259cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_1925a0:
    // 0x1925a0: 0x46031043  div.s       $f1, $f2, $f3
    ctx->pc = 0x1925a0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[3];
label_1925a4:
    // 0x1925a4: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1925a4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_1925a8:
    // 0x1925a8: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x1925a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_1925ac:
    // 0x1925ac: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1925acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1925b0:
    // 0x1925b0: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1925b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_1925b4:
    // 0x1925b4: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1925b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_1925b8:
    // 0x1925b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1925b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1925bc:
    // 0x1925bc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1925bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1925c0:
    // 0x1925c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1925c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1925c4:
    // 0x1925c4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1925c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1925c8:
    // 0x1925c8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1925c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1925cc:
    // 0x1925cc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1925ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1925d0:
    // 0x1925d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1925d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1925d4:
    // 0x1925d4: 0x3e00008  jr          $ra
label_1925d8:
    if (ctx->pc == 0x1925D8u) {
        ctx->pc = 0x1925D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925D4u;
        // 0x1925d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1925DCu;
        goto label_1925dc;
    }
    ctx->pc = 0x1925D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1925D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925D4u;
        // 0x1925d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1925D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1925DCu;
label_1925dc:
    // 0x1925dc: 0x0  nop
    ctx->pc = 0x1925dcu;
    // NOP
label_1925e0:
    // 0x1925e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1925e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1925e4:
    // 0x1925e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1925e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1925e8:
    // 0x1925e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1925e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1925ec:
    // 0x1925ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1925ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1925f0:
    // 0x1925f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1925f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1925f4:
    // 0x1925f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1925f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1925f8:
    // 0x1925f8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1925f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1925fc:
    // 0x1925fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1925fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_192600:
    // 0x192600: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x192600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_192604:
    // 0x192604: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_192608:
    // 0x192608: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x192608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19260c:
    // 0x19260c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19260cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_192610:
    // 0x192610: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x192610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_192614:
    // 0x192614: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x192614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_192618:
    // 0x192618: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x192618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19261c:
    // 0x19261c: 0xc0434f4  jal         func_10D3D0
label_192620:
    if (ctx->pc == 0x192620u) {
        ctx->pc = 0x192620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19261Cu;
        // 0x192620: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192624u;
        goto label_192624;
    }
    ctx->pc = 0x19261Cu;
    SET_GPR_U32(ctx, 31, 0x192624u);
    ctx->pc = 0x192620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19261Cu;
    // 0x192620: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D3D0u, 0x19261Cu, 0x192624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192624u;
label_192624:
    // 0x192624: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x192624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_192628:
    // 0x192628: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x192628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_19262c:
    // 0x19262c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19262cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_192630:
    // 0x192630: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x192630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_192634:
    // 0x192634: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x192634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_192638:
    // 0x192638: 0xc042704  jal         func_109C10
label_19263c:
    if (ctx->pc == 0x19263Cu) {
        ctx->pc = 0x19263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192638u;
        // 0x19263c: 0x27a800ac  addiu       $t0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192640u;
        goto label_192640;
    }
    ctx->pc = 0x192638u;
    SET_GPR_U32(ctx, 31, 0x192640u);
    ctx->pc = 0x19263Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192638u;
    // 0x19263c: 0x27a800ac  addiu       $t0, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109C10u, 0x192638u, 0x192640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192640u;
label_192640:
    // 0x192640: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_192644:
    if (ctx->pc == 0x192644u) {
        ctx->pc = 0x192648u;
        goto label_192648;
    }
    ctx->pc = 0x192640u;
    {
        const bool branch_taken_0x192640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192640) {
            ctx->pc = 0x1926A8u;
            goto label_1926a8;
        }
    }
    ctx->pc = 0x192648u;
label_192648:
    // 0x192648: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x192648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_19264c:
    // 0x19264c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_192650:
    if (ctx->pc == 0x192650u) {
        ctx->pc = 0x192654u;
        goto label_192654;
    }
    ctx->pc = 0x19264Cu;
    {
        const bool branch_taken_0x19264c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19264c) {
            ctx->pc = 0x1926A8u;
            goto label_1926a8;
        }
    }
    ctx->pc = 0x192654u;
label_192654:
    // 0x192654: 0x94440056  lhu         $a0, 0x56($v0)
    ctx->pc = 0x192654u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 86)));
label_192658:
    // 0x192658: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x192658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
label_19265c:
    // 0x19265c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_192660:
    if (ctx->pc == 0x192660u) {
        ctx->pc = 0x192660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19265Cu;
        // 0x192660: 0x30830400  andi        $v1, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x192664u;
        goto label_192664;
    }
    ctx->pc = 0x19265Cu;
    {
        const bool branch_taken_0x19265c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x192660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19265Cu;
        // 0x192660: 0x30830400  andi        $v1, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19265c) {
            ctx->pc = 0x1926A8u;
            goto label_1926a8;
        }
    }
    ctx->pc = 0x192664u;
label_192664:
    // 0x192664: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_192668:
    if (ctx->pc == 0x192668u) {
        ctx->pc = 0x19266Cu;
        goto label_19266c;
    }
    ctx->pc = 0x192664u;
    {
        const bool branch_taken_0x192664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x192664) {
            ctx->pc = 0x192670u;
            goto label_192670;
        }
    }
    ctx->pc = 0x19266Cu;
label_19266c:
    // 0x19266c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x19266cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_192670:
    // 0x192670: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_192674:
    if (ctx->pc == 0x192674u) {
        ctx->pc = 0x192678u;
        goto label_192678;
    }
    ctx->pc = 0x192670u;
    {
        const bool branch_taken_0x192670 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x192670) {
            ctx->pc = 0x192680u;
            goto label_192680;
        }
    }
    ctx->pc = 0x192678u;
label_192678:
    // 0x192678: 0x1000000b  b           . + 4 + (0xB << 2)
label_19267c:
    if (ctx->pc == 0x19267Cu) {
        ctx->pc = 0x19267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192678u;
        // 0x19267c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192680u;
        goto label_192680;
    }
    ctx->pc = 0x192678u;
    {
        const bool branch_taken_0x192678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192678u;
        // 0x19267c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192678) {
            ctx->pc = 0x1926A8u;
            goto label_1926a8;
        }
    }
    ctx->pc = 0x192680u;
label_192680:
    // 0x192680: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x192680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_192684:
    // 0x192684: 0x3c0343e8  lui         $v1, 0x43E8
    ctx->pc = 0x192684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17384 << 16));
label_192688:
    // 0x192688: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x192688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_19268c:
    // 0x19268c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19268cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192690:
    // 0x192690: 0x0  nop
    ctx->pc = 0x192690u;
    // NOP
label_192694:
    // 0x192694: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_192698:
    // 0x192698: 0x0  nop
    ctx->pc = 0x192698u;
    // NOP
label_19269c:
    // 0x19269c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1926a0:
    if (ctx->pc == 0x1926A0u) {
        ctx->pc = 0x1926A4u;
        goto label_1926a4;
    }
    ctx->pc = 0x19269Cu;
    {
        const bool branch_taken_0x19269c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19269c) {
            ctx->pc = 0x1926A8u;
            goto label_1926a8;
        }
    }
    ctx->pc = 0x1926A4u;
label_1926a4:
    // 0x1926a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1926a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1926a8:
    // 0x1926a8: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
label_1926ac:
    if (ctx->pc == 0x1926ACu) {
        ctx->pc = 0x1926B0u;
        goto label_1926b0;
    }
    ctx->pc = 0x1926A8u;
    {
        const bool branch_taken_0x1926a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1926a8) {
            ctx->pc = 0x19279Cu;
            goto label_19279c;
        }
    }
    ctx->pc = 0x1926B0u;
label_1926b0:
    // 0x1926b0: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_1926b4:
    if (ctx->pc == 0x1926B4u) {
        ctx->pc = 0x1926B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926B0u;
        // 0x1926b4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1926B8u;
        goto label_1926b8;
    }
    ctx->pc = 0x1926B0u;
    {
        const bool branch_taken_0x1926b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1926B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926B0u;
        // 0x1926b4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926b0) {
            ctx->pc = 0x19279Cu;
            goto label_19279c;
        }
    }
    ctx->pc = 0x1926B8u;
label_1926b8:
    // 0x1926b8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1926b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1926bc:
    // 0x1926bc: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1926bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1926c0:
    // 0x1926c0: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1926c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1926c4:
    // 0x1926c4: 0x4a0002ff  vnop
    ctx->pc = 0x1926c4u;
    // NOP operation, no action needed for VU0
label_1926c8:
    // 0x1926c8: 0x4a0002ff  vnop
    ctx->pc = 0x1926c8u;
    // NOP operation, no action needed for VU0
label_1926cc:
    // 0x1926cc: 0x4a0002ff  vnop
    ctx->pc = 0x1926ccu;
    // NOP operation, no action needed for VU0
label_1926d0:
    // 0x1926d0: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x1926d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1926d4:
    // 0x1926d4: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x1926d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1926d8:
    // 0x1926d8: 0x4a0002ff  vnop
    ctx->pc = 0x1926d8u;
    // NOP operation, no action needed for VU0
label_1926dc:
    // 0x1926dc: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x1926dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1926e0:
    // 0x1926e0: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x1926e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1926e4:
    // 0x1926e4: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x1926e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1926e8:
    // 0x1926e8: 0x4a0002ff  vnop
    ctx->pc = 0x1926e8u;
    // NOP operation, no action needed for VU0
label_1926ec:
    // 0x1926ec: 0x4a0002ff  vnop
    ctx->pc = 0x1926ecu;
    // NOP operation, no action needed for VU0
label_1926f0:
    // 0x1926f0: 0x4a0002ff  vnop
    ctx->pc = 0x1926f0u;
    // NOP operation, no action needed for VU0
label_1926f4:
    // 0x1926f4: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1926f4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1926f8:
    // 0x1926f8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1926f8u;
    // VWAITQ (Q already resolved in this runtime)
label_1926fc:
    // 0x1926fc: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x1926fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_192700:
    // 0x192700: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x192700u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192704:
    // 0x192704: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x192704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_192708:
    // 0x192708: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x192708u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19270c:
    // 0x19270c: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x19270cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_192710:
    // 0x192710: 0x4a0002ff  vnop
    ctx->pc = 0x192710u;
    // NOP operation, no action needed for VU0
label_192714:
    // 0x192714: 0x4a0002ff  vnop
    ctx->pc = 0x192714u;
    // NOP operation, no action needed for VU0
label_192718:
    // 0x192718: 0x4a0002ff  vnop
    ctx->pc = 0x192718u;
    // NOP operation, no action needed for VU0
label_19271c:
    // 0x19271c: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x19271cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_192720:
    // 0x192720: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x192720u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_192724:
    // 0x192724: 0x4a0002ff  vnop
    ctx->pc = 0x192724u;
    // NOP operation, no action needed for VU0
label_192728:
    // 0x192728: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x192728u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_19272c:
    // 0x19272c: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x19272cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_192730:
    // 0x192730: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x192730u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_192734:
    // 0x192734: 0x4a0002ff  vnop
    ctx->pc = 0x192734u;
    // NOP operation, no action needed for VU0
label_192738:
    // 0x192738: 0x4a0002ff  vnop
    ctx->pc = 0x192738u;
    // NOP operation, no action needed for VU0
label_19273c:
    // 0x19273c: 0x4a0002ff  vnop
    ctx->pc = 0x19273cu;
    // NOP operation, no action needed for VU0
label_192740:
    // 0x192740: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x192740u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_192744:
    // 0x192744: 0x4a0003bf  vwaitq
    ctx->pc = 0x192744u;
    // VWAITQ (Q already resolved in this runtime)
label_192748:
    // 0x192748: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x192748u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_19274c:
    // 0x19274c: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x19274cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_192750:
    // 0x192750: 0x0  nop
    ctx->pc = 0x192750u;
    // NOP
label_192754:
    // 0x192754: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x192754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_192758:
    // 0x192758: 0x0  nop
    ctx->pc = 0x192758u;
    // NOP
label_19275c:
    // 0x19275c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_192760:
    if (ctx->pc == 0x192760u) {
        ctx->pc = 0x192760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19275Cu;
        // 0x192760: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192764u;
        goto label_192764;
    }
    ctx->pc = 0x19275Cu;
    {
        const bool branch_taken_0x19275c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x192760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19275Cu;
        // 0x192760: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19275c) {
            ctx->pc = 0x192780u;
            goto label_192780;
        }
    }
    ctx->pc = 0x192764u;
label_192764:
    // 0x192764: 0xc066e26  jal         func_19B898
label_192768:
    if (ctx->pc == 0x192768u) {
        ctx->pc = 0x192768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192764u;
        // 0x192768: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19276Cu;
        goto label_19276c;
    }
    ctx->pc = 0x192764u;
    SET_GPR_U32(ctx, 31, 0x19276Cu);
    ctx->pc = 0x192768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192764u;
    // 0x192768: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x19276Cu;
label_19276c:
    // 0x19276c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19276cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_192770:
    // 0x192770: 0xc066e26  jal         func_19B898
label_192774:
    if (ctx->pc == 0x192774u) {
        ctx->pc = 0x192774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192770u;
        // 0x192774: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192778u;
        goto label_192778;
    }
    ctx->pc = 0x192770u;
    SET_GPR_U32(ctx, 31, 0x192778u);
    ctx->pc = 0x192774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192770u;
    // 0x192774: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x192778u;
label_192778:
    // 0x192778: 0x1000001a  b           . + 4 + (0x1A << 2)
label_19277c:
    if (ctx->pc == 0x19277Cu) {
        ctx->pc = 0x19277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192778u;
        // 0x19277c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192780u;
        goto label_192780;
    }
    ctx->pc = 0x192778u;
    {
        const bool branch_taken_0x192778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192778u;
        // 0x19277c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192778) {
            ctx->pc = 0x1927E4u;
            goto label_1927e4;
        }
    }
    ctx->pc = 0x192780u;
label_192780:
    // 0x192780: 0xc066e26  jal         func_19B898
label_192784:
    if (ctx->pc == 0x192784u) {
        ctx->pc = 0x192784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192780u;
        // 0x192784: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192788u;
        goto label_192788;
    }
    ctx->pc = 0x192780u;
    SET_GPR_U32(ctx, 31, 0x192788u);
    ctx->pc = 0x192784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192780u;
    // 0x192784: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x192788u;
label_192788:
    // 0x192788: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19278c:
    // 0x19278c: 0xc066e26  jal         func_19B898
label_192790:
    if (ctx->pc == 0x192790u) {
        ctx->pc = 0x192790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19278Cu;
        // 0x192790: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192794u;
        goto label_192794;
    }
    ctx->pc = 0x19278Cu;
    SET_GPR_U32(ctx, 31, 0x192794u);
    ctx->pc = 0x192790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19278Cu;
    // 0x192790: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x192794u;
label_192794:
    // 0x192794: 0x10000012  b           . + 4 + (0x12 << 2)
label_192798:
    if (ctx->pc == 0x192798u) {
        ctx->pc = 0x19279Cu;
        goto label_19279c;
    }
    ctx->pc = 0x192794u;
    {
        const bool branch_taken_0x192794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192794) {
            ctx->pc = 0x1927E0u;
            goto label_1927e0;
        }
    }
    ctx->pc = 0x19279Cu;
label_19279c:
    // 0x19279c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1927a0:
    if (ctx->pc == 0x1927A0u) {
        ctx->pc = 0x1927A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19279Cu;
        // 0x1927a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1927A4u;
        goto label_1927a4;
    }
    ctx->pc = 0x19279Cu;
    {
        const bool branch_taken_0x19279c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1927A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19279Cu;
        // 0x1927a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19279c) {
            ctx->pc = 0x1927C4u;
            goto label_1927c4;
        }
    }
    ctx->pc = 0x1927A4u;
label_1927a4:
    // 0x1927a4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1927a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1927a8:
    // 0x1927a8: 0xc066e26  jal         func_19B898
label_1927ac:
    if (ctx->pc == 0x1927ACu) {
        ctx->pc = 0x1927ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927A8u;
        // 0x1927ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1927B0u;
        goto label_1927b0;
    }
    ctx->pc = 0x1927A8u;
    SET_GPR_U32(ctx, 31, 0x1927B0u);
    ctx->pc = 0x1927ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927A8u;
    // 0x1927ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1927B0u;
label_1927b0:
    // 0x1927b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1927b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1927b4:
    // 0x1927b4: 0xc066e26  jal         func_19B898
label_1927b8:
    if (ctx->pc == 0x1927B8u) {
        ctx->pc = 0x1927B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927B4u;
        // 0x1927b8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1927BCu;
        goto label_1927bc;
    }
    ctx->pc = 0x1927B4u;
    SET_GPR_U32(ctx, 31, 0x1927BCu);
    ctx->pc = 0x1927B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927B4u;
    // 0x1927b8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1927BCu;
label_1927bc:
    // 0x1927bc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1927c0:
    if (ctx->pc == 0x1927C0u) {
        ctx->pc = 0x1927C4u;
        goto label_1927c4;
    }
    ctx->pc = 0x1927BCu;
    {
        const bool branch_taken_0x1927bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1927bc) {
            ctx->pc = 0x1927E0u;
            goto label_1927e0;
        }
    }
    ctx->pc = 0x1927C4u;
label_1927c4:
    // 0x1927c4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1927c8:
    if (ctx->pc == 0x1927C8u) {
        ctx->pc = 0x1927C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927C4u;
        // 0x1927c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1927CCu;
        goto label_1927cc;
    }
    ctx->pc = 0x1927C4u;
    {
        const bool branch_taken_0x1927c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1927C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927C4u;
        // 0x1927c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1927c4) {
            ctx->pc = 0x1927E0u;
            goto label_1927e0;
        }
    }
    ctx->pc = 0x1927CCu;
label_1927cc:
    // 0x1927cc: 0xc066e26  jal         func_19B898
label_1927d0:
    if (ctx->pc == 0x1927D0u) {
        ctx->pc = 0x1927D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927CCu;
        // 0x1927d0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1927D4u;
        goto label_1927d4;
    }
    ctx->pc = 0x1927CCu;
    SET_GPR_U32(ctx, 31, 0x1927D4u);
    ctx->pc = 0x1927D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927CCu;
    // 0x1927d0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1927D4u;
label_1927d4:
    // 0x1927d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1927d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1927d8:
    // 0x1927d8: 0xc066e26  jal         func_19B898
label_1927dc:
    if (ctx->pc == 0x1927DCu) {
        ctx->pc = 0x1927DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927D8u;
        // 0x1927dc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1927E0u;
        goto label_1927e0;
    }
    ctx->pc = 0x1927D8u;
    SET_GPR_U32(ctx, 31, 0x1927E0u);
    ctx->pc = 0x1927DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927D8u;
    // 0x1927dc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1927E0u;
label_1927e0:
    // 0x1927e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1927e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1927e4:
    // 0x1927e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1927e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1927e8:
    // 0x1927e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1927e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1927ec:
    // 0x1927ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1927ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1927f0:
    // 0x1927f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1927f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1927f4:
    // 0x1927f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1927f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1927f8:
    // 0x1927f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1927f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1927fc:
    // 0x1927fc: 0x3e00008  jr          $ra
label_192800:
    if (ctx->pc == 0x192800u) {
        ctx->pc = 0x192800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927FCu;
        // 0x192800: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192804u;
        goto label_192804;
    }
    ctx->pc = 0x1927FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927FCu;
        // 0x192800: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1927FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192804u;
label_192804:
    // 0x192804: 0x0  nop
    ctx->pc = 0x192804u;
    // NOP
label_192808:
    // 0x192808: 0x0  nop
    ctx->pc = 0x192808u;
    // NOP
label_19280c:
    // 0x19280c: 0x0  nop
    ctx->pc = 0x19280cu;
    // NOP
label_192810:
    // 0x192810: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x192810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_192814:
    // 0x192814: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x192814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_192818:
    // 0x192818: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x192818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_19281c:
    // 0x19281c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19281cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_192820:
    // 0x192820: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x192820u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_192824:
    // 0x192824: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x192824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_192828:
    // 0x192828: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x192828u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19282c:
    // 0x19282c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19282cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_192830:
    // 0x192830: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x192830u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_192834:
    // 0x192834: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x192834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_192838:
    // 0x192838: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x192838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19283c:
    // 0x19283c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19283cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_192840:
    // 0x192840: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x192840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_192844:
    // 0x192844: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x192844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_192848:
    // 0x192848: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x192848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_19284c:
    // 0x19284c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x19284cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_192850:
    // 0x192850: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x192850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_192854:
    // 0x192854: 0xc0434f4  jal         func_10D3D0
label_192858:
    if (ctx->pc == 0x192858u) {
        ctx->pc = 0x192858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192854u;
        // 0x192858: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19285Cu;
        goto label_19285c;
    }
    ctx->pc = 0x192854u;
    SET_GPR_U32(ctx, 31, 0x19285Cu);
    ctx->pc = 0x192858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192854u;
    // 0x192858: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D3D0u, 0x192854u, 0x19285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19285Cu;
label_19285c:
    // 0x19285c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19285cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_192860:
    // 0x192860: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x192860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_192864:
    // 0x192864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_192868:
    // 0x192868: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x192868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_19286c:
    // 0x19286c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x19286cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_192870:
    // 0x192870: 0xc042704  jal         func_109C10
label_192874:
    if (ctx->pc == 0x192874u) {
        ctx->pc = 0x192874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192870u;
        // 0x192874: 0x27a800bc  addiu       $t0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192878u;
        goto label_192878;
    }
    ctx->pc = 0x192870u;
    SET_GPR_U32(ctx, 31, 0x192878u);
    ctx->pc = 0x192874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192870u;
    // 0x192874: 0x27a800bc  addiu       $t0, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109C10u, 0x192870u, 0x192878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192878u;
label_192878:
    // 0x192878: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_19287c:
    if (ctx->pc == 0x19287Cu) {
        ctx->pc = 0x192880u;
        goto label_192880;
    }
    ctx->pc = 0x192878u;
    {
        const bool branch_taken_0x192878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192878) {
            ctx->pc = 0x192924u;
            goto label_192924;
        }
    }
    ctx->pc = 0x192880u;
label_192880:
    // 0x192880: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x192880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_192884:
    // 0x192884: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
label_192888:
    if (ctx->pc == 0x192888u) {
        ctx->pc = 0x19288Cu;
        goto label_19288c;
    }
    ctx->pc = 0x192884u;
    {
        const bool branch_taken_0x192884 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x192884) {
            ctx->pc = 0x192924u;
            goto label_192924;
        }
    }
    ctx->pc = 0x19288Cu;
label_19288c:
    // 0x19288c: 0x94430056  lhu         $v1, 0x56($v0)
    ctx->pc = 0x19288cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 86)));
label_192890:
    // 0x192890: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x192890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_192894:
    // 0x192894: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
label_192898:
    if (ctx->pc == 0x192898u) {
        ctx->pc = 0x19289Cu;
        goto label_19289c;
    }
    ctx->pc = 0x192894u;
    {
        const bool branch_taken_0x192894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x192894) {
            ctx->pc = 0x192924u;
            goto label_192924;
        }
    }
    ctx->pc = 0x19289Cu;
label_19289c:
    // 0x19289c: 0x8ca40090  lw          $a0, 0x90($a1)
    ctx->pc = 0x19289cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_1928a0:
    // 0x1928a0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1928a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1928a4:
    // 0x1928a4: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
label_1928a8:
    if (ctx->pc == 0x1928A8u) {
        ctx->pc = 0x1928ACu;
        goto label_1928ac;
    }
    ctx->pc = 0x1928A4u;
    {
        const bool branch_taken_0x1928a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1928a4) {
            ctx->pc = 0x192924u;
            goto label_192924;
        }
    }
    ctx->pc = 0x1928ACu;
label_1928ac:
    // 0x1928ac: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
label_1928b0:
    if (ctx->pc == 0x1928B0u) {
        ctx->pc = 0x1928B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928ACu;
        // 0x1928b0: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1928B4u;
        goto label_1928b4;
    }
    ctx->pc = 0x1928ACu;
    {
        const bool branch_taken_0x1928ac = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1928B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928ACu;
        // 0x1928b0: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928ac) {
            ctx->pc = 0x1928C4u;
            goto label_1928c4;
        }
    }
    ctx->pc = 0x1928B4u;
label_1928b4:
    // 0x1928b4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1928b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1928b8:
    // 0x1928b8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1928b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1928bc:
    // 0x1928bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1928c0:
    if (ctx->pc == 0x1928C0u) {
        ctx->pc = 0x1928C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928BCu;
        // 0x1928c0: 0xaca30090  sw          $v1, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1928C4u;
        goto label_1928c4;
    }
    ctx->pc = 0x1928BCu;
    {
        const bool branch_taken_0x1928bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1928C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928BCu;
        // 0x1928c0: 0xaca30090  sw          $v1, 0x90($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928bc) {
            ctx->pc = 0x1928CCu;
            goto label_1928cc;
        }
    }
    ctx->pc = 0x1928C4u;
label_1928c4:
    // 0x1928c4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1928c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1928c8:
    // 0x1928c8: 0xaca30090  sw          $v1, 0x90($a1)
    ctx->pc = 0x1928c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
label_1928cc:
    // 0x1928cc: 0x94430056  lhu         $v1, 0x56($v0)
    ctx->pc = 0x1928ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 86)));
label_1928d0:
    // 0x1928d0: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x1928d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1928d4:
    // 0x1928d4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1928d8:
    if (ctx->pc == 0x1928D8u) {
        ctx->pc = 0x1928DCu;
        goto label_1928dc;
    }
    ctx->pc = 0x1928D4u;
    {
        const bool branch_taken_0x1928d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1928d4) {
            ctx->pc = 0x1928E0u;
            goto label_1928e0;
        }
    }
    ctx->pc = 0x1928DCu;
label_1928dc:
    // 0x1928dc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1928dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1928e0:
    // 0x1928e0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1928e4:
    if (ctx->pc == 0x1928E4u) {
        ctx->pc = 0x1928E8u;
        goto label_1928e8;
    }
    ctx->pc = 0x1928E0u;
    {
        const bool branch_taken_0x1928e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1928e0) {
            ctx->pc = 0x1928FCu;
            goto label_1928fc;
        }
    }
    ctx->pc = 0x1928E8u;
label_1928e8:
    // 0x1928e8: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1928e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1928ec:
    // 0x1928ec: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1928f0:
    if (ctx->pc == 0x1928F0u) {
        ctx->pc = 0x1928F4u;
        goto label_1928f4;
    }
    ctx->pc = 0x1928ECu;
    {
        const bool branch_taken_0x1928ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1928ec) {
            ctx->pc = 0x192924u;
            goto label_192924;
        }
    }
    ctx->pc = 0x1928F4u;
label_1928f4:
    // 0x1928f4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1928f8:
    if (ctx->pc == 0x1928F8u) {
        ctx->pc = 0x1928F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928F4u;
        // 0x1928f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1928FCu;
        goto label_1928fc;
    }
    ctx->pc = 0x1928F4u;
    {
        const bool branch_taken_0x1928f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1928F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928F4u;
        // 0x1928f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928f4) {
            ctx->pc = 0x192924u;
            goto label_192924;
        }
    }
    ctx->pc = 0x1928FCu;
label_1928fc:
    // 0x1928fc: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x1928fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_192900:
    // 0x192900: 0x3c0343e8  lui         $v1, 0x43E8
    ctx->pc = 0x192900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17384 << 16));
label_192904:
    // 0x192904: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x192904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_192908:
    // 0x192908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19290c:
    // 0x19290c: 0x0  nop
    ctx->pc = 0x19290cu;
    // NOP
label_192910:
    // 0x192910: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_192914:
    // 0x192914: 0x0  nop
    ctx->pc = 0x192914u;
    // NOP
label_192918:
    // 0x192918: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_19291c:
    if (ctx->pc == 0x19291Cu) {
        ctx->pc = 0x192920u;
        goto label_192920;
    }
    ctx->pc = 0x192918u;
    {
        const bool branch_taken_0x192918 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192918) {
            ctx->pc = 0x192924u;
            goto label_192924;
        }
    }
    ctx->pc = 0x192920u;
label_192920:
    // 0x192920: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192924:
    // 0x192924: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
label_192928:
    if (ctx->pc == 0x192928u) {
        ctx->pc = 0x19292Cu;
        goto label_19292c;
    }
    ctx->pc = 0x192924u;
    {
        const bool branch_taken_0x192924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x192924) {
            ctx->pc = 0x192A18u;
            goto label_192a18;
        }
    }
    ctx->pc = 0x19292Cu;
label_19292c:
    // 0x19292c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_192930:
    if (ctx->pc == 0x192930u) {
        ctx->pc = 0x192930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19292Cu;
        // 0x192930: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192934u;
        goto label_192934;
    }
    ctx->pc = 0x19292Cu;
    {
        const bool branch_taken_0x19292c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19292Cu;
        // 0x192930: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19292c) {
            ctx->pc = 0x192A18u;
            goto label_192a18;
        }
    }
    ctx->pc = 0x192934u;
label_192934:
    // 0x192934: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x192934u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_192938:
    // 0x192938: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x192938u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19293c:
    // 0x19293c: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x19293cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_192940:
    // 0x192940: 0x4a0002ff  vnop
    ctx->pc = 0x192940u;
    // NOP operation, no action needed for VU0
label_192944:
    // 0x192944: 0x4a0002ff  vnop
    ctx->pc = 0x192944u;
    // NOP operation, no action needed for VU0
label_192948:
    // 0x192948: 0x4a0002ff  vnop
    ctx->pc = 0x192948u;
    // NOP operation, no action needed for VU0
label_19294c:
    // 0x19294c: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x19294cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_192950:
    // 0x192950: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x192950u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_192954:
    // 0x192954: 0x4a0002ff  vnop
    ctx->pc = 0x192954u;
    // NOP operation, no action needed for VU0
label_192958:
    // 0x192958: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x192958u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_19295c:
    // 0x19295c: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x19295cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_192960:
    // 0x192960: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x192960u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_192964:
    // 0x192964: 0x4a0002ff  vnop
    ctx->pc = 0x192964u;
    // NOP operation, no action needed for VU0
label_192968:
    // 0x192968: 0x4a0002ff  vnop
    ctx->pc = 0x192968u;
    // NOP operation, no action needed for VU0
label_19296c:
    // 0x19296c: 0x4a0002ff  vnop
    ctx->pc = 0x19296cu;
    // NOP operation, no action needed for VU0
label_192970:
    // 0x192970: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x192970u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_192974:
    // 0x192974: 0x4a0003bf  vwaitq
    ctx->pc = 0x192974u;
    // VWAITQ (Q already resolved in this runtime)
label_192978:
    // 0x192978: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x192978u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_19297c:
    // 0x19297c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x19297cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192980:
    // 0x192980: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x192980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_192984:
    // 0x192984: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x192984u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_192988:
    // 0x192988: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x192988u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19298c:
    // 0x19298c: 0x4a0002ff  vnop
    ctx->pc = 0x19298cu;
    // NOP operation, no action needed for VU0
label_192990:
    // 0x192990: 0x4a0002ff  vnop
    ctx->pc = 0x192990u;
    // NOP operation, no action needed for VU0
label_192994:
    // 0x192994: 0x4a0002ff  vnop
    ctx->pc = 0x192994u;
    // NOP operation, no action needed for VU0
label_192998:
    // 0x192998: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x192998u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_19299c:
    // 0x19299c: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x19299cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1929a0:
    // 0x1929a0: 0x4a0002ff  vnop
    ctx->pc = 0x1929a0u;
    // NOP operation, no action needed for VU0
label_1929a4:
    // 0x1929a4: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x1929a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1929a8:
    // 0x1929a8: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x1929a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1929ac:
    // 0x1929ac: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x1929acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1929b0:
    // 0x1929b0: 0x4a0002ff  vnop
    ctx->pc = 0x1929b0u;
    // NOP operation, no action needed for VU0
label_1929b4:
    // 0x1929b4: 0x4a0002ff  vnop
    ctx->pc = 0x1929b4u;
    // NOP operation, no action needed for VU0
label_1929b8:
    // 0x1929b8: 0x4a0002ff  vnop
    ctx->pc = 0x1929b8u;
    // NOP operation, no action needed for VU0
label_1929bc:
    // 0x1929bc: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1929bcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1929c0:
    // 0x1929c0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1929c0u;
    // VWAITQ (Q already resolved in this runtime)
label_1929c4:
    // 0x1929c4: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x1929c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1929c8:
    // 0x1929c8: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x1929c8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1929cc:
    // 0x1929cc: 0x0  nop
    ctx->pc = 0x1929ccu;
    // NOP
label_1929d0:
    // 0x1929d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1929d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1929d4:
    // 0x1929d4: 0x0  nop
    ctx->pc = 0x1929d4u;
    // NOP
label_1929d8:
    // 0x1929d8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1929dc:
    if (ctx->pc == 0x1929DCu) {
        ctx->pc = 0x1929DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929D8u;
        // 0x1929dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1929E0u;
        goto label_1929e0;
    }
    ctx->pc = 0x1929D8u;
    {
        const bool branch_taken_0x1929d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1929DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929D8u;
        // 0x1929dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929d8) {
            ctx->pc = 0x1929FCu;
            goto label_1929fc;
        }
    }
    ctx->pc = 0x1929E0u;
label_1929e0:
    // 0x1929e0: 0xc066e26  jal         func_19B898
label_1929e4:
    if (ctx->pc == 0x1929E4u) {
        ctx->pc = 0x1929E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929E0u;
        // 0x1929e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1929E8u;
        goto label_1929e8;
    }
    ctx->pc = 0x1929E0u;
    SET_GPR_U32(ctx, 31, 0x1929E8u);
    ctx->pc = 0x1929E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1929E0u;
    // 0x1929e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1929E8u;
label_1929e8:
    // 0x1929e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1929e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1929ec:
    // 0x1929ec: 0xc066e26  jal         func_19B898
label_1929f0:
    if (ctx->pc == 0x1929F0u) {
        ctx->pc = 0x1929F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929ECu;
        // 0x1929f0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1929F4u;
        goto label_1929f4;
    }
    ctx->pc = 0x1929ECu;
    SET_GPR_U32(ctx, 31, 0x1929F4u);
    ctx->pc = 0x1929F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1929ECu;
    // 0x1929f0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1929F4u;
label_1929f4:
    // 0x1929f4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1929f8:
    if (ctx->pc == 0x1929F8u) {
        ctx->pc = 0x1929F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929F4u;
        // 0x1929f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1929FCu;
        goto label_1929fc;
    }
    ctx->pc = 0x1929F4u;
    {
        const bool branch_taken_0x1929f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1929F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929F4u;
        // 0x1929f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929f4) {
            ctx->pc = 0x192A60u;
            goto label_192a60;
        }
    }
    ctx->pc = 0x1929FCu;
label_1929fc:
    // 0x1929fc: 0xc066e26  jal         func_19B898
label_192a00:
    if (ctx->pc == 0x192A00u) {
        ctx->pc = 0x192A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929FCu;
        // 0x192a00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A04u;
        goto label_192a04;
    }
    ctx->pc = 0x1929FCu;
    SET_GPR_U32(ctx, 31, 0x192A04u);
    ctx->pc = 0x192A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1929FCu;
    // 0x192a00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x192A04u;
label_192a04:
    // 0x192a04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_192a08:
    // 0x192a08: 0xc066e26  jal         func_19B898
label_192a0c:
    if (ctx->pc == 0x192A0Cu) {
        ctx->pc = 0x192A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A08u;
        // 0x192a0c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A10u;
        goto label_192a10;
    }
    ctx->pc = 0x192A08u;
    SET_GPR_U32(ctx, 31, 0x192A10u);
    ctx->pc = 0x192A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A08u;
    // 0x192a0c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x192A10u;
label_192a10:
    // 0x192a10: 0x10000012  b           . + 4 + (0x12 << 2)
label_192a14:
    if (ctx->pc == 0x192A14u) {
        ctx->pc = 0x192A18u;
        goto label_192a18;
    }
    ctx->pc = 0x192A10u;
    {
        const bool branch_taken_0x192a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192a10) {
            ctx->pc = 0x192A5Cu;
            goto label_192a5c;
        }
    }
    ctx->pc = 0x192A18u;
label_192a18:
    // 0x192a18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_192a1c:
    if (ctx->pc == 0x192A1Cu) {
        ctx->pc = 0x192A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A18u;
        // 0x192a1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A20u;
        goto label_192a20;
    }
    ctx->pc = 0x192A18u;
    {
        const bool branch_taken_0x192a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A18u;
        // 0x192a1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a18) {
            ctx->pc = 0x192A40u;
            goto label_192a40;
        }
    }
    ctx->pc = 0x192A20u;
label_192a20:
    // 0x192a20: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x192a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_192a24:
    // 0x192a24: 0xc066e26  jal         func_19B898
label_192a28:
    if (ctx->pc == 0x192A28u) {
        ctx->pc = 0x192A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A24u;
        // 0x192a28: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A2Cu;
        goto label_192a2c;
    }
    ctx->pc = 0x192A24u;
    SET_GPR_U32(ctx, 31, 0x192A2Cu);
    ctx->pc = 0x192A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A24u;
    // 0x192a28: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x192A2Cu;
label_192a2c:
    // 0x192a2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_192a30:
    // 0x192a30: 0xc066e26  jal         func_19B898
label_192a34:
    if (ctx->pc == 0x192A34u) {
        ctx->pc = 0x192A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A30u;
        // 0x192a34: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A38u;
        goto label_192a38;
    }
    ctx->pc = 0x192A30u;
    SET_GPR_U32(ctx, 31, 0x192A38u);
    ctx->pc = 0x192A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A30u;
    // 0x192a34: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x192A38u;
label_192a38:
    // 0x192a38: 0x10000008  b           . + 4 + (0x8 << 2)
label_192a3c:
    if (ctx->pc == 0x192A3Cu) {
        ctx->pc = 0x192A40u;
        goto label_192a40;
    }
    ctx->pc = 0x192A38u;
    {
        const bool branch_taken_0x192a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192a38) {
            ctx->pc = 0x192A5Cu;
            goto label_192a5c;
        }
    }
    ctx->pc = 0x192A40u;
label_192a40:
    // 0x192a40: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_192a44:
    if (ctx->pc == 0x192A44u) {
        ctx->pc = 0x192A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A40u;
        // 0x192a44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A48u;
        goto label_192a48;
    }
    ctx->pc = 0x192A40u;
    {
        const bool branch_taken_0x192a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x192A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A40u;
        // 0x192a44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a40) {
            ctx->pc = 0x192A5Cu;
            goto label_192a5c;
        }
    }
    ctx->pc = 0x192A48u;
label_192a48:
    // 0x192a48: 0xc066e26  jal         func_19B898
label_192a4c:
    if (ctx->pc == 0x192A4Cu) {
        ctx->pc = 0x192A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A48u;
        // 0x192a4c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A50u;
        goto label_192a50;
    }
    ctx->pc = 0x192A48u;
    SET_GPR_U32(ctx, 31, 0x192A50u);
    ctx->pc = 0x192A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A48u;
    // 0x192a4c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x192A50u;
label_192a50:
    // 0x192a50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x192a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_192a54:
    // 0x192a54: 0xc066e26  jal         func_19B898
label_192a58:
    if (ctx->pc == 0x192A58u) {
        ctx->pc = 0x192A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A54u;
        // 0x192a58: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A5Cu;
        goto label_192a5c;
    }
    ctx->pc = 0x192A54u;
    SET_GPR_U32(ctx, 31, 0x192A5Cu);
    ctx->pc = 0x192A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A54u;
    // 0x192a58: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x192A5Cu;
label_192a5c:
    // 0x192a5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x192a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_192a60:
    // 0x192a60: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x192a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_192a64:
    // 0x192a64: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x192a64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_192a68:
    // 0x192a68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x192a68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_192a6c:
    // 0x192a6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x192a6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_192a70:
    // 0x192a70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x192a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_192a74:
    // 0x192a74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_192a78:
    // 0x192a78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_192a7c:
    // 0x192a7c: 0x3e00008  jr          $ra
label_192a80:
    if (ctx->pc == 0x192A80u) {
        ctx->pc = 0x192A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A7Cu;
        // 0x192a80: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192A84u;
        goto label_192a84;
    }
    ctx->pc = 0x192A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A7Cu;
        // 0x192a80: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192A84u;
label_192a84:
    // 0x192a84: 0x0  nop
    ctx->pc = 0x192a84u;
    // NOP
label_192a88:
    // 0x192a88: 0x0  nop
    ctx->pc = 0x192a88u;
    // NOP
label_192a8c:
    // 0x192a8c: 0x0  nop
    ctx->pc = 0x192a8cu;
    // NOP
label_192a90:
    // 0x192a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_192a94:
    // 0x192a94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_192a98:
    // 0x192a98: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x192a98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_192a9c:
    // 0x192a9c: 0xc06d448  jal         func_1B5120
label_192aa0:
    if (ctx->pc == 0x192AA0u) {
        ctx->pc = 0x192AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A9Cu;
        // 0x192aa0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x192AA4u;
        goto label_192aa4;
    }
    ctx->pc = 0x192A9Cu;
    SET_GPR_U32(ctx, 31, 0x192AA4u);
    ctx->pc = 0x192AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A9Cu;
    // 0x192aa0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x192AA4u;
label_192aa4:
    // 0x192aa4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x192aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_192aa8:
    // 0x192aa8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x192aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_192aac:
    // 0x192aac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_192ab0:
    // 0x192ab0: 0x0  nop
    ctx->pc = 0x192ab0u;
    // NOP
label_192ab4:
    // 0x192ab4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x192ab4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_192ab8:
    // 0x192ab8: 0x0  nop
    ctx->pc = 0x192ab8u;
    // NOP
label_192abc:
    // 0x192abc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_192ac0:
    if (ctx->pc == 0x192AC0u) {
        ctx->pc = 0x192AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192ABCu;
        // 0x192ac0: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192AC4u;
        goto label_192ac4;
    }
    ctx->pc = 0x192ABCu;
    {
        const bool branch_taken_0x192abc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x192AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192ABCu;
        // 0x192ac0: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192abc) {
            ctx->pc = 0x192AE0u;
            goto label_192ae0;
        }
    }
    ctx->pc = 0x192AC4u;
label_192ac4:
    // 0x192ac4: 0x0  nop
    ctx->pc = 0x192ac4u;
    // NOP
label_192ac8:
    // 0x192ac8: 0x0  nop
    ctx->pc = 0x192ac8u;
    // NOP
label_192acc:
    // 0x192acc: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x192accu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[1];
label_192ad0:
    // 0x192ad0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x192ad0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_192ad4:
    // 0x192ad4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x192ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_192ad8:
    // 0x192ad8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x192ad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_192adc:
    // 0x192adc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x192adcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_192ae0:
    // 0x192ae0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x192ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_192ae4:
    // 0x192ae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192ae8:
    // 0x192ae8: 0x0  nop
    ctx->pc = 0x192ae8u;
    // NOP
label_192aec:
    // 0x192aec: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x192aecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_192af0:
    // 0x192af0: 0x0  nop
    ctx->pc = 0x192af0u;
    // NOP
label_192af4:
    // 0x192af4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_192af8:
    if (ctx->pc == 0x192AF8u) {
        ctx->pc = 0x192AFCu;
        goto label_192afc;
    }
    ctx->pc = 0x192AF4u;
    {
        const bool branch_taken_0x192af4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192af4) {
            ctx->pc = 0x192B10u;
            goto label_192b10;
        }
    }
    ctx->pc = 0x192AFCu;
label_192afc:
    // 0x192afc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x192afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_192b00:
    // 0x192b00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x192b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_192b04:
    // 0x192b04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192b08:
    // 0x192b08: 0x1000000e  b           . + 4 + (0xE << 2)
label_192b0c:
    if (ctx->pc == 0x192B0Cu) {
        ctx->pc = 0x192B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B08u;
        // 0x192b0c: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x192B10u;
        goto label_192b10;
    }
    ctx->pc = 0x192B08u;
    {
        const bool branch_taken_0x192b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B08u;
        // 0x192b0c: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b08) {
            ctx->pc = 0x192B44u;
            goto label_192b44;
        }
    }
    ctx->pc = 0x192B10u;
label_192b10:
    // 0x192b10: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x192b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_192b14:
    // 0x192b14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x192b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_192b18:
    // 0x192b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192b1c:
    // 0x192b1c: 0x0  nop
    ctx->pc = 0x192b1cu;
    // NOP
label_192b20:
    // 0x192b20: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x192b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_192b24:
    // 0x192b24: 0x0  nop
    ctx->pc = 0x192b24u;
    // NOP
label_192b28:
    // 0x192b28: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_192b2c:
    if (ctx->pc == 0x192B2Cu) {
        ctx->pc = 0x192B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B28u;
        // 0x192b2c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x192B30u;
        goto label_192b30;
    }
    ctx->pc = 0x192B28u;
    {
        const bool branch_taken_0x192b28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x192B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B28u;
        // 0x192b2c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b28) {
            ctx->pc = 0x192B48u;
            goto label_192b48;
        }
    }
    ctx->pc = 0x192B30u;
label_192b30:
    // 0x192b30: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x192b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_192b34:
    // 0x192b34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x192b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_192b38:
    // 0x192b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192b3c:
    // 0x192b3c: 0x0  nop
    ctx->pc = 0x192b3cu;
    // NOP
label_192b40:
    // 0x192b40: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x192b40u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_192b44:
    // 0x192b44: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x192b44u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_192b48:
    // 0x192b48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_192b4c:
    // 0x192b4c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x192b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_192b50:
    // 0x192b50: 0x3e00008  jr          $ra
label_192b54:
    if (ctx->pc == 0x192B54u) {
        ctx->pc = 0x192B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B50u;
        // 0x192b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192B58u;
        goto label_192b58;
    }
    ctx->pc = 0x192B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B50u;
        // 0x192b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192B58u;
label_192b58:
    // 0x192b58: 0x0  nop
    ctx->pc = 0x192b58u;
    // NOP
label_192b5c:
    // 0x192b5c: 0x0  nop
    ctx->pc = 0x192b5cu;
    // NOP
label_192b60:
    // 0x192b60: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x192b60u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192b64:
    // 0x192b64: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x192b64u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192b68:
    // 0x192b68: 0x3c044226  lui         $a0, 0x4226
    ctx->pc = 0x192b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16934 << 16));
label_192b6c:
    // 0x192b6c: 0x3c0c0028  lui         $t4, 0x28
    ctx->pc = 0x192b6cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)40 << 16));
label_192b70:
    // 0x192b70: 0x3c034452  lui         $v1, 0x4452
    ctx->pc = 0x192b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17490 << 16));
label_192b74:
    // 0x192b74: 0x348827f0  ori         $t0, $a0, 0x27F0
    ctx->pc = 0x192b74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10224);
label_192b78:
    // 0x192b78: 0x258c2cc0  addiu       $t4, $t4, 0x2CC0
    ctx->pc = 0x192b78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 11456));
label_192b7c:
    // 0x192b7c: 0x3c0b3f80  lui         $t3, 0x3F80
    ctx->pc = 0x192b7cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16256 << 16));
label_192b80:
    // 0x192b80: 0x3c0ac348  lui         $t2, 0xC348
    ctx->pc = 0x192b80u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)49992 << 16));
label_192b84:
    // 0x192b84: 0x3c09c47a  lui         $t1, 0xC47A
    ctx->pc = 0x192b84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)50298 << 16));
label_192b88:
    // 0x192b88: 0x3467f08e  ori         $a3, $v1, 0xF08E
    ctx->pc = 0x192b88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61582);
label_192b8c:
    // 0x192b8c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x192b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_192b90:
    // 0x192b90: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x192b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_192b94:
    // 0x192b94: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x192b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_192b98:
    // 0x192b98: 0x18e1821  addu        $v1, $t4, $t6
    ctx->pc = 0x192b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
label_192b9c:
    // 0x192b9c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x192b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_192ba0:
    // 0x192ba0: 0xac6b0004  sw          $t3, 0x4($v1)
    ctx->pc = 0x192ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 11));
label_192ba4:
    // 0x192ba4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x192ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_192ba8:
    // 0x192ba8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x192ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_192bac:
    // 0x192bac: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x192bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_192bb0:
    // 0x192bb0: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x192bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_192bb4:
    // 0x192bb4: 0xac6b0018  sw          $t3, 0x18($v1)
    ctx->pc = 0x192bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 11));
label_192bb8:
    // 0x192bb8: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x192bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_192bbc:
    // 0x192bbc: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x192bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_192bc0:
    // 0x192bc0: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x192bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_192bc4:
    // 0x192bc4: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x192bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_192bc8:
    // 0x192bc8: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x192bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
label_192bcc:
    // 0x192bcc: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x192bccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    ctx->pc = 0x192bd0u;
    return;
}
