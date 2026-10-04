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

// Function: entry_00254d38
// Address: 0x254d38 - 0x27d478
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_00254d38_part11(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x259d10u: goto label_259d10;
        case 0x259d14u: goto label_259d14;
        case 0x259d18u: goto label_259d18;
        case 0x259d1cu: goto label_259d1c;
        case 0x259d20u: goto label_259d20;
        case 0x259d24u: goto label_259d24;
        case 0x259d28u: goto label_259d28;
        case 0x259d2cu: goto label_259d2c;
        case 0x259d30u: goto label_259d30;
        case 0x259d34u: goto label_259d34;
        case 0x259d38u: goto label_259d38;
        case 0x259d3cu: goto label_259d3c;
        case 0x259d40u: goto label_259d40;
        case 0x259d44u: goto label_259d44;
        case 0x259d48u: goto label_259d48;
        case 0x259d4cu: goto label_259d4c;
        case 0x259d50u: goto label_259d50;
        case 0x259d54u: goto label_259d54;
        case 0x259d58u: goto label_259d58;
        case 0x259d5cu: goto label_259d5c;
        case 0x259d60u: goto label_259d60;
        case 0x259d64u: goto label_259d64;
        case 0x259d68u: goto label_259d68;
        case 0x259d6cu: goto label_259d6c;
        case 0x259d70u: goto label_259d70;
        case 0x259d74u: goto label_259d74;
        case 0x259d78u: goto label_259d78;
        case 0x259d7cu: goto label_259d7c;
        case 0x259d80u: goto label_259d80;
        case 0x259d84u: goto label_259d84;
        case 0x259d88u: goto label_259d88;
        case 0x259d8cu: goto label_259d8c;
        case 0x259d90u: goto label_259d90;
        case 0x259d94u: goto label_259d94;
        case 0x259d98u: goto label_259d98;
        case 0x259d9cu: goto label_259d9c;
        case 0x259da0u: goto label_259da0;
        case 0x259da4u: goto label_259da4;
        case 0x259da8u: goto label_259da8;
        case 0x259dacu: goto label_259dac;
        case 0x259db0u: goto label_259db0;
        case 0x259db4u: goto label_259db4;
        case 0x259db8u: goto label_259db8;
        case 0x259dbcu: goto label_259dbc;
        case 0x259dc0u: goto label_259dc0;
        case 0x259dc4u: goto label_259dc4;
        case 0x259dc8u: goto label_259dc8;
        case 0x259dccu: goto label_259dcc;
        case 0x259dd0u: goto label_259dd0;
        case 0x259dd4u: goto label_259dd4;
        case 0x259dd8u: goto label_259dd8;
        case 0x259ddcu: goto label_259ddc;
        case 0x259de0u: goto label_259de0;
        case 0x259de4u: goto label_259de4;
        case 0x259de8u: goto label_259de8;
        case 0x259decu: goto label_259dec;
        case 0x259df0u: goto label_259df0;
        case 0x259df4u: goto label_259df4;
        case 0x259df8u: goto label_259df8;
        case 0x259dfcu: goto label_259dfc;
        case 0x259e00u: goto label_259e00;
        case 0x259e04u: goto label_259e04;
        case 0x259e08u: goto label_259e08;
        case 0x259e0cu: goto label_259e0c;
        case 0x259e10u: goto label_259e10;
        case 0x259e14u: goto label_259e14;
        case 0x259e18u: goto label_259e18;
        case 0x259e1cu: goto label_259e1c;
        case 0x259e20u: goto label_259e20;
        case 0x259e24u: goto label_259e24;
        case 0x259e28u: goto label_259e28;
        case 0x259e2cu: goto label_259e2c;
        case 0x259e30u: goto label_259e30;
        case 0x259e34u: goto label_259e34;
        case 0x259e38u: goto label_259e38;
        case 0x259e3cu: goto label_259e3c;
        case 0x259e40u: goto label_259e40;
        case 0x259e44u: goto label_259e44;
        case 0x259e48u: goto label_259e48;
        case 0x259e4cu: goto label_259e4c;
        case 0x259e50u: goto label_259e50;
        case 0x259e54u: goto label_259e54;
        case 0x259e58u: goto label_259e58;
        case 0x259e5cu: goto label_259e5c;
        case 0x259e60u: goto label_259e60;
        case 0x259e64u: goto label_259e64;
        case 0x259e68u: goto label_259e68;
        case 0x259e6cu: goto label_259e6c;
        case 0x259e70u: goto label_259e70;
        case 0x259e74u: goto label_259e74;
        case 0x259e78u: goto label_259e78;
        case 0x259e7cu: goto label_259e7c;
        case 0x259e80u: goto label_259e80;
        case 0x259e84u: goto label_259e84;
        case 0x259e88u: goto label_259e88;
        case 0x259e8cu: goto label_259e8c;
        case 0x259e90u: goto label_259e90;
        case 0x259e94u: goto label_259e94;
        case 0x259e98u: goto label_259e98;
        case 0x259e9cu: goto label_259e9c;
        case 0x259ea0u: goto label_259ea0;
        case 0x259ea4u: goto label_259ea4;
        case 0x259ea8u: goto label_259ea8;
        case 0x259eacu: goto label_259eac;
        case 0x259eb0u: goto label_259eb0;
        case 0x259eb4u: goto label_259eb4;
        case 0x259eb8u: goto label_259eb8;
        case 0x259ebcu: goto label_259ebc;
        case 0x259ec0u: goto label_259ec0;
        case 0x259ec4u: goto label_259ec4;
        case 0x259ec8u: goto label_259ec8;
        case 0x259eccu: goto label_259ecc;
        case 0x259ed0u: goto label_259ed0;
        case 0x259ed4u: goto label_259ed4;
        case 0x259ed8u: goto label_259ed8;
        case 0x259edcu: goto label_259edc;
        case 0x259ee0u: goto label_259ee0;
        case 0x259ee4u: goto label_259ee4;
        case 0x259ee8u: goto label_259ee8;
        case 0x259eecu: goto label_259eec;
        case 0x259ef0u: goto label_259ef0;
        case 0x259ef4u: goto label_259ef4;
        case 0x259ef8u: goto label_259ef8;
        case 0x259efcu: goto label_259efc;
        case 0x259f00u: goto label_259f00;
        case 0x259f04u: goto label_259f04;
        case 0x259f08u: goto label_259f08;
        case 0x259f0cu: goto label_259f0c;
        case 0x259f10u: goto label_259f10;
        case 0x259f14u: goto label_259f14;
        case 0x259f18u: goto label_259f18;
        case 0x259f1cu: goto label_259f1c;
        case 0x259f20u: goto label_259f20;
        case 0x259f24u: goto label_259f24;
        case 0x259f28u: goto label_259f28;
        case 0x259f2cu: goto label_259f2c;
        case 0x259f30u: goto label_259f30;
        case 0x259f34u: goto label_259f34;
        case 0x259f38u: goto label_259f38;
        case 0x259f3cu: goto label_259f3c;
        case 0x259f40u: goto label_259f40;
        case 0x259f44u: goto label_259f44;
        case 0x259f48u: goto label_259f48;
        case 0x259f4cu: goto label_259f4c;
        case 0x259f50u: goto label_259f50;
        case 0x259f54u: goto label_259f54;
        case 0x259f58u: goto label_259f58;
        case 0x259f5cu: goto label_259f5c;
        case 0x259f60u: goto label_259f60;
        case 0x259f64u: goto label_259f64;
        case 0x259f68u: goto label_259f68;
        case 0x259f6cu: goto label_259f6c;
        case 0x259f70u: goto label_259f70;
        case 0x259f74u: goto label_259f74;
        case 0x259f78u: goto label_259f78;
        case 0x259f7cu: goto label_259f7c;
        case 0x259f80u: goto label_259f80;
        case 0x259f84u: goto label_259f84;
        case 0x259f88u: goto label_259f88;
        case 0x259f8cu: goto label_259f8c;
        case 0x259f90u: goto label_259f90;
        case 0x259f94u: goto label_259f94;
        case 0x259f98u: goto label_259f98;
        case 0x259f9cu: goto label_259f9c;
        case 0x259fa0u: goto label_259fa0;
        case 0x259fa4u: goto label_259fa4;
        case 0x259fa8u: goto label_259fa8;
        case 0x259facu: goto label_259fac;
        case 0x259fb0u: goto label_259fb0;
        case 0x259fb4u: goto label_259fb4;
        case 0x259fb8u: goto label_259fb8;
        case 0x259fbcu: goto label_259fbc;
        case 0x259fc0u: goto label_259fc0;
        case 0x259fc4u: goto label_259fc4;
        case 0x259fc8u: goto label_259fc8;
        case 0x259fccu: goto label_259fcc;
        case 0x259fd0u: goto label_259fd0;
        case 0x259fd4u: goto label_259fd4;
        case 0x259fd8u: goto label_259fd8;
        case 0x259fdcu: goto label_259fdc;
        case 0x259fe0u: goto label_259fe0;
        case 0x259fe4u: goto label_259fe4;
        case 0x259fe8u: goto label_259fe8;
        case 0x259fecu: goto label_259fec;
        case 0x259ff0u: goto label_259ff0;
        case 0x259ff4u: goto label_259ff4;
        case 0x259ff8u: goto label_259ff8;
        case 0x259ffcu: goto label_259ffc;
        case 0x25a000u: goto label_25a000;
        case 0x25a004u: goto label_25a004;
        case 0x25a008u: goto label_25a008;
        case 0x25a00cu: goto label_25a00c;
        case 0x25a010u: goto label_25a010;
        case 0x25a014u: goto label_25a014;
        case 0x25a018u: goto label_25a018;
        case 0x25a01cu: goto label_25a01c;
        case 0x25a020u: goto label_25a020;
        case 0x25a024u: goto label_25a024;
        case 0x25a028u: goto label_25a028;
        case 0x25a02cu: goto label_25a02c;
        case 0x25a030u: goto label_25a030;
        case 0x25a034u: goto label_25a034;
        case 0x25a038u: goto label_25a038;
        case 0x25a03cu: goto label_25a03c;
        case 0x25a040u: goto label_25a040;
        case 0x25a044u: goto label_25a044;
        case 0x25a048u: goto label_25a048;
        case 0x25a04cu: goto label_25a04c;
        case 0x25a050u: goto label_25a050;
        case 0x25a054u: goto label_25a054;
        case 0x25a058u: goto label_25a058;
        case 0x25a05cu: goto label_25a05c;
        case 0x25a060u: goto label_25a060;
        case 0x25a064u: goto label_25a064;
        case 0x25a068u: goto label_25a068;
        case 0x25a06cu: goto label_25a06c;
        case 0x25a070u: goto label_25a070;
        case 0x25a074u: goto label_25a074;
        case 0x25a078u: goto label_25a078;
        case 0x25a07cu: goto label_25a07c;
        case 0x25a080u: goto label_25a080;
        case 0x25a084u: goto label_25a084;
        case 0x25a088u: goto label_25a088;
        case 0x25a08cu: goto label_25a08c;
        case 0x25a090u: goto label_25a090;
        case 0x25a094u: goto label_25a094;
        case 0x25a098u: goto label_25a098;
        case 0x25a09cu: goto label_25a09c;
        case 0x25a0a0u: goto label_25a0a0;
        case 0x25a0a4u: goto label_25a0a4;
        case 0x25a0a8u: goto label_25a0a8;
        case 0x25a0acu: goto label_25a0ac;
        case 0x25a0b0u: goto label_25a0b0;
        case 0x25a0b4u: goto label_25a0b4;
        case 0x25a0b8u: goto label_25a0b8;
        case 0x25a0bcu: goto label_25a0bc;
        case 0x25a0c0u: goto label_25a0c0;
        case 0x25a0c4u: goto label_25a0c4;
        case 0x25a0c8u: goto label_25a0c8;
        case 0x25a0ccu: goto label_25a0cc;
        case 0x25a0d0u: goto label_25a0d0;
        case 0x25a0d4u: goto label_25a0d4;
        case 0x25a0d8u: goto label_25a0d8;
        case 0x25a0dcu: goto label_25a0dc;
        case 0x25a0e0u: goto label_25a0e0;
        case 0x25a0e4u: goto label_25a0e4;
        case 0x25a0e8u: goto label_25a0e8;
        case 0x25a0ecu: goto label_25a0ec;
        case 0x25a0f0u: goto label_25a0f0;
        case 0x25a0f4u: goto label_25a0f4;
        case 0x25a0f8u: goto label_25a0f8;
        case 0x25a0fcu: goto label_25a0fc;
        case 0x25a100u: goto label_25a100;
        case 0x25a104u: goto label_25a104;
        case 0x25a108u: goto label_25a108;
        case 0x25a10cu: goto label_25a10c;
        case 0x25a110u: goto label_25a110;
        case 0x25a114u: goto label_25a114;
        case 0x25a118u: goto label_25a118;
        case 0x25a11cu: goto label_25a11c;
        case 0x25a120u: goto label_25a120;
        case 0x25a124u: goto label_25a124;
        case 0x25a128u: goto label_25a128;
        case 0x25a12cu: goto label_25a12c;
        case 0x25a130u: goto label_25a130;
        case 0x25a134u: goto label_25a134;
        case 0x25a138u: goto label_25a138;
        case 0x25a13cu: goto label_25a13c;
        case 0x25a140u: goto label_25a140;
        case 0x25a144u: goto label_25a144;
        case 0x25a148u: goto label_25a148;
        case 0x25a14cu: goto label_25a14c;
        case 0x25a150u: goto label_25a150;
        case 0x25a154u: goto label_25a154;
        case 0x25a158u: goto label_25a158;
        case 0x25a15cu: goto label_25a15c;
        case 0x25a160u: goto label_25a160;
        case 0x25a164u: goto label_25a164;
        case 0x25a168u: goto label_25a168;
        case 0x25a16cu: goto label_25a16c;
        case 0x25a170u: goto label_25a170;
        case 0x25a174u: goto label_25a174;
        case 0x25a178u: goto label_25a178;
        case 0x25a17cu: goto label_25a17c;
        case 0x25a180u: goto label_25a180;
        case 0x25a184u: goto label_25a184;
        case 0x25a188u: goto label_25a188;
        case 0x25a18cu: goto label_25a18c;
        case 0x25a190u: goto label_25a190;
        case 0x25a194u: goto label_25a194;
        case 0x25a198u: goto label_25a198;
        case 0x25a19cu: goto label_25a19c;
        case 0x25a1a0u: goto label_25a1a0;
        case 0x25a1a4u: goto label_25a1a4;
        case 0x25a1a8u: goto label_25a1a8;
        case 0x25a1acu: goto label_25a1ac;
        case 0x25a1b0u: goto label_25a1b0;
        case 0x25a1b4u: goto label_25a1b4;
        case 0x25a1b8u: goto label_25a1b8;
        case 0x25a1bcu: goto label_25a1bc;
        case 0x25a1c0u: goto label_25a1c0;
        case 0x25a1c4u: goto label_25a1c4;
        case 0x25a1c8u: goto label_25a1c8;
        case 0x25a1ccu: goto label_25a1cc;
        case 0x25a1d0u: goto label_25a1d0;
        case 0x25a1d4u: goto label_25a1d4;
        case 0x25a1d8u: goto label_25a1d8;
        case 0x25a1dcu: goto label_25a1dc;
        case 0x25a1e0u: goto label_25a1e0;
        case 0x25a1e4u: goto label_25a1e4;
        case 0x25a1e8u: goto label_25a1e8;
        case 0x25a1ecu: goto label_25a1ec;
        case 0x25a1f0u: goto label_25a1f0;
        case 0x25a1f4u: goto label_25a1f4;
        case 0x25a1f8u: goto label_25a1f8;
        case 0x25a1fcu: goto label_25a1fc;
        case 0x25a200u: goto label_25a200;
        case 0x25a204u: goto label_25a204;
        case 0x25a208u: goto label_25a208;
        case 0x25a20cu: goto label_25a20c;
        case 0x25a210u: goto label_25a210;
        case 0x25a214u: goto label_25a214;
        case 0x25a218u: goto label_25a218;
        case 0x25a21cu: goto label_25a21c;
        case 0x25a220u: goto label_25a220;
        case 0x25a224u: goto label_25a224;
        case 0x25a228u: goto label_25a228;
        case 0x25a22cu: goto label_25a22c;
        case 0x25a230u: goto label_25a230;
        case 0x25a234u: goto label_25a234;
        case 0x25a238u: goto label_25a238;
        case 0x25a23cu: goto label_25a23c;
        case 0x25a240u: goto label_25a240;
        case 0x25a244u: goto label_25a244;
        case 0x25a248u: goto label_25a248;
        case 0x25a24cu: goto label_25a24c;
        case 0x25a250u: goto label_25a250;
        case 0x25a254u: goto label_25a254;
        case 0x25a258u: goto label_25a258;
        case 0x25a25cu: goto label_25a25c;
        case 0x25a260u: goto label_25a260;
        case 0x25a264u: goto label_25a264;
        case 0x25a268u: goto label_25a268;
        case 0x25a26cu: goto label_25a26c;
        case 0x25a270u: goto label_25a270;
        case 0x25a274u: goto label_25a274;
        case 0x25a278u: goto label_25a278;
        case 0x25a27cu: goto label_25a27c;
        case 0x25a280u: goto label_25a280;
        case 0x25a284u: goto label_25a284;
        case 0x25a288u: goto label_25a288;
        case 0x25a28cu: goto label_25a28c;
        case 0x25a290u: goto label_25a290;
        case 0x25a294u: goto label_25a294;
        case 0x25a298u: goto label_25a298;
        case 0x25a29cu: goto label_25a29c;
        case 0x25a2a0u: goto label_25a2a0;
        case 0x25a2a4u: goto label_25a2a4;
        case 0x25a2a8u: goto label_25a2a8;
        case 0x25a2acu: goto label_25a2ac;
        case 0x25a2b0u: goto label_25a2b0;
        case 0x25a2b4u: goto label_25a2b4;
        case 0x25a2b8u: goto label_25a2b8;
        case 0x25a2bcu: goto label_25a2bc;
        case 0x25a2c0u: goto label_25a2c0;
        case 0x25a2c4u: goto label_25a2c4;
        case 0x25a2c8u: goto label_25a2c8;
        case 0x25a2ccu: goto label_25a2cc;
        case 0x25a2d0u: goto label_25a2d0;
        case 0x25a2d4u: goto label_25a2d4;
        case 0x25a2d8u: goto label_25a2d8;
        case 0x25a2dcu: goto label_25a2dc;
        case 0x25a2e0u: goto label_25a2e0;
        case 0x25a2e4u: goto label_25a2e4;
        case 0x25a2e8u: goto label_25a2e8;
        case 0x25a2ecu: goto label_25a2ec;
        case 0x25a2f0u: goto label_25a2f0;
        case 0x25a2f4u: goto label_25a2f4;
        case 0x25a2f8u: goto label_25a2f8;
        case 0x25a2fcu: goto label_25a2fc;
        case 0x25a300u: goto label_25a300;
        case 0x25a304u: goto label_25a304;
        case 0x25a308u: goto label_25a308;
        case 0x25a30cu: goto label_25a30c;
        case 0x25a310u: goto label_25a310;
        case 0x25a314u: goto label_25a314;
        case 0x25a318u: goto label_25a318;
        case 0x25a31cu: goto label_25a31c;
        case 0x25a320u: goto label_25a320;
        case 0x25a324u: goto label_25a324;
        default: return;
    }

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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x259B90 raw=0x0000339D"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x259BE0 raw=0x000033D5"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x259C10 raw=0x000033F9"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x259C40 raw=0x0000341E"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x259C90 raw=0x0000345E"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x259CB0 raw=0x0000347D"); /* MITIGATED MMI/COP0 */
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
label_259d10:
    // 0x259d10: 0x34c8  .word       0x000034C8                   # jr          $zero # 000034C0 <InstrIdType: CPU_SPECIAL>
