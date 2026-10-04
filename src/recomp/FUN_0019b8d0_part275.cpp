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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part275(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x221570u: goto label_221570;
        case 0x221574u: goto label_221574;
        case 0x221578u: goto label_221578;
        case 0x22157cu: goto label_22157c;
        case 0x221580u: goto label_221580;
        case 0x221584u: goto label_221584;
        case 0x221588u: goto label_221588;
        case 0x22158cu: goto label_22158c;
        case 0x221590u: goto label_221590;
        case 0x221594u: goto label_221594;
        case 0x221598u: goto label_221598;
        case 0x22159cu: goto label_22159c;
        case 0x2215a0u: goto label_2215a0;
        case 0x2215a4u: goto label_2215a4;
        case 0x2215a8u: goto label_2215a8;
        case 0x2215acu: goto label_2215ac;
        case 0x2215b0u: goto label_2215b0;
        case 0x2215b4u: goto label_2215b4;
        case 0x2215b8u: goto label_2215b8;
        case 0x2215bcu: goto label_2215bc;
        case 0x2215c0u: goto label_2215c0;
        case 0x2215c4u: goto label_2215c4;
        case 0x2215c8u: goto label_2215c8;
        case 0x2215ccu: goto label_2215cc;
        case 0x2215d0u: goto label_2215d0;
        case 0x2215d4u: goto label_2215d4;
        case 0x2215d8u: goto label_2215d8;
        case 0x2215dcu: goto label_2215dc;
        case 0x2215e0u: goto label_2215e0;
        case 0x2215e4u: goto label_2215e4;
        case 0x2215e8u: goto label_2215e8;
        case 0x2215ecu: goto label_2215ec;
        case 0x2215f0u: goto label_2215f0;
        case 0x2215f4u: goto label_2215f4;
        case 0x2215f8u: goto label_2215f8;
        case 0x2215fcu: goto label_2215fc;
        case 0x221600u: goto label_221600;
        case 0x221604u: goto label_221604;
        case 0x221608u: goto label_221608;
        case 0x22160cu: goto label_22160c;
        case 0x221610u: goto label_221610;
        case 0x221614u: goto label_221614;
        case 0x221618u: goto label_221618;
        case 0x22161cu: goto label_22161c;
        case 0x221620u: goto label_221620;
        case 0x221624u: goto label_221624;
        case 0x221628u: goto label_221628;
        case 0x22162cu: goto label_22162c;
        case 0x221630u: goto label_221630;
        case 0x221634u: goto label_221634;
        case 0x221638u: goto label_221638;
        case 0x22163cu: goto label_22163c;
        case 0x221640u: goto label_221640;
        case 0x221644u: goto label_221644;
        case 0x221648u: goto label_221648;
        case 0x22164cu: goto label_22164c;
        case 0x221650u: goto label_221650;
        case 0x221654u: goto label_221654;
        case 0x221658u: goto label_221658;
        case 0x22165cu: goto label_22165c;
        case 0x221660u: goto label_221660;
        case 0x221664u: goto label_221664;
        case 0x221668u: goto label_221668;
        case 0x22166cu: goto label_22166c;
        case 0x221670u: goto label_221670;
        case 0x221674u: goto label_221674;
        case 0x221678u: goto label_221678;
        case 0x22167cu: goto label_22167c;
        case 0x221680u: goto label_221680;
        case 0x221684u: goto label_221684;
        case 0x221688u: goto label_221688;
        case 0x22168cu: goto label_22168c;
        case 0x221690u: goto label_221690;
        case 0x221694u: goto label_221694;
        case 0x221698u: goto label_221698;
        case 0x22169cu: goto label_22169c;
        case 0x2216a0u: goto label_2216a0;
        case 0x2216a4u: goto label_2216a4;
        case 0x2216a8u: goto label_2216a8;
        case 0x2216acu: goto label_2216ac;
        case 0x2216b0u: goto label_2216b0;
        case 0x2216b4u: goto label_2216b4;
        case 0x2216b8u: goto label_2216b8;
        case 0x2216bcu: goto label_2216bc;
        case 0x2216c0u: goto label_2216c0;
        case 0x2216c4u: goto label_2216c4;
        case 0x2216c8u: goto label_2216c8;
        case 0x2216ccu: goto label_2216cc;
        case 0x2216d0u: goto label_2216d0;
        case 0x2216d4u: goto label_2216d4;
        case 0x2216d8u: goto label_2216d8;
        case 0x2216dcu: goto label_2216dc;
        case 0x2216e0u: goto label_2216e0;
        case 0x2216e4u: goto label_2216e4;
        case 0x2216e8u: goto label_2216e8;
        case 0x2216ecu: goto label_2216ec;
        case 0x2216f0u: goto label_2216f0;
        case 0x2216f4u: goto label_2216f4;
        case 0x2216f8u: goto label_2216f8;
        case 0x2216fcu: goto label_2216fc;
        case 0x221700u: goto label_221700;
        case 0x221704u: goto label_221704;
        case 0x221708u: goto label_221708;
        case 0x22170cu: goto label_22170c;
        case 0x221710u: goto label_221710;
        case 0x221714u: goto label_221714;
        case 0x221718u: goto label_221718;
        case 0x22171cu: goto label_22171c;
        case 0x221720u: goto label_221720;
        case 0x221724u: goto label_221724;
        case 0x221728u: goto label_221728;
        case 0x22172cu: goto label_22172c;
        case 0x221730u: goto label_221730;
        case 0x221734u: goto label_221734;
        case 0x221738u: goto label_221738;
        case 0x22173cu: goto label_22173c;
        case 0x221740u: goto label_221740;
        case 0x221744u: goto label_221744;
        case 0x221748u: goto label_221748;
        case 0x22174cu: goto label_22174c;
        case 0x221750u: goto label_221750;
        case 0x221754u: goto label_221754;
        case 0x221758u: goto label_221758;
        case 0x22175cu: goto label_22175c;
        case 0x221760u: goto label_221760;
        case 0x221764u: goto label_221764;
        case 0x221768u: goto label_221768;
        case 0x22176cu: goto label_22176c;
        case 0x221770u: goto label_221770;
        case 0x221774u: goto label_221774;
        case 0x221778u: goto label_221778;
        case 0x22177cu: goto label_22177c;
        case 0x221780u: goto label_221780;
        case 0x221784u: goto label_221784;
        case 0x221788u: goto label_221788;
        case 0x22178cu: goto label_22178c;
        case 0x221790u: goto label_221790;
        case 0x221794u: goto label_221794;
        case 0x221798u: goto label_221798;
        case 0x22179cu: goto label_22179c;
        case 0x2217a0u: goto label_2217a0;
        case 0x2217a4u: goto label_2217a4;
        case 0x2217a8u: goto label_2217a8;
        case 0x2217acu: goto label_2217ac;
        case 0x2217b0u: goto label_2217b0;
        case 0x2217b4u: goto label_2217b4;
        case 0x2217b8u: goto label_2217b8;
        case 0x2217bcu: goto label_2217bc;
        case 0x2217c0u: goto label_2217c0;
        case 0x2217c4u: goto label_2217c4;
        case 0x2217c8u: goto label_2217c8;
        case 0x2217ccu: goto label_2217cc;
        case 0x2217d0u: goto label_2217d0;
        case 0x2217d4u: goto label_2217d4;
        case 0x2217d8u: goto label_2217d8;
        case 0x2217dcu: goto label_2217dc;
        case 0x2217e0u: goto label_2217e0;
        case 0x2217e4u: goto label_2217e4;
        case 0x2217e8u: goto label_2217e8;
        case 0x2217ecu: goto label_2217ec;
        case 0x2217f0u: goto label_2217f0;
        case 0x2217f4u: goto label_2217f4;
        case 0x2217f8u: goto label_2217f8;
        case 0x2217fcu: goto label_2217fc;
        case 0x221800u: goto label_221800;
        case 0x221804u: goto label_221804;
        case 0x221808u: goto label_221808;
        case 0x22180cu: goto label_22180c;
        case 0x221810u: goto label_221810;
        case 0x221814u: goto label_221814;
        case 0x221818u: goto label_221818;
        case 0x22181cu: goto label_22181c;
        case 0x221820u: goto label_221820;
        case 0x221824u: goto label_221824;
        case 0x221828u: goto label_221828;
        case 0x22182cu: goto label_22182c;
        case 0x221830u: goto label_221830;
        case 0x221834u: goto label_221834;
        case 0x221838u: goto label_221838;
        case 0x22183cu: goto label_22183c;
        case 0x221840u: goto label_221840;
        case 0x221844u: goto label_221844;
        case 0x221848u: goto label_221848;
        case 0x22184cu: goto label_22184c;
        case 0x221850u: goto label_221850;
        case 0x221854u: goto label_221854;
        case 0x221858u: goto label_221858;
        case 0x22185cu: goto label_22185c;
        case 0x221860u: goto label_221860;
        case 0x221864u: goto label_221864;
        case 0x221868u: goto label_221868;
        case 0x22186cu: goto label_22186c;
        case 0x221870u: goto label_221870;
        case 0x221874u: goto label_221874;
        case 0x221878u: goto label_221878;
        case 0x22187cu: goto label_22187c;
        case 0x221880u: goto label_221880;
        case 0x221884u: goto label_221884;
        case 0x221888u: goto label_221888;
        case 0x22188cu: goto label_22188c;
        case 0x221890u: goto label_221890;
        case 0x221894u: goto label_221894;
        case 0x221898u: goto label_221898;
        case 0x22189cu: goto label_22189c;
        case 0x2218a0u: goto label_2218a0;
        case 0x2218a4u: goto label_2218a4;
        case 0x2218a8u: goto label_2218a8;
        case 0x2218acu: goto label_2218ac;
        case 0x2218b0u: goto label_2218b0;
        case 0x2218b4u: goto label_2218b4;
        case 0x2218b8u: goto label_2218b8;
        case 0x2218bcu: goto label_2218bc;
        case 0x2218c0u: goto label_2218c0;
        case 0x2218c4u: goto label_2218c4;
        case 0x2218c8u: goto label_2218c8;
        case 0x2218ccu: goto label_2218cc;
        case 0x2218d0u: goto label_2218d0;
        case 0x2218d4u: goto label_2218d4;
        case 0x2218d8u: goto label_2218d8;
        case 0x2218dcu: goto label_2218dc;
        case 0x2218e0u: goto label_2218e0;
        case 0x2218e4u: goto label_2218e4;
        case 0x2218e8u: goto label_2218e8;
        case 0x2218ecu: goto label_2218ec;
        case 0x2218f0u: goto label_2218f0;
        case 0x2218f4u: goto label_2218f4;
        case 0x2218f8u: goto label_2218f8;
        case 0x2218fcu: goto label_2218fc;
        case 0x221900u: goto label_221900;
        case 0x221904u: goto label_221904;
        case 0x221908u: goto label_221908;
        case 0x22190cu: goto label_22190c;
        case 0x221910u: goto label_221910;
        case 0x221914u: goto label_221914;
        case 0x221918u: goto label_221918;
        case 0x22191cu: goto label_22191c;
        case 0x221920u: goto label_221920;
        case 0x221924u: goto label_221924;
        case 0x221928u: goto label_221928;
        case 0x22192cu: goto label_22192c;
        case 0x221930u: goto label_221930;
        case 0x221934u: goto label_221934;
        case 0x221938u: goto label_221938;
        case 0x22193cu: goto label_22193c;
        case 0x221940u: goto label_221940;
        case 0x221944u: goto label_221944;
        case 0x221948u: goto label_221948;
        case 0x22194cu: goto label_22194c;
        case 0x221950u: goto label_221950;
        case 0x221954u: goto label_221954;
        case 0x221958u: goto label_221958;
        case 0x22195cu: goto label_22195c;
        case 0x221960u: goto label_221960;
        case 0x221964u: goto label_221964;
        case 0x221968u: goto label_221968;
        case 0x22196cu: goto label_22196c;
        case 0x221970u: goto label_221970;
        case 0x221974u: goto label_221974;
        case 0x221978u: goto label_221978;
        case 0x22197cu: goto label_22197c;
        case 0x221980u: goto label_221980;
        case 0x221984u: goto label_221984;
        case 0x221988u: goto label_221988;
        case 0x22198cu: goto label_22198c;
        case 0x221990u: goto label_221990;
        case 0x221994u: goto label_221994;
        case 0x221998u: goto label_221998;
        case 0x22199cu: goto label_22199c;
        case 0x2219a0u: goto label_2219a0;
        case 0x2219a4u: goto label_2219a4;
        case 0x2219a8u: goto label_2219a8;
        case 0x2219acu: goto label_2219ac;
        case 0x2219b0u: goto label_2219b0;
        case 0x2219b4u: goto label_2219b4;
        case 0x2219b8u: goto label_2219b8;
        case 0x2219bcu: goto label_2219bc;
        case 0x2219c0u: goto label_2219c0;
        case 0x2219c4u: goto label_2219c4;
        case 0x2219c8u: goto label_2219c8;
        case 0x2219ccu: goto label_2219cc;
        case 0x2219d0u: goto label_2219d0;
        case 0x2219d4u: goto label_2219d4;
        case 0x2219d8u: goto label_2219d8;
        case 0x2219dcu: goto label_2219dc;
        case 0x2219e0u: goto label_2219e0;
        case 0x2219e4u: goto label_2219e4;
        case 0x2219e8u: goto label_2219e8;
        case 0x2219ecu: goto label_2219ec;
        case 0x2219f0u: goto label_2219f0;
        case 0x2219f4u: goto label_2219f4;
        case 0x2219f8u: goto label_2219f8;
        case 0x2219fcu: goto label_2219fc;
        case 0x221a00u: goto label_221a00;
        case 0x221a04u: goto label_221a04;
        case 0x221a08u: goto label_221a08;
        case 0x221a0cu: goto label_221a0c;
        case 0x221a10u: goto label_221a10;
        case 0x221a14u: goto label_221a14;
        case 0x221a18u: goto label_221a18;
        case 0x221a1cu: goto label_221a1c;
        case 0x221a20u: goto label_221a20;
        case 0x221a24u: goto label_221a24;
        case 0x221a28u: goto label_221a28;
        case 0x221a2cu: goto label_221a2c;
        case 0x221a30u: goto label_221a30;
        case 0x221a34u: goto label_221a34;
        case 0x221a38u: goto label_221a38;
        case 0x221a3cu: goto label_221a3c;
        case 0x221a40u: goto label_221a40;
        case 0x221a44u: goto label_221a44;
        case 0x221a48u: goto label_221a48;
        case 0x221a4cu: goto label_221a4c;
        case 0x221a50u: goto label_221a50;
        case 0x221a54u: goto label_221a54;
        case 0x221a58u: goto label_221a58;
        case 0x221a5cu: goto label_221a5c;
        case 0x221a60u: goto label_221a60;
        case 0x221a64u: goto label_221a64;
        case 0x221a68u: goto label_221a68;
        case 0x221a6cu: goto label_221a6c;
        case 0x221a70u: goto label_221a70;
        case 0x221a74u: goto label_221a74;
        case 0x221a78u: goto label_221a78;
        case 0x221a7cu: goto label_221a7c;
        case 0x221a80u: goto label_221a80;
        case 0x221a84u: goto label_221a84;
        case 0x221a88u: goto label_221a88;
        case 0x221a8cu: goto label_221a8c;
        case 0x221a90u: goto label_221a90;
        case 0x221a94u: goto label_221a94;
        case 0x221a98u: goto label_221a98;
        case 0x221a9cu: goto label_221a9c;
        case 0x221aa0u: goto label_221aa0;
        case 0x221aa4u: goto label_221aa4;
        case 0x221aa8u: goto label_221aa8;
        case 0x221aacu: goto label_221aac;
        case 0x221ab0u: goto label_221ab0;
        case 0x221ab4u: goto label_221ab4;
        case 0x221ab8u: goto label_221ab8;
        case 0x221abcu: goto label_221abc;
        case 0x221ac0u: goto label_221ac0;
        case 0x221ac4u: goto label_221ac4;
        case 0x221ac8u: goto label_221ac8;
        case 0x221accu: goto label_221acc;
        case 0x221ad0u: goto label_221ad0;
        case 0x221ad4u: goto label_221ad4;
        case 0x221ad8u: goto label_221ad8;
        case 0x221adcu: goto label_221adc;
        case 0x221ae0u: goto label_221ae0;
        case 0x221ae4u: goto label_221ae4;
        case 0x221ae8u: goto label_221ae8;
        case 0x221aecu: goto label_221aec;
        case 0x221af0u: goto label_221af0;
        case 0x221af4u: goto label_221af4;
        case 0x221af8u: goto label_221af8;
        case 0x221afcu: goto label_221afc;
        case 0x221b00u: goto label_221b00;
        case 0x221b04u: goto label_221b04;
        case 0x221b08u: goto label_221b08;
        case 0x221b0cu: goto label_221b0c;
        case 0x221b10u: goto label_221b10;
        case 0x221b14u: goto label_221b14;
        case 0x221b18u: goto label_221b18;
        case 0x221b1cu: goto label_221b1c;
        case 0x221b20u: goto label_221b20;
        case 0x221b24u: goto label_221b24;
        case 0x221b28u: goto label_221b28;
        case 0x221b2cu: goto label_221b2c;
        case 0x221b30u: goto label_221b30;
        case 0x221b34u: goto label_221b34;
        case 0x221b38u: goto label_221b38;
        case 0x221b3cu: goto label_221b3c;
        case 0x221b40u: goto label_221b40;
        case 0x221b44u: goto label_221b44;
        case 0x221b48u: goto label_221b48;
        case 0x221b4cu: goto label_221b4c;
        case 0x221b50u: goto label_221b50;
        case 0x221b54u: goto label_221b54;
        case 0x221b58u: goto label_221b58;
        case 0x221b5cu: goto label_221b5c;
        case 0x221b60u: goto label_221b60;
        case 0x221b64u: goto label_221b64;
        case 0x221b68u: goto label_221b68;
        case 0x221b6cu: goto label_221b6c;
        case 0x221b70u: goto label_221b70;
        case 0x221b74u: goto label_221b74;
        case 0x221b78u: goto label_221b78;
        case 0x221b7cu: goto label_221b7c;
        case 0x221b80u: goto label_221b80;
        case 0x221b84u: goto label_221b84;
        case 0x221b88u: goto label_221b88;
        case 0x221b8cu: goto label_221b8c;
        case 0x221b90u: goto label_221b90;
        case 0x221b94u: goto label_221b94;
        case 0x221b98u: goto label_221b98;
        case 0x221b9cu: goto label_221b9c;
        case 0x221ba0u: goto label_221ba0;
        case 0x221ba4u: goto label_221ba4;
        case 0x221ba8u: goto label_221ba8;
        case 0x221bacu: goto label_221bac;
        case 0x221bb0u: goto label_221bb0;
        case 0x221bb4u: goto label_221bb4;
        case 0x221bb8u: goto label_221bb8;
        case 0x221bbcu: goto label_221bbc;
        case 0x221bc0u: goto label_221bc0;
        case 0x221bc4u: goto label_221bc4;
        case 0x221bc8u: goto label_221bc8;
        case 0x221bccu: goto label_221bcc;
        case 0x221bd0u: goto label_221bd0;
        case 0x221bd4u: goto label_221bd4;
        case 0x221bd8u: goto label_221bd8;
        case 0x221bdcu: goto label_221bdc;
        case 0x221be0u: goto label_221be0;
        case 0x221be4u: goto label_221be4;
        case 0x221be8u: goto label_221be8;
        case 0x221becu: goto label_221bec;
        case 0x221bf0u: goto label_221bf0;
        case 0x221bf4u: goto label_221bf4;
        case 0x221bf8u: goto label_221bf8;
        case 0x221bfcu: goto label_221bfc;
        case 0x221c00u: goto label_221c00;
        case 0x221c04u: goto label_221c04;
        case 0x221c08u: goto label_221c08;
        case 0x221c0cu: goto label_221c0c;
        case 0x221c10u: goto label_221c10;
        case 0x221c14u: goto label_221c14;
        case 0x221c18u: goto label_221c18;
        case 0x221c1cu: goto label_221c1c;
        case 0x221c20u: goto label_221c20;
        case 0x221c24u: goto label_221c24;
        case 0x221c28u: goto label_221c28;
        case 0x221c2cu: goto label_221c2c;
        case 0x221c30u: goto label_221c30;
        case 0x221c34u: goto label_221c34;
        case 0x221c38u: goto label_221c38;
        case 0x221c3cu: goto label_221c3c;
        case 0x221c40u: goto label_221c40;
        case 0x221c44u: goto label_221c44;
        case 0x221c48u: goto label_221c48;
        case 0x221c4cu: goto label_221c4c;
        case 0x221c50u: goto label_221c50;
        case 0x221c54u: goto label_221c54;
        case 0x221c58u: goto label_221c58;
        case 0x221c5cu: goto label_221c5c;
        case 0x221c60u: goto label_221c60;
        case 0x221c64u: goto label_221c64;
        case 0x221c68u: goto label_221c68;
        case 0x221c6cu: goto label_221c6c;
        case 0x221c70u: goto label_221c70;
        case 0x221c74u: goto label_221c74;
        case 0x221c78u: goto label_221c78;
        case 0x221c7cu: goto label_221c7c;
        case 0x221c80u: goto label_221c80;
        case 0x221c84u: goto label_221c84;
        case 0x221c88u: goto label_221c88;
        case 0x221c8cu: goto label_221c8c;
        case 0x221c90u: goto label_221c90;
        case 0x221c94u: goto label_221c94;
        case 0x221c98u: goto label_221c98;
        case 0x221c9cu: goto label_221c9c;
        case 0x221ca0u: goto label_221ca0;
        case 0x221ca4u: goto label_221ca4;
        case 0x221ca8u: goto label_221ca8;
        case 0x221cacu: goto label_221cac;
        case 0x221cb0u: goto label_221cb0;
        case 0x221cb4u: goto label_221cb4;
        case 0x221cb8u: goto label_221cb8;
        case 0x221cbcu: goto label_221cbc;
        case 0x221cc0u: goto label_221cc0;
        case 0x221cc4u: goto label_221cc4;
        case 0x221cc8u: goto label_221cc8;
        case 0x221cccu: goto label_221ccc;
        case 0x221cd0u: goto label_221cd0;
        case 0x221cd4u: goto label_221cd4;
        case 0x221cd8u: goto label_221cd8;
        case 0x221cdcu: goto label_221cdc;
        case 0x221ce0u: goto label_221ce0;
        case 0x221ce4u: goto label_221ce4;
        case 0x221ce8u: goto label_221ce8;
        case 0x221cecu: goto label_221cec;
        case 0x221cf0u: goto label_221cf0;
        case 0x221cf4u: goto label_221cf4;
        case 0x221cf8u: goto label_221cf8;
        case 0x221cfcu: goto label_221cfc;
        case 0x221d00u: goto label_221d00;
        case 0x221d04u: goto label_221d04;
        case 0x221d08u: goto label_221d08;
        case 0x221d0cu: goto label_221d0c;
        case 0x221d10u: goto label_221d10;
        case 0x221d14u: goto label_221d14;
        case 0x221d18u: goto label_221d18;
        case 0x221d1cu: goto label_221d1c;
        case 0x221d20u: goto label_221d20;
        case 0x221d24u: goto label_221d24;
        case 0x221d28u: goto label_221d28;
        case 0x221d2cu: goto label_221d2c;
        case 0x221d30u: goto label_221d30;
        case 0x221d34u: goto label_221d34;
        case 0x221d38u: goto label_221d38;
        case 0x221d3cu: goto label_221d3c;
        default: return;
    }

