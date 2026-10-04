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


void FUN_0014eba0_part89(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x179b20u: goto label_179b20;
        case 0x179b24u: goto label_179b24;
        case 0x179b28u: goto label_179b28;
        case 0x179b2cu: goto label_179b2c;
        case 0x179b30u: goto label_179b30;
        case 0x179b34u: goto label_179b34;
        case 0x179b38u: goto label_179b38;
        case 0x179b3cu: goto label_179b3c;
        case 0x179b40u: goto label_179b40;
        case 0x179b44u: goto label_179b44;
        case 0x179b48u: goto label_179b48;
        case 0x179b4cu: goto label_179b4c;
        case 0x179b50u: goto label_179b50;
        case 0x179b54u: goto label_179b54;
        case 0x179b58u: goto label_179b58;
        case 0x179b5cu: goto label_179b5c;
        case 0x179b60u: goto label_179b60;
        case 0x179b64u: goto label_179b64;
        case 0x179b68u: goto label_179b68;
        case 0x179b6cu: goto label_179b6c;
        case 0x179b70u: goto label_179b70;
        case 0x179b74u: goto label_179b74;
        case 0x179b78u: goto label_179b78;
        case 0x179b7cu: goto label_179b7c;
        case 0x179b80u: goto label_179b80;
        case 0x179b84u: goto label_179b84;
        case 0x179b88u: goto label_179b88;
        case 0x179b8cu: goto label_179b8c;
        case 0x179b90u: goto label_179b90;
        case 0x179b94u: goto label_179b94;
        case 0x179b98u: goto label_179b98;
        case 0x179b9cu: goto label_179b9c;
        case 0x179ba0u: goto label_179ba0;
        case 0x179ba4u: goto label_179ba4;
        case 0x179ba8u: goto label_179ba8;
        case 0x179bacu: goto label_179bac;
        case 0x179bb0u: goto label_179bb0;
        case 0x179bb4u: goto label_179bb4;
        case 0x179bb8u: goto label_179bb8;
        case 0x179bbcu: goto label_179bbc;
        case 0x179bc0u: goto label_179bc0;
        case 0x179bc4u: goto label_179bc4;
        case 0x179bc8u: goto label_179bc8;
        case 0x179bccu: goto label_179bcc;
        case 0x179bd0u: goto label_179bd0;
        case 0x179bd4u: goto label_179bd4;
        case 0x179bd8u: goto label_179bd8;
        case 0x179bdcu: goto label_179bdc;
        case 0x179be0u: goto label_179be0;
        case 0x179be4u: goto label_179be4;
        case 0x179be8u: goto label_179be8;
        case 0x179becu: goto label_179bec;
        case 0x179bf0u: goto label_179bf0;
        case 0x179bf4u: goto label_179bf4;
        case 0x179bf8u: goto label_179bf8;
        case 0x179bfcu: goto label_179bfc;
        case 0x179c00u: goto label_179c00;
        case 0x179c04u: goto label_179c04;
        case 0x179c08u: goto label_179c08;
        case 0x179c0cu: goto label_179c0c;
        case 0x179c10u: goto label_179c10;
        case 0x179c14u: goto label_179c14;
        case 0x179c18u: goto label_179c18;
        case 0x179c1cu: goto label_179c1c;
        case 0x179c20u: goto label_179c20;
        case 0x179c24u: goto label_179c24;
        case 0x179c28u: goto label_179c28;
        case 0x179c2cu: goto label_179c2c;
        case 0x179c30u: goto label_179c30;
        case 0x179c34u: goto label_179c34;
        case 0x179c38u: goto label_179c38;
        case 0x179c3cu: goto label_179c3c;
        case 0x179c40u: goto label_179c40;
        case 0x179c44u: goto label_179c44;
        case 0x179c48u: goto label_179c48;
        case 0x179c4cu: goto label_179c4c;
        case 0x179c50u: goto label_179c50;
        case 0x179c54u: goto label_179c54;
        case 0x179c58u: goto label_179c58;
        case 0x179c5cu: goto label_179c5c;
        case 0x179c60u: goto label_179c60;
        case 0x179c64u: goto label_179c64;
        case 0x179c68u: goto label_179c68;
        case 0x179c6cu: goto label_179c6c;
        case 0x179c70u: goto label_179c70;
        case 0x179c74u: goto label_179c74;
        case 0x179c78u: goto label_179c78;
        case 0x179c7cu: goto label_179c7c;
        case 0x179c80u: goto label_179c80;
        case 0x179c84u: goto label_179c84;
        case 0x179c88u: goto label_179c88;
        case 0x179c8cu: goto label_179c8c;
        case 0x179c90u: goto label_179c90;
        case 0x179c94u: goto label_179c94;
        case 0x179c98u: goto label_179c98;
        case 0x179c9cu: goto label_179c9c;
        case 0x179ca0u: goto label_179ca0;
        case 0x179ca4u: goto label_179ca4;
        case 0x179ca8u: goto label_179ca8;
        case 0x179cacu: goto label_179cac;
        case 0x179cb0u: goto label_179cb0;
        case 0x179cb4u: goto label_179cb4;
        case 0x179cb8u: goto label_179cb8;
        case 0x179cbcu: goto label_179cbc;
        case 0x179cc0u: goto label_179cc0;
        case 0x179cc4u: goto label_179cc4;
        case 0x179cc8u: goto label_179cc8;
        case 0x179cccu: goto label_179ccc;
        case 0x179cd0u: goto label_179cd0;
        case 0x179cd4u: goto label_179cd4;
        case 0x179cd8u: goto label_179cd8;
        case 0x179cdcu: goto label_179cdc;
        case 0x179ce0u: goto label_179ce0;
        case 0x179ce4u: goto label_179ce4;
        case 0x179ce8u: goto label_179ce8;
        case 0x179cecu: goto label_179cec;
        case 0x179cf0u: goto label_179cf0;
        case 0x179cf4u: goto label_179cf4;
        case 0x179cf8u: goto label_179cf8;
        case 0x179cfcu: goto label_179cfc;
        case 0x179d00u: goto label_179d00;
        case 0x179d04u: goto label_179d04;
        case 0x179d08u: goto label_179d08;
        case 0x179d0cu: goto label_179d0c;
        case 0x179d10u: goto label_179d10;
        case 0x179d14u: goto label_179d14;
        case 0x179d18u: goto label_179d18;
        case 0x179d1cu: goto label_179d1c;
        case 0x179d20u: goto label_179d20;
        case 0x179d24u: goto label_179d24;
        case 0x179d28u: goto label_179d28;
        case 0x179d2cu: goto label_179d2c;
        case 0x179d30u: goto label_179d30;
        case 0x179d34u: goto label_179d34;
        case 0x179d38u: goto label_179d38;
        case 0x179d3cu: goto label_179d3c;
        case 0x179d40u: goto label_179d40;
        case 0x179d44u: goto label_179d44;
        case 0x179d48u: goto label_179d48;
        case 0x179d4cu: goto label_179d4c;
        case 0x179d50u: goto label_179d50;
        case 0x179d54u: goto label_179d54;
        case 0x179d58u: goto label_179d58;
        case 0x179d5cu: goto label_179d5c;
        case 0x179d60u: goto label_179d60;
        case 0x179d64u: goto label_179d64;
        case 0x179d68u: goto label_179d68;
        case 0x179d6cu: goto label_179d6c;
        case 0x179d70u: goto label_179d70;
        case 0x179d74u: goto label_179d74;
        case 0x179d78u: goto label_179d78;
        case 0x179d7cu: goto label_179d7c;
        case 0x179d80u: goto label_179d80;
        case 0x179d84u: goto label_179d84;
        case 0x179d88u: goto label_179d88;
        case 0x179d8cu: goto label_179d8c;
        case 0x179d90u: goto label_179d90;
        case 0x179d94u: goto label_179d94;
        case 0x179d98u: goto label_179d98;
        case 0x179d9cu: goto label_179d9c;
        case 0x179da0u: goto label_179da0;
        case 0x179da4u: goto label_179da4;
        case 0x179da8u: goto label_179da8;
        case 0x179dacu: goto label_179dac;
        case 0x179db0u: goto label_179db0;
        case 0x179db4u: goto label_179db4;
        case 0x179db8u: goto label_179db8;
        case 0x179dbcu: goto label_179dbc;
        case 0x179dc0u: goto label_179dc0;
        case 0x179dc4u: goto label_179dc4;
        case 0x179dc8u: goto label_179dc8;
        case 0x179dccu: goto label_179dcc;
        case 0x179dd0u: goto label_179dd0;
        case 0x179dd4u: goto label_179dd4;
        case 0x179dd8u: goto label_179dd8;
        case 0x179ddcu: goto label_179ddc;
        case 0x179de0u: goto label_179de0;
        case 0x179de4u: goto label_179de4;
        case 0x179de8u: goto label_179de8;
        case 0x179decu: goto label_179dec;
        case 0x179df0u: goto label_179df0;
        case 0x179df4u: goto label_179df4;
        case 0x179df8u: goto label_179df8;
        case 0x179dfcu: goto label_179dfc;
        case 0x179e00u: goto label_179e00;
        case 0x179e04u: goto label_179e04;
        case 0x179e08u: goto label_179e08;
        case 0x179e0cu: goto label_179e0c;
        case 0x179e10u: goto label_179e10;
        case 0x179e14u: goto label_179e14;
        case 0x179e18u: goto label_179e18;
        case 0x179e1cu: goto label_179e1c;
        case 0x179e20u: goto label_179e20;
        case 0x179e24u: goto label_179e24;
        case 0x179e28u: goto label_179e28;
        case 0x179e2cu: goto label_179e2c;
        case 0x179e30u: goto label_179e30;
        case 0x179e34u: goto label_179e34;
        case 0x179e38u: goto label_179e38;
        case 0x179e3cu: goto label_179e3c;
        case 0x179e40u: goto label_179e40;
        case 0x179e44u: goto label_179e44;
        case 0x179e48u: goto label_179e48;
        case 0x179e4cu: goto label_179e4c;
        case 0x179e50u: goto label_179e50;
        case 0x179e54u: goto label_179e54;
        case 0x179e58u: goto label_179e58;
        case 0x179e5cu: goto label_179e5c;
        case 0x179e60u: goto label_179e60;
        case 0x179e64u: goto label_179e64;
        case 0x179e68u: goto label_179e68;
        case 0x179e6cu: goto label_179e6c;
        case 0x179e70u: goto label_179e70;
        case 0x179e74u: goto label_179e74;
        case 0x179e78u: goto label_179e78;
        case 0x179e7cu: goto label_179e7c;
        case 0x179e80u: goto label_179e80;
        case 0x179e84u: goto label_179e84;
        case 0x179e88u: goto label_179e88;
        case 0x179e8cu: goto label_179e8c;
        case 0x179e90u: goto label_179e90;
        case 0x179e94u: goto label_179e94;
        case 0x179e98u: goto label_179e98;
        case 0x179e9cu: goto label_179e9c;
        case 0x179ea0u: goto label_179ea0;
        case 0x179ea4u: goto label_179ea4;
        case 0x179ea8u: goto label_179ea8;
        case 0x179eacu: goto label_179eac;
        case 0x179eb0u: goto label_179eb0;
        case 0x179eb4u: goto label_179eb4;
        case 0x179eb8u: goto label_179eb8;
        case 0x179ebcu: goto label_179ebc;
        case 0x179ec0u: goto label_179ec0;
        case 0x179ec4u: goto label_179ec4;
        case 0x179ec8u: goto label_179ec8;
        case 0x179eccu: goto label_179ecc;
        case 0x179ed0u: goto label_179ed0;
        case 0x179ed4u: goto label_179ed4;
        case 0x179ed8u: goto label_179ed8;
        case 0x179edcu: goto label_179edc;
        case 0x179ee0u: goto label_179ee0;
        case 0x179ee4u: goto label_179ee4;
        case 0x179ee8u: goto label_179ee8;
        case 0x179eecu: goto label_179eec;
        case 0x179ef0u: goto label_179ef0;
        case 0x179ef4u: goto label_179ef4;
        case 0x179ef8u: goto label_179ef8;
        case 0x179efcu: goto label_179efc;
        case 0x179f00u: goto label_179f00;
        case 0x179f04u: goto label_179f04;
        case 0x179f08u: goto label_179f08;
        case 0x179f0cu: goto label_179f0c;
        case 0x179f10u: goto label_179f10;
        case 0x179f14u: goto label_179f14;
        case 0x179f18u: goto label_179f18;
        case 0x179f1cu: goto label_179f1c;
        case 0x179f20u: goto label_179f20;
        case 0x179f24u: goto label_179f24;
        case 0x179f28u: goto label_179f28;
        case 0x179f2cu: goto label_179f2c;
        case 0x179f30u: goto label_179f30;
        case 0x179f34u: goto label_179f34;
        case 0x179f38u: goto label_179f38;
        case 0x179f3cu: goto label_179f3c;
        case 0x179f40u: goto label_179f40;
        case 0x179f44u: goto label_179f44;
        case 0x179f48u: goto label_179f48;
        case 0x179f4cu: goto label_179f4c;
        case 0x179f50u: goto label_179f50;
        case 0x179f54u: goto label_179f54;
        case 0x179f58u: goto label_179f58;
        case 0x179f5cu: goto label_179f5c;
        case 0x179f60u: goto label_179f60;
        case 0x179f64u: goto label_179f64;
        case 0x179f68u: goto label_179f68;
        case 0x179f6cu: goto label_179f6c;
        case 0x179f70u: goto label_179f70;
        case 0x179f74u: goto label_179f74;
        case 0x179f78u: goto label_179f78;
        case 0x179f7cu: goto label_179f7c;
        case 0x179f80u: goto label_179f80;
        case 0x179f84u: goto label_179f84;
        case 0x179f88u: goto label_179f88;
        case 0x179f8cu: goto label_179f8c;
        case 0x179f90u: goto label_179f90;
        case 0x179f94u: goto label_179f94;
        case 0x179f98u: goto label_179f98;
        case 0x179f9cu: goto label_179f9c;
        case 0x179fa0u: goto label_179fa0;
        case 0x179fa4u: goto label_179fa4;
        case 0x179fa8u: goto label_179fa8;
        case 0x179facu: goto label_179fac;
        case 0x179fb0u: goto label_179fb0;
        case 0x179fb4u: goto label_179fb4;
        case 0x179fb8u: goto label_179fb8;
        case 0x179fbcu: goto label_179fbc;
        case 0x179fc0u: goto label_179fc0;
        case 0x179fc4u: goto label_179fc4;
        case 0x179fc8u: goto label_179fc8;
        case 0x179fccu: goto label_179fcc;
        case 0x179fd0u: goto label_179fd0;
        case 0x179fd4u: goto label_179fd4;
        case 0x179fd8u: goto label_179fd8;
        case 0x179fdcu: goto label_179fdc;
        case 0x179fe0u: goto label_179fe0;
        case 0x179fe4u: goto label_179fe4;
        case 0x179fe8u: goto label_179fe8;
        case 0x179fecu: goto label_179fec;
        case 0x179ff0u: goto label_179ff0;
        case 0x179ff4u: goto label_179ff4;
        case 0x179ff8u: goto label_179ff8;
        case 0x179ffcu: goto label_179ffc;
        case 0x17a000u: goto label_17a000;
        case 0x17a004u: goto label_17a004;
        case 0x17a008u: goto label_17a008;
        case 0x17a00cu: goto label_17a00c;
        case 0x17a010u: goto label_17a010;
        case 0x17a014u: goto label_17a014;
        case 0x17a018u: goto label_17a018;
        case 0x17a01cu: goto label_17a01c;
        case 0x17a020u: goto label_17a020;
        case 0x17a024u: goto label_17a024;
        case 0x17a028u: goto label_17a028;
        case 0x17a02cu: goto label_17a02c;
        case 0x17a030u: goto label_17a030;
        case 0x17a034u: goto label_17a034;
        case 0x17a038u: goto label_17a038;
        case 0x17a03cu: goto label_17a03c;
        case 0x17a040u: goto label_17a040;
        case 0x17a044u: goto label_17a044;
        case 0x17a048u: goto label_17a048;
        case 0x17a04cu: goto label_17a04c;
        case 0x17a050u: goto label_17a050;
        case 0x17a054u: goto label_17a054;
        case 0x17a058u: goto label_17a058;
        case 0x17a05cu: goto label_17a05c;
        case 0x17a060u: goto label_17a060;
        case 0x17a064u: goto label_17a064;
        case 0x17a068u: goto label_17a068;
        case 0x17a06cu: goto label_17a06c;
        case 0x17a070u: goto label_17a070;
        case 0x17a074u: goto label_17a074;
        case 0x17a078u: goto label_17a078;
        case 0x17a07cu: goto label_17a07c;
        case 0x17a080u: goto label_17a080;
        case 0x17a084u: goto label_17a084;
        case 0x17a088u: goto label_17a088;
        case 0x17a08cu: goto label_17a08c;
        case 0x17a090u: goto label_17a090;
        case 0x17a094u: goto label_17a094;
        case 0x17a098u: goto label_17a098;
        case 0x17a09cu: goto label_17a09c;
        case 0x17a0a0u: goto label_17a0a0;
        case 0x17a0a4u: goto label_17a0a4;
        case 0x17a0a8u: goto label_17a0a8;
        case 0x17a0acu: goto label_17a0ac;
        case 0x17a0b0u: goto label_17a0b0;
        case 0x17a0b4u: goto label_17a0b4;
        case 0x17a0b8u: goto label_17a0b8;
        case 0x17a0bcu: goto label_17a0bc;
        case 0x17a0c0u: goto label_17a0c0;
        case 0x17a0c4u: goto label_17a0c4;
        case 0x17a0c8u: goto label_17a0c8;
        case 0x17a0ccu: goto label_17a0cc;
        case 0x17a0d0u: goto label_17a0d0;
        case 0x17a0d4u: goto label_17a0d4;
        case 0x17a0d8u: goto label_17a0d8;
        case 0x17a0dcu: goto label_17a0dc;
        case 0x17a0e0u: goto label_17a0e0;
        case 0x17a0e4u: goto label_17a0e4;
        case 0x17a0e8u: goto label_17a0e8;
        case 0x17a0ecu: goto label_17a0ec;
        case 0x17a0f0u: goto label_17a0f0;
        case 0x17a0f4u: goto label_17a0f4;
        case 0x17a0f8u: goto label_17a0f8;
        case 0x17a0fcu: goto label_17a0fc;
        case 0x17a100u: goto label_17a100;
        case 0x17a104u: goto label_17a104;
        case 0x17a108u: goto label_17a108;
        case 0x17a10cu: goto label_17a10c;
        case 0x17a110u: goto label_17a110;
        case 0x17a114u: goto label_17a114;
        case 0x17a118u: goto label_17a118;
        case 0x17a11cu: goto label_17a11c;
        case 0x17a120u: goto label_17a120;
        case 0x17a124u: goto label_17a124;
        case 0x17a128u: goto label_17a128;
        case 0x17a12cu: goto label_17a12c;
        case 0x17a130u: goto label_17a130;
        case 0x17a134u: goto label_17a134;
        case 0x17a138u: goto label_17a138;
        case 0x17a13cu: goto label_17a13c;
        case 0x17a140u: goto label_17a140;
        case 0x17a144u: goto label_17a144;
        case 0x17a148u: goto label_17a148;
        case 0x17a14cu: goto label_17a14c;
        case 0x17a150u: goto label_17a150;
        case 0x17a154u: goto label_17a154;
        case 0x17a158u: goto label_17a158;
        case 0x17a15cu: goto label_17a15c;
        case 0x17a160u: goto label_17a160;
        case 0x17a164u: goto label_17a164;
        case 0x17a168u: goto label_17a168;
        case 0x17a16cu: goto label_17a16c;
        case 0x17a170u: goto label_17a170;
        case 0x17a174u: goto label_17a174;
        case 0x17a178u: goto label_17a178;
        case 0x17a17cu: goto label_17a17c;
        case 0x17a180u: goto label_17a180;
        case 0x17a184u: goto label_17a184;
        case 0x17a188u: goto label_17a188;
        case 0x17a18cu: goto label_17a18c;
        case 0x17a190u: goto label_17a190;
        case 0x17a194u: goto label_17a194;
        case 0x17a198u: goto label_17a198;
        case 0x17a19cu: goto label_17a19c;
        case 0x17a1a0u: goto label_17a1a0;
        case 0x17a1a4u: goto label_17a1a4;
        case 0x17a1a8u: goto label_17a1a8;
        case 0x17a1acu: goto label_17a1ac;
        case 0x17a1b0u: goto label_17a1b0;
        case 0x17a1b4u: goto label_17a1b4;
        case 0x17a1b8u: goto label_17a1b8;
        case 0x17a1bcu: goto label_17a1bc;
        case 0x17a1c0u: goto label_17a1c0;
        case 0x17a1c4u: goto label_17a1c4;
        case 0x17a1c8u: goto label_17a1c8;
        case 0x17a1ccu: goto label_17a1cc;
        case 0x17a1d0u: goto label_17a1d0;
        case 0x17a1d4u: goto label_17a1d4;
        case 0x17a1d8u: goto label_17a1d8;
        case 0x17a1dcu: goto label_17a1dc;
        case 0x17a1e0u: goto label_17a1e0;
        case 0x17a1e4u: goto label_17a1e4;
        case 0x17a1e8u: goto label_17a1e8;
        case 0x17a1ecu: goto label_17a1ec;
        case 0x17a1f0u: goto label_17a1f0;
        case 0x17a1f4u: goto label_17a1f4;
        case 0x17a1f8u: goto label_17a1f8;
        case 0x17a1fcu: goto label_17a1fc;
        case 0x17a200u: goto label_17a200;
        case 0x17a204u: goto label_17a204;
        case 0x17a208u: goto label_17a208;
        case 0x17a20cu: goto label_17a20c;
        case 0x17a210u: goto label_17a210;
        case 0x17a214u: goto label_17a214;
        case 0x17a218u: goto label_17a218;
        case 0x17a21cu: goto label_17a21c;
        case 0x17a220u: goto label_17a220;
        case 0x17a224u: goto label_17a224;
        case 0x17a228u: goto label_17a228;
        case 0x17a22cu: goto label_17a22c;
        case 0x17a230u: goto label_17a230;
        case 0x17a234u: goto label_17a234;
        case 0x17a238u: goto label_17a238;
        case 0x17a23cu: goto label_17a23c;
        case 0x17a240u: goto label_17a240;
        case 0x17a244u: goto label_17a244;
        case 0x17a248u: goto label_17a248;
        case 0x17a24cu: goto label_17a24c;
        case 0x17a250u: goto label_17a250;
        case 0x17a254u: goto label_17a254;
        case 0x17a258u: goto label_17a258;
        case 0x17a25cu: goto label_17a25c;
        case 0x17a260u: goto label_17a260;
        case 0x17a264u: goto label_17a264;
        case 0x17a268u: goto label_17a268;
        case 0x17a26cu: goto label_17a26c;
        case 0x17a270u: goto label_17a270;
        case 0x17a274u: goto label_17a274;
        case 0x17a278u: goto label_17a278;
        case 0x17a27cu: goto label_17a27c;
        case 0x17a280u: goto label_17a280;
        case 0x17a284u: goto label_17a284;
        case 0x17a288u: goto label_17a288;
        case 0x17a28cu: goto label_17a28c;
        case 0x17a290u: goto label_17a290;
        case 0x17a294u: goto label_17a294;
        case 0x17a298u: goto label_17a298;
        case 0x17a29cu: goto label_17a29c;
        case 0x17a2a0u: goto label_17a2a0;
        case 0x17a2a4u: goto label_17a2a4;
        case 0x17a2a8u: goto label_17a2a8;
        case 0x17a2acu: goto label_17a2ac;
        case 0x17a2b0u: goto label_17a2b0;
        case 0x17a2b4u: goto label_17a2b4;
        case 0x17a2b8u: goto label_17a2b8;
        case 0x17a2bcu: goto label_17a2bc;
        case 0x17a2c0u: goto label_17a2c0;
        case 0x17a2c4u: goto label_17a2c4;
        case 0x17a2c8u: goto label_17a2c8;
        case 0x17a2ccu: goto label_17a2cc;
        case 0x17a2d0u: goto label_17a2d0;
        case 0x17a2d4u: goto label_17a2d4;
        case 0x17a2d8u: goto label_17a2d8;
        case 0x17a2dcu: goto label_17a2dc;
        case 0x17a2e0u: goto label_17a2e0;
        case 0x17a2e4u: goto label_17a2e4;
        case 0x17a2e8u: goto label_17a2e8;
        case 0x17a2ecu: goto label_17a2ec;
        default: return;
    }

