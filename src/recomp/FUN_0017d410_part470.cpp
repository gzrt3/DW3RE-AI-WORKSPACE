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


void FUN_0017d410_part470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x262420u: goto label_262420;
        case 0x262424u: goto label_262424;
        case 0x262428u: goto label_262428;
        case 0x26242cu: goto label_26242c;
        case 0x262430u: goto label_262430;
        case 0x262434u: goto label_262434;
        case 0x262438u: goto label_262438;
        case 0x26243cu: goto label_26243c;
        case 0x262440u: goto label_262440;
        case 0x262444u: goto label_262444;
        case 0x262448u: goto label_262448;
        case 0x26244cu: goto label_26244c;
        case 0x262450u: goto label_262450;
        case 0x262454u: goto label_262454;
        case 0x262458u: goto label_262458;
        case 0x26245cu: goto label_26245c;
        case 0x262460u: goto label_262460;
        case 0x262464u: goto label_262464;
        case 0x262468u: goto label_262468;
        case 0x26246cu: goto label_26246c;
        case 0x262470u: goto label_262470;
        case 0x262474u: goto label_262474;
        case 0x262478u: goto label_262478;
        case 0x26247cu: goto label_26247c;
        case 0x262480u: goto label_262480;
        case 0x262484u: goto label_262484;
        case 0x262488u: goto label_262488;
        case 0x26248cu: goto label_26248c;
        case 0x262490u: goto label_262490;
        case 0x262494u: goto label_262494;
        case 0x262498u: goto label_262498;
        case 0x26249cu: goto label_26249c;
        case 0x2624a0u: goto label_2624a0;
        case 0x2624a4u: goto label_2624a4;
        case 0x2624a8u: goto label_2624a8;
        case 0x2624acu: goto label_2624ac;
        case 0x2624b0u: goto label_2624b0;
        case 0x2624b4u: goto label_2624b4;
        case 0x2624b8u: goto label_2624b8;
        case 0x2624bcu: goto label_2624bc;
        case 0x2624c0u: goto label_2624c0;
        case 0x2624c4u: goto label_2624c4;
        case 0x2624c8u: goto label_2624c8;
        case 0x2624ccu: goto label_2624cc;
        case 0x2624d0u: goto label_2624d0;
        case 0x2624d4u: goto label_2624d4;
        case 0x2624d8u: goto label_2624d8;
        case 0x2624dcu: goto label_2624dc;
        case 0x2624e0u: goto label_2624e0;
        case 0x2624e4u: goto label_2624e4;
        case 0x2624e8u: goto label_2624e8;
        case 0x2624ecu: goto label_2624ec;
        case 0x2624f0u: goto label_2624f0;
        case 0x2624f4u: goto label_2624f4;
        case 0x2624f8u: goto label_2624f8;
        case 0x2624fcu: goto label_2624fc;
        case 0x262500u: goto label_262500;
        case 0x262504u: goto label_262504;
        case 0x262508u: goto label_262508;
        case 0x26250cu: goto label_26250c;
        case 0x262510u: goto label_262510;
        case 0x262514u: goto label_262514;
        case 0x262518u: goto label_262518;
        case 0x26251cu: goto label_26251c;
        case 0x262520u: goto label_262520;
        case 0x262524u: goto label_262524;
        case 0x262528u: goto label_262528;
        case 0x26252cu: goto label_26252c;
        case 0x262530u: goto label_262530;
        case 0x262534u: goto label_262534;
        case 0x262538u: goto label_262538;
        case 0x26253cu: goto label_26253c;
        case 0x262540u: goto label_262540;
        case 0x262544u: goto label_262544;
        case 0x262548u: goto label_262548;
        case 0x26254cu: goto label_26254c;
        case 0x262550u: goto label_262550;
        case 0x262554u: goto label_262554;
        case 0x262558u: goto label_262558;
        case 0x26255cu: goto label_26255c;
        case 0x262560u: goto label_262560;
        case 0x262564u: goto label_262564;
        case 0x262568u: goto label_262568;
        case 0x26256cu: goto label_26256c;
        case 0x262570u: goto label_262570;
        case 0x262574u: goto label_262574;
        case 0x262578u: goto label_262578;
        case 0x26257cu: goto label_26257c;
        case 0x262580u: goto label_262580;
        case 0x262584u: goto label_262584;
        case 0x262588u: goto label_262588;
        case 0x26258cu: goto label_26258c;
        case 0x262590u: goto label_262590;
        case 0x262594u: goto label_262594;
        case 0x262598u: goto label_262598;
        case 0x26259cu: goto label_26259c;
        case 0x2625a0u: goto label_2625a0;
        case 0x2625a4u: goto label_2625a4;
        case 0x2625a8u: goto label_2625a8;
        case 0x2625acu: goto label_2625ac;
        case 0x2625b0u: goto label_2625b0;
        case 0x2625b4u: goto label_2625b4;
        case 0x2625b8u: goto label_2625b8;
        case 0x2625bcu: goto label_2625bc;
        case 0x2625c0u: goto label_2625c0;
        case 0x2625c4u: goto label_2625c4;
        case 0x2625c8u: goto label_2625c8;
        case 0x2625ccu: goto label_2625cc;
        case 0x2625d0u: goto label_2625d0;
        case 0x2625d4u: goto label_2625d4;
        case 0x2625d8u: goto label_2625d8;
        case 0x2625dcu: goto label_2625dc;
        case 0x2625e0u: goto label_2625e0;
        case 0x2625e4u: goto label_2625e4;
        case 0x2625e8u: goto label_2625e8;
        case 0x2625ecu: goto label_2625ec;
        case 0x2625f0u: goto label_2625f0;
        case 0x2625f4u: goto label_2625f4;
        case 0x2625f8u: goto label_2625f8;
        case 0x2625fcu: goto label_2625fc;
        case 0x262600u: goto label_262600;
        case 0x262604u: goto label_262604;
        case 0x262608u: goto label_262608;
        case 0x26260cu: goto label_26260c;
        case 0x262610u: goto label_262610;
        case 0x262614u: goto label_262614;
        case 0x262618u: goto label_262618;
        case 0x26261cu: goto label_26261c;
        case 0x262620u: goto label_262620;
        case 0x262624u: goto label_262624;
        case 0x262628u: goto label_262628;
        case 0x26262cu: goto label_26262c;
        case 0x262630u: goto label_262630;
        case 0x262634u: goto label_262634;
        case 0x262638u: goto label_262638;
        case 0x26263cu: goto label_26263c;
        case 0x262640u: goto label_262640;
        case 0x262644u: goto label_262644;
        case 0x262648u: goto label_262648;
        case 0x26264cu: goto label_26264c;
        case 0x262650u: goto label_262650;
        case 0x262654u: goto label_262654;
        case 0x262658u: goto label_262658;
        case 0x26265cu: goto label_26265c;
        case 0x262660u: goto label_262660;
        case 0x262664u: goto label_262664;
        case 0x262668u: goto label_262668;
        case 0x26266cu: goto label_26266c;
        case 0x262670u: goto label_262670;
        case 0x262674u: goto label_262674;
        case 0x262678u: goto label_262678;
        case 0x26267cu: goto label_26267c;
        case 0x262680u: goto label_262680;
        case 0x262684u: goto label_262684;
        case 0x262688u: goto label_262688;
        case 0x26268cu: goto label_26268c;
        case 0x262690u: goto label_262690;
        case 0x262694u: goto label_262694;
        case 0x262698u: goto label_262698;
        case 0x26269cu: goto label_26269c;
        case 0x2626a0u: goto label_2626a0;
        case 0x2626a4u: goto label_2626a4;
        case 0x2626a8u: goto label_2626a8;
        case 0x2626acu: goto label_2626ac;
        case 0x2626b0u: goto label_2626b0;
        case 0x2626b4u: goto label_2626b4;
        case 0x2626b8u: goto label_2626b8;
        case 0x2626bcu: goto label_2626bc;
        case 0x2626c0u: goto label_2626c0;
        case 0x2626c4u: goto label_2626c4;
        case 0x2626c8u: goto label_2626c8;
        case 0x2626ccu: goto label_2626cc;
        case 0x2626d0u: goto label_2626d0;
        case 0x2626d4u: goto label_2626d4;
        case 0x2626d8u: goto label_2626d8;
        case 0x2626dcu: goto label_2626dc;
        case 0x2626e0u: goto label_2626e0;
        case 0x2626e4u: goto label_2626e4;
        case 0x2626e8u: goto label_2626e8;
        case 0x2626ecu: goto label_2626ec;
        case 0x2626f0u: goto label_2626f0;
        case 0x2626f4u: goto label_2626f4;
        case 0x2626f8u: goto label_2626f8;
        case 0x2626fcu: goto label_2626fc;
        case 0x262700u: goto label_262700;
        case 0x262704u: goto label_262704;
        case 0x262708u: goto label_262708;
        case 0x26270cu: goto label_26270c;
        case 0x262710u: goto label_262710;
        case 0x262714u: goto label_262714;
        case 0x262718u: goto label_262718;
        case 0x26271cu: goto label_26271c;
        case 0x262720u: goto label_262720;
        case 0x262724u: goto label_262724;
        case 0x262728u: goto label_262728;
        case 0x26272cu: goto label_26272c;
        case 0x262730u: goto label_262730;
        case 0x262734u: goto label_262734;
        case 0x262738u: goto label_262738;
        case 0x26273cu: goto label_26273c;
        case 0x262740u: goto label_262740;
        case 0x262744u: goto label_262744;
        case 0x262748u: goto label_262748;
        case 0x26274cu: goto label_26274c;
        case 0x262750u: goto label_262750;
        case 0x262754u: goto label_262754;
        case 0x262758u: goto label_262758;
        case 0x26275cu: goto label_26275c;
        case 0x262760u: goto label_262760;
        case 0x262764u: goto label_262764;
        case 0x262768u: goto label_262768;
        case 0x26276cu: goto label_26276c;
        case 0x262770u: goto label_262770;
        case 0x262774u: goto label_262774;
        case 0x262778u: goto label_262778;
        case 0x26277cu: goto label_26277c;
        case 0x262780u: goto label_262780;
        case 0x262784u: goto label_262784;
        case 0x262788u: goto label_262788;
        case 0x26278cu: goto label_26278c;
        case 0x262790u: goto label_262790;
        case 0x262794u: goto label_262794;
        case 0x262798u: goto label_262798;
        case 0x26279cu: goto label_26279c;
        case 0x2627a0u: goto label_2627a0;
        case 0x2627a4u: goto label_2627a4;
        case 0x2627a8u: goto label_2627a8;
        case 0x2627acu: goto label_2627ac;
        case 0x2627b0u: goto label_2627b0;
        case 0x2627b4u: goto label_2627b4;
        case 0x2627b8u: goto label_2627b8;
        case 0x2627bcu: goto label_2627bc;
        case 0x2627c0u: goto label_2627c0;
        case 0x2627c4u: goto label_2627c4;
        case 0x2627c8u: goto label_2627c8;
        case 0x2627ccu: goto label_2627cc;
        case 0x2627d0u: goto label_2627d0;
        case 0x2627d4u: goto label_2627d4;
        case 0x2627d8u: goto label_2627d8;
        case 0x2627dcu: goto label_2627dc;
        case 0x2627e0u: goto label_2627e0;
        case 0x2627e4u: goto label_2627e4;
        case 0x2627e8u: goto label_2627e8;
        case 0x2627ecu: goto label_2627ec;
        case 0x2627f0u: goto label_2627f0;
        case 0x2627f4u: goto label_2627f4;
        case 0x2627f8u: goto label_2627f8;
        case 0x2627fcu: goto label_2627fc;
        case 0x262800u: goto label_262800;
        case 0x262804u: goto label_262804;
        case 0x262808u: goto label_262808;
        case 0x26280cu: goto label_26280c;
        case 0x262810u: goto label_262810;
        case 0x262814u: goto label_262814;
        case 0x262818u: goto label_262818;
        case 0x26281cu: goto label_26281c;
        case 0x262820u: goto label_262820;
        case 0x262824u: goto label_262824;
        case 0x262828u: goto label_262828;
        case 0x26282cu: goto label_26282c;
        case 0x262830u: goto label_262830;
        case 0x262834u: goto label_262834;
        case 0x262838u: goto label_262838;
        case 0x26283cu: goto label_26283c;
        case 0x262840u: goto label_262840;
        case 0x262844u: goto label_262844;
        case 0x262848u: goto label_262848;
        case 0x26284cu: goto label_26284c;
        case 0x262850u: goto label_262850;
        case 0x262854u: goto label_262854;
        case 0x262858u: goto label_262858;
        case 0x26285cu: goto label_26285c;
        case 0x262860u: goto label_262860;
        case 0x262864u: goto label_262864;
        case 0x262868u: goto label_262868;
        case 0x26286cu: goto label_26286c;
        case 0x262870u: goto label_262870;
        case 0x262874u: goto label_262874;
        case 0x262878u: goto label_262878;
        case 0x26287cu: goto label_26287c;
        case 0x262880u: goto label_262880;
        case 0x262884u: goto label_262884;
        case 0x262888u: goto label_262888;
        case 0x26288cu: goto label_26288c;
        case 0x262890u: goto label_262890;
        case 0x262894u: goto label_262894;
        case 0x262898u: goto label_262898;
        case 0x26289cu: goto label_26289c;
        case 0x2628a0u: goto label_2628a0;
        case 0x2628a4u: goto label_2628a4;
        case 0x2628a8u: goto label_2628a8;
        case 0x2628acu: goto label_2628ac;
        case 0x2628b0u: goto label_2628b0;
        case 0x2628b4u: goto label_2628b4;
        case 0x2628b8u: goto label_2628b8;
        case 0x2628bcu: goto label_2628bc;
        case 0x2628c0u: goto label_2628c0;
        case 0x2628c4u: goto label_2628c4;
        case 0x2628c8u: goto label_2628c8;
        case 0x2628ccu: goto label_2628cc;
        case 0x2628d0u: goto label_2628d0;
        case 0x2628d4u: goto label_2628d4;
        case 0x2628d8u: goto label_2628d8;
        case 0x2628dcu: goto label_2628dc;
        case 0x2628e0u: goto label_2628e0;
        case 0x2628e4u: goto label_2628e4;
        case 0x2628e8u: goto label_2628e8;
        case 0x2628ecu: goto label_2628ec;
        case 0x2628f0u: goto label_2628f0;
        case 0x2628f4u: goto label_2628f4;
        case 0x2628f8u: goto label_2628f8;
        case 0x2628fcu: goto label_2628fc;
        case 0x262900u: goto label_262900;
        case 0x262904u: goto label_262904;
        case 0x262908u: goto label_262908;
        case 0x26290cu: goto label_26290c;
        case 0x262910u: goto label_262910;
        case 0x262914u: goto label_262914;
        case 0x262918u: goto label_262918;
        case 0x26291cu: goto label_26291c;
        case 0x262920u: goto label_262920;
        case 0x262924u: goto label_262924;
        case 0x262928u: goto label_262928;
        case 0x26292cu: goto label_26292c;
        case 0x262930u: goto label_262930;
        case 0x262934u: goto label_262934;
        case 0x262938u: goto label_262938;
        case 0x26293cu: goto label_26293c;
        case 0x262940u: goto label_262940;
        case 0x262944u: goto label_262944;
        case 0x262948u: goto label_262948;
        case 0x26294cu: goto label_26294c;
        case 0x262950u: goto label_262950;
        case 0x262954u: goto label_262954;
        case 0x262958u: goto label_262958;
        case 0x26295cu: goto label_26295c;
        case 0x262960u: goto label_262960;
        case 0x262964u: goto label_262964;
        case 0x262968u: goto label_262968;
        case 0x26296cu: goto label_26296c;
        case 0x262970u: goto label_262970;
        case 0x262974u: goto label_262974;
        case 0x262978u: goto label_262978;
        case 0x26297cu: goto label_26297c;
        case 0x262980u: goto label_262980;
        case 0x262984u: goto label_262984;
        case 0x262988u: goto label_262988;
        case 0x26298cu: goto label_26298c;
        case 0x262990u: goto label_262990;
        case 0x262994u: goto label_262994;
        case 0x262998u: goto label_262998;
        case 0x26299cu: goto label_26299c;
        case 0x2629a0u: goto label_2629a0;
        case 0x2629a4u: goto label_2629a4;
        case 0x2629a8u: goto label_2629a8;
        case 0x2629acu: goto label_2629ac;
        case 0x2629b0u: goto label_2629b0;
        case 0x2629b4u: goto label_2629b4;
        case 0x2629b8u: goto label_2629b8;
        case 0x2629bcu: goto label_2629bc;
        case 0x2629c0u: goto label_2629c0;
        case 0x2629c4u: goto label_2629c4;
        case 0x2629c8u: goto label_2629c8;
        case 0x2629ccu: goto label_2629cc;
        case 0x2629d0u: goto label_2629d0;
        case 0x2629d4u: goto label_2629d4;
        case 0x2629d8u: goto label_2629d8;
        case 0x2629dcu: goto label_2629dc;
        case 0x2629e0u: goto label_2629e0;
        case 0x2629e4u: goto label_2629e4;
        case 0x2629e8u: goto label_2629e8;
        case 0x2629ecu: goto label_2629ec;
        case 0x2629f0u: goto label_2629f0;
        case 0x2629f4u: goto label_2629f4;
        case 0x2629f8u: goto label_2629f8;
        case 0x2629fcu: goto label_2629fc;
        case 0x262a00u: goto label_262a00;
        case 0x262a04u: goto label_262a04;
        case 0x262a08u: goto label_262a08;
        case 0x262a0cu: goto label_262a0c;
        case 0x262a10u: goto label_262a10;
        case 0x262a14u: goto label_262a14;
        case 0x262a18u: goto label_262a18;
        case 0x262a1cu: goto label_262a1c;
        case 0x262a20u: goto label_262a20;
        case 0x262a24u: goto label_262a24;
        case 0x262a28u: goto label_262a28;
        case 0x262a2cu: goto label_262a2c;
        case 0x262a30u: goto label_262a30;
        case 0x262a34u: goto label_262a34;
        case 0x262a38u: goto label_262a38;
        case 0x262a3cu: goto label_262a3c;
        case 0x262a40u: goto label_262a40;
        case 0x262a44u: goto label_262a44;
        case 0x262a48u: goto label_262a48;
        case 0x262a4cu: goto label_262a4c;
        case 0x262a50u: goto label_262a50;
        case 0x262a54u: goto label_262a54;
        case 0x262a58u: goto label_262a58;
        case 0x262a5cu: goto label_262a5c;
        case 0x262a60u: goto label_262a60;
        case 0x262a64u: goto label_262a64;
        case 0x262a68u: goto label_262a68;
        case 0x262a6cu: goto label_262a6c;
        case 0x262a70u: goto label_262a70;
        case 0x262a74u: goto label_262a74;
        case 0x262a78u: goto label_262a78;
        case 0x262a7cu: goto label_262a7c;
        case 0x262a80u: goto label_262a80;
        case 0x262a84u: goto label_262a84;
        case 0x262a88u: goto label_262a88;
        case 0x262a8cu: goto label_262a8c;
        case 0x262a90u: goto label_262a90;
        case 0x262a94u: goto label_262a94;
        case 0x262a98u: goto label_262a98;
        case 0x262a9cu: goto label_262a9c;
        case 0x262aa0u: goto label_262aa0;
        case 0x262aa4u: goto label_262aa4;
        case 0x262aa8u: goto label_262aa8;
        case 0x262aacu: goto label_262aac;
        case 0x262ab0u: goto label_262ab0;
        case 0x262ab4u: goto label_262ab4;
        case 0x262ab8u: goto label_262ab8;
        case 0x262abcu: goto label_262abc;
        case 0x262ac0u: goto label_262ac0;
        case 0x262ac4u: goto label_262ac4;
        case 0x262ac8u: goto label_262ac8;
        case 0x262accu: goto label_262acc;
        case 0x262ad0u: goto label_262ad0;
        case 0x262ad4u: goto label_262ad4;
        case 0x262ad8u: goto label_262ad8;
        case 0x262adcu: goto label_262adc;
        case 0x262ae0u: goto label_262ae0;
        case 0x262ae4u: goto label_262ae4;
        case 0x262ae8u: goto label_262ae8;
        case 0x262aecu: goto label_262aec;
        case 0x262af0u: goto label_262af0;
        case 0x262af4u: goto label_262af4;
        case 0x262af8u: goto label_262af8;
        case 0x262afcu: goto label_262afc;
        case 0x262b00u: goto label_262b00;
        case 0x262b04u: goto label_262b04;
        case 0x262b08u: goto label_262b08;
        case 0x262b0cu: goto label_262b0c;
        case 0x262b10u: goto label_262b10;
        case 0x262b14u: goto label_262b14;
        case 0x262b18u: goto label_262b18;
        case 0x262b1cu: goto label_262b1c;
        case 0x262b20u: goto label_262b20;
        case 0x262b24u: goto label_262b24;
        case 0x262b28u: goto label_262b28;
        case 0x262b2cu: goto label_262b2c;
        case 0x262b30u: goto label_262b30;
        case 0x262b34u: goto label_262b34;
        case 0x262b38u: goto label_262b38;
        case 0x262b3cu: goto label_262b3c;
        case 0x262b40u: goto label_262b40;
        case 0x262b44u: goto label_262b44;
        case 0x262b48u: goto label_262b48;
        case 0x262b4cu: goto label_262b4c;
        case 0x262b50u: goto label_262b50;
        case 0x262b54u: goto label_262b54;
        case 0x262b58u: goto label_262b58;
        case 0x262b5cu: goto label_262b5c;
        case 0x262b60u: goto label_262b60;
        case 0x262b64u: goto label_262b64;
        case 0x262b68u: goto label_262b68;
        case 0x262b6cu: goto label_262b6c;
        case 0x262b70u: goto label_262b70;
        case 0x262b74u: goto label_262b74;
        case 0x262b78u: goto label_262b78;
        case 0x262b7cu: goto label_262b7c;
        case 0x262b80u: goto label_262b80;
        case 0x262b84u: goto label_262b84;
        case 0x262b88u: goto label_262b88;
        case 0x262b8cu: goto label_262b8c;
        case 0x262b90u: goto label_262b90;
        case 0x262b94u: goto label_262b94;
        case 0x262b98u: goto label_262b98;
        case 0x262b9cu: goto label_262b9c;
        case 0x262ba0u: goto label_262ba0;
        case 0x262ba4u: goto label_262ba4;
        case 0x262ba8u: goto label_262ba8;
        case 0x262bacu: goto label_262bac;
        case 0x262bb0u: goto label_262bb0;
        case 0x262bb4u: goto label_262bb4;
        case 0x262bb8u: goto label_262bb8;
        case 0x262bbcu: goto label_262bbc;
        case 0x262bc0u: goto label_262bc0;
        case 0x262bc4u: goto label_262bc4;
        case 0x262bc8u: goto label_262bc8;
        case 0x262bccu: goto label_262bcc;
        case 0x262bd0u: goto label_262bd0;
        case 0x262bd4u: goto label_262bd4;
        case 0x262bd8u: goto label_262bd8;
        case 0x262bdcu: goto label_262bdc;
        case 0x262be0u: goto label_262be0;
        case 0x262be4u: goto label_262be4;
        case 0x262be8u: goto label_262be8;
        case 0x262becu: goto label_262bec;
        default: return;
    }

