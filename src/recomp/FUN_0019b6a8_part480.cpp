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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2854d8u: goto label_2854d8;
        case 0x2854dcu: goto label_2854dc;
        case 0x2854e0u: goto label_2854e0;
        case 0x2854e4u: goto label_2854e4;
        case 0x2854e8u: goto label_2854e8;
        case 0x2854ecu: goto label_2854ec;
        case 0x2854f0u: goto label_2854f0;
        case 0x2854f4u: goto label_2854f4;
        case 0x2854f8u: goto label_2854f8;
        case 0x2854fcu: goto label_2854fc;
        case 0x285500u: goto label_285500;
        case 0x285504u: goto label_285504;
        case 0x285508u: goto label_285508;
        case 0x28550cu: goto label_28550c;
        case 0x285510u: goto label_285510;
        case 0x285514u: goto label_285514;
        case 0x285518u: goto label_285518;
        case 0x28551cu: goto label_28551c;
        case 0x285520u: goto label_285520;
        case 0x285524u: goto label_285524;
        case 0x285528u: goto label_285528;
        case 0x28552cu: goto label_28552c;
        case 0x285530u: goto label_285530;
        case 0x285534u: goto label_285534;
        case 0x285538u: goto label_285538;
        case 0x28553cu: goto label_28553c;
        case 0x285540u: goto label_285540;
        case 0x285544u: goto label_285544;
        case 0x285548u: goto label_285548;
        case 0x28554cu: goto label_28554c;
        case 0x285550u: goto label_285550;
        case 0x285554u: goto label_285554;
        case 0x285558u: goto label_285558;
        case 0x28555cu: goto label_28555c;
        case 0x285560u: goto label_285560;
        case 0x285564u: goto label_285564;
        case 0x285568u: goto label_285568;
        case 0x28556cu: goto label_28556c;
        case 0x285570u: goto label_285570;
        case 0x285574u: goto label_285574;
        case 0x285578u: goto label_285578;
        case 0x28557cu: goto label_28557c;
        case 0x285580u: goto label_285580;
        case 0x285584u: goto label_285584;
        case 0x285588u: goto label_285588;
        case 0x28558cu: goto label_28558c;
        case 0x285590u: goto label_285590;
        case 0x285594u: goto label_285594;
        case 0x285598u: goto label_285598;
        case 0x28559cu: goto label_28559c;
        case 0x2855a0u: goto label_2855a0;
        case 0x2855a4u: goto label_2855a4;
        case 0x2855a8u: goto label_2855a8;
        case 0x2855acu: goto label_2855ac;
        case 0x2855b0u: goto label_2855b0;
        case 0x2855b4u: goto label_2855b4;
        case 0x2855b8u: goto label_2855b8;
        case 0x2855bcu: goto label_2855bc;
        case 0x2855c0u: goto label_2855c0;
        case 0x2855c4u: goto label_2855c4;
        case 0x2855c8u: goto label_2855c8;
        case 0x2855ccu: goto label_2855cc;
        case 0x2855d0u: goto label_2855d0;
        case 0x2855d4u: goto label_2855d4;
        case 0x2855d8u: goto label_2855d8;
        case 0x2855dcu: goto label_2855dc;
        case 0x2855e0u: goto label_2855e0;
        case 0x2855e4u: goto label_2855e4;
        case 0x2855e8u: goto label_2855e8;
        case 0x2855ecu: goto label_2855ec;
        case 0x2855f0u: goto label_2855f0;
        case 0x2855f4u: goto label_2855f4;
        case 0x2855f8u: goto label_2855f8;
        case 0x2855fcu: goto label_2855fc;
        case 0x285600u: goto label_285600;
        case 0x285604u: goto label_285604;
        case 0x285608u: goto label_285608;
        case 0x28560cu: goto label_28560c;
        case 0x285610u: goto label_285610;
        case 0x285614u: goto label_285614;
        case 0x285618u: goto label_285618;
        case 0x28561cu: goto label_28561c;
        case 0x285620u: goto label_285620;
        case 0x285624u: goto label_285624;
        case 0x285628u: goto label_285628;
        case 0x28562cu: goto label_28562c;
        case 0x285630u: goto label_285630;
        case 0x285634u: goto label_285634;
        case 0x285638u: goto label_285638;
        case 0x28563cu: goto label_28563c;
        case 0x285640u: goto label_285640;
        case 0x285644u: goto label_285644;
        case 0x285648u: goto label_285648;
        case 0x28564cu: goto label_28564c;
        case 0x285650u: goto label_285650;
        case 0x285654u: goto label_285654;
        case 0x285658u: goto label_285658;
        case 0x28565cu: goto label_28565c;
        case 0x285660u: goto label_285660;
        case 0x285664u: goto label_285664;
        case 0x285668u: goto label_285668;
        case 0x28566cu: goto label_28566c;
        case 0x285670u: goto label_285670;
        case 0x285674u: goto label_285674;
        case 0x285678u: goto label_285678;
        case 0x28567cu: goto label_28567c;
        case 0x285680u: goto label_285680;
        case 0x285684u: goto label_285684;
        case 0x285688u: goto label_285688;
        case 0x28568cu: goto label_28568c;
        case 0x285690u: goto label_285690;
        case 0x285694u: goto label_285694;
        case 0x285698u: goto label_285698;
        case 0x28569cu: goto label_28569c;
        case 0x2856a0u: goto label_2856a0;
        case 0x2856a4u: goto label_2856a4;
        case 0x2856a8u: goto label_2856a8;
        case 0x2856acu: goto label_2856ac;
        case 0x2856b0u: goto label_2856b0;
        case 0x2856b4u: goto label_2856b4;
        case 0x2856b8u: goto label_2856b8;
        case 0x2856bcu: goto label_2856bc;
        case 0x2856c0u: goto label_2856c0;
        case 0x2856c4u: goto label_2856c4;
        case 0x2856c8u: goto label_2856c8;
        case 0x2856ccu: goto label_2856cc;
        case 0x2856d0u: goto label_2856d0;
        case 0x2856d4u: goto label_2856d4;
        case 0x2856d8u: goto label_2856d8;
        case 0x2856dcu: goto label_2856dc;
        case 0x2856e0u: goto label_2856e0;
        case 0x2856e4u: goto label_2856e4;
        case 0x2856e8u: goto label_2856e8;
        case 0x2856ecu: goto label_2856ec;
        case 0x2856f0u: goto label_2856f0;
        case 0x2856f4u: goto label_2856f4;
        case 0x2856f8u: goto label_2856f8;
        case 0x2856fcu: goto label_2856fc;
        case 0x285700u: goto label_285700;
        case 0x285704u: goto label_285704;
        case 0x285708u: goto label_285708;
        case 0x28570cu: goto label_28570c;
        case 0x285710u: goto label_285710;
        case 0x285714u: goto label_285714;
        case 0x285718u: goto label_285718;
        case 0x28571cu: goto label_28571c;
        case 0x285720u: goto label_285720;
        case 0x285724u: goto label_285724;
        case 0x285728u: goto label_285728;
        case 0x28572cu: goto label_28572c;
        case 0x285730u: goto label_285730;
        case 0x285734u: goto label_285734;
        case 0x285738u: goto label_285738;
        case 0x28573cu: goto label_28573c;
        case 0x285740u: goto label_285740;
        case 0x285744u: goto label_285744;
        case 0x285748u: goto label_285748;
        case 0x28574cu: goto label_28574c;
        case 0x285750u: goto label_285750;
        case 0x285754u: goto label_285754;
        case 0x285758u: goto label_285758;
        case 0x28575cu: goto label_28575c;
        case 0x285760u: goto label_285760;
        case 0x285764u: goto label_285764;
        case 0x285768u: goto label_285768;
        case 0x28576cu: goto label_28576c;
        case 0x285770u: goto label_285770;
        case 0x285774u: goto label_285774;
        case 0x285778u: goto label_285778;
        case 0x28577cu: goto label_28577c;
        case 0x285780u: goto label_285780;
        case 0x285784u: goto label_285784;
        case 0x285788u: goto label_285788;
        case 0x28578cu: goto label_28578c;
        case 0x285790u: goto label_285790;
        case 0x285794u: goto label_285794;
        case 0x285798u: goto label_285798;
        case 0x28579cu: goto label_28579c;
        case 0x2857a0u: goto label_2857a0;
        case 0x2857a4u: goto label_2857a4;
        case 0x2857a8u: goto label_2857a8;
        case 0x2857acu: goto label_2857ac;
        case 0x2857b0u: goto label_2857b0;
        case 0x2857b4u: goto label_2857b4;
        case 0x2857b8u: goto label_2857b8;
        case 0x2857bcu: goto label_2857bc;
        case 0x2857c0u: goto label_2857c0;
        case 0x2857c4u: goto label_2857c4;
        case 0x2857c8u: goto label_2857c8;
        case 0x2857ccu: goto label_2857cc;
        case 0x2857d0u: goto label_2857d0;
        case 0x2857d4u: goto label_2857d4;
        case 0x2857d8u: goto label_2857d8;
        case 0x2857dcu: goto label_2857dc;
        case 0x2857e0u: goto label_2857e0;
        case 0x2857e4u: goto label_2857e4;
        case 0x2857e8u: goto label_2857e8;
        case 0x2857ecu: goto label_2857ec;
        case 0x2857f0u: goto label_2857f0;
        case 0x2857f4u: goto label_2857f4;
        case 0x2857f8u: goto label_2857f8;
        case 0x2857fcu: goto label_2857fc;
        case 0x285800u: goto label_285800;
        case 0x285804u: goto label_285804;
        case 0x285808u: goto label_285808;
        case 0x28580cu: goto label_28580c;
        case 0x285810u: goto label_285810;
        case 0x285814u: goto label_285814;
        case 0x285818u: goto label_285818;
        case 0x28581cu: goto label_28581c;
        case 0x285820u: goto label_285820;
        case 0x285824u: goto label_285824;
        case 0x285828u: goto label_285828;
        case 0x28582cu: goto label_28582c;
        case 0x285830u: goto label_285830;
        case 0x285834u: goto label_285834;
        case 0x285838u: goto label_285838;
        case 0x28583cu: goto label_28583c;
        case 0x285840u: goto label_285840;
        case 0x285844u: goto label_285844;
        case 0x285848u: goto label_285848;
        case 0x28584cu: goto label_28584c;
        case 0x285850u: goto label_285850;
        case 0x285854u: goto label_285854;
        case 0x285858u: goto label_285858;
        case 0x28585cu: goto label_28585c;
        case 0x285860u: goto label_285860;
        case 0x285864u: goto label_285864;
        case 0x285868u: goto label_285868;
        case 0x28586cu: goto label_28586c;
        case 0x285870u: goto label_285870;
        case 0x285874u: goto label_285874;
        case 0x285878u: goto label_285878;
        case 0x28587cu: goto label_28587c;
        case 0x285880u: goto label_285880;
        case 0x285884u: goto label_285884;
        case 0x285888u: goto label_285888;
        case 0x28588cu: goto label_28588c;
        case 0x285890u: goto label_285890;
        case 0x285894u: goto label_285894;
        case 0x285898u: goto label_285898;
        case 0x28589cu: goto label_28589c;
        case 0x2858a0u: goto label_2858a0;
        case 0x2858a4u: goto label_2858a4;
        case 0x2858a8u: goto label_2858a8;
        case 0x2858acu: goto label_2858ac;
        case 0x2858b0u: goto label_2858b0;
        case 0x2858b4u: goto label_2858b4;
        case 0x2858b8u: goto label_2858b8;
        case 0x2858bcu: goto label_2858bc;
        case 0x2858c0u: goto label_2858c0;
        case 0x2858c4u: goto label_2858c4;
        case 0x2858c8u: goto label_2858c8;
        case 0x2858ccu: goto label_2858cc;
        case 0x2858d0u: goto label_2858d0;
        case 0x2858d4u: goto label_2858d4;
        case 0x2858d8u: goto label_2858d8;
        case 0x2858dcu: goto label_2858dc;
        case 0x2858e0u: goto label_2858e0;
        case 0x2858e4u: goto label_2858e4;
        case 0x2858e8u: goto label_2858e8;
        case 0x2858ecu: goto label_2858ec;
        case 0x2858f0u: goto label_2858f0;
        case 0x2858f4u: goto label_2858f4;
        case 0x2858f8u: goto label_2858f8;
        case 0x2858fcu: goto label_2858fc;
        case 0x285900u: goto label_285900;
        case 0x285904u: goto label_285904;
        case 0x285908u: goto label_285908;
        case 0x28590cu: goto label_28590c;
        case 0x285910u: goto label_285910;
        case 0x285914u: goto label_285914;
        case 0x285918u: goto label_285918;
        case 0x28591cu: goto label_28591c;
        case 0x285920u: goto label_285920;
        case 0x285924u: goto label_285924;
        case 0x285928u: goto label_285928;
        case 0x28592cu: goto label_28592c;
        case 0x285930u: goto label_285930;
        case 0x285934u: goto label_285934;
        case 0x285938u: goto label_285938;
        case 0x28593cu: goto label_28593c;
        case 0x285940u: goto label_285940;
        case 0x285944u: goto label_285944;
        case 0x285948u: goto label_285948;
        case 0x28594cu: goto label_28594c;
        case 0x285950u: goto label_285950;
        case 0x285954u: goto label_285954;
        case 0x285958u: goto label_285958;
        case 0x28595cu: goto label_28595c;
        case 0x285960u: goto label_285960;
        case 0x285964u: goto label_285964;
        case 0x285968u: goto label_285968;
        case 0x28596cu: goto label_28596c;
        case 0x285970u: goto label_285970;
        case 0x285974u: goto label_285974;
        case 0x285978u: goto label_285978;
        case 0x28597cu: goto label_28597c;
        case 0x285980u: goto label_285980;
        case 0x285984u: goto label_285984;
        case 0x285988u: goto label_285988;
        case 0x28598cu: goto label_28598c;
        case 0x285990u: goto label_285990;
        case 0x285994u: goto label_285994;
        case 0x285998u: goto label_285998;
        case 0x28599cu: goto label_28599c;
        case 0x2859a0u: goto label_2859a0;
        case 0x2859a4u: goto label_2859a4;
        case 0x2859a8u: goto label_2859a8;
        case 0x2859acu: goto label_2859ac;
        case 0x2859b0u: goto label_2859b0;
        case 0x2859b4u: goto label_2859b4;
        case 0x2859b8u: goto label_2859b8;
        case 0x2859bcu: goto label_2859bc;
        case 0x2859c0u: goto label_2859c0;
        case 0x2859c4u: goto label_2859c4;
        case 0x2859c8u: goto label_2859c8;
        case 0x2859ccu: goto label_2859cc;
        case 0x2859d0u: goto label_2859d0;
        case 0x2859d4u: goto label_2859d4;
        case 0x2859d8u: goto label_2859d8;
        case 0x2859dcu: goto label_2859dc;
        case 0x2859e0u: goto label_2859e0;
        case 0x2859e4u: goto label_2859e4;
        case 0x2859e8u: goto label_2859e8;
        case 0x2859ecu: goto label_2859ec;
        case 0x2859f0u: goto label_2859f0;
        case 0x2859f4u: goto label_2859f4;
        case 0x2859f8u: goto label_2859f8;
        case 0x2859fcu: goto label_2859fc;
        case 0x285a00u: goto label_285a00;
        case 0x285a04u: goto label_285a04;
        case 0x285a08u: goto label_285a08;
        case 0x285a0cu: goto label_285a0c;
        case 0x285a10u: goto label_285a10;
        case 0x285a14u: goto label_285a14;
        case 0x285a18u: goto label_285a18;
        case 0x285a1cu: goto label_285a1c;
        case 0x285a20u: goto label_285a20;
        case 0x285a24u: goto label_285a24;
        case 0x285a28u: goto label_285a28;
        case 0x285a2cu: goto label_285a2c;
        case 0x285a30u: goto label_285a30;
        case 0x285a34u: goto label_285a34;
        case 0x285a38u: goto label_285a38;
        case 0x285a3cu: goto label_285a3c;
        case 0x285a40u: goto label_285a40;
        case 0x285a44u: goto label_285a44;
        case 0x285a48u: goto label_285a48;
        case 0x285a4cu: goto label_285a4c;
        case 0x285a50u: goto label_285a50;
        case 0x285a54u: goto label_285a54;
        case 0x285a58u: goto label_285a58;
        case 0x285a5cu: goto label_285a5c;
        case 0x285a60u: goto label_285a60;
        case 0x285a64u: goto label_285a64;
        case 0x285a68u: goto label_285a68;
        case 0x285a6cu: goto label_285a6c;
        case 0x285a70u: goto label_285a70;
        case 0x285a74u: goto label_285a74;
        case 0x285a78u: goto label_285a78;
        case 0x285a7cu: goto label_285a7c;
        case 0x285a80u: goto label_285a80;
        case 0x285a84u: goto label_285a84;
        case 0x285a88u: goto label_285a88;
        case 0x285a8cu: goto label_285a8c;
        case 0x285a90u: goto label_285a90;
        case 0x285a94u: goto label_285a94;
        case 0x285a98u: goto label_285a98;
        case 0x285a9cu: goto label_285a9c;
        case 0x285aa0u: goto label_285aa0;
        case 0x285aa4u: goto label_285aa4;
        case 0x285aa8u: goto label_285aa8;
        case 0x285aacu: goto label_285aac;
        case 0x285ab0u: goto label_285ab0;
        case 0x285ab4u: goto label_285ab4;
        case 0x285ab8u: goto label_285ab8;
        case 0x285abcu: goto label_285abc;
        case 0x285ac0u: goto label_285ac0;
        case 0x285ac4u: goto label_285ac4;
        case 0x285ac8u: goto label_285ac8;
        case 0x285accu: goto label_285acc;
        case 0x285ad0u: goto label_285ad0;
        case 0x285ad4u: goto label_285ad4;
        case 0x285ad8u: goto label_285ad8;
        case 0x285adcu: goto label_285adc;
        case 0x285ae0u: goto label_285ae0;
        case 0x285ae4u: goto label_285ae4;
        case 0x285ae8u: goto label_285ae8;
        case 0x285aecu: goto label_285aec;
        case 0x285af0u: goto label_285af0;
        case 0x285af4u: goto label_285af4;
        case 0x285af8u: goto label_285af8;
        case 0x285afcu: goto label_285afc;
        case 0x285b00u: goto label_285b00;
        case 0x285b04u: goto label_285b04;
        case 0x285b08u: goto label_285b08;
        case 0x285b0cu: goto label_285b0c;
        case 0x285b10u: goto label_285b10;
        case 0x285b14u: goto label_285b14;
        case 0x285b18u: goto label_285b18;
        case 0x285b1cu: goto label_285b1c;
        case 0x285b20u: goto label_285b20;
        case 0x285b24u: goto label_285b24;
        case 0x285b28u: goto label_285b28;
        case 0x285b2cu: goto label_285b2c;
        case 0x285b30u: goto label_285b30;
        case 0x285b34u: goto label_285b34;
        case 0x285b38u: goto label_285b38;
        case 0x285b3cu: goto label_285b3c;
        case 0x285b40u: goto label_285b40;
        case 0x285b44u: goto label_285b44;
        case 0x285b48u: goto label_285b48;
        case 0x285b4cu: goto label_285b4c;
        case 0x285b50u: goto label_285b50;
        case 0x285b54u: goto label_285b54;
        case 0x285b58u: goto label_285b58;
        case 0x285b5cu: goto label_285b5c;
        case 0x285b60u: goto label_285b60;
        case 0x285b64u: goto label_285b64;
        case 0x285b68u: goto label_285b68;
        case 0x285b6cu: goto label_285b6c;
        case 0x285b70u: goto label_285b70;
        case 0x285b74u: goto label_285b74;
        case 0x285b78u: goto label_285b78;
        case 0x285b7cu: goto label_285b7c;
        case 0x285b80u: goto label_285b80;
        case 0x285b84u: goto label_285b84;
        case 0x285b88u: goto label_285b88;
        case 0x285b8cu: goto label_285b8c;
        case 0x285b90u: goto label_285b90;
        case 0x285b94u: goto label_285b94;
        case 0x285b98u: goto label_285b98;
        case 0x285b9cu: goto label_285b9c;
        case 0x285ba0u: goto label_285ba0;
        case 0x285ba4u: goto label_285ba4;
        case 0x285ba8u: goto label_285ba8;
        case 0x285bacu: goto label_285bac;
        case 0x285bb0u: goto label_285bb0;
        case 0x285bb4u: goto label_285bb4;
        case 0x285bb8u: goto label_285bb8;
        case 0x285bbcu: goto label_285bbc;
        case 0x285bc0u: goto label_285bc0;
        case 0x285bc4u: goto label_285bc4;
        case 0x285bc8u: goto label_285bc8;
        case 0x285bccu: goto label_285bcc;
        case 0x285bd0u: goto label_285bd0;
        case 0x285bd4u: goto label_285bd4;
        case 0x285bd8u: goto label_285bd8;
        case 0x285bdcu: goto label_285bdc;
        case 0x285be0u: goto label_285be0;
        case 0x285be4u: goto label_285be4;
        case 0x285be8u: goto label_285be8;
        case 0x285becu: goto label_285bec;
        case 0x285bf0u: goto label_285bf0;
        case 0x285bf4u: goto label_285bf4;
        case 0x285bf8u: goto label_285bf8;
        case 0x285bfcu: goto label_285bfc;
        case 0x285c00u: goto label_285c00;
        case 0x285c04u: goto label_285c04;
        case 0x285c08u: goto label_285c08;
        case 0x285c0cu: goto label_285c0c;
        case 0x285c10u: goto label_285c10;
        case 0x285c14u: goto label_285c14;
        case 0x285c18u: goto label_285c18;
        case 0x285c1cu: goto label_285c1c;
        case 0x285c20u: goto label_285c20;
        case 0x285c24u: goto label_285c24;
        case 0x285c28u: goto label_285c28;
        case 0x285c2cu: goto label_285c2c;
        case 0x285c30u: goto label_285c30;
        case 0x285c34u: goto label_285c34;
        case 0x285c38u: goto label_285c38;
        case 0x285c3cu: goto label_285c3c;
        case 0x285c40u: goto label_285c40;
        case 0x285c44u: goto label_285c44;
        case 0x285c48u: goto label_285c48;
        case 0x285c4cu: goto label_285c4c;
        case 0x285c50u: goto label_285c50;
        case 0x285c54u: goto label_285c54;
        case 0x285c58u: goto label_285c58;
        case 0x285c5cu: goto label_285c5c;
        case 0x285c60u: goto label_285c60;
        case 0x285c64u: goto label_285c64;
        case 0x285c68u: goto label_285c68;
        case 0x285c6cu: goto label_285c6c;
        case 0x285c70u: goto label_285c70;
        case 0x285c74u: goto label_285c74;
        case 0x285c78u: goto label_285c78;
        case 0x285c7cu: goto label_285c7c;
        case 0x285c80u: goto label_285c80;
        case 0x285c84u: goto label_285c84;
        case 0x285c88u: goto label_285c88;
        case 0x285c8cu: goto label_285c8c;
        case 0x285c90u: goto label_285c90;
        case 0x285c94u: goto label_285c94;
        case 0x285c98u: goto label_285c98;
        case 0x285c9cu: goto label_285c9c;
        case 0x285ca0u: goto label_285ca0;
        case 0x285ca4u: goto label_285ca4;
        default: return;
    }

