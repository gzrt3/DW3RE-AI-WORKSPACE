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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part443(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x273630u: goto label_273630;
        case 0x273634u: goto label_273634;
        case 0x273638u: goto label_273638;
        case 0x27363cu: goto label_27363c;
        case 0x273640u: goto label_273640;
        case 0x273644u: goto label_273644;
        case 0x273648u: goto label_273648;
        case 0x27364cu: goto label_27364c;
        case 0x273650u: goto label_273650;
        case 0x273654u: goto label_273654;
        case 0x273658u: goto label_273658;
        case 0x27365cu: goto label_27365c;
        case 0x273660u: goto label_273660;
        case 0x273664u: goto label_273664;
        case 0x273668u: goto label_273668;
        case 0x27366cu: goto label_27366c;
        case 0x273670u: goto label_273670;
        case 0x273674u: goto label_273674;
        case 0x273678u: goto label_273678;
        case 0x27367cu: goto label_27367c;
        case 0x273680u: goto label_273680;
        case 0x273684u: goto label_273684;
        case 0x273688u: goto label_273688;
        case 0x27368cu: goto label_27368c;
        case 0x273690u: goto label_273690;
        case 0x273694u: goto label_273694;
        case 0x273698u: goto label_273698;
        case 0x27369cu: goto label_27369c;
        case 0x2736a0u: goto label_2736a0;
        case 0x2736a4u: goto label_2736a4;
        case 0x2736a8u: goto label_2736a8;
        case 0x2736acu: goto label_2736ac;
        case 0x2736b0u: goto label_2736b0;
        case 0x2736b4u: goto label_2736b4;
        case 0x2736b8u: goto label_2736b8;
        case 0x2736bcu: goto label_2736bc;
        case 0x2736c0u: goto label_2736c0;
        case 0x2736c4u: goto label_2736c4;
        case 0x2736c8u: goto label_2736c8;
        case 0x2736ccu: goto label_2736cc;
        case 0x2736d0u: goto label_2736d0;
        case 0x2736d4u: goto label_2736d4;
        case 0x2736d8u: goto label_2736d8;
        case 0x2736dcu: goto label_2736dc;
        case 0x2736e0u: goto label_2736e0;
        case 0x2736e4u: goto label_2736e4;
        case 0x2736e8u: goto label_2736e8;
        case 0x2736ecu: goto label_2736ec;
        case 0x2736f0u: goto label_2736f0;
        case 0x2736f4u: goto label_2736f4;
        case 0x2736f8u: goto label_2736f8;
        case 0x2736fcu: goto label_2736fc;
        case 0x273700u: goto label_273700;
        case 0x273704u: goto label_273704;
        case 0x273708u: goto label_273708;
        case 0x27370cu: goto label_27370c;
        case 0x273710u: goto label_273710;
        case 0x273714u: goto label_273714;
        case 0x273718u: goto label_273718;
        case 0x27371cu: goto label_27371c;
        case 0x273720u: goto label_273720;
        case 0x273724u: goto label_273724;
        case 0x273728u: goto label_273728;
        case 0x27372cu: goto label_27372c;
        case 0x273730u: goto label_273730;
        case 0x273734u: goto label_273734;
        case 0x273738u: goto label_273738;
        case 0x27373cu: goto label_27373c;
        case 0x273740u: goto label_273740;
        case 0x273744u: goto label_273744;
        case 0x273748u: goto label_273748;
        case 0x27374cu: goto label_27374c;
        case 0x273750u: goto label_273750;
        case 0x273754u: goto label_273754;
        case 0x273758u: goto label_273758;
        case 0x27375cu: goto label_27375c;
        case 0x273760u: goto label_273760;
        case 0x273764u: goto label_273764;
        case 0x273768u: goto label_273768;
        case 0x27376cu: goto label_27376c;
        case 0x273770u: goto label_273770;
        case 0x273774u: goto label_273774;
        case 0x273778u: goto label_273778;
        case 0x27377cu: goto label_27377c;
        case 0x273780u: goto label_273780;
        case 0x273784u: goto label_273784;
        case 0x273788u: goto label_273788;
        case 0x27378cu: goto label_27378c;
        case 0x273790u: goto label_273790;
        case 0x273794u: goto label_273794;
        case 0x273798u: goto label_273798;
        case 0x27379cu: goto label_27379c;
        case 0x2737a0u: goto label_2737a0;
        case 0x2737a4u: goto label_2737a4;
        case 0x2737a8u: goto label_2737a8;
        case 0x2737acu: goto label_2737ac;
        case 0x2737b0u: goto label_2737b0;
        case 0x2737b4u: goto label_2737b4;
        case 0x2737b8u: goto label_2737b8;
        case 0x2737bcu: goto label_2737bc;
        case 0x2737c0u: goto label_2737c0;
        case 0x2737c4u: goto label_2737c4;
        case 0x2737c8u: goto label_2737c8;
        case 0x2737ccu: goto label_2737cc;
        case 0x2737d0u: goto label_2737d0;
        case 0x2737d4u: goto label_2737d4;
        case 0x2737d8u: goto label_2737d8;
        case 0x2737dcu: goto label_2737dc;
        case 0x2737e0u: goto label_2737e0;
        case 0x2737e4u: goto label_2737e4;
        case 0x2737e8u: goto label_2737e8;
        case 0x2737ecu: goto label_2737ec;
        case 0x2737f0u: goto label_2737f0;
        case 0x2737f4u: goto label_2737f4;
        case 0x2737f8u: goto label_2737f8;
        case 0x2737fcu: goto label_2737fc;
        case 0x273800u: goto label_273800;
        case 0x273804u: goto label_273804;
        case 0x273808u: goto label_273808;
        case 0x27380cu: goto label_27380c;
        case 0x273810u: goto label_273810;
        case 0x273814u: goto label_273814;
        case 0x273818u: goto label_273818;
        case 0x27381cu: goto label_27381c;
        case 0x273820u: goto label_273820;
        case 0x273824u: goto label_273824;
        case 0x273828u: goto label_273828;
        case 0x27382cu: goto label_27382c;
        case 0x273830u: goto label_273830;
        case 0x273834u: goto label_273834;
        case 0x273838u: goto label_273838;
        case 0x27383cu: goto label_27383c;
        case 0x273840u: goto label_273840;
        case 0x273844u: goto label_273844;
        case 0x273848u: goto label_273848;
        case 0x27384cu: goto label_27384c;
        case 0x273850u: goto label_273850;
        case 0x273854u: goto label_273854;
        case 0x273858u: goto label_273858;
        case 0x27385cu: goto label_27385c;
        case 0x273860u: goto label_273860;
        case 0x273864u: goto label_273864;
        case 0x273868u: goto label_273868;
        case 0x27386cu: goto label_27386c;
        case 0x273870u: goto label_273870;
        case 0x273874u: goto label_273874;
        case 0x273878u: goto label_273878;
        case 0x27387cu: goto label_27387c;
        case 0x273880u: goto label_273880;
        case 0x273884u: goto label_273884;
        case 0x273888u: goto label_273888;
        case 0x27388cu: goto label_27388c;
        case 0x273890u: goto label_273890;
        case 0x273894u: goto label_273894;
        case 0x273898u: goto label_273898;
        case 0x27389cu: goto label_27389c;
        case 0x2738a0u: goto label_2738a0;
        case 0x2738a4u: goto label_2738a4;
        case 0x2738a8u: goto label_2738a8;
        case 0x2738acu: goto label_2738ac;
        case 0x2738b0u: goto label_2738b0;
        case 0x2738b4u: goto label_2738b4;
        case 0x2738b8u: goto label_2738b8;
        case 0x2738bcu: goto label_2738bc;
        case 0x2738c0u: goto label_2738c0;
        case 0x2738c4u: goto label_2738c4;
        case 0x2738c8u: goto label_2738c8;
        case 0x2738ccu: goto label_2738cc;
        case 0x2738d0u: goto label_2738d0;
        case 0x2738d4u: goto label_2738d4;
        case 0x2738d8u: goto label_2738d8;
        case 0x2738dcu: goto label_2738dc;
        case 0x2738e0u: goto label_2738e0;
        case 0x2738e4u: goto label_2738e4;
        case 0x2738e8u: goto label_2738e8;
        case 0x2738ecu: goto label_2738ec;
        case 0x2738f0u: goto label_2738f0;
        case 0x2738f4u: goto label_2738f4;
        case 0x2738f8u: goto label_2738f8;
        case 0x2738fcu: goto label_2738fc;
        case 0x273900u: goto label_273900;
        case 0x273904u: goto label_273904;
        case 0x273908u: goto label_273908;
        case 0x27390cu: goto label_27390c;
        case 0x273910u: goto label_273910;
        case 0x273914u: goto label_273914;
        case 0x273918u: goto label_273918;
        case 0x27391cu: goto label_27391c;
        case 0x273920u: goto label_273920;
        case 0x273924u: goto label_273924;
        case 0x273928u: goto label_273928;
        case 0x27392cu: goto label_27392c;
        case 0x273930u: goto label_273930;
        case 0x273934u: goto label_273934;
        case 0x273938u: goto label_273938;
        case 0x27393cu: goto label_27393c;
        case 0x273940u: goto label_273940;
        case 0x273944u: goto label_273944;
        case 0x273948u: goto label_273948;
        case 0x27394cu: goto label_27394c;
        case 0x273950u: goto label_273950;
        case 0x273954u: goto label_273954;
        case 0x273958u: goto label_273958;
        case 0x27395cu: goto label_27395c;
        case 0x273960u: goto label_273960;
        case 0x273964u: goto label_273964;
        case 0x273968u: goto label_273968;
        case 0x27396cu: goto label_27396c;
        case 0x273970u: goto label_273970;
        case 0x273974u: goto label_273974;
        case 0x273978u: goto label_273978;
        case 0x27397cu: goto label_27397c;
        case 0x273980u: goto label_273980;
        case 0x273984u: goto label_273984;
        case 0x273988u: goto label_273988;
        case 0x27398cu: goto label_27398c;
        case 0x273990u: goto label_273990;
        case 0x273994u: goto label_273994;
        case 0x273998u: goto label_273998;
        case 0x27399cu: goto label_27399c;
        case 0x2739a0u: goto label_2739a0;
        case 0x2739a4u: goto label_2739a4;
        case 0x2739a8u: goto label_2739a8;
        case 0x2739acu: goto label_2739ac;
        case 0x2739b0u: goto label_2739b0;
        case 0x2739b4u: goto label_2739b4;
        case 0x2739b8u: goto label_2739b8;
        case 0x2739bcu: goto label_2739bc;
        case 0x2739c0u: goto label_2739c0;
        case 0x2739c4u: goto label_2739c4;
        case 0x2739c8u: goto label_2739c8;
        case 0x2739ccu: goto label_2739cc;
        case 0x2739d0u: goto label_2739d0;
        case 0x2739d4u: goto label_2739d4;
        case 0x2739d8u: goto label_2739d8;
        case 0x2739dcu: goto label_2739dc;
        case 0x2739e0u: goto label_2739e0;
        case 0x2739e4u: goto label_2739e4;
        case 0x2739e8u: goto label_2739e8;
        case 0x2739ecu: goto label_2739ec;
        case 0x2739f0u: goto label_2739f0;
        case 0x2739f4u: goto label_2739f4;
        case 0x2739f8u: goto label_2739f8;
        case 0x2739fcu: goto label_2739fc;
        case 0x273a00u: goto label_273a00;
        case 0x273a04u: goto label_273a04;
        case 0x273a08u: goto label_273a08;
        case 0x273a0cu: goto label_273a0c;
        case 0x273a10u: goto label_273a10;
        case 0x273a14u: goto label_273a14;
        case 0x273a18u: goto label_273a18;
        case 0x273a1cu: goto label_273a1c;
        case 0x273a20u: goto label_273a20;
        case 0x273a24u: goto label_273a24;
        case 0x273a28u: goto label_273a28;
        case 0x273a2cu: goto label_273a2c;
        case 0x273a30u: goto label_273a30;
        case 0x273a34u: goto label_273a34;
        case 0x273a38u: goto label_273a38;
        case 0x273a3cu: goto label_273a3c;
        case 0x273a40u: goto label_273a40;
        case 0x273a44u: goto label_273a44;
        case 0x273a48u: goto label_273a48;
        case 0x273a4cu: goto label_273a4c;
        case 0x273a50u: goto label_273a50;
        case 0x273a54u: goto label_273a54;
        case 0x273a58u: goto label_273a58;
        case 0x273a5cu: goto label_273a5c;
        case 0x273a60u: goto label_273a60;
        case 0x273a64u: goto label_273a64;
        case 0x273a68u: goto label_273a68;
        case 0x273a6cu: goto label_273a6c;
        case 0x273a70u: goto label_273a70;
        case 0x273a74u: goto label_273a74;
        case 0x273a78u: goto label_273a78;
        case 0x273a7cu: goto label_273a7c;
        case 0x273a80u: goto label_273a80;
        case 0x273a84u: goto label_273a84;
        case 0x273a88u: goto label_273a88;
        case 0x273a8cu: goto label_273a8c;
        case 0x273a90u: goto label_273a90;
        case 0x273a94u: goto label_273a94;
        case 0x273a98u: goto label_273a98;
        case 0x273a9cu: goto label_273a9c;
        case 0x273aa0u: goto label_273aa0;
        case 0x273aa4u: goto label_273aa4;
        case 0x273aa8u: goto label_273aa8;
        case 0x273aacu: goto label_273aac;
        case 0x273ab0u: goto label_273ab0;
        case 0x273ab4u: goto label_273ab4;
        case 0x273ab8u: goto label_273ab8;
        case 0x273abcu: goto label_273abc;
        case 0x273ac0u: goto label_273ac0;
        case 0x273ac4u: goto label_273ac4;
        case 0x273ac8u: goto label_273ac8;
        case 0x273accu: goto label_273acc;
        case 0x273ad0u: goto label_273ad0;
        case 0x273ad4u: goto label_273ad4;
        case 0x273ad8u: goto label_273ad8;
        case 0x273adcu: goto label_273adc;
        case 0x273ae0u: goto label_273ae0;
        case 0x273ae4u: goto label_273ae4;
        case 0x273ae8u: goto label_273ae8;
        case 0x273aecu: goto label_273aec;
        case 0x273af0u: goto label_273af0;
        case 0x273af4u: goto label_273af4;
        case 0x273af8u: goto label_273af8;
        case 0x273afcu: goto label_273afc;
        case 0x273b00u: goto label_273b00;
        case 0x273b04u: goto label_273b04;
        case 0x273b08u: goto label_273b08;
        case 0x273b0cu: goto label_273b0c;
        case 0x273b10u: goto label_273b10;
        case 0x273b14u: goto label_273b14;
        case 0x273b18u: goto label_273b18;
        case 0x273b1cu: goto label_273b1c;
        case 0x273b20u: goto label_273b20;
        case 0x273b24u: goto label_273b24;
        case 0x273b28u: goto label_273b28;
        case 0x273b2cu: goto label_273b2c;
        case 0x273b30u: goto label_273b30;
        case 0x273b34u: goto label_273b34;
        case 0x273b38u: goto label_273b38;
        case 0x273b3cu: goto label_273b3c;
        case 0x273b40u: goto label_273b40;
        case 0x273b44u: goto label_273b44;
        case 0x273b48u: goto label_273b48;
        case 0x273b4cu: goto label_273b4c;
        case 0x273b50u: goto label_273b50;
        case 0x273b54u: goto label_273b54;
        case 0x273b58u: goto label_273b58;
        case 0x273b5cu: goto label_273b5c;
        case 0x273b60u: goto label_273b60;
        case 0x273b64u: goto label_273b64;
        case 0x273b68u: goto label_273b68;
        case 0x273b6cu: goto label_273b6c;
        case 0x273b70u: goto label_273b70;
        case 0x273b74u: goto label_273b74;
        case 0x273b78u: goto label_273b78;
        case 0x273b7cu: goto label_273b7c;
        case 0x273b80u: goto label_273b80;
        case 0x273b84u: goto label_273b84;
        case 0x273b88u: goto label_273b88;
        case 0x273b8cu: goto label_273b8c;
        case 0x273b90u: goto label_273b90;
        case 0x273b94u: goto label_273b94;
        case 0x273b98u: goto label_273b98;
        case 0x273b9cu: goto label_273b9c;
        case 0x273ba0u: goto label_273ba0;
        case 0x273ba4u: goto label_273ba4;
        case 0x273ba8u: goto label_273ba8;
        case 0x273bacu: goto label_273bac;
        case 0x273bb0u: goto label_273bb0;
        case 0x273bb4u: goto label_273bb4;
        case 0x273bb8u: goto label_273bb8;
        case 0x273bbcu: goto label_273bbc;
        case 0x273bc0u: goto label_273bc0;
        case 0x273bc4u: goto label_273bc4;
        case 0x273bc8u: goto label_273bc8;
        case 0x273bccu: goto label_273bcc;
        case 0x273bd0u: goto label_273bd0;
        case 0x273bd4u: goto label_273bd4;
        case 0x273bd8u: goto label_273bd8;
        case 0x273bdcu: goto label_273bdc;
        case 0x273be0u: goto label_273be0;
        case 0x273be4u: goto label_273be4;
        case 0x273be8u: goto label_273be8;
        case 0x273becu: goto label_273bec;
        case 0x273bf0u: goto label_273bf0;
        case 0x273bf4u: goto label_273bf4;
        case 0x273bf8u: goto label_273bf8;
        case 0x273bfcu: goto label_273bfc;
        case 0x273c00u: goto label_273c00;
        case 0x273c04u: goto label_273c04;
        case 0x273c08u: goto label_273c08;
        case 0x273c0cu: goto label_273c0c;
        case 0x273c10u: goto label_273c10;
        case 0x273c14u: goto label_273c14;
        case 0x273c18u: goto label_273c18;
        case 0x273c1cu: goto label_273c1c;
        case 0x273c20u: goto label_273c20;
        case 0x273c24u: goto label_273c24;
        case 0x273c28u: goto label_273c28;
        case 0x273c2cu: goto label_273c2c;
        case 0x273c30u: goto label_273c30;
        case 0x273c34u: goto label_273c34;
        case 0x273c38u: goto label_273c38;
        case 0x273c3cu: goto label_273c3c;
        case 0x273c40u: goto label_273c40;
        case 0x273c44u: goto label_273c44;
        case 0x273c48u: goto label_273c48;
        case 0x273c4cu: goto label_273c4c;
        case 0x273c50u: goto label_273c50;
        case 0x273c54u: goto label_273c54;
        case 0x273c58u: goto label_273c58;
        case 0x273c5cu: goto label_273c5c;
        case 0x273c60u: goto label_273c60;
        case 0x273c64u: goto label_273c64;
        case 0x273c68u: goto label_273c68;
        case 0x273c6cu: goto label_273c6c;
        case 0x273c70u: goto label_273c70;
        case 0x273c74u: goto label_273c74;
        case 0x273c78u: goto label_273c78;
        case 0x273c7cu: goto label_273c7c;
        case 0x273c80u: goto label_273c80;
        case 0x273c84u: goto label_273c84;
        case 0x273c88u: goto label_273c88;
        case 0x273c8cu: goto label_273c8c;
        case 0x273c90u: goto label_273c90;
        case 0x273c94u: goto label_273c94;
        case 0x273c98u: goto label_273c98;
        case 0x273c9cu: goto label_273c9c;
        case 0x273ca0u: goto label_273ca0;
        case 0x273ca4u: goto label_273ca4;
        case 0x273ca8u: goto label_273ca8;
        case 0x273cacu: goto label_273cac;
        case 0x273cb0u: goto label_273cb0;
        case 0x273cb4u: goto label_273cb4;
        case 0x273cb8u: goto label_273cb8;
        case 0x273cbcu: goto label_273cbc;
        case 0x273cc0u: goto label_273cc0;
        case 0x273cc4u: goto label_273cc4;
        case 0x273cc8u: goto label_273cc8;
        case 0x273cccu: goto label_273ccc;
        case 0x273cd0u: goto label_273cd0;
        case 0x273cd4u: goto label_273cd4;
        case 0x273cd8u: goto label_273cd8;
        case 0x273cdcu: goto label_273cdc;
        case 0x273ce0u: goto label_273ce0;
        case 0x273ce4u: goto label_273ce4;
        case 0x273ce8u: goto label_273ce8;
        case 0x273cecu: goto label_273cec;
        case 0x273cf0u: goto label_273cf0;
        case 0x273cf4u: goto label_273cf4;
        case 0x273cf8u: goto label_273cf8;
        case 0x273cfcu: goto label_273cfc;
        case 0x273d00u: goto label_273d00;
        case 0x273d04u: goto label_273d04;
        case 0x273d08u: goto label_273d08;
        case 0x273d0cu: goto label_273d0c;
        case 0x273d10u: goto label_273d10;
        case 0x273d14u: goto label_273d14;
        case 0x273d18u: goto label_273d18;
        case 0x273d1cu: goto label_273d1c;
        case 0x273d20u: goto label_273d20;
        case 0x273d24u: goto label_273d24;
        case 0x273d28u: goto label_273d28;
        case 0x273d2cu: goto label_273d2c;
        case 0x273d30u: goto label_273d30;
        case 0x273d34u: goto label_273d34;
        case 0x273d38u: goto label_273d38;
        case 0x273d3cu: goto label_273d3c;
        case 0x273d40u: goto label_273d40;
        case 0x273d44u: goto label_273d44;
        case 0x273d48u: goto label_273d48;
        case 0x273d4cu: goto label_273d4c;
        case 0x273d50u: goto label_273d50;
        case 0x273d54u: goto label_273d54;
        case 0x273d58u: goto label_273d58;
        case 0x273d5cu: goto label_273d5c;
        case 0x273d60u: goto label_273d60;
        case 0x273d64u: goto label_273d64;
        case 0x273d68u: goto label_273d68;
        case 0x273d6cu: goto label_273d6c;
        case 0x273d70u: goto label_273d70;
        case 0x273d74u: goto label_273d74;
        case 0x273d78u: goto label_273d78;
        case 0x273d7cu: goto label_273d7c;
        case 0x273d80u: goto label_273d80;
        case 0x273d84u: goto label_273d84;
        case 0x273d88u: goto label_273d88;
        case 0x273d8cu: goto label_273d8c;
        case 0x273d90u: goto label_273d90;
        case 0x273d94u: goto label_273d94;
        case 0x273d98u: goto label_273d98;
        case 0x273d9cu: goto label_273d9c;
        case 0x273da0u: goto label_273da0;
        case 0x273da4u: goto label_273da4;
        case 0x273da8u: goto label_273da8;
        case 0x273dacu: goto label_273dac;
        case 0x273db0u: goto label_273db0;
        case 0x273db4u: goto label_273db4;
        case 0x273db8u: goto label_273db8;
        case 0x273dbcu: goto label_273dbc;
        case 0x273dc0u: goto label_273dc0;
        case 0x273dc4u: goto label_273dc4;
        case 0x273dc8u: goto label_273dc8;
        case 0x273dccu: goto label_273dcc;
        case 0x273dd0u: goto label_273dd0;
        case 0x273dd4u: goto label_273dd4;
        case 0x273dd8u: goto label_273dd8;
        case 0x273ddcu: goto label_273ddc;
        case 0x273de0u: goto label_273de0;
        case 0x273de4u: goto label_273de4;
        case 0x273de8u: goto label_273de8;
        case 0x273decu: goto label_273dec;
        case 0x273df0u: goto label_273df0;
        case 0x273df4u: goto label_273df4;
        case 0x273df8u: goto label_273df8;
        case 0x273dfcu: goto label_273dfc;
        default: return;
    }