label_259d14:
    if (ctx->pc == 0x259D14u) {
        ctx->pc = 0x259D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D10u;
        // 0x259d14: 0x6d50  .word       0x00006D50                   # mfhi        $t5 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x259D18u;
        goto label_259d18;
    }
    ctx->pc = 0x259D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x259D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259D10u;
        // 0x259d14: 0x6d50  .word       0x00006D50                   # mfhi        $t5 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259D10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x259D18u;
label_259d18:
    // 0x259d18: 0x0  nop
    ctx->pc = 0x259d18u;
    // NOP
label_259d1c:
    // 0x259d1c: 0x0  nop
    ctx->pc = 0x259d1cu;
    // NOP
label_259d20:
    // 0x259d20: 0x34d6  .word       0x000034D6                   # dsrlv       $a2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259d20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_259d24:
    // 0x259d24: 0x74c0  sll         $t6, $zero, 19
    ctx->pc = 0x259d24u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_259d28:
    // 0x259d28: 0x0  nop
    ctx->pc = 0x259d28u;
    // NOP
label_259d2c:
    // 0x259d2c: 0x0  nop
    ctx->pc = 0x259d2cu;
    // NOP
label_259d30:
    // 0x259d30: 0x34e5  .word       0x000034E5                   # move        $a2, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259d30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_259d34:
    // 0x259d34: 0x35c0  sll         $a2, $zero, 23
    ctx->pc = 0x259d34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_259d38:
    // 0x259d38: 0x0  nop
    ctx->pc = 0x259d38u;
    // NOP
