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


void FUN_0014eba0_part119(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x188580u: goto label_188580;
        case 0x188584u: goto label_188584;
        case 0x188588u: goto label_188588;
        case 0x18858cu: goto label_18858c;
        case 0x188590u: goto label_188590;
        case 0x188594u: goto label_188594;
        case 0x188598u: goto label_188598;
        case 0x18859cu: goto label_18859c;
        case 0x1885a0u: goto label_1885a0;
        case 0x1885a4u: goto label_1885a4;
        case 0x1885a8u: goto label_1885a8;
        case 0x1885acu: goto label_1885ac;
        case 0x1885b0u: goto label_1885b0;
        case 0x1885b4u: goto label_1885b4;
        case 0x1885b8u: goto label_1885b8;
        case 0x1885bcu: goto label_1885bc;
        case 0x1885c0u: goto label_1885c0;
        case 0x1885c4u: goto label_1885c4;
        case 0x1885c8u: goto label_1885c8;
        case 0x1885ccu: goto label_1885cc;
        case 0x1885d0u: goto label_1885d0;
        case 0x1885d4u: goto label_1885d4;
        case 0x1885d8u: goto label_1885d8;
        case 0x1885dcu: goto label_1885dc;
        case 0x1885e0u: goto label_1885e0;
        case 0x1885e4u: goto label_1885e4;
        case 0x1885e8u: goto label_1885e8;
        case 0x1885ecu: goto label_1885ec;
        case 0x1885f0u: goto label_1885f0;
        case 0x1885f4u: goto label_1885f4;
        case 0x1885f8u: goto label_1885f8;
        case 0x1885fcu: goto label_1885fc;
        case 0x188600u: goto label_188600;
        case 0x188604u: goto label_188604;
        case 0x188608u: goto label_188608;
        case 0x18860cu: goto label_18860c;
        case 0x188610u: goto label_188610;
        case 0x188614u: goto label_188614;
        case 0x188618u: goto label_188618;
        case 0x18861cu: goto label_18861c;
        case 0x188620u: goto label_188620;
        case 0x188624u: goto label_188624;
        case 0x188628u: goto label_188628;
        case 0x18862cu: goto label_18862c;
        case 0x188630u: goto label_188630;
        case 0x188634u: goto label_188634;
        case 0x188638u: goto label_188638;
        case 0x18863cu: goto label_18863c;
        case 0x188640u: goto label_188640;
        case 0x188644u: goto label_188644;
        case 0x188648u: goto label_188648;
        case 0x18864cu: goto label_18864c;
        case 0x188650u: goto label_188650;
        case 0x188654u: goto label_188654;
        case 0x188658u: goto label_188658;
        case 0x18865cu: goto label_18865c;
        case 0x188660u: goto label_188660;
        case 0x188664u: goto label_188664;
        case 0x188668u: goto label_188668;
        case 0x18866cu: goto label_18866c;
        case 0x188670u: goto label_188670;
        case 0x188674u: goto label_188674;
        case 0x188678u: goto label_188678;
        case 0x18867cu: goto label_18867c;
        case 0x188680u: goto label_188680;
        case 0x188684u: goto label_188684;
        case 0x188688u: goto label_188688;
        case 0x18868cu: goto label_18868c;
        case 0x188690u: goto label_188690;
        case 0x188694u: goto label_188694;
        case 0x188698u: goto label_188698;
        case 0x18869cu: goto label_18869c;
        case 0x1886a0u: goto label_1886a0;
        case 0x1886a4u: goto label_1886a4;
        case 0x1886a8u: goto label_1886a8;
        case 0x1886acu: goto label_1886ac;
        case 0x1886b0u: goto label_1886b0;
        case 0x1886b4u: goto label_1886b4;
        case 0x1886b8u: goto label_1886b8;
        case 0x1886bcu: goto label_1886bc;
        case 0x1886c0u: goto label_1886c0;
        case 0x1886c4u: goto label_1886c4;
        case 0x1886c8u: goto label_1886c8;
        case 0x1886ccu: goto label_1886cc;
        case 0x1886d0u: goto label_1886d0;
        case 0x1886d4u: goto label_1886d4;
        case 0x1886d8u: goto label_1886d8;
        case 0x1886dcu: goto label_1886dc;
        case 0x1886e0u: goto label_1886e0;
        case 0x1886e4u: goto label_1886e4;
        case 0x1886e8u: goto label_1886e8;
        case 0x1886ecu: goto label_1886ec;
        case 0x1886f0u: goto label_1886f0;
        case 0x1886f4u: goto label_1886f4;
        case 0x1886f8u: goto label_1886f8;
        case 0x1886fcu: goto label_1886fc;
        case 0x188700u: goto label_188700;
        case 0x188704u: goto label_188704;
        case 0x188708u: goto label_188708;
        case 0x18870cu: goto label_18870c;
        case 0x188710u: goto label_188710;
        case 0x188714u: goto label_188714;
        case 0x188718u: goto label_188718;
        case 0x18871cu: goto label_18871c;
        case 0x188720u: goto label_188720;
        case 0x188724u: goto label_188724;
        case 0x188728u: goto label_188728;
        case 0x18872cu: goto label_18872c;
        case 0x188730u: goto label_188730;
        case 0x188734u: goto label_188734;
        case 0x188738u: goto label_188738;
        case 0x18873cu: goto label_18873c;
        case 0x188740u: goto label_188740;
        case 0x188744u: goto label_188744;
        case 0x188748u: goto label_188748;
        case 0x18874cu: goto label_18874c;
        case 0x188750u: goto label_188750;
        case 0x188754u: goto label_188754;
        case 0x188758u: goto label_188758;
        case 0x18875cu: goto label_18875c;
        case 0x188760u: goto label_188760;
        case 0x188764u: goto label_188764;
        case 0x188768u: goto label_188768;
        case 0x18876cu: goto label_18876c;
        case 0x188770u: goto label_188770;
        case 0x188774u: goto label_188774;
        case 0x188778u: goto label_188778;
        case 0x18877cu: goto label_18877c;
        case 0x188780u: goto label_188780;
        case 0x188784u: goto label_188784;
        case 0x188788u: goto label_188788;
        case 0x18878cu: goto label_18878c;
        case 0x188790u: goto label_188790;
        case 0x188794u: goto label_188794;
        case 0x188798u: goto label_188798;
        case 0x18879cu: goto label_18879c;
        case 0x1887a0u: goto label_1887a0;
        case 0x1887a4u: goto label_1887a4;
        case 0x1887a8u: goto label_1887a8;
        case 0x1887acu: goto label_1887ac;
        case 0x1887b0u: goto label_1887b0;
        case 0x1887b4u: goto label_1887b4;
        case 0x1887b8u: goto label_1887b8;
        case 0x1887bcu: goto label_1887bc;
        case 0x1887c0u: goto label_1887c0;
        case 0x1887c4u: goto label_1887c4;
        case 0x1887c8u: goto label_1887c8;
        case 0x1887ccu: goto label_1887cc;
        case 0x1887d0u: goto label_1887d0;
        case 0x1887d4u: goto label_1887d4;
        case 0x1887d8u: goto label_1887d8;
        case 0x1887dcu: goto label_1887dc;
        case 0x1887e0u: goto label_1887e0;
        case 0x1887e4u: goto label_1887e4;
        case 0x1887e8u: goto label_1887e8;
        case 0x1887ecu: goto label_1887ec;
        case 0x1887f0u: goto label_1887f0;
        case 0x1887f4u: goto label_1887f4;
        case 0x1887f8u: goto label_1887f8;
        case 0x1887fcu: goto label_1887fc;
        case 0x188800u: goto label_188800;
        case 0x188804u: goto label_188804;
        case 0x188808u: goto label_188808;
        case 0x18880cu: goto label_18880c;
        case 0x188810u: goto label_188810;
        case 0x188814u: goto label_188814;
        case 0x188818u: goto label_188818;
        case 0x18881cu: goto label_18881c;
        case 0x188820u: goto label_188820;
        case 0x188824u: goto label_188824;
        case 0x188828u: goto label_188828;
        case 0x18882cu: goto label_18882c;
        case 0x188830u: goto label_188830;
        case 0x188834u: goto label_188834;
        case 0x188838u: goto label_188838;
        case 0x18883cu: goto label_18883c;
        case 0x188840u: goto label_188840;
        case 0x188844u: goto label_188844;
        case 0x188848u: goto label_188848;
        case 0x18884cu: goto label_18884c;
        case 0x188850u: goto label_188850;
        case 0x188854u: goto label_188854;
        case 0x188858u: goto label_188858;
        case 0x18885cu: goto label_18885c;
        case 0x188860u: goto label_188860;
        case 0x188864u: goto label_188864;
        case 0x188868u: goto label_188868;
        case 0x18886cu: goto label_18886c;
        case 0x188870u: goto label_188870;
        case 0x188874u: goto label_188874;
        case 0x188878u: goto label_188878;
        case 0x18887cu: goto label_18887c;
        case 0x188880u: goto label_188880;
        case 0x188884u: goto label_188884;
        case 0x188888u: goto label_188888;
        case 0x18888cu: goto label_18888c;
        case 0x188890u: goto label_188890;
        case 0x188894u: goto label_188894;
        case 0x188898u: goto label_188898;
        case 0x18889cu: goto label_18889c;
        case 0x1888a0u: goto label_1888a0;
        case 0x1888a4u: goto label_1888a4;
        case 0x1888a8u: goto label_1888a8;
        case 0x1888acu: goto label_1888ac;
        case 0x1888b0u: goto label_1888b0;
        case 0x1888b4u: goto label_1888b4;
        case 0x1888b8u: goto label_1888b8;
        case 0x1888bcu: goto label_1888bc;
        case 0x1888c0u: goto label_1888c0;
        case 0x1888c4u: goto label_1888c4;
        case 0x1888c8u: goto label_1888c8;
        case 0x1888ccu: goto label_1888cc;
        case 0x1888d0u: goto label_1888d0;
        case 0x1888d4u: goto label_1888d4;
        case 0x1888d8u: goto label_1888d8;
        case 0x1888dcu: goto label_1888dc;
        case 0x1888e0u: goto label_1888e0;
        case 0x1888e4u: goto label_1888e4;
        case 0x1888e8u: goto label_1888e8;
        case 0x1888ecu: goto label_1888ec;
        case 0x1888f0u: goto label_1888f0;
        case 0x1888f4u: goto label_1888f4;
        case 0x1888f8u: goto label_1888f8;
        case 0x1888fcu: goto label_1888fc;
        case 0x188900u: goto label_188900;
        case 0x188904u: goto label_188904;
        case 0x188908u: goto label_188908;
        case 0x18890cu: goto label_18890c;
        case 0x188910u: goto label_188910;
        case 0x188914u: goto label_188914;
        case 0x188918u: goto label_188918;
        case 0x18891cu: goto label_18891c;
        case 0x188920u: goto label_188920;
        case 0x188924u: goto label_188924;
        case 0x188928u: goto label_188928;
        case 0x18892cu: goto label_18892c;
        case 0x188930u: goto label_188930;
        case 0x188934u: goto label_188934;
        case 0x188938u: goto label_188938;
        case 0x18893cu: goto label_18893c;
        case 0x188940u: goto label_188940;
        case 0x188944u: goto label_188944;
        case 0x188948u: goto label_188948;
        case 0x18894cu: goto label_18894c;
        case 0x188950u: goto label_188950;
        case 0x188954u: goto label_188954;
        case 0x188958u: goto label_188958;
        case 0x18895cu: goto label_18895c;
        case 0x188960u: goto label_188960;
        case 0x188964u: goto label_188964;
        case 0x188968u: goto label_188968;
        case 0x18896cu: goto label_18896c;
        case 0x188970u: goto label_188970;
        case 0x188974u: goto label_188974;
        case 0x188978u: goto label_188978;
        case 0x18897cu: goto label_18897c;
        case 0x188980u: goto label_188980;
        case 0x188984u: goto label_188984;
        case 0x188988u: goto label_188988;
        case 0x18898cu: goto label_18898c;
        case 0x188990u: goto label_188990;
        case 0x188994u: goto label_188994;
        case 0x188998u: goto label_188998;
        case 0x18899cu: goto label_18899c;
        case 0x1889a0u: goto label_1889a0;
        case 0x1889a4u: goto label_1889a4;
        case 0x1889a8u: goto label_1889a8;
        case 0x1889acu: goto label_1889ac;
        case 0x1889b0u: goto label_1889b0;
        case 0x1889b4u: goto label_1889b4;
        case 0x1889b8u: goto label_1889b8;
        case 0x1889bcu: goto label_1889bc;
        case 0x1889c0u: goto label_1889c0;
        case 0x1889c4u: goto label_1889c4;
        case 0x1889c8u: goto label_1889c8;
        case 0x1889ccu: goto label_1889cc;
        case 0x1889d0u: goto label_1889d0;
        case 0x1889d4u: goto label_1889d4;
        case 0x1889d8u: goto label_1889d8;
        case 0x1889dcu: goto label_1889dc;
        case 0x1889e0u: goto label_1889e0;
        case 0x1889e4u: goto label_1889e4;
        case 0x1889e8u: goto label_1889e8;
        case 0x1889ecu: goto label_1889ec;
        case 0x1889f0u: goto label_1889f0;
        case 0x1889f4u: goto label_1889f4;
        case 0x1889f8u: goto label_1889f8;
        case 0x1889fcu: goto label_1889fc;
        case 0x188a00u: goto label_188a00;
        case 0x188a04u: goto label_188a04;
        case 0x188a08u: goto label_188a08;
        case 0x188a0cu: goto label_188a0c;
        case 0x188a10u: goto label_188a10;
        case 0x188a14u: goto label_188a14;
        case 0x188a18u: goto label_188a18;
        case 0x188a1cu: goto label_188a1c;
        case 0x188a20u: goto label_188a20;
        case 0x188a24u: goto label_188a24;
        case 0x188a28u: goto label_188a28;
        case 0x188a2cu: goto label_188a2c;
        case 0x188a30u: goto label_188a30;
        case 0x188a34u: goto label_188a34;
        case 0x188a38u: goto label_188a38;
        case 0x188a3cu: goto label_188a3c;
        case 0x188a40u: goto label_188a40;
        case 0x188a44u: goto label_188a44;
        case 0x188a48u: goto label_188a48;
        case 0x188a4cu: goto label_188a4c;
        case 0x188a50u: goto label_188a50;
        case 0x188a54u: goto label_188a54;
        case 0x188a58u: goto label_188a58;
        case 0x188a5cu: goto label_188a5c;
        case 0x188a60u: goto label_188a60;
        case 0x188a64u: goto label_188a64;
        case 0x188a68u: goto label_188a68;
        case 0x188a6cu: goto label_188a6c;
        case 0x188a70u: goto label_188a70;
        case 0x188a74u: goto label_188a74;
        case 0x188a78u: goto label_188a78;
        case 0x188a7cu: goto label_188a7c;
        case 0x188a80u: goto label_188a80;
        case 0x188a84u: goto label_188a84;
        case 0x188a88u: goto label_188a88;
        case 0x188a8cu: goto label_188a8c;
        case 0x188a90u: goto label_188a90;
        case 0x188a94u: goto label_188a94;
        case 0x188a98u: goto label_188a98;
        case 0x188a9cu: goto label_188a9c;
        case 0x188aa0u: goto label_188aa0;
        case 0x188aa4u: goto label_188aa4;
        case 0x188aa8u: goto label_188aa8;
        case 0x188aacu: goto label_188aac;
        case 0x188ab0u: goto label_188ab0;
        case 0x188ab4u: goto label_188ab4;
        case 0x188ab8u: goto label_188ab8;
        case 0x188abcu: goto label_188abc;
        case 0x188ac0u: goto label_188ac0;
        case 0x188ac4u: goto label_188ac4;
        case 0x188ac8u: goto label_188ac8;
        case 0x188accu: goto label_188acc;
        case 0x188ad0u: goto label_188ad0;
        case 0x188ad4u: goto label_188ad4;
        case 0x188ad8u: goto label_188ad8;
        case 0x188adcu: goto label_188adc;
        case 0x188ae0u: goto label_188ae0;
        case 0x188ae4u: goto label_188ae4;
        case 0x188ae8u: goto label_188ae8;
        case 0x188aecu: goto label_188aec;
        case 0x188af0u: goto label_188af0;
        case 0x188af4u: goto label_188af4;
        case 0x188af8u: goto label_188af8;
        case 0x188afcu: goto label_188afc;
        case 0x188b00u: goto label_188b00;
        case 0x188b04u: goto label_188b04;
        case 0x188b08u: goto label_188b08;
        case 0x188b0cu: goto label_188b0c;
        case 0x188b10u: goto label_188b10;
        case 0x188b14u: goto label_188b14;
        case 0x188b18u: goto label_188b18;
        case 0x188b1cu: goto label_188b1c;
        case 0x188b20u: goto label_188b20;
        case 0x188b24u: goto label_188b24;
        case 0x188b28u: goto label_188b28;
        case 0x188b2cu: goto label_188b2c;
        case 0x188b30u: goto label_188b30;
        case 0x188b34u: goto label_188b34;
        case 0x188b38u: goto label_188b38;
        case 0x188b3cu: goto label_188b3c;
        case 0x188b40u: goto label_188b40;
        case 0x188b44u: goto label_188b44;
        case 0x188b48u: goto label_188b48;
        case 0x188b4cu: goto label_188b4c;
        case 0x188b50u: goto label_188b50;
        case 0x188b54u: goto label_188b54;
        case 0x188b58u: goto label_188b58;
        case 0x188b5cu: goto label_188b5c;
        case 0x188b60u: goto label_188b60;
        case 0x188b64u: goto label_188b64;
        case 0x188b68u: goto label_188b68;
        case 0x188b6cu: goto label_188b6c;
        case 0x188b70u: goto label_188b70;
        case 0x188b74u: goto label_188b74;
        case 0x188b78u: goto label_188b78;
        case 0x188b7cu: goto label_188b7c;
        case 0x188b80u: goto label_188b80;
        case 0x188b84u: goto label_188b84;
        case 0x188b88u: goto label_188b88;
        case 0x188b8cu: goto label_188b8c;
        case 0x188b90u: goto label_188b90;
        case 0x188b94u: goto label_188b94;
        case 0x188b98u: goto label_188b98;
        case 0x188b9cu: goto label_188b9c;
        case 0x188ba0u: goto label_188ba0;
        case 0x188ba4u: goto label_188ba4;
        case 0x188ba8u: goto label_188ba8;
        case 0x188bacu: goto label_188bac;
        case 0x188bb0u: goto label_188bb0;
        case 0x188bb4u: goto label_188bb4;
        case 0x188bb8u: goto label_188bb8;
        case 0x188bbcu: goto label_188bbc;
        case 0x188bc0u: goto label_188bc0;
        case 0x188bc4u: goto label_188bc4;
        case 0x188bc8u: goto label_188bc8;
        case 0x188bccu: goto label_188bcc;
        case 0x188bd0u: goto label_188bd0;
        case 0x188bd4u: goto label_188bd4;
        case 0x188bd8u: goto label_188bd8;
        case 0x188bdcu: goto label_188bdc;
        case 0x188be0u: goto label_188be0;
        case 0x188be4u: goto label_188be4;
        case 0x188be8u: goto label_188be8;
        case 0x188becu: goto label_188bec;
        case 0x188bf0u: goto label_188bf0;
        case 0x188bf4u: goto label_188bf4;
        case 0x188bf8u: goto label_188bf8;
        case 0x188bfcu: goto label_188bfc;
        case 0x188c00u: goto label_188c00;
        case 0x188c04u: goto label_188c04;
        case 0x188c08u: goto label_188c08;
        case 0x188c0cu: goto label_188c0c;
        case 0x188c10u: goto label_188c10;
        case 0x188c14u: goto label_188c14;
        case 0x188c18u: goto label_188c18;
        case 0x188c1cu: goto label_188c1c;
        case 0x188c20u: goto label_188c20;
        case 0x188c24u: goto label_188c24;
        case 0x188c28u: goto label_188c28;
        case 0x188c2cu: goto label_188c2c;
        case 0x188c30u: goto label_188c30;
        case 0x188c34u: goto label_188c34;
        case 0x188c38u: goto label_188c38;
        case 0x188c3cu: goto label_188c3c;
        case 0x188c40u: goto label_188c40;
        case 0x188c44u: goto label_188c44;
        case 0x188c48u: goto label_188c48;
        case 0x188c4cu: goto label_188c4c;
        case 0x188c50u: goto label_188c50;
        case 0x188c54u: goto label_188c54;
        case 0x188c58u: goto label_188c58;
        case 0x188c5cu: goto label_188c5c;
        case 0x188c60u: goto label_188c60;
        case 0x188c64u: goto label_188c64;
        case 0x188c68u: goto label_188c68;
        case 0x188c6cu: goto label_188c6c;
        case 0x188c70u: goto label_188c70;
        case 0x188c74u: goto label_188c74;
        case 0x188c78u: goto label_188c78;
        case 0x188c7cu: goto label_188c7c;
        case 0x188c80u: goto label_188c80;
        case 0x188c84u: goto label_188c84;
        case 0x188c88u: goto label_188c88;
        case 0x188c8cu: goto label_188c8c;
        case 0x188c90u: goto label_188c90;
        case 0x188c94u: goto label_188c94;
        case 0x188c98u: goto label_188c98;
        case 0x188c9cu: goto label_188c9c;
        case 0x188ca0u: goto label_188ca0;
        case 0x188ca4u: goto label_188ca4;
        case 0x188ca8u: goto label_188ca8;
        case 0x188cacu: goto label_188cac;
        case 0x188cb0u: goto label_188cb0;
        case 0x188cb4u: goto label_188cb4;
        case 0x188cb8u: goto label_188cb8;
        case 0x188cbcu: goto label_188cbc;
        case 0x188cc0u: goto label_188cc0;
        case 0x188cc4u: goto label_188cc4;
        case 0x188cc8u: goto label_188cc8;
        case 0x188cccu: goto label_188ccc;
        case 0x188cd0u: goto label_188cd0;
        case 0x188cd4u: goto label_188cd4;
        case 0x188cd8u: goto label_188cd8;
        case 0x188cdcu: goto label_188cdc;
        case 0x188ce0u: goto label_188ce0;
        case 0x188ce4u: goto label_188ce4;
        case 0x188ce8u: goto label_188ce8;
        case 0x188cecu: goto label_188cec;
        case 0x188cf0u: goto label_188cf0;
        case 0x188cf4u: goto label_188cf4;
        case 0x188cf8u: goto label_188cf8;
        case 0x188cfcu: goto label_188cfc;
        case 0x188d00u: goto label_188d00;
        case 0x188d04u: goto label_188d04;
        case 0x188d08u: goto label_188d08;
        case 0x188d0cu: goto label_188d0c;
        case 0x188d10u: goto label_188d10;
        case 0x188d14u: goto label_188d14;
        case 0x188d18u: goto label_188d18;
        case 0x188d1cu: goto label_188d1c;
        case 0x188d20u: goto label_188d20;
        case 0x188d24u: goto label_188d24;
        case 0x188d28u: goto label_188d28;
        case 0x188d2cu: goto label_188d2c;
        case 0x188d30u: goto label_188d30;
        case 0x188d34u: goto label_188d34;
        case 0x188d38u: goto label_188d38;
        case 0x188d3cu: goto label_188d3c;
        case 0x188d40u: goto label_188d40;
        case 0x188d44u: goto label_188d44;
        case 0x188d48u: goto label_188d48;
        case 0x188d4cu: goto label_188d4c;
        default: return;
    }

