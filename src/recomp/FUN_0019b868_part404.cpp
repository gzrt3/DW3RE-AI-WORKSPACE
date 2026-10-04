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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2604d8u: goto label_2604d8;
        case 0x2604dcu: goto label_2604dc;
        case 0x2604e0u: goto label_2604e0;
        case 0x2604e4u: goto label_2604e4;
        case 0x2604e8u: goto label_2604e8;
        case 0x2604ecu: goto label_2604ec;
        case 0x2604f0u: goto label_2604f0;
        case 0x2604f4u: goto label_2604f4;
        case 0x2604f8u: goto label_2604f8;
        case 0x2604fcu: goto label_2604fc;
        case 0x260500u: goto label_260500;
        case 0x260504u: goto label_260504;
        case 0x260508u: goto label_260508;
        case 0x26050cu: goto label_26050c;
        case 0x260510u: goto label_260510;
        case 0x260514u: goto label_260514;
        case 0x260518u: goto label_260518;
        case 0x26051cu: goto label_26051c;
        case 0x260520u: goto label_260520;
        case 0x260524u: goto label_260524;
        case 0x260528u: goto label_260528;
        case 0x26052cu: goto label_26052c;
        case 0x260530u: goto label_260530;
        case 0x260534u: goto label_260534;
        case 0x260538u: goto label_260538;
        case 0x26053cu: goto label_26053c;
        case 0x260540u: goto label_260540;
        case 0x260544u: goto label_260544;
        case 0x260548u: goto label_260548;
        case 0x26054cu: goto label_26054c;
        case 0x260550u: goto label_260550;
        case 0x260554u: goto label_260554;
        case 0x260558u: goto label_260558;
        case 0x26055cu: goto label_26055c;
        case 0x260560u: goto label_260560;
        case 0x260564u: goto label_260564;
        case 0x260568u: goto label_260568;
        case 0x26056cu: goto label_26056c;
        case 0x260570u: goto label_260570;
        case 0x260574u: goto label_260574;
        case 0x260578u: goto label_260578;
        case 0x26057cu: goto label_26057c;
        case 0x260580u: goto label_260580;
        case 0x260584u: goto label_260584;
        case 0x260588u: goto label_260588;
        case 0x26058cu: goto label_26058c;
        case 0x260590u: goto label_260590;
        case 0x260594u: goto label_260594;
        case 0x260598u: goto label_260598;
        case 0x26059cu: goto label_26059c;
        case 0x2605a0u: goto label_2605a0;
        case 0x2605a4u: goto label_2605a4;
        case 0x2605a8u: goto label_2605a8;
        case 0x2605acu: goto label_2605ac;
        case 0x2605b0u: goto label_2605b0;
        case 0x2605b4u: goto label_2605b4;
        case 0x2605b8u: goto label_2605b8;
        case 0x2605bcu: goto label_2605bc;
        case 0x2605c0u: goto label_2605c0;
        case 0x2605c4u: goto label_2605c4;
        case 0x2605c8u: goto label_2605c8;
        case 0x2605ccu: goto label_2605cc;
        case 0x2605d0u: goto label_2605d0;
        case 0x2605d4u: goto label_2605d4;
        case 0x2605d8u: goto label_2605d8;
        case 0x2605dcu: goto label_2605dc;
        case 0x2605e0u: goto label_2605e0;
        case 0x2605e4u: goto label_2605e4;
        case 0x2605e8u: goto label_2605e8;
        case 0x2605ecu: goto label_2605ec;
        case 0x2605f0u: goto label_2605f0;
        case 0x2605f4u: goto label_2605f4;
        case 0x2605f8u: goto label_2605f8;
        case 0x2605fcu: goto label_2605fc;
        case 0x260600u: goto label_260600;
        case 0x260604u: goto label_260604;
        case 0x260608u: goto label_260608;
        case 0x26060cu: goto label_26060c;
        case 0x260610u: goto label_260610;
        case 0x260614u: goto label_260614;
        case 0x260618u: goto label_260618;
        case 0x26061cu: goto label_26061c;
        case 0x260620u: goto label_260620;
        case 0x260624u: goto label_260624;
        case 0x260628u: goto label_260628;
        case 0x26062cu: goto label_26062c;
        case 0x260630u: goto label_260630;
        case 0x260634u: goto label_260634;
        case 0x260638u: goto label_260638;
        case 0x26063cu: goto label_26063c;
        case 0x260640u: goto label_260640;
        case 0x260644u: goto label_260644;
        case 0x260648u: goto label_260648;
        case 0x26064cu: goto label_26064c;
        case 0x260650u: goto label_260650;
        case 0x260654u: goto label_260654;
        case 0x260658u: goto label_260658;
        case 0x26065cu: goto label_26065c;
        case 0x260660u: goto label_260660;
        case 0x260664u: goto label_260664;
        case 0x260668u: goto label_260668;
        case 0x26066cu: goto label_26066c;
        case 0x260670u: goto label_260670;
        case 0x260674u: goto label_260674;
        case 0x260678u: goto label_260678;
        case 0x26067cu: goto label_26067c;
        case 0x260680u: goto label_260680;
        case 0x260684u: goto label_260684;
        case 0x260688u: goto label_260688;
        case 0x26068cu: goto label_26068c;
        case 0x260690u: goto label_260690;
        case 0x260694u: goto label_260694;
        case 0x260698u: goto label_260698;
        case 0x26069cu: goto label_26069c;
        case 0x2606a0u: goto label_2606a0;
        case 0x2606a4u: goto label_2606a4;
        case 0x2606a8u: goto label_2606a8;
        case 0x2606acu: goto label_2606ac;
        case 0x2606b0u: goto label_2606b0;
        case 0x2606b4u: goto label_2606b4;
        case 0x2606b8u: goto label_2606b8;
        case 0x2606bcu: goto label_2606bc;
        case 0x2606c0u: goto label_2606c0;
        case 0x2606c4u: goto label_2606c4;
        case 0x2606c8u: goto label_2606c8;
        case 0x2606ccu: goto label_2606cc;
        case 0x2606d0u: goto label_2606d0;
        case 0x2606d4u: goto label_2606d4;
        case 0x2606d8u: goto label_2606d8;
        case 0x2606dcu: goto label_2606dc;
        case 0x2606e0u: goto label_2606e0;
        case 0x2606e4u: goto label_2606e4;
        case 0x2606e8u: goto label_2606e8;
        case 0x2606ecu: goto label_2606ec;
        case 0x2606f0u: goto label_2606f0;
        case 0x2606f4u: goto label_2606f4;
        case 0x2606f8u: goto label_2606f8;
        case 0x2606fcu: goto label_2606fc;
        case 0x260700u: goto label_260700;
        case 0x260704u: goto label_260704;
        case 0x260708u: goto label_260708;
        case 0x26070cu: goto label_26070c;
        case 0x260710u: goto label_260710;
        case 0x260714u: goto label_260714;
        case 0x260718u: goto label_260718;
        case 0x26071cu: goto label_26071c;
        case 0x260720u: goto label_260720;
        case 0x260724u: goto label_260724;
        case 0x260728u: goto label_260728;
        case 0x26072cu: goto label_26072c;
        case 0x260730u: goto label_260730;
        case 0x260734u: goto label_260734;
        case 0x260738u: goto label_260738;
        case 0x26073cu: goto label_26073c;
        case 0x260740u: goto label_260740;
        case 0x260744u: goto label_260744;
        case 0x260748u: goto label_260748;
        case 0x26074cu: goto label_26074c;
        case 0x260750u: goto label_260750;
        case 0x260754u: goto label_260754;
        case 0x260758u: goto label_260758;
        case 0x26075cu: goto label_26075c;
        case 0x260760u: goto label_260760;
        case 0x260764u: goto label_260764;
        case 0x260768u: goto label_260768;
        case 0x26076cu: goto label_26076c;
        case 0x260770u: goto label_260770;
        case 0x260774u: goto label_260774;
        case 0x260778u: goto label_260778;
        case 0x26077cu: goto label_26077c;
        case 0x260780u: goto label_260780;
        case 0x260784u: goto label_260784;
        case 0x260788u: goto label_260788;
        case 0x26078cu: goto label_26078c;
        case 0x260790u: goto label_260790;
        case 0x260794u: goto label_260794;
        case 0x260798u: goto label_260798;
        case 0x26079cu: goto label_26079c;
        case 0x2607a0u: goto label_2607a0;
        case 0x2607a4u: goto label_2607a4;
        case 0x2607a8u: goto label_2607a8;
        case 0x2607acu: goto label_2607ac;
        case 0x2607b0u: goto label_2607b0;
        case 0x2607b4u: goto label_2607b4;
        case 0x2607b8u: goto label_2607b8;
        case 0x2607bcu: goto label_2607bc;
        case 0x2607c0u: goto label_2607c0;
        case 0x2607c4u: goto label_2607c4;
        case 0x2607c8u: goto label_2607c8;
        case 0x2607ccu: goto label_2607cc;
        case 0x2607d0u: goto label_2607d0;
        case 0x2607d4u: goto label_2607d4;
        case 0x2607d8u: goto label_2607d8;
        case 0x2607dcu: goto label_2607dc;
        case 0x2607e0u: goto label_2607e0;
        case 0x2607e4u: goto label_2607e4;
        case 0x2607e8u: goto label_2607e8;
        case 0x2607ecu: goto label_2607ec;
        case 0x2607f0u: goto label_2607f0;
        case 0x2607f4u: goto label_2607f4;
        case 0x2607f8u: goto label_2607f8;
        case 0x2607fcu: goto label_2607fc;
        case 0x260800u: goto label_260800;
        case 0x260804u: goto label_260804;
        case 0x260808u: goto label_260808;
        case 0x26080cu: goto label_26080c;
        case 0x260810u: goto label_260810;
        case 0x260814u: goto label_260814;
        case 0x260818u: goto label_260818;
        case 0x26081cu: goto label_26081c;
        case 0x260820u: goto label_260820;
        case 0x260824u: goto label_260824;
        case 0x260828u: goto label_260828;
        case 0x26082cu: goto label_26082c;
        case 0x260830u: goto label_260830;
        case 0x260834u: goto label_260834;
        case 0x260838u: goto label_260838;
        case 0x26083cu: goto label_26083c;
        case 0x260840u: goto label_260840;
        case 0x260844u: goto label_260844;
        case 0x260848u: goto label_260848;
        case 0x26084cu: goto label_26084c;
        case 0x260850u: goto label_260850;
        case 0x260854u: goto label_260854;
        case 0x260858u: goto label_260858;
        case 0x26085cu: goto label_26085c;
        case 0x260860u: goto label_260860;
        case 0x260864u: goto label_260864;
        case 0x260868u: goto label_260868;
        case 0x26086cu: goto label_26086c;
        case 0x260870u: goto label_260870;
        case 0x260874u: goto label_260874;
        case 0x260878u: goto label_260878;
        case 0x26087cu: goto label_26087c;
        case 0x260880u: goto label_260880;
        case 0x260884u: goto label_260884;
        case 0x260888u: goto label_260888;
        case 0x26088cu: goto label_26088c;
        case 0x260890u: goto label_260890;
        case 0x260894u: goto label_260894;
        case 0x260898u: goto label_260898;
        case 0x26089cu: goto label_26089c;
        case 0x2608a0u: goto label_2608a0;
        case 0x2608a4u: goto label_2608a4;
        case 0x2608a8u: goto label_2608a8;
        case 0x2608acu: goto label_2608ac;
        case 0x2608b0u: goto label_2608b0;
        case 0x2608b4u: goto label_2608b4;
        case 0x2608b8u: goto label_2608b8;
        case 0x2608bcu: goto label_2608bc;
        case 0x2608c0u: goto label_2608c0;
        case 0x2608c4u: goto label_2608c4;
        case 0x2608c8u: goto label_2608c8;
        case 0x2608ccu: goto label_2608cc;
        case 0x2608d0u: goto label_2608d0;
        case 0x2608d4u: goto label_2608d4;
        case 0x2608d8u: goto label_2608d8;
        case 0x2608dcu: goto label_2608dc;
        case 0x2608e0u: goto label_2608e0;
        case 0x2608e4u: goto label_2608e4;
        case 0x2608e8u: goto label_2608e8;
        case 0x2608ecu: goto label_2608ec;
        case 0x2608f0u: goto label_2608f0;
        case 0x2608f4u: goto label_2608f4;
        case 0x2608f8u: goto label_2608f8;
        case 0x2608fcu: goto label_2608fc;
        case 0x260900u: goto label_260900;
        case 0x260904u: goto label_260904;
        case 0x260908u: goto label_260908;
        case 0x26090cu: goto label_26090c;
        case 0x260910u: goto label_260910;
        case 0x260914u: goto label_260914;
        case 0x260918u: goto label_260918;
        case 0x26091cu: goto label_26091c;
        case 0x260920u: goto label_260920;
        case 0x260924u: goto label_260924;
        case 0x260928u: goto label_260928;
        case 0x26092cu: goto label_26092c;
        case 0x260930u: goto label_260930;
        case 0x260934u: goto label_260934;
        case 0x260938u: goto label_260938;
        case 0x26093cu: goto label_26093c;
        case 0x260940u: goto label_260940;
        case 0x260944u: goto label_260944;
        case 0x260948u: goto label_260948;
        case 0x26094cu: goto label_26094c;
        case 0x260950u: goto label_260950;
        case 0x260954u: goto label_260954;
        case 0x260958u: goto label_260958;
        case 0x26095cu: goto label_26095c;
        case 0x260960u: goto label_260960;
        case 0x260964u: goto label_260964;
        case 0x260968u: goto label_260968;
        case 0x26096cu: goto label_26096c;
        case 0x260970u: goto label_260970;
        case 0x260974u: goto label_260974;
        case 0x260978u: goto label_260978;
        case 0x26097cu: goto label_26097c;
        case 0x260980u: goto label_260980;
        case 0x260984u: goto label_260984;
        case 0x260988u: goto label_260988;
        case 0x26098cu: goto label_26098c;
        case 0x260990u: goto label_260990;
        case 0x260994u: goto label_260994;
        case 0x260998u: goto label_260998;
        case 0x26099cu: goto label_26099c;
        case 0x2609a0u: goto label_2609a0;
        case 0x2609a4u: goto label_2609a4;
        case 0x2609a8u: goto label_2609a8;
        case 0x2609acu: goto label_2609ac;
        case 0x2609b0u: goto label_2609b0;
        case 0x2609b4u: goto label_2609b4;
        case 0x2609b8u: goto label_2609b8;
        case 0x2609bcu: goto label_2609bc;
        case 0x2609c0u: goto label_2609c0;
        case 0x2609c4u: goto label_2609c4;
        case 0x2609c8u: goto label_2609c8;
        case 0x2609ccu: goto label_2609cc;
        case 0x2609d0u: goto label_2609d0;
        case 0x2609d4u: goto label_2609d4;
        case 0x2609d8u: goto label_2609d8;
        case 0x2609dcu: goto label_2609dc;
        case 0x2609e0u: goto label_2609e0;
        case 0x2609e4u: goto label_2609e4;
        case 0x2609e8u: goto label_2609e8;
        case 0x2609ecu: goto label_2609ec;
        case 0x2609f0u: goto label_2609f0;
        case 0x2609f4u: goto label_2609f4;
        case 0x2609f8u: goto label_2609f8;
        case 0x2609fcu: goto label_2609fc;
        case 0x260a00u: goto label_260a00;
        case 0x260a04u: goto label_260a04;
        case 0x260a08u: goto label_260a08;
        case 0x260a0cu: goto label_260a0c;
        case 0x260a10u: goto label_260a10;
        case 0x260a14u: goto label_260a14;
        case 0x260a18u: goto label_260a18;
        case 0x260a1cu: goto label_260a1c;
        case 0x260a20u: goto label_260a20;
        case 0x260a24u: goto label_260a24;
        case 0x260a28u: goto label_260a28;
        case 0x260a2cu: goto label_260a2c;
        case 0x260a30u: goto label_260a30;
        case 0x260a34u: goto label_260a34;
        case 0x260a38u: goto label_260a38;
        case 0x260a3cu: goto label_260a3c;
        case 0x260a40u: goto label_260a40;
        case 0x260a44u: goto label_260a44;
        case 0x260a48u: goto label_260a48;
        case 0x260a4cu: goto label_260a4c;
        case 0x260a50u: goto label_260a50;
        case 0x260a54u: goto label_260a54;
        case 0x260a58u: goto label_260a58;
        case 0x260a5cu: goto label_260a5c;
        case 0x260a60u: goto label_260a60;
        case 0x260a64u: goto label_260a64;
        case 0x260a68u: goto label_260a68;
        case 0x260a6cu: goto label_260a6c;
        case 0x260a70u: goto label_260a70;
        case 0x260a74u: goto label_260a74;
        case 0x260a78u: goto label_260a78;
        case 0x260a7cu: goto label_260a7c;
        case 0x260a80u: goto label_260a80;
        case 0x260a84u: goto label_260a84;
        case 0x260a88u: goto label_260a88;
        case 0x260a8cu: goto label_260a8c;
        case 0x260a90u: goto label_260a90;
        case 0x260a94u: goto label_260a94;
        case 0x260a98u: goto label_260a98;
        case 0x260a9cu: goto label_260a9c;
        case 0x260aa0u: goto label_260aa0;
        case 0x260aa4u: goto label_260aa4;
        case 0x260aa8u: goto label_260aa8;
        case 0x260aacu: goto label_260aac;
        case 0x260ab0u: goto label_260ab0;
        case 0x260ab4u: goto label_260ab4;
        case 0x260ab8u: goto label_260ab8;
        case 0x260abcu: goto label_260abc;
        case 0x260ac0u: goto label_260ac0;
        case 0x260ac4u: goto label_260ac4;
        case 0x260ac8u: goto label_260ac8;
        case 0x260accu: goto label_260acc;
        case 0x260ad0u: goto label_260ad0;
        case 0x260ad4u: goto label_260ad4;
        case 0x260ad8u: goto label_260ad8;
        case 0x260adcu: goto label_260adc;
        case 0x260ae0u: goto label_260ae0;
        case 0x260ae4u: goto label_260ae4;
        case 0x260ae8u: goto label_260ae8;
        case 0x260aecu: goto label_260aec;
        case 0x260af0u: goto label_260af0;
        case 0x260af4u: goto label_260af4;
        case 0x260af8u: goto label_260af8;
        case 0x260afcu: goto label_260afc;
        case 0x260b00u: goto label_260b00;
        case 0x260b04u: goto label_260b04;
        case 0x260b08u: goto label_260b08;
        case 0x260b0cu: goto label_260b0c;
        case 0x260b10u: goto label_260b10;
        case 0x260b14u: goto label_260b14;
        case 0x260b18u: goto label_260b18;
        case 0x260b1cu: goto label_260b1c;
        case 0x260b20u: goto label_260b20;
        case 0x260b24u: goto label_260b24;
        case 0x260b28u: goto label_260b28;
        case 0x260b2cu: goto label_260b2c;
        case 0x260b30u: goto label_260b30;
        case 0x260b34u: goto label_260b34;
        case 0x260b38u: goto label_260b38;
        case 0x260b3cu: goto label_260b3c;
        case 0x260b40u: goto label_260b40;
        case 0x260b44u: goto label_260b44;
        case 0x260b48u: goto label_260b48;
        case 0x260b4cu: goto label_260b4c;
        case 0x260b50u: goto label_260b50;
        case 0x260b54u: goto label_260b54;
        case 0x260b58u: goto label_260b58;
        case 0x260b5cu: goto label_260b5c;
        case 0x260b60u: goto label_260b60;
        case 0x260b64u: goto label_260b64;
        case 0x260b68u: goto label_260b68;
        case 0x260b6cu: goto label_260b6c;
        case 0x260b70u: goto label_260b70;
        case 0x260b74u: goto label_260b74;
        case 0x260b78u: goto label_260b78;
        case 0x260b7cu: goto label_260b7c;
        case 0x260b80u: goto label_260b80;
        case 0x260b84u: goto label_260b84;
        case 0x260b88u: goto label_260b88;
        case 0x260b8cu: goto label_260b8c;
        case 0x260b90u: goto label_260b90;
        case 0x260b94u: goto label_260b94;
        case 0x260b98u: goto label_260b98;
        case 0x260b9cu: goto label_260b9c;
        case 0x260ba0u: goto label_260ba0;
        case 0x260ba4u: goto label_260ba4;
        case 0x260ba8u: goto label_260ba8;
        case 0x260bacu: goto label_260bac;
        case 0x260bb0u: goto label_260bb0;
        case 0x260bb4u: goto label_260bb4;
        case 0x260bb8u: goto label_260bb8;
        case 0x260bbcu: goto label_260bbc;
        case 0x260bc0u: goto label_260bc0;
        case 0x260bc4u: goto label_260bc4;
        case 0x260bc8u: goto label_260bc8;
        case 0x260bccu: goto label_260bcc;
        case 0x260bd0u: goto label_260bd0;
        case 0x260bd4u: goto label_260bd4;
        case 0x260bd8u: goto label_260bd8;
        case 0x260bdcu: goto label_260bdc;
        case 0x260be0u: goto label_260be0;
        case 0x260be4u: goto label_260be4;
        case 0x260be8u: goto label_260be8;
        case 0x260becu: goto label_260bec;
        case 0x260bf0u: goto label_260bf0;
        case 0x260bf4u: goto label_260bf4;
        case 0x260bf8u: goto label_260bf8;
        case 0x260bfcu: goto label_260bfc;
        case 0x260c00u: goto label_260c00;
        case 0x260c04u: goto label_260c04;
        case 0x260c08u: goto label_260c08;
        case 0x260c0cu: goto label_260c0c;
        case 0x260c10u: goto label_260c10;
        case 0x260c14u: goto label_260c14;
        case 0x260c18u: goto label_260c18;
        case 0x260c1cu: goto label_260c1c;
        case 0x260c20u: goto label_260c20;
        case 0x260c24u: goto label_260c24;
        case 0x260c28u: goto label_260c28;
        case 0x260c2cu: goto label_260c2c;
        case 0x260c30u: goto label_260c30;
        case 0x260c34u: goto label_260c34;
        case 0x260c38u: goto label_260c38;
        case 0x260c3cu: goto label_260c3c;
        case 0x260c40u: goto label_260c40;
        case 0x260c44u: goto label_260c44;
        case 0x260c48u: goto label_260c48;
        case 0x260c4cu: goto label_260c4c;
        case 0x260c50u: goto label_260c50;
        case 0x260c54u: goto label_260c54;
        case 0x260c58u: goto label_260c58;
        case 0x260c5cu: goto label_260c5c;
        case 0x260c60u: goto label_260c60;
        case 0x260c64u: goto label_260c64;
        case 0x260c68u: goto label_260c68;
        case 0x260c6cu: goto label_260c6c;
        case 0x260c70u: goto label_260c70;
        case 0x260c74u: goto label_260c74;
        case 0x260c78u: goto label_260c78;
        case 0x260c7cu: goto label_260c7c;
        case 0x260c80u: goto label_260c80;
        case 0x260c84u: goto label_260c84;
        case 0x260c88u: goto label_260c88;
        case 0x260c8cu: goto label_260c8c;
        case 0x260c90u: goto label_260c90;
        case 0x260c94u: goto label_260c94;
        case 0x260c98u: goto label_260c98;
        case 0x260c9cu: goto label_260c9c;
        case 0x260ca0u: goto label_260ca0;
        case 0x260ca4u: goto label_260ca4;
        default: return;
    }