label_259d3c:
    // 0x259d3c: 0x0  nop
    ctx->pc = 0x259d3cu;
    // NOP
label_259d40:
    // 0x259d40: 0x34ec  .word       0x000034EC                   # dadd        $a2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259d40u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_259d44:
    // 0x259d44: 0x45e0  .word       0x000045E0                   # add         $t0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259d44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_259d48:
    // 0x259d48: 0x0  nop
    ctx->pc = 0x259d48u;
    // NOP
label_259d4c:
    // 0x259d4c: 0x0  nop
    ctx->pc = 0x259d4cu;
    // NOP
label_259d50:
    // 0x259d50: 0x34f5  .word       0x000034F5                   # INVALID     $zero, $zero, 0x34F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259d50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x259D50 raw=0x000034F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_259d54:
    // 0x259d54: 0x5450  .word       0x00005450                   # mfhi        $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259d54u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_259d58:
    // 0x259d58: 0x0  nop
    ctx->pc = 0x259d58u;
    // NOP
label_259d5c:
    // 0x259d5c: 0x0  nop
    ctx->pc = 0x259d5cu;
    // NOP
label_259d60:
    // 0x259d60: 0x3500  sll         $a2, $zero, 20
    ctx->pc = 0x259d60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_259d64:
    // 0x259d64: 0x3700  sll         $a2, $zero, 28
    ctx->pc = 0x259d64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_259d68:
    // 0x259d68: 0x0  nop
    ctx->pc = 0x259d68u;
    // NOP
label_259d6c:
    // 0x259d6c: 0x0  nop
    ctx->pc = 0x259d6cu;
    // NOP
label_259d70:
    // 0x259d70: 0x3507  .word       0x00003507                   # srav        $a2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259d70u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_259d74:
    // 0x259d74: 0x34e0  .word       0x000034E0                   # add         $a2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259d74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_259d78:
    // 0x259d78: 0x0  nop
    ctx->pc = 0x259d78u;
    // NOP
label_259d7c:
    // 0x259d7c: 0x0  nop
    ctx->pc = 0x259d7cu;
    // NOP
label_259d80:
    // 0x259d80: 0x350e  .word       0x0000350E                   # INVALID     $zero, $zero, 0x350E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259d80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x259D80 raw=0x0000350E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_259d84:
    // 0x259d84: 0x6760  .word       0x00006760                   # add         $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259d84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_259d88:
    // 0x259d88: 0x0  nop
    ctx->pc = 0x259d88u;
    // NOP
label_259d8c:
    // 0x259d8c: 0x0  nop
    ctx->pc = 0x259d8cu;
    // NOP
label_259d90:
    // 0x259d90: 0x351b  .word       0x0000351B                   # divu        $a2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259d90u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_259d94:
    // 0x259d94: 0x3810  mfhi        $a3
    ctx->pc = 0x259d94u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_259d98:
    // 0x259d98: 0x0  nop
    ctx->pc = 0x259d98u;
    // NOP
label_259d9c:
    // 0x259d9c: 0x0  nop
    ctx->pc = 0x259d9cu;
    // NOP
label_259da0:
    // 0x259da0: 0x3523  .word       0x00003523                   # negu        $a2, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259da0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_259da4:
    // 0x259da4: 0x3e50  .word       0x00003E50                   # mfhi        $a3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259da4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_259da8:
    // 0x259da8: 0x0  nop
    ctx->pc = 0x259da8u;
    // NOP
label_259dac:
    // 0x259dac: 0x0  nop
    ctx->pc = 0x259dacu;
    // NOP
label_259db0:
    // 0x259db0: 0x352b  .word       0x0000352B                   # sltu        $a2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259db0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_259db4:
    // 0x259db4: 0x5b90  .word       0x00005B90                   # mfhi        $t3 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259db4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_259db8:
    // 0x259db8: 0x0  nop
    ctx->pc = 0x259db8u;
    // NOP
label_259dbc:
    // 0x259dbc: 0x0  nop
    ctx->pc = 0x259dbcu;
    // NOP
label_259dc0:
    // 0x259dc0: 0x3537  .word       0x00003537                   # INVALID     $zero, $zero, 0x3537 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259dc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x259DC0 raw=0x00003537"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_259dc4:
    // 0x259dc4: 0x2f00  sll         $a1, $zero, 28
    ctx->pc = 0x259dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_259dc8:
    // 0x259dc8: 0x0  nop
    ctx->pc = 0x259dc8u;
    // NOP