label_262420:
    // 0x262420: 0xd011  .word       0x0000D011                   # mthi        $zero # 0000D000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262420u;
    ctx->hi = GPR_U64(ctx, 0);
label_262424:
    // 0x262424: 0x9b80  sll         $s3, $zero, 14
    ctx->pc = 0x262424u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_262428:
    // 0x262428: 0x0  nop
    ctx->pc = 0x262428u;
    // NOP
label_26242c:
    // 0x26242c: 0x0  nop
    ctx->pc = 0x26242cu;
    // NOP
label_262430:
    // 0x262430: 0xd025  move        $k0, $zero
    ctx->pc = 0x262430u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_262434:
    // 0x262434: 0x8f40  sll         $s1, $zero, 29
    ctx->pc = 0x262434u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_262438:
    // 0x262438: 0x0  nop
    ctx->pc = 0x262438u;
    // NOP
label_26243c:
    // 0x26243c: 0x0  nop
    ctx->pc = 0x26243cu;
    // NOP
label_262440:
    // 0x262440: 0xd037  .word       0x0000D037                   # INVALID     $zero, $zero, -0x2FC9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262440u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x262440 raw=0x0000D037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262444:
    // 0x262444: 0xe740  sll         $gp, $zero, 29
    ctx->pc = 0x262444u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_262448:
    // 0x262448: 0x0  nop
    ctx->pc = 0x262448u;
    // NOP
