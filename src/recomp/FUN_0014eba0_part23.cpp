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


void FUN_0014eba0_part23(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x159780u: goto label_159780;
        case 0x159784u: goto label_159784;
        case 0x159788u: goto label_159788;
        case 0x15978cu: goto label_15978c;
        case 0x159790u: goto label_159790;
        case 0x159794u: goto label_159794;
        case 0x159798u: goto label_159798;
        case 0x15979cu: goto label_15979c;
        case 0x1597a0u: goto label_1597a0;
        case 0x1597a4u: goto label_1597a4;
        case 0x1597a8u: goto label_1597a8;
        case 0x1597acu: goto label_1597ac;
        case 0x1597b0u: goto label_1597b0;
        case 0x1597b4u: goto label_1597b4;
        case 0x1597b8u: goto label_1597b8;
        case 0x1597bcu: goto label_1597bc;
        case 0x1597c0u: goto label_1597c0;
        case 0x1597c4u: goto label_1597c4;
        case 0x1597c8u: goto label_1597c8;
        case 0x1597ccu: goto label_1597cc;
        case 0x1597d0u: goto label_1597d0;
        case 0x1597d4u: goto label_1597d4;
        case 0x1597d8u: goto label_1597d8;
        case 0x1597dcu: goto label_1597dc;
        case 0x1597e0u: goto label_1597e0;
        case 0x1597e4u: goto label_1597e4;
        case 0x1597e8u: goto label_1597e8;
        case 0x1597ecu: goto label_1597ec;
        case 0x1597f0u: goto label_1597f0;
        case 0x1597f4u: goto label_1597f4;
        case 0x1597f8u: goto label_1597f8;
        case 0x1597fcu: goto label_1597fc;
        case 0x159800u: goto label_159800;
        case 0x159804u: goto label_159804;
        case 0x159808u: goto label_159808;
        case 0x15980cu: goto label_15980c;
        case 0x159810u: goto label_159810;
        case 0x159814u: goto label_159814;
        case 0x159818u: goto label_159818;
        case 0x15981cu: goto label_15981c;
        case 0x159820u: goto label_159820;
        case 0x159824u: goto label_159824;
        case 0x159828u: goto label_159828;
        case 0x15982cu: goto label_15982c;
        case 0x159830u: goto label_159830;
        case 0x159834u: goto label_159834;
        case 0x159838u: goto label_159838;
        case 0x15983cu: goto label_15983c;
        case 0x159840u: goto label_159840;
        case 0x159844u: goto label_159844;
        case 0x159848u: goto label_159848;
        case 0x15984cu: goto label_15984c;
        case 0x159850u: goto label_159850;
        case 0x159854u: goto label_159854;
        case 0x159858u: goto label_159858;
        case 0x15985cu: goto label_15985c;
        case 0x159860u: goto label_159860;
        case 0x159864u: goto label_159864;
        case 0x159868u: goto label_159868;
        case 0x15986cu: goto label_15986c;
        case 0x159870u: goto label_159870;
        case 0x159874u: goto label_159874;
        case 0x159878u: goto label_159878;
        case 0x15987cu: goto label_15987c;
        case 0x159880u: goto label_159880;
        case 0x159884u: goto label_159884;
        case 0x159888u: goto label_159888;
        case 0x15988cu: goto label_15988c;
        case 0x159890u: goto label_159890;
        case 0x159894u: goto label_159894;
        case 0x159898u: goto label_159898;
        case 0x15989cu: goto label_15989c;
        case 0x1598a0u: goto label_1598a0;
        case 0x1598a4u: goto label_1598a4;
        case 0x1598a8u: goto label_1598a8;
        case 0x1598acu: goto label_1598ac;
        case 0x1598b0u: goto label_1598b0;
        case 0x1598b4u: goto label_1598b4;
        case 0x1598b8u: goto label_1598b8;
        case 0x1598bcu: goto label_1598bc;
        case 0x1598c0u: goto label_1598c0;
        case 0x1598c4u: goto label_1598c4;
        case 0x1598c8u: goto label_1598c8;
        case 0x1598ccu: goto label_1598cc;
        case 0x1598d0u: goto label_1598d0;
        case 0x1598d4u: goto label_1598d4;
        case 0x1598d8u: goto label_1598d8;
        case 0x1598dcu: goto label_1598dc;
        case 0x1598e0u: goto label_1598e0;
        case 0x1598e4u: goto label_1598e4;
        case 0x1598e8u: goto label_1598e8;
        case 0x1598ecu: goto label_1598ec;
        case 0x1598f0u: goto label_1598f0;
        case 0x1598f4u: goto label_1598f4;
        case 0x1598f8u: goto label_1598f8;
        case 0x1598fcu: goto label_1598fc;
        case 0x159900u: goto label_159900;
        case 0x159904u: goto label_159904;
        case 0x159908u: goto label_159908;
        case 0x15990cu: goto label_15990c;
        case 0x159910u: goto label_159910;
        case 0x159914u: goto label_159914;
        case 0x159918u: goto label_159918;
        case 0x15991cu: goto label_15991c;
        case 0x159920u: goto label_159920;
        case 0x159924u: goto label_159924;
        case 0x159928u: goto label_159928;
        case 0x15992cu: goto label_15992c;
        case 0x159930u: goto label_159930;
        case 0x159934u: goto label_159934;
        case 0x159938u: goto label_159938;
        case 0x15993cu: goto label_15993c;
        case 0x159940u: goto label_159940;
        case 0x159944u: goto label_159944;
        case 0x159948u: goto label_159948;
        case 0x15994cu: goto label_15994c;
        case 0x159950u: goto label_159950;
        case 0x159954u: goto label_159954;
        case 0x159958u: goto label_159958;
        case 0x15995cu: goto label_15995c;
        case 0x159960u: goto label_159960;
        case 0x159964u: goto label_159964;
        case 0x159968u: goto label_159968;
        case 0x15996cu: goto label_15996c;
        case 0x159970u: goto label_159970;
        case 0x159974u: goto label_159974;
        case 0x159978u: goto label_159978;
        case 0x15997cu: goto label_15997c;
        case 0x159980u: goto label_159980;
        case 0x159984u: goto label_159984;
        case 0x159988u: goto label_159988;
        case 0x15998cu: goto label_15998c;
        case 0x159990u: goto label_159990;
        case 0x159994u: goto label_159994;
        case 0x159998u: goto label_159998;
        case 0x15999cu: goto label_15999c;
        case 0x1599a0u: goto label_1599a0;
        case 0x1599a4u: goto label_1599a4;
        case 0x1599a8u: goto label_1599a8;
        case 0x1599acu: goto label_1599ac;
        case 0x1599b0u: goto label_1599b0;
        case 0x1599b4u: goto label_1599b4;
        case 0x1599b8u: goto label_1599b8;
        case 0x1599bcu: goto label_1599bc;
        case 0x1599c0u: goto label_1599c0;
        case 0x1599c4u: goto label_1599c4;
        case 0x1599c8u: goto label_1599c8;
        case 0x1599ccu: goto label_1599cc;
        case 0x1599d0u: goto label_1599d0;
        case 0x1599d4u: goto label_1599d4;
        case 0x1599d8u: goto label_1599d8;
        case 0x1599dcu: goto label_1599dc;
        case 0x1599e0u: goto label_1599e0;
        case 0x1599e4u: goto label_1599e4;
        case 0x1599e8u: goto label_1599e8;
        case 0x1599ecu: goto label_1599ec;
        case 0x1599f0u: goto label_1599f0;
        case 0x1599f4u: goto label_1599f4;
        case 0x1599f8u: goto label_1599f8;
        case 0x1599fcu: goto label_1599fc;
        case 0x159a00u: goto label_159a00;
        case 0x159a04u: goto label_159a04;
        case 0x159a08u: goto label_159a08;
        case 0x159a0cu: goto label_159a0c;
        case 0x159a10u: goto label_159a10;
        case 0x159a14u: goto label_159a14;
        case 0x159a18u: goto label_159a18;
        case 0x159a1cu: goto label_159a1c;
        case 0x159a20u: goto label_159a20;
        case 0x159a24u: goto label_159a24;
        case 0x159a28u: goto label_159a28;
        case 0x159a2cu: goto label_159a2c;
        case 0x159a30u: goto label_159a30;
        case 0x159a34u: goto label_159a34;
        case 0x159a38u: goto label_159a38;
        case 0x159a3cu: goto label_159a3c;
        case 0x159a40u: goto label_159a40;
        case 0x159a44u: goto label_159a44;
        case 0x159a48u: goto label_159a48;
        case 0x159a4cu: goto label_159a4c;
        case 0x159a50u: goto label_159a50;
        case 0x159a54u: goto label_159a54;
        case 0x159a58u: goto label_159a58;
        case 0x159a5cu: goto label_159a5c;
        case 0x159a60u: goto label_159a60;
        case 0x159a64u: goto label_159a64;
        case 0x159a68u: goto label_159a68;
        case 0x159a6cu: goto label_159a6c;
        case 0x159a70u: goto label_159a70;
        case 0x159a74u: goto label_159a74;
        case 0x159a78u: goto label_159a78;
        case 0x159a7cu: goto label_159a7c;
        case 0x159a80u: goto label_159a80;
        case 0x159a84u: goto label_159a84;
        case 0x159a88u: goto label_159a88;
        case 0x159a8cu: goto label_159a8c;
        case 0x159a90u: goto label_159a90;
        case 0x159a94u: goto label_159a94;
        case 0x159a98u: goto label_159a98;
        case 0x159a9cu: goto label_159a9c;
        case 0x159aa0u: goto label_159aa0;
        case 0x159aa4u: goto label_159aa4;
        case 0x159aa8u: goto label_159aa8;
        case 0x159aacu: goto label_159aac;
        case 0x159ab0u: goto label_159ab0;
        case 0x159ab4u: goto label_159ab4;
        case 0x159ab8u: goto label_159ab8;
        case 0x159abcu: goto label_159abc;
        case 0x159ac0u: goto label_159ac0;
        case 0x159ac4u: goto label_159ac4;
        case 0x159ac8u: goto label_159ac8;
        case 0x159accu: goto label_159acc;
        case 0x159ad0u: goto label_159ad0;
        case 0x159ad4u: goto label_159ad4;
        case 0x159ad8u: goto label_159ad8;
        case 0x159adcu: goto label_159adc;
        case 0x159ae0u: goto label_159ae0;
        case 0x159ae4u: goto label_159ae4;
        case 0x159ae8u: goto label_159ae8;
        case 0x159aecu: goto label_159aec;
        case 0x159af0u: goto label_159af0;
        case 0x159af4u: goto label_159af4;
        case 0x159af8u: goto label_159af8;
        case 0x159afcu: goto label_159afc;
        case 0x159b00u: goto label_159b00;
        case 0x159b04u: goto label_159b04;
        case 0x159b08u: goto label_159b08;
        case 0x159b0cu: goto label_159b0c;
        case 0x159b10u: goto label_159b10;
        case 0x159b14u: goto label_159b14;
        case 0x159b18u: goto label_159b18;
        case 0x159b1cu: goto label_159b1c;
        case 0x159b20u: goto label_159b20;
        case 0x159b24u: goto label_159b24;
        case 0x159b28u: goto label_159b28;
        case 0x159b2cu: goto label_159b2c;
        case 0x159b30u: goto label_159b30;
        case 0x159b34u: goto label_159b34;
        case 0x159b38u: goto label_159b38;
        case 0x159b3cu: goto label_159b3c;
        case 0x159b40u: goto label_159b40;
        case 0x159b44u: goto label_159b44;
        case 0x159b48u: goto label_159b48;
        case 0x159b4cu: goto label_159b4c;
        case 0x159b50u: goto label_159b50;
        case 0x159b54u: goto label_159b54;
        case 0x159b58u: goto label_159b58;
        case 0x159b5cu: goto label_159b5c;
        case 0x159b60u: goto label_159b60;
        case 0x159b64u: goto label_159b64;
        case 0x159b68u: goto label_159b68;
        case 0x159b6cu: goto label_159b6c;
        case 0x159b70u: goto label_159b70;
        case 0x159b74u: goto label_159b74;
        case 0x159b78u: goto label_159b78;
        case 0x159b7cu: goto label_159b7c;
        case 0x159b80u: goto label_159b80;
        case 0x159b84u: goto label_159b84;
        case 0x159b88u: goto label_159b88;
        case 0x159b8cu: goto label_159b8c;
        case 0x159b90u: goto label_159b90;
        case 0x159b94u: goto label_159b94;
        case 0x159b98u: goto label_159b98;
        case 0x159b9cu: goto label_159b9c;
        case 0x159ba0u: goto label_159ba0;
        case 0x159ba4u: goto label_159ba4;
        case 0x159ba8u: goto label_159ba8;
        case 0x159bacu: goto label_159bac;
        case 0x159bb0u: goto label_159bb0;
        case 0x159bb4u: goto label_159bb4;
        case 0x159bb8u: goto label_159bb8;
        case 0x159bbcu: goto label_159bbc;
        case 0x159bc0u: goto label_159bc0;
        case 0x159bc4u: goto label_159bc4;
        case 0x159bc8u: goto label_159bc8;
        case 0x159bccu: goto label_159bcc;
        case 0x159bd0u: goto label_159bd0;
        case 0x159bd4u: goto label_159bd4;
        case 0x159bd8u: goto label_159bd8;
        case 0x159bdcu: goto label_159bdc;
        case 0x159be0u: goto label_159be0;
        case 0x159be4u: goto label_159be4;
        case 0x159be8u: goto label_159be8;
        case 0x159becu: goto label_159bec;
        case 0x159bf0u: goto label_159bf0;
        case 0x159bf4u: goto label_159bf4;
        case 0x159bf8u: goto label_159bf8;
        case 0x159bfcu: goto label_159bfc;
        case 0x159c00u: goto label_159c00;
        case 0x159c04u: goto label_159c04;
        case 0x159c08u: goto label_159c08;
        case 0x159c0cu: goto label_159c0c;
        case 0x159c10u: goto label_159c10;
        case 0x159c14u: goto label_159c14;
        case 0x159c18u: goto label_159c18;
        case 0x159c1cu: goto label_159c1c;
        case 0x159c20u: goto label_159c20;
        case 0x159c24u: goto label_159c24;
        case 0x159c28u: goto label_159c28;
        case 0x159c2cu: goto label_159c2c;
        case 0x159c30u: goto label_159c30;
        case 0x159c34u: goto label_159c34;
        case 0x159c38u: goto label_159c38;
        case 0x159c3cu: goto label_159c3c;
        case 0x159c40u: goto label_159c40;
        case 0x159c44u: goto label_159c44;
        case 0x159c48u: goto label_159c48;
        case 0x159c4cu: goto label_159c4c;
        case 0x159c50u: goto label_159c50;
        case 0x159c54u: goto label_159c54;
        case 0x159c58u: goto label_159c58;
        case 0x159c5cu: goto label_159c5c;
        case 0x159c60u: goto label_159c60;
        case 0x159c64u: goto label_159c64;
        case 0x159c68u: goto label_159c68;
        case 0x159c6cu: goto label_159c6c;
        case 0x159c70u: goto label_159c70;
        case 0x159c74u: goto label_159c74;
        case 0x159c78u: goto label_159c78;
        case 0x159c7cu: goto label_159c7c;
        case 0x159c80u: goto label_159c80;
        case 0x159c84u: goto label_159c84;
        case 0x159c88u: goto label_159c88;
        case 0x159c8cu: goto label_159c8c;
        case 0x159c90u: goto label_159c90;
        case 0x159c94u: goto label_159c94;
        case 0x159c98u: goto label_159c98;
        case 0x159c9cu: goto label_159c9c;
        case 0x159ca0u: goto label_159ca0;
        case 0x159ca4u: goto label_159ca4;
        case 0x159ca8u: goto label_159ca8;
        case 0x159cacu: goto label_159cac;
        case 0x159cb0u: goto label_159cb0;
        case 0x159cb4u: goto label_159cb4;
        case 0x159cb8u: goto label_159cb8;
        case 0x159cbcu: goto label_159cbc;
        case 0x159cc0u: goto label_159cc0;
        case 0x159cc4u: goto label_159cc4;
        case 0x159cc8u: goto label_159cc8;
        case 0x159cccu: goto label_159ccc;
        case 0x159cd0u: goto label_159cd0;
        case 0x159cd4u: goto label_159cd4;
        case 0x159cd8u: goto label_159cd8;
        case 0x159cdcu: goto label_159cdc;
        case 0x159ce0u: goto label_159ce0;
        case 0x159ce4u: goto label_159ce4;
        case 0x159ce8u: goto label_159ce8;
        case 0x159cecu: goto label_159cec;
        case 0x159cf0u: goto label_159cf0;
        case 0x159cf4u: goto label_159cf4;
        case 0x159cf8u: goto label_159cf8;
        case 0x159cfcu: goto label_159cfc;
        case 0x159d00u: goto label_159d00;
        case 0x159d04u: goto label_159d04;
        case 0x159d08u: goto label_159d08;
        case 0x159d0cu: goto label_159d0c;
        case 0x159d10u: goto label_159d10;
        case 0x159d14u: goto label_159d14;
        case 0x159d18u: goto label_159d18;
        case 0x159d1cu: goto label_159d1c;
        case 0x159d20u: goto label_159d20;
        case 0x159d24u: goto label_159d24;
        case 0x159d28u: goto label_159d28;
        case 0x159d2cu: goto label_159d2c;
        case 0x159d30u: goto label_159d30;
        case 0x159d34u: goto label_159d34;
        case 0x159d38u: goto label_159d38;
        case 0x159d3cu: goto label_159d3c;
        case 0x159d40u: goto label_159d40;
        case 0x159d44u: goto label_159d44;
        case 0x159d48u: goto label_159d48;
        case 0x159d4cu: goto label_159d4c;
        case 0x159d50u: goto label_159d50;
        case 0x159d54u: goto label_159d54;
        case 0x159d58u: goto label_159d58;
        case 0x159d5cu: goto label_159d5c;
        case 0x159d60u: goto label_159d60;
        case 0x159d64u: goto label_159d64;
        case 0x159d68u: goto label_159d68;
        case 0x159d6cu: goto label_159d6c;
        case 0x159d70u: goto label_159d70;
        case 0x159d74u: goto label_159d74;
        case 0x159d78u: goto label_159d78;
        case 0x159d7cu: goto label_159d7c;
        case 0x159d80u: goto label_159d80;
        case 0x159d84u: goto label_159d84;
        case 0x159d88u: goto label_159d88;
        case 0x159d8cu: goto label_159d8c;
        case 0x159d90u: goto label_159d90;
        case 0x159d94u: goto label_159d94;
        case 0x159d98u: goto label_159d98;
        case 0x159d9cu: goto label_159d9c;
        case 0x159da0u: goto label_159da0;
        case 0x159da4u: goto label_159da4;
        case 0x159da8u: goto label_159da8;
        case 0x159dacu: goto label_159dac;
        case 0x159db0u: goto label_159db0;
        case 0x159db4u: goto label_159db4;
        case 0x159db8u: goto label_159db8;
        case 0x159dbcu: goto label_159dbc;
        case 0x159dc0u: goto label_159dc0;
        case 0x159dc4u: goto label_159dc4;
        case 0x159dc8u: goto label_159dc8;
        case 0x159dccu: goto label_159dcc;
        case 0x159dd0u: goto label_159dd0;
        case 0x159dd4u: goto label_159dd4;
        case 0x159dd8u: goto label_159dd8;
        case 0x159ddcu: goto label_159ddc;
        case 0x159de0u: goto label_159de0;
        case 0x159de4u: goto label_159de4;
        case 0x159de8u: goto label_159de8;
        case 0x159decu: goto label_159dec;
        case 0x159df0u: goto label_159df0;
        case 0x159df4u: goto label_159df4;
        case 0x159df8u: goto label_159df8;
        case 0x159dfcu: goto label_159dfc;
        case 0x159e00u: goto label_159e00;
        case 0x159e04u: goto label_159e04;
        case 0x159e08u: goto label_159e08;
        case 0x159e0cu: goto label_159e0c;
        case 0x159e10u: goto label_159e10;
        case 0x159e14u: goto label_159e14;
        case 0x159e18u: goto label_159e18;
        case 0x159e1cu: goto label_159e1c;
        case 0x159e20u: goto label_159e20;
        case 0x159e24u: goto label_159e24;
        case 0x159e28u: goto label_159e28;
        case 0x159e2cu: goto label_159e2c;
        case 0x159e30u: goto label_159e30;
        case 0x159e34u: goto label_159e34;
        case 0x159e38u: goto label_159e38;
        case 0x159e3cu: goto label_159e3c;
        case 0x159e40u: goto label_159e40;
        case 0x159e44u: goto label_159e44;
        case 0x159e48u: goto label_159e48;
        case 0x159e4cu: goto label_159e4c;
        case 0x159e50u: goto label_159e50;
        case 0x159e54u: goto label_159e54;
        case 0x159e58u: goto label_159e58;
        case 0x159e5cu: goto label_159e5c;
        case 0x159e60u: goto label_159e60;
        case 0x159e64u: goto label_159e64;
        case 0x159e68u: goto label_159e68;
        case 0x159e6cu: goto label_159e6c;
        case 0x159e70u: goto label_159e70;
        case 0x159e74u: goto label_159e74;
        case 0x159e78u: goto label_159e78;
        case 0x159e7cu: goto label_159e7c;
        case 0x159e80u: goto label_159e80;
        case 0x159e84u: goto label_159e84;
        case 0x159e88u: goto label_159e88;
        case 0x159e8cu: goto label_159e8c;
        case 0x159e90u: goto label_159e90;
        case 0x159e94u: goto label_159e94;
        case 0x159e98u: goto label_159e98;
        case 0x159e9cu: goto label_159e9c;
        case 0x159ea0u: goto label_159ea0;
        case 0x159ea4u: goto label_159ea4;
        case 0x159ea8u: goto label_159ea8;
        case 0x159eacu: goto label_159eac;
        case 0x159eb0u: goto label_159eb0;
        case 0x159eb4u: goto label_159eb4;
        case 0x159eb8u: goto label_159eb8;
        case 0x159ebcu: goto label_159ebc;
        case 0x159ec0u: goto label_159ec0;
        case 0x159ec4u: goto label_159ec4;
        case 0x159ec8u: goto label_159ec8;
        case 0x159eccu: goto label_159ecc;
        case 0x159ed0u: goto label_159ed0;
        case 0x159ed4u: goto label_159ed4;
        case 0x159ed8u: goto label_159ed8;
        case 0x159edcu: goto label_159edc;
        case 0x159ee0u: goto label_159ee0;
        case 0x159ee4u: goto label_159ee4;
        case 0x159ee8u: goto label_159ee8;
        case 0x159eecu: goto label_159eec;
        case 0x159ef0u: goto label_159ef0;
        case 0x159ef4u: goto label_159ef4;
        case 0x159ef8u: goto label_159ef8;
        case 0x159efcu: goto label_159efc;
        case 0x159f00u: goto label_159f00;
        case 0x159f04u: goto label_159f04;
        case 0x159f08u: goto label_159f08;
        case 0x159f0cu: goto label_159f0c;
        case 0x159f10u: goto label_159f10;
        case 0x159f14u: goto label_159f14;
        case 0x159f18u: goto label_159f18;
        case 0x159f1cu: goto label_159f1c;
        case 0x159f20u: goto label_159f20;
        case 0x159f24u: goto label_159f24;
        case 0x159f28u: goto label_159f28;
        case 0x159f2cu: goto label_159f2c;
        case 0x159f30u: goto label_159f30;
        case 0x159f34u: goto label_159f34;
        case 0x159f38u: goto label_159f38;
        case 0x159f3cu: goto label_159f3c;
        case 0x159f40u: goto label_159f40;
        case 0x159f44u: goto label_159f44;
        case 0x159f48u: goto label_159f48;
        case 0x159f4cu: goto label_159f4c;
        default: return;
    }