label_221570:
    // 0x221570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x221570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_221574:
    // 0x221574: 0xc088864  jal         func_222190
label_221578:
    if (ctx->pc == 0x221578u) {
        ctx->pc = 0x221578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221574u;
        // 0x221578: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22157Cu;
        goto label_22157c;
    }
    ctx->pc = 0x221574u;
    SET_GPR_U32(ctx, 31, 0x22157Cu);
    ctx->pc = 0x221578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221574u;
    // 0x221578: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222190u;
    { ctx->pc = 0x222190; return; }
    ctx->pc = 0x22157Cu;
label_22157c:
    // 0x22157c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_221580:
    if (ctx->pc == 0x221580u) {
        ctx->pc = 0x221580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22157Cu;
        // 0x221580: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221584u;
        goto label_221584;
    }
    ctx->pc = 0x22157Cu;
    {
        const bool branch_taken_0x22157c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22157Cu;
        // 0x221580: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22157c) {
            ctx->pc = 0x22158Cu;
            goto label_22158c;
        }
    }
    ctx->pc = 0x221584u;
label_221584:
    // 0x221584: 0x1000000d  b           . + 4 + (0xD << 2)
label_221588:
    if (ctx->pc == 0x221588u) {
        ctx->pc = 0x22158Cu;
        goto label_22158c;
    }
    ctx->pc = 0x221584u;
    {
        const bool branch_taken_0x221584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221584) {
            ctx->pc = 0x2215BCu;
            goto label_2215bc;
        }
    }
    ctx->pc = 0x22158Cu;
label_22158c:
    // 0x22158c: 0x0  nop
    ctx->pc = 0x22158cu;
    // NOP
label_221590:
    // 0x221590: 0xc08894c  jal         func_222530
label_221594:
    if (ctx->pc == 0x221594u) {
        ctx->pc = 0x221594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221590u;
        // 0x221594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221598u;
        goto label_221598;
    }
    ctx->pc = 0x221590u;
    SET_GPR_U32(ctx, 31, 0x221598u);
    ctx->pc = 0x221594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221590u;
    // 0x221594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222530u;
    { ctx->pc = 0x222530; return; }
    ctx->pc = 0x221598u;
label_221598:
    // 0x221598: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22159c:
    if (ctx->pc == 0x22159Cu) {
        ctx->pc = 0x2215A0u;
        goto label_2215a0;
    }
    ctx->pc = 0x221598u;
    {
        const bool branch_taken_0x221598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221598) {
            ctx->pc = 0x2215B0u;
            goto label_2215b0;
        }
    }
    ctx->pc = 0x2215A0u;
label_2215a0:
    // 0x2215a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2215a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2215a4:
    // 0x2215a4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2215a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2215a8:
    // 0x2215a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2215ac:
    if (ctx->pc == 0x2215ACu) {
        ctx->pc = 0x2215ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2215A8u;
        // 0x2215ac: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2215B0u;
        goto label_2215b0;
    }
    ctx->pc = 0x2215A8u;
    {
        const bool branch_taken_0x2215a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2215ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2215A8u;
        // 0x2215ac: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2215a8) {
            ctx->pc = 0x2215BCu;
            goto label_2215bc;
        }
    }
    ctx->pc = 0x2215B0u;
