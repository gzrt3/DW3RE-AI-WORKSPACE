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


void FUN_0014eba0_part547(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x259540u: goto label_259540;
        case 0x259544u: goto label_259544;
        case 0x259548u: goto label_259548;
        case 0x25954cu: goto label_25954c;
        case 0x259550u: goto label_259550;
        case 0x259554u: goto label_259554;
        case 0x259558u: goto label_259558;
        case 0x25955cu: goto label_25955c;
        case 0x259560u: goto label_259560;
        case 0x259564u: goto label_259564;
        case 0x259568u: goto label_259568;
        case 0x25956cu: goto label_25956c;
        case 0x259570u: goto label_259570;
        case 0x259574u: goto label_259574;
        case 0x259578u: goto label_259578;
        case 0x25957cu: goto label_25957c;
        case 0x259580u: goto label_259580;
        case 0x259584u: goto label_259584;
        case 0x259588u: goto label_259588;
        case 0x25958cu: goto label_25958c;
        case 0x259590u: goto label_259590;
        case 0x259594u: goto label_259594;
        case 0x259598u: goto label_259598;
        case 0x25959cu: goto label_25959c;
        case 0x2595a0u: goto label_2595a0;
        case 0x2595a4u: goto label_2595a4;
        case 0x2595a8u: goto label_2595a8;
        case 0x2595acu: goto label_2595ac;
        case 0x2595b0u: goto label_2595b0;
        case 0x2595b4u: goto label_2595b4;
        case 0x2595b8u: goto label_2595b8;
        case 0x2595bcu: goto label_2595bc;
        case 0x2595c0u: goto label_2595c0;
        case 0x2595c4u: goto label_2595c4;
        case 0x2595c8u: goto label_2595c8;
        case 0x2595ccu: goto label_2595cc;
        case 0x2595d0u: goto label_2595d0;
        case 0x2595d4u: goto label_2595d4;
        case 0x2595d8u: goto label_2595d8;
        case 0x2595dcu: goto label_2595dc;
        case 0x2595e0u: goto label_2595e0;
        case 0x2595e4u: goto label_2595e4;
        case 0x2595e8u: goto label_2595e8;
        case 0x2595ecu: goto label_2595ec;
        case 0x2595f0u: goto label_2595f0;
        case 0x2595f4u: goto label_2595f4;
        case 0x2595f8u: goto label_2595f8;
        case 0x2595fcu: goto label_2595fc;
        case 0x259600u: goto label_259600;
        case 0x259604u: goto label_259604;
        case 0x259608u: goto label_259608;
        case 0x25960cu: goto label_25960c;
        case 0x259610u: goto label_259610;
        case 0x259614u: goto label_259614;
        case 0x259618u: goto label_259618;
        case 0x25961cu: goto label_25961c;
        case 0x259620u: goto label_259620;
        case 0x259624u: goto label_259624;
        case 0x259628u: goto label_259628;
        case 0x25962cu: goto label_25962c;
        case 0x259630u: goto label_259630;
        case 0x259634u: goto label_259634;
        case 0x259638u: goto label_259638;
        case 0x25963cu: goto label_25963c;
        case 0x259640u: goto label_259640;
        case 0x259644u: goto label_259644;
        case 0x259648u: goto label_259648;
        case 0x25964cu: goto label_25964c;
        case 0x259650u: goto label_259650;
        case 0x259654u: goto label_259654;
        case 0x259658u: goto label_259658;
        case 0x25965cu: goto label_25965c;
        case 0x259660u: goto label_259660;
        case 0x259664u: goto label_259664;
        case 0x259668u: goto label_259668;
        case 0x25966cu: goto label_25966c;
        case 0x259670u: goto label_259670;
        case 0x259674u: goto label_259674;
        case 0x259678u: goto label_259678;
        case 0x25967cu: goto label_25967c;
        case 0x259680u: goto label_259680;
        case 0x259684u: goto label_259684;
        case 0x259688u: goto label_259688;
        case 0x25968cu: goto label_25968c;
        case 0x259690u: goto label_259690;
        case 0x259694u: goto label_259694;
        case 0x259698u: goto label_259698;
        case 0x25969cu: goto label_25969c;
        case 0x2596a0u: goto label_2596a0;
        case 0x2596a4u: goto label_2596a4;
        case 0x2596a8u: goto label_2596a8;
        case 0x2596acu: goto label_2596ac;
        case 0x2596b0u: goto label_2596b0;
        case 0x2596b4u: goto label_2596b4;
        case 0x2596b8u: goto label_2596b8;
        case 0x2596bcu: goto label_2596bc;
        case 0x2596c0u: goto label_2596c0;
        case 0x2596c4u: goto label_2596c4;
        case 0x2596c8u: goto label_2596c8;
        case 0x2596ccu: goto label_2596cc;
        case 0x2596d0u: goto label_2596d0;
        case 0x2596d4u: goto label_2596d4;
        case 0x2596d8u: goto label_2596d8;
        case 0x2596dcu: goto label_2596dc;
        case 0x2596e0u: goto label_2596e0;
        case 0x2596e4u: goto label_2596e4;
        case 0x2596e8u: goto label_2596e8;
        case 0x2596ecu: goto label_2596ec;
        case 0x2596f0u: goto label_2596f0;
        case 0x2596f4u: goto label_2596f4;
        case 0x2596f8u: goto label_2596f8;
        case 0x2596fcu: goto label_2596fc;
        case 0x259700u: goto label_259700;
        case 0x259704u: goto label_259704;
        case 0x259708u: goto label_259708;
        case 0x25970cu: goto label_25970c;
        case 0x259710u: goto label_259710;
        case 0x259714u: goto label_259714;
        case 0x259718u: goto label_259718;
        case 0x25971cu: goto label_25971c;
        case 0x259720u: goto label_259720;
        case 0x259724u: goto label_259724;
        case 0x259728u: goto label_259728;
        case 0x25972cu: goto label_25972c;
        case 0x259730u: goto label_259730;
        case 0x259734u: goto label_259734;
        case 0x259738u: goto label_259738;
        case 0x25973cu: goto label_25973c;
        case 0x259740u: goto label_259740;
        case 0x259744u: goto label_259744;
        case 0x259748u: goto label_259748;
        case 0x25974cu: goto label_25974c;
        case 0x259750u: goto label_259750;
        case 0x259754u: goto label_259754;
        case 0x259758u: goto label_259758;
        case 0x25975cu: goto label_25975c;
        case 0x259760u: goto label_259760;
        case 0x259764u: goto label_259764;
        case 0x259768u: goto label_259768;
        case 0x25976cu: goto label_25976c;
        case 0x259770u: goto label_259770;
        case 0x259774u: goto label_259774;
        case 0x259778u: goto label_259778;
        case 0x25977cu: goto label_25977c;
        case 0x259780u: goto label_259780;
        case 0x259784u: goto label_259784;
        case 0x259788u: goto label_259788;
        case 0x25978cu: goto label_25978c;
        case 0x259790u: goto label_259790;
        case 0x259794u: goto label_259794;
        case 0x259798u: goto label_259798;
        case 0x25979cu: goto label_25979c;
        case 0x2597a0u: goto label_2597a0;
        case 0x2597a4u: goto label_2597a4;
        case 0x2597a8u: goto label_2597a8;
        case 0x2597acu: goto label_2597ac;
        case 0x2597b0u: goto label_2597b0;
        case 0x2597b4u: goto label_2597b4;
        case 0x2597b8u: goto label_2597b8;
        case 0x2597bcu: goto label_2597bc;
        case 0x2597c0u: goto label_2597c0;
        case 0x2597c4u: goto label_2597c4;
        case 0x2597c8u: goto label_2597c8;
        case 0x2597ccu: goto label_2597cc;
        case 0x2597d0u: goto label_2597d0;
        case 0x2597d4u: goto label_2597d4;
        case 0x2597d8u: goto label_2597d8;
        case 0x2597dcu: goto label_2597dc;
        case 0x2597e0u: goto label_2597e0;
        case 0x2597e4u: goto label_2597e4;
        case 0x2597e8u: goto label_2597e8;
        case 0x2597ecu: goto label_2597ec;
        case 0x2597f0u: goto label_2597f0;
        case 0x2597f4u: goto label_2597f4;
        case 0x2597f8u: goto label_2597f8;
        case 0x2597fcu: goto label_2597fc;
        case 0x259800u: goto label_259800;
        case 0x259804u: goto label_259804;
        case 0x259808u: goto label_259808;
        case 0x25980cu: goto label_25980c;
        case 0x259810u: goto label_259810;
        case 0x259814u: goto label_259814;
        case 0x259818u: goto label_259818;
        case 0x25981cu: goto label_25981c;
        case 0x259820u: goto label_259820;
        case 0x259824u: goto label_259824;
        case 0x259828u: goto label_259828;
        case 0x25982cu: goto label_25982c;
        case 0x259830u: goto label_259830;
        case 0x259834u: goto label_259834;
        case 0x259838u: goto label_259838;
        case 0x25983cu: goto label_25983c;
        case 0x259840u: goto label_259840;
        case 0x259844u: goto label_259844;
        case 0x259848u: goto label_259848;
        case 0x25984cu: goto label_25984c;
        case 0x259850u: goto label_259850;
        case 0x259854u: goto label_259854;
        case 0x259858u: goto label_259858;
        case 0x25985cu: goto label_25985c;
        case 0x259860u: goto label_259860;
        case 0x259864u: goto label_259864;
        case 0x259868u: goto label_259868;
        case 0x25986cu: goto label_25986c;
        case 0x259870u: goto label_259870;
        case 0x259874u: goto label_259874;
        case 0x259878u: goto label_259878;
        case 0x25987cu: goto label_25987c;
        case 0x259880u: goto label_259880;
        case 0x259884u: goto label_259884;
        case 0x259888u: goto label_259888;
        case 0x25988cu: goto label_25988c;
        case 0x259890u: goto label_259890;
        case 0x259894u: goto label_259894;
        case 0x259898u: goto label_259898;
        case 0x25989cu: goto label_25989c;
        case 0x2598a0u: goto label_2598a0;
        case 0x2598a4u: goto label_2598a4;
        case 0x2598a8u: goto label_2598a8;
        case 0x2598acu: goto label_2598ac;
        case 0x2598b0u: goto label_2598b0;
        case 0x2598b4u: goto label_2598b4;
        case 0x2598b8u: goto label_2598b8;
        case 0x2598bcu: goto label_2598bc;
        case 0x2598c0u: goto label_2598c0;
        case 0x2598c4u: goto label_2598c4;
        case 0x2598c8u: goto label_2598c8;
        case 0x2598ccu: goto label_2598cc;
        case 0x2598d0u: goto label_2598d0;
        case 0x2598d4u: goto label_2598d4;
        case 0x2598d8u: goto label_2598d8;
        case 0x2598dcu: goto label_2598dc;
        case 0x2598e0u: goto label_2598e0;
        case 0x2598e4u: goto label_2598e4;
        case 0x2598e8u: goto label_2598e8;
        case 0x2598ecu: goto label_2598ec;
        case 0x2598f0u: goto label_2598f0;
        case 0x2598f4u: goto label_2598f4;
        case 0x2598f8u: goto label_2598f8;
        case 0x2598fcu: goto label_2598fc;
        case 0x259900u: goto label_259900;
        case 0x259904u: goto label_259904;
        case 0x259908u: goto label_259908;
        case 0x25990cu: goto label_25990c;
        case 0x259910u: goto label_259910;
        case 0x259914u: goto label_259914;
        case 0x259918u: goto label_259918;
        case 0x25991cu: goto label_25991c;
        case 0x259920u: goto label_259920;
        case 0x259924u: goto label_259924;
        case 0x259928u: goto label_259928;
        case 0x25992cu: goto label_25992c;
        case 0x259930u: goto label_259930;
        case 0x259934u: goto label_259934;
        case 0x259938u: goto label_259938;
        case 0x25993cu: goto label_25993c;
        case 0x259940u: goto label_259940;
        case 0x259944u: goto label_259944;
        case 0x259948u: goto label_259948;
        case 0x25994cu: goto label_25994c;
        case 0x259950u: goto label_259950;
        case 0x259954u: goto label_259954;
        case 0x259958u: goto label_259958;
        case 0x25995cu: goto label_25995c;
        case 0x259960u: goto label_259960;
        case 0x259964u: goto label_259964;
        case 0x259968u: goto label_259968;
        case 0x25996cu: goto label_25996c;
        case 0x259970u: goto label_259970;
        case 0x259974u: goto label_259974;
        case 0x259978u: goto label_259978;
        case 0x25997cu: goto label_25997c;
        case 0x259980u: goto label_259980;
        case 0x259984u: goto label_259984;
        case 0x259988u: goto label_259988;
        case 0x25998cu: goto label_25998c;
        case 0x259990u: goto label_259990;
        case 0x259994u: goto label_259994;
        case 0x259998u: goto label_259998;
        case 0x25999cu: goto label_25999c;
        case 0x2599a0u: goto label_2599a0;
        case 0x2599a4u: goto label_2599a4;
        case 0x2599a8u: goto label_2599a8;
        case 0x2599acu: goto label_2599ac;
        case 0x2599b0u: goto label_2599b0;
        case 0x2599b4u: goto label_2599b4;
        case 0x2599b8u: goto label_2599b8;
        case 0x2599bcu: goto label_2599bc;
        case 0x2599c0u: goto label_2599c0;
        case 0x2599c4u: goto label_2599c4;
        case 0x2599c8u: goto label_2599c8;
        case 0x2599ccu: goto label_2599cc;
        case 0x2599d0u: goto label_2599d0;
        case 0x2599d4u: goto label_2599d4;
        case 0x2599d8u: goto label_2599d8;
        case 0x2599dcu: goto label_2599dc;
        case 0x2599e0u: goto label_2599e0;
        case 0x2599e4u: goto label_2599e4;
        case 0x2599e8u: goto label_2599e8;
        case 0x2599ecu: goto label_2599ec;
        case 0x2599f0u: goto label_2599f0;
        case 0x2599f4u: goto label_2599f4;
        case 0x2599f8u: goto label_2599f8;
        case 0x2599fcu: goto label_2599fc;
        case 0x259a00u: goto label_259a00;
        case 0x259a04u: goto label_259a04;
        case 0x259a08u: goto label_259a08;
        case 0x259a0cu: goto label_259a0c;
        case 0x259a10u: goto label_259a10;
        case 0x259a14u: goto label_259a14;
        case 0x259a18u: goto label_259a18;
        case 0x259a1cu: goto label_259a1c;
        case 0x259a20u: goto label_259a20;
        case 0x259a24u: goto label_259a24;
        case 0x259a28u: goto label_259a28;
        case 0x259a2cu: goto label_259a2c;
        case 0x259a30u: goto label_259a30;
        case 0x259a34u: goto label_259a34;
        case 0x259a38u: goto label_259a38;
        case 0x259a3cu: goto label_259a3c;
        case 0x259a40u: goto label_259a40;
        case 0x259a44u: goto label_259a44;
        case 0x259a48u: goto label_259a48;
        case 0x259a4cu: goto label_259a4c;
        case 0x259a50u: goto label_259a50;
        case 0x259a54u: goto label_259a54;
        case 0x259a58u: goto label_259a58;
        case 0x259a5cu: goto label_259a5c;
        case 0x259a60u: goto label_259a60;
        case 0x259a64u: goto label_259a64;
        case 0x259a68u: goto label_259a68;
        case 0x259a6cu: goto label_259a6c;
        case 0x259a70u: goto label_259a70;
        case 0x259a74u: goto label_259a74;
        case 0x259a78u: goto label_259a78;
        case 0x259a7cu: goto label_259a7c;
        case 0x259a80u: goto label_259a80;
        case 0x259a84u: goto label_259a84;
        case 0x259a88u: goto label_259a88;
        case 0x259a8cu: goto label_259a8c;
        case 0x259a90u: goto label_259a90;
        case 0x259a94u: goto label_259a94;
        case 0x259a98u: goto label_259a98;
        case 0x259a9cu: goto label_259a9c;
        case 0x259aa0u: goto label_259aa0;
        case 0x259aa4u: goto label_259aa4;
        case 0x259aa8u: goto label_259aa8;
        case 0x259aacu: goto label_259aac;
        case 0x259ab0u: goto label_259ab0;
        case 0x259ab4u: goto label_259ab4;
        case 0x259ab8u: goto label_259ab8;
        case 0x259abcu: goto label_259abc;
        case 0x259ac0u: goto label_259ac0;
        case 0x259ac4u: goto label_259ac4;
        case 0x259ac8u: goto label_259ac8;
        case 0x259accu: goto label_259acc;
        case 0x259ad0u: goto label_259ad0;
        case 0x259ad4u: goto label_259ad4;
        case 0x259ad8u: goto label_259ad8;
        case 0x259adcu: goto label_259adc;
        case 0x259ae0u: goto label_259ae0;
        case 0x259ae4u: goto label_259ae4;
        case 0x259ae8u: goto label_259ae8;
        case 0x259aecu: goto label_259aec;
        case 0x259af0u: goto label_259af0;
        case 0x259af4u: goto label_259af4;
        case 0x259af8u: goto label_259af8;
        case 0x259afcu: goto label_259afc;
        case 0x259b00u: goto label_259b00;
        case 0x259b04u: goto label_259b04;
        case 0x259b08u: goto label_259b08;
        case 0x259b0cu: goto label_259b0c;
        case 0x259b10u: goto label_259b10;
        case 0x259b14u: goto label_259b14;
        case 0x259b18u: goto label_259b18;
        case 0x259b1cu: goto label_259b1c;
        case 0x259b20u: goto label_259b20;
        case 0x259b24u: goto label_259b24;
        case 0x259b28u: goto label_259b28;
        case 0x259b2cu: goto label_259b2c;
        case 0x259b30u: goto label_259b30;
        case 0x259b34u: goto label_259b34;
        case 0x259b38u: goto label_259b38;
        case 0x259b3cu: goto label_259b3c;
        case 0x259b40u: goto label_259b40;
        case 0x259b44u: goto label_259b44;
        case 0x259b48u: goto label_259b48;
        case 0x259b4cu: goto label_259b4c;
        case 0x259b50u: goto label_259b50;
        case 0x259b54u: goto label_259b54;
        case 0x259b58u: goto label_259b58;
        case 0x259b5cu: goto label_259b5c;
        case 0x259b60u: goto label_259b60;
        case 0x259b64u: goto label_259b64;
        case 0x259b68u: goto label_259b68;
        case 0x259b6cu: goto label_259b6c;
        case 0x259b70u: goto label_259b70;
        case 0x259b74u: goto label_259b74;
        case 0x259b78u: goto label_259b78;
        case 0x259b7cu: goto label_259b7c;
        case 0x259b80u: goto label_259b80;
        case 0x259b84u: goto label_259b84;
        case 0x259b88u: goto label_259b88;
        case 0x259b8cu: goto label_259b8c;
        case 0x259b90u: goto label_259b90;
        case 0x259b94u: goto label_259b94;
        case 0x259b98u: goto label_259b98;
        case 0x259b9cu: goto label_259b9c;
        case 0x259ba0u: goto label_259ba0;
        case 0x259ba4u: goto label_259ba4;
        case 0x259ba8u: goto label_259ba8;
        case 0x259bacu: goto label_259bac;
        case 0x259bb0u: goto label_259bb0;
        case 0x259bb4u: goto label_259bb4;
        case 0x259bb8u: goto label_259bb8;
        case 0x259bbcu: goto label_259bbc;
        case 0x259bc0u: goto label_259bc0;
        case 0x259bc4u: goto label_259bc4;
        case 0x259bc8u: goto label_259bc8;
        case 0x259bccu: goto label_259bcc;
        case 0x259bd0u: goto label_259bd0;
        case 0x259bd4u: goto label_259bd4;
        case 0x259bd8u: goto label_259bd8;
        case 0x259bdcu: goto label_259bdc;
        case 0x259be0u: goto label_259be0;
        case 0x259be4u: goto label_259be4;
        case 0x259be8u: goto label_259be8;
        case 0x259becu: goto label_259bec;
        case 0x259bf0u: goto label_259bf0;
        case 0x259bf4u: goto label_259bf4;
        case 0x259bf8u: goto label_259bf8;
        case 0x259bfcu: goto label_259bfc;
        case 0x259c00u: goto label_259c00;
        case 0x259c04u: goto label_259c04;
        case 0x259c08u: goto label_259c08;
        case 0x259c0cu: goto label_259c0c;
        case 0x259c10u: goto label_259c10;
        case 0x259c14u: goto label_259c14;
        case 0x259c18u: goto label_259c18;
        case 0x259c1cu: goto label_259c1c;
        case 0x259c20u: goto label_259c20;
        case 0x259c24u: goto label_259c24;
        case 0x259c28u: goto label_259c28;
        case 0x259c2cu: goto label_259c2c;
        case 0x259c30u: goto label_259c30;
        case 0x259c34u: goto label_259c34;
        case 0x259c38u: goto label_259c38;
        case 0x259c3cu: goto label_259c3c;
        case 0x259c40u: goto label_259c40;
        case 0x259c44u: goto label_259c44;
        case 0x259c48u: goto label_259c48;
        case 0x259c4cu: goto label_259c4c;
        case 0x259c50u: goto label_259c50;
        case 0x259c54u: goto label_259c54;
        case 0x259c58u: goto label_259c58;
        case 0x259c5cu: goto label_259c5c;
        case 0x259c60u: goto label_259c60;
        case 0x259c64u: goto label_259c64;
        case 0x259c68u: goto label_259c68;
        case 0x259c6cu: goto label_259c6c;
        case 0x259c70u: goto label_259c70;
        case 0x259c74u: goto label_259c74;
        case 0x259c78u: goto label_259c78;
        case 0x259c7cu: goto label_259c7c;
        case 0x259c80u: goto label_259c80;
        case 0x259c84u: goto label_259c84;
        case 0x259c88u: goto label_259c88;
        case 0x259c8cu: goto label_259c8c;
        case 0x259c90u: goto label_259c90;
        case 0x259c94u: goto label_259c94;
        case 0x259c98u: goto label_259c98;
        case 0x259c9cu: goto label_259c9c;
        case 0x259ca0u: goto label_259ca0;
        case 0x259ca4u: goto label_259ca4;
        case 0x259ca8u: goto label_259ca8;
        case 0x259cacu: goto label_259cac;
        case 0x259cb0u: goto label_259cb0;
        case 0x259cb4u: goto label_259cb4;
        case 0x259cb8u: goto label_259cb8;
        case 0x259cbcu: goto label_259cbc;
        case 0x259cc0u: goto label_259cc0;
        case 0x259cc4u: goto label_259cc4;
        case 0x259cc8u: goto label_259cc8;
        case 0x259cccu: goto label_259ccc;
        case 0x259cd0u: goto label_259cd0;
        case 0x259cd4u: goto label_259cd4;
        case 0x259cd8u: goto label_259cd8;
        case 0x259cdcu: goto label_259cdc;
        case 0x259ce0u: goto label_259ce0;
        case 0x259ce4u: goto label_259ce4;
        case 0x259ce8u: goto label_259ce8;
        case 0x259cecu: goto label_259cec;
        case 0x259cf0u: goto label_259cf0;
        case 0x259cf4u: goto label_259cf4;
        case 0x259cf8u: goto label_259cf8;
        case 0x259cfcu: goto label_259cfc;
        case 0x259d00u: goto label_259d00;
        case 0x259d04u: goto label_259d04;
        case 0x259d08u: goto label_259d08;
        case 0x259d0cu: goto label_259d0c;
        default: return;
    }