label_273630:
    // 0x273630: 0xa1f7  .word       0x0000A1F7                   # INVALID     $zero, $zero, -0x5E09 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x273630 raw=0x0000A1F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273634:
    // 0x273634: 0xbbf0  tge         $zero, $zero, 751
    ctx->pc = 0x273634u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273638:
    // 0x273638: 0x0  nop
    ctx->pc = 0x273638u;
    // NOP
label_27363c:
    // 0x27363c: 0x0  nop
    ctx->pc = 0x27363cu;
    // NOP
label_273640:
    // 0x273640: 0xa20f  .word       0x0000A20F                   # sync # 0000A000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273640u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_273644:
    // 0x273644: 0x6fa0  .word       0x00006FA0                   # add         $t5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273644u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_273648:
    // 0x273648: 0x0  nop
    ctx->pc = 0x273648u;
    // NOP
label_27364c:
    // 0x27364c: 0x0  nop
    ctx->pc = 0x27364cu;
    // NOP
label_273650:
    // 0x273650: 0xa21d  .word       0x0000A21D                   # dmultu      $zero, $zero # 0000A200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273650u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x273650 raw=0x0000A21D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273654:
    // 0x273654: 0xd910  .word       0x0000D910                   # mfhi        $k1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273654u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_273658:
    // 0x273658: 0x0  nop
    ctx->pc = 0x273658u;
    // NOP
