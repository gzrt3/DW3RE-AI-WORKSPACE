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


void FUN_0019b5e8_part12(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a0bd8u: goto label_1a0bd8;
        case 0x1a0bdcu: goto label_1a0bdc;
        case 0x1a0be0u: goto label_1a0be0;
        case 0x1a0be4u: goto label_1a0be4;
        case 0x1a0be8u: goto label_1a0be8;
        case 0x1a0becu: goto label_1a0bec;
        case 0x1a0bf0u: goto label_1a0bf0;
        case 0x1a0bf4u: goto label_1a0bf4;
        case 0x1a0bf8u: goto label_1a0bf8;
        case 0x1a0bfcu: goto label_1a0bfc;
        case 0x1a0c00u: goto label_1a0c00;
        case 0x1a0c04u: goto label_1a0c04;
        case 0x1a0c08u: goto label_1a0c08;
        case 0x1a0c0cu: goto label_1a0c0c;
        case 0x1a0c10u: goto label_1a0c10;
        case 0x1a0c14u: goto label_1a0c14;
        case 0x1a0c18u: goto label_1a0c18;
        case 0x1a0c1cu: goto label_1a0c1c;
        case 0x1a0c20u: goto label_1a0c20;
        case 0x1a0c24u: goto label_1a0c24;
        case 0x1a0c28u: goto label_1a0c28;
        case 0x1a0c2cu: goto label_1a0c2c;
        case 0x1a0c30u: goto label_1a0c30;
        case 0x1a0c34u: goto label_1a0c34;
        case 0x1a0c38u: goto label_1a0c38;
        case 0x1a0c3cu: goto label_1a0c3c;
        case 0x1a0c40u: goto label_1a0c40;
        case 0x1a0c44u: goto label_1a0c44;
        case 0x1a0c48u: goto label_1a0c48;
        case 0x1a0c4cu: goto label_1a0c4c;
        case 0x1a0c50u: goto label_1a0c50;
        case 0x1a0c54u: goto label_1a0c54;
        case 0x1a0c58u: goto label_1a0c58;
        case 0x1a0c5cu: goto label_1a0c5c;
        case 0x1a0c60u: goto label_1a0c60;
        case 0x1a0c64u: goto label_1a0c64;
        case 0x1a0c68u: goto label_1a0c68;
        case 0x1a0c6cu: goto label_1a0c6c;
        case 0x1a0c70u: goto label_1a0c70;
        case 0x1a0c74u: goto label_1a0c74;
        case 0x1a0c78u: goto label_1a0c78;
        case 0x1a0c7cu: goto label_1a0c7c;
        case 0x1a0c80u: goto label_1a0c80;
        case 0x1a0c84u: goto label_1a0c84;
        case 0x1a0c88u: goto label_1a0c88;
        case 0x1a0c8cu: goto label_1a0c8c;
        case 0x1a0c90u: goto label_1a0c90;
        case 0x1a0c94u: goto label_1a0c94;
        case 0x1a0c98u: goto label_1a0c98;
        case 0x1a0c9cu: goto label_1a0c9c;
        case 0x1a0ca0u: goto label_1a0ca0;
        case 0x1a0ca4u: goto label_1a0ca4;
        case 0x1a0ca8u: goto label_1a0ca8;
        case 0x1a0cacu: goto label_1a0cac;
        case 0x1a0cb0u: goto label_1a0cb0;
        case 0x1a0cb4u: goto label_1a0cb4;
        case 0x1a0cb8u: goto label_1a0cb8;
        case 0x1a0cbcu: goto label_1a0cbc;
        case 0x1a0cc0u: goto label_1a0cc0;
        case 0x1a0cc4u: goto label_1a0cc4;
        case 0x1a0cc8u: goto label_1a0cc8;
        case 0x1a0cccu: goto label_1a0ccc;
        case 0x1a0cd0u: goto label_1a0cd0;
        case 0x1a0cd4u: goto label_1a0cd4;
        case 0x1a0cd8u: goto label_1a0cd8;
        case 0x1a0cdcu: goto label_1a0cdc;
        case 0x1a0ce0u: goto label_1a0ce0;
        case 0x1a0ce4u: goto label_1a0ce4;
        case 0x1a0ce8u: goto label_1a0ce8;
        case 0x1a0cecu: goto label_1a0cec;
        case 0x1a0cf0u: goto label_1a0cf0;
        case 0x1a0cf4u: goto label_1a0cf4;
        case 0x1a0cf8u: goto label_1a0cf8;
        case 0x1a0cfcu: goto label_1a0cfc;
        case 0x1a0d00u: goto label_1a0d00;
        case 0x1a0d04u: goto label_1a0d04;
        case 0x1a0d08u: goto label_1a0d08;
        case 0x1a0d0cu: goto label_1a0d0c;
        case 0x1a0d10u: goto label_1a0d10;
        case 0x1a0d14u: goto label_1a0d14;
        case 0x1a0d18u: goto label_1a0d18;
        case 0x1a0d1cu: goto label_1a0d1c;
        case 0x1a0d20u: goto label_1a0d20;
        case 0x1a0d24u: goto label_1a0d24;
        case 0x1a0d28u: goto label_1a0d28;
        case 0x1a0d2cu: goto label_1a0d2c;
        case 0x1a0d30u: goto label_1a0d30;
        case 0x1a0d34u: goto label_1a0d34;
        case 0x1a0d38u: goto label_1a0d38;
        case 0x1a0d3cu: goto label_1a0d3c;
        case 0x1a0d40u: goto label_1a0d40;
        case 0x1a0d44u: goto label_1a0d44;
        case 0x1a0d48u: goto label_1a0d48;
        case 0x1a0d4cu: goto label_1a0d4c;
        case 0x1a0d50u: goto label_1a0d50;
        case 0x1a0d54u: goto label_1a0d54;
        case 0x1a0d58u: goto label_1a0d58;
        case 0x1a0d5cu: goto label_1a0d5c;
        case 0x1a0d60u: goto label_1a0d60;
        case 0x1a0d64u: goto label_1a0d64;
        case 0x1a0d68u: goto label_1a0d68;
        case 0x1a0d6cu: goto label_1a0d6c;
        case 0x1a0d70u: goto label_1a0d70;
        case 0x1a0d74u: goto label_1a0d74;
        case 0x1a0d78u: goto label_1a0d78;
        case 0x1a0d7cu: goto label_1a0d7c;
        case 0x1a0d80u: goto label_1a0d80;
        case 0x1a0d84u: goto label_1a0d84;
        case 0x1a0d88u: goto label_1a0d88;
        case 0x1a0d8cu: goto label_1a0d8c;
        case 0x1a0d90u: goto label_1a0d90;
        case 0x1a0d94u: goto label_1a0d94;
        case 0x1a0d98u: goto label_1a0d98;
        case 0x1a0d9cu: goto label_1a0d9c;
        case 0x1a0da0u: goto label_1a0da0;
        case 0x1a0da4u: goto label_1a0da4;
        case 0x1a0da8u: goto label_1a0da8;
        case 0x1a0dacu: goto label_1a0dac;
        case 0x1a0db0u: goto label_1a0db0;
        case 0x1a0db4u: goto label_1a0db4;
        case 0x1a0db8u: goto label_1a0db8;
        case 0x1a0dbcu: goto label_1a0dbc;
        case 0x1a0dc0u: goto label_1a0dc0;
        case 0x1a0dc4u: goto label_1a0dc4;
        case 0x1a0dc8u: goto label_1a0dc8;
        case 0x1a0dccu: goto label_1a0dcc;
        case 0x1a0dd0u: goto label_1a0dd0;
        case 0x1a0dd4u: goto label_1a0dd4;
        case 0x1a0dd8u: goto label_1a0dd8;
        case 0x1a0ddcu: goto label_1a0ddc;
        case 0x1a0de0u: goto label_1a0de0;
        case 0x1a0de4u: goto label_1a0de4;
        case 0x1a0de8u: goto label_1a0de8;
        case 0x1a0decu: goto label_1a0dec;
        case 0x1a0df0u: goto label_1a0df0;
        case 0x1a0df4u: goto label_1a0df4;
        case 0x1a0df8u: goto label_1a0df8;
        case 0x1a0dfcu: goto label_1a0dfc;
        case 0x1a0e00u: goto label_1a0e00;
        case 0x1a0e04u: goto label_1a0e04;
        case 0x1a0e08u: goto label_1a0e08;
        case 0x1a0e0cu: goto label_1a0e0c;
        case 0x1a0e10u: goto label_1a0e10;
        case 0x1a0e14u: goto label_1a0e14;
        case 0x1a0e18u: goto label_1a0e18;
        case 0x1a0e1cu: goto label_1a0e1c;
        case 0x1a0e20u: goto label_1a0e20;
        case 0x1a0e24u: goto label_1a0e24;
        case 0x1a0e28u: goto label_1a0e28;
        case 0x1a0e2cu: goto label_1a0e2c;
        case 0x1a0e30u: goto label_1a0e30;
        case 0x1a0e34u: goto label_1a0e34;
        case 0x1a0e38u: goto label_1a0e38;
        case 0x1a0e3cu: goto label_1a0e3c;
        case 0x1a0e40u: goto label_1a0e40;
        case 0x1a0e44u: goto label_1a0e44;
        case 0x1a0e48u: goto label_1a0e48;
        case 0x1a0e4cu: goto label_1a0e4c;
        case 0x1a0e50u: goto label_1a0e50;
        case 0x1a0e54u: goto label_1a0e54;
        case 0x1a0e58u: goto label_1a0e58;
        case 0x1a0e5cu: goto label_1a0e5c;
        case 0x1a0e60u: goto label_1a0e60;
        case 0x1a0e64u: goto label_1a0e64;
        case 0x1a0e68u: goto label_1a0e68;
        case 0x1a0e6cu: goto label_1a0e6c;
        case 0x1a0e70u: goto label_1a0e70;
        case 0x1a0e74u: goto label_1a0e74;
        case 0x1a0e78u: goto label_1a0e78;
        case 0x1a0e7cu: goto label_1a0e7c;
        case 0x1a0e80u: goto label_1a0e80;
        case 0x1a0e84u: goto label_1a0e84;
        case 0x1a0e88u: goto label_1a0e88;
        case 0x1a0e8cu: goto label_1a0e8c;
        case 0x1a0e90u: goto label_1a0e90;
        case 0x1a0e94u: goto label_1a0e94;
        case 0x1a0e98u: goto label_1a0e98;
        case 0x1a0e9cu: goto label_1a0e9c;
        case 0x1a0ea0u: goto label_1a0ea0;
        case 0x1a0ea4u: goto label_1a0ea4;
        case 0x1a0ea8u: goto label_1a0ea8;
        case 0x1a0eacu: goto label_1a0eac;
        case 0x1a0eb0u: goto label_1a0eb0;
        case 0x1a0eb4u: goto label_1a0eb4;
        case 0x1a0eb8u: goto label_1a0eb8;
        case 0x1a0ebcu: goto label_1a0ebc;
        case 0x1a0ec0u: goto label_1a0ec0;
        case 0x1a0ec4u: goto label_1a0ec4;
        case 0x1a0ec8u: goto label_1a0ec8;
        case 0x1a0eccu: goto label_1a0ecc;
        case 0x1a0ed0u: goto label_1a0ed0;
        case 0x1a0ed4u: goto label_1a0ed4;
        case 0x1a0ed8u: goto label_1a0ed8;
        case 0x1a0edcu: goto label_1a0edc;
        case 0x1a0ee0u: goto label_1a0ee0;
        case 0x1a0ee4u: goto label_1a0ee4;
        case 0x1a0ee8u: goto label_1a0ee8;
        case 0x1a0eecu: goto label_1a0eec;
        case 0x1a0ef0u: goto label_1a0ef0;
        case 0x1a0ef4u: goto label_1a0ef4;
        case 0x1a0ef8u: goto label_1a0ef8;
        case 0x1a0efcu: goto label_1a0efc;
        case 0x1a0f00u: goto label_1a0f00;
        case 0x1a0f04u: goto label_1a0f04;
        case 0x1a0f08u: goto label_1a0f08;
        case 0x1a0f0cu: goto label_1a0f0c;
        case 0x1a0f10u: goto label_1a0f10;
        case 0x1a0f14u: goto label_1a0f14;
        case 0x1a0f18u: goto label_1a0f18;
        case 0x1a0f1cu: goto label_1a0f1c;
        case 0x1a0f20u: goto label_1a0f20;
        case 0x1a0f24u: goto label_1a0f24;
        case 0x1a0f28u: goto label_1a0f28;
        case 0x1a0f2cu: goto label_1a0f2c;
        case 0x1a0f30u: goto label_1a0f30;
        case 0x1a0f34u: goto label_1a0f34;
        case 0x1a0f38u: goto label_1a0f38;
        case 0x1a0f3cu: goto label_1a0f3c;
        case 0x1a0f40u: goto label_1a0f40;
        case 0x1a0f44u: goto label_1a0f44;
        case 0x1a0f48u: goto label_1a0f48;
        case 0x1a0f4cu: goto label_1a0f4c;
        case 0x1a0f50u: goto label_1a0f50;
        case 0x1a0f54u: goto label_1a0f54;
        case 0x1a0f58u: goto label_1a0f58;
        case 0x1a0f5cu: goto label_1a0f5c;
        case 0x1a0f60u: goto label_1a0f60;
        case 0x1a0f64u: goto label_1a0f64;
        case 0x1a0f68u: goto label_1a0f68;
        case 0x1a0f6cu: goto label_1a0f6c;
        case 0x1a0f70u: goto label_1a0f70;
        case 0x1a0f74u: goto label_1a0f74;
        case 0x1a0f78u: goto label_1a0f78;
        case 0x1a0f7cu: goto label_1a0f7c;
        case 0x1a0f80u: goto label_1a0f80;
        case 0x1a0f84u: goto label_1a0f84;
        case 0x1a0f88u: goto label_1a0f88;
        case 0x1a0f8cu: goto label_1a0f8c;
        case 0x1a0f90u: goto label_1a0f90;
        case 0x1a0f94u: goto label_1a0f94;
        case 0x1a0f98u: goto label_1a0f98;
        case 0x1a0f9cu: goto label_1a0f9c;
        case 0x1a0fa0u: goto label_1a0fa0;
        case 0x1a0fa4u: goto label_1a0fa4;
        case 0x1a0fa8u: goto label_1a0fa8;
        case 0x1a0facu: goto label_1a0fac;
        case 0x1a0fb0u: goto label_1a0fb0;
        case 0x1a0fb4u: goto label_1a0fb4;
        case 0x1a0fb8u: goto label_1a0fb8;
        case 0x1a0fbcu: goto label_1a0fbc;
        case 0x1a0fc0u: goto label_1a0fc0;
        case 0x1a0fc4u: goto label_1a0fc4;
        case 0x1a0fc8u: goto label_1a0fc8;
        case 0x1a0fccu: goto label_1a0fcc;
        case 0x1a0fd0u: goto label_1a0fd0;
        case 0x1a0fd4u: goto label_1a0fd4;
        case 0x1a0fd8u: goto label_1a0fd8;
        case 0x1a0fdcu: goto label_1a0fdc;
        case 0x1a0fe0u: goto label_1a0fe0;
        case 0x1a0fe4u: goto label_1a0fe4;
        case 0x1a0fe8u: goto label_1a0fe8;
        case 0x1a0fecu: goto label_1a0fec;
        case 0x1a0ff0u: goto label_1a0ff0;
        case 0x1a0ff4u: goto label_1a0ff4;
        case 0x1a0ff8u: goto label_1a0ff8;
        case 0x1a0ffcu: goto label_1a0ffc;
        case 0x1a1000u: goto label_1a1000;
        case 0x1a1004u: goto label_1a1004;
        case 0x1a1008u: goto label_1a1008;
        case 0x1a100cu: goto label_1a100c;
        case 0x1a1010u: goto label_1a1010;
        case 0x1a1014u: goto label_1a1014;
        case 0x1a1018u: goto label_1a1018;
        case 0x1a101cu: goto label_1a101c;
        case 0x1a1020u: goto label_1a1020;
        case 0x1a1024u: goto label_1a1024;
        case 0x1a1028u: goto label_1a1028;
        case 0x1a102cu: goto label_1a102c;
        case 0x1a1030u: goto label_1a1030;
        case 0x1a1034u: goto label_1a1034;
        case 0x1a1038u: goto label_1a1038;
        case 0x1a103cu: goto label_1a103c;
        case 0x1a1040u: goto label_1a1040;
        case 0x1a1044u: goto label_1a1044;
        case 0x1a1048u: goto label_1a1048;
        case 0x1a104cu: goto label_1a104c;
        case 0x1a1050u: goto label_1a1050;
        case 0x1a1054u: goto label_1a1054;
        case 0x1a1058u: goto label_1a1058;
        case 0x1a105cu: goto label_1a105c;
        case 0x1a1060u: goto label_1a1060;
        case 0x1a1064u: goto label_1a1064;
        case 0x1a1068u: goto label_1a1068;
        case 0x1a106cu: goto label_1a106c;
        case 0x1a1070u: goto label_1a1070;
        case 0x1a1074u: goto label_1a1074;
        case 0x1a1078u: goto label_1a1078;
        case 0x1a107cu: goto label_1a107c;
        case 0x1a1080u: goto label_1a1080;
        case 0x1a1084u: goto label_1a1084;
        case 0x1a1088u: goto label_1a1088;
        case 0x1a108cu: goto label_1a108c;
        case 0x1a1090u: goto label_1a1090;
        case 0x1a1094u: goto label_1a1094;
        case 0x1a1098u: goto label_1a1098;
        case 0x1a109cu: goto label_1a109c;
        case 0x1a10a0u: goto label_1a10a0;
        case 0x1a10a4u: goto label_1a10a4;
        case 0x1a10a8u: goto label_1a10a8;
        case 0x1a10acu: goto label_1a10ac;
        case 0x1a10b0u: goto label_1a10b0;
        case 0x1a10b4u: goto label_1a10b4;
        case 0x1a10b8u: goto label_1a10b8;
        case 0x1a10bcu: goto label_1a10bc;
        case 0x1a10c0u: goto label_1a10c0;
        case 0x1a10c4u: goto label_1a10c4;
        case 0x1a10c8u: goto label_1a10c8;
        case 0x1a10ccu: goto label_1a10cc;
        case 0x1a10d0u: goto label_1a10d0;
        case 0x1a10d4u: goto label_1a10d4;
        case 0x1a10d8u: goto label_1a10d8;
        case 0x1a10dcu: goto label_1a10dc;
        case 0x1a10e0u: goto label_1a10e0;
        case 0x1a10e4u: goto label_1a10e4;
        case 0x1a10e8u: goto label_1a10e8;
        case 0x1a10ecu: goto label_1a10ec;
        case 0x1a10f0u: goto label_1a10f0;
        case 0x1a10f4u: goto label_1a10f4;
        case 0x1a10f8u: goto label_1a10f8;
        case 0x1a10fcu: goto label_1a10fc;
        case 0x1a1100u: goto label_1a1100;
        case 0x1a1104u: goto label_1a1104;
        case 0x1a1108u: goto label_1a1108;
        case 0x1a110cu: goto label_1a110c;
        case 0x1a1110u: goto label_1a1110;
        case 0x1a1114u: goto label_1a1114;
        case 0x1a1118u: goto label_1a1118;
        case 0x1a111cu: goto label_1a111c;
        case 0x1a1120u: goto label_1a1120;
        case 0x1a1124u: goto label_1a1124;
        case 0x1a1128u: goto label_1a1128;
        case 0x1a112cu: goto label_1a112c;
        case 0x1a1130u: goto label_1a1130;
        case 0x1a1134u: goto label_1a1134;
        case 0x1a1138u: goto label_1a1138;
        case 0x1a113cu: goto label_1a113c;
        case 0x1a1140u: goto label_1a1140;
        case 0x1a1144u: goto label_1a1144;
        case 0x1a1148u: goto label_1a1148;
        case 0x1a114cu: goto label_1a114c;
        case 0x1a1150u: goto label_1a1150;
        case 0x1a1154u: goto label_1a1154;
        case 0x1a1158u: goto label_1a1158;
        case 0x1a115cu: goto label_1a115c;
        case 0x1a1160u: goto label_1a1160;
        case 0x1a1164u: goto label_1a1164;
        case 0x1a1168u: goto label_1a1168;
        case 0x1a116cu: goto label_1a116c;
        case 0x1a1170u: goto label_1a1170;
        case 0x1a1174u: goto label_1a1174;
        case 0x1a1178u: goto label_1a1178;
        case 0x1a117cu: goto label_1a117c;
        case 0x1a1180u: goto label_1a1180;
        case 0x1a1184u: goto label_1a1184;
        case 0x1a1188u: goto label_1a1188;
        case 0x1a118cu: goto label_1a118c;
        case 0x1a1190u: goto label_1a1190;
        case 0x1a1194u: goto label_1a1194;
        case 0x1a1198u: goto label_1a1198;
        case 0x1a119cu: goto label_1a119c;
        case 0x1a11a0u: goto label_1a11a0;
        case 0x1a11a4u: goto label_1a11a4;
        case 0x1a11a8u: goto label_1a11a8;
        case 0x1a11acu: goto label_1a11ac;
        case 0x1a11b0u: goto label_1a11b0;
        case 0x1a11b4u: goto label_1a11b4;
        case 0x1a11b8u: goto label_1a11b8;
        case 0x1a11bcu: goto label_1a11bc;
        case 0x1a11c0u: goto label_1a11c0;
        case 0x1a11c4u: goto label_1a11c4;
        case 0x1a11c8u: goto label_1a11c8;
        case 0x1a11ccu: goto label_1a11cc;
        case 0x1a11d0u: goto label_1a11d0;
        case 0x1a11d4u: goto label_1a11d4;
        case 0x1a11d8u: goto label_1a11d8;
        case 0x1a11dcu: goto label_1a11dc;
        case 0x1a11e0u: goto label_1a11e0;
        case 0x1a11e4u: goto label_1a11e4;
        case 0x1a11e8u: goto label_1a11e8;
        case 0x1a11ecu: goto label_1a11ec;
        case 0x1a11f0u: goto label_1a11f0;
        case 0x1a11f4u: goto label_1a11f4;
        case 0x1a11f8u: goto label_1a11f8;
        case 0x1a11fcu: goto label_1a11fc;
        case 0x1a1200u: goto label_1a1200;
        case 0x1a1204u: goto label_1a1204;
        case 0x1a1208u: goto label_1a1208;
        case 0x1a120cu: goto label_1a120c;
        case 0x1a1210u: goto label_1a1210;
        case 0x1a1214u: goto label_1a1214;
        case 0x1a1218u: goto label_1a1218;
        case 0x1a121cu: goto label_1a121c;
        case 0x1a1220u: goto label_1a1220;
        case 0x1a1224u: goto label_1a1224;
        case 0x1a1228u: goto label_1a1228;
        case 0x1a122cu: goto label_1a122c;
        case 0x1a1230u: goto label_1a1230;
        case 0x1a1234u: goto label_1a1234;
        case 0x1a1238u: goto label_1a1238;
        case 0x1a123cu: goto label_1a123c;
        case 0x1a1240u: goto label_1a1240;
        case 0x1a1244u: goto label_1a1244;
        case 0x1a1248u: goto label_1a1248;
        case 0x1a124cu: goto label_1a124c;
        case 0x1a1250u: goto label_1a1250;
        case 0x1a1254u: goto label_1a1254;
        case 0x1a1258u: goto label_1a1258;
        case 0x1a125cu: goto label_1a125c;
        case 0x1a1260u: goto label_1a1260;
        case 0x1a1264u: goto label_1a1264;
        case 0x1a1268u: goto label_1a1268;
        case 0x1a126cu: goto label_1a126c;
        case 0x1a1270u: goto label_1a1270;
        case 0x1a1274u: goto label_1a1274;
        case 0x1a1278u: goto label_1a1278;
        case 0x1a127cu: goto label_1a127c;
        case 0x1a1280u: goto label_1a1280;
        case 0x1a1284u: goto label_1a1284;
        case 0x1a1288u: goto label_1a1288;
        case 0x1a128cu: goto label_1a128c;
        case 0x1a1290u: goto label_1a1290;
        case 0x1a1294u: goto label_1a1294;
        case 0x1a1298u: goto label_1a1298;
        case 0x1a129cu: goto label_1a129c;
        case 0x1a12a0u: goto label_1a12a0;
        case 0x1a12a4u: goto label_1a12a4;
        case 0x1a12a8u: goto label_1a12a8;
        case 0x1a12acu: goto label_1a12ac;
        case 0x1a12b0u: goto label_1a12b0;
        case 0x1a12b4u: goto label_1a12b4;
        case 0x1a12b8u: goto label_1a12b8;
        case 0x1a12bcu: goto label_1a12bc;
        case 0x1a12c0u: goto label_1a12c0;
        case 0x1a12c4u: goto label_1a12c4;
        case 0x1a12c8u: goto label_1a12c8;
        case 0x1a12ccu: goto label_1a12cc;
        case 0x1a12d0u: goto label_1a12d0;
        case 0x1a12d4u: goto label_1a12d4;
        case 0x1a12d8u: goto label_1a12d8;
        case 0x1a12dcu: goto label_1a12dc;
        case 0x1a12e0u: goto label_1a12e0;
        case 0x1a12e4u: goto label_1a12e4;
        case 0x1a12e8u: goto label_1a12e8;
        case 0x1a12ecu: goto label_1a12ec;
        case 0x1a12f0u: goto label_1a12f0;
        case 0x1a12f4u: goto label_1a12f4;
        case 0x1a12f8u: goto label_1a12f8;
        case 0x1a12fcu: goto label_1a12fc;
        case 0x1a1300u: goto label_1a1300;
        case 0x1a1304u: goto label_1a1304;
        case 0x1a1308u: goto label_1a1308;
        case 0x1a130cu: goto label_1a130c;
        case 0x1a1310u: goto label_1a1310;
        case 0x1a1314u: goto label_1a1314;
        case 0x1a1318u: goto label_1a1318;
        case 0x1a131cu: goto label_1a131c;
        case 0x1a1320u: goto label_1a1320;
        case 0x1a1324u: goto label_1a1324;
        case 0x1a1328u: goto label_1a1328;
        case 0x1a132cu: goto label_1a132c;
        case 0x1a1330u: goto label_1a1330;
        case 0x1a1334u: goto label_1a1334;
        case 0x1a1338u: goto label_1a1338;
        case 0x1a133cu: goto label_1a133c;
        case 0x1a1340u: goto label_1a1340;
        case 0x1a1344u: goto label_1a1344;
        case 0x1a1348u: goto label_1a1348;
        case 0x1a134cu: goto label_1a134c;
        case 0x1a1350u: goto label_1a1350;
        case 0x1a1354u: goto label_1a1354;
        case 0x1a1358u: goto label_1a1358;
        case 0x1a135cu: goto label_1a135c;
        case 0x1a1360u: goto label_1a1360;
        case 0x1a1364u: goto label_1a1364;
        case 0x1a1368u: goto label_1a1368;
        case 0x1a136cu: goto label_1a136c;
        case 0x1a1370u: goto label_1a1370;
        case 0x1a1374u: goto label_1a1374;
        case 0x1a1378u: goto label_1a1378;
        case 0x1a137cu: goto label_1a137c;
        case 0x1a1380u: goto label_1a1380;
        case 0x1a1384u: goto label_1a1384;
        case 0x1a1388u: goto label_1a1388;
        case 0x1a138cu: goto label_1a138c;
        case 0x1a1390u: goto label_1a1390;
        case 0x1a1394u: goto label_1a1394;
        case 0x1a1398u: goto label_1a1398;
        case 0x1a139cu: goto label_1a139c;
        case 0x1a13a0u: goto label_1a13a0;
        case 0x1a13a4u: goto label_1a13a4;
        default: return;
    }

