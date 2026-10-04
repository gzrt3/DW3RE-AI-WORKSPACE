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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part257(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2185e8u: goto label_2185e8;
        case 0x2185ecu: goto label_2185ec;
        case 0x2185f0u: goto label_2185f0;
        case 0x2185f4u: goto label_2185f4;
        case 0x2185f8u: goto label_2185f8;
        case 0x2185fcu: goto label_2185fc;
        case 0x218600u: goto label_218600;
        case 0x218604u: goto label_218604;
        case 0x218608u: goto label_218608;
        case 0x21860cu: goto label_21860c;
        case 0x218610u: goto label_218610;
        case 0x218614u: goto label_218614;
        case 0x218618u: goto label_218618;
        case 0x21861cu: goto label_21861c;
        case 0x218620u: goto label_218620;
        case 0x218624u: goto label_218624;
        case 0x218628u: goto label_218628;
        case 0x21862cu: goto label_21862c;
        case 0x218630u: goto label_218630;
        case 0x218634u: goto label_218634;
        case 0x218638u: goto label_218638;
        case 0x21863cu: goto label_21863c;
        case 0x218640u: goto label_218640;
        case 0x218644u: goto label_218644;
        case 0x218648u: goto label_218648;
        case 0x21864cu: goto label_21864c;
        case 0x218650u: goto label_218650;
        case 0x218654u: goto label_218654;
        case 0x218658u: goto label_218658;
        case 0x21865cu: goto label_21865c;
        case 0x218660u: goto label_218660;
        case 0x218664u: goto label_218664;
        case 0x218668u: goto label_218668;
        case 0x21866cu: goto label_21866c;
        case 0x218670u: goto label_218670;
        case 0x218674u: goto label_218674;
        case 0x218678u: goto label_218678;
        case 0x21867cu: goto label_21867c;
        case 0x218680u: goto label_218680;
        case 0x218684u: goto label_218684;
        case 0x218688u: goto label_218688;
        case 0x21868cu: goto label_21868c;
        case 0x218690u: goto label_218690;
        case 0x218694u: goto label_218694;
        case 0x218698u: goto label_218698;
        case 0x21869cu: goto label_21869c;
        case 0x2186a0u: goto label_2186a0;
        case 0x2186a4u: goto label_2186a4;
        case 0x2186a8u: goto label_2186a8;
        case 0x2186acu: goto label_2186ac;
        case 0x2186b0u: goto label_2186b0;
        case 0x2186b4u: goto label_2186b4;
        case 0x2186b8u: goto label_2186b8;
        case 0x2186bcu: goto label_2186bc;
        case 0x2186c0u: goto label_2186c0;
        case 0x2186c4u: goto label_2186c4;
        case 0x2186c8u: goto label_2186c8;
        case 0x2186ccu: goto label_2186cc;
        case 0x2186d0u: goto label_2186d0;
        case 0x2186d4u: goto label_2186d4;
        case 0x2186d8u: goto label_2186d8;
        case 0x2186dcu: goto label_2186dc;
        case 0x2186e0u: goto label_2186e0;
        case 0x2186e4u: goto label_2186e4;
        case 0x2186e8u: goto label_2186e8;
        case 0x2186ecu: goto label_2186ec;
        case 0x2186f0u: goto label_2186f0;
        case 0x2186f4u: goto label_2186f4;
        case 0x2186f8u: goto label_2186f8;
        case 0x2186fcu: goto label_2186fc;
        case 0x218700u: goto label_218700;
        case 0x218704u: goto label_218704;
        case 0x218708u: goto label_218708;
        case 0x21870cu: goto label_21870c;
        case 0x218710u: goto label_218710;
        case 0x218714u: goto label_218714;
        case 0x218718u: goto label_218718;
        case 0x21871cu: goto label_21871c;
        case 0x218720u: goto label_218720;
        case 0x218724u: goto label_218724;
        case 0x218728u: goto label_218728;
        case 0x21872cu: goto label_21872c;
        case 0x218730u: goto label_218730;
        case 0x218734u: goto label_218734;
        case 0x218738u: goto label_218738;
        case 0x21873cu: goto label_21873c;
        case 0x218740u: goto label_218740;
        case 0x218744u: goto label_218744;
        case 0x218748u: goto label_218748;
        case 0x21874cu: goto label_21874c;
        case 0x218750u: goto label_218750;
        case 0x218754u: goto label_218754;
        case 0x218758u: goto label_218758;
        case 0x21875cu: goto label_21875c;
        case 0x218760u: goto label_218760;
        case 0x218764u: goto label_218764;
        case 0x218768u: goto label_218768;
        case 0x21876cu: goto label_21876c;
        case 0x218770u: goto label_218770;
        case 0x218774u: goto label_218774;
        case 0x218778u: goto label_218778;
        case 0x21877cu: goto label_21877c;
        case 0x218780u: goto label_218780;
        case 0x218784u: goto label_218784;
        case 0x218788u: goto label_218788;
        case 0x21878cu: goto label_21878c;
        case 0x218790u: goto label_218790;
        case 0x218794u: goto label_218794;
        case 0x218798u: goto label_218798;
        case 0x21879cu: goto label_21879c;
        case 0x2187a0u: goto label_2187a0;
        case 0x2187a4u: goto label_2187a4;
        case 0x2187a8u: goto label_2187a8;
        case 0x2187acu: goto label_2187ac;
        case 0x2187b0u: goto label_2187b0;
        case 0x2187b4u: goto label_2187b4;
        case 0x2187b8u: goto label_2187b8;
        case 0x2187bcu: goto label_2187bc;
        case 0x2187c0u: goto label_2187c0;
        case 0x2187c4u: goto label_2187c4;
        case 0x2187c8u: goto label_2187c8;
        case 0x2187ccu: goto label_2187cc;
        case 0x2187d0u: goto label_2187d0;
        case 0x2187d4u: goto label_2187d4;
        case 0x2187d8u: goto label_2187d8;
        case 0x2187dcu: goto label_2187dc;
        case 0x2187e0u: goto label_2187e0;
        case 0x2187e4u: goto label_2187e4;
        case 0x2187e8u: goto label_2187e8;
        case 0x2187ecu: goto label_2187ec;
        case 0x2187f0u: goto label_2187f0;
        case 0x2187f4u: goto label_2187f4;
        case 0x2187f8u: goto label_2187f8;
        case 0x2187fcu: goto label_2187fc;
        case 0x218800u: goto label_218800;
        case 0x218804u: goto label_218804;
        case 0x218808u: goto label_218808;
        case 0x21880cu: goto label_21880c;
        case 0x218810u: goto label_218810;
        case 0x218814u: goto label_218814;
        case 0x218818u: goto label_218818;
        case 0x21881cu: goto label_21881c;
        case 0x218820u: goto label_218820;
        case 0x218824u: goto label_218824;
        case 0x218828u: goto label_218828;
        case 0x21882cu: goto label_21882c;
        case 0x218830u: goto label_218830;
        case 0x218834u: goto label_218834;
        case 0x218838u: goto label_218838;
        case 0x21883cu: goto label_21883c;
        case 0x218840u: goto label_218840;
        case 0x218844u: goto label_218844;
        case 0x218848u: goto label_218848;
        case 0x21884cu: goto label_21884c;
        case 0x218850u: goto label_218850;
        case 0x218854u: goto label_218854;
        case 0x218858u: goto label_218858;
        case 0x21885cu: goto label_21885c;
        case 0x218860u: goto label_218860;
        case 0x218864u: goto label_218864;
        case 0x218868u: goto label_218868;
        case 0x21886cu: goto label_21886c;
        case 0x218870u: goto label_218870;
        case 0x218874u: goto label_218874;
        case 0x218878u: goto label_218878;
        case 0x21887cu: goto label_21887c;
        case 0x218880u: goto label_218880;
        case 0x218884u: goto label_218884;
        case 0x218888u: goto label_218888;
        case 0x21888cu: goto label_21888c;
        case 0x218890u: goto label_218890;
        case 0x218894u: goto label_218894;
        case 0x218898u: goto label_218898;
        case 0x21889cu: goto label_21889c;
        case 0x2188a0u: goto label_2188a0;
        case 0x2188a4u: goto label_2188a4;
        case 0x2188a8u: goto label_2188a8;
        case 0x2188acu: goto label_2188ac;
        case 0x2188b0u: goto label_2188b0;
        case 0x2188b4u: goto label_2188b4;
        case 0x2188b8u: goto label_2188b8;
        case 0x2188bcu: goto label_2188bc;
        case 0x2188c0u: goto label_2188c0;
        case 0x2188c4u: goto label_2188c4;
        case 0x2188c8u: goto label_2188c8;
        case 0x2188ccu: goto label_2188cc;
        case 0x2188d0u: goto label_2188d0;
        case 0x2188d4u: goto label_2188d4;
        case 0x2188d8u: goto label_2188d8;
        case 0x2188dcu: goto label_2188dc;
        case 0x2188e0u: goto label_2188e0;
        case 0x2188e4u: goto label_2188e4;
        case 0x2188e8u: goto label_2188e8;
        case 0x2188ecu: goto label_2188ec;
        case 0x2188f0u: goto label_2188f0;
        case 0x2188f4u: goto label_2188f4;
        case 0x2188f8u: goto label_2188f8;
        case 0x2188fcu: goto label_2188fc;
        case 0x218900u: goto label_218900;
        case 0x218904u: goto label_218904;
        case 0x218908u: goto label_218908;
        case 0x21890cu: goto label_21890c;
        case 0x218910u: goto label_218910;
        case 0x218914u: goto label_218914;
        case 0x218918u: goto label_218918;
        case 0x21891cu: goto label_21891c;
        case 0x218920u: goto label_218920;
        case 0x218924u: goto label_218924;
        case 0x218928u: goto label_218928;
        case 0x21892cu: goto label_21892c;
        case 0x218930u: goto label_218930;
        case 0x218934u: goto label_218934;
        case 0x218938u: goto label_218938;
        case 0x21893cu: goto label_21893c;
        case 0x218940u: goto label_218940;
        case 0x218944u: goto label_218944;
        case 0x218948u: goto label_218948;
        case 0x21894cu: goto label_21894c;
        case 0x218950u: goto label_218950;
        case 0x218954u: goto label_218954;
        case 0x218958u: goto label_218958;
        case 0x21895cu: goto label_21895c;
        case 0x218960u: goto label_218960;
        case 0x218964u: goto label_218964;
        case 0x218968u: goto label_218968;
        case 0x21896cu: goto label_21896c;
        case 0x218970u: goto label_218970;
        case 0x218974u: goto label_218974;
        case 0x218978u: goto label_218978;
        case 0x21897cu: goto label_21897c;
        case 0x218980u: goto label_218980;
        case 0x218984u: goto label_218984;
        case 0x218988u: goto label_218988;
        case 0x21898cu: goto label_21898c;
        case 0x218990u: goto label_218990;
        case 0x218994u: goto label_218994;
        case 0x218998u: goto label_218998;
        case 0x21899cu: goto label_21899c;
        case 0x2189a0u: goto label_2189a0;
        case 0x2189a4u: goto label_2189a4;
        case 0x2189a8u: goto label_2189a8;
        case 0x2189acu: goto label_2189ac;
        case 0x2189b0u: goto label_2189b0;
        case 0x2189b4u: goto label_2189b4;
        case 0x2189b8u: goto label_2189b8;
        case 0x2189bcu: goto label_2189bc;
        case 0x2189c0u: goto label_2189c0;
        case 0x2189c4u: goto label_2189c4;
        case 0x2189c8u: goto label_2189c8;
        case 0x2189ccu: goto label_2189cc;
        case 0x2189d0u: goto label_2189d0;
        case 0x2189d4u: goto label_2189d4;
        case 0x2189d8u: goto label_2189d8;
        case 0x2189dcu: goto label_2189dc;
        case 0x2189e0u: goto label_2189e0;
        case 0x2189e4u: goto label_2189e4;
        case 0x2189e8u: goto label_2189e8;
        case 0x2189ecu: goto label_2189ec;
        case 0x2189f0u: goto label_2189f0;
        case 0x2189f4u: goto label_2189f4;
        case 0x2189f8u: goto label_2189f8;
        case 0x2189fcu: goto label_2189fc;
        case 0x218a00u: goto label_218a00;
        case 0x218a04u: goto label_218a04;
        case 0x218a08u: goto label_218a08;
        case 0x218a0cu: goto label_218a0c;
        case 0x218a10u: goto label_218a10;
        case 0x218a14u: goto label_218a14;
        case 0x218a18u: goto label_218a18;
        case 0x218a1cu: goto label_218a1c;
        case 0x218a20u: goto label_218a20;
        case 0x218a24u: goto label_218a24;
        case 0x218a28u: goto label_218a28;
        case 0x218a2cu: goto label_218a2c;
        case 0x218a30u: goto label_218a30;
        case 0x218a34u: goto label_218a34;
        case 0x218a38u: goto label_218a38;
        case 0x218a3cu: goto label_218a3c;
        case 0x218a40u: goto label_218a40;
        case 0x218a44u: goto label_218a44;
        case 0x218a48u: goto label_218a48;
        case 0x218a4cu: goto label_218a4c;
        case 0x218a50u: goto label_218a50;
        case 0x218a54u: goto label_218a54;
        case 0x218a58u: goto label_218a58;
        case 0x218a5cu: goto label_218a5c;
        case 0x218a60u: goto label_218a60;
        case 0x218a64u: goto label_218a64;
        case 0x218a68u: goto label_218a68;
        case 0x218a6cu: goto label_218a6c;
        case 0x218a70u: goto label_218a70;
        case 0x218a74u: goto label_218a74;
        case 0x218a78u: goto label_218a78;
        case 0x218a7cu: goto label_218a7c;
        case 0x218a80u: goto label_218a80;
        case 0x218a84u: goto label_218a84;
        case 0x218a88u: goto label_218a88;
        case 0x218a8cu: goto label_218a8c;
        case 0x218a90u: goto label_218a90;
        case 0x218a94u: goto label_218a94;
        case 0x218a98u: goto label_218a98;
        case 0x218a9cu: goto label_218a9c;
        case 0x218aa0u: goto label_218aa0;
        case 0x218aa4u: goto label_218aa4;
        case 0x218aa8u: goto label_218aa8;
        case 0x218aacu: goto label_218aac;
        case 0x218ab0u: goto label_218ab0;
        case 0x218ab4u: goto label_218ab4;
        case 0x218ab8u: goto label_218ab8;
        case 0x218abcu: goto label_218abc;
        case 0x218ac0u: goto label_218ac0;
        case 0x218ac4u: goto label_218ac4;
        case 0x218ac8u: goto label_218ac8;
        case 0x218accu: goto label_218acc;
        case 0x218ad0u: goto label_218ad0;
        case 0x218ad4u: goto label_218ad4;
        case 0x218ad8u: goto label_218ad8;
        case 0x218adcu: goto label_218adc;
        case 0x218ae0u: goto label_218ae0;
        case 0x218ae4u: goto label_218ae4;
        case 0x218ae8u: goto label_218ae8;
        case 0x218aecu: goto label_218aec;
        case 0x218af0u: goto label_218af0;
        case 0x218af4u: goto label_218af4;
        case 0x218af8u: goto label_218af8;
        case 0x218afcu: goto label_218afc;
        case 0x218b00u: goto label_218b00;
        case 0x218b04u: goto label_218b04;
        case 0x218b08u: goto label_218b08;
        case 0x218b0cu: goto label_218b0c;
        case 0x218b10u: goto label_218b10;
        case 0x218b14u: goto label_218b14;
        case 0x218b18u: goto label_218b18;
        case 0x218b1cu: goto label_218b1c;
        case 0x218b20u: goto label_218b20;
        case 0x218b24u: goto label_218b24;
        case 0x218b28u: goto label_218b28;
        case 0x218b2cu: goto label_218b2c;
        case 0x218b30u: goto label_218b30;
        case 0x218b34u: goto label_218b34;
        case 0x218b38u: goto label_218b38;
        case 0x218b3cu: goto label_218b3c;
        case 0x218b40u: goto label_218b40;
        case 0x218b44u: goto label_218b44;
        case 0x218b48u: goto label_218b48;
        case 0x218b4cu: goto label_218b4c;
        case 0x218b50u: goto label_218b50;
        case 0x218b54u: goto label_218b54;
        case 0x218b58u: goto label_218b58;
        case 0x218b5cu: goto label_218b5c;
        case 0x218b60u: goto label_218b60;
        case 0x218b64u: goto label_218b64;
        case 0x218b68u: goto label_218b68;
        case 0x218b6cu: goto label_218b6c;
        case 0x218b70u: goto label_218b70;
        case 0x218b74u: goto label_218b74;
        case 0x218b78u: goto label_218b78;
        case 0x218b7cu: goto label_218b7c;
        case 0x218b80u: goto label_218b80;
        case 0x218b84u: goto label_218b84;
        case 0x218b88u: goto label_218b88;
        case 0x218b8cu: goto label_218b8c;
        case 0x218b90u: goto label_218b90;
        case 0x218b94u: goto label_218b94;
        case 0x218b98u: goto label_218b98;
        case 0x218b9cu: goto label_218b9c;
        case 0x218ba0u: goto label_218ba0;
        case 0x218ba4u: goto label_218ba4;
        case 0x218ba8u: goto label_218ba8;
        case 0x218bacu: goto label_218bac;
        case 0x218bb0u: goto label_218bb0;
        case 0x218bb4u: goto label_218bb4;
        case 0x218bb8u: goto label_218bb8;
        case 0x218bbcu: goto label_218bbc;
        case 0x218bc0u: goto label_218bc0;
        case 0x218bc4u: goto label_218bc4;
        case 0x218bc8u: goto label_218bc8;
        case 0x218bccu: goto label_218bcc;
        case 0x218bd0u: goto label_218bd0;
        case 0x218bd4u: goto label_218bd4;
        case 0x218bd8u: goto label_218bd8;
        case 0x218bdcu: goto label_218bdc;
        case 0x218be0u: goto label_218be0;
        case 0x218be4u: goto label_218be4;
        case 0x218be8u: goto label_218be8;
        case 0x218becu: goto label_218bec;
        case 0x218bf0u: goto label_218bf0;
        case 0x218bf4u: goto label_218bf4;
        case 0x218bf8u: goto label_218bf8;
        case 0x218bfcu: goto label_218bfc;
        case 0x218c00u: goto label_218c00;
        case 0x218c04u: goto label_218c04;
        case 0x218c08u: goto label_218c08;
        case 0x218c0cu: goto label_218c0c;
        case 0x218c10u: goto label_218c10;
        case 0x218c14u: goto label_218c14;
        case 0x218c18u: goto label_218c18;
        case 0x218c1cu: goto label_218c1c;
        case 0x218c20u: goto label_218c20;
        case 0x218c24u: goto label_218c24;
        case 0x218c28u: goto label_218c28;
        case 0x218c2cu: goto label_218c2c;
        case 0x218c30u: goto label_218c30;
        case 0x218c34u: goto label_218c34;
        case 0x218c38u: goto label_218c38;
        case 0x218c3cu: goto label_218c3c;
        case 0x218c40u: goto label_218c40;
        case 0x218c44u: goto label_218c44;
        case 0x218c48u: goto label_218c48;
        case 0x218c4cu: goto label_218c4c;
        case 0x218c50u: goto label_218c50;
        case 0x218c54u: goto label_218c54;
        case 0x218c58u: goto label_218c58;
        case 0x218c5cu: goto label_218c5c;
        case 0x218c60u: goto label_218c60;
        case 0x218c64u: goto label_218c64;
        case 0x218c68u: goto label_218c68;
        case 0x218c6cu: goto label_218c6c;
        case 0x218c70u: goto label_218c70;
        case 0x218c74u: goto label_218c74;
        case 0x218c78u: goto label_218c78;
        case 0x218c7cu: goto label_218c7c;
        case 0x218c80u: goto label_218c80;
        case 0x218c84u: goto label_218c84;
        case 0x218c88u: goto label_218c88;
        case 0x218c8cu: goto label_218c8c;
        case 0x218c90u: goto label_218c90;
        case 0x218c94u: goto label_218c94;
        case 0x218c98u: goto label_218c98;
        case 0x218c9cu: goto label_218c9c;
        case 0x218ca0u: goto label_218ca0;
        case 0x218ca4u: goto label_218ca4;
        case 0x218ca8u: goto label_218ca8;
        case 0x218cacu: goto label_218cac;
        case 0x218cb0u: goto label_218cb0;
        case 0x218cb4u: goto label_218cb4;
        case 0x218cb8u: goto label_218cb8;
        case 0x218cbcu: goto label_218cbc;
        case 0x218cc0u: goto label_218cc0;
        case 0x218cc4u: goto label_218cc4;
        case 0x218cc8u: goto label_218cc8;
        case 0x218cccu: goto label_218ccc;
        case 0x218cd0u: goto label_218cd0;
        case 0x218cd4u: goto label_218cd4;
        case 0x218cd8u: goto label_218cd8;
        case 0x218cdcu: goto label_218cdc;
        case 0x218ce0u: goto label_218ce0;
        case 0x218ce4u: goto label_218ce4;
        case 0x218ce8u: goto label_218ce8;
        case 0x218cecu: goto label_218cec;
        case 0x218cf0u: goto label_218cf0;
        case 0x218cf4u: goto label_218cf4;
        case 0x218cf8u: goto label_218cf8;
        case 0x218cfcu: goto label_218cfc;
        case 0x218d00u: goto label_218d00;
        case 0x218d04u: goto label_218d04;
        case 0x218d08u: goto label_218d08;
        case 0x218d0cu: goto label_218d0c;
        case 0x218d10u: goto label_218d10;
        case 0x218d14u: goto label_218d14;
        case 0x218d18u: goto label_218d18;
        case 0x218d1cu: goto label_218d1c;
        case 0x218d20u: goto label_218d20;
        case 0x218d24u: goto label_218d24;
        case 0x218d28u: goto label_218d28;
        case 0x218d2cu: goto label_218d2c;
        case 0x218d30u: goto label_218d30;
        case 0x218d34u: goto label_218d34;
        case 0x218d38u: goto label_218d38;
        case 0x218d3cu: goto label_218d3c;
        case 0x218d40u: goto label_218d40;
        case 0x218d44u: goto label_218d44;
        case 0x218d48u: goto label_218d48;
        case 0x218d4cu: goto label_218d4c;
        case 0x218d50u: goto label_218d50;
        case 0x218d54u: goto label_218d54;
        case 0x218d58u: goto label_218d58;
        case 0x218d5cu: goto label_218d5c;
        case 0x218d60u: goto label_218d60;
        case 0x218d64u: goto label_218d64;
        case 0x218d68u: goto label_218d68;
        case 0x218d6cu: goto label_218d6c;
        case 0x218d70u: goto label_218d70;
        case 0x218d74u: goto label_218d74;
        case 0x218d78u: goto label_218d78;
        case 0x218d7cu: goto label_218d7c;
        case 0x218d80u: goto label_218d80;
        case 0x218d84u: goto label_218d84;
        case 0x218d88u: goto label_218d88;
        case 0x218d8cu: goto label_218d8c;
        case 0x218d90u: goto label_218d90;
        case 0x218d94u: goto label_218d94;
        case 0x218d98u: goto label_218d98;
        case 0x218d9cu: goto label_218d9c;
        case 0x218da0u: goto label_218da0;
        case 0x218da4u: goto label_218da4;
        case 0x218da8u: goto label_218da8;
        case 0x218dacu: goto label_218dac;
        case 0x218db0u: goto label_218db0;
        case 0x218db4u: goto label_218db4;
        default: return;
    }