label_159780:
    // 0x159780: 0x10e50004  beq         $a3, $a1, . + 4 + (0x4 << 2)
label_159784:
    if (ctx->pc == 0x159784u) {
        ctx->pc = 0x159788u;
        goto label_159788;
    }
    ctx->pc = 0x159780u;
    {
        const bool branch_taken_0x159780 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x159780) {
            ctx->pc = 0x159794u;
            goto label_159794;
        }
    }
    ctx->pc = 0x159788u;
label_159788:
    // 0x159788: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x159788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15978c:
    // 0x15978c: 0x14e50018  bne         $a3, $a1, . + 4 + (0x18 << 2)
label_159790:
    if (ctx->pc == 0x159790u) {
        ctx->pc = 0x159794u;
        goto label_159794;
    }
    ctx->pc = 0x15978Cu;
    {
        const bool branch_taken_0x15978c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x15978c) {
            ctx->pc = 0x1597F0u;
            goto label_1597f0;
        }
    }
    ctx->pc = 0x159794u;
label_159794:
    // 0x159794: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x159794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_159798:
    // 0x159798: 0x9025497c  lbu         $a1, 0x497C($at)
    ctx->pc = 0x159798u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18812)));
label_15979c:
    // 0x15979c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1597a0:
    if (ctx->pc == 0x1597A0u) {
        ctx->pc = 0x1597A4u;
        goto label_1597a4;
    }
    ctx->pc = 0x15979Cu;
    {
        const bool branch_taken_0x15979c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15979c) {
            ctx->pc = 0x1597C4u;
            goto label_1597c4;
        }
    }
    ctx->pc = 0x1597A4u;