label_1a0bd8:
    if (ctx->pc == 0x1A0BD8u) {
        ctx->pc = 0x1A0BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BD4u;
        // 0x1a0bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0BDCu;
        goto label_1a0bdc;
    }
    ctx->pc = 0x1A0BD4u;
    {
        const bool branch_taken_0x1a0bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BD4u;
        // 0x1a0bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0bd4) {
            ctx->pc = 0x1A0BE8u;
            goto label_1a0be8;
        }
    }
    ctx->pc = 0x1A0BDCu;
label_1a0bdc:
    // 0x1a0bdc: 0xc0681b6  jal         func_1A06D8
label_1a0be0:
    if (ctx->pc == 0x1A0BE0u) {
        ctx->pc = 0x1A0BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BDCu;
        // 0x1a0be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0BE4u;
        goto label_1a0be4;
    }
    ctx->pc = 0x1A0BDCu;
    SET_GPR_U32(ctx, 31, 0x1A0BE4u);
    ctx->pc = 0x1A0BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0BDCu;
    // 0x1a0be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A06D8u;
    { ctx->pc = 0x1a06d8; return; }
    ctx->pc = 0x1A0BE4u;
label_1a0be4:
    // 0x1a0be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0be8:
    // 0x1a0be8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a0be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a0bec:
    // 0x1a0bec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a0becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0bf0:
    // 0x1a0bf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0bf4:
    // 0x1a0bf4: 0x8068252  j           func_1A0948
