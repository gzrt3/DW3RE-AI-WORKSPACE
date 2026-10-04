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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part486(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x288560u: goto label_288560;
        case 0x288564u: goto label_288564;
        case 0x288568u: goto label_288568;
        case 0x28856cu: goto label_28856c;
        case 0x288570u: goto label_288570;
        case 0x288574u: goto label_288574;
        case 0x288578u: goto label_288578;
        case 0x28857cu: goto label_28857c;
        case 0x288580u: goto label_288580;
        case 0x288584u: goto label_288584;
        case 0x288588u: goto label_288588;
        case 0x28858cu: goto label_28858c;
        case 0x288590u: goto label_288590;
        case 0x288594u: goto label_288594;
        case 0x288598u: goto label_288598;
        case 0x28859cu: goto label_28859c;
        case 0x2885a0u: goto label_2885a0;
        case 0x2885a4u: goto label_2885a4;
        case 0x2885a8u: goto label_2885a8;
        case 0x2885acu: goto label_2885ac;
        case 0x2885b0u: goto label_2885b0;
        case 0x2885b4u: goto label_2885b4;
        case 0x2885b8u: goto label_2885b8;
        case 0x2885bcu: goto label_2885bc;
        case 0x2885c0u: goto label_2885c0;
        case 0x2885c4u: goto label_2885c4;
        case 0x2885c8u: goto label_2885c8;
        case 0x2885ccu: goto label_2885cc;
        case 0x2885d0u: goto label_2885d0;
        case 0x2885d4u: goto label_2885d4;
        case 0x2885d8u: goto label_2885d8;
        case 0x2885dcu: goto label_2885dc;
        case 0x2885e0u: goto label_2885e0;
        case 0x2885e4u: goto label_2885e4;
        case 0x2885e8u: goto label_2885e8;
        case 0x2885ecu: goto label_2885ec;
        case 0x2885f0u: goto label_2885f0;
        case 0x2885f4u: goto label_2885f4;
        case 0x2885f8u: goto label_2885f8;
        case 0x2885fcu: goto label_2885fc;
        case 0x288600u: goto label_288600;
        case 0x288604u: goto label_288604;
        case 0x288608u: goto label_288608;
        case 0x28860cu: goto label_28860c;
        case 0x288610u: goto label_288610;
        case 0x288614u: goto label_288614;
        case 0x288618u: goto label_288618;
        case 0x28861cu: goto label_28861c;
        case 0x288620u: goto label_288620;
        case 0x288624u: goto label_288624;
        case 0x288628u: goto label_288628;
        case 0x28862cu: goto label_28862c;
        case 0x288630u: goto label_288630;
        case 0x288634u: goto label_288634;
        case 0x288638u: goto label_288638;
        case 0x28863cu: goto label_28863c;
        case 0x288640u: goto label_288640;
        case 0x288644u: goto label_288644;
        case 0x288648u: goto label_288648;
        case 0x28864cu: goto label_28864c;
        case 0x288650u: goto label_288650;
        case 0x288654u: goto label_288654;
        case 0x288658u: goto label_288658;
        case 0x28865cu: goto label_28865c;
        case 0x288660u: goto label_288660;
        case 0x288664u: goto label_288664;
        case 0x288668u: goto label_288668;
        case 0x28866cu: goto label_28866c;
        case 0x288670u: goto label_288670;
        case 0x288674u: goto label_288674;
        case 0x288678u: goto label_288678;
        case 0x28867cu: goto label_28867c;
        case 0x288680u: goto label_288680;
        case 0x288684u: goto label_288684;
        case 0x288688u: goto label_288688;
        case 0x28868cu: goto label_28868c;
        case 0x288690u: goto label_288690;
        case 0x288694u: goto label_288694;
        case 0x288698u: goto label_288698;
        case 0x28869cu: goto label_28869c;
        case 0x2886a0u: goto label_2886a0;
        case 0x2886a4u: goto label_2886a4;
        case 0x2886a8u: goto label_2886a8;
        case 0x2886acu: goto label_2886ac;
        case 0x2886b0u: goto label_2886b0;
        case 0x2886b4u: goto label_2886b4;
        case 0x2886b8u: goto label_2886b8;
        case 0x2886bcu: goto label_2886bc;
        case 0x2886c0u: goto label_2886c0;
        case 0x2886c4u: goto label_2886c4;
        case 0x2886c8u: goto label_2886c8;
        case 0x2886ccu: goto label_2886cc;
        case 0x2886d0u: goto label_2886d0;
        case 0x2886d4u: goto label_2886d4;
        case 0x2886d8u: goto label_2886d8;
        case 0x2886dcu: goto label_2886dc;
        case 0x2886e0u: goto label_2886e0;
        case 0x2886e4u: goto label_2886e4;
        case 0x2886e8u: goto label_2886e8;
        case 0x2886ecu: goto label_2886ec;
        case 0x2886f0u: goto label_2886f0;
        case 0x2886f4u: goto label_2886f4;
        case 0x2886f8u: goto label_2886f8;
        case 0x2886fcu: goto label_2886fc;
        case 0x288700u: goto label_288700;
        case 0x288704u: goto label_288704;
        case 0x288708u: goto label_288708;
        case 0x28870cu: goto label_28870c;
        case 0x288710u: goto label_288710;
        case 0x288714u: goto label_288714;
        case 0x288718u: goto label_288718;
        case 0x28871cu: goto label_28871c;
        case 0x288720u: goto label_288720;
        case 0x288724u: goto label_288724;
        case 0x288728u: goto label_288728;
        case 0x28872cu: goto label_28872c;
        case 0x288730u: goto label_288730;
        case 0x288734u: goto label_288734;
        case 0x288738u: goto label_288738;
        case 0x28873cu: goto label_28873c;
        case 0x288740u: goto label_288740;
        case 0x288744u: goto label_288744;
        case 0x288748u: goto label_288748;
        case 0x28874cu: goto label_28874c;
        case 0x288750u: goto label_288750;
        case 0x288754u: goto label_288754;
        case 0x288758u: goto label_288758;
        case 0x28875cu: goto label_28875c;
        case 0x288760u: goto label_288760;
        case 0x288764u: goto label_288764;
        case 0x288768u: goto label_288768;
        case 0x28876cu: goto label_28876c;
        case 0x288770u: goto label_288770;
        case 0x288774u: goto label_288774;
        case 0x288778u: goto label_288778;
        case 0x28877cu: goto label_28877c;
        case 0x288780u: goto label_288780;
        case 0x288784u: goto label_288784;
        case 0x288788u: goto label_288788;
        case 0x28878cu: goto label_28878c;
        case 0x288790u: goto label_288790;
        case 0x288794u: goto label_288794;
        case 0x288798u: goto label_288798;
        case 0x28879cu: goto label_28879c;
        case 0x2887a0u: goto label_2887a0;
        case 0x2887a4u: goto label_2887a4;
        case 0x2887a8u: goto label_2887a8;
        case 0x2887acu: goto label_2887ac;
        case 0x2887b0u: goto label_2887b0;
        case 0x2887b4u: goto label_2887b4;
        case 0x2887b8u: goto label_2887b8;
        case 0x2887bcu: goto label_2887bc;
        case 0x2887c0u: goto label_2887c0;
        case 0x2887c4u: goto label_2887c4;
        case 0x2887c8u: goto label_2887c8;
        case 0x2887ccu: goto label_2887cc;
        case 0x2887d0u: goto label_2887d0;
        case 0x2887d4u: goto label_2887d4;
        case 0x2887d8u: goto label_2887d8;
        case 0x2887dcu: goto label_2887dc;
        case 0x2887e0u: goto label_2887e0;
        case 0x2887e4u: goto label_2887e4;
        case 0x2887e8u: goto label_2887e8;
        case 0x2887ecu: goto label_2887ec;
        case 0x2887f0u: goto label_2887f0;
        case 0x2887f4u: goto label_2887f4;
        case 0x2887f8u: goto label_2887f8;
        case 0x2887fcu: goto label_2887fc;
        case 0x288800u: goto label_288800;
        case 0x288804u: goto label_288804;
        case 0x288808u: goto label_288808;
        case 0x28880cu: goto label_28880c;
        case 0x288810u: goto label_288810;
        case 0x288814u: goto label_288814;
        case 0x288818u: goto label_288818;
        case 0x28881cu: goto label_28881c;
        case 0x288820u: goto label_288820;
        case 0x288824u: goto label_288824;
        case 0x288828u: goto label_288828;
        case 0x28882cu: goto label_28882c;
        case 0x288830u: goto label_288830;
        case 0x288834u: goto label_288834;
        case 0x288838u: goto label_288838;
        case 0x28883cu: goto label_28883c;
        case 0x288840u: goto label_288840;
        case 0x288844u: goto label_288844;
        case 0x288848u: goto label_288848;
        case 0x28884cu: goto label_28884c;
        case 0x288850u: goto label_288850;
        case 0x288854u: goto label_288854;
        case 0x288858u: goto label_288858;
        case 0x28885cu: goto label_28885c;
        case 0x288860u: goto label_288860;
        case 0x288864u: goto label_288864;
        case 0x288868u: goto label_288868;
        case 0x28886cu: goto label_28886c;
        case 0x288870u: goto label_288870;
        case 0x288874u: goto label_288874;
        case 0x288878u: goto label_288878;
        case 0x28887cu: goto label_28887c;
        case 0x288880u: goto label_288880;
        case 0x288884u: goto label_288884;
        case 0x288888u: goto label_288888;
        case 0x28888cu: goto label_28888c;
        case 0x288890u: goto label_288890;
        case 0x288894u: goto label_288894;
        case 0x288898u: goto label_288898;
        case 0x28889cu: goto label_28889c;
        case 0x2888a0u: goto label_2888a0;
        case 0x2888a4u: goto label_2888a4;
        case 0x2888a8u: goto label_2888a8;
        case 0x2888acu: goto label_2888ac;
        case 0x2888b0u: goto label_2888b0;
        case 0x2888b4u: goto label_2888b4;
        case 0x2888b8u: goto label_2888b8;
        case 0x2888bcu: goto label_2888bc;
        case 0x2888c0u: goto label_2888c0;
        case 0x2888c4u: goto label_2888c4;
        case 0x2888c8u: goto label_2888c8;
        case 0x2888ccu: goto label_2888cc;
        case 0x2888d0u: goto label_2888d0;
        case 0x2888d4u: goto label_2888d4;
        case 0x2888d8u: goto label_2888d8;
        case 0x2888dcu: goto label_2888dc;
        case 0x2888e0u: goto label_2888e0;
        case 0x2888e4u: goto label_2888e4;
        case 0x2888e8u: goto label_2888e8;
        case 0x2888ecu: goto label_2888ec;
        case 0x2888f0u: goto label_2888f0;
        case 0x2888f4u: goto label_2888f4;
        case 0x2888f8u: goto label_2888f8;
        case 0x2888fcu: goto label_2888fc;
        case 0x288900u: goto label_288900;
        case 0x288904u: goto label_288904;
        case 0x288908u: goto label_288908;
        case 0x28890cu: goto label_28890c;
        case 0x288910u: goto label_288910;
        case 0x288914u: goto label_288914;
        case 0x288918u: goto label_288918;
        case 0x28891cu: goto label_28891c;
        case 0x288920u: goto label_288920;
        case 0x288924u: goto label_288924;
        case 0x288928u: goto label_288928;
        case 0x28892cu: goto label_28892c;
        case 0x288930u: goto label_288930;
        case 0x288934u: goto label_288934;
        case 0x288938u: goto label_288938;
        case 0x28893cu: goto label_28893c;
        case 0x288940u: goto label_288940;
        case 0x288944u: goto label_288944;
        case 0x288948u: goto label_288948;
        case 0x28894cu: goto label_28894c;
        case 0x288950u: goto label_288950;
        case 0x288954u: goto label_288954;
        case 0x288958u: goto label_288958;
        case 0x28895cu: goto label_28895c;
        case 0x288960u: goto label_288960;
        case 0x288964u: goto label_288964;
        case 0x288968u: goto label_288968;
        case 0x28896cu: goto label_28896c;
        case 0x288970u: goto label_288970;
        case 0x288974u: goto label_288974;
        case 0x288978u: goto label_288978;
        case 0x28897cu: goto label_28897c;
        case 0x288980u: goto label_288980;
        case 0x288984u: goto label_288984;
        case 0x288988u: goto label_288988;
        case 0x28898cu: goto label_28898c;
        case 0x288990u: goto label_288990;
        case 0x288994u: goto label_288994;
        case 0x288998u: goto label_288998;
        case 0x28899cu: goto label_28899c;
        case 0x2889a0u: goto label_2889a0;
        case 0x2889a4u: goto label_2889a4;
        case 0x2889a8u: goto label_2889a8;
        case 0x2889acu: goto label_2889ac;
        case 0x2889b0u: goto label_2889b0;
        case 0x2889b4u: goto label_2889b4;
        case 0x2889b8u: goto label_2889b8;
        case 0x2889bcu: goto label_2889bc;
        case 0x2889c0u: goto label_2889c0;
        case 0x2889c4u: goto label_2889c4;
        case 0x2889c8u: goto label_2889c8;
        case 0x2889ccu: goto label_2889cc;
        case 0x2889d0u: goto label_2889d0;
        case 0x2889d4u: goto label_2889d4;
        case 0x2889d8u: goto label_2889d8;
        case 0x2889dcu: goto label_2889dc;
        case 0x2889e0u: goto label_2889e0;
        case 0x2889e4u: goto label_2889e4;
        case 0x2889e8u: goto label_2889e8;
        case 0x2889ecu: goto label_2889ec;
        case 0x2889f0u: goto label_2889f0;
        case 0x2889f4u: goto label_2889f4;
        case 0x2889f8u: goto label_2889f8;
        case 0x2889fcu: goto label_2889fc;
        case 0x288a00u: goto label_288a00;
        case 0x288a04u: goto label_288a04;
        case 0x288a08u: goto label_288a08;
        case 0x288a0cu: goto label_288a0c;
        case 0x288a10u: goto label_288a10;
        case 0x288a14u: goto label_288a14;
        case 0x288a18u: goto label_288a18;
        case 0x288a1cu: goto label_288a1c;
        case 0x288a20u: goto label_288a20;
        case 0x288a24u: goto label_288a24;
        case 0x288a28u: goto label_288a28;
        case 0x288a2cu: goto label_288a2c;
        case 0x288a30u: goto label_288a30;
        case 0x288a34u: goto label_288a34;
        case 0x288a38u: goto label_288a38;
        case 0x288a3cu: goto label_288a3c;
        case 0x288a40u: goto label_288a40;
        case 0x288a44u: goto label_288a44;
        case 0x288a48u: goto label_288a48;
        case 0x288a4cu: goto label_288a4c;
        case 0x288a50u: goto label_288a50;
        case 0x288a54u: goto label_288a54;
        case 0x288a58u: goto label_288a58;
        case 0x288a5cu: goto label_288a5c;
        case 0x288a60u: goto label_288a60;
        case 0x288a64u: goto label_288a64;
        case 0x288a68u: goto label_288a68;
        case 0x288a6cu: goto label_288a6c;
        case 0x288a70u: goto label_288a70;
        case 0x288a74u: goto label_288a74;
        case 0x288a78u: goto label_288a78;
        case 0x288a7cu: goto label_288a7c;
        case 0x288a80u: goto label_288a80;
        case 0x288a84u: goto label_288a84;
        case 0x288a88u: goto label_288a88;
        case 0x288a8cu: goto label_288a8c;
        case 0x288a90u: goto label_288a90;
        case 0x288a94u: goto label_288a94;
        case 0x288a98u: goto label_288a98;
        case 0x288a9cu: goto label_288a9c;
        case 0x288aa0u: goto label_288aa0;
        case 0x288aa4u: goto label_288aa4;
        case 0x288aa8u: goto label_288aa8;
        case 0x288aacu: goto label_288aac;
        case 0x288ab0u: goto label_288ab0;
        case 0x288ab4u: goto label_288ab4;
        case 0x288ab8u: goto label_288ab8;
        case 0x288abcu: goto label_288abc;
        case 0x288ac0u: goto label_288ac0;
        case 0x288ac4u: goto label_288ac4;
        case 0x288ac8u: goto label_288ac8;
        case 0x288accu: goto label_288acc;
        case 0x288ad0u: goto label_288ad0;
        case 0x288ad4u: goto label_288ad4;
        case 0x288ad8u: goto label_288ad8;
        case 0x288adcu: goto label_288adc;
        case 0x288ae0u: goto label_288ae0;
        case 0x288ae4u: goto label_288ae4;
        case 0x288ae8u: goto label_288ae8;
        case 0x288aecu: goto label_288aec;
        case 0x288af0u: goto label_288af0;
        case 0x288af4u: goto label_288af4;
        case 0x288af8u: goto label_288af8;
        case 0x288afcu: goto label_288afc;
        case 0x288b00u: goto label_288b00;
        case 0x288b04u: goto label_288b04;
        case 0x288b08u: goto label_288b08;
        case 0x288b0cu: goto label_288b0c;
        case 0x288b10u: goto label_288b10;
        case 0x288b14u: goto label_288b14;
        case 0x288b18u: goto label_288b18;
        case 0x288b1cu: goto label_288b1c;
        case 0x288b20u: goto label_288b20;
        case 0x288b24u: goto label_288b24;
        case 0x288b28u: goto label_288b28;
        case 0x288b2cu: goto label_288b2c;
        case 0x288b30u: goto label_288b30;
        case 0x288b34u: goto label_288b34;
        case 0x288b38u: goto label_288b38;
        case 0x288b3cu: goto label_288b3c;
        case 0x288b40u: goto label_288b40;
        case 0x288b44u: goto label_288b44;
        case 0x288b48u: goto label_288b48;
        case 0x288b4cu: goto label_288b4c;
        case 0x288b50u: goto label_288b50;
        case 0x288b54u: goto label_288b54;
        case 0x288b58u: goto label_288b58;
        case 0x288b5cu: goto label_288b5c;
        case 0x288b60u: goto label_288b60;
        case 0x288b64u: goto label_288b64;
        case 0x288b68u: goto label_288b68;
        case 0x288b6cu: goto label_288b6c;
        case 0x288b70u: goto label_288b70;
        case 0x288b74u: goto label_288b74;
        case 0x288b78u: goto label_288b78;
        case 0x288b7cu: goto label_288b7c;
        case 0x288b80u: goto label_288b80;
        case 0x288b84u: goto label_288b84;
        case 0x288b88u: goto label_288b88;
        case 0x288b8cu: goto label_288b8c;
        case 0x288b90u: goto label_288b90;
        case 0x288b94u: goto label_288b94;
        case 0x288b98u: goto label_288b98;
        case 0x288b9cu: goto label_288b9c;
        case 0x288ba0u: goto label_288ba0;
        case 0x288ba4u: goto label_288ba4;
        case 0x288ba8u: goto label_288ba8;
        case 0x288bacu: goto label_288bac;
        case 0x288bb0u: goto label_288bb0;
        case 0x288bb4u: goto label_288bb4;
        case 0x288bb8u: goto label_288bb8;
        case 0x288bbcu: goto label_288bbc;
        case 0x288bc0u: goto label_288bc0;
        case 0x288bc4u: goto label_288bc4;
        case 0x288bc8u: goto label_288bc8;
        case 0x288bccu: goto label_288bcc;
        case 0x288bd0u: goto label_288bd0;
        case 0x288bd4u: goto label_288bd4;
        case 0x288bd8u: goto label_288bd8;
        case 0x288bdcu: goto label_288bdc;
        case 0x288be0u: goto label_288be0;
        case 0x288be4u: goto label_288be4;
        case 0x288be8u: goto label_288be8;
        case 0x288becu: goto label_288bec;
        case 0x288bf0u: goto label_288bf0;
        case 0x288bf4u: goto label_288bf4;
        case 0x288bf8u: goto label_288bf8;
        case 0x288bfcu: goto label_288bfc;
        case 0x288c00u: goto label_288c00;
        case 0x288c04u: goto label_288c04;
        case 0x288c08u: goto label_288c08;
        case 0x288c0cu: goto label_288c0c;
        case 0x288c10u: goto label_288c10;
        case 0x288c14u: goto label_288c14;
        case 0x288c18u: goto label_288c18;
        case 0x288c1cu: goto label_288c1c;
        case 0x288c20u: goto label_288c20;
        case 0x288c24u: goto label_288c24;
        case 0x288c28u: goto label_288c28;
        case 0x288c2cu: goto label_288c2c;
        case 0x288c30u: goto label_288c30;
        case 0x288c34u: goto label_288c34;
        case 0x288c38u: goto label_288c38;
        case 0x288c3cu: goto label_288c3c;
        case 0x288c40u: goto label_288c40;
        case 0x288c44u: goto label_288c44;
        case 0x288c48u: goto label_288c48;
        case 0x288c4cu: goto label_288c4c;
        case 0x288c50u: goto label_288c50;
        case 0x288c54u: goto label_288c54;
        case 0x288c58u: goto label_288c58;
        case 0x288c5cu: goto label_288c5c;
        case 0x288c60u: goto label_288c60;
        case 0x288c64u: goto label_288c64;
        case 0x288c68u: goto label_288c68;
        case 0x288c6cu: goto label_288c6c;
        case 0x288c70u: goto label_288c70;
        case 0x288c74u: goto label_288c74;
        case 0x288c78u: goto label_288c78;
        case 0x288c7cu: goto label_288c7c;
        case 0x288c80u: goto label_288c80;
        case 0x288c84u: goto label_288c84;
        case 0x288c88u: goto label_288c88;
        case 0x288c8cu: goto label_288c8c;
        case 0x288c90u: goto label_288c90;
        case 0x288c94u: goto label_288c94;
        case 0x288c98u: goto label_288c98;
        case 0x288c9cu: goto label_288c9c;
        case 0x288ca0u: goto label_288ca0;
        case 0x288ca4u: goto label_288ca4;
        case 0x288ca8u: goto label_288ca8;
        case 0x288cacu: goto label_288cac;
        case 0x288cb0u: goto label_288cb0;
        case 0x288cb4u: goto label_288cb4;
        case 0x288cb8u: goto label_288cb8;
        case 0x288cbcu: goto label_288cbc;
        case 0x288cc0u: goto label_288cc0;
        case 0x288cc4u: goto label_288cc4;
        case 0x288cc8u: goto label_288cc8;
        case 0x288cccu: goto label_288ccc;
        case 0x288cd0u: goto label_288cd0;
        case 0x288cd4u: goto label_288cd4;
        case 0x288cd8u: goto label_288cd8;
        case 0x288cdcu: goto label_288cdc;
        case 0x288ce0u: goto label_288ce0;
        case 0x288ce4u: goto label_288ce4;
        case 0x288ce8u: goto label_288ce8;
        case 0x288cecu: goto label_288cec;
        case 0x288cf0u: goto label_288cf0;
        case 0x288cf4u: goto label_288cf4;
        case 0x288cf8u: goto label_288cf8;
        case 0x288cfcu: goto label_288cfc;
        case 0x288d00u: goto label_288d00;
        case 0x288d04u: goto label_288d04;
        case 0x288d08u: goto label_288d08;
        case 0x288d0cu: goto label_288d0c;
        case 0x288d10u: goto label_288d10;
        case 0x288d14u: goto label_288d14;
        case 0x288d18u: goto label_288d18;
        case 0x288d1cu: goto label_288d1c;
        case 0x288d20u: goto label_288d20;
        case 0x288d24u: goto label_288d24;
        case 0x288d28u: goto label_288d28;
        case 0x288d2cu: goto label_288d2c;
        default: return;
    }