label_188580:
    // 0x188580: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x188580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_188584:
    // 0x188584: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x188584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_188588:
    // 0x188588: 0x34424050  ori         $v0, $v0, 0x4050
    ctx->pc = 0x188588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16464);
label_18858c:
    // 0x18858c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18858cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_188590:
    // 0x188590: 0xae220194  sw          $v0, 0x194($s1)
    ctx->pc = 0x188590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 2));
label_188594:
    // 0x188594: 0x26240264  addiu       $a0, $s1, 0x264
    ctx->pc = 0x188594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 612));
label_188598:
    // 0x188598: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x188598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_18859c:
    // 0x18859c: 0xc0439e8  jal         func_10E7A0
label_1885a0:
    if (ctx->pc == 0x1885A0u) {
        ctx->pc = 0x1885A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18859Cu;
        // 0x1885a0: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1885A4u;
        goto label_1885a4;
    }
    ctx->pc = 0x18859Cu;
    SET_GPR_U32(ctx, 31, 0x1885A4u);
    ctx->pc = 0x1885A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18859Cu;
    // 0x1885a0: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x18859Cu, 0x1885A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1885A4u;
label_1885a4:
    // 0x1885a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1885a8:
    if (ctx->pc == 0x1885A8u) {
        ctx->pc = 0x1885A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885A4u;
        // 0x1885a8: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1885ACu;
        goto label_1885ac;
    }
    ctx->pc = 0x1885A4u;
    {
        const bool branch_taken_0x1885a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1885A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885A4u;
        // 0x1885a8: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885a4) {
            ctx->pc = 0x1885B8u;
            goto label_1885b8;
        }
    }
    ctx->pc = 0x1885ACu;