label_1597a4:
    // 0x1597a4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1597a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1597a8:
    // 0x1597a8: 0x8c254974  lw          $a1, 0x4974($at)
    ctx->pc = 0x1597a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18804)));
label_1597ac:
    // 0x1597ac: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
label_1597b0:
    if (ctx->pc == 0x1597B0u) {
        ctx->pc = 0x1597B4u;
        goto label_1597b4;
    }
    ctx->pc = 0x1597ACu;
    {
        const bool branch_taken_0x1597ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1597ac) {
            ctx->pc = 0x1597C4u;
            goto label_1597c4;
        }
    }
    ctx->pc = 0x1597B4u;
label_1597b4:
    // 0x1597b4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1597b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1597b8:
    // 0x1597b8: 0x8c25496c  lw          $a1, 0x496C($at)
    ctx->pc = 0x1597b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18796)));
label_1597bc:
    // 0x1597bc: 0x10a6000c  beq         $a1, $a2, . + 4 + (0xC << 2)
label_1597c0:
    if (ctx->pc == 0x1597C0u) {
        ctx->pc = 0x1597C4u;
        goto label_1597c4;
    }
    ctx->pc = 0x1597BCu;
    {
        const bool branch_taken_0x1597bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x1597bc) {
            ctx->pc = 0x1597F0u;
            goto label_1597f0;
        }
    }
    ctx->pc = 0x1597C4u;
label_1597c4:
    // 0x1597c4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1597c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1597c8:
    // 0x1597c8: 0x90254a0c  lbu         $a1, 0x4A0C($at)
    ctx->pc = 0x1597c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_1597cc:
    // 0x1597cc: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_1597d0:
    if (ctx->pc == 0x1597D0u) {
        ctx->pc = 0x1597D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597CCu;
        // 0x1597d0: 0x3c050005  lui         $a1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1597D4u;
        goto label_1597d4;
    }
    ctx->pc = 0x1597CCu;
    {
        const bool branch_taken_0x1597cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1597D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597CCu;
        // 0x1597d0: 0x3c050005  lui         $a1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597cc) {
            ctx->pc = 0x1597FCu;
            goto label_1597fc;
        }
    }
    ctx->pc = 0x1597D4u;
label_1597d4:
    // 0x1597d4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1597d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1597d8:
    // 0x1597d8: 0x8c254a04  lw          $a1, 0x4A04($at)
    ctx->pc = 0x1597d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18948)));
label_1597dc:
    // 0x1597dc: 0x14a40006  bne         $a1, $a0, . + 4 + (0x6 << 2)
label_1597e0:
    if (ctx->pc == 0x1597E0u) {
        ctx->pc = 0x1597E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597DCu;
        // 0x1597e0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1597E4u;
        goto label_1597e4;
    }
    ctx->pc = 0x1597DCu;
    {
        const bool branch_taken_0x1597dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1597E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597DCu;
        // 0x1597e0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597dc) {
            ctx->pc = 0x1597F8u;
            goto label_1597f8;
        }
    }
    ctx->pc = 0x1597E4u;
label_1597e4:
    // 0x1597e4: 0x8c2549fc  lw          $a1, 0x49FC($at)
    ctx->pc = 0x1597e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18940)));
label_1597e8:
    // 0x1597e8: 0x14a60003  bne         $a1, $a2, . + 4 + (0x3 << 2)
label_1597ec:
    if (ctx->pc == 0x1597ECu) {
        ctx->pc = 0x1597F0u;
        goto label_1597f0;
    }
    ctx->pc = 0x1597E8u;
    {
        const bool branch_taken_0x1597e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1597e8) {
            ctx->pc = 0x1597F8u;
            goto label_1597f8;
        }
    }
    ctx->pc = 0x1597F0u;
label_1597f0:
    // 0x1597f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1597f4:
    if (ctx->pc == 0x1597F4u) {
        ctx->pc = 0x1597F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597F0u;
        // 0x1597f4: 0xac600228  sw          $zero, 0x228($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1597F8u;
        goto label_1597f8;
    }
    ctx->pc = 0x1597F0u;
    {
        const bool branch_taken_0x1597f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1597F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597F0u;
        // 0x1597f4: 0xac600228  sw          $zero, 0x228($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597f0) {
            ctx->pc = 0x159804u;
            goto label_159804;
        }
    }
    ctx->pc = 0x1597F8u;
label_1597f8:
    // 0x1597f8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1597f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_1597fc:
    // 0x1597fc: 0x34a57e40  ori         $a1, $a1, 0x7E40
    ctx->pc = 0x1597fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32320);
label_159800:
    // 0x159800: 0xac650228  sw          $a1, 0x228($v1)
    ctx->pc = 0x159800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 552), GPR_U32(ctx, 5));
label_159804:
    // 0x159804: 0xa0600222  sb          $zero, 0x222($v1)
    ctx->pc = 0x159804u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 546), (uint8_t)GPR_U32(ctx, 0));
label_159808:
    // 0x159808: 0xa0660220  sb          $a2, 0x220($v1)
    ctx->pc = 0x159808u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 544), (uint8_t)GPR_U32(ctx, 6));
label_15980c:
    // 0x15980c: 0xa064021f  sb          $a0, 0x21F($v1)
    ctx->pc = 0x15980cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 543), (uint8_t)GPR_U32(ctx, 4));
label_159810:
    // 0x159810: 0xa0600224  sb          $zero, 0x224($v1)
    ctx->pc = 0x159810u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 548), (uint8_t)GPR_U32(ctx, 0));
label_159814:
    // 0x159814: 0xa0600223  sb          $zero, 0x223($v1)
    ctx->pc = 0x159814u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 547), (uint8_t)GPR_U32(ctx, 0));
label_159818:
    // 0x159818: 0xa4600226  sh          $zero, 0x226($v1)
    ctx->pc = 0x159818u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 550), (uint16_t)GPR_U32(ctx, 0));
label_15981c:
    // 0x15981c: 0xac600234  sw          $zero, 0x234($v1)
    ctx->pc = 0x15981cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 564), GPR_U32(ctx, 0));
label_159820:
    // 0x159820: 0x3e00008  jr          $ra
label_159824:
    if (ctx->pc == 0x159824u) {
        ctx->pc = 0x159824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159820u;
        // 0x159824: 0xac600238  sw          $zero, 0x238($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159828u;
        goto label_159828;
    }
    ctx->pc = 0x159820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159820u;
        // 0x159824: 0xac600238  sw          $zero, 0x238($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159828u;
label_159828:
    // 0x159828: 0x0  nop
    ctx->pc = 0x159828u;
    // NOP
label_15982c:
    // 0x15982c: 0x0  nop
    ctx->pc = 0x15982cu;
    // NOP
label_159830:
    // 0x159830: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x159830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_159834:
    // 0x159834: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x159834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_159838:
    // 0x159838: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x159838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_15983c:
    // 0x15983c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15983cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_159840:
    // 0x159840: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_159844:
    // 0x159844: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x159844u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_159848:
    // 0x159848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15984c:
    // 0x15984c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15984cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_159850:
    // 0x159850: 0x90840220  lbu         $a0, 0x220($a0)
    ctx->pc = 0x159850u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