label_2854d8:
    // 0x2854d8: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x2854d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x2854D8 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2854dc:
    // 0x2854dc: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x2854dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x2854DC raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2854e0:
    // 0x2854e0: 0x0  nop
    ctx->pc = 0x2854e0u;
    // NOP
label_2854e4:
    // 0x2854e4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2854e4u;
    
label_2854e8:
    // 0x2854e8: 0x14020033  bne         $zero, $v0, . + 4 + (0x33 << 2)
label_2854ec:
    if (ctx->pc == 0x2854ECu) {
        ctx->pc = 0x2854F0u;
        goto label_2854f0;
    }
    ctx->pc = 0x2854E8u;
    {
        const bool branch_taken_0x2854e8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x2854e8) {
            ctx->pc = 0x2855B8u;
            goto label_2855b8;
        }
    }
    ctx->pc = 0x2854F0u;
label_2854f0:
    // 0x2854f0: 0x42a40000  .word       0x42A40000                   # INVALID     $s5, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2854f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x2854F0 raw=0x42A40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2854f4:
    // 0x2854f4: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2854f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2854f8:
    // 0x2854f8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x2854f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2854fc:
    // 0x2854fc: 0x43070000  .word       0x43070000                   # INVALID     $t8, $a3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2854fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2854FC raw=0x43070000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285500:
    // 0x285500: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x285500u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_285504:
    // 0x285504: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_285508:
    if (ctx->pc == 0x285508u) {
        ctx->pc = 0x285508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285504u;
        // 0x285508: 0xc1a80000  ll          $t0, 0x0($t5) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28550Cu;
        goto label_28550c;
    }
    ctx->pc = 0x285504u;
    {
        const bool branch_taken_0x285504 = (false);
        ctx->pc = 0x285508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285504u;
        // 0x285508: 0xc1a80000  ll          $t0, 0x0($t5) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x285504) {
            ctx->pc = 0x285508u;
            goto label_285508;
        }
    }
    ctx->pc = 0x28550Cu;