label_1a0bf8:
    if (ctx->pc == 0x1A0BF8u) {
        ctx->pc = 0x1A0BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BF4u;
        // 0x1a0bf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0BFCu;
        goto label_1a0bfc;
    }
    ctx->pc = 0x1A0BF4u;
    ctx->pc = 0x1A0BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0BF4u;
    // 0x1a0bf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0948u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a0948; return; }
    ctx->pc = 0x1A0BFCu;
label_1a0bfc:
    // 0x1a0bfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a0bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a0c00:
    // 0x1a0c00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a0c00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0c04:
    // 0x1a0c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0c08:
    // 0x1a0c08: 0x3e00008  jr          $ra
label_1a0c0c:
    if (ctx->pc == 0x1A0C0Cu) {
        ctx->pc = 0x1A0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C08u;
        // 0x1a0c0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0C10u;
        goto label_1a0c10;
    }
    ctx->pc = 0x1A0C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C08u;
        // 0x1a0c0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0C10u;
label_1a0c10:
    // 0x1a0c10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a0c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a0c14:
    // 0x1a0c14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a0c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a0c18:
    // 0x1a0c18: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1a0c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1a0c1c:
    // 0x1a0c1c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a0c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1a0c20:
    // 0x1a0c20: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a0c20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c24:
    // 0x1a0c24: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a0c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a0c28:
    // 0x1a0c28: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1a0c28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c2c:
    // 0x1a0c2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a0c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a0c30:
    // 0x1a0c30: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a0c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1a0c34:
    // 0x1a0c34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0c34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c38:
    // 0x1a0c38: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a0c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a0c3c:
    // 0x1a0c3c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a0c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a0c40:
    // 0x1a0c40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a0c44:
    // 0x1a0c44: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1a0c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
label_1a0c48:
    // 0x1a0c48: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1a0c4c:
    if (ctx->pc == 0x1A0C4Cu) {
        ctx->pc = 0x1A0C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C48u;
        // 0x1a0c4c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0C50u;
        goto label_1a0c50;
    }
    ctx->pc = 0x1A0C48u;
    {
        const bool branch_taken_0x1a0c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C48u;
        // 0x1a0c4c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0c48) {
            ctx->pc = 0x1A0C60u;
            goto label_1a0c60;
        }
    }
    ctx->pc = 0x1A0C50u;
label_1a0c50:
    // 0x1a0c50: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x1a0c50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c54:
    // 0x1a0c54: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x1a0c54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c58:
    // 0x1a0c58: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a0c5c:
    if (ctx->pc == 0x1A0C5Cu) {
        ctx->pc = 0x1A0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C58u;
        // 0x1a0c5c: 0x24160040  addiu       $s6, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0C60u;
        goto label_1a0c60;
    }
    ctx->pc = 0x1A0C58u;
    {
        const bool branch_taken_0x1a0c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C58u;
        // 0x1a0c5c: 0x24160040  addiu       $s6, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0c58) {
            ctx->pc = 0x1A0C68u;
            goto label_1a0c68;
        }
    }
    ctx->pc = 0x1A0C60u;