label_2185e8:
    // 0x2185e8: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x2185e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_2185ec:
    // 0x2185ec: 0x0  nop
    ctx->pc = 0x2185ecu;
    // NOP
label_2185f0:
    // 0x2185f0: 0x1010  mfhi        $v0
    ctx->pc = 0x2185f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2185f4:
    // 0x2185f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2185f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2185f8:
    // 0x2185f8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2185f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2185fc:
    // 0x2185fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2185fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_218600:
    // 0x218600: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x218600u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_218604:
    // 0x218604: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_218608:
    if (ctx->pc == 0x218608u) {
        ctx->pc = 0x218608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218604u;
        // 0x218608: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21860Cu;
        goto label_21860c;
    }
    ctx->pc = 0x218604u;
    {
        const bool branch_taken_0x218604 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x218608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218604u;
        // 0x218608: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218604) {
            ctx->pc = 0x218614u;
            goto label_218614;
        }
    }
    ctx->pc = 0x21860Cu;
label_21860c:
    // 0x21860c: 0x10000033  b           . + 4 + (0x33 << 2)
label_218610:
    if (ctx->pc == 0x218610u) {
        ctx->pc = 0x218610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21860Cu;
        // 0x218610: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218614u;
        goto label_218614;
    }
    ctx->pc = 0x21860Cu;
    {
        const bool branch_taken_0x21860c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21860Cu;
        // 0x218610: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21860c) {
            ctx->pc = 0x2186DCu;
            goto label_2186dc;
        }
    }
    ctx->pc = 0x218614u;