label_28550c:
    // 0x28550c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28550cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285510:
    // 0x285510: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x285510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285514:
    // 0x285514: 0x42ce0000  .word       0x42CE0000                   # INVALID     $s6, $t6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285514u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x285514 raw=0x42CE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285518:
    // 0x285518: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x285518u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28551c:
    // 0x28551c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x28551cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_285520:
    // 0x285520: 0x0  nop
    ctx->pc = 0x285520u;
    // NOP
label_285524:
    // 0x285524: 0x0  nop
    ctx->pc = 0x285524u;
    // NOP
label_285528:
    // 0x285528: 0x7020008  bltzl       $t8, . + 4 + (0x8 << 2)
label_28552c:
    if (ctx->pc == 0x28552Cu) {
        ctx->pc = 0x285530u;
        goto label_285530;
    }
    ctx->pc = 0x285528u;
    {
        const bool branch_taken_0x285528 = (GPR_S32(ctx, 24) < 0);
        if (branch_taken_0x285528) {
            ctx->pc = 0x28554Cu;
            goto label_28554c;
        }
    }
    ctx->pc = 0x285530u;
label_285530:
    // 0x285530: 0x42980000  .word       0x42980000                   # INVALID     $s4, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285530u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x285530 raw=0x42980000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285534:
    // 0x285534: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x285534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285538:
    // 0x285538: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x285538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28553c:
    // 0x28553c: 0x43270000  .word       0x43270000                   # INVALID     $t9, $a3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28553cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x28553C raw=0x43270000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285540:
    // 0x285540: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_285544:
    if (ctx->pc == 0x285544u) {
        ctx->pc = 0x285544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285540u;
        // 0x285544: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x285544 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x285548u;
        goto label_285548;
    }
    ctx->pc = 0x285540u;
    {
        const bool branch_taken_0x285540 = (false);
        ctx->pc = 0x285544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285540u;
        // 0x285544: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x285544 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x285540) {
            ctx->pc = 0x285544u;
            goto label_285544;
        }
    }
    ctx->pc = 0x285548u;
label_285548:
    // 0x285548: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x285548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28554c:
    // 0x28554c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28554cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285550:
    // 0x285550: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x285550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285554:
    // 0x285554: 0x42d40000  .word       0x42D40000                   # INVALID     $s6, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285554u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x285554 raw=0x42D40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285558:
    // 0x285558: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x285558u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28555c:
    // 0x28555c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x28555cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_285560:
    // 0x285560: 0x0  nop
    ctx->pc = 0x285560u;
    // NOP
label_285564:
    // 0x285564: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x285564u;
    
label_285568:
    // 0x285568: 0xf020009  jal         func_C080024
label_28556c:
    if (ctx->pc == 0x28556Cu) {
        ctx->pc = 0x285570u;
        goto label_285570;
    }
    ctx->pc = 0x285568u;
    SET_GPR_U32(ctx, 31, 0x285570u);
    ctx->pc = 0xC080024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC080024u, 0x285568u, 0x285570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285570u;
label_285570:
    // 0x285570: 0x428c0000  .word       0x428C0000                   # INVALID     $s4, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285570u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x285570 raw=0x428C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285574:
    // 0x285574: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x285574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285578:
    // 0x285578: 0xc2280000  ll          $t0, 0x0($s1)
    ctx->pc = 0x285578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28557c:
    // 0x28557c: 0x433b0000  .word       0x433B0000                   # INVALID     $t9, $k1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28557cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x28557C raw=0x433B0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285580:
    // 0x285580: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x285580u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_285584:
    // 0x285584: 0x423c0000  .word       0x423C0000                   # INVALID     $s1, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285584u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x285584 raw=0x423C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285588:
    // 0x285588: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x285588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28558c:
    // 0x28558c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x28558cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285590:
    // 0x285590: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x285590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285594:
    // 0x285594: 0x42b40000  .word       0x42B40000                   # INVALID     $s5, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285594u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x285594 raw=0x42B40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285598:
    // 0x285598: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x285598u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x285598 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28559c:
    // 0x28559c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x28559cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2855a0:
    // 0x2855a0: 0x0  nop
    ctx->pc = 0x2855a0u;
    // NOP
label_2855a4:
    // 0x2855a4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2855a4u;
    
label_2855a8:
    // 0x2855a8: 0x14020052  bne         $zero, $v0, . + 4 + (0x52 << 2)
label_2855ac:
    if (ctx->pc == 0x2855ACu) {
        ctx->pc = 0x2855B0u;
        goto label_2855b0;
    }
    ctx->pc = 0x2855A8u;
    {
        const bool branch_taken_0x2855a8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x2855a8) {
            ctx->pc = 0x2856F4u;
            goto label_2856f4;
        }
    }
    ctx->pc = 0x2855B0u;
label_2855b0:
    // 0x2855b0: 0xc1d80000  ll          $t8, 0x0($t6)
    ctx->pc = 0x2855b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2855b4:
    // 0x2855b4: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x2855b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2855b8:
    // 0x2855b8: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2855b8u;
    // CACHE instruction (ignored)
label_2855bc:
    // 0x2855bc: 0x42500000  .word       0x42500000                   # INVALID     $s2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2855bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2855BC raw=0x42500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2855c0:
    // 0x2855c0: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2855c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x2855C0 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2855c4:
    // 0x2855c4: 0x42580000  .word       0x42580000                   # INVALID     $s2, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2855c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2855C4 raw=0x42580000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2855c8:
    // 0x2855c8: 0xc1d80000  ll          $t8, 0x0($t6)
    ctx->pc = 0x2855c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2855cc:
    // 0x2855cc: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x2855ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2855d0:
    // 0x2855d0: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2855d0u;
    // CACHE instruction (ignored)
label_2855d4:
    // 0x2855d4: 0x42500000  .word       0x42500000                   # INVALID     $s2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2855d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2855D4 raw=0x42500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2855d8:
    // 0x2855d8: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2855d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x2855D8 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2855dc:
    // 0x2855dc: 0x42580000  .word       0x42580000                   # INVALID     $s2, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2855dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2855DC raw=0x42580000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2855e0:
    // 0x2855e0: 0x0  nop
    ctx->pc = 0x2855e0u;
    // NOP
label_2855e4:
    // 0x2855e4: 0x0  nop
    ctx->pc = 0x2855e4u;
    // NOP
label_2855e8:
    // 0x2855e8: 0x7010053  bgez        $t8, . + 4 + (0x53 << 2)
label_2855ec:
    if (ctx->pc == 0x2855ECu) {
        ctx->pc = 0x2855F0u;
        goto label_2855f0;
    }
    ctx->pc = 0x2855E8u;
    {
        const bool branch_taken_0x2855e8 = (GPR_S32(ctx, 24) >= 0);
        if (branch_taken_0x2855e8) {
            ctx->pc = 0x285738u;
            goto label_285738;
        }
    }
    ctx->pc = 0x2855F0u;
label_2855f0:
    // 0x2855f0: 0xc1d80000  ll          $t8, 0x0($t6)
    ctx->pc = 0x2855f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2855f4:
    // 0x2855f4: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x2855f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2855f8:
    // 0x2855f8: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2855f8u;
    // CACHE instruction (ignored)
label_2855fc:
    // 0x2855fc: 0x42500000  .word       0x42500000                   # INVALID     $s2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2855fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2855FC raw=0x42500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285600:
    // 0x285600: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285600u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x285600 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285604:
    // 0x285604: 0x42580000  .word       0x42580000                   # INVALID     $s2, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285604u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x285604 raw=0x42580000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285608:
    // 0x285608: 0xc1d80000  ll          $t8, 0x0($t6)
    ctx->pc = 0x285608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28560c:
    // 0x28560c: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x28560cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285610:
    // 0x285610: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x285610u;
    // CACHE instruction (ignored)
label_285614:
    // 0x285614: 0x42500000  .word       0x42500000                   # INVALID     $s2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285614u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x285614 raw=0x42500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285618:
    // 0x285618: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285618u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x285618 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28561c:
    // 0x28561c: 0x42580000  .word       0x42580000                   # INVALID     $s2, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28561cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28561C raw=0x42580000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285620:
    // 0x285620: 0x0  nop
    ctx->pc = 0x285620u;
    // NOP
label_285624:
    // 0x285624: 0x0  nop
    ctx->pc = 0x285624u;
    // NOP
label_285628:
    // 0x285628: 0xf010053  jal         func_C04014C
label_28562c:
    if (ctx->pc == 0x28562Cu) {
        ctx->pc = 0x285630u;
        goto label_285630;
    }
    ctx->pc = 0x285628u;
    SET_GPR_U32(ctx, 31, 0x285630u);
    ctx->pc = 0xC04014Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC04014Cu, 0x285628u, 0x285630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285630u;
label_285630:
    // 0x285630: 0xc1d80000  ll          $t8, 0x0($t6)
    ctx->pc = 0x285630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285634:
    // 0x285634: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x285634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285638:
    // 0x285638: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x285638u;
    // CACHE instruction (ignored)
label_28563c:
    // 0x28563c: 0x42500000  .word       0x42500000                   # INVALID     $s2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28563cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28563C raw=0x42500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285640:
    // 0x285640: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285640u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x285640 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285644:
    // 0x285644: 0x42580000  .word       0x42580000                   # INVALID     $s2, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285644u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x285644 raw=0x42580000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285648:
    // 0x285648: 0xc1d80000  ll          $t8, 0x0($t6)
    ctx->pc = 0x285648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28564c:
    // 0x28564c: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x28564cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285650:
    // 0x285650: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x285650u;
    // CACHE instruction (ignored)
label_285654:
    // 0x285654: 0x42500000  .word       0x42500000                   # INVALID     $s2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285654u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x285654 raw=0x42500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285658:
    // 0x285658: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285658u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x285658 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28565c:
    // 0x28565c: 0x42580000  .word       0x42580000                   # INVALID     $s2, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28565cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28565C raw=0x42580000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285660:
    // 0x285660: 0x0  nop
    ctx->pc = 0x285660u;
    // NOP
label_285664:
    // 0x285664: 0x0  nop
    ctx->pc = 0x285664u;
    // NOP
label_285668:
    // 0x285668: 0x14010053  bne         $zero, $at, . + 4 + (0x53 << 2)
label_28566c:
    if (ctx->pc == 0x28566Cu) {
        ctx->pc = 0x285670u;
        goto label_285670;
    }
    ctx->pc = 0x285668u;
    {
        const bool branch_taken_0x285668 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 1));
        if (branch_taken_0x285668) {
            ctx->pc = 0x2857B8u;
            goto label_2857b8;
        }
    }
    ctx->pc = 0x285670u;
label_285670:
    // 0x285670: 0xc1d80000  ll          $t8, 0x0($t6)
    ctx->pc = 0x285670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285674:
    // 0x285674: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x285674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285678:
    // 0x285678: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x285678u;
    // CACHE instruction (ignored)
label_28567c:
    // 0x28567c: 0x42500000  .word       0x42500000                   # INVALID     $s2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28567cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28567C raw=0x42500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285680:
    // 0x285680: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285680u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x285680 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285684:
    // 0x285684: 0x42580000  .word       0x42580000                   # INVALID     $s2, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285684u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x285684 raw=0x42580000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285688:
    // 0x285688: 0xc1d80000  ll          $t8, 0x0($t6)
    ctx->pc = 0x285688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28568c:
    // 0x28568c: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x28568cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285690:
    // 0x285690: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x285690u;
    // CACHE instruction (ignored)
label_285694:
    // 0x285694: 0x42500000  .word       0x42500000                   # INVALID     $s2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285694u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x285694 raw=0x42500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285698:
    // 0x285698: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285698u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x285698 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28569c:
    // 0x28569c: 0x42580000  .word       0x42580000                   # INVALID     $s2, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28569cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28569C raw=0x42580000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2856a0:
    // 0x2856a0: 0x0  nop
    ctx->pc = 0x2856a0u;
    // NOP
label_2856a4:
    // 0x2856a4: 0x0  nop
    ctx->pc = 0x2856a4u;
    // NOP
label_2856a8:
    // 0x2856a8: 0x8010054  j           func_040150
label_2856ac:
    if (ctx->pc == 0x2856ACu) {
        ctx->pc = 0x2856B0u;
        goto label_2856b0;
    }
    ctx->pc = 0x2856A8u;
    ctx->pc = 0x40150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40150u, 0x2856A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2856B0u;
label_2856b0:
    // 0x2856b0: 0xc1d80000  ll          $t8, 0x0($t6)
    ctx->pc = 0x2856b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2856b4:
    // 0x2856b4: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x2856b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2856b8:
    // 0x2856b8: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2856b8u;
    // CACHE instruction (ignored)