label_288560:
    // 0x288560: 0x0  nop
    ctx->pc = 0x288560u;
    // NOP
label_288564:
    // 0x288564: 0x0  nop
    ctx->pc = 0x288564u;
    // NOP
label_288568:
    // 0x288568: 0x0  nop
    ctx->pc = 0x288568u;
    // NOP
label_28856c:
    // 0x28856c: 0x0  nop
    ctx->pc = 0x28856cu;
    // NOP
label_288570:
    // 0x288570: 0x0  nop
    ctx->pc = 0x288570u;
    // NOP
label_288574:
    // 0x288574: 0x0  nop
    ctx->pc = 0x288574u;
    // NOP
label_288578:
    // 0x288578: 0x0  nop
    ctx->pc = 0x288578u;
    // NOP
label_28857c:
    // 0x28857c: 0x0  nop
    ctx->pc = 0x28857cu;
    // NOP
label_288580:
    // 0x288580: 0x0  nop
    ctx->pc = 0x288580u;
    // NOP
label_288584:
    // 0x288584: 0x0  nop
    ctx->pc = 0x288584u;
    // NOP
label_288588:
    // 0x288588: 0x0  nop
    ctx->pc = 0x288588u;
    // NOP
label_28858c:
    // 0x28858c: 0x0  nop
    ctx->pc = 0x28858cu;
    // NOP