label_218614:
    // 0x218614: 0x0  nop
    ctx->pc = 0x218614u;
    // NOP
label_218618:
    // 0x218618: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x218618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21861c:
    // 0x21861c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x21861cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_218620:
    // 0x218620: 0x27a70084  addiu       $a3, $sp, 0x84
    ctx->pc = 0x218620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_218624:
    // 0x218624: 0x27a80088  addiu       $t0, $sp, 0x88
    ctx->pc = 0x218624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_218628:
    // 0x218628: 0x27a9008c  addiu       $t1, $sp, 0x8C
    ctx->pc = 0x218628u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_21862c:
    // 0x21862c: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x21862cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_218630:
    // 0x218630: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x218630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_218634:
    // 0x218634: 0xc0861cc  jal         func_218730
label_218638:
    if (ctx->pc == 0x218638u) {
        ctx->pc = 0x218638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218634u;
        // 0x218638: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21863Cu;
        goto label_21863c;
    }
    ctx->pc = 0x218634u;
    SET_GPR_U32(ctx, 31, 0x21863Cu);
    ctx->pc = 0x218638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218634u;
    // 0x218638: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218730u;
    goto label_218730;
    ctx->pc = 0x21863Cu;
label_21863c:
    // 0x21863c: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x21863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_218640:
    // 0x218640: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x218640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_218644:
    // 0x218644: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x218644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_218648:
    // 0x218648: 0xc7ae0088  lwc1        $f14, 0x88($sp)
    ctx->pc = 0x218648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_21864c:
    // 0x21864c: 0xc085cf4  jal         func_2173D0
label_218650:
    if (ctx->pc == 0x218650u) {
        ctx->pc = 0x218650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21864Cu;
        // 0x218650: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218654u;
        goto label_218654;
    }
    ctx->pc = 0x21864Cu;
    SET_GPR_U32(ctx, 31, 0x218654u);
    ctx->pc = 0x218650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21864Cu;
    // 0x218650: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173D0u;
    { ctx->pc = 0x2173d0; return; }
    ctx->pc = 0x218654u;
label_218654:
    // 0x218654: 0x1a80001c  blez        $s4, . + 4 + (0x1C << 2)
label_218658:
    if (ctx->pc == 0x218658u) {
        ctx->pc = 0x218658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218654u;
        // 0x218658: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21865Cu;
        goto label_21865c;
    }
    ctx->pc = 0x218654u;
    {
        const bool branch_taken_0x218654 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x218658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218654u;
        // 0x218658: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218654) {
            ctx->pc = 0x2186C8u;
            goto label_2186c8;
        }
    }
    ctx->pc = 0x21865Cu;
label_21865c:
    // 0x21865c: 0x8f82926c  lw          $v0, -0x6D94($gp)
    ctx->pc = 0x21865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939244)));
label_218660:
    // 0x218660: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x218660u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_218664:
    // 0x218664: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_218668:
    if (ctx->pc == 0x218668u) {
        ctx->pc = 0x21866Cu;
        goto label_21866c;
    }
    ctx->pc = 0x218664u;
    {
        const bool branch_taken_0x218664 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x218664) {
            ctx->pc = 0x2186C8u;
            goto label_2186c8;
        }
    }
    ctx->pc = 0x21866Cu;
label_21866c:
    // 0x21866c: 0x8e45022c  lw          $a1, 0x22C($s2)
    ctx->pc = 0x21866cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 556)));
label_218670:
    // 0x218670: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x218670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_218674:
    // 0x218674: 0x34427e40  ori         $v0, $v0, 0x7E40
    ctx->pc = 0x218674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32320);
label_218678:
    // 0x218678: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
label_21867c:
    if (ctx->pc == 0x21867Cu) {
        ctx->pc = 0x218680u;
        goto label_218680;
    }
    ctx->pc = 0x218678u;
    {
        const bool branch_taken_0x218678 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x218678) {
            ctx->pc = 0x2186C8u;
            goto label_2186c8;
        }
    }
    ctx->pc = 0x218680u;
label_218680:
    // 0x218680: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_218684:
    if (ctx->pc == 0x218684u) {
        ctx->pc = 0x218684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218680u;
        // 0x218684: 0x3c028888  lui         $v0, 0x8888 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218688u;
        goto label_218688;
    }
    ctx->pc = 0x218680u;
    {
        const bool branch_taken_0x218680 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x218684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218680u;
        // 0x218684: 0x3c028888  lui         $v0, 0x8888 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218680) {
            ctx->pc = 0x2186C8u;
            goto label_2186c8;
        }
    }
    ctx->pc = 0x218688u;
label_218688:
    // 0x218688: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x218688u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_21868c:
    // 0x21868c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x21868cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_218690:
    // 0x218690: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x218690u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_218694:
    // 0x218694: 0x0  nop
    ctx->pc = 0x218694u;
    // NOP
label_218698:
    // 0x218698: 0x0  nop
    ctx->pc = 0x218698u;
    // NOP
label_21869c:
    // 0x21869c: 0x1010  mfhi        $v0
    ctx->pc = 0x21869cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2186a0:
    // 0x2186a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2186a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2186a4:
    // 0x2186a4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2186a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2186a8:
    // 0x2186a8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2186a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2186ac:
    // 0x2186ac: 0x2462ff88  addiu       $v0, $v1, -0x78
    ctx->pc = 0x2186acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
label_2186b0:
    // 0x2186b0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2186b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2186b4:
    // 0x2186b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2186b8:
    if (ctx->pc == 0x2186B8u) {
        ctx->pc = 0x2186B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186B4u;
        // 0x2186b8: 0x283082a  slt         $at, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2186BCu;
        goto label_2186bc;
    }
    ctx->pc = 0x2186B4u;
    {
        const bool branch_taken_0x2186b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2186B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186B4u;
        // 0x2186b8: 0x283082a  slt         $at, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2186b4) {
            ctx->pc = 0x2186C8u;
            goto label_2186c8;
        }
    }
    ctx->pc = 0x2186BCu;
label_2186bc:
    // 0x2186bc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2186c0:
    if (ctx->pc == 0x2186C0u) {
        ctx->pc = 0x2186C4u;
        goto label_2186c4;
    }
    ctx->pc = 0x2186BCu;
    {
        const bool branch_taken_0x2186bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2186bc) {
            ctx->pc = 0x2186C8u;
            goto label_2186c8;
        }
    }
    ctx->pc = 0x2186C4u;
label_2186c4:
    // 0x2186c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2186c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2186c8:
    // 0x2186c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2186cc:
    if (ctx->pc == 0x2186CCu) {
        ctx->pc = 0x2186D0u;
        goto label_2186d0;
    }
    ctx->pc = 0x2186C8u;
    {
        const bool branch_taken_0x2186c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2186c8) {
            ctx->pc = 0x2186D8u;
            goto label_2186d8;
        }
    }
    ctx->pc = 0x2186D0u;