label_2215b0:
    // 0x2215b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2215b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2215b4:
    // 0x2215b4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2215b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2215b8:
    // 0x2215b8: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x2215b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_2215bc:
    // 0x2215bc: 0x0  nop
    ctx->pc = 0x2215bcu;
    // NOP
label_2215c0:
    // 0x2215c0: 0x92460034  lbu         $a2, 0x34($s2)
    ctx->pc = 0x2215c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_2215c4:
    // 0x2215c4: 0x92470035  lbu         $a3, 0x35($s2)
    ctx->pc = 0x2215c4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
label_2215c8:
    // 0x2215c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2215c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2215cc:
    // 0x2215cc: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x2215ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2215d0:
    // 0x2215d0: 0xc05d3e4  jal         func_174F90
label_2215d4:
    if (ctx->pc == 0x2215D4u) {
        ctx->pc = 0x2215D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2215D0u;
        // 0x2215d4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2215D8u;
        goto label_2215d8;
    }
    ctx->pc = 0x2215D0u;
    SET_GPR_U32(ctx, 31, 0x2215D8u);
    ctx->pc = 0x2215D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2215D0u;
    // 0x2215d4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x2215D0u, 0x2215D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215D8u;
label_2215d8:
    // 0x2215d8: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x2215d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_2215dc:
    // 0x2215dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2215dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2215e0:
    // 0x2215e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2215e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2215e4:
    // 0x2215e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2215e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2215e8:
    // 0x2215e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2215e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2215ec:
    // 0x2215ec: 0xc05d3e4  jal         func_174F90
label_2215f0:
    if (ctx->pc == 0x2215F0u) {
        ctx->pc = 0x2215F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2215ECu;
        // 0x2215f0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2215F4u;
        goto label_2215f4;
    }
    ctx->pc = 0x2215ECu;
    SET_GPR_U32(ctx, 31, 0x2215F4u);
    ctx->pc = 0x2215F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2215ECu;
    // 0x2215f0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x2215ECu, 0x2215F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215F4u;
label_2215f4:
    // 0x2215f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2215f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2215f8:
    // 0x2215f8: 0x1000006b  b           . + 4 + (0x6B << 2)
label_2215fc:
    if (ctx->pc == 0x2215FCu) {
        ctx->pc = 0x2215FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2215F8u;
        // 0x2215fc: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221600u;
        goto label_221600;
    }
    ctx->pc = 0x2215F8u;
    {
        const bool branch_taken_0x2215f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2215FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2215F8u;
        // 0x2215fc: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2215f8) {
            ctx->pc = 0x2217A8u;
            goto label_2217a8;
        }
    }
    ctx->pc = 0x221600u;
label_221600:
    // 0x221600: 0xc04485c  jal         func_112170
label_221604:
    if (ctx->pc == 0x221604u) {
        ctx->pc = 0x221604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221600u;
        // 0x221604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221608u;
        goto label_221608;
    }
    ctx->pc = 0x221600u;
    SET_GPR_U32(ctx, 31, 0x221608u);
    ctx->pc = 0x221604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221600u;
    // 0x221604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112170u, 0x221600u, 0x221608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221608u;
label_221608:
    // 0x221608: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_22160c:
    if (ctx->pc == 0x22160Cu) {
        ctx->pc = 0x221610u;
        goto label_221610;
    }
    ctx->pc = 0x221608u;
    {
        const bool branch_taken_0x221608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221608) {
            ctx->pc = 0x2217A8u;
            goto label_2217a8;
        }
    }
    ctx->pc = 0x221610u;
label_221610:
    // 0x221610: 0x92440045  lbu         $a0, 0x45($s2)
    ctx->pc = 0x221610u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
label_221614:
    // 0x221614: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x221614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_221618:
    // 0x221618: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
label_22161c:
    if (ctx->pc == 0x22161Cu) {
        ctx->pc = 0x221620u;
        goto label_221620;
    }
    ctx->pc = 0x221618u;
    {
        const bool branch_taken_0x221618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x221618) {
            ctx->pc = 0x2216BCu;
            goto label_2216bc;
        }
    }
    ctx->pc = 0x221620u;
label_221620:
    // 0x221620: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_221624:
    if (ctx->pc == 0x221624u) {
        ctx->pc = 0x221628u;
        goto label_221628;
    }
    ctx->pc = 0x221620u;
    {
        const bool branch_taken_0x221620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x221620) {
            ctx->pc = 0x221634u;
            goto label_221634;
        }
    }
    ctx->pc = 0x221628u;
label_221628:
    // 0x221628: 0xaf8492d8  sw          $a0, -0x6D28($gp)
    ctx->pc = 0x221628u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939352), GPR_U32(ctx, 4));
label_22162c:
    // 0x22162c: 0xc089738  jal         func_225CE0
label_221630:
    if (ctx->pc == 0x221630u) {
        ctx->pc = 0x221630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22162Cu;
        // 0x221630: 0x92440045  lbu         $a0, 0x45($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221634u;
        goto label_221634;
    }
    ctx->pc = 0x22162Cu;
    SET_GPR_U32(ctx, 31, 0x221634u);
    ctx->pc = 0x221630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22162Cu;
    // 0x221630: 0x92440045  lbu         $a0, 0x45($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225CE0u;
    { ctx->pc = 0x225ce0; return; }
    ctx->pc = 0x221634u;
label_221634:
    // 0x221634: 0x0  nop
    ctx->pc = 0x221634u;
    // NOP
label_221638:
    // 0x221638: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x221638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22163c:
    // 0x22163c: 0xc088864  jal         func_222190
label_221640:
    if (ctx->pc == 0x221640u) {
        ctx->pc = 0x221640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22163Cu;
        // 0x221640: 0x27a500a8  addiu       $a1, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221644u;
        goto label_221644;
    }
    ctx->pc = 0x22163Cu;
    SET_GPR_U32(ctx, 31, 0x221644u);
    ctx->pc = 0x221640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22163Cu;
    // 0x221640: 0x27a500a8  addiu       $a1, $sp, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222190u;
    { ctx->pc = 0x222190; return; }
    ctx->pc = 0x221644u;
label_221644:
    // 0x221644: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_221648:
    if (ctx->pc == 0x221648u) {
        ctx->pc = 0x221648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221644u;
        // 0x221648: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22164Cu;
        goto label_22164c;
    }
    ctx->pc = 0x221644u;
    {
        const bool branch_taken_0x221644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221644u;
        // 0x221648: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221644) {
            ctx->pc = 0x221654u;
            goto label_221654;
        }
    }
    ctx->pc = 0x22164Cu;
label_22164c:
    // 0x22164c: 0x1000000d  b           . + 4 + (0xD << 2)
label_221650:
    if (ctx->pc == 0x221650u) {
        ctx->pc = 0x221654u;
        goto label_221654;
    }
    ctx->pc = 0x22164Cu;
    {
        const bool branch_taken_0x22164c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22164c) {
            ctx->pc = 0x221684u;
            goto label_221684;
        }
    }
    ctx->pc = 0x221654u;
label_221654:
    // 0x221654: 0x0  nop
    ctx->pc = 0x221654u;
    // NOP
label_221658:
    // 0x221658: 0xc08894c  jal         func_222530
label_22165c:
    if (ctx->pc == 0x22165Cu) {
        ctx->pc = 0x22165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221658u;
        // 0x22165c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221660u;
        goto label_221660;
    }
    ctx->pc = 0x221658u;
    SET_GPR_U32(ctx, 31, 0x221660u);
    ctx->pc = 0x22165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221658u;
    // 0x22165c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222530u;
    { ctx->pc = 0x222530; return; }
    ctx->pc = 0x221660u;
label_221660:
    // 0x221660: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_221664:
    if (ctx->pc == 0x221664u) {
        ctx->pc = 0x221668u;
        goto label_221668;
    }
    ctx->pc = 0x221660u;
    {
        const bool branch_taken_0x221660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221660) {
            ctx->pc = 0x221678u;
            goto label_221678;
        }
    }
    ctx->pc = 0x221668u;
label_221668:
    // 0x221668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x221668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22166c:
    // 0x22166c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x22166cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_221670:
    // 0x221670: 0x10000004  b           . + 4 + (0x4 << 2)
label_221674:
    if (ctx->pc == 0x221674u) {
        ctx->pc = 0x221674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221670u;
        // 0x221674: 0xafa200a8  sw          $v0, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221678u;
        goto label_221678;
    }
    ctx->pc = 0x221670u;
    {
        const bool branch_taken_0x221670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221670u;
        // 0x221674: 0xafa200a8  sw          $v0, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221670) {
            ctx->pc = 0x221684u;
            goto label_221684;
        }
    }
    ctx->pc = 0x221678u;
label_221678:
    // 0x221678: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x221678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22167c:
    // 0x22167c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x22167cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_221680:
    // 0x221680: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x221680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_221684:
    // 0x221684: 0x0  nop
    ctx->pc = 0x221684u;
    // NOP
label_221688:
    // 0x221688: 0x92460034  lbu         $a2, 0x34($s2)
    ctx->pc = 0x221688u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_22168c:
    // 0x22168c: 0x92470035  lbu         $a3, 0x35($s2)
    ctx->pc = 0x22168cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
label_221690:
    // 0x221690: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221690u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221694:
    // 0x221694: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x221694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_221698:
    // 0x221698: 0xc05d3e4  jal         func_174F90
label_22169c:
    if (ctx->pc == 0x22169Cu) {
        ctx->pc = 0x22169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221698u;
        // 0x22169c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2216A0u;
        goto label_2216a0;
    }
    ctx->pc = 0x221698u;
    SET_GPR_U32(ctx, 31, 0x2216A0u);
    ctx->pc = 0x22169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221698u;
    // 0x22169c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x221698u, 0x2216A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216A0u;
label_2216a0:
    // 0x2216a0: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x2216a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_2216a4:
    // 0x2216a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2216a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2216a8:
    // 0x2216a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2216a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2216ac:
    // 0x2216ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2216acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2216b0:
    // 0x2216b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2216b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2216b4:
    // 0x2216b4: 0xc05d3e4  jal         func_174F90
label_2216b8:
    if (ctx->pc == 0x2216B8u) {
        ctx->pc = 0x2216B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216B4u;
        // 0x2216b8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2216BCu;
        goto label_2216bc;
    }
    ctx->pc = 0x2216B4u;
    SET_GPR_U32(ctx, 31, 0x2216BCu);
    ctx->pc = 0x2216B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2216B4u;
    // 0x2216b8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x2216B4u, 0x2216BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216BCu;
label_2216bc:
    // 0x2216bc: 0x0  nop
    ctx->pc = 0x2216bcu;
    // NOP
label_2216c0:
    // 0x2216c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2216c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2216c4:
    // 0x2216c4: 0x10000038  b           . + 4 + (0x38 << 2)
label_2216c8:
    if (ctx->pc == 0x2216C8u) {
        ctx->pc = 0x2216C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216C4u;
        // 0x2216c8: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2216CCu;
        goto label_2216cc;
    }
    ctx->pc = 0x2216C4u;
    {
        const bool branch_taken_0x2216c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2216C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216C4u;
        // 0x2216c8: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216c4) {
            ctx->pc = 0x2217A8u;
            goto label_2217a8;
        }
    }
    ctx->pc = 0x2216CCu;
label_2216cc:
    // 0x2216cc: 0x0  nop
    ctx->pc = 0x2216ccu;
    // NOP
label_2216d0:
    // 0x2216d0: 0x92440034  lbu         $a0, 0x34($s2)
    ctx->pc = 0x2216d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_2216d4:
    // 0x2216d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2216d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2216d8:
    // 0x2216d8: 0x14830033  bne         $a0, $v1, . + 4 + (0x33 << 2)
label_2216dc:
    if (ctx->pc == 0x2216DCu) {
        ctx->pc = 0x2216DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216D8u;
        // 0x2216dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2216E0u;
        goto label_2216e0;
    }
    ctx->pc = 0x2216D8u;
    {
        const bool branch_taken_0x2216d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2216DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216D8u;
        // 0x2216dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216d8) {
            ctx->pc = 0x2217A8u;
            goto label_2217a8;
        }
    }
    ctx->pc = 0x2216E0u;
label_2216e0:
    // 0x2216e0: 0xc04485c  jal         func_112170
label_2216e4:
    if (ctx->pc == 0x2216E4u) {
        ctx->pc = 0x2216E8u;
        goto label_2216e8;
    }
    ctx->pc = 0x2216E0u;
    SET_GPR_U32(ctx, 31, 0x2216E8u);
    ctx->pc = 0x112170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112170u, 0x2216E0u, 0x2216E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216E8u;
label_2216e8:
    // 0x2216e8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_2216ec:
    if (ctx->pc == 0x2216ECu) {
        ctx->pc = 0x2216F0u;
        goto label_2216f0;
    }
    ctx->pc = 0x2216E8u;
    {
        const bool branch_taken_0x2216e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2216e8) {
            ctx->pc = 0x2217A8u;
            goto label_2217a8;
        }
    }
    ctx->pc = 0x2216F0u;
label_2216f0:
    // 0x2216f0: 0x92440045  lbu         $a0, 0x45($s2)
    ctx->pc = 0x2216f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