label_1a0c60:
    // 0x1a0c60: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x1a0c60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c64:
    // 0x1a0c64: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x1a0c64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c68:
    // 0x1a0c68: 0x8e270858  lw          $a3, 0x858($s1)
    ctx->pc = 0x1a0c68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
label_1a0c6c:
    // 0x1a0c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c70:
    // 0x1a0c70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a0c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c74:
    // 0x1a0c74: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1a0c74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0c78:
    // 0x1a0c78: 0x24e80020  addiu       $t0, $a3, 0x20
    ctx->pc = 0x1a0c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_1a0c7c:
    // 0x1a0c7c: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x1a0c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_1a0c80:
    // 0x1a0c80: 0xc06825c  jal         func_1A0970
label_1a0c84:
    if (ctx->pc == 0x1A0C84u) {
        ctx->pc = 0x1A0C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C80u;
        // 0x1a0c84: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0C88u;
        goto label_1a0c88;
    }
    ctx->pc = 0x1A0C80u;
    SET_GPR_U32(ctx, 31, 0x1A0C88u);
    ctx->pc = 0x1A0C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0C80u;
    // 0x1a0c84: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    { ctx->pc = 0x1a0970; return; }
    ctx->pc = 0x1A0C88u;
label_1a0c88:
    // 0x1a0c88: 0x8e270858  lw          $a3, 0x858($s1)
    ctx->pc = 0x1a0c88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
label_1a0c8c:
    // 0x1a0c8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c90:
    // 0x1a0c90: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a0c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a0c94:
    // 0x1a0c94: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1a0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_1a0c98:
    // 0x1a0c98: 0x24e80038  addiu       $t0, $a3, 0x38
    ctx->pc = 0x1a0c98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 56));
label_1a0c9c:
    // 0x1a0c9c: 0x24e60028  addiu       $a2, $a3, 0x28
    ctx->pc = 0x1a0c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
label_1a0ca0:
    // 0x1a0ca0: 0xfe300088  sd          $s0, 0x88($s1)
    ctx->pc = 0x1a0ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 16));
label_1a0ca4:
    // 0x1a0ca4: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x1a0ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_1a0ca8:
    // 0x1a0ca8: 0xc06825c  jal         func_1A0970
label_1a0cac:
    if (ctx->pc == 0x1A0CACu) {
        ctx->pc = 0x1A0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CA8u;
        // 0x1a0cac: 0x24e70030  addiu       $a3, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0CB0u;
        goto label_1a0cb0;
    }
    ctx->pc = 0x1A0CA8u;
    SET_GPR_U32(ctx, 31, 0x1A0CB0u);
    ctx->pc = 0x1A0CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0CA8u;
    // 0x1a0cac: 0x24e70030  addiu       $a3, $a3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    { ctx->pc = 0x1a0970; return; }
    ctx->pc = 0x1A0CB0u;
label_1a0cb0:
    // 0x1a0cb0: 0x8e270858  lw          $a3, 0x858($s1)
    ctx->pc = 0x1a0cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
label_1a0cb4:
    // 0x1a0cb4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1a0cb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a0cb8:
    // 0x1a0cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0cbc:
    // 0x1a0cbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a0cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a0cc0:
    // 0x1a0cc0: 0x8ce30028  lw          $v1, 0x28($a3)
    ctx->pc = 0x1a0cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_1a0cc4:
    // 0x1a0cc4: 0xfe300088  sd          $s0, 0x88($s1)
    ctx->pc = 0x1a0cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 16));
label_1a0cc8:
    // 0x1a0cc8: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x1a0cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
label_1a0ccc:
    // 0x1a0ccc: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x1a0cccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 32)));
label_1a0cd0:
    // 0x1a0cd0: 0x8e66005c  lw          $a2, 0x5C($s3)
    ctx->pc = 0x1a0cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_1a0cd4:
    // 0x1a0cd4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1a0cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_1a0cd8:
    // 0x1a0cd8: 0xdce30038  ld          $v1, 0x38($a3)
    ctx->pc = 0x1a0cd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 56)));
label_1a0cdc:
    // 0x1a0cdc: 0xae2600cc  sw          $a2, 0xCC($s1)
    ctx->pc = 0x1a0cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 6));
label_1a0ce0:
    // 0x1a0ce0: 0xfce20020  sd          $v0, 0x20($a3)
    ctx->pc = 0x1a0ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 32), GPR_U64(ctx, 2));
label_1a0ce4:
    // 0x1a0ce4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1a0ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
label_1a0ce8:
    // 0x1a0ce8: 0x8e660060  lw          $a2, 0x60($s3)
    ctx->pc = 0x1a0ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_1a0cec:
    // 0x1a0cec: 0xfce30038  sd          $v1, 0x38($a3)
    ctx->pc = 0x1a0cecu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 56), GPR_U64(ctx, 3));
label_1a0cf0:
    // 0x1a0cf0: 0xae2600d0  sw          $a2, 0xD0($s1)
    ctx->pc = 0x1a0cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 6));
label_1a0cf4:
    // 0x1a0cf4: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x1a0cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_1a0cf8:
    // 0x1a0cf8: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x1a0cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_1a0cfc:
    // 0x1a0cfc: 0x8e830048  lw          $v1, 0x48($s4)
    ctx->pc = 0x1a0cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_1a0d00:
    // 0x1a0d00: 0xae2300b8  sw          $v1, 0xB8($s1)
    ctx->pc = 0x1a0d00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 3));
label_1a0d04:
    // 0x1a0d04: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x1a0d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_1a0d08:
    // 0x1a0d08: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x1a0d08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
label_1a0d0c:
    // 0x1a0d0c: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x1a0d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_1a0d10:
    // 0x1a0d10: 0xc06818e  jal         func_1A0638
label_1a0d14:
    if (ctx->pc == 0x1A0D14u) {
        ctx->pc = 0x1A0D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D10u;
        // 0x1a0d14: 0xae2300c4  sw          $v1, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0D18u;
        goto label_1a0d18;
    }
    ctx->pc = 0x1A0D10u;
    SET_GPR_U32(ctx, 31, 0x1A0D18u);
    ctx->pc = 0x1A0D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D10u;
    // 0x1a0d14: 0xae2300c4  sw          $v1, 0xC4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0638u;
    { ctx->pc = 0x1a0638; return; }
    ctx->pc = 0x1A0D18u;
label_1a0d18:
    // 0x1a0d18: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_1a0d1c:
    if (ctx->pc == 0x1A0D1Cu) {
        ctx->pc = 0x1A0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D18u;
        // 0x1a0d1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0D20u;
        goto label_1a0d20;
    }
    ctx->pc = 0x1A0D18u;
    {
        const bool branch_taken_0x1a0d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D18u;
        // 0x1a0d1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d18) {
            ctx->pc = 0x1A0DA0u;
            goto label_1a0da0;
        }
    }
    ctx->pc = 0x1A0D20u;
label_1a0d20:
    // 0x1a0d20: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1a0d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1a0d24:
    // 0x1a0d24: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_1a0d28:
    if (ctx->pc == 0x1A0D28u) {
        ctx->pc = 0x1A0D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D24u;
        // 0x1a0d28: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0D2Cu;
        goto label_1a0d2c;
    }
    ctx->pc = 0x1A0D24u;
    {
        const bool branch_taken_0x1a0d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D24u;
        // 0x1a0d28: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d24) {
            ctx->pc = 0x1A0DA4u;
            goto label_1a0da4;
        }
    }
    ctx->pc = 0x1A0D2Cu;
label_1a0d2c:
    // 0x1a0d2c: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x1a0d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_1a0d30:
    // 0x1a0d30: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
label_1a0d34:
    if (ctx->pc == 0x1A0D34u) {
        ctx->pc = 0x1A0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D30u;
        // 0x1a0d34: 0xdfb60060  ld          $s6, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0D38u;
        goto label_1a0d38;
    }
    ctx->pc = 0x1A0D30u;
    {
        const bool branch_taken_0x1a0d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D30u;
        // 0x1a0d34: 0xdfb60060  ld          $s6, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d30) {
            ctx->pc = 0x1A0DA8u;
            goto label_1a0da8;
        }
    }
    ctx->pc = 0x1A0D38u;
label_1a0d38:
    // 0x1a0d38: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a0d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1a0d3c:
    // 0x1a0d3c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1a0d40:
    // 0x1a0d40: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1a0d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_1a0d44:
    // 0x1a0d44: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x1a0d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_1a0d48:
    // 0x1a0d48: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1a0d4c:
    if (ctx->pc == 0x1A0D4Cu) {
        ctx->pc = 0x1A0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D48u;
        // 0x1a0d4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0D50u;
        goto label_1a0d50;
    }
    ctx->pc = 0x1A0D48u;
    {
        const bool branch_taken_0x1a0d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D48u;
        // 0x1a0d4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d48) {
            ctx->pc = 0x1A0D60u;
            goto label_1a0d60;
        }
    }
    ctx->pc = 0x1A0D50u;
label_1a0d50:
    // 0x1a0d50: 0xc068536  jal         func_1A14D8
label_1a0d54:
    if (ctx->pc == 0x1A0D54u) {
        ctx->pc = 0x1A0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D50u;
        // 0x1a0d54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0D58u;
        goto label_1a0d58;
    }
    ctx->pc = 0x1A0D50u;
    SET_GPR_U32(ctx, 31, 0x1A0D58u);
    ctx->pc = 0x1A0D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D50u;
    // 0x1a0d54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A14D8u;
    { ctx->pc = 0x1a14d8; return; }
    ctx->pc = 0x1A0D58u;
label_1a0d58:
    // 0x1a0d58: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a0d5c:
    if (ctx->pc == 0x1A0D5Cu) {
        ctx->pc = 0x1A0D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D58u;
        // 0x1a0d5c: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0D60u;
        goto label_1a0d60;
    }
    ctx->pc = 0x1A0D58u;
    {
        const bool branch_taken_0x1a0d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D58u;
        // 0x1a0d5c: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d58) {
            ctx->pc = 0x1A0D6Cu;
            goto label_1a0d6c;
        }
    }
    ctx->pc = 0x1A0D60u;
label_1a0d60:
    // 0x1a0d60: 0xc0681b6  jal         func_1A06D8
label_1a0d64:
    if (ctx->pc == 0x1A0D64u) {
        ctx->pc = 0x1A0D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D60u;
        // 0x1a0d64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0D68u;
        goto label_1a0d68;
    }
    ctx->pc = 0x1A0D60u;
    SET_GPR_U32(ctx, 31, 0x1A0D68u);
    ctx->pc = 0x1A0D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D60u;
    // 0x1a0d64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A06D8u;
    { ctx->pc = 0x1a06d8; return; }
    ctx->pc = 0x1A0D68u;
