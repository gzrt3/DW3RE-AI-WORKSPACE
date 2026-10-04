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


void FUN_0014eba0_part154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1996f0u: goto label_1996f0;
        case 0x1996f4u: goto label_1996f4;
        case 0x1996f8u: goto label_1996f8;
        case 0x1996fcu: goto label_1996fc;
        case 0x199700u: goto label_199700;
        case 0x199704u: goto label_199704;
        case 0x199708u: goto label_199708;
        case 0x19970cu: goto label_19970c;
        case 0x199710u: goto label_199710;
        case 0x199714u: goto label_199714;
        case 0x199718u: goto label_199718;
        case 0x19971cu: goto label_19971c;
        case 0x199720u: goto label_199720;
        case 0x199724u: goto label_199724;
        case 0x199728u: goto label_199728;
        case 0x19972cu: goto label_19972c;
        case 0x199730u: goto label_199730;
        case 0x199734u: goto label_199734;
        case 0x199738u: goto label_199738;
        case 0x19973cu: goto label_19973c;
        case 0x199740u: goto label_199740;
        case 0x199744u: goto label_199744;
        case 0x199748u: goto label_199748;
        case 0x19974cu: goto label_19974c;
        case 0x199750u: goto label_199750;
        case 0x199754u: goto label_199754;
        case 0x199758u: goto label_199758;
        case 0x19975cu: goto label_19975c;
        case 0x199760u: goto label_199760;
        case 0x199764u: goto label_199764;
        case 0x199768u: goto label_199768;
        case 0x19976cu: goto label_19976c;
        case 0x199770u: goto label_199770;
        case 0x199774u: goto label_199774;
        case 0x199778u: goto label_199778;
        case 0x19977cu: goto label_19977c;
        case 0x199780u: goto label_199780;
        case 0x199784u: goto label_199784;
        case 0x199788u: goto label_199788;
        case 0x19978cu: goto label_19978c;
        case 0x199790u: goto label_199790;
        case 0x199794u: goto label_199794;
        case 0x199798u: goto label_199798;
        case 0x19979cu: goto label_19979c;
        case 0x1997a0u: goto label_1997a0;
        case 0x1997a4u: goto label_1997a4;
        case 0x1997a8u: goto label_1997a8;
        case 0x1997acu: goto label_1997ac;
        case 0x1997b0u: goto label_1997b0;
        case 0x1997b4u: goto label_1997b4;
        case 0x1997b8u: goto label_1997b8;
        case 0x1997bcu: goto label_1997bc;
        case 0x1997c0u: goto label_1997c0;
        case 0x1997c4u: goto label_1997c4;
        case 0x1997c8u: goto label_1997c8;
        case 0x1997ccu: goto label_1997cc;
        case 0x1997d0u: goto label_1997d0;
        case 0x1997d4u: goto label_1997d4;
        case 0x1997d8u: goto label_1997d8;
        case 0x1997dcu: goto label_1997dc;
        case 0x1997e0u: goto label_1997e0;
        case 0x1997e4u: goto label_1997e4;
        case 0x1997e8u: goto label_1997e8;
        case 0x1997ecu: goto label_1997ec;
        case 0x1997f0u: goto label_1997f0;
        case 0x1997f4u: goto label_1997f4;
        case 0x1997f8u: goto label_1997f8;
        case 0x1997fcu: goto label_1997fc;
        case 0x199800u: goto label_199800;
        case 0x199804u: goto label_199804;
        case 0x199808u: goto label_199808;
        case 0x19980cu: goto label_19980c;
        case 0x199810u: goto label_199810;
        case 0x199814u: goto label_199814;
        case 0x199818u: goto label_199818;
        case 0x19981cu: goto label_19981c;
        case 0x199820u: goto label_199820;
        case 0x199824u: goto label_199824;
        case 0x199828u: goto label_199828;
        case 0x19982cu: goto label_19982c;
        case 0x199830u: goto label_199830;
        case 0x199834u: goto label_199834;
        case 0x199838u: goto label_199838;
        case 0x19983cu: goto label_19983c;
        case 0x199840u: goto label_199840;
        case 0x199844u: goto label_199844;
        case 0x199848u: goto label_199848;
        case 0x19984cu: goto label_19984c;
        case 0x199850u: goto label_199850;
        case 0x199854u: goto label_199854;
        case 0x199858u: goto label_199858;
        case 0x19985cu: goto label_19985c;
        case 0x199860u: goto label_199860;
        case 0x199864u: goto label_199864;
        case 0x199868u: goto label_199868;
        case 0x19986cu: goto label_19986c;
        case 0x199870u: goto label_199870;
        case 0x199874u: goto label_199874;
        case 0x199878u: goto label_199878;
        case 0x19987cu: goto label_19987c;
        case 0x199880u: goto label_199880;
        case 0x199884u: goto label_199884;
        case 0x199888u: goto label_199888;
        case 0x19988cu: goto label_19988c;
        case 0x199890u: goto label_199890;
        case 0x199894u: goto label_199894;
        case 0x199898u: goto label_199898;
        case 0x19989cu: goto label_19989c;
        case 0x1998a0u: goto label_1998a0;
        case 0x1998a4u: goto label_1998a4;
        case 0x1998a8u: goto label_1998a8;
        case 0x1998acu: goto label_1998ac;
        case 0x1998b0u: goto label_1998b0;
        case 0x1998b4u: goto label_1998b4;
        case 0x1998b8u: goto label_1998b8;
        case 0x1998bcu: goto label_1998bc;
        case 0x1998c0u: goto label_1998c0;
        case 0x1998c4u: goto label_1998c4;
        case 0x1998c8u: goto label_1998c8;
        case 0x1998ccu: goto label_1998cc;
        case 0x1998d0u: goto label_1998d0;
        case 0x1998d4u: goto label_1998d4;
        case 0x1998d8u: goto label_1998d8;
        case 0x1998dcu: goto label_1998dc;
        case 0x1998e0u: goto label_1998e0;
        case 0x1998e4u: goto label_1998e4;
        case 0x1998e8u: goto label_1998e8;
        case 0x1998ecu: goto label_1998ec;
        case 0x1998f0u: goto label_1998f0;
        case 0x1998f4u: goto label_1998f4;
        case 0x1998f8u: goto label_1998f8;
        case 0x1998fcu: goto label_1998fc;
        case 0x199900u: goto label_199900;
        case 0x199904u: goto label_199904;
        case 0x199908u: goto label_199908;
        case 0x19990cu: goto label_19990c;
        case 0x199910u: goto label_199910;
        case 0x199914u: goto label_199914;
        case 0x199918u: goto label_199918;
        case 0x19991cu: goto label_19991c;
        case 0x199920u: goto label_199920;
        case 0x199924u: goto label_199924;
        case 0x199928u: goto label_199928;
        case 0x19992cu: goto label_19992c;
        case 0x199930u: goto label_199930;
        case 0x199934u: goto label_199934;
        case 0x199938u: goto label_199938;
        case 0x19993cu: goto label_19993c;
        case 0x199940u: goto label_199940;
        case 0x199944u: goto label_199944;
        case 0x199948u: goto label_199948;
        case 0x19994cu: goto label_19994c;
        case 0x199950u: goto label_199950;
        case 0x199954u: goto label_199954;
        case 0x199958u: goto label_199958;
        case 0x19995cu: goto label_19995c;
        case 0x199960u: goto label_199960;
        case 0x199964u: goto label_199964;
        case 0x199968u: goto label_199968;
        case 0x19996cu: goto label_19996c;
        case 0x199970u: goto label_199970;
        case 0x199974u: goto label_199974;
        case 0x199978u: goto label_199978;
        case 0x19997cu: goto label_19997c;
        case 0x199980u: goto label_199980;
        case 0x199984u: goto label_199984;
        case 0x199988u: goto label_199988;
        case 0x19998cu: goto label_19998c;
        case 0x199990u: goto label_199990;
        case 0x199994u: goto label_199994;
        case 0x199998u: goto label_199998;
        case 0x19999cu: goto label_19999c;
        case 0x1999a0u: goto label_1999a0;
        case 0x1999a4u: goto label_1999a4;
        case 0x1999a8u: goto label_1999a8;
        case 0x1999acu: goto label_1999ac;
        case 0x1999b0u: goto label_1999b0;
        case 0x1999b4u: goto label_1999b4;
        case 0x1999b8u: goto label_1999b8;
        case 0x1999bcu: goto label_1999bc;
        case 0x1999c0u: goto label_1999c0;
        case 0x1999c4u: goto label_1999c4;
        case 0x1999c8u: goto label_1999c8;
        case 0x1999ccu: goto label_1999cc;
        case 0x1999d0u: goto label_1999d0;
        case 0x1999d4u: goto label_1999d4;
        case 0x1999d8u: goto label_1999d8;
        case 0x1999dcu: goto label_1999dc;
        case 0x1999e0u: goto label_1999e0;
        case 0x1999e4u: goto label_1999e4;
        case 0x1999e8u: goto label_1999e8;
        case 0x1999ecu: goto label_1999ec;
        case 0x1999f0u: goto label_1999f0;
        case 0x1999f4u: goto label_1999f4;
        case 0x1999f8u: goto label_1999f8;
        case 0x1999fcu: goto label_1999fc;
        case 0x199a00u: goto label_199a00;
        case 0x199a04u: goto label_199a04;
        case 0x199a08u: goto label_199a08;
        case 0x199a0cu: goto label_199a0c;
        case 0x199a10u: goto label_199a10;
        case 0x199a14u: goto label_199a14;
        case 0x199a18u: goto label_199a18;
        case 0x199a1cu: goto label_199a1c;
        case 0x199a20u: goto label_199a20;
        case 0x199a24u: goto label_199a24;
        case 0x199a28u: goto label_199a28;
        case 0x199a2cu: goto label_199a2c;
        case 0x199a30u: goto label_199a30;
        case 0x199a34u: goto label_199a34;
        case 0x199a38u: goto label_199a38;
        case 0x199a3cu: goto label_199a3c;
        case 0x199a40u: goto label_199a40;
        case 0x199a44u: goto label_199a44;
        case 0x199a48u: goto label_199a48;
        case 0x199a4cu: goto label_199a4c;
        case 0x199a50u: goto label_199a50;
        case 0x199a54u: goto label_199a54;
        case 0x199a58u: goto label_199a58;
        case 0x199a5cu: goto label_199a5c;
        case 0x199a60u: goto label_199a60;
        case 0x199a64u: goto label_199a64;
        case 0x199a68u: goto label_199a68;
        case 0x199a6cu: goto label_199a6c;
        case 0x199a70u: goto label_199a70;
        case 0x199a74u: goto label_199a74;
        case 0x199a78u: goto label_199a78;
        case 0x199a7cu: goto label_199a7c;
        case 0x199a80u: goto label_199a80;
        case 0x199a84u: goto label_199a84;
        case 0x199a88u: goto label_199a88;
        case 0x199a8cu: goto label_199a8c;
        case 0x199a90u: goto label_199a90;
        case 0x199a94u: goto label_199a94;
        case 0x199a98u: goto label_199a98;
        case 0x199a9cu: goto label_199a9c;
        case 0x199aa0u: goto label_199aa0;
        case 0x199aa4u: goto label_199aa4;
        case 0x199aa8u: goto label_199aa8;
        case 0x199aacu: goto label_199aac;
        case 0x199ab0u: goto label_199ab0;
        case 0x199ab4u: goto label_199ab4;
        case 0x199ab8u: goto label_199ab8;
        case 0x199abcu: goto label_199abc;
        case 0x199ac0u: goto label_199ac0;
        case 0x199ac4u: goto label_199ac4;
        case 0x199ac8u: goto label_199ac8;
        case 0x199accu: goto label_199acc;
        case 0x199ad0u: goto label_199ad0;
        case 0x199ad4u: goto label_199ad4;
        case 0x199ad8u: goto label_199ad8;
        case 0x199adcu: goto label_199adc;
        case 0x199ae0u: goto label_199ae0;
        case 0x199ae4u: goto label_199ae4;
        case 0x199ae8u: goto label_199ae8;
        case 0x199aecu: goto label_199aec;
        case 0x199af0u: goto label_199af0;
        case 0x199af4u: goto label_199af4;
        case 0x199af8u: goto label_199af8;
        case 0x199afcu: goto label_199afc;
        case 0x199b00u: goto label_199b00;
        case 0x199b04u: goto label_199b04;
        case 0x199b08u: goto label_199b08;
        case 0x199b0cu: goto label_199b0c;
        case 0x199b10u: goto label_199b10;
        case 0x199b14u: goto label_199b14;
        case 0x199b18u: goto label_199b18;
        case 0x199b1cu: goto label_199b1c;
        case 0x199b20u: goto label_199b20;
        case 0x199b24u: goto label_199b24;
        case 0x199b28u: goto label_199b28;
        case 0x199b2cu: goto label_199b2c;
        case 0x199b30u: goto label_199b30;
        case 0x199b34u: goto label_199b34;
        case 0x199b38u: goto label_199b38;
        case 0x199b3cu: goto label_199b3c;
        case 0x199b40u: goto label_199b40;
        case 0x199b44u: goto label_199b44;
        case 0x199b48u: goto label_199b48;
        case 0x199b4cu: goto label_199b4c;
        case 0x199b50u: goto label_199b50;
        case 0x199b54u: goto label_199b54;
        case 0x199b58u: goto label_199b58;
        case 0x199b5cu: goto label_199b5c;
        case 0x199b60u: goto label_199b60;
        case 0x199b64u: goto label_199b64;
        case 0x199b68u: goto label_199b68;
        case 0x199b6cu: goto label_199b6c;
        case 0x199b70u: goto label_199b70;
        case 0x199b74u: goto label_199b74;
        case 0x199b78u: goto label_199b78;
        case 0x199b7cu: goto label_199b7c;
        case 0x199b80u: goto label_199b80;
        case 0x199b84u: goto label_199b84;
        case 0x199b88u: goto label_199b88;
        case 0x199b8cu: goto label_199b8c;
        case 0x199b90u: goto label_199b90;
        case 0x199b94u: goto label_199b94;
        case 0x199b98u: goto label_199b98;
        case 0x199b9cu: goto label_199b9c;
        case 0x199ba0u: goto label_199ba0;
        case 0x199ba4u: goto label_199ba4;
        case 0x199ba8u: goto label_199ba8;
        case 0x199bacu: goto label_199bac;
        case 0x199bb0u: goto label_199bb0;
        case 0x199bb4u: goto label_199bb4;
        case 0x199bb8u: goto label_199bb8;
        case 0x199bbcu: goto label_199bbc;
        case 0x199bc0u: goto label_199bc0;
        case 0x199bc4u: goto label_199bc4;
        case 0x199bc8u: goto label_199bc8;
        case 0x199bccu: goto label_199bcc;
        case 0x199bd0u: goto label_199bd0;
        case 0x199bd4u: goto label_199bd4;
        case 0x199bd8u: goto label_199bd8;
        case 0x199bdcu: goto label_199bdc;
        case 0x199be0u: goto label_199be0;
        case 0x199be4u: goto label_199be4;
        case 0x199be8u: goto label_199be8;
        case 0x199becu: goto label_199bec;
        case 0x199bf0u: goto label_199bf0;
        case 0x199bf4u: goto label_199bf4;
        case 0x199bf8u: goto label_199bf8;
        case 0x199bfcu: goto label_199bfc;
        case 0x199c00u: goto label_199c00;
        case 0x199c04u: goto label_199c04;
        case 0x199c08u: goto label_199c08;
        case 0x199c0cu: goto label_199c0c;
        case 0x199c10u: goto label_199c10;
        case 0x199c14u: goto label_199c14;
        case 0x199c18u: goto label_199c18;
        case 0x199c1cu: goto label_199c1c;
        case 0x199c20u: goto label_199c20;
        case 0x199c24u: goto label_199c24;
        case 0x199c28u: goto label_199c28;
        case 0x199c2cu: goto label_199c2c;
        case 0x199c30u: goto label_199c30;
        case 0x199c34u: goto label_199c34;
        case 0x199c38u: goto label_199c38;
        case 0x199c3cu: goto label_199c3c;
        case 0x199c40u: goto label_199c40;
        case 0x199c44u: goto label_199c44;
        case 0x199c48u: goto label_199c48;
        case 0x199c4cu: goto label_199c4c;
        case 0x199c50u: goto label_199c50;
        case 0x199c54u: goto label_199c54;
        case 0x199c58u: goto label_199c58;
        case 0x199c5cu: goto label_199c5c;
        case 0x199c60u: goto label_199c60;
        case 0x199c64u: goto label_199c64;
        case 0x199c68u: goto label_199c68;
        case 0x199c6cu: goto label_199c6c;
        case 0x199c70u: goto label_199c70;
        case 0x199c74u: goto label_199c74;
        case 0x199c78u: goto label_199c78;
        case 0x199c7cu: goto label_199c7c;
        case 0x199c80u: goto label_199c80;
        case 0x199c84u: goto label_199c84;
        case 0x199c88u: goto label_199c88;
        case 0x199c8cu: goto label_199c8c;
        case 0x199c90u: goto label_199c90;
        case 0x199c94u: goto label_199c94;
        case 0x199c98u: goto label_199c98;
        case 0x199c9cu: goto label_199c9c;
        case 0x199ca0u: goto label_199ca0;
        case 0x199ca4u: goto label_199ca4;
        case 0x199ca8u: goto label_199ca8;
        case 0x199cacu: goto label_199cac;
        case 0x199cb0u: goto label_199cb0;
        case 0x199cb4u: goto label_199cb4;
        case 0x199cb8u: goto label_199cb8;
        case 0x199cbcu: goto label_199cbc;
        case 0x199cc0u: goto label_199cc0;
        case 0x199cc4u: goto label_199cc4;
        case 0x199cc8u: goto label_199cc8;
        case 0x199cccu: goto label_199ccc;
        case 0x199cd0u: goto label_199cd0;
        case 0x199cd4u: goto label_199cd4;
        case 0x199cd8u: goto label_199cd8;
        case 0x199cdcu: goto label_199cdc;
        case 0x199ce0u: goto label_199ce0;
        case 0x199ce4u: goto label_199ce4;
        case 0x199ce8u: goto label_199ce8;
        case 0x199cecu: goto label_199cec;
        case 0x199cf0u: goto label_199cf0;
        case 0x199cf4u: goto label_199cf4;
        case 0x199cf8u: goto label_199cf8;
        case 0x199cfcu: goto label_199cfc;
        case 0x199d00u: goto label_199d00;
        case 0x199d04u: goto label_199d04;
        case 0x199d08u: goto label_199d08;
        case 0x199d0cu: goto label_199d0c;
        case 0x199d10u: goto label_199d10;
        case 0x199d14u: goto label_199d14;
        case 0x199d18u: goto label_199d18;
        case 0x199d1cu: goto label_199d1c;
        case 0x199d20u: goto label_199d20;
        case 0x199d24u: goto label_199d24;
        case 0x199d28u: goto label_199d28;
        case 0x199d2cu: goto label_199d2c;
        case 0x199d30u: goto label_199d30;
        case 0x199d34u: goto label_199d34;
        case 0x199d38u: goto label_199d38;
        case 0x199d3cu: goto label_199d3c;
        case 0x199d40u: goto label_199d40;
        case 0x199d44u: goto label_199d44;
        case 0x199d48u: goto label_199d48;
        case 0x199d4cu: goto label_199d4c;
        case 0x199d50u: goto label_199d50;
        case 0x199d54u: goto label_199d54;
        case 0x199d58u: goto label_199d58;
        case 0x199d5cu: goto label_199d5c;
        case 0x199d60u: goto label_199d60;
        case 0x199d64u: goto label_199d64;
        case 0x199d68u: goto label_199d68;
        case 0x199d6cu: goto label_199d6c;
        case 0x199d70u: goto label_199d70;
        case 0x199d74u: goto label_199d74;
        case 0x199d78u: goto label_199d78;
        case 0x199d7cu: goto label_199d7c;
        case 0x199d80u: goto label_199d80;
        case 0x199d84u: goto label_199d84;
        case 0x199d88u: goto label_199d88;
        case 0x199d8cu: goto label_199d8c;
        case 0x199d90u: goto label_199d90;
        case 0x199d94u: goto label_199d94;
        case 0x199d98u: goto label_199d98;
        case 0x199d9cu: goto label_199d9c;
        case 0x199da0u: goto label_199da0;
        case 0x199da4u: goto label_199da4;
        case 0x199da8u: goto label_199da8;
        case 0x199dacu: goto label_199dac;
        case 0x199db0u: goto label_199db0;
        case 0x199db4u: goto label_199db4;
        case 0x199db8u: goto label_199db8;
        case 0x199dbcu: goto label_199dbc;
        case 0x199dc0u: goto label_199dc0;
        case 0x199dc4u: goto label_199dc4;
        case 0x199dc8u: goto label_199dc8;
        case 0x199dccu: goto label_199dcc;
        case 0x199dd0u: goto label_199dd0;
        case 0x199dd4u: goto label_199dd4;
        case 0x199dd8u: goto label_199dd8;
        case 0x199ddcu: goto label_199ddc;
        case 0x199de0u: goto label_199de0;
        case 0x199de4u: goto label_199de4;
        case 0x199de8u: goto label_199de8;
        case 0x199decu: goto label_199dec;
        case 0x199df0u: goto label_199df0;
        case 0x199df4u: goto label_199df4;
        case 0x199df8u: goto label_199df8;
        case 0x199dfcu: goto label_199dfc;
        case 0x199e00u: goto label_199e00;
        case 0x199e04u: goto label_199e04;
        case 0x199e08u: goto label_199e08;
        case 0x199e0cu: goto label_199e0c;
        case 0x199e10u: goto label_199e10;
        case 0x199e14u: goto label_199e14;
        case 0x199e18u: goto label_199e18;
        case 0x199e1cu: goto label_199e1c;
        case 0x199e20u: goto label_199e20;
        case 0x199e24u: goto label_199e24;
        case 0x199e28u: goto label_199e28;
        case 0x199e2cu: goto label_199e2c;
        case 0x199e30u: goto label_199e30;
        case 0x199e34u: goto label_199e34;
        case 0x199e38u: goto label_199e38;
        case 0x199e3cu: goto label_199e3c;
        case 0x199e40u: goto label_199e40;
        case 0x199e44u: goto label_199e44;
        case 0x199e48u: goto label_199e48;
        case 0x199e4cu: goto label_199e4c;
        case 0x199e50u: goto label_199e50;
        case 0x199e54u: goto label_199e54;
        case 0x199e58u: goto label_199e58;
        case 0x199e5cu: goto label_199e5c;
        case 0x199e60u: goto label_199e60;
        case 0x199e64u: goto label_199e64;
        case 0x199e68u: goto label_199e68;
        case 0x199e6cu: goto label_199e6c;
        case 0x199e70u: goto label_199e70;
        case 0x199e74u: goto label_199e74;
        case 0x199e78u: goto label_199e78;
        case 0x199e7cu: goto label_199e7c;
        case 0x199e80u: goto label_199e80;
        case 0x199e84u: goto label_199e84;
        case 0x199e88u: goto label_199e88;
        case 0x199e8cu: goto label_199e8c;
        case 0x199e90u: goto label_199e90;
        case 0x199e94u: goto label_199e94;
        case 0x199e98u: goto label_199e98;
        case 0x199e9cu: goto label_199e9c;
        case 0x199ea0u: goto label_199ea0;
        case 0x199ea4u: goto label_199ea4;
        case 0x199ea8u: goto label_199ea8;
        case 0x199eacu: goto label_199eac;
        case 0x199eb0u: goto label_199eb0;
        case 0x199eb4u: goto label_199eb4;
        case 0x199eb8u: goto label_199eb8;
        case 0x199ebcu: goto label_199ebc;
        default: return;
    }