label_2216f4:
    // 0x2216f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2216f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2216f8:
    // 0x2216f8: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
label_2216fc:
    if (ctx->pc == 0x2216FCu) {
        ctx->pc = 0x221700u;
        goto label_221700;
    }
    ctx->pc = 0x2216F8u;
    {
        const bool branch_taken_0x2216f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2216f8) {
            ctx->pc = 0x22179Cu;
            goto label_22179c;
        }
    }
    ctx->pc = 0x221700u;
label_221700:
    // 0x221700: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_221704:
    if (ctx->pc == 0x221704u) {
        ctx->pc = 0x221708u;
        goto label_221708;
    }
    ctx->pc = 0x221700u;
    {
        const bool branch_taken_0x221700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x221700) {
            ctx->pc = 0x221714u;
            goto label_221714;
        }
    }
    ctx->pc = 0x221708u;
label_221708:
    // 0x221708: 0xaf8492d8  sw          $a0, -0x6D28($gp)
    ctx->pc = 0x221708u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939352), GPR_U32(ctx, 4));
label_22170c:
    // 0x22170c: 0xc089738  jal         func_225CE0
label_221710:
    if (ctx->pc == 0x221710u) {
        ctx->pc = 0x221710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22170Cu;
        // 0x221710: 0x92440045  lbu         $a0, 0x45($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221714u;
        goto label_221714;
    }
    ctx->pc = 0x22170Cu;
    SET_GPR_U32(ctx, 31, 0x221714u);
    ctx->pc = 0x221710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22170Cu;
    // 0x221710: 0x92440045  lbu         $a0, 0x45($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225CE0u;
    { ctx->pc = 0x225ce0; return; }
    ctx->pc = 0x221714u;
label_221714:
    // 0x221714: 0x0  nop
    ctx->pc = 0x221714u;
    // NOP
label_221718:
    // 0x221718: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x221718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22171c:
    // 0x22171c: 0xc088864  jal         func_222190
label_221720:
    if (ctx->pc == 0x221720u) {
        ctx->pc = 0x221720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22171Cu;
        // 0x221720: 0x27a500ac  addiu       $a1, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221724u;
        goto label_221724;
    }
    ctx->pc = 0x22171Cu;
    SET_GPR_U32(ctx, 31, 0x221724u);
    ctx->pc = 0x221720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22171Cu;
    // 0x221720: 0x27a500ac  addiu       $a1, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222190u;
    { ctx->pc = 0x222190; return; }
    ctx->pc = 0x221724u;
label_221724:
    // 0x221724: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_221728:
    if (ctx->pc == 0x221728u) {
        ctx->pc = 0x221728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221724u;
        // 0x221728: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22172Cu;
        goto label_22172c;
    }
    ctx->pc = 0x221724u;
    {
        const bool branch_taken_0x221724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221724u;
        // 0x221728: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221724) {
            ctx->pc = 0x221734u;
            goto label_221734;
        }
    }
    ctx->pc = 0x22172Cu;
label_22172c:
    // 0x22172c: 0x1000000d  b           . + 4 + (0xD << 2)
label_221730:
    if (ctx->pc == 0x221730u) {
        ctx->pc = 0x221734u;
        goto label_221734;
    }
    ctx->pc = 0x22172Cu;
    {
        const bool branch_taken_0x22172c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22172c) {
            ctx->pc = 0x221764u;
            goto label_221764;
        }
    }
    ctx->pc = 0x221734u;
label_221734:
    // 0x221734: 0x0  nop
    ctx->pc = 0x221734u;
    // NOP
label_221738:
    // 0x221738: 0xc08894c  jal         func_222530
label_22173c:
    if (ctx->pc == 0x22173Cu) {
        ctx->pc = 0x22173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221738u;
        // 0x22173c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221740u;
        goto label_221740;
    }
    ctx->pc = 0x221738u;
    SET_GPR_U32(ctx, 31, 0x221740u);
    ctx->pc = 0x22173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221738u;
    // 0x22173c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222530u;
    { ctx->pc = 0x222530; return; }
    ctx->pc = 0x221740u;
label_221740:
    // 0x221740: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_221744:
    if (ctx->pc == 0x221744u) {
        ctx->pc = 0x221748u;
        goto label_221748;
    }
    ctx->pc = 0x221740u;
    {
        const bool branch_taken_0x221740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221740) {
            ctx->pc = 0x221758u;
            goto label_221758;
        }
    }
    ctx->pc = 0x221748u;
label_221748:
    // 0x221748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x221748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22174c:
    // 0x22174c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x22174cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_221750:
    // 0x221750: 0x10000004  b           . + 4 + (0x4 << 2)
label_221754:
    if (ctx->pc == 0x221754u) {
        ctx->pc = 0x221754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221750u;
        // 0x221754: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221758u;
        goto label_221758;
    }
    ctx->pc = 0x221750u;
    {
        const bool branch_taken_0x221750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221750u;
        // 0x221754: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221750) {
            ctx->pc = 0x221764u;
            goto label_221764;
        }
    }
    ctx->pc = 0x221758u;
label_221758:
    // 0x221758: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x221758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22175c:
    // 0x22175c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x22175cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_221760:
    // 0x221760: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x221760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_221764:
    // 0x221764: 0x0  nop
    ctx->pc = 0x221764u;
    // NOP
label_221768:
    // 0x221768: 0x92460034  lbu         $a2, 0x34($s2)
    ctx->pc = 0x221768u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_22176c:
    // 0x22176c: 0x92470035  lbu         $a3, 0x35($s2)
    ctx->pc = 0x22176cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
label_221770:
    // 0x221770: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221770u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221774:
    // 0x221774: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x221774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_221778:
    // 0x221778: 0xc05d3e4  jal         func_174F90
label_22177c:
    if (ctx->pc == 0x22177Cu) {
        ctx->pc = 0x22177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221778u;
        // 0x22177c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221780u;
        goto label_221780;
    }
    ctx->pc = 0x221778u;
    SET_GPR_U32(ctx, 31, 0x221780u);
    ctx->pc = 0x22177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221778u;
    // 0x22177c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x221778u, 0x221780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221780u;
label_221780:
    // 0x221780: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x221780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_221784:
    // 0x221784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x221784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221788:
    // 0x221788: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22178c:
    // 0x22178c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22178cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221790:
    // 0x221790: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x221790u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221794:
    // 0x221794: 0xc05d3e4  jal         func_174F90
label_221798:
    if (ctx->pc == 0x221798u) {
        ctx->pc = 0x221798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221794u;
        // 0x221798: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22179Cu;
        goto label_22179c;
    }
    ctx->pc = 0x221794u;
    SET_GPR_U32(ctx, 31, 0x22179Cu);
    ctx->pc = 0x221798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221794u;
    // 0x221798: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x221794u, 0x22179Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22179Cu;
label_22179c:
    // 0x22179c: 0x0  nop
    ctx->pc = 0x22179cu;
    // NOP
label_2217a0:
    // 0x2217a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2217a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2217a4:
    // 0x2217a4: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x2217a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_2217a8:
    // 0x2217a8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2217a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2217ac:
    // 0x2217ac: 0x2aa3000c  slti        $v1, $s5, 0xC
    ctx->pc = 0x2217acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)12) ? 1 : 0);
label_2217b0:
    // 0x2217b0: 0x1460fee9  bnez        $v1, . + 4 + (-0x117 << 2)
label_2217b4:
    if (ctx->pc == 0x2217B4u) {
        ctx->pc = 0x2217B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217B0u;
        // 0x2217b4: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2217B8u;
        goto label_2217b8;
    }
    ctx->pc = 0x2217B0u;
    {
        const bool branch_taken_0x2217b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2217B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217B0u;
        // 0x2217b4: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2217b0) {
            ctx->pc = 0x221358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x221358; return; }
        }
    }
    ctx->pc = 0x2217B8u;
label_2217b8:
    // 0x2217b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2217b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2217bc:
    // 0x2217bc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2217bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2217c0:
    // 0x2217c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2217c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2217c4:
    // 0x2217c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2217c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2217c8:
    // 0x2217c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2217c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2217cc:
    // 0x2217cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2217ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2217d0:
    // 0x2217d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2217d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2217d4:
    // 0x2217d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2217d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2217d8:
    // 0x2217d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2217d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2217dc:
    // 0x2217dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2217dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2217e0:
    // 0x2217e0: 0x3e00008  jr          $ra
label_2217e4:
    if (ctx->pc == 0x2217E4u) {
        ctx->pc = 0x2217E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217E0u;
        // 0x2217e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2217E8u;
        goto label_2217e8;
    }
    ctx->pc = 0x2217E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2217E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217E0u;
        // 0x2217e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2217E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2217E8u;
label_2217e8:
    // 0x2217e8: 0x0  nop
    ctx->pc = 0x2217e8u;
    // NOP
label_2217ec:
    // 0x2217ec: 0x0  nop
    ctx->pc = 0x2217ecu;
    // NOP
label_2217f0:
    // 0x2217f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2217f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2217f4:
    // 0x2217f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2217f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2217f8:
    // 0x2217f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2217f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2217fc:
    // 0x2217fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2217fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_221800:
    // 0x221800: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x221800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_221804:
    // 0x221804: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x221804u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_221808:
    // 0x221808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x221808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22180c:
    // 0x22180c: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x22180cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_221810:
    // 0x221810: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x221810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_221814:
    // 0x221814: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x221814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221818:
    // 0x221818: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x221818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_22181c:
    // 0x22181c: 0x1064021c  beq         $v1, $a0, . + 4 + (0x21C << 2)
label_221820:
    if (ctx->pc == 0x221820u) {
        ctx->pc = 0x221820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22181Cu;
        // 0x221820: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221824u;
        goto label_221824;
    }
    ctx->pc = 0x22181Cu;
    {
        const bool branch_taken_0x22181c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x221820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22181Cu;
        // 0x221820: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22181c) {
            ctx->pc = 0x222090u;
            { ctx->pc = 0x222090; return; }
        }
    }
    ctx->pc = 0x221824u;
label_221824:
    // 0x221824: 0x24040059  addiu       $a0, $zero, 0x59
    ctx->pc = 0x221824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_221828:
    // 0x221828: 0x1064020c  beq         $v1, $a0, . + 4 + (0x20C << 2)
label_22182c:
    if (ctx->pc == 0x22182Cu) {
        ctx->pc = 0x22182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221828u;
        // 0x22182c: 0x24040057  addiu       $a0, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221830u;
        goto label_221830;
    }
    ctx->pc = 0x221828u;
    {
        const bool branch_taken_0x221828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x22182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221828u;
        // 0x22182c: 0x24040057  addiu       $a0, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221828) {
            ctx->pc = 0x22205Cu;
            { ctx->pc = 0x22205c; return; }
        }
    }
    ctx->pc = 0x221830u;
label_221830:
    // 0x221830: 0x106401fd  beq         $v1, $a0, . + 4 + (0x1FD << 2)
label_221834:
    if (ctx->pc == 0x221834u) {
        ctx->pc = 0x221838u;
        goto label_221838;
    }
    ctx->pc = 0x221830u;
    {
        const bool branch_taken_0x221830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x221830) {
            ctx->pc = 0x222028u;
            { ctx->pc = 0x222028; return; }
        }
    }
    ctx->pc = 0x221838u;
label_221838:
    // 0x221838: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x221838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_22183c:
    // 0x22183c: 0x106401ed  beq         $v1, $a0, . + 4 + (0x1ED << 2)
label_221840:
    if (ctx->pc == 0x221840u) {
        ctx->pc = 0x221840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22183Cu;
        // 0x221840: 0x2404004b  addiu       $a0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221844u;
        goto label_221844;
    }
    ctx->pc = 0x22183Cu;
    {
        const bool branch_taken_0x22183c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x221840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22183Cu;
        // 0x221840: 0x2404004b  addiu       $a0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22183c) {
            ctx->pc = 0x221FF4u;
            { ctx->pc = 0x221ff4; return; }
        }
    }
    ctx->pc = 0x221844u;
label_221844:
    // 0x221844: 0x106401de  beq         $v1, $a0, . + 4 + (0x1DE << 2)
label_221848:
    if (ctx->pc == 0x221848u) {
        ctx->pc = 0x22184Cu;
        goto label_22184c;
    }
    ctx->pc = 0x221844u;
    {
        const bool branch_taken_0x221844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x221844) {
            ctx->pc = 0x221FC0u;
            { ctx->pc = 0x221fc0; return; }
        }
    }
    ctx->pc = 0x22184Cu;
label_22184c:
    // 0x22184c: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x22184cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_221850:
    // 0x221850: 0x106401ca  beq         $v1, $a0, . + 4 + (0x1CA << 2)
label_221854:
    if (ctx->pc == 0x221854u) {
        ctx->pc = 0x221854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221850u;
        // 0x221854: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221858u;
        goto label_221858;
    }
    ctx->pc = 0x221850u;
    {
        const bool branch_taken_0x221850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x221854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221850u;
        // 0x221854: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221850) {
            ctx->pc = 0x221F7Cu;
            { ctx->pc = 0x221f7c; return; }
        }
    }
    ctx->pc = 0x221858u;
label_221858:
    // 0x221858: 0x106401ae  beq         $v1, $a0, . + 4 + (0x1AE << 2)