label_26244c:
    // 0x26244c: 0x0  nop
    ctx->pc = 0x26244cu;
    // NOP
label_262450:
    // 0x262450: 0xd054  .word       0x0000D054                   # dsllv       $k0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262450u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_262454:
    // 0x262454: 0xd3b0  tge         $zero, $zero, 846
    ctx->pc = 0x262454u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262458:
    // 0x262458: 0x0  nop
    ctx->pc = 0x262458u;
    // NOP
label_26245c:
    // 0x26245c: 0x0  nop
    ctx->pc = 0x26245cu;
    // NOP
label_262460:
    // 0x262460: 0xd06f  .word       0x0000D06F                   # dsubu       $k0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262460u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_262464:
    // 0x262464: 0x12400  sll         $a0, $at, 16
    ctx->pc = 0x262464u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 16));
label_262468:
    // 0x262468: 0x0  nop
    ctx->pc = 0x262468u;
    // NOP
label_26246c:
    // 0x26246c: 0x0  nop
    ctx->pc = 0x26246cu;
    // NOP
label_262470:
    // 0x262470: 0xd094  .word       0x0000D094                   # dsllv       $k0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262470u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_262474:
    // 0x262474: 0x11970  tge         $zero, $at, 101
    ctx->pc = 0x262474u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_262478:
    // 0x262478: 0x0  nop
    ctx->pc = 0x262478u;
    // NOP
label_26247c:
    // 0x26247c: 0x0  nop
    ctx->pc = 0x26247cu;
    // NOP
label_262480:
    // 0x262480: 0xd0b8  dsll        $k0, $zero, 2
    ctx->pc = 0x262480u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << 2);
label_262484:
    // 0x262484: 0x64a0  .word       0x000064A0                   # add         $t4, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_262488:
    // 0x262488: 0x0  nop
    ctx->pc = 0x262488u;
    // NOP
label_26248c:
    // 0x26248c: 0x0  nop
    ctx->pc = 0x26248cu;
    // NOP
label_262490:
    // 0x262490: 0xd0c5  .word       0x0000D0C5                   # INVALID     $zero, $zero, -0x2F3B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x262490 raw=0x0000D0C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262494:
    // 0x262494: 0xdb70  tge         $zero, $zero, 877
    ctx->pc = 0x262494u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262498:
    // 0x262498: 0x0  nop
    ctx->pc = 0x262498u;
    // NOP
label_26249c:
    // 0x26249c: 0x0  nop
    ctx->pc = 0x26249cu;
    // NOP
label_2624a0:
    // 0x2624a0: 0xd0e1  .word       0x0000D0E1                   # addu        $k0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624a0u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2624a4:
    // 0x2624a4: 0x2950  .word       0x00002950                   # mfhi        $a1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624a4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2624a8:
    // 0x2624a8: 0x0  nop
    ctx->pc = 0x2624a8u;
    // NOP
label_2624ac:
    // 0x2624ac: 0x0  nop
    ctx->pc = 0x2624acu;
    // NOP
label_2624b0:
    // 0x2624b0: 0xd0e7  .word       0x0000D0E7                   # not         $k0, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624b0u;
    SET_GPR_U64(ctx, 26, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2624b4:
    // 0x2624b4: 0x10e0  .word       0x000010E0                   # add         $v0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2624b8:
    // 0x2624b8: 0x0  nop
    ctx->pc = 0x2624b8u;
    // NOP
label_2624bc:
    // 0x2624bc: 0x0  nop
    ctx->pc = 0x2624bcu;
    // NOP
label_2624c0:
    // 0x2624c0: 0xd0ea  .word       0x0000D0EA                   # slt         $k0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624c0u;
    SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2624c4:
    // 0x2624c4: 0x5ea0  .word       0x00005EA0                   # add         $t3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2624c8:
    // 0x2624c8: 0x0  nop
    ctx->pc = 0x2624c8u;
    // NOP
label_2624cc:
    // 0x2624cc: 0x0  nop
    ctx->pc = 0x2624ccu;
    // NOP
label_2624d0:
    // 0x2624d0: 0xd0f6  tne         $zero, $zero, 835
    ctx->pc = 0x2624d0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2624d4:
    // 0x2624d4: 0xe250  .word       0x0000E250                   # mfhi        $gp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624d4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2624d8:
    // 0x2624d8: 0x0  nop
    ctx->pc = 0x2624d8u;
    // NOP
label_2624dc:
    // 0x2624dc: 0x0  nop
    ctx->pc = 0x2624dcu;
    // NOP
label_2624e0:
    // 0x2624e0: 0xd113  .word       0x0000D113                   # mtlo        $zero # 0000D100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624e0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2624e4:
    // 0x2624e4: 0x14610  .word       0x00014610                   # mfhi        $t0 # 00010600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624e4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2624e8:
    // 0x2624e8: 0x0  nop
    ctx->pc = 0x2624e8u;
    // NOP
label_2624ec:
    // 0x2624ec: 0x0  nop
    ctx->pc = 0x2624ecu;
    // NOP
label_2624f0:
    // 0x2624f0: 0xd13c  dsll32      $k0, $zero, 4
    ctx->pc = 0x2624f0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << (32 + 4));
label_2624f4:
    // 0x2624f4: 0xc4d0  .word       0x0000C4D0                   # mfhi        $t8 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2624f4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_2624f8:
    // 0x2624f8: 0x0  nop
    ctx->pc = 0x2624f8u;
    // NOP
label_2624fc:
    // 0x2624fc: 0x0  nop
    ctx->pc = 0x2624fcu;
    // NOP
label_262500:
    // 0x262500: 0xd155  .word       0x0000D155                   # INVALID     $zero, $zero, -0x2EAB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262500u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x262500 raw=0x0000D155"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262504:
    // 0x262504: 0xe120  .word       0x0000E120                   # add         $gp, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262504u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_262508:
    // 0x262508: 0x0  nop
    ctx->pc = 0x262508u;
    // NOP
label_26250c:
    // 0x26250c: 0x0  nop
    ctx->pc = 0x26250cu;
    // NOP
label_262510:
    // 0x262510: 0xd172  tlt         $zero, $zero, 837
    ctx->pc = 0x262510u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262514:
    // 0x262514: 0x14130  tge         $zero, $at, 260
    ctx->pc = 0x262514u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_262518:
    // 0x262518: 0x0  nop
    ctx->pc = 0x262518u;
    // NOP
label_26251c:
    // 0x26251c: 0x0  nop
    ctx->pc = 0x26251cu;
    // NOP
label_262520:
    // 0x262520: 0xd19b  .word       0x0000D19B                   # divu        $k0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262520u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_262524:
    // 0x262524: 0xcdb0  tge         $zero, $zero, 822
    ctx->pc = 0x262524u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262528:
    // 0x262528: 0x0  nop
    ctx->pc = 0x262528u;
    // NOP
label_26252c:
    // 0x26252c: 0x0  nop
    ctx->pc = 0x26252cu;
    // NOP
label_262530:
    // 0x262530: 0xd1b5  .word       0x0000D1B5                   # INVALID     $zero, $zero, -0x2E4B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262530u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x262530 raw=0x0000D1B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262534:
    // 0x262534: 0x10f70  tge         $zero, $at, 61
    ctx->pc = 0x262534u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_262538:
    // 0x262538: 0x0  nop
    ctx->pc = 0x262538u;
    // NOP