label_259dcc:
    // 0x259dcc: 0x0  nop
    ctx->pc = 0x259dccu;
    // NOP
label_259dd0:
    // 0x259dd0: 0x353d  .word       0x0000353D                   # INVALID     $zero, $zero, 0x353D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259dd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x259DD0 raw=0x0000353D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_259dd4:
    // 0x259dd4: 0x4570  tge         $zero, $zero, 277
    ctx->pc = 0x259dd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259dd8:
    // 0x259dd8: 0x0  nop
    ctx->pc = 0x259dd8u;
    // NOP
label_259ddc:
    // 0x259ddc: 0x0  nop
    ctx->pc = 0x259ddcu;
    // NOP
label_259de0:
    // 0x259de0: 0x3546  .word       0x00003546                   # srlv        $a2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259de0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_259de4:
    // 0x259de4: 0x4ce0  .word       0x00004CE0                   # add         $t1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259de4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_259de8:
    // 0x259de8: 0x0  nop
    ctx->pc = 0x259de8u;
    // NOP
label_259dec:
    // 0x259dec: 0x0  nop
    ctx->pc = 0x259decu;
    // NOP
label_259df0:
    // 0x259df0: 0x3550  .word       0x00003550                   # mfhi        $a2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259df0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_259df4:
    // 0x259df4: 0x4e50  .word       0x00004E50                   # mfhi        $t1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259df4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_259df8:
    // 0x259df8: 0x0  nop
    ctx->pc = 0x259df8u;
    // NOP
label_259dfc:
    // 0x259dfc: 0x0  nop
    ctx->pc = 0x259dfcu;
    // NOP
label_259e00:
    // 0x259e00: 0x355a  .word       0x0000355A                   # div         $a2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259e00u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_259e04:
    // 0x259e04: 0x5650  .word       0x00005650                   # mfhi        $t2 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259e04u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_259e08:
    // 0x259e08: 0x0  nop
    ctx->pc = 0x259e08u;
    // NOP
label_259e0c:
    // 0x259e0c: 0x0  nop
    ctx->pc = 0x259e0cu;
    // NOP
label_259e10:
    // 0x259e10: 0x3565  .word       0x00003565                   # move        $a2, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259e10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_259e14:
    // 0x259e14: 0x5870  tge         $zero, $zero, 353
    ctx->pc = 0x259e14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259e18:
    // 0x259e18: 0x0  nop
    ctx->pc = 0x259e18u;
    // NOP
label_259e1c:
    // 0x259e1c: 0x0  nop
    ctx->pc = 0x259e1cu;
    // NOP
label_259e20:
    // 0x259e20: 0x3571  tgeu        $zero, $zero, 213
    ctx->pc = 0x259e20u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259e24:
    // 0x259e24: 0x4a50  .word       0x00004A50                   # mfhi        $t1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259e24u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_259e28:
    // 0x259e28: 0x0  nop
    ctx->pc = 0x259e28u;
    // NOP
label_259e2c:
    // 0x259e2c: 0x0  nop
    ctx->pc = 0x259e2cu;
    // NOP
label_259e30:
    // 0x259e30: 0x357b  dsra        $a2, $zero, 21
    ctx->pc = 0x259e30u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 21);
label_259e34:
    // 0x259e34: 0x6960  .word       0x00006960                   # add         $t5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259e34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_259e38:
    // 0x259e38: 0x0  nop
    ctx->pc = 0x259e38u;
    // NOP
label_259e3c:
    // 0x259e3c: 0x0  nop
    ctx->pc = 0x259e3cu;
    // NOP
label_259e40:
    // 0x259e40: 0x3589  .word       0x00003589                   # jalr        $a2, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
label_259e44:
    if (ctx->pc == 0x259E44u) {
        ctx->pc = 0x259E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E40u;
        // 0x259e44: 0x7060  .word       0x00007060                   # add         $t6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x259E48u;
        goto label_259e48;
    }
    ctx->pc = 0x259E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 6, 0x259E48u);
        ctx->pc = 0x259E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E40u;
        // 0x259e44: 0x7060  .word       0x00007060                   # add         $t6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259E40u, 0x259E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x259E48u;
label_259e48:
    // 0x259e48: 0x0  nop
    ctx->pc = 0x259e48u;
    // NOP
label_259e4c:
    // 0x259e4c: 0x0  nop
    ctx->pc = 0x259e4cu;
    // NOP
label_259e50:
    // 0x259e50: 0x3598  .word       0x00003598                   # mult        $a2, $zero, $zero # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x259e50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_259e54:
    // 0x259e54: 0x4d00  sll         $t1, $zero, 20
    ctx->pc = 0x259e54u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_259e58:
    // 0x259e58: 0x0  nop
    ctx->pc = 0x259e58u;
    // NOP
label_259e5c:
    // 0x259e5c: 0x0  nop
    ctx->pc = 0x259e5cu;
    // NOP
label_259e60:
    // 0x259e60: 0x35a2  .word       0x000035A2                   # neg         $a2, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259e60u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_259e64:
    // 0x259e64: 0x8060  .word       0x00008060                   # add         $s0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259e64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_259e68:
    // 0x259e68: 0x0  nop
    ctx->pc = 0x259e68u;
    // NOP
label_259e6c:
    // 0x259e6c: 0x0  nop
    ctx->pc = 0x259e6cu;
    // NOP
label_259e70:
    // 0x259e70: 0x35b3  tltu        $zero, $zero, 214
    ctx->pc = 0x259e70u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259e74:
    // 0x259e74: 0x4220  .word       0x00004220                   # add         $t0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259e74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_259e78:
    // 0x259e78: 0x0  nop
    ctx->pc = 0x259e78u;
    // NOP
label_259e7c:
    // 0x259e7c: 0x0  nop
    ctx->pc = 0x259e7cu;
    // NOP
label_259e80:
    // 0x259e80: 0x35bc  dsll32      $a2, $zero, 22
    ctx->pc = 0x259e80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (32 + 22));
label_259e84:
    // 0x259e84: 0x4b50  .word       0x00004B50                   # mfhi        $t1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259e84u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_259e88:
    // 0x259e88: 0x0  nop
    ctx->pc = 0x259e88u;
    // NOP
label_259e8c:
    // 0x259e8c: 0x0  nop
    ctx->pc = 0x259e8cu;
    // NOP
label_259e90:
    // 0x259e90: 0x35c6  .word       0x000035C6                   # srlv        $a2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259e90u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_259e94:
    // 0x259e94: 0x5790  .word       0x00005790                   # mfhi        $t2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259e94u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_259e98:
    // 0x259e98: 0x0  nop
    ctx->pc = 0x259e98u;
    // NOP
label_259e9c:
    // 0x259e9c: 0x0  nop
    ctx->pc = 0x259e9cu;
    // NOP
label_259ea0:
    // 0x259ea0: 0x35d1  .word       0x000035D1                   # mthi        $zero # 000035C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259ea0u;
    ctx->hi = GPR_U64(ctx, 0);
label_259ea4:
    // 0x259ea4: 0x5790  .word       0x00005790                   # mfhi        $t2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259ea4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_259ea8:
    // 0x259ea8: 0x0  nop
    ctx->pc = 0x259ea8u;
    // NOP
label_259eac:
    // 0x259eac: 0x0  nop
    ctx->pc = 0x259eacu;
    // NOP
label_259eb0:
    // 0x259eb0: 0x35dc  .word       0x000035DC                   # dmult       $zero, $zero # 000035C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259eb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x259EB0 raw=0x000035DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_259eb4:
    // 0x259eb4: 0x5e80  sll         $t3, $zero, 26
    ctx->pc = 0x259eb4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_259eb8:
    // 0x259eb8: 0x0  nop
    ctx->pc = 0x259eb8u;
    // NOP
label_259ebc:
    // 0x259ebc: 0x0  nop
    ctx->pc = 0x259ebcu;
    // NOP
label_259ec0:
    // 0x259ec0: 0x35e8  .word       0x000035E8                   # mfsa        $a2 # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x259ec0u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_259ec4:
    // 0x259ec4: 0x5fe0  .word       0x00005FE0                   # add         $t3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259ec4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_259ec8:
    // 0x259ec8: 0x0  nop
    ctx->pc = 0x259ec8u;
    // NOP
label_259ecc:
    // 0x259ecc: 0x0  nop
    ctx->pc = 0x259eccu;
    // NOP
label_259ed0:
    // 0x259ed0: 0x35f4  teq         $zero, $zero, 215
    ctx->pc = 0x259ed0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259ed4:
    // 0x259ed4: 0x5530  tge         $zero, $zero, 340
    ctx->pc = 0x259ed4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259ed8:
    // 0x259ed8: 0x0  nop
    ctx->pc = 0x259ed8u;
    // NOP