label_259540:
    // 0x259540: 0x2ebb  dsra        $a1, $zero, 26
    ctx->pc = 0x259540u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 0) >> 26);
label_259544:
    // 0x259544: 0x5100  sll         $t2, $zero, 4
    ctx->pc = 0x259544u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_259548:
    // 0x259548: 0x0  nop
    ctx->pc = 0x259548u;
    // NOP
label_25954c:
    // 0x25954c: 0x0  nop
    ctx->pc = 0x25954cu;
    // NOP
label_259550:
    // 0x259550: 0x2ec6  .word       0x00002EC6                   # srlv        $a1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259550u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_259554:
    // 0x259554: 0x5ac0  sll         $t3, $zero, 11
    ctx->pc = 0x259554u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_259558:
    // 0x259558: 0x0  nop
    ctx->pc = 0x259558u;
    // NOP
label_25955c:
    // 0x25955c: 0x0  nop
    ctx->pc = 0x25955cu;
    // NOP
label_259560:
    // 0x259560: 0x2ed2  .word       0x00002ED2                   # mflo        $a1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259560u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_259564:
    // 0x259564: 0x4520  .word       0x00004520                   # add         $t0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259564u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_259568:
    // 0x259568: 0x0  nop
    ctx->pc = 0x259568u;
    // NOP