label_1996f0:
    // 0x1996f0: 0xfc820068  sd          $v0, 0x68($a0)
    ctx->pc = 0x1996f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 2));
label_1996f4:
    // 0x1996f4: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x1996f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_1996f8:
    // 0x1996f8: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1996f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_1996fc:
    // 0x1996fc: 0xfc8c0010  sd          $t4, 0x10($a0)
    ctx->pc = 0x1996fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 12));
label_199700:
    // 0x199700: 0xfc8d0018  sd          $t5, 0x18($a0)
    ctx->pc = 0x199700u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 13));
label_199704:
    // 0x199704: 0xfc850020  sd          $a1, 0x20($a0)
    ctx->pc = 0x199704u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 5));
label_199708:
    // 0x199708: 0xfc890028  sd          $t1, 0x28($a0)
    ctx->pc = 0x199708u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 9));
label_19970c:
    // 0x19970c: 0xfc880030  sd          $t0, 0x30($a0)
    ctx->pc = 0x19970cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 8));
label_199710:
    // 0x199710: 0xfc8b0038  sd          $t3, 0x38($a0)
    ctx->pc = 0x199710u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 11));
label_199714:
    // 0x199714: 0xfc8a0040  sd          $t2, 0x40($a0)
    ctx->pc = 0x199714u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 10));