label_288590:
    // 0x288590: 0x0  nop
    ctx->pc = 0x288590u;
    // NOP
label_288594:
    // 0x288594: 0x0  nop
    ctx->pc = 0x288594u;
    // NOP
label_288598:
    // 0x288598: 0x0  nop
    ctx->pc = 0x288598u;
    // NOP
label_28859c:
    // 0x28859c: 0x0  nop
    ctx->pc = 0x28859cu;
    // NOP
label_2885a0:
    // 0x2885a0: 0x0  nop
    ctx->pc = 0x2885a0u;
    // NOP
label_2885a4:
    // 0x2885a4: 0x0  nop
    ctx->pc = 0x2885a4u;
    // NOP
label_2885a8:
    // 0x2885a8: 0x0  nop
    ctx->pc = 0x2885a8u;
    // NOP
label_2885ac:
    // 0x2885ac: 0x0  nop
    ctx->pc = 0x2885acu;
    // NOP
label_2885b0:
    // 0x2885b0: 0x0  nop
    ctx->pc = 0x2885b0u;
    // NOP
label_2885b4:
    // 0x2885b4: 0x0  nop
    ctx->pc = 0x2885b4u;
    // NOP
label_2885b8:
    // 0x2885b8: 0x0  nop
    ctx->pc = 0x2885b8u;
    // NOP
label_2885bc:
    // 0x2885bc: 0x0  nop
    ctx->pc = 0x2885bcu;
    // NOP
label_2885c0:
    // 0x2885c0: 0x0  nop
    ctx->pc = 0x2885c0u;
    // NOP
label_2885c4:
    // 0x2885c4: 0x0  nop
    ctx->pc = 0x2885c4u;
    // NOP
label_2885c8:
    // 0x2885c8: 0x0  nop
    ctx->pc = 0x2885c8u;
    // NOP
label_2885cc:
    // 0x2885cc: 0x0  nop
    ctx->pc = 0x2885ccu;
    // NOP
label_2885d0:
    // 0x2885d0: 0x0  nop
    ctx->pc = 0x2885d0u;
    // NOP
label_2885d4:
    // 0x2885d4: 0x0  nop
    ctx->pc = 0x2885d4u;
    // NOP
label_2885d8:
    // 0x2885d8: 0x0  nop
    ctx->pc = 0x2885d8u;
    // NOP
label_2885dc:
    // 0x2885dc: 0x0  nop
    ctx->pc = 0x2885dcu;
    // NOP
label_2885e0:
    // 0x2885e0: 0x0  nop
    ctx->pc = 0x2885e0u;
    // NOP
label_2885e4:
    // 0x2885e4: 0x0  nop
    ctx->pc = 0x2885e4u;
    // NOP
label_2885e8:
    // 0x2885e8: 0x0  nop
    ctx->pc = 0x2885e8u;
    // NOP
label_2885ec:
    // 0x2885ec: 0x0  nop
    ctx->pc = 0x2885ecu;
    // NOP
label_2885f0:
    // 0x2885f0: 0x0  nop
    ctx->pc = 0x2885f0u;
    // NOP
label_2885f4:
    // 0x2885f4: 0x0  nop
    ctx->pc = 0x2885f4u;
    // NOP
label_2885f8:
    // 0x2885f8: 0x0  nop
    ctx->pc = 0x2885f8u;
    // NOP
label_2885fc:
    // 0x2885fc: 0x0  nop
    ctx->pc = 0x2885fcu;
    // NOP
label_288600:
    // 0x288600: 0x0  nop
    ctx->pc = 0x288600u;
    // NOP
label_288604:
    // 0x288604: 0x0  nop
    ctx->pc = 0x288604u;
    // NOP
label_288608:
    // 0x288608: 0x0  nop
    ctx->pc = 0x288608u;
    // NOP
label_28860c:
    // 0x28860c: 0x0  nop
    ctx->pc = 0x28860cu;
    // NOP
label_288610:
    // 0x288610: 0x0  nop
    ctx->pc = 0x288610u;
    // NOP
label_288614:
    // 0x288614: 0x0  nop
    ctx->pc = 0x288614u;
    // NOP
label_288618:
    // 0x288618: 0x0  nop
    ctx->pc = 0x288618u;
    // NOP
label_28861c:
    // 0x28861c: 0x0  nop
    ctx->pc = 0x28861cu;
    // NOP
label_288620:
    // 0x288620: 0x0  nop
    ctx->pc = 0x288620u;
    // NOP
label_288624:
    // 0x288624: 0x0  nop
    ctx->pc = 0x288624u;
    // NOP
label_288628:
    // 0x288628: 0x0  nop
    ctx->pc = 0x288628u;
    // NOP
label_28862c:
    // 0x28862c: 0x0  nop
    ctx->pc = 0x28862cu;
    // NOP
label_288630:
    // 0x288630: 0x0  nop
    ctx->pc = 0x288630u;
    // NOP
label_288634:
    // 0x288634: 0x0  nop
    ctx->pc = 0x288634u;
    // NOP
label_288638:
    // 0x288638: 0x0  nop
    ctx->pc = 0x288638u;
    // NOP
label_28863c:
    // 0x28863c: 0x0  nop
    ctx->pc = 0x28863cu;
    // NOP
label_288640:
    // 0x288640: 0x0  nop
    ctx->pc = 0x288640u;
    // NOP
label_288644:
    // 0x288644: 0x0  nop
    ctx->pc = 0x288644u;
    // NOP
label_288648:
    // 0x288648: 0x0  nop
    ctx->pc = 0x288648u;
    // NOP
label_28864c:
    // 0x28864c: 0x0  nop
    ctx->pc = 0x28864cu;
    // NOP
label_288650:
    // 0x288650: 0x0  nop
    ctx->pc = 0x288650u;
    // NOP
label_288654:
    // 0x288654: 0x0  nop
    ctx->pc = 0x288654u;
    // NOP