label_25956c:
    // 0x25956c: 0x0  nop
    ctx->pc = 0x25956cu;
    // NOP
label_259570:
    // 0x259570: 0x2edb  .word       0x00002EDB                   # divu        $a1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259570u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_259574:
    // 0x259574: 0x4750  .word       0x00004750                   # mfhi        $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259574u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_259578:
    // 0x259578: 0x0  nop
    ctx->pc = 0x259578u;
    // NOP
label_25957c:
    // 0x25957c: 0x0  nop
    ctx->pc = 0x25957cu;
    // NOP
label_259580:
    // 0x259580: 0x2ee4  .word       0x00002EE4                   # and         $a1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_259584:
    // 0x259584: 0x5f70  tge         $zero, $zero, 381
    ctx->pc = 0x259584u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259588:
    // 0x259588: 0x0  nop
    ctx->pc = 0x259588u;
    // NOP
label_25958c:
    // 0x25958c: 0x0  nop
    ctx->pc = 0x25958cu;
    // NOP
label_259590:
    // 0x259590: 0x2ef0  tge         $zero, $zero, 187
    ctx->pc = 0x259590u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259594:
    // 0x259594: 0x3350  .word       0x00003350                   # mfhi        $a2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259594u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_259598:
    // 0x259598: 0x0  nop
    ctx->pc = 0x259598u;
    // NOP
label_25959c:
    // 0x25959c: 0x0  nop
    ctx->pc = 0x25959cu;
    // NOP
label_2595a0:
    // 0x2595a0: 0x2ef7  .word       0x00002EF7                   # INVALID     $zero, $zero, 0x2EF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2595a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2595A0 raw=0x00002EF7");
 /* MITIGATED */
label_2595a4:
    // 0x2595a4: 0x4500  sll         $t0, $zero, 20
    ctx->pc = 0x2595a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2595a8:
    // 0x2595a8: 0x0  nop
    ctx->pc = 0x2595a8u;
    // NOP
label_2595ac:
    // 0x2595ac: 0x0  nop
    ctx->pc = 0x2595acu;
    // NOP
label_2595b0:
    // 0x2595b0: 0x2f00  sll         $a1, $zero, 28
    ctx->pc = 0x2595b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2595b4:
    // 0x2595b4: 0x5850  .word       0x00005850                   # mfhi        $t3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2595b4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2595b8:
    // 0x2595b8: 0x0  nop
    ctx->pc = 0x2595b8u;
    // NOP
label_2595bc:
    // 0x2595bc: 0x0  nop
    ctx->pc = 0x2595bcu;
    // NOP
label_2595c0:
    // 0x2595c0: 0x2f0c  syscall     188
    ctx->pc = 0x2595c0u;
    ctx->pc = 0x2595C4u;
runtime->handleSyscall(rdram, ctx, 0xBCu);
label_2595c4:
    // 0x2595c4: 0x2e70  tge         $zero, $zero, 185
    ctx->pc = 0x2595c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2595c8:
    // 0x2595c8: 0x0  nop
    ctx->pc = 0x2595c8u;
    // NOP
label_2595cc:
    // 0x2595cc: 0x0  nop
    ctx->pc = 0x2595ccu;
    // NOP
label_2595d0:
    // 0x2595d0: 0x2f12  .word       0x00002F12                   # mflo        $a1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2595d0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_2595d4:
    // 0x2595d4: 0x5570  tge         $zero, $zero, 341
    ctx->pc = 0x2595d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2595d8:
    // 0x2595d8: 0x0  nop
    ctx->pc = 0x2595d8u;
    // NOP
label_2595dc:
    // 0x2595dc: 0x0  nop
    ctx->pc = 0x2595dcu;
    // NOP
label_2595e0:
    // 0x2595e0: 0x2f1d  .word       0x00002F1D                   # dmultu      $zero, $zero # 00002F00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2595e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2595E0 raw=0x00002F1D");
 /* MITIGATED */
label_2595e4:
    // 0x2595e4: 0x3cc0  sll         $a3, $zero, 19
    ctx->pc = 0x2595e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2595e8:
    // 0x2595e8: 0x0  nop
    ctx->pc = 0x2595e8u;
    // NOP
label_2595ec:
    // 0x2595ec: 0x0  nop
    ctx->pc = 0x2595ecu;
    // NOP
label_2595f0:
    // 0x2595f0: 0x2f25  .word       0x00002F25                   # move        $a1, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2595f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2595f4:
    // 0x2595f4: 0x3b50  .word       0x00003B50                   # mfhi        $a3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2595f4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2595f8:
    // 0x2595f8: 0x0  nop
    ctx->pc = 0x2595f8u;
    // NOP
label_2595fc:
    // 0x2595fc: 0x0  nop
    ctx->pc = 0x2595fcu;
    // NOP
label_259600:
    // 0x259600: 0x2f2d  .word       0x00002F2D                   # daddu       $a1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259604:
    // 0x259604: 0x4c10  .word       0x00004C10                   # mfhi        $t1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259604u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_259608:
    // 0x259608: 0x0  nop
    ctx->pc = 0x259608u;
    // NOP
label_25960c:
    // 0x25960c: 0x0  nop
    ctx->pc = 0x25960cu;
    // NOP
label_259610:
    // 0x259610: 0x2f37  .word       0x00002F37                   # INVALID     $zero, $zero, 0x2F37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259610u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x259610 raw=0x00002F37");
 /* MITIGATED */
label_259614:
    // 0x259614: 0x53e0  .word       0x000053E0                   # add         $t2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259614u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_259618:
    // 0x259618: 0x0  nop
    ctx->pc = 0x259618u;
    // NOP
label_25961c:
    // 0x25961c: 0x0  nop
    ctx->pc = 0x25961cu;
    // NOP
label_259620:
    // 0x259620: 0x2f42  srl         $a1, $zero, 29
    ctx->pc = 0x259620u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 0), 29));
label_259624:
    // 0x259624: 0x5be0  .word       0x00005BE0                   # add         $t3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_259628:
    // 0x259628: 0x0  nop
    ctx->pc = 0x259628u;
    // NOP
label_25962c:
    // 0x25962c: 0x0  nop
    ctx->pc = 0x25962cu;
    // NOP
label_259630:
    // 0x259630: 0x2f4e  .word       0x00002F4E                   # INVALID     $zero, $zero, 0x2F4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259630u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x259630 raw=0x00002F4E");
 /* MITIGATED */
label_259634:
    // 0x259634: 0x3d00  sll         $a3, $zero, 20
    ctx->pc = 0x259634u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_259638:
    // 0x259638: 0x0  nop
    ctx->pc = 0x259638u;
    // NOP
label_25963c:
    // 0x25963c: 0x0  nop
    ctx->pc = 0x25963cu;
    // NOP
label_259640:
    // 0x259640: 0x2f56  .word       0x00002F56                   # dsrlv       $a1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_259644:
    // 0x259644: 0x4f50  .word       0x00004F50                   # mfhi        $t1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259644u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_259648:
    // 0x259648: 0x0  nop
    ctx->pc = 0x259648u;
    // NOP
label_25964c:
    // 0x25964c: 0x0  nop
    ctx->pc = 0x25964cu;
    // NOP
label_259650:
    // 0x259650: 0x2f60  .word       0x00002F60                   # add         $a1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259650u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_259654:
    // 0x259654: 0x4970  tge         $zero, $zero, 293
    ctx->pc = 0x259654u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259658:
    // 0x259658: 0x0  nop
    ctx->pc = 0x259658u;
    // NOP