label_2604d8:
    // 0x2604d8: 0x0  nop
    ctx->pc = 0x2604d8u;
    // NOP
label_2604dc:
    // 0x2604dc: 0x0  nop
    ctx->pc = 0x2604dcu;
    // NOP
label_2604e0:
    // 0x2604e0: 0xa958  .word       0x0000A958                   # mult        $s5, $zero, $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2604e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_2604e4:
    // 0x2604e4: 0x5970  tge         $zero, $zero, 357
    ctx->pc = 0x2604e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2604e8:
    // 0x2604e8: 0x0  nop
    ctx->pc = 0x2604e8u;
    // NOP
label_2604ec:
    // 0x2604ec: 0x0  nop
    ctx->pc = 0x2604ecu;
    // NOP
label_2604f0:
    // 0x2604f0: 0xa964  .word       0x0000A964                   # and         $s5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2604f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2604f4:
    // 0x2604f4: 0x58e0  .word       0x000058E0                   # add         $t3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2604f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2604f8:
    // 0x2604f8: 0x0  nop
    ctx->pc = 0x2604f8u;
    // NOP
label_2604fc:
    // 0x2604fc: 0x0  nop
    ctx->pc = 0x2604fcu;
    // NOP
label_260500:
    // 0x260500: 0xa970  tge         $zero, $zero, 677
    ctx->pc = 0x260500u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260504:
    // 0x260504: 0x4520  .word       0x00004520                   # add         $t0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260504u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_260508:
    // 0x260508: 0x0  nop
    ctx->pc = 0x260508u;
    // NOP