label_2186d0:
    // 0x2186d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2186d4:
    if (ctx->pc == 0x2186D4u) {
        ctx->pc = 0x2186D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186D0u;
        // 0x2186d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2186D8u;
        goto label_2186d8;
    }
    ctx->pc = 0x2186D0u;
    {
        const bool branch_taken_0x2186d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2186D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186D0u;
        // 0x2186d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2186d0) {
            ctx->pc = 0x2186DCu;
            goto label_2186dc;
        }
    }
    ctx->pc = 0x2186D8u;
label_2186d8:
    // 0x2186d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2186d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2186dc:
    // 0x2186dc: 0x0  nop
    ctx->pc = 0x2186dcu;
    // NOP
label_2186e0:
    // 0x2186e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2186e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2186e4:
    // 0x2186e4: 0xc085cc4  jal         func_217310
label_2186e8:
    if (ctx->pc == 0x2186E8u) {
        ctx->pc = 0x2186E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186E4u;
        // 0x2186e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2186ECu;
        goto label_2186ec;
    }
    ctx->pc = 0x2186E4u;
    SET_GPR_U32(ctx, 31, 0x2186ECu);
    ctx->pc = 0x2186E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2186E4u;
    // 0x2186e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x2186ECu;
label_2186ec:
    // 0x2186ec: 0x0  nop
    ctx->pc = 0x2186ecu;
    // NOP
label_2186f0:
    // 0x2186f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2186f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2186f4:
    // 0x2186f4: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x2186f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_2186f8:
    // 0x2186f8: 0x1460ff96  bnez        $v1, . + 4 + (-0x6A << 2)
label_2186fc:
    if (ctx->pc == 0x2186FCu) {
        ctx->pc = 0x2186FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186F8u;
        // 0x2186fc: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218700u;
        goto label_218700;
    }
    ctx->pc = 0x2186F8u;
    {
        const bool branch_taken_0x2186f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2186FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186F8u;
        // 0x2186fc: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2186f8) {
            ctx->pc = 0x218554u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x218554; return; }
        }
    }
    ctx->pc = 0x218700u;
label_218700:
    // 0x218700: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x218700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_218704:
    // 0x218704: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x218704u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_218708:
    // 0x218708: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x218708u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21870c:
    // 0x21870c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21870cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_218710:
    // 0x218710: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x218710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_218714:
    // 0x218714: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x218714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_218718:
    // 0x218718: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x218718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21871c:
    // 0x21871c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21871cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_218720:
    // 0x218720: 0x3e00008  jr          $ra
label_218724:
    if (ctx->pc == 0x218724u) {
        ctx->pc = 0x218724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218720u;
        // 0x218724: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218728u;
        goto label_218728;
    }
    ctx->pc = 0x218720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218720u;
        // 0x218724: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218728u;
label_218728:
    // 0x218728: 0x0  nop
    ctx->pc = 0x218728u;
    // NOP
label_21872c:
    // 0x21872c: 0x0  nop
    ctx->pc = 0x21872cu;
    // NOP
label_218730:
    // 0x218730: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x218730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_218734:
    // 0x218734: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x218734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_218738:
    // 0x218738: 0x344a8889  ori         $t2, $v0, 0x8889
    ctx->pc = 0x218738u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_21873c:
    // 0x21873c: 0x240b003c  addiu       $t3, $zero, 0x3C
    ctx->pc = 0x21873cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_218740:
    // 0x218740: 0x1460018  mult        $zero, $t2, $a2
    ctx->pc = 0x218740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_218744:
    // 0x218744: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x218744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_218748:
    // 0x218748: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x218748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_21874c:
    // 0x21874c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21874cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_218750:
    // 0x218750: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x218750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_218754:
    // 0x218754: 0x1810  mfhi        $v1
    ctx->pc = 0x218754u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_218758:
    // 0x218758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x218758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21875c:
    // 0x21875c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21875cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_218760:
    // 0x218760: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x218760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_218764:
    // 0x218764: 0x8f8c926c  lw          $t4, -0x6D94($gp)
    ctx->pc = 0x218764u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939244)));
label_218768:
    // 0x218768: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x218768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_21876c:
    // 0x21876c: 0xcb001a  div         $zero, $a2, $t3
    ctx->pc = 0x21876cu;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_218770:
    // 0x218770: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x218770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_218774:
    // 0x218774: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x218774u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_218778:
    // 0x218778: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x218778u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_21877c:
    // 0x21877c: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x21877cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_218780:
    // 0x218780: 0xc4fc2  srl         $t1, $t4, 31
    ctx->pc = 0x218780u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_218784:
    // 0x218784: 0x1810  mfhi        $v1
    ctx->pc = 0x218784u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_218788:
    // 0x218788: 0x14c0018  mult        $zero, $t2, $t4
    ctx->pc = 0x218788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21878c:
    // 0x21878c: 0x0  nop
    ctx->pc = 0x21878cu;
    // NOP
label_218790:
    // 0x218790: 0x0  nop
    ctx->pc = 0x218790u;
    // NOP
label_218794:
    // 0x218794: 0x2010  mfhi        $a0
    ctx->pc = 0x218794u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_218798:
    // 0x218798: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x218798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_21879c:
    // 0x21879c: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x21879cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
label_2187a0:
    // 0x2187a0: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x2187a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_2187a4:
    // 0x2187a4: 0x16640008  bne         $s3, $a0, . + 4 + (0x8 << 2)
label_2187a8:
    if (ctx->pc == 0x2187A8u) {
        ctx->pc = 0x2187A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187A4u;
        // 0x2187a8: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2187ACu;
        goto label_2187ac;
    }
    ctx->pc = 0x2187A4u;
    {
        const bool branch_taken_0x2187a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x2187A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187A4u;
        // 0x2187a8: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2187a4) {
            ctx->pc = 0x2187C8u;
            goto label_2187c8;
        }
    }
    ctx->pc = 0x2187ACu;
label_2187ac:
    // 0x2187ac: 0x18b001a  div         $zero, $t4, $t3
    ctx->pc = 0x2187acu;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2187b0:
    // 0x2187b0: 0x0  nop
    ctx->pc = 0x2187b0u;
    // NOP
label_2187b4:
    // 0x2187b4: 0x0  nop
    ctx->pc = 0x2187b4u;
    // NOP
label_2187b8:
    // 0x2187b8: 0x1010  mfhi        $v0
    ctx->pc = 0x2187b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2187bc:
    // 0x2187bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2187c0:
    if (ctx->pc == 0x2187C0u) {
        ctx->pc = 0x2187C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187BCu;
        // 0x2187c0: 0x2626016a  addiu       $a2, $s1, 0x16A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 362));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2187C4u;
        goto label_2187c4;
    }
    ctx->pc = 0x2187BCu;
    {
        const bool branch_taken_0x2187bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2187C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187BCu;
        // 0x2187c0: 0x2626016a  addiu       $a2, $s1, 0x16A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 362));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2187bc) {
            ctx->pc = 0x2187CCu;
            goto label_2187cc;
        }
    }
    ctx->pc = 0x2187C4u;
label_2187c4:
    // 0x2187c4: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x2187c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2187c8:
    // 0x2187c8: 0x2626016a  addiu       $a2, $s1, 0x16A
    ctx->pc = 0x2187c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 362));
label_2187cc:
    // 0x2187cc: 0x8f849268  lw          $a0, -0x6D98($gp)
    ctx->pc = 0x2187ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939240)));
label_2187d0:
    // 0x2187d0: 0xd34821  addu        $t1, $a2, $s3
    ctx->pc = 0x2187d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_2187d4:
    // 0x2187d4: 0x912a0000  lbu         $t2, 0x0($t1)
    ctx->pc = 0x2187d4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_2187d8:
    // 0x2187d8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2187d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2187dc:
    // 0x2187dc: 0x314900f0  andi        $t1, $t2, 0xF0
    ctx->pc = 0x2187dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)240);
label_2187e0:
    // 0x2187e0: 0x314a000f  andi        $t2, $t2, 0xF
    ctx->pc = 0x2187e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
label_2187e4:
    // 0x2187e4: 0x14860006  bne         $a0, $a2, . + 4 + (0x6 << 2)
label_2187e8:
    if (ctx->pc == 0x2187E8u) {
        ctx->pc = 0x2187E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187E4u;
        // 0x2187e8: 0x94903  sra         $t1, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2187ECu;
        goto label_2187ec;
    }
    ctx->pc = 0x2187E4u;
    {
        const bool branch_taken_0x2187e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2187E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187E4u;
        // 0x2187e8: 0x94903  sra         $t1, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2187e4) {
            ctx->pc = 0x218800u;
            goto label_218800;
        }
    }
    ctx->pc = 0x2187ECu;
label_2187ec:
    // 0x2187ec: 0x29260008  slti        $a2, $t1, 0x8
    ctx->pc = 0x2187ecu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8) ? 1 : 0);
label_2187f0:
    // 0x2187f0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_2187f4:
    if (ctx->pc == 0x2187F4u) {
        ctx->pc = 0x2187F8u;
        goto label_2187f8;
    }
    ctx->pc = 0x2187F0u;
    {
        const bool branch_taken_0x2187f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2187f0) {
            ctx->pc = 0x218800u;
            goto label_218800;
        }
    }
    ctx->pc = 0x2187F8u;
label_2187f8:
    // 0x2187f8: 0x2529fff8  addiu       $t1, $t1, -0x8
    ctx->pc = 0x2187f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
label_2187fc:
    // 0x2187fc: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x2187fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_218800:
    // 0x218800: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x218800u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218804:
    // 0x218804: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x218804u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
label_218808:
    // 0x218808: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x218808u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_21880c:
    // 0x21880c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21880cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_218810:
    // 0x218810: 0x3c064248  lui         $a2, 0x4248
    ctx->pc = 0x218810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16968 << 16));
label_218814:
    // 0x218814: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x218814u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_218818:
    // 0x218818: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x218818u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21881c:
    // 0x21881c: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x21881cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_218820:
    // 0x218820: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x218820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_218824:
    // 0x218824: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x218824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_218828:
    // 0x218828: 0x460119c2  mul.s       $f7, $f3, $f1
    ctx->pc = 0x218828u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_21882c:
    // 0x21882c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_218830:
    if (ctx->pc == 0x218830u) {
        ctx->pc = 0x218830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21882Cu;
        // 0x218830: 0x46001a02  mul.s       $f8, $f3, $f0 (Delay Slot)
        ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x218834u;
        goto label_218834;
    }
    ctx->pc = 0x21882Cu;
    {
        const bool branch_taken_0x21882c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x218830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21882Cu;
        // 0x218830: 0x46001a02  mul.s       $f8, $f3, $f0 (Delay Slot)
        ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21882c) {
            ctx->pc = 0x2188D0u;
            goto label_2188d0;
        }
    }
    ctx->pc = 0x218834u;