label_159854:
    // 0x159854: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_159858:
    if (ctx->pc == 0x159858u) {
        ctx->pc = 0x15985Cu;
        goto label_15985c;
    }
    ctx->pc = 0x159854u;
    {
        const bool branch_taken_0x159854 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x159854) {
            ctx->pc = 0x159864u;
            goto label_159864;
        }
    }
    ctx->pc = 0x15985Cu;
label_15985c:
    // 0x15985c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_159860:
    if (ctx->pc == 0x159860u) {
        ctx->pc = 0x159860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15985Cu;
        // 0x159860: 0xa2630221  sb          $v1, 0x221($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 545), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159864u;
        goto label_159864;
    }
    ctx->pc = 0x15985Cu;
    {
        const bool branch_taken_0x15985c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15985Cu;
        // 0x159860: 0xa2630221  sb          $v1, 0x221($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 545), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15985c) {
            ctx->pc = 0x15994Cu;
            goto label_15994c;
        }
    }
    ctx->pc = 0x159864u;
label_159864:
    // 0x159864: 0x9265021f  lbu         $a1, 0x21F($s3)
    ctx->pc = 0x159864u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 543)));
label_159868:
    // 0x159868: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x159868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_15986c:
    // 0x15986c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x15986cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_159870:
    // 0x159870: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x159870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_159874:
    // 0x159874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x159874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_159878:
    // 0x159878: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x159878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_15987c:
    // 0x15987c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x15987cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_159880:
    // 0x159880: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x159880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_159884:
    // 0x159884: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x159884u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_159888:
    // 0x159888: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x159888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_15988c:
    // 0x15988c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15988cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_159890:
    // 0x159890: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x159890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_159894:
    // 0x159894: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x159894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_159898:
    // 0x159898: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x159898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_15989c:
    // 0x15989c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x15989cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1598a0:
    // 0x1598a0: 0xc0448bc  jal         func_1122F0
label_1598a4:
    if (ctx->pc == 0x1598A4u) {
        ctx->pc = 0x1598A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598A0u;
        // 0x1598a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1598A8u;
        goto label_1598a8;
    }
    ctx->pc = 0x1598A0u;
    SET_GPR_U32(ctx, 31, 0x1598A8u);
    ctx->pc = 0x1598A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1598A0u;
    // 0x1598a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1122F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122F0u, 0x1598A0u, 0x1598A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1598A8u;
label_1598a8:
    // 0x1598a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1598ac:
    if (ctx->pc == 0x1598ACu) {
        ctx->pc = 0x1598B0u;
        goto label_1598b0;
    }
    ctx->pc = 0x1598A8u;
    {
        const bool branch_taken_0x1598a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1598a8) {
            ctx->pc = 0x1598BCu;
            goto label_1598bc;
        }
    }
    ctx->pc = 0x1598B0u;
label_1598b0:
    // 0x1598b0: 0x92630220  lbu         $v1, 0x220($s3)
    ctx->pc = 0x1598b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 544)));
label_1598b4:
    // 0x1598b4: 0x10000025  b           . + 4 + (0x25 << 2)
label_1598b8:
    if (ctx->pc == 0x1598B8u) {
        ctx->pc = 0x1598B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598B4u;
        // 0x1598b8: 0xa2630221  sb          $v1, 0x221($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 545), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1598BCu;
        goto label_1598bc;
    }
    ctx->pc = 0x1598B4u;
    {
        const bool branch_taken_0x1598b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598B4u;
        // 0x1598b8: 0xa2630221  sb          $v1, 0x221($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 545), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598b4) {
            ctx->pc = 0x15994Cu;
            goto label_15994c;
        }
    }
    ctx->pc = 0x1598BCu;
label_1598bc:
    // 0x1598bc: 0x9265021f  lbu         $a1, 0x21F($s3)
    ctx->pc = 0x1598bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 543)));
label_1598c0:
    // 0x1598c0: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x1598c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_1598c4:
    // 0x1598c4: 0x24632570  addiu       $v1, $v1, 0x2570
    ctx->pc = 0x1598c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9584));
label_1598c8:
    // 0x1598c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1598c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1598cc:
    // 0x1598cc: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x1598ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1598d0:
    // 0x1598d0: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x1598d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1598d4:
    // 0x1598d4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1598d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1598d8:
    // 0x1598d8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1598d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1598dc:
    // 0x1598dc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1598dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1598e0:
    // 0x1598e0: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x1598e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1598e4:
    // 0x1598e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1598e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1598e8:
    // 0x1598e8: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1598e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1598ec:
    // 0x1598ec: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x1598ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_1598f0:
    // 0x1598f0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_1598f4:
    if (ctx->pc == 0x1598F4u) {
        ctx->pc = 0x1598F8u;
        goto label_1598f8;
    }
    ctx->pc = 0x1598F0u;
    {
        const bool branch_taken_0x1598f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1598f0) {
            ctx->pc = 0x159928u;
            goto label_159928;
        }
    }
    ctx->pc = 0x1598F8u;
label_1598f8:
    // 0x1598f8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1598fc:
    if (ctx->pc == 0x1598FCu) {
        ctx->pc = 0x159900u;
        goto label_159900;
    }
    ctx->pc = 0x1598F8u;
    {
        const bool branch_taken_0x1598f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1598f8) {
            ctx->pc = 0x159928u;
            goto label_159928;
        }
    }
    ctx->pc = 0x159900u;
label_159900:
    // 0x159900: 0x9224003e  lbu         $a0, 0x3E($s1)
    ctx->pc = 0x159900u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 62)));
label_159904:
    // 0x159904: 0x9203003e  lbu         $v1, 0x3E($s0)
    ctx->pc = 0x159904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 62)));
label_159908:
    // 0x159908: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_15990c:
    if (ctx->pc == 0x15990Cu) {
        ctx->pc = 0x15990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159908u;
        // 0x15990c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159910u;
        goto label_159910;
    }
    ctx->pc = 0x159908u;
    {
        const bool branch_taken_0x159908 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159908u;
        // 0x15990c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159908) {
            ctx->pc = 0x159928u;
            goto label_159928;
        }
    }
    ctx->pc = 0x159910u;
label_159910:
    // 0x159910: 0xc0448bc  jal         func_1122F0
label_159914:
    if (ctx->pc == 0x159914u) {
        ctx->pc = 0x159918u;
        goto label_159918;
    }
    ctx->pc = 0x159910u;
    SET_GPR_U32(ctx, 31, 0x159918u);
    ctx->pc = 0x1122F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122F0u, 0x159910u, 0x159918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159918u;
label_159918:
    // 0x159918: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15991c:
    if (ctx->pc == 0x15991Cu) {
        ctx->pc = 0x159920u;
        goto label_159920;
    }
    ctx->pc = 0x159918u;
    {
        const bool branch_taken_0x159918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159918) {
            ctx->pc = 0x159928u;
            goto label_159928;
        }
    }
    ctx->pc = 0x159920u;
label_159920:
    // 0x159920: 0x10000005  b           . + 4 + (0x5 << 2)
label_159924:
    if (ctx->pc == 0x159924u) {
        ctx->pc = 0x159924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159920u;
        // 0x159924: 0xa2720221  sb          $s2, 0x221($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 545), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159928u;
        goto label_159928;
    }
    ctx->pc = 0x159920u;
    {
        const bool branch_taken_0x159920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159920u;
        // 0x159924: 0xa2720221  sb          $s2, 0x221($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 545), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159920) {
            ctx->pc = 0x159938u;
            goto label_159938;
        }
    }
    ctx->pc = 0x159928u;
label_159928:
    // 0x159928: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x159928u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15992c:
    // 0x15992c: 0x2a4300ff  slti        $v1, $s2, 0xFF
    ctx->pc = 0x15992cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)255) ? 1 : 0);
label_159930:
    // 0x159930: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_159934:
    if (ctx->pc == 0x159934u) {
        ctx->pc = 0x159934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159930u;
        // 0x159934: 0x26310048  addiu       $s1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159938u;
        goto label_159938;
    }
    ctx->pc = 0x159930u;
    {
        const bool branch_taken_0x159930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x159934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159930u;
        // 0x159934: 0x26310048  addiu       $s1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159930) {
            ctx->pc = 0x1598E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1598e4;
        }
    }
    ctx->pc = 0x159938u;
label_159938:
    // 0x159938: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x159938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_15993c:
    // 0x15993c: 0x16430003  bne         $s2, $v1, . + 4 + (0x3 << 2)
label_159940:
    if (ctx->pc == 0x159940u) {
        ctx->pc = 0x159944u;
        goto label_159944;
    }
    ctx->pc = 0x15993Cu;
    {
        const bool branch_taken_0x15993c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x15993c) {
            ctx->pc = 0x15994Cu;
            goto label_15994c;
        }
    }
    ctx->pc = 0x159944u;
label_159944:
    // 0x159944: 0x92630220  lbu         $v1, 0x220($s3)
    ctx->pc = 0x159944u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 544)));
label_159948:
    // 0x159948: 0xa2630221  sb          $v1, 0x221($s3)
    ctx->pc = 0x159948u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 545), (uint8_t)GPR_U32(ctx, 3));
label_15994c:
    // 0x15994c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15994cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_159950:
    // 0x159950: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x159950u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_159954:
    // 0x159954: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_159958:
    // 0x159958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15995c:
    // 0x15995c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15995cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_159960:
    // 0x159960: 0x3e00008  jr          $ra
label_159964:
    if (ctx->pc == 0x159964u) {
        ctx->pc = 0x159964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159960u;
        // 0x159964: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159968u;
        goto label_159968;
    }
    ctx->pc = 0x159960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159960u;
        // 0x159964: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159968u;
label_159968:
    // 0x159968: 0x0  nop
    ctx->pc = 0x159968u;
    // NOP
label_15996c:
    // 0x15996c: 0x0  nop
    ctx->pc = 0x15996cu;
    // NOP
label_159970:
    // 0x159970: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x159970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_159974:
    // 0x159974: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x159974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_159978:
    // 0x159978: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15997c:
    // 0x15997c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15997cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_159980:
    // 0x159980: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_159984:
    // 0x159984: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x159984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159988:
    // 0x159988: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x159988u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
label_15998c:
    // 0x15998c: 0x26101300  addiu       $s0, $s0, 0x1300
    ctx->pc = 0x15998cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4864));
label_159990:
    // 0x159990: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x159990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159994:
    // 0x159994: 0x0  nop
    ctx->pc = 0x159994u;
    // NOP
label_159998:
    // 0x159998: 0xc08f0cc  jal         func_23C330