label_25965c:
    // 0x25965c: 0x0  nop
    ctx->pc = 0x25965cu;
    // NOP
label_259660:
    // 0x259660: 0x2f6a  .word       0x00002F6A                   # slt         $a1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259660u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_259664:
    // 0x259664: 0x5620  .word       0x00005620                   # add         $t2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259664u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_259668:
    // 0x259668: 0x0  nop
    ctx->pc = 0x259668u;
    // NOP
label_25966c:
    // 0x25966c: 0x0  nop
    ctx->pc = 0x25966cu;
    // NOP
label_259670:
    // 0x259670: 0x2f75  .word       0x00002F75                   # INVALID     $zero, $zero, 0x2F75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259670u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x259670 raw=0x00002F75");
 /* MITIGATED */
label_259674:
    // 0x259674: 0x3a20  .word       0x00003A20                   # add         $a3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259674u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_259678:
    // 0x259678: 0x0  nop
    ctx->pc = 0x259678u;
    // NOP
label_25967c:
    // 0x25967c: 0x0  nop
    ctx->pc = 0x25967cu;
    // NOP
label_259680:
    // 0x259680: 0x2f7d  .word       0x00002F7D                   # INVALID     $zero, $zero, 0x2F7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259680u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x259680 raw=0x00002F7D");
 /* MITIGATED */
label_259684:
    // 0x259684: 0x5470  tge         $zero, $zero, 337
    ctx->pc = 0x259684u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259688:
    // 0x259688: 0x0  nop
    ctx->pc = 0x259688u;
    // NOP
label_25968c:
    // 0x25968c: 0x0  nop
    ctx->pc = 0x25968cu;
    // NOP
label_259690:
    // 0x259690: 0x2f88  .word       0x00002F88                   # jr          $zero # 00002F80 <InstrIdType: CPU_SPECIAL>
label_259694:
    if (ctx->pc == 0x259694u) {
        ctx->pc = 0x259694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259690u;
        // 0x259694: 0x4660  .word       0x00004660                   # add         $t0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x259698u;
        goto label_259698;
    }
    ctx->pc = 0x259690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x259694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259690u;
        // 0x259694: 0x4660  .word       0x00004660                   # add         $t0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259690u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x259698u;
label_259698:
    // 0x259698: 0x0  nop
    ctx->pc = 0x259698u;
    // NOP
label_25969c:
    // 0x25969c: 0x0  nop
    ctx->pc = 0x25969cu;
    // NOP
label_2596a0:
    // 0x2596a0: 0x2f91  .word       0x00002F91                   # mthi        $zero # 00002F80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2596a0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2596a4:
    // 0x2596a4: 0x32d0  .word       0x000032D0                   # mfhi        $a2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2596a4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2596a8:
    // 0x2596a8: 0x0  nop
    ctx->pc = 0x2596a8u;
    // NOP
label_2596ac:
    // 0x2596ac: 0x0  nop
    ctx->pc = 0x2596acu;
    // NOP
label_2596b0:
    // 0x2596b0: 0x2f98  .word       0x00002F98                   # mult        $a1, $zero, $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2596b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2596b4:
    // 0x2596b4: 0x5860  .word       0x00005860                   # add         $t3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2596b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2596b8:
    // 0x2596b8: 0x0  nop
    ctx->pc = 0x2596b8u;
    // NOP
label_2596bc:
    // 0x2596bc: 0x0  nop
    ctx->pc = 0x2596bcu;
    // NOP
label_2596c0:
    // 0x2596c0: 0x2fa4  .word       0x00002FA4                   # and         $a1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2596c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2596c4:
    // 0x2596c4: 0x44e0  .word       0x000044E0                   # add         $t0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2596c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2596c8:
    // 0x2596c8: 0x0  nop
    ctx->pc = 0x2596c8u;
    // NOP
label_2596cc:
    // 0x2596cc: 0x0  nop
    ctx->pc = 0x2596ccu;
    // NOP
label_2596d0:
    // 0x2596d0: 0x2fad  .word       0x00002FAD                   # daddu       $a1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2596d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2596d4:
    // 0x2596d4: 0x3570  tge         $zero, $zero, 213
    ctx->pc = 0x2596d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2596d8:
    // 0x2596d8: 0x0  nop
    ctx->pc = 0x2596d8u;
    // NOP
label_2596dc:
    // 0x2596dc: 0x0  nop
    ctx->pc = 0x2596dcu;
    // NOP
label_2596e0:
    // 0x2596e0: 0x2fb4  teq         $zero, $zero, 190
    ctx->pc = 0x2596e0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2596e4:
    // 0x2596e4: 0x4cf0  tge         $zero, $zero, 307
    ctx->pc = 0x2596e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2596e8:
    // 0x2596e8: 0x0  nop
    ctx->pc = 0x2596e8u;
    // NOP
label_2596ec:
    // 0x2596ec: 0x0  nop
    ctx->pc = 0x2596ecu;
    // NOP
label_2596f0:
    // 0x2596f0: 0x2fbe  dsrl32      $a1, $zero, 30
    ctx->pc = 0x2596f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) >> (32 + 30));
label_2596f4:
    // 0x2596f4: 0x49d0  .word       0x000049D0                   # mfhi        $t1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2596f4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2596f8:
    // 0x2596f8: 0x0  nop
    ctx->pc = 0x2596f8u;
    // NOP
label_2596fc:
    // 0x2596fc: 0x0  nop
    ctx->pc = 0x2596fcu;
    // NOP
label_259700:
    // 0x259700: 0x2fc8  .word       0x00002FC8                   # jr          $zero # 00002FC0 <InstrIdType: CPU_SPECIAL>
label_259704:
    if (ctx->pc == 0x259704u) {
        ctx->pc = 0x259704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259700u;
        // 0x259704: 0x44b0  tge         $zero, $zero, 274 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x259708u;
        goto label_259708;
    }
    ctx->pc = 0x259700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x259704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259700u;
        // 0x259704: 0x44b0  tge         $zero, $zero, 274 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259700u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x259708u;
label_259708:
    // 0x259708: 0x0  nop
    ctx->pc = 0x259708u;
    // NOP
label_25970c:
    // 0x25970c: 0x0  nop
    ctx->pc = 0x25970cu;
    // NOP
label_259710:
    // 0x259710: 0x2fd1  .word       0x00002FD1                   # mthi        $zero # 00002FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259710u;
    ctx->hi = GPR_U64(ctx, 0);
label_259714:
    // 0x259714: 0x59c0  sll         $t3, $zero, 7
    ctx->pc = 0x259714u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_259718:
    // 0x259718: 0x0  nop
    ctx->pc = 0x259718u;
    // NOP
label_25971c:
    // 0x25971c: 0x0  nop
    ctx->pc = 0x25971cu;
    // NOP
label_259720:
    // 0x259720: 0x2fdd  .word       0x00002FDD                   # dmultu      $zero, $zero # 00002FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259720u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x259720 raw=0x00002FDD");
 /* MITIGATED */
label_259724:
    // 0x259724: 0x5f40  sll         $t3, $zero, 29
    ctx->pc = 0x259724u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_259728:
    // 0x259728: 0x0  nop
    ctx->pc = 0x259728u;
    // NOP
label_25972c:
    // 0x25972c: 0x0  nop
    ctx->pc = 0x25972cu;
    // NOP
label_259730:
    // 0x259730: 0x2fe9  .word       0x00002FE9                   # mtsa        $zero # 00002FC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x259730u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_259734:
    // 0x259734: 0x78c0  sll         $t7, $zero, 3
    ctx->pc = 0x259734u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_259738:
    // 0x259738: 0x0  nop
    ctx->pc = 0x259738u;
    // NOP
label_25973c:
    // 0x25973c: 0x0  nop
    ctx->pc = 0x25973cu;
    // NOP
label_259740:
    // 0x259740: 0x2ff9  .word       0x00002FF9                   # INVALID     $zero, $zero, 0x2FF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259740u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x259740 raw=0x00002FF9");
 /* MITIGATED */
label_259744:
    // 0x259744: 0x7fa0  .word       0x00007FA0                   # add         $t7, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259744u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_259748:
    // 0x259748: 0x0  nop
    ctx->pc = 0x259748u;
    // NOP
label_25974c:
    // 0x25974c: 0x0  nop
    ctx->pc = 0x25974cu;
    // NOP
label_259750:
    // 0x259750: 0x3009  jalr        $a2, $zero
label_259754:
    if (ctx->pc == 0x259754u) {
        ctx->pc = 0x259754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259750u;
        // 0x259754: 0x8440  sll         $s0, $zero, 17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x259758u;
        goto label_259758;
    }
    ctx->pc = 0x259750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 6, 0x259758u);
        ctx->pc = 0x259754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259750u;
        // 0x259754: 0x8440  sll         $s0, $zero, 17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259750u, 0x259758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259758u;
label_259758:
    // 0x259758: 0x0  nop
    ctx->pc = 0x259758u;
    // NOP
label_25975c:
    // 0x25975c: 0x0  nop
    ctx->pc = 0x25975cu;
    // NOP
label_259760:
    // 0x259760: 0x301a  div         $a2, $zero, $zero
    ctx->pc = 0x259760u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_259764:
    // 0x259764: 0xb5d0  .word       0x0000B5D0                   # mfhi        $s6 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259764u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_259768:
    // 0x259768: 0x0  nop
    ctx->pc = 0x259768u;
    // NOP
label_25976c:
    // 0x25976c: 0x0  nop
    ctx->pc = 0x25976cu;
    // NOP
label_259770:
    // 0x259770: 0x3031  tgeu        $zero, $zero, 192
    ctx->pc = 0x259770u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259774:
    // 0x259774: 0x8720  .word       0x00008720                   # add         $s0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_259778:
    // 0x259778: 0x0  nop
    ctx->pc = 0x259778u;
    // NOP
label_25977c:
    // 0x25977c: 0x0  nop
    ctx->pc = 0x25977cu;
    // NOP
label_259780:
    // 0x259780: 0x3042  srl         $a2, $zero, 1
    ctx->pc = 0x259780u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 0), 1));
label_259784:
    // 0x259784: 0x7590  .word       0x00007590                   # mfhi        $t6 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259784u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_259788:
    // 0x259788: 0x0  nop
    ctx->pc = 0x259788u;
    // NOP
label_25978c:
    // 0x25978c: 0x0  nop
    ctx->pc = 0x25978cu;
    // NOP
label_259790:
    // 0x259790: 0x3051  .word       0x00003051                   # mthi        $zero # 00003040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259790u;
    ctx->hi = GPR_U64(ctx, 0);
label_259794:
    // 0x259794: 0x83b0  tge         $zero, $zero, 526
    ctx->pc = 0x259794u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259798:
    // 0x259798: 0x0  nop
    ctx->pc = 0x259798u;
    // NOP