label_218834:
    // 0x218834: 0x2629016b  addiu       $t1, $s1, 0x16B
    ctx->pc = 0x218834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 363));
label_218838:
    // 0x218838: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x218838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21883c:
    // 0x21883c: 0x1334821  addu        $t1, $t1, $s3
    ctx->pc = 0x21883cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
label_218840:
    // 0x218840: 0x912a0000  lbu         $t2, 0x0($t1)
    ctx->pc = 0x218840u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_218844:
    // 0x218844: 0x314900f0  andi        $t1, $t2, 0xF0
    ctx->pc = 0x218844u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)240);
label_218848:
    // 0x218848: 0x314a000f  andi        $t2, $t2, 0xF
    ctx->pc = 0x218848u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
label_21884c:
    // 0x21884c: 0x14860006  bne         $a0, $a2, . + 4 + (0x6 << 2)
label_218850:
    if (ctx->pc == 0x218850u) {
        ctx->pc = 0x218850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21884Cu;
        // 0x218850: 0x94903  sra         $t1, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218854u;
        goto label_218854;
    }
    ctx->pc = 0x21884Cu;
    {
        const bool branch_taken_0x21884c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x218850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21884Cu;
        // 0x218850: 0x94903  sra         $t1, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21884c) {
            ctx->pc = 0x218868u;
            goto label_218868;
        }
    }
    ctx->pc = 0x218854u;
label_218854:
    // 0x218854: 0x29240008  slti        $a0, $t1, 0x8
    ctx->pc = 0x218854u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8) ? 1 : 0);
label_218858:
    // 0x218858: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_21885c:
    if (ctx->pc == 0x21885Cu) {
        ctx->pc = 0x218860u;
        goto label_218860;
    }
    ctx->pc = 0x218858u;
    {
        const bool branch_taken_0x218858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x218858) {
            ctx->pc = 0x218868u;
            goto label_218868;
        }
    }
    ctx->pc = 0x218860u;
label_218860:
    // 0x218860: 0x2529fff8  addiu       $t1, $t1, -0x8
    ctx->pc = 0x218860u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
label_218864:
    // 0x218864: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x218864u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_218868:
    // 0x218868: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x218868u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21886c:
    // 0x21886c: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x21886cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_218870:
    // 0x218870: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x218870u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_218874:
    // 0x218874: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x218874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_218878:
    // 0x218878: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x218878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
label_21887c:
    // 0x21887c: 0x46003040  add.s       $f1, $f6, $f0
    ctx->pc = 0x21887cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_218880:
    // 0x218880: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x218880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218884:
    // 0x218884: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x218884u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_218888:
    // 0x218888: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x218888u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_21888c:
    // 0x21888c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x21888cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218890:
    // 0x218890: 0x0  nop
    ctx->pc = 0x218890u;
    // NOP
label_218894:
    // 0x218894: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x218894u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_218898:
    // 0x218898: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x218898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_21889c:
    // 0x21889c: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x21889cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_2188a0:
    // 0x2188a0: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x2188a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
label_2188a4:
    // 0x2188a4: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x2188a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_2188a8:
    // 0x2188a8: 0x460120c2  mul.s       $f3, $f4, $f1
    ctx->pc = 0x2188a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2188ac:
    // 0x2188ac: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x2188acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
label_2188b0:
    // 0x2188b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2188b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2188b4:
    // 0x2188b4: 0x0  nop
    ctx->pc = 0x2188b4u;
    // NOP
label_2188b8:
    // 0x2188b8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2188b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2188bc:
    // 0x2188bc: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2188bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2188c0:
    // 0x2188c0: 0x46021843  div.s       $f1, $f3, $f2
    ctx->pc = 0x2188c0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[1] = ctx->f[3] / ctx->f[2];
label_2188c4:
    // 0x2188c4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2188c4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_2188c8:
    // 0x2188c8: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x2188c8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
label_2188cc:
    // 0x2188cc: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x2188ccu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
label_2188d0:
    // 0x2188d0: 0xe4e70000  swc1        $f7, 0x0($a3)
    ctx->pc = 0x2188d0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_2188d4:
    // 0x2188d4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2188d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2188d8:
    // 0x2188d8: 0xe5080000  swc1        $f8, 0x0($t0)
    ctx->pc = 0x2188d8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_2188dc:
    // 0x2188dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2188dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2188e0:
    // 0x2188e0: 0x9234016a  lbu         $s4, 0x16A($s1)
    ctx->pc = 0x2188e0u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 362)));
label_2188e4:
    // 0x2188e4: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x2188e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_2188e8:
    // 0x2188e8: 0x0  nop
    ctx->pc = 0x2188e8u;
    // NOP
label_2188ec:
    // 0x2188ec: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x2188ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_2188f0:
    // 0x2188f0: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x2188f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2188f4:
    // 0x2188f4: 0x9063016a  lbu         $v1, 0x16A($v1)
    ctx->pc = 0x2188f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 362)));
label_2188f8:
    // 0x2188f8: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
label_2188fc:
    if (ctx->pc == 0x2188FCu) {
        ctx->pc = 0x218900u;
        goto label_218900;
    }
    ctx->pc = 0x2188F8u;
    {
        const bool branch_taken_0x2188f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2188f8) {
            ctx->pc = 0x21896Cu;
            goto label_21896c;
        }
    }
    ctx->pc = 0x218900u;
label_218900:
    // 0x218900: 0x308200f0  andi        $v0, $a0, 0xF0
    ctx->pc = 0x218900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
label_218904:
    // 0x218904: 0x3087000f  andi        $a3, $a0, 0xF
    ctx->pc = 0x218904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_218908:
    // 0x218908: 0x8f849268  lw          $a0, -0x6D98($gp)
    ctx->pc = 0x218908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939240)));
label_21890c:
    // 0x21890c: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x21890cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_218910:
    // 0x218910: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x218910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_218914:
    // 0x218914: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_218918:
    if (ctx->pc == 0x218918u) {
        ctx->pc = 0x218918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218914u;
        // 0x218918: 0x28c20008  slti        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21891Cu;
        goto label_21891c;
    }
    ctx->pc = 0x218914u;
    {
        const bool branch_taken_0x218914 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x218918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218914u;
        // 0x218918: 0x28c20008  slti        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218914) {
            ctx->pc = 0x21892Cu;
            goto label_21892c;
        }
    }
    ctx->pc = 0x21891Cu;
label_21891c:
    // 0x21891c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_218920:
    if (ctx->pc == 0x218920u) {
        ctx->pc = 0x218924u;
        goto label_218924;
    }
    ctx->pc = 0x21891Cu;
    {
        const bool branch_taken_0x21891c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21891c) {
            ctx->pc = 0x21892Cu;
            goto label_21892c;
        }
    }
    ctx->pc = 0x218924u;
label_218924:
    // 0x218924: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x218924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
label_218928:
    // 0x218928: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x218928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_21892c:
    // 0x21892c: 0x0  nop
    ctx->pc = 0x21892cu;
    // NOP
label_218930:
    // 0x218930: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x218930u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_218934:
    // 0x218934: 0x328200f0  andi        $v0, $s4, 0xF0
    ctx->pc = 0x218934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)240);
label_218938:
    // 0x218938: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x218938u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_21893c:
    // 0x21893c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x21893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_218940:
    // 0x218940: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_218944:
    if (ctx->pc == 0x218944u) {
        ctx->pc = 0x218944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218940u;
        // 0x218944: 0x3285000f  andi        $a1, $s4, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x218948u;
        goto label_218948;
    }
    ctx->pc = 0x218940u;
    {
        const bool branch_taken_0x218940 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x218944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218940u;
        // 0x218944: 0x3285000f  andi        $a1, $s4, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218940) {
            ctx->pc = 0x21895Cu;
            goto label_21895c;
        }
    }
    ctx->pc = 0x218948u;
label_218948:
    // 0x218948: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x218948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_21894c:
    // 0x21894c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_218950:
    if (ctx->pc == 0x218950u) {
        ctx->pc = 0x218954u;
        goto label_218954;
    }
    ctx->pc = 0x21894Cu;
    {
        const bool branch_taken_0x21894c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21894c) {
            ctx->pc = 0x21895Cu;
            goto label_21895c;
        }
    }
    ctx->pc = 0x218954u;
label_218954:
    // 0x218954: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x218954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_218958:
    // 0x218958: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x218958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_21895c:
    // 0x21895c: 0x0  nop
    ctx->pc = 0x21895cu;
    // NOP
label_218960:
    // 0x218960: 0x662023  subu        $a0, $v1, $a2
    ctx->pc = 0x218960u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_218964:
    // 0x218964: 0xc0866e8  jal         func_219BA0
label_218968:
    if (ctx->pc == 0x218968u) {
        ctx->pc = 0x218968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218964u;
        // 0x218968: 0xa72823  subu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21896Cu;
        goto label_21896c;
    }
    ctx->pc = 0x218964u;
    SET_GPR_U32(ctx, 31, 0x21896Cu);
    ctx->pc = 0x218968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218964u;
    // 0x218968: 0xa72823  subu        $a1, $a1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219BA0u;
    { ctx->pc = 0x219ba0; return; }
    ctx->pc = 0x21896Cu;
label_21896c:
    // 0x21896c: 0x0  nop
    ctx->pc = 0x21896cu;
    // NOP
label_218970:
    // 0x218970: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x218970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_218974:
    // 0x218974: 0x243082a  slt         $at, $s2, $v1
    ctx->pc = 0x218974u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_218978:
    // 0x218978: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_21897c:
    if (ctx->pc == 0x21897Cu) {
        ctx->pc = 0x218980u;
        goto label_218980;
    }
    ctx->pc = 0x218978u;
    {
        const bool branch_taken_0x218978 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x218978) {
            ctx->pc = 0x218990u;
            goto label_218990;
        }
    }
    ctx->pc = 0x218980u;
label_218980:
    // 0x218980: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x218980u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_218984:
    // 0x218984: 0x2a4300b5  slti        $v1, $s2, 0xB5
    ctx->pc = 0x218984u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)181) ? 1 : 0);
label_218988:
    // 0x218988: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
label_21898c:
    if (ctx->pc == 0x21898Cu) {
        ctx->pc = 0x21898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218988u;
        // 0x21898c: 0x2321821  addu        $v1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218990u;
        goto label_218990;
    }
    ctx->pc = 0x218988u;
    {
        const bool branch_taken_0x218988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218988u;
        // 0x21898c: 0x2321821  addu        $v1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218988) {
            ctx->pc = 0x2188F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2188f0;
        }
    }
    ctx->pc = 0x218990u;