label_199718:
    // 0x199718: 0xfc8e0048  sd          $t6, 0x48($a0)
    ctx->pc = 0x199718u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 14));
label_19971c:
    // 0x19971c: 0xfc8f0058  sd          $t7, 0x58($a0)
    ctx->pc = 0x19971cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 15));
label_199720:
    // 0x199720: 0xfc900060  sd          $s0, 0x60($a0)
    ctx->pc = 0x199720u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 16));
label_199724:
    // 0x199724: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x199724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_199728:
    // 0x199728: 0xfc800050  sd          $zero, 0x50($a0)
    ctx->pc = 0x199728u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 0));
label_19972c:
    // 0x19972c: 0xf  sync
    ctx->pc = 0x19972cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_199730:
    // 0x199730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_199734:
    // 0x199734: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x199734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_199738:
    // 0x199738: 0x3e00008  jr          $ra
label_19973c:
    if (ctx->pc == 0x19973Cu) {
        ctx->pc = 0x19973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199738u;
        // 0x19973c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199740u;
        goto label_199740;
    }
    ctx->pc = 0x199738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199738u;
        // 0x19973c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199740u;
label_199740:
    // 0x199740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_199744:
    // 0x199744: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_199748:
    // 0x199748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19974c:
    // 0x19974c: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x19974cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_199750:
    // 0x199750: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x199750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_199754:
    // 0x199754: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x199754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_199758:
    // 0x199758: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19975c:
    // 0x19975c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19975cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_199760:
    // 0x199760: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_199764:
    if (ctx->pc == 0x199764u) {
        ctx->pc = 0x199764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199760u;
        // 0x199764: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199768u;
        goto label_199768;
    }
    ctx->pc = 0x199760u;
    {
        const bool branch_taken_0x199760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199760u;
        // 0x199764: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199760) {
            ctx->pc = 0x199794u;
            goto label_199794;
        }
    }
    ctx->pc = 0x199768u;
label_199768:
    // 0x199768: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19976c:
    // 0x19976c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x19976cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_199770:
    // 0x199770: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x199770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_199774:
    // 0x199774: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x199774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_199778:
    // 0x199778: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19977c:
    // 0x19977c: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_199780:
    if (ctx->pc == 0x199780u) {
        ctx->pc = 0x199780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19977Cu;
        // 0x199780: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199784u;
        goto label_199784;
    }
    ctx->pc = 0x19977Cu;
    {
        const bool branch_taken_0x19977c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19977Cu;
        // 0x199780: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19977c) {
            ctx->pc = 0x199874u;
            goto label_199874;
        }
    }
    ctx->pc = 0x199784u;
label_199784:
    // 0x199784: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_199788:
    // 0x199788: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19978c:
    // 0x19978c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_199790:
    if (ctx->pc == 0x199790u) {
        ctx->pc = 0x199790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19978Cu;
        // 0x199790: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199794u;
        goto label_199794;
    }
    ctx->pc = 0x19978Cu;
    {
        const bool branch_taken_0x19978c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19978Cu;
        // 0x199790: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19978c) {
            ctx->pc = 0x199778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199778;
        }
    }
    ctx->pc = 0x199794u;
label_199794:
    // 0x199794: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_199798:
    // 0x199798: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x199798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19979c:
    // 0x19979c: 0x3442a020  ori         $v0, $v0, 0xA020
    ctx->pc = 0x19979cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40992);
label_1997a0:
    // 0x1997a0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1997a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_1997a4:
    // 0x1997a4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1997a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1997a8:
    // 0x1997a8: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x1997a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_1997ac:
    // 0x1997ac: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
label_1997b0:
    if (ctx->pc == 0x1997B0u) {
        ctx->pc = 0x1997B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997ACu;
        // 0x1997b0: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1997B4u;
        goto label_1997b4;
    }
    ctx->pc = 0x1997ACu;
    {
        const bool branch_taken_0x1997ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1997B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997ACu;
        // 0x1997b0: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997ac) {
            ctx->pc = 0x1997D0u;
            goto label_1997d0;
        }
    }
    ctx->pc = 0x1997B4u;
label_1997b4:
    // 0x1997b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1997b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1997b8:
    // 0x1997b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1997b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1997bc:
    // 0x1997bc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1997bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1997c0:
    // 0x1997c0: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1997c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_1997c4:
    // 0x1997c4: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x1997c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
label_1997c8:
    // 0x1997c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1997cc:
    if (ctx->pc == 0x1997CCu) {
        ctx->pc = 0x1997CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997C8u;
        // 0x1997cc: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1997D0u;
        goto label_1997d0;
    }
    ctx->pc = 0x1997C8u;
    {
        const bool branch_taken_0x1997c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1997CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997C8u;
        // 0x1997cc: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997c8) {
            ctx->pc = 0x1997E0u;
            goto label_1997e0;
        }
    }
    ctx->pc = 0x1997D0u;
label_1997d0:
    // 0x1997d0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1997d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1997d4:
    // 0x1997d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1997d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1997d8:
    // 0x1997d8: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x1997d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
label_1997dc:
    // 0x1997dc: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1997dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_1997e0:
    // 0x1997e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1997e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1997e4:
    // 0x1997e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1997e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1997e8:
    // 0x1997e8: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x1997e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_1997ec:
    // 0x1997ec: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x1997ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
label_1997f0:
    // 0x1997f0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1997f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1997f4:
    // 0x1997f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1997f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1997f8:
    // 0x1997f8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1997f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_1997fc:
    // 0x1997fc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_199800:
    if (ctx->pc == 0x199800u) {
        ctx->pc = 0x199800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997FCu;
        // 0x199800: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199804u;
        goto label_199804;
    }
    ctx->pc = 0x1997FCu;
    {
        const bool branch_taken_0x1997fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997FCu;
        // 0x199800: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997fc) {
            ctx->pc = 0x19982Cu;
            goto label_19982c;
        }
    }
    ctx->pc = 0x199804u;