label_25979c:
    // 0x25979c: 0x0  nop
    ctx->pc = 0x25979cu;
    // NOP
label_2597a0:
    // 0x2597a0: 0x3062  .word       0x00003062                   # neg         $a2, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2597a0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_2597a4:
    // 0x2597a4: 0x5e60  .word       0x00005E60                   # add         $t3, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2597a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2597a8:
    // 0x2597a8: 0x0  nop
    ctx->pc = 0x2597a8u;
    // NOP
label_2597ac:
    // 0x2597ac: 0x0  nop
    ctx->pc = 0x2597acu;
    // NOP
label_2597b0:
    // 0x2597b0: 0x306e  .word       0x0000306E                   # dsub        $a2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2597b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_2597b4:
    // 0x2597b4: 0x59f0  tge         $zero, $zero, 359
    ctx->pc = 0x2597b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2597b8:
    // 0x2597b8: 0x0  nop
    ctx->pc = 0x2597b8u;
    // NOP
label_2597bc:
    // 0x2597bc: 0x0  nop
    ctx->pc = 0x2597bcu;
    // NOP
label_2597c0:
    // 0x2597c0: 0x307a  dsrl        $a2, $zero, 1
    ctx->pc = 0x2597c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> 1);
label_2597c4:
    // 0x2597c4: 0x5940  sll         $t3, $zero, 5
    ctx->pc = 0x2597c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2597c8:
    // 0x2597c8: 0x0  nop
    ctx->pc = 0x2597c8u;
    // NOP
label_2597cc:
    // 0x2597cc: 0x0  nop
    ctx->pc = 0x2597ccu;
    // NOP
label_2597d0:
    // 0x2597d0: 0x3086  .word       0x00003086                   # srlv        $a2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2597d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2597d4:
    // 0x2597d4: 0x6ac0  sll         $t5, $zero, 11
    ctx->pc = 0x2597d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2597d8:
    // 0x2597d8: 0x0  nop
    ctx->pc = 0x2597d8u;
    // NOP
label_2597dc:
    // 0x2597dc: 0x0  nop
    ctx->pc = 0x2597dcu;
    // NOP
label_2597e0:
    // 0x2597e0: 0x3094  .word       0x00003094                   # dsllv       $a2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2597e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2597e4:
    // 0x2597e4: 0x6b20  .word       0x00006B20                   # add         $t5, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2597e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2597e8:
    // 0x2597e8: 0x0  nop
    ctx->pc = 0x2597e8u;
    // NOP
label_2597ec:
    // 0x2597ec: 0x0  nop
    ctx->pc = 0x2597ecu;
    // NOP
label_2597f0:
    // 0x2597f0: 0x30a2  .word       0x000030A2                   # neg         $a2, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2597f0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_2597f4:
    // 0x2597f4: 0x5800  sll         $t3, $zero, 0
    ctx->pc = 0x2597f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2597f8:
    // 0x2597f8: 0x0  nop
    ctx->pc = 0x2597f8u;
    // NOP
label_2597fc:
    // 0x2597fc: 0x0  nop
    ctx->pc = 0x2597fcu;
    // NOP
label_259800:
    // 0x259800: 0x30ad  .word       0x000030AD                   # daddu       $a2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_259804:
    // 0x259804: 0x5a00  sll         $t3, $zero, 8
    ctx->pc = 0x259804u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_259808:
    // 0x259808: 0x0  nop
    ctx->pc = 0x259808u;
    // NOP
label_25980c:
    // 0x25980c: 0x0  nop
    ctx->pc = 0x25980cu;
    // NOP
label_259810:
    // 0x259810: 0x30b9  .word       0x000030B9                   # INVALID     $zero, $zero, 0x30B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259810u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x259810 raw=0x000030B9");
 /* MITIGATED */
label_259814:
    // 0x259814: 0x7000  sll         $t6, $zero, 0
    ctx->pc = 0x259814u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_259818:
    // 0x259818: 0x0  nop
    ctx->pc = 0x259818u;
    // NOP
label_25981c:
    // 0x25981c: 0x0  nop
    ctx->pc = 0x25981cu;
    // NOP
label_259820:
    // 0x259820: 0x30c7  .word       0x000030C7                   # srav        $a2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259820u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_259824:
    // 0x259824: 0x6300  sll         $t4, $zero, 12
    ctx->pc = 0x259824u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_259828:
    // 0x259828: 0x0  nop
    ctx->pc = 0x259828u;
    // NOP
label_25982c:
    // 0x25982c: 0x0  nop
    ctx->pc = 0x25982cu;
    // NOP
label_259830:
    // 0x259830: 0x30d4  .word       0x000030D4                   # dsllv       $a2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259830u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_259834:
    // 0x259834: 0x5990  .word       0x00005990                   # mfhi        $t3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259834u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_259838:
    // 0x259838: 0x0  nop
    ctx->pc = 0x259838u;
    // NOP
label_25983c:
    // 0x25983c: 0x0  nop
    ctx->pc = 0x25983cu;
    // NOP
label_259840:
    // 0x259840: 0x30e0  .word       0x000030E0                   # add         $a2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259840u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_259844:
    // 0x259844: 0x5820  add         $t3, $zero, $zero
    ctx->pc = 0x259844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_259848:
    // 0x259848: 0x0  nop
    ctx->pc = 0x259848u;
    // NOP
label_25984c:
    // 0x25984c: 0x0  nop
    ctx->pc = 0x25984cu;
    // NOP
label_259850:
    // 0x259850: 0x30ec  .word       0x000030EC                   # dadd        $a2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259850u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_259854:
    // 0x259854: 0x58a0  .word       0x000058A0                   # add         $t3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_259858:
    // 0x259858: 0x0  nop
    ctx->pc = 0x259858u;
    // NOP
label_25985c:
    // 0x25985c: 0x0  nop
    ctx->pc = 0x25985cu;
    // NOP
label_259860:
    // 0x259860: 0x30f8  dsll        $a2, $zero, 3
    ctx->pc = 0x259860u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << 3);
label_259864:
    // 0x259864: 0x6460  .word       0x00006460                   # add         $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259864u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_259868:
    // 0x259868: 0x0  nop
    ctx->pc = 0x259868u;
    // NOP
label_25986c:
    // 0x25986c: 0x0  nop
    ctx->pc = 0x25986cu;
    // NOP
label_259870:
    // 0x259870: 0x3105  .word       0x00003105                   # INVALID     $zero, $zero, 0x3105 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259870u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x259870 raw=0x00003105");
 /* MITIGATED */
label_259874:
    // 0x259874: 0x94e0  .word       0x000094E0                   # add         $s2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259874u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_259878:
    // 0x259878: 0x0  nop
    ctx->pc = 0x259878u;
    // NOP
label_25987c:
    // 0x25987c: 0x0  nop
    ctx->pc = 0x25987cu;
    // NOP
label_259880:
    // 0x259880: 0x3118  .word       0x00003118                   # mult        $a2, $zero, $zero # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x259880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_259884:
    // 0x259884: 0x81c0  sll         $s0, $zero, 7
    ctx->pc = 0x259884u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_259888:
    // 0x259888: 0x0  nop
    ctx->pc = 0x259888u;
    // NOP
label_25988c:
    // 0x25988c: 0x0  nop
    ctx->pc = 0x25988cu;
    // NOP
label_259890:
    // 0x259890: 0x3129  .word       0x00003129                   # mtsa        $zero # 00003100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x259890u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_259894:
    // 0x259894: 0x7a60  .word       0x00007A60                   # add         $t7, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259894u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_259898:
    // 0x259898: 0x0  nop
    ctx->pc = 0x259898u;
    // NOP
label_25989c:
    // 0x25989c: 0x0  nop
    ctx->pc = 0x25989cu;
    // NOP
label_2598a0:
    // 0x2598a0: 0x3139  .word       0x00003139                   # INVALID     $zero, $zero, 0x3139 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2598a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2598A0 raw=0x00003139");
 /* MITIGATED */
label_2598a4:
    // 0x2598a4: 0x6200  sll         $t4, $zero, 8
    ctx->pc = 0x2598a4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_2598a8:
    // 0x2598a8: 0x0  nop
    ctx->pc = 0x2598a8u;
    // NOP
label_2598ac:
    // 0x2598ac: 0x0  nop
    ctx->pc = 0x2598acu;
    // NOP
label_2598b0:
    // 0x2598b0: 0x3146  .word       0x00003146                   # srlv        $a2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2598b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2598b4:
    // 0x2598b4: 0x68e0  .word       0x000068E0                   # add         $t5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2598b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2598b8:
    // 0x2598b8: 0x0  nop
    ctx->pc = 0x2598b8u;
    // NOP
label_2598bc:
    // 0x2598bc: 0x0  nop
    ctx->pc = 0x2598bcu;
    // NOP
label_2598c0:
    // 0x2598c0: 0x3154  .word       0x00003154                   # dsllv       $a2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2598c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2598c4:
    // 0x2598c4: 0x8190  .word       0x00008190                   # mfhi        $s0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2598c4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2598c8:
    // 0x2598c8: 0x0  nop
    ctx->pc = 0x2598c8u;
    // NOP
label_2598cc:
    // 0x2598cc: 0x0  nop
    ctx->pc = 0x2598ccu;
    // NOP
label_2598d0:
    // 0x2598d0: 0x3165  .word       0x00003165                   # move        $a2, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2598d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2598d4:
    // 0x2598d4: 0x53c0  sll         $t2, $zero, 15
    ctx->pc = 0x2598d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_2598d8:
    // 0x2598d8: 0x0  nop
    ctx->pc = 0x2598d8u;
    // NOP
label_2598dc:
    // 0x2598dc: 0x0  nop
    ctx->pc = 0x2598dcu;
    // NOP
label_2598e0:
    // 0x2598e0: 0x3170  tge         $zero, $zero, 197
    ctx->pc = 0x2598e0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2598e4:
    // 0x2598e4: 0x5a70  tge         $zero, $zero, 361
    ctx->pc = 0x2598e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2598e8:
    // 0x2598e8: 0x0  nop
    ctx->pc = 0x2598e8u;
    // NOP
label_2598ec:
    // 0x2598ec: 0x0  nop
    ctx->pc = 0x2598ecu;
    // NOP
label_2598f0:
    // 0x2598f0: 0x317c  dsll32      $a2, $zero, 5
    ctx->pc = 0x2598f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (32 + 5));
label_2598f4:
    // 0x2598f4: 0x6ac0  sll         $t5, $zero, 11
    ctx->pc = 0x2598f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2598f8:
    // 0x2598f8: 0x0  nop
    ctx->pc = 0x2598f8u;
    // NOP
label_2598fc:
    // 0x2598fc: 0x0  nop
    ctx->pc = 0x2598fcu;
    // NOP