label_288658:
    // 0x288658: 0x0  nop
    ctx->pc = 0x288658u;
    // NOP
label_28865c:
    // 0x28865c: 0x0  nop
    ctx->pc = 0x28865cu;
    // NOP
label_288660:
    // 0x288660: 0x0  nop
    ctx->pc = 0x288660u;
    // NOP
label_288664:
    // 0x288664: 0x0  nop
    ctx->pc = 0x288664u;
    // NOP
label_288668:
    // 0x288668: 0x0  nop
    ctx->pc = 0x288668u;
    // NOP
label_28866c:
    // 0x28866c: 0x0  nop
    ctx->pc = 0x28866cu;
    // NOP
label_288670:
    // 0x288670: 0x0  nop
    ctx->pc = 0x288670u;
    // NOP
label_288674:
    // 0x288674: 0x0  nop
    ctx->pc = 0x288674u;
    // NOP
label_288678:
    // 0x288678: 0x0  nop
    ctx->pc = 0x288678u;
    // NOP
label_28867c:
    // 0x28867c: 0x0  nop
    ctx->pc = 0x28867cu;
    // NOP
label_288680:
    // 0x288680: 0x0  nop
    ctx->pc = 0x288680u;
    // NOP
label_288684:
    // 0x288684: 0x0  nop
    ctx->pc = 0x288684u;
    // NOP
label_288688:
    // 0x288688: 0x0  nop
    ctx->pc = 0x288688u;
    // NOP
label_28868c:
    // 0x28868c: 0x0  nop
    ctx->pc = 0x28868cu;
    // NOP
label_288690:
    // 0x288690: 0x0  nop
    ctx->pc = 0x288690u;
    // NOP
label_288694:
    // 0x288694: 0x0  nop
    ctx->pc = 0x288694u;
    // NOP
label_288698:
    // 0x288698: 0x0  nop
    ctx->pc = 0x288698u;
    // NOP
label_28869c:
    // 0x28869c: 0x0  nop
    ctx->pc = 0x28869cu;
    // NOP
label_2886a0:
    // 0x2886a0: 0x0  nop
    ctx->pc = 0x2886a0u;
    // NOP
label_2886a4:
    // 0x2886a4: 0x0  nop
    ctx->pc = 0x2886a4u;
    // NOP
label_2886a8:
    // 0x2886a8: 0x0  nop
    ctx->pc = 0x2886a8u;
    // NOP
label_2886ac:
    // 0x2886ac: 0x0  nop
    ctx->pc = 0x2886acu;
    // NOP
label_2886b0:
    // 0x2886b0: 0x0  nop
    ctx->pc = 0x2886b0u;
    // NOP
label_2886b4:
    // 0x2886b4: 0x0  nop
    ctx->pc = 0x2886b4u;
    // NOP
label_2886b8:
    // 0x2886b8: 0x0  nop
    ctx->pc = 0x2886b8u;
    // NOP
label_2886bc:
    // 0x2886bc: 0x0  nop
    ctx->pc = 0x2886bcu;
    // NOP
label_2886c0:
    // 0x2886c0: 0x0  nop
    ctx->pc = 0x2886c0u;
    // NOP
label_2886c4:
    // 0x2886c4: 0x0  nop
    ctx->pc = 0x2886c4u;
    // NOP
label_2886c8:
    // 0x2886c8: 0x0  nop
    ctx->pc = 0x2886c8u;
    // NOP
label_2886cc:
    // 0x2886cc: 0x0  nop
    ctx->pc = 0x2886ccu;
    // NOP
label_2886d0:
    // 0x2886d0: 0x0  nop
    ctx->pc = 0x2886d0u;
    // NOP
label_2886d4:
    // 0x2886d4: 0x0  nop
    ctx->pc = 0x2886d4u;
    // NOP
label_2886d8:
    // 0x2886d8: 0x0  nop
    ctx->pc = 0x2886d8u;
    // NOP
label_2886dc:
    // 0x2886dc: 0x0  nop
    ctx->pc = 0x2886dcu;
    // NOP
label_2886e0:
    // 0x2886e0: 0x0  nop
    ctx->pc = 0x2886e0u;
    // NOP
label_2886e4:
    // 0x2886e4: 0x0  nop
    ctx->pc = 0x2886e4u;
    // NOP
label_2886e8:
    // 0x2886e8: 0x0  nop
    ctx->pc = 0x2886e8u;
    // NOP
label_2886ec:
    // 0x2886ec: 0x0  nop
    ctx->pc = 0x2886ecu;
    // NOP
label_2886f0:
    // 0x2886f0: 0x0  nop
    ctx->pc = 0x2886f0u;
    // NOP
label_2886f4:
    // 0x2886f4: 0x0  nop
    ctx->pc = 0x2886f4u;
    // NOP
label_2886f8:
    // 0x2886f8: 0x0  nop
    ctx->pc = 0x2886f8u;
    // NOP
label_2886fc:
    // 0x2886fc: 0x0  nop
    ctx->pc = 0x2886fcu;
    // NOP
label_288700:
    // 0x288700: 0x0  nop
    ctx->pc = 0x288700u;
    // NOP
label_288704:
    // 0x288704: 0x0  nop
    ctx->pc = 0x288704u;
    // NOP
label_288708:
    // 0x288708: 0x0  nop
    ctx->pc = 0x288708u;
    // NOP
label_28870c:
    // 0x28870c: 0x0  nop
    ctx->pc = 0x28870cu;
    // NOP
label_288710:
    // 0x288710: 0x0  nop
    ctx->pc = 0x288710u;
    // NOP
label_288714:
    // 0x288714: 0x0  nop
    ctx->pc = 0x288714u;
    // NOP
label_288718:
    // 0x288718: 0x0  nop
    ctx->pc = 0x288718u;
    // NOP
label_28871c:
    // 0x28871c: 0x0  nop
    ctx->pc = 0x28871cu;
    // NOP
label_288720:
    // 0x288720: 0x0  nop
    ctx->pc = 0x288720u;
    // NOP
label_288724:
    // 0x288724: 0x0  nop
    ctx->pc = 0x288724u;
    // NOP
label_288728:
    // 0x288728: 0x0  nop
    ctx->pc = 0x288728u;
    // NOP
label_28872c:
    // 0x28872c: 0x0  nop
    ctx->pc = 0x28872cu;
    // NOP
label_288730:
    // 0x288730: 0x0  nop
    ctx->pc = 0x288730u;
    // NOP
label_288734:
    // 0x288734: 0x0  nop
    ctx->pc = 0x288734u;
    // NOP
label_288738:
    // 0x288738: 0x0  nop
    ctx->pc = 0x288738u;
    // NOP
label_28873c:
    // 0x28873c: 0x0  nop
    ctx->pc = 0x28873cu;
    // NOP
label_288740:
    // 0x288740: 0x0  nop
    ctx->pc = 0x288740u;
    // NOP
label_288744:
    // 0x288744: 0x0  nop
    ctx->pc = 0x288744u;
    // NOP
label_288748:
    // 0x288748: 0x0  nop
    ctx->pc = 0x288748u;
    // NOP
label_28874c:
    // 0x28874c: 0x0  nop
    ctx->pc = 0x28874cu;
    // NOP
label_288750:
    // 0x288750: 0x0  nop
    ctx->pc = 0x288750u;
    // NOP
label_288754:
    // 0x288754: 0x0  nop
    ctx->pc = 0x288754u;
    // NOP
label_288758:
    // 0x288758: 0x0  nop
    ctx->pc = 0x288758u;
    // NOP
label_28875c:
    // 0x28875c: 0x0  nop
    ctx->pc = 0x28875cu;
    // NOP
label_288760:
    // 0x288760: 0x0  nop
    ctx->pc = 0x288760u;
    // NOP
label_288764:
    // 0x288764: 0x0  nop
    ctx->pc = 0x288764u;
    // NOP
label_288768:
    // 0x288768: 0x0  nop
    ctx->pc = 0x288768u;
    // NOP
label_28876c:
    // 0x28876c: 0x0  nop
    ctx->pc = 0x28876cu;
    // NOP
label_288770:
    // 0x288770: 0x0  nop
    ctx->pc = 0x288770u;
    // NOP
label_288774:
    // 0x288774: 0x0  nop
    ctx->pc = 0x288774u;
    // NOP
label_288778:
    // 0x288778: 0x0  nop
    ctx->pc = 0x288778u;
    // NOP
label_28877c:
    // 0x28877c: 0x0  nop
    ctx->pc = 0x28877cu;
    // NOP
label_288780:
    // 0x288780: 0x0  nop
    ctx->pc = 0x288780u;
    // NOP
label_288784:
    // 0x288784: 0x0  nop
    ctx->pc = 0x288784u;
    // NOP
label_288788:
    // 0x288788: 0x0  nop
    ctx->pc = 0x288788u;
    // NOP
label_28878c:
    // 0x28878c: 0x0  nop
    ctx->pc = 0x28878cu;
    // NOP
label_288790:
    // 0x288790: 0x0  nop
    ctx->pc = 0x288790u;
    // NOP
label_288794:
    // 0x288794: 0x0  nop
    ctx->pc = 0x288794u;
    // NOP
label_288798:
    // 0x288798: 0x0  nop
    ctx->pc = 0x288798u;
    // NOP
label_28879c:
    // 0x28879c: 0x0  nop
    ctx->pc = 0x28879cu;
    // NOP
label_2887a0:
    // 0x2887a0: 0x0  nop
    ctx->pc = 0x2887a0u;
    // NOP
label_2887a4:
    // 0x2887a4: 0x0  nop
    ctx->pc = 0x2887a4u;
    // NOP
label_2887a8:
    // 0x2887a8: 0x0  nop
    ctx->pc = 0x2887a8u;
    // NOP
label_2887ac:
    // 0x2887ac: 0x0  nop
    ctx->pc = 0x2887acu;
    // NOP
label_2887b0:
    // 0x2887b0: 0x0  nop
    ctx->pc = 0x2887b0u;
    // NOP
label_2887b4:
    // 0x2887b4: 0x0  nop
    ctx->pc = 0x2887b4u;
    // NOP
label_2887b8:
    // 0x2887b8: 0x0  nop
    ctx->pc = 0x2887b8u;
    // NOP
label_2887bc:
    // 0x2887bc: 0x0  nop
    ctx->pc = 0x2887bcu;
    // NOP