label_26050c:
    // 0x26050c: 0x0  nop
    ctx->pc = 0x26050cu;
    // NOP
label_260510:
    // 0x260510: 0xa979  .word       0x0000A979                   # INVALID     $zero, $zero, -0x5687 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x260510 raw=0x0000A979"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260514:
    // 0x260514: 0x5740  sll         $t2, $zero, 29
    ctx->pc = 0x260514u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_260518:
    // 0x260518: 0x0  nop
    ctx->pc = 0x260518u;
    // NOP
label_26051c:
    // 0x26051c: 0x0  nop
    ctx->pc = 0x26051cu;
    // NOP
label_260520:
    // 0x260520: 0xa984  .word       0x0000A984                   # sllv        $s5, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260520u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_260524:
    // 0x260524: 0x5a00  sll         $t3, $zero, 8
    ctx->pc = 0x260524u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_260528:
    // 0x260528: 0x0  nop
    ctx->pc = 0x260528u;
    // NOP
label_26052c:
    // 0x26052c: 0x0  nop
    ctx->pc = 0x26052cu;
    // NOP
label_260530:
    // 0x260530: 0xa990  .word       0x0000A990                   # mfhi        $s5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260530u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_260534:
    // 0x260534: 0x5cb0  tge         $zero, $zero, 370
    ctx->pc = 0x260534u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260538:
    // 0x260538: 0x0  nop
    ctx->pc = 0x260538u;
    // NOP
label_26053c:
    // 0x26053c: 0x0  nop
    ctx->pc = 0x26053cu;
    // NOP
label_260540:
    // 0x260540: 0xa99c  .word       0x0000A99C                   # dmult       $zero, $zero # 0000A980 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260540u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x260540 raw=0x0000A99C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260544:
    // 0x260544: 0x60d0  .word       0x000060D0                   # mfhi        $t4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260544u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_260548:
    // 0x260548: 0x0  nop
    ctx->pc = 0x260548u;
    // NOP
label_26054c:
    // 0x26054c: 0x0  nop
    ctx->pc = 0x26054cu;
    // NOP
label_260550:
    // 0x260550: 0xa9a9  .word       0x0000A9A9                   # mtsa        $zero # 0000A980 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x260550u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_260554:
    // 0x260554: 0x49c0  sll         $t1, $zero, 7
    ctx->pc = 0x260554u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_260558:
    // 0x260558: 0x0  nop
    ctx->pc = 0x260558u;
    // NOP
label_26055c:
    // 0x26055c: 0x0  nop
    ctx->pc = 0x26055cu;
    // NOP
label_260560:
    // 0x260560: 0xa9b3  tltu        $zero, $zero, 678
    ctx->pc = 0x260560u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260564:
    // 0x260564: 0x10e50  .word       0x00010E50                   # mfhi        $at # 00010640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260564u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_260568:
    // 0x260568: 0x0  nop
    ctx->pc = 0x260568u;
    // NOP
label_26056c:
    // 0x26056c: 0x0  nop
    ctx->pc = 0x26056cu;
    // NOP
label_260570:
    // 0x260570: 0xa9d5  .word       0x0000A9D5                   # INVALID     $zero, $zero, -0x562B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260570u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x260570 raw=0x0000A9D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260574:
    // 0x260574: 0x102d0  .word       0x000102D0                   # mfhi        $zero # 000102C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260574u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_260578:
    // 0x260578: 0x0  nop
    ctx->pc = 0x260578u;
    // NOP
label_26057c:
    // 0x26057c: 0x0  nop
    ctx->pc = 0x26057cu;
    // NOP
label_260580:
    // 0x260580: 0xa9f6  tne         $zero, $zero, 679
    ctx->pc = 0x260580u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260584:
    // 0x260584: 0x14860  .word       0x00014860                   # add         $t1, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260584u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_260588:
    // 0x260588: 0x0  nop
    ctx->pc = 0x260588u;
    // NOP
label_26058c:
    // 0x26058c: 0x0  nop
    ctx->pc = 0x26058cu;
    // NOP
label_260590:
    // 0x260590: 0xaa20  .word       0x0000AA20                   # add         $s5, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260590u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_260594:
    // 0x260594: 0x124b0  tge         $zero, $at, 146
    ctx->pc = 0x260594u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_260598:
    // 0x260598: 0x0  nop
    ctx->pc = 0x260598u;
    // NOP
label_26059c:
    // 0x26059c: 0x0  nop
    ctx->pc = 0x26059cu;
    // NOP
label_2605a0:
    // 0x2605a0: 0xaa45  .word       0x0000AA45                   # INVALID     $zero, $zero, -0x55BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2605a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2605A0 raw=0x0000AA45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2605a4:
    // 0x2605a4: 0x17c40  sll         $t7, $at, 17
    ctx->pc = 0x2605a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_2605a8:
    // 0x2605a8: 0x0  nop
    ctx->pc = 0x2605a8u;
    // NOP
label_2605ac:
    // 0x2605ac: 0x0  nop
    ctx->pc = 0x2605acu;
    // NOP
label_2605b0:
    // 0x2605b0: 0xaa75  .word       0x0000AA75                   # INVALID     $zero, $zero, -0x558B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2605b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2605B0 raw=0x0000AA75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2605b4:
    // 0x2605b4: 0x11700  sll         $v0, $at, 28
    ctx->pc = 0x2605b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 28));
label_2605b8:
    // 0x2605b8: 0x0  nop
    ctx->pc = 0x2605b8u;
    // NOP
label_2605bc:
    // 0x2605bc: 0x0  nop
    ctx->pc = 0x2605bcu;
    // NOP
label_2605c0:
    // 0x2605c0: 0xaa98  .word       0x0000AA98                   # mult        $s5, $zero, $zero # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2605c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_2605c4:
    // 0x2605c4: 0x113a0  .word       0x000113A0                   # add         $v0, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2605c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2605c8:
    // 0x2605c8: 0x0  nop
    ctx->pc = 0x2605c8u;
    // NOP
label_2605cc:
    // 0x2605cc: 0x0  nop
    ctx->pc = 0x2605ccu;
    // NOP
label_2605d0:
    // 0x2605d0: 0xaabb  dsra        $s5, $zero, 10
    ctx->pc = 0x2605d0u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 0) >> 10);
label_2605d4:
    // 0x2605d4: 0x11ea0  .word       0x00011EA0                   # add         $v1, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2605d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2605d8:
    // 0x2605d8: 0x0  nop
    ctx->pc = 0x2605d8u;
    // NOP
label_2605dc:
    // 0x2605dc: 0x0  nop
    ctx->pc = 0x2605dcu;
    // NOP
label_2605e0:
    // 0x2605e0: 0xaadf  .word       0x0000AADF                   # ddivu       $s5, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2605e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2605E0 raw=0x0000AADF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2605e4:
    // 0x2605e4: 0x113e0  .word       0x000113E0                   # add         $v0, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2605e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2605e8:
    // 0x2605e8: 0x0  nop
    ctx->pc = 0x2605e8u;
    // NOP
label_2605ec:
    // 0x2605ec: 0x0  nop
    ctx->pc = 0x2605ecu;
    // NOP