label_27365c:
    // 0x27365c: 0x0  nop
    ctx->pc = 0x27365cu;
    // NOP
label_273660:
    // 0x273660: 0xa239  .word       0x0000A239                   # INVALID     $zero, $zero, -0x5DC7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273660u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x273660 raw=0x0000A239"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273664:
    // 0x273664: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x273664u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_273668:
    // 0x273668: 0x0  nop
    ctx->pc = 0x273668u;
    // NOP
label_27366c:
    // 0x27366c: 0x0  nop
    ctx->pc = 0x27366cu;
    // NOP
label_273670:
    // 0x273670: 0xa252  .word       0x0000A252                   # mflo        $s4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273670u;
    SET_GPR_U64(ctx, 20, ctx->lo);
label_273674:
    // 0x273674: 0x8e10  .word       0x00008E10                   # mfhi        $s1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273674u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_273678:
    // 0x273678: 0x0  nop
    ctx->pc = 0x273678u;
    // NOP
label_27367c:
    // 0x27367c: 0x0  nop
    ctx->pc = 0x27367cu;
    // NOP
label_273680:
    // 0x273680: 0xa264  .word       0x0000A264                   # and         $s4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273680u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_273684:
    // 0x273684: 0x6800  sll         $t5, $zero, 0
    ctx->pc = 0x273684u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_273688:
    // 0x273688: 0x0  nop
    ctx->pc = 0x273688u;
    // NOP
label_27368c:
    // 0x27368c: 0x0  nop
    ctx->pc = 0x27368cu;
    // NOP
label_273690:
    // 0x273690: 0xa271  tgeu        $zero, $zero, 649
    ctx->pc = 0x273690u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273694:
    // 0x273694: 0x4300  sll         $t0, $zero, 12
    ctx->pc = 0x273694u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_273698:
    // 0x273698: 0x0  nop
    ctx->pc = 0x273698u;
    // NOP
label_27369c:
    // 0x27369c: 0x0  nop
    ctx->pc = 0x27369cu;
    // NOP
label_2736a0:
    // 0x2736a0: 0xa27a  dsrl        $s4, $zero, 9
    ctx->pc = 0x2736a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) >> 9);
label_2736a4:
    // 0x2736a4: 0x2640  sll         $a0, $zero, 25
    ctx->pc = 0x2736a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_2736a8:
    // 0x2736a8: 0x0  nop
    ctx->pc = 0x2736a8u;
    // NOP
label_2736ac:
    // 0x2736ac: 0x0  nop
    ctx->pc = 0x2736acu;
    // NOP
label_2736b0:
    // 0x2736b0: 0xa27f  dsra32      $s4, $zero, 9
    ctx->pc = 0x2736b0u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> (32 + 9));
label_2736b4:
    // 0x2736b4: 0x3310  .word       0x00003310                   # mfhi        $a2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2736b4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2736b8:
    // 0x2736b8: 0x0  nop
    ctx->pc = 0x2736b8u;
    // NOP
label_2736bc:
    // 0x2736bc: 0x0  nop
    ctx->pc = 0x2736bcu;
    // NOP
label_2736c0:
    // 0x2736c0: 0xa286  .word       0x0000A286                   # srlv        $s4, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2736c0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2736c4:
    // 0x2736c4: 0x6150  .word       0x00006150                   # mfhi        $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2736c4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2736c8:
    // 0x2736c8: 0x0  nop
    ctx->pc = 0x2736c8u;
    // NOP
label_2736cc:
    // 0x2736cc: 0x0  nop
    ctx->pc = 0x2736ccu;
    // NOP
label_2736d0:
    // 0x2736d0: 0xa293  .word       0x0000A293                   # mtlo        $zero # 0000A280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2736d0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2736d4:
    // 0x2736d4: 0x6d10  .word       0x00006D10                   # mfhi        $t5 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2736d4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2736d8:
    // 0x2736d8: 0x0  nop
    ctx->pc = 0x2736d8u;
    // NOP
label_2736dc:
    // 0x2736dc: 0x0  nop
    ctx->pc = 0x2736dcu;
    // NOP
label_2736e0:
    // 0x2736e0: 0xa2a1  .word       0x0000A2A1                   # addu        $s4, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2736e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2736e4:
    // 0x2736e4: 0x8120  .word       0x00008120                   # add         $s0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2736e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2736e8:
    // 0x2736e8: 0x0  nop
    ctx->pc = 0x2736e8u;
    // NOP
label_2736ec:
    // 0x2736ec: 0x0  nop
    ctx->pc = 0x2736ecu;
    // NOP
label_2736f0:
    // 0x2736f0: 0xa2b2  tlt         $zero, $zero, 650
    ctx->pc = 0x2736f0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2736f4:
    // 0x2736f4: 0x7a80  sll         $t7, $zero, 10
    ctx->pc = 0x2736f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2736f8:
    // 0x2736f8: 0x0  nop
    ctx->pc = 0x2736f8u;
    // NOP
label_2736fc:
    // 0x2736fc: 0x0  nop
    ctx->pc = 0x2736fcu;
    // NOP
label_273700:
    // 0x273700: 0xa2c2  srl         $s4, $zero, 11
    ctx->pc = 0x273700u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), 11));
label_273704:
    // 0x273704: 0x77b0  tge         $zero, $zero, 478
    ctx->pc = 0x273704u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273708:
    // 0x273708: 0x0  nop
    ctx->pc = 0x273708u;
    // NOP
label_27370c:
    // 0x27370c: 0x0  nop
    ctx->pc = 0x27370cu;
    // NOP
label_273710:
    // 0x273710: 0xa2d1  .word       0x0000A2D1                   # mthi        $zero # 0000A2C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273710u;
    ctx->hi = GPR_U64(ctx, 0);
label_273714:
    // 0x273714: 0xa5a0  .word       0x0000A5A0                   # add         $s4, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273714u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_273718:
    // 0x273718: 0x0  nop
    ctx->pc = 0x273718u;
    // NOP
label_27371c:
    // 0x27371c: 0x0  nop
    ctx->pc = 0x27371cu;
    // NOP
label_273720:
    // 0x273720: 0xa2e6  .word       0x0000A2E6                   # xor         $s4, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273720u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_273724:
    // 0x273724: 0x8900  sll         $s1, $zero, 4
    ctx->pc = 0x273724u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_273728:
    // 0x273728: 0x0  nop
    ctx->pc = 0x273728u;
    // NOP
label_27372c:
    // 0x27372c: 0x0  nop
    ctx->pc = 0x27372cu;
    // NOP
label_273730:
    // 0x273730: 0xa2f8  dsll        $s4, $zero, 11
    ctx->pc = 0x273730u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << 11);
label_273734:
    // 0x273734: 0x3f90  .word       0x00003F90                   # mfhi        $a3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273734u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_273738:
    // 0x273738: 0x0  nop
    ctx->pc = 0x273738u;
    // NOP
label_27373c:
    // 0x27373c: 0x0  nop
    ctx->pc = 0x27373cu;
    // NOP
label_273740:
    // 0x273740: 0xa300  sll         $s4, $zero, 12
    ctx->pc = 0x273740u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_273744:
    // 0x273744: 0x89a0  .word       0x000089A0                   # add         $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273744u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_273748:
    // 0x273748: 0x0  nop
    ctx->pc = 0x273748u;
    // NOP