label_199804:
    // 0x199804: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x199804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_199808:
    // 0x199808: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x199808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_19980c:
    // 0x19980c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x19980cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_199810:
    // 0x199810: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_199814:
    // 0x199814: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_199818:
    if (ctx->pc == 0x199818u) {
        ctx->pc = 0x199818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199814u;
        // 0x199818: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19981Cu;
        goto label_19981c;
    }
    ctx->pc = 0x199814u;
    {
        const bool branch_taken_0x199814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199814u;
        // 0x199818: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199814) {
            ctx->pc = 0x199874u;
            goto label_199874;
        }
    }
    ctx->pc = 0x19981Cu;
label_19981c:
    // 0x19981c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_199820:
    // 0x199820: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_199824:
    // 0x199824: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_199828:
    if (ctx->pc == 0x199828u) {
        ctx->pc = 0x199828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199824u;
        // 0x199828: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19982Cu;
        goto label_19982c;
    }
    ctx->pc = 0x199824u;
    {
        const bool branch_taken_0x199824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199824u;
        // 0x199828: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199824) {
            ctx->pc = 0x199810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199810;
        }
    }
    ctx->pc = 0x19982Cu;
label_19982c:
    // 0x19982c: 0xdce20050  ld          $v0, 0x50($a3)
    ctx->pc = 0x19982cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 80)));
label_199830:
    // 0x199830: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_199834:
    // 0x199834: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x199834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
label_199838:
    // 0x199838: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x199838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
label_19983c:
    // 0x19983c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x19983cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_199840:
    // 0x199840: 0x1052024  and         $a0, $t0, $a1
    ctx->pc = 0x199840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
label_199844:
    // 0x199844: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x199844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_199848:
    // 0x199848: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x199848u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_19984c:
    // 0x19984c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19984cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_199850:
    // 0x199850: 0x1485000d  bne         $a0, $a1, . + 4 + (0xD << 2)
label_199854:
    if (ctx->pc == 0x199854u) {
        ctx->pc = 0x199854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199850u;
        // 0x199854: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199858u;
        goto label_199858;
    }
    ctx->pc = 0x199850u;
    {
        const bool branch_taken_0x199850 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x199854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199850u;
        // 0x199854: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199850) {
            ctx->pc = 0x199888u;
            goto label_199888;
        }
    }
    ctx->pc = 0x199858u;
label_199858:
    // 0x199858: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19985c:
    // 0x19985c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19985cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_199860:
    // 0x199860: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x199860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_199864:
    // 0x199864: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x199864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_199868:
    // 0x199868: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x199868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
label_19986c:
    // 0x19986c: 0x1000000a  b           . + 4 + (0xA << 2)
label_199870:
    if (ctx->pc == 0x199870u) {
        ctx->pc = 0x199870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19986Cu;
        // 0x199870: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199874u;
        goto label_199874;
    }
    ctx->pc = 0x19986Cu;
    {
        const bool branch_taken_0x19986c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19986Cu;
        // 0x199870: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19986c) {
            ctx->pc = 0x199898u;
            goto label_199898;
        }
    }
    ctx->pc = 0x199874u;
label_199874:
    // 0x199874: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_199878:
    // 0x199878: 0xc08ee2e  jal         func_23B8B8
label_19987c:
    if (ctx->pc == 0x19987Cu) {
        ctx->pc = 0x19987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199878u;
        // 0x19987c: 0x24849d80  addiu       $a0, $a0, -0x6280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199880u;
        goto label_199880;
    }
    ctx->pc = 0x199878u;
    SET_GPR_U32(ctx, 31, 0x199880u);
    ctx->pc = 0x19987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199878u;
    // 0x19987c: 0x24849d80  addiu       $a0, $a0, -0x6280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x199880u;
label_199880:
    // 0x199880: 0x1000000b  b           . + 4 + (0xB << 2)
label_199884:
    if (ctx->pc == 0x199884u) {
        ctx->pc = 0x199884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199880u;
        // 0x199884: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199888u;
        goto label_199888;
    }
    ctx->pc = 0x199880u;
    {
        const bool branch_taken_0x199880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199880u;
        // 0x199884: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199880) {
            ctx->pc = 0x1998B0u;
            goto label_1998b0;
        }
    }
    ctx->pc = 0x199888u;
label_199888:
    // 0x199888: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19988c:
    // 0x19988c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19988cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_199890:
    // 0x199890: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x199890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
label_199894:
    // 0x199894: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x199894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_199898:
    // 0x199898: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x199898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19989c:
    // 0x19989c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19989cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1998a0:
    // 0x1998a0: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x1998a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_1998a4:
    // 0x1998a4: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x1998a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_1998a8:
    // 0x1998a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1998a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1998ac:
    // 0x1998ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1998acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1998b0:
    // 0x1998b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1998b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1998b4:
    // 0x1998b4: 0x3e00008  jr          $ra
label_1998b8:
    if (ctx->pc == 0x1998B8u) {
        ctx->pc = 0x1998B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998B4u;
        // 0x1998b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1998BCu;
        goto label_1998bc;
    }
    ctx->pc = 0x1998B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1998B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998B4u;
        // 0x1998b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1998B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1998BCu;
label_1998bc:
    // 0x1998bc: 0x0  nop
    ctx->pc = 0x1998bcu;
    // NOP
label_1998c0:
    // 0x1998c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1998c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1998c4:
    // 0x1998c4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1998c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1998c8:
    // 0x1998c8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1998c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1998cc:
    // 0x1998cc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1998ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1998d0:
    // 0x1998d0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1998d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1998d4:
    // 0x1998d4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1998d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1998d8:
    // 0x1998d8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1998d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1998dc:
    // 0x1998dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1998dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1998e0:
    // 0x1998e0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1998e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1998e4:
    // 0x1998e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1998e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1998e8:
    // 0x1998e8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1998e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1998ec:
    // 0x1998ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1998ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1998f0:
    // 0x1998f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1998f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1998f4:
    // 0x1998f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1998f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1998f8:
    // 0x1998f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1998f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1998fc:
    // 0x1998fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1998fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199900:
    // 0x199900: 0xde890040  ld          $t1, 0x40($s4)
    ctx->pc = 0x199900u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 20), 64)));
label_199904:
    // 0x199904: 0xde820020  ld          $v0, 0x20($s4)
    ctx->pc = 0x199904u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 32)));
label_199908:
    // 0x199908: 0x31240fff  andi        $a0, $t1, 0xFFF
    ctx->pc = 0x199908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
label_19990c:
    // 0x19990c: 0x9183e  dsrl32      $v1, $t1, 0
    ctx->pc = 0x19990cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) >> (32 + 0));
label_199910:
    // 0x199910: 0x2163a  dsrl        $v0, $v0, 24
    ctx->pc = 0x199910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 24);
label_199914:
    // 0x199914: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x199914u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
label_199918:
    // 0x199918: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x199918u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
label_19991c:
    // 0x19991c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x19991cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_199920:
    // 0x199920: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x199920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_199924:
    // 0x199924: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x199924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_199928:
    // 0x199928: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x199928u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_19992c:
    // 0x19992c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x19992cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
label_199930:
    // 0x199930: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x199930u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_199934:
    // 0x199934: 0x2c82003b  sltiu       $v0, $a0, 0x3B
    ctx->pc = 0x199934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_199938:
    // 0x199938: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_19993c:
    if (ctx->pc == 0x19993Cu) {
        ctx->pc = 0x19993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199938u;
        // 0x19993c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199940u;
        goto label_199940;
    }
    ctx->pc = 0x199938u;
    {
        const bool branch_taken_0x199938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199938u;
        // 0x19993c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199938) {
            ctx->pc = 0x199A9Cu;
            goto label_199a9c;
        }
    }
    ctx->pc = 0x199940u;
label_199940:
    // 0x199940: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x199940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_199944:
    // 0x199944: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x199944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_199948:
    // 0x199948: 0x24429ea0  addiu       $v0, $v0, -0x6160
    ctx->pc = 0x199948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942368));
label_19994c:
    // 0x19994c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19994cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_199950:
    // 0x199950: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x199950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_199954:
    // 0x199954: 0x800008  jr          $a0
label_199958:
    if (ctx->pc == 0x199958u) {
        ctx->pc = 0x19995Cu;
        goto label_19995c;
    }
    ctx->pc = 0x199954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19995Cu: goto label_19995c;
            case 0x199994u: goto label_199994;
            case 0x1999E4u: goto label_1999e4;
            case 0x199A1Cu: goto label_199a1c;
            case 0x199A50u: goto label_199a50;
            case 0x199A9Cu: goto label_199a9c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199954u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19995Cu;
label_19995c:
    // 0x19995c: 0x1072018  mult        $a0, $t0, $a3
    ctx->pc = 0x19995cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_199960:
    // 0x199960: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x199960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_199964:
    // 0x199964: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x199964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
label_199968:
    // 0x199968: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x199968u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_19996c:
    // 0x19996c: 0x61903  sra         $v1, $a2, 4
    ctx->pc = 0x19996cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
label_199970:
    // 0x199970: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x199970u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_199974:
    // 0x199974: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x199974u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_199978:
    // 0x199978: 0x1260003e  beqz        $s3, . + 4 + (0x3E << 2)
label_19997c:
    if (ctx->pc == 0x19997Cu) {
        ctx->pc = 0x19997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199978u;
        // 0x19997c: 0x30710007  andi        $s1, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x199980u;
        goto label_199980;
    }
    ctx->pc = 0x199978u;
    {
        const bool branch_taken_0x199978 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199978u;
        // 0x19997c: 0x30710007  andi        $s1, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199978) {
            ctx->pc = 0x199A74u;
            goto label_199a74;
        }
    }
    ctx->pc = 0x199980u;
label_199980:
    // 0x199980: 0x24e20003  addiu       $v0, $a3, 0x3
    ctx->pc = 0x199980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
label_199984:
    // 0x199984: 0x30451ffc  andi        $a1, $v0, 0x1FFC
    ctx->pc = 0x199984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8188);
label_199988:
    // 0x199988: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x199988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_19998c:
    // 0x19998c: 0x10000040  b           . + 4 + (0x40 << 2)