label_1a0d68:
    // 0x1a0d68: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a0d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1a0d6c:
    // 0x1a0d6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0d70:
    // 0x1a0d70: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a0d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a0d74:
    // 0x1a0d74: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1a0d74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1a0d78:
    // 0x1a0d78: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1a0d78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a0d7c:
    // 0x1a0d7c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1a0d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_1a0d80:
    // 0x1a0d80: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a0d80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a0d84:
    // 0x1a0d84: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a0d84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a0d88:
    // 0x1a0d88: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a0d88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a0d8c:
    // 0x1a0d8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a0d8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a0d90:
    // 0x1a0d90: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a0d90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0d94:
    // 0x1a0d94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0d94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0d98:
    // 0x1a0d98: 0x8068252  j           func_1A0948
label_1a0d9c:
    if (ctx->pc == 0x1A0D9Cu) {
        ctx->pc = 0x1A0D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D98u;
        // 0x1a0d9c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0DA0u;
        goto label_1a0da0;
    }
    ctx->pc = 0x1A0D98u;
    ctx->pc = 0x1A0D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0D98u;
    // 0x1a0d9c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0948u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a0948; return; }
    ctx->pc = 0x1A0DA0u;
label_1a0da0:
    // 0x1a0da0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a0da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a0da4:
    // 0x1a0da4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1a0da4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a0da8:
    // 0x1a0da8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a0da8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a0dac:
    // 0x1a0dac: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a0dacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a0db0:
    // 0x1a0db0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a0db0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a0db4:
    // 0x1a0db4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a0db4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a0db8:
    // 0x1a0db8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a0db8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0dbc:
    // 0x1a0dbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0dc0:
    // 0x1a0dc0: 0x3e00008  jr          $ra
label_1a0dc4:
    if (ctx->pc == 0x1A0DC4u) {
        ctx->pc = 0x1A0DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DC0u;
        // 0x1a0dc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0DC8u;
        goto label_1a0dc8;
    }
    ctx->pc = 0x1A0DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0DC0u;
        // 0x1a0dc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0DC8u;
label_1a0dc8:
    // 0x1a0dc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a0dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a0dcc:
    // 0x1a0dcc: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x1a0dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1a0dd0:
    // 0x1a0dd0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a0dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a0dd4:
    // 0x1a0dd4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1a0dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_1a0dd8:
    // 0x1a0dd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a0ddc:
    // 0x1a0ddc: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1a0ddcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
label_1a0de0:
    // 0x1a0de0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a0de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a0de4:
    // 0x1a0de4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0de8:
    // 0x1a0de8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a0de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a0dec:
    // 0x1a0dec: 0x264408c0  addiu       $a0, $s2, 0x8C0
    ctx->pc = 0x1a0decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2240));
label_1a0df0:
    // 0x1a0df0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a0df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1a0df4:
    // 0x1a0df4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a0df4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0df8:
    // 0x1a0df8: 0x8e180810  lw          $t8, 0x810($s0)
    ctx->pc = 0x1a0df8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_1a0dfc:
    // 0x1a0dfc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1a0dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1a0e00:
    // 0x1a0e00: 0x3051818  mult        $v1, $t8, $a1
    ctx->pc = 0x1a0e00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a0e04:
    // 0x1a0e04: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x1a0e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1a0e08:
    // 0x1a0e08: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1a0e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_1a0e0c:
    // 0x1a0e0c: 0x8cac06bc  lw          $t4, 0x6BC($a1)
    ctx->pc = 0x1a0e0cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1724)));
label_1a0e10:
    // 0x1a0e10: 0x19800025  blez        $t4, . + 4 + (0x25 << 2)
label_1a0e14:
    if (ctx->pc == 0x1A0E14u) {
        ctx->pc = 0x1A0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E10u;
        // 0x1a0e14: 0x835825  or          $t3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0E18u;
        goto label_1a0e18;
    }
    ctx->pc = 0x1A0E10u;
    {
        const bool branch_taken_0x1a0e10 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x1A0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E10u;
        // 0x1a0e14: 0x835825  or          $t3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e10) {
            ctx->pc = 0x1A0EA8u;
            goto label_1a0ea8;
        }
    }
    ctx->pc = 0x1A0E18u;
label_1a0e18:
    // 0x1a0e18: 0x260f0598  addiu       $t7, $s0, 0x598
    ctx->pc = 0x1a0e18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 1432));
label_1a0e1c:
    // 0x1a0e1c: 0x260e05a8  addiu       $t6, $s0, 0x5A8
    ctx->pc = 0x1a0e1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 1448));
label_1a0e20:
    // 0x1a0e20: 0x258dffff  addiu       $t5, $t4, -0x1
    ctx->pc = 0x1a0e20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_1a0e24:
    // 0x1a0e24: 0x26110590  addiu       $s1, $s0, 0x590
    ctx->pc = 0x1a0e24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
label_1a0e28:
    // 0x1a0e28: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1a0e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1a0e2c:
    // 0x1a0e2c: 0x14d1026  xor         $v0, $t2, $t5
    ctx->pc = 0x1a0e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 13));
label_1a0e30:
    // 0x1a0e30: 0x3031818  mult        $v1, $t8, $v1
    ctx->pc = 0x1a0e30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a0e34:
    // 0x1a0e34: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x1a0e34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_1a0e38:
    // 0x1a0e38: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a0e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a0e3c:
    // 0x1a0e3c: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x1a0e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
label_1a0e40:
    // 0x1a0e40: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x1a0e40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1a0e44:
    // 0x1a0e44: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1a0e44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1a0e48:
    // 0x1a0e48: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x1a0e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
label_1a0e4c:
    // 0x1a0e4c: 0x3c093000  lui         $t1, 0x3000
    ctx->pc = 0x1a0e4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12288 << 16));
label_1a0e50:
    // 0x1a0e50: 0x35290030  ori         $t1, $t1, 0x30
    ctx->pc = 0x1a0e50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)48);
label_1a0e54:
    // 0x1a0e54: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1a0e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1a0e58:
    // 0x1a0e58: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1a0e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1a0e5c:
    // 0x1a0e5c: 0x1c41021  addu        $v0, $t6, $a0
    ctx->pc = 0x1a0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
label_1a0e60:
    // 0x1a0e60: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1a0e60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1a0e64:
    // 0x1a0e64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a0e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a0e68:
    // 0x1a0e68: 0x1e42021  addu        $a0, $t7, $a0
    ctx->pc = 0x1a0e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
label_1a0e6c:
    // 0x1a0e6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a0e70:
    // 0x1a0e70: 0x14c382a  slt         $a3, $t2, $t4
    ctx->pc = 0x1a0e70u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_1a0e74:
    // 0x1a0e74: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1a0e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_1a0e78:
    // 0x1a0e78: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1a0e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_1a0e7c:
    // 0x1a0e7c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a0e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1a0e80:
    // 0x1a0e80: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1a0e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1a0e84:
    // 0x1a0e84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a0e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1a0e88:
    // 0x1a0e88: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x1a0e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_1a0e8c:
    // 0x1a0e8c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1a0e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
label_1a0e90:
    // 0x1a0e90: 0xfd620000  sd          $v0, 0x0($t3)
    ctx->pc = 0x1a0e90u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 2));
label_1a0e94:
    // 0x1a0e94: 0xfd630010  sd          $v1, 0x10($t3)
    ctx->pc = 0x1a0e94u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 3));
label_1a0e98:
    // 0x1a0e98: 0x14e0ffe3  bnez        $a3, . + 4 + (-0x1D << 2)
label_1a0e9c:
    if (ctx->pc == 0x1A0E9Cu) {
        ctx->pc = 0x1A0E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E98u;
        // 0x1a0e9c: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0EA0u;
        goto label_1a0ea0;
    }
    ctx->pc = 0x1A0E98u;
    {
        const bool branch_taken_0x1a0e98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E98u;
        // 0x1a0e9c: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e98) {
            ctx->pc = 0x1A0E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0e28;
        }
    }
    ctx->pc = 0x1A0EA0u;
label_1a0ea0:
    // 0x1a0ea0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a0ea4:
    if (ctx->pc == 0x1A0EA4u) {
        ctx->pc = 0x1A0EA8u;
        goto label_1a0ea8;
    }
    ctx->pc = 0x1A0EA0u;
    {
        const bool branch_taken_0x1a0ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0ea0) {
            ctx->pc = 0x1A0EACu;
            goto label_1a0eac;
        }
    }
    ctx->pc = 0x1A0EA8u;
label_1a0ea8:
    // 0x1a0ea8: 0x26110590  addiu       $s1, $s0, 0x590
    ctx->pc = 0x1a0ea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
label_1a0eac:
    // 0x1a0eac: 0xc06b518  jal         func_1AD460
label_1a0eb0:
    if (ctx->pc == 0x1A0EB0u) {
        ctx->pc = 0x1A0EB4u;
        goto label_1a0eb4;
    }
    ctx->pc = 0x1A0EACu;
    SET_GPR_U32(ctx, 31, 0x1A0EB4u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A0EB4u;
label_1a0eb4:
    // 0x1a0eb4: 0xf  sync
    ctx->pc = 0x1a0eb4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a0eb8:
    // 0x1a0eb8: 0x8e050810  lw          $a1, 0x810($s0)
    ctx->pc = 0x1a0eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_1a0ebc:
    // 0x1a0ebc: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1a0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1a0ec0:
    // 0x1a0ec0: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1a0ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_1a0ec4:
    // 0x1a0ec4: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1a0ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_1a0ec8:
    // 0x1a0ec8: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x1a0ec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a0ecc:
    // 0x1a0ecc: 0x34c6d480  ori         $a2, $a2, 0xD480
    ctx->pc = 0x1a0eccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)54400);
label_1a0ed0:
    // 0x1a0ed0: 0x264908c0  addiu       $t1, $s2, 0x8C0
    ctx->pc = 0x1a0ed0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 2240));
label_1a0ed4:
    // 0x1a0ed4: 0x34e7d430  ori         $a3, $a3, 0xD430
    ctx->pc = 0x1a0ed4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54320);
label_1a0ed8:
    // 0x1a0ed8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a0ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a0edc:
    // 0x1a0edc: 0x24080105  addiu       $t0, $zero, 0x105
    ctx->pc = 0x1a0edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_1a0ee0:
    // 0x1a0ee0: 0x3442d420  ori         $v0, $v0, 0xD420
    ctx->pc = 0x1a0ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54304);