label_27374c:
    // 0x27374c: 0x0  nop
    ctx->pc = 0x27374cu;
    // NOP
label_273750:
    // 0x273750: 0xa312  .word       0x0000A312                   # mflo        $s4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273750u;
    SET_GPR_U64(ctx, 20, ctx->lo);
label_273754:
    // 0x273754: 0x8940  sll         $s1, $zero, 5
    ctx->pc = 0x273754u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_273758:
    // 0x273758: 0x0  nop
    ctx->pc = 0x273758u;
    // NOP
label_27375c:
    // 0x27375c: 0x0  nop
    ctx->pc = 0x27375cu;
    // NOP
label_273760:
    // 0x273760: 0xa324  .word       0x0000A324                   # and         $s4, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273760u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_273764:
    // 0x273764: 0x86a0  .word       0x000086A0                   # add         $s0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273764u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_273768:
    // 0x273768: 0x0  nop
    ctx->pc = 0x273768u;
    // NOP
label_27376c:
    // 0x27376c: 0x0  nop
    ctx->pc = 0x27376cu;
    // NOP
label_273770:
    // 0x273770: 0xa335  .word       0x0000A335                   # INVALID     $zero, $zero, -0x5CCB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x273770 raw=0x0000A335"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273774:
    // 0x273774: 0xa210  .word       0x0000A210                   # mfhi        $s4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273774u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_273778:
    // 0x273778: 0x0  nop
    ctx->pc = 0x273778u;
    // NOP
label_27377c:
    // 0x27377c: 0x0  nop
    ctx->pc = 0x27377cu;
    // NOP
label_273780:
    // 0x273780: 0xa34a  .word       0x0000A34A                   # movz        $s4, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273780u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_273784:
    // 0x273784: 0x5910  .word       0x00005910                   # mfhi        $t3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273784u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_273788:
    // 0x273788: 0x0  nop
    ctx->pc = 0x273788u;
    // NOP
label_27378c:
    // 0x27378c: 0x0  nop
    ctx->pc = 0x27378cu;
    // NOP
label_273790:
    // 0x273790: 0xa356  .word       0x0000A356                   # dsrlv       $s4, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273790u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_273794:
    // 0x273794: 0x76e0  .word       0x000076E0                   # add         $t6, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273794u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_273798:
    // 0x273798: 0x0  nop
    ctx->pc = 0x273798u;
    // NOP
label_27379c:
    // 0x27379c: 0x0  nop
    ctx->pc = 0x27379cu;
    // NOP
label_2737a0:
    // 0x2737a0: 0xa365  .word       0x0000A365                   # move        $s4, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2737a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2737a4:
    // 0x2737a4: 0x7f90  .word       0x00007F90                   # mfhi        $t7 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2737a4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2737a8:
    // 0x2737a8: 0x0  nop
    ctx->pc = 0x2737a8u;
    // NOP
label_2737ac:
    // 0x2737ac: 0x0  nop
    ctx->pc = 0x2737acu;
    // NOP
label_2737b0:
    // 0x2737b0: 0xa375  .word       0x0000A375                   # INVALID     $zero, $zero, -0x5C8B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2737b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2737B0 raw=0x0000A375"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2737b4:
    // 0x2737b4: 0x9c90  .word       0x00009C90                   # mfhi        $s3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2737b4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2737b8:
    // 0x2737b8: 0x0  nop
    ctx->pc = 0x2737b8u;
    // NOP
label_2737bc:
    // 0x2737bc: 0x0  nop
    ctx->pc = 0x2737bcu;
    // NOP
label_2737c0:
    // 0x2737c0: 0xa389  .word       0x0000A389                   # jalr        $s4, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
label_2737c4:
    if (ctx->pc == 0x2737C4u) {
        ctx->pc = 0x2737C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737C0u;
        // 0x2737c4: 0x3030  tge         $zero, $zero, 192 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2737C8u;
        goto label_2737c8;
    }
    ctx->pc = 0x2737C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 20, 0x2737C8u);
        ctx->pc = 0x2737C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737C0u;
        // 0x2737c4: 0x3030  tge         $zero, $zero, 192 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2737C0u, 0x2737C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2737C8u;
label_2737c8:
    // 0x2737c8: 0x0  nop
    ctx->pc = 0x2737c8u;
    // NOP
label_2737cc:
    // 0x2737cc: 0x0  nop
    ctx->pc = 0x2737ccu;
    // NOP
label_2737d0:
    // 0x2737d0: 0xa390  .word       0x0000A390                   # mfhi        $s4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2737d0u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_2737d4:
    // 0x2737d4: 0x31f0  tge         $zero, $zero, 199
    ctx->pc = 0x2737d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2737d8:
    // 0x2737d8: 0x0  nop
    ctx->pc = 0x2737d8u;
    // NOP
label_2737dc:
    // 0x2737dc: 0x0  nop
    ctx->pc = 0x2737dcu;
    // NOP
label_2737e0:
    // 0x2737e0: 0xa397  .word       0x0000A397                   # dsrav       $s4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2737e0u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2737e4:
    // 0x2737e4: 0x7150  .word       0x00007150                   # mfhi        $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2737e4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2737e8:
    // 0x2737e8: 0x0  nop
    ctx->pc = 0x2737e8u;
    // NOP
label_2737ec:
    // 0x2737ec: 0x0  nop
    ctx->pc = 0x2737ecu;
    // NOP
label_2737f0:
    // 0x2737f0: 0xa3a6  .word       0x0000A3A6                   # xor         $s4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2737f0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2737f4:
    // 0x2737f4: 0x8c90  .word       0x00008C90                   # mfhi        $s1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2737f4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2737f8:
    // 0x2737f8: 0x0  nop
    ctx->pc = 0x2737f8u;
    // NOP
label_2737fc:
    // 0x2737fc: 0x0  nop
    ctx->pc = 0x2737fcu;
    // NOP
label_273800:
    // 0x273800: 0xa3b8  dsll        $s4, $zero, 14
    ctx->pc = 0x273800u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << 14);
label_273804:
    // 0x273804: 0x6430  tge         $zero, $zero, 400
    ctx->pc = 0x273804u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273808:
    // 0x273808: 0x0  nop
    ctx->pc = 0x273808u;
    // NOP
label_27380c:
    // 0x27380c: 0x0  nop
    ctx->pc = 0x27380cu;
    // NOP
label_273810:
    // 0x273810: 0xa3c5  .word       0x0000A3C5                   # INVALID     $zero, $zero, -0x5C3B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273810u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x273810 raw=0x0000A3C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273814:
    // 0x273814: 0x7310  .word       0x00007310                   # mfhi        $t6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273814u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_273818:
    // 0x273818: 0x0  nop
    ctx->pc = 0x273818u;
    // NOP
label_27381c:
    // 0x27381c: 0x0  nop
    ctx->pc = 0x27381cu;
    // NOP
label_273820:
    // 0x273820: 0xa3d4  .word       0x0000A3D4                   # dsllv       $s4, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273820u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_273824:
    // 0x273824: 0xb910  .word       0x0000B910                   # mfhi        $s7 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273824u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_273828:
    // 0x273828: 0x0  nop
    ctx->pc = 0x273828u;
    // NOP
label_27382c:
    // 0x27382c: 0x0  nop
    ctx->pc = 0x27382cu;
    // NOP
label_273830:
    // 0x273830: 0xa3ec  .word       0x0000A3EC                   # dadd        $s4, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273830u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, r); }
label_273834:
    // 0x273834: 0xa830  tge         $zero, $zero, 672
    ctx->pc = 0x273834u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273838:
    // 0x273838: 0x0  nop
    ctx->pc = 0x273838u;
    // NOP
label_27383c:
    // 0x27383c: 0x0  nop
    ctx->pc = 0x27383cu;
    // NOP
label_273840:
    // 0x273840: 0xa402  srl         $s4, $zero, 16
    ctx->pc = 0x273840u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), 16));
label_273844:
    // 0x273844: 0x3f00  sll         $a3, $zero, 28
    ctx->pc = 0x273844u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_273848:
    // 0x273848: 0x0  nop
    ctx->pc = 0x273848u;
    // NOP
label_27384c:
    // 0x27384c: 0x0  nop
    ctx->pc = 0x27384cu;
    // NOP
label_273850:
    // 0x273850: 0xa40a  .word       0x0000A40A                   # movz        $s4, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273850u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_273854:
    // 0x273854: 0x6ef0  tge         $zero, $zero, 443
    ctx->pc = 0x273854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273858:
    // 0x273858: 0x0  nop
    ctx->pc = 0x273858u;
    // NOP
label_27385c:
    // 0x27385c: 0x0  nop
    ctx->pc = 0x27385cu;
    // NOP
label_273860:
    // 0x273860: 0xa418  .word       0x0000A418                   # mult        $s4, $zero, $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x273860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_273864:
    // 0x273864: 0x55e0  .word       0x000055E0                   # add         $t2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273864u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_273868:
    // 0x273868: 0x0  nop
    ctx->pc = 0x273868u;
    // NOP
label_27386c:
    // 0x27386c: 0x0  nop
    ctx->pc = 0x27386cu;
    // NOP
label_273870:
    // 0x273870: 0xa423  .word       0x0000A423                   # negu        $s4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273870u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_273874:
    // 0x273874: 0x7550  .word       0x00007550                   # mfhi        $t6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273874u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_273878:
    // 0x273878: 0x0  nop
    ctx->pc = 0x273878u;
    // NOP
label_27387c:
    // 0x27387c: 0x0  nop
    ctx->pc = 0x27387cu;
    // NOP
label_273880:
    // 0x273880: 0xa432  tlt         $zero, $zero, 656
    ctx->pc = 0x273880u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273884:
    // 0x273884: 0x9d90  .word       0x00009D90                   # mfhi        $s3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273884u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_273888:
    // 0x273888: 0x0  nop
    ctx->pc = 0x273888u;
    // NOP
label_27388c:
    // 0x27388c: 0x0  nop
    ctx->pc = 0x27388cu;
    // NOP
label_273890:
    // 0x273890: 0xa446  .word       0x0000A446                   # srlv        $s4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273890u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_273894:
    // 0x273894: 0x62f0  tge         $zero, $zero, 395
    ctx->pc = 0x273894u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273898:
    // 0x273898: 0x0  nop
    ctx->pc = 0x273898u;
    // NOP
label_27389c:
    // 0x27389c: 0x0  nop
    ctx->pc = 0x27389cu;
    // NOP
label_2738a0:
    // 0x2738a0: 0xa453  .word       0x0000A453                   # mtlo        $zero # 0000A440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2738a0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2738a4:
    // 0x2738a4: 0x44c0  sll         $t0, $zero, 19
    ctx->pc = 0x2738a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2738a8:
    // 0x2738a8: 0x0  nop
    ctx->pc = 0x2738a8u;
    // NOP