label_179b20:
    // 0x179b20: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x179b20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_179b24:
    // 0x179b24: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x179b24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_179b28:
    // 0x179b28: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x179b28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_179b2c:
    // 0x179b2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x179b2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_179b30:
    // 0x179b30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x179b30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_179b34:
    // 0x179b34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x179b34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_179b38:
    // 0x179b38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x179b38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_179b3c:
    // 0x179b3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x179b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_179b40:
    // 0x179b40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_179b44:
    // 0x179b44: 0x3e00008  jr          $ra
label_179b48:
    if (ctx->pc == 0x179B48u) {
        ctx->pc = 0x179B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B44u;
        // 0x179b48: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179B4Cu;
        goto label_179b4c;
    }
    ctx->pc = 0x179B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B44u;
        // 0x179b48: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179B4Cu;
label_179b4c:
    // 0x179b4c: 0x0  nop
    ctx->pc = 0x179b4cu;
    // NOP
label_179b50:
    // 0x179b50: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x179b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_179b54:
    // 0x179b54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x179b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_179b58:
    // 0x179b58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x179b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_179b5c:
    // 0x179b5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x179b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_179b60:
    // 0x179b60: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x179b60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179b64:
    // 0x179b64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x179b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_179b68:
    // 0x179b68: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x179b68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_179b6c:
    // 0x179b6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x179b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_179b70:
    // 0x179b70: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x179b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_179b74:
    // 0x179b74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_179b78:
    // 0x179b78: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x179b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_179b7c:
    // 0x179b7c: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x179b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_179b80:
    // 0x179b80: 0xc066d0a  jal         func_19B428