label_199990:
    if (ctx->pc == 0x199990u) {
        ctx->pc = 0x199990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19998Cu;
        // 0x199990: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199994u;
        goto label_199994;
    }
    ctx->pc = 0x19998Cu;
    {
        const bool branch_taken_0x19998c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19998Cu;
        // 0x199990: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19998c) {
            ctx->pc = 0x199A90u;
            goto label_199a90;
        }
    }
    ctx->pc = 0x199994u;
label_199994:
    // 0x199994: 0x1072818  mult        $a1, $t0, $a3
    ctx->pc = 0x199994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_199998:
    // 0x199998: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x199998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_19999c:
    // 0x19999c: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x19999cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
label_1999a0:
    // 0x1999a0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1999a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1999a4:
    // 0x1999a4: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x1999a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1999a8:
    // 0x1999a8: 0x62103  sra         $a0, $a2, 4
    ctx->pc = 0x1999a8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
label_1999ac:
    // 0x1999ac: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x1999acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_1999b0:
    // 0x1999b0: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x1999b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1999b4:
    // 0x1999b4: 0x1260002f  beqz        $s3, . + 4 + (0x2F << 2)
label_1999b8:
    if (ctx->pc == 0x1999B8u) {
        ctx->pc = 0x1999B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999B4u;
        // 0x1999b8: 0x30910007  andi        $s1, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1999BCu;
        goto label_1999bc;
    }
    ctx->pc = 0x1999B4u;
    {
        const bool branch_taken_0x1999b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1999B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999B4u;
        // 0x1999b8: 0x30910007  andi        $s1, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1999b4) {
            ctx->pc = 0x199A74u;
            goto label_199a74;
        }
    }
    ctx->pc = 0x1999BCu;
label_1999bc:
    // 0x1999bc: 0x24e2000f  addiu       $v0, $a3, 0xF
    ctx->pc = 0x1999bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
label_1999c0:
    // 0x1999c0: 0x30451ff0  andi        $a1, $v0, 0x1FF0
    ctx->pc = 0x1999c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8176);
label_1999c4:
    // 0x1999c4: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x1999c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1999c8:
    // 0x1999c8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1999c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1999cc:
    // 0x1999cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1999ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1999d0:
    // 0x1999d0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1999d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1999d4:
    // 0x1999d4: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x1999d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1999d8:
    // 0x1999d8: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1999d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1999dc:
    // 0x1999dc: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1999e0:
    if (ctx->pc == 0x1999E0u) {
        ctx->pc = 0x1999E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999DCu;
        // 0x1999e0: 0x2476ffff  addiu       $s6, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1999E4u;
        goto label_1999e4;
    }
    ctx->pc = 0x1999DCu;
    {
        const bool branch_taken_0x1999dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1999E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999DCu;
        // 0x1999e0: 0x2476ffff  addiu       $s6, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1999dc) {
            ctx->pc = 0x199A9Cu;
            goto label_199a9c;
        }
    }
    ctx->pc = 0x1999E4u;
label_1999e4:
    // 0x1999e4: 0x1071818  mult        $v1, $t0, $a3
    ctx->pc = 0x1999e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1999e8:
    // 0x1999e8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1999e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1999ec:
    // 0x1999ec: 0x34a5fff8  ori         $a1, $a1, 0xFFF8
    ctx->pc = 0x1999ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65528);
label_1999f0:
    // 0x1999f0: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x1999f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1999f4:
    // 0x1999f4: 0x61103  sra         $v0, $a2, 4
    ctx->pc = 0x1999f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
label_1999f8:
    // 0x1999f8: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x1999f8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_1999fc:
    // 0x1999fc: 0x459024  and         $s2, $v0, $a1
    ctx->pc = 0x1999fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_199a00:
    // 0x199a00: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
label_199a04:
    if (ctx->pc == 0x199A04u) {
        ctx->pc = 0x199A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A00u;
        // 0x199a04: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A08u;
        goto label_199a08;
    }
    ctx->pc = 0x199A00u;
    {
        const bool branch_taken_0x199a00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A00u;
        // 0x199a04: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a00) {
            ctx->pc = 0x199A74u;
            goto label_199a74;
        }
    }
    ctx->pc = 0x199A08u;
label_199a08:
    // 0x199a08: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x199a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
label_199a0c:
    // 0x199a0c: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x199a0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_199a10:
    // 0x199a10: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x199a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_199a14:
    // 0x199a14: 0x1000001e  b           . + 4 + (0x1E << 2)
label_199a18:
    if (ctx->pc == 0x199A18u) {
        ctx->pc = 0x199A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A14u;
        // 0x199a18: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A1Cu;
        goto label_199a1c;
    }
    ctx->pc = 0x199A14u;
    {
        const bool branch_taken_0x199a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A14u;
        // 0x199a18: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a14) {
            ctx->pc = 0x199A90u;
            goto label_199a90;
        }
    }
    ctx->pc = 0x199A1Cu;
label_199a1c:
    // 0x199a1c: 0x1073018  mult        $a2, $t0, $a3
    ctx->pc = 0x199a1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_199a20:
    // 0x199a20: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x199a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_199a24:
    // 0x199a24: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x199a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
label_199a28:
    // 0x199a28: 0x61103  sra         $v0, $a2, 4
    ctx->pc = 0x199a28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
label_199a2c:
    // 0x199a2c: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x199a2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_199a30:
    // 0x199a30: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x199a30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_199a34:
    // 0x199a34: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_199a38:
    if (ctx->pc == 0x199A38u) {
        ctx->pc = 0x199A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A34u;
        // 0x199a38: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A3Cu;
        goto label_199a3c;
    }
    ctx->pc = 0x199A34u;
    {
        const bool branch_taken_0x199a34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A34u;
        // 0x199a38: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a34) {
            ctx->pc = 0x199A74u;
            goto label_199a74;
        }
    }
    ctx->pc = 0x199A3Cu;
label_199a3c:
    // 0x199a3c: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x199a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
label_199a40:
    // 0x199a40: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x199a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_199a44:
    // 0x199a44: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x199a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_199a48:
    // 0x199a48: 0x10000011  b           . + 4 + (0x11 << 2)
label_199a4c:
    if (ctx->pc == 0x199A4Cu) {
        ctx->pc = 0x199A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A48u;
        // 0x199a4c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A50u;
        goto label_199a50;
    }
    ctx->pc = 0x199A48u;
    {
        const bool branch_taken_0x199a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A48u;
        // 0x199a4c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a48) {
            ctx->pc = 0x199A90u;
            goto label_199a90;
        }
    }
    ctx->pc = 0x199A50u;
label_199a50:
    // 0x199a50: 0x1071018  mult        $v0, $t0, $a3
    ctx->pc = 0x199a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_199a54:
    // 0x199a54: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x199a54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_199a58:
    // 0x199a58: 0x34a5fff8  ori         $a1, $a1, 0xFFF8
    ctx->pc = 0x199a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65528);
label_199a5c:
    // 0x199a5c: 0x21943  sra         $v1, $v0, 5
    ctx->pc = 0x199a5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
label_199a60:
    // 0x199a60: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x199a60u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
label_199a64:
    // 0x199a64: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x199a64u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_199a68:
    // 0x199a68: 0x659024  and         $s2, $v1, $a1
    ctx->pc = 0x199a68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_199a6c:
    // 0x199a6c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
label_199a70:
    if (ctx->pc == 0x199A70u) {
        ctx->pc = 0x199A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A6Cu;
        // 0x199a70: 0x30710007  andi        $s1, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A74u;
        goto label_199a74;
    }
    ctx->pc = 0x199A6Cu;
    {
        const bool branch_taken_0x199a6c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x199A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A6Cu;
        // 0x199a70: 0x30710007  andi        $s1, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a6c) {
            ctx->pc = 0x199A80u;
            goto label_199a80;
        }
    }
    ctx->pc = 0x199A74u;
label_199a74:
    // 0x199a74: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x199a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_199a78:
    // 0x199a78: 0x10000008  b           . + 4 + (0x8 << 2)
label_199a7c:
    if (ctx->pc == 0x199A7Cu) {
        ctx->pc = 0x199A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A78u;
        // 0x199a7c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A80u;
        goto label_199a80;
    }
    ctx->pc = 0x199A78u;
    {
        const bool branch_taken_0x199a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A78u;
        // 0x199a7c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a78) {
            ctx->pc = 0x199A9Cu;
            goto label_199a9c;
        }
    }
    ctx->pc = 0x199A80u;
label_199a80:
    // 0x199a80: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x199a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
label_199a84:
    // 0x199a84: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x199a84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_199a88:
    // 0x199a88: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x199a88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_199a8c:
    // 0x199a8c: 0x31143  sra         $v0, $v1, 5
    ctx->pc = 0x199a8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
label_199a90:
    // 0x199a90: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x199a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_199a94:
    // 0x199a94: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x199a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_199a98:
    // 0x199a98: 0x2456ffff  addiu       $s6, $v0, -0x1
    ctx->pc = 0x199a98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_199a9c:
    // 0x199a9c: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_199aa0:
    if (ctx->pc == 0x199AA0u) {
        ctx->pc = 0x199AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A9Cu;
        // 0x199aa0: 0x31230fff  andi        $v1, $t1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x199AA4u;
        goto label_199aa4;
    }
    ctx->pc = 0x199A9Cu;
    {
        const bool branch_taken_0x199a9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x199AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A9Cu;
        // 0x199aa0: 0x31230fff  andi        $v1, $t1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a9c) {
            ctx->pc = 0x199AC4u;
            goto label_199ac4;
        }
    }
    ctx->pc = 0x199AA4u;
label_199aa4:
    // 0x199aa4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x199aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_199aa8:
    // 0x199aa8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x199aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_199aac:
    // 0x199aac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x199aacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_199ab0:
    // 0x199ab0: 0x26820040  addiu       $v0, $s4, 0x40
    ctx->pc = 0x199ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_199ab4:
    // 0x199ab4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x199ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_199ab8:
    // 0x199ab8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x199ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_199abc:
    // 0x199abc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x199abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_199ac0:
    // 0x199ac0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x199ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_199ac4:
    // 0x199ac4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_199ac8:
    // 0x199ac8: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x199ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