label_2738ac:
    // 0x2738ac: 0x0  nop
    ctx->pc = 0x2738acu;
    // NOP
label_2738b0:
    // 0x2738b0: 0xa45c  .word       0x0000A45C                   # dmult       $zero, $zero # 0000A440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2738b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2738B0 raw=0x0000A45C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2738b4:
    // 0x2738b4: 0x3fc0  sll         $a3, $zero, 31
    ctx->pc = 0x2738b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2738b8:
    // 0x2738b8: 0x0  nop
    ctx->pc = 0x2738b8u;
    // NOP
label_2738bc:
    // 0x2738bc: 0x0  nop
    ctx->pc = 0x2738bcu;
    // NOP
label_2738c0:
    // 0x2738c0: 0xa464  .word       0x0000A464                   # and         $s4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2738c0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2738c4:
    // 0x2738c4: 0x9560  .word       0x00009560                   # add         $s2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2738c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2738c8:
    // 0x2738c8: 0x0  nop
    ctx->pc = 0x2738c8u;
    // NOP
label_2738cc:
    // 0x2738cc: 0x0  nop
    ctx->pc = 0x2738ccu;
    // NOP
label_2738d0:
    // 0x2738d0: 0xa477  .word       0x0000A477                   # INVALID     $zero, $zero, -0x5B89 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2738d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2738D0 raw=0x0000A477"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2738d4:
    // 0x2738d4: 0x5670  tge         $zero, $zero, 345
    ctx->pc = 0x2738d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2738d8:
    // 0x2738d8: 0x0  nop
    ctx->pc = 0x2738d8u;
    // NOP
label_2738dc:
    // 0x2738dc: 0x0  nop
    ctx->pc = 0x2738dcu;
    // NOP
label_2738e0:
    // 0x2738e0: 0xa482  srl         $s4, $zero, 18
    ctx->pc = 0x2738e0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), 18));
label_2738e4:
    // 0x2738e4: 0x5100  sll         $t2, $zero, 4
    ctx->pc = 0x2738e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2738e8:
    // 0x2738e8: 0x0  nop
    ctx->pc = 0x2738e8u;
    // NOP
label_2738ec:
    // 0x2738ec: 0x0  nop
    ctx->pc = 0x2738ecu;
    // NOP
label_2738f0:
    // 0x2738f0: 0xa48d  break       0, 658
    ctx->pc = 0x2738f0u;
    runtime->handleBreak(rdram, ctx);
label_2738f4:
    // 0x2738f4: 0x51c0  sll         $t2, $zero, 7
    ctx->pc = 0x2738f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_2738f8:
    // 0x2738f8: 0x0  nop
    ctx->pc = 0x2738f8u;
    // NOP
label_2738fc:
    // 0x2738fc: 0x0  nop
    ctx->pc = 0x2738fcu;
    // NOP
label_273900:
    // 0x273900: 0xa498  .word       0x0000A498                   # mult        $s4, $zero, $zero # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x273900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_273904:
    // 0x273904: 0x3b00  sll         $a3, $zero, 12
    ctx->pc = 0x273904u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_273908:
    // 0x273908: 0x0  nop
    ctx->pc = 0x273908u;
    // NOP
label_27390c:
    // 0x27390c: 0x0  nop
    ctx->pc = 0x27390cu;
    // NOP
label_273910:
    // 0x273910: 0xa4a0  .word       0x0000A4A0                   # add         $s4, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273910u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_273914:
    // 0x273914: 0x42e0  .word       0x000042E0                   # add         $t0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273914u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_273918:
    // 0x273918: 0x0  nop
    ctx->pc = 0x273918u;
    // NOP
label_27391c:
    // 0x27391c: 0x0  nop
    ctx->pc = 0x27391cu;
    // NOP
label_273920:
    // 0x273920: 0xa4a9  .word       0x0000A4A9                   # mtsa        $zero # 0000A480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x273920u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_273924:
    // 0x273924: 0x3b70  tge         $zero, $zero, 237
    ctx->pc = 0x273924u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273928:
    // 0x273928: 0x0  nop
    ctx->pc = 0x273928u;
    // NOP
label_27392c:
    // 0x27392c: 0x0  nop
    ctx->pc = 0x27392cu;
    // NOP
label_273930:
    // 0x273930: 0xa4b1  tgeu        $zero, $zero, 658
    ctx->pc = 0x273930u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273934:
    // 0x273934: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273934u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_273938:
    // 0x273938: 0x0  nop
    ctx->pc = 0x273938u;
    // NOP
label_27393c:
    // 0x27393c: 0x0  nop
    ctx->pc = 0x27393cu;
    // NOP
label_273940:
    // 0x273940: 0xa4c0  sll         $s4, $zero, 19
    ctx->pc = 0x273940u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_273944:
    // 0x273944: 0x3dd0  .word       0x00003DD0                   # mfhi        $a3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273944u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_273948:
    // 0x273948: 0x0  nop
    ctx->pc = 0x273948u;
    // NOP
label_27394c:
    // 0x27394c: 0x0  nop
    ctx->pc = 0x27394cu;
    // NOP
label_273950:
    // 0x273950: 0xa4c8  .word       0x0000A4C8                   # jr          $zero # 0000A4C0 <InstrIdType: CPU_SPECIAL>
label_273954:
    if (ctx->pc == 0x273954u) {
        ctx->pc = 0x273954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273950u;
        // 0x273954: 0x6880  sll         $t5, $zero, 2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273958u;
        goto label_273958;
    }
    ctx->pc = 0x273950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x273954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273950u;
        // 0x273954: 0x6880  sll         $t5, $zero, 2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273950u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273958u;
label_273958:
    // 0x273958: 0x0  nop
    ctx->pc = 0x273958u;
    // NOP
label_27395c:
    // 0x27395c: 0x0  nop
    ctx->pc = 0x27395cu;
    // NOP
label_273960:
    // 0x273960: 0xa4d6  .word       0x0000A4D6                   # dsrlv       $s4, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273960u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_273964:
    // 0x273964: 0x4cc0  sll         $t1, $zero, 19
    ctx->pc = 0x273964u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_273968:
    // 0x273968: 0x0  nop
    ctx->pc = 0x273968u;
    // NOP
label_27396c:
    // 0x27396c: 0x0  nop
    ctx->pc = 0x27396cu;
    // NOP
label_273970:
    // 0x273970: 0xa4e0  .word       0x0000A4E0                   # add         $s4, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273970u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_273974:
    // 0x273974: 0x3ed0  .word       0x00003ED0                   # mfhi        $a3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273974u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_273978:
    // 0x273978: 0x0  nop
    ctx->pc = 0x273978u;
    // NOP
label_27397c:
    // 0x27397c: 0x0  nop
    ctx->pc = 0x27397cu;
    // NOP
label_273980:
    // 0x273980: 0xa4e8  .word       0x0000A4E8                   # mfsa        $s4 # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x273980u;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_273984:
    // 0x273984: 0x4530  tge         $zero, $zero, 276
    ctx->pc = 0x273984u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273988:
    // 0x273988: 0x0  nop
    ctx->pc = 0x273988u;
    // NOP
label_27398c:
    // 0x27398c: 0x0  nop
    ctx->pc = 0x27398cu;
    // NOP
label_273990:
    // 0x273990: 0xa4f1  tgeu        $zero, $zero, 659
    ctx->pc = 0x273990u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273994:
    // 0x273994: 0x57b0  tge         $zero, $zero, 350
    ctx->pc = 0x273994u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273998:
    // 0x273998: 0x0  nop
    ctx->pc = 0x273998u;
    // NOP
label_27399c:
    // 0x27399c: 0x0  nop
    ctx->pc = 0x27399cu;
    // NOP
label_2739a0:
    // 0x2739a0: 0xa4fc  dsll32      $s4, $zero, 19
    ctx->pc = 0x2739a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << (32 + 19));
label_2739a4:
    // 0x2739a4: 0x4f00  sll         $t1, $zero, 28
    ctx->pc = 0x2739a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_2739a8:
    // 0x2739a8: 0x0  nop
    ctx->pc = 0x2739a8u;
    // NOP
label_2739ac:
    // 0x2739ac: 0x0  nop
    ctx->pc = 0x2739acu;
    // NOP
label_2739b0:
    // 0x2739b0: 0xa506  .word       0x0000A506                   # srlv        $s4, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2739b0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2739b4:
    // 0x2739b4: 0x5d00  sll         $t3, $zero, 20
    ctx->pc = 0x2739b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2739b8:
    // 0x2739b8: 0x0  nop
    ctx->pc = 0x2739b8u;
    // NOP
label_2739bc:
    // 0x2739bc: 0x0  nop
    ctx->pc = 0x2739bcu;
    // NOP
label_2739c0:
    // 0x2739c0: 0xa512  .word       0x0000A512                   # mflo        $s4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2739c0u;
    SET_GPR_U64(ctx, 20, ctx->lo);
label_2739c4:
    // 0x2739c4: 0x3880  sll         $a3, $zero, 2
    ctx->pc = 0x2739c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2739c8:
    // 0x2739c8: 0x0  nop
    ctx->pc = 0x2739c8u;
    // NOP
label_2739cc:
    // 0x2739cc: 0x0  nop
    ctx->pc = 0x2739ccu;
    // NOP
label_2739d0:
    // 0x2739d0: 0xa51a  .word       0x0000A51A                   # div         $s4, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2739d0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2739d4:
    // 0x2739d4: 0x4550  .word       0x00004550                   # mfhi        $t0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2739d4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2739d8:
    // 0x2739d8: 0x0  nop
    ctx->pc = 0x2739d8u;
    // NOP
label_2739dc:
    // 0x2739dc: 0x0  nop
    ctx->pc = 0x2739dcu;
    // NOP
label_2739e0:
    // 0x2739e0: 0xa523  .word       0x0000A523                   # negu        $s4, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2739e0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2739e4:
    // 0x2739e4: 0x8140  sll         $s0, $zero, 5
    ctx->pc = 0x2739e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2739e8:
    // 0x2739e8: 0x0  nop
    ctx->pc = 0x2739e8u;
    // NOP
label_2739ec:
    // 0x2739ec: 0x0  nop
    ctx->pc = 0x2739ecu;
    // NOP
label_2739f0:
    // 0x2739f0: 0xa534  teq         $zero, $zero, 660
    ctx->pc = 0x2739f0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2739f4:
    // 0x2739f4: 0x4630  tge         $zero, $zero, 280
    ctx->pc = 0x2739f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2739f8:
    // 0x2739f8: 0x0  nop
    ctx->pc = 0x2739f8u;
    // NOP
label_2739fc:
    // 0x2739fc: 0x0  nop
    ctx->pc = 0x2739fcu;
    // NOP