label_22185c:
    if (ctx->pc == 0x22185Cu) {
        ctx->pc = 0x221860u;
        goto label_221860;
    }
    ctx->pc = 0x221858u;
    {
        const bool branch_taken_0x221858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x221858) {
            ctx->pc = 0x221F14u;
            { ctx->pc = 0x221f14; return; }
        }
    }
    ctx->pc = 0x221860u;
label_221860:
    // 0x221860: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x221860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_221864:
    // 0x221864: 0x10640179  beq         $v1, $a0, . + 4 + (0x179 << 2)
label_221868:
    if (ctx->pc == 0x221868u) {
        ctx->pc = 0x221868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221864u;
        // 0x221868: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22186Cu;
        goto label_22186c;
    }
    ctx->pc = 0x221864u;
    {
        const bool branch_taken_0x221864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x221868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221864u;
        // 0x221868: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221864) {
            ctx->pc = 0x221E4Cu;
            { ctx->pc = 0x221e4c; return; }
        }
    }
    ctx->pc = 0x22186Cu;
label_22186c:
    // 0x22186c: 0x10640146  beq         $v1, $a0, . + 4 + (0x146 << 2)
label_221870:
    if (ctx->pc == 0x221870u) {
        ctx->pc = 0x221874u;
        goto label_221874;
    }
    ctx->pc = 0x22186Cu;
    {
        const bool branch_taken_0x22186c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x22186c) {
            ctx->pc = 0x221D88u;
            { ctx->pc = 0x221d88; return; }
        }
    }
    ctx->pc = 0x221874u;
label_221874:
    // 0x221874: 0x2404003e  addiu       $a0, $zero, 0x3E
    ctx->pc = 0x221874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_221878:
    // 0x221878: 0x10640131  beq         $v1, $a0, . + 4 + (0x131 << 2)
label_22187c:
    if (ctx->pc == 0x22187Cu) {
        ctx->pc = 0x22187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221878u;
        // 0x22187c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221880u;
        goto label_221880;
    }
    ctx->pc = 0x221878u;
    {
        const bool branch_taken_0x221878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x22187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221878u;
        // 0x22187c: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221878) {
            ctx->pc = 0x221D40u;
            { ctx->pc = 0x221d40; return; }
        }
    }
    ctx->pc = 0x221880u;
label_221880:
    // 0x221880: 0x10640122  beq         $v1, $a0, . + 4 + (0x122 << 2)
label_221884:
    if (ctx->pc == 0x221884u) {
        ctx->pc = 0x221888u;
        goto label_221888;
    }
    ctx->pc = 0x221880u;
    {
        const bool branch_taken_0x221880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x221880) {
            ctx->pc = 0x221D0Cu;
            goto label_221d0c;
        }
    }
    ctx->pc = 0x221888u;
label_221888:
    // 0x221888: 0x2404003a  addiu       $a0, $zero, 0x3A
    ctx->pc = 0x221888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_22188c:
    // 0x22188c: 0x10640110  beq         $v1, $a0, . + 4 + (0x110 << 2)
label_221890:
    if (ctx->pc == 0x221890u) {
        ctx->pc = 0x221890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22188Cu;
        // 0x221890: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221894u;
        goto label_221894;
    }
    ctx->pc = 0x22188Cu;
    {
        const bool branch_taken_0x22188c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x221890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22188Cu;
        // 0x221890: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22188c) {
            ctx->pc = 0x221CD0u;
            goto label_221cd0;
        }
    }
    ctx->pc = 0x221894u;
label_221894:
    // 0x221894: 0x10640106  beq         $v1, $a0, . + 4 + (0x106 << 2)
label_221898:
    if (ctx->pc == 0x221898u) {
        ctx->pc = 0x22189Cu;
        goto label_22189c;
    }
    ctx->pc = 0x221894u;
    {
        const bool branch_taken_0x221894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x221894) {
            ctx->pc = 0x221CB0u;
            goto label_221cb0;
        }
    }
    ctx->pc = 0x22189Cu;
label_22189c:
    // 0x22189c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x22189cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2218a0:
    // 0x2218a0: 0x106400f3  beq         $v1, $a0, . + 4 + (0xF3 << 2)
label_2218a4:
    if (ctx->pc == 0x2218A4u) {
        ctx->pc = 0x2218A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218A0u;
        // 0x2218a4: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2218A8u;
        goto label_2218a8;
    }
    ctx->pc = 0x2218A0u;
    {
        const bool branch_taken_0x2218a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2218A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218A0u;
        // 0x2218a4: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218a0) {
            ctx->pc = 0x221C70u;
            goto label_221c70;
        }
    }
    ctx->pc = 0x2218A8u;
label_2218a8:
    // 0x2218a8: 0x106400e1  beq         $v1, $a0, . + 4 + (0xE1 << 2)
label_2218ac:
    if (ctx->pc == 0x2218ACu) {
        ctx->pc = 0x2218B0u;
        goto label_2218b0;
    }
    ctx->pc = 0x2218A8u;
    {
        const bool branch_taken_0x2218a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2218a8) {
            ctx->pc = 0x221C30u;
            goto label_221c30;
        }
    }
    ctx->pc = 0x2218B0u;
label_2218b0:
    // 0x2218b0: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x2218b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_2218b4:
    // 0x2218b4: 0x106400c7  beq         $v1, $a0, . + 4 + (0xC7 << 2)
label_2218b8:
    if (ctx->pc == 0x2218B8u) {
        ctx->pc = 0x2218B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218B4u;
        // 0x2218b8: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2218BCu;
        goto label_2218bc;
    }
    ctx->pc = 0x2218B4u;
    {
        const bool branch_taken_0x2218b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2218B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218B4u;
        // 0x2218b8: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218b4) {
            ctx->pc = 0x221BD4u;
            goto label_221bd4;
        }
    }
    ctx->pc = 0x2218BCu;
label_2218bc:
    // 0x2218bc: 0x106400b8  beq         $v1, $a0, . + 4 + (0xB8 << 2)
label_2218c0:
    if (ctx->pc == 0x2218C0u) {
        ctx->pc = 0x2218C4u;
        goto label_2218c4;
    }
    ctx->pc = 0x2218BCu;
    {
        const bool branch_taken_0x2218bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2218bc) {
            ctx->pc = 0x221BA0u;
            goto label_221ba0;
        }
    }
    ctx->pc = 0x2218C4u;
label_2218c4:
    // 0x2218c4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x2218c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_2218c8:
    // 0x2218c8: 0x106400a8  beq         $v1, $a0, . + 4 + (0xA8 << 2)
label_2218cc:
    if (ctx->pc == 0x2218CCu) {
        ctx->pc = 0x2218CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218C8u;
        // 0x2218cc: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2218D0u;
        goto label_2218d0;
    }
    ctx->pc = 0x2218C8u;
    {
        const bool branch_taken_0x2218c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2218CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218C8u;
        // 0x2218cc: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218c8) {
            ctx->pc = 0x221B6Cu;
            goto label_221b6c;
        }
    }
    ctx->pc = 0x2218D0u;
label_2218d0:
    // 0x2218d0: 0x106400a6  beq         $v1, $a0, . + 4 + (0xA6 << 2)
label_2218d4:
    if (ctx->pc == 0x2218D4u) {
        ctx->pc = 0x2218D8u;
        goto label_2218d8;
    }
    ctx->pc = 0x2218D0u;
    {
        const bool branch_taken_0x2218d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2218d0) {
            ctx->pc = 0x221B6Cu;
            goto label_221b6c;
        }
    }
    ctx->pc = 0x2218D8u;
label_2218d8:
    // 0x2218d8: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x2218d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2218dc:
    // 0x2218dc: 0x10640096  beq         $v1, $a0, . + 4 + (0x96 << 2)
label_2218e0:
    if (ctx->pc == 0x2218E0u) {
        ctx->pc = 0x2218E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218DCu;
        // 0x2218e0: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2218E4u;
        goto label_2218e4;
    }
    ctx->pc = 0x2218DCu;
    {
        const bool branch_taken_0x2218dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2218E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218DCu;
        // 0x2218e0: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218dc) {
            ctx->pc = 0x221B38u;
            goto label_221b38;
        }
    }
    ctx->pc = 0x2218E4u;
label_2218e4:
    // 0x2218e4: 0x10640087  beq         $v1, $a0, . + 4 + (0x87 << 2)
label_2218e8:
    if (ctx->pc == 0x2218E8u) {
        ctx->pc = 0x2218E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218E4u;
        // 0x2218e8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2218ECu;
        goto label_2218ec;
    }
    ctx->pc = 0x2218E4u;
    {
        const bool branch_taken_0x2218e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2218E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218E4u;
        // 0x2218e8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218e4) {
            ctx->pc = 0x221B04u;
            goto label_221b04;
        }
    }
    ctx->pc = 0x2218ECu;
label_2218ec:
    // 0x2218ec: 0x10650078  beq         $v1, $a1, . + 4 + (0x78 << 2)
label_2218f0:
    if (ctx->pc == 0x2218F0u) {
        ctx->pc = 0x2218F4u;
        goto label_2218f4;
    }
    ctx->pc = 0x2218ECu;
    {
        const bool branch_taken_0x2218ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2218ec) {
            ctx->pc = 0x221AD0u;
            goto label_221ad0;
        }
    }
    ctx->pc = 0x2218F4u;
label_2218f4:
    // 0x2218f4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2218f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2218f8:
    // 0x2218f8: 0x10650069  beq         $v1, $a1, . + 4 + (0x69 << 2)
label_2218fc:
    if (ctx->pc == 0x2218FCu) {
        ctx->pc = 0x2218FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218F8u;
        // 0x2218fc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221900u;
        goto label_221900;
    }
    ctx->pc = 0x2218F8u;
    {
        const bool branch_taken_0x2218f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2218FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218F8u;
        // 0x2218fc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218f8) {
            ctx->pc = 0x221AA0u;
            goto label_221aa0;
        }
    }
    ctx->pc = 0x221900u;
label_221900:
    // 0x221900: 0x1066005b  beq         $v1, $a2, . + 4 + (0x5B << 2)
label_221904:
    if (ctx->pc == 0x221904u) {
        ctx->pc = 0x221904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221900u;
        // 0x221904: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221908u;
        goto label_221908;
    }
    ctx->pc = 0x221900u;
    {
        const bool branch_taken_0x221900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x221904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221900u;
        // 0x221904: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221900) {
            ctx->pc = 0x221A70u;
            goto label_221a70;
        }
    }
    ctx->pc = 0x221908u;
label_221908:
    // 0x221908: 0x1065004d  beq         $v1, $a1, . + 4 + (0x4D << 2)
label_22190c:
    if (ctx->pc == 0x22190Cu) {
        ctx->pc = 0x221910u;
        goto label_221910;
    }
    ctx->pc = 0x221908u;
    {
        const bool branch_taken_0x221908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x221908) {
            ctx->pc = 0x221A40u;
            goto label_221a40;
        }
    }
    ctx->pc = 0x221910u;
label_221910:
    // 0x221910: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x221910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_221914:
    // 0x221914: 0x1065003f  beq         $v1, $a1, . + 4 + (0x3F << 2)
label_221918:
    if (ctx->pc == 0x221918u) {
        ctx->pc = 0x221918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221914u;
        // 0x221918: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22191Cu;
        goto label_22191c;
    }
    ctx->pc = 0x221914u;
    {
        const bool branch_taken_0x221914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x221918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221914u;
        // 0x221918: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221914) {
            ctx->pc = 0x221A14u;
            goto label_221a14;
        }
    }
    ctx->pc = 0x22191Cu;
label_22191c:
    // 0x22191c: 0x10650031  beq         $v1, $a1, . + 4 + (0x31 << 2)
label_221920:
    if (ctx->pc == 0x221920u) {
        ctx->pc = 0x221924u;
        goto label_221924;
    }
    ctx->pc = 0x22191Cu;
    {
        const bool branch_taken_0x22191c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x22191c) {
            ctx->pc = 0x2219E4u;
            goto label_2219e4;
        }
    }
    ctx->pc = 0x221924u;
label_221924:
    // 0x221924: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x221924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_221928:
    // 0x221928: 0x10650021  beq         $v1, $a1, . + 4 + (0x21 << 2)
label_22192c:
    if (ctx->pc == 0x22192Cu) {
        ctx->pc = 0x22192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221928u;
        // 0x22192c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221930u;
        goto label_221930;
    }
    ctx->pc = 0x221928u;
    {
        const bool branch_taken_0x221928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x22192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221928u;
        // 0x22192c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221928) {
            ctx->pc = 0x2219B0u;
            goto label_2219b0;
        }
    }
    ctx->pc = 0x221930u;
label_221930:
    // 0x221930: 0x10650012  beq         $v1, $a1, . + 4 + (0x12 << 2)
label_221934:
    if (ctx->pc == 0x221934u) {
        ctx->pc = 0x221938u;
        goto label_221938;
    }
    ctx->pc = 0x221930u;
    {
        const bool branch_taken_0x221930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x221930) {
            ctx->pc = 0x22197Cu;
            goto label_22197c;
        }
    }
    ctx->pc = 0x221938u;
label_221938:
    // 0x221938: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x221938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22193c:
    // 0x22193c: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
label_221940:
    if (ctx->pc == 0x221940u) {
        ctx->pc = 0x221944u;
        goto label_221944;
    }
    ctx->pc = 0x22193Cu;
    {
        const bool branch_taken_0x22193c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x22193c) {
            ctx->pc = 0x22194Cu;
            goto label_22194c;
        }
    }
    ctx->pc = 0x221944u;