label_2856bc:
    // 0x2856bc: 0x42500000  .word       0x42500000                   # INVALID     $s2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2856bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2856BC raw=0x42500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2856c0:
    // 0x2856c0: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2856c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x2856C0 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2856c4:
    // 0x2856c4: 0x42580000  .word       0x42580000                   # INVALID     $s2, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2856c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2856C4 raw=0x42580000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2856c8:
    // 0x2856c8: 0xc1d80000  ll          $t8, 0x0($t6)
    ctx->pc = 0x2856c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2856cc:
    // 0x2856cc: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x2856ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2856d0:
    // 0x2856d0: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2856d0u;
    // CACHE instruction (ignored)
label_2856d4:
    // 0x2856d4: 0x42500000  .word       0x42500000                   # INVALID     $s2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2856d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2856D4 raw=0x42500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2856d8:
    // 0x2856d8: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2856d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x2856D8 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2856dc:
    // 0x2856dc: 0x42580000  .word       0x42580000                   # INVALID     $s2, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2856dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2856DC raw=0x42580000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2856e0:
    // 0x2856e0: 0x0  nop
    ctx->pc = 0x2856e0u;
    // NOP
label_2856e4:
    // 0x2856e4: 0x0  nop
    ctx->pc = 0x2856e4u;
    // NOP
label_2856e8:
    // 0x2856e8: 0xf010054  jal         func_C040150
label_2856ec:
    if (ctx->pc == 0x2856ECu) {
        ctx->pc = 0x2856F0u;
        goto label_2856f0;
    }
    ctx->pc = 0x2856E8u;
    SET_GPR_U32(ctx, 31, 0x2856F0u);
    ctx->pc = 0xC040150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC040150u, 0x2856E8u, 0x2856F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2856F0u;
label_2856f0:
    // 0x2856f0: 0xc1d80000  ll          $t8, 0x0($t6)
    ctx->pc = 0x2856f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2856f4:
    // 0x2856f4: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x2856f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2856f8:
    // 0x2856f8: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2856f8u;
    // CACHE instruction (ignored)
label_2856fc:
    // 0x2856fc: 0x42500000  .word       0x42500000                   # INVALID     $s2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2856fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2856FC raw=0x42500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285700:
    // 0x285700: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285700u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x285700 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285704:
    // 0x285704: 0x42580000  .word       0x42580000                   # INVALID     $s2, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285704u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x285704 raw=0x42580000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285708:
    // 0x285708: 0xc1d80000  ll          $t8, 0x0($t6)
    ctx->pc = 0x285708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28570c:
    // 0x28570c: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x28570cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_285710:
    // 0x285710: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x285710u;
    // CACHE instruction (ignored)
label_285714:
    // 0x285714: 0x42500000  .word       0x42500000                   # INVALID     $s2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285714u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x285714 raw=0x42500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285718:
    // 0x285718: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x285718u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x285718 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28571c:
    // 0x28571c: 0x42580000  .word       0x42580000                   # INVALID     $s2, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28571cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28571C raw=0x42580000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285720:
    // 0x285720: 0x0  nop
    ctx->pc = 0x285720u;
    // NOP
label_285724:
    // 0x285724: 0x0  nop
    ctx->pc = 0x285724u;
    // NOP
label_285728:
    // 0x285728: 0x14010054  bne         $zero, $at, . + 4 + (0x54 << 2)
label_28572c:
    if (ctx->pc == 0x28572Cu) {
        ctx->pc = 0x285730u;
        goto label_285730;
    }
    ctx->pc = 0x285728u;
    {
        const bool branch_taken_0x285728 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 1));
        if (branch_taken_0x285728) {
            ctx->pc = 0x28587Cu;
            goto label_28587c;
        }
    }
    ctx->pc = 0x285730u;
label_285730:
    // 0x285730: 0x6360300  .word       0x06360300                   # INVALID     $s1, $s6, 0x300 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x285730u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x16 at 0x285730 raw=0x06360300");
 /* MITIGATED */
label_285734:
    // 0x285734: 0x9083130  j           func_420C4C0
label_285738:
    if (ctx->pc == 0x285738u) {
        ctx->pc = 0x285738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285734u;
        // 0x285738: 0xababab48  swl         $t3, -0x54B8($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294945608); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28573Cu;
        goto label_28573c;
    }
    ctx->pc = 0x285734u;
    ctx->pc = 0x285738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285734u;
    // 0x285738: 0xababab48  swl         $t3, -0x54B8($sp) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294945608); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x420C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420C4C0u, 0x285734u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28573Cu;
label_28573c:
    // 0x28573c: 0xacacac  .word       0x00ACACAC                   # dadd        $s5, $a1, $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28573cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 5); int64_t b = (int64_t)GPR_S64(ctx, 12); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_285740:
    // 0x285740: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285740u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_285744:
    // 0x285744: 0x6400  sll         $t4, $zero, 16
    ctx->pc = 0x285744u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_285748:
    // 0x285748: 0x645a0000  daddiu      $k0, $v0, 0x0
    ctx->pc = 0x285748u;
    SET_GPR_S64(ctx, 26, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)0);
label_28574c:
    // 0x28574c: 0x3c000000  lui         $zero, 0x0
    ctx->pc = 0x28574cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_285750:
    // 0x285750: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285750u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_285754:
    // 0x285754: 0x645a1e  .word       0x00645A1E                   # ddiv        $t3, $v1, $a0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285754u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x285754 raw=0x00645A1E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285758:
    // 0x285758: 0x64461400  daddiu      $a2, $v0, 0x1400
    ctx->pc = 0x285758u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)5120);
label_28575c:
    // 0x28575c: 0x320f0000  andi        $t7, $s0, 0x0
    ctx->pc = 0x28575cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)0);
label_285760:
    // 0x285760: 0xa000064  j           func_8000190
label_285764:
    if (ctx->pc == 0x285764u) {
        ctx->pc = 0x285764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285760u;
        // 0x285764: 0x6428  .word       0x00006428                   # mfsa        $t4 # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 12, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285768u;
        goto label_285768;
    }
    ctx->pc = 0x285760u;
    ctx->pc = 0x285764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285760u;
    // 0x285764: 0x6428  .word       0x00006428                   # mfsa        $t4 # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    SET_GPR_U32(ctx, 12, ctx->sa);
    ctx->in_delay_slot = false;
    ctx->pc = 0x8000190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8000190u, 0x285760u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x285768u;
label_285768:
    // 0x285768: 0x641e0a  .word       0x00641E0A                   # movz        $v1, $v1, $a0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285768u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 3));
label_28576c:
    // 0x28576c: 0x64190a00  daddiu      $t9, $zero, 0xA00
    ctx->pc = 0x28576cu;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2560);
label_285770:
    // 0x285770: 0x140a0000  bne         $zero, $t2, . + 4 + (0x0 << 2)
label_285774:
    if (ctx->pc == 0x285774u) {
        ctx->pc = 0x285774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285770u;
        // 0x285774: 0x5000064  bltz        $t0, . + 4 + (0x64 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x285908 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285778u;
        goto label_285778;
    }
    ctx->pc = 0x285770u;
    {
        const bool branch_taken_0x285770 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 10));
        ctx->pc = 0x285774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285770u;
        // 0x285774: 0x5000064  bltz        $t0, . + 4 + (0x64 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x285908 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285770) {
            ctx->pc = 0x285774u;
            goto label_285774;
        }
    }
    ctx->pc = 0x285778u;
label_285778:
    // 0x285778: 0x640f  .word       0x0000640F                   # sync.p # 00006000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285778u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28577c:
    // 0x28577c: 0x640a05  .word       0x00640A05                   # INVALID     $v1, $a0, 0xA05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28577cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28577C raw=0x00640A05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285780:
    // 0x285780: 0x0  nop
    ctx->pc = 0x285780u;
    // NOP
label_285784:
    // 0x285784: 0x0  nop
    ctx->pc = 0x285784u;
    // NOP
label_285788:
    // 0x285788: 0x196680  sll         $t4, $t9, 26
    ctx->pc = 0x285788u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 25), 26));
label_28578c:
    // 0x28578c: 0x0  nop
    ctx->pc = 0x28578cu;
    // NOP
label_285790:
    // 0x285790: 0x196650  .word       0x00196650                   # mfhi        $t4 # 00190640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285790u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_285794:
    // 0x285794: 0x0  nop
    ctx->pc = 0x285794u;
    // NOP
label_285798:
    // 0x285798: 0x0  nop
    ctx->pc = 0x285798u;
    // NOP
label_28579c:
    // 0x28579c: 0x0  nop
    ctx->pc = 0x28579cu;
    // NOP
label_2857a0:
    // 0x2857a0: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2857a0u;
//     throw std::runtime_error("Unhandled COP2 format: 0xA at 0x2857A0 raw=0x49497350");
 /* MITIGATED */
label_2857a4:
    // 0x2857a4: 0x6762696c  daddiu      $v0, $k1, 0x696C
    ctx->pc = 0x2857a4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26988);
label_2857a8:
    // 0x2857a8: 0x68706172  ldl         $s0, 0x6172($v1)
    ctx->pc = 0x2857a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24946); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_2857ac:
    // 0x2857ac: 0x30303432  andi        $s0, $at, 0x3432
    ctx->pc = 0x2857acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)13362);
label_2857b0:
    // 0x2857b0: 0x20001  .word       0x00020001                   # INVALID     $zero, $v0, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2857b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2857B0 raw=0x00020001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2857b4:
    // 0x2857b4: 0x30001  .word       0x00030001                   # INVALID     $zero, $v1, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2857b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2857B4 raw=0x00030001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2857b8:
    // 0x2857b8: 0x0  nop
    ctx->pc = 0x2857b8u;
    // NOP
label_2857bc:
    // 0x2857bc: 0x0  nop
    ctx->pc = 0x2857bcu;
    // NOP
label_2857c0:
    // 0x2857c0: 0x1000404  .word       0x01000404                   # sllv        $zero, $zero, $t0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2857c0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2857c4:
    // 0x2857c4: 0x20000000  addi        $zero, $zero, 0x0
    ctx->pc = 0x2857c4u;
    // NOP (addi to $zero)
label_2857c8:
    // 0x2857c8: 0x0  nop
    ctx->pc = 0x2857c8u;
    // NOP
label_2857cc:
    // 0x2857cc: 0x5000000  bltz        $t0, . + 4 + (0x0 << 2)
label_2857d0:
    if (ctx->pc == 0x2857D0u) {
        ctx->pc = 0x2857D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857CCu;
        // 0x2857d0: 0x6000000  bltz        $s0, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2857D4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2857D4u;
        goto label_2857d4;
    }
    ctx->pc = 0x2857CCu;
    {
        const bool branch_taken_0x2857cc = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x2857D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857CCu;
        // 0x2857d0: 0x6000000  bltz        $s0, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2857D4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857cc) {
            ctx->pc = 0x2857D0u;
            goto label_2857d0;
        }
    }
    ctx->pc = 0x2857D4u;
label_2857d4:
    // 0x2857d4: 0x3000000  .word       0x03000000                   # sll         $zero, $zero, 0 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2857d4u;
    // NOP
label_2857d8:
    // 0x2857d8: 0x2000000  .word       0x02000000                   # sll         $zero, $zero, 0 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2857d8u;
    // NOP
label_2857dc:
    // 0x2857dc: 0x4000000  bltz        $zero, . + 4 + (0x0 << 2)
label_2857e0:
    if (ctx->pc == 0x2857E0u) {
        ctx->pc = 0x2857E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857DCu;
        // 0x2857e0: 0x6000000  bltz        $s0, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2857E4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2857E4u;
        goto label_2857e4;
    }
    ctx->pc = 0x2857DCu;
    {
        const bool branch_taken_0x2857dc = (GPR_S32(ctx, 0) < 0);
        ctx->pc = 0x2857E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857DCu;
        // 0x2857e0: 0x6000000  bltz        $s0, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2857E4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857dc) {
            ctx->pc = 0x2857E0u;
            goto label_2857e0;
        }
    }
    ctx->pc = 0x2857E4u;
label_2857e4:
    // 0x2857e4: 0x0  nop
    ctx->pc = 0x2857e4u;
    // NOP
label_2857e8:
    // 0x2857e8: 0x0  nop
    ctx->pc = 0x2857e8u;
    // NOP
label_2857ec:
    // 0x2857ec: 0x0  nop
    ctx->pc = 0x2857ecu;
    // NOP
label_2857f0:
    // 0x2857f0: 0x10008000  b           . + 4 + (-0x8000 << 2)
label_2857f4:
    if (ctx->pc == 0x2857F4u) {
        ctx->pc = 0x2857F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857F0u;
        // 0x2857f4: 0x10009000  b           . + 4 + (-0x7000 << 2) (Delay Slot)
        // Likely branch instruction at 0x2857F4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2857F8u;
        goto label_2857f8;
    }
    ctx->pc = 0x2857F0u;
    {
        const bool branch_taken_0x2857f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2857F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857F0u;
        // 0x2857f4: 0x10009000  b           . + 4 + (-0x7000 << 2) (Delay Slot)
        // Likely branch instruction at 0x2857F4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857f0) {
            ctx->pc = 0x2657F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x2657f4; return; }
        }
    }
    ctx->pc = 0x2857F8u;