label_2605f0:
    // 0x2605f0: 0xab02  srl         $s5, $zero, 12
    ctx->pc = 0x2605f0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 0), 12));
label_2605f4:
    // 0x2605f4: 0x12f70  tge         $zero, $at, 189
    ctx->pc = 0x2605f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2605f8:
    // 0x2605f8: 0x0  nop
    ctx->pc = 0x2605f8u;
    // NOP
label_2605fc:
    // 0x2605fc: 0x0  nop
    ctx->pc = 0x2605fcu;
    // NOP
label_260600:
    // 0x260600: 0xab28  .word       0x0000AB28                   # mfsa        $s5 # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x260600u;
    SET_GPR_U32(ctx, 21, ctx->sa);
label_260604:
    // 0x260604: 0xfb70  tge         $zero, $zero, 1005
    ctx->pc = 0x260604u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260608:
    // 0x260608: 0x0  nop
    ctx->pc = 0x260608u;
    // NOP
label_26060c:
    // 0x26060c: 0x0  nop
    ctx->pc = 0x26060cu;
    // NOP
label_260610:
    // 0x260610: 0xab48  .word       0x0000AB48                   # jr          $zero # 0000AB40 <InstrIdType: CPU_SPECIAL>
label_260614:
    if (ctx->pc == 0x260614u) {
        ctx->pc = 0x260614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260610u;
        // 0x260614: 0x12b70  tge         $zero, $at, 173 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x260618u;
        goto label_260618;
    }
    ctx->pc = 0x260610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x260614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260610u;
        // 0x260614: 0x12b70  tge         $zero, $at, 173 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260610u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x260618u;
label_260618:
    // 0x260618: 0x0  nop
    ctx->pc = 0x260618u;
    // NOP
label_26061c:
    // 0x26061c: 0x0  nop
    ctx->pc = 0x26061cu;
    // NOP
label_260620:
    // 0x260620: 0xab6e  .word       0x0000AB6E                   # dsub        $s5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260620u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_260624:
    // 0x260624: 0x121e0  .word       0x000121E0                   # add         $a0, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_260628:
    // 0x260628: 0x0  nop
    ctx->pc = 0x260628u;
    // NOP
label_26062c:
    // 0x26062c: 0x0  nop
    ctx->pc = 0x26062cu;
    // NOP
label_260630:
    // 0x260630: 0xab93  .word       0x0000AB93                   # mtlo        $zero # 0000AB80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260630u;
    ctx->lo = GPR_U64(ctx, 0);
label_260634:
    // 0x260634: 0x11470  tge         $zero, $at, 81
    ctx->pc = 0x260634u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_260638:
    // 0x260638: 0x0  nop
    ctx->pc = 0x260638u;
    // NOP
label_26063c:
    // 0x26063c: 0x0  nop
    ctx->pc = 0x26063cu;
    // NOP
label_260640:
    // 0x260640: 0xabb6  tne         $zero, $zero, 686
    ctx->pc = 0x260640u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260644:
    // 0x260644: 0x11350  .word       0x00011350                   # mfhi        $v0 # 00010340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260644u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_260648:
    // 0x260648: 0x0  nop
    ctx->pc = 0x260648u;
    // NOP
label_26064c:
    // 0x26064c: 0x0  nop
    ctx->pc = 0x26064cu;
    // NOP
label_260650:
    // 0x260650: 0xabd9  .word       0x0000ABD9                   # multu       $zero, $zero # 0000ABC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260650u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_260654:
    // 0x260654: 0xe570  tge         $zero, $zero, 917
    ctx->pc = 0x260654u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260658:
    // 0x260658: 0x0  nop
    ctx->pc = 0x260658u;
    // NOP
label_26065c:
    // 0x26065c: 0x0  nop
    ctx->pc = 0x26065cu;
    // NOP
label_260660:
    // 0x260660: 0xabf6  tne         $zero, $zero, 687
    ctx->pc = 0x260660u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260664:
    // 0x260664: 0x12090  .word       0x00012090                   # mfhi        $a0 # 00010080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260664u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_260668:
    // 0x260668: 0x0  nop
    ctx->pc = 0x260668u;
    // NOP
label_26066c:
    // 0x26066c: 0x0  nop
    ctx->pc = 0x26066cu;
    // NOP
label_260670:
    // 0x260670: 0xac1b  .word       0x0000AC1B                   # divu        $s5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260670u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_260674:
    // 0x260674: 0xf440  sll         $fp, $zero, 17
    ctx->pc = 0x260674u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_260678:
    // 0x260678: 0x0  nop
    ctx->pc = 0x260678u;
    // NOP
label_26067c:
    // 0x26067c: 0x0  nop
    ctx->pc = 0x26067cu;
    // NOP
label_260680:
    // 0x260680: 0xac3a  dsrl        $s5, $zero, 16
    ctx->pc = 0x260680u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) >> 16);
label_260684:
    // 0x260684: 0x106b0  tge         $zero, $at, 26
    ctx->pc = 0x260684u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_260688:
    // 0x260688: 0x0  nop
    ctx->pc = 0x260688u;
    // NOP
label_26068c:
    // 0x26068c: 0x0  nop
    ctx->pc = 0x26068cu;
    // NOP
label_260690:
    // 0x260690: 0xac5b  .word       0x0000AC5B                   # divu        $s5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260690u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_260694:
    // 0x260694: 0x10260  .word       0x00010260                   # add         $zero, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260694u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_260698:
    // 0x260698: 0x0  nop
    ctx->pc = 0x260698u;
    // NOP
label_26069c:
    // 0x26069c: 0x0  nop
    ctx->pc = 0x26069cu;
    // NOP
label_2606a0:
    // 0x2606a0: 0xac7c  dsll32      $s5, $zero, 17
    ctx->pc = 0x2606a0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << (32 + 17));
label_2606a4:
    // 0x2606a4: 0x10fd0  .word       0x00010FD0                   # mfhi        $at # 000107C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2606a4u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2606a8:
    // 0x2606a8: 0x0  nop
    ctx->pc = 0x2606a8u;
    // NOP
label_2606ac:
    // 0x2606ac: 0x0  nop
    ctx->pc = 0x2606acu;
    // NOP
label_2606b0:
    // 0x2606b0: 0xac9e  .word       0x0000AC9E                   # ddiv        $s5, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2606b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2606B0 raw=0x0000AC9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2606b4:
    // 0x2606b4: 0x111e0  .word       0x000111E0                   # add         $v0, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2606b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2606b8:
    // 0x2606b8: 0x0  nop
    ctx->pc = 0x2606b8u;
    // NOP
label_2606bc:
    // 0x2606bc: 0x0  nop
    ctx->pc = 0x2606bcu;
    // NOP
label_2606c0:
    // 0x2606c0: 0xacc1  .word       0x0000ACC1                   # INVALID     $zero, $zero, -0x533F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2606c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2606C0 raw=0x0000ACC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2606c4:
    // 0x2606c4: 0x102c0  sll         $zero, $at, 11
    ctx->pc = 0x2606c4u;
    
label_2606c8:
    // 0x2606c8: 0x0  nop
    ctx->pc = 0x2606c8u;
    // NOP
label_2606cc:
    // 0x2606cc: 0x0  nop
    ctx->pc = 0x2606ccu;
    // NOP
label_2606d0:
    // 0x2606d0: 0xace2  .word       0x0000ACE2                   # neg         $s5, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2606d0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2606d4:
    // 0x2606d4: 0x11d50  .word       0x00011D50                   # mfhi        $v1 # 00010540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2606d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2606d8:
    // 0x2606d8: 0x0  nop
    ctx->pc = 0x2606d8u;
    // NOP
label_2606dc:
    // 0x2606dc: 0x0  nop
    ctx->pc = 0x2606dcu;
    // NOP
label_2606e0:
    // 0x2606e0: 0xad06  .word       0x0000AD06                   # srlv        $s5, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2606e0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2606e4:
    // 0x2606e4: 0x123e0  .word       0x000123E0                   # add         $a0, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2606e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2606e8:
    // 0x2606e8: 0x0  nop
    ctx->pc = 0x2606e8u;
    // NOP
label_2606ec:
    // 0x2606ec: 0x0  nop
    ctx->pc = 0x2606ecu;
    // NOP
label_2606f0:
    // 0x2606f0: 0xad2b  .word       0x0000AD2B                   # sltu        $s5, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2606f0u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2606f4:
    // 0x2606f4: 0x113c0  sll         $v0, $at, 15
    ctx->pc = 0x2606f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
label_2606f8:
    // 0x2606f8: 0x0  nop
    ctx->pc = 0x2606f8u;
    // NOP
label_2606fc:
    // 0x2606fc: 0x0  nop
    ctx->pc = 0x2606fcu;
    // NOP
label_260700:
    // 0x260700: 0xad4e  .word       0x0000AD4E                   # INVALID     $zero, $zero, -0x52B2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260700u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x260700 raw=0x0000AD4E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260704:
    // 0x260704: 0x10950  .word       0x00010950                   # mfhi        $at # 00010140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260704u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_260708:
    // 0x260708: 0x0  nop
    ctx->pc = 0x260708u;
    // NOP
label_26070c:
    // 0x26070c: 0x0  nop
    ctx->pc = 0x26070cu;
    // NOP
label_260710:
    // 0x260710: 0xad70  tge         $zero, $zero, 693
    ctx->pc = 0x260710u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260714:
    // 0x260714: 0x13a50  .word       0x00013A50                   # mfhi        $a3 # 00010240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260714u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_260718:
    // 0x260718: 0x0  nop
    ctx->pc = 0x260718u;
    // NOP
label_26071c:
    // 0x26071c: 0x0  nop
    ctx->pc = 0x26071cu;
    // NOP
label_260720:
    // 0x260720: 0xad98  .word       0x0000AD98                   # mult        $s5, $zero, $zero # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x260720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_260724:
    // 0x260724: 0x12ae0  .word       0x00012AE0                   # add         $a1, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260724u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_260728:
    // 0x260728: 0x0  nop
    ctx->pc = 0x260728u;
    // NOP
label_26072c:
    // 0x26072c: 0x0  nop
    ctx->pc = 0x26072cu;
    // NOP
label_260730:
    // 0x260730: 0xadbe  dsrl32      $s5, $zero, 22
    ctx->pc = 0x260730u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) >> (32 + 22));
label_260734:
    // 0x260734: 0x11fc0  sll         $v1, $at, 31
    ctx->pc = 0x260734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 31));
label_260738:
    // 0x260738: 0x0  nop
    ctx->pc = 0x260738u;
    // NOP
label_26073c:
    // 0x26073c: 0x0  nop
    ctx->pc = 0x26073cu;
    // NOP
label_260740:
    // 0x260740: 0xade2  .word       0x0000ADE2                   # neg         $s5, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260740u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_260744:
    // 0x260744: 0x126c0  sll         $a0, $at, 27
    ctx->pc = 0x260744u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 27));