label_179b84:
    if (ctx->pc == 0x179B84u) {
        ctx->pc = 0x179B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B80u;
        // 0x179b84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179B88u;
        goto label_179b88;
    }
    ctx->pc = 0x179B80u;
    SET_GPR_U32(ctx, 31, 0x179B88u);
    ctx->pc = 0x179B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179B80u;
    // 0x179b84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    { ctx->pc = 0x19b428; return; }
    ctx->pc = 0x179B88u;
label_179b88:
    // 0x179b88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x179b88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179b8c:
    // 0x179b8c: 0xc066e44  jal         func_19B910
label_179b90:
    if (ctx->pc == 0x179B90u) {
        ctx->pc = 0x179B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B8Cu;
        // 0x179b90: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179B94u;
        goto label_179b94;
    }
    ctx->pc = 0x179B8Cu;
    SET_GPR_U32(ctx, 31, 0x179B94u);
    ctx->pc = 0x179B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179B8Cu;
    // 0x179b90: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x179B94u;
label_179b94:
    // 0x179b94: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x179b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_179b98:
    // 0x179b98: 0x7a260000  lq          $a2, 0x0($s1)
    ctx->pc = 0x179b98u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_179b9c:
    // 0x179b9c: 0x7a270010  lq          $a3, 0x10($s1)
    ctx->pc = 0x179b9cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_179ba0:
    // 0x179ba0: 0x7a280020  lq          $t0, 0x20($s1)
    ctx->pc = 0x179ba0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_179ba4:
    // 0x179ba4: 0x48290000  qmfc2.ni    $t1, $vf0
    ctx->pc = 0x179ba4u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[0]));
label_179ba8:
    // 0x179ba8: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x179ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
label_179bac:
    // 0x179bac: 0x7ca70010  sq          $a3, 0x10($a1)
    ctx->pc = 0x179bacu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 7));
label_179bb0:
    // 0x179bb0: 0x7ca80020  sq          $t0, 0x20($a1)
    ctx->pc = 0x179bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 8));
label_179bb4:
    // 0x179bb4: 0xf8a00030  sqc2        $vf0, 0x30($a1)
    ctx->pc = 0x179bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_179bb8:
    // 0x179bb8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x179bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_179bbc:
    // 0x179bbc: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x179bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_179bc0:
    // 0x179bc0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_179bc4:
    if (ctx->pc == 0x179BC4u) {
        ctx->pc = 0x179BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BC0u;
        // 0x179bc4: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x179BC8u;
        goto label_179bc8;
    }
    ctx->pc = 0x179BC0u;
    {
        const bool branch_taken_0x179bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BC0u;
        // 0x179bc4: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179bc0) {
            ctx->pc = 0x179BDCu;
            goto label_179bdc;
        }
    }
    ctx->pc = 0x179BC8u;
label_179bc8:
    // 0x179bc8: 0xc68c0024  lwc1        $f12, 0x24($s4)
    ctx->pc = 0x179bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_179bcc:
    // 0x179bcc: 0xc066ec0  jal         func_19BB00
label_179bd0:
    if (ctx->pc == 0x179BD0u) {
        ctx->pc = 0x179BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BCCu;
        // 0x179bd0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179BD4u;
        goto label_179bd4;
    }
    ctx->pc = 0x179BCCu;
    SET_GPR_U32(ctx, 31, 0x179BD4u);
    ctx->pc = 0x179BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179BCCu;
    // 0x179bd0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x179BD4u;
label_179bd4:
    // 0x179bd4: 0x1000000c  b           . + 4 + (0xC << 2)
label_179bd8:
    if (ctx->pc == 0x179BD8u) {
        ctx->pc = 0x179BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BD4u;
        // 0x179bd8: 0xc6200030  lwc1        $f0, 0x30($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x179BDCu;
        goto label_179bdc;
    }
    ctx->pc = 0x179BD4u;
    {
        const bool branch_taken_0x179bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BD4u;
        // 0x179bd8: 0xc6200030  lwc1        $f0, 0x30($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179bd4) {
            ctx->pc = 0x179C08u;
            goto label_179c08;
        }
    }
    ctx->pc = 0x179BDCu;
label_179bdc:
    // 0x179bdc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_179be0:
    if (ctx->pc == 0x179BE0u) {
        ctx->pc = 0x179BE4u;
        goto label_179be4;
    }
    ctx->pc = 0x179BDCu;
    {
        const bool branch_taken_0x179bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179bdc) {
            ctx->pc = 0x179C04u;
            goto label_179c04;
        }
    }
    ctx->pc = 0x179BE4u;
label_179be4:
    // 0x179be4: 0xc68c0024  lwc1        $f12, 0x24($s4)
    ctx->pc = 0x179be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_179be8:
    // 0x179be8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x179be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_179bec:
    // 0x179bec: 0xc066e96  jal         func_19BA58
label_179bf0:
    if (ctx->pc == 0x179BF0u) {
        ctx->pc = 0x179BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BECu;
        // 0x179bf0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179BF4u;
        goto label_179bf4;
    }
    ctx->pc = 0x179BECu;
    SET_GPR_U32(ctx, 31, 0x179BF4u);
    ctx->pc = 0x179BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179BECu;
    // 0x179bf0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x179BF4u;
label_179bf4:
    // 0x179bf4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x179bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_179bf8:
    // 0x179bf8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x179bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_179bfc:
    // 0x179bfc: 0xc066d86  jal         func_19B618
label_179c00:
    if (ctx->pc == 0x179C00u) {
        ctx->pc = 0x179C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BFCu;
        // 0x179c00: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179C04u;
        goto label_179c04;
    }
    ctx->pc = 0x179BFCu;
    SET_GPR_U32(ctx, 31, 0x179C04u);
    ctx->pc = 0x179C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179BFCu;
    // 0x179c00: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x179C04u;
label_179c04:
    // 0x179c04: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x179c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179c08:
    // 0x179c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179c0c:
    // 0x179c0c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x179c0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_179c10:
    // 0x179c10: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x179c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_179c14:
    // 0x179c14: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x179c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179c18:
    // 0x179c18: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x179c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_179c1c:
    // 0x179c1c: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x179c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179c20:
    // 0x179c20: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x179c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_179c24:
    // 0x179c24: 0x8e260090  lw          $a2, 0x90($s1)
    ctx->pc = 0x179c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_179c28:
    // 0x179c28: 0xc05e990  jal         func_17A640