label_2857f8:
    // 0x2857f8: 0x1000a000  b           . + 4 + (-0x6000 << 2)
label_2857fc:
    if (ctx->pc == 0x2857FCu) {
        ctx->pc = 0x2857FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857F8u;
        // 0x2857fc: 0x1000b000  b           . + 4 + (-0x5000 << 2) (Delay Slot)
        // Likely branch instruction at 0x2857FC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285800u;
        goto label_285800;
    }
    ctx->pc = 0x2857F8u;
    {
        const bool branch_taken_0x2857f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2857FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2857F8u;
        // 0x2857fc: 0x1000b000  b           . + 4 + (-0x5000 << 2) (Delay Slot)
        // Likely branch instruction at 0x2857FC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857f8) {
            ctx->pc = 0x26D7FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x26d7fc; return; }
        }
    }
    ctx->pc = 0x285800u;
label_285800:
    // 0x285800: 0x1000b400  b           . + 4 + (-0x4C00 << 2)
label_285804:
    if (ctx->pc == 0x285804u) {
        ctx->pc = 0x285804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285800u;
        // 0x285804: 0x1000c000  b           . + 4 + (-0x4000 << 2) (Delay Slot)
        // Likely branch instruction at 0x285804 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285808u;
        goto label_285808;
    }
    ctx->pc = 0x285800u;
    {
        const bool branch_taken_0x285800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285800u;
        // 0x285804: 0x1000c000  b           . + 4 + (-0x4000 << 2) (Delay Slot)
        // Likely branch instruction at 0x285804 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285800) {
            ctx->pc = 0x272804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x272804; return; }
        }
    }
    ctx->pc = 0x285808u;
label_285808:
    // 0x285808: 0x1000c400  b           . + 4 + (-0x3C00 << 2)
label_28580c:
    if (ctx->pc == 0x28580Cu) {
        ctx->pc = 0x28580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285808u;
        // 0x28580c: 0x1000c800  b           . + 4 + (-0x3800 << 2) (Delay Slot)
        // Likely branch instruction at 0x28580C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285810u;
        goto label_285810;
    }
    ctx->pc = 0x285808u;
    {
        const bool branch_taken_0x285808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285808u;
        // 0x28580c: 0x1000c800  b           . + 4 + (-0x3800 << 2) (Delay Slot)
        // Likely branch instruction at 0x28580C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285808) {
            ctx->pc = 0x27680Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x27680c; return; }
        }
    }
    ctx->pc = 0x285810u;
label_285810:
    // 0x285810: 0x1000d000  b           . + 4 + (-0x3000 << 2)
label_285814:
    if (ctx->pc == 0x285814u) {
        ctx->pc = 0x285814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285810u;
        // 0x285814: 0x1000d400  b           . + 4 + (-0x2C00 << 2) (Delay Slot)
        // Likely branch instruction at 0x285814 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285818u;
        goto label_285818;
    }
    ctx->pc = 0x285810u;
    {
        const bool branch_taken_0x285810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285810u;
        // 0x285814: 0x1000d400  b           . + 4 + (-0x2C00 << 2) (Delay Slot)
        // Likely branch instruction at 0x285814 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285810) {
            ctx->pc = 0x279814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x279814; return; }
        }
    }
    ctx->pc = 0x285818u;
label_285818:
    // 0x285818: 0x0  nop
    ctx->pc = 0x285818u;
    // NOP
label_28581c:
    // 0x28581c: 0x0  nop
    ctx->pc = 0x28581cu;
    // NOP
label_285820:
    // 0x285820: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x285820u;
//     throw std::runtime_error("Unhandled COP2 format: 0xA at 0x285820 raw=0x49497350");
 /* MITIGATED */
label_285824:
    // 0x285824: 0x6462696c  daddiu      $v0, $v1, 0x696C
    ctx->pc = 0x285824u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26988);
label_285828:
    // 0x285828: 0x2020616d  addi        $zero, $at, 0x616D
    ctx->pc = 0x285828u;
    // NOP (addi to $zero)
label_28582c:
    // 0x28582c: 0x30303432  andi        $s0, $at, 0x3432
    ctx->pc = 0x28582cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)13362);
label_285830:
    // 0x285830: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285830u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x285830 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285834:
    // 0x285834: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285834u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x285834 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285838:
    // 0x285838: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285838u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x285838 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28583c:
    // 0x28583c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28583cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28583C raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285840:
    // 0x285840: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285840u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x285840 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285844:
    // 0x285844: 0x0  nop
    ctx->pc = 0x285844u;
    // NOP
label_285848:
    // 0x285848: 0x0  nop
    ctx->pc = 0x285848u;
    // NOP
label_28584c:
    // 0x28584c: 0x0  nop
    ctx->pc = 0x28584cu;
    // NOP
label_285850:
    // 0x285850: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285850u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x285850 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285854:
    // 0x285854: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285854u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x285854 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285858:
    // 0x285858: 0x3000000  .word       0x03000000                   # sll         $zero, $zero, 0 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285858u;
    // NOP
label_28585c:
    // 0x28585c: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x28585cu;
    
label_285860:
    // 0x285860: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x285860u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_285864:
    // 0x285864: 0x0  nop
    ctx->pc = 0x285864u;
    // NOP
label_285868:
    // 0x285868: 0x20100  sll         $zero, $v0, 4
    ctx->pc = 0x285868u;
    
label_28586c:
    // 0x28586c: 0x30000  sll         $zero, $v1, 0
    ctx->pc = 0x28586cu;
    
label_285870:
    // 0x285870: 0x0  nop
    ctx->pc = 0x285870u;
    // NOP
label_285874:
    // 0x285874: 0x0  nop
    ctx->pc = 0x285874u;
    // NOP
label_285878:
    // 0x285878: 0x30200  sll         $zero, $v1, 8
    ctx->pc = 0x285878u;
    
label_28587c:
    // 0x28587c: 0x0  nop
    ctx->pc = 0x28587cu;
    // NOP
label_285880:
    // 0x285880: 0x0  nop
    ctx->pc = 0x285880u;
    // NOP
label_285884:
    // 0x285884: 0x0  nop
    ctx->pc = 0x285884u;
    // NOP
label_285888:
    // 0x285888: 0x0  nop
    ctx->pc = 0x285888u;
    // NOP
label_28588c:
    // 0x28588c: 0x0  nop
    ctx->pc = 0x28588cu;
    // NOP
label_285890:
    // 0x285890: 0x0  nop
    ctx->pc = 0x285890u;
    // NOP
label_285894:
    // 0x285894: 0x0  nop
    ctx->pc = 0x285894u;
    // NOP
label_285898:
    // 0x285898: 0x0  nop
    ctx->pc = 0x285898u;
    // NOP
label_28589c:
    // 0x28589c: 0x0  nop
    ctx->pc = 0x28589cu;
    // NOP
label_2858a0:
    // 0x2858a0: 0x362e9c14  ori         $t6, $s1, 0x9C14
    ctx->pc = 0x2858a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)39956);
label_2858a4:
    // 0x2858a4: 0xb94fb21f  swr         $t7, -0x4DE1($t2)
    ctx->pc = 0x2858a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4294947359); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 15); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_2858a8:
    // 0x2858a8: 0x3c08873e  lui         $t0, 0x873E
    ctx->pc = 0x2858a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34622 << 16));
label_2858ac:
    // 0x2858ac: 0xbe2aaaa4  cache       0x0A, -0x555C($s1)
    ctx->pc = 0x2858acu;
    // CACHE instruction (ignored)
label_2858b0:
    // 0x2858b0: 0x1000404  .word       0x01000404                   # sllv        $zero, $zero, $t0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2858b0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2858b4:
    // 0x2858b4: 0x20000000  addi        $zero, $zero, 0x0
    ctx->pc = 0x2858b4u;
    // NOP (addi to $zero)
label_2858b8:
    // 0x2858b8: 0x0  nop
    ctx->pc = 0x2858b8u;
    // NOP
label_2858bc:
    // 0x2858bc: 0x5000000  bltz        $t0, . + 4 + (0x0 << 2)
label_2858c0:
    if (ctx->pc == 0x2858C0u) {
        ctx->pc = 0x2858C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858BCu;
        // 0x2858c0: 0x4000000  bltz        $zero, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2858C4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2858C4u;
        goto label_2858c4;
    }
    ctx->pc = 0x2858BCu;
    {
        const bool branch_taken_0x2858bc = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x2858C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858BCu;
        // 0x2858c0: 0x4000000  bltz        $zero, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2858C4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858bc) {
            ctx->pc = 0x2858C0u;
            goto label_2858c0;
        }
    }
    ctx->pc = 0x2858C4u;
label_2858c4:
    // 0x2858c4: 0x0  nop
    ctx->pc = 0x2858c4u;
    // NOP
label_2858c8:
    // 0x2858c8: 0x0  nop
    ctx->pc = 0x2858c8u;
    // NOP
label_2858cc:
    // 0x2858cc: 0x0  nop
    ctx->pc = 0x2858ccu;
    // NOP
label_2858d0:
    // 0x2858d0: 0x19d2c8  .word       0x0019D2C8                   # jr          $zero # 0019D2C0 <InstrIdType: CPU_SPECIAL>
label_2858d4:
    if (ctx->pc == 0x2858D4u) {
        ctx->pc = 0x2858D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858D0u;
        // 0x2858d4: 0x19d3d8  .word       0x0019D3D8                   # mult        $k0, $zero, $t9 # 000003C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2858D8u;
        goto label_2858d8;
    }
    ctx->pc = 0x2858D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2858D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858D0u;
        // 0x2858d4: 0x19d3d8  .word       0x0019D3D8                   # mult        $k0, $zero, $t9 # 000003C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2858D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2858D8u;
label_2858d8:
    // 0x2858d8: 0x19d560  .word       0x0019D560                   # add         $k0, $zero, $t9 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2858d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_2858dc:
    // 0x2858dc: 0x19d6c8  .word       0x0019D6C8                   # jr          $zero # 0019D6C0 <InstrIdType: CPU_SPECIAL>
label_2858e0:
    if (ctx->pc == 0x2858E0u) {
        ctx->pc = 0x2858E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858DCu;
        // 0x2858e0: 0x19d8c0  sll         $k1, $t9, 3 (Delay Slot)
        SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2858E4u;
        goto label_2858e4;
    }
    ctx->pc = 0x2858DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2858E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858DCu;
        // 0x2858e0: 0x19d8c0  sll         $k1, $t9, 3 (Delay Slot)
        SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2858DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2858E4u;
label_2858e4:
    // 0x2858e4: 0x19da10  .word       0x0019DA10                   # mfhi        $k1 # 00190200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2858e4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_2858e8:
    // 0x2858e8: 0x19dbd8  .word       0x0019DBD8                   # mult        $k1, $zero, $t9 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2858e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2858ec:
    // 0x2858ec: 0x19dd80  sll         $k1, $t9, 22
    ctx->pc = 0x2858ecu;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 25), 22));
label_2858f0:
    // 0x2858f0: 0x19d340  sll         $k0, $t9, 13
    ctx->pc = 0x2858f0u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
label_2858f4:
    // 0x2858f4: 0x19d490  .word       0x0019D490                   # mfhi        $k0 # 00190480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2858f4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2858f8:
    // 0x2858f8: 0x19d610  .word       0x0019D610                   # mfhi        $k0 # 00190600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2858f8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2858fc:
    // 0x2858fc: 0x19d7c0  sll         $k0, $t9, 31
    ctx->pc = 0x2858fcu;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 25), 31));
label_285900:
    // 0x285900: 0x19d960  .word       0x0019D960                   # add         $k1, $zero, $t9 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285900u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_285904:
    // 0x285904: 0x19daf0  tge         $zero, $t9, 875
    ctx->pc = 0x285904u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_285908:
    // 0x285908: 0x19dcb0  tge         $zero, $t9, 882
    ctx->pc = 0x285908u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_28590c:
    // 0x28590c: 0x19dea0  .word       0x0019DEA0                   # add         $k1, $zero, $t9 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28590cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_285910:
    // 0x285910: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285910u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x285910 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285914:
    // 0x285914: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285914u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x285914 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285918:
    // 0x285918: 0x0  nop
    ctx->pc = 0x285918u;
    // NOP
label_28591c:
    // 0x28591c: 0x0  nop
    ctx->pc = 0x28591cu;
    // NOP
label_285920:
    // 0x285920: 0x0  nop
    ctx->pc = 0x285920u;
    // NOP