label_218990:
    // 0x218990: 0xc085d54  jal         func_217550
label_218994:
    if (ctx->pc == 0x218994u) {
        ctx->pc = 0x218994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218990u;
        // 0x218994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218998u;
        goto label_218998;
    }
    ctx->pc = 0x218990u;
    SET_GPR_U32(ctx, 31, 0x218998u);
    ctx->pc = 0x218994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218990u;
    // 0x218994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217550u;
    { ctx->pc = 0x217550; return; }
    ctx->pc = 0x218998u;
label_218998:
    // 0x218998: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x218998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_21899c:
    // 0x21899c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21899cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2189a0:
    // 0x2189a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2189a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2189a4:
    // 0x2189a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2189a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2189a8:
    // 0x2189a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2189a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2189ac:
    // 0x2189ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2189acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2189b0:
    // 0x2189b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2189b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2189b4:
    // 0x2189b4: 0x3e00008  jr          $ra
label_2189b8:
    if (ctx->pc == 0x2189B8u) {
        ctx->pc = 0x2189B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189B4u;
        // 0x2189b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2189BCu;
        goto label_2189bc;
    }
    ctx->pc = 0x2189B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2189B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189B4u;
        // 0x2189b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2189B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2189BCu;
label_2189bc:
    // 0x2189bc: 0x0  nop
    ctx->pc = 0x2189bcu;
    // NOP
label_2189c0:
    // 0x2189c0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2189c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_2189c4:
    // 0x2189c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2189c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2189c8:
    // 0x2189c8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2189c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_2189cc:
    // 0x2189cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2189ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2189d0:
    // 0x2189d0: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x2189d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_2189d4:
    // 0x2189d4: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x2189d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_2189d8:
    // 0x2189d8: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2189d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_2189dc:
    // 0x2189dc: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2189dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_2189e0:
    // 0x2189e0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2189e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2189e4:
    // 0x2189e4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2189e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2189e8:
    // 0x2189e8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2189e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2189ec:
    // 0x2189ec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2189ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2189f0:
    // 0x2189f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2189f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2189f4:
    // 0x2189f4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x2189f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_2189f8:
    // 0x2189f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2189f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2189fc:
    // 0x2189fc: 0x24a58ac0  addiu       $a1, $a1, -0x7540
    ctx->pc = 0x2189fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937280));
label_218a00:
    // 0x218a00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x218a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_218a04:
    // 0x218a04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x218a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218a08:
    // 0x218a08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x218a08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218a0c:
    // 0x218a0c: 0xa95821  addu        $t3, $a1, $t1
    ctx->pc = 0x218a0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_218a10:
    // 0x218a10: 0x1685021  addu        $t2, $t3, $t0
    ctx->pc = 0x218a10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_218a14:
    // 0x218a14: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x218a14u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
label_218a18:
    // 0x218a18: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x218a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_218a1c:
    // 0x218a1c: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x218a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
label_218a20:
    // 0x218a20: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x218a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_218a24:
    // 0x218a24: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x218a24u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
label_218a28:
    // 0x218a28: 0x25080080  addiu       $t0, $t0, 0x80
    ctx->pc = 0x218a28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
label_218a2c:
    // 0x218a2c: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x218a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
label_218a30:
    // 0x218a30: 0xad440010  sw          $a0, 0x10($t2)
    ctx->pc = 0x218a30u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 4));
label_218a34:
    // 0x218a34: 0xad430014  sw          $v1, 0x14($t2)
    ctx->pc = 0x218a34u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 3));
label_218a38:
    // 0x218a38: 0xad400018  sw          $zero, 0x18($t2)
    ctx->pc = 0x218a38u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 0));
label_218a3c:
    // 0x218a3c: 0xad40001c  sw          $zero, 0x1C($t2)
    ctx->pc = 0x218a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 0));
label_218a40:
    // 0x218a40: 0xad440020  sw          $a0, 0x20($t2)
    ctx->pc = 0x218a40u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 4));
label_218a44:
    // 0x218a44: 0xad430024  sw          $v1, 0x24($t2)
    ctx->pc = 0x218a44u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 36), GPR_U32(ctx, 3));
label_218a48:
    // 0x218a48: 0xad400028  sw          $zero, 0x28($t2)
    ctx->pc = 0x218a48u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 40), GPR_U32(ctx, 0));
label_218a4c:
    // 0x218a4c: 0xad40002c  sw          $zero, 0x2C($t2)
    ctx->pc = 0x218a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 44), GPR_U32(ctx, 0));
label_218a50:
    // 0x218a50: 0xad440030  sw          $a0, 0x30($t2)
    ctx->pc = 0x218a50u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 48), GPR_U32(ctx, 4));
label_218a54:
    // 0x218a54: 0xad430034  sw          $v1, 0x34($t2)
    ctx->pc = 0x218a54u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 52), GPR_U32(ctx, 3));
label_218a58:
    // 0x218a58: 0xad400038  sw          $zero, 0x38($t2)
    ctx->pc = 0x218a58u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 56), GPR_U32(ctx, 0));
label_218a5c:
    // 0x218a5c: 0xad40003c  sw          $zero, 0x3C($t2)
    ctx->pc = 0x218a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 60), GPR_U32(ctx, 0));
label_218a60:
    // 0x218a60: 0xad440040  sw          $a0, 0x40($t2)
    ctx->pc = 0x218a60u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 64), GPR_U32(ctx, 4));
label_218a64:
    // 0x218a64: 0xad430044  sw          $v1, 0x44($t2)
    ctx->pc = 0x218a64u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 68), GPR_U32(ctx, 3));
label_218a68:
    // 0x218a68: 0xad400048  sw          $zero, 0x48($t2)
    ctx->pc = 0x218a68u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 72), GPR_U32(ctx, 0));
label_218a6c:
    // 0x218a6c: 0xad40004c  sw          $zero, 0x4C($t2)
    ctx->pc = 0x218a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 76), GPR_U32(ctx, 0));
label_218a70:
    // 0x218a70: 0xad440050  sw          $a0, 0x50($t2)
    ctx->pc = 0x218a70u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 80), GPR_U32(ctx, 4));
label_218a74:
    // 0x218a74: 0xad430054  sw          $v1, 0x54($t2)
    ctx->pc = 0x218a74u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 3));
label_218a78:
    // 0x218a78: 0xad400058  sw          $zero, 0x58($t2)
    ctx->pc = 0x218a78u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 88), GPR_U32(ctx, 0));
label_218a7c:
    // 0x218a7c: 0xad40005c  sw          $zero, 0x5C($t2)
    ctx->pc = 0x218a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 92), GPR_U32(ctx, 0));
label_218a80:
    // 0x218a80: 0xad440060  sw          $a0, 0x60($t2)
    ctx->pc = 0x218a80u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 96), GPR_U32(ctx, 4));
label_218a84:
    // 0x218a84: 0xad430064  sw          $v1, 0x64($t2)
    ctx->pc = 0x218a84u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 100), GPR_U32(ctx, 3));
label_218a88:
    // 0x218a88: 0xad400068  sw          $zero, 0x68($t2)
    ctx->pc = 0x218a88u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 104), GPR_U32(ctx, 0));
label_218a8c:
    // 0x218a8c: 0xad40006c  sw          $zero, 0x6C($t2)
    ctx->pc = 0x218a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 108), GPR_U32(ctx, 0));
label_218a90:
    // 0x218a90: 0xad440070  sw          $a0, 0x70($t2)
    ctx->pc = 0x218a90u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 112), GPR_U32(ctx, 4));
label_218a94:
    // 0x218a94: 0xad430074  sw          $v1, 0x74($t2)
    ctx->pc = 0x218a94u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 116), GPR_U32(ctx, 3));
label_218a98:
    // 0x218a98: 0xad400078  sw          $zero, 0x78($t2)
    ctx->pc = 0x218a98u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 120), GPR_U32(ctx, 0));
label_218a9c:
    // 0x218a9c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_218aa0:
    if (ctx->pc == 0x218AA0u) {
        ctx->pc = 0x218AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A9Cu;
        // 0x218aa0: 0xad40007c  sw          $zero, 0x7C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218AA4u;
        goto label_218aa4;
    }
    ctx->pc = 0x218A9Cu;
    {
        const bool branch_taken_0x218a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A9Cu;
        // 0x218aa0: 0xad40007c  sw          $zero, 0x7C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218a9c) {
            ctx->pc = 0x218A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218a10;
        }
    }
    ctx->pc = 0x218AA4u;
label_218aa4:
    // 0x218aa4: 0x28e1000a  slti        $at, $a3, 0xA
    ctx->pc = 0x218aa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
label_218aa8:
    // 0x218aa8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_218aac:
    if (ctx->pc == 0x218AACu) {
        ctx->pc = 0x218AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AA8u;
        // 0x218aac: 0x74100  sll         $t0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218AB0u;
        goto label_218ab0;
    }
    ctx->pc = 0x218AA8u;
    {
        const bool branch_taken_0x218aa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x218AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AA8u;
        // 0x218aac: 0x74100  sll         $t0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218aa8) {
            ctx->pc = 0x218AD4u;
            goto label_218ad4;
        }
    }
    ctx->pc = 0x218AB0u;
label_218ab0:
    // 0x218ab0: 0x1685021  addu        $t2, $t3, $t0
    ctx->pc = 0x218ab0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_218ab4:
    // 0x218ab4: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x218ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
label_218ab8:
    // 0x218ab8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x218ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_218abc:
    // 0x218abc: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x218abcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
label_218ac0:
    // 0x218ac0: 0x28e2000a  slti        $v0, $a3, 0xA
    ctx->pc = 0x218ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
label_218ac4:
    // 0x218ac4: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x218ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
label_218ac8:
    // 0x218ac8: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x218ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_218acc:
    // 0x218acc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_218ad0:
    if (ctx->pc == 0x218AD0u) {
        ctx->pc = 0x218AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218ACCu;
        // 0x218ad0: 0xad40000c  sw          $zero, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218AD4u;
        goto label_218ad4;
    }
    ctx->pc = 0x218ACCu;
    {
        const bool branch_taken_0x218acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218ACCu;
        // 0x218ad0: 0xad40000c  sw          $zero, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218acc) {
            ctx->pc = 0x218AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218ab0;
        }
    }
    ctx->pc = 0x218AD4u;
label_218ad4:
    // 0x218ad4: 0x0  nop
    ctx->pc = 0x218ad4u;
    // NOP