label_15999c:
    if (ctx->pc == 0x15999Cu) {
        ctx->pc = 0x1599A0u;
        goto label_1599a0;
    }
    ctx->pc = 0x159998u;
    SET_GPR_U32(ctx, 31, 0x1599A0u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1599A0u;
label_1599a0:
    // 0x1599a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1599a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1599a4:
    // 0x1599a4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1599a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_1599a8:
    // 0x1599a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1599a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1599ac:
    // 0x1599ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1599acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1599b0:
    // 0x1599b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1599b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1599b4:
    // 0x1599b4: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x1599b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_1599b8:
    // 0x1599b8: 0x2a43000c  slti        $v1, $s2, 0xC
    ctx->pc = 0x1599b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
label_1599bc:
    // 0x1599bc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1599bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1599c0:
    // 0x1599c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1599c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1599c4:
    // 0x1599c4: 0x0  nop
    ctx->pc = 0x1599c4u;
    // NOP
label_1599c8:
    // 0x1599c8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1599c8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1599cc:
    // 0x1599cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1599ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1599d0:
    // 0x1599d0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1599d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1599d4:
    // 0x1599d4: 0x0  nop
    ctx->pc = 0x1599d4u;
    // NOP
label_1599d8:
    // 0x1599d8: 0xae04023c  sw          $a0, 0x23C($s0)
    ctx->pc = 0x1599d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 4));
label_1599dc:
    // 0x1599dc: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_1599e0:
    if (ctx->pc == 0x1599E0u) {
        ctx->pc = 0x1599E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599DCu;
        // 0x1599e0: 0x26100240  addiu       $s0, $s0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1599E4u;
        goto label_1599e4;
    }
    ctx->pc = 0x1599DCu;
    {
        const bool branch_taken_0x1599dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1599E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599DCu;
        // 0x1599e0: 0x26100240  addiu       $s0, $s0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599dc) {
            ctx->pc = 0x159994u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159994;
        }
    }
    ctx->pc = 0x1599E4u;
label_1599e4:
    // 0x1599e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1599e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1599e8:
    // 0x1599e8: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1599e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1599ec:
    // 0x1599ec: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_1599f0:
    if (ctx->pc == 0x1599F0u) {
        ctx->pc = 0x1599F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599ECu;
        // 0x1599f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1599F4u;
        goto label_1599f4;
    }
    ctx->pc = 0x1599ECu;
    {
        const bool branch_taken_0x1599ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1599F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599ECu;
        // 0x1599f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599ec) {
            ctx->pc = 0x159994u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159994;
        }
    }
    ctx->pc = 0x1599F4u;
label_1599f4:
    // 0x1599f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1599f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1599f8:
    // 0x1599f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1599f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1599fc:
    // 0x1599fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1599fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_159a00:
    // 0x159a00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_159a04:
    // 0x159a04: 0x3e00008  jr          $ra
label_159a08:
    if (ctx->pc == 0x159A08u) {
        ctx->pc = 0x159A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A04u;
        // 0x159a08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159A0Cu;
        goto label_159a0c;
    }
    ctx->pc = 0x159A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A04u;
        // 0x159a08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159A0Cu;
label_159a0c:
    // 0x159a0c: 0x0  nop
    ctx->pc = 0x159a0cu;
    // NOP
label_159a10:
    // 0x159a10: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x159a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_159a14:
    // 0x159a14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x159a14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_159a18:
    // 0x159a18: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x159a18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_159a1c:
    // 0x159a1c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x159a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_159a20:
    // 0x159a20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_159a24:
    // 0x159a24: 0x248449b0  addiu       $a0, $a0, 0x49B0
    ctx->pc = 0x159a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18864));
label_159a28:
    // 0x159a28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159a2c:
    // 0x159a2c: 0xc0566cc  jal         func_159B30
label_159a30:
    if (ctx->pc == 0x159A30u) {
        ctx->pc = 0x159A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A2Cu;
        // 0x159a30: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159A34u;
        goto label_159a34;
    }
    ctx->pc = 0x159A2Cu;
    SET_GPR_U32(ctx, 31, 0x159A34u);
    ctx->pc = 0x159A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159A2Cu;
    // 0x159a30: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159B30u;
    goto label_159b30;
    ctx->pc = 0x159A34u;
label_159a34:
    // 0x159a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159a38:
    // 0x159a38: 0x3e00008  jr          $ra
label_159a3c:
    if (ctx->pc == 0x159A3Cu) {
        ctx->pc = 0x159A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A38u;
        // 0x159a3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159A40u;
        goto label_159a40;
    }
    ctx->pc = 0x159A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A38u;
        // 0x159a3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159A40u;
label_159a40:
    // 0x159a40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x159a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_159a44:
    // 0x159a44: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x159a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_159a48:
    // 0x159a48: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x159a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_159a4c:
    // 0x159a4c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x159a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_159a50:
    // 0x159a50: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x159a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_159a54:
    // 0x159a54: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x159a54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_159a58:
    // 0x159a58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x159a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_159a5c:
    // 0x159a5c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x159a5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_159a60:
    // 0x159a60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x159a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_159a64:
    // 0x159a64: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x159a64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_159a68:
    // 0x159a68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_159a6c:
    // 0x159a6c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x159a6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_159a70:
    // 0x159a70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_159a74:
    // 0x159a74: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x159a74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_159a78:
    // 0x159a78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_159a7c:
    // 0x159a7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x159a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159a80:
    // 0x159a80: 0xa0204af0  sb          $zero, 0x4AF0($at)
    ctx->pc = 0x159a80u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19184), (uint8_t)GPR_U32(ctx, 0));
label_159a84:
    // 0x159a84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x159a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159a88:
    // 0x159a88: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_159a8c:
    if (ctx->pc == 0x159A8Cu) {
        ctx->pc = 0x159A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A88u;
        // 0x159a8c: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159A90u;
        goto label_159a90;
    }
    ctx->pc = 0x159A88u;
    {
        const bool branch_taken_0x159a88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x159A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A88u;
        // 0x159a8c: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a88) {
            ctx->pc = 0x159AB4u;
            goto label_159ab4;
        }
    }
    ctx->pc = 0x159A90u;
label_159a90:
    // 0x159a90: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x159a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_159a94:
    // 0x159a94: 0x24425340  addiu       $v0, $v0, 0x5340
    ctx->pc = 0x159a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21312));
label_159a98:
    // 0x159a98: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x159a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_159a9c:
    // 0x159a9c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x159a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_159aa0:
    // 0x159aa0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x159aa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_159aa4:
    // 0x159aa4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x159aa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_159aa8:
    // 0x159aa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159aac:
    // 0x159aac: 0x10000009  b           . + 4 + (0x9 << 2)
label_159ab0:
    if (ctx->pc == 0x159AB0u) {
        ctx->pc = 0x159AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AACu;
        // 0x159ab0: 0xa022490f  sb          $v0, 0x490F($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18703), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159AB4u;
        goto label_159ab4;
    }
    ctx->pc = 0x159AACu;
    {
        const bool branch_taken_0x159aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AACu;
        // 0x159ab0: 0xa022490f  sb          $v0, 0x490F($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18703), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159aac) {
            ctx->pc = 0x159AD4u;
            goto label_159ad4;
        }
    }
    ctx->pc = 0x159AB4u;
label_159ab4:
    // 0x159ab4: 0x0  nop
    ctx->pc = 0x159ab4u;
    // NOP
label_159ab8:
    // 0x159ab8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x159ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_159abc:
    // 0x159abc: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_159ac0:
    if (ctx->pc == 0x159AC0u) {
        ctx->pc = 0x159AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159ABCu;
        // 0x159ac0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159AC4u;
        goto label_159ac4;
    }
    ctx->pc = 0x159ABCu;
    {
        const bool branch_taken_0x159abc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x159AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159ABCu;
        // 0x159ac0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159abc) {
            ctx->pc = 0x159ACCu;
            goto label_159acc;
        }
    }
    ctx->pc = 0x159AC4u;
label_159ac4:
    // 0x159ac4: 0x10000003  b           . + 4 + (0x3 << 2)
label_159ac8:
    if (ctx->pc == 0x159AC8u) {
        ctx->pc = 0x159AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AC4u;
        // 0x159ac8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159ACCu;
        goto label_159acc;
    }
    ctx->pc = 0x159AC4u;
    {
        const bool branch_taken_0x159ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AC4u;
        // 0x159ac8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ac4) {
            ctx->pc = 0x159AD4u;
            goto label_159ad4;
        }
    }
    ctx->pc = 0x159ACCu;
label_159acc:
    // 0x159acc: 0x0  nop
    ctx->pc = 0x159accu;
    // NOP
label_159ad0:
    // 0x159ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159ad4:
    // 0x159ad4: 0x0  nop
    ctx->pc = 0x159ad4u;
    // NOP
label_159ad8:
    // 0x159ad8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x159ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_159adc:
    // 0x159adc: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x159adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_159ae0:
    // 0x159ae0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x159ae0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_159ae4:
    // 0x159ae4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x159ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_159ae8:
    // 0x159ae8: 0xc0566cc  jal         func_159B30
label_159aec:
    if (ctx->pc == 0x159AECu) {
        ctx->pc = 0x159AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AE8u;
        // 0x159aec: 0x24443620  addiu       $a0, $v0, 0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159AF0u;
        goto label_159af0;
    }
    ctx->pc = 0x159AE8u;
    SET_GPR_U32(ctx, 31, 0x159AF0u);
    ctx->pc = 0x159AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159AE8u;
    // 0x159aec: 0x24443620  addiu       $a0, $v0, 0x3620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159B30u;
    goto label_159b30;
    ctx->pc = 0x159AF0u;
label_159af0:
    // 0x159af0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x159af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_159af4:
    // 0x159af4: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x159af4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_159af8:
    // 0x159af8: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_159afc:
    if (ctx->pc == 0x159AFCu) {
        ctx->pc = 0x159AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AF8u;
        // 0x159afc: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159B00u;
        goto label_159b00;
    }
    ctx->pc = 0x159AF8u;
    {
        const bool branch_taken_0x159af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x159AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AF8u;
        // 0x159afc: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159af8) {
            ctx->pc = 0x159A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159a88;
        }
    }
    ctx->pc = 0x159B00u;
label_159b00:
    // 0x159b00: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x159b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_159b04:
    // 0x159b04: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x159b04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_159b08:
    // 0x159b08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x159b08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_159b0c:
    // 0x159b0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x159b0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_159b10:
    // 0x159b10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x159b10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_159b14:
    // 0x159b14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_159b18:
    // 0x159b18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_159b1c:
    // 0x159b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_159b20:
    // 0x159b20: 0x3e00008  jr          $ra
label_159b24:
    if (ctx->pc == 0x159B24u) {
        ctx->pc = 0x159B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B20u;
        // 0x159b24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159B28u;
        goto label_159b28;
    }
    ctx->pc = 0x159B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B20u;
        // 0x159b24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159B28u;
label_159b28:
    // 0x159b28: 0x0  nop
    ctx->pc = 0x159b28u;
    // NOP
label_159b2c:
    // 0x159b2c: 0x0  nop
    ctx->pc = 0x159b2cu;
    // NOP
label_159b30:
    // 0x159b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x159b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_159b34:
    // 0x159b34: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x159b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_159b38:
    // 0x159b38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x159b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_159b3c:
    // 0x159b3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_159b40:
    // 0x159b40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_159b44:
    // 0x159b44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x159b44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_159b48:
    // 0x159b48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_159b4c:
    // 0x159b4c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x159b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_159b50:
    // 0x159b50: 0xa080005c  sb          $zero, 0x5C($a0)
    ctx->pc = 0x159b50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 0));