label_199acc:
    // 0x199acc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_199ad0:
    // 0x199ad0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x199ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_199ad4:
    // 0x199ad4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_199ad8:
    if (ctx->pc == 0x199AD8u) {
        ctx->pc = 0x199AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AD4u;
        // 0x199ad8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199ADCu;
        goto label_199adc;
    }
    ctx->pc = 0x199AD4u;
    {
        const bool branch_taken_0x199ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AD4u;
        // 0x199ad8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ad4) {
            ctx->pc = 0x199B04u;
            goto label_199b04;
        }
    }
    ctx->pc = 0x199ADCu;
label_199adc:
    // 0x199adc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x199adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_199ae0:
    // 0x199ae0: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x199ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_199ae4:
    // 0x199ae4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199ae8:
    // 0x199ae8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199ae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_199aec:
    // 0x199aec: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
label_199af0:
    if (ctx->pc == 0x199AF0u) {
        ctx->pc = 0x199AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AECu;
        // 0x199af0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199AF4u;
        goto label_199af4;
    }
    ctx->pc = 0x199AECu;
    {
        const bool branch_taken_0x199aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AECu;
        // 0x199af0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199aec) {
            ctx->pc = 0x199C68u;
            goto label_199c68;
        }
    }
    ctx->pc = 0x199AF4u;
label_199af4:
    // 0x199af4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_199af8:
    // 0x199af8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_199afc:
    // 0x199afc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_199b00:
    if (ctx->pc == 0x199B00u) {
        ctx->pc = 0x199B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AFCu;
        // 0x199b00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B04u;
        goto label_199b04;
    }
    ctx->pc = 0x199AFCu;
    {
        const bool branch_taken_0x199afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AFCu;
        // 0x199b00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199afc) {
            ctx->pc = 0x199AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199ae8;
        }
    }
    ctx->pc = 0x199B04u;
label_199b04:
    // 0x199b04: 0xc0692d0  jal         func_1A4B40
label_199b08:
    if (ctx->pc == 0x199B08u) {
        ctx->pc = 0x199B0Cu;
        goto label_199b0c;
    }
    ctx->pc = 0x199B04u;
    SET_GPR_U32(ctx, 31, 0x199B0Cu);
    ctx->pc = 0x1A4B40u;
    { ctx->pc = 0x1a4b40; return; }
    ctx->pc = 0x199B0Cu;
label_199b0c:
    // 0x199b0c: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x199b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_199b10:
    // 0x199b10: 0xc0692d8  jal         func_1A4B60
label_199b14:
    if (ctx->pc == 0x199B14u) {
        ctx->pc = 0x199B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B10u;
        // 0x199b14: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B18u;
        goto label_199b18;
    }
    ctx->pc = 0x199B10u;
    SET_GPR_U32(ctx, 31, 0x199B18u);
    ctx->pc = 0x199B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199B10u;
    // 0x199b14: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    { ctx->pc = 0x1a4b60; return; }
    ctx->pc = 0x199B18u;
label_199b18:
    // 0x199b18: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x199b18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_199b1c:
    // 0x199b1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x199b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_199b20:
    // 0x199b20: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x199b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
label_199b24:
    // 0x199b24: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_199b28:
    // 0x199b28: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x199b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_199b2c:
    // 0x199b2c: 0x34639020  ori         $v1, $v1, 0x9020
    ctx->pc = 0x199b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36896);
label_199b30:
    // 0x199b30: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x199b30u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
label_199b34:
    // 0x199b34: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x199b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
label_199b38:
    // 0x199b38: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x199b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_199b3c:
    // 0x199b3c: 0x2851024  and         $v0, $s4, $a1
    ctx->pc = 0x199b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
label_199b40:
    // 0x199b40: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x199b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_199b44:
    // 0x199b44: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
label_199b48:
    if (ctx->pc == 0x199B48u) {
        ctx->pc = 0x199B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B44u;
        // 0x199b48: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B4Cu;
        goto label_199b4c;
    }
    ctx->pc = 0x199B44u;
    {
        const bool branch_taken_0x199b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x199B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B44u;
        // 0x199b48: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b44) {
            ctx->pc = 0x199B68u;
            goto label_199b68;
        }
    }
    ctx->pc = 0x199B4Cu;
label_199b4c:
    // 0x199b4c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_199b50:
    // 0x199b50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x199b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_199b54:
    // 0x199b54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x199b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_199b58:
    // 0x199b58: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x199b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_199b5c:
    // 0x199b5c: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x199b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
label_199b60:
    // 0x199b60: 0x10000005  b           . + 4 + (0x5 << 2)
label_199b64:
    if (ctx->pc == 0x199B64u) {
        ctx->pc = 0x199B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B60u;
        // 0x199b64: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B68u;
        goto label_199b68;
    }
    ctx->pc = 0x199B60u;
    {
        const bool branch_taken_0x199b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B60u;
        // 0x199b64: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b60) {
            ctx->pc = 0x199B78u;
            goto label_199b78;
        }
    }
    ctx->pc = 0x199B68u;
label_199b68:
    // 0x199b68: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_199b6c:
    // 0x199b6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x199b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_199b70:
    // 0x199b70: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x199b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
label_199b74:
    // 0x199b74: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x199b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_199b78:
    // 0x199b78: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x199b78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_199b7c:
    // 0x199b7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_199b80:
    // 0x199b80: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x199b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_199b84:
    // 0x199b84: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x199b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
label_199b88:
    // 0x199b88: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x199b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_199b8c:
    // 0x199b8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_199b90:
    // 0x199b90: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x199b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_199b94:
    // 0x199b94: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_199b98:
    if (ctx->pc == 0x199B98u) {
        ctx->pc = 0x199B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B94u;
        // 0x199b98: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199B9Cu;
        goto label_199b9c;
    }
    ctx->pc = 0x199B94u;
    {
        const bool branch_taken_0x199b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B94u;
        // 0x199b98: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b94) {
            ctx->pc = 0x199BC4u;
            goto label_199bc4;
        }
    }
    ctx->pc = 0x199B9Cu;
label_199b9c:
    // 0x199b9c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x199b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_199ba0:
    // 0x199ba0: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x199ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_199ba4:
    // 0x199ba4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199ba8:
    // 0x199ba8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_199bac:
    // 0x199bac: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_199bb0:
    if (ctx->pc == 0x199BB0u) {
        ctx->pc = 0x199BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BACu;
        // 0x199bb0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199BB4u;
        goto label_199bb4;
    }
    ctx->pc = 0x199BACu;
    {
        const bool branch_taken_0x199bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BACu;
        // 0x199bb0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199bac) {
            ctx->pc = 0x199C68u;
            goto label_199c68;
        }
    }
    ctx->pc = 0x199BB4u;
label_199bb4:
    // 0x199bb4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_199bb8:
    // 0x199bb8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_199bbc:
    // 0x199bbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_199bc0:
    if (ctx->pc == 0x199BC0u) {
        ctx->pc = 0x199BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BBCu;
        // 0x199bc0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199BC4u;
        goto label_199bc4;
    }
    ctx->pc = 0x199BBCu;
    {
        const bool branch_taken_0x199bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BBCu;
        // 0x199bc0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199bbc) {
            ctx->pc = 0x199BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199ba8;
        }
    }
    ctx->pc = 0x199BC4u;
label_199bc4:
    // 0x199bc4: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x199bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
label_199bc8:
    // 0x199bc8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x199bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_199bcc:
    // 0x199bcc: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x199bccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_199bd0:
    // 0x199bd0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x199bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_199bd4:
    // 0x199bd4: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_199bd8:
    if (ctx->pc == 0x199BD8u) {
        ctx->pc = 0x199BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BD4u;
        // 0x199bd8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199BDCu;
        goto label_199bdc;
    }
    ctx->pc = 0x199BD4u;
    {
        const bool branch_taken_0x199bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BD4u;
        // 0x199bd8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199bd4) {
            ctx->pc = 0x199C10u;
            goto label_199c10;
        }
    }
    ctx->pc = 0x199BDCu;
label_199bdc:
    // 0x199bdc: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x199bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
label_199be0:
    // 0x199be0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x199be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_199be4:
    // 0x199be4: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x199be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_199be8:
    // 0x199be8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199bec:
    // 0x199bec: 0x0  nop
    ctx->pc = 0x199becu;
    // NOP
label_199bf0:
    // 0x199bf0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_199bf4:
    // 0x199bf4: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_199bf8:
    if (ctx->pc == 0x199BF8u) {
        ctx->pc = 0x199BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BF4u;
        // 0x199bf8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199BFCu;
        goto label_199bfc;
    }
    ctx->pc = 0x199BF4u;
    {
        const bool branch_taken_0x199bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BF4u;
        // 0x199bf8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199bf4) {
            ctx->pc = 0x199C7Cu;
            goto label_199c7c;
        }
    }
    ctx->pc = 0x199BFCu;
label_199bfc:
    // 0x199bfc: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x199bfcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_199c00:
    // 0x199c00: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x199c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_199c04:
    // 0x199c04: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_199c08:
    if (ctx->pc == 0x199C08u) {
        ctx->pc = 0x199C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C04u;
        // 0x199c08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C0Cu;
        goto label_199c0c;
    }
    ctx->pc = 0x199C04u;
    {
        const bool branch_taken_0x199c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C04u;
        // 0x199c08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c04) {
            ctx->pc = 0x199BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199bf0;
        }
    }
    ctx->pc = 0x199C0Cu;
label_199c0c:
    // 0x199c0c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_199c10:
    // 0x199c10: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x199c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
label_199c14:
    // 0x199c14: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x199c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
label_199c18:
    // 0x199c18: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x199c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
label_199c1c:
    // 0x199c1c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x199c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_199c20:
    // 0x199c20: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x199c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
label_199c24:
    // 0x199c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199c28:
    // 0x199c28: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x199c28u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_199c2c:
    // 0x199c2c: 0x1240004f  beqz        $s2, . + 4 + (0x4F << 2)
label_199c30:
    if (ctx->pc == 0x199C30u) {
        ctx->pc = 0x199C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C2Cu;
        // 0x199c30: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C34u;
        goto label_199c34;
    }
    ctx->pc = 0x199C2Cu;
    {
        const bool branch_taken_0x199c2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C2Cu;
        // 0x199c30: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c2c) {
            ctx->pc = 0x199D6Cu;
            goto label_199d6c;
        }
    }
    ctx->pc = 0x199C34u;
label_199c34:
    // 0x199c34: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x199c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_199c38:
    // 0x199c38: 0x34429020  ori         $v0, $v0, 0x9020
    ctx->pc = 0x199c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36896);