label_2887c0:
    // 0x2887c0: 0x0  nop
    ctx->pc = 0x2887c0u;
    // NOP
label_2887c4:
    // 0x2887c4: 0x0  nop
    ctx->pc = 0x2887c4u;
    // NOP
label_2887c8:
    // 0x2887c8: 0x0  nop
    ctx->pc = 0x2887c8u;
    // NOP
label_2887cc:
    // 0x2887cc: 0x0  nop
    ctx->pc = 0x2887ccu;
    // NOP
label_2887d0:
    // 0x2887d0: 0x0  nop
    ctx->pc = 0x2887d0u;
    // NOP
label_2887d4:
    // 0x2887d4: 0x0  nop
    ctx->pc = 0x2887d4u;
    // NOP
label_2887d8:
    // 0x2887d8: 0x0  nop
    ctx->pc = 0x2887d8u;
    // NOP
label_2887dc:
    // 0x2887dc: 0x0  nop
    ctx->pc = 0x2887dcu;
    // NOP
label_2887e0:
    // 0x2887e0: 0x0  nop
    ctx->pc = 0x2887e0u;
    // NOP
label_2887e4:
    // 0x2887e4: 0x0  nop
    ctx->pc = 0x2887e4u;
    // NOP
label_2887e8:
    // 0x2887e8: 0x0  nop
    ctx->pc = 0x2887e8u;
    // NOP
label_2887ec:
    // 0x2887ec: 0x0  nop
    ctx->pc = 0x2887ecu;
    // NOP
label_2887f0:
    // 0x2887f0: 0x0  nop
    ctx->pc = 0x2887f0u;
    // NOP
label_2887f4:
    // 0x2887f4: 0x0  nop
    ctx->pc = 0x2887f4u;
    // NOP
label_2887f8:
    // 0x2887f8: 0x0  nop
    ctx->pc = 0x2887f8u;
    // NOP
label_2887fc:
    // 0x2887fc: 0x0  nop
    ctx->pc = 0x2887fcu;
    // NOP
label_288800:
    // 0x288800: 0x0  nop
    ctx->pc = 0x288800u;
    // NOP
label_288804:
    // 0x288804: 0x0  nop
    ctx->pc = 0x288804u;
    // NOP
label_288808:
    // 0x288808: 0x0  nop
    ctx->pc = 0x288808u;
    // NOP
label_28880c:
    // 0x28880c: 0x0  nop
    ctx->pc = 0x28880cu;
    // NOP
label_288810:
    // 0x288810: 0x0  nop
    ctx->pc = 0x288810u;
    // NOP
label_288814:
    // 0x288814: 0x0  nop
    ctx->pc = 0x288814u;
    // NOP
label_288818:
    // 0x288818: 0x0  nop
    ctx->pc = 0x288818u;
    // NOP
label_28881c:
    // 0x28881c: 0x0  nop
    ctx->pc = 0x28881cu;
    // NOP
label_288820:
    // 0x288820: 0x0  nop
    ctx->pc = 0x288820u;
    // NOP
label_288824:
    // 0x288824: 0x0  nop
    ctx->pc = 0x288824u;
    // NOP
label_288828:
    // 0x288828: 0x0  nop
    ctx->pc = 0x288828u;
    // NOP
label_28882c:
    // 0x28882c: 0x0  nop
    ctx->pc = 0x28882cu;
    // NOP
label_288830:
    // 0x288830: 0x0  nop
    ctx->pc = 0x288830u;
    // NOP
label_288834:
    // 0x288834: 0x0  nop
    ctx->pc = 0x288834u;
    // NOP
label_288838:
    // 0x288838: 0x0  nop
    ctx->pc = 0x288838u;
    // NOP
label_28883c:
    // 0x28883c: 0x0  nop
    ctx->pc = 0x28883cu;
    // NOP
label_288840:
    // 0x288840: 0x0  nop
    ctx->pc = 0x288840u;
    // NOP
label_288844:
    // 0x288844: 0x0  nop
    ctx->pc = 0x288844u;
    // NOP
label_288848:
    // 0x288848: 0x0  nop
    ctx->pc = 0x288848u;
    // NOP
label_28884c:
    // 0x28884c: 0x0  nop
    ctx->pc = 0x28884cu;
    // NOP
label_288850:
    // 0x288850: 0x0  nop
    ctx->pc = 0x288850u;
    // NOP
label_288854:
    // 0x288854: 0x0  nop
    ctx->pc = 0x288854u;
    // NOP
label_288858:
    // 0x288858: 0x0  nop
    ctx->pc = 0x288858u;
    // NOP
label_28885c:
    // 0x28885c: 0x0  nop
    ctx->pc = 0x28885cu;
    // NOP
label_288860:
    // 0x288860: 0x0  nop
    ctx->pc = 0x288860u;
    // NOP
label_288864:
    // 0x288864: 0x0  nop
    ctx->pc = 0x288864u;
    // NOP
label_288868:
    // 0x288868: 0x0  nop
    ctx->pc = 0x288868u;
    // NOP
label_28886c:
    // 0x28886c: 0x0  nop
    ctx->pc = 0x28886cu;
    // NOP
label_288870:
    // 0x288870: 0x0  nop
    ctx->pc = 0x288870u;
    // NOP
label_288874:
    // 0x288874: 0x0  nop
    ctx->pc = 0x288874u;
    // NOP
label_288878:
    // 0x288878: 0x0  nop
    ctx->pc = 0x288878u;
    // NOP
label_28887c:
    // 0x28887c: 0x0  nop
    ctx->pc = 0x28887cu;
    // NOP
label_288880:
    // 0x288880: 0x0  nop
    ctx->pc = 0x288880u;
    // NOP
label_288884:
    // 0x288884: 0x0  nop
    ctx->pc = 0x288884u;
    // NOP
label_288888:
    // 0x288888: 0x0  nop
    ctx->pc = 0x288888u;
    // NOP
label_28888c:
    // 0x28888c: 0x0  nop
    ctx->pc = 0x28888cu;
    // NOP
label_288890:
    // 0x288890: 0x0  nop
    ctx->pc = 0x288890u;
    // NOP
label_288894:
    // 0x288894: 0x0  nop
    ctx->pc = 0x288894u;
    // NOP
label_288898:
    // 0x288898: 0x0  nop
    ctx->pc = 0x288898u;
    // NOP
label_28889c:
    // 0x28889c: 0x0  nop
    ctx->pc = 0x28889cu;
    // NOP
label_2888a0:
    // 0x2888a0: 0x0  nop
    ctx->pc = 0x2888a0u;
    // NOP
label_2888a4:
    // 0x2888a4: 0x0  nop
    ctx->pc = 0x2888a4u;
    // NOP
label_2888a8:
    // 0x2888a8: 0x0  nop
    ctx->pc = 0x2888a8u;
    // NOP
label_2888ac:
    // 0x2888ac: 0x0  nop
    ctx->pc = 0x2888acu;
    // NOP
label_2888b0:
    // 0x2888b0: 0x0  nop
    ctx->pc = 0x2888b0u;
    // NOP
label_2888b4:
    // 0x2888b4: 0x0  nop
    ctx->pc = 0x2888b4u;
    // NOP
label_2888b8:
    // 0x2888b8: 0x0  nop
    ctx->pc = 0x2888b8u;
    // NOP
label_2888bc:
    // 0x2888bc: 0x0  nop
    ctx->pc = 0x2888bcu;
    // NOP
label_2888c0:
    // 0x2888c0: 0x0  nop
    ctx->pc = 0x2888c0u;
    // NOP
label_2888c4:
    // 0x2888c4: 0x0  nop
    ctx->pc = 0x2888c4u;
    // NOP
label_2888c8:
    // 0x2888c8: 0x0  nop
    ctx->pc = 0x2888c8u;
    // NOP
label_2888cc:
    // 0x2888cc: 0x0  nop
    ctx->pc = 0x2888ccu;
    // NOP
label_2888d0:
    // 0x2888d0: 0x0  nop
    ctx->pc = 0x2888d0u;
    // NOP
label_2888d4:
    // 0x2888d4: 0x0  nop
    ctx->pc = 0x2888d4u;
    // NOP
label_2888d8:
    // 0x2888d8: 0x0  nop
    ctx->pc = 0x2888d8u;
    // NOP
label_2888dc:
    // 0x2888dc: 0x0  nop
    ctx->pc = 0x2888dcu;
    // NOP
label_2888e0:
    // 0x2888e0: 0x0  nop
    ctx->pc = 0x2888e0u;
    // NOP
label_2888e4:
    // 0x2888e4: 0x0  nop
    ctx->pc = 0x2888e4u;
    // NOP
label_2888e8:
    // 0x2888e8: 0x0  nop
    ctx->pc = 0x2888e8u;
    // NOP
label_2888ec:
    // 0x2888ec: 0x0  nop
    ctx->pc = 0x2888ecu;
    // NOP
label_2888f0:
    // 0x2888f0: 0x0  nop
    ctx->pc = 0x2888f0u;
    // NOP
label_2888f4:
    // 0x2888f4: 0x0  nop
    ctx->pc = 0x2888f4u;
    // NOP
label_2888f8:
    // 0x2888f8: 0x0  nop
    ctx->pc = 0x2888f8u;
    // NOP
label_2888fc:
    // 0x2888fc: 0x0  nop
    ctx->pc = 0x2888fcu;
    // NOP
label_288900:
    // 0x288900: 0x0  nop
    ctx->pc = 0x288900u;
    // NOP
label_288904:
    // 0x288904: 0x0  nop
    ctx->pc = 0x288904u;
    // NOP
label_288908:
    // 0x288908: 0x0  nop
    ctx->pc = 0x288908u;
    // NOP
label_28890c:
    // 0x28890c: 0x0  nop
    ctx->pc = 0x28890cu;
    // NOP
label_288910:
    // 0x288910: 0x0  nop
    ctx->pc = 0x288910u;
    // NOP
label_288914:
    // 0x288914: 0x0  nop
    ctx->pc = 0x288914u;
    // NOP
label_288918:
    // 0x288918: 0x0  nop
    ctx->pc = 0x288918u;
    // NOP
label_28891c:
    // 0x28891c: 0x0  nop
    ctx->pc = 0x28891cu;
    // NOP
label_288920:
    // 0x288920: 0x0  nop
    ctx->pc = 0x288920u;
    // NOP