label_1885ac:
    // 0x1885ac: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x1885acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_1885b0:
    // 0x1885b0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1885b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1885b4:
    // 0x1885b4: 0xa222023d  sb          $v0, 0x23D($s1)
    ctx->pc = 0x1885b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
label_1885b8:
    // 0x1885b8: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1885b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_1885bc:
    // 0x1885bc: 0xc0439e8  jal         func_10E7A0
label_1885c0:
    if (ctx->pc == 0x1885C0u) {
        ctx->pc = 0x1885C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885BCu;
        // 0x1885c0: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1885C4u;
        goto label_1885c4;
    }
    ctx->pc = 0x1885BCu;
    SET_GPR_U32(ctx, 31, 0x1885C4u);
    ctx->pc = 0x1885C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1885BCu;
    // 0x1885c0: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x1885BCu, 0x1885C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1885C4u;
label_1885c4:
    // 0x1885c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1885c8:
    if (ctx->pc == 0x1885C8u) {
        ctx->pc = 0x1885CCu;
        goto label_1885cc;
    }
    ctx->pc = 0x1885C4u;
    {
        const bool branch_taken_0x1885c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1885c4) {
            ctx->pc = 0x1885D4u;
            goto label_1885d4;
        }
    }
    ctx->pc = 0x1885CCu;
label_1885cc:
    // 0x1885cc: 0x10000020  b           . + 4 + (0x20 << 2)
label_1885d0:
    if (ctx->pc == 0x1885D0u) {
        ctx->pc = 0x1885D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885CCu;
        // 0x1885d0: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1885D4u;
        goto label_1885d4;
    }
    ctx->pc = 0x1885CCu;
    {
        const bool branch_taken_0x1885cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1885D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885CCu;
        // 0x1885d0: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885cc) {
            ctx->pc = 0x188650u;
            goto label_188650;
        }
    }
    ctx->pc = 0x1885D4u;
label_1885d4:
    // 0x1885d4: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x1885d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1885d8:
    // 0x1885d8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1885d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1885dc:
    // 0x1885dc: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1885dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1885e0:
    // 0x1885e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1885e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1885e4:
    // 0x1885e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1885e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1885e8:
    // 0x1885e8: 0x0  nop
    ctx->pc = 0x1885e8u;
    // NOP
label_1885ec:
    // 0x1885ec: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x1885ecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1885f0:
    // 0x1885f0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1885f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1885f4:
    // 0x1885f4: 0x0  nop
    ctx->pc = 0x1885f4u;
    // NOP
label_1885f8:
    // 0x1885f8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1885fc:
    if (ctx->pc == 0x1885FCu) {
        ctx->pc = 0x1885FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885F8u;
        // 0x1885fc: 0xe7ac003c  swc1        $f12, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x188600u;
        goto label_188600;
    }
    ctx->pc = 0x1885F8u;
    {
        const bool branch_taken_0x1885f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1885FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885F8u;
        // 0x1885fc: 0xe7ac003c  swc1        $f12, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885f8) {
            ctx->pc = 0x188614u;
            goto label_188614;
        }
    }
    ctx->pc = 0x188600u;
label_188600:
    // 0x188600: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x188600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_188604:
    // 0x188604: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x188604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_188608:
    // 0x188608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18860c:
    // 0x18860c: 0x1000000d  b           . + 4 + (0xD << 2)
label_188610:
    if (ctx->pc == 0x188610u) {
        ctx->pc = 0x188610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18860Cu;
        // 0x188610: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188614u;
        goto label_188614;
    }
    ctx->pc = 0x18860Cu;
    {
        const bool branch_taken_0x18860c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18860Cu;
        // 0x188610: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18860c) {
            ctx->pc = 0x188644u;
            goto label_188644;
        }
    }
    ctx->pc = 0x188614u;
label_188614:
    // 0x188614: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x188614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_188618:
    // 0x188618: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x188618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18861c:
    // 0x18861c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18861cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188620:
    // 0x188620: 0x0  nop
    ctx->pc = 0x188620u;
    // NOP
label_188624:
    // 0x188624: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x188624u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188628:
    // 0x188628: 0x0  nop
    ctx->pc = 0x188628u;
    // NOP
label_18862c:
    // 0x18862c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_188630:
    if (ctx->pc == 0x188630u) {
        ctx->pc = 0x188630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18862Cu;
        // 0x188630: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188634u;
        goto label_188634;
    }
    ctx->pc = 0x18862Cu;
    {
        const bool branch_taken_0x18862c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x188630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18862Cu;
        // 0x188630: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18862c) {
            ctx->pc = 0x188644u;
            goto label_188644;
        }
    }
    ctx->pc = 0x188634u;
label_188634:
    // 0x188634: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x188634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_188638:
    // 0x188638: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18863c:
    // 0x18863c: 0x10000001  b           . + 4 + (0x1 << 2)
label_188640:
    if (ctx->pc == 0x188640u) {
        ctx->pc = 0x188640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18863Cu;
        // 0x188640: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188644u;
        goto label_188644;
    }
    ctx->pc = 0x18863Cu;
    {
        const bool branch_taken_0x18863c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18863Cu;
        // 0x188640: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18863c) {
            ctx->pc = 0x188644u;
            goto label_188644;
        }
    }
    ctx->pc = 0x188644u;
label_188644:
    // 0x188644: 0xc06d448  jal         func_1B5120
label_188648:
    if (ctx->pc == 0x188648u) {
        ctx->pc = 0x18864Cu;
        goto label_18864c;
    }
    ctx->pc = 0x188644u;
    SET_GPR_U32(ctx, 31, 0x18864Cu);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18864Cu;
label_18864c:
    // 0x18864c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x18864cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_188650:
    // 0x188650: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x188650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188654:
    // 0x188654: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x188654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_188658:
    // 0x188658: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x188658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_18865c:
    // 0x18865c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18865cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188660:
    // 0x188660: 0x0  nop
    ctx->pc = 0x188660u;
    // NOP
label_188664:
    // 0x188664: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188668:
    // 0x188668: 0x0  nop
    ctx->pc = 0x188668u;
    // NOP
label_18866c:
    // 0x18866c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_188670:
    if (ctx->pc == 0x188670u) {
        ctx->pc = 0x188674u;
        goto label_188674;
    }
    ctx->pc = 0x18866Cu;
    {
        const bool branch_taken_0x18866c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18866c) {
            ctx->pc = 0x188688u;
            goto label_188688;
        }
    }
    ctx->pc = 0x188674u;
label_188674:
    // 0x188674: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x188674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_188678:
    // 0x188678: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x188678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18867c:
    // 0x18867c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x18867cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_188680:
    // 0x188680: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_188684:
    if (ctx->pc == 0x188684u) {
        ctx->pc = 0x188688u;
        goto label_188688;
    }
    ctx->pc = 0x188680u;
    {
        const bool branch_taken_0x188680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188680) {
            ctx->pc = 0x1886C0u;
            goto label_1886c0;
        }
    }
    ctx->pc = 0x188688u;