label_259900:
    // 0x259900: 0x318a  .word       0x0000318A                   # movz        $a2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259900u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_259904:
    // 0x259904: 0x7700  sll         $t6, $zero, 28
    ctx->pc = 0x259904u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_259908:
    // 0x259908: 0x0  nop
    ctx->pc = 0x259908u;
    // NOP
label_25990c:
    // 0x25990c: 0x0  nop
    ctx->pc = 0x25990cu;
    // NOP
label_259910:
    // 0x259910: 0x3199  .word       0x00003199                   # multu       $zero, $zero # 00003180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259910u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_259914:
    // 0x259914: 0x6740  sll         $t4, $zero, 29
    ctx->pc = 0x259914u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_259918:
    // 0x259918: 0x0  nop
    ctx->pc = 0x259918u;
    // NOP
label_25991c:
    // 0x25991c: 0x0  nop
    ctx->pc = 0x25991cu;
    // NOP
label_259920:
    // 0x259920: 0x31a6  .word       0x000031A6                   # xor         $a2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_259924:
    // 0x259924: 0x6110  .word       0x00006110                   # mfhi        $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259924u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_259928:
    // 0x259928: 0x0  nop
    ctx->pc = 0x259928u;
    // NOP
label_25992c:
    // 0x25992c: 0x0  nop
    ctx->pc = 0x25992cu;
    // NOP
label_259930:
    // 0x259930: 0x31b3  tltu        $zero, $zero, 198
    ctx->pc = 0x259930u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259934:
    // 0x259934: 0x7190  .word       0x00007190                   # mfhi        $t6 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259934u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_259938:
    // 0x259938: 0x0  nop
    ctx->pc = 0x259938u;
    // NOP
label_25993c:
    // 0x25993c: 0x0  nop
    ctx->pc = 0x25993cu;
    // NOP
label_259940:
    // 0x259940: 0x31c2  srl         $a2, $zero, 7
    ctx->pc = 0x259940u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 0), 7));
label_259944:
    // 0x259944: 0x53e0  .word       0x000053E0                   # add         $t2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259944u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_259948:
    // 0x259948: 0x0  nop
    ctx->pc = 0x259948u;
    // NOP
label_25994c:
    // 0x25994c: 0x0  nop
    ctx->pc = 0x25994cu;
    // NOP
label_259950:
    // 0x259950: 0x31cd  break       0, 199
    ctx->pc = 0x259950u;
    runtime->handleBreak(rdram, ctx);
label_259954:
    // 0x259954: 0x8590  .word       0x00008590                   # mfhi        $s0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259954u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_259958:
    // 0x259958: 0x0  nop
    ctx->pc = 0x259958u;
    // NOP
label_25995c:
    // 0x25995c: 0x0  nop
    ctx->pc = 0x25995cu;
    // NOP
label_259960:
    // 0x259960: 0x31de  .word       0x000031DE                   # ddiv        $a2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259960u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x259960 raw=0x000031DE");
 /* MITIGATED */
label_259964:
    // 0x259964: 0x9820  add         $s3, $zero, $zero
    ctx->pc = 0x259964u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_259968:
    // 0x259968: 0x0  nop
    ctx->pc = 0x259968u;
    // NOP
label_25996c:
    // 0x25996c: 0x0  nop
    ctx->pc = 0x25996cu;
    // NOP
label_259970:
    // 0x259970: 0x31f2  tlt         $zero, $zero, 199
    ctx->pc = 0x259970u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259974:
    // 0x259974: 0x8390  .word       0x00008390                   # mfhi        $s0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259974u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_259978:
    // 0x259978: 0x0  nop
    ctx->pc = 0x259978u;
    // NOP
label_25997c:
    // 0x25997c: 0x0  nop
    ctx->pc = 0x25997cu;
    // NOP
label_259980:
    // 0x259980: 0x3203  sra         $a2, $zero, 8
    ctx->pc = 0x259980u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 0), 8));
label_259984:
    // 0x259984: 0x6410  .word       0x00006410                   # mfhi        $t4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259984u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_259988:
    // 0x259988: 0x0  nop
    ctx->pc = 0x259988u;
    // NOP
label_25998c:
    // 0x25998c: 0x0  nop
    ctx->pc = 0x25998cu;
    // NOP
label_259990:
    // 0x259990: 0x3210  .word       0x00003210                   # mfhi        $a2 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259990u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_259994:
    // 0x259994: 0x7c00  sll         $t7, $zero, 16
    ctx->pc = 0x259994u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_259998:
    // 0x259998: 0x0  nop
    ctx->pc = 0x259998u;
    // NOP
label_25999c:
    // 0x25999c: 0x0  nop
    ctx->pc = 0x25999cu;
    // NOP
label_2599a0:
    // 0x2599a0: 0x3220  .word       0x00003220                   # add         $a2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2599a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2599a4:
    // 0x2599a4: 0x7dc0  sll         $t7, $zero, 23
    ctx->pc = 0x2599a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_2599a8:
    // 0x2599a8: 0x0  nop
    ctx->pc = 0x2599a8u;
    // NOP
label_2599ac:
    // 0x2599ac: 0x0  nop
    ctx->pc = 0x2599acu;
    // NOP
label_2599b0:
    // 0x2599b0: 0x3230  tge         $zero, $zero, 200
    ctx->pc = 0x2599b0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2599b4:
    // 0x2599b4: 0x80a0  .word       0x000080A0                   # add         $s0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2599b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2599b8:
    // 0x2599b8: 0x0  nop
    ctx->pc = 0x2599b8u;
    // NOP
label_2599bc:
    // 0x2599bc: 0x0  nop
    ctx->pc = 0x2599bcu;
    // NOP
label_2599c0:
    // 0x2599c0: 0x3241  .word       0x00003241                   # INVALID     $zero, $zero, 0x3241 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2599c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2599C0 raw=0x00003241");
 /* MITIGATED */
label_2599c4:
    // 0x2599c4: 0x6200  sll         $t4, $zero, 8
    ctx->pc = 0x2599c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_2599c8:
    // 0x2599c8: 0x0  nop
    ctx->pc = 0x2599c8u;
    // NOP
label_2599cc:
    // 0x2599cc: 0x0  nop
    ctx->pc = 0x2599ccu;
    // NOP
label_2599d0:
    // 0x2599d0: 0x324e  .word       0x0000324E                   # INVALID     $zero, $zero, 0x324E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2599d0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2599D0 raw=0x0000324E");
 /* MITIGATED */
label_2599d4:
    // 0x2599d4: 0x6250  .word       0x00006250                   # mfhi        $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2599d4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2599d8:
    // 0x2599d8: 0x0  nop
    ctx->pc = 0x2599d8u;
    // NOP
label_2599dc:
    // 0x2599dc: 0x0  nop
    ctx->pc = 0x2599dcu;
    // NOP
label_2599e0:
    // 0x2599e0: 0x325b  .word       0x0000325B                   # divu        $a2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2599e0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2599e4:
    // 0x2599e4: 0x8200  sll         $s0, $zero, 8
    ctx->pc = 0x2599e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_2599e8:
    // 0x2599e8: 0x0  nop
    ctx->pc = 0x2599e8u;
    // NOP
label_2599ec:
    // 0x2599ec: 0x0  nop
    ctx->pc = 0x2599ecu;
    // NOP
label_2599f0:
    // 0x2599f0: 0x326c  .word       0x0000326C                   # dadd        $a2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2599f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_2599f4:
    // 0x2599f4: 0x5480  sll         $t2, $zero, 18
    ctx->pc = 0x2599f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2599f8:
    // 0x2599f8: 0x0  nop
    ctx->pc = 0x2599f8u;
    // NOP
label_2599fc:
    // 0x2599fc: 0x0  nop
    ctx->pc = 0x2599fcu;
    // NOP
label_259a00:
    // 0x259a00: 0x3277  .word       0x00003277                   # INVALID     $zero, $zero, 0x3277 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259a00u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x259A00 raw=0x00003277");
 /* MITIGATED */
label_259a04:
    // 0x259a04: 0x3e80  sll         $a3, $zero, 26
    ctx->pc = 0x259a04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_259a08:
    // 0x259a08: 0x0  nop
    ctx->pc = 0x259a08u;
    // NOP
label_259a0c:
    // 0x259a0c: 0x0  nop
    ctx->pc = 0x259a0cu;
    // NOP
label_259a10:
    // 0x259a10: 0x327f  dsra32      $a2, $zero, 9
    ctx->pc = 0x259a10u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> (32 + 9));
label_259a14:
    // 0x259a14: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x259a14u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_259a18:
    // 0x259a18: 0x0  nop
    ctx->pc = 0x259a18u;
    // NOP
label_259a1c:
    // 0x259a1c: 0x0  nop
    ctx->pc = 0x259a1cu;
    // NOP
label_259a20:
    // 0x259a20: 0x328a  .word       0x0000328A                   # movz        $a2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259a20u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_259a24:
    // 0x259a24: 0x8440  sll         $s0, $zero, 17
    ctx->pc = 0x259a24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_259a28:
    // 0x259a28: 0x0  nop
    ctx->pc = 0x259a28u;
    // NOP
label_259a2c:
    // 0x259a2c: 0x0  nop
    ctx->pc = 0x259a2cu;
    // NOP
label_259a30:
    // 0x259a30: 0x329b  .word       0x0000329B                   # divu        $a2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259a30u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_259a34:
    // 0x259a34: 0x3a50  .word       0x00003A50                   # mfhi        $a3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259a34u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_259a38:
    // 0x259a38: 0x0  nop
    ctx->pc = 0x259a38u;
    // NOP
label_259a3c:
    // 0x259a3c: 0x0  nop
    ctx->pc = 0x259a3cu;
    // NOP
label_259a40:
    // 0x259a40: 0x32a3  .word       0x000032A3                   # negu        $a2, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259a40u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_259a44:
    // 0x259a44: 0x73a0  .word       0x000073A0                   # add         $t6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259a44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_259a48:
    // 0x259a48: 0x0  nop
    ctx->pc = 0x259a48u;
    // NOP
label_259a4c:
    // 0x259a4c: 0x0  nop
    ctx->pc = 0x259a4cu;
    // NOP
label_259a50:
    // 0x259a50: 0x32b2  tlt         $zero, $zero, 202
    ctx->pc = 0x259a50u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259a54:
    // 0x259a54: 0x4e10  .word       0x00004E10                   # mfhi        $t1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259a54u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_259a58:
    // 0x259a58: 0x0  nop
    ctx->pc = 0x259a58u;
    // NOP
label_259a5c:
    // 0x259a5c: 0x0  nop
    ctx->pc = 0x259a5cu;
    // NOP
label_259a60:
    // 0x259a60: 0x32bc  dsll32      $a2, $zero, 10
    ctx->pc = 0x259a60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (32 + 10));