label_179c2c:
    if (ctx->pc == 0x179C2Cu) {
        ctx->pc = 0x179C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C28u;
        // 0x179c2c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179C30u;
        goto label_179c30;
    }
    ctx->pc = 0x179C28u;
    SET_GPR_U32(ctx, 31, 0x179C30u);
    ctx->pc = 0x179C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179C28u;
    // 0x179c2c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A640u;
    { ctx->pc = 0x17a640; return; }
    ctx->pc = 0x179C30u;
label_179c30:
    // 0x179c30: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x179c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_179c34:
    // 0x179c34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x179c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_179c38:
    // 0x179c38: 0x8f838454  lw          $v1, -0x7BAC($gp)
    ctx->pc = 0x179c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935636)));
label_179c3c:
    // 0x179c3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x179c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_179c40:
    // 0x179c40: 0xc05e8a4  jal         func_17A290
label_179c44:
    if (ctx->pc == 0x179C44u) {
        ctx->pc = 0x179C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C40u;
        // 0x179c44: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179C48u;
        goto label_179c48;
    }
    ctx->pc = 0x179C40u;
    SET_GPR_U32(ctx, 31, 0x179C48u);
    ctx->pc = 0x179C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179C40u;
    // 0x179c44: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A290u;
    goto label_17a290;
    ctx->pc = 0x179C48u;
label_179c48:
    // 0x179c48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x179c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_179c4c:
    // 0x179c4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x179c4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_179c50:
    // 0x179c50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x179c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_179c54:
    // 0x179c54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x179c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_179c58:
    // 0x179c58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x179c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_179c5c:
    // 0x179c5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_179c60:
    // 0x179c60: 0x3e00008  jr          $ra
label_179c64:
    if (ctx->pc == 0x179C64u) {
        ctx->pc = 0x179C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C60u;
        // 0x179c64: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179C68u;
        goto label_179c68;
    }
    ctx->pc = 0x179C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C60u;
        // 0x179c64: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179C68u;
label_179c68:
    // 0x179c68: 0x0  nop
    ctx->pc = 0x179c68u;
    // NOP
label_179c6c:
    // 0x179c6c: 0x0  nop
    ctx->pc = 0x179c6cu;
    // NOP
label_179c70:
    // 0x179c70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x179c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_179c74:
    // 0x179c74: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x179c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_179c78:
    // 0x179c78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x179c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_179c7c:
    // 0x179c7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x179c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_179c80:
    // 0x179c80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x179c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_179c84:
    // 0x179c84: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x179c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_179c88:
    // 0x179c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x179c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_179c8c:
    // 0x179c8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_179c90:
    // 0x179c90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x179c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179c94:
    // 0x179c94: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x179c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_179c98:
    // 0x179c98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x179c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_179c9c:
    // 0x179c9c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x179c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_179ca0:
    // 0x179ca0: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_179ca4:
    if (ctx->pc == 0x179CA4u) {
        ctx->pc = 0x179CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CA0u;
        // 0x179ca4: 0x649021  addu        $s2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179CA8u;
        goto label_179ca8;
    }
    ctx->pc = 0x179CA0u;
    {
        const bool branch_taken_0x179ca0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x179CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CA0u;
        // 0x179ca4: 0x649021  addu        $s2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ca0) {
            ctx->pc = 0x179CF8u;
            goto label_179cf8;
        }
    }
    ctx->pc = 0x179CA8u;
label_179ca8:
    // 0x179ca8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x179ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_179cac:
    // 0x179cac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x179cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_179cb0:
    // 0x179cb0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_179cb4:
    if (ctx->pc == 0x179CB4u) {
        ctx->pc = 0x179CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CB0u;
        // 0x179cb4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179CB8u;
        goto label_179cb8;
    }
    ctx->pc = 0x179CB0u;
    {
        const bool branch_taken_0x179cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x179CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CB0u;
        // 0x179cb4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cb0) {
            ctx->pc = 0x179CC8u;
            goto label_179cc8;
        }
    }
    ctx->pc = 0x179CB8u;
label_179cb8:
    // 0x179cb8: 0xc040058  jal         func_100160
label_179cbc:
    if (ctx->pc == 0x179CBCu) {
        ctx->pc = 0x179CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CB8u;
        // 0x179cbc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179CC0u;
        goto label_179cc0;
    }
    ctx->pc = 0x179CB8u;
    SET_GPR_U32(ctx, 31, 0x179CC0u);
    ctx->pc = 0x179CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179CB8u;
    // 0x179cbc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100160u, 0x179CB8u, 0x179CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179CC0u;
label_179cc0:
    // 0x179cc0: 0x10000006  b           . + 4 + (0x6 << 2)
label_179cc4:
    if (ctx->pc == 0x179CC4u) {
        ctx->pc = 0x179CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CC0u;
        // 0x179cc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179CC8u;
        goto label_179cc8;
    }
    ctx->pc = 0x179CC0u;
    {
        const bool branch_taken_0x179cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CC0u;
        // 0x179cc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cc0) {
            ctx->pc = 0x179CDCu;
            goto label_179cdc;
        }
    }
    ctx->pc = 0x179CC8u;
label_179cc8:
    // 0x179cc8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_179ccc:
    if (ctx->pc == 0x179CCCu) {
        ctx->pc = 0x179CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CC8u;
        // 0x179ccc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179CD0u;
        goto label_179cd0;
    }
    ctx->pc = 0x179CC8u;
    {
        const bool branch_taken_0x179cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x179CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CC8u;
        // 0x179ccc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cc8) {
            ctx->pc = 0x179CD8u;
            goto label_179cd8;
        }
    }
    ctx->pc = 0x179CD0u;
label_179cd0:
    // 0x179cd0: 0xc040058  jal         func_100160
label_179cd4:
    if (ctx->pc == 0x179CD4u) {
        ctx->pc = 0x179CD8u;
        goto label_179cd8;
    }
    ctx->pc = 0x179CD0u;
    SET_GPR_U32(ctx, 31, 0x179CD8u);
    ctx->pc = 0x100160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100160u, 0x179CD0u, 0x179CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179CD8u;
label_179cd8:
    // 0x179cd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x179cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_179cdc:
    // 0x179cdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x179cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_179ce0:
    // 0x179ce0: 0xc05ea18  jal         func_17A860
label_179ce4:
    if (ctx->pc == 0x179CE4u) {
        ctx->pc = 0x179CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CE0u;
        // 0x179ce4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179CE8u;
        goto label_179ce8;
    }
    ctx->pc = 0x179CE0u;
    SET_GPR_U32(ctx, 31, 0x179CE8u);
    ctx->pc = 0x179CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179CE0u;
    // 0x179ce4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A860u;
    { ctx->pc = 0x17a860; return; }
    ctx->pc = 0x179CE8u;
label_179ce8:
    // 0x179ce8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x179ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_179cec:
    // 0x179cec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x179cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_179cf0:
    // 0x179cf0: 0xc05e7cc  jal         func_179F30
label_179cf4:
    if (ctx->pc == 0x179CF4u) {
        ctx->pc = 0x179CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CF0u;
        // 0x179cf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179CF8u;
        goto label_179cf8;
    }
    ctx->pc = 0x179CF0u;
    SET_GPR_U32(ctx, 31, 0x179CF8u);
    ctx->pc = 0x179CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179CF0u;
    // 0x179cf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179F30u;
    goto label_179f30;
    ctx->pc = 0x179CF8u;
label_179cf8:
    // 0x179cf8: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_179cfc:
    if (ctx->pc == 0x179CFCu) {
        ctx->pc = 0x179D00u;
        goto label_179d00;
    }
    ctx->pc = 0x179CF8u;
    {
        const bool branch_taken_0x179cf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x179cf8) {
            ctx->pc = 0x179D50u;
            goto label_179d50;
        }
    }
    ctx->pc = 0x179D00u;
label_179d00:
    // 0x179d00: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x179d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_179d04:
    // 0x179d04: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x179d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_179d08:
    // 0x179d08: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_179d0c:
    if (ctx->pc == 0x179D0Cu) {
        ctx->pc = 0x179D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D08u;
        // 0x179d0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179D10u;
        goto label_179d10;
    }
    ctx->pc = 0x179D08u;
    {
        const bool branch_taken_0x179d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x179D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D08u;
        // 0x179d0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d08) {
            ctx->pc = 0x179D20u;
            goto label_179d20;
        }
    }
    ctx->pc = 0x179D10u;
label_179d10:
    // 0x179d10: 0xc040058  jal         func_100160
label_179d14:
    if (ctx->pc == 0x179D14u) {
        ctx->pc = 0x179D18u;
        goto label_179d18;
    }
    ctx->pc = 0x179D10u;
    SET_GPR_U32(ctx, 31, 0x179D18u);
    ctx->pc = 0x100160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100160u, 0x179D10u, 0x179D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179D18u;
label_179d18:
    // 0x179d18: 0x10000006  b           . + 4 + (0x6 << 2)
label_179d1c:
    if (ctx->pc == 0x179D1Cu) {
        ctx->pc = 0x179D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D18u;
        // 0x179d1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179D20u;
        goto label_179d20;
    }
    ctx->pc = 0x179D18u;
    {
        const bool branch_taken_0x179d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D18u;
        // 0x179d1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d18) {
            ctx->pc = 0x179D34u;
            goto label_179d34;
        }
    }
    ctx->pc = 0x179D20u;
label_179d20:
    // 0x179d20: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_179d24:
    if (ctx->pc == 0x179D24u) {
        ctx->pc = 0x179D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D20u;
        // 0x179d24: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179D28u;
        goto label_179d28;
    }
    ctx->pc = 0x179D20u;
    {
        const bool branch_taken_0x179d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x179D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D20u;
        // 0x179d24: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d20) {
            ctx->pc = 0x179D30u;
            goto label_179d30;
        }
    }
    ctx->pc = 0x179D28u;
label_179d28:
    // 0x179d28: 0xc040058  jal         func_100160
label_179d2c:
    if (ctx->pc == 0x179D2Cu) {
        ctx->pc = 0x179D30u;
        goto label_179d30;
    }
    ctx->pc = 0x179D28u;
    SET_GPR_U32(ctx, 31, 0x179D30u);
    ctx->pc = 0x100160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100160u, 0x179D28u, 0x179D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179D30u;
label_179d30:
    // 0x179d30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x179d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_179d34:
    // 0x179d34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179d38:
    // 0x179d38: 0xc05ea18  jal         func_17A860
label_179d3c:
    if (ctx->pc == 0x179D3Cu) {
        ctx->pc = 0x179D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D38u;
        // 0x179d3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179D40u;
        goto label_179d40;
    }
    ctx->pc = 0x179D38u;
    SET_GPR_U32(ctx, 31, 0x179D40u);
    ctx->pc = 0x179D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179D38u;
    // 0x179d3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A860u;
    { ctx->pc = 0x17a860; return; }
    ctx->pc = 0x179D40u;
label_179d40:
    // 0x179d40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x179d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_179d44:
    // 0x179d44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179d48:
    // 0x179d48: 0xc05e7cc  jal         func_179F30