label_260748:
    // 0x260748: 0x0  nop
    ctx->pc = 0x260748u;
    // NOP
label_26074c:
    // 0x26074c: 0x0  nop
    ctx->pc = 0x26074cu;
    // NOP
label_260750:
    // 0x260750: 0xae07  .word       0x0000AE07                   # srav        $s5, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260750u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_260754:
    // 0x260754: 0x13070  tge         $zero, $at, 193
    ctx->pc = 0x260754u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_260758:
    // 0x260758: 0x0  nop
    ctx->pc = 0x260758u;
    // NOP
label_26075c:
    // 0x26075c: 0x0  nop
    ctx->pc = 0x26075cu;
    // NOP
label_260760:
    // 0x260760: 0xae2e  .word       0x0000AE2E                   # dsub        $s5, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260760u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_260764:
    // 0x260764: 0xf3d0  .word       0x0000F3D0                   # mfhi        $fp # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260764u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_260768:
    // 0x260768: 0x0  nop
    ctx->pc = 0x260768u;
    // NOP
label_26076c:
    // 0x26076c: 0x0  nop
    ctx->pc = 0x26076cu;
    // NOP
label_260770:
    // 0x260770: 0xae4d  break       0, 697
    ctx->pc = 0x260770u;
    runtime->handleBreak(rdram, ctx);
label_260774:
    // 0x260774: 0x138d0  .word       0x000138D0                   # mfhi        $a3 # 000100C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260774u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_260778:
    // 0x260778: 0x0  nop
    ctx->pc = 0x260778u;
    // NOP
label_26077c:
    // 0x26077c: 0x0  nop
    ctx->pc = 0x26077cu;
    // NOP
label_260780:
    // 0x260780: 0xae75  .word       0x0000AE75                   # INVALID     $zero, $zero, -0x518B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260780u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x260780 raw=0x0000AE75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260784:
    // 0x260784: 0x11fc0  sll         $v1, $at, 31
    ctx->pc = 0x260784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 31));
label_260788:
    // 0x260788: 0x0  nop
    ctx->pc = 0x260788u;
    // NOP
label_26078c:
    // 0x26078c: 0x0  nop
    ctx->pc = 0x26078cu;
    // NOP
label_260790:
    // 0x260790: 0xae99  .word       0x0000AE99                   # multu       $zero, $zero # 0000AE80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260790u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_260794:
    // 0x260794: 0x12390  .word       0x00012390                   # mfhi        $a0 # 00010380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260794u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_260798:
    // 0x260798: 0x0  nop
    ctx->pc = 0x260798u;
    // NOP
label_26079c:
    // 0x26079c: 0x0  nop
    ctx->pc = 0x26079cu;
    // NOP
label_2607a0:
    // 0x2607a0: 0xaebe  dsrl32      $s5, $zero, 26
    ctx->pc = 0x2607a0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) >> (32 + 26));
label_2607a4:
    // 0x2607a4: 0x11ae0  .word       0x00011AE0                   # add         $v1, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2607a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2607a8:
    // 0x2607a8: 0x0  nop
    ctx->pc = 0x2607a8u;
    // NOP
label_2607ac:
    // 0x2607ac: 0x0  nop
    ctx->pc = 0x2607acu;
    // NOP
label_2607b0:
    // 0x2607b0: 0xaee2  .word       0x0000AEE2                   # neg         $s5, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2607b0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2607b4:
    // 0x2607b4: 0x12790  .word       0x00012790                   # mfhi        $a0 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2607b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2607b8:
    // 0x2607b8: 0x0  nop
    ctx->pc = 0x2607b8u;
    // NOP
label_2607bc:
    // 0x2607bc: 0x0  nop
    ctx->pc = 0x2607bcu;
    // NOP
label_2607c0:
    // 0x2607c0: 0xaf07  .word       0x0000AF07                   # srav        $s5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2607c0u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2607c4:
    // 0x2607c4: 0x10f60  .word       0x00010F60                   # add         $at, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2607c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2607c8:
    // 0x2607c8: 0x0  nop
    ctx->pc = 0x2607c8u;
    // NOP
label_2607cc:
    // 0x2607cc: 0x0  nop
    ctx->pc = 0x2607ccu;
    // NOP
label_2607d0:
    // 0x2607d0: 0xaf29  .word       0x0000AF29                   # mtsa        $zero # 0000AF00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2607d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2607d4:
    // 0x2607d4: 0x10130  tge         $zero, $at, 4
    ctx->pc = 0x2607d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2607d8:
    // 0x2607d8: 0x0  nop
    ctx->pc = 0x2607d8u;
    // NOP
label_2607dc:
    // 0x2607dc: 0x0  nop
    ctx->pc = 0x2607dcu;
    // NOP
label_2607e0:
    // 0x2607e0: 0xaf4a  .word       0x0000AF4A                   # movz        $s5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2607e0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_2607e4:
    // 0x2607e4: 0x11f80  sll         $v1, $at, 30
    ctx->pc = 0x2607e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 30));
label_2607e8:
    // 0x2607e8: 0x0  nop
    ctx->pc = 0x2607e8u;
    // NOP
label_2607ec:
    // 0x2607ec: 0x0  nop
    ctx->pc = 0x2607ecu;
    // NOP
label_2607f0:
    // 0x2607f0: 0xaf6e  .word       0x0000AF6E                   # dsub        $s5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2607f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_2607f4:
    // 0x2607f4: 0xc670  tge         $zero, $zero, 793
    ctx->pc = 0x2607f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2607f8:
    // 0x2607f8: 0x0  nop
    ctx->pc = 0x2607f8u;
    // NOP
label_2607fc:
    // 0x2607fc: 0x0  nop
    ctx->pc = 0x2607fcu;
    // NOP
label_260800:
    // 0x260800: 0xaf87  .word       0x0000AF87                   # srav        $s5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260800u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_260804:
    // 0x260804: 0xea00  sll         $sp, $zero, 8
    ctx->pc = 0x260804u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_260808:
    // 0x260808: 0x0  nop
    ctx->pc = 0x260808u;
    // NOP
label_26080c:
    // 0x26080c: 0x0  nop
    ctx->pc = 0x26080cu;
    // NOP
label_260810:
    // 0x260810: 0xafa5  .word       0x0000AFA5                   # move        $s5, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260810u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_260814:
    // 0x260814: 0x18c90  .word       0x00018C90                   # mfhi        $s1 # 00010480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260814u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_260818:
    // 0x260818: 0x0  nop
    ctx->pc = 0x260818u;
    // NOP
label_26081c:
    // 0x26081c: 0x0  nop
    ctx->pc = 0x26081cu;
    // NOP
label_260820:
    // 0x260820: 0xafd7  .word       0x0000AFD7                   # dsrav       $s5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260820u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_260824:
    // 0x260824: 0xb620  .word       0x0000B620                   # add         $s6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260824u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_260828:
    // 0x260828: 0x0  nop
    ctx->pc = 0x260828u;
    // NOP
label_26082c:
    // 0x26082c: 0x0  nop
    ctx->pc = 0x26082cu;
    // NOP
label_260830:
    // 0x260830: 0xafee  .word       0x0000AFEE                   # dsub        $s5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260830u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_260834:
    // 0x260834: 0xae70  tge         $zero, $zero, 697
    ctx->pc = 0x260834u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260838:
    // 0x260838: 0x0  nop
    ctx->pc = 0x260838u;
    // NOP
label_26083c:
    // 0x26083c: 0x0  nop
    ctx->pc = 0x26083cu;
    // NOP
label_260840:
    // 0x260840: 0xb004  sllv        $s6, $zero, $zero
    ctx->pc = 0x260840u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_260844:
    // 0x260844: 0xe620  .word       0x0000E620                   # add         $gp, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_260848:
    // 0x260848: 0x0  nop
    ctx->pc = 0x260848u;
    // NOP
label_26084c:
    // 0x26084c: 0x0  nop
    ctx->pc = 0x26084cu;
    // NOP
label_260850:
    // 0x260850: 0xb021  addu        $s6, $zero, $zero
    ctx->pc = 0x260850u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_260854:
    // 0x260854: 0x3bd0  .word       0x00003BD0                   # mfhi        $a3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260854u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_260858:
    // 0x260858: 0x0  nop
    ctx->pc = 0x260858u;
    // NOP
label_26085c:
    // 0x26085c: 0x0  nop
    ctx->pc = 0x26085cu;
    // NOP
label_260860:
    // 0x260860: 0xb029  .word       0x0000B029                   # mtsa        $zero # 0000B000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x260860u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_260864:
    // 0x260864: 0xa3a0  .word       0x0000A3A0                   # add         $s4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260864u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_260868:
    // 0x260868: 0x0  nop
    ctx->pc = 0x260868u;
    // NOP
label_26086c:
    // 0x26086c: 0x0  nop
    ctx->pc = 0x26086cu;
    // NOP
label_260870:
    // 0x260870: 0xb03e  dsrl32      $s6, $zero, 0
    ctx->pc = 0x260870u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (32 + 0));
label_260874:
    // 0x260874: 0x7220  .word       0x00007220                   # add         $t6, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260874u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_260878:
    // 0x260878: 0x0  nop
    ctx->pc = 0x260878u;
    // NOP
label_26087c:
    // 0x26087c: 0x0  nop
    ctx->pc = 0x26087cu;
    // NOP
label_260880:
    // 0x260880: 0xb04d  break       0, 705
    ctx->pc = 0x260880u;
    runtime->handleBreak(rdram, ctx);
label_260884:
    // 0x260884: 0x4190  .word       0x00004190                   # mfhi        $t0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260884u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_260888:
    // 0x260888: 0x0  nop
    ctx->pc = 0x260888u;
    // NOP
label_26088c:
    // 0x26088c: 0x0  nop
    ctx->pc = 0x26088cu;
    // NOP
label_260890:
    // 0x260890: 0xb056  .word       0x0000B056                   # dsrlv       $s6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260890u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_260894:
    // 0x260894: 0xcf40  sll         $t9, $zero, 29
    ctx->pc = 0x260894u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_260898:
    // 0x260898: 0x0  nop
    ctx->pc = 0x260898u;
    // NOP
label_26089c:
    // 0x26089c: 0x0  nop
    ctx->pc = 0x26089cu;
    // NOP
label_2608a0:
    // 0x2608a0: 0xb070  tge         $zero, $zero, 705
    ctx->pc = 0x2608a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2608a4:
    // 0x2608a4: 0x6ed0  .word       0x00006ED0                   # mfhi        $t5 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2608a4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2608a8:
    // 0x2608a8: 0x0  nop
    ctx->pc = 0x2608a8u;
    // NOP
label_2608ac:
    // 0x2608ac: 0x0  nop
    ctx->pc = 0x2608acu;
    // NOP