label_188688:
    // 0x188688: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x188688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18868c:
    // 0x18868c: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x18868cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188690:
    // 0x188690: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188690u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_188694:
    // 0x188694: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188694u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_188698:
    // 0x188698: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x188698u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18869c:
    // 0x18869c: 0x0  nop
    ctx->pc = 0x18869cu;
    // NOP
label_1886a0:
    // 0x1886a0: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x1886a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
label_1886a4:
    // 0x1886a4: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x1886a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1886a8:
    // 0x1886a8: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x1886a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1886ac:
    // 0x1886ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1886acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1886b0:
    // 0x1886b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1886b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1886b4:
    // 0x1886b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1886b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1886b8:
    // 0x1886b8: 0x1000005a  b           . + 4 + (0x5A << 2)
label_1886bc:
    if (ctx->pc == 0x1886BCu) {
        ctx->pc = 0x1886BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886B8u;
        // 0x1886bc: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1886C0u;
        goto label_1886c0;
    }
    ctx->pc = 0x1886B8u;
    {
        const bool branch_taken_0x1886b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1886BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886B8u;
        // 0x1886bc: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886b8) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x1886C0u;
label_1886c0:
    // 0x1886c0: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x1886c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
label_1886c4:
    // 0x1886c4: 0x10000057  b           . + 4 + (0x57 << 2)
label_1886c8:
    if (ctx->pc == 0x1886C8u) {
        ctx->pc = 0x1886C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886C4u;
        // 0x1886c8: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1886CCu;
        goto label_1886cc;
    }
    ctx->pc = 0x1886C4u;
    {
        const bool branch_taken_0x1886c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1886C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886C4u;
        // 0x1886c8: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886c4) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x1886CCu;
label_1886cc:
    // 0x1886cc: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x1886ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_1886d0:
    // 0x1886d0: 0x18600054  blez        $v1, . + 4 + (0x54 << 2)
label_1886d4:
    if (ctx->pc == 0x1886D4u) {
        ctx->pc = 0x1886D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886D0u;
        // 0x1886d4: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1886D8u;
        goto label_1886d8;
    }
    ctx->pc = 0x1886D0u;
    {
        const bool branch_taken_0x1886d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1886D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886D0u;
        // 0x1886d4: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886d0) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x1886D8u;
label_1886d8:
    // 0x1886d8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1886d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1886dc:
    // 0x1886dc: 0xa6240224  sh          $a0, 0x224($s1)
    ctx->pc = 0x1886dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 4));
label_1886e0:
    // 0x1886e0: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x1886e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1886e4:
    // 0x1886e4: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x1886e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_1886e8:
    // 0x1886e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1886e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1886ec:
    // 0x1886ec: 0xae230194  sw          $v1, 0x194($s1)
    ctx->pc = 0x1886ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
label_1886f0:
    // 0x1886f0: 0x8623003c  lh          $v1, 0x3C($s1)
    ctx->pc = 0x1886f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
label_1886f4:
    // 0x1886f4: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x1886f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_1886f8:
    // 0x1886f8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1886fc:
    if (ctx->pc == 0x1886FCu) {
        ctx->pc = 0x1886FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886F8u;
        // 0x1886fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188700u;
        goto label_188700;
    }
    ctx->pc = 0x1886F8u;
    {
        const bool branch_taken_0x1886f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1886FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886F8u;
        // 0x1886fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886f8) {
            ctx->pc = 0x188704u;
            goto label_188704;
        }
    }
    ctx->pc = 0x188700u;
label_188700:
    // 0x188700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188704:
    // 0x188704: 0x14600047  bnez        $v1, . + 4 + (0x47 << 2)
label_188708:
    if (ctx->pc == 0x188708u) {
        ctx->pc = 0x18870Cu;
        goto label_18870c;
    }
    ctx->pc = 0x188704u;
    {
        const bool branch_taken_0x188704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188704) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x18870Cu;
label_18870c:
    // 0x18870c: 0x92230232  lbu         $v1, 0x232($s1)
    ctx->pc = 0x18870cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 562)));
label_188710:
    // 0x188710: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x188710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188714:
    // 0x188714: 0x14660016  bne         $v1, $a2, . + 4 + (0x16 << 2)
label_188718:
    if (ctx->pc == 0x188718u) {
        ctx->pc = 0x18871Cu;
        goto label_18871c;
    }
    ctx->pc = 0x188714u;
    {
        const bool branch_taken_0x188714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x188714) {
            ctx->pc = 0x188770u;
            goto label_188770;
        }
    }
    ctx->pc = 0x18871Cu;
label_18871c:
    // 0x18871c: 0x92240238  lbu         $a0, 0x238($s1)
    ctx->pc = 0x18871cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 568)));
label_188720:
    // 0x188720: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x188720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_188724:
    // 0x188724: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x188724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_188728:
    // 0x188728: 0x2485ffb8  addiu       $a1, $a0, -0x48
    ctx->pc = 0x188728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
label_18872c:
    // 0x18872c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18872cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_188730:
    // 0x188730: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x188730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_188734:
    // 0x188734: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x188734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_188738:
    // 0x188738: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x188738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18873c:
    // 0x18873c: 0x24643620  addiu       $a0, $v1, 0x3620
    ctx->pc = 0x18873cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_188740:
    // 0x188740: 0x9063367c  lbu         $v1, 0x367C($v1)
    ctx->pc = 0x188740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_188744:
    // 0x188744: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_188748:
    if (ctx->pc == 0x188748u) {
        ctx->pc = 0x18874Cu;
        goto label_18874c;
    }
    ctx->pc = 0x188744u;
    {
        const bool branch_taken_0x188744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188744) {
            ctx->pc = 0x188770u;
            goto label_188770;
        }
    }
    ctx->pc = 0x18874Cu;
label_18874c:
    // 0x18874c: 0x9084006b  lbu         $a0, 0x6B($a0)
    ctx->pc = 0x18874cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
label_188750:
    // 0x188750: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x188750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_188754:
    // 0x188754: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_188758:
    if (ctx->pc == 0x188758u) {
        ctx->pc = 0x188758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188754u;
        // 0x188758: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18875Cu;
        goto label_18875c;
    }
    ctx->pc = 0x188754u;
    {
        const bool branch_taken_0x188754 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x188758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188754u;
        // 0x188758: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188754) {
            ctx->pc = 0x188770u;
            goto label_188770;
        }
    }
    ctx->pc = 0x18875Cu;
label_18875c:
    // 0x18875c: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x18875cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_188760:
    // 0x188760: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x188760u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_188764:
    // 0x188764: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_188768:
    if (ctx->pc == 0x188768u) {
        ctx->pc = 0x18876Cu;
        goto label_18876c;
    }
    ctx->pc = 0x188764u;
    {
        const bool branch_taken_0x188764 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188764) {
            ctx->pc = 0x188770u;
            goto label_188770;
        }
    }
    ctx->pc = 0x18876Cu;
label_18876c:
    // 0x18876c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18876cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188770:
    // 0x188770: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_188774:
    if (ctx->pc == 0x188774u) {
        ctx->pc = 0x188778u;
        goto label_188778;
    }
    ctx->pc = 0x188770u;
    {
        const bool branch_taken_0x188770 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x188770) {
            ctx->pc = 0x188794u;
            goto label_188794;
        }
    }
    ctx->pc = 0x188778u;
label_188778:
    // 0x188778: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x188778u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_18877c:
    // 0x18877c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18877cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_188780:
    // 0x188780: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x188780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_188784:
    // 0x188784: 0xc062948  jal         func_18A520
label_188788:
    if (ctx->pc == 0x188788u) {
        ctx->pc = 0x188788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188784u;
        // 0x188788: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18878Cu;
        goto label_18878c;
    }
    ctx->pc = 0x188784u;
    SET_GPR_U32(ctx, 31, 0x18878Cu);
    ctx->pc = 0x188788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188784u;
    // 0x188788: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    { ctx->pc = 0x18a520; return; }
    ctx->pc = 0x18878Cu;
label_18878c:
    // 0x18878c: 0x10000009  b           . + 4 + (0x9 << 2)
label_188790:
    if (ctx->pc == 0x188790u) {
        ctx->pc = 0x188790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18878Cu;
        // 0x188790: 0x86230224  lh          $v1, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188794u;
        goto label_188794;
    }
    ctx->pc = 0x18878Cu;
    {
        const bool branch_taken_0x18878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18878Cu;
        // 0x188790: 0x86230224  lh          $v1, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18878c) {
            ctx->pc = 0x1887B4u;
            goto label_1887b4;
        }
    }
    ctx->pc = 0x188794u;
label_188794:
    // 0x188794: 0x8e240194  lw          $a0, 0x194($s1)
    ctx->pc = 0x188794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_188798:
    // 0x188798: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x188798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_18879c:
    // 0x18879c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x18879cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1887a0:
    // 0x1887a0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1887a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1887a4:
    // 0x1887a4: 0xae230194  sw          $v1, 0x194($s1)
    ctx->pc = 0x1887a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
label_1887a8:
    // 0x1887a8: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x1887a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
label_1887ac:
    // 0x1887ac: 0xa620019c  sh          $zero, 0x19C($s1)
    ctx->pc = 0x1887acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
label_1887b0:
    // 0x1887b0: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x1887b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_1887b4:
    // 0x1887b4: 0x1c60001b  bgtz        $v1, . + 4 + (0x1B << 2)
label_1887b8:
    if (ctx->pc == 0x1887B8u) {
        ctx->pc = 0x1887BCu;
        goto label_1887bc;
    }
    ctx->pc = 0x1887B4u;
    {
        const bool branch_taken_0x1887b4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1887b4) {
            ctx->pc = 0x188824u;
            goto label_188824;
        }
    }
    ctx->pc = 0x1887BCu;
label_1887bc:
    // 0x1887bc: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x1887bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_1887c0:
    // 0x1887c0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1887c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1887c4:
    // 0x1887c4: 0xc08f0cc  jal         func_23C330
label_1887c8:
    if (ctx->pc == 0x1887C8u) {
        ctx->pc = 0x1887C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1887C4u;
        // 0x1887c8: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1887CCu;
        goto label_1887cc;
    }
    ctx->pc = 0x1887C4u;
    SET_GPR_U32(ctx, 31, 0x1887CCu);
    ctx->pc = 0x1887C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1887C4u;
    // 0x1887c8: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1887CCu;
label_1887cc:
    // 0x1887cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1887ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1887d0:
    // 0x1887d0: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1887d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_1887d4:
    // 0x1887d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1887d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1887d8:
    // 0x1887d8: 0x92250230  lbu         $a1, 0x230($s1)
    ctx->pc = 0x1887d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