label_179d4c:
    if (ctx->pc == 0x179D4Cu) {
        ctx->pc = 0x179D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D48u;
        // 0x179d4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179D50u;
        goto label_179d50;
    }
    ctx->pc = 0x179D48u;
    SET_GPR_U32(ctx, 31, 0x179D50u);
    ctx->pc = 0x179D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179D48u;
    // 0x179d4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179F30u;
    goto label_179f30;
    ctx->pc = 0x179D50u;
label_179d50:
    // 0x179d50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x179d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_179d54:
    // 0x179d54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x179d54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_179d58:
    // 0x179d58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x179d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_179d5c:
    // 0x179d5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_179d60:
    // 0x179d60: 0x3e00008  jr          $ra
label_179d64:
    if (ctx->pc == 0x179D64u) {
        ctx->pc = 0x179D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D60u;
        // 0x179d64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179D68u;
        goto label_179d68;
    }
    ctx->pc = 0x179D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D60u;
        // 0x179d64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179D68u;
label_179d68:
    // 0x179d68: 0x0  nop
    ctx->pc = 0x179d68u;
    // NOP
label_179d6c:
    // 0x179d6c: 0x0  nop
    ctx->pc = 0x179d6cu;
    // NOP
label_179d70:
    // 0x179d70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x179d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_179d74:
    // 0x179d74: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x179d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_179d78:
    // 0x179d78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x179d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_179d7c:
    // 0x179d7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x179d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_179d80:
    // 0x179d80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x179d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_179d84:
    // 0x179d84: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x179d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_179d88:
    // 0x179d88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x179d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_179d8c:
    // 0x179d8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x179d8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179d90:
    // 0x179d90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x179d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_179d94:
    // 0x179d94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x179d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_179d98:
    // 0x179d98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_179d9c:
    // 0x179d9c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x179d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_179da0:
    // 0x179da0: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x179da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_179da4:
    // 0x179da4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x179da4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_179da8:
    // 0x179da8: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_179dac:
    if (ctx->pc == 0x179DACu) {
        ctx->pc = 0x179DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DA8u;
        // 0x179dac: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179DB0u;
        goto label_179db0;
    }
    ctx->pc = 0x179DA8u;
    {
        const bool branch_taken_0x179da8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x179DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DA8u;
        // 0x179dac: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179da8) {
            ctx->pc = 0x179DD8u;
            goto label_179dd8;
        }
    }
    ctx->pc = 0x179DB0u;
label_179db0:
    // 0x179db0: 0xc040058  jal         func_100160
label_179db4:
    if (ctx->pc == 0x179DB4u) {
        ctx->pc = 0x179DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DB0u;
        // 0x179db4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179DB8u;
        goto label_179db8;
    }
    ctx->pc = 0x179DB0u;
    SET_GPR_U32(ctx, 31, 0x179DB8u);
    ctx->pc = 0x179DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179DB0u;
    // 0x179db4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100160u, 0x179DB0u, 0x179DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179DB8u;
label_179db8:
    // 0x179db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179dbc:
    // 0x179dbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x179dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_179dc0:
    // 0x179dc0: 0xc05ea18  jal         func_17A860
label_179dc4:
    if (ctx->pc == 0x179DC4u) {
        ctx->pc = 0x179DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DC0u;
        // 0x179dc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179DC8u;
        goto label_179dc8;
    }
    ctx->pc = 0x179DC0u;
    SET_GPR_U32(ctx, 31, 0x179DC8u);
    ctx->pc = 0x179DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179DC0u;
    // 0x179dc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A860u;
    { ctx->pc = 0x17a860; return; }
    ctx->pc = 0x179DC8u;
label_179dc8:
    // 0x179dc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x179dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_179dcc:
    // 0x179dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179dd0:
    // 0x179dd0: 0xc05e7cc  jal         func_179F30
label_179dd4:
    if (ctx->pc == 0x179DD4u) {
        ctx->pc = 0x179DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DD0u;
        // 0x179dd4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179DD8u;
        goto label_179dd8;
    }
    ctx->pc = 0x179DD0u;
    SET_GPR_U32(ctx, 31, 0x179DD8u);
    ctx->pc = 0x179DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179DD0u;
    // 0x179dd4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179F30u;
    goto label_179f30;
    ctx->pc = 0x179DD8u;
label_179dd8:
    // 0x179dd8: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_179ddc:
    if (ctx->pc == 0x179DDCu) {
        ctx->pc = 0x179DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DD8u;
        // 0x179ddc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179DE0u;
        goto label_179de0;
    }
    ctx->pc = 0x179DD8u;
    {
        const bool branch_taken_0x179dd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x179DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DD8u;
        // 0x179ddc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179dd8) {
            ctx->pc = 0x179E08u;
            goto label_179e08;
        }
    }
    ctx->pc = 0x179DE0u;
label_179de0:
    // 0x179de0: 0xc040058  jal         func_100160
label_179de4:
    if (ctx->pc == 0x179DE4u) {
        ctx->pc = 0x179DE8u;
        goto label_179de8;
    }
    ctx->pc = 0x179DE0u;
    SET_GPR_U32(ctx, 31, 0x179DE8u);
    ctx->pc = 0x100160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100160u, 0x179DE0u, 0x179DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179DE8u;
label_179de8:
    // 0x179de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179dec:
    // 0x179dec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179df0:
    // 0x179df0: 0xc05ea18  jal         func_17A860
label_179df4:
    if (ctx->pc == 0x179DF4u) {
        ctx->pc = 0x179DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DF0u;
        // 0x179df4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179DF8u;
        goto label_179df8;
    }
    ctx->pc = 0x179DF0u;
    SET_GPR_U32(ctx, 31, 0x179DF8u);
    ctx->pc = 0x179DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179DF0u;
    // 0x179df4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A860u;
    { ctx->pc = 0x17a860; return; }
    ctx->pc = 0x179DF8u;
label_179df8:
    // 0x179df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179dfc:
    // 0x179dfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x179dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_179e00:
    // 0x179e00: 0xc05e7cc  jal         func_179F30
label_179e04:
    if (ctx->pc == 0x179E04u) {
        ctx->pc = 0x179E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E00u;
        // 0x179e04: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179E08u;
        goto label_179e08;
    }
    ctx->pc = 0x179E00u;
    SET_GPR_U32(ctx, 31, 0x179E08u);
    ctx->pc = 0x179E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E00u;
    // 0x179e04: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179F30u;
    goto label_179f30;
    ctx->pc = 0x179E08u;
label_179e08:
    // 0x179e08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x179e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_179e0c:
    // 0x179e0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x179e0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_179e10:
    // 0x179e10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x179e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_179e14:
    // 0x179e14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x179e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_179e18:
    // 0x179e18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_179e1c:
    // 0x179e1c: 0x3e00008  jr          $ra
label_179e20:
    if (ctx->pc == 0x179E20u) {
        ctx->pc = 0x179E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E1Cu;
        // 0x179e20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179E24u;
        goto label_179e24;
    }
    ctx->pc = 0x179E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E1Cu;
        // 0x179e20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179E24u;
label_179e24:
    // 0x179e24: 0x0  nop
    ctx->pc = 0x179e24u;
    // NOP
label_179e28:
    // 0x179e28: 0x0  nop
    ctx->pc = 0x179e28u;
    // NOP
label_179e2c:
    // 0x179e2c: 0x0  nop
    ctx->pc = 0x179e2cu;
    // NOP
label_179e30:
    // 0x179e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x179e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_179e34:
    // 0x179e34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x179e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_179e38:
    // 0x179e38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x179e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_179e3c:
    // 0x179e3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_179e40:
    // 0x179e40: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x179e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_179e44:
    // 0x179e44: 0x8f838450  lw          $v1, -0x7BB0($gp)
    ctx->pc = 0x179e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
label_179e48:
    // 0x179e48: 0x8f828444  lw          $v0, -0x7BBC($gp)
    ctx->pc = 0x179e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935620)));
label_179e4c:
    // 0x179e4c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x179e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_179e50:
    // 0x179e50: 0x24710008  addiu       $s1, $v1, 0x8
    ctx->pc = 0x179e50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_179e54:
    // 0x179e54: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x179e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_179e58:
    // 0x179e58: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x179e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_179e5c:
    // 0x179e5c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x179e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_179e60:
    // 0x179e60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x179e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_179e64:
    // 0x179e64: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x179e64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_179e68:
    // 0x179e68: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x179e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_179e6c:
    // 0x179e6c: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x179e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_179e70:
    // 0x179e70: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x179e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_179e74:
    // 0x179e74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x179e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_179e78:
    // 0x179e78: 0xc066d0a  jal         func_19B428
label_179e7c:
    if (ctx->pc == 0x179E7Cu) {
        ctx->pc = 0x179E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E78u;
        // 0x179e7c: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179E80u;
        goto label_179e80;
    }
    ctx->pc = 0x179E78u;
    SET_GPR_U32(ctx, 31, 0x179E80u);
    ctx->pc = 0x179E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E78u;
    // 0x179e7c: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    { ctx->pc = 0x19b428; return; }
    ctx->pc = 0x179E80u;
label_179e80:
    // 0x179e80: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x179e80u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
label_179e84:
    // 0x179e84: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x179e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_179e88:
    // 0x179e88: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x179e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_179e8c:
    // 0x179e8c: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x179e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
label_179e90:
    // 0x179e90: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x179e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_179e94:
    // 0x179e94: 0x3c036c07  lui         $v1, 0x6C07
    ctx->pc = 0x179e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27655 << 16));
label_179e98:
    // 0x179e98: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x179e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_179e9c:
    // 0x179e9c: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x179e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
label_179ea0:
    // 0x179ea0: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x179ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
label_179ea4:
    // 0x179ea4: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x179ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179ea8:
    // 0x179ea8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x179ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_179eac:
    // 0x179eac: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x179eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179eb0:
    // 0x179eb0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x179eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_179eb4:
    // 0x179eb4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x179eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_179eb8:
    // 0x179eb8: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x179eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179ebc:
    // 0x179ebc: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x179ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_179ec0:
    // 0x179ec0: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x179ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179ec4:
    // 0x179ec4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x179ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_179ec8:
    // 0x179ec8: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x179ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179ecc:
    // 0x179ecc: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x179eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_179ed0:
    // 0x179ed0: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x179ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_179ed4:
    // 0x179ed4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x179ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179ed8:
    // 0x179ed8: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x179ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_179edc:
    // 0x179edc: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x179edcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_179ee0:
    // 0x179ee0: 0x7c440030  sq          $a0, 0x30($v0)
    ctx->pc = 0x179ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 4));
label_179ee4:
    // 0x179ee4: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x179ee4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_179ee8:
    // 0x179ee8: 0x7c440040  sq          $a0, 0x40($v0)
    ctx->pc = 0x179ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 4));
label_179eec:
    // 0x179eec: 0x7a040040  lq          $a0, 0x40($s0)
    ctx->pc = 0x179eecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 64)));
label_179ef0:
    // 0x179ef0: 0x7c440050  sq          $a0, 0x50($v0)
    ctx->pc = 0x179ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), GPR_VEC(ctx, 4));