label_221944:
    // 0x221944: 0x100001fd  b           . + 4 + (0x1FD << 2)
label_221948:
    if (ctx->pc == 0x221948u) {
        ctx->pc = 0x22194Cu;
        goto label_22194c;
    }
    ctx->pc = 0x221944u;
    {
        const bool branch_taken_0x221944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221944) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x22194Cu;
label_22194c:
    // 0x22194c: 0xc056ff8  jal         func_15BFE0
label_221950:
    if (ctx->pc == 0x221950u) {
        ctx->pc = 0x221950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22194Cu;
        // 0x221950: 0x8f8592d8  lw          $a1, -0x6D28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221954u;
        goto label_221954;
    }
    ctx->pc = 0x22194Cu;
    SET_GPR_U32(ctx, 31, 0x221954u);
    ctx->pc = 0x221950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22194Cu;
    // 0x221950: 0x8f8592d8  lw          $a1, -0x6D28($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x22194Cu, 0x221954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221954u;
label_221954:
    // 0x221954: 0x104001f9  beqz        $v0, . + 4 + (0x1F9 << 2)
label_221958:
    if (ctx->pc == 0x221958u) {
        ctx->pc = 0x22195Cu;
        goto label_22195c;
    }
    ctx->pc = 0x221954u;
    {
        const bool branch_taken_0x221954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221954) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x22195Cu;
label_22195c:
    // 0x22195c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x22195cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221960:
    // 0x221960: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x221960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_221964:
    // 0x221964: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x221964u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221968:
    // 0x221968: 0x148301f4  bne         $a0, $v1, . + 4 + (0x1F4 << 2)
label_22196c:
    if (ctx->pc == 0x22196Cu) {
        ctx->pc = 0x221970u;
        goto label_221970;
    }
    ctx->pc = 0x221968u;
    {
        const bool branch_taken_0x221968 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221968) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221970u;
label_221970:
    // 0x221970: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x221970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_221974:
    // 0x221974: 0x100001f1  b           . + 4 + (0x1F1 << 2)