label_1a0ee4:
    // 0x1a0ee4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a0ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a0ee8:
    // 0x1a0ee8: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x1a0ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1a0eec:
    // 0x1a0eec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a0eecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a0ef0:
    // 0x1a0ef0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1a0ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a0ef4:
    // 0x1a0ef4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a0ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a0ef8:
    // 0x1a0ef8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x1a0ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_1a0efc:
    // 0x1a0efc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a0efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0f00:
    // 0x1a0f00: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1a0f00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_1a0f04:
    // 0x1a0f04: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x1a0f04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
label_1a0f08:
    // 0x1a0f08: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a0f08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1a0f0c:
    // 0x1a0f0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0f0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0f10:
    // 0x1a0f10: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1a0f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_1a0f14:
    // 0x1a0f14: 0x806b52a  j           func_1AD4A8
label_1a0f18:
    if (ctx->pc == 0x1A0F18u) {
        ctx->pc = 0x1A0F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F14u;
        // 0x1a0f18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0F1Cu;
        goto label_1a0f1c;
    }
    ctx->pc = 0x1A0F14u;
    ctx->pc = 0x1A0F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F14u;
    // 0x1a0f18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A0F1Cu;
label_1a0f1c:
    // 0x1a0f1c: 0x0  nop
    ctx->pc = 0x1a0f1cu;
    // NOP
label_1a0f20:
    // 0x1a0f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a0f24:
    // 0x1a0f24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a0f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a0f28:
    // 0x1a0f28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a0f2c:
    // 0x1a0f2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a0f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a0f30:
    // 0x1a0f30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a0f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a0f34:
    // 0x1a0f34: 0xc06b518  jal         func_1AD460
label_1a0f38:
    if (ctx->pc == 0x1A0F38u) {
        ctx->pc = 0x1A0F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F34u;
        // 0x1a0f38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0F3Cu;
        goto label_1a0f3c;
    }
    ctx->pc = 0x1A0F34u;
    SET_GPR_U32(ctx, 31, 0x1A0F3Cu);
    ctx->pc = 0x1A0F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F34u;
    // 0x1a0f38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A0F3Cu;
label_1a0f3c:
    // 0x1a0f3c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1a0f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
label_1a0f40:
    // 0x1a0f40: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a0f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a0f44:
    // 0x1a0f44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a0f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1a0f48:
    // 0x1a0f48: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a0f4c:
    // 0x1a0f4c: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x1a0f4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_1a0f50:
    // 0x1a0f50: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1a0f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
label_1a0f54:
    // 0x1a0f54: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x1a0f54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_1a0f58:
    // 0x1a0f58: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a0f5c:
    // 0x1a0f5c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1a0f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_1a0f60:
    // 0x1a0f60: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x1a0f60u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
label_1a0f64:
    // 0x1a0f64: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x1a0f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
label_1a0f68:
    // 0x1a0f68: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a0f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a0f6c:
    // 0x1a0f6c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1a0f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_1a0f70:
    // 0x1a0f70: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x1a0f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_1a0f74:
    // 0x1a0f74: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1a0f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1a0f78:
    // 0x1a0f78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a0f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a0f7c:
    // 0x1a0f7c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a0f7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0f80:
    // 0x1a0f80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0f84:
    // 0x1a0f84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a0f84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1a0f88:
    // 0x1a0f88: 0x806b52a  j           func_1AD4A8
label_1a0f8c:
    if (ctx->pc == 0x1A0F8Cu) {
        ctx->pc = 0x1A0F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F88u;
        // 0x1a0f8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0F90u;
        goto label_1a0f90;
    }
    ctx->pc = 0x1A0F88u;
    ctx->pc = 0x1A0F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F88u;
    // 0x1a0f8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A0F90u;
label_1a0f90:
    // 0x1a0f90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a0f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1a0f94:
    // 0x1a0f94: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a0f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a0f98:
    // 0x1a0f98: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a0f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1a0f9c:
    // 0x1a0f9c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a0f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_1a0fa0:
    // 0x1a0fa0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1a0fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_1a0fa4:
    // 0x1a0fa4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a0fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a0fa8:
    // 0x1a0fa8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1a0fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_1a0fac:
    // 0x1a0fac: 0x129980  sll         $s3, $s2, 6
    ctx->pc = 0x1a0facu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_1a0fb0:
    // 0x1a0fb0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a0fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a0fb4:
    // 0x1a0fb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0fb8:
    // 0x1a0fb8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a0fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1a0fbc:
    // 0x1a0fbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a0fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a0fc0:
    // 0x1a0fc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a0fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a0fc4:
    // 0x1a0fc4: 0x0  nop
    ctx->pc = 0x1a0fc4u;
    // NOP
label_1a0fc8:
    // 0x1a0fc8: 0x0  nop
    ctx->pc = 0x1a0fc8u;
    // NOP
label_1a0fcc:
    // 0x1a0fcc: 0x0  nop
    ctx->pc = 0x1a0fccu;
    // NOP
label_1a0fd0:
    // 0x1a0fd0: 0x0  nop
    ctx->pc = 0x1a0fd0u;
    // NOP
label_1a0fd4:
    // 0x1a0fd4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
label_1a0fd8:
    if (ctx->pc == 0x1A0FD8u) {
        ctx->pc = 0x1A0FDCu;
        goto label_1a0fdc;
    }
    ctx->pc = 0x1A0FD4u;
    {
        const bool branch_taken_0x1a0fd4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a0fd4) {
            ctx->pc = 0x1A0FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0fc0;
        }
    }
    ctx->pc = 0x1A0FDCu;
label_1a0fdc:
    // 0x1a0fdc: 0xc06b518  jal         func_1AD460
label_1a0fe0:
    if (ctx->pc == 0x1A0FE0u) {
        ctx->pc = 0x1A0FE4u;
        goto label_1a0fe4;
    }
    ctx->pc = 0x1A0FDCu;
    SET_GPR_U32(ctx, 31, 0x1A0FE4u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A0FE4u;
label_1a0fe4:
    // 0x1a0fe4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1a0fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_1a0fe8:
    // 0x1a0fe8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a0fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a0fec:
    // 0x1a0fec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a0fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1a0ff0:
    // 0x1a0ff0: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x1a0ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
label_1a0ff4:
    // 0x1a0ff4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1a0ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_1a0ff8:
    // 0x1a0ff8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a0ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a0ffc:
    // 0x1a0ffc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a0ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1a1000:
    // 0x1a1000: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x1a1000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
label_1a1004:
    // 0x1a1004: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x1a1004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_1a1008:
    // 0x1a1008: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a1008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a100c:
    // 0x1a100c: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x1a100cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_1a1010:
    // 0x1a1010: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1a1010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1a1014:
    // 0x1a1014: 0xc06b52a  jal         func_1AD4A8
label_1a1018:
    if (ctx->pc == 0x1A1018u) {
        ctx->pc = 0x1A1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1014u;
        // 0x1a1018: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A101Cu;
        goto label_1a101c;
    }
    ctx->pc = 0x1A1014u;
    SET_GPR_U32(ctx, 31, 0x1A101Cu);
    ctx->pc = 0x1A1018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1014u;
    // 0x1a1018: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A101Cu;
label_1a101c:
    // 0x1a101c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1a101cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
label_1a1020:
    // 0x1a1020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1024:
    // 0x1a1024: 0xc067c94  jal         func_19F250
label_1a1028:
    if (ctx->pc == 0x1A1028u) {
        ctx->pc = 0x1A1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1024u;
        // 0x1a1028: 0x2452825  or          $a1, $s2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A102Cu;
        goto label_1a102c;
    }
    ctx->pc = 0x1A1024u;
    SET_GPR_U32(ctx, 31, 0x1A102Cu);
    ctx->pc = 0x1A1028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1024u;
    // 0x1a1028: 0x2452825  or          $a1, $s2, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    { ctx->pc = 0x19f250; return; }
    ctx->pc = 0x1A102Cu;
label_1a102c:
    // 0x1a102c: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x1a102cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
label_1a1030:
    // 0x1a1030: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a1030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a1034:
    // 0x1a1034: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a1034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1a1038:
    // 0x1a1038: 0xc068b12  jal         func_1A2C48
label_1a103c:
    if (ctx->pc == 0x1A103Cu) {
        ctx->pc = 0x1A103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1038u;
        // 0x1a103c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1040u;
        goto label_1a1040;
    }
    ctx->pc = 0x1A1038u;
    SET_GPR_U32(ctx, 31, 0x1A1040u);
    ctx->pc = 0x1A103Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1038u;
    // 0x1a103c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    { ctx->pc = 0x1a2c48; return; }
    ctx->pc = 0x1A1040u;
label_1a1040:
    // 0x1a1040: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a1044:
    // 0x1a1044: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x1a1044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
label_1a1048:
    // 0x1a1048: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a1048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a104c:
    // 0x1a104c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1a104cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_1a1050:
    // 0x1a1050: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a1050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a1054:
    // 0x1a1054: 0x0  nop
    ctx->pc = 0x1a1054u;
    // NOP
label_1a1058:
    // 0x1a1058: 0x0  nop
    ctx->pc = 0x1a1058u;
    // NOP
label_1a105c:
    // 0x1a105c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1a1060:
    if (ctx->pc == 0x1A1060u) {
        ctx->pc = 0x1A1064u;
        goto label_1a1064;
    }
    ctx->pc = 0x1A105Cu;
    {
        const bool branch_taken_0x1a105c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a105c) {
            ctx->pc = 0x1A1048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1048;
        }
    }
    ctx->pc = 0x1A1064u;
label_1a1064:
    // 0x1a1064: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a1068:
    // 0x1a1068: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a1068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_1a106c:
    // 0x1a106c: 0x0  nop
    ctx->pc = 0x1a106cu;
    // NOP
label_1a1070:
    // 0x1a1070: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a1070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a1074:
    // 0x1a1074: 0x0  nop
    ctx->pc = 0x1a1074u;
    // NOP
label_1a1078:
    // 0x1a1078: 0x0  nop
    ctx->pc = 0x1a1078u;
    // NOP
label_1a107c:
    // 0x1a107c: 0x0  nop
    ctx->pc = 0x1a107cu;
    // NOP
label_1a1080:
    // 0x1a1080: 0x0  nop
    ctx->pc = 0x1a1080u;
    // NOP
label_1a1084:
    // 0x1a1084: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
label_1a1088:
    if (ctx->pc == 0x1A1088u) {
        ctx->pc = 0x1A108Cu;
        goto label_1a108c;
    }
    ctx->pc = 0x1A1084u;
    {
        const bool branch_taken_0x1a1084 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a1084) {
            ctx->pc = 0x1A1070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1070;
        }
    }
    ctx->pc = 0x1A108Cu;
label_1a108c:
    // 0x1a108c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a108cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a1090:
    // 0x1a1090: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1a1090u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a1094:
    // 0x1a1094: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a1094u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a1098:
    // 0x1a1098: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1a1098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a109c:
    // 0x1a109c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a109cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a10a0:
    // 0x1a10a0: 0x3e00008  jr          $ra