label_179ef4:
    // 0x179ef4: 0x7a040010  lq          $a0, 0x10($s0)
    ctx->pc = 0x179ef4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_179ef8:
    // 0x179ef8: 0x7c440060  sq          $a0, 0x60($v0)
    ctx->pc = 0x179ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), GPR_VEC(ctx, 4));
label_179efc:
    // 0x179efc: 0x7a040030  lq          $a0, 0x30($s0)
    ctx->pc = 0x179efcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_179f00:
    // 0x179f00: 0x7c440070  sq          $a0, 0x70($v0)
    ctx->pc = 0x179f00u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 4));
label_179f04:
    // 0x179f04: 0xfc400080  sd          $zero, 0x80($v0)
    ctx->pc = 0x179f04u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 128), GPR_U64(ctx, 0));
label_179f08:
    // 0x179f08: 0xfc400088  sd          $zero, 0x88($v0)
    ctx->pc = 0x179f08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 136), GPR_U64(ctx, 0));
label_179f0c:
    // 0x179f0c: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x179f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
label_179f10:
    // 0x179f10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x179f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_179f14:
    // 0x179f14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x179f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_179f18:
    // 0x179f18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179f18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_179f1c:
    // 0x179f1c: 0x3e00008  jr          $ra
label_179f20:
    if (ctx->pc == 0x179F20u) {
        ctx->pc = 0x179F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F1Cu;
        // 0x179f20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179F24u;
        goto label_179f24;
    }
    ctx->pc = 0x179F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F1Cu;
        // 0x179f20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179F24u;
label_179f24:
    // 0x179f24: 0x0  nop
    ctx->pc = 0x179f24u;
    // NOP
label_179f28:
    // 0x179f28: 0x0  nop
    ctx->pc = 0x179f28u;
    // NOP
label_179f2c:
    // 0x179f2c: 0x0  nop
    ctx->pc = 0x179f2cu;
    // NOP
label_179f30:
    // 0x179f30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x179f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_179f34:
    // 0x179f34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x179f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_179f38:
    // 0x179f38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x179f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_179f3c:
    // 0x179f3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x179f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_179f40:
    // 0x179f40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x179f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_179f44:
    // 0x179f44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x179f44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179f48:
    // 0x179f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_179f4c:
    // 0x179f4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x179f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_179f50:
    // 0x179f50: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
label_179f54:
    if (ctx->pc == 0x179F54u) {
        ctx->pc = 0x179F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F50u;
        // 0x179f54: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179F58u;
        goto label_179f58;
    }
    ctx->pc = 0x179F50u;
    {
        const bool branch_taken_0x179f50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F50u;
        // 0x179f54: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f50) {
            ctx->pc = 0x17A00Cu;
            goto label_17a00c;
        }
    }
    ctx->pc = 0x179F58u;
label_179f58:
    // 0x179f58: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x179f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_179f5c:
    // 0x179f5c: 0x2c810002  sltiu       $at, $a0, 0x2
    ctx->pc = 0x179f5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_179f60:
    // 0x179f60: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_179f64:
    if (ctx->pc == 0x179F64u) {
        ctx->pc = 0x179F68u;
        goto label_179f68;
    }
    ctx->pc = 0x179F60u;
    {
        const bool branch_taken_0x179f60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x179f60) {
            ctx->pc = 0x179F80u;
            goto label_179f80;
        }
    }
    ctx->pc = 0x179F68u;
label_179f68:
    // 0x179f68: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x179f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_179f6c:
    // 0x179f6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x179f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_179f70:
    // 0x179f70: 0xc05e80c  jal         func_17A030
label_179f74:
    if (ctx->pc == 0x179F74u) {
        ctx->pc = 0x179F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F70u;
        // 0x179f74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179F78u;
        goto label_179f78;
    }
    ctx->pc = 0x179F70u;
    SET_GPR_U32(ctx, 31, 0x179F78u);
    ctx->pc = 0x179F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179F70u;
    // 0x179f74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A030u;
    goto label_17a030;
    ctx->pc = 0x179F78u;
label_179f78:
    // 0x179f78: 0x10000020  b           . + 4 + (0x20 << 2)
label_179f7c:
    if (ctx->pc == 0x179F7Cu) {
        ctx->pc = 0x179F80u;
        goto label_179f80;
    }
    ctx->pc = 0x179F78u;
    {
        const bool branch_taken_0x179f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179f78) {
            ctx->pc = 0x179FFCu;
            goto label_179ffc;
        }
    }
    ctx->pc = 0x179F80u;
label_179f80:
    // 0x179f80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x179f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_179f84:
    // 0x179f84: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_179f88:
    if (ctx->pc == 0x179F88u) {
        ctx->pc = 0x179F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F84u;
        // 0x179f88: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179F8Cu;
        goto label_179f8c;
    }
    ctx->pc = 0x179F84u;
    {
        const bool branch_taken_0x179f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x179F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F84u;
        // 0x179f88: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f84) {
            ctx->pc = 0x179F94u;
            goto label_179f94;
        }
    }
    ctx->pc = 0x179F8Cu;
label_179f8c:
    // 0x179f8c: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
label_179f90:
    if (ctx->pc == 0x179F90u) {
        ctx->pc = 0x179F94u;
        goto label_179f94;
    }
    ctx->pc = 0x179F8Cu;
    {
        const bool branch_taken_0x179f8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x179f8c) {
            ctx->pc = 0x179FE0u;
            goto label_179fe0;
        }
    }
    ctx->pc = 0x179F94u;
label_179f94:
    // 0x179f94: 0x0  nop
    ctx->pc = 0x179f94u;
    // NOP
label_179f98:
    // 0x179f98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x179f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_179f9c:
    // 0x179f9c: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_179fa0:
    if (ctx->pc == 0x179FA0u) {
        ctx->pc = 0x179FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F9Cu;
        // 0x179fa0: 0x8e330000  lw          $s3, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179FA4u;
        goto label_179fa4;
    }
    ctx->pc = 0x179F9Cu;
    {
        const bool branch_taken_0x179f9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x179FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F9Cu;
        // 0x179fa0: 0x8e330000  lw          $s3, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f9c) {
            ctx->pc = 0x179FC8u;
            goto label_179fc8;
        }
    }
    ctx->pc = 0x179FA4u;
label_179fa4:
    // 0x179fa4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x179fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_179fa8:
    // 0x179fa8: 0xc05e78c  jal         func_179E30
label_179fac:
    if (ctx->pc == 0x179FACu) {
        ctx->pc = 0x179FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FA8u;
        // 0x179fac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179FB0u;
        goto label_179fb0;
    }
    ctx->pc = 0x179FA8u;
    SET_GPR_U32(ctx, 31, 0x179FB0u);
    ctx->pc = 0x179FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179FA8u;
    // 0x179fac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179E30u;
    goto label_179e30;
    ctx->pc = 0x179FB0u;
label_179fb0:
    // 0x179fb0: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x179fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_179fb4:
    // 0x179fb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x179fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_179fb8:
    // 0x179fb8: 0xc05e8a4  jal         func_17A290
label_179fbc:
    if (ctx->pc == 0x179FBCu) {
        ctx->pc = 0x179FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FB8u;
        // 0x179fbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179FC0u;
        goto label_179fc0;
    }
    ctx->pc = 0x179FB8u;
    SET_GPR_U32(ctx, 31, 0x179FC0u);
    ctx->pc = 0x179FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179FB8u;
    // 0x179fbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A290u;
    goto label_17a290;
    ctx->pc = 0x179FC0u;
label_179fc0:
    // 0x179fc0: 0x1000000e  b           . + 4 + (0xE << 2)
label_179fc4:
    if (ctx->pc == 0x179FC4u) {
        ctx->pc = 0x179FC8u;
        goto label_179fc8;
    }
    ctx->pc = 0x179FC0u;
    {
        const bool branch_taken_0x179fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179fc0) {
            ctx->pc = 0x179FFCu;
            goto label_179ffc;
        }
    }
    ctx->pc = 0x179FC8u;
label_179fc8:
    // 0x179fc8: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x179fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_179fcc:
    // 0x179fcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x179fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_179fd0:
    // 0x179fd0: 0xc05e868  jal         func_17A1A0
label_179fd4:
    if (ctx->pc == 0x179FD4u) {
        ctx->pc = 0x179FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FD0u;
        // 0x179fd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179FD8u;
        goto label_179fd8;
    }
    ctx->pc = 0x179FD0u;
    SET_GPR_U32(ctx, 31, 0x179FD8u);
    ctx->pc = 0x179FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179FD0u;
    // 0x179fd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A1A0u;
    goto label_17a1a0;
    ctx->pc = 0x179FD8u;
label_179fd8:
    // 0x179fd8: 0x10000008  b           . + 4 + (0x8 << 2)
label_179fdc:
    if (ctx->pc == 0x179FDCu) {
        ctx->pc = 0x179FE0u;
        goto label_179fe0;
    }
    ctx->pc = 0x179FD8u;
    {
        const bool branch_taken_0x179fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179fd8) {
            ctx->pc = 0x179FFCu;
            goto label_179ffc;
        }
    }
    ctx->pc = 0x179FE0u;
label_179fe0:
    // 0x179fe0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x179fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_179fe4:
    // 0x179fe4: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_179fe8:
    if (ctx->pc == 0x179FE8u) {
        ctx->pc = 0x179FECu;
        goto label_179fec;
    }
    ctx->pc = 0x179FE4u;
    {
        const bool branch_taken_0x179fe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x179fe4) {
            ctx->pc = 0x179FFCu;
            goto label_179ffc;
        }
    }
    ctx->pc = 0x179FECu;
label_179fec:
    // 0x179fec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x179fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_179ff0:
    // 0x179ff0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x179ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_179ff4:
    // 0x179ff4: 0xc05e6d4  jal         func_179B50
label_179ff8:
    if (ctx->pc == 0x179FF8u) {
        ctx->pc = 0x179FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FF4u;
        // 0x179ff8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179FFCu;
        goto label_179ffc;
    }
    ctx->pc = 0x179FF4u;
    SET_GPR_U32(ctx, 31, 0x179FFCu);
    ctx->pc = 0x179FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179FF4u;
    // 0x179ff8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B50u;
    goto label_179b50;
    ctx->pc = 0x179FFCu;
label_179ffc:
    // 0x179ffc: 0x0  nop
    ctx->pc = 0x179ffcu;
    // NOP
label_17a000:
    // 0x17a000: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x17a000u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_17a004:
    // 0x17a004: 0x1620ffd4  bnez        $s1, . + 4 + (-0x2C << 2)
label_17a008:
    if (ctx->pc == 0x17A008u) {
        ctx->pc = 0x17A00Cu;
        goto label_17a00c;
    }
    ctx->pc = 0x17A004u;
    {
        const bool branch_taken_0x17a004 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a004) {
            ctx->pc = 0x179F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179f58;
        }
    }
    ctx->pc = 0x17A00Cu;
label_17a00c:
    // 0x17a00c: 0x0  nop
    ctx->pc = 0x17a00cu;
    // NOP