label_2608b0:
    // 0x2608b0: 0xb07e  dsrl32      $s6, $zero, 1
    ctx->pc = 0x2608b0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (32 + 1));
label_2608b4:
    // 0x2608b4: 0x1e20  .word       0x00001E20                   # add         $v1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2608b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2608b8:
    // 0x2608b8: 0x0  nop
    ctx->pc = 0x2608b8u;
    // NOP
label_2608bc:
    // 0x2608bc: 0x0  nop
    ctx->pc = 0x2608bcu;
    // NOP
label_2608c0:
    // 0x2608c0: 0xb082  srl         $s6, $zero, 2
    ctx->pc = 0x2608c0u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_2608c4:
    // 0x2608c4: 0x9090  .word       0x00009090                   # mfhi        $s2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2608c4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2608c8:
    // 0x2608c8: 0x0  nop
    ctx->pc = 0x2608c8u;
    // NOP
label_2608cc:
    // 0x2608cc: 0x0  nop
    ctx->pc = 0x2608ccu;
    // NOP
label_2608d0:
    // 0x2608d0: 0xb095  .word       0x0000B095                   # INVALID     $zero, $zero, -0x4F6B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2608d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2608D0 raw=0x0000B095"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2608d4:
    // 0x2608d4: 0x3df0  tge         $zero, $zero, 247
    ctx->pc = 0x2608d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2608d8:
    // 0x2608d8: 0x0  nop
    ctx->pc = 0x2608d8u;
    // NOP
label_2608dc:
    // 0x2608dc: 0x0  nop
    ctx->pc = 0x2608dcu;
    // NOP
label_2608e0:
    // 0x2608e0: 0xb09d  .word       0x0000B09D                   # dmultu      $zero, $zero # 0000B080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2608e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2608E0 raw=0x0000B09D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2608e4:
    // 0x2608e4: 0xc2a0  .word       0x0000C2A0                   # add         $t8, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2608e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_2608e8:
    // 0x2608e8: 0x0  nop
    ctx->pc = 0x2608e8u;
    // NOP
label_2608ec:
    // 0x2608ec: 0x0  nop
    ctx->pc = 0x2608ecu;
    // NOP
label_2608f0:
    // 0x2608f0: 0xb0b6  tne         $zero, $zero, 706
    ctx->pc = 0x2608f0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2608f4:
    // 0x2608f4: 0x6350  .word       0x00006350                   # mfhi        $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2608f4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2608f8:
    // 0x2608f8: 0x0  nop
    ctx->pc = 0x2608f8u;
    // NOP
label_2608fc:
    // 0x2608fc: 0x0  nop
    ctx->pc = 0x2608fcu;
    // NOP
label_260900:
    // 0x260900: 0xb0c3  sra         $s6, $zero, 3
    ctx->pc = 0x260900u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 0), 3));
label_260904:
    // 0x260904: 0x99a0  .word       0x000099A0                   # add         $s3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260904u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_260908:
    // 0x260908: 0x0  nop
    ctx->pc = 0x260908u;
    // NOP
label_26090c:
    // 0x26090c: 0x0  nop
    ctx->pc = 0x26090cu;
    // NOP
label_260910:
    // 0x260910: 0xb0d7  .word       0x0000B0D7                   # dsrav       $s6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260910u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_260914:
    // 0x260914: 0x4f50  .word       0x00004F50                   # mfhi        $t1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260914u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_260918:
    // 0x260918: 0x0  nop
    ctx->pc = 0x260918u;
    // NOP
label_26091c:
    // 0x26091c: 0x0  nop
    ctx->pc = 0x26091cu;
    // NOP
label_260920:
    // 0x260920: 0xb0e1  .word       0x0000B0E1                   # addu        $s6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260920u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_260924:
    // 0x260924: 0x36a0  .word       0x000036A0                   # add         $a2, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260924u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_260928:
    // 0x260928: 0x0  nop
    ctx->pc = 0x260928u;
    // NOP
label_26092c:
    // 0x26092c: 0x0  nop
    ctx->pc = 0x26092cu;
    // NOP
label_260930:
    // 0x260930: 0xb0e8  .word       0x0000B0E8                   # mfsa        $s6 # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x260930u;
    SET_GPR_U32(ctx, 22, ctx->sa);
label_260934:
    // 0x260934: 0xb0c0  sll         $s6, $zero, 3
    ctx->pc = 0x260934u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_260938:
    // 0x260938: 0x0  nop
    ctx->pc = 0x260938u;
    // NOP
label_26093c:
    // 0x26093c: 0x0  nop
    ctx->pc = 0x26093cu;
    // NOP
label_260940:
    // 0x260940: 0xb0ff  dsra32      $s6, $zero, 3
    ctx->pc = 0x260940u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 0) >> (32 + 3));
label_260944:
    // 0x260944: 0x8a20  .word       0x00008A20                   # add         $s1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260944u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_260948:
    // 0x260948: 0x0  nop
    ctx->pc = 0x260948u;
    // NOP
label_26094c:
    // 0x26094c: 0x0  nop
    ctx->pc = 0x26094cu;
    // NOP
label_260950:
    // 0x260950: 0xb111  .word       0x0000B111                   # mthi        $zero # 0000B100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260950u;
    ctx->hi = GPR_U64(ctx, 0);
label_260954:
    // 0x260954: 0x9f60  .word       0x00009F60                   # add         $s3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_260958:
    // 0x260958: 0x0  nop
    ctx->pc = 0x260958u;
    // NOP
label_26095c:
    // 0x26095c: 0x0  nop
    ctx->pc = 0x26095cu;
    // NOP
label_260960:
    // 0x260960: 0xb125  .word       0x0000B125                   # move        $s6, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260960u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_260964:
    // 0x260964: 0x2a80  sll         $a1, $zero, 10
    ctx->pc = 0x260964u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_260968:
    // 0x260968: 0x0  nop
    ctx->pc = 0x260968u;
    // NOP
label_26096c:
    // 0x26096c: 0x0  nop
    ctx->pc = 0x26096cu;
    // NOP
label_260970:
    // 0x260970: 0xb12b  .word       0x0000B12B                   # sltu        $s6, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260970u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_260974:
    // 0x260974: 0xc620  .word       0x0000C620                   # add         $t8, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260974u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_260978:
    // 0x260978: 0x0  nop
    ctx->pc = 0x260978u;
    // NOP
label_26097c:
    // 0x26097c: 0x0  nop
    ctx->pc = 0x26097cu;
    // NOP
label_260980:
    // 0x260980: 0xb144  .word       0x0000B144                   # sllv        $s6, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260980u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_260984:
    // 0x260984: 0x98e0  .word       0x000098E0                   # add         $s3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260984u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_260988:
    // 0x260988: 0x0  nop
    ctx->pc = 0x260988u;
    // NOP
label_26098c:
    // 0x26098c: 0x0  nop
    ctx->pc = 0x26098cu;
    // NOP
label_260990:
    // 0x260990: 0xb158  .word       0x0000B158                   # mult        $s6, $zero, $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x260990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_260994:
    // 0x260994: 0xa220  .word       0x0000A220                   # add         $s4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260994u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_260998:
    // 0x260998: 0x0  nop
    ctx->pc = 0x260998u;
    // NOP
label_26099c:
    // 0x26099c: 0x0  nop
    ctx->pc = 0x26099cu;
    // NOP
label_2609a0:
    // 0x2609a0: 0xb16d  .word       0x0000B16D                   # daddu       $s6, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2609a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2609a4:
    // 0x2609a4: 0xd100  sll         $k0, $zero, 4
    ctx->pc = 0x2609a4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2609a8:
    // 0x2609a8: 0x0  nop
    ctx->pc = 0x2609a8u;
    // NOP
label_2609ac:
    // 0x2609ac: 0x0  nop
    ctx->pc = 0x2609acu;
    // NOP
label_2609b0:
    // 0x2609b0: 0xb188  .word       0x0000B188                   # jr          $zero # 0000B180 <InstrIdType: CPU_SPECIAL>
label_2609b4:
    if (ctx->pc == 0x2609B4u) {
        ctx->pc = 0x2609B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2609B0u;
        // 0x2609b4: 0x3eb0  tge         $zero, $zero, 250 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2609B8u;
        goto label_2609b8;
    }
    ctx->pc = 0x2609B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2609B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2609B0u;
        // 0x2609b4: 0x3eb0  tge         $zero, $zero, 250 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2609B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2609B8u;
label_2609b8:
    // 0x2609b8: 0x0  nop
    ctx->pc = 0x2609b8u;
    // NOP
label_2609bc:
    // 0x2609bc: 0x0  nop
    ctx->pc = 0x2609bcu;
    // NOP
label_2609c0:
    // 0x2609c0: 0xb190  .word       0x0000B190                   # mfhi        $s6 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2609c0u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2609c4:
    // 0x2609c4: 0x83e0  .word       0x000083E0                   # add         $s0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2609c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2609c8:
    // 0x2609c8: 0x0  nop
    ctx->pc = 0x2609c8u;
    // NOP
label_2609cc:
    // 0x2609cc: 0x0  nop
    ctx->pc = 0x2609ccu;
    // NOP
label_2609d0:
    // 0x2609d0: 0xb1a1  .word       0x0000B1A1                   # addu        $s6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2609d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2609d4:
    // 0x2609d4: 0xf5c0  sll         $fp, $zero, 23
    ctx->pc = 0x2609d4u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_2609d8:
    // 0x2609d8: 0x0  nop
    ctx->pc = 0x2609d8u;
    // NOP
label_2609dc:
    // 0x2609dc: 0x0  nop
    ctx->pc = 0x2609dcu;
    // NOP
label_2609e0:
    // 0x2609e0: 0xb1c0  sll         $s6, $zero, 7
    ctx->pc = 0x2609e0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_2609e4:
    // 0x2609e4: 0x2fe0  .word       0x00002FE0                   # add         $a1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2609e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_2609e8:
    // 0x2609e8: 0x0  nop
    ctx->pc = 0x2609e8u;
    // NOP
label_2609ec:
    // 0x2609ec: 0x0  nop
    ctx->pc = 0x2609ecu;
    // NOP
label_2609f0:
    // 0x2609f0: 0xb1c6  .word       0x0000B1C6                   # srlv        $s6, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2609f0u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2609f4:
    // 0x2609f4: 0x5240  sll         $t2, $zero, 9
    ctx->pc = 0x2609f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2609f8:
    // 0x2609f8: 0x0  nop
    ctx->pc = 0x2609f8u;
    // NOP
label_2609fc:
    // 0x2609fc: 0x0  nop
    ctx->pc = 0x2609fcu;
    // NOP
label_260a00:
    // 0x260a00: 0xb1d1  .word       0x0000B1D1                   # mthi        $zero # 0000B1C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a00u;
    ctx->hi = GPR_U64(ctx, 0);