label_26253c:
    // 0x26253c: 0x0  nop
    ctx->pc = 0x26253cu;
    // NOP
label_262540:
    // 0x262540: 0xd1d7  .word       0x0000D1D7                   # dsrav       $k0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262540u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_262544:
    // 0x262544: 0x32e0  .word       0x000032E0                   # add         $a2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_262548:
    // 0x262548: 0x0  nop
    ctx->pc = 0x262548u;
    // NOP
label_26254c:
    // 0x26254c: 0x0  nop
    ctx->pc = 0x26254cu;
    // NOP
label_262550:
    // 0x262550: 0xd1de  .word       0x0000D1DE                   # ddiv        $k0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262550u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x262550 raw=0x0000D1DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262554:
    // 0x262554: 0x7770  tge         $zero, $zero, 477
    ctx->pc = 0x262554u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262558:
    // 0x262558: 0x0  nop
    ctx->pc = 0x262558u;
    // NOP
label_26255c:
    // 0x26255c: 0x0  nop
    ctx->pc = 0x26255cu;
    // NOP
label_262560:
    // 0x262560: 0xd1ed  .word       0x0000D1ED                   # daddu       $k0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262560u;
    SET_GPR_U64(ctx, 26, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262564:
    // 0x262564: 0x2890  .word       0x00002890                   # mfhi        $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262564u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_262568:
    // 0x262568: 0x0  nop
    ctx->pc = 0x262568u;
    // NOP
label_26256c:
    // 0x26256c: 0x0  nop
    ctx->pc = 0x26256cu;
    // NOP
label_262570:
    // 0x262570: 0xd1f3  tltu        $zero, $zero, 839
    ctx->pc = 0x262570u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262574:
    // 0x262574: 0x30a0  .word       0x000030A0                   # add         $a2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262574u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_262578:
    // 0x262578: 0x0  nop
    ctx->pc = 0x262578u;
    // NOP
label_26257c:
    // 0x26257c: 0x0  nop
    ctx->pc = 0x26257cu;
    // NOP
label_262580:
    // 0x262580: 0xd1fa  dsrl        $k0, $zero, 7
    ctx->pc = 0x262580u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> 7);
label_262584:
    // 0x262584: 0x45d0  .word       0x000045D0                   # mfhi        $t0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262584u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_262588:
    // 0x262588: 0x0  nop
    ctx->pc = 0x262588u;
    // NOP
label_26258c:
    // 0x26258c: 0x0  nop
    ctx->pc = 0x26258cu;
    // NOP
label_262590:
    // 0x262590: 0xd203  sra         $k0, $zero, 8
    ctx->pc = 0x262590u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 0), 8));
label_262594:
    // 0x262594: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x262594u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_262598:
    // 0x262598: 0x0  nop
    ctx->pc = 0x262598u;
    // NOP
label_26259c:
    // 0x26259c: 0x0  nop
    ctx->pc = 0x26259cu;
    // NOP
label_2625a0:
    // 0x2625a0: 0xd20f  .word       0x0000D20F                   # sync # 0000D000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2625a4:
    // 0x2625a4: 0xbf00  sll         $s7, $zero, 28
    ctx->pc = 0x2625a4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2625a8:
    // 0x2625a8: 0x0  nop
    ctx->pc = 0x2625a8u;
    // NOP
label_2625ac:
    // 0x2625ac: 0x0  nop
    ctx->pc = 0x2625acu;
    // NOP
label_2625b0:
    // 0x2625b0: 0xd227  .word       0x0000D227                   # not         $k0, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625b0u;
    SET_GPR_U64(ctx, 26, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2625b4:
    // 0x2625b4: 0x7eb0  tge         $zero, $zero, 506
    ctx->pc = 0x2625b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2625b8:
    // 0x2625b8: 0x0  nop
    ctx->pc = 0x2625b8u;
    // NOP
label_2625bc:
    // 0x2625bc: 0x0  nop
    ctx->pc = 0x2625bcu;
    // NOP
label_2625c0:
    // 0x2625c0: 0xd237  .word       0x0000D237                   # INVALID     $zero, $zero, -0x2DC9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2625C0 raw=0x0000D237"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2625c4:
    // 0x2625c4: 0x4fe0  .word       0x00004FE0                   # add         $t1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2625c8:
    // 0x2625c8: 0x0  nop
    ctx->pc = 0x2625c8u;
    // NOP
label_2625cc:
    // 0x2625cc: 0x0  nop
    ctx->pc = 0x2625ccu;
    // NOP
label_2625d0:
    // 0x2625d0: 0xd241  .word       0x0000D241                   # INVALID     $zero, $zero, -0x2DBF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2625D0 raw=0x0000D241"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2625d4:
    // 0x2625d4: 0xfd50  .word       0x0000FD50                   # mfhi        $ra # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625d4u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2625d8:
    // 0x2625d8: 0x0  nop
    ctx->pc = 0x2625d8u;
    // NOP
label_2625dc:
    // 0x2625dc: 0x0  nop
    ctx->pc = 0x2625dcu;
    // NOP
label_2625e0:
    // 0x2625e0: 0xd261  .word       0x0000D261                   # addu        $k0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625e0u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2625e4:
    // 0x2625e4: 0x1460  .word       0x00001460                   # add         $v0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2625e8:
    // 0x2625e8: 0x0  nop
    ctx->pc = 0x2625e8u;
    // NOP
label_2625ec:
    // 0x2625ec: 0x0  nop
    ctx->pc = 0x2625ecu;
    // NOP
label_2625f0:
    // 0x2625f0: 0xd264  .word       0x0000D264                   # and         $k0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2625f0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2625f4:
    // 0x2625f4: 0xd1f0  tge         $zero, $zero, 839
    ctx->pc = 0x2625f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2625f8:
    // 0x2625f8: 0x0  nop
    ctx->pc = 0x2625f8u;
    // NOP
label_2625fc:
    // 0x2625fc: 0x0  nop
    ctx->pc = 0x2625fcu;
    // NOP
label_262600:
    // 0x262600: 0xd27f  dsra32      $k0, $zero, 9
    ctx->pc = 0x262600u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> (32 + 9));
label_262604:
    // 0x262604: 0x7cd0  .word       0x00007CD0                   # mfhi        $t7 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262604u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_262608:
    // 0x262608: 0x0  nop
    ctx->pc = 0x262608u;
    // NOP
label_26260c:
    // 0x26260c: 0x0  nop
    ctx->pc = 0x26260cu;
    // NOP
label_262610:
    // 0x262610: 0xd28f  .word       0x0000D28F                   # sync # 0000D000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262610u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_262614:
    // 0x262614: 0x11410  .word       0x00011410                   # mfhi        $v0 # 00010400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262614u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_262618:
    // 0x262618: 0x0  nop
    ctx->pc = 0x262618u;
    // NOP
label_26261c:
    // 0x26261c: 0x0  nop
    ctx->pc = 0x26261cu;
    // NOP
label_262620:
    // 0x262620: 0xd2b2  tlt         $zero, $zero, 842
    ctx->pc = 0x262620u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262624:
    // 0x262624: 0xe8d0  .word       0x0000E8D0                   # mfhi        $sp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262624u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_262628:
    // 0x262628: 0x0  nop
    ctx->pc = 0x262628u;
    // NOP
label_26262c:
    // 0x26262c: 0x0  nop
    ctx->pc = 0x26262cu;
    // NOP
label_262630:
    // 0x262630: 0xd2d0  .word       0x0000D2D0                   # mfhi        $k0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262630u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_262634:
    // 0x262634: 0x5d90  .word       0x00005D90                   # mfhi        $t3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262634u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_262638:
    // 0x262638: 0x0  nop
    ctx->pc = 0x262638u;
    // NOP
label_26263c:
    // 0x26263c: 0x0  nop
    ctx->pc = 0x26263cu;
    // NOP
label_262640:
    // 0x262640: 0xd2dc  .word       0x0000D2DC                   # dmult       $zero, $zero # 0000D2C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x262640 raw=0x0000D2DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262644:
    // 0x262644: 0x4e70  tge         $zero, $zero, 313
    ctx->pc = 0x262644u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262648:
    // 0x262648: 0x0  nop
    ctx->pc = 0x262648u;
    // NOP
label_26264c:
    // 0x26264c: 0x0  nop
    ctx->pc = 0x26264cu;
    // NOP
label_262650:
    // 0x262650: 0xd2e6  .word       0x0000D2E6                   # xor         $k0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262650u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_262654:
    // 0x262654: 0x13100  sll         $a2, $at, 4
    ctx->pc = 0x262654u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 4));
label_262658:
    // 0x262658: 0x0  nop
    ctx->pc = 0x262658u;
    // NOP
label_26265c:
    // 0x26265c: 0x0  nop
    ctx->pc = 0x26265cu;
    // NOP
label_262660:
    // 0x262660: 0xd30d  break       0, 844
    ctx->pc = 0x262660u;
    runtime->handleBreak(rdram, ctx);
label_262664:
    // 0x262664: 0x11280  sll         $v0, $at, 10
    ctx->pc = 0x262664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 10));
label_262668:
    // 0x262668: 0x0  nop
    ctx->pc = 0x262668u;
    // NOP
label_26266c:
    // 0x26266c: 0x0  nop
    ctx->pc = 0x26266cu;
    // NOP
label_262670:
    // 0x262670: 0xd330  tge         $zero, $zero, 844
    ctx->pc = 0x262670u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262674:
    // 0x262674: 0x2720  .word       0x00002720                   # add         $a0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262674u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_262678:
    // 0x262678: 0x0  nop
    ctx->pc = 0x262678u;
    // NOP
label_26267c:
    // 0x26267c: 0x0  nop
    ctx->pc = 0x26267cu;
    // NOP
label_262680:
    // 0x262680: 0xd335  .word       0x0000D335                   # INVALID     $zero, $zero, -0x2CCB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262680u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x262680 raw=0x0000D335"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262684:
    // 0x262684: 0x2c80  sll         $a1, $zero, 18
    ctx->pc = 0x262684u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_262688:
    // 0x262688: 0x0  nop
    ctx->pc = 0x262688u;
    // NOP
label_26268c:
    // 0x26268c: 0x0  nop
    ctx->pc = 0x26268cu;
    // NOP
label_262690:
    // 0x262690: 0xd33b  dsra        $k0, $zero, 12
    ctx->pc = 0x262690u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> 12);
label_262694:
    // 0x262694: 0x10b30  tge         $zero, $at, 44
    ctx->pc = 0x262694u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_262698:
    // 0x262698: 0x0  nop
    ctx->pc = 0x262698u;
    // NOP
label_26269c:
    // 0x26269c: 0x0  nop
    ctx->pc = 0x26269cu;
    // NOP