label_259a64:
    // 0x259a64: 0x5200  sll         $t2, $zero, 8
    ctx->pc = 0x259a64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_259a68:
    // 0x259a68: 0x0  nop
    ctx->pc = 0x259a68u;
    // NOP
label_259a6c:
    // 0x259a6c: 0x0  nop
    ctx->pc = 0x259a6cu;
    // NOP
label_259a70:
    // 0x259a70: 0x32c7  .word       0x000032C7                   # srav        $a2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259a70u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_259a74:
    // 0x259a74: 0x7520  .word       0x00007520                   # add         $t6, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259a74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_259a78:
    // 0x259a78: 0x0  nop
    ctx->pc = 0x259a78u;
    // NOP
label_259a7c:
    // 0x259a7c: 0x0  nop
    ctx->pc = 0x259a7cu;
    // NOP
label_259a80:
    // 0x259a80: 0x32d6  .word       0x000032D6                   # dsrlv       $a2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259a80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_259a84:
    // 0x259a84: 0x4570  tge         $zero, $zero, 277
    ctx->pc = 0x259a84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259a88:
    // 0x259a88: 0x0  nop
    ctx->pc = 0x259a88u;
    // NOP
label_259a8c:
    // 0x259a8c: 0x0  nop
    ctx->pc = 0x259a8cu;
    // NOP
label_259a90:
    // 0x259a90: 0x32df  .word       0x000032DF                   # ddivu       $a2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259a90u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x259A90 raw=0x000032DF");
 /* MITIGATED */
label_259a94:
    // 0x259a94: 0x7770  tge         $zero, $zero, 477
    ctx->pc = 0x259a94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259a98:
    // 0x259a98: 0x0  nop
    ctx->pc = 0x259a98u;
    // NOP
label_259a9c:
    // 0x259a9c: 0x0  nop
    ctx->pc = 0x259a9cu;
    // NOP
label_259aa0:
    // 0x259aa0: 0x32ee  .word       0x000032EE                   # dsub        $a2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259aa0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_259aa4:
    // 0x259aa4: 0x4100  sll         $t0, $zero, 4
    ctx->pc = 0x259aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_259aa8:
    // 0x259aa8: 0x0  nop
    ctx->pc = 0x259aa8u;
    // NOP
label_259aac:
    // 0x259aac: 0x0  nop
    ctx->pc = 0x259aacu;
    // NOP
label_259ab0:
    // 0x259ab0: 0x32f7  .word       0x000032F7                   # INVALID     $zero, $zero, 0x32F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259ab0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x259AB0 raw=0x000032F7");
 /* MITIGATED */
label_259ab4:
    // 0x259ab4: 0x70e0  .word       0x000070E0                   # add         $t6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259ab4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_259ab8:
    // 0x259ab8: 0x0  nop
    ctx->pc = 0x259ab8u;
    // NOP
label_259abc:
    // 0x259abc: 0x0  nop
    ctx->pc = 0x259abcu;
    // NOP
label_259ac0:
    // 0x259ac0: 0x3306  .word       0x00003306                   # srlv        $a2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_259ac4:
    // 0x259ac4: 0x4500  sll         $t0, $zero, 20
    ctx->pc = 0x259ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_259ac8:
    // 0x259ac8: 0x0  nop
    ctx->pc = 0x259ac8u;
    // NOP
label_259acc:
    // 0x259acc: 0x0  nop
    ctx->pc = 0x259accu;
    // NOP
label_259ad0:
    // 0x259ad0: 0x330f  .word       0x0000330F                   # sync # 00003000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259ad0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_259ad4:
    // 0x259ad4: 0x7400  sll         $t6, $zero, 16
    ctx->pc = 0x259ad4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_259ad8:
    // 0x259ad8: 0x0  nop
    ctx->pc = 0x259ad8u;
    // NOP
label_259adc:
    // 0x259adc: 0x0  nop
    ctx->pc = 0x259adcu;
    // NOP
label_259ae0:
    // 0x259ae0: 0x331e  .word       0x0000331E                   # ddiv        $a2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259ae0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x259AE0 raw=0x0000331E");
 /* MITIGATED */
label_259ae4:
    // 0x259ae4: 0x6110  .word       0x00006110                   # mfhi        $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259ae4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_259ae8:
    // 0x259ae8: 0x0  nop
    ctx->pc = 0x259ae8u;
    // NOP
label_259aec:
    // 0x259aec: 0x0  nop
    ctx->pc = 0x259aecu;
    // NOP
label_259af0:
    // 0x259af0: 0x332b  .word       0x0000332B                   # sltu        $a2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259af0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_259af4:
    // 0x259af4: 0x5ea0  .word       0x00005EA0                   # add         $t3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259af4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_259af8:
    // 0x259af8: 0x0  nop
    ctx->pc = 0x259af8u;
    // NOP
label_259afc:
    // 0x259afc: 0x0  nop
    ctx->pc = 0x259afcu;
    // NOP
label_259b00:
    // 0x259b00: 0x3337  .word       0x00003337                   # INVALID     $zero, $zero, 0x3337 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259b00u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x259B00 raw=0x00003337");
 /* MITIGATED */
label_259b04:
    // 0x259b04: 0x6760  .word       0x00006760                   # add         $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259b04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_259b08:
    // 0x259b08: 0x0  nop
    ctx->pc = 0x259b08u;
    // NOP
label_259b0c:
    // 0x259b0c: 0x0  nop
    ctx->pc = 0x259b0cu;
    // NOP
label_259b10:
    // 0x259b10: 0x3344  .word       0x00003344                   # sllv        $a2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259b10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_259b14:
    // 0x259b14: 0x6690  .word       0x00006690                   # mfhi        $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259b14u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_259b18:
    // 0x259b18: 0x0  nop
    ctx->pc = 0x259b18u;
    // NOP
label_259b1c:
    // 0x259b1c: 0x0  nop
    ctx->pc = 0x259b1cu;
    // NOP
label_259b20:
    // 0x259b20: 0x3351  .word       0x00003351                   # mthi        $zero # 00003340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259b20u;
    ctx->hi = GPR_U64(ctx, 0);
label_259b24:
    // 0x259b24: 0x64f0  tge         $zero, $zero, 403
    ctx->pc = 0x259b24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259b28:
    // 0x259b28: 0x0  nop
    ctx->pc = 0x259b28u;
    // NOP
label_259b2c:
    // 0x259b2c: 0x0  nop
    ctx->pc = 0x259b2cu;
    // NOP
label_259b30:
    // 0x259b30: 0x335e  .word       0x0000335E                   # ddiv        $a2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259b30u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x259B30 raw=0x0000335E");
 /* MITIGATED */
label_259b34:
    // 0x259b34: 0x4ae0  .word       0x00004AE0                   # add         $t1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259b34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_259b38:
    // 0x259b38: 0x0  nop
    ctx->pc = 0x259b38u;
    // NOP
label_259b3c:
    // 0x259b3c: 0x0  nop
    ctx->pc = 0x259b3cu;
    // NOP
label_259b40:
    // 0x259b40: 0x3368  .word       0x00003368                   # mfsa        $a2 # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x259b40u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_259b44:
    // 0x259b44: 0x5270  tge         $zero, $zero, 329
    ctx->pc = 0x259b44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259b48:
    // 0x259b48: 0x0  nop
    ctx->pc = 0x259b48u;
    // NOP
label_259b4c:
    // 0x259b4c: 0x0  nop
    ctx->pc = 0x259b4cu;
    // NOP
label_259b50:
    // 0x259b50: 0x3373  tltu        $zero, $zero, 205
    ctx->pc = 0x259b50u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259b54:
    // 0x259b54: 0x3220  .word       0x00003220                   # add         $a2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259b54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_259b58:
    // 0x259b58: 0x0  nop
    ctx->pc = 0x259b58u;
    // NOP
label_259b5c:
    // 0x259b5c: 0x0  nop
    ctx->pc = 0x259b5cu;
    // NOP
label_259b60:
    // 0x259b60: 0x337a  dsrl        $a2, $zero, 13
    ctx->pc = 0x259b60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> 13);
label_259b64:
    // 0x259b64: 0x41e0  .word       0x000041E0                   # add         $t0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259b64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_259b68:
    // 0x259b68: 0x0  nop
    ctx->pc = 0x259b68u;
    // NOP
label_259b6c:
    // 0x259b6c: 0x0  nop
    ctx->pc = 0x259b6cu;
    // NOP
label_259b70:
    // 0x259b70: 0x3383  sra         $a2, $zero, 14
    ctx->pc = 0x259b70u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 0), 14));
label_259b74:
    // 0x259b74: 0x7720  .word       0x00007720                   # add         $t6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259b74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_259b78:
    // 0x259b78: 0x0  nop
    ctx->pc = 0x259b78u;
    // NOP
label_259b7c:
    // 0x259b7c: 0x0  nop
    ctx->pc = 0x259b7cu;
    // NOP
label_259b80:
    // 0x259b80: 0x3392  .word       0x00003392                   # mflo        $a2 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259b80u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_259b84:
    // 0x259b84: 0x5570  tge         $zero, $zero, 341
    ctx->pc = 0x259b84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259b88:
    // 0x259b88: 0x0  nop
    ctx->pc = 0x259b88u;
    // NOP
label_259b8c:
    // 0x259b8c: 0x0  nop
    ctx->pc = 0x259b8cu;
    // NOP
label_259b90:
    // 0x259b90: 0x339d  .word       0x0000339D                   # dmultu      $zero, $zero # 00003380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259b90u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x259B90 raw=0x0000339D");
 /* MITIGATED */
label_259b94:
    // 0x259b94: 0x5bc0  sll         $t3, $zero, 15
    ctx->pc = 0x259b94u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_259b98:
    // 0x259b98: 0x0  nop
    ctx->pc = 0x259b98u;
    // NOP
label_259b9c:
    // 0x259b9c: 0x0  nop
    ctx->pc = 0x259b9cu;
    // NOP
label_259ba0:
    // 0x259ba0: 0x33a9  .word       0x000033A9                   # mtsa        $zero # 00003380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x259ba0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_259ba4:
    // 0x259ba4: 0x4620  .word       0x00004620                   # add         $t0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259ba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_259ba8:
    // 0x259ba8: 0x0  nop
    ctx->pc = 0x259ba8u;
    // NOP
label_259bac:
    // 0x259bac: 0x0  nop
    ctx->pc = 0x259bacu;
    // NOP
label_259bb0:
    // 0x259bb0: 0x33b2  tlt         $zero, $zero, 206
    ctx->pc = 0x259bb0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259bb4:
    // 0x259bb4: 0x4d70  tge         $zero, $zero, 309
    ctx->pc = 0x259bb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259bb8:
    // 0x259bb8: 0x0  nop
    ctx->pc = 0x259bb8u;
    // NOP