label_273a00:
    // 0x273a00: 0xa53d  .word       0x0000A53D                   # INVALID     $zero, $zero, -0x5AC3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x273A00 raw=0x0000A53D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273a04:
    // 0x273a04: 0x9d70  tge         $zero, $zero, 629
    ctx->pc = 0x273a04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a08:
    // 0x273a08: 0x0  nop
    ctx->pc = 0x273a08u;
    // NOP
label_273a0c:
    // 0x273a0c: 0x0  nop
    ctx->pc = 0x273a0cu;
    // NOP
label_273a10:
    // 0x273a10: 0xa551  .word       0x0000A551                   # mthi        $zero # 0000A540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a10u;
    ctx->hi = GPR_U64(ctx, 0);
label_273a14:
    // 0x273a14: 0xa230  tge         $zero, $zero, 648
    ctx->pc = 0x273a14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a18:
    // 0x273a18: 0x0  nop
    ctx->pc = 0x273a18u;
    // NOP
label_273a1c:
    // 0x273a1c: 0x0  nop
    ctx->pc = 0x273a1cu;
    // NOP
label_273a20:
    // 0x273a20: 0xa566  .word       0x0000A566                   # xor         $s4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a20u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_273a24:
    // 0x273a24: 0x7030  tge         $zero, $zero, 448
    ctx->pc = 0x273a24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a28:
    // 0x273a28: 0x0  nop
    ctx->pc = 0x273a28u;
    // NOP
label_273a2c:
    // 0x273a2c: 0x0  nop
    ctx->pc = 0x273a2cu;
    // NOP
label_273a30:
    // 0x273a30: 0xa575  .word       0x0000A575                   # INVALID     $zero, $zero, -0x5A8B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x273A30 raw=0x0000A575"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273a34:
    // 0x273a34: 0x4de0  .word       0x00004DE0                   # add         $t1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_273a38:
    // 0x273a38: 0x0  nop
    ctx->pc = 0x273a38u;
    // NOP
label_273a3c:
    // 0x273a3c: 0x0  nop
    ctx->pc = 0x273a3cu;
    // NOP
label_273a40:
    // 0x273a40: 0xa57f  dsra32      $s4, $zero, 21
    ctx->pc = 0x273a40u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> (32 + 21));
label_273a44:
    // 0x273a44: 0x6a30  tge         $zero, $zero, 424
    ctx->pc = 0x273a44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a48:
    // 0x273a48: 0x0  nop
    ctx->pc = 0x273a48u;
    // NOP
label_273a4c:
    // 0x273a4c: 0x0  nop
    ctx->pc = 0x273a4cu;
    // NOP
label_273a50:
    // 0x273a50: 0xa58d  break       0, 662
    ctx->pc = 0x273a50u;
    runtime->handleBreak(rdram, ctx);
label_273a54:
    // 0x273a54: 0x3700  sll         $a2, $zero, 28
    ctx->pc = 0x273a54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_273a58:
    // 0x273a58: 0x0  nop
    ctx->pc = 0x273a58u;
    // NOP
label_273a5c:
    // 0x273a5c: 0x0  nop
    ctx->pc = 0x273a5cu;
    // NOP
label_273a60:
    // 0x273a60: 0xa594  .word       0x0000A594                   # dsllv       $s4, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a60u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_273a64:
    // 0x273a64: 0x3880  sll         $a3, $zero, 2
    ctx->pc = 0x273a64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_273a68:
    // 0x273a68: 0x0  nop
    ctx->pc = 0x273a68u;
    // NOP
label_273a6c:
    // 0x273a6c: 0x0  nop
    ctx->pc = 0x273a6cu;
    // NOP
label_273a70:
    // 0x273a70: 0xa59c  .word       0x0000A59C                   # dmult       $zero, $zero # 0000A580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x273A70 raw=0x0000A59C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273a74:
    // 0x273a74: 0x3b70  tge         $zero, $zero, 237
    ctx->pc = 0x273a74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a78:
    // 0x273a78: 0x0  nop
    ctx->pc = 0x273a78u;
    // NOP
label_273a7c:
    // 0x273a7c: 0x0  nop
    ctx->pc = 0x273a7cu;
    // NOP
label_273a80:
    // 0x273a80: 0xa5a4  .word       0x0000A5A4                   # and         $s4, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a80u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_273a84:
    // 0x273a84: 0x7890  .word       0x00007890                   # mfhi        $t7 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273a84u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_273a88:
    // 0x273a88: 0x0  nop
    ctx->pc = 0x273a88u;
    // NOP
label_273a8c:
    // 0x273a8c: 0x0  nop
    ctx->pc = 0x273a8cu;
    // NOP
label_273a90:
    // 0x273a90: 0xa5b4  teq         $zero, $zero, 662
    ctx->pc = 0x273a90u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a94:
    // 0x273a94: 0x6af0  tge         $zero, $zero, 427
    ctx->pc = 0x273a94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273a98:
    // 0x273a98: 0x0  nop
    ctx->pc = 0x273a98u;
    // NOP
label_273a9c:
    // 0x273a9c: 0x0  nop
    ctx->pc = 0x273a9cu;
    // NOP
label_273aa0:
    // 0x273aa0: 0xa5c2  srl         $s4, $zero, 23
    ctx->pc = 0x273aa0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), 23));
label_273aa4:
    // 0x273aa4: 0x3de0  .word       0x00003DE0                   # add         $a3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273aa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_273aa8:
    // 0x273aa8: 0x0  nop
    ctx->pc = 0x273aa8u;
    // NOP
label_273aac:
    // 0x273aac: 0x0  nop
    ctx->pc = 0x273aacu;
    // NOP
label_273ab0:
    // 0x273ab0: 0xa5ca  .word       0x0000A5CA                   # movz        $s4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ab0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_273ab4:
    // 0x273ab4: 0x59f0  tge         $zero, $zero, 359
    ctx->pc = 0x273ab4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273ab8:
    // 0x273ab8: 0x0  nop
    ctx->pc = 0x273ab8u;
    // NOP
label_273abc:
    // 0x273abc: 0x0  nop
    ctx->pc = 0x273abcu;
    // NOP
label_273ac0:
    // 0x273ac0: 0xa5d6  .word       0x0000A5D6                   # dsrlv       $s4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ac0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_273ac4:
    // 0x273ac4: 0x86a0  .word       0x000086A0                   # add         $s0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_273ac8:
    // 0x273ac8: 0x0  nop
    ctx->pc = 0x273ac8u;
    // NOP
label_273acc:
    // 0x273acc: 0x0  nop
    ctx->pc = 0x273accu;
    // NOP
label_273ad0:
    // 0x273ad0: 0xa5e7  .word       0x0000A5E7                   # not         $s4, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ad0u;
    SET_GPR_U64(ctx, 20, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_273ad4:
    // 0x273ad4: 0x4900  sll         $t1, $zero, 4
    ctx->pc = 0x273ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_273ad8:
    // 0x273ad8: 0x0  nop
    ctx->pc = 0x273ad8u;
    // NOP
label_273adc:
    // 0x273adc: 0x0  nop
    ctx->pc = 0x273adcu;
    // NOP
label_273ae0:
    // 0x273ae0: 0xa5f1  tgeu        $zero, $zero, 663
    ctx->pc = 0x273ae0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273ae4:
    // 0x273ae4: 0x5910  .word       0x00005910                   # mfhi        $t3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ae4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_273ae8:
    // 0x273ae8: 0x0  nop
    ctx->pc = 0x273ae8u;
    // NOP
label_273aec:
    // 0x273aec: 0x0  nop
    ctx->pc = 0x273aecu;
    // NOP
label_273af0:
    // 0x273af0: 0xa5fd  .word       0x0000A5FD                   # INVALID     $zero, $zero, -0x5A03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273af0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x273AF0 raw=0x0000A5FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273af4:
    // 0x273af4: 0x5990  .word       0x00005990                   # mfhi        $t3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273af4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_273af8:
    // 0x273af8: 0x0  nop
    ctx->pc = 0x273af8u;
    // NOP
label_273afc:
    // 0x273afc: 0x0  nop
    ctx->pc = 0x273afcu;
    // NOP
label_273b00:
    // 0x273b00: 0xa609  .word       0x0000A609                   # jalr        $s4, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
label_273b04:
    if (ctx->pc == 0x273B04u) {
        ctx->pc = 0x273B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B00u;
        // 0x273b04: 0x5df0  tge         $zero, $zero, 375 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x273B08u;
        goto label_273b08;
    }
    ctx->pc = 0x273B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 20, 0x273B08u);
        ctx->pc = 0x273B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B00u;
        // 0x273b04: 0x5df0  tge         $zero, $zero, 375 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273B00u, 0x273B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273B08u;
label_273b08:
    // 0x273b08: 0x0  nop
    ctx->pc = 0x273b08u;
    // NOP
label_273b0c:
    // 0x273b0c: 0x0  nop
    ctx->pc = 0x273b0cu;
    // NOP
label_273b10:
    // 0x273b10: 0xa615  .word       0x0000A615                   # INVALID     $zero, $zero, -0x59EB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x273B10 raw=0x0000A615"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273b14:
    // 0x273b14: 0x7f00  sll         $t7, $zero, 28
    ctx->pc = 0x273b14u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_273b18:
    // 0x273b18: 0x0  nop
    ctx->pc = 0x273b18u;
    // NOP
label_273b1c:
    // 0x273b1c: 0x0  nop
    ctx->pc = 0x273b1cu;
    // NOP
label_273b20:
    // 0x273b20: 0xa625  .word       0x0000A625                   # move        $s4, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b20u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_273b24:
    // 0x273b24: 0x6f30  tge         $zero, $zero, 444
    ctx->pc = 0x273b24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273b28:
    // 0x273b28: 0x0  nop
    ctx->pc = 0x273b28u;
    // NOP
label_273b2c:
    // 0x273b2c: 0x0  nop
    ctx->pc = 0x273b2cu;
    // NOP
label_273b30:
    // 0x273b30: 0xa633  tltu        $zero, $zero, 664
    ctx->pc = 0x273b30u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273b34:
    // 0x273b34: 0x4880  sll         $t1, $zero, 2
    ctx->pc = 0x273b34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_273b38:
    // 0x273b38: 0x0  nop
    ctx->pc = 0x273b38u;
    // NOP
label_273b3c:
    // 0x273b3c: 0x0  nop
    ctx->pc = 0x273b3cu;
    // NOP
label_273b40:
    // 0x273b40: 0xa63d  .word       0x0000A63D                   # INVALID     $zero, $zero, -0x59C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x273B40 raw=0x0000A63D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273b44:
    // 0x273b44: 0x3ac0  sll         $a3, $zero, 11
    ctx->pc = 0x273b44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_273b48:
    // 0x273b48: 0x0  nop
    ctx->pc = 0x273b48u;
    // NOP
label_273b4c:
    // 0x273b4c: 0x0  nop
    ctx->pc = 0x273b4cu;
    // NOP