label_1887dc:
    // 0x1887dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1887dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1887e0:
    // 0x1887e0: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x1887e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
label_1887e4:
    // 0x1887e4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1887e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1887e8:
    // 0x1887e8: 0x24632b15  addiu       $v1, $v1, 0x2B15
    ctx->pc = 0x1887e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11029));
label_1887ec:
    // 0x1887ec: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1887ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1887f0:
    // 0x1887f0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1887f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1887f4:
    // 0x1887f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1887f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1887f8:
    // 0x1887f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1887f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1887fc:
    // 0x1887fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1887fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_188800:
    // 0x188800: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x188800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_188804:
    // 0x188804: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x188804u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188808:
    // 0x188808: 0x0  nop
    ctx->pc = 0x188808u;
    // NOP
label_18880c:
    // 0x18880c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18880cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_188810:
    // 0x188810: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188810u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_188814:
    // 0x188814: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x188814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_188818:
    // 0x188818: 0x0  nop
    ctx->pc = 0x188818u;
    // NOP
label_18881c:
    // 0x18881c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_188820:
    // 0x188820: 0xa6230224  sh          $v1, 0x224($s1)
    ctx->pc = 0x188820u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 3));
label_188824:
    // 0x188824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x188824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_188828:
    // 0x188828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18882c:
    // 0x18882c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18882cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_188830:
    // 0x188830: 0x3e00008  jr          $ra
label_188834:
    if (ctx->pc == 0x188834u) {
        ctx->pc = 0x188834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188830u;
        // 0x188834: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188838u;
        goto label_188838;
    }
    ctx->pc = 0x188830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188830u;
        // 0x188834: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188838u;
label_188838:
    // 0x188838: 0x0  nop
    ctx->pc = 0x188838u;
    // NOP
label_18883c:
    // 0x18883c: 0x0  nop
    ctx->pc = 0x18883cu;
    // NOP
label_188840:
    // 0x188840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_188844:
    // 0x188844: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x188844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_188848:
    // 0x188848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x188848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18884c:
    // 0x18884c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18884cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_188850:
    // 0x188850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_188854:
    // 0x188854: 0x90840231  lbu         $a0, 0x231($a0)
    ctx->pc = 0x188854u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 561)));
label_188858:
    // 0x188858: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_18885c:
    if (ctx->pc == 0x18885Cu) {
        ctx->pc = 0x188860u;
        goto label_188860;
    }
    ctx->pc = 0x188858u;
    {
        const bool branch_taken_0x188858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x188858) {
            ctx->pc = 0x188898u;
            goto label_188898;
        }
    }
    ctx->pc = 0x188860u;
label_188860:
    // 0x188860: 0xc4a10150  lwc1        $f1, 0x150($a1)
    ctx->pc = 0x188860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188864:
    // 0x188864: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x188864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188868:
    // 0x188868: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188868u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18886c:
    // 0x18886c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18886cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_188870:
    // 0x188870: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x188870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_188874:
    // 0x188874: 0x0  nop
    ctx->pc = 0x188874u;
    // NOP
label_188878:
    // 0x188878: 0xa603019c  sh          $v1, 0x19C($s0)
    ctx->pc = 0x188878u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 412), (uint16_t)GPR_U32(ctx, 3));
label_18887c:
    // 0x18887c: 0xc4a10158  lwc1        $f1, 0x158($a1)
    ctx->pc = 0x18887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188880:
    // 0x188880: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x188880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188884:
    // 0x188884: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188884u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_188888:
    // 0x188888: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188888u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18888c:
    // 0x18888c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18888cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_188890:
    // 0x188890: 0x0  nop
    ctx->pc = 0x188890u;
    // NOP
label_188894:
    // 0x188894: 0xa603019e  sh          $v1, 0x19E($s0)
    ctx->pc = 0x188894u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 414), (uint16_t)GPR_U32(ctx, 3));
label_188898:
    // 0x188898: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x188898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_18889c:
    // 0x18889c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x18889cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1888a0:
    // 0x1888a0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1888a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1888a4:
    // 0x1888a4: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_1888a8:
    if (ctx->pc == 0x1888A8u) {
        ctx->pc = 0x1888ACu;
        goto label_1888ac;
    }
    ctx->pc = 0x1888A4u;
    {
        const bool branch_taken_0x1888a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1888a4) {
            ctx->pc = 0x188978u;
            goto label_188978;
        }
    }
    ctx->pc = 0x1888ACu;
label_1888ac:
    // 0x1888ac: 0x92040231  lbu         $a0, 0x231($s0)
    ctx->pc = 0x1888acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 561)));
label_1888b0:
    // 0x1888b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1888b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1888b4:
    // 0x1888b4: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
label_1888b8:
    if (ctx->pc == 0x1888B8u) {
        ctx->pc = 0x1888BCu;
        goto label_1888bc;
    }
    ctx->pc = 0x1888B4u;
    {
        const bool branch_taken_0x1888b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1888b4) {
            ctx->pc = 0x188944u;
            goto label_188944;
        }
    }
    ctx->pc = 0x1888BCu;
label_1888bc:
    // 0x1888bc: 0xc6010260  lwc1        $f1, 0x260($s0)
    ctx->pc = 0x1888bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1888c0:
    // 0x1888c0: 0x3c03481c  lui         $v1, 0x481C
    ctx->pc = 0x1888c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18460 << 16));
label_1888c4:
    // 0x1888c4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1888c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1888c8:
    // 0x1888c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1888c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1888cc:
    // 0x1888cc: 0x0  nop
    ctx->pc = 0x1888ccu;
    // NOP
label_1888d0:
    // 0x1888d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1888d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1888d4:
    // 0x1888d4: 0x0  nop
    ctx->pc = 0x1888d4u;
    // NOP
label_1888d8:
    // 0x1888d8: 0x45000038  bc1f        . + 4 + (0x38 << 2)
label_1888dc:
    if (ctx->pc == 0x1888DCu) {
        ctx->pc = 0x1888E0u;
        goto label_1888e0;
    }
    ctx->pc = 0x1888D8u;
    {
        const bool branch_taken_0x1888d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1888d8) {
            ctx->pc = 0x1889BCu;
            goto label_1889bc;
        }
    }
    ctx->pc = 0x1888E0u;
label_1888e0:
    // 0x1888e0: 0x90a30232  lbu         $v1, 0x232($a1)
    ctx->pc = 0x1888e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
label_1888e4:
    // 0x1888e4: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_1888e8:
    if (ctx->pc == 0x1888E8u) {
        ctx->pc = 0x1888ECu;
        goto label_1888ec;
    }
    ctx->pc = 0x1888E4u;
    {
        const bool branch_taken_0x1888e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1888e4) {
            ctx->pc = 0x188934u;
            goto label_188934;
        }
    }
    ctx->pc = 0x1888ECu;
label_1888ec:
    // 0x1888ec: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x1888ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1888f0:
    // 0x1888f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1888f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1888f4:
    // 0x1888f4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x1888f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_1888f8:
    // 0x1888f8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1888fc:
    if (ctx->pc == 0x1888FCu) {
        ctx->pc = 0x188900u;
        goto label_188900;
    }
    ctx->pc = 0x1888F8u;
    {
        const bool branch_taken_0x1888f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1888f8) {
            ctx->pc = 0x188934u;
            goto label_188934;
        }
    }
    ctx->pc = 0x188900u;
label_188900:
    // 0x188900: 0x86040252  lh          $a0, 0x252($s0)
    ctx->pc = 0x188900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
label_188904:
    // 0x188904: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x188904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
label_188908:
    // 0x188908: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x188908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
label_18890c:
    // 0x18890c: 0x86050222  lh          $a1, 0x222($s0)
    ctx->pc = 0x18890cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
label_188910:
    // 0x188910: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x188910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_188914:
    // 0x188914: 0x0  nop
    ctx->pc = 0x188914u;
    // NOP
label_188918:
    // 0x188918: 0x0  nop
    ctx->pc = 0x188918u;
    // NOP
label_18891c:
    // 0x18891c: 0x1810  mfhi        $v1
    ctx->pc = 0x18891cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_188920:
    // 0x188920: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x188920u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_188924:
    // 0x188924: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x188924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_188928:
    // 0x188928: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x188928u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_18892c:
    // 0x18892c: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_188930:
    if (ctx->pc == 0x188930u) {
        ctx->pc = 0x188934u;
        goto label_188934;
    }
    ctx->pc = 0x18892Cu;
    {
        const bool branch_taken_0x18892c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18892c) {
            ctx->pc = 0x1889BCu;
            goto label_1889bc;
        }
    }
    ctx->pc = 0x188934u;
label_188934:
    // 0x188934: 0x8e030194  lw          $v1, 0x194($s0)
    ctx->pc = 0x188934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
label_188938:
    // 0x188938: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x188938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_18893c:
    // 0x18893c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_188940:
    if (ctx->pc == 0x188940u) {
        ctx->pc = 0x188940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18893Cu;
        // 0x188940: 0xae030194  sw          $v1, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188944u;
        goto label_188944;
    }
    ctx->pc = 0x18893Cu;
    {
        const bool branch_taken_0x18893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18893Cu;
        // 0x188940: 0xae030194  sw          $v1, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18893c) {
            ctx->pc = 0x1889BCu;
            goto label_1889bc;
        }
    }
    ctx->pc = 0x188944u;
label_188944:
    // 0x188944: 0xc6010260  lwc1        $f1, 0x260($s0)
    ctx->pc = 0x188944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188948:
    // 0x188948: 0x3c034a09  lui         $v1, 0x4A09
    ctx->pc = 0x188948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18953 << 16));
label_18894c:
    // 0x18894c: 0x34635440  ori         $v1, $v1, 0x5440
    ctx->pc = 0x18894cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21568);
label_188950:
    // 0x188950: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188954:
    // 0x188954: 0x0  nop
    ctx->pc = 0x188954u;
    // NOP
label_188958:
    // 0x188958: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188958u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18895c:
    // 0x18895c: 0x0  nop
    ctx->pc = 0x18895cu;
    // NOP
label_188960:
    // 0x188960: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_188964:
    if (ctx->pc == 0x188964u) {
        ctx->pc = 0x188968u;
        goto label_188968;
    }
    ctx->pc = 0x188960u;
    {
        const bool branch_taken_0x188960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188960) {
            ctx->pc = 0x1889BCu;
            goto label_1889bc;
        }
    }
    ctx->pc = 0x188968u;
label_188968:
    // 0x188968: 0x8e030194  lw          $v1, 0x194($s0)
    ctx->pc = 0x188968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
label_18896c:
    // 0x18896c: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x18896cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_188970:
    // 0x188970: 0x10000012  b           . + 4 + (0x12 << 2)