label_17a010:
    // 0x17a010: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17a010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17a014:
    // 0x17a014: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17a014u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17a018:
    // 0x17a018: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17a01c:
    // 0x17a01c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a01cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17a020:
    // 0x17a020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17a024:
    // 0x17a024: 0x3e00008  jr          $ra
label_17a028:
    if (ctx->pc == 0x17A028u) {
        ctx->pc = 0x17A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A024u;
        // 0x17a028: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A02Cu;
        goto label_17a02c;
    }
    ctx->pc = 0x17A024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A024u;
        // 0x17a028: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A02Cu;
label_17a02c:
    // 0x17a02c: 0x0  nop
    ctx->pc = 0x17a02cu;
    // NOP
label_17a030:
    // 0x17a030: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17a030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_17a034:
    // 0x17a034: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17a034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_17a038:
    // 0x17a038: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17a038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17a03c:
    // 0x17a03c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17a03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17a040:
    // 0x17a040: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17a040u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17a044:
    // 0x17a044: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17a048:
    // 0x17a048: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17a048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17a04c:
    // 0x17a04c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17a050:
    // 0x17a050: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17a054:
    // 0x17a054: 0x90a2009c  lbu         $v0, 0x9C($a1)
    ctx->pc = 0x17a054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 156)));
label_17a058:
    // 0x17a058: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x17a058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_17a05c:
    // 0x17a05c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17a060:
    if (ctx->pc == 0x17A060u) {
        ctx->pc = 0x17A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A05Cu;
        // 0x17a060: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A064u;
        goto label_17a064;
    }
    ctx->pc = 0x17A05Cu;
    {
        const bool branch_taken_0x17a05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A05Cu;
        // 0x17a060: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a05c) {
            ctx->pc = 0x17A06Cu;
            goto label_17a06c;
        }
    }
    ctx->pc = 0x17A064u;
label_17a064:
    // 0x17a064: 0xc088f80  jal         func_223E00
label_17a068:
    if (ctx->pc == 0x17A068u) {
        ctx->pc = 0x17A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A064u;
        // 0x17a068: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A06Cu;
        goto label_17a06c;
    }
    ctx->pc = 0x17A064u;
    SET_GPR_U32(ctx, 31, 0x17A06Cu);
    ctx->pc = 0x17A068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A064u;
    // 0x17a068: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223E00u;
    { ctx->pc = 0x223e00; return; }
    ctx->pc = 0x17A06Cu;
label_17a06c:
    // 0x17a06c: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x17a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17a070:
    // 0x17a070: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x17a070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
label_17a074:
    // 0x17a074: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17a074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_17a078:
    // 0x17a078: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_17a07c:
    if (ctx->pc == 0x17A07Cu) {
        ctx->pc = 0x17A080u;
        goto label_17a080;
    }
    ctx->pc = 0x17A078u;
    {
        const bool branch_taken_0x17a078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a078) {
            ctx->pc = 0x17A0ACu;
            goto label_17a0ac;
        }
    }
    ctx->pc = 0x17A080u;
label_17a080:
    // 0x17a080: 0x8f828414  lw          $v0, -0x7BEC($gp)
    ctx->pc = 0x17a080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935572)));
label_17a084:
    // 0x17a084: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x17a084u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_17a088:
    // 0x17a088: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_17a08c:
    if (ctx->pc == 0x17A08Cu) {
        ctx->pc = 0x17A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A088u;
        // 0x17a08c: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A090u;
        goto label_17a090;
    }
    ctx->pc = 0x17A088u;
    {
        const bool branch_taken_0x17a088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A088u;
        // 0x17a08c: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a088) {
            ctx->pc = 0x17A0ACu;
            goto label_17a0ac;
        }
    }
    ctx->pc = 0x17A090u;
label_17a090:
    // 0x17a090: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17a090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_17a094:
    // 0x17a094: 0x24425230  addiu       $v0, $v0, 0x5230
    ctx->pc = 0x17a094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21040));
label_17a098:
    // 0x17a098: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a09c:
    // 0x17a09c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x17a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_17a0a0:
    // 0x17a0a0: 0x8f828414  lw          $v0, -0x7BEC($gp)
    ctx->pc = 0x17a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935572)));
label_17a0a4:
    // 0x17a0a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17a0a8:
    // 0x17a0a8: 0xaf828414  sw          $v0, -0x7BEC($gp)
    ctx->pc = 0x17a0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935572), GPR_U32(ctx, 2));
label_17a0ac:
    // 0x17a0ac: 0x9663008c  lhu         $v1, 0x8C($s3)
    ctx->pc = 0x17a0acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 140)));
label_17a0b0:
    // 0x17a0b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a0b4:
    // 0x17a0b4: 0x8f828440  lw          $v0, -0x7BC0($gp)
    ctx->pc = 0x17a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935616)));
label_17a0b8:
    // 0x17a0b8: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x17a0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_17a0bc:
    // 0x17a0bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_17a0c0:
    // 0x17a0c0: 0xc066d0a  jal         func_19B428
label_17a0c4:
    if (ctx->pc == 0x17A0C4u) {
        ctx->pc = 0x17A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0C0u;
        // 0x17a0c4: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A0C8u;
        goto label_17a0c8;
    }
    ctx->pc = 0x17A0C0u;
    SET_GPR_U32(ctx, 31, 0x17A0C8u);
    ctx->pc = 0x17A0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A0C0u;
    // 0x17a0c4: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    { ctx->pc = 0x19b428; return; }
    ctx->pc = 0x17A0C8u;
label_17a0c8:
    // 0x17a0c8: 0x8e660090  lw          $a2, 0x90($s3)
    ctx->pc = 0x17a0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17a0cc:
    // 0x17a0cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17a0ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a0d0:
    // 0x17a0d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17a0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17a0d4:
    // 0x17a0d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a0d8:
    // 0x17a0d8: 0xc05e990  jal         func_17A640
label_17a0dc:
    if (ctx->pc == 0x17A0DCu) {
        ctx->pc = 0x17A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0D8u;
        // 0x17a0dc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A0E0u;
        goto label_17a0e0;
    }
    ctx->pc = 0x17A0D8u;
    SET_GPR_U32(ctx, 31, 0x17A0E0u);
    ctx->pc = 0x17A0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A0D8u;
    // 0x17a0dc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A640u;
    { ctx->pc = 0x17a640; return; }
    ctx->pc = 0x17A0E0u;
label_17a0e0:
    // 0x17a0e0: 0x8e620090  lw          $v0, 0x90($s3)
    ctx->pc = 0x17a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17a0e4:
    // 0x17a0e4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x17a0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_17a0e8:
    // 0x17a0e8: 0x2431804  sllv        $v1, $v1, $s2
    ctx->pc = 0x17a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
label_17a0ec:
    // 0x17a0ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17a0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_17a0f0:
    // 0x17a0f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_17a0f4:
    if (ctx->pc == 0x17A0F4u) {
        ctx->pc = 0x17A0F8u;
        goto label_17a0f8;
    }
    ctx->pc = 0x17A0F0u;
    {
        const bool branch_taken_0x17a0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a0f0) {
            ctx->pc = 0x17A110u;
            goto label_17a110;
        }
    }
    ctx->pc = 0x17A0F8u;
label_17a0f8:
    // 0x17a0f8: 0xc6600098  lwc1        $f0, 0x98($s3)
    ctx->pc = 0x17a0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a0fc:
    // 0x17a0fc: 0x601827  not         $v1, $v1
    ctx->pc = 0x17a0fcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_17a100:
    // 0x17a100: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x17a100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
label_17a104:
    // 0x17a104: 0x8e620090  lw          $v0, 0x90($s3)
    ctx->pc = 0x17a104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17a108:
    // 0x17a108: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17a108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_17a10c:
    // 0x17a10c: 0xae620090  sw          $v0, 0x90($s3)
    ctx->pc = 0x17a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
label_17a110:
    // 0x17a110: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17a110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17a114:
    // 0x17a114: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x17a114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_17a118:
    // 0x17a118: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_17a11c:
    if (ctx->pc == 0x17A11Cu) {
        ctx->pc = 0x17A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A118u;
        // 0x17a11c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A120u;
        goto label_17a120;
    }
    ctx->pc = 0x17A118u;
    {
        const bool branch_taken_0x17a118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A118u;
        // 0x17a11c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a118) {
            ctx->pc = 0x17A150u;
            goto label_17a150;
        }
    }
    ctx->pc = 0x17A120u;
label_17a120:
    // 0x17a120: 0xc06465c  jal         func_191970
label_17a124:
    if (ctx->pc == 0x17A124u) {
        ctx->pc = 0x17A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A120u;
        // 0x17a124: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A128u;
        goto label_17a128;
    }
    ctx->pc = 0x17A120u;
    SET_GPR_U32(ctx, 31, 0x17A128u);
    ctx->pc = 0x17A124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A120u;
    // 0x17a124: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191970u;
    { ctx->pc = 0x191970; return; }
    ctx->pc = 0x17A128u;
label_17a128:
    // 0x17a128: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x17a128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_17a12c:
    // 0x17a12c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x17a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_17a130:
    // 0x17a130: 0xc066ec0  jal         func_19BB00
label_17a134:
    if (ctx->pc == 0x17A134u) {
        ctx->pc = 0x17A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A130u;
        // 0x17a134: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A138u;
        goto label_17a138;
    }
    ctx->pc = 0x17A130u;
    SET_GPR_U32(ctx, 31, 0x17A138u);
    ctx->pc = 0x17A134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A130u;
    // 0x17a134: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x17A138u;
label_17a138:
    // 0x17a138: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x17a138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a13c:
    // 0x17a13c: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x17a13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
label_17a140:
    // 0x17a140: 0xc6600034  lwc1        $f0, 0x34($s3)
    ctx->pc = 0x17a140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a144:
    // 0x17a144: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x17a144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_17a148:
    // 0x17a148: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x17a148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a14c:
    // 0x17a14c: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x17a14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_17a150:
    // 0x17a150: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17a150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17a154:
    // 0x17a154: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17a154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a158:
    // 0x17a158: 0x8f838440  lw          $v1, -0x7BC0($gp)
    ctx->pc = 0x17a158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935616)));
label_17a15c:
    // 0x17a15c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17a15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a160:
    // 0x17a160: 0xc05e8a4  jal         func_17A290
label_17a164:
    if (ctx->pc == 0x17A164u) {
        ctx->pc = 0x17A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A160u;
        // 0x17a164: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A168u;
        goto label_17a168;
    }
    ctx->pc = 0x17A160u;
    SET_GPR_U32(ctx, 31, 0x17A168u);
    ctx->pc = 0x17A164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A160u;
    // 0x17a164: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A290u;
    goto label_17a290;
    ctx->pc = 0x17A168u;
label_17a168:
    // 0x17a168: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x17a168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17a16c:
    // 0x17a16c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x17a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_17a170:
    // 0x17a170: 0x34630fff  ori         $v1, $v1, 0xFFF
    ctx->pc = 0x17a170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4095);