label_260a04:
    // 0x260a04: 0x60c0  sll         $t4, $zero, 3
    ctx->pc = 0x260a04u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_260a08:
    // 0x260a08: 0x0  nop
    ctx->pc = 0x260a08u;
    // NOP
label_260a0c:
    // 0x260a0c: 0x0  nop
    ctx->pc = 0x260a0cu;
    // NOP
label_260a10:
    // 0x260a10: 0xb1de  .word       0x0000B1DE                   # ddiv        $s6, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x260A10 raw=0x0000B1DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260a14:
    // 0x260a14: 0x83e0  .word       0x000083E0                   # add         $s0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_260a18:
    // 0x260a18: 0x0  nop
    ctx->pc = 0x260a18u;
    // NOP
label_260a1c:
    // 0x260a1c: 0x0  nop
    ctx->pc = 0x260a1cu;
    // NOP
label_260a20:
    // 0x260a20: 0xb1ef  .word       0x0000B1EF                   # dsubu       $s6, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a20u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_260a24:
    // 0x260a24: 0x3170  tge         $zero, $zero, 197
    ctx->pc = 0x260a24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260a28:
    // 0x260a28: 0x0  nop
    ctx->pc = 0x260a28u;
    // NOP
label_260a2c:
    // 0x260a2c: 0x0  nop
    ctx->pc = 0x260a2cu;
    // NOP
label_260a30:
    // 0x260a30: 0xb1f6  tne         $zero, $zero, 711
    ctx->pc = 0x260a30u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260a34:
    // 0x260a34: 0xa4a0  .word       0x0000A4A0                   # add         $s4, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_260a38:
    // 0x260a38: 0x0  nop
    ctx->pc = 0x260a38u;
    // NOP
label_260a3c:
    // 0x260a3c: 0x0  nop
    ctx->pc = 0x260a3cu;
    // NOP
label_260a40:
    // 0x260a40: 0xb20b  .word       0x0000B20B                   # movn        $s6, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a40u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_260a44:
    // 0x260a44: 0x57e0  .word       0x000057E0                   # add         $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_260a48:
    // 0x260a48: 0x0  nop
    ctx->pc = 0x260a48u;
    // NOP
label_260a4c:
    // 0x260a4c: 0x0  nop
    ctx->pc = 0x260a4cu;
    // NOP
label_260a50:
    // 0x260a50: 0xb216  .word       0x0000B216                   # dsrlv       $s6, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a50u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_260a54:
    // 0x260a54: 0x5770  tge         $zero, $zero, 349
    ctx->pc = 0x260a54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260a58:
    // 0x260a58: 0x0  nop
    ctx->pc = 0x260a58u;
    // NOP
label_260a5c:
    // 0x260a5c: 0x0  nop
    ctx->pc = 0x260a5cu;
    // NOP
label_260a60:
    // 0x260a60: 0xb221  .word       0x0000B221                   # addu        $s6, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_260a64:
    // 0x260a64: 0x13550  .word       0x00013550                   # mfhi        $a2 # 00010540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a64u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_260a68:
    // 0x260a68: 0x0  nop
    ctx->pc = 0x260a68u;
    // NOP
label_260a6c:
    // 0x260a6c: 0x0  nop
    ctx->pc = 0x260a6cu;
    // NOP
label_260a70:
    // 0x260a70: 0xb248  .word       0x0000B248                   # jr          $zero # 0000B240 <InstrIdType: CPU_SPECIAL>
label_260a74:
    if (ctx->pc == 0x260A74u) {
        ctx->pc = 0x260A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A70u;
        // 0x260a74: 0x6c50  .word       0x00006C50                   # mfhi        $t5 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x260A78u;
        goto label_260a78;
    }
    ctx->pc = 0x260A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x260A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A70u;
        // 0x260a74: 0x6c50  .word       0x00006C50                   # mfhi        $t5 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260A70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x260A78u;
label_260a78:
    // 0x260a78: 0x0  nop
    ctx->pc = 0x260a78u;
    // NOP
label_260a7c:
    // 0x260a7c: 0x0  nop
    ctx->pc = 0x260a7cu;
    // NOP
label_260a80:
    // 0x260a80: 0xb256  .word       0x0000B256                   # dsrlv       $s6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a80u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_260a84:
    // 0x260a84: 0x2ce0  .word       0x00002CE0                   # add         $a1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_260a88:
    // 0x260a88: 0x0  nop
    ctx->pc = 0x260a88u;
    // NOP
label_260a8c:
    // 0x260a8c: 0x0  nop
    ctx->pc = 0x260a8cu;
    // NOP
label_260a90:
    // 0x260a90: 0xb25c  .word       0x0000B25C                   # dmult       $zero, $zero # 0000B240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260a90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x260A90 raw=0x0000B25C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260a94:
    // 0x260a94: 0x2b80  sll         $a1, $zero, 14
    ctx->pc = 0x260a94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_260a98:
    // 0x260a98: 0x0  nop
    ctx->pc = 0x260a98u;
    // NOP
label_260a9c:
    // 0x260a9c: 0x0  nop
    ctx->pc = 0x260a9cu;
    // NOP
label_260aa0:
    // 0x260aa0: 0xb262  .word       0x0000B262                   # neg         $s6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260aa0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 22, (int32_t)tmp); }
label_260aa4:
    // 0x260aa4: 0x3c50  .word       0x00003C50                   # mfhi        $a3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260aa4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_260aa8:
    // 0x260aa8: 0x0  nop
    ctx->pc = 0x260aa8u;
    // NOP
label_260aac:
    // 0x260aac: 0x0  nop
    ctx->pc = 0x260aacu;
    // NOP
label_260ab0:
    // 0x260ab0: 0xb26a  .word       0x0000B26A                   # slt         $s6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ab0u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_260ab4:
    // 0x260ab4: 0xcfc0  sll         $t9, $zero, 31
    ctx->pc = 0x260ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_260ab8:
    // 0x260ab8: 0x0  nop
    ctx->pc = 0x260ab8u;
    // NOP
label_260abc:
    // 0x260abc: 0x0  nop
    ctx->pc = 0x260abcu;
    // NOP
label_260ac0:
    // 0x260ac0: 0xb284  .word       0x0000B284                   # sllv        $s6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ac0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_260ac4:
    // 0x260ac4: 0x2830  tge         $zero, $zero, 160
    ctx->pc = 0x260ac4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260ac8:
    // 0x260ac8: 0x0  nop
    ctx->pc = 0x260ac8u;
    // NOP
label_260acc:
    // 0x260acc: 0x0  nop
    ctx->pc = 0x260accu;
    // NOP
label_260ad0:
    // 0x260ad0: 0xb28a  .word       0x0000B28A                   # movz        $s6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ad0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_260ad4:
    // 0x260ad4: 0x7b90  .word       0x00007B90                   # mfhi        $t7 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ad4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_260ad8:
    // 0x260ad8: 0x0  nop
    ctx->pc = 0x260ad8u;
    // NOP
label_260adc:
    // 0x260adc: 0x0  nop
    ctx->pc = 0x260adcu;
    // NOP
label_260ae0:
    // 0x260ae0: 0xb29a  .word       0x0000B29A                   # div         $s6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ae0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_260ae4:
    // 0x260ae4: 0x135b0  tge         $zero, $at, 214
    ctx->pc = 0x260ae4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_260ae8:
    // 0x260ae8: 0x0  nop
    ctx->pc = 0x260ae8u;
    // NOP
label_260aec:
    // 0x260aec: 0x0  nop
    ctx->pc = 0x260aecu;
    // NOP
label_260af0:
    // 0x260af0: 0xb2c1  .word       0x0000B2C1                   # INVALID     $zero, $zero, -0x4D3F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260af0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x260AF0 raw=0x0000B2C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260af4:
    // 0x260af4: 0xb3d0  .word       0x0000B3D0                   # mfhi        $s6 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260af4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_260af8:
    // 0x260af8: 0x0  nop
    ctx->pc = 0x260af8u;
    // NOP
label_260afc:
    // 0x260afc: 0x0  nop
    ctx->pc = 0x260afcu;
    // NOP
label_260b00:
    // 0x260b00: 0xb2d8  .word       0x0000B2D8                   # mult        $s6, $zero, $zero # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x260b00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_260b04:
    // 0x260b04: 0x8170  tge         $zero, $zero, 517
    ctx->pc = 0x260b04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260b08:
    // 0x260b08: 0x0  nop
    ctx->pc = 0x260b08u;
    // NOP
label_260b0c:
    // 0x260b0c: 0x0  nop
    ctx->pc = 0x260b0cu;
    // NOP
label_260b10:
    // 0x260b10: 0xb2e9  .word       0x0000B2E9                   # mtsa        $zero # 0000B2C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x260b10u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_260b14:
    // 0x260b14: 0xc760  .word       0x0000C760                   # add         $t8, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260b14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_260b18:
    // 0x260b18: 0x0  nop
    ctx->pc = 0x260b18u;
    // NOP
label_260b1c:
    // 0x260b1c: 0x0  nop
    ctx->pc = 0x260b1cu;
    // NOP
label_260b20:
    // 0x260b20: 0xb302  srl         $s6, $zero, 12
    ctx->pc = 0x260b20u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 0), 12));
label_260b24:
    // 0x260b24: 0x38c0  sll         $a3, $zero, 3
    ctx->pc = 0x260b24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_260b28:
    // 0x260b28: 0x0  nop
    ctx->pc = 0x260b28u;
    // NOP
label_260b2c:
    // 0x260b2c: 0x0  nop
    ctx->pc = 0x260b2cu;
    // NOP
label_260b30:
    // 0x260b30: 0xb30a  .word       0x0000B30A                   # movz        $s6, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260b30u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_260b34:
    // 0x260b34: 0xb890  .word       0x0000B890                   # mfhi        $s7 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260b34u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_260b38:
    // 0x260b38: 0x0  nop
    ctx->pc = 0x260b38u;
    // NOP
label_260b3c:
    // 0x260b3c: 0x0  nop
    ctx->pc = 0x260b3cu;
    // NOP
label_260b40:
    // 0x260b40: 0xb322  .word       0x0000B322                   # neg         $s6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260b40u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 22, (int32_t)tmp); }
label_260b44:
    // 0x260b44: 0xca50  .word       0x0000CA50                   # mfhi        $t9 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260b44u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_260b48:
    // 0x260b48: 0x0  nop
    ctx->pc = 0x260b48u;
    // NOP
label_260b4c:
    // 0x260b4c: 0x0  nop
    ctx->pc = 0x260b4cu;
    // NOP
label_260b50:
    // 0x260b50: 0xb33c  dsll32      $s6, $zero, 12
    ctx->pc = 0x260b50u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (32 + 12));
label_260b54:
    // 0x260b54: 0x9dc0  sll         $s3, $zero, 23
    ctx->pc = 0x260b54u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_260b58:
    // 0x260b58: 0x0  nop
    ctx->pc = 0x260b58u;
    // NOP