label_221978:
    if (ctx->pc == 0x221978u) {
        ctx->pc = 0x221978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221974u;
        // 0x221978: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22197Cu;
        goto label_22197c;
    }
    ctx->pc = 0x221974u;
    {
        const bool branch_taken_0x221974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221974u;
        // 0x221978: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221974) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x22197Cu;
label_22197c:
    // 0x22197c: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x22197cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221980:
    // 0x221980: 0xc056ff8  jal         func_15BFE0
label_221984:
    if (ctx->pc == 0x221984u) {
        ctx->pc = 0x221984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221980u;
        // 0x221984: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221988u;
        goto label_221988;
    }
    ctx->pc = 0x221980u;
    SET_GPR_U32(ctx, 31, 0x221988u);
    ctx->pc = 0x221984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221980u;
    // 0x221984: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221980u, 0x221988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221988u;
label_221988:
    // 0x221988: 0x104001ec  beqz        $v0, . + 4 + (0x1EC << 2)
label_22198c:
    if (ctx->pc == 0x22198Cu) {
        ctx->pc = 0x221990u;
        goto label_221990;
    }
    ctx->pc = 0x221988u;
    {
        const bool branch_taken_0x221988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221988) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221990u;
label_221990:
    // 0x221990: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x221990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221994:
    // 0x221994: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x221994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_221998:
    // 0x221998: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x221998u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_22199c:
    // 0x22199c: 0x148301e7  bne         $a0, $v1, . + 4 + (0x1E7 << 2)
label_2219a0:
    if (ctx->pc == 0x2219A0u) {
        ctx->pc = 0x2219A4u;
        goto label_2219a4;
    }
    ctx->pc = 0x22199Cu;
    {
        const bool branch_taken_0x22199c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22199c) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x2219A4u;
label_2219a4:
    // 0x2219a4: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x2219a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2219a8:
    // 0x2219a8: 0x100001e4  b           . + 4 + (0x1E4 << 2)
label_2219ac:
    if (ctx->pc == 0x2219ACu) {
        ctx->pc = 0x2219ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219A8u;
        // 0x2219ac: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2219B0u;
        goto label_2219b0;
    }
    ctx->pc = 0x2219A8u;
    {
        const bool branch_taken_0x2219a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2219ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219A8u;
        // 0x2219ac: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219a8) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x2219B0u;
label_2219b0:
    // 0x2219b0: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x2219b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_2219b4:
    // 0x2219b4: 0xc056ff8  jal         func_15BFE0
label_2219b8:
    if (ctx->pc == 0x2219B8u) {
        ctx->pc = 0x2219B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219B4u;
        // 0x2219b8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2219BCu;
        goto label_2219bc;
    }
    ctx->pc = 0x2219B4u;
    SET_GPR_U32(ctx, 31, 0x2219BCu);
    ctx->pc = 0x2219B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2219B4u;
    // 0x2219b8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x2219B4u, 0x2219BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2219BCu;
label_2219bc:
    // 0x2219bc: 0x104001df  beqz        $v0, . + 4 + (0x1DF << 2)
label_2219c0:
    if (ctx->pc == 0x2219C0u) {
        ctx->pc = 0x2219C4u;
        goto label_2219c4;
    }
    ctx->pc = 0x2219BCu;
    {
        const bool branch_taken_0x2219bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2219bc) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x2219C4u;
label_2219c4:
    // 0x2219c4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2219c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2219c8:
    // 0x2219c8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2219c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2219cc:
    // 0x2219cc: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x2219ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_2219d0:
    // 0x2219d0: 0x148301da  bne         $a0, $v1, . + 4 + (0x1DA << 2)
label_2219d4:
    if (ctx->pc == 0x2219D4u) {
        ctx->pc = 0x2219D8u;
        goto label_2219d8;
    }
    ctx->pc = 0x2219D0u;
    {
        const bool branch_taken_0x2219d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2219d0) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x2219D8u;
label_2219d8:
    // 0x2219d8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2219d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2219dc:
    // 0x2219dc: 0x100001d7  b           . + 4 + (0x1D7 << 2)
label_2219e0:
    if (ctx->pc == 0x2219E0u) {
        ctx->pc = 0x2219E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219DCu;
        // 0x2219e0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2219E4u;
        goto label_2219e4;
    }
    ctx->pc = 0x2219DCu;
    {
        const bool branch_taken_0x2219dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2219E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219DCu;
        // 0x2219e0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219dc) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x2219E4u;
label_2219e4:
    // 0x2219e4: 0xc056ff8  jal         func_15BFE0
label_2219e8:
    if (ctx->pc == 0x2219E8u) {
        ctx->pc = 0x2219E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219E4u;
        // 0x2219e8: 0x8f8592d8  lw          $a1, -0x6D28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2219ECu;
        goto label_2219ec;
    }
    ctx->pc = 0x2219E4u;
    SET_GPR_U32(ctx, 31, 0x2219ECu);
    ctx->pc = 0x2219E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2219E4u;
    // 0x2219e8: 0x8f8592d8  lw          $a1, -0x6D28($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x2219E4u, 0x2219ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2219ECu;
label_2219ec:
    // 0x2219ec: 0x104001d3  beqz        $v0, . + 4 + (0x1D3 << 2)
label_2219f0:
    if (ctx->pc == 0x2219F0u) {
        ctx->pc = 0x2219F4u;
        goto label_2219f4;
    }
    ctx->pc = 0x2219ECu;
    {
        const bool branch_taken_0x2219ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2219ec) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x2219F4u;
label_2219f4:
    // 0x2219f4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2219f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2219f8:
    // 0x2219f8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2219f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2219fc:
    // 0x2219fc: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x2219fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221a00:
    // 0x221a00: 0x148301ce  bne         $a0, $v1, . + 4 + (0x1CE << 2)
label_221a04:
    if (ctx->pc == 0x221A04u) {
        ctx->pc = 0x221A08u;
        goto label_221a08;
    }
    ctx->pc = 0x221A00u;
    {
        const bool branch_taken_0x221a00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221a00) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221A08u;
label_221a08:
    // 0x221a08: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x221a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_221a0c:
    // 0x221a0c: 0x100001cb  b           . + 4 + (0x1CB << 2)
label_221a10:
    if (ctx->pc == 0x221A10u) {
        ctx->pc = 0x221A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A0Cu;
        // 0x221a10: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221A14u;
        goto label_221a14;
    }
    ctx->pc = 0x221A0Cu;
    {
        const bool branch_taken_0x221a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A0Cu;
        // 0x221a10: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a0c) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221A14u;
label_221a14:
    // 0x221a14: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221a18:
    // 0x221a18: 0xc056ff8  jal         func_15BFE0
label_221a1c:
    if (ctx->pc == 0x221A1Cu) {
        ctx->pc = 0x221A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A18u;
        // 0x221a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221A20u;
        goto label_221a20;
    }
    ctx->pc = 0x221A18u;
    SET_GPR_U32(ctx, 31, 0x221A20u);
    ctx->pc = 0x221A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A18u;
    // 0x221a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221A18u, 0x221A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A20u;
label_221a20:
    // 0x221a20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_221a24:
    if (ctx->pc == 0x221A24u) {
        ctx->pc = 0x221A28u;
        goto label_221a28;
    }
    ctx->pc = 0x221A20u;
    {
        const bool branch_taken_0x221a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221a20) {
            ctx->pc = 0x221A40u;
            goto label_221a40;
        }
    }
    ctx->pc = 0x221A28u;
label_221a28:
    // 0x221a28: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x221a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221a2c:
    // 0x221a2c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x221a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_221a30:
    // 0x221a30: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x221a30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_221a34:
    // 0x221a34: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_221a38:
    if (ctx->pc == 0x221A38u) {
        ctx->pc = 0x221A3Cu;
        goto label_221a3c;
    }
    ctx->pc = 0x221A34u;
    {
        const bool branch_taken_0x221a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x221a34) {
            ctx->pc = 0x221A40u;
            goto label_221a40;
        }
    }
    ctx->pc = 0x221A3Cu;
label_221a3c:
    // 0x221a3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x221a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221a40:
    // 0x221a40: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221a44:
    // 0x221a44: 0xc056ff8  jal         func_15BFE0
label_221a48:
    if (ctx->pc == 0x221A48u) {
        ctx->pc = 0x221A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A44u;
        // 0x221a48: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221A4Cu;
        goto label_221a4c;
    }
    ctx->pc = 0x221A44u;
    SET_GPR_U32(ctx, 31, 0x221A4Cu);
    ctx->pc = 0x221A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A44u;
    // 0x221a48: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221A44u, 0x221A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A4Cu;
label_221a4c:
    // 0x221a4c: 0x104001bb  beqz        $v0, . + 4 + (0x1BB << 2)
label_221a50:
    if (ctx->pc == 0x221A50u) {
        ctx->pc = 0x221A54u;
        goto label_221a54;
    }
    ctx->pc = 0x221A4Cu;
    {
        const bool branch_taken_0x221a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221a4c) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221A54u;
label_221a54:
    // 0x221a54: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x221a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221a58:
    // 0x221a58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x221a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221a5c:
    // 0x221a5c: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x221a5cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221a60:
    // 0x221a60: 0x148301b6  bne         $a0, $v1, . + 4 + (0x1B6 << 2)
label_221a64:
    if (ctx->pc == 0x221A64u) {
        ctx->pc = 0x221A68u;
        goto label_221a68;
    }
    ctx->pc = 0x221A60u;
    {
        const bool branch_taken_0x221a60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221a60) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221A68u;
label_221a68:
    // 0x221a68: 0x100001b4  b           . + 4 + (0x1B4 << 2)
label_221a6c:
    if (ctx->pc == 0x221A6Cu) {
        ctx->pc = 0x221A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A68u;
        // 0x221a6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221A70u;
        goto label_221a70;
    }
    ctx->pc = 0x221A68u;
    {
        const bool branch_taken_0x221a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A68u;
        // 0x221a6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a68) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221A70u;
label_221a70:
    // 0x221a70: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221a74:
    // 0x221a74: 0xc056ff8  jal         func_15BFE0
label_221a78:
    if (ctx->pc == 0x221A78u) {
        ctx->pc = 0x221A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A74u;
        // 0x221a78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221A7Cu;
        goto label_221a7c;
    }
    ctx->pc = 0x221A74u;
    SET_GPR_U32(ctx, 31, 0x221A7Cu);
    ctx->pc = 0x221A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221A74u;
    // 0x221a78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221A74u, 0x221A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221A7Cu;
label_221a7c:
    // 0x221a7c: 0x104001af  beqz        $v0, . + 4 + (0x1AF << 2)
label_221a80:
    if (ctx->pc == 0x221A80u) {
        ctx->pc = 0x221A84u;
        goto label_221a84;
    }
    ctx->pc = 0x221A7Cu;
    {
        const bool branch_taken_0x221a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221a7c) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221A84u;
label_221a84:
    // 0x221a84: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x221a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221a88:
    // 0x221a88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x221a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_221a8c:
    // 0x221a8c: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x221a8cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221a90:
    // 0x221a90: 0x148301aa  bne         $a0, $v1, . + 4 + (0x1AA << 2)
label_221a94:
    if (ctx->pc == 0x221A94u) {
        ctx->pc = 0x221A98u;
        goto label_221a98;
    }
    ctx->pc = 0x221A90u;
    {
        const bool branch_taken_0x221a90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221a90) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221A98u;
label_221a98:
    // 0x221a98: 0x100001a8  b           . + 4 + (0x1A8 << 2)
label_221a9c:
    if (ctx->pc == 0x221A9Cu) {
        ctx->pc = 0x221A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A98u;
        // 0x221a9c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221AA0u;
        goto label_221aa0;
    }
    ctx->pc = 0x221A98u;
    {
        const bool branch_taken_0x221a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A98u;
        // 0x221a9c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a98) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221AA0u;
label_221aa0:
    // 0x221aa0: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221aa4:
    // 0x221aa4: 0xc056ff8  jal         func_15BFE0
label_221aa8:
    if (ctx->pc == 0x221AA8u) {
        ctx->pc = 0x221AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AA4u;
        // 0x221aa8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221AACu;
        goto label_221aac;
    }
    ctx->pc = 0x221AA4u;
    SET_GPR_U32(ctx, 31, 0x221AACu);
    ctx->pc = 0x221AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221AA4u;
    // 0x221aa8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221AA4u, 0x221AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221AACu;
label_221aac:
    // 0x221aac: 0x104001a3  beqz        $v0, . + 4 + (0x1A3 << 2)
label_221ab0:
    if (ctx->pc == 0x221AB0u) {
        ctx->pc = 0x221AB4u;
        goto label_221ab4;
    }
    ctx->pc = 0x221AACu;
    {
        const bool branch_taken_0x221aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221aac) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221AB4u;
label_221ab4:
    // 0x221ab4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x221ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221ab8:
    // 0x221ab8: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x221ab8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_221abc:
    // 0x221abc: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x221abcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221ac0:
    // 0x221ac0: 0x1483019e  bne         $a0, $v1, . + 4 + (0x19E << 2)
label_221ac4:
    if (ctx->pc == 0x221AC4u) {
        ctx->pc = 0x221AC8u;
        goto label_221ac8;
    }
    ctx->pc = 0x221AC0u;
    {
        const bool branch_taken_0x221ac0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221ac0) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221AC8u;
label_221ac8:
    // 0x221ac8: 0x1000019c  b           . + 4 + (0x19C << 2)
label_221acc:
    if (ctx->pc == 0x221ACCu) {
        ctx->pc = 0x221ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AC8u;
        // 0x221acc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221AD0u;
        goto label_221ad0;
    }
    ctx->pc = 0x221AC8u;
    {
        const bool branch_taken_0x221ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AC8u;
        // 0x221acc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ac8) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221AD0u;
label_221ad0:
    // 0x221ad0: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221ad4:
    // 0x221ad4: 0xc056ff8  jal         func_15BFE0
label_221ad8:
    if (ctx->pc == 0x221AD8u) {
        ctx->pc = 0x221AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AD4u;
        // 0x221ad8: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221ADCu;
        goto label_221adc;
    }
    ctx->pc = 0x221AD4u;
    SET_GPR_U32(ctx, 31, 0x221ADCu);
    ctx->pc = 0x221AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221AD4u;
    // 0x221ad8: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221AD4u, 0x221ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221ADCu;
label_221adc:
    // 0x221adc: 0x10400197  beqz        $v0, . + 4 + (0x197 << 2)
label_221ae0:
    if (ctx->pc == 0x221AE0u) {
        ctx->pc = 0x221AE4u;
        goto label_221ae4;
    }
    ctx->pc = 0x221ADCu;
    {
        const bool branch_taken_0x221adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221adc) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221AE4u;
label_221ae4:
    // 0x221ae4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x221ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221ae8:
    // 0x221ae8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x221ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_221aec:
    // 0x221aec: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x221aecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221af0:
    // 0x221af0: 0x14830192  bne         $a0, $v1, . + 4 + (0x192 << 2)
label_221af4:
    if (ctx->pc == 0x221AF4u) {
        ctx->pc = 0x221AF8u;
        goto label_221af8;
    }
    ctx->pc = 0x221AF0u;
    {
        const bool branch_taken_0x221af0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221af0) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221AF8u;
label_221af8:
    // 0x221af8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x221af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_221afc:
    // 0x221afc: 0x1000018f  b           . + 4 + (0x18F << 2)
label_221b00:
    if (ctx->pc == 0x221B00u) {
        ctx->pc = 0x221B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AFCu;
        // 0x221b00: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221B04u;
        goto label_221b04;
    }
    ctx->pc = 0x221AFCu;
    {
        const bool branch_taken_0x221afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AFCu;
        // 0x221b00: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221afc) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221B04u;
label_221b04:
    // 0x221b04: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221b08:
    // 0x221b08: 0xc056ff8  jal         func_15BFE0
label_221b0c:
    if (ctx->pc == 0x221B0Cu) {
        ctx->pc = 0x221B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B08u;
        // 0x221b0c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221B10u;
        goto label_221b10;
    }
    ctx->pc = 0x221B08u;
    SET_GPR_U32(ctx, 31, 0x221B10u);
    ctx->pc = 0x221B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221B08u;
    // 0x221b0c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221B08u, 0x221B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B10u;
label_221b10:
    // 0x221b10: 0x1040018a  beqz        $v0, . + 4 + (0x18A << 2)
label_221b14:
    if (ctx->pc == 0x221B14u) {
        ctx->pc = 0x221B18u;
        goto label_221b18;
    }
    ctx->pc = 0x221B10u;
    {
        const bool branch_taken_0x221b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221b10) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221B18u;
label_221b18:
    // 0x221b18: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x221b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221b1c:
    // 0x221b1c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x221b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_221b20:
    // 0x221b20: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x221b20u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221b24:
    // 0x221b24: 0x14830185  bne         $a0, $v1, . + 4 + (0x185 << 2)
label_221b28:
    if (ctx->pc == 0x221B28u) {
        ctx->pc = 0x221B2Cu;
        goto label_221b2c;
    }
    ctx->pc = 0x221B24u;
    {
        const bool branch_taken_0x221b24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221b24) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221B2Cu;
label_221b2c:
    // 0x221b2c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x221b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_221b30:
    // 0x221b30: 0x10000182  b           . + 4 + (0x182 << 2)
label_221b34:
    if (ctx->pc == 0x221B34u) {
        ctx->pc = 0x221B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B30u;
        // 0x221b34: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221B38u;
        goto label_221b38;
    }
    ctx->pc = 0x221B30u;
    {
        const bool branch_taken_0x221b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B30u;
        // 0x221b34: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b30) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221B38u;
label_221b38:
    // 0x221b38: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221b3c:
    // 0x221b3c: 0xc056ff8  jal         func_15BFE0
label_221b40:
    if (ctx->pc == 0x221B40u) {
        ctx->pc = 0x221B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B3Cu;
        // 0x221b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221B44u;
        goto label_221b44;
    }
    ctx->pc = 0x221B3Cu;
    SET_GPR_U32(ctx, 31, 0x221B44u);
    ctx->pc = 0x221B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221B3Cu;
    // 0x221b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221B3Cu, 0x221B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B44u;
label_221b44:
    // 0x221b44: 0x1040017d  beqz        $v0, . + 4 + (0x17D << 2)
label_221b48:
    if (ctx->pc == 0x221B48u) {
        ctx->pc = 0x221B4Cu;
        goto label_221b4c;
    }
    ctx->pc = 0x221B44u;
    {
        const bool branch_taken_0x221b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221b44) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221B4Cu;
label_221b4c:
    // 0x221b4c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x221b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221b50:
    // 0x221b50: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x221b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_221b54:
    // 0x221b54: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x221b54u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221b58:
    // 0x221b58: 0x14830178  bne         $a0, $v1, . + 4 + (0x178 << 2)
label_221b5c:
    if (ctx->pc == 0x221B5Cu) {
        ctx->pc = 0x221B60u;
        goto label_221b60;
    }
    ctx->pc = 0x221B58u;
    {
        const bool branch_taken_0x221b58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221b58) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221B60u;
label_221b60:
    // 0x221b60: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x221b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_221b64:
    // 0x221b64: 0x10000175  b           . + 4 + (0x175 << 2)
label_221b68:
    if (ctx->pc == 0x221B68u) {
        ctx->pc = 0x221B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B64u;
        // 0x221b68: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221B6Cu;
        goto label_221b6c;
    }
    ctx->pc = 0x221B64u;
    {
        const bool branch_taken_0x221b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B64u;
        // 0x221b68: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b64) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221B6Cu;
label_221b6c:
    // 0x221b6c: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221b70:
    // 0x221b70: 0xc056ff8  jal         func_15BFE0
label_221b74:
    if (ctx->pc == 0x221B74u) {
        ctx->pc = 0x221B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B70u;
        // 0x221b74: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221B78u;
        goto label_221b78;
    }
    ctx->pc = 0x221B70u;
    SET_GPR_U32(ctx, 31, 0x221B78u);
    ctx->pc = 0x221B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221B70u;
    // 0x221b74: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221B70u, 0x221B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B78u;
label_221b78:
    // 0x221b78: 0x10400170  beqz        $v0, . + 4 + (0x170 << 2)
label_221b7c:
    if (ctx->pc == 0x221B7Cu) {
        ctx->pc = 0x221B80u;
        goto label_221b80;
    }
    ctx->pc = 0x221B78u;
    {
        const bool branch_taken_0x221b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221b78) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221B80u;
label_221b80:
    // 0x221b80: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x221b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221b84:
    // 0x221b84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x221b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221b88:
    // 0x221b88: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x221b88u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221b8c:
    // 0x221b8c: 0x1483016b  bne         $a0, $v1, . + 4 + (0x16B << 2)
label_221b90:
    if (ctx->pc == 0x221B90u) {
        ctx->pc = 0x221B94u;
        goto label_221b94;
    }
    ctx->pc = 0x221B8Cu;
    {
        const bool branch_taken_0x221b8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221b8c) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221B94u;
label_221b94:
    // 0x221b94: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x221b94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_221b98:
    // 0x221b98: 0x10000168  b           . + 4 + (0x168 << 2)
label_221b9c:
    if (ctx->pc == 0x221B9Cu) {
        ctx->pc = 0x221B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B98u;
        // 0x221b9c: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221BA0u;
        goto label_221ba0;
    }
    ctx->pc = 0x221B98u;
    {
        const bool branch_taken_0x221b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B98u;
        // 0x221b9c: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b98) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221BA0u;
label_221ba0:
    // 0x221ba0: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221ba4:
    // 0x221ba4: 0xc056ff8  jal         func_15BFE0
label_221ba8:
    if (ctx->pc == 0x221BA8u) {
        ctx->pc = 0x221BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221BA4u;
        // 0x221ba8: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221BACu;
        goto label_221bac;
    }
    ctx->pc = 0x221BA4u;
    SET_GPR_U32(ctx, 31, 0x221BACu);
    ctx->pc = 0x221BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221BA4u;
    // 0x221ba8: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221BA4u, 0x221BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221BACu;
label_221bac:
    // 0x221bac: 0x10400163  beqz        $v0, . + 4 + (0x163 << 2)
label_221bb0:
    if (ctx->pc == 0x221BB0u) {
        ctx->pc = 0x221BB4u;
        goto label_221bb4;
    }
    ctx->pc = 0x221BACu;
    {
        const bool branch_taken_0x221bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221bac) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221BB4u;
label_221bb4:
    // 0x221bb4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x221bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221bb8:
    // 0x221bb8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x221bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_221bbc:
    // 0x221bbc: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x221bbcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221bc0:
    // 0x221bc0: 0x1483015e  bne         $a0, $v1, . + 4 + (0x15E << 2)
label_221bc4:
    if (ctx->pc == 0x221BC4u) {
        ctx->pc = 0x221BC8u;
        goto label_221bc8;
    }
    ctx->pc = 0x221BC0u;
    {
        const bool branch_taken_0x221bc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221bc0) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221BC8u;
label_221bc8:
    // 0x221bc8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x221bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_221bcc:
    // 0x221bcc: 0x1000015b  b           . + 4 + (0x15B << 2)
label_221bd0:
    if (ctx->pc == 0x221BD0u) {
        ctx->pc = 0x221BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221BCCu;
        // 0x221bd0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221BD4u;
        goto label_221bd4;
    }
    ctx->pc = 0x221BCCu;
    {
        const bool branch_taken_0x221bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221BCCu;
        // 0x221bd0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221bcc) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221BD4u;
label_221bd4:
    // 0x221bd4: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221bd8:
    // 0x221bd8: 0xc056ff8  jal         func_15BFE0
label_221bdc:
    if (ctx->pc == 0x221BDCu) {
        ctx->pc = 0x221BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221BD8u;
        // 0x221bdc: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221BE0u;
        goto label_221be0;
    }
    ctx->pc = 0x221BD8u;
    SET_GPR_U32(ctx, 31, 0x221BE0u);
    ctx->pc = 0x221BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221BD8u;
    // 0x221bdc: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221BD8u, 0x221BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221BE0u;
label_221be0:
    // 0x221be0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_221be4:
    if (ctx->pc == 0x221BE4u) {
        ctx->pc = 0x221BE8u;
        goto label_221be8;
    }
    ctx->pc = 0x221BE0u;
    {
        const bool branch_taken_0x221be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221be0) {
            ctx->pc = 0x221C10u;
            goto label_221c10;
        }
    }
    ctx->pc = 0x221BE8u;
label_221be8:
    // 0x221be8: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221bec:
    // 0x221bec: 0xc056ff8  jal         func_15BFE0
label_221bf0:
    if (ctx->pc == 0x221BF0u) {
        ctx->pc = 0x221BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221BECu;
        // 0x221bf0: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221BF4u;
        goto label_221bf4;
    }
    ctx->pc = 0x221BECu;
    SET_GPR_U32(ctx, 31, 0x221BF4u);
    ctx->pc = 0x221BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221BECu;
    // 0x221bf0: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221BECu, 0x221BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221BF4u;
label_221bf4:
    // 0x221bf4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_221bf8:
    if (ctx->pc == 0x221BF8u) {
        ctx->pc = 0x221BFCu;
        goto label_221bfc;
    }
    ctx->pc = 0x221BF4u;
    {
        const bool branch_taken_0x221bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221bf4) {
            ctx->pc = 0x221C10u;
            goto label_221c10;
        }
    }
    ctx->pc = 0x221BFCu;
label_221bfc:
    // 0x221bfc: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221c00:
    // 0x221c00: 0xc056ff8  jal         func_15BFE0
label_221c04:
    if (ctx->pc == 0x221C04u) {
        ctx->pc = 0x221C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C00u;
        // 0x221c04: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221C08u;
        goto label_221c08;
    }
    ctx->pc = 0x221C00u;
    SET_GPR_U32(ctx, 31, 0x221C08u);
    ctx->pc = 0x221C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221C00u;
    // 0x221c04: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221C00u, 0x221C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221C08u;
label_221c08:
    // 0x221c08: 0x1040014c  beqz        $v0, . + 4 + (0x14C << 2)
label_221c0c:
    if (ctx->pc == 0x221C0Cu) {
        ctx->pc = 0x221C10u;
        goto label_221c10;
    }
    ctx->pc = 0x221C08u;
    {
        const bool branch_taken_0x221c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221c08) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221C10u;
label_221c10:
    // 0x221c10: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x221c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221c14:
    // 0x221c14: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x221c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_221c18:
    // 0x221c18: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x221c18u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221c1c:
    // 0x221c1c: 0x14830147  bne         $a0, $v1, . + 4 + (0x147 << 2)
label_221c20:
    if (ctx->pc == 0x221C20u) {
        ctx->pc = 0x221C24u;
        goto label_221c24;
    }
    ctx->pc = 0x221C1Cu;
    {
        const bool branch_taken_0x221c1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221c1c) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221C24u;
label_221c24:
    // 0x221c24: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x221c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_221c28:
    // 0x221c28: 0x10000144  b           . + 4 + (0x144 << 2)
label_221c2c:
    if (ctx->pc == 0x221C2Cu) {
        ctx->pc = 0x221C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C28u;
        // 0x221c2c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221C30u;
        goto label_221c30;
    }
    ctx->pc = 0x221C28u;
    {
        const bool branch_taken_0x221c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C28u;
        // 0x221c2c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c28) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221C30u;
label_221c30:
    // 0x221c30: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x221c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221c34:
    // 0x221c34: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x221c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_221c38:
    // 0x221c38: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x221c38u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221c3c:
    // 0x221c3c: 0x1483013f  bne         $a0, $v1, . + 4 + (0x13F << 2)
label_221c40:
    if (ctx->pc == 0x221C40u) {
        ctx->pc = 0x221C44u;
        goto label_221c44;
    }
    ctx->pc = 0x221C3Cu;
    {
        const bool branch_taken_0x221c3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221c3c) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221C44u;
label_221c44:
    // 0x221c44: 0x92640022  lbu         $a0, 0x22($s3)
    ctx->pc = 0x221c44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
label_221c48:
    // 0x221c48: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x221c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_221c4c:
    // 0x221c4c: 0x1483013b  bne         $a0, $v1, . + 4 + (0x13B << 2)
label_221c50:
    if (ctx->pc == 0x221C50u) {
        ctx->pc = 0x221C54u;
        goto label_221c54;
    }
    ctx->pc = 0x221C4Cu;
    {
        const bool branch_taken_0x221c4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221c4c) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221C54u;
label_221c54:
    // 0x221c54: 0x92640023  lbu         $a0, 0x23($s3)
    ctx->pc = 0x221c54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
label_221c58:
    // 0x221c58: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x221c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_221c5c:
    // 0x221c5c: 0x14830137  bne         $a0, $v1, . + 4 + (0x137 << 2)
label_221c60:
    if (ctx->pc == 0x221C60u) {
        ctx->pc = 0x221C64u;
        goto label_221c64;
    }
    ctx->pc = 0x221C5Cu;
    {
        const bool branch_taken_0x221c5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221c5c) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221C64u;
label_221c64:
    // 0x221c64: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x221c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_221c68:
    // 0x221c68: 0x10000134  b           . + 4 + (0x134 << 2)
label_221c6c:
    if (ctx->pc == 0x221C6Cu) {
        ctx->pc = 0x221C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C68u;
        // 0x221c6c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221C70u;
        goto label_221c70;
    }
    ctx->pc = 0x221C68u;
    {
        const bool branch_taken_0x221c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C68u;
        // 0x221c6c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c68) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221C70u;
label_221c70:
    // 0x221c70: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x221c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221c74:
    // 0x221c74: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x221c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_221c78:
    // 0x221c78: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x221c78u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221c7c:
    // 0x221c7c: 0x1483012f  bne         $a0, $v1, . + 4 + (0x12F << 2)
label_221c80:
    if (ctx->pc == 0x221C80u) {
        ctx->pc = 0x221C84u;
        goto label_221c84;
    }
    ctx->pc = 0x221C7Cu;
    {
        const bool branch_taken_0x221c7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221c7c) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221C84u;
label_221c84:
    // 0x221c84: 0x92640022  lbu         $a0, 0x22($s3)
    ctx->pc = 0x221c84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
label_221c88:
    // 0x221c88: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x221c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_221c8c:
    // 0x221c8c: 0x1483012b  bne         $a0, $v1, . + 4 + (0x12B << 2)
label_221c90:
    if (ctx->pc == 0x221C90u) {
        ctx->pc = 0x221C94u;
        goto label_221c94;
    }
    ctx->pc = 0x221C8Cu;
    {
        const bool branch_taken_0x221c8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221c8c) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221C94u;
label_221c94:
    // 0x221c94: 0x92640023  lbu         $a0, 0x23($s3)
    ctx->pc = 0x221c94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
label_221c98:
    // 0x221c98: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x221c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_221c9c:
    // 0x221c9c: 0x14830127  bne         $a0, $v1, . + 4 + (0x127 << 2)
label_221ca0:
    if (ctx->pc == 0x221CA0u) {
        ctx->pc = 0x221CA4u;
        goto label_221ca4;
    }
    ctx->pc = 0x221C9Cu;
    {
        const bool branch_taken_0x221c9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221c9c) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221CA4u;
label_221ca4:
    // 0x221ca4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x221ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_221ca8:
    // 0x221ca8: 0x10000124  b           . + 4 + (0x124 << 2)
label_221cac:
    if (ctx->pc == 0x221CACu) {
        ctx->pc = 0x221CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221CA8u;
        // 0x221cac: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221CB0u;
        goto label_221cb0;
    }
    ctx->pc = 0x221CA8u;
    {
        const bool branch_taken_0x221ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221CA8u;
        // 0x221cac: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ca8) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221CB0u;
label_221cb0:
    // 0x221cb0: 0x92630034  lbu         $v1, 0x34($s3)
    ctx->pc = 0x221cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
label_221cb4:
    // 0x221cb4: 0x14710121  bne         $v1, $s1, . + 4 + (0x121 << 2)
label_221cb8:
    if (ctx->pc == 0x221CB8u) {
        ctx->pc = 0x221CBCu;
        goto label_221cbc;
    }
    ctx->pc = 0x221CB4u;
    {
        const bool branch_taken_0x221cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x221cb4) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221CBCu;
label_221cbc:
    // 0x221cbc: 0x92630035  lbu         $v1, 0x35($s3)
    ctx->pc = 0x221cbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 53)));
label_221cc0:
    // 0x221cc0: 0x1460011e  bnez        $v1, . + 4 + (0x11E << 2)
label_221cc4:
    if (ctx->pc == 0x221CC4u) {
        ctx->pc = 0x221CC8u;
        goto label_221cc8;
    }
    ctx->pc = 0x221CC0u;
    {
        const bool branch_taken_0x221cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x221cc0) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221CC8u;
label_221cc8:
    // 0x221cc8: 0x1000011c  b           . + 4 + (0x11C << 2)
label_221ccc:
    if (ctx->pc == 0x221CCCu) {
        ctx->pc = 0x221CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221CC8u;
        // 0x221ccc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221CD0u;
        goto label_221cd0;
    }
    ctx->pc = 0x221CC8u;
    {
        const bool branch_taken_0x221cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221CC8u;
        // 0x221ccc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221cc8) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221CD0u;
label_221cd0:
    // 0x221cd0: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221cd4:
    // 0x221cd4: 0xc056ff8  jal         func_15BFE0
label_221cd8:
    if (ctx->pc == 0x221CD8u) {
        ctx->pc = 0x221CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221CD4u;
        // 0x221cd8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221CDCu;
        goto label_221cdc;
    }
    ctx->pc = 0x221CD4u;
    SET_GPR_U32(ctx, 31, 0x221CDCu);
    ctx->pc = 0x221CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221CD4u;
    // 0x221cd8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221CD4u, 0x221CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221CDCu;
label_221cdc:
    // 0x221cdc: 0x10400117  beqz        $v0, . + 4 + (0x117 << 2)
label_221ce0:
    if (ctx->pc == 0x221CE0u) {
        ctx->pc = 0x221CE4u;
        goto label_221ce4;
    }
    ctx->pc = 0x221CDCu;
    {
        const bool branch_taken_0x221cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221cdc) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221CE4u;
label_221ce4:
    // 0x221ce4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x221ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221ce8:
    // 0x221ce8: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x221ce8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_221cec:
    // 0x221cec: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x221cecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221cf0:
    // 0x221cf0: 0x14830112  bne         $a0, $v1, . + 4 + (0x112 << 2)
label_221cf4:
    if (ctx->pc == 0x221CF4u) {
        ctx->pc = 0x221CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221CF0u;
        // 0x221cf4: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221CF8u;
        goto label_221cf8;
    }
    ctx->pc = 0x221CF0u;
    {
        const bool branch_taken_0x221cf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x221CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221CF0u;
        // 0x221cf4: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221cf0) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221CF8u;
label_221cf8:
    // 0x221cf8: 0x902350b9  lbu         $v1, 0x50B9($at)
    ctx->pc = 0x221cf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20665)));
label_221cfc:
    // 0x221cfc: 0x1060010f  beqz        $v1, . + 4 + (0x10F << 2)
label_221d00:
    if (ctx->pc == 0x221D00u) {
        ctx->pc = 0x221D04u;
        goto label_221d04;
    }
    ctx->pc = 0x221CFCu;
    {
        const bool branch_taken_0x221cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x221cfc) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221D04u;
label_221d04:
    // 0x221d04: 0x1000010d  b           . + 4 + (0x10D << 2)
label_221d08:
    if (ctx->pc == 0x221D08u) {
        ctx->pc = 0x221D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D04u;
        // 0x221d08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221D0Cu;
        goto label_221d0c;
    }
    ctx->pc = 0x221D04u;
    {
        const bool branch_taken_0x221d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D04u;
        // 0x221d08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d04) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221D0Cu;
label_221d0c:
    // 0x221d0c: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x221d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
label_221d10:
    // 0x221d10: 0xc056ff8  jal         func_15BFE0
label_221d14:
    if (ctx->pc == 0x221D14u) {
        ctx->pc = 0x221D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D10u;
        // 0x221d14: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221D18u;
        goto label_221d18;
    }
    ctx->pc = 0x221D10u;
    SET_GPR_U32(ctx, 31, 0x221D18u);
    ctx->pc = 0x221D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221D10u;
    // 0x221d14: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x221D10u, 0x221D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D18u;
label_221d18:
    // 0x221d18: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
label_221d1c:
    if (ctx->pc == 0x221D1Cu) {
        ctx->pc = 0x221D20u;
        goto label_221d20;
    }
    ctx->pc = 0x221D18u;
    {
        const bool branch_taken_0x221d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221d18) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221D20u;
label_221d20:
    // 0x221d20: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x221d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221d24:
    // 0x221d24: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x221d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_221d28:
    // 0x221d28: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x221d28u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_221d2c:
    // 0x221d2c: 0x14830103  bne         $a0, $v1, . + 4 + (0x103 << 2)
label_221d30:
    if (ctx->pc == 0x221D30u) {
        ctx->pc = 0x221D34u;
        goto label_221d34;
    }
    ctx->pc = 0x221D2Cu;
    {
        const bool branch_taken_0x221d2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x221d2c) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221D34u;
label_221d34:
    // 0x221d34: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x221d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_221d38:
    // 0x221d38: 0x10000100  b           . + 4 + (0x100 << 2)
label_221d3c:
    if (ctx->pc == 0x221D3Cu) {
        ctx->pc = 0x221D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D38u;
        // 0x221d3c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x221D40u;
        { ctx->pc = 0x221d40; return; }
    }
    ctx->pc = 0x221D38u;
    {
        const bool branch_taken_0x221d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D38u;
        // 0x221d3c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d38) {
            ctx->pc = 0x22213Cu;
            { ctx->pc = 0x22213c; return; }
        }
    }
    ctx->pc = 0x221D40u;
    ctx->pc = 0x221d40u;
    return;
}