label_259edc:
    // 0x259edc: 0x0  nop
    ctx->pc = 0x259edcu;
    // NOP
label_259ee0:
    // 0x259ee0: 0x35ff  dsra32      $a2, $zero, 23
    ctx->pc = 0x259ee0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> (32 + 23));
label_259ee4:
    // 0x259ee4: 0x8dc0  sll         $s1, $zero, 23
    ctx->pc = 0x259ee4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_259ee8:
    // 0x259ee8: 0x0  nop
    ctx->pc = 0x259ee8u;
    // NOP
label_259eec:
    // 0x259eec: 0x0  nop
    ctx->pc = 0x259eecu;
    // NOP
label_259ef0:
    // 0x259ef0: 0x3611  .word       0x00003611                   # mthi        $zero # 00003600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259ef0u;
    ctx->hi = GPR_U64(ctx, 0);
label_259ef4:
    // 0x259ef4: 0x4e70  tge         $zero, $zero, 313
    ctx->pc = 0x259ef4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259ef8:
    // 0x259ef8: 0x0  nop
    ctx->pc = 0x259ef8u;
    // NOP
label_259efc:
    // 0x259efc: 0x0  nop
    ctx->pc = 0x259efcu;
    // NOP
label_259f00:
    // 0x259f00: 0x361b  .word       0x0000361B                   # divu        $a2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f00u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_259f04:
    // 0x259f04: 0x9090  .word       0x00009090                   # mfhi        $s2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f04u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_259f08:
    // 0x259f08: 0x0  nop
    ctx->pc = 0x259f08u;
    // NOP
label_259f0c:
    // 0x259f0c: 0x0  nop
    ctx->pc = 0x259f0cu;
    // NOP
label_259f10:
    // 0x259f10: 0x362e  .word       0x0000362E                   # dsub        $a2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_259f14:
    // 0x259f14: 0x8940  sll         $s1, $zero, 5
    ctx->pc = 0x259f14u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_259f18:
    // 0x259f18: 0x0  nop
    ctx->pc = 0x259f18u;
    // NOP
label_259f1c:
    // 0x259f1c: 0x0  nop
    ctx->pc = 0x259f1cu;
    // NOP
label_259f20:
    // 0x259f20: 0x3640  sll         $a2, $zero, 25
    ctx->pc = 0x259f20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_259f24:
    // 0x259f24: 0xaf20  .word       0x0000AF20                   # add         $s5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_259f28:
    // 0x259f28: 0x0  nop
    ctx->pc = 0x259f28u;
    // NOP
label_259f2c:
    // 0x259f2c: 0x0  nop
    ctx->pc = 0x259f2cu;
    // NOP
label_259f30:
    // 0x259f30: 0x3656  .word       0x00003656                   # dsrlv       $a2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_259f34:
    // 0x259f34: 0x8230  tge         $zero, $zero, 520
    ctx->pc = 0x259f34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259f38:
    // 0x259f38: 0x0  nop
    ctx->pc = 0x259f38u;
    // NOP
label_259f3c:
    // 0x259f3c: 0x0  nop
    ctx->pc = 0x259f3cu;
    // NOP
label_259f40:
    // 0x259f40: 0x3667  .word       0x00003667                   # not         $a2, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f40u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_259f44:
    // 0x259f44: 0x9ba0  .word       0x00009BA0                   # add         $s3, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_259f48:
    // 0x259f48: 0x0  nop
    ctx->pc = 0x259f48u;
    // NOP
label_259f4c:
    // 0x259f4c: 0x0  nop
    ctx->pc = 0x259f4cu;
    // NOP
label_259f50:
    // 0x259f50: 0x367b  dsra        $a2, $zero, 25
    ctx->pc = 0x259f50u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 25);
label_259f54:
    // 0x259f54: 0x8870  tge         $zero, $zero, 545
    ctx->pc = 0x259f54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259f58:
    // 0x259f58: 0x0  nop
    ctx->pc = 0x259f58u;
    // NOP
label_259f5c:
    // 0x259f5c: 0x0  nop
    ctx->pc = 0x259f5cu;
    // NOP
label_259f60:
    // 0x259f60: 0x368d  break       0, 218
    ctx->pc = 0x259f60u;
    runtime->handleBreak(rdram, ctx);
label_259f64:
    // 0x259f64: 0x9d60  .word       0x00009D60                   # add         $s3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_259f68:
    // 0x259f68: 0x0  nop
    ctx->pc = 0x259f68u;
    // NOP
label_259f6c:
    // 0x259f6c: 0x0  nop
    ctx->pc = 0x259f6cu;
    // NOP
label_259f70:
    // 0x259f70: 0x36a1  .word       0x000036A1                   # addu        $a2, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_259f74:
    // 0x259f74: 0x8870  tge         $zero, $zero, 545
    ctx->pc = 0x259f74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259f78:
    // 0x259f78: 0x0  nop
    ctx->pc = 0x259f78u;
    // NOP
label_259f7c:
    // 0x259f7c: 0x0  nop
    ctx->pc = 0x259f7cu;
    // NOP
label_259f80:
    // 0x259f80: 0x36b3  tltu        $zero, $zero, 218
    ctx->pc = 0x259f80u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259f84:
    // 0x259f84: 0x9cb0  tge         $zero, $zero, 626
    ctx->pc = 0x259f84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259f88:
    // 0x259f88: 0x0  nop
    ctx->pc = 0x259f88u;
    // NOP
label_259f8c:
    // 0x259f8c: 0x0  nop
    ctx->pc = 0x259f8cu;
    // NOP
label_259f90:
    // 0x259f90: 0x36c7  .word       0x000036C7                   # srav        $a2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f90u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_259f94:
    // 0x259f94: 0x9a20  .word       0x00009A20                   # add         $s3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_259f98:
    // 0x259f98: 0x0  nop
    ctx->pc = 0x259f98u;
    // NOP
label_259f9c:
    // 0x259f9c: 0x0  nop
    ctx->pc = 0x259f9cu;
    // NOP
label_259fa0:
    // 0x259fa0: 0x36db  .word       0x000036DB                   # divu        $a2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259fa0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_259fa4:
    // 0x259fa4: 0x9b20  .word       0x00009B20                   # add         $s3, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259fa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_259fa8:
    // 0x259fa8: 0x0  nop
    ctx->pc = 0x259fa8u;
    // NOP
label_259fac:
    // 0x259fac: 0x0  nop
    ctx->pc = 0x259facu;
    // NOP
label_259fb0:
    // 0x259fb0: 0x36ef  .word       0x000036EF                   # dsubu       $a2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259fb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_259fb4:
    // 0x259fb4: 0x9d00  sll         $s3, $zero, 20
    ctx->pc = 0x259fb4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_259fb8:
    // 0x259fb8: 0x0  nop
    ctx->pc = 0x259fb8u;
    // NOP
label_259fbc:
    // 0x259fbc: 0x0  nop
    ctx->pc = 0x259fbcu;
    // NOP
label_259fc0:
    // 0x259fc0: 0x3703  sra         $a2, $zero, 28
    ctx->pc = 0x259fc0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 0), 28));
label_259fc4:
    // 0x259fc4: 0x5490  .word       0x00005490                   # mfhi        $t2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259fc4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_259fc8:
    // 0x259fc8: 0x0  nop
    ctx->pc = 0x259fc8u;
    // NOP
label_259fcc:
    // 0x259fcc: 0x0  nop
    ctx->pc = 0x259fccu;
    // NOP
label_259fd0:
    // 0x259fd0: 0x370e  .word       0x0000370E                   # INVALID     $zero, $zero, 0x370E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259fd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x259FD0 raw=0x0000370E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_259fd4:
    // 0x259fd4: 0x57c0  sll         $t2, $zero, 31
    ctx->pc = 0x259fd4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_259fd8:
    // 0x259fd8: 0x0  nop
    ctx->pc = 0x259fd8u;
    // NOP
label_259fdc:
    // 0x259fdc: 0x0  nop
    ctx->pc = 0x259fdcu;
    // NOP
label_259fe0:
    // 0x259fe0: 0x3719  .word       0x00003719                   # multu       $zero, $zero # 00003700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259fe0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_259fe4:
    // 0x259fe4: 0x5e50  .word       0x00005E50                   # mfhi        $t3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259fe4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_259fe8:
    // 0x259fe8: 0x0  nop
    ctx->pc = 0x259fe8u;
    // NOP
label_259fec:
    // 0x259fec: 0x0  nop
    ctx->pc = 0x259fecu;
    // NOP
label_259ff0:
    // 0x259ff0: 0x3725  .word       0x00003725                   # move        $a2, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259ff0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_259ff4:
    // 0x259ff4: 0x6e70  tge         $zero, $zero, 441
    ctx->pc = 0x259ff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259ff8:
    // 0x259ff8: 0x0  nop
    ctx->pc = 0x259ff8u;
    // NOP