label_285924:
    // 0x285924: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285924u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x285924 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285928:
    // 0x285928: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285928u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x285928 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28592c:
    // 0x28592c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28592cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28592C raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285930:
    // 0x285930: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x285930 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285934:
    // 0x285934: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285934u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x285934 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285938:
    // 0x285938: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x285938u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28593c:
    // 0x28593c: 0x0  nop
    ctx->pc = 0x28593cu;
    // NOP
label_285940:
    // 0x285940: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x285940u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_285944:
    // 0x285944: 0x0  nop
    ctx->pc = 0x285944u;
    // NOP
label_285948:
    // 0x285948: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x285948u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28594c:
    // 0x28594c: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28594cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_285950:
    // 0x285950: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x285950u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_285954:
    // 0x285954: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x285954u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_285958:
    // 0x285958: 0x0  nop
    ctx->pc = 0x285958u;
    // NOP
label_28595c:
    // 0x28595c: 0x0  nop
    ctx->pc = 0x28595cu;
    // NOP
label_285960:
    // 0x285960: 0x0  nop
    ctx->pc = 0x285960u;
    // NOP
label_285964:
    // 0x285964: 0x0  nop
    ctx->pc = 0x285964u;
    // NOP
label_285968:
    // 0x285968: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x285968u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28596c:
    // 0x28596c: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28596cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_285970:
    // 0x285970: 0x0  nop
    ctx->pc = 0x285970u;
    // NOP
label_285974:
    // 0x285974: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x285974u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_285978:
    // 0x285978: 0x0  nop
    ctx->pc = 0x285978u;
    // NOP
label_28597c:
    // 0x28597c: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28597cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_285980:
    // 0x285980: 0x0  nop
    ctx->pc = 0x285980u;
    // NOP
label_285984:
    // 0x285984: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x285984u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_285988:
    // 0x285988: 0xffc00000  sd          $zero, 0x0($fp)
    ctx->pc = 0x285988u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 0));
label_28598c:
    // 0x28598c: 0xbd  .word       0x000000BD                   # INVALID     $zero, $zero, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28598cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x28598C raw=0x000000BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285990:
    // 0x285990: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285990u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285994:
    // 0x285994: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x285994u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_285998:
    // 0x285998: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x285998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_28599c:
    // 0x28599c: 0xbd  .word       0x000000BD                   # INVALID     $zero, $zero, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28599cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x28599C raw=0x000000BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2859a0:
    // 0x2859a0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2859a0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2859a4:
    // 0x2859a4: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x2859a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_2859a8:
    // 0x2859a8: 0xffa10000  sd          $at, 0x0($sp)
    ctx->pc = 0x2859a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 1));
label_2859ac:
    // 0x2859ac: 0xbd  .word       0x000000BD                   # INVALID     $zero, $zero, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2859acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2859AC raw=0x000000BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2859b0:
    // 0x2859b0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2859b0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2859b4:
    // 0x2859b4: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x2859b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_2859b8:
    // 0x2859b8: 0xff900000  sd          $s0, 0x0($gp)
    ctx->pc = 0x2859b8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 0), GPR_U64(ctx, 16));
label_2859bc:
    // 0x2859bc: 0xbd  .word       0x000000BD                   # INVALID     $zero, $zero, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2859bcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2859BC raw=0x000000BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2859c0:
    // 0x2859c0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2859c0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2859c4:
    // 0x2859c4: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x2859c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_2859c8:
    // 0x2859c8: 0x0  nop
    ctx->pc = 0x2859c8u;
    // NOP
label_2859cc:
    // 0x2859cc: 0xc0  sll         $zero, $zero, 3
    ctx->pc = 0x2859ccu;
    
label_2859d0:
    // 0x2859d0: 0x0  nop
    ctx->pc = 0x2859d0u;
    // NOP
label_2859d4:
    // 0x2859d4: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x2859d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_2859d8:
    // 0x2859d8: 0x80000000  lb          $zero, 0x0($zero)
    ctx->pc = 0x2859d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x0u));
label_2859dc:
    // 0x2859dc: 0xbd  .word       0x000000BD                   # INVALID     $zero, $zero, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2859dcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2859DC raw=0x000000BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2859e0:
    // 0x2859e0: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x2859e0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_2859e4:
    // 0x2859e4: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x2859e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_2859e8:
    // 0x2859e8: 0xa0000000  sb          $zero, 0x0($zero)
    ctx->pc = 0x2859e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x0u, _value); } while (0);
label_2859ec:
    // 0x2859ec: 0xbd  .word       0x000000BD                   # INVALID     $zero, $zero, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2859ecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2859EC raw=0x000000BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2859f0:
    // 0x2859f0: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x2859f0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_2859f4:
    // 0x2859f4: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x2859f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_2859f8:
    // 0x2859f8: 0x88000000  lwl         $zero, 0x0($zero)
    ctx->pc = 0x2859f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 0) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 0, (int32_t)merged); }
label_2859fc:
    // 0x2859fc: 0xbd  .word       0x000000BD                   # INVALID     $zero, $zero, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2859fcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2859FC raw=0x000000BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285a00:
    // 0x285a00: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x285a00u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_285a04:
    // 0x285a04: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x285a04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_285a08:
    // 0x285a08: 0x90000000  lbu         $zero, 0x0($zero)
    ctx->pc = 0x285a08u;
    SET_GPR_ZE32(ctx, 0, (uint8_t)FAST_READ8(0x0u));
label_285a0c:
    // 0x285a0c: 0xbd  .word       0x000000BD                   # INVALID     $zero, $zero, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285a0cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x285A0C raw=0x000000BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_285a10:
    // 0x285a10: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x285a10u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_285a14:
    // 0x285a14: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x285a14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_285a18:
    // 0x285a18: 0x0  nop
    ctx->pc = 0x285a18u;
    // NOP
label_285a1c:
    // 0x285a1c: 0x0  nop
    ctx->pc = 0x285a1cu;
    // NOP
label_285a20:
    // 0x285a20: 0x0  nop
    ctx->pc = 0x285a20u;
    // NOP
label_285a24:
    // 0x285a24: 0x0  nop
    ctx->pc = 0x285a24u;
    // NOP
label_285a28:
    // 0x285a28: 0x0  nop
    ctx->pc = 0x285a28u;
    // NOP
label_285a2c:
    // 0x285a2c: 0x0  nop
    ctx->pc = 0x285a2cu;
    // NOP
label_285a30:
    // 0x285a30: 0x0  nop
    ctx->pc = 0x285a30u;
    // NOP
label_285a34:
    // 0x285a34: 0x0  nop
    ctx->pc = 0x285a34u;
    // NOP
label_285a38:
    // 0x285a38: 0x0  nop
    ctx->pc = 0x285a38u;
    // NOP
label_285a3c:
    // 0x285a3c: 0x0  nop
    ctx->pc = 0x285a3cu;
    // NOP
label_285a40:
    // 0x285a40: 0x13101008  beq         $t8, $s0, . + 4 + (0x1008 << 2)
label_285a44:
    if (ctx->pc == 0x285A44u) {
        ctx->pc = 0x285A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A40u;
        // 0x285a44: 0x16161310  bne         $s0, $s6, . + 4 + (0x1310 << 2) (Delay Slot)
        // Likely branch instruction at 0x285A44 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285A48u;
        goto label_285a48;
    }
    ctx->pc = 0x285A40u;
    {
        const bool branch_taken_0x285a40 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 16));
        ctx->pc = 0x285A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A40u;
        // 0x285a44: 0x16161310  bne         $s0, $s6, . + 4 + (0x1310 << 2) (Delay Slot)
        // Likely branch instruction at 0x285A44 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a40) {
            ctx->pc = 0x289A64u;
            { ctx->pc = 0x289a64; return; }
        }
    }
    ctx->pc = 0x285A48u;
label_285a48:
    // 0x285a48: 0x16161616  bne         $s0, $s6, . + 4 + (0x1616 << 2)
label_285a4c:
    if (ctx->pc == 0x285A4Cu) {
        ctx->pc = 0x285A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A48u;
        // 0x285a4c: 0x1b1a181a  .word       0x1B1A181A                   # blez        $t8, . + 4 + (0x181A << 2) # 001A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x285A4C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285A50u;
        goto label_285a50;
    }
    ctx->pc = 0x285A48u;
    {
        const bool branch_taken_0x285a48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x285A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A48u;
        // 0x285a4c: 0x1b1a181a  .word       0x1B1A181A                   # blez        $t8, . + 4 + (0x181A << 2) # 001A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x285A4C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a48) {
            ctx->pc = 0x28B2A4u;
            { ctx->pc = 0x28b2a4; return; }
        }
    }
    ctx->pc = 0x285A50u;
label_285a50:
    // 0x285a50: 0x1a1a1b1b  .word       0x1A1A1B1B                   # blez        $s0, . + 4 + (0x1B1B << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_285a54:
    if (ctx->pc == 0x285A54u) {
        ctx->pc = 0x285A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A50u;
        // 0x285a54: 0x1b1b1a1a  .word       0x1B1B1A1A                   # blez        $t8, . + 4 + (0x1A1A << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x285A54 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285A58u;
        goto label_285a58;
    }
    ctx->pc = 0x285A50u;
    {
        const bool branch_taken_0x285a50 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x285A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A50u;
        // 0x285a54: 0x1b1b1a1a  .word       0x1B1B1A1A                   # blez        $t8, . + 4 + (0x1A1A << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x285A54 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a50) {
            ctx->pc = 0x28C6C0u;
            { ctx->pc = 0x28c6c0; return; }
        }
    }
    ctx->pc = 0x285A58u;
label_285a58:
    // 0x285a58: 0x1d1d1d1b  .word       0x1D1D1D1B                   # bgtz        $t0, . + 4 + (0x1D1B << 2) # 001D0000 <InstrIdType: CPU_NORMAL>
label_285a5c:
    if (ctx->pc == 0x285A5Cu) {
        ctx->pc = 0x285A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A58u;
        // 0x285a5c: 0x1d222222  .word       0x1D222222                   # bgtz        $t1, . + 4 + (0x2222 << 2) # 00020000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x285A5C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285A60u;
        goto label_285a60;
    }
    ctx->pc = 0x285A58u;
    {
        const bool branch_taken_0x285a58 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x285A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A58u;
        // 0x285a5c: 0x1d222222  .word       0x1D222222                   # bgtz        $t1, . + 4 + (0x2222 << 2) # 00020000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x285A5C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a58) {
            ctx->pc = 0x28CEC8u;
            { ctx->pc = 0x28cec8; return; }
        }
    }
    ctx->pc = 0x285A60u;
label_285a60:
    // 0x285a60: 0x1b1b1d1d  .word       0x1B1B1D1D                   # blez        $t8, . + 4 + (0x1D1D << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
label_285a64:
    if (ctx->pc == 0x285A64u) {
        ctx->pc = 0x285A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A60u;
        // 0x285a64: 0x20201d1d  addi        $zero, $at, 0x1D1D (Delay Slot)
        // NOP (addi to $zero)
        ctx->in_delay_slot = false;
        ctx->pc = 0x285A68u;
        goto label_285a68;
    }
    ctx->pc = 0x285A60u;
    {
        const bool branch_taken_0x285a60 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x285A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A60u;
        // 0x285a64: 0x20201d1d  addi        $zero, $at, 0x1D1D (Delay Slot)
        // NOP (addi to $zero)
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a60) {
            ctx->pc = 0x28CED8u;
            { ctx->pc = 0x28ced8; return; }
        }
    }
    ctx->pc = 0x285A68u;
label_285a68:
    // 0x285a68: 0x26252222  addiu       $a1, $s1, 0x2222
    ctx->pc = 0x285a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8738));
label_285a6c:
    // 0x285a6c: 0x22232325  addi        $v1, $s1, 0x2325
    ctx->pc = 0x285a6cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)8997, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_285a70:
    // 0x285a70: 0x28262623  slti        $a2, $at, 0x2623
    ctx->pc = 0x285a70u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)9763) ? 1 : 0);
label_285a74:
    // 0x285a74: 0x30302828  andi        $s0, $at, 0x2828
    ctx->pc = 0x285a74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)10280);
label_285a78:
    // 0x285a78: 0x38382e2e  xori        $t8, $at, 0x2E2E
    ctx->pc = 0x285a78u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)11822);
label_285a7c:
    // 0x285a7c: 0x5345453a  beql        $k0, $a1, . + 4 + (0x453A << 2)
label_285a80:
    if (ctx->pc == 0x285A80u) {
        ctx->pc = 0x285A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A7Cu;
        // 0x285a80: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x285A80 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285A84u;
        goto label_285a84;
    }
    ctx->pc = 0x285A7Cu;
    {
        const bool branch_taken_0x285a7c = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x285a7c) {
            ctx->pc = 0x285A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285A7Cu;
            // 0x285a80: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
            // Likely branch instruction at 0x285A80 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x296F68u;
            { ctx->pc = 0x296f68; return; }
        }
    }
    ctx->pc = 0x285A84u;