label_159b54:
    // 0x159b54: 0x10c3009d  beq         $a2, $v1, . + 4 + (0x9D << 2)
label_159b58:
    if (ctx->pc == 0x159B58u) {
        ctx->pc = 0x159B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B54u;
        // 0x159b58: 0xa0870079  sb          $a3, 0x79($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 121), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159B5Cu;
        goto label_159b5c;
    }
    ctx->pc = 0x159B54u;
    {
        const bool branch_taken_0x159b54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x159B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B54u;
        // 0x159b58: 0xa0870079  sb          $a3, 0x79($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 121), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b54) {
            ctx->pc = 0x159DCCu;
            goto label_159dcc;
        }
    }
    ctx->pc = 0x159B5Cu;
label_159b5c:
    // 0x159b5c: 0xae460050  sw          $a2, 0x50($s2)
    ctx->pc = 0x159b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 6));
label_159b60:
    // 0x159b60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x159b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159b64:
    // 0x159b64: 0xa242005c  sb          $v0, 0x5C($s2)
    ctx->pc = 0x159b64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 92), (uint8_t)GPR_U32(ctx, 2));
label_159b68:
    // 0x159b68: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x159b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_159b6c:
    // 0x159b6c: 0xa2510058  sb          $s1, 0x58($s2)
    ctx->pc = 0x159b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 17));
label_159b70:
    // 0x159b70: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x159b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_159b74:
    // 0x159b74: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x159b74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_159b78:
    // 0x159b78: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_159b7c:
    if (ctx->pc == 0x159B7Cu) {
        ctx->pc = 0x159B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B78u;
        // 0x159b7c: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159B80u;
        goto label_159b80;
    }
    ctx->pc = 0x159B78u;
    {
        const bool branch_taken_0x159b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x159B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B78u;
        // 0x159b7c: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b78) {
            ctx->pc = 0x159B9Cu;
            goto label_159b9c;
        }
    }
    ctx->pc = 0x159B80u;
label_159b80:
    // 0x159b80: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x159b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_159b84:
    // 0x159b84: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x159b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_159b88:
    // 0x159b88: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x159b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_159b8c:
    // 0x159b8c: 0x244218d0  addiu       $v0, $v0, 0x18D0
    ctx->pc = 0x159b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6352));
label_159b90:
    // 0x159b90: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x159b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_159b94:
    // 0x159b94: 0x10000009  b           . + 4 + (0x9 << 2)
label_159b98:
    if (ctx->pc == 0x159B98u) {
        ctx->pc = 0x159B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B94u;
        // 0x159b98: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159B9Cu;
        goto label_159b9c;
    }
    ctx->pc = 0x159B94u;
    {
        const bool branch_taken_0x159b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B94u;
        // 0x159b98: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b94) {
            ctx->pc = 0x159BBCu;
            goto label_159bbc;
        }
    }
    ctx->pc = 0x159B9Cu;
label_159b9c:
    // 0x159b9c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x159b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_159ba0:
    // 0x159ba0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x159ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_159ba4:
    // 0x159ba4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x159ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_159ba8:
    // 0x159ba8: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x159ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_159bac:
    // 0x159bac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x159bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_159bb0:
    // 0x159bb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x159bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_159bb4:
    // 0x159bb4: 0x342135e8  ori         $at, $at, 0x35E8
    ctx->pc = 0x159bb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13800);
label_159bb8:
    // 0x159bb8: 0x418021  addu        $s0, $v0, $at
    ctx->pc = 0x159bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_159bbc:
    // 0x159bbc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x159bbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_159bc0:
    // 0x159bc0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x159bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_159bc4:
    // 0x159bc4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x159bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_159bc8:
    // 0x159bc8: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x159bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
label_159bcc:
    // 0x159bcc: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x159bccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_159bd0:
    // 0x159bd0: 0xa6430006  sh          $v1, 0x6($s2)
    ctx->pc = 0x159bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
label_159bd4:
    // 0x159bd4: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x159bd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_159bd8:
    // 0x159bd8: 0xa2430008  sb          $v1, 0x8($s2)
    ctx->pc = 0x159bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 3));
label_159bdc:
    // 0x159bdc: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x159bdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_159be0:
    // 0x159be0: 0xa2430009  sb          $v1, 0x9($s2)
    ctx->pc = 0x159be0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 3));
label_159be4:
    // 0x159be4: 0x82030010  lb          $v1, 0x10($s0)
    ctx->pc = 0x159be4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_159be8:
    // 0x159be8: 0xa243000e  sb          $v1, 0xE($s2)
    ctx->pc = 0x159be8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 14), (uint8_t)GPR_U32(ctx, 3));
label_159bec:
    // 0x159bec: 0xae450054  sw          $a1, 0x54($s2)
    ctx->pc = 0x159becu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 5));
label_159bf0:
    // 0x159bf0: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x159bf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_159bf4:
    // 0x159bf4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_159bf8:
    if (ctx->pc == 0x159BF8u) {
        ctx->pc = 0x159BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BF4u;
        // 0x159bf8: 0x24c20030  addiu       $v0, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159BFCu;
        goto label_159bfc;
    }
    ctx->pc = 0x159BF4u;
    {
        const bool branch_taken_0x159bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x159BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BF4u;
        // 0x159bf8: 0x24c20030  addiu       $v0, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bf4) {
            ctx->pc = 0x159C20u;
            goto label_159c20;
        }
    }
    ctx->pc = 0x159BFCu;
label_159bfc:
    // 0x159bfc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x159bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_159c00:
    // 0x159c00: 0xa242005d  sb          $v0, 0x5D($s2)
    ctx->pc = 0x159c00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 93), (uint8_t)GPR_U32(ctx, 2));
label_159c04:
    // 0x159c04: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x159c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_159c08:
    // 0x159c08: 0xa243005e  sb          $v1, 0x5E($s2)
    ctx->pc = 0x159c08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 94), (uint8_t)GPR_U32(ctx, 3));
label_159c0c:
    // 0x159c0c: 0xa242005f  sb          $v0, 0x5F($s2)
    ctx->pc = 0x159c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 95), (uint8_t)GPR_U32(ctx, 2));
label_159c10:
    // 0x159c10: 0xa2420060  sb          $v0, 0x60($s2)
    ctx->pc = 0x159c10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 96), (uint8_t)GPR_U32(ctx, 2));
label_159c14:
    // 0x159c14: 0xa2420061  sb          $v0, 0x61($s2)
    ctx->pc = 0x159c14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 97), (uint8_t)GPR_U32(ctx, 2));
label_159c18:
    // 0x159c18: 0x1000000d  b           . + 4 + (0xD << 2)
label_159c1c:
    if (ctx->pc == 0x159C1Cu) {
        ctx->pc = 0x159C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C18u;
        // 0x159c1c: 0xa2420062  sb          $v0, 0x62($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 98), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159C20u;
        goto label_159c20;
    }
    ctx->pc = 0x159C18u;
    {
        const bool branch_taken_0x159c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C18u;
        // 0x159c1c: 0xa2420062  sb          $v0, 0x62($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 98), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c18) {
            ctx->pc = 0x159C50u;
            goto label_159c50;
        }
    }
    ctx->pc = 0x159C20u;
label_159c20:
    // 0x159c20: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x159c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_159c24:
    // 0x159c24: 0xa242005d  sb          $v0, 0x5D($s2)
    ctx->pc = 0x159c24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 93), (uint8_t)GPR_U32(ctx, 2));
label_159c28:
    // 0x159c28: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x159c28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_159c2c:
    // 0x159c2c: 0xa242005e  sb          $v0, 0x5E($s2)
    ctx->pc = 0x159c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 94), (uint8_t)GPR_U32(ctx, 2));
label_159c30:
    // 0x159c30: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x159c30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_159c34:
    // 0x159c34: 0xa242005f  sb          $v0, 0x5F($s2)
    ctx->pc = 0x159c34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 95), (uint8_t)GPR_U32(ctx, 2));
label_159c38:
    // 0x159c38: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x159c38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_159c3c:
    // 0x159c3c: 0xa2420060  sb          $v0, 0x60($s2)
    ctx->pc = 0x159c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 96), (uint8_t)GPR_U32(ctx, 2));
label_159c40:
    // 0x159c40: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x159c40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_159c44:
    // 0x159c44: 0xa2420061  sb          $v0, 0x61($s2)
    ctx->pc = 0x159c44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 97), (uint8_t)GPR_U32(ctx, 2));
label_159c48:
    // 0x159c48: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x159c48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
label_159c4c:
    // 0x159c4c: 0xa2420062  sb          $v0, 0x62($s2)
    ctx->pc = 0x159c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 98), (uint8_t)GPR_U32(ctx, 2));
label_159c50:
    // 0x159c50: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x159c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_159c54:
    // 0x159c54: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x159c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_159c58:
    // 0x159c58: 0x24a5caec  addiu       $a1, $a1, -0x3514
    ctx->pc = 0x159c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953708));
label_159c5c:
    // 0x159c5c: 0x3a260001  xori        $a2, $s1, 0x1
    ctx->pc = 0x159c5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
label_159c60:
    // 0x159c60: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x159c60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_159c64:
    // 0x159c64: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x159c64u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159c68:
    // 0x159c68: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x159c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_159c6c:
    // 0x159c6c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x159c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_159c70:
    // 0x159c70: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x159c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_159c74:
    // 0x159c74: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x159c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_159c78:
    // 0x159c78: 0x2442497c  addiu       $v0, $v0, 0x497C
    ctx->pc = 0x159c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18812));
label_159c7c:
    // 0x159c7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x159c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_159c80:
    // 0x159c80: 0xa2440070  sb          $a0, 0x70($s2)
    ctx->pc = 0x159c80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 4));
label_159c84:
    // 0x159c84: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x159c84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_159c88:
    // 0x159c88: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_159c8c:
    if (ctx->pc == 0x159C8Cu) {
        ctx->pc = 0x159C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C88u;
        // 0x159c8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159C90u;
        goto label_159c90;
    }
    ctx->pc = 0x159C88u;
    {
        const bool branch_taken_0x159c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C88u;
        // 0x159c8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c88) {
            ctx->pc = 0x159CD0u;
            goto label_159cd0;
        }
    }
    ctx->pc = 0x159C90u;
label_159c90:
    // 0x159c90: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x159c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_159c94:
    // 0x159c94: 0x92430070  lbu         $v1, 0x70($s2)
    ctx->pc = 0x159c94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 112)));
label_159c98:
    // 0x159c98: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x159c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_159c9c:
    // 0x159c9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x159c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_159ca0:
    // 0x159ca0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_159ca4:
    if (ctx->pc == 0x159CA4u) {
        ctx->pc = 0x159CA8u;
        goto label_159ca8;
    }
    ctx->pc = 0x159CA0u;
    {
        const bool branch_taken_0x159ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x159ca0) {
            ctx->pc = 0x159CCCu;
            goto label_159ccc;
        }
    }
    ctx->pc = 0x159CA8u;