label_1a10a4:
    if (ctx->pc == 0x1A10A4u) {
        ctx->pc = 0x1A10A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10A0u;
        // 0x1a10a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A10A8u;
        goto label_1a10a8;
    }
    ctx->pc = 0x1A10A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A10A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10A0u;
        // 0x1a10a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A10A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A10A8u;
label_1a10a8:
    // 0x1a10a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a10a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a10ac:
    // 0x1a10ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a10acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a10b0:
    // 0x1a10b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a10b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a10b4:
    // 0x1a10b4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a10b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a10b8:
    // 0x1a10b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a10b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a10bc:
    // 0x1a10bc: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x1a10bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
label_1a10c0:
    // 0x1a10c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a10c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1a10c4:
    // 0x1a10c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a10c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a10c8:
    // 0x1a10c8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a10c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a10cc:
    // 0x1a10cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a10ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a10d0:
    // 0x1a10d0: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x1a10d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
label_1a10d4:
    // 0x1a10d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a10d8:
    // 0x1a10d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a10d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a10dc:
    // 0x1a10dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a10dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a10e0:
    // 0x1a10e0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1a10e4:
    if (ctx->pc == 0x1A10E4u) {
        ctx->pc = 0x1A10E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10E0u;
        // 0x1a10e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A10E8u;
        goto label_1a10e8;
    }
    ctx->pc = 0x1A10E0u;
    {
        const bool branch_taken_0x1a10e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A10E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10E0u;
        // 0x1a10e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10e0) {
            ctx->pc = 0x1A1100u;
            goto label_1a1100;
        }
    }
    ctx->pc = 0x1A10E8u;
label_1a10e8:
    // 0x1a10e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a10e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a10ec:
    // 0x1a10ec: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x1a10ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_1a10f0:
    // 0x1a10f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a10f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a10f4:
    // 0x1a10f4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1a10f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_1a10f8:
    // 0x1a10f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1a10fc:
    if (ctx->pc == 0x1A10FCu) {
        ctx->pc = 0x1A10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10F8u;
        // 0x1a10fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1100u;
        goto label_1a1100;
    }
    ctx->pc = 0x1A10F8u;
    {
        const bool branch_taken_0x1a10f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10F8u;
        // 0x1a10fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10f8) {
            ctx->pc = 0x1A110Cu;
            goto label_1a110c;
        }
    }
    ctx->pc = 0x1A1100u;
label_1a1100:
    // 0x1a1100: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1104:
    // 0x1a1104: 0x10000041  b           . + 4 + (0x41 << 2)
label_1a1108:
    if (ctx->pc == 0x1A1108u) {
        ctx->pc = 0x1A1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1104u;
        // 0x1a1108: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A110Cu;
        goto label_1a110c;
    }
    ctx->pc = 0x1A1104u;
    {
        const bool branch_taken_0x1a1104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1104u;
        // 0x1a1108: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1104) {
            ctx->pc = 0x1A120Cu;
            goto label_1a120c;
        }
    }
    ctx->pc = 0x1A110Cu;
label_1a110c:
    // 0x1a110c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1a110cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a1110:
    // 0x1a1110: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1114:
    // 0x1a1114: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a1114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1a1118:
    // 0x1a1118: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a1118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a111c:
    // 0x1a111c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1a1120:
    if (ctx->pc == 0x1A1120u) {
        ctx->pc = 0x1A1124u;
        goto label_1a1124;
    }
    ctx->pc = 0x1A111Cu;
    {
        const bool branch_taken_0x1a111c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a111c) {
            ctx->pc = 0x1A1190u;
            goto label_1a1190;
        }
    }
    ctx->pc = 0x1A1124u;
label_1a1124:
    // 0x1a1124: 0xc06b518  jal         func_1AD460
label_1a1128:
    if (ctx->pc == 0x1A1128u) {
        ctx->pc = 0x1A112Cu;
        goto label_1a112c;
    }
    ctx->pc = 0x1A1124u;
    SET_GPR_U32(ctx, 31, 0x1A112Cu);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A112Cu;
label_1a112c:
    // 0x1a112c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1a112cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a1130:
    // 0x1a1130: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a1130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a1134:
    // 0x1a1134: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1a1134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
label_1a1138:
    // 0x1a1138: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1a1138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_1a113c:
    // 0x1a113c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1a113cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1a1140:
    // 0x1a1140: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1a1140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1a1144:
    // 0x1a1144: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1a1144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1a1148:
    // 0x1a1148: 0xac24b020  sw          $a0, -0x4FE0($at)
    ctx->pc = 0x1a1148u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 4));
label_1a114c:
    // 0x1a114c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1a114cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1a1150:
    // 0x1a1150: 0xc06b52a  jal         func_1AD4A8
label_1a1154:
    if (ctx->pc == 0x1A1154u) {
        ctx->pc = 0x1A1154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1150u;
        // 0x1a1154: 0xac23b000  sw          $v1, -0x5000($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1158u;
        goto label_1a1158;
    }
    ctx->pc = 0x1A1150u;
    SET_GPR_U32(ctx, 31, 0x1A1158u);
    ctx->pc = 0x1A1154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1150u;
    // 0x1a1154: 0xac23b000  sw          $v1, -0x5000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A1158u;
label_1a1158:
    // 0x1a1158: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a115c:
    // 0x1a115c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1a115cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1a1160:
    // 0x1a1160: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1a1160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_1a1164:
    // 0x1a1164: 0x344203ff  ori         $v0, $v0, 0x3FF
    ctx->pc = 0x1a1164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1023);
label_1a1168:
    // 0x1a1168: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a1168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1a116c:
    // 0x1a116c: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x1a116cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
label_1a1170:
    // 0x1a1170: 0x3484fc00  ori         $a0, $a0, 0xFC00
    ctx->pc = 0x1a1170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64512);
label_1a1174:
    // 0x1a1174: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1a1174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
label_1a1178:
    // 0x1a1178: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a1178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a117c:
    // 0x1a117c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a117cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1a1180:
    // 0x1a1180: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a1180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a1184:
    // 0x1a1184: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a1184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1a1188:
    // 0x1a1188: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1a118c:
    if (ctx->pc == 0x1A118Cu) {
        ctx->pc = 0x1A118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1188u;
        // 0x1a118c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1190u;
        goto label_1a1190;
    }
    ctx->pc = 0x1A1188u;
    {
        const bool branch_taken_0x1a1188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1188u;
        // 0x1a118c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1188) {
            ctx->pc = 0x1A1200u;
            goto label_1a1200;
        }
    }
    ctx->pc = 0x1A1190u;
label_1a1190:
    // 0x1a1190: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1194:
    // 0x1a1194: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
label_1a1198:
    if (ctx->pc == 0x1A1198u) {
        ctx->pc = 0x1A119Cu;
        goto label_1a119c;
    }
    ctx->pc = 0x1A1194u;
    {
        const bool branch_taken_0x1a1194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a1194) {
            ctx->pc = 0x1A1200u;
            goto label_1a1200;
        }
    }
    ctx->pc = 0x1A119Cu;
label_1a119c:
    // 0x1a119c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a119cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a11a0:
    // 0x1a11a0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a11a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a11a4:
    // 0x1a11a4: 0x41280  sll         $v0, $a0, 10
    ctx->pc = 0x1a11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
label_1a11a8:
    // 0x1a11a8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1a11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a11ac:
    // 0x1a11ac: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a11acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a11b0:
    // 0x1a11b0: 0xc06b518  jal         func_1AD460
label_1a11b4:
    if (ctx->pc == 0x1A11B4u) {
        ctx->pc = 0x1A11B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11B0u;
        // 0x1a11b4: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A11B8u;
        goto label_1a11b8;
    }
    ctx->pc = 0x1A11B0u;
    SET_GPR_U32(ctx, 31, 0x1A11B8u);
    ctx->pc = 0x1A11B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A11B0u;
    // 0x1a11b4: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A11B8u;
label_1a11b8:
    // 0x1a11b8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1a11b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a11bc:
    // 0x1a11bc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a11bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a11c0:
    // 0x1a11c0: 0x3463b010  ori         $v1, $v1, 0xB010
    ctx->pc = 0x1a11c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45072);
label_1a11c4:
    // 0x1a11c4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1a11c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1a11c8:
    // 0x1a11c8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a11c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1a11cc:
    // 0x1a11cc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a11ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a11d0:
    // 0x1a11d0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1a11d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1a11d4:
    // 0x1a11d4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1a11d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1a11d8:
    // 0x1a11d8: 0xac22b020  sw          $v0, -0x4FE0($at)
    ctx->pc = 0x1a11d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 2));
label_1a11dc:
    // 0x1a11dc: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1a11dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1a11e0:
    // 0x1a11e0: 0xc06b52a  jal         func_1AD4A8
label_1a11e4:
    if (ctx->pc == 0x1A11E4u) {
        ctx->pc = 0x1A11E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A11E0u;
        // 0x1a11e4: 0xac25b000  sw          $a1, -0x5000($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A11E8u;
        goto label_1a11e8;
    }
    ctx->pc = 0x1A11E0u;
    SET_GPR_U32(ctx, 31, 0x1A11E8u);
    ctx->pc = 0x1A11E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A11E0u;
    // 0x1a11e4: 0xac25b000  sw          $a1, -0x5000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A11E8u;
label_1a11e8:
    // 0x1a11e8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a11e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a11ec:
    // 0x1a11ec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a11ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a11f0:
    // 0x1a11f0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1a11f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_1a11f4:
    // 0x1a11f4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1a11f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_1a11f8:
    // 0x1a11f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a11f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1a11fc:
    // 0x1a11fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a11fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1a1200:
    // 0x1a1200: 0xf  sync
    ctx->pc = 0x1a1200u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a1204:
    // 0x1a1204: 0x42000038  ei
    ctx->pc = 0x1a1204u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1a1208:
    // 0x1a1208: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a120c:
    // 0x1a120c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a120cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a1210:
    // 0x1a1210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1214:
    // 0x1a1214: 0x3e00008  jr          $ra
label_1a1218:
    if (ctx->pc == 0x1A1218u) {
        ctx->pc = 0x1A1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1214u;
        // 0x1a1218: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A121Cu;
        goto label_1a121c;
    }
    ctx->pc = 0x1A1214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1214u;
        // 0x1a1218: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A121Cu;
label_1a121c:
    // 0x1a121c: 0x0  nop
    ctx->pc = 0x1a121cu;
    // NOP
label_1a1220:
    // 0x1a1220: 0x240703ff  addiu       $a3, $zero, 0x3FF
    ctx->pc = 0x1a1220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1a1224:
    // 0x1a1224: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a1224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a1228:
    // 0x1a1228: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x1a1228u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a122c:
    // 0x1a122c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a122cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1a1230:
    // 0x1a1230: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x1a1230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_1a1234:
    // 0x1a1234: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a1234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a1238:
    // 0x1a1238: 0x3442fc00  ori         $v0, $v0, 0xFC00
    ctx->pc = 0x1a1238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64512);