label_199c3c:
    // 0x199c3c: 0x2a41824  and         $v1, $s5, $a0
    ctx->pc = 0x199c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 4));
label_199c40:
    // 0x199c40: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x199c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_199c44:
    // 0x199c44: 0x14640031  bne         $v1, $a0, . + 4 + (0x31 << 2)
label_199c48:
    if (ctx->pc == 0x199C48u) {
        ctx->pc = 0x199C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C44u;
        // 0x199c48: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C4Cu;
        goto label_199c4c;
    }
    ctx->pc = 0x199C44u;
    {
        const bool branch_taken_0x199c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x199C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C44u;
        // 0x199c48: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c44) {
            ctx->pc = 0x199D0Cu;
            goto label_199d0c;
        }
    }
    ctx->pc = 0x199C4Cu;
label_199c4c:
    // 0x199c4c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_199c50:
    // 0x199c50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x199c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_199c54:
    // 0x199c54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x199c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_199c58:
    // 0x199c58: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x199c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_199c5c:
    // 0x199c5c: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x199c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
label_199c60:
    // 0x199c60: 0x1000002e  b           . + 4 + (0x2E << 2)
label_199c64:
    if (ctx->pc == 0x199C64u) {
        ctx->pc = 0x199C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C60u;
        // 0x199c64: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C68u;
        goto label_199c68;
    }
    ctx->pc = 0x199C60u;
    {
        const bool branch_taken_0x199c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C60u;
        // 0x199c64: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c60) {
            ctx->pc = 0x199D1Cu;
            goto label_199d1c;
        }
    }
    ctx->pc = 0x199C68u;
label_199c68:
    // 0x199c68: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_199c6c:
    // 0x199c6c: 0xc08ee2e  jal         func_23B8B8
label_199c70:
    if (ctx->pc == 0x199C70u) {
        ctx->pc = 0x199C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C6Cu;
        // 0x199c70: 0x24849dc0  addiu       $a0, $a0, -0x6240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C74u;
        goto label_199c74;
    }
    ctx->pc = 0x199C6Cu;
    SET_GPR_U32(ctx, 31, 0x199C74u);
    ctx->pc = 0x199C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C6Cu;
    // 0x199c70: 0x24849dc0  addiu       $a0, $a0, -0x6240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x199C74u;
label_199c74:
    // 0x199c74: 0x100000ab  b           . + 4 + (0xAB << 2)
label_199c78:
    if (ctx->pc == 0x199C78u) {
        ctx->pc = 0x199C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C74u;
        // 0x199c78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C7Cu;
        goto label_199c7c;
    }
    ctx->pc = 0x199C74u;
    {
        const bool branch_taken_0x199c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C74u;
        // 0x199c78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c74) {
            ctx->pc = 0x199F24u;
            { ctx->pc = 0x199f24; return; }
        }
    }
    ctx->pc = 0x199C7Cu;
label_199c7c:
    // 0x199c7c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_199c80:
    // 0x199c80: 0xc08ee2e  jal         func_23B8B8
label_199c84:
    if (ctx->pc == 0x199C84u) {
        ctx->pc = 0x199C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C80u;
        // 0x199c84: 0x24849df8  addiu       $a0, $a0, -0x6208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199C88u;
        goto label_199c88;
    }
    ctx->pc = 0x199C80u;
    SET_GPR_U32(ctx, 31, 0x199C88u);
    ctx->pc = 0x199C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C80u;
    // 0x199c84: 0x24849df8  addiu       $a0, $a0, -0x6208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x199C88u;
label_199c88:
    // 0x199c88: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x199c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_199c8c:
    // 0x199c8c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x199c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_199c90:
    // 0x199c90: 0x246357e0  addiu       $v1, $v1, 0x57E0
    ctx->pc = 0x199c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22496));
label_199c94:
    // 0x199c94: 0x34a55000  ori         $a1, $a1, 0x5000
    ctx->pc = 0x199c94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20480);
label_199c98:
    // 0x199c98: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x199c98u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_199c9c:
    // 0x199c9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x199c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_199ca0:
    // 0x199ca0: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x199ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_199ca4:
    // 0x199ca4: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_199ca8:
    if (ctx->pc == 0x199CA8u) {
        ctx->pc = 0x199CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CA4u;
        // 0x199ca8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199CACu;
        goto label_199cac;
    }
    ctx->pc = 0x199CA4u;
    {
        const bool branch_taken_0x199ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CA4u;
        // 0x199ca8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ca4) {
            ctx->pc = 0x199F28u;
            { ctx->pc = 0x199f28; return; }
        }
    }
    ctx->pc = 0x199CACu;
label_199cac:
    // 0x199cac: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_199cb0:
    // 0x199cb0: 0x10000003  b           . + 4 + (0x3 << 2)
label_199cb4:
    if (ctx->pc == 0x199CB4u) {
        ctx->pc = 0x199CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CB0u;
        // 0x199cb4: 0x24849e28  addiu       $a0, $a0, -0x61D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199CB8u;
        goto label_199cb8;
    }
    ctx->pc = 0x199CB0u;
    {
        const bool branch_taken_0x199cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CB0u;
        // 0x199cb4: 0x24849e28  addiu       $a0, $a0, -0x61D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199cb0) {
            ctx->pc = 0x199CC0u;
            goto label_199cc0;
        }
    }
    ctx->pc = 0x199CB8u;
label_199cb8:
    // 0x199cb8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_199cbc:
    // 0x199cbc: 0x24849e68  addiu       $a0, $a0, -0x6198
    ctx->pc = 0x199cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942312));
label_199cc0:
    // 0x199cc0: 0xc08ee2e  jal         func_23B8B8
label_199cc4:
    if (ctx->pc == 0x199CC4u) {
        ctx->pc = 0x199CC8u;
        goto label_199cc8;
    }
    ctx->pc = 0x199CC0u;
    SET_GPR_U32(ctx, 31, 0x199CC8u);
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x199CC8u;
label_199cc8:
    // 0x199cc8: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x199cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
label_199ccc:
    // 0x199ccc: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x199cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_199cd0:
    // 0x199cd0: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x199cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_199cd4:
    // 0x199cd4: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x199cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
label_199cd8:
    // 0x199cd8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x199cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
label_199cdc:
    // 0x199cdc: 0x34421040  ori         $v0, $v0, 0x1040
    ctx->pc = 0x199cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4160);
label_199ce0:
    // 0x199ce0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x199ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_199ce4:
    // 0x199ce4: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x199ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
label_199ce8:
    // 0x199ce8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x199ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199cec:
    // 0x199cec: 0x34843000  ori         $a0, $a0, 0x3000
    ctx->pc = 0x199cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12288);
label_199cf0:
    // 0x199cf0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_199cf4:
    // 0x199cf4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x199cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_199cf8:
    // 0x199cf8: 0x34633c10  ori         $v1, $v1, 0x3C10
    ctx->pc = 0x199cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15376);
label_199cfc:
    // 0x199cfc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x199cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_199d00:
    // 0x199d00: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x199d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_199d04:
    // 0x199d04: 0x10000088  b           . + 4 + (0x88 << 2)
label_199d08:
    if (ctx->pc == 0x199D08u) {
        ctx->pc = 0x199D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D04u;
        // 0x199d08: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D0Cu;
        goto label_199d0c;
    }
    ctx->pc = 0x199D04u;
    {
        const bool branch_taken_0x199d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D04u;
        // 0x199d08: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d04) {
            ctx->pc = 0x199F28u;
            { ctx->pc = 0x199f28; return; }
        }
    }
    ctx->pc = 0x199D0Cu;
label_199d0c:
    // 0x199d0c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_199d10:
    // 0x199d10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x199d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_199d14:
    // 0x199d14: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x199d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
label_199d18:
    // 0x199d18: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x199d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_199d1c:
    // 0x199d1c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x199d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_199d20:
    // 0x199d20: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_199d24:
    // 0x199d24: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x199d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_199d28:
    // 0x199d28: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x199d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
label_199d2c:
    // 0x199d2c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x199d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_199d30:
    // 0x199d30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_199d34:
    // 0x199d34: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x199d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_199d38:
    // 0x199d38: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_199d3c:
    if (ctx->pc == 0x199D3Cu) {
        ctx->pc = 0x199D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D38u;
        // 0x199d3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D40u;
        goto label_199d40;
    }
    ctx->pc = 0x199D38u;
    {
        const bool branch_taken_0x199d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D38u;
        // 0x199d3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d38) {
            ctx->pc = 0x199D6Cu;
            goto label_199d6c;
        }
    }
    ctx->pc = 0x199D40u;
label_199d40:
    // 0x199d40: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_199d44:
    // 0x199d44: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x199d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_199d48:
    // 0x199d48: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x199d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_199d4c:
    // 0x199d4c: 0x0  nop
    ctx->pc = 0x199d4cu;
    // NOP
label_199d50:
    // 0x199d50: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_199d54:
    // 0x199d54: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_199d58:
    if (ctx->pc == 0x199D58u) {
        ctx->pc = 0x199D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D54u;
        // 0x199d58: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D5Cu;
        goto label_199d5c;
    }
    ctx->pc = 0x199D54u;
    {
        const bool branch_taken_0x199d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D54u;
        // 0x199d58: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d54) {
            ctx->pc = 0x199CACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199cac;
        }
    }
    ctx->pc = 0x199D5Cu;
label_199d5c:
    // 0x199d5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_199d60:
    // 0x199d60: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_199d64:
    // 0x199d64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_199d68:
    if (ctx->pc == 0x199D68u) {
        ctx->pc = 0x199D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D64u;
        // 0x199d68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D6Cu;
        goto label_199d6c;
    }
    ctx->pc = 0x199D64u;
    {
        const bool branch_taken_0x199d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D64u;
        // 0x199d68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d64) {
            ctx->pc = 0x199D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199d50;
        }
    }
    ctx->pc = 0x199D6Cu;
label_199d6c:
    // 0x199d6c: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_199d70:
    if (ctx->pc == 0x199D70u) {
        ctx->pc = 0x199D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D6Cu;
        // 0x199d70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D74u;
        goto label_199d74;
    }
    ctx->pc = 0x199D6Cu;
    {
        const bool branch_taken_0x199d6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D6Cu;
        // 0x199d70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d6c) {
            ctx->pc = 0x199DE4u;
            goto label_199de4;
        }
    }
    ctx->pc = 0x199D74u;
label_199d74:
    // 0x199d74: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x199d74u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