label_159ca8:
    // 0x159ca8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x159ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_159cac:
    // 0x159cac: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_159cb0:
    if (ctx->pc == 0x159CB0u) {
        ctx->pc = 0x159CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CACu;
        // 0x159cb0: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x159CB4u;
        goto label_159cb4;
    }
    ctx->pc = 0x159CACu;
    {
        const bool branch_taken_0x159cac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x159CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CACu;
        // 0x159cb0: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159cac) {
            ctx->pc = 0x159CC0u;
            goto label_159cc0;
        }
    }
    ctx->pc = 0x159CB4u;
label_159cb4:
    // 0x159cb4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_159cb8:
    if (ctx->pc == 0x159CB8u) {
        ctx->pc = 0x159CBCu;
        goto label_159cbc;
    }
    ctx->pc = 0x159CB4u;
    {
        const bool branch_taken_0x159cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159cb4) {
            ctx->pc = 0x159CC0u;
            goto label_159cc0;
        }
    }
    ctx->pc = 0x159CBCu;
label_159cbc:
    // 0x159cbc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x159cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_159cc0:
    // 0x159cc0: 0xa2420070  sb          $v0, 0x70($s2)
    ctx->pc = 0x159cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 2));
label_159cc4:
    // 0x159cc4: 0x92420070  lbu         $v0, 0x70($s2)
    ctx->pc = 0x159cc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 112)));
label_159cc8:
    // 0x159cc8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x159cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_159ccc:
    // 0x159ccc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x159cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_159cd0:
    // 0x159cd0: 0xc056834  jal         func_15A0D0
label_159cd4:
    if (ctx->pc == 0x159CD4u) {
        ctx->pc = 0x159CD8u;
        goto label_159cd8;
    }
    ctx->pc = 0x159CD0u;
    SET_GPR_U32(ctx, 31, 0x159CD8u);
    ctx->pc = 0x15A0D0u;
    { ctx->pc = 0x15a0d0; return; }
    ctx->pc = 0x159CD8u;
label_159cd8:
    // 0x159cd8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x159cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_159cdc:
    // 0x159cdc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x159cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_159ce0:
    // 0x159ce0: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x159ce0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_159ce4:
    // 0x159ce4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_159ce8:
    if (ctx->pc == 0x159CE8u) {
        ctx->pc = 0x159CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CE4u;
        // 0x159ce8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159CECu;
        goto label_159cec;
    }
    ctx->pc = 0x159CE4u;
    {
        const bool branch_taken_0x159ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x159CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CE4u;
        // 0x159ce8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ce4) {
            ctx->pc = 0x159CFCu;
            goto label_159cfc;
        }
    }
    ctx->pc = 0x159CECu;
label_159cec:
    // 0x159cec: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x159cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_159cf0:
    // 0x159cf0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_159cf4:
    if (ctx->pc == 0x159CF4u) {
        ctx->pc = 0x159CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CF0u;
        // 0x159cf4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159CF8u;
        goto label_159cf8;
    }
    ctx->pc = 0x159CF0u;
    {
        const bool branch_taken_0x159cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x159CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CF0u;
        // 0x159cf4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159cf0) {
            ctx->pc = 0x159D04u;
            goto label_159d04;
        }
    }
    ctx->pc = 0x159CF8u;
label_159cf8:
    // 0x159cf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x159cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159cfc:
    // 0x159cfc: 0x10000006  b           . + 4 + (0x6 << 2)
label_159d00:
    if (ctx->pc == 0x159D00u) {
        ctx->pc = 0x159D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CFCu;
        // 0x159d00: 0xa242006a  sb          $v0, 0x6A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159D04u;
        goto label_159d04;
    }
    ctx->pc = 0x159CFCu;
    {
        const bool branch_taken_0x159cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CFCu;
        // 0x159d00: 0xa242006a  sb          $v0, 0x6A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159cfc) {
            ctx->pc = 0x159D18u;
            goto label_159d18;
        }
    }
    ctx->pc = 0x159D04u;
label_159d04:
    // 0x159d04: 0x90224af6  lbu         $v0, 0x4AF6($at)
    ctx->pc = 0x159d04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_159d08:
    // 0x159d08: 0x28410029  slti        $at, $v0, 0x29
    ctx->pc = 0x159d08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
label_159d0c:
    // 0x159d0c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_159d10:
    if (ctx->pc == 0x159D10u) {
        ctx->pc = 0x159D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D0Cu;
        // 0x159d10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159D14u;
        goto label_159d14;
    }
    ctx->pc = 0x159D0Cu;
    {
        const bool branch_taken_0x159d0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x159D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D0Cu;
        // 0x159d10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d0c) {
            ctx->pc = 0x159D18u;
            goto label_159d18;
        }
    }
    ctx->pc = 0x159D14u;
label_159d14:
    // 0x159d14: 0xa242006a  sb          $v0, 0x6A($s2)
    ctx->pc = 0x159d14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 2));
label_159d18:
    // 0x159d18: 0x824c006a  lb          $t4, 0x6A($s2)
    ctx->pc = 0x159d18u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 106)));
label_159d1c:
    // 0x159d1c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x159d1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159d20:
    // 0x159d20: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x159d20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_159d24:
    // 0x159d24: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x159d24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_159d28:
    // 0x159d28: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x159d28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_159d2c:
    // 0x159d2c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x159d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_159d30:
    // 0x159d30: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x159d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_159d34:
    // 0x159d34: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x159d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_159d38:
    // 0x159d38: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x159d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_159d3c:
    // 0x159d3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x159d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_159d40:
    // 0x159d40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x159d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_159d44:
    // 0x159d44: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x159d44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_159d48:
    // 0x159d48: 0xa24c0076  sb          $t4, 0x76($s2)
    ctx->pc = 0x159d48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 118), (uint8_t)GPR_U32(ctx, 12));
label_159d4c:
    // 0x159d4c: 0x924c0076  lbu         $t4, 0x76($s2)
    ctx->pc = 0x159d4cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 118)));
label_159d50:
    // 0x159d50: 0xa24c0077  sb          $t4, 0x77($s2)
    ctx->pc = 0x159d50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 119), (uint8_t)GPR_U32(ctx, 12));
label_159d54:
    // 0x159d54: 0x924c0076  lbu         $t4, 0x76($s2)
    ctx->pc = 0x159d54u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 118)));
label_159d58:
    // 0x159d58: 0xc580a  movz        $t3, $zero, $t4
    ctx->pc = 0x159d58u;
    if (GPR_U64(ctx, 12) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
label_159d5c:
    // 0x159d5c: 0xa24b0078  sb          $t3, 0x78($s2)
    ctx->pc = 0x159d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 120), (uint8_t)GPR_U32(ctx, 11));
label_159d60:
    // 0x159d60: 0xa240007a  sb          $zero, 0x7A($s2)
    ctx->pc = 0x159d60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 122), (uint8_t)GPR_U32(ctx, 0));
label_159d64:
    // 0x159d64: 0xa24a007b  sb          $t2, 0x7B($s2)
    ctx->pc = 0x159d64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 123), (uint8_t)GPR_U32(ctx, 10));
label_159d68:
    // 0x159d68: 0xa249007c  sb          $t1, 0x7C($s2)
    ctx->pc = 0x159d68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 124), (uint8_t)GPR_U32(ctx, 9));
label_159d6c:
    // 0x159d6c: 0xa248007d  sb          $t0, 0x7D($s2)
    ctx->pc = 0x159d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 125), (uint8_t)GPR_U32(ctx, 8));
label_159d70:
    // 0x159d70: 0xa247007e  sb          $a3, 0x7E($s2)
    ctx->pc = 0x159d70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 126), (uint8_t)GPR_U32(ctx, 7));
label_159d74:
    // 0x159d74: 0xa246007f  sb          $a2, 0x7F($s2)
    ctx->pc = 0x159d74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 127), (uint8_t)GPR_U32(ctx, 6));
label_159d78:
    // 0x159d78: 0xa2430080  sb          $v1, 0x80($s2)
    ctx->pc = 0x159d78u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 128), (uint8_t)GPR_U32(ctx, 3));
label_159d7c:
    // 0x159d7c: 0xc05677c  jal         func_159DF0
label_159d80:
    if (ctx->pc == 0x159D80u) {
        ctx->pc = 0x159D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D7Cu;
        // 0x159d80: 0xa2420081  sb          $v0, 0x81($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 129), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159D84u;
        goto label_159d84;
    }
    ctx->pc = 0x159D7Cu;
    SET_GPR_U32(ctx, 31, 0x159D84u);
    ctx->pc = 0x159D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D7Cu;
    // 0x159d80: 0xa2420081  sb          $v0, 0x81($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 129), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159DF0u;
    goto label_159df0;
    ctx->pc = 0x159D84u;
label_159d84:
    // 0x159d84: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x159d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_159d88:
    // 0x159d88: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x159d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_159d8c:
    // 0x159d8c: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x159d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_159d90:
    // 0x159d90: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x159d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_159d94:
    // 0x159d94: 0xae440030  sw          $a0, 0x30($s2)
    ctx->pc = 0x159d94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 4));
label_159d98:
    // 0x159d98: 0x92450070  lbu         $a1, 0x70($s2)
    ctx->pc = 0x159d98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 112)));
label_159d9c:
    // 0x159d9c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x159d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_159da0:
    // 0x159da0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x159da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_159da4:
    // 0x159da4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x159da4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_159da8:
    // 0x159da8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x159da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_159dac:
    // 0x159dac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x159dacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_159db0:
    // 0x159db0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x159db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_159db4:
    // 0x159db4: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x159db4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_159db8:
    // 0x159db8: 0x8c234c44  lw          $v1, 0x4C44($at)
    ctx->pc = 0x159db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19524)));
label_159dbc:
    // 0x159dbc: 0xae430044  sw          $v1, 0x44($s2)
    ctx->pc = 0x159dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 3));
label_159dc0:
    // 0x159dc0: 0xa2400084  sb          $zero, 0x84($s2)
    ctx->pc = 0x159dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 132), (uint8_t)GPR_U32(ctx, 0));
label_159dc4:
    // 0x159dc4: 0xa2400085  sb          $zero, 0x85($s2)
    ctx->pc = 0x159dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 133), (uint8_t)GPR_U32(ctx, 0));
label_159dc8:
    // 0x159dc8: 0xa2400086  sb          $zero, 0x86($s2)
    ctx->pc = 0x159dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 134), (uint8_t)GPR_U32(ctx, 0));
label_159dcc:
    // 0x159dcc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x159dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_159dd0:
    // 0x159dd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159dd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_159dd4:
    // 0x159dd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_159dd8:
    // 0x159dd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_159ddc:
    // 0x159ddc: 0x3e00008  jr          $ra
label_159de0:
    if (ctx->pc == 0x159DE0u) {
        ctx->pc = 0x159DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DDCu;
        // 0x159de0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159DE4u;
        goto label_159de4;
    }
    ctx->pc = 0x159DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DDCu;
        // 0x159de0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159DE4u;