label_188974:
    if (ctx->pc == 0x188974u) {
        ctx->pc = 0x188974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188970u;
        // 0x188974: 0xae030194  sw          $v1, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188978u;
        goto label_188978;
    }
    ctx->pc = 0x188970u;
    {
        const bool branch_taken_0x188970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188970u;
        // 0x188974: 0xae030194  sw          $v1, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188970) {
            ctx->pc = 0x1889BCu;
            goto label_1889bc;
        }
    }
    ctx->pc = 0x188978u;
label_188978:
    // 0x188978: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x188978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18897c:
    // 0x18897c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18897cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_188980:
    // 0x188980: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x188980u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_188984:
    // 0x188984: 0x0  nop
    ctx->pc = 0x188984u;
    // NOP
label_188988:
    // 0x188988: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_18898c:
    if (ctx->pc == 0x18898Cu) {
        ctx->pc = 0x18898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188988u;
        // 0x18898c: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188990u;
        goto label_188990;
    }
    ctx->pc = 0x188988u;
    {
        const bool branch_taken_0x188988 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x18898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188988u;
        // 0x18898c: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188988) {
            ctx->pc = 0x188998u;
            goto label_188998;
        }
    }
    ctx->pc = 0x188990u;
label_188990:
    // 0x188990: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x188990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_188994:
    // 0x188994: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x188994u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_188998:
    // 0x188998: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_18899c:
    if (ctx->pc == 0x18899Cu) {
        ctx->pc = 0x18899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188998u;
        // 0x18899c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889A0u;
        goto label_1889a0;
    }
    ctx->pc = 0x188998u;
    {
        const bool branch_taken_0x188998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188998u;
        // 0x18899c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188998) {
            ctx->pc = 0x1889BCu;
            goto label_1889bc;
        }
    }
    ctx->pc = 0x1889A0u;
label_1889a0:
    // 0x1889a0: 0xc062348  jal         func_188D20
label_1889a4:
    if (ctx->pc == 0x1889A4u) {
        ctx->pc = 0x1889A8u;
        goto label_1889a8;
    }
    ctx->pc = 0x1889A0u;
    SET_GPR_U32(ctx, 31, 0x1889A8u);
    ctx->pc = 0x188D20u;
    goto label_188d20;
    ctx->pc = 0x1889A8u;
label_1889a8:
    // 0x1889a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1889a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1889ac:
    // 0x1889ac: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
label_1889b0:
    if (ctx->pc == 0x1889B0u) {
        ctx->pc = 0x1889B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889ACu;
        // 0x1889b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889B4u;
        goto label_1889b4;
    }
    ctx->pc = 0x1889ACu;
    {
        const bool branch_taken_0x1889ac = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1889B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889ACu;
        // 0x1889b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889ac) {
            ctx->pc = 0x1889BCu;
            goto label_1889bc;
        }
    }
    ctx->pc = 0x1889B4u;
label_1889b4:
    // 0x1889b4: 0xc062274  jal         func_1889D0
label_1889b8:
    if (ctx->pc == 0x1889B8u) {
        ctx->pc = 0x1889BCu;
        goto label_1889bc;
    }
    ctx->pc = 0x1889B4u;
    SET_GPR_U32(ctx, 31, 0x1889BCu);
    ctx->pc = 0x1889D0u;
    goto label_1889d0;
    ctx->pc = 0x1889BCu;
label_1889bc:
    // 0x1889bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1889bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1889c0:
    // 0x1889c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1889c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1889c4:
    // 0x1889c4: 0x3e00008  jr          $ra
label_1889c8:
    if (ctx->pc == 0x1889C8u) {
        ctx->pc = 0x1889C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889C4u;
        // 0x1889c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889CCu;
        goto label_1889cc;
    }
    ctx->pc = 0x1889C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1889C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889C4u;
        // 0x1889c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1889C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1889CCu;
label_1889cc:
    // 0x1889cc: 0x0  nop
    ctx->pc = 0x1889ccu;
    // NOP
label_1889d0:
    // 0x1889d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1889d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1889d4:
    // 0x1889d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1889d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1889d8:
    // 0x1889d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1889d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1889dc:
    // 0x1889dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1889dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1889e0:
    // 0x1889e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1889e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1889e4:
    // 0x1889e4: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
label_1889e8:
    if (ctx->pc == 0x1889E8u) {
        ctx->pc = 0x1889E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889E4u;
        // 0x1889e8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889ECu;
        goto label_1889ec;
    }
    ctx->pc = 0x1889E4u;
    {
        const bool branch_taken_0x1889e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1889E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889E4u;
        // 0x1889e8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889e4) {
            ctx->pc = 0x188A60u;
            goto label_188a60;
        }
    }
    ctx->pc = 0x1889ECu;
label_1889ec:
    // 0x1889ec: 0xc08f0cc  jal         func_23C330
label_1889f0:
    if (ctx->pc == 0x1889F0u) {
        ctx->pc = 0x1889F4u;
        goto label_1889f4;
    }
    ctx->pc = 0x1889ECu;
    SET_GPR_U32(ctx, 31, 0x1889F4u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1889F4u;
label_1889f4:
    // 0x1889f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1889f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1889f8:
    // 0x1889f8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1889f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_1889fc:
    // 0x1889fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1889fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188a00:
    // 0x188a00: 0x92450230  lbu         $a1, 0x230($s2)
    ctx->pc = 0x188a00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
label_188a04:
    // 0x188a04: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x188a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_188a08:
    // 0x188a08: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x188a08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
label_188a0c:
    // 0x188a0c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x188a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_188a10:
    // 0x188a10: 0x24632b1b  addiu       $v1, $v1, 0x2B1B
    ctx->pc = 0x188a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11035));
label_188a14:
    // 0x188a14: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x188a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_188a18:
    // 0x188a18: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x188a18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_188a1c:
    // 0x188a1c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x188a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_188a20:
    // 0x188a20: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x188a20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_188a24:
    // 0x188a24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x188a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_188a28:
    // 0x188a28: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x188a28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_188a2c:
    // 0x188a2c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x188a2cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188a30:
    // 0x188a30: 0x0  nop
    ctx->pc = 0x188a30u;
    // NOP
label_188a34:
    // 0x188a34: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x188a34u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_188a38:
    // 0x188a38: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188a38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_188a3c:
    // 0x188a3c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x188a3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_188a40:
    // 0x188a40: 0x0  nop
    ctx->pc = 0x188a40u;
    // NOP
label_188a44:
    // 0x188a44: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x188a44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_188a48:
    // 0x188a48: 0x102000af  beqz        $at, . + 4 + (0xAF << 2)
label_188a4c:
    if (ctx->pc == 0x188A4Cu) {
        ctx->pc = 0x188A50u;
        goto label_188a50;
    }
    ctx->pc = 0x188A48u;
    {
        const bool branch_taken_0x188a48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x188a48) {
            ctx->pc = 0x188D08u;
            goto label_188d08;
        }
    }
    ctx->pc = 0x188A50u;
label_188a50:
    // 0x188a50: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x188a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_188a54:
    // 0x188a54: 0x34630802  ori         $v1, $v1, 0x802
    ctx->pc = 0x188a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2050);
label_188a58:
    // 0x188a58: 0x100000ab  b           . + 4 + (0xAB << 2)
label_188a5c:
    if (ctx->pc == 0x188A5Cu) {
        ctx->pc = 0x188A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A58u;
        // 0x188a5c: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A60u;
        goto label_188a60;
    }
    ctx->pc = 0x188A58u;
    {
        const bool branch_taken_0x188a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A58u;
        // 0x188a5c: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a58) {
            ctx->pc = 0x188D08u;
            goto label_188d08;
        }
    }
    ctx->pc = 0x188A60u;
label_188a60:
    // 0x188a60: 0x9649022c  lhu         $t1, 0x22C($s2)
    ctx->pc = 0x188a60u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 556)));
label_188a64:
    // 0x188a64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x188a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188a68:
    // 0x188a68: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x188a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_188a6c:
    // 0x188a6c: 0x24a30006  addiu       $v1, $a1, 0x6
    ctx->pc = 0x188a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
label_188a70:
    // 0x188a70: 0x862004  sllv        $a0, $a2, $a0
    ctx->pc = 0x188a70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
label_188a74:
    // 0x188a74: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x188a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_188a78:
    // 0x188a78: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x188a78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_188a7c:
    // 0x188a7c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x188a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_188a80:
    // 0x188a80: 0x28a10006  slti        $at, $a1, 0x6
    ctx->pc = 0x188a80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
label_188a84:
    // 0x188a84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x188a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188a88:
    // 0x188a88: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x188a88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_188a8c:
    // 0x188a8c: 0x1242024  and         $a0, $t1, $a0
    ctx->pc = 0x188a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
label_188a90:
    // 0x188a90: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x188a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_188a94:
    // 0x188a94: 0x4380a  movz        $a3, $zero, $a0
    ctx->pc = 0x188a94u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_188a98:
    // 0x188a98: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_188a9c:
    if (ctx->pc == 0x188A9Cu) {
        ctx->pc = 0x188A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A98u;
        // 0x188a9c: 0x3880a  movz        $s1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188AA0u;
        goto label_188aa0;
    }
    ctx->pc = 0x188A98u;
    {
        const bool branch_taken_0x188a98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x188A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A98u;
        // 0x188a9c: 0x3880a  movz        $s1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a98) {
            ctx->pc = 0x188AF0u;
            goto label_188af0;
        }
    }
    ctx->pc = 0x188AA0u;
label_188aa0:
    // 0x188aa0: 0x15050007  bne         $t0, $a1, . + 4 + (0x7 << 2)
label_188aa4:
    if (ctx->pc == 0x188AA4u) {
        ctx->pc = 0x188AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AA0u;
        // 0x188aa4: 0x25030006  addiu       $v1, $t0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188AA8u;
        goto label_188aa8;
    }
    ctx->pc = 0x188AA0u;
    {
        const bool branch_taken_0x188aa0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x188AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AA0u;
        // 0x188aa4: 0x25030006  addiu       $v1, $t0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188aa0) {
            ctx->pc = 0x188AC0u;
            goto label_188ac0;
        }
    }
    ctx->pc = 0x188AA8u;
label_188aa8:
    // 0x188aa8: 0x1061804  sllv        $v1, $a2, $t0
    ctx->pc = 0x188aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
label_188aac:
    // 0x188aac: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x188aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_188ab0:
    // 0x188ab0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_188ab4:
    if (ctx->pc == 0x188AB4u) {
        ctx->pc = 0x188AB8u;
        goto label_188ab8;
    }
    ctx->pc = 0x188AB0u;
    {
        const bool branch_taken_0x188ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188ab0) {
            ctx->pc = 0x188AE0u;
            goto label_188ae0;
        }
    }
    ctx->pc = 0x188AB8u;
label_188ab8:
    // 0x188ab8: 0x1000000d  b           . + 4 + (0xD << 2)