label_2626a0:
    // 0x2626a0: 0xd35d  .word       0x0000D35D                   # dmultu      $zero, $zero # 0000D340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2626A0 raw=0x0000D35D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2626a4:
    // 0x2626a4: 0xaa30  tge         $zero, $zero, 680
    ctx->pc = 0x2626a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2626a8:
    // 0x2626a8: 0x0  nop
    ctx->pc = 0x2626a8u;
    // NOP
label_2626ac:
    // 0x2626ac: 0x0  nop
    ctx->pc = 0x2626acu;
    // NOP
label_2626b0:
    // 0x2626b0: 0xd373  tltu        $zero, $zero, 845
    ctx->pc = 0x2626b0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2626b4:
    // 0x2626b4: 0xcc60  .word       0x0000CC60                   # add         $t9, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_2626b8:
    // 0x2626b8: 0x0  nop
    ctx->pc = 0x2626b8u;
    // NOP
label_2626bc:
    // 0x2626bc: 0x0  nop
    ctx->pc = 0x2626bcu;
    // NOP
label_2626c0:
    // 0x2626c0: 0xd38d  break       0, 846
    ctx->pc = 0x2626c0u;
    runtime->handleBreak(rdram, ctx);
label_2626c4:
    // 0x2626c4: 0x8c90  .word       0x00008C90                   # mfhi        $s1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626c4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2626c8:
    // 0x2626c8: 0x0  nop
    ctx->pc = 0x2626c8u;
    // NOP
label_2626cc:
    // 0x2626cc: 0x0  nop
    ctx->pc = 0x2626ccu;
    // NOP
label_2626d0:
    // 0x2626d0: 0xd39f  .word       0x0000D39F                   # ddivu       $k0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2626D0 raw=0x0000D39F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2626d4:
    // 0x2626d4: 0x1a10  .word       0x00001A10                   # mfhi        $v1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2626d8:
    // 0x2626d8: 0x0  nop
    ctx->pc = 0x2626d8u;
    // NOP
label_2626dc:
    // 0x2626dc: 0x0  nop
    ctx->pc = 0x2626dcu;
    // NOP
label_2626e0:
    // 0x2626e0: 0xd3a3  .word       0x0000D3A3                   # negu        $k0, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626e0u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2626e4:
    // 0x2626e4: 0x4b80  sll         $t1, $zero, 14
    ctx->pc = 0x2626e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_2626e8:
    // 0x2626e8: 0x0  nop
    ctx->pc = 0x2626e8u;
    // NOP
label_2626ec:
    // 0x2626ec: 0x0  nop
    ctx->pc = 0x2626ecu;
    // NOP
label_2626f0:
    // 0x2626f0: 0xd3ad  .word       0x0000D3AD                   # daddu       $k0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626f0u;
    SET_GPR_U64(ctx, 26, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2626f4:
    // 0x2626f4: 0x8390  .word       0x00008390                   # mfhi        $s0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2626f4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2626f8:
    // 0x2626f8: 0x0  nop
    ctx->pc = 0x2626f8u;
    // NOP
label_2626fc:
    // 0x2626fc: 0x0  nop
    ctx->pc = 0x2626fcu;
    // NOP
label_262700:
    // 0x262700: 0xd3be  dsrl32      $k0, $zero, 14
    ctx->pc = 0x262700u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) >> (32 + 14));
label_262704:
    // 0x262704: 0x8570  tge         $zero, $zero, 533
    ctx->pc = 0x262704u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262708:
    // 0x262708: 0x0  nop
    ctx->pc = 0x262708u;
    // NOP
label_26270c:
    // 0x26270c: 0x0  nop
    ctx->pc = 0x26270cu;
    // NOP
label_262710:
    // 0x262710: 0xd3cf  .word       0x0000D3CF                   # sync # 0000D000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262710u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_262714:
    // 0x262714: 0x85b0  tge         $zero, $zero, 534
    ctx->pc = 0x262714u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262718:
    // 0x262718: 0x0  nop
    ctx->pc = 0x262718u;
    // NOP
label_26271c:
    // 0x26271c: 0x0  nop
    ctx->pc = 0x26271cu;
    // NOP
label_262720:
    // 0x262720: 0xd3e0  .word       0x0000D3E0                   # add         $k0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262720u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_262724:
    // 0x262724: 0x38f0  tge         $zero, $zero, 227
    ctx->pc = 0x262724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262728:
    // 0x262728: 0x0  nop
    ctx->pc = 0x262728u;
    // NOP
label_26272c:
    // 0x26272c: 0x0  nop
    ctx->pc = 0x26272cu;
    // NOP
label_262730:
    // 0x262730: 0xd3e8  .word       0x0000D3E8                   # mfsa        $k0 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x262730u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_262734:
    // 0x262734: 0x7020  add         $t6, $zero, $zero
    ctx->pc = 0x262734u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_262738:
    // 0x262738: 0x0  nop
    ctx->pc = 0x262738u;
    // NOP
label_26273c:
    // 0x26273c: 0x0  nop
    ctx->pc = 0x26273cu;
    // NOP
label_262740:
    // 0x262740: 0xd3f7  .word       0x0000D3F7                   # INVALID     $zero, $zero, -0x2C09 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262740u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x262740 raw=0x0000D3F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262744:
    // 0x262744: 0xd0a0  .word       0x0000D0A0                   # add         $k0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262744u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_262748:
    // 0x262748: 0x0  nop
    ctx->pc = 0x262748u;
    // NOP
label_26274c:
    // 0x26274c: 0x0  nop
    ctx->pc = 0x26274cu;
    // NOP
label_262750:
    // 0x262750: 0xd412  .word       0x0000D412                   # mflo        $k0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262750u;
    SET_GPR_U64(ctx, 26, ctx->lo);
label_262754:
    // 0x262754: 0x3be0  .word       0x00003BE0                   # add         $a3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262754u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_262758:
    // 0x262758: 0x0  nop
    ctx->pc = 0x262758u;
    // NOP
label_26275c:
    // 0x26275c: 0x0  nop
    ctx->pc = 0x26275cu;
    // NOP
label_262760:
    // 0x262760: 0xd41a  .word       0x0000D41A                   # div         $k0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262760u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_262764:
    // 0x262764: 0x16c0  sll         $v0, $zero, 27
    ctx->pc = 0x262764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_262768:
    // 0x262768: 0x0  nop
    ctx->pc = 0x262768u;
    // NOP
label_26276c:
    // 0x26276c: 0x0  nop
    ctx->pc = 0x26276cu;
    // NOP
label_262770:
    // 0x262770: 0xd41d  .word       0x0000D41D                   # dmultu      $zero, $zero # 0000D400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x262770 raw=0x0000D41D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262774:
    // 0x262774: 0x7640  sll         $t6, $zero, 25
    ctx->pc = 0x262774u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_262778:
    // 0x262778: 0x0  nop
    ctx->pc = 0x262778u;
    // NOP
label_26277c:
    // 0x26277c: 0x0  nop
    ctx->pc = 0x26277cu;
    // NOP
label_262780:
    // 0x262780: 0xd42c  .word       0x0000D42C                   # dadd        $k0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262780u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_262784:
    // 0x262784: 0x15e50  .word       0x00015E50                   # mfhi        $t3 # 00010640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262784u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_262788:
    // 0x262788: 0x0  nop
    ctx->pc = 0x262788u;
    // NOP
label_26278c:
    // 0x26278c: 0x0  nop
    ctx->pc = 0x26278cu;
    // NOP
label_262790:
    // 0x262790: 0xd458  .word       0x0000D458                   # mult        $k0, $zero, $zero # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x262790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_262794:
    // 0x262794: 0xe350  .word       0x0000E350                   # mfhi        $gp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262794u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_262798:
    // 0x262798: 0x0  nop
    ctx->pc = 0x262798u;
    // NOP
label_26279c:
    // 0x26279c: 0x0  nop
    ctx->pc = 0x26279cu;
    // NOP
label_2627a0:
    // 0x2627a0: 0xd475  .word       0x0000D475                   # INVALID     $zero, $zero, -0x2B8B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2627A0 raw=0x0000D475"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2627a4:
    // 0x2627a4: 0x13520  .word       0x00013520                   # add         $a2, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2627a8:
    // 0x2627a8: 0x0  nop
    ctx->pc = 0x2627a8u;
    // NOP
label_2627ac:
    // 0x2627ac: 0x0  nop
    ctx->pc = 0x2627acu;
    // NOP
label_2627b0:
    // 0x2627b0: 0xd49c  .word       0x0000D49C                   # dmult       $zero, $zero # 0000D480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2627B0 raw=0x0000D49C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2627b4:
    // 0x2627b4: 0xa640  sll         $s4, $zero, 25
    ctx->pc = 0x2627b4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_2627b8:
    // 0x2627b8: 0x0  nop
    ctx->pc = 0x2627b8u;
    // NOP
label_2627bc:
    // 0x2627bc: 0x0  nop
    ctx->pc = 0x2627bcu;
    // NOP
label_2627c0:
    // 0x2627c0: 0xd4b1  tgeu        $zero, $zero, 850
    ctx->pc = 0x2627c0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2627c4:
    // 0x2627c4: 0x1a2b0  tge         $zero, $at, 650
    ctx->pc = 0x2627c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2627c8:
    // 0x2627c8: 0x0  nop
    ctx->pc = 0x2627c8u;
    // NOP
label_2627cc:
    // 0x2627cc: 0x0  nop
    ctx->pc = 0x2627ccu;
    // NOP
label_2627d0:
    // 0x2627d0: 0xd4e6  .word       0x0000D4E6                   # xor         $k0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627d0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2627d4:
    // 0x2627d4: 0xb610  .word       0x0000B610                   # mfhi        $s6 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627d4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2627d8:
    // 0x2627d8: 0x0  nop
    ctx->pc = 0x2627d8u;
    // NOP
label_2627dc:
    // 0x2627dc: 0x0  nop
    ctx->pc = 0x2627dcu;
    // NOP
label_2627e0:
    // 0x2627e0: 0xd4fd  .word       0x0000D4FD                   # INVALID     $zero, $zero, -0x2B03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2627E0 raw=0x0000D4FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2627e4:
    // 0x2627e4: 0xbbf0  tge         $zero, $zero, 751
    ctx->pc = 0x2627e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2627e8:
    // 0x2627e8: 0x0  nop
    ctx->pc = 0x2627e8u;
    // NOP
label_2627ec:
    // 0x2627ec: 0x0  nop
    ctx->pc = 0x2627ecu;
    // NOP
label_2627f0:
    // 0x2627f0: 0xd515  .word       0x0000D515                   # INVALID     $zero, $zero, -0x2AEB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2627f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2627F0 raw=0x0000D515"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2627f4:
    // 0x2627f4: 0x10a00  sll         $at, $at, 8
    ctx->pc = 0x2627f4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 8));