label_17a174:
    // 0x17a174: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x17a174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_17a178:
    // 0x17a178: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x17a178u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_17a17c:
    // 0x17a17c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17a17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17a180:
    // 0x17a180: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17a180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17a184:
    // 0x17a184: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17a184u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17a188:
    // 0x17a188: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17a18c:
    // 0x17a18c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a18cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17a190:
    // 0x17a190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17a194:
    // 0x17a194: 0x3e00008  jr          $ra
label_17a198:
    if (ctx->pc == 0x17A198u) {
        ctx->pc = 0x17A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A194u;
        // 0x17a198: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A19Cu;
        goto label_17a19c;
    }
    ctx->pc = 0x17A194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A194u;
        // 0x17a198: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A19Cu;
label_17a19c:
    // 0x17a19c: 0x0  nop
    ctx->pc = 0x17a19cu;
    // NOP
label_17a1a0:
    // 0x17a1a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17a1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_17a1a4:
    // 0x17a1a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17a1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_17a1a8:
    // 0x17a1a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17a1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17a1ac:
    // 0x17a1ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17a1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17a1b0:
    // 0x17a1b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17a1b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17a1b4:
    // 0x17a1b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17a1b8:
    // 0x17a1b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17a1b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17a1bc:
    // 0x17a1bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17a1c0:
    // 0x17a1c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17a1c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17a1c4:
    // 0x17a1c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17a1c8:
    // 0x17a1c8: 0x26900010  addiu       $s0, $s4, 0x10
    ctx->pc = 0x17a1c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_17a1cc:
    // 0x17a1cc: 0x1000001b  b           . + 4 + (0x1B << 2)
label_17a1d0:
    if (ctx->pc == 0x17A1D0u) {
        ctx->pc = 0x17A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1CCu;
        // 0x17a1d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A1D4u;
        goto label_17a1d4;
    }
    ctx->pc = 0x17A1CCu;
    {
        const bool branch_taken_0x17a1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1CCu;
        // 0x17a1d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1cc) {
            ctx->pc = 0x17A23Cu;
            goto label_17a23c;
        }
    }
    ctx->pc = 0x17A1D4u;
label_17a1d4:
    // 0x17a1d4: 0x0  nop
    ctx->pc = 0x17a1d4u;
    // NOP
label_17a1d8:
    // 0x17a1d8: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_17a1dc:
    if (ctx->pc == 0x17A1DCu) {
        ctx->pc = 0x17A1E0u;
        goto label_17a1e0;
    }
    ctx->pc = 0x17A1D8u;
    {
        const bool branch_taken_0x17a1d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a1d8) {
            ctx->pc = 0x17A20Cu;
            goto label_17a20c;
        }
    }
    ctx->pc = 0x17A1E0u;
label_17a1e0:
    // 0x17a1e0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17a1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17a1e4:
    // 0x17a1e4: 0xac205204  sw          $zero, 0x5204($at)
    ctx->pc = 0x17a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20996), GPR_U32(ctx, 0));
label_17a1e8:
    // 0x17a1e8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x17a1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_17a1ec:
    // 0x17a1ec: 0xc05e5d8  jal         func_179760
label_17a1f0:
    if (ctx->pc == 0x17A1F0u) {
        ctx->pc = 0x17A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1ECu;
        // 0x17a1f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A1F4u;
        goto label_17a1f4;
    }
    ctx->pc = 0x17A1ECu;
    SET_GPR_U32(ctx, 31, 0x17A1F4u);
    ctx->pc = 0x17A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A1ECu;
    // 0x17a1f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179760u;
    { ctx->pc = 0x179760; return; }
    ctx->pc = 0x17A1F4u;
label_17a1f4:
    // 0x17a1f4: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x17a1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_17a1f8:
    // 0x17a1f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17a1fc:
    // 0x17a1fc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_17a200:
    if (ctx->pc == 0x17A200u) {
        ctx->pc = 0x17A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1FCu;
        // 0x17a200: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A204u;
        goto label_17a204;
    }
    ctx->pc = 0x17A1FCu;
    {
        const bool branch_taken_0x17a1fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1FCu;
        // 0x17a200: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1fc) {
            ctx->pc = 0x17A20Cu;
            goto label_17a20c;
        }
    }
    ctx->pc = 0x17A204u;
label_17a204:
    // 0x17a204: 0xc05e5d8  jal         func_179760
label_17a208:
    if (ctx->pc == 0x17A208u) {
        ctx->pc = 0x17A20Cu;
        goto label_17a20c;
    }
    ctx->pc = 0x17A204u;
    SET_GPR_U32(ctx, 31, 0x17A20Cu);
    ctx->pc = 0x179760u;
    { ctx->pc = 0x179760; return; }
    ctx->pc = 0x17A20Cu;
label_17a20c:
    // 0x17a20c: 0x0  nop
    ctx->pc = 0x17a20cu;
    // NOP
label_17a210:
    // 0x17a210: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x17a210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17a214:
    // 0x17a214: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17a214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17a218:
    // 0x17a218: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17a218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a21c:
    // 0x17a21c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17a21cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a220:
    // 0x17a220: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a220u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a224:
    // 0x17a224: 0xc066c72  jal         func_19B1C8
label_17a228:
    if (ctx->pc == 0x17A228u) {
        ctx->pc = 0x17A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A224u;
        // 0x17a228: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A22Cu;
        goto label_17a22c;
    }
    ctx->pc = 0x17A224u;
    SET_GPR_U32(ctx, 31, 0x17A22Cu);
    ctx->pc = 0x17A228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A224u;
    // 0x17a228: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x17A22Cu;
label_17a22c:
    // 0x17a22c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x17a22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17a230:
    // 0x17a230: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17a230u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17a234:
    // 0x17a234: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17a234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_17a238:
    // 0x17a238: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x17a238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_17a23c:
    // 0x17a23c: 0x0  nop
    ctx->pc = 0x17a23cu;
    // NOP
label_17a240:
    // 0x17a240: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x17a240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_17a244:
    // 0x17a244: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x17a244u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_17a248:
    // 0x17a248: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_17a24c:
    if (ctx->pc == 0x17A24Cu) {
        ctx->pc = 0x17A250u;
        goto label_17a250;
    }
    ctx->pc = 0x17A248u;
    {
        const bool branch_taken_0x17a248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a248) {
            ctx->pc = 0x17A1D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a1d4;
        }
    }
    ctx->pc = 0x17A250u;
label_17a250:
    // 0x17a250: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x17a250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_17a254:
    // 0x17a254: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17a254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17a258:
    // 0x17a258: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_17a25c:
    if (ctx->pc == 0x17A25Cu) {
        ctx->pc = 0x17A260u;
        goto label_17a260;
    }
    ctx->pc = 0x17A258u;
    {
        const bool branch_taken_0x17a258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17a258) {
            ctx->pc = 0x17A268u;
            goto label_17a268;
        }
    }
    ctx->pc = 0x17A260u;
label_17a260:
    // 0x17a260: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
label_17a264:
    if (ctx->pc == 0x17A264u) {
        ctx->pc = 0x17A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A260u;
        // 0x17a264: 0x94a021  addu        $s4, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A268u;
        goto label_17a268;
    }
    ctx->pc = 0x17A260u;
    {
        const bool branch_taken_0x17a260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A260u;
        // 0x17a264: 0x94a021  addu        $s4, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a260) {
            ctx->pc = 0x17A1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a1c8;
        }
    }
    ctx->pc = 0x17A268u;
label_17a268:
    // 0x17a268: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17a268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17a26c:
    // 0x17a26c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17a26cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17a270:
    // 0x17a270: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17a270u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17a274:
    // 0x17a274: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17a278:
    // 0x17a278: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17a27c:
    // 0x17a27c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a27cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17a280:
    // 0x17a280: 0x3e00008  jr          $ra
label_17a284:
    if (ctx->pc == 0x17A284u) {
        ctx->pc = 0x17A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A280u;
        // 0x17a284: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A288u;
        goto label_17a288;
    }
    ctx->pc = 0x17A280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A280u;
        // 0x17a284: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A288u;
label_17a288:
    // 0x17a288: 0x0  nop
    ctx->pc = 0x17a288u;
    // NOP
label_17a28c:
    // 0x17a28c: 0x0  nop
    ctx->pc = 0x17a28cu;
    // NOP
label_17a290:
    // 0x17a290: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17a290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_17a294:
    // 0x17a294: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17a294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_17a298:
    // 0x17a298: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17a298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17a29c:
    // 0x17a29c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17a29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17a2a0:
    // 0x17a2a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17a2a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17a2a4:
    // 0x17a2a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17a2a8:
    // 0x17a2a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17a2a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17a2ac:
    // 0x17a2ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17a2b0:
    // 0x17a2b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17a2b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17a2b4:
    // 0x17a2b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17a2b8:
    // 0x17a2b8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_17a2bc:
    if (ctx->pc == 0x17A2BCu) {
        ctx->pc = 0x17A2C0u;
        goto label_17a2c0;
    }
    ctx->pc = 0x17A2B8u;
    {
        const bool branch_taken_0x17a2b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a2b8) {
            ctx->pc = 0x17A2CCu;
            goto label_17a2cc;
        }
    }
    ctx->pc = 0x17A2C0u;
label_17a2c0:
    // 0x17a2c0: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x17a2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_17a2c4:
    // 0x17a2c4: 0xc05e8d8  jal         func_17A360
label_17a2c8:
    if (ctx->pc == 0x17A2C8u) {
        ctx->pc = 0x17A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2C4u;
        // 0x17a2c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A2CCu;
        goto label_17a2cc;
    }
    ctx->pc = 0x17A2C4u;
    SET_GPR_U32(ctx, 31, 0x17A2CCu);
    ctx->pc = 0x17A2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A2C4u;
    // 0x17a2c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A360u;
    { ctx->pc = 0x17a360; return; }
    ctx->pc = 0x17A2CCu;
label_17a2cc:
    // 0x17a2cc: 0x0  nop
    ctx->pc = 0x17a2ccu;
    // NOP
label_17a2d0:
    // 0x17a2d0: 0x26900010  addiu       $s0, $s4, 0x10
    ctx->pc = 0x17a2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_17a2d4:
    // 0x17a2d4: 0x1000000d  b           . + 4 + (0xD << 2)
label_17a2d8:
    if (ctx->pc == 0x17A2D8u) {
        ctx->pc = 0x17A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2D4u;
        // 0x17a2d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A2DCu;
        goto label_17a2dc;
    }
    ctx->pc = 0x17A2D4u;
    {
        const bool branch_taken_0x17a2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2D4u;
        // 0x17a2d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a2d4) {
            ctx->pc = 0x17A30Cu;
            { ctx->pc = 0x17a30c; return; }
        }
    }
    ctx->pc = 0x17A2DCu;
label_17a2dc:
    // 0x17a2dc: 0x0  nop
    ctx->pc = 0x17a2dcu;
    // NOP
label_17a2e0:
    // 0x17a2e0: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x17a2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17a2e4:
    // 0x17a2e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17a2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17a2e8:
    // 0x17a2e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17a2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a2ec:
    // 0x17a2ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17a2ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17a2f0u;
    return;
}