label_288924:
    // 0x288924: 0x0  nop
    ctx->pc = 0x288924u;
    // NOP
label_288928:
    // 0x288928: 0x0  nop
    ctx->pc = 0x288928u;
    // NOP
label_28892c:
    // 0x28892c: 0x0  nop
    ctx->pc = 0x28892cu;
    // NOP
label_288930:
    // 0x288930: 0x0  nop
    ctx->pc = 0x288930u;
    // NOP
label_288934:
    // 0x288934: 0x0  nop
    ctx->pc = 0x288934u;
    // NOP
label_288938:
    // 0x288938: 0x0  nop
    ctx->pc = 0x288938u;
    // NOP
label_28893c:
    // 0x28893c: 0x0  nop
    ctx->pc = 0x28893cu;
    // NOP
label_288940:
    // 0x288940: 0x0  nop
    ctx->pc = 0x288940u;
    // NOP
label_288944:
    // 0x288944: 0x0  nop
    ctx->pc = 0x288944u;
    // NOP
label_288948:
    // 0x288948: 0x0  nop
    ctx->pc = 0x288948u;
    // NOP
label_28894c:
    // 0x28894c: 0x0  nop
    ctx->pc = 0x28894cu;
    // NOP
label_288950:
    // 0x288950: 0x0  nop
    ctx->pc = 0x288950u;
    // NOP
label_288954:
    // 0x288954: 0x0  nop
    ctx->pc = 0x288954u;
    // NOP
label_288958:
    // 0x288958: 0x0  nop
    ctx->pc = 0x288958u;
    // NOP
label_28895c:
    // 0x28895c: 0x0  nop
    ctx->pc = 0x28895cu;
    // NOP
label_288960:
    // 0x288960: 0x0  nop
    ctx->pc = 0x288960u;
    // NOP
label_288964:
    // 0x288964: 0x0  nop
    ctx->pc = 0x288964u;
    // NOP
label_288968:
    // 0x288968: 0x0  nop
    ctx->pc = 0x288968u;
    // NOP
label_28896c:
    // 0x28896c: 0x0  nop
    ctx->pc = 0x28896cu;
    // NOP
label_288970:
    // 0x288970: 0x0  nop
    ctx->pc = 0x288970u;
    // NOP
label_288974:
    // 0x288974: 0x0  nop
    ctx->pc = 0x288974u;
    // NOP
label_288978:
    // 0x288978: 0x0  nop
    ctx->pc = 0x288978u;
    // NOP
label_28897c:
    // 0x28897c: 0x0  nop
    ctx->pc = 0x28897cu;
    // NOP
label_288980:
    // 0x288980: 0x0  nop
    ctx->pc = 0x288980u;
    // NOP
label_288984:
    // 0x288984: 0x0  nop
    ctx->pc = 0x288984u;
    // NOP
label_288988:
    // 0x288988: 0x0  nop
    ctx->pc = 0x288988u;
    // NOP
label_28898c:
    // 0x28898c: 0x0  nop
    ctx->pc = 0x28898cu;
    // NOP
label_288990:
    // 0x288990: 0x0  nop
    ctx->pc = 0x288990u;
    // NOP
label_288994:
    // 0x288994: 0x0  nop
    ctx->pc = 0x288994u;
    // NOP
label_288998:
    // 0x288998: 0x0  nop
    ctx->pc = 0x288998u;
    // NOP
label_28899c:
    // 0x28899c: 0x0  nop
    ctx->pc = 0x28899cu;
    // NOP
label_2889a0:
    // 0x2889a0: 0x0  nop
    ctx->pc = 0x2889a0u;
    // NOP
label_2889a4:
    // 0x2889a4: 0x0  nop
    ctx->pc = 0x2889a4u;
    // NOP
label_2889a8:
    // 0x2889a8: 0x0  nop
    ctx->pc = 0x2889a8u;
    // NOP
label_2889ac:
    // 0x2889ac: 0x0  nop
    ctx->pc = 0x2889acu;
    // NOP
label_2889b0:
    // 0x2889b0: 0x0  nop
    ctx->pc = 0x2889b0u;
    // NOP
label_2889b4:
    // 0x2889b4: 0x0  nop
    ctx->pc = 0x2889b4u;
    // NOP
label_2889b8:
    // 0x2889b8: 0x0  nop
    ctx->pc = 0x2889b8u;
    // NOP
label_2889bc:
    // 0x2889bc: 0x0  nop
    ctx->pc = 0x2889bcu;
    // NOP
label_2889c0:
    // 0x2889c0: 0x0  nop
    ctx->pc = 0x2889c0u;
    // NOP
label_2889c4:
    // 0x2889c4: 0x0  nop
    ctx->pc = 0x2889c4u;
    // NOP
label_2889c8:
    // 0x2889c8: 0x0  nop
    ctx->pc = 0x2889c8u;
    // NOP
label_2889cc:
    // 0x2889cc: 0x0  nop
    ctx->pc = 0x2889ccu;
    // NOP
label_2889d0:
    // 0x2889d0: 0x0  nop
    ctx->pc = 0x2889d0u;
    // NOP
label_2889d4:
    // 0x2889d4: 0x0  nop
    ctx->pc = 0x2889d4u;
    // NOP
label_2889d8:
    // 0x2889d8: 0x0  nop
    ctx->pc = 0x2889d8u;
    // NOP
label_2889dc:
    // 0x2889dc: 0x0  nop
    ctx->pc = 0x2889dcu;
    // NOP
label_2889e0:
    // 0x2889e0: 0x0  nop
    ctx->pc = 0x2889e0u;
    // NOP
label_2889e4:
    // 0x2889e4: 0x0  nop
    ctx->pc = 0x2889e4u;
    // NOP
label_2889e8:
    // 0x2889e8: 0x0  nop
    ctx->pc = 0x2889e8u;
    // NOP
label_2889ec:
    // 0x2889ec: 0x0  nop
    ctx->pc = 0x2889ecu;
    // NOP
label_2889f0:
    // 0x2889f0: 0x0  nop
    ctx->pc = 0x2889f0u;
    // NOP
label_2889f4:
    // 0x2889f4: 0x0  nop
    ctx->pc = 0x2889f4u;
    // NOP
label_2889f8:
    // 0x2889f8: 0x0  nop
    ctx->pc = 0x2889f8u;
    // NOP
label_2889fc:
    // 0x2889fc: 0x0  nop
    ctx->pc = 0x2889fcu;
    // NOP
label_288a00:
    // 0x288a00: 0x0  nop
    ctx->pc = 0x288a00u;
    // NOP
label_288a04:
    // 0x288a04: 0x0  nop
    ctx->pc = 0x288a04u;
    // NOP
label_288a08:
    // 0x288a08: 0x0  nop
    ctx->pc = 0x288a08u;
    // NOP
label_288a0c:
    // 0x288a0c: 0x0  nop
    ctx->pc = 0x288a0cu;
    // NOP
label_288a10:
    // 0x288a10: 0x0  nop
    ctx->pc = 0x288a10u;
    // NOP
label_288a14:
    // 0x288a14: 0x0  nop
    ctx->pc = 0x288a14u;
    // NOP
label_288a18:
    // 0x288a18: 0x0  nop
    ctx->pc = 0x288a18u;
    // NOP
label_288a1c:
    // 0x288a1c: 0x0  nop
    ctx->pc = 0x288a1cu;
    // NOP
label_288a20:
    // 0x288a20: 0x0  nop
    ctx->pc = 0x288a20u;
    // NOP
label_288a24:
    // 0x288a24: 0x0  nop
    ctx->pc = 0x288a24u;
    // NOP
label_288a28:
    // 0x288a28: 0x0  nop
    ctx->pc = 0x288a28u;
    // NOP
label_288a2c:
    // 0x288a2c: 0x0  nop
    ctx->pc = 0x288a2cu;
    // NOP
label_288a30:
    // 0x288a30: 0x0  nop
    ctx->pc = 0x288a30u;
    // NOP
label_288a34:
    // 0x288a34: 0x0  nop
    ctx->pc = 0x288a34u;
    // NOP
label_288a38:
    // 0x288a38: 0x0  nop
    ctx->pc = 0x288a38u;
    // NOP
label_288a3c:
    // 0x288a3c: 0x0  nop
    ctx->pc = 0x288a3cu;
    // NOP
label_288a40:
    // 0x288a40: 0x0  nop
    ctx->pc = 0x288a40u;
    // NOP
label_288a44:
    // 0x288a44: 0x0  nop
    ctx->pc = 0x288a44u;
    // NOP
label_288a48:
    // 0x288a48: 0x0  nop
    ctx->pc = 0x288a48u;
    // NOP
label_288a4c:
    // 0x288a4c: 0x0  nop
    ctx->pc = 0x288a4cu;
    // NOP
label_288a50:
    // 0x288a50: 0x0  nop
    ctx->pc = 0x288a50u;
    // NOP
label_288a54:
    // 0x288a54: 0x0  nop
    ctx->pc = 0x288a54u;
    // NOP
label_288a58:
    // 0x288a58: 0x0  nop
    ctx->pc = 0x288a58u;
    // NOP
label_288a5c:
    // 0x288a5c: 0x0  nop
    ctx->pc = 0x288a5cu;
    // NOP
label_288a60:
    // 0x288a60: 0x0  nop
    ctx->pc = 0x288a60u;
    // NOP
label_288a64:
    // 0x288a64: 0x0  nop
    ctx->pc = 0x288a64u;
    // NOP
label_288a68:
    // 0x288a68: 0x0  nop
    ctx->pc = 0x288a68u;
    // NOP
label_288a6c:
    // 0x288a6c: 0x0  nop
    ctx->pc = 0x288a6cu;
    // NOP
label_288a70:
    // 0x288a70: 0x0  nop
    ctx->pc = 0x288a70u;
    // NOP
label_288a74:
    // 0x288a74: 0x0  nop
    ctx->pc = 0x288a74u;
    // NOP
label_288a78:
    // 0x288a78: 0x0  nop
    ctx->pc = 0x288a78u;
    // NOP
label_288a7c:
    // 0x288a7c: 0x0  nop
    ctx->pc = 0x288a7cu;
    // NOP
label_288a80:
    // 0x288a80: 0x0  nop
    ctx->pc = 0x288a80u;
    // NOP