label_259ffc:
    // 0x259ffc: 0x0  nop
    ctx->pc = 0x259ffcu;
    // NOP
label_25a000:
    // 0x25a000: 0x3733  tltu        $zero, $zero, 220
    ctx->pc = 0x25a000u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a004:
    // 0x25a004: 0x5de0  .word       0x00005DE0                   # add         $t3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25a008:
    // 0x25a008: 0x0  nop
    ctx->pc = 0x25a008u;
    // NOP
label_25a00c:
    // 0x25a00c: 0x0  nop
    ctx->pc = 0x25a00cu;
    // NOP
label_25a010:
    // 0x25a010: 0x373f  dsra32      $a2, $zero, 28
    ctx->pc = 0x25a010u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> (32 + 28));
label_25a014:
    // 0x25a014: 0x8a00  sll         $s1, $zero, 8
    ctx->pc = 0x25a014u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25a018:
    // 0x25a018: 0x0  nop
    ctx->pc = 0x25a018u;
    // NOP
label_25a01c:
    // 0x25a01c: 0x0  nop
    ctx->pc = 0x25a01cu;
    // NOP
label_25a020:
    // 0x25a020: 0x3751  .word       0x00003751                   # mthi        $zero # 00003740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a020u;
    ctx->hi = GPR_U64(ctx, 0);
label_25a024:
    // 0x25a024: 0x69f0  tge         $zero, $zero, 423
    ctx->pc = 0x25a024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a028:
    // 0x25a028: 0x0  nop
    ctx->pc = 0x25a028u;
    // NOP
label_25a02c:
    // 0x25a02c: 0x0  nop
    ctx->pc = 0x25a02cu;
    // NOP
label_25a030:
    // 0x25a030: 0x375f  .word       0x0000375F                   # ddivu       $a2, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a030u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25A030 raw=0x0000375F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a034:
    // 0x25a034: 0x5cc0  sll         $t3, $zero, 19
    ctx->pc = 0x25a034u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25a038:
    // 0x25a038: 0x0  nop
    ctx->pc = 0x25a038u;
    // NOP
label_25a03c:
    // 0x25a03c: 0x0  nop
    ctx->pc = 0x25a03cu;
    // NOP
label_25a040:
    // 0x25a040: 0x376b  .word       0x0000376B                   # sltu        $a2, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a040u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25a044:
    // 0x25a044: 0x9370  tge         $zero, $zero, 589
    ctx->pc = 0x25a044u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a048:
    // 0x25a048: 0x0  nop
    ctx->pc = 0x25a048u;
    // NOP
label_25a04c:
    // 0x25a04c: 0x0  nop
    ctx->pc = 0x25a04cu;
    // NOP
label_25a050:
    // 0x25a050: 0x377e  dsrl32      $a2, $zero, 29
    ctx->pc = 0x25a050u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> (32 + 29));
label_25a054:
    // 0x25a054: 0x5e20  .word       0x00005E20                   # add         $t3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a054u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25a058:
    // 0x25a058: 0x0  nop
    ctx->pc = 0x25a058u;
    // NOP
label_25a05c:
    // 0x25a05c: 0x0  nop
    ctx->pc = 0x25a05cu;
    // NOP
label_25a060:
    // 0x25a060: 0x378a  .word       0x0000378A                   # movz        $a2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a060u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_25a064:
    // 0x25a064: 0x6b50  .word       0x00006B50                   # mfhi        $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a064u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25a068:
    // 0x25a068: 0x0  nop
    ctx->pc = 0x25a068u;
    // NOP
label_25a06c:
    // 0x25a06c: 0x0  nop
    ctx->pc = 0x25a06cu;
    // NOP
label_25a070:
    // 0x25a070: 0x3798  .word       0x00003798                   # mult        $a2, $zero, $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25a070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_25a074:
    // 0x25a074: 0x8950  .word       0x00008950                   # mfhi        $s1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a074u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25a078:
    // 0x25a078: 0x0  nop
    ctx->pc = 0x25a078u;
    // NOP
label_25a07c:
    // 0x25a07c: 0x0  nop
    ctx->pc = 0x25a07cu;
    // NOP
label_25a080:
    // 0x25a080: 0x37aa  .word       0x000037AA                   # slt         $a2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a080u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25a084:
    // 0x25a084: 0x8120  .word       0x00008120                   # add         $s0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a084u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25a088:
    // 0x25a088: 0x0  nop
    ctx->pc = 0x25a088u;
    // NOP
label_25a08c:
    // 0x25a08c: 0x0  nop
    ctx->pc = 0x25a08cu;
    // NOP
label_25a090:
    // 0x25a090: 0x37bb  dsra        $a2, $zero, 30
    ctx->pc = 0x25a090u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 30);
label_25a094:
    // 0x25a094: 0x9350  .word       0x00009350                   # mfhi        $s2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a094u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25a098:
    // 0x25a098: 0x0  nop
    ctx->pc = 0x25a098u;
    // NOP
label_25a09c:
    // 0x25a09c: 0x0  nop
    ctx->pc = 0x25a09cu;
    // NOP
label_25a0a0:
    // 0x25a0a0: 0x37ce  .word       0x000037CE                   # INVALID     $zero, $zero, 0x37CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a0a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25A0A0 raw=0x000037CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a0a4:
    // 0x25a0a4: 0x8390  .word       0x00008390                   # mfhi        $s0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a0a4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25a0a8:
    // 0x25a0a8: 0x0  nop
    ctx->pc = 0x25a0a8u;
    // NOP
label_25a0ac:
    // 0x25a0ac: 0x0  nop
    ctx->pc = 0x25a0acu;
    // NOP
label_25a0b0:
    // 0x25a0b0: 0x37df  .word       0x000037DF                   # ddivu       $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a0b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25A0B0 raw=0x000037DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a0b4:
    // 0x25a0b4: 0x6ae0  .word       0x00006AE0                   # add         $t5, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a0b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25a0b8:
    // 0x25a0b8: 0x0  nop
    ctx->pc = 0x25a0b8u;
    // NOP
label_25a0bc:
    // 0x25a0bc: 0x0  nop
    ctx->pc = 0x25a0bcu;
    // NOP
label_25a0c0:
    // 0x25a0c0: 0x37ed  .word       0x000037ED                   # daddu       $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a0c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a0c4:
    // 0x25a0c4: 0x7ac0  sll         $t7, $zero, 11
    ctx->pc = 0x25a0c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25a0c8:
    // 0x25a0c8: 0x0  nop
    ctx->pc = 0x25a0c8u;
    // NOP
label_25a0cc:
    // 0x25a0cc: 0x0  nop
    ctx->pc = 0x25a0ccu;
    // NOP
label_25a0d0:
    // 0x25a0d0: 0x37fd  .word       0x000037FD                   # INVALID     $zero, $zero, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a0d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25A0D0 raw=0x000037FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a0d4:
    // 0x25a0d4: 0x4f20  .word       0x00004F20                   # add         $t1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a0d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25a0d8:
    // 0x25a0d8: 0x0  nop
    ctx->pc = 0x25a0d8u;
    // NOP
label_25a0dc:
    // 0x25a0dc: 0x0  nop
    ctx->pc = 0x25a0dcu;
    // NOP
label_25a0e0:
    // 0x25a0e0: 0x3807  srav        $a3, $zero, $zero
    ctx->pc = 0x25a0e0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25a0e4:
    // 0x25a0e4: 0x7aa0  .word       0x00007AA0                   # add         $t7, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a0e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25a0e8:
    // 0x25a0e8: 0x0  nop
    ctx->pc = 0x25a0e8u;
    // NOP
label_25a0ec:
    // 0x25a0ec: 0x0  nop
    ctx->pc = 0x25a0ecu;
    // NOP
label_25a0f0:
    // 0x25a0f0: 0x3817  dsrav       $a3, $zero, $zero
    ctx->pc = 0x25a0f0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25a0f4:
    // 0x25a0f4: 0x4d00  sll         $t1, $zero, 20
    ctx->pc = 0x25a0f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_25a0f8:
    // 0x25a0f8: 0x0  nop
    ctx->pc = 0x25a0f8u;
    // NOP
label_25a0fc:
    // 0x25a0fc: 0x0  nop
    ctx->pc = 0x25a0fcu;
    // NOP
label_25a100:
    // 0x25a100: 0x3821  addu        $a3, $zero, $zero
    ctx->pc = 0x25a100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25a104:
    // 0x25a104: 0x7090  .word       0x00007090                   # mfhi        $t6 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a104u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25a108:
    // 0x25a108: 0x0  nop
    ctx->pc = 0x25a108u;
    // NOP