label_218ad8:
    // 0x218ad8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x218ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_218adc:
    // 0x218adc: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x218adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_218ae0:
    // 0x218ae0: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_218ae4:
    if (ctx->pc == 0x218AE4u) {
        ctx->pc = 0x218AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AE0u;
        // 0x218ae4: 0x252900a0  addiu       $t1, $t1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218AE8u;
        goto label_218ae8;
    }
    ctx->pc = 0x218AE0u;
    {
        const bool branch_taken_0x218ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AE0u;
        // 0x218ae4: 0x252900a0  addiu       $t1, $t1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ae0) {
            ctx->pc = 0x218A04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218a04;
        }
    }
    ctx->pc = 0x218AE8u;
label_218ae8:
    // 0x218ae8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x218ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218aec:
    // 0x218aec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x218aecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218af0:
    // 0x218af0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x218af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_218af4:
    // 0x218af4: 0x3c070059  lui         $a3, 0x59
    ctx->pc = 0x218af4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
label_218af8:
    // 0x218af8: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x218af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_218afc:
    // 0x218afc: 0x24e78ac0  addiu       $a3, $a3, -0x7540
    ctx->pc = 0x218afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937280));
label_218b00:
    // 0x218b00: 0x0  nop
    ctx->pc = 0x218b00u;
    // NOP
label_218b04:
    // 0x218b04: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x218b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_218b08:
    // 0x218b08: 0x90c5367c  lbu         $a1, 0x367C($a2)
    ctx->pc = 0x218b08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 13948)));
label_218b0c:
    // 0x218b0c: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
label_218b10:
    if (ctx->pc == 0x218B10u) {
        ctx->pc = 0x218B14u;
        goto label_218b14;
    }
    ctx->pc = 0x218B0Cu;
    {
        const bool branch_taken_0x218b0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x218b0c) {
            ctx->pc = 0x218B80u;
            goto label_218b80;
        }
    }
    ctx->pc = 0x218B14u;
label_218b14:
    // 0x218b14: 0x8cc9366c  lw          $t1, 0x366C($a2)
    ctx->pc = 0x218b14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13932)));
label_218b18:
    // 0x218b18: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x218b18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218b1c:
    // 0x218b1c: 0x8cc83674  lw          $t0, 0x3674($a2)
    ctx->pc = 0x218b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13940)));
label_218b20:
    // 0x218b20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x218b20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218b24:
    // 0x218b24: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x218b24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_218b28:
    // 0x218b28: 0xa83021  addu        $a2, $a1, $t0
    ctx->pc = 0x218b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_218b2c:
    // 0x218b2c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x218b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_218b30:
    // 0x218b30: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x218b30u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_218b34:
    // 0x218b34: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x218b34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_218b38:
    // 0x218b38: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x218b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_218b3c:
    // 0x218b3c: 0x24a60000  addiu       $a2, $a1, 0x0
    ctx->pc = 0x218b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_218b40:
    // 0x218b40: 0xca2821  addu        $a1, $a2, $t2
    ctx->pc = 0x218b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_218b44:
    // 0x218b44: 0x90a50220  lbu         $a1, 0x220($a1)
    ctx->pc = 0x218b44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 544)));
label_218b48:
    // 0x218b48: 0x14a90009  bne         $a1, $t1, . + 4 + (0x9 << 2)
label_218b4c:
    if (ctx->pc == 0x218B4Cu) {
        ctx->pc = 0x218B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B48u;
        // 0x218b4c: 0x82880  sll         $a1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218B50u;
        goto label_218b50;
    }
    ctx->pc = 0x218B48u;
    {
        const bool branch_taken_0x218b48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        ctx->pc = 0x218B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B48u;
        // 0x218b4c: 0x82880  sll         $a1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b48) {
            ctx->pc = 0x218B70u;
            goto label_218b70;
        }
    }
    ctx->pc = 0x218B50u;
label_218b50:
    // 0x218b50: 0xb3100  sll         $a2, $t3, 4
    ctx->pc = 0x218b50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_218b54:
    // 0x218b54: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x218b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_218b58:
    // 0x218b58: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x218b58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_218b5c:
    // 0x218b5c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x218b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_218b60:
    // 0x218b60: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x218b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_218b64:
    // 0x218b64: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x218b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_218b68:
    // 0x218b68: 0x10000005  b           . + 4 + (0x5 << 2)
label_218b6c:
    if (ctx->pc == 0x218B6Cu) {
        ctx->pc = 0x218B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B68u;
        // 0x218b6c: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218B70u;
        goto label_218b70;
    }
    ctx->pc = 0x218B68u;
    {
        const bool branch_taken_0x218b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B68u;
        // 0x218b6c: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b68) {
            ctx->pc = 0x218B80u;
            goto label_218b80;
        }
    }
    ctx->pc = 0x218B70u;
label_218b70:
    // 0x218b70: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x218b70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_218b74:
    // 0x218b74: 0x2965000a  slti        $a1, $t3, 0xA
    ctx->pc = 0x218b74u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)10) ? 1 : 0);
label_218b78:
    // 0x218b78: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
label_218b7c:
    if (ctx->pc == 0x218B7Cu) {
        ctx->pc = 0x218B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B78u;
        // 0x218b7c: 0x254a0240  addiu       $t2, $t2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218B80u;
        goto label_218b80;
    }
    ctx->pc = 0x218B78u;
    {
        const bool branch_taken_0x218b78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x218B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B78u;
        // 0x218b7c: 0x254a0240  addiu       $t2, $t2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b78) {
            ctx->pc = 0x218B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218b40;
        }
    }
    ctx->pc = 0x218B80u;
label_218b80:
    // 0x218b80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x218b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_218b84:
    // 0x218b84: 0x28850002  slti        $a1, $a0, 0x2
    ctx->pc = 0x218b84u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_218b88:
    // 0x218b88: 0x14a0ffdd  bnez        $a1, . + 4 + (-0x23 << 2)
label_218b8c:
    if (ctx->pc == 0x218B8Cu) {
        ctx->pc = 0x218B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B88u;
        // 0x218b8c: 0x24630090  addiu       $v1, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218B90u;
        goto label_218b90;
    }
    ctx->pc = 0x218B88u;
    {
        const bool branch_taken_0x218b88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x218B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B88u;
        // 0x218b8c: 0x24630090  addiu       $v1, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b88) {
            ctx->pc = 0x218B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218b00;
        }
    }
    ctx->pc = 0x218B90u;
label_218b90:
    // 0x218b90: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x218b90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218b94:
    // 0x218b94: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x218b94u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218b98:
    // 0x218b98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x218b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218b9c:
    // 0x218b9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x218b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218ba0:
    // 0x218ba0: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x218ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_218ba4:
    // 0x218ba4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x218ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_218ba8:
    // 0x218ba8: 0x57b021  addu        $s6, $v0, $s7
    ctx->pc = 0x218ba8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_218bac:
    // 0x218bac: 0x0  nop
    ctx->pc = 0x218bacu;
    // NOP
label_218bb0:
    // 0x218bb0: 0x2c42821  addu        $a1, $s6, $a0
    ctx->pc = 0x218bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_218bb4:
    // 0x218bb4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x218bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_218bb8:
    // 0x218bb8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x218bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_218bbc:
    // 0x218bbc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x218bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_218bc0:
    // 0x218bc0: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x218bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_218bc4:
    // 0x218bc4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x218bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_218bc8:
    // 0x218bc8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x218bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_218bcc:
    // 0x218bcc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x218bccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_218bd0:
    // 0x218bd0: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x218bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_218bd4:
    // 0x218bd4: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x218bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_218bd8:
    // 0x218bd8: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x218bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_218bdc:
    // 0x218bdc: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_218be0:
    if (ctx->pc == 0x218BE0u) {
        ctx->pc = 0x218BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BDCu;
        // 0x218be0: 0xaca3001c  sw          $v1, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218BE4u;
        goto label_218be4;
    }
    ctx->pc = 0x218BDCu;
    {
        const bool branch_taken_0x218bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BDCu;
        // 0x218be0: 0xaca3001c  sw          $v1, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218bdc) {
            ctx->pc = 0x218BACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218bac;
        }
    }
    ctx->pc = 0x218BE4u;
label_218be4:
    // 0x218be4: 0x28c1000a  slti        $at, $a2, 0xA
    ctx->pc = 0x218be4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_218be8:
    // 0x218be8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_218bec:
    if (ctx->pc == 0x218BECu) {
        ctx->pc = 0x218BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BE8u;
        // 0x218bec: 0x62080  sll         $a0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218BF0u;
        goto label_218bf0;
    }
    ctx->pc = 0x218BE8u;
    {
        const bool branch_taken_0x218be8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x218BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BE8u;
        // 0x218bec: 0x62080  sll         $a0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218be8) {
            ctx->pc = 0x218C14u;
            goto label_218c14;
        }
    }
    ctx->pc = 0x218BF0u;
label_218bf0:
    // 0x218bf0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x218bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_218bf4:
    // 0x218bf4: 0x0  nop
    ctx->pc = 0x218bf4u;
    // NOP
label_218bf8:
    // 0x218bf8: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x218bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_218bfc:
    // 0x218bfc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x218bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_218c00:
    // 0x218c00: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x218c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_218c04:
    // 0x218c04: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x218c04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_218c08:
    // 0x218c08: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x218c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_218c0c:
    // 0x218c0c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_218c10:
    if (ctx->pc == 0x218C10u) {
        ctx->pc = 0x218C14u;
        goto label_218c14;
    }
    ctx->pc = 0x218C0Cu;
    {
        const bool branch_taken_0x218c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x218c0c) {
            ctx->pc = 0x218BF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218bf4;
        }
    }
    ctx->pc = 0x218C14u;
label_218c14:
    // 0x218c14: 0x0  nop
    ctx->pc = 0x218c14u;
    // NOP
label_218c18:
    // 0x218c18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x218c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218c1c:
    // 0x218c1c: 0x10000017  b           . + 4 + (0x17 << 2)
label_218c20:
    if (ctx->pc == 0x218C20u) {
        ctx->pc = 0x218C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C1Cu;
        // 0x218c20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C24u;
        goto label_218c24;
    }
    ctx->pc = 0x218C1Cu;
    {
        const bool branch_taken_0x218c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C1Cu;
        // 0x218c20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c1c) {
            ctx->pc = 0x218C7Cu;
            goto label_218c7c;
        }
    }
    ctx->pc = 0x218C24u;
label_218c24:
    // 0x218c24: 0x0  nop
    ctx->pc = 0x218c24u;
    // NOP