label_259bbc:
    // 0x259bbc: 0x0  nop
    ctx->pc = 0x259bbcu;
    // NOP
label_259bc0:
    // 0x259bc0: 0x33bc  dsll32      $a2, $zero, 14
    ctx->pc = 0x259bc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (32 + 14));
label_259bc4:
    // 0x259bc4: 0x4840  sll         $t1, $zero, 1
    ctx->pc = 0x259bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_259bc8:
    // 0x259bc8: 0x0  nop
    ctx->pc = 0x259bc8u;
    // NOP
label_259bcc:
    // 0x259bcc: 0x0  nop
    ctx->pc = 0x259bccu;
    // NOP
label_259bd0:
    // 0x259bd0: 0x33c6  .word       0x000033C6                   # srlv        $a2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_259bd4:
    // 0x259bd4: 0x72f0  tge         $zero, $zero, 459
    ctx->pc = 0x259bd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259bd8:
    // 0x259bd8: 0x0  nop
    ctx->pc = 0x259bd8u;
    // NOP
label_259bdc:
    // 0x259bdc: 0x0  nop
    ctx->pc = 0x259bdcu;
    // NOP
label_259be0:
    // 0x259be0: 0x33d5  .word       0x000033D5                   # INVALID     $zero, $zero, 0x33D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259be0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x259BE0 raw=0x000033D5");
 /* MITIGATED */
label_259be4:
    // 0x259be4: 0x5600  sll         $t2, $zero, 24
    ctx->pc = 0x259be4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_259be8:
    // 0x259be8: 0x0  nop
    ctx->pc = 0x259be8u;
    // NOP
label_259bec:
    // 0x259bec: 0x0  nop
    ctx->pc = 0x259becu;
    // NOP
label_259bf0:
    // 0x259bf0: 0x33e0  .word       0x000033E0                   # add         $a2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259bf0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_259bf4:
    // 0x259bf4: 0x4cc0  sll         $t1, $zero, 19
    ctx->pc = 0x259bf4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_259bf8:
    // 0x259bf8: 0x0  nop
    ctx->pc = 0x259bf8u;
    // NOP
label_259bfc:
    // 0x259bfc: 0x0  nop
    ctx->pc = 0x259bfcu;
    // NOP
label_259c00:
    // 0x259c00: 0x33ea  .word       0x000033EA                   # slt         $a2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259c00u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_259c04:
    // 0x259c04: 0x7780  sll         $t6, $zero, 30
    ctx->pc = 0x259c04u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_259c08:
    // 0x259c08: 0x0  nop
    ctx->pc = 0x259c08u;
    // NOP
label_259c0c:
    // 0x259c0c: 0x0  nop
    ctx->pc = 0x259c0cu;
    // NOP
label_259c10:
    // 0x259c10: 0x33f9  .word       0x000033F9                   # INVALID     $zero, $zero, 0x33F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259c10u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x259C10 raw=0x000033F9");
 /* MITIGATED */
label_259c14:
    // 0x259c14: 0x5070  tge         $zero, $zero, 321
    ctx->pc = 0x259c14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259c18:
    // 0x259c18: 0x0  nop
    ctx->pc = 0x259c18u;
    // NOP
label_259c1c:
    // 0x259c1c: 0x0  nop
    ctx->pc = 0x259c1cu;
    // NOP
label_259c20:
    // 0x259c20: 0x3404  .word       0x00003404                   # sllv        $a2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259c20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_259c24:
    // 0x259c24: 0x77a0  .word       0x000077A0                   # add         $t6, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259c24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_259c28:
    // 0x259c28: 0x0  nop
    ctx->pc = 0x259c28u;
    // NOP
label_259c2c:
    // 0x259c2c: 0x0  nop
    ctx->pc = 0x259c2cu;
    // NOP
label_259c30:
    // 0x259c30: 0x3413  .word       0x00003413                   # mtlo        $zero # 00003400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259c30u;
    ctx->lo = GPR_U64(ctx, 0);
label_259c34:
    // 0x259c34: 0x54f0  tge         $zero, $zero, 339
    ctx->pc = 0x259c34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259c38:
    // 0x259c38: 0x0  nop
    ctx->pc = 0x259c38u;
    // NOP
label_259c3c:
    // 0x259c3c: 0x0  nop
    ctx->pc = 0x259c3cu;
    // NOP
label_259c40:
    // 0x259c40: 0x341e  .word       0x0000341E                   # ddiv        $a2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259c40u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x259C40 raw=0x0000341E");
 /* MITIGATED */
label_259c44:
    // 0x259c44: 0x4bb0  tge         $zero, $zero, 302
    ctx->pc = 0x259c44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259c48:
    // 0x259c48: 0x0  nop
    ctx->pc = 0x259c48u;
    // NOP
label_259c4c:
    // 0x259c4c: 0x0  nop
    ctx->pc = 0x259c4cu;
    // NOP
label_259c50:
    // 0x259c50: 0x3428  .word       0x00003428                   # mfsa        $a2 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x259c50u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_259c54:
    // 0x259c54: 0x6fe0  .word       0x00006FE0                   # add         $t5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259c54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_259c58:
    // 0x259c58: 0x0  nop
    ctx->pc = 0x259c58u;
    // NOP
label_259c5c:
    // 0x259c5c: 0x0  nop
    ctx->pc = 0x259c5cu;
    // NOP
label_259c60:
    // 0x259c60: 0x3436  tne         $zero, $zero, 208
    ctx->pc = 0x259c60u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259c64:
    // 0x259c64: 0x5d90  .word       0x00005D90                   # mfhi        $t3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259c64u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_259c68:
    // 0x259c68: 0x0  nop
    ctx->pc = 0x259c68u;
    // NOP
label_259c6c:
    // 0x259c6c: 0x0  nop
    ctx->pc = 0x259c6cu;
    // NOP
label_259c70:
    // 0x259c70: 0x3442  srl         $a2, $zero, 17
    ctx->pc = 0x259c70u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 0), 17));
label_259c74:
    // 0x259c74: 0x6ca0  .word       0x00006CA0                   # add         $t5, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259c74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_259c78:
    // 0x259c78: 0x0  nop
    ctx->pc = 0x259c78u;
    // NOP
label_259c7c:
    // 0x259c7c: 0x0  nop
    ctx->pc = 0x259c7cu;
    // NOP
label_259c80:
    // 0x259c80: 0x3450  .word       0x00003450                   # mfhi        $a2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259c80u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_259c84:
    // 0x259c84: 0x6cd0  .word       0x00006CD0                   # mfhi        $t5 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259c84u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_259c88:
    // 0x259c88: 0x0  nop
    ctx->pc = 0x259c88u;
    // NOP
label_259c8c:
    // 0x259c8c: 0x0  nop
    ctx->pc = 0x259c8cu;
    // NOP
label_259c90:
    // 0x259c90: 0x345e  .word       0x0000345E                   # ddiv        $a2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259c90u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x259C90 raw=0x0000345E");
 /* MITIGATED */
label_259c94:
    // 0x259c94: 0x7df0  tge         $zero, $zero, 503
    ctx->pc = 0x259c94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259c98:
    // 0x259c98: 0x0  nop
    ctx->pc = 0x259c98u;
    // NOP
label_259c9c:
    // 0x259c9c: 0x0  nop
    ctx->pc = 0x259c9cu;
    // NOP
label_259ca0:
    // 0x259ca0: 0x346e  .word       0x0000346E                   # dsub        $a2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259ca0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_259ca4:
    // 0x259ca4: 0x74e0  .word       0x000074E0                   # add         $t6, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259ca4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_259ca8:
    // 0x259ca8: 0x0  nop
    ctx->pc = 0x259ca8u;
    // NOP
label_259cac:
    // 0x259cac: 0x0  nop
    ctx->pc = 0x259cacu;
    // NOP
label_259cb0:
    // 0x259cb0: 0x347d  .word       0x0000347D                   # INVALID     $zero, $zero, 0x347D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259cb0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x259CB0 raw=0x0000347D");
 /* MITIGATED */
label_259cb4:
    // 0x259cb4: 0x68a0  .word       0x000068A0                   # add         $t5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259cb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_259cb8:
    // 0x259cb8: 0x0  nop
    ctx->pc = 0x259cb8u;
    // NOP
label_259cbc:
    // 0x259cbc: 0x0  nop
    ctx->pc = 0x259cbcu;
    // NOP
label_259cc0:
    // 0x259cc0: 0x348b  .word       0x0000348B                   # movn        $a2, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259cc0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_259cc4:
    // 0x259cc4: 0x73c0  sll         $t6, $zero, 15
    ctx->pc = 0x259cc4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_259cc8:
    // 0x259cc8: 0x0  nop
    ctx->pc = 0x259cc8u;
    // NOP
label_259ccc:
    // 0x259ccc: 0x0  nop
    ctx->pc = 0x259cccu;
    // NOP
label_259cd0:
    // 0x259cd0: 0x349a  .word       0x0000349A                   # div         $a2, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259cd0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_259cd4:
    // 0x259cd4: 0x5400  sll         $t2, $zero, 16
    ctx->pc = 0x259cd4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_259cd8:
    // 0x259cd8: 0x0  nop
    ctx->pc = 0x259cd8u;
    // NOP
label_259cdc:
    // 0x259cdc: 0x0  nop
    ctx->pc = 0x259cdcu;
    // NOP
label_259ce0:
    // 0x259ce0: 0x34a5  .word       0x000034A5                   # move        $a2, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259ce0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_259ce4:
    // 0x259ce4: 0x57c0  sll         $t2, $zero, 31
    ctx->pc = 0x259ce4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_259ce8:
    // 0x259ce8: 0x0  nop
    ctx->pc = 0x259ce8u;
    // NOP
label_259cec:
    // 0x259cec: 0x0  nop
    ctx->pc = 0x259cecu;
    // NOP
label_259cf0:
    // 0x259cf0: 0x34b0  tge         $zero, $zero, 210
    ctx->pc = 0x259cf0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259cf4:
    // 0x259cf4: 0x5400  sll         $t2, $zero, 16
    ctx->pc = 0x259cf4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_259cf8:
    // 0x259cf8: 0x0  nop
    ctx->pc = 0x259cf8u;
    // NOP
label_259cfc:
    // 0x259cfc: 0x0  nop
    ctx->pc = 0x259cfcu;
    // NOP
label_259d00:
    // 0x259d00: 0x34bb  dsra        $a2, $zero, 18
    ctx->pc = 0x259d00u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 18);
label_259d04:
    // 0x259d04: 0x6250  .word       0x00006250                   # mfhi        $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259d04u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_259d08:
    // 0x259d08: 0x0  nop
    ctx->pc = 0x259d08u;
    // NOP
label_259d0c:
    // 0x259d0c: 0x0  nop
    ctx->pc = 0x259d0cu;
    // NOP
    ctx->pc = 0x259d10u;
    return;
}