label_285a84:
    // 0x285a84: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_285a88:
    if (ctx->pc == 0x285A88u) {
        ctx->pc = 0x285A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A84u;
        // 0x285a88: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x285A88 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285A8Cu;
        goto label_285a8c;
    }
    ctx->pc = 0x285A84u;
    {
        const bool branch_taken_0x285a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x285A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A84u;
        // 0x285a88: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x285A88 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a84) {
            ctx->pc = 0x289AC8u;
            { ctx->pc = 0x289ac8; return; }
        }
    }
    ctx->pc = 0x285A8Cu;
label_285a8c:
    // 0x285a8c: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_285a90:
    if (ctx->pc == 0x285A90u) {
        ctx->pc = 0x285A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A8Cu;
        // 0x285a90: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x285A90 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285A94u;
        goto label_285a94;
    }
    ctx->pc = 0x285A8Cu;
    {
        const bool branch_taken_0x285a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x285A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A8Cu;
        // 0x285a90: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x285A90 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a8c) {
            ctx->pc = 0x289AD0u;
            { ctx->pc = 0x289ad0; return; }
        }
    }
    ctx->pc = 0x285A94u;
label_285a94:
    // 0x285a94: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_285a98:
    if (ctx->pc == 0x285A98u) {
        ctx->pc = 0x285A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A94u;
        // 0x285a98: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x285A98 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285A9Cu;
        goto label_285a9c;
    }
    ctx->pc = 0x285A94u;
    {
        const bool branch_taken_0x285a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x285A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A94u;
        // 0x285a98: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x285A98 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a94) {
            ctx->pc = 0x289AD8u;
            { ctx->pc = 0x289ad8; return; }
        }
    }
    ctx->pc = 0x285A9Cu;
label_285a9c:
    // 0x285a9c: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_285aa0:
    if (ctx->pc == 0x285AA0u) {
        ctx->pc = 0x285AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A9Cu;
        // 0x285aa0: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x285AA0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285AA4u;
        goto label_285aa4;
    }
    ctx->pc = 0x285A9Cu;
    {
        const bool branch_taken_0x285a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x285AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A9Cu;
        // 0x285aa0: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x285AA0 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a9c) {
            ctx->pc = 0x289AE0u;
            { ctx->pc = 0x289ae0; return; }
        }
    }
    ctx->pc = 0x285AA4u;
label_285aa4:
    // 0x285aa4: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_285aa8:
    if (ctx->pc == 0x285AA8u) {
        ctx->pc = 0x285AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AA4u;
        // 0x285aa8: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x285AA8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285AACu;
        goto label_285aac;
    }
    ctx->pc = 0x285AA4u;
    {
        const bool branch_taken_0x285aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x285AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AA4u;
        // 0x285aa8: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x285AA8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285aa4) {
            ctx->pc = 0x289AE8u;
            { ctx->pc = 0x289ae8; return; }
        }
    }
    ctx->pc = 0x285AACu;
label_285aac:
    // 0x285aac: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_285ab0:
    if (ctx->pc == 0x285AB0u) {
        ctx->pc = 0x285AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AACu;
        // 0x285ab0: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x285AB0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285AB4u;
        goto label_285ab4;
    }
    ctx->pc = 0x285AACu;
    {
        const bool branch_taken_0x285aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x285AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AACu;
        // 0x285ab0: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x285AB0 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285aac) {
            ctx->pc = 0x289AF0u;
            { ctx->pc = 0x289af0; return; }
        }
    }
    ctx->pc = 0x285AB4u;
label_285ab4:
    // 0x285ab4: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_285ab8:
    if (ctx->pc == 0x285AB8u) {
        ctx->pc = 0x285AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AB4u;
        // 0x285ab8: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x285AB8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285ABCu;
        goto label_285abc;
    }
    ctx->pc = 0x285AB4u;
    {
        const bool branch_taken_0x285ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x285AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AB4u;
        // 0x285ab8: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x285AB8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ab4) {
            ctx->pc = 0x289AF8u;
            { ctx->pc = 0x289af8; return; }
        }
    }
    ctx->pc = 0x285ABCu;
label_285abc:
    // 0x285abc: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_285ac0:
    if (ctx->pc == 0x285AC0u) {
        ctx->pc = 0x285AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285ABCu;
        // 0x285ac0: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
//         throw std::runtime_error("Unhandled COP2 format: 0xA at 0x285AC0 raw=0x49497350");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x285AC4u;
        goto label_285ac4;
    }
    ctx->pc = 0x285ABCu;
    {
        const bool branch_taken_0x285abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x285AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285ABCu;
        // 0x285ac0: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
//         throw std::runtime_error("Unhandled COP2 format: 0xA at 0x285AC0 raw=0x49497350");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x285abc) {
            ctx->pc = 0x289B00u;
            { ctx->pc = 0x289b00; return; }
        }
    }
    ctx->pc = 0x285AC4u;
label_285ac4:
    // 0x285ac4: 0x6962696c  ldl         $v0, 0x696C($t3)
    ctx->pc = 0x285ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_285ac8:
    // 0x285ac8: 0x20207570  addi        $zero, $at, 0x7570
    ctx->pc = 0x285ac8u;
    // NOP (addi to $zero)
label_285acc:
    // 0x285acc: 0x30303432  andi        $s0, $at, 0x3432
    ctx->pc = 0x285accu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)13362);
label_285ad0:
    // 0x285ad0: 0x13101008  beq         $t8, $s0, . + 4 + (0x1008 << 2)
label_285ad4:
    if (ctx->pc == 0x285AD4u) {
        ctx->pc = 0x285AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AD0u;
        // 0x285ad4: 0x16161310  bne         $s0, $s6, . + 4 + (0x1310 << 2) (Delay Slot)
        // Likely branch instruction at 0x285AD4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285AD8u;
        goto label_285ad8;
    }
    ctx->pc = 0x285AD0u;
    {
        const bool branch_taken_0x285ad0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 16));
        ctx->pc = 0x285AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AD0u;
        // 0x285ad4: 0x16161310  bne         $s0, $s6, . + 4 + (0x1310 << 2) (Delay Slot)
        // Likely branch instruction at 0x285AD4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ad0) {
            ctx->pc = 0x289AF4u;
            { ctx->pc = 0x289af4; return; }
        }
    }
    ctx->pc = 0x285AD8u;
label_285ad8:
    // 0x285ad8: 0x16161616  bne         $s0, $s6, . + 4 + (0x1616 << 2)
label_285adc:
    if (ctx->pc == 0x285ADCu) {
        ctx->pc = 0x285ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AD8u;
        // 0x285adc: 0x1b1a181a  .word       0x1B1A181A                   # blez        $t8, . + 4 + (0x181A << 2) # 001A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x285ADC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285AE0u;
        goto label_285ae0;
    }
    ctx->pc = 0x285AD8u;
    {
        const bool branch_taken_0x285ad8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x285ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AD8u;
        // 0x285adc: 0x1b1a181a  .word       0x1B1A181A                   # blez        $t8, . + 4 + (0x181A << 2) # 001A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x285ADC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ad8) {
            ctx->pc = 0x28B334u;
            { ctx->pc = 0x28b334; return; }
        }
    }
    ctx->pc = 0x285AE0u;
label_285ae0:
    // 0x285ae0: 0x1a1a1b1b  .word       0x1A1A1B1B                   # blez        $s0, . + 4 + (0x1B1B << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_285ae4:
    if (ctx->pc == 0x285AE4u) {
        ctx->pc = 0x285AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AE0u;
        // 0x285ae4: 0x1b1b1a1a  .word       0x1B1B1A1A                   # blez        $t8, . + 4 + (0x1A1A << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x285AE4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285AE8u;
        goto label_285ae8;
    }
    ctx->pc = 0x285AE0u;
    {
        const bool branch_taken_0x285ae0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x285AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AE0u;
        // 0x285ae4: 0x1b1b1a1a  .word       0x1B1B1A1A                   # blez        $t8, . + 4 + (0x1A1A << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x285AE4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ae0) {
            ctx->pc = 0x28C750u;
            { ctx->pc = 0x28c750; return; }
        }
    }
    ctx->pc = 0x285AE8u;
label_285ae8:
    // 0x285ae8: 0x1d1d1d1b  .word       0x1D1D1D1B                   # bgtz        $t0, . + 4 + (0x1D1B << 2) # 001D0000 <InstrIdType: CPU_NORMAL>
label_285aec:
    if (ctx->pc == 0x285AECu) {
        ctx->pc = 0x285AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AE8u;
        // 0x285aec: 0x1d222222  .word       0x1D222222                   # bgtz        $t1, . + 4 + (0x2222 << 2) # 00020000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x285AEC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285AF0u;
        goto label_285af0;
    }
    ctx->pc = 0x285AE8u;
    {
        const bool branch_taken_0x285ae8 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x285AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AE8u;
        // 0x285aec: 0x1d222222  .word       0x1D222222                   # bgtz        $t1, . + 4 + (0x2222 << 2) # 00020000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x285AEC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ae8) {
            ctx->pc = 0x28CF58u;
            { ctx->pc = 0x28cf58; return; }
        }
    }
    ctx->pc = 0x285AF0u;
label_285af0:
    // 0x285af0: 0x1b1b1d1d  .word       0x1B1B1D1D                   # blez        $t8, . + 4 + (0x1D1D << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
label_285af4:
    if (ctx->pc == 0x285AF4u) {
        ctx->pc = 0x285AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AF0u;
        // 0x285af4: 0x20201d1d  addi        $zero, $at, 0x1D1D (Delay Slot)
        // NOP (addi to $zero)
        ctx->in_delay_slot = false;
        ctx->pc = 0x285AF8u;
        goto label_285af8;
    }
    ctx->pc = 0x285AF0u;
    {
        const bool branch_taken_0x285af0 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x285AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AF0u;
        // 0x285af4: 0x20201d1d  addi        $zero, $at, 0x1D1D (Delay Slot)
        // NOP (addi to $zero)
        ctx->in_delay_slot = false;
        if (branch_taken_0x285af0) {
            ctx->pc = 0x28CF68u;
            { ctx->pc = 0x28cf68; return; }
        }
    }
    ctx->pc = 0x285AF8u;
label_285af8:
    // 0x285af8: 0x26252222  addiu       $a1, $s1, 0x2222
    ctx->pc = 0x285af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8738));
label_285afc:
    // 0x285afc: 0x22232325  addi        $v1, $s1, 0x2325
    ctx->pc = 0x285afcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)8997, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_285b00:
    // 0x285b00: 0x28262623  slti        $a2, $at, 0x2623
    ctx->pc = 0x285b00u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)9763) ? 1 : 0);
label_285b04:
    // 0x285b04: 0x30302828  andi        $s0, $at, 0x2828
    ctx->pc = 0x285b04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)10280);
label_285b08:
    // 0x285b08: 0x38382e2e  xori        $t8, $at, 0x2E2E
    ctx->pc = 0x285b08u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)11822);
label_285b0c:
    // 0x285b0c: 0x5345453a  beql        $k0, $a1, . + 4 + (0x453A << 2)
label_285b10:
    if (ctx->pc == 0x285B10u) {
        ctx->pc = 0x285B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B0Cu;
        // 0x285b10: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x285B10 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285B14u;
        goto label_285b14;
    }
    ctx->pc = 0x285B0Cu;
    {
        const bool branch_taken_0x285b0c = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x285b0c) {
            ctx->pc = 0x285B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285B0Cu;
            // 0x285b10: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
            // Likely branch instruction at 0x285B10 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x296FF8u;
            { ctx->pc = 0x296ff8; return; }
        }
    }
    ctx->pc = 0x285B14u;
label_285b14:
    // 0x285b14: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_285b18:
    if (ctx->pc == 0x285B18u) {
        ctx->pc = 0x285B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B14u;
        // 0x285b18: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x285B18 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285B1Cu;
        goto label_285b1c;
    }
    ctx->pc = 0x285B14u;
    {
        const bool branch_taken_0x285b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x285B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B14u;
        // 0x285b18: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x285B18 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b14) {
            ctx->pc = 0x289B58u;
            { ctx->pc = 0x289b58; return; }
        }
    }
    ctx->pc = 0x285B1Cu;
label_285b1c:
    // 0x285b1c: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_285b20:
    if (ctx->pc == 0x285B20u) {
        ctx->pc = 0x285B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B1Cu;
        // 0x285b20: 0x4210000  bgez        $at, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x285B24 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285B24u;
        goto label_285b24;
    }
    ctx->pc = 0x285B1Cu;
    {
        const bool branch_taken_0x285b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x285B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B1Cu;
        // 0x285b20: 0x4210000  bgez        $at, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x285B24 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b1c) {
            ctx->pc = 0x289B60u;
            { ctx->pc = 0x289b60; return; }
        }
    }
    ctx->pc = 0x285B24u;