label_2627f8:
    // 0x2627f8: 0x0  nop
    ctx->pc = 0x2627f8u;
    // NOP
label_2627fc:
    // 0x2627fc: 0x0  nop
    ctx->pc = 0x2627fcu;
    // NOP
label_262800:
    // 0x262800: 0xd537  .word       0x0000D537                   # INVALID     $zero, $zero, -0x2AC9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x262800 raw=0x0000D537"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262804:
    // 0x262804: 0xa1d0  .word       0x0000A1D0                   # mfhi        $s4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262804u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_262808:
    // 0x262808: 0x0  nop
    ctx->pc = 0x262808u;
    // NOP
label_26280c:
    // 0x26280c: 0x0  nop
    ctx->pc = 0x26280cu;
    // NOP
label_262810:
    // 0x262810: 0xd54c  syscall     853
    ctx->pc = 0x262810u;
    ctx->pc = 0x262814u;
runtime->handleSyscall(rdram, ctx, 0x355u);
label_262814:
    // 0x262814: 0x5c30  tge         $zero, $zero, 368
    ctx->pc = 0x262814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262818:
    // 0x262818: 0x0  nop
    ctx->pc = 0x262818u;
    // NOP
label_26281c:
    // 0x26281c: 0x0  nop
    ctx->pc = 0x26281cu;
    // NOP
label_262820:
    // 0x262820: 0xd558  .word       0x0000D558                   # mult        $k0, $zero, $zero # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x262820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_262824:
    // 0x262824: 0xfc20  .word       0x0000FC20                   # add         $ra, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262824u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_262828:
    // 0x262828: 0x0  nop
    ctx->pc = 0x262828u;
    // NOP
label_26282c:
    // 0x26282c: 0x0  nop
    ctx->pc = 0x26282cu;
    // NOP
label_262830:
    // 0x262830: 0xd578  dsll        $k0, $zero, 21
    ctx->pc = 0x262830u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << 21);
label_262834:
    // 0x262834: 0x36c0  sll         $a2, $zero, 27
    ctx->pc = 0x262834u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_262838:
    // 0x262838: 0x0  nop
    ctx->pc = 0x262838u;
    // NOP
label_26283c:
    // 0x26283c: 0x0  nop
    ctx->pc = 0x26283cu;
    // NOP
label_262840:
    // 0x262840: 0xd57f  dsra32      $k0, $zero, 21
    ctx->pc = 0x262840u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 0) >> (32 + 21));
label_262844:
    // 0x262844: 0x5610  .word       0x00005610                   # mfhi        $t2 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262844u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_262848:
    // 0x262848: 0x0  nop
    ctx->pc = 0x262848u;
    // NOP
label_26284c:
    // 0x26284c: 0x0  nop
    ctx->pc = 0x26284cu;
    // NOP
label_262850:
    // 0x262850: 0xd58a  .word       0x0000D58A                   # movz        $k0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262850u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_262854:
    // 0x262854: 0xbce0  .word       0x0000BCE0                   # add         $s7, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_262858:
    // 0x262858: 0x0  nop
    ctx->pc = 0x262858u;
    // NOP
label_26285c:
    // 0x26285c: 0x0  nop
    ctx->pc = 0x26285cu;
    // NOP
label_262860:
    // 0x262860: 0xd5a2  .word       0x0000D5A2                   # neg         $k0, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262860u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_262864:
    // 0x262864: 0xa230  tge         $zero, $zero, 648
    ctx->pc = 0x262864u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262868:
    // 0x262868: 0x0  nop
    ctx->pc = 0x262868u;
    // NOP
label_26286c:
    // 0x26286c: 0x0  nop
    ctx->pc = 0x26286cu;
    // NOP
label_262870:
    // 0x262870: 0xd5b7  .word       0x0000D5B7                   # INVALID     $zero, $zero, -0x2A49 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x262870 raw=0x0000D5B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262874:
    // 0x262874: 0xd780  sll         $k0, $zero, 30
    ctx->pc = 0x262874u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_262878:
    // 0x262878: 0x0  nop
    ctx->pc = 0x262878u;
    // NOP
label_26287c:
    // 0x26287c: 0x0  nop
    ctx->pc = 0x26287cu;
    // NOP
label_262880:
    // 0x262880: 0xd5d2  .word       0x0000D5D2                   # mflo        $k0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262880u;
    SET_GPR_U64(ctx, 26, ctx->lo);
label_262884:
    // 0x262884: 0x11c00  sll         $v1, $at, 16
    ctx->pc = 0x262884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 16));
label_262888:
    // 0x262888: 0x0  nop
    ctx->pc = 0x262888u;
    // NOP
label_26288c:
    // 0x26288c: 0x0  nop
    ctx->pc = 0x26288cu;
    // NOP
label_262890:
    // 0x262890: 0xd5f6  tne         $zero, $zero, 855
    ctx->pc = 0x262890u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262894:
    // 0x262894: 0x52c0  sll         $t2, $zero, 11
    ctx->pc = 0x262894u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_262898:
    // 0x262898: 0x0  nop
    ctx->pc = 0x262898u;
    // NOP
label_26289c:
    // 0x26289c: 0x0  nop
    ctx->pc = 0x26289cu;
    // NOP
label_2628a0:
    // 0x2628a0: 0xd601  .word       0x0000D601                   # INVALID     $zero, $zero, -0x29FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2628A0 raw=0x0000D601"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2628a4:
    // 0x2628a4: 0x4470  tge         $zero, $zero, 273
    ctx->pc = 0x2628a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2628a8:
    // 0x2628a8: 0x0  nop
    ctx->pc = 0x2628a8u;
    // NOP
label_2628ac:
    // 0x2628ac: 0x0  nop
    ctx->pc = 0x2628acu;
    // NOP
label_2628b0:
    // 0x2628b0: 0xd60a  .word       0x0000D60A                   # movz        $k0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628b0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_2628b4:
    // 0x2628b4: 0x4920  .word       0x00004920                   # add         $t1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2628b8:
    // 0x2628b8: 0x0  nop
    ctx->pc = 0x2628b8u;
    // NOP
label_2628bc:
    // 0x2628bc: 0x0  nop
    ctx->pc = 0x2628bcu;
    // NOP
label_2628c0:
    // 0x2628c0: 0xd614  .word       0x0000D614                   # dsllv       $k0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628c0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2628c4:
    // 0x2628c4: 0x2340  sll         $a0, $zero, 13
    ctx->pc = 0x2628c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_2628c8:
    // 0x2628c8: 0x0  nop
    ctx->pc = 0x2628c8u;
    // NOP
label_2628cc:
    // 0x2628cc: 0x0  nop
    ctx->pc = 0x2628ccu;
    // NOP
label_2628d0:
    // 0x2628d0: 0xd619  .word       0x0000D619                   # multu       $zero, $zero # 0000D600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628d0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_2628d4:
    // 0x2628d4: 0x3590  .word       0x00003590                   # mfhi        $a2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628d4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2628d8:
    // 0x2628d8: 0x0  nop
    ctx->pc = 0x2628d8u;
    // NOP
label_2628dc:
    // 0x2628dc: 0x0  nop
    ctx->pc = 0x2628dcu;
    // NOP
label_2628e0:
    // 0x2628e0: 0xd620  .word       0x0000D620                   # add         $k0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_2628e4:
    // 0x2628e4: 0x8e10  .word       0x00008E10                   # mfhi        $s1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2628e4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2628e8:
    // 0x2628e8: 0x0  nop
    ctx->pc = 0x2628e8u;
    // NOP
label_2628ec:
    // 0x2628ec: 0x0  nop
    ctx->pc = 0x2628ecu;
    // NOP
label_2628f0:
    // 0x2628f0: 0xd632  tlt         $zero, $zero, 856
    ctx->pc = 0x2628f0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2628f4:
    // 0x2628f4: 0x6fc0  sll         $t5, $zero, 31
    ctx->pc = 0x2628f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2628f8:
    // 0x2628f8: 0x0  nop
    ctx->pc = 0x2628f8u;
    // NOP
label_2628fc:
    // 0x2628fc: 0x0  nop
    ctx->pc = 0x2628fcu;
    // NOP
label_262900:
    // 0x262900: 0xd640  sll         $k0, $zero, 25
    ctx->pc = 0x262900u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_262904:
    // 0x262904: 0x25e0  .word       0x000025E0                   # add         $a0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262904u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_262908:
    // 0x262908: 0x0  nop
    ctx->pc = 0x262908u;
    // NOP
label_26290c:
    // 0x26290c: 0x0  nop
    ctx->pc = 0x26290cu;
    // NOP
label_262910:
    // 0x262910: 0xd645  .word       0x0000D645                   # INVALID     $zero, $zero, -0x29BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262910u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x262910 raw=0x0000D645"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262914:
    // 0x262914: 0x2eb0  tge         $zero, $zero, 186
    ctx->pc = 0x262914u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262918:
    // 0x262918: 0x0  nop
    ctx->pc = 0x262918u;
    // NOP
label_26291c:
    // 0x26291c: 0x0  nop
    ctx->pc = 0x26291cu;
    // NOP
label_262920:
    // 0x262920: 0xd64b  .word       0x0000D64B                   # movn        $k0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262920u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_262924:
    // 0x262924: 0x8b60  .word       0x00008B60                   # add         $s1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262924u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_262928:
    // 0x262928: 0x0  nop
    ctx->pc = 0x262928u;
    // NOP
label_26292c:
    // 0x26292c: 0x0  nop
    ctx->pc = 0x26292cu;
    // NOP
label_262930:
    // 0x262930: 0xd65d  .word       0x0000D65D                   # dmultu      $zero, $zero # 0000D640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x262930 raw=0x0000D65D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262934:
    // 0x262934: 0x7420  .word       0x00007420                   # add         $t6, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262934u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_262938:
    // 0x262938: 0x0  nop
    ctx->pc = 0x262938u;
    // NOP
label_26293c:
    // 0x26293c: 0x0  nop
    ctx->pc = 0x26293cu;
    // NOP
label_262940:
    // 0x262940: 0xd66c  .word       0x0000D66C                   # dadd        $k0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262940u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_262944:
    // 0x262944: 0x4f50  .word       0x00004F50                   # mfhi        $t1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262944u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_262948:
    // 0x262948: 0x0  nop
    ctx->pc = 0x262948u;
    // NOP
label_26294c:
    // 0x26294c: 0x0  nop
    ctx->pc = 0x26294cu;
    // NOP
label_262950:
    // 0x262950: 0xd676  tne         $zero, $zero, 857
    ctx->pc = 0x262950u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262954:
    // 0x262954: 0x8320  .word       0x00008320                   # add         $s0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_262958:
    // 0x262958: 0x0  nop
    ctx->pc = 0x262958u;
    // NOP