label_199d78:
    // 0x199d78: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x199d78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_199d7c:
    // 0x199d7c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x199d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_199d80:
    // 0x199d80: 0x35293c00  ori         $t1, $t1, 0x3C00
    ctx->pc = 0x199d80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)15360);
label_199d84:
    // 0x199d84: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x199d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_199d88:
    // 0x199d88: 0x3c0a1f00  lui         $t2, 0x1F00
    ctx->pc = 0x199d88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)7936 << 16));
label_199d8c:
    // 0x199d8c: 0x35085000  ori         $t0, $t0, 0x5000
    ctx->pc = 0x199d8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)20480);
label_199d90:
    // 0x199d90: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x199d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_199d94:
    // 0x199d94: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x199d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
label_199d98:
    // 0x199d98: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_199d9c:
    if (ctx->pc == 0x199D9Cu) {
        ctx->pc = 0x199D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D98u;
        // 0x199d9c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199DA0u;
        goto label_199da0;
    }
    ctx->pc = 0x199D98u;
    {
        const bool branch_taken_0x199d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D98u;
        // 0x199d9c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d98) {
            ctx->pc = 0x199DCCu;
            goto label_199dcc;
        }
    }
    ctx->pc = 0x199DA0u;
label_199da0:
    // 0x199da0: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x199da0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
label_199da4:
    // 0x199da4: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x199da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
label_199da8:
    // 0x199da8: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x199da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
label_199dac:
    // 0x199dac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199db0:
    // 0x199db0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x199db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_199db4:
    // 0x199db4: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
label_199db8:
    if (ctx->pc == 0x199DB8u) {
        ctx->pc = 0x199DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DB4u;
        // 0x199db8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199DBCu;
        goto label_199dbc;
    }
    ctx->pc = 0x199DB4u;
    {
        const bool branch_taken_0x199db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DB4u;
        // 0x199db8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199db4) {
            ctx->pc = 0x199CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199cb8;
        }
    }
    ctx->pc = 0x199DBCu;
label_199dbc:
    // 0x199dbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_199dc0:
    // 0x199dc0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x199dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_199dc4:
    // 0x199dc4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_199dc8:
    if (ctx->pc == 0x199DC8u) {
        ctx->pc = 0x199DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DC4u;
        // 0x199dc8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199DCCu;
        goto label_199dcc;
    }
    ctx->pc = 0x199DC4u;
    {
        const bool branch_taken_0x199dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DC4u;
        // 0x199dc8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199dc4) {
            ctx->pc = 0x199DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199db0;
        }
    }
    ctx->pc = 0x199DCCu;
label_199dcc:
    // 0x199dcc: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x199dccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_199dd0:
    // 0x199dd0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x199dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_199dd4:
    // 0x199dd4: 0xb1182a  slt         $v1, $a1, $s1
    ctx->pc = 0x199dd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_199dd8:
    // 0x199dd8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x199dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_199ddc:
    // 0x199ddc: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_199de0:
    if (ctx->pc == 0x199DE0u) {
        ctx->pc = 0x199DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DDCu;
        // 0x199de0: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199DE4u;
        goto label_199de4;
    }
    ctx->pc = 0x199DDCu;
    {
        const bool branch_taken_0x199ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DDCu;
        // 0x199de0: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ddc) {
            ctx->pc = 0x199D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199d90;
        }
    }
    ctx->pc = 0x199DE4u;
label_199de4:
    // 0x199de4: 0x1260003c  beqz        $s3, . + 4 + (0x3C << 2)
label_199de8:
    if (ctx->pc == 0x199DE8u) {
        ctx->pc = 0x199DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DE4u;
        // 0x199de8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199DECu;
        goto label_199dec;
    }
    ctx->pc = 0x199DE4u;
    {
        const bool branch_taken_0x199de4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x199DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DE4u;
        // 0x199de8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199de4) {
            ctx->pc = 0x199ED8u;
            { ctx->pc = 0x199ed8; return; }
        }
    }
    ctx->pc = 0x199DECu;
label_199dec:
    // 0x199dec: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x199decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
label_199df0:
    // 0x199df0: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x199df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
label_199df4:
    // 0x199df4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_199df8:
    // 0x199df8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x199df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_199dfc:
    // 0x199dfc: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_199e00:
    if (ctx->pc == 0x199E00u) {
        ctx->pc = 0x199E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DFCu;
        // 0x199e00: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199E04u;
        goto label_199e04;
    }
    ctx->pc = 0x199DFCu;
    {
        const bool branch_taken_0x199dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DFCu;
        // 0x199e00: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199dfc) {
            ctx->pc = 0x199E30u;
            goto label_199e30;
        }
    }
    ctx->pc = 0x199E04u;
label_199e04:
    // 0x199e04: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x199e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_199e08:
    // 0x199e08: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x199e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
label_199e0c:
    // 0x199e0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199e10:
    // 0x199e10: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x199e10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_199e14:
    // 0x199e14: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
label_199e18:
    if (ctx->pc == 0x199E18u) {
        ctx->pc = 0x199E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E14u;
        // 0x199e18: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199E1Cu;
        goto label_199e1c;
    }
    ctx->pc = 0x199E14u;
    {
        const bool branch_taken_0x199e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E14u;
        // 0x199e18: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e14) {
            ctx->pc = 0x199CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199cb8;
        }
    }
    ctx->pc = 0x199E1Cu;
label_199e1c:
    // 0x199e1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_199e20:
    // 0x199e20: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x199e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_199e24:
    // 0x199e24: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_199e28:
    if (ctx->pc == 0x199E28u) {
        ctx->pc = 0x199E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E24u;
        // 0x199e28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199E2Cu;
        goto label_199e2c;
    }
    ctx->pc = 0x199E24u;
    {
        const bool branch_taken_0x199e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E24u;
        // 0x199e28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e24) {
            ctx->pc = 0x199E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199e10;
        }
    }
    ctx->pc = 0x199E2Cu;
label_199e2c:
    // 0x199e2c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_199e30:
    // 0x199e30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199e34:
    // 0x199e34: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x199e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
label_199e38:
    // 0x199e38: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x199e38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_199e3c:
    // 0x199e3c: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_199e40:
    if (ctx->pc == 0x199E40u) {
        ctx->pc = 0x199E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E3Cu;
        // 0x199e40: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199E44u;
        goto label_199e44;
    }
    ctx->pc = 0x199E3Cu;
    {
        const bool branch_taken_0x199e3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x199E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E3Cu;
        // 0x199e40: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e3c) {
            ctx->pc = 0x199E6Cu;
            goto label_199e6c;
        }
    }
    ctx->pc = 0x199E44u;
label_199e44:
    // 0x199e44: 0x2513021  addu        $a2, $s2, $s1
    ctx->pc = 0x199e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_199e48:
    // 0x199e48: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x199e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_199e4c:
    // 0x199e4c: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x199e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_199e50:
    // 0x199e50: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x199e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_199e54:
    // 0x199e54: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x199e54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_199e58:
    // 0x199e58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x199e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_199e5c:
    // 0x199e5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x199e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_199e60:
    // 0x199e60: 0xb3102a  slt         $v0, $a1, $s3
    ctx->pc = 0x199e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_199e64:
    // 0x199e64: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_199e68:
    if (ctx->pc == 0x199E68u) {
        ctx->pc = 0x199E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E64u;
        // 0x199e68: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199E6Cu;
        goto label_199e6c;
    }
    ctx->pc = 0x199E64u;
    {
        const bool branch_taken_0x199e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E64u;
        // 0x199e68: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e64) {
            ctx->pc = 0x199E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199e48;
        }
    }
    ctx->pc = 0x199E6Cu;
label_199e6c:
    // 0x199e6c: 0x1ac0001a  blez        $s6, . + 4 + (0x1A << 2)
label_199e70:
    if (ctx->pc == 0x199E70u) {
        ctx->pc = 0x199E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E6Cu;
        // 0x199e70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199E74u;
        goto label_199e74;
    }
    ctx->pc = 0x199E6Cu;
    {
        const bool branch_taken_0x199e6c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x199E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E6Cu;
        // 0x199e70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e6c) {
            ctx->pc = 0x199ED8u;
            { ctx->pc = 0x199ed8; return; }
        }
    }
    ctx->pc = 0x199E74u;
label_199e74:
    // 0x199e74: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x199e74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_199e78:
    // 0x199e78: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x199e78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_199e7c:
    // 0x199e7c: 0x35083c00  ori         $t0, $t0, 0x3C00
    ctx->pc = 0x199e7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)15360);
label_199e80:
    // 0x199e80: 0x3c091f00  lui         $t1, 0x1F00
    ctx->pc = 0x199e80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)7936 << 16));
label_199e84:
    // 0x199e84: 0x34e75000  ori         $a3, $a3, 0x5000
    ctx->pc = 0x199e84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)20480);
label_199e88:
    // 0x199e88: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x199e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_199e8c:
    // 0x199e8c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x199e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_199e90:
    // 0x199e90: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_199e94:
    if (ctx->pc == 0x199E94u) {
        ctx->pc = 0x199E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E90u;
        // 0x199e94: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199E98u;
        goto label_199e98;
    }
    ctx->pc = 0x199E90u;
    {
        const bool branch_taken_0x199e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E90u;
        // 0x199e94: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e90) {
            ctx->pc = 0x199EC4u;
            { ctx->pc = 0x199ec4; return; }
        }
    }
    ctx->pc = 0x199E98u;
label_199e98:
    // 0x199e98: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x199e98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
label_199e9c:
    // 0x199e9c: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x199e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
label_199ea0:
    // 0x199ea0: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x199ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
label_199ea4:
    // 0x199ea4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199ea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199ea8:
    // 0x199ea8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x199ea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_199eac:
    // 0x199eac: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
label_199eb0:
    if (ctx->pc == 0x199EB0u) {
        ctx->pc = 0x199EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EACu;
        // 0x199eb0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199EB4u;
        goto label_199eb4;
    }
    ctx->pc = 0x199EACu;
    {
        const bool branch_taken_0x199eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EACu;
        // 0x199eb0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199eac) {
            ctx->pc = 0x199CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199cb8;
        }
    }
    ctx->pc = 0x199EB4u;
label_199eb4:
    // 0x199eb4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_199eb8:
    // 0x199eb8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x199eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_199ebc:
    // 0x199ebc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199ec0u;
    return;
}