label_288a84:
    // 0x288a84: 0x0  nop
    ctx->pc = 0x288a84u;
    // NOP
label_288a88:
    // 0x288a88: 0x0  nop
    ctx->pc = 0x288a88u;
    // NOP
label_288a8c:
    // 0x288a8c: 0x0  nop
    ctx->pc = 0x288a8cu;
    // NOP
label_288a90:
    // 0x288a90: 0x0  nop
    ctx->pc = 0x288a90u;
    // NOP
label_288a94:
    // 0x288a94: 0x0  nop
    ctx->pc = 0x288a94u;
    // NOP
label_288a98:
    // 0x288a98: 0x0  nop
    ctx->pc = 0x288a98u;
    // NOP
label_288a9c:
    // 0x288a9c: 0x0  nop
    ctx->pc = 0x288a9cu;
    // NOP
label_288aa0:
    // 0x288aa0: 0x0  nop
    ctx->pc = 0x288aa0u;
    // NOP
label_288aa4:
    // 0x288aa4: 0x0  nop
    ctx->pc = 0x288aa4u;
    // NOP
label_288aa8:
    // 0x288aa8: 0x0  nop
    ctx->pc = 0x288aa8u;
    // NOP
label_288aac:
    // 0x288aac: 0x0  nop
    ctx->pc = 0x288aacu;
    // NOP
label_288ab0:
    // 0x288ab0: 0x0  nop
    ctx->pc = 0x288ab0u;
    // NOP
label_288ab4:
    // 0x288ab4: 0x0  nop
    ctx->pc = 0x288ab4u;
    // NOP
label_288ab8:
    // 0x288ab8: 0x0  nop
    ctx->pc = 0x288ab8u;
    // NOP
label_288abc:
    // 0x288abc: 0x0  nop
    ctx->pc = 0x288abcu;
    // NOP
label_288ac0:
    // 0x288ac0: 0x0  nop
    ctx->pc = 0x288ac0u;
    // NOP
label_288ac4:
    // 0x288ac4: 0x0  nop
    ctx->pc = 0x288ac4u;
    // NOP
label_288ac8:
    // 0x288ac8: 0x0  nop
    ctx->pc = 0x288ac8u;
    // NOP
label_288acc:
    // 0x288acc: 0x0  nop
    ctx->pc = 0x288accu;
    // NOP
label_288ad0:
    // 0x288ad0: 0x0  nop
    ctx->pc = 0x288ad0u;
    // NOP
label_288ad4:
    // 0x288ad4: 0x0  nop
    ctx->pc = 0x288ad4u;
    // NOP
label_288ad8:
    // 0x288ad8: 0x0  nop
    ctx->pc = 0x288ad8u;
    // NOP
label_288adc:
    // 0x288adc: 0x0  nop
    ctx->pc = 0x288adcu;
    // NOP
label_288ae0:
    // 0x288ae0: 0x0  nop
    ctx->pc = 0x288ae0u;
    // NOP
label_288ae4:
    // 0x288ae4: 0x0  nop
    ctx->pc = 0x288ae4u;
    // NOP
label_288ae8:
    // 0x288ae8: 0x0  nop
    ctx->pc = 0x288ae8u;
    // NOP
label_288aec:
    // 0x288aec: 0x0  nop
    ctx->pc = 0x288aecu;
    // NOP
label_288af0:
    // 0x288af0: 0x0  nop
    ctx->pc = 0x288af0u;
    // NOP
label_288af4:
    // 0x288af4: 0x0  nop
    ctx->pc = 0x288af4u;
    // NOP
label_288af8:
    // 0x288af8: 0x0  nop
    ctx->pc = 0x288af8u;
    // NOP
label_288afc:
    // 0x288afc: 0x0  nop
    ctx->pc = 0x288afcu;
    // NOP
label_288b00:
    // 0x288b00: 0x0  nop
    ctx->pc = 0x288b00u;
    // NOP
label_288b04:
    // 0x288b04: 0x0  nop
    ctx->pc = 0x288b04u;
    // NOP
label_288b08:
    // 0x288b08: 0x0  nop
    ctx->pc = 0x288b08u;
    // NOP
label_288b0c:
    // 0x288b0c: 0x0  nop
    ctx->pc = 0x288b0cu;
    // NOP
label_288b10:
    // 0x288b10: 0x0  nop
    ctx->pc = 0x288b10u;
    // NOP
label_288b14:
    // 0x288b14: 0x0  nop
    ctx->pc = 0x288b14u;
    // NOP
label_288b18:
    // 0x288b18: 0x0  nop
    ctx->pc = 0x288b18u;
    // NOP
label_288b1c:
    // 0x288b1c: 0x0  nop
    ctx->pc = 0x288b1cu;
    // NOP
label_288b20:
    // 0x288b20: 0x0  nop
    ctx->pc = 0x288b20u;
    // NOP
label_288b24:
    // 0x288b24: 0x0  nop
    ctx->pc = 0x288b24u;
    // NOP
label_288b28:
    // 0x288b28: 0x0  nop
    ctx->pc = 0x288b28u;
    // NOP
label_288b2c:
    // 0x288b2c: 0x0  nop
    ctx->pc = 0x288b2cu;
    // NOP
label_288b30:
    // 0x288b30: 0x0  nop
    ctx->pc = 0x288b30u;
    // NOP
label_288b34:
    // 0x288b34: 0x0  nop
    ctx->pc = 0x288b34u;
    // NOP
label_288b38:
    // 0x288b38: 0x0  nop
    ctx->pc = 0x288b38u;
    // NOP
label_288b3c:
    // 0x288b3c: 0x0  nop
    ctx->pc = 0x288b3cu;
    // NOP
label_288b40:
    // 0x288b40: 0x0  nop
    ctx->pc = 0x288b40u;
    // NOP
label_288b44:
    // 0x288b44: 0x0  nop
    ctx->pc = 0x288b44u;
    // NOP
label_288b48:
    // 0x288b48: 0x0  nop
    ctx->pc = 0x288b48u;
    // NOP
label_288b4c:
    // 0x288b4c: 0x0  nop
    ctx->pc = 0x288b4cu;
    // NOP
label_288b50:
    // 0x288b50: 0x0  nop
    ctx->pc = 0x288b50u;
    // NOP
label_288b54:
    // 0x288b54: 0x0  nop
    ctx->pc = 0x288b54u;
    // NOP
label_288b58:
    // 0x288b58: 0x0  nop
    ctx->pc = 0x288b58u;
    // NOP
label_288b5c:
    // 0x288b5c: 0x0  nop
    ctx->pc = 0x288b5cu;
    // NOP
label_288b60:
    // 0x288b60: 0x0  nop
    ctx->pc = 0x288b60u;
    // NOP
label_288b64:
    // 0x288b64: 0x0  nop
    ctx->pc = 0x288b64u;
    // NOP
label_288b68:
    // 0x288b68: 0x0  nop
    ctx->pc = 0x288b68u;
    // NOP
label_288b6c:
    // 0x288b6c: 0x0  nop
    ctx->pc = 0x288b6cu;
    // NOP
label_288b70:
    // 0x288b70: 0x0  nop
    ctx->pc = 0x288b70u;
    // NOP
label_288b74:
    // 0x288b74: 0x0  nop
    ctx->pc = 0x288b74u;
    // NOP
label_288b78:
    // 0x288b78: 0x0  nop
    ctx->pc = 0x288b78u;
    // NOP
label_288b7c:
    // 0x288b7c: 0x0  nop
    ctx->pc = 0x288b7cu;
    // NOP
label_288b80:
    // 0x288b80: 0x0  nop
    ctx->pc = 0x288b80u;
    // NOP
label_288b84:
    // 0x288b84: 0x0  nop
    ctx->pc = 0x288b84u;
    // NOP
label_288b88:
    // 0x288b88: 0x0  nop
    ctx->pc = 0x288b88u;
    // NOP
label_288b8c:
    // 0x288b8c: 0x0  nop
    ctx->pc = 0x288b8cu;
    // NOP
label_288b90:
    // 0x288b90: 0x0  nop
    ctx->pc = 0x288b90u;
    // NOP
label_288b94:
    // 0x288b94: 0x0  nop
    ctx->pc = 0x288b94u;
    // NOP
label_288b98:
    // 0x288b98: 0x0  nop
    ctx->pc = 0x288b98u;
    // NOP
label_288b9c:
    // 0x288b9c: 0x0  nop
    ctx->pc = 0x288b9cu;
    // NOP
label_288ba0:
    // 0x288ba0: 0x0  nop
    ctx->pc = 0x288ba0u;
    // NOP
label_288ba4:
    // 0x288ba4: 0x0  nop
    ctx->pc = 0x288ba4u;
    // NOP
label_288ba8:
    // 0x288ba8: 0x0  nop
    ctx->pc = 0x288ba8u;
    // NOP
label_288bac:
    // 0x288bac: 0x0  nop
    ctx->pc = 0x288bacu;
    // NOP
label_288bb0:
    // 0x288bb0: 0x0  nop
    ctx->pc = 0x288bb0u;
    // NOP
label_288bb4:
    // 0x288bb4: 0x0  nop
    ctx->pc = 0x288bb4u;
    // NOP
label_288bb8:
    // 0x288bb8: 0x0  nop
    ctx->pc = 0x288bb8u;
    // NOP
label_288bbc:
    // 0x288bbc: 0x0  nop
    ctx->pc = 0x288bbcu;
    // NOP
label_288bc0:
    // 0x288bc0: 0x0  nop
    ctx->pc = 0x288bc0u;
    // NOP
label_288bc4:
    // 0x288bc4: 0x0  nop
    ctx->pc = 0x288bc4u;
    // NOP
label_288bc8:
    // 0x288bc8: 0x0  nop
    ctx->pc = 0x288bc8u;
    // NOP
label_288bcc:
    // 0x288bcc: 0x0  nop
    ctx->pc = 0x288bccu;
    // NOP
label_288bd0:
    // 0x288bd0: 0x0  nop
    ctx->pc = 0x288bd0u;
    // NOP
label_288bd4:
    // 0x288bd4: 0x0  nop
    ctx->pc = 0x288bd4u;
    // NOP
label_288bd8:
    // 0x288bd8: 0x0  nop
    ctx->pc = 0x288bd8u;
    // NOP
label_288bdc:
    // 0x288bdc: 0x0  nop
    ctx->pc = 0x288bdcu;
    // NOP