label_273b50:
    // 0x273b50: 0xa645  .word       0x0000A645                   # INVALID     $zero, $zero, -0x59BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x273B50 raw=0x0000A645"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273b54:
    // 0x273b54: 0x5030  tge         $zero, $zero, 320
    ctx->pc = 0x273b54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273b58:
    // 0x273b58: 0x0  nop
    ctx->pc = 0x273b58u;
    // NOP
label_273b5c:
    // 0x273b5c: 0x0  nop
    ctx->pc = 0x273b5cu;
    // NOP
label_273b60:
    // 0x273b60: 0xa650  .word       0x0000A650                   # mfhi        $s4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b60u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_273b64:
    // 0x273b64: 0xaf60  .word       0x0000AF60                   # add         $s5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_273b68:
    // 0x273b68: 0x0  nop
    ctx->pc = 0x273b68u;
    // NOP
label_273b6c:
    // 0x273b6c: 0x0  nop
    ctx->pc = 0x273b6cu;
    // NOP
label_273b70:
    // 0x273b70: 0xa666  .word       0x0000A666                   # xor         $s4, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b70u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_273b74:
    // 0x273b74: 0x30e0  .word       0x000030E0                   # add         $a2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_273b78:
    // 0x273b78: 0x0  nop
    ctx->pc = 0x273b78u;
    // NOP
label_273b7c:
    // 0x273b7c: 0x0  nop
    ctx->pc = 0x273b7cu;
    // NOP
label_273b80:
    // 0x273b80: 0xa66d  .word       0x0000A66D                   # daddu       $s4, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273b84:
    // 0x273b84: 0x3430  tge         $zero, $zero, 208
    ctx->pc = 0x273b84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273b88:
    // 0x273b88: 0x0  nop
    ctx->pc = 0x273b88u;
    // NOP
label_273b8c:
    // 0x273b8c: 0x0  nop
    ctx->pc = 0x273b8cu;
    // NOP
label_273b90:
    // 0x273b90: 0xa674  teq         $zero, $zero, 665
    ctx->pc = 0x273b90u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273b94:
    // 0x273b94: 0xd890  .word       0x0000D890                   # mfhi        $k1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273b94u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_273b98:
    // 0x273b98: 0x0  nop
    ctx->pc = 0x273b98u;
    // NOP
label_273b9c:
    // 0x273b9c: 0x0  nop
    ctx->pc = 0x273b9cu;
    // NOP
label_273ba0:
    // 0x273ba0: 0xa690  .word       0x0000A690                   # mfhi        $s4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ba0u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_273ba4:
    // 0x273ba4: 0xd160  .word       0x0000D160                   # add         $k0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_273ba8:
    // 0x273ba8: 0x0  nop
    ctx->pc = 0x273ba8u;
    // NOP
label_273bac:
    // 0x273bac: 0x0  nop
    ctx->pc = 0x273bacu;
    // NOP
label_273bb0:
    // 0x273bb0: 0xa6ab  .word       0x0000A6AB                   # sltu        $s4, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273bb0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_273bb4:
    // 0x273bb4: 0xb7d0  .word       0x0000B7D0                   # mfhi        $s6 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273bb4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_273bb8:
    // 0x273bb8: 0x0  nop
    ctx->pc = 0x273bb8u;
    // NOP
label_273bbc:
    // 0x273bbc: 0x0  nop
    ctx->pc = 0x273bbcu;
    // NOP
label_273bc0:
    // 0x273bc0: 0xa6c2  srl         $s4, $zero, 27
    ctx->pc = 0x273bc0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), 27));
label_273bc4:
    // 0x273bc4: 0x9470  tge         $zero, $zero, 593
    ctx->pc = 0x273bc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273bc8:
    // 0x273bc8: 0x0  nop
    ctx->pc = 0x273bc8u;
    // NOP
label_273bcc:
    // 0x273bcc: 0x0  nop
    ctx->pc = 0x273bccu;
    // NOP
label_273bd0:
    // 0x273bd0: 0xa6d5  .word       0x0000A6D5                   # INVALID     $zero, $zero, -0x592B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273bd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x273BD0 raw=0x0000A6D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273bd4:
    // 0x273bd4: 0xd7a0  .word       0x0000D7A0                   # add         $k0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273bd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_273bd8:
    // 0x273bd8: 0x0  nop
    ctx->pc = 0x273bd8u;
    // NOP
label_273bdc:
    // 0x273bdc: 0x0  nop
    ctx->pc = 0x273bdcu;
    // NOP
label_273be0:
    // 0x273be0: 0xa6f0  tge         $zero, $zero, 667
    ctx->pc = 0x273be0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273be4:
    // 0x273be4: 0xe550  .word       0x0000E550                   # mfhi        $gp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273be4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_273be8:
    // 0x273be8: 0x0  nop
    ctx->pc = 0x273be8u;
    // NOP
label_273bec:
    // 0x273bec: 0x0  nop
    ctx->pc = 0x273becu;
    // NOP
label_273bf0:
    // 0x273bf0: 0xa70d  break       0, 668
    ctx->pc = 0x273bf0u;
    runtime->handleBreak(rdram, ctx);
label_273bf4:
    // 0x273bf4: 0x13c30  tge         $zero, $at, 240
    ctx->pc = 0x273bf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_273bf8:
    // 0x273bf8: 0x0  nop
    ctx->pc = 0x273bf8u;
    // NOP
label_273bfc:
    // 0x273bfc: 0x0  nop
    ctx->pc = 0x273bfcu;
    // NOP
label_273c00:
    // 0x273c00: 0xa735  .word       0x0000A735                   # INVALID     $zero, $zero, -0x58CB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x273C00 raw=0x0000A735"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273c04:
    // 0x273c04: 0x10c50  .word       0x00010C50                   # mfhi        $at # 00010440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c04u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_273c08:
    // 0x273c08: 0x0  nop
    ctx->pc = 0x273c08u;
    // NOP
label_273c0c:
    // 0x273c0c: 0x0  nop
    ctx->pc = 0x273c0cu;
    // NOP
label_273c10:
    // 0x273c10: 0xa757  .word       0x0000A757                   # dsrav       $s4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c10u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_273c14:
    // 0x273c14: 0x6a90  .word       0x00006A90                   # mfhi        $t5 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c14u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_273c18:
    // 0x273c18: 0x0  nop
    ctx->pc = 0x273c18u;
    // NOP
label_273c1c:
    // 0x273c1c: 0x0  nop
    ctx->pc = 0x273c1cu;
    // NOP
label_273c20:
    // 0x273c20: 0xa765  .word       0x0000A765                   # move        $s4, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c20u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_273c24:
    // 0x273c24: 0xb4c0  sll         $s6, $zero, 19
    ctx->pc = 0x273c24u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_273c28:
    // 0x273c28: 0x0  nop
    ctx->pc = 0x273c28u;
    // NOP
label_273c2c:
    // 0x273c2c: 0x0  nop
    ctx->pc = 0x273c2cu;
    // NOP
label_273c30:
    // 0x273c30: 0xa77c  dsll32      $s4, $zero, 29
    ctx->pc = 0x273c30u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << (32 + 29));
label_273c34:
    // 0x273c34: 0x161e0  .word       0x000161E0                   # add         $t4, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_273c38:
    // 0x273c38: 0x0  nop
    ctx->pc = 0x273c38u;
    // NOP
label_273c3c:
    // 0x273c3c: 0x0  nop
    ctx->pc = 0x273c3cu;
    // NOP
label_273c40:
    // 0x273c40: 0xa7a9  .word       0x0000A7A9                   # mtsa        $zero # 0000A780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x273c40u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_273c44:
    // 0x273c44: 0xa990  .word       0x0000A990                   # mfhi        $s5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c44u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_273c48:
    // 0x273c48: 0x0  nop
    ctx->pc = 0x273c48u;
    // NOP
label_273c4c:
    // 0x273c4c: 0x0  nop
    ctx->pc = 0x273c4cu;
    // NOP
label_273c50:
    // 0x273c50: 0xa7bf  dsra32      $s4, $zero, 30
    ctx->pc = 0x273c50u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 0) >> (32 + 30));
label_273c54:
    // 0x273c54: 0xd670  tge         $zero, $zero, 857
    ctx->pc = 0x273c54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273c58:
    // 0x273c58: 0x0  nop
    ctx->pc = 0x273c58u;
    // NOP
label_273c5c:
    // 0x273c5c: 0x0  nop
    ctx->pc = 0x273c5cu;
    // NOP
label_273c60:
    // 0x273c60: 0xa7da  .word       0x0000A7DA                   # div         $s4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c60u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_273c64:
    // 0x273c64: 0xcec0  sll         $t9, $zero, 27
    ctx->pc = 0x273c64u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_273c68:
    // 0x273c68: 0x0  nop
    ctx->pc = 0x273c68u;
    // NOP
label_273c6c:
    // 0x273c6c: 0x0  nop
    ctx->pc = 0x273c6cu;
    // NOP
label_273c70:
    // 0x273c70: 0xa7f4  teq         $zero, $zero, 671
    ctx->pc = 0x273c70u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273c74:
    // 0x273c74: 0xa8f0  tge         $zero, $zero, 675
    ctx->pc = 0x273c74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273c78:
    // 0x273c78: 0x0  nop
    ctx->pc = 0x273c78u;
    // NOP
label_273c7c:
    // 0x273c7c: 0x0  nop
    ctx->pc = 0x273c7cu;
    // NOP
label_273c80:
    // 0x273c80: 0xa80a  movz        $s5, $zero, $zero
    ctx->pc = 0x273c80u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273c84:
    // 0x273c84: 0xf550  .word       0x0000F550                   # mfhi        $fp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273c84u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_273c88:
    // 0x273c88: 0x0  nop
    ctx->pc = 0x273c88u;
    // NOP
label_273c8c:
    // 0x273c8c: 0x0  nop
    ctx->pc = 0x273c8cu;
    // NOP
label_273c90:
    // 0x273c90: 0xa829  .word       0x0000A829                   # mtsa        $zero # 0000A800 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x273c90u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_273c94:
    // 0x273c94: 0xe0c0  sll         $gp, $zero, 3
    ctx->pc = 0x273c94u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_273c98:
    // 0x273c98: 0x0  nop
    ctx->pc = 0x273c98u;
    // NOP
label_273c9c:
    // 0x273c9c: 0x0  nop
    ctx->pc = 0x273c9cu;
    // NOP
label_273ca0:
    // 0x273ca0: 0xa846  .word       0x0000A846                   # srlv        $s5, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ca0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_273ca4:
    // 0x273ca4: 0xe3c0  sll         $gp, $zero, 15
    ctx->pc = 0x273ca4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_273ca8:
    // 0x273ca8: 0x0  nop
    ctx->pc = 0x273ca8u;
    // NOP
label_273cac:
    // 0x273cac: 0x0  nop
    ctx->pc = 0x273cacu;
    // NOP