label_26295c:
    // 0x26295c: 0x0  nop
    ctx->pc = 0x26295cu;
    // NOP
label_262960:
    // 0x262960: 0xd687  .word       0x0000D687                   # srav        $k0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262960u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_262964:
    // 0x262964: 0x18b80  sll         $s1, $at, 14
    ctx->pc = 0x262964u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 1), 14));
label_262968:
    // 0x262968: 0x0  nop
    ctx->pc = 0x262968u;
    // NOP
label_26296c:
    // 0x26296c: 0x0  nop
    ctx->pc = 0x26296cu;
    // NOP
label_262970:
    // 0x262970: 0xd6b9  .word       0x0000D6B9                   # INVALID     $zero, $zero, -0x2947 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262970u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x262970 raw=0x0000D6B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262974:
    // 0x262974: 0x92d0  .word       0x000092D0                   # mfhi        $s2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262974u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_262978:
    // 0x262978: 0x0  nop
    ctx->pc = 0x262978u;
    // NOP
label_26297c:
    // 0x26297c: 0x0  nop
    ctx->pc = 0x26297cu;
    // NOP
label_262980:
    // 0x262980: 0xd6cc  syscall     859
    ctx->pc = 0x262980u;
    ctx->pc = 0x262984u;
runtime->handleSyscall(rdram, ctx, 0x35Bu);
label_262984:
    // 0x262984: 0x2c90  .word       0x00002C90                   # mfhi        $a1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262984u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_262988:
    // 0x262988: 0x0  nop
    ctx->pc = 0x262988u;
    // NOP
label_26298c:
    // 0x26298c: 0x0  nop
    ctx->pc = 0x26298cu;
    // NOP
label_262990:
    // 0x262990: 0xd6d2  .word       0x0000D6D2                   # mflo        $k0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262990u;
    SET_GPR_U64(ctx, 26, ctx->lo);
label_262994:
    // 0x262994: 0xd230  tge         $zero, $zero, 840
    ctx->pc = 0x262994u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262998:
    // 0x262998: 0x0  nop
    ctx->pc = 0x262998u;
    // NOP
label_26299c:
    // 0x26299c: 0x0  nop
    ctx->pc = 0x26299cu;
    // NOP
label_2629a0:
    // 0x2629a0: 0xd6ed  .word       0x0000D6ED                   # daddu       $k0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629a0u;
    SET_GPR_U64(ctx, 26, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2629a4:
    // 0x2629a4: 0xe250  .word       0x0000E250                   # mfhi        $gp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629a4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2629a8:
    // 0x2629a8: 0x0  nop
    ctx->pc = 0x2629a8u;
    // NOP
label_2629ac:
    // 0x2629ac: 0x0  nop
    ctx->pc = 0x2629acu;
    // NOP
label_2629b0:
    // 0x2629b0: 0xd70a  .word       0x0000D70A                   # movz        $k0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629b0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_2629b4:
    // 0x2629b4: 0x10180  sll         $zero, $at, 6
    ctx->pc = 0x2629b4u;
    
label_2629b8:
    // 0x2629b8: 0x0  nop
    ctx->pc = 0x2629b8u;
    // NOP
label_2629bc:
    // 0x2629bc: 0x0  nop
    ctx->pc = 0x2629bcu;
    // NOP
label_2629c0:
    // 0x2629c0: 0xd72b  .word       0x0000D72B                   # sltu        $k0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629c0u;
    SET_GPR_U64(ctx, 26, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2629c4:
    // 0x2629c4: 0xc7d0  .word       0x0000C7D0                   # mfhi        $t8 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629c4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_2629c8:
    // 0x2629c8: 0x0  nop
    ctx->pc = 0x2629c8u;
    // NOP
label_2629cc:
    // 0x2629cc: 0x0  nop
    ctx->pc = 0x2629ccu;
    // NOP
label_2629d0:
    // 0x2629d0: 0xd744  .word       0x0000D744                   # sllv        $k0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629d0u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2629d4:
    // 0x2629d4: 0x7480  sll         $t6, $zero, 18
    ctx->pc = 0x2629d4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2629d8:
    // 0x2629d8: 0x0  nop
    ctx->pc = 0x2629d8u;
    // NOP
label_2629dc:
    // 0x2629dc: 0x0  nop
    ctx->pc = 0x2629dcu;
    // NOP
label_2629e0:
    // 0x2629e0: 0xd753  .word       0x0000D753                   # mtlo        $zero # 0000D740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629e0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2629e4:
    // 0x2629e4: 0x10e60  .word       0x00010E60                   # add         $at, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2629e8:
    // 0x2629e8: 0x0  nop
    ctx->pc = 0x2629e8u;
    // NOP
label_2629ec:
    // 0x2629ec: 0x0  nop
    ctx->pc = 0x2629ecu;
    // NOP
label_2629f0:
    // 0x2629f0: 0xd775  .word       0x0000D775                   # INVALID     $zero, $zero, -0x288B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2629F0 raw=0x0000D775"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2629f4:
    // 0x2629f4: 0x189a0  .word       0x000189A0                   # add         $s1, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2629f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2629f8:
    // 0x2629f8: 0x0  nop
    ctx->pc = 0x2629f8u;
    // NOP
label_2629fc:
    // 0x2629fc: 0x0  nop
    ctx->pc = 0x2629fcu;
    // NOP
label_262a00:
    // 0x262a00: 0xd7a7  .word       0x0000D7A7                   # not         $k0, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a00u;
    SET_GPR_U64(ctx, 26, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_262a04:
    // 0x262a04: 0x15410  .word       0x00015410                   # mfhi        $t2 # 00010400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a04u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_262a08:
    // 0x262a08: 0x0  nop
    ctx->pc = 0x262a08u;
    // NOP
label_262a0c:
    // 0x262a0c: 0x0  nop
    ctx->pc = 0x262a0cu;
    // NOP
label_262a10:
    // 0x262a10: 0xd7d2  .word       0x0000D7D2                   # mflo        $k0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a10u;
    SET_GPR_U64(ctx, 26, ctx->lo);
label_262a14:
    // 0x262a14: 0x17370  tge         $zero, $at, 461
    ctx->pc = 0x262a14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_262a18:
    // 0x262a18: 0x0  nop
    ctx->pc = 0x262a18u;
    // NOP
label_262a1c:
    // 0x262a1c: 0x0  nop
    ctx->pc = 0x262a1cu;
    // NOP
label_262a20:
    // 0x262a20: 0xd801  .word       0x0000D801                   # INVALID     $zero, $zero, -0x27FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x262A20 raw=0x0000D801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262a24:
    // 0x262a24: 0x61d0  .word       0x000061D0                   # mfhi        $t4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a24u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_262a28:
    // 0x262a28: 0x0  nop
    ctx->pc = 0x262a28u;
    // NOP
label_262a2c:
    // 0x262a2c: 0x0  nop
    ctx->pc = 0x262a2cu;
    // NOP
label_262a30:
    // 0x262a30: 0xd80e  .word       0x0000D80E                   # INVALID     $zero, $zero, -0x27F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x262A30 raw=0x0000D80E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262a34:
    // 0x262a34: 0x4910  .word       0x00004910                   # mfhi        $t1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a34u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_262a38:
    // 0x262a38: 0x0  nop
    ctx->pc = 0x262a38u;
    // NOP
label_262a3c:
    // 0x262a3c: 0x0  nop
    ctx->pc = 0x262a3cu;
    // NOP
label_262a40:
    // 0x262a40: 0xd818  mult        $k1, $zero, $zero
    ctx->pc = 0x262a40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_262a44:
    // 0x262a44: 0x9f00  sll         $s3, $zero, 28
    ctx->pc = 0x262a44u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_262a48:
    // 0x262a48: 0x0  nop
    ctx->pc = 0x262a48u;
    // NOP
label_262a4c:
    // 0x262a4c: 0x0  nop
    ctx->pc = 0x262a4cu;
    // NOP
label_262a50:
    // 0x262a50: 0xd82c  dadd        $k1, $zero, $zero
    ctx->pc = 0x262a50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_262a54:
    // 0x262a54: 0x75a0  .word       0x000075A0                   # add         $t6, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_262a58:
    // 0x262a58: 0x0  nop
    ctx->pc = 0x262a58u;
    // NOP
label_262a5c:
    // 0x262a5c: 0x0  nop
    ctx->pc = 0x262a5cu;
    // NOP
label_262a60:
    // 0x262a60: 0xd83b  dsra        $k1, $zero, 0
    ctx->pc = 0x262a60u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 0) >> 0);
label_262a64:
    // 0x262a64: 0x10bd0  .word       0x00010BD0                   # mfhi        $at # 000103C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a64u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_262a68:
    // 0x262a68: 0x0  nop
    ctx->pc = 0x262a68u;
    // NOP
label_262a6c:
    // 0x262a6c: 0x0  nop
    ctx->pc = 0x262a6cu;
    // NOP
label_262a70:
    // 0x262a70: 0xd85d  .word       0x0000D85D                   # dmultu      $zero, $zero # 0000D840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x262A70 raw=0x0000D85D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262a74:
    // 0x262a74: 0xba70  tge         $zero, $zero, 745
    ctx->pc = 0x262a74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262a78:
    // 0x262a78: 0x0  nop
    ctx->pc = 0x262a78u;
    // NOP
label_262a7c:
    // 0x262a7c: 0x0  nop
    ctx->pc = 0x262a7cu;
    // NOP
label_262a80:
    // 0x262a80: 0xd875  .word       0x0000D875                   # INVALID     $zero, $zero, -0x278B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x262A80 raw=0x0000D875"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262a84:
    // 0x262a84: 0x3ab0  tge         $zero, $zero, 234
    ctx->pc = 0x262a84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262a88:
    // 0x262a88: 0x0  nop
    ctx->pc = 0x262a88u;
    // NOP
label_262a8c:
    // 0x262a8c: 0x0  nop
    ctx->pc = 0x262a8cu;
    // NOP
label_262a90:
    // 0x262a90: 0xd87d  .word       0x0000D87D                   # INVALID     $zero, $zero, -0x2783 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x262A90 raw=0x0000D87D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262a94:
    // 0x262a94: 0xb1d0  .word       0x0000B1D0                   # mfhi        $s6 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262a94u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_262a98:
    // 0x262a98: 0x0  nop
    ctx->pc = 0x262a98u;
    // NOP
label_262a9c:
    // 0x262a9c: 0x0  nop
    ctx->pc = 0x262a9cu;
    // NOP
label_262aa0:
    // 0x262aa0: 0xd894  .word       0x0000D894                   # dsllv       $k1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262aa0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_262aa4:
    // 0x262aa4: 0x7e20  .word       0x00007E20                   # add         $t7, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262aa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_262aa8:
    // 0x262aa8: 0x0  nop
    ctx->pc = 0x262aa8u;
    // NOP
label_262aac:
    // 0x262aac: 0x0  nop
    ctx->pc = 0x262aacu;
    // NOP
label_262ab0:
    // 0x262ab0: 0xd8a4  .word       0x0000D8A4                   # and         $k1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262ab0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_262ab4:
    // 0x262ab4: 0x4b60  .word       0x00004B60                   # add         $t1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262ab4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_262ab8:
    // 0x262ab8: 0x0  nop
    ctx->pc = 0x262ab8u;
    // NOP
label_262abc:
    // 0x262abc: 0x0  nop
    ctx->pc = 0x262abcu;
    // NOP
label_262ac0:
    // 0x262ac0: 0xd8ae  .word       0x0000D8AE                   # dsub        $k1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262ac0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_262ac4:
    // 0x262ac4: 0x6aa0  .word       0x00006AA0                   # add         $t5, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262ac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_262ac8:
    // 0x262ac8: 0x0  nop
    ctx->pc = 0x262ac8u;
    // NOP
label_262acc:
    // 0x262acc: 0x0  nop
    ctx->pc = 0x262accu;
    // NOP
label_262ad0:
    // 0x262ad0: 0xd8bc  dsll32      $k1, $zero, 2
    ctx->pc = 0x262ad0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) << (32 + 2));