label_218c28:
    // 0x218c28: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x218c28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218c2c:
    // 0x218c2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x218c2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218c30:
    // 0x218c30: 0x2d29821  addu        $s3, $s6, $s2
    ctx->pc = 0x218c30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_218c34:
    // 0x218c34: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x218c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_218c38:
    // 0x218c38: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x218c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_218c3c:
    // 0x218c3c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_218c40:
    if (ctx->pc == 0x218C40u) {
        ctx->pc = 0x218C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C3Cu;
        // 0x218c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C44u;
        goto label_218c44;
    }
    ctx->pc = 0x218C3Cu;
    {
        const bool branch_taken_0x218c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x218C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C3Cu;
        // 0x218c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c3c) {
            ctx->pc = 0x218C68u;
            goto label_218c68;
        }
    }
    ctx->pc = 0x218C44u;
label_218c44:
    // 0x218c44: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x218c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_218c48:
    // 0x218c48: 0xc08675c  jal         func_219D70
label_218c4c:
    if (ctx->pc == 0x218C4Cu) {
        ctx->pc = 0x218C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C48u;
        // 0x218c4c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C50u;
        goto label_218c50;
    }
    ctx->pc = 0x218C48u;
    SET_GPR_U32(ctx, 31, 0x218C50u);
    ctx->pc = 0x218C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C48u;
    // 0x218c4c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219D70u;
    { ctx->pc = 0x219d70; return; }
    ctx->pc = 0x218C50u;
label_218c50:
    // 0x218c50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_218c54:
    if (ctx->pc == 0x218C54u) {
        ctx->pc = 0x218C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C50u;
        // 0x218c54: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C58u;
        goto label_218c58;
    }
    ctx->pc = 0x218C50u;
    {
        const bool branch_taken_0x218c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C50u;
        // 0x218c54: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c50) {
            ctx->pc = 0x218C60u;
            goto label_218c60;
        }
    }
    ctx->pc = 0x218C58u;
label_218c58:
    // 0x218c58: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_218c5c:
    if (ctx->pc == 0x218C5Cu) {
        ctx->pc = 0x218C60u;
        goto label_218c60;
    }
    ctx->pc = 0x218C58u;
    {
        const bool branch_taken_0x218c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x218c58) {
            ctx->pc = 0x218C68u;
            goto label_218c68;
        }
    }
    ctx->pc = 0x218C60u;
label_218c60:
    // 0x218c60: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x218c60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_218c64:
    // 0x218c64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x218c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_218c68:
    // 0x218c68: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x218c68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_218c6c:
    // 0x218c6c: 0x2a82000a  slti        $v0, $s4, 0xA
    ctx->pc = 0x218c6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
label_218c70:
    // 0x218c70: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_218c74:
    if (ctx->pc == 0x218C74u) {
        ctx->pc = 0x218C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C70u;
        // 0x218c74: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218C78u;
        goto label_218c78;
    }
    ctx->pc = 0x218C70u;
    {
        const bool branch_taken_0x218c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C70u;
        // 0x218c74: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c70) {
            ctx->pc = 0x218C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218c30;
        }
    }
    ctx->pc = 0x218C78u;
label_218c78:
    // 0x218c78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x218c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_218c7c:
    // 0x218c7c: 0x0  nop
    ctx->pc = 0x218c7cu;
    // NOP
label_218c80:
    // 0x218c80: 0x8f82926c  lw          $v0, -0x6D94($gp)
    ctx->pc = 0x218c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939244)));
label_218c84:
    // 0x218c84: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x218c84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_218c88:
    // 0x218c88: 0x1020ffe6  beqz        $at, . + 4 + (-0x1A << 2)
label_218c8c:
    if (ctx->pc == 0x218C8Cu) {
        ctx->pc = 0x218C90u;
        goto label_218c90;
    }
    ctx->pc = 0x218C88u;
    {
        const bool branch_taken_0x218c88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x218c88) {
            ctx->pc = 0x218C24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218c24;
        }
    }
    ctx->pc = 0x218C90u;
label_218c90:
    // 0x218c90: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x218c90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_218c94:
    // 0x218c94: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x218c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_218c98:
    // 0x218c98: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
label_218c9c:
    if (ctx->pc == 0x218C9Cu) {
        ctx->pc = 0x218C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C98u;
        // 0x218c9c: 0x26f70028  addiu       $s7, $s7, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218CA0u;
        goto label_218ca0;
    }
    ctx->pc = 0x218C98u;
    {
        const bool branch_taken_0x218c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C98u;
        // 0x218c9c: 0x26f70028  addiu       $s7, $s7, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c98) {
            ctx->pc = 0x218B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218b98;
        }
    }
    ctx->pc = 0x218CA0u;
label_218ca0:
    // 0x218ca0: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x218ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_218ca4:
    // 0x218ca4: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x218ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
label_218ca8:
    // 0x218ca8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x218ca8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218cac:
    // 0x218cac: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x218cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_218cb0:
    // 0x218cb0: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x218cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_218cb4:
    // 0x218cb4: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x218cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_218cb8:
    // 0x218cb8: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x218cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_218cbc:
    // 0x218cbc: 0x0  nop
    ctx->pc = 0x218cbcu;
    // NOP
label_218cc0:
    // 0x218cc0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x218cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_218cc4:
    // 0x218cc4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x218cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_218cc8:
    // 0x218cc8: 0x24050488  addiu       $a1, $zero, 0x488
    ctx->pc = 0x218cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1160));
label_218ccc:
    // 0x218ccc: 0x24638c00  addiu       $v1, $v1, -0x7400
    ctx->pc = 0x218cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937600));
label_218cd0:
    // 0x218cd0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x218cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_218cd4:
    // 0x218cd4: 0x24430000  addiu       $v1, $v0, 0x0
    ctx->pc = 0x218cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_218cd8:
    // 0x218cd8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x218cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_218cdc:
    // 0x218cdc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x218cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_218ce0:
    // 0x218ce0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x218ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_218ce4:
    // 0x218ce4: 0xc05e234  jal         func_1788D0
label_218ce8:
    if (ctx->pc == 0x218CE8u) {
        ctx->pc = 0x218CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218CE4u;
        // 0x218ce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218CECu;
        goto label_218cec;
    }
    ctx->pc = 0x218CE4u;
    SET_GPR_U32(ctx, 31, 0x218CECu);
    ctx->pc = 0x218CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218CE4u;
    // 0x218ce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x218CE4u, 0x218CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218CECu;
label_218cec:
    // 0x218cec: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x218cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_218cf0:
    // 0x218cf0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x218cf0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218cf4:
    // 0x218cf4: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x218cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_218cf8:
    // 0x218cf8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x218cf8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218cfc:
    // 0x218cfc: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x218cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_218d00:
    // 0x218d00: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x218d00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218d04:
    // 0x218d04: 0x0  nop
    ctx->pc = 0x218d04u;
    // NOP
label_218d08:
    // 0x218d08: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x218d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_218d0c:
    // 0x218d0c: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x218d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_218d10:
    // 0x218d10: 0x24100070  addiu       $s0, $zero, 0x70
    ctx->pc = 0x218d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_218d14:
    // 0x218d14: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x218d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_218d18:
    // 0x218d18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x218d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_218d1c:
    // 0x218d1c: 0x24430000  addiu       $v1, $v0, 0x0
    ctx->pc = 0x218d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_218d20:
    // 0x218d20: 0x24020210  addiu       $v0, $zero, 0x210
    ctx->pc = 0x218d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_218d24:
    // 0x218d24: 0x55800b  movn        $s0, $v0, $s5
    ctx->pc = 0x218d24u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_218d28:
    // 0x218d28: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x218d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_218d2c:
    // 0x218d2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x218d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_218d30:
    // 0x218d30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x218d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_218d34:
    // 0x218d34: 0x29140  sll         $s2, $v0, 5
    ctx->pc = 0x218d34u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_218d38:
    // 0x218d38: 0xc070834  jal         func_1C20D0
label_218d3c:
    if (ctx->pc == 0x218D3Cu) {
        ctx->pc = 0x218D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D38u;
        // 0x218d3c: 0x26540060  addiu       $s4, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D40u;
        goto label_218d40;
    }
    ctx->pc = 0x218D38u;
    SET_GPR_U32(ctx, 31, 0x218D40u);
    ctx->pc = 0x218D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D38u;
    // 0x218d3c: 0x26540060  addiu       $s4, $s2, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x218D40u;
label_218d40:
    // 0x218d40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x218d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218d44:
    // 0x218d44: 0x240300a8  addiu       $v1, $zero, 0xA8
    ctx->pc = 0x218d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_218d48:
    // 0x218d48: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x218d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_218d4c:
    // 0x218d4c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x218d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_218d50:
    // 0x218d50: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x218d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_218d54:
    // 0x218d54: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x218d54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_218d58:
    // 0x218d58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x218d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_218d5c:
    // 0x218d5c: 0xffaa0010  sd          $t2, 0x10($sp)
    ctx->pc = 0x218d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 10));
label_218d60:
    // 0x218d60: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x218d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_218d64:
    // 0x218d64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x218d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218d68:
    // 0x218d68: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x218d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_218d6c:
    // 0x218d6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x218d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218d70:
    // 0x218d70: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x218d70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_218d74:
    // 0x218d74: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x218d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_218d78:
    // 0x218d78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x218d78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218d7c:
    // 0x218d7c: 0x240b0168  addiu       $t3, $zero, 0x168
    ctx->pc = 0x218d7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_218d80:
    // 0x218d80: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x218d80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_218d84:
    // 0x218d84: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x218d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_218d88:
    // 0x218d88: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x218d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
label_218d8c:
    // 0x218d8c: 0xc05ded8  jal         func_177B60
label_218d90:
    if (ctx->pc == 0x218D90u) {
        ctx->pc = 0x218D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D8Cu;
        // 0x218d90: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D94u;
        goto label_218d94;
    }
    ctx->pc = 0x218D8Cu;
    SET_GPR_U32(ctx, 31, 0x218D94u);
    ctx->pc = 0x218D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D8Cu;
    // 0x218d90: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x218D8Cu, 0x218D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218D94u;
label_218d94:
    // 0x218d94: 0xc070834  jal         func_1C20D0
label_218d98:
    if (ctx->pc == 0x218D98u) {
        ctx->pc = 0x218D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218D94u;
        // 0x218d98: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218D9Cu;
        goto label_218d9c;
    }
    ctx->pc = 0x218D94u;
    SET_GPR_U32(ctx, 31, 0x218D9Cu);
    ctx->pc = 0x218D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218D94u;
    // 0x218d98: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x218D9Cu;
label_218d9c:
    // 0x218d9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x218d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218da0:
    // 0x218da0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x218da0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_218da4:
    // 0x218da4: 0x240200a8  addiu       $v0, $zero, 0xA8
    ctx->pc = 0x218da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_218da8:
    // 0x218da8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x218da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218dac:
    // 0x218dac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x218dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_218db0:
    // 0x218db0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x218db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218db4:
    // 0x218db4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x218db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x218db8u;
    return;
}