label_285b24:
    // 0x285b24: 0x3e00842  .word       0x03E00842                   # srl         $at, $zero, 1 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285b24u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), 1));
label_285b28:
    // 0x285b28: 0x14a51084  bne         $a1, $a1, . + 4 + (0x1084 << 2)
label_285b2c:
    if (ctx->pc == 0x285B2Cu) {
        ctx->pc = 0x285B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B28u;
        // 0x285b2c: 0x1ce718c6  .word       0x1CE718C6                   # bgtz        $a3, . + 4 + (0x18C6 << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x285B2C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x285B30u;
        goto label_285b30;
    }
    ctx->pc = 0x285B28u;
    {
        const bool branch_taken_0x285b28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 5));
        ctx->pc = 0x285B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285B28u;
        // 0x285b2c: 0x1ce718c6  .word       0x1CE718C6                   # bgtz        $a3, . + 4 + (0x18C6 << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x285B2C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x285b28) {
            ctx->pc = 0x289D3Cu;
            { ctx->pc = 0x289d3c; return; }
        }
    }
    ctx->pc = 0x285B30u;
label_285b30:
    // 0x285b30: 0x2529001f  addiu       $t1, $t1, 0x1F
    ctx->pc = 0x285b30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 31));
label_285b34:
    // 0x285b34: 0x7c00294a  sq          $zero, 0x294A($zero)
    ctx->pc = 0x285b34u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x294Au, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x294Au, _value); } while (0);
label_285b38:
    // 0x285b38: 0x35ad318c  ori         $t5, $t5, 0x318C
    ctx->pc = 0x285b38u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)12684);
label_285b3c:
    // 0x285b3c: 0x39ce7fff  xori        $t6, $t6, 0x7FFF
    ctx->pc = 0x285b3cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)32767);
label_285b40:
    // 0x285b40: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x285b40u;
//     throw std::runtime_error("Unhandled COP2 format: 0xA at 0x285B40 raw=0x49497350");
 /* MITIGATED */
label_285b44:
    // 0x285b44: 0x6b62696c  ldl         $v0, 0x696C($k1)
    ctx->pc = 0x285b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_285b48:
    // 0x285b48: 0x6c6e7265  ldr         $t6, 0x7265($v1)
    ctx->pc = 0x285b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_285b4c:
    // 0x285b4c: 0x30333532  andi        $s3, $at, 0x3532
    ctx->pc = 0x285b4cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)13618);
label_285b50:
    // 0x285b50: 0x0  nop
    ctx->pc = 0x285b50u;
    // NOP
label_285b54:
    // 0x285b54: 0x1ff7000  .word       0x01FF7000                   # sll         $t6, $ra, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x285b54u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_285b58:
    // 0x285b58: 0x0  nop
    ctx->pc = 0x285b58u;
    // NOP
label_285b5c:
    // 0x285b5c: 0x0  nop
    ctx->pc = 0x285b5cu;
    // NOP
label_285b60:
    // 0x285b60: 0x0  nop
    ctx->pc = 0x285b60u;
    // NOP
label_285b64:
    // 0x285b64: 0x1a6068  .word       0x001A6068                   # mfsa        $t4 # 001A0040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x285b64u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_285b68:
    // 0x285b68: 0x0  nop
    ctx->pc = 0x285b68u;
    // NOP
label_285b6c:
    // 0x285b6c: 0x0  nop
    ctx->pc = 0x285b6cu;
    // NOP
label_285b70:
    // 0x285b70: 0x0  nop
    ctx->pc = 0x285b70u;
    // NOP
label_285b74:
    // 0x285b74: 0x0  nop
    ctx->pc = 0x285b74u;
    // NOP
label_285b78:
    // 0x285b78: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285b78u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285b7c:
    // 0x285b7c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285b80:
    // 0x285b80: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285b80u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285b84:
    // 0x285b84: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285b84u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285b88:
    // 0x285b88: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285b88u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285b8c:
    // 0x285b8c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285b90:
    // 0x285b90: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285b90u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285b94:
    // 0x285b94: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285b94u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285b98:
    // 0x285b98: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285b98u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285b9c:
    // 0x285b9c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285ba0:
    // 0x285ba0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285ba4:
    // 0x285ba4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285ba8:
    // 0x285ba8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285bac:
    // 0x285bac: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285bacu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285bb0:
    // 0x285bb0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285bb4:
    // 0x285bb4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285bb8:
    // 0x285bb8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285bbc:
    // 0x285bbc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285bc0:
    // 0x285bc0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285bc4:
    // 0x285bc4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285bc8:
    // 0x285bc8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285bcc:
    // 0x285bcc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285bccu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285bd0:
    // 0x285bd0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285bd4:
    // 0x285bd4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285bd8:
    // 0x285bd8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285bdc:
    // 0x285bdc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285be0:
    // 0x285be0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285be0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285be4:
    // 0x285be4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285be4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285be8:
    // 0x285be8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285be8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285bec:
    // 0x285bec: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285becu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285bf0:
    // 0x285bf0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285bf4:
    // 0x285bf4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285bf8:
    // 0x285bf8: 0x0  nop
    ctx->pc = 0x285bf8u;
    // NOP
label_285bfc:
    // 0x285bfc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285c00:
    // 0x285c00: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285c00u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285c04:
    // 0x285c04: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285c04u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285c08:
    // 0x285c08: 0x2ca728  .word       0x002CA728                   # mfsa        $s4 # 002C0700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x285c08u;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_285c0c:
    // 0x285c0c: 0x0  nop
    ctx->pc = 0x285c0cu;
    // NOP
label_285c10:
    // 0x285c10: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285c10u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285c14:
    // 0x285c14: 0x0  nop
    ctx->pc = 0x285c14u;
    // NOP
label_285c18:
    // 0x285c18: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x285c18u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_285c1c:
    // 0x285c1c: 0x2ca730  tge         $at, $t4, 668
    ctx->pc = 0x285c1cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_285c20:
    // 0x285c20: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x285c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_285c24:
    // 0x285c24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x285c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285c28:
    // 0x285c28: 0x24435300  addiu       $v1, $v0, 0x5300
    ctx->pc = 0x285c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 21248));
label_285c2c:
    // 0x285c2c: 0x0  nop
    ctx->pc = 0x285c2cu;
    // NOP
label_285c30:
    // 0x285c30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x285c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_285c34:
    // 0x285c34: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_285c38:
    if (ctx->pc == 0x285C38u) {
        ctx->pc = 0x285C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C34u;
        // 0x285c38: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C3Cu;
        goto label_285c3c;
    }
    ctx->pc = 0x285C34u;
    {
        const bool branch_taken_0x285c34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x285C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C34u;
        // 0x285c38: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c34) {
            ctx->pc = 0x285C44u;
            goto label_285c44;
        }
    }
    ctx->pc = 0x285C3Cu;
label_285c3c:
    // 0x285c3c: 0x3e00008  jr          $ra
label_285c40:
    if (ctx->pc == 0x285C40u) {
        ctx->pc = 0x285C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C3Cu;
        // 0x285c40: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C44u;
        goto label_285c44;
    }
    ctx->pc = 0x285C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C3Cu;
        // 0x285c40: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285C44u;
label_285c44:
    // 0x285c44: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x285c44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_285c48:
    // 0x285c48: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_285c4c:
    if (ctx->pc == 0x285C4Cu) {
        ctx->pc = 0x285C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C48u;
        // 0x285c4c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C50u;
        goto label_285c50;
    }
    ctx->pc = 0x285C48u;
    {
        const bool branch_taken_0x285c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C48u;
        // 0x285c4c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c48) {
            ctx->pc = 0x285C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285c30;
        }
    }
    ctx->pc = 0x285C50u;
label_285c50:
    // 0x285c50: 0x3e00008  jr          $ra
label_285c54:
    if (ctx->pc == 0x285C54u) {
        ctx->pc = 0x285C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C50u;
        // 0x285c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C58u;
        goto label_285c58;
    }
    ctx->pc = 0x285C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C50u;
        // 0x285c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285C58u;
label_285c58:
    // 0x285c58: 0x51602  srl         $v0, $a1, 24
    ctx->pc = 0x285c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
label_285c5c:
    // 0x285c5c: 0x304300f0  andi        $v1, $v0, 0xF0
    ctx->pc = 0x285c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_285c60:
    // 0x285c60: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x285c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_285c64:
    // 0x285c64: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_285c68:
    if (ctx->pc == 0x285C68u) {
        ctx->pc = 0x285C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C64u;
        // 0x285c68: 0x2c620031  sltiu       $v0, $v1, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C6Cu;
        goto label_285c6c;
    }
    ctx->pc = 0x285C64u;
    {
        const bool branch_taken_0x285c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x285C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C64u;
        // 0x285c68: 0x2c620031  sltiu       $v0, $v1, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c64) {
            ctx->pc = 0x285CB8u;
            { ctx->pc = 0x285cb8; return; }
        }
    }
    ctx->pc = 0x285C6Cu;
label_285c6c:
    // 0x285c6c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_285c70:
    if (ctx->pc == 0x285C70u) {
        ctx->pc = 0x285C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C6Cu;
        // 0x285c70: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C74u;
        goto label_285c74;
    }
    ctx->pc = 0x285C6Cu;
    {
        const bool branch_taken_0x285c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C6Cu;
        // 0x285c70: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c6c) {
            ctx->pc = 0x285C94u;
            goto label_285c94;
        }
    }
    ctx->pc = 0x285C74u;
label_285c74:
    // 0x285c74: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_285c78:
    if (ctx->pc == 0x285C78u) {
        ctx->pc = 0x285C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C74u;
        // 0x285c78: 0x2c620011  sltiu       $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C7Cu;
        goto label_285c7c;
    }
    ctx->pc = 0x285C74u;
    {
        const bool branch_taken_0x285c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x285C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C74u;
        // 0x285c78: 0x2c620011  sltiu       $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c74) {
            ctx->pc = 0x285CB0u;
            { ctx->pc = 0x285cb0; return; }
        }
    }
    ctx->pc = 0x285C7Cu;
label_285c7c:
    // 0x285c7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_285c80:
    if (ctx->pc == 0x285C80u) {
        ctx->pc = 0x285C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C7Cu;
        // 0x285c80: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C84u;
        goto label_285c84;
    }
    ctx->pc = 0x285C7Cu;
    {
        const bool branch_taken_0x285c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C7Cu;
        // 0x285c80: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c7c) {
            ctx->pc = 0x285CA8u;
            { ctx->pc = 0x285ca8; return; }
        }
    }
    ctx->pc = 0x285C84u;
label_285c84:
    // 0x285c84: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_285c88:
    if (ctx->pc == 0x285C88u) {
        ctx->pc = 0x285C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C84u;
        // 0x285c88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285C8Cu;
        goto label_285c8c;
    }
    ctx->pc = 0x285C84u;
    {
        const bool branch_taken_0x285c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C84u;
        // 0x285c88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c84) {
            ctx->pc = 0x285CB8u;
            { ctx->pc = 0x285cb8; return; }
        }
    }
    ctx->pc = 0x285C8Cu;
label_285c8c:
    // 0x285c8c: 0x10000014  b           . + 4 + (0x14 << 2)
label_285c90:
    if (ctx->pc == 0x285C90u) {
        ctx->pc = 0x285C94u;
        goto label_285c94;
    }
    ctx->pc = 0x285C8Cu;
    {
        const bool branch_taken_0x285c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285c8c) {
            ctx->pc = 0x285CE0u;
            { ctx->pc = 0x285ce0; return; }
        }
    }
    ctx->pc = 0x285C94u;
label_285c94:
    // 0x285c94: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x285c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_285c98:
    // 0x285c98: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_285c9c:
    if (ctx->pc == 0x285C9Cu) {
        ctx->pc = 0x285C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C98u;
        // 0x285c9c: 0x2c620051  sltiu       $v0, $v1, 0x51 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285CA0u;
        goto label_285ca0;
    }
    ctx->pc = 0x285C98u;
    {
        const bool branch_taken_0x285c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x285C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C98u;
        // 0x285c9c: 0x2c620051  sltiu       $v0, $v1, 0x51 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c98) {
            ctx->pc = 0x285CB0u;
            { ctx->pc = 0x285cb0; return; }
        }
    }
    ctx->pc = 0x285CA0u;
label_285ca0:
    // 0x285ca0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_285ca4:
    if (ctx->pc == 0x285CA4u) {
        ctx->pc = 0x285CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CA0u;
        // 0x285ca4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285CA8u;
        { ctx->pc = 0x285ca8; return; }
    }
    ctx->pc = 0x285CA0u;
    {
        const bool branch_taken_0x285ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CA0u;
        // 0x285ca4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ca0) {
            ctx->pc = 0x285CB0u;
            { ctx->pc = 0x285cb0; return; }
        }
    }
    ctx->pc = 0x285CA8u;
    ctx->pc = 0x285ca8u;
    return;
}