label_262ad4:
    // 0x262ad4: 0xa2b0  tge         $zero, $zero, 650
    ctx->pc = 0x262ad4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262ad8:
    // 0x262ad8: 0x0  nop
    ctx->pc = 0x262ad8u;
    // NOP
label_262adc:
    // 0x262adc: 0x0  nop
    ctx->pc = 0x262adcu;
    // NOP
label_262ae0:
    // 0x262ae0: 0xd8d1  .word       0x0000D8D1                   # mthi        $zero # 0000D8C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262ae0u;
    ctx->hi = GPR_U64(ctx, 0);
label_262ae4:
    // 0x262ae4: 0x5fa0  .word       0x00005FA0                   # add         $t3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262ae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_262ae8:
    // 0x262ae8: 0x0  nop
    ctx->pc = 0x262ae8u;
    // NOP
label_262aec:
    // 0x262aec: 0x0  nop
    ctx->pc = 0x262aecu;
    // NOP
label_262af0:
    // 0x262af0: 0xd8dd  .word       0x0000D8DD                   # dmultu      $zero, $zero # 0000D8C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262af0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x262AF0 raw=0x0000D8DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262af4:
    // 0x262af4: 0x6330  tge         $zero, $zero, 396
    ctx->pc = 0x262af4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262af8:
    // 0x262af8: 0x0  nop
    ctx->pc = 0x262af8u;
    // NOP
label_262afc:
    // 0x262afc: 0x0  nop
    ctx->pc = 0x262afcu;
    // NOP
label_262b00:
    // 0x262b00: 0xd8ea  .word       0x0000D8EA                   # slt         $k1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262b00u;
    SET_GPR_U64(ctx, 27, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_262b04:
    // 0x262b04: 0x6000  sll         $t4, $zero, 0
    ctx->pc = 0x262b04u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_262b08:
    // 0x262b08: 0x0  nop
    ctx->pc = 0x262b08u;
    // NOP
label_262b0c:
    // 0x262b0c: 0x0  nop
    ctx->pc = 0x262b0cu;
    // NOP
label_262b10:
    // 0x262b10: 0xd8f6  tne         $zero, $zero, 867
    ctx->pc = 0x262b10u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262b14:
    // 0x262b14: 0x5610  .word       0x00005610                   # mfhi        $t2 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262b14u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_262b18:
    // 0x262b18: 0x0  nop
    ctx->pc = 0x262b18u;
    // NOP
label_262b1c:
    // 0x262b1c: 0x0  nop
    ctx->pc = 0x262b1cu;
    // NOP
label_262b20:
    // 0x262b20: 0xd901  .word       0x0000D901                   # INVALID     $zero, $zero, -0x26FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262b20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x262B20 raw=0x0000D901"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262b24:
    // 0x262b24: 0x5610  .word       0x00005610                   # mfhi        $t2 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262b24u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_262b28:
    // 0x262b28: 0x0  nop
    ctx->pc = 0x262b28u;
    // NOP
label_262b2c:
    // 0x262b2c: 0x0  nop
    ctx->pc = 0x262b2cu;
    // NOP
label_262b30:
    // 0x262b30: 0xd90c  syscall     868
    ctx->pc = 0x262b30u;
    ctx->pc = 0x262B34u;
runtime->handleSyscall(rdram, ctx, 0x364u);
label_262b34:
    // 0x262b34: 0x5bb0  tge         $zero, $zero, 366
    ctx->pc = 0x262b34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262b38:
    // 0x262b38: 0x0  nop
    ctx->pc = 0x262b38u;
    // NOP
label_262b3c:
    // 0x262b3c: 0x0  nop
    ctx->pc = 0x262b3cu;
    // NOP
label_262b40:
    // 0x262b40: 0xd918  .word       0x0000D918                   # mult        $k1, $zero, $zero # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x262b40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_262b44:
    // 0x262b44: 0x5a50  .word       0x00005A50                   # mfhi        $t3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262b44u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_262b48:
    // 0x262b48: 0x0  nop
    ctx->pc = 0x262b48u;
    // NOP
label_262b4c:
    // 0x262b4c: 0x0  nop
    ctx->pc = 0x262b4cu;
    // NOP
label_262b50:
    // 0x262b50: 0xd924  .word       0x0000D924                   # and         $k1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262b50u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_262b54:
    // 0x262b54: 0x6dd0  .word       0x00006DD0                   # mfhi        $t5 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262b54u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_262b58:
    // 0x262b58: 0x0  nop
    ctx->pc = 0x262b58u;
    // NOP
label_262b5c:
    // 0x262b5c: 0x0  nop
    ctx->pc = 0x262b5cu;
    // NOP
label_262b60:
    // 0x262b60: 0xd932  tlt         $zero, $zero, 868
    ctx->pc = 0x262b60u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262b64:
    // 0x262b64: 0x58e0  .word       0x000058E0                   # add         $t3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262b64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_262b68:
    // 0x262b68: 0x0  nop
    ctx->pc = 0x262b68u;
    // NOP
label_262b6c:
    // 0x262b6c: 0x0  nop
    ctx->pc = 0x262b6cu;
    // NOP
label_262b70:
    // 0x262b70: 0xd93e  dsrl32      $k1, $zero, 4
    ctx->pc = 0x262b70u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) >> (32 + 4));
label_262b74:
    // 0x262b74: 0x4b10  .word       0x00004B10                   # mfhi        $t1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262b74u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_262b78:
    // 0x262b78: 0x0  nop
    ctx->pc = 0x262b78u;
    // NOP
label_262b7c:
    // 0x262b7c: 0x0  nop
    ctx->pc = 0x262b7cu;
    // NOP
label_262b80:
    // 0x262b80: 0xd948  .word       0x0000D948                   # jr          $zero # 0000D940 <InstrIdType: CPU_SPECIAL>
label_262b84:
    if (ctx->pc == 0x262B84u) {
        ctx->pc = 0x262B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B80u;
        // 0x262b84: 0x3950  .word       0x00003950                   # mfhi        $a3 # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B88u;
        goto label_262b88;
    }
    ctx->pc = 0x262B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x262B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B80u;
        // 0x262b84: 0x3950  .word       0x00003950                   # mfhi        $a3 # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262B80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x262B88u;
label_262b88:
    // 0x262b88: 0x0  nop
    ctx->pc = 0x262b88u;
    // NOP
label_262b8c:
    // 0x262b8c: 0x0  nop
    ctx->pc = 0x262b8cu;
    // NOP
label_262b90:
    // 0x262b90: 0xd950  .word       0x0000D950                   # mfhi        $k1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262b90u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_262b94:
    // 0x262b94: 0x4c70  tge         $zero, $zero, 305
    ctx->pc = 0x262b94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262b98:
    // 0x262b98: 0x0  nop
    ctx->pc = 0x262b98u;
    // NOP
label_262b9c:
    // 0x262b9c: 0x0  nop
    ctx->pc = 0x262b9cu;
    // NOP
label_262ba0:
    // 0x262ba0: 0xd95a  .word       0x0000D95A                   # div         $k1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262ba0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_262ba4:
    // 0x262ba4: 0x4500  sll         $t0, $zero, 20
    ctx->pc = 0x262ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_262ba8:
    // 0x262ba8: 0x0  nop
    ctx->pc = 0x262ba8u;
    // NOP
label_262bac:
    // 0x262bac: 0x0  nop
    ctx->pc = 0x262bacu;
    // NOP
label_262bb0:
    // 0x262bb0: 0xd963  .word       0x0000D963                   # negu        $k1, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262bb0u;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_262bb4:
    // 0x262bb4: 0x6490  .word       0x00006490                   # mfhi        $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262bb4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_262bb8:
    // 0x262bb8: 0x0  nop
    ctx->pc = 0x262bb8u;
    // NOP
label_262bbc:
    // 0x262bbc: 0x0  nop
    ctx->pc = 0x262bbcu;
    // NOP
label_262bc0:
    // 0x262bc0: 0xd970  tge         $zero, $zero, 869
    ctx->pc = 0x262bc0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_262bc4:
    // 0x262bc4: 0x8480  sll         $s0, $zero, 18
    ctx->pc = 0x262bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_262bc8:
    // 0x262bc8: 0x0  nop
    ctx->pc = 0x262bc8u;
    // NOP
label_262bcc:
    // 0x262bcc: 0x0  nop
    ctx->pc = 0x262bccu;
    // NOP
label_262bd0:
    // 0x262bd0: 0xd981  .word       0x0000D981                   # INVALID     $zero, $zero, -0x267F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262bd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x262BD0 raw=0x0000D981"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_262bd4:
    // 0x262bd4: 0x5690  .word       0x00005690                   # mfhi        $t2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262bd4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_262bd8:
    // 0x262bd8: 0x0  nop
    ctx->pc = 0x262bd8u;
    // NOP
label_262bdc:
    // 0x262bdc: 0x0  nop
    ctx->pc = 0x262bdcu;
    // NOP
label_262be0:
    // 0x262be0: 0xd98c  syscall     870
    ctx->pc = 0x262be0u;
    ctx->pc = 0x262BE4u;
runtime->handleSyscall(rdram, ctx, 0x366u);
label_262be4:
    // 0x262be4: 0x5c20  .word       0x00005C20                   # add         $t3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x262be4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_262be8:
    // 0x262be8: 0x0  nop
    ctx->pc = 0x262be8u;
    // NOP
label_262bec:
    // 0x262bec: 0x0  nop
    ctx->pc = 0x262becu;
    // NOP
    ctx->pc = 0x262bf0u;
    return;
}