label_288be0:
    // 0x288be0: 0x0  nop
    ctx->pc = 0x288be0u;
    // NOP
label_288be4:
    // 0x288be4: 0x0  nop
    ctx->pc = 0x288be4u;
    // NOP
label_288be8:
    // 0x288be8: 0x0  nop
    ctx->pc = 0x288be8u;
    // NOP
label_288bec:
    // 0x288bec: 0x0  nop
    ctx->pc = 0x288becu;
    // NOP
label_288bf0:
    // 0x288bf0: 0x0  nop
    ctx->pc = 0x288bf0u;
    // NOP
label_288bf4:
    // 0x288bf4: 0x0  nop
    ctx->pc = 0x288bf4u;
    // NOP
label_288bf8:
    // 0x288bf8: 0x0  nop
    ctx->pc = 0x288bf8u;
    // NOP
label_288bfc:
    // 0x288bfc: 0x0  nop
    ctx->pc = 0x288bfcu;
    // NOP
label_288c00:
    // 0x288c00: 0x0  nop
    ctx->pc = 0x288c00u;
    // NOP
label_288c04:
    // 0x288c04: 0x0  nop
    ctx->pc = 0x288c04u;
    // NOP
label_288c08:
    // 0x288c08: 0x0  nop
    ctx->pc = 0x288c08u;
    // NOP
label_288c0c:
    // 0x288c0c: 0x0  nop
    ctx->pc = 0x288c0cu;
    // NOP
label_288c10:
    // 0x288c10: 0x0  nop
    ctx->pc = 0x288c10u;
    // NOP
label_288c14:
    // 0x288c14: 0x0  nop
    ctx->pc = 0x288c14u;
    // NOP
label_288c18:
    // 0x288c18: 0x0  nop
    ctx->pc = 0x288c18u;
    // NOP
label_288c1c:
    // 0x288c1c: 0x0  nop
    ctx->pc = 0x288c1cu;
    // NOP
label_288c20:
    // 0x288c20: 0x0  nop
    ctx->pc = 0x288c20u;
    // NOP
label_288c24:
    // 0x288c24: 0x0  nop
    ctx->pc = 0x288c24u;
    // NOP
label_288c28:
    // 0x288c28: 0x0  nop
    ctx->pc = 0x288c28u;
    // NOP
label_288c2c:
    // 0x288c2c: 0x0  nop
    ctx->pc = 0x288c2cu;
    // NOP
label_288c30:
    // 0x288c30: 0x0  nop
    ctx->pc = 0x288c30u;
    // NOP
label_288c34:
    // 0x288c34: 0x0  nop
    ctx->pc = 0x288c34u;
    // NOP
label_288c38:
    // 0x288c38: 0x0  nop
    ctx->pc = 0x288c38u;
    // NOP
label_288c3c:
    // 0x288c3c: 0x0  nop
    ctx->pc = 0x288c3cu;
    // NOP
label_288c40:
    // 0x288c40: 0x0  nop
    ctx->pc = 0x288c40u;
    // NOP
label_288c44:
    // 0x288c44: 0x0  nop
    ctx->pc = 0x288c44u;
    // NOP
label_288c48:
    // 0x288c48: 0x0  nop
    ctx->pc = 0x288c48u;
    // NOP
label_288c4c:
    // 0x288c4c: 0x0  nop
    ctx->pc = 0x288c4cu;
    // NOP
label_288c50:
    // 0x288c50: 0x0  nop
    ctx->pc = 0x288c50u;
    // NOP
label_288c54:
    // 0x288c54: 0x0  nop
    ctx->pc = 0x288c54u;
    // NOP
label_288c58:
    // 0x288c58: 0x0  nop
    ctx->pc = 0x288c58u;
    // NOP
label_288c5c:
    // 0x288c5c: 0x0  nop
    ctx->pc = 0x288c5cu;
    // NOP
label_288c60:
    // 0x288c60: 0x0  nop
    ctx->pc = 0x288c60u;
    // NOP
label_288c64:
    // 0x288c64: 0x0  nop
    ctx->pc = 0x288c64u;
    // NOP
label_288c68:
    // 0x288c68: 0x0  nop
    ctx->pc = 0x288c68u;
    // NOP
label_288c6c:
    // 0x288c6c: 0x0  nop
    ctx->pc = 0x288c6cu;
    // NOP
label_288c70:
    // 0x288c70: 0x0  nop
    ctx->pc = 0x288c70u;
    // NOP
label_288c74:
    // 0x288c74: 0x0  nop
    ctx->pc = 0x288c74u;
    // NOP
label_288c78:
    // 0x288c78: 0x0  nop
    ctx->pc = 0x288c78u;
    // NOP
label_288c7c:
    // 0x288c7c: 0x0  nop
    ctx->pc = 0x288c7cu;
    // NOP
label_288c80:
    // 0x288c80: 0x0  nop
    ctx->pc = 0x288c80u;
    // NOP
label_288c84:
    // 0x288c84: 0x0  nop
    ctx->pc = 0x288c84u;
    // NOP
label_288c88:
    // 0x288c88: 0x0  nop
    ctx->pc = 0x288c88u;
    // NOP
label_288c8c:
    // 0x288c8c: 0x0  nop
    ctx->pc = 0x288c8cu;
    // NOP
label_288c90:
    // 0x288c90: 0x0  nop
    ctx->pc = 0x288c90u;
    // NOP
label_288c94:
    // 0x288c94: 0x0  nop
    ctx->pc = 0x288c94u;
    // NOP
label_288c98:
    // 0x288c98: 0x0  nop
    ctx->pc = 0x288c98u;
    // NOP
label_288c9c:
    // 0x288c9c: 0x0  nop
    ctx->pc = 0x288c9cu;
    // NOP
label_288ca0:
    // 0x288ca0: 0x0  nop
    ctx->pc = 0x288ca0u;
    // NOP
label_288ca4:
    // 0x288ca4: 0x0  nop
    ctx->pc = 0x288ca4u;
    // NOP
label_288ca8:
    // 0x288ca8: 0x0  nop
    ctx->pc = 0x288ca8u;
    // NOP
label_288cac:
    // 0x288cac: 0x0  nop
    ctx->pc = 0x288cacu;
    // NOP
label_288cb0:
    // 0x288cb0: 0x0  nop
    ctx->pc = 0x288cb0u;
    // NOP
label_288cb4:
    // 0x288cb4: 0x0  nop
    ctx->pc = 0x288cb4u;
    // NOP
label_288cb8:
    // 0x288cb8: 0x0  nop
    ctx->pc = 0x288cb8u;
    // NOP
label_288cbc:
    // 0x288cbc: 0x0  nop
    ctx->pc = 0x288cbcu;
    // NOP
label_288cc0:
    // 0x288cc0: 0x0  nop
    ctx->pc = 0x288cc0u;
    // NOP
label_288cc4:
    // 0x288cc4: 0x0  nop
    ctx->pc = 0x288cc4u;
    // NOP
label_288cc8:
    // 0x288cc8: 0x0  nop
    ctx->pc = 0x288cc8u;
    // NOP
label_288ccc:
    // 0x288ccc: 0x0  nop
    ctx->pc = 0x288cccu;
    // NOP
label_288cd0:
    // 0x288cd0: 0x0  nop
    ctx->pc = 0x288cd0u;
    // NOP
label_288cd4:
    // 0x288cd4: 0x0  nop
    ctx->pc = 0x288cd4u;
    // NOP
label_288cd8:
    // 0x288cd8: 0x0  nop
    ctx->pc = 0x288cd8u;
    // NOP
label_288cdc:
    // 0x288cdc: 0x0  nop
    ctx->pc = 0x288cdcu;
    // NOP
label_288ce0:
    // 0x288ce0: 0x0  nop
    ctx->pc = 0x288ce0u;
    // NOP
label_288ce4:
    // 0x288ce4: 0x0  nop
    ctx->pc = 0x288ce4u;
    // NOP
label_288ce8:
    // 0x288ce8: 0x0  nop
    ctx->pc = 0x288ce8u;
    // NOP
label_288cec:
    // 0x288cec: 0x0  nop
    ctx->pc = 0x288cecu;
    // NOP
label_288cf0:
    // 0x288cf0: 0x0  nop
    ctx->pc = 0x288cf0u;
    // NOP
label_288cf4:
    // 0x288cf4: 0x0  nop
    ctx->pc = 0x288cf4u;
    // NOP
label_288cf8:
    // 0x288cf8: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x288cf8u;
//     throw std::runtime_error("Unhandled COP2 format: 0xA at 0x288CF8 raw=0x49497350");
 /* MITIGATED */
label_288cfc:
    // 0x288cfc: 0x6d62696c  ldr         $v0, 0x696C($t3)
    ctx->pc = 0x288cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_288d00:
    // 0x288d00: 0x20202063  addi        $zero, $at, 0x2063
    ctx->pc = 0x288d00u;
    // NOP (addi to $zero)
label_288d04:
    // 0x288d04: 0x30333532  andi        $s3, $at, 0x3532
    ctx->pc = 0x288d04u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)13618);
label_288d08:
    // 0x288d08: 0x0  nop
    ctx->pc = 0x288d08u;
    // NOP
label_288d0c:
    // 0x288d0c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x288d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_288d10:
    // 0x288d10: 0x54d  break       0, 21
    ctx->pc = 0x288d10u;
    runtime->handleBreak(rdram, ctx);
label_288d14:
    // 0x288d14: 0x550  .word       0x00000550                   # mfhi        $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288d14u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_288d18:
    // 0x288d18: 0x553  .word       0x00000553                   # mtlo        $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288d18u;
    ctx->lo = GPR_U64(ctx, 0);
label_288d1c:
    // 0x288d1c: 0x556  .word       0x00000556                   # dsrlv       $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288d1cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_288d20:
    // 0x288d20: 0x559  .word       0x00000559                   # multu       $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288d20u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_288d24:
    // 0x288d24: 0x55c  .word       0x0000055C                   # dmult       $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288d24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x288D24 raw=0x0000055C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288d28:
    // 0x288d28: 0x55f  .word       0x0000055F                   # ddivu       $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288d28u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x288D28 raw=0x0000055F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_288d2c:
    // 0x288d2c: 0x562  .word       0x00000562                   # neg         $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x288d2cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
    ctx->pc = 0x288d30u;
    return;
}