label_188abc:
    if (ctx->pc == 0x188ABCu) {
        ctx->pc = 0x188ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AB8u;
        // 0x188abc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188AC0u;
        goto label_188ac0;
    }
    ctx->pc = 0x188AB8u;
    {
        const bool branch_taken_0x188ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AB8u;
        // 0x188abc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ab8) {
            ctx->pc = 0x188AF0u;
            goto label_188af0;
        }
    }
    ctx->pc = 0x188AC0u;
label_188ac0:
    // 0x188ac0: 0x1062004  sllv        $a0, $a2, $t0
    ctx->pc = 0x188ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
label_188ac4:
    // 0x188ac4: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x188ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_188ac8:
    // 0x188ac8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x188ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_188acc:
    // 0x188acc: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x188accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_188ad0:
    // 0x188ad0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_188ad4:
    if (ctx->pc == 0x188AD4u) {
        ctx->pc = 0x188AD8u;
        goto label_188ad8;
    }
    ctx->pc = 0x188AD0u;
    {
        const bool branch_taken_0x188ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188ad0) {
            ctx->pc = 0x188AE0u;
            goto label_188ae0;
        }
    }
    ctx->pc = 0x188AD8u;
label_188ad8:
    // 0x188ad8: 0x10000005  b           . + 4 + (0x5 << 2)
label_188adc:
    if (ctx->pc == 0x188ADCu) {
        ctx->pc = 0x188ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AD8u;
        // 0x188adc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188AE0u;
        goto label_188ae0;
    }
    ctx->pc = 0x188AD8u;
    {
        const bool branch_taken_0x188ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AD8u;
        // 0x188adc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ad8) {
            ctx->pc = 0x188AF0u;
            goto label_188af0;
        }
    }
    ctx->pc = 0x188AE0u;
label_188ae0:
    // 0x188ae0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x188ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_188ae4:
    // 0x188ae4: 0x29030006  slti        $v1, $t0, 0x6
    ctx->pc = 0x188ae4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)6) ? 1 : 0);
label_188ae8:
    // 0x188ae8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_188aec:
    if (ctx->pc == 0x188AECu) {
        ctx->pc = 0x188AF0u;
        goto label_188af0;
    }
    ctx->pc = 0x188AE8u;
    {
        const bool branch_taken_0x188ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188ae8) {
            ctx->pc = 0x188AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188aa0;
        }
    }
    ctx->pc = 0x188AF0u;
label_188af0:
    // 0x188af0: 0x10e0004d  beqz        $a3, . + 4 + (0x4D << 2)
label_188af4:
    if (ctx->pc == 0x188AF4u) {
        ctx->pc = 0x188AF8u;
        goto label_188af8;
    }
    ctx->pc = 0x188AF0u;
    {
        const bool branch_taken_0x188af0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x188af0) {
            ctx->pc = 0x188C28u;
            goto label_188c28;
        }
    }
    ctx->pc = 0x188AF8u;
label_188af8:
    // 0x188af8: 0xc08f0cc  jal         func_23C330
label_188afc:
    if (ctx->pc == 0x188AFCu) {
        ctx->pc = 0x188B00u;
        goto label_188b00;
    }
    ctx->pc = 0x188AF8u;
    SET_GPR_U32(ctx, 31, 0x188B00u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x188B00u;
label_188b00:
    // 0x188b00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x188b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_188b04:
    // 0x188b04: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x188b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_188b08:
    // 0x188b08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188b08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188b0c:
    // 0x188b0c: 0x0  nop
    ctx->pc = 0x188b0cu;
    // NOP
label_188b10:
    // 0x188b10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x188b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_188b14:
    // 0x188b14: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x188b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_188b18:
    // 0x188b18: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x188b18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_188b1c:
    // 0x188b1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188b1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188b20:
    // 0x188b20: 0x0  nop
    ctx->pc = 0x188b20u;
    // NOP
label_188b24:
    // 0x188b24: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x188b24u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_188b28:
    // 0x188b28: 0x0  nop
    ctx->pc = 0x188b28u;
    // NOP
label_188b2c:
    // 0x188b2c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188b2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_188b30:
    // 0x188b30: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x188b30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_188b34:
    // 0x188b34: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
label_188b38:
    if (ctx->pc == 0x188B38u) {
        ctx->pc = 0x188B3Cu;
        goto label_188b3c;
    }
    ctx->pc = 0x188B34u;
    {
        const bool branch_taken_0x188b34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x188b34) {
            ctx->pc = 0x188BD0u;
            goto label_188bd0;
        }
    }
    ctx->pc = 0x188B3Cu;
label_188b3c:
    // 0x188b3c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_188b40:
    if (ctx->pc == 0x188B40u) {
        ctx->pc = 0x188B44u;
        goto label_188b44;
    }
    ctx->pc = 0x188B3Cu;
    {
        const bool branch_taken_0x188b3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x188b3c) {
            ctx->pc = 0x188B80u;
            goto label_188b80;
        }
    }
    ctx->pc = 0x188B44u;
label_188b44:
    // 0x188b44: 0x92460230  lbu         $a2, 0x230($s2)
    ctx->pc = 0x188b44u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
label_188b48:
    // 0x188b48: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x188b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_188b4c:
    // 0x188b4c: 0x24842b18  addiu       $a0, $a0, 0x2B18
    ctx->pc = 0x188b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11032));
label_188b50:
    // 0x188b50: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x188b50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_188b54:
    // 0x188b54: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x188b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_188b58:
    // 0x188b58: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x188b58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_188b5c:
    // 0x188b5c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x188b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_188b60:
    // 0x188b60: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x188b60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_188b64:
    // 0x188b64: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x188b64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_188b68:
    // 0x188b68: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_188b6c:
    if (ctx->pc == 0x188B6Cu) {
        ctx->pc = 0x188B70u;
        goto label_188b70;
    }
    ctx->pc = 0x188B68u;
    {
        const bool branch_taken_0x188b68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x188b68) {
            ctx->pc = 0x188B80u;
            goto label_188b80;
        }
    }
    ctx->pc = 0x188B70u;
label_188b70:
    // 0x188b70: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x188b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_188b74:
    // 0x188b74: 0x34630401  ori         $v1, $v1, 0x401
    ctx->pc = 0x188b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1025);
label_188b78:
    // 0x188b78: 0x10000063  b           . + 4 + (0x63 << 2)
label_188b7c:
    if (ctx->pc == 0x188B7Cu) {
        ctx->pc = 0x188B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B78u;
        // 0x188b7c: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B80u;
        goto label_188b80;
    }
    ctx->pc = 0x188B78u;
    {
        const bool branch_taken_0x188b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B78u;
        // 0x188b7c: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188b78) {
            ctx->pc = 0x188D08u;
            goto label_188d08;
        }
    }
    ctx->pc = 0x188B80u;
label_188b80:
    // 0x188b80: 0x92470230  lbu         $a3, 0x230($s2)
    ctx->pc = 0x188b80u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
label_188b84:
    // 0x188b84: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x188b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_188b88:
    // 0x188b88: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x188b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_188b8c:
    // 0x188b8c: 0x24a52b18  addiu       $a1, $a1, 0x2B18
    ctx->pc = 0x188b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11032));
label_188b90:
    // 0x188b90: 0x24842b19  addiu       $a0, $a0, 0x2B19
    ctx->pc = 0x188b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11033));
label_188b94:
    // 0x188b94: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x188b94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_188b98:
    // 0x188b98: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x188b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_188b9c:
    // 0x188b9c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x188b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_188ba0:
    // 0x188ba0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x188ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_188ba4:
    // 0x188ba4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x188ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_188ba8:
    // 0x188ba8: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x188ba8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_188bac:
    // 0x188bac: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x188bacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_188bb0:
    // 0x188bb0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x188bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_188bb4:
    // 0x188bb4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x188bb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_188bb8:
    // 0x188bb8: 0x10200053  beqz        $at, . + 4 + (0x53 << 2)
label_188bbc:
    if (ctx->pc == 0x188BBCu) {
        ctx->pc = 0x188BC0u;
        goto label_188bc0;
    }
    ctx->pc = 0x188BB8u;
    {
        const bool branch_taken_0x188bb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x188bb8) {
            ctx->pc = 0x188D08u;
            goto label_188d08;
        }
    }
    ctx->pc = 0x188BC0u;
label_188bc0:
    // 0x188bc0: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x188bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_188bc4:
    // 0x188bc4: 0x34630802  ori         $v1, $v1, 0x802
    ctx->pc = 0x188bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2050);
label_188bc8:
    // 0x188bc8: 0x1000004f  b           . + 4 + (0x4F << 2)
label_188bcc:
    if (ctx->pc == 0x188BCCu) {
        ctx->pc = 0x188BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BC8u;
        // 0x188bcc: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188BD0u;
        goto label_188bd0;
    }
    ctx->pc = 0x188BC8u;
    {
        const bool branch_taken_0x188bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BC8u;
        // 0x188bcc: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188bc8) {
            ctx->pc = 0x188D08u;
            goto label_188d08;
        }
    }
    ctx->pc = 0x188BD0u;
label_188bd0:
    // 0x188bd0: 0x1200004d  beqz        $s0, . + 4 + (0x4D << 2)
label_188bd4:
    if (ctx->pc == 0x188BD4u) {
        ctx->pc = 0x188BD8u;
        goto label_188bd8;
    }
    ctx->pc = 0x188BD0u;
    {
        const bool branch_taken_0x188bd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x188bd0) {
            ctx->pc = 0x188D08u;
            goto label_188d08;
        }
    }
    ctx->pc = 0x188BD8u;
label_188bd8:
    // 0x188bd8: 0x92470230  lbu         $a3, 0x230($s2)
    ctx->pc = 0x188bd8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
label_188bdc:
    // 0x188bdc: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x188bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_188be0:
    // 0x188be0: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x188be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_188be4:
    // 0x188be4: 0x24a52b18  addiu       $a1, $a1, 0x2B18
    ctx->pc = 0x188be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11032));
label_188be8:
    // 0x188be8: 0x24842b19  addiu       $a0, $a0, 0x2B19
    ctx->pc = 0x188be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11033));
label_188bec:
    // 0x188bec: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x188becu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_188bf0:
    // 0x188bf0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x188bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_188bf4:
    // 0x188bf4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x188bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_188bf8:
    // 0x188bf8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x188bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_188bfc:
    // 0x188bfc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x188bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_188c00:
    // 0x188c00: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x188c00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_188c04:
    // 0x188c04: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x188c04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_188c08:
    // 0x188c08: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x188c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_188c0c:
    // 0x188c0c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x188c0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_188c10:
    // 0x188c10: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