label_159de4:
    // 0x159de4: 0x0  nop
    ctx->pc = 0x159de4u;
    // NOP
label_159de8:
    // 0x159de8: 0x0  nop
    ctx->pc = 0x159de8u;
    // NOP
label_159dec:
    // 0x159dec: 0x0  nop
    ctx->pc = 0x159decu;
    // NOP
label_159df0:
    // 0x159df0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x159df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_159df4:
    // 0x159df4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x159df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_159df8:
    // 0x159df8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_159dfc:
    // 0x159dfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_159e00:
    // 0x159e00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_159e04:
    // 0x159e04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x159e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_159e08:
    // 0x159e08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x159e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_159e0c:
    // 0x159e0c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x159e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_159e10:
    // 0x159e10: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x159e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_159e14:
    // 0x159e14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159e18:
    // 0x159e18: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x159e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_159e1c:
    // 0x159e1c: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x159e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_159e20:
    // 0x159e20: 0xa0640010  sb          $a0, 0x10($v1)
    ctx->pc = 0x159e20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 4));
label_159e24:
    // 0x159e24: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x159e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_159e28:
    // 0x159e28: 0xa0640011  sb          $a0, 0x11($v1)
    ctx->pc = 0x159e28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 4));
label_159e2c:
    // 0x159e2c: 0x28a2000c  slti        $v0, $a1, 0xC
    ctx->pc = 0x159e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
label_159e30:
    // 0x159e30: 0xa0640012  sb          $a0, 0x12($v1)
    ctx->pc = 0x159e30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 4));
label_159e34:
    // 0x159e34: 0xa0640013  sb          $a0, 0x13($v1)
    ctx->pc = 0x159e34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 19), (uint8_t)GPR_U32(ctx, 4));
label_159e38:
    // 0x159e38: 0xa0640014  sb          $a0, 0x14($v1)
    ctx->pc = 0x159e38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 4));
label_159e3c:
    // 0x159e3c: 0xa0640015  sb          $a0, 0x15($v1)
    ctx->pc = 0x159e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 4));
label_159e40:
    // 0x159e40: 0xa0640016  sb          $a0, 0x16($v1)
    ctx->pc = 0x159e40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22), (uint8_t)GPR_U32(ctx, 4));
label_159e44:
    // 0x159e44: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_159e48:
    if (ctx->pc == 0x159E48u) {
        ctx->pc = 0x159E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E44u;
        // 0x159e48: 0xa0640017  sb          $a0, 0x17($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 23), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159E4Cu;
        goto label_159e4c;
    }
    ctx->pc = 0x159E44u;
    {
        const bool branch_taken_0x159e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E44u;
        // 0x159e48: 0xa0640017  sb          $a0, 0x17($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 23), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159e44) {
            ctx->pc = 0x159E1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159e1c;
        }
    }
    ctx->pc = 0x159E4Cu;
label_159e4c:
    // 0x159e4c: 0x28a10014  slti        $at, $a1, 0x14
    ctx->pc = 0x159e4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
label_159e50:
    // 0x159e50: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_159e54:
    if (ctx->pc == 0x159E54u) {
        ctx->pc = 0x159E58u;
        goto label_159e58;
    }
    ctx->pc = 0x159E50u;
    {
        const bool branch_taken_0x159e50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x159e50) {
            ctx->pc = 0x159E7Cu;
            goto label_159e7c;
        }
    }
    ctx->pc = 0x159E58u;
label_159e58:
    // 0x159e58: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x159e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_159e5c:
    // 0x159e5c: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x159e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_159e60:
    // 0x159e60: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x159e60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
label_159e64:
    // 0x159e64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x159e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_159e68:
    // 0x159e68: 0x28a20014  slti        $v0, $a1, 0x14
    ctx->pc = 0x159e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
label_159e6c:
    // 0x159e6c: 0x0  nop
    ctx->pc = 0x159e6cu;
    // NOP
label_159e70:
    // 0x159e70: 0x0  nop
    ctx->pc = 0x159e70u;
    // NOP
label_159e74:
    // 0x159e74: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_159e78:
    if (ctx->pc == 0x159E78u) {
        ctx->pc = 0x159E7Cu;
        goto label_159e7c;
    }
    ctx->pc = 0x159E74u;
    {
        const bool branch_taken_0x159e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159e74) {
            ctx->pc = 0x159E5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159e5c;
        }
    }
    ctx->pc = 0x159E7Cu;
label_159e7c:
    // 0x159e7c: 0x0  nop
    ctx->pc = 0x159e7cu;
    // NOP
label_159e80:
    // 0x159e80: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x159e80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_159e84:
    // 0x159e84: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x159e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_159e88:
    // 0x159e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_159e8c:
    // 0x159e8c: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x159e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_159e90:
    // 0x159e90: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x159e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_159e94:
    // 0x159e94: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x159e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_159e98:
    // 0x159e98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x159e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_159e9c:
    // 0x159e9c: 0xc090e44  jal         func_243910
label_159ea0:
    if (ctx->pc == 0x159EA0u) {
        ctx->pc = 0x159EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E9Cu;
        // 0x159ea0: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159EA4u;
        goto label_159ea4;
    }
    ctx->pc = 0x159E9Cu;
    SET_GPR_U32(ctx, 31, 0x159EA4u);
    ctx->pc = 0x159EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159E9Cu;
    // 0x159ea0: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243910u;
    { ctx->pc = 0x243910; return; }
    ctx->pc = 0x159EA4u;
label_159ea4:
    // 0x159ea4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x159ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_159ea8:
    // 0x159ea8: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x159ea8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_159eac:
    // 0x159eac: 0x3463869f  ori         $v1, $v1, 0x869F
    ctx->pc = 0x159eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34463);
label_159eb0:
    // 0x159eb0: 0x243082a  slt         $at, $s2, $v1
    ctx->pc = 0x159eb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_159eb4:
    // 0x159eb4: 0x61900a  movz        $s2, $v1, $at
    ctx->pc = 0x159eb4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_159eb8:
    // 0x159eb8: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x159eb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_159ebc:
    // 0x159ebc: 0x1900a  movz        $s2, $zero, $at
    ctx->pc = 0x159ebcu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_159ec0:
    // 0x159ec0: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x159ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_159ec4:
    // 0x159ec4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x159ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_159ec8:
    // 0x159ec8: 0x3421869f  ori         $at, $at, 0x869F
    ctx->pc = 0x159ec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34463);
label_159ecc:
    // 0x159ecc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x159eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_159ed0:
    // 0x159ed0: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x159ed0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_159ed4:
    // 0x159ed4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_159ed8:
    if (ctx->pc == 0x159ED8u) {
        ctx->pc = 0x159EDCu;
        goto label_159edc;
    }
    ctx->pc = 0x159ED4u;
    {
        const bool branch_taken_0x159ed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x159ed4) {
            ctx->pc = 0x159EE4u;
            goto label_159ee4;
        }
    }
    ctx->pc = 0x159EDCu;
label_159edc:
    // 0x159edc: 0x10000004  b           . + 4 + (0x4 << 2)
label_159ee0:
    if (ctx->pc == 0x159EE0u) {
        ctx->pc = 0x159EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159EDCu;
        // 0x159ee0: 0x3082a  slt         $at, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x159EE4u;
        goto label_159ee4;
    }
    ctx->pc = 0x159EDCu;
    {
        const bool branch_taken_0x159edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159EDCu;
        // 0x159ee0: 0x3082a  slt         $at, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159edc) {
            ctx->pc = 0x159EF0u;
            goto label_159ef0;
        }
    }
    ctx->pc = 0x159EE4u;
label_159ee4:
    // 0x159ee4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x159ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_159ee8:
    // 0x159ee8: 0x3463869f  ori         $v1, $v1, 0x869F
    ctx->pc = 0x159ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34463);
label_159eec:
    // 0x159eec: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x159eecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_159ef0:
    // 0x159ef0: 0x1180a  movz        $v1, $zero, $at
    ctx->pc = 0x159ef0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_159ef4:
    // 0x159ef4: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x159ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_159ef8:
    // 0x159ef8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x159ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_159efc:
    // 0x159efc: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x159efcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_159f00:
    // 0x159f00: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x159f00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_159f04:
    // 0x159f04: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_159f08:
    if (ctx->pc == 0x159F08u) {
        ctx->pc = 0x159F0Cu;
        goto label_159f0c;
    }
    ctx->pc = 0x159F04u;
    {
        const bool branch_taken_0x159f04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x159f04) {
            ctx->pc = 0x159F14u;
            goto label_159f14;
        }
    }
    ctx->pc = 0x159F0Cu;
label_159f0c:
    // 0x159f0c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_159f10:
    if (ctx->pc == 0x159F10u) {
        ctx->pc = 0x159F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F0Cu;
        // 0x159f10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159F14u;
        goto label_159f14;
    }
    ctx->pc = 0x159F0Cu;
    {
        const bool branch_taken_0x159f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F0Cu;
        // 0x159f10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f0c) {
            ctx->pc = 0x159FC8u;
            { ctx->pc = 0x159fc8; return; }
        }
    }
    ctx->pc = 0x159F14u;
label_159f14:
    // 0x159f14: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x159f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_159f18:
    // 0x159f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_159f1c:
    // 0x159f1c: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x159f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_159f20:
    // 0x159f20: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x159f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_159f24:
    // 0x159f24: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x159f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_159f28:
    // 0x159f28: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x159f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_159f2c:
    // 0x159f2c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x159f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_159f30:
    // 0x159f30: 0xc090e44  jal         func_243910
label_159f34:
    if (ctx->pc == 0x159F34u) {
        ctx->pc = 0x159F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F30u;
        // 0x159f34: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159F38u;
        goto label_159f38;
    }
    ctx->pc = 0x159F30u;
    SET_GPR_U32(ctx, 31, 0x159F38u);
    ctx->pc = 0x159F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159F30u;
    // 0x159f34: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243910u;
    { ctx->pc = 0x243910; return; }
    ctx->pc = 0x159F38u;
label_159f38:
    // 0x159f38: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x159f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_159f3c:
    // 0x159f3c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x159f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_159f40:
    // 0x159f40: 0x3421869f  ori         $at, $at, 0x869F
    ctx->pc = 0x159f40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34463);
label_159f44:
    // 0x159f44: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x159f44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_159f48:
    // 0x159f48: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_159f4c:
    if (ctx->pc == 0x159F4Cu) {
        ctx->pc = 0x159F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F48u;
        // 0x159f4c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159F50u;
        { ctx->pc = 0x159f50; return; }
    }
    ctx->pc = 0x159F48u;
    {
        const bool branch_taken_0x159f48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x159F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F48u;
        // 0x159f4c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f48) {
            ctx->pc = 0x159F5Cu;
            { ctx->pc = 0x159f5c; return; }
        }
    }
    ctx->pc = 0x159F50u;
    ctx->pc = 0x159f50u;
    return;
}