label_260b5c:
    // 0x260b5c: 0x0  nop
    ctx->pc = 0x260b5cu;
    // NOP
label_260b60:
    // 0x260b60: 0xb350  .word       0x0000B350                   # mfhi        $s6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260b60u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_260b64:
    // 0x260b64: 0xcfa0  .word       0x0000CFA0                   # add         $t9, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260b64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_260b68:
    // 0x260b68: 0x0  nop
    ctx->pc = 0x260b68u;
    // NOP
label_260b6c:
    // 0x260b6c: 0x0  nop
    ctx->pc = 0x260b6cu;
    // NOP
label_260b70:
    // 0x260b70: 0xb36a  .word       0x0000B36A                   # slt         $s6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260b70u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_260b74:
    // 0x260b74: 0x1ba30  tge         $zero, $at, 744
    ctx->pc = 0x260b74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_260b78:
    // 0x260b78: 0x0  nop
    ctx->pc = 0x260b78u;
    // NOP
label_260b7c:
    // 0x260b7c: 0x0  nop
    ctx->pc = 0x260b7cu;
    // NOP
label_260b80:
    // 0x260b80: 0xb3a2  .word       0x0000B3A2                   # neg         $s6, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260b80u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 22, (int32_t)tmp); }
label_260b84:
    // 0x260b84: 0x5300  sll         $t2, $zero, 12
    ctx->pc = 0x260b84u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_260b88:
    // 0x260b88: 0x0  nop
    ctx->pc = 0x260b88u;
    // NOP
label_260b8c:
    // 0x260b8c: 0x0  nop
    ctx->pc = 0x260b8cu;
    // NOP
label_260b90:
    // 0x260b90: 0xb3ad  .word       0x0000B3AD                   # daddu       $s6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260b90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260b94:
    // 0x260b94: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x260b94u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_260b98:
    // 0x260b98: 0x0  nop
    ctx->pc = 0x260b98u;
    // NOP
label_260b9c:
    // 0x260b9c: 0x0  nop
    ctx->pc = 0x260b9cu;
    // NOP
label_260ba0:
    // 0x260ba0: 0xb3b9  .word       0x0000B3B9                   # INVALID     $zero, $zero, -0x4C47 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ba0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x260BA0 raw=0x0000B3B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260ba4:
    // 0x260ba4: 0xbac0  sll         $s7, $zero, 11
    ctx->pc = 0x260ba4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_260ba8:
    // 0x260ba8: 0x0  nop
    ctx->pc = 0x260ba8u;
    // NOP
label_260bac:
    // 0x260bac: 0x0  nop
    ctx->pc = 0x260bacu;
    // NOP
label_260bb0:
    // 0x260bb0: 0xb3d1  .word       0x0000B3D1                   # mthi        $zero # 0000B3C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260bb0u;
    ctx->hi = GPR_U64(ctx, 0);
label_260bb4:
    // 0x260bb4: 0xe850  .word       0x0000E850                   # mfhi        $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260bb4u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_260bb8:
    // 0x260bb8: 0x0  nop
    ctx->pc = 0x260bb8u;
    // NOP
label_260bbc:
    // 0x260bbc: 0x0  nop
    ctx->pc = 0x260bbcu;
    // NOP
label_260bc0:
    // 0x260bc0: 0xb3ef  .word       0x0000B3EF                   # dsubu       $s6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260bc0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_260bc4:
    // 0x260bc4: 0xc480  sll         $t8, $zero, 18
    ctx->pc = 0x260bc4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_260bc8:
    // 0x260bc8: 0x0  nop
    ctx->pc = 0x260bc8u;
    // NOP
label_260bcc:
    // 0x260bcc: 0x0  nop
    ctx->pc = 0x260bccu;
    // NOP
label_260bd0:
    // 0x260bd0: 0xb408  .word       0x0000B408                   # jr          $zero # 0000B400 <InstrIdType: CPU_SPECIAL>
label_260bd4:
    if (ctx->pc == 0x260BD4u) {
        ctx->pc = 0x260BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BD0u;
        // 0x260bd4: 0x13e0  .word       0x000013E0                   # add         $v0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x260BD8u;
        goto label_260bd8;
    }
    ctx->pc = 0x260BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x260BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BD0u;
        // 0x260bd4: 0x13e0  .word       0x000013E0                   # add         $v0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260BD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x260BD8u;
label_260bd8:
    // 0x260bd8: 0x0  nop
    ctx->pc = 0x260bd8u;
    // NOP
label_260bdc:
    // 0x260bdc: 0x0  nop
    ctx->pc = 0x260bdcu;
    // NOP
label_260be0:
    // 0x260be0: 0xb40b  .word       0x0000B40B                   # movn        $s6, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260be0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_260be4:
    // 0x260be4: 0x6580  sll         $t4, $zero, 22
    ctx->pc = 0x260be4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_260be8:
    // 0x260be8: 0x0  nop
    ctx->pc = 0x260be8u;
    // NOP
label_260bec:
    // 0x260bec: 0x0  nop
    ctx->pc = 0x260becu;
    // NOP
label_260bf0:
    // 0x260bf0: 0xb418  .word       0x0000B418                   # mult        $s6, $zero, $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x260bf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_260bf4:
    // 0x260bf4: 0x1d90  .word       0x00001D90                   # mfhi        $v1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260bf4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_260bf8:
    // 0x260bf8: 0x0  nop
    ctx->pc = 0x260bf8u;
    // NOP
label_260bfc:
    // 0x260bfc: 0x0  nop
    ctx->pc = 0x260bfcu;
    // NOP
label_260c00:
    // 0x260c00: 0xb41c  .word       0x0000B41C                   # dmult       $zero, $zero # 0000B400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x260C00 raw=0x0000B41C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260c04:
    // 0x260c04: 0x5560  .word       0x00005560                   # add         $t2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_260c08:
    // 0x260c08: 0x0  nop
    ctx->pc = 0x260c08u;
    // NOP
label_260c0c:
    // 0x260c0c: 0x0  nop
    ctx->pc = 0x260c0cu;
    // NOP
label_260c10:
    // 0x260c10: 0xb427  .word       0x0000B427                   # not         $s6, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c10u;
    SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_260c14:
    // 0x260c14: 0x70e0  .word       0x000070E0                   # add         $t6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_260c18:
    // 0x260c18: 0x0  nop
    ctx->pc = 0x260c18u;
    // NOP
label_260c1c:
    // 0x260c1c: 0x0  nop
    ctx->pc = 0x260c1cu;
    // NOP
label_260c20:
    // 0x260c20: 0xb436  tne         $zero, $zero, 720
    ctx->pc = 0x260c20u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260c24:
    // 0x260c24: 0x7470  tge         $zero, $zero, 465
    ctx->pc = 0x260c24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260c28:
    // 0x260c28: 0x0  nop
    ctx->pc = 0x260c28u;
    // NOP
label_260c2c:
    // 0x260c2c: 0x0  nop
    ctx->pc = 0x260c2cu;
    // NOP
label_260c30:
    // 0x260c30: 0xb445  .word       0x0000B445                   # INVALID     $zero, $zero, -0x4BBB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x260C30 raw=0x0000B445"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_260c34:
    // 0x260c34: 0x3600  sll         $a2, $zero, 24
    ctx->pc = 0x260c34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_260c38:
    // 0x260c38: 0x0  nop
    ctx->pc = 0x260c38u;
    // NOP
label_260c3c:
    // 0x260c3c: 0x0  nop
    ctx->pc = 0x260c3cu;
    // NOP
label_260c40:
    // 0x260c40: 0xb44c  syscall     721
    ctx->pc = 0x260c40u;
    ctx->pc = 0x260C44u;
runtime->handleSyscall(rdram, ctx, 0x2D1u);
label_260c44:
    // 0x260c44: 0x3c00  sll         $a3, $zero, 16
    ctx->pc = 0x260c44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_260c48:
    // 0x260c48: 0x0  nop
    ctx->pc = 0x260c48u;
    // NOP
label_260c4c:
    // 0x260c4c: 0x0  nop
    ctx->pc = 0x260c4cu;
    // NOP
label_260c50:
    // 0x260c50: 0xb454  .word       0x0000B454                   # dsllv       $s6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c50u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_260c54:
    // 0x260c54: 0x27d0  .word       0x000027D0                   # mfhi        $a0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c54u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_260c58:
    // 0x260c58: 0x0  nop
    ctx->pc = 0x260c58u;
    // NOP
label_260c5c:
    // 0x260c5c: 0x0  nop
    ctx->pc = 0x260c5cu;
    // NOP
label_260c60:
    // 0x260c60: 0xb459  .word       0x0000B459                   # multu       $zero, $zero # 0000B440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c60u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_260c64:
    // 0x260c64: 0x6220  .word       0x00006220                   # add         $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_260c68:
    // 0x260c68: 0x0  nop
    ctx->pc = 0x260c68u;
    // NOP
label_260c6c:
    // 0x260c6c: 0x0  nop
    ctx->pc = 0x260c6cu;
    // NOP
label_260c70:
    // 0x260c70: 0xb466  .word       0x0000B466                   # xor         $s6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c70u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_260c74:
    // 0x260c74: 0x2a70  tge         $zero, $zero, 169
    ctx->pc = 0x260c74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260c78:
    // 0x260c78: 0x0  nop
    ctx->pc = 0x260c78u;
    // NOP
label_260c7c:
    // 0x260c7c: 0x0  nop
    ctx->pc = 0x260c7cu;
    // NOP
label_260c80:
    // 0x260c80: 0xb46c  .word       0x0000B46C                   # dadd        $s6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c80u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_260c84:
    // 0x260c84: 0x9f90  .word       0x00009F90                   # mfhi        $s3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260c84u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_260c88:
    // 0x260c88: 0x0  nop
    ctx->pc = 0x260c88u;
    // NOP
label_260c8c:
    // 0x260c8c: 0x0  nop
    ctx->pc = 0x260c8cu;
    // NOP
label_260c90:
    // 0x260c90: 0xb480  sll         $s6, $zero, 18
    ctx->pc = 0x260c90u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_260c94:
    // 0x260c94: 0x5070  tge         $zero, $zero, 321
    ctx->pc = 0x260c94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_260c98:
    // 0x260c98: 0x0  nop
    ctx->pc = 0x260c98u;
    // NOP
label_260c9c:
    // 0x260c9c: 0x0  nop
    ctx->pc = 0x260c9cu;
    // NOP
label_260ca0:
    // 0x260ca0: 0xb48b  .word       0x0000B48B                   # movn        $s6, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ca0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_260ca4:
    // 0x260ca4: 0x3290  .word       0x00003290                   # mfhi        $a2 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x260ca4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    ctx->pc = 0x260ca8u;
    return;
}