label_188c14:
    if (ctx->pc == 0x188C14u) {
        ctx->pc = 0x188C18u;
        goto label_188c18;
    }
    ctx->pc = 0x188C10u;
    {
        const bool branch_taken_0x188c10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x188c10) {
            ctx->pc = 0x188D08u;
            goto label_188d08;
        }
    }
    ctx->pc = 0x188C18u;
label_188c18:
    // 0x188c18: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x188c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_188c1c:
    // 0x188c1c: 0x34630401  ori         $v1, $v1, 0x401
    ctx->pc = 0x188c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1025);
label_188c20:
    // 0x188c20: 0x10000039  b           . + 4 + (0x39 << 2)
label_188c24:
    if (ctx->pc == 0x188C24u) {
        ctx->pc = 0x188C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C20u;
        // 0x188c24: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C28u;
        goto label_188c28;
    }
    ctx->pc = 0x188C20u;
    {
        const bool branch_taken_0x188c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C20u;
        // 0x188c24: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c20) {
            ctx->pc = 0x188D08u;
            goto label_188d08;
        }
    }
    ctx->pc = 0x188C28u;
label_188c28:
    // 0x188c28: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
label_188c2c:
    if (ctx->pc == 0x188C2Cu) {
        ctx->pc = 0x188C30u;
        goto label_188c30;
    }
    ctx->pc = 0x188C28u;
    {
        const bool branch_taken_0x188c28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x188c28) {
            ctx->pc = 0x188CFCu;
            goto label_188cfc;
        }
    }
    ctx->pc = 0x188C30u;
label_188c30:
    // 0x188c30: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
label_188c34:
    if (ctx->pc == 0x188C34u) {
        ctx->pc = 0x188C38u;
        goto label_188c38;
    }
    ctx->pc = 0x188C30u;
    {
        const bool branch_taken_0x188c30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x188c30) {
            ctx->pc = 0x188CECu;
            goto label_188cec;
        }
    }
    ctx->pc = 0x188C38u;
label_188c38:
    // 0x188c38: 0x92450230  lbu         $a1, 0x230($s2)
    ctx->pc = 0x188c38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
label_188c3c:
    // 0x188c3c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x188c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_188c40:
    // 0x188c40: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x188c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_188c44:
    // 0x188c44: 0x24632b18  addiu       $v1, $v1, 0x2B18
    ctx->pc = 0x188c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11032));
label_188c48:
    // 0x188c48: 0x24422b19  addiu       $v0, $v0, 0x2B19
    ctx->pc = 0x188c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11033));
label_188c4c:
    // 0x188c4c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x188c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_188c50:
    // 0x188c50: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x188c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_188c54:
    // 0x188c54: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x188c54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_188c58:
    // 0x188c58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x188c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_188c5c:
    // 0x188c5c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x188c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_188c60:
    // 0x188c60: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x188c60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_188c64:
    // 0x188c64: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x188c64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_188c68:
    // 0x188c68: 0xc08f0cc  jal         func_23C330
label_188c6c:
    if (ctx->pc == 0x188C6Cu) {
        ctx->pc = 0x188C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C68u;
        // 0x188c6c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188C70u;
        goto label_188c70;
    }
    ctx->pc = 0x188C68u;
    SET_GPR_U32(ctx, 31, 0x188C70u);
    ctx->pc = 0x188C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188C68u;
    // 0x188c6c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x188C70u;
label_188c70:
    // 0x188c70: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x188c70u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_188c74:
    // 0x188c74: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x188c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_188c78:
    // 0x188c78: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_188c7c:
    // 0x188c7c: 0x92450230  lbu         $a1, 0x230($s2)
    ctx->pc = 0x188c7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
label_188c80:
    // 0x188c80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x188c80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_188c84:
    // 0x188c84: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x188c84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_188c88:
    // 0x188c88: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x188c88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_188c8c:
    // 0x188c8c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x188c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_188c90:
    // 0x188c90: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x188c90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_188c94:
    // 0x188c94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188c98:
    // 0x188c98: 0x0  nop
    ctx->pc = 0x188c98u;
    // NOP
label_188c9c:
    // 0x188c9c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x188c9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_188ca0:
    // 0x188ca0: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x188ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_188ca4:
    // 0x188ca4: 0x24632b18  addiu       $v1, $v1, 0x2B18
    ctx->pc = 0x188ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11032));
label_188ca8:
    // 0x188ca8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x188ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_188cac:
    // 0x188cac: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x188cacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_188cb0:
    // 0x188cb0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x188cb0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_188cb4:
    // 0x188cb4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188cb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_188cb8:
    // 0x188cb8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x188cb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_188cbc:
    // 0x188cbc: 0x0  nop
    ctx->pc = 0x188cbcu;
    // NOP
label_188cc0:
    // 0x188cc0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x188cc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_188cc4:
    // 0x188cc4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_188cc8:
    if (ctx->pc == 0x188CC8u) {
        ctx->pc = 0x188CCCu;
        goto label_188ccc;
    }
    ctx->pc = 0x188CC4u;
    {
        const bool branch_taken_0x188cc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x188cc4) {
            ctx->pc = 0x188CDCu;
            goto label_188cdc;
        }
    }
    ctx->pc = 0x188CCCu;
label_188ccc:
    // 0x188ccc: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x188cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_188cd0:
    // 0x188cd0: 0x34630401  ori         $v1, $v1, 0x401
    ctx->pc = 0x188cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1025);
label_188cd4:
    // 0x188cd4: 0x1000000c  b           . + 4 + (0xC << 2)
label_188cd8:
    if (ctx->pc == 0x188CD8u) {
        ctx->pc = 0x188CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CD4u;
        // 0x188cd8: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188CDCu;
        goto label_188cdc;
    }
    ctx->pc = 0x188CD4u;
    {
        const bool branch_taken_0x188cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CD4u;
        // 0x188cd8: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188cd4) {
            ctx->pc = 0x188D08u;
            goto label_188d08;
        }
    }
    ctx->pc = 0x188CDCu;
label_188cdc:
    // 0x188cdc: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x188cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_188ce0:
    // 0x188ce0: 0x34630802  ori         $v1, $v1, 0x802
    ctx->pc = 0x188ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2050);
label_188ce4:
    // 0x188ce4: 0x10000008  b           . + 4 + (0x8 << 2)
label_188ce8:
    if (ctx->pc == 0x188CE8u) {
        ctx->pc = 0x188CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CE4u;
        // 0x188ce8: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188CECu;
        goto label_188cec;
    }
    ctx->pc = 0x188CE4u;
    {
        const bool branch_taken_0x188ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CE4u;
        // 0x188ce8: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ce4) {
            ctx->pc = 0x188D08u;
            goto label_188d08;
        }
    }
    ctx->pc = 0x188CECu;
label_188cec:
    // 0x188cec: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x188cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_188cf0:
    // 0x188cf0: 0x34630401  ori         $v1, $v1, 0x401
    ctx->pc = 0x188cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1025);
label_188cf4:
    // 0x188cf4: 0x10000004  b           . + 4 + (0x4 << 2)
label_188cf8:
    if (ctx->pc == 0x188CF8u) {
        ctx->pc = 0x188CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CF4u;
        // 0x188cf8: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188CFCu;
        goto label_188cfc;
    }
    ctx->pc = 0x188CF4u;
    {
        const bool branch_taken_0x188cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CF4u;
        // 0x188cf8: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188cf4) {
            ctx->pc = 0x188D08u;
            goto label_188d08;
        }
    }
    ctx->pc = 0x188CFCu;
label_188cfc:
    // 0x188cfc: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x188cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_188d00:
    // 0x188d00: 0x34630802  ori         $v1, $v1, 0x802
    ctx->pc = 0x188d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2050);
label_188d04:
    // 0x188d04: 0xae430194  sw          $v1, 0x194($s2)
    ctx->pc = 0x188d04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
label_188d08:
    // 0x188d08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x188d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_188d0c:
    // 0x188d0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188d0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_188d10:
    // 0x188d10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_188d14:
    // 0x188d14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_188d18:
    // 0x188d18: 0x3e00008  jr          $ra
label_188d1c:
    if (ctx->pc == 0x188D1Cu) {
        ctx->pc = 0x188D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D18u;
        // 0x188d1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D20u;
        goto label_188d20;
    }
    ctx->pc = 0x188D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D18u;
        // 0x188d1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188D20u;
label_188d20:
    // 0x188d20: 0x8484003c  lh          $a0, 0x3C($a0)
    ctx->pc = 0x188d20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
label_188d24:
    // 0x188d24: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x188d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_188d28:
    // 0x188d28: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_188d2c:
    if (ctx->pc == 0x188D2Cu) {
        ctx->pc = 0x188D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D28u;
        // 0x188d2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D30u;
        goto label_188d30;
    }
    ctx->pc = 0x188D28u;
    {
        const bool branch_taken_0x188d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x188D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D28u;
        // 0x188d2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d28) {
            ctx->pc = 0x188D3Cu;
            goto label_188d3c;
        }
    }
    ctx->pc = 0x188D30u;
label_188d30:
    // 0x188d30: 0x240300bf  addiu       $v1, $zero, 0xBF
    ctx->pc = 0x188d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
label_188d34:
    // 0x188d34: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_188d38:
    if (ctx->pc == 0x188D38u) {
        ctx->pc = 0x188D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D34u;
        // 0x188d38: 0x24030097  addiu       $v1, $zero, 0x97 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D3Cu;
        goto label_188d3c;
    }
    ctx->pc = 0x188D34u;
    {
        const bool branch_taken_0x188d34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x188D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D34u;
        // 0x188d38: 0x24030097  addiu       $v1, $zero, 0x97 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d34) {
            ctx->pc = 0x188D44u;
            goto label_188d44;
        }
    }
    ctx->pc = 0x188D3Cu;
label_188d3c:
    // 0x188d3c: 0x10000029  b           . + 4 + (0x29 << 2)
label_188d40:
    if (ctx->pc == 0x188D40u) {
        ctx->pc = 0x188D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D3Cu;
        // 0x188d40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188D44u;
        goto label_188d44;
    }
    ctx->pc = 0x188D3Cu;
    {
        const bool branch_taken_0x188d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D3Cu;
        // 0x188d40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d3c) {
            ctx->pc = 0x188DE4u;
            { ctx->pc = 0x188de4; return; }
        }
    }
    ctx->pc = 0x188D44u;
label_188d44:
    // 0x188d44: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_188d48:
    if (ctx->pc == 0x188D48u) {
        ctx->pc = 0x188D4Cu;
        goto label_188d4c;
    }
    ctx->pc = 0x188D44u;
    {
        const bool branch_taken_0x188d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x188d44) {
            ctx->pc = 0x188D58u;
            { ctx->pc = 0x188d58; return; }
        }
    }
    ctx->pc = 0x188D4Cu;
label_188d4c:
    // 0x188d4c: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x188d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->pc = 0x188d50u;
    return;
}