label_273cb0:
    // 0x273cb0: 0xa863  .word       0x0000A863                   # negu        $s5, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273cb0u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_273cb4:
    // 0x273cb4: 0x111c0  sll         $v0, $at, 7
    ctx->pc = 0x273cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 7));
label_273cb8:
    // 0x273cb8: 0x0  nop
    ctx->pc = 0x273cb8u;
    // NOP
label_273cbc:
    // 0x273cbc: 0x0  nop
    ctx->pc = 0x273cbcu;
    // NOP
label_273cc0:
    // 0x273cc0: 0xa886  .word       0x0000A886                   # srlv        $s5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273cc0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_273cc4:
    // 0x273cc4: 0xd020  add         $k0, $zero, $zero
    ctx->pc = 0x273cc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_273cc8:
    // 0x273cc8: 0x0  nop
    ctx->pc = 0x273cc8u;
    // NOP
label_273ccc:
    // 0x273ccc: 0x0  nop
    ctx->pc = 0x273cccu;
    // NOP
label_273cd0:
    // 0x273cd0: 0xa8a1  .word       0x0000A8A1                   # addu        $s5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273cd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_273cd4:
    // 0x273cd4: 0x144c0  sll         $t0, $at, 19
    ctx->pc = 0x273cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
label_273cd8:
    // 0x273cd8: 0x0  nop
    ctx->pc = 0x273cd8u;
    // NOP
label_273cdc:
    // 0x273cdc: 0x0  nop
    ctx->pc = 0x273cdcu;
    // NOP
label_273ce0:
    // 0x273ce0: 0xa8ca  .word       0x0000A8CA                   # movz        $s5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273ce0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273ce4:
    // 0x273ce4: 0x9380  sll         $s2, $zero, 14
    ctx->pc = 0x273ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_273ce8:
    // 0x273ce8: 0x0  nop
    ctx->pc = 0x273ce8u;
    // NOP
label_273cec:
    // 0x273cec: 0x0  nop
    ctx->pc = 0x273cecu;
    // NOP
label_273cf0:
    // 0x273cf0: 0xa8dd  .word       0x0000A8DD                   # dmultu      $zero, $zero # 0000A8C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273cf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x273CF0 raw=0x0000A8DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273cf4:
    // 0x273cf4: 0xe7f0  tge         $zero, $zero, 927
    ctx->pc = 0x273cf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273cf8:
    // 0x273cf8: 0x0  nop
    ctx->pc = 0x273cf8u;
    // NOP
label_273cfc:
    // 0x273cfc: 0x0  nop
    ctx->pc = 0x273cfcu;
    // NOP
label_273d00:
    // 0x273d00: 0xa8fa  dsrl        $s5, $zero, 3
    ctx->pc = 0x273d00u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) >> 3);
label_273d04:
    // 0x273d04: 0x16450  .word       0x00016450                   # mfhi        $t4 # 00010440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d04u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_273d08:
    // 0x273d08: 0x0  nop
    ctx->pc = 0x273d08u;
    // NOP
label_273d0c:
    // 0x273d0c: 0x0  nop
    ctx->pc = 0x273d0cu;
    // NOP
label_273d10:
    // 0x273d10: 0xa927  .word       0x0000A927                   # not         $s5, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d10u;
    SET_GPR_U64(ctx, 21, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_273d14:
    // 0x273d14: 0x118d0  .word       0x000118D0                   # mfhi        $v1 # 000100C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d14u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_273d18:
    // 0x273d18: 0x0  nop
    ctx->pc = 0x273d18u;
    // NOP
label_273d1c:
    // 0x273d1c: 0x0  nop
    ctx->pc = 0x273d1cu;
    // NOP
label_273d20:
    // 0x273d20: 0xa94b  .word       0x0000A94B                   # movn        $s5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d20u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273d24:
    // 0x273d24: 0xdd10  .word       0x0000DD10                   # mfhi        $k1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d24u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_273d28:
    // 0x273d28: 0x0  nop
    ctx->pc = 0x273d28u;
    // NOP
label_273d2c:
    // 0x273d2c: 0x0  nop
    ctx->pc = 0x273d2cu;
    // NOP
label_273d30:
    // 0x273d30: 0xa967  .word       0x0000A967                   # not         $s5, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d30u;
    SET_GPR_U64(ctx, 21, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_273d34:
    // 0x273d34: 0x11470  tge         $zero, $at, 81
    ctx->pc = 0x273d34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_273d38:
    // 0x273d38: 0x0  nop
    ctx->pc = 0x273d38u;
    // NOP
label_273d3c:
    // 0x273d3c: 0x0  nop
    ctx->pc = 0x273d3cu;
    // NOP
label_273d40:
    // 0x273d40: 0xa98a  .word       0x0000A98A                   # movz        $s5, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d40u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_273d44:
    // 0x273d44: 0x16080  sll         $t4, $at, 2
    ctx->pc = 0x273d44u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_273d48:
    // 0x273d48: 0x0  nop
    ctx->pc = 0x273d48u;
    // NOP
label_273d4c:
    // 0x273d4c: 0x0  nop
    ctx->pc = 0x273d4cu;
    // NOP
label_273d50:
    // 0x273d50: 0xa9b7  .word       0x0000A9B7                   # INVALID     $zero, $zero, -0x5649 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x273D50 raw=0x0000A9B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273d54:
    // 0x273d54: 0xfff0  tge         $zero, $zero, 1023
    ctx->pc = 0x273d54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273d58:
    // 0x273d58: 0x0  nop
    ctx->pc = 0x273d58u;
    // NOP
label_273d5c:
    // 0x273d5c: 0x0  nop
    ctx->pc = 0x273d5cu;
    // NOP
label_273d60:
    // 0x273d60: 0xa9d7  .word       0x0000A9D7                   # dsrav       $s5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d60u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_273d64:
    // 0x273d64: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x273d64u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_273d68:
    // 0x273d68: 0x0  nop
    ctx->pc = 0x273d68u;
    // NOP
label_273d6c:
    // 0x273d6c: 0x0  nop
    ctx->pc = 0x273d6cu;
    // NOP
label_273d70:
    // 0x273d70: 0xa9f0  tge         $zero, $zero, 679
    ctx->pc = 0x273d70u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273d74:
    // 0x273d74: 0xee60  .word       0x0000EE60                   # add         $sp, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_273d78:
    // 0x273d78: 0x0  nop
    ctx->pc = 0x273d78u;
    // NOP
label_273d7c:
    // 0x273d7c: 0x0  nop
    ctx->pc = 0x273d7cu;
    // NOP
label_273d80:
    // 0x273d80: 0xaa0e  .word       0x0000AA0E                   # INVALID     $zero, $zero, -0x55F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x273D80 raw=0x0000AA0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_273d84:
    // 0x273d84: 0xab90  .word       0x0000AB90                   # mfhi        $s5 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d84u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_273d88:
    // 0x273d88: 0x0  nop
    ctx->pc = 0x273d88u;
    // NOP
label_273d8c:
    // 0x273d8c: 0x0  nop
    ctx->pc = 0x273d8cu;
    // NOP
label_273d90:
    // 0x273d90: 0xaa24  .word       0x0000AA24                   # and         $s5, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d90u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_273d94:
    // 0x273d94: 0xb510  .word       0x0000B510                   # mfhi        $s6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273d94u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_273d98:
    // 0x273d98: 0x0  nop
    ctx->pc = 0x273d98u;
    // NOP
label_273d9c:
    // 0x273d9c: 0x0  nop
    ctx->pc = 0x273d9cu;
    // NOP
label_273da0:
    // 0x273da0: 0xaa3b  dsra        $s5, $zero, 8
    ctx->pc = 0x273da0u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 0) >> 8);
label_273da4:
    // 0x273da4: 0x6490  .word       0x00006490                   # mfhi        $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273da4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_273da8:
    // 0x273da8: 0x0  nop
    ctx->pc = 0x273da8u;
    // NOP
label_273dac:
    // 0x273dac: 0x0  nop
    ctx->pc = 0x273dacu;
    // NOP
label_273db0:
    // 0x273db0: 0xaa48  .word       0x0000AA48                   # jr          $zero # 0000AA40 <InstrIdType: CPU_SPECIAL>
label_273db4:
    if (ctx->pc == 0x273DB4u) {
        ctx->pc = 0x273DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DB0u;
        // 0x273db4: 0xddf0  tge         $zero, $zero, 887 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DB8u;
        goto label_273db8;
    }
    ctx->pc = 0x273DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x273DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DB0u;
        // 0x273db4: 0xddf0  tge         $zero, $zero, 887 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273DB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273DB8u;
label_273db8:
    // 0x273db8: 0x0  nop
    ctx->pc = 0x273db8u;
    // NOP
label_273dbc:
    // 0x273dbc: 0x0  nop
    ctx->pc = 0x273dbcu;
    // NOP
label_273dc0:
    // 0x273dc0: 0xaa64  .word       0x0000AA64                   # and         $s5, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273dc0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_273dc4:
    // 0x273dc4: 0xbf50  .word       0x0000BF50                   # mfhi        $s7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273dc4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_273dc8:
    // 0x273dc8: 0x0  nop
    ctx->pc = 0x273dc8u;
    // NOP
label_273dcc:
    // 0x273dcc: 0x0  nop
    ctx->pc = 0x273dccu;
    // NOP
label_273dd0:
    // 0x273dd0: 0xaa7c  dsll32      $s5, $zero, 9
    ctx->pc = 0x273dd0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << (32 + 9));
label_273dd4:
    // 0x273dd4: 0xe6e0  .word       0x0000E6E0                   # add         $gp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273dd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_273dd8:
    // 0x273dd8: 0x0  nop
    ctx->pc = 0x273dd8u;
    // NOP
label_273ddc:
    // 0x273ddc: 0x0  nop
    ctx->pc = 0x273ddcu;
    // NOP
label_273de0:
    // 0x273de0: 0xaa99  .word       0x0000AA99                   # multu       $zero, $zero # 0000AA80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273de0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_273de4:
    // 0x273de4: 0xe610  .word       0x0000E610                   # mfhi        $gp # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x273de4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_273de8:
    // 0x273de8: 0x0  nop
    ctx->pc = 0x273de8u;
    // NOP
label_273dec:
    // 0x273dec: 0x0  nop
    ctx->pc = 0x273decu;
    // NOP
label_273df0:
    // 0x273df0: 0xaab6  tne         $zero, $zero, 682
    ctx->pc = 0x273df0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273df4:
    // 0x273df4: 0x7e30  tge         $zero, $zero, 504
    ctx->pc = 0x273df4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_273df8:
    // 0x273df8: 0x0  nop
    ctx->pc = 0x273df8u;
    // NOP
label_273dfc:
    // 0x273dfc: 0x0  nop
    ctx->pc = 0x273dfcu;
    // NOP
    ctx->pc = 0x273e00u;
    return;
}