label_25a10c:
    // 0x25a10c: 0x0  nop
    ctx->pc = 0x25a10cu;
    // NOP
label_25a110:
    // 0x25a110: 0x3830  tge         $zero, $zero, 224
    ctx->pc = 0x25a110u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a114:
    // 0x25a114: 0x7de0  .word       0x00007DE0                   # add         $t7, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a114u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25a118:
    // 0x25a118: 0x0  nop
    ctx->pc = 0x25a118u;
    // NOP
label_25a11c:
    // 0x25a11c: 0x0  nop
    ctx->pc = 0x25a11cu;
    // NOP
label_25a120:
    // 0x25a120: 0x3840  sll         $a3, $zero, 1
    ctx->pc = 0x25a120u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_25a124:
    // 0x25a124: 0x8b90  .word       0x00008B90                   # mfhi        $s1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a124u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25a128:
    // 0x25a128: 0x0  nop
    ctx->pc = 0x25a128u;
    // NOP
label_25a12c:
    // 0x25a12c: 0x0  nop
    ctx->pc = 0x25a12cu;
    // NOP
label_25a130:
    // 0x25a130: 0x3852  .word       0x00003852                   # mflo        $a3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a130u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_25a134:
    // 0x25a134: 0x8080  sll         $s0, $zero, 2
    ctx->pc = 0x25a134u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_25a138:
    // 0x25a138: 0x0  nop
    ctx->pc = 0x25a138u;
    // NOP
label_25a13c:
    // 0x25a13c: 0x0  nop
    ctx->pc = 0x25a13cu;
    // NOP
label_25a140:
    // 0x25a140: 0x3863  .word       0x00003863                   # negu        $a3, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a140u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25a144:
    // 0x25a144: 0x87a0  .word       0x000087A0                   # add         $s0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a144u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25a148:
    // 0x25a148: 0x0  nop
    ctx->pc = 0x25a148u;
    // NOP
label_25a14c:
    // 0x25a14c: 0x0  nop
    ctx->pc = 0x25a14cu;
    // NOP
label_25a150:
    // 0x25a150: 0x3874  teq         $zero, $zero, 225
    ctx->pc = 0x25a150u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a154:
    // 0x25a154: 0x5520  .word       0x00005520                   # add         $t2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_25a158:
    // 0x25a158: 0x0  nop
    ctx->pc = 0x25a158u;
    // NOP
label_25a15c:
    // 0x25a15c: 0x0  nop
    ctx->pc = 0x25a15cu;
    // NOP
label_25a160:
    // 0x25a160: 0x387f  dsra32      $a3, $zero, 1
    ctx->pc = 0x25a160u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 1));
label_25a164:
    // 0x25a164: 0x5230  tge         $zero, $zero, 328
    ctx->pc = 0x25a164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a168:
    // 0x25a168: 0x0  nop
    ctx->pc = 0x25a168u;
    // NOP
label_25a16c:
    // 0x25a16c: 0x0  nop
    ctx->pc = 0x25a16cu;
    // NOP
label_25a170:
    // 0x25a170: 0x388a  .word       0x0000388A                   # movz        $a3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a170u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_25a174:
    // 0x25a174: 0x8f90  .word       0x00008F90                   # mfhi        $s1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a174u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25a178:
    // 0x25a178: 0x0  nop
    ctx->pc = 0x25a178u;
    // NOP
label_25a17c:
    // 0x25a17c: 0x0  nop
    ctx->pc = 0x25a17cu;
    // NOP
label_25a180:
    // 0x25a180: 0x389c  .word       0x0000389C                   # dmult       $zero, $zero # 00003880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a180u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25A180 raw=0x0000389C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a184:
    // 0x25a184: 0x7cd0  .word       0x00007CD0                   # mfhi        $t7 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a184u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25a188:
    // 0x25a188: 0x0  nop
    ctx->pc = 0x25a188u;
    // NOP
label_25a18c:
    // 0x25a18c: 0x0  nop
    ctx->pc = 0x25a18cu;
    // NOP
label_25a190:
    // 0x25a190: 0x38ac  .word       0x000038AC                   # dadd        $a3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a190u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_25a194:
    // 0x25a194: 0x9ea0  .word       0x00009EA0                   # add         $s3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a194u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_25a198:
    // 0x25a198: 0x0  nop
    ctx->pc = 0x25a198u;
    // NOP
label_25a19c:
    // 0x25a19c: 0x0  nop
    ctx->pc = 0x25a19cu;
    // NOP
label_25a1a0:
    // 0x25a1a0: 0x38c0  sll         $a3, $zero, 3
    ctx->pc = 0x25a1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25a1a4:
    // 0x25a1a4: 0x7b70  tge         $zero, $zero, 493
    ctx->pc = 0x25a1a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a1a8:
    // 0x25a1a8: 0x0  nop
    ctx->pc = 0x25a1a8u;
    // NOP
label_25a1ac:
    // 0x25a1ac: 0x0  nop
    ctx->pc = 0x25a1acu;
    // NOP
label_25a1b0:
    // 0x25a1b0: 0x38d0  .word       0x000038D0                   # mfhi        $a3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a1b0u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25a1b4:
    // 0x25a1b4: 0x91f0  tge         $zero, $zero, 583
    ctx->pc = 0x25a1b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a1b8:
    // 0x25a1b8: 0x0  nop
    ctx->pc = 0x25a1b8u;
    // NOP
label_25a1bc:
    // 0x25a1bc: 0x0  nop
    ctx->pc = 0x25a1bcu;
    // NOP
label_25a1c0:
    // 0x25a1c0: 0x38e3  .word       0x000038E3                   # negu        $a3, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25a1c4:
    // 0x25a1c4: 0x6f40  sll         $t5, $zero, 29
    ctx->pc = 0x25a1c4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_25a1c8:
    // 0x25a1c8: 0x0  nop
    ctx->pc = 0x25a1c8u;
    // NOP
label_25a1cc:
    // 0x25a1cc: 0x0  nop
    ctx->pc = 0x25a1ccu;
    // NOP
label_25a1d0:
    // 0x25a1d0: 0x38f1  tgeu        $zero, $zero, 227
    ctx->pc = 0x25a1d0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a1d4:
    // 0x25a1d4: 0x8790  .word       0x00008790                   # mfhi        $s0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a1d4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25a1d8:
    // 0x25a1d8: 0x0  nop
    ctx->pc = 0x25a1d8u;
    // NOP
label_25a1dc:
    // 0x25a1dc: 0x0  nop
    ctx->pc = 0x25a1dcu;
    // NOP
label_25a1e0:
    // 0x25a1e0: 0x3902  srl         $a3, $zero, 4
    ctx->pc = 0x25a1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 0), 4));
label_25a1e4:
    // 0x25a1e4: 0x6280  sll         $t4, $zero, 10
    ctx->pc = 0x25a1e4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_25a1e8:
    // 0x25a1e8: 0x0  nop
    ctx->pc = 0x25a1e8u;
    // NOP
label_25a1ec:
    // 0x25a1ec: 0x0  nop
    ctx->pc = 0x25a1ecu;
    // NOP
label_25a1f0:
    // 0x25a1f0: 0x390f  .word       0x0000390F                   # sync # 00003800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a1f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25a1f4:
    // 0x25a1f4: 0x68a0  .word       0x000068A0                   # add         $t5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a1f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25a1f8:
    // 0x25a1f8: 0x0  nop
    ctx->pc = 0x25a1f8u;
    // NOP
label_25a1fc:
    // 0x25a1fc: 0x0  nop
    ctx->pc = 0x25a1fcu;
    // NOP
label_25a200:
    // 0x25a200: 0x391d  .word       0x0000391D                   # dmultu      $zero, $zero # 00003900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a200u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25A200 raw=0x0000391D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a204:
    // 0x25a204: 0x80c0  sll         $s0, $zero, 3
    ctx->pc = 0x25a204u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25a208:
    // 0x25a208: 0x0  nop
    ctx->pc = 0x25a208u;
    // NOP
label_25a20c:
    // 0x25a20c: 0x0  nop
    ctx->pc = 0x25a20cu;
    // NOP
label_25a210:
    // 0x25a210: 0x392e  .word       0x0000392E                   # dsub        $a3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a210u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_25a214:
    // 0x25a214: 0x87d0  .word       0x000087D0                   # mfhi        $s0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a214u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25a218:
    // 0x25a218: 0x0  nop
    ctx->pc = 0x25a218u;
    // NOP
label_25a21c:
    // 0x25a21c: 0x0  nop
    ctx->pc = 0x25a21cu;
    // NOP
label_25a220:
    // 0x25a220: 0x393f  dsra32      $a3, $zero, 4
    ctx->pc = 0x25a220u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 4));