label_1a123c:
    // 0x1a123c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1a123cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
label_1a1240:
    // 0x1a1240: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a1240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1a1244:
    // 0x1a1244: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1a1248:
    // 0x1a1248: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a1248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1a124c:
    // 0x1a124c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a124cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a1250:
    // 0x1a1250: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a1250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1a1254:
    // 0x1a1254: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a1254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1a1258:
    // 0x1a1258: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
label_1a125c:
    if (ctx->pc == 0x1A125Cu) {
        ctx->pc = 0x1A125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1258u;
        // 0x1a125c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1260u;
        goto label_1a1260;
    }
    ctx->pc = 0x1A1258u;
    {
        const bool branch_taken_0x1a1258 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1258) {
            ctx->pc = 0x1A125Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1258u;
            // 0x1a125c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1260u;
            goto label_1a1260;
        }
    }
    ctx->pc = 0x1A1260u;
label_1a1260:
    // 0x1a1260: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a1264:
    // 0x1a1264: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x1a1264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_1a1268:
    // 0x1a1268: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a1268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a126c:
    // 0x1a126c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1a126cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_1a1270:
    // 0x1a1270: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1a1270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a1274:
    // 0x1a1274: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1a1274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1a1278:
    // 0x1a1278: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a1278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_1a127c:
    // 0x1a127c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1a127cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1a1280:
    // 0x1a1280: 0x4012  mflo        $t0
    ctx->pc = 0x1a1280u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_1a1284:
    // 0x1a1284: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1a1284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1a1288:
    // 0x1a1288: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x1a1288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
label_1a128c:
    // 0x1a128c: 0x0  nop
    ctx->pc = 0x1a128cu;
    // NOP
label_1a1290:
    // 0x1a1290: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a1290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a1294:
    // 0x1a1294: 0x0  nop
    ctx->pc = 0x1a1294u;
    // NOP
label_1a1298:
    // 0x1a1298: 0x0  nop
    ctx->pc = 0x1a1298u;
    // NOP
label_1a129c:
    // 0x1a129c: 0x0  nop
    ctx->pc = 0x1a129cu;
    // NOP
label_1a12a0:
    // 0x1a12a0: 0x0  nop
    ctx->pc = 0x1a12a0u;
    // NOP
label_1a12a4:
    // 0x1a12a4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
label_1a12a8:
    if (ctx->pc == 0x1A12A8u) {
        ctx->pc = 0x1A12ACu;
        goto label_1a12ac;
    }
    ctx->pc = 0x1A12A4u;
    {
        const bool branch_taken_0x1a12a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a12a4) {
            ctx->pc = 0x1A1290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1290;
        }
    }
    ctx->pc = 0x1A12ACu;
label_1a12ac:
    // 0x1a12ac: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1a12acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
label_1a12b0:
    // 0x1a12b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a12b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a12b4:
    // 0x1a12b4: 0x24a510a8  addiu       $a1, $a1, 0x10A8
    ctx->pc = 0x1a12b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4264));
label_1a12b8:
    // 0x1a12b8: 0xc069150  jal         func_1A4540
label_1a12bc:
    if (ctx->pc == 0x1A12BCu) {
        ctx->pc = 0x1A12BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12B8u;
        // 0x1a12bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A12C0u;
        goto label_1a12c0;
    }
    ctx->pc = 0x1A12B8u;
    SET_GPR_U32(ctx, 31, 0x1A12C0u);
    ctx->pc = 0x1A12BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A12B8u;
    // 0x1a12bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4540u;
    { ctx->pc = 0x1a4540; return; }
    ctx->pc = 0x1A12C0u;
label_1a12c0:
    // 0x1a12c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a12c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a12c4:
    // 0x1a12c4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a12c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a12c8:
    // 0x1a12c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a12cc:
    // 0x1a12cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a12ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a12d0:
    // 0x1a12d0: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x1a12d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
label_1a12d4:
    // 0x1a12d4: 0xc06950e  jal         func_1A5438
label_1a12d8:
    if (ctx->pc == 0x1A12D8u) {
        ctx->pc = 0x1A12D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12D4u;
        // 0x1a12d8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A12DCu;
        goto label_1a12dc;
    }
    ctx->pc = 0x1A12D4u;
    SET_GPR_U32(ctx, 31, 0x1A12DCu);
    ctx->pc = 0x1A12D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A12D4u;
    // 0x1a12d8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5438u;
    { ctx->pc = 0x1a5438; return; }
    ctx->pc = 0x1A12DCu;
label_1a12dc:
    // 0x1a12dc: 0xc06b518  jal         func_1AD460
label_1a12e0:
    if (ctx->pc == 0x1A12E0u) {
        ctx->pc = 0x1A12E4u;
        goto label_1a12e4;
    }
    ctx->pc = 0x1A12DCu;
    SET_GPR_U32(ctx, 31, 0x1A12E4u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A12E4u;
label_1a12e4:
    // 0x1a12e4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1a12e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
label_1a12e8:
    // 0x1a12e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a12e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a12ec:
    // 0x1a12ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a12ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1a12f0:
    // 0x1a12f0: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1a12f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
label_1a12f4:
    // 0x1a12f4: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x1a12f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_1a12f8:
    // 0x1a12f8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a12f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a12fc:
    // 0x1a12fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a12fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1a1300:
    // 0x1a1300: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x1a1300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
label_1a1304:
    // 0x1a1304: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x1a1304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_1a1308:
    // 0x1a1308: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a130c:
    // 0x1a130c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a130cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1a1310:
    // 0x1a1310: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x1a1310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
label_1a1314:
    // 0x1a1314: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1a1314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1a1318:
    // 0x1a1318: 0xc06b52a  jal         func_1AD4A8
label_1a131c:
    if (ctx->pc == 0x1A131Cu) {
        ctx->pc = 0x1A131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1318u;
        // 0x1a131c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1320u;
        goto label_1a1320;
    }
    ctx->pc = 0x1A1318u;
    SET_GPR_U32(ctx, 31, 0x1A1320u);
    ctx->pc = 0x1A131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1318u;
    // 0x1a131c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A1320u;
label_1a1320:
    // 0x1a1320: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a1324:
    // 0x1a1324: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1a1324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1a1328:
    // 0x1a1328: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1a1328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_1a132c:
    // 0x1a132c: 0x344203ff  ori         $v0, $v0, 0x3FF
    ctx->pc = 0x1a132cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1023);
label_1a1330:
    // 0x1a1330: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a1330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1a1334:
    // 0x1a1334: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a1334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a1338:
    // 0x1a1338: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x1a1338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
label_1a133c:
    // 0x1a133c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a133cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a1340:
    // 0x1a1340: 0xc068b12  jal         func_1A2C48
label_1a1344:
    if (ctx->pc == 0x1A1344u) {
        ctx->pc = 0x1A1344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1340u;
        // 0x1a1344: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1348u;
        goto label_1a1348;
    }
    ctx->pc = 0x1A1340u;
    SET_GPR_U32(ctx, 31, 0x1A1348u);
    ctx->pc = 0x1A1344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1340u;
    // 0x1a1344: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    { ctx->pc = 0x1a2c48; return; }
    ctx->pc = 0x1A1348u;
label_1a1348:
    // 0x1a1348: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1a1348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1a134c:
    // 0x1a134c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1a134cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a1350:
    // 0x1a1350: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a1350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a1354:
    // 0x1a1354: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a1354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a1358:
    // 0x1a1358: 0x0  nop
    ctx->pc = 0x1a1358u;
    // NOP
label_1a135c:
    // 0x1a135c: 0x0  nop
    ctx->pc = 0x1a135cu;
    // NOP
label_1a1360:
    // 0x1a1360: 0x0  nop
    ctx->pc = 0x1a1360u;
    // NOP
label_1a1364:
    // 0x1a1364: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1a1368:
    if (ctx->pc == 0x1A1368u) {
        ctx->pc = 0x1A136Cu;
        goto label_1a136c;
    }
    ctx->pc = 0x1A1364u;
    {
        const bool branch_taken_0x1a1364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1364) {
            ctx->pc = 0x1A1350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1350;
        }
    }
    ctx->pc = 0x1A136Cu;
label_1a136c:
    // 0x1a136c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1a1370:
    if (ctx->pc == 0x1A1370u) {
        ctx->pc = 0x1A1370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A136Cu;
        // 0x1a1370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1374u;
        goto label_1a1374;
    }
    ctx->pc = 0x1A136Cu;
    {
        const bool branch_taken_0x1a136c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A136Cu;
        // 0x1a1370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a136c) {
            ctx->pc = 0x1A1380u;
            goto label_1a1380;
        }
    }
    ctx->pc = 0x1A1374u;
label_1a1374:
    // 0x1a1374: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a1374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1a1378:
    // 0x1a1378: 0xc068d2c  jal         func_1A34B0
label_1a137c:
    if (ctx->pc == 0x1A137Cu) {
        ctx->pc = 0x1A137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1378u;
        // 0x1a137c: 0x24a5a270  addiu       $a1, $a1, -0x5D90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1380u;
        goto label_1a1380;
    }
    ctx->pc = 0x1A1378u;
    SET_GPR_U32(ctx, 31, 0x1A1380u);
    ctx->pc = 0x1A137Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1378u;
    // 0x1a137c: 0x24a5a270  addiu       $a1, $a1, -0x5D90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x1A1380u;
label_1a1380:
    // 0x1a1380: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a1384:
    // 0x1a1384: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a1384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_1a1388:
    // 0x1a1388: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a1388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a138c:
    // 0x1a138c: 0x0  nop
    ctx->pc = 0x1a138cu;
    // NOP
label_1a1390:
    // 0x1a1390: 0x0  nop
    ctx->pc = 0x1a1390u;
    // NOP
label_1a1394:
    // 0x1a1394: 0x0  nop
    ctx->pc = 0x1a1394u;
    // NOP
label_1a1398:
    // 0x1a1398: 0x0  nop
    ctx->pc = 0x1a1398u;
    // NOP
label_1a139c:
    // 0x1a139c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
label_1a13a0:
    if (ctx->pc == 0x1A13A0u) {
        ctx->pc = 0x1A13A4u;
        goto label_1a13a4;
    }
    ctx->pc = 0x1A139Cu;
    {
        const bool branch_taken_0x1a139c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a139c) {
            ctx->pc = 0x1A1388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1388;
        }
    }
    ctx->pc = 0x1A13A4u;
label_1a13a4:
    // 0x1a13a4: 0xc0694f4  jal         func_1A53D0
    ctx->pc = 0x1a13a8u;
    return;
}