label_25a224:
    // 0x25a224: 0x9800  sll         $s3, $zero, 0
    ctx->pc = 0x25a224u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25a228:
    // 0x25a228: 0x0  nop
    ctx->pc = 0x25a228u;
    // NOP
label_25a22c:
    // 0x25a22c: 0x0  nop
    ctx->pc = 0x25a22cu;
    // NOP
label_25a230:
    // 0x25a230: 0x3952  .word       0x00003952                   # mflo        $a3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a230u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_25a234:
    // 0x25a234: 0x5470  tge         $zero, $zero, 337
    ctx->pc = 0x25a234u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a238:
    // 0x25a238: 0x0  nop
    ctx->pc = 0x25a238u;
    // NOP
label_25a23c:
    // 0x25a23c: 0x0  nop
    ctx->pc = 0x25a23cu;
    // NOP
label_25a240:
    // 0x25a240: 0x395d  .word       0x0000395D                   # dmultu      $zero, $zero # 00003940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a240u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25A240 raw=0x0000395D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a244:
    // 0x25a244: 0x7120  .word       0x00007120                   # add         $t6, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a244u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25a248:
    // 0x25a248: 0x0  nop
    ctx->pc = 0x25a248u;
    // NOP
label_25a24c:
    // 0x25a24c: 0x0  nop
    ctx->pc = 0x25a24cu;
    // NOP
label_25a250:
    // 0x25a250: 0x396c  .word       0x0000396C                   # dadd        $a3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a250u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_25a254:
    // 0x25a254: 0x6500  sll         $t4, $zero, 20
    ctx->pc = 0x25a254u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_25a258:
    // 0x25a258: 0x0  nop
    ctx->pc = 0x25a258u;
    // NOP
label_25a25c:
    // 0x25a25c: 0x0  nop
    ctx->pc = 0x25a25cu;
    // NOP
label_25a260:
    // 0x25a260: 0x3979  .word       0x00003979                   # INVALID     $zero, $zero, 0x3979 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a260u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25A260 raw=0x00003979"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a264:
    // 0x25a264: 0x6f90  .word       0x00006F90                   # mfhi        $t5 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a264u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25a268:
    // 0x25a268: 0x0  nop
    ctx->pc = 0x25a268u;
    // NOP
label_25a26c:
    // 0x25a26c: 0x0  nop
    ctx->pc = 0x25a26cu;
    // NOP
label_25a270:
    // 0x25a270: 0x3987  .word       0x00003987                   # srav        $a3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a270u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25a274:
    // 0x25a274: 0x6990  .word       0x00006990                   # mfhi        $t5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a274u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25a278:
    // 0x25a278: 0x0  nop
    ctx->pc = 0x25a278u;
    // NOP
label_25a27c:
    // 0x25a27c: 0x0  nop
    ctx->pc = 0x25a27cu;
    // NOP
label_25a280:
    // 0x25a280: 0x3995  .word       0x00003995                   # INVALID     $zero, $zero, 0x3995 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a280u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25A280 raw=0x00003995"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a284:
    // 0x25a284: 0x8990  .word       0x00008990                   # mfhi        $s1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a284u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25a288:
    // 0x25a288: 0x0  nop
    ctx->pc = 0x25a288u;
    // NOP
label_25a28c:
    // 0x25a28c: 0x0  nop
    ctx->pc = 0x25a28cu;
    // NOP
label_25a290:
    // 0x25a290: 0x39a7  .word       0x000039A7                   # not         $a3, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a290u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25a294:
    // 0x25a294: 0x8190  .word       0x00008190                   # mfhi        $s0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a294u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25a298:
    // 0x25a298: 0x0  nop
    ctx->pc = 0x25a298u;
    // NOP
label_25a29c:
    // 0x25a29c: 0x0  nop
    ctx->pc = 0x25a29cu;
    // NOP
label_25a2a0:
    // 0x25a2a0: 0x39b8  dsll        $a3, $zero, 6
    ctx->pc = 0x25a2a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << 6);
label_25a2a4:
    // 0x25a2a4: 0x8d10  .word       0x00008D10                   # mfhi        $s1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a2a4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25a2a8:
    // 0x25a2a8: 0x0  nop
    ctx->pc = 0x25a2a8u;
    // NOP
label_25a2ac:
    // 0x25a2ac: 0x0  nop
    ctx->pc = 0x25a2acu;
    // NOP
label_25a2b0:
    // 0x25a2b0: 0x39ca  .word       0x000039CA                   # movz        $a3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a2b0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_25a2b4:
    // 0x25a2b4: 0x6300  sll         $t4, $zero, 12
    ctx->pc = 0x25a2b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25a2b8:
    // 0x25a2b8: 0x0  nop
    ctx->pc = 0x25a2b8u;
    // NOP
label_25a2bc:
    // 0x25a2bc: 0x0  nop
    ctx->pc = 0x25a2bcu;
    // NOP
label_25a2c0:
    // 0x25a2c0: 0x39d7  .word       0x000039D7                   # dsrav       $a3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a2c0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25a2c4:
    // 0x25a2c4: 0x7c20  .word       0x00007C20                   # add         $t7, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a2c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25a2c8:
    // 0x25a2c8: 0x0  nop
    ctx->pc = 0x25a2c8u;
    // NOP
label_25a2cc:
    // 0x25a2cc: 0x0  nop
    ctx->pc = 0x25a2ccu;
    // NOP
label_25a2d0:
    // 0x25a2d0: 0x39e7  .word       0x000039E7                   # not         $a3, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a2d0u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25a2d4:
    // 0x25a2d4: 0xa3a0  .word       0x0000A3A0                   # add         $s4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a2d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_25a2d8:
    // 0x25a2d8: 0x0  nop
    ctx->pc = 0x25a2d8u;
    // NOP
label_25a2dc:
    // 0x25a2dc: 0x0  nop
    ctx->pc = 0x25a2dcu;
    // NOP
label_25a2e0:
    // 0x25a2e0: 0x39fc  dsll32      $a3, $zero, 7
    ctx->pc = 0x25a2e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << (32 + 7));
label_25a2e4:
    // 0x25a2e4: 0x66c0  sll         $t4, $zero, 27
    ctx->pc = 0x25a2e4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25a2e8:
    // 0x25a2e8: 0x0  nop
    ctx->pc = 0x25a2e8u;
    // NOP
label_25a2ec:
    // 0x25a2ec: 0x0  nop
    ctx->pc = 0x25a2ecu;
    // NOP
label_25a2f0:
    // 0x25a2f0: 0x3a09  .word       0x00003A09                   # jalr        $a3, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
label_25a2f4:
    if (ctx->pc == 0x25A2F4u) {
        ctx->pc = 0x25A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2F0u;
        // 0x25a2f4: 0x85c0  sll         $s0, $zero, 23 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A2F8u;
        goto label_25a2f8;
    }
    ctx->pc = 0x25A2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 7, 0x25A2F8u);
        ctx->pc = 0x25A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2F0u;
        // 0x25a2f4: 0x85c0  sll         $s0, $zero, 23 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A2F0u, 0x25A2F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A2F8u;
label_25a2f8:
    // 0x25a2f8: 0x0  nop
    ctx->pc = 0x25a2f8u;
    // NOP
label_25a2fc:
    // 0x25a2fc: 0x0  nop
    ctx->pc = 0x25a2fcu;
    // NOP
label_25a300:
    // 0x25a300: 0x3a1a  .word       0x00003A1A                   # div         $a3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a300u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25a304:
    // 0x25a304: 0x76e0  .word       0x000076E0                   # add         $t6, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a304u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25a308:
    // 0x25a308: 0x0  nop
    ctx->pc = 0x25a308u;
    // NOP
label_25a30c:
    // 0x25a30c: 0x0  nop
    ctx->pc = 0x25a30cu;
    // NOP
label_25a310:
    // 0x25a310: 0x3a29  .word       0x00003A29                   # mtsa        $zero # 00003A00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25a310u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25a314:
    // 0x25a314: 0x7fc0  sll         $t7, $zero, 31
    ctx->pc = 0x25a314u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25a318:
    // 0x25a318: 0x0  nop
    ctx->pc = 0x25a318u;
    // NOP
label_25a31c:
    // 0x25a31c: 0x0  nop
    ctx->pc = 0x25a31cu;
    // NOP
label_25a320:
    // 0x25a320: 0x3a39  .word       0x00003A39                   # INVALID     $zero, $zero, 0x3A39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a320u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25A320 raw=0x00003A39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a324:
    // 0x25a324: 0x7cc0  sll         $t7, $zero, 19
    ctx->pc = 0x25a324u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
    ctx->pc = 0x25a328u;
    return;
}
