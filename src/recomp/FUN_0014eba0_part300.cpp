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


void FUN_0014eba0_part300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e0b90u: goto label_1e0b90;
        case 0x1e0b94u: goto label_1e0b94;
        case 0x1e0b98u: goto label_1e0b98;
        case 0x1e0b9cu: goto label_1e0b9c;
        case 0x1e0ba0u: goto label_1e0ba0;
        case 0x1e0ba4u: goto label_1e0ba4;
        case 0x1e0ba8u: goto label_1e0ba8;
        case 0x1e0bacu: goto label_1e0bac;
        case 0x1e0bb0u: goto label_1e0bb0;
        case 0x1e0bb4u: goto label_1e0bb4;
        case 0x1e0bb8u: goto label_1e0bb8;
        case 0x1e0bbcu: goto label_1e0bbc;
        case 0x1e0bc0u: goto label_1e0bc0;
        case 0x1e0bc4u: goto label_1e0bc4;
        case 0x1e0bc8u: goto label_1e0bc8;
        case 0x1e0bccu: goto label_1e0bcc;
        case 0x1e0bd0u: goto label_1e0bd0;
        case 0x1e0bd4u: goto label_1e0bd4;
        case 0x1e0bd8u: goto label_1e0bd8;
        case 0x1e0bdcu: goto label_1e0bdc;
        case 0x1e0be0u: goto label_1e0be0;
        case 0x1e0be4u: goto label_1e0be4;
        case 0x1e0be8u: goto label_1e0be8;
        case 0x1e0becu: goto label_1e0bec;
        case 0x1e0bf0u: goto label_1e0bf0;
        case 0x1e0bf4u: goto label_1e0bf4;
        case 0x1e0bf8u: goto label_1e0bf8;
        case 0x1e0bfcu: goto label_1e0bfc;
        case 0x1e0c00u: goto label_1e0c00;
        case 0x1e0c04u: goto label_1e0c04;
        case 0x1e0c08u: goto label_1e0c08;
        case 0x1e0c0cu: goto label_1e0c0c;
        case 0x1e0c10u: goto label_1e0c10;
        case 0x1e0c14u: goto label_1e0c14;
        case 0x1e0c18u: goto label_1e0c18;
        case 0x1e0c1cu: goto label_1e0c1c;
        case 0x1e0c20u: goto label_1e0c20;
        case 0x1e0c24u: goto label_1e0c24;
        case 0x1e0c28u: goto label_1e0c28;
        case 0x1e0c2cu: goto label_1e0c2c;
        case 0x1e0c30u: goto label_1e0c30;
        case 0x1e0c34u: goto label_1e0c34;
        case 0x1e0c38u: goto label_1e0c38;
        case 0x1e0c3cu: goto label_1e0c3c;
        case 0x1e0c40u: goto label_1e0c40;
        case 0x1e0c44u: goto label_1e0c44;
        case 0x1e0c48u: goto label_1e0c48;
        case 0x1e0c4cu: goto label_1e0c4c;
        case 0x1e0c50u: goto label_1e0c50;
        case 0x1e0c54u: goto label_1e0c54;
        case 0x1e0c58u: goto label_1e0c58;
        case 0x1e0c5cu: goto label_1e0c5c;
        case 0x1e0c60u: goto label_1e0c60;
        case 0x1e0c64u: goto label_1e0c64;
        case 0x1e0c68u: goto label_1e0c68;
        case 0x1e0c6cu: goto label_1e0c6c;
        case 0x1e0c70u: goto label_1e0c70;
        case 0x1e0c74u: goto label_1e0c74;
        case 0x1e0c78u: goto label_1e0c78;
        case 0x1e0c7cu: goto label_1e0c7c;
        case 0x1e0c80u: goto label_1e0c80;
        case 0x1e0c84u: goto label_1e0c84;
        case 0x1e0c88u: goto label_1e0c88;
        case 0x1e0c8cu: goto label_1e0c8c;
        case 0x1e0c90u: goto label_1e0c90;
        case 0x1e0c94u: goto label_1e0c94;
        case 0x1e0c98u: goto label_1e0c98;
        case 0x1e0c9cu: goto label_1e0c9c;
        case 0x1e0ca0u: goto label_1e0ca0;
        case 0x1e0ca4u: goto label_1e0ca4;
        case 0x1e0ca8u: goto label_1e0ca8;
        case 0x1e0cacu: goto label_1e0cac;
        case 0x1e0cb0u: goto label_1e0cb0;
        case 0x1e0cb4u: goto label_1e0cb4;
        case 0x1e0cb8u: goto label_1e0cb8;
        case 0x1e0cbcu: goto label_1e0cbc;
        case 0x1e0cc0u: goto label_1e0cc0;
        case 0x1e0cc4u: goto label_1e0cc4;
        case 0x1e0cc8u: goto label_1e0cc8;
        case 0x1e0cccu: goto label_1e0ccc;
        case 0x1e0cd0u: goto label_1e0cd0;
        case 0x1e0cd4u: goto label_1e0cd4;
        case 0x1e0cd8u: goto label_1e0cd8;
        case 0x1e0cdcu: goto label_1e0cdc;
        case 0x1e0ce0u: goto label_1e0ce0;
        case 0x1e0ce4u: goto label_1e0ce4;
        case 0x1e0ce8u: goto label_1e0ce8;
        case 0x1e0cecu: goto label_1e0cec;
        case 0x1e0cf0u: goto label_1e0cf0;
        case 0x1e0cf4u: goto label_1e0cf4;
        case 0x1e0cf8u: goto label_1e0cf8;
        case 0x1e0cfcu: goto label_1e0cfc;
        case 0x1e0d00u: goto label_1e0d00;
        case 0x1e0d04u: goto label_1e0d04;
        case 0x1e0d08u: goto label_1e0d08;
        case 0x1e0d0cu: goto label_1e0d0c;
        case 0x1e0d10u: goto label_1e0d10;
        case 0x1e0d14u: goto label_1e0d14;
        case 0x1e0d18u: goto label_1e0d18;
        case 0x1e0d1cu: goto label_1e0d1c;
        case 0x1e0d20u: goto label_1e0d20;
        case 0x1e0d24u: goto label_1e0d24;
        case 0x1e0d28u: goto label_1e0d28;
        case 0x1e0d2cu: goto label_1e0d2c;
        case 0x1e0d30u: goto label_1e0d30;
        case 0x1e0d34u: goto label_1e0d34;
        case 0x1e0d38u: goto label_1e0d38;
        case 0x1e0d3cu: goto label_1e0d3c;
        case 0x1e0d40u: goto label_1e0d40;
        case 0x1e0d44u: goto label_1e0d44;
        case 0x1e0d48u: goto label_1e0d48;
        case 0x1e0d4cu: goto label_1e0d4c;
        case 0x1e0d50u: goto label_1e0d50;
        case 0x1e0d54u: goto label_1e0d54;
        case 0x1e0d58u: goto label_1e0d58;
        case 0x1e0d5cu: goto label_1e0d5c;
        case 0x1e0d60u: goto label_1e0d60;
        case 0x1e0d64u: goto label_1e0d64;
        case 0x1e0d68u: goto label_1e0d68;
        case 0x1e0d6cu: goto label_1e0d6c;
        case 0x1e0d70u: goto label_1e0d70;
        case 0x1e0d74u: goto label_1e0d74;
        case 0x1e0d78u: goto label_1e0d78;
        case 0x1e0d7cu: goto label_1e0d7c;
        case 0x1e0d80u: goto label_1e0d80;
        case 0x1e0d84u: goto label_1e0d84;
        case 0x1e0d88u: goto label_1e0d88;
        case 0x1e0d8cu: goto label_1e0d8c;
        case 0x1e0d90u: goto label_1e0d90;
        case 0x1e0d94u: goto label_1e0d94;
        case 0x1e0d98u: goto label_1e0d98;
        case 0x1e0d9cu: goto label_1e0d9c;
        case 0x1e0da0u: goto label_1e0da0;
        case 0x1e0da4u: goto label_1e0da4;
        case 0x1e0da8u: goto label_1e0da8;
        case 0x1e0dacu: goto label_1e0dac;
        case 0x1e0db0u: goto label_1e0db0;
        case 0x1e0db4u: goto label_1e0db4;
        case 0x1e0db8u: goto label_1e0db8;
        case 0x1e0dbcu: goto label_1e0dbc;
        case 0x1e0dc0u: goto label_1e0dc0;
        case 0x1e0dc4u: goto label_1e0dc4;
        case 0x1e0dc8u: goto label_1e0dc8;
        case 0x1e0dccu: goto label_1e0dcc;
        case 0x1e0dd0u: goto label_1e0dd0;
        case 0x1e0dd4u: goto label_1e0dd4;
        case 0x1e0dd8u: goto label_1e0dd8;
        case 0x1e0ddcu: goto label_1e0ddc;
        case 0x1e0de0u: goto label_1e0de0;
        case 0x1e0de4u: goto label_1e0de4;
        case 0x1e0de8u: goto label_1e0de8;
        case 0x1e0decu: goto label_1e0dec;
        case 0x1e0df0u: goto label_1e0df0;
        case 0x1e0df4u: goto label_1e0df4;
        case 0x1e0df8u: goto label_1e0df8;
        case 0x1e0dfcu: goto label_1e0dfc;
        case 0x1e0e00u: goto label_1e0e00;
        case 0x1e0e04u: goto label_1e0e04;
        case 0x1e0e08u: goto label_1e0e08;
        case 0x1e0e0cu: goto label_1e0e0c;
        case 0x1e0e10u: goto label_1e0e10;
        case 0x1e0e14u: goto label_1e0e14;
        case 0x1e0e18u: goto label_1e0e18;
        case 0x1e0e1cu: goto label_1e0e1c;
        case 0x1e0e20u: goto label_1e0e20;
        case 0x1e0e24u: goto label_1e0e24;
        case 0x1e0e28u: goto label_1e0e28;
        case 0x1e0e2cu: goto label_1e0e2c;
        case 0x1e0e30u: goto label_1e0e30;
        case 0x1e0e34u: goto label_1e0e34;
        case 0x1e0e38u: goto label_1e0e38;
        case 0x1e0e3cu: goto label_1e0e3c;
        case 0x1e0e40u: goto label_1e0e40;
        case 0x1e0e44u: goto label_1e0e44;
        case 0x1e0e48u: goto label_1e0e48;
        case 0x1e0e4cu: goto label_1e0e4c;
        case 0x1e0e50u: goto label_1e0e50;
        case 0x1e0e54u: goto label_1e0e54;
        case 0x1e0e58u: goto label_1e0e58;
        case 0x1e0e5cu: goto label_1e0e5c;
        case 0x1e0e60u: goto label_1e0e60;
        case 0x1e0e64u: goto label_1e0e64;
        case 0x1e0e68u: goto label_1e0e68;
        case 0x1e0e6cu: goto label_1e0e6c;
        case 0x1e0e70u: goto label_1e0e70;
        case 0x1e0e74u: goto label_1e0e74;
        case 0x1e0e78u: goto label_1e0e78;
        case 0x1e0e7cu: goto label_1e0e7c;
        case 0x1e0e80u: goto label_1e0e80;
        case 0x1e0e84u: goto label_1e0e84;
        case 0x1e0e88u: goto label_1e0e88;
        case 0x1e0e8cu: goto label_1e0e8c;
        case 0x1e0e90u: goto label_1e0e90;
        case 0x1e0e94u: goto label_1e0e94;
        case 0x1e0e98u: goto label_1e0e98;
        case 0x1e0e9cu: goto label_1e0e9c;
        case 0x1e0ea0u: goto label_1e0ea0;
        case 0x1e0ea4u: goto label_1e0ea4;
        case 0x1e0ea8u: goto label_1e0ea8;
        case 0x1e0eacu: goto label_1e0eac;
        case 0x1e0eb0u: goto label_1e0eb0;
        case 0x1e0eb4u: goto label_1e0eb4;
        case 0x1e0eb8u: goto label_1e0eb8;
        case 0x1e0ebcu: goto label_1e0ebc;
        case 0x1e0ec0u: goto label_1e0ec0;
        case 0x1e0ec4u: goto label_1e0ec4;
        case 0x1e0ec8u: goto label_1e0ec8;
        case 0x1e0eccu: goto label_1e0ecc;
        case 0x1e0ed0u: goto label_1e0ed0;
        case 0x1e0ed4u: goto label_1e0ed4;
        case 0x1e0ed8u: goto label_1e0ed8;
        case 0x1e0edcu: goto label_1e0edc;
        case 0x1e0ee0u: goto label_1e0ee0;
        case 0x1e0ee4u: goto label_1e0ee4;
        case 0x1e0ee8u: goto label_1e0ee8;
        case 0x1e0eecu: goto label_1e0eec;
        case 0x1e0ef0u: goto label_1e0ef0;
        case 0x1e0ef4u: goto label_1e0ef4;
        case 0x1e0ef8u: goto label_1e0ef8;
        case 0x1e0efcu: goto label_1e0efc;
        case 0x1e0f00u: goto label_1e0f00;
        case 0x1e0f04u: goto label_1e0f04;
        case 0x1e0f08u: goto label_1e0f08;
        case 0x1e0f0cu: goto label_1e0f0c;
        case 0x1e0f10u: goto label_1e0f10;
        case 0x1e0f14u: goto label_1e0f14;
        case 0x1e0f18u: goto label_1e0f18;
        case 0x1e0f1cu: goto label_1e0f1c;
        case 0x1e0f20u: goto label_1e0f20;
        case 0x1e0f24u: goto label_1e0f24;
        case 0x1e0f28u: goto label_1e0f28;
        case 0x1e0f2cu: goto label_1e0f2c;
        case 0x1e0f30u: goto label_1e0f30;
        case 0x1e0f34u: goto label_1e0f34;
        case 0x1e0f38u: goto label_1e0f38;
        case 0x1e0f3cu: goto label_1e0f3c;
        case 0x1e0f40u: goto label_1e0f40;
        case 0x1e0f44u: goto label_1e0f44;
        case 0x1e0f48u: goto label_1e0f48;
        case 0x1e0f4cu: goto label_1e0f4c;
        case 0x1e0f50u: goto label_1e0f50;
        case 0x1e0f54u: goto label_1e0f54;
        case 0x1e0f58u: goto label_1e0f58;
        case 0x1e0f5cu: goto label_1e0f5c;
        case 0x1e0f60u: goto label_1e0f60;
        case 0x1e0f64u: goto label_1e0f64;
        case 0x1e0f68u: goto label_1e0f68;
        case 0x1e0f6cu: goto label_1e0f6c;
        case 0x1e0f70u: goto label_1e0f70;
        case 0x1e0f74u: goto label_1e0f74;
        case 0x1e0f78u: goto label_1e0f78;
        case 0x1e0f7cu: goto label_1e0f7c;
        case 0x1e0f80u: goto label_1e0f80;
        case 0x1e0f84u: goto label_1e0f84;
        case 0x1e0f88u: goto label_1e0f88;
        case 0x1e0f8cu: goto label_1e0f8c;
        case 0x1e0f90u: goto label_1e0f90;
        case 0x1e0f94u: goto label_1e0f94;
        case 0x1e0f98u: goto label_1e0f98;
        case 0x1e0f9cu: goto label_1e0f9c;
        case 0x1e0fa0u: goto label_1e0fa0;
        case 0x1e0fa4u: goto label_1e0fa4;
        case 0x1e0fa8u: goto label_1e0fa8;
        case 0x1e0facu: goto label_1e0fac;
        case 0x1e0fb0u: goto label_1e0fb0;
        case 0x1e0fb4u: goto label_1e0fb4;
        case 0x1e0fb8u: goto label_1e0fb8;
        case 0x1e0fbcu: goto label_1e0fbc;
        case 0x1e0fc0u: goto label_1e0fc0;
        case 0x1e0fc4u: goto label_1e0fc4;
        case 0x1e0fc8u: goto label_1e0fc8;
        case 0x1e0fccu: goto label_1e0fcc;
        case 0x1e0fd0u: goto label_1e0fd0;
        case 0x1e0fd4u: goto label_1e0fd4;
        case 0x1e0fd8u: goto label_1e0fd8;
        case 0x1e0fdcu: goto label_1e0fdc;
        case 0x1e0fe0u: goto label_1e0fe0;
        case 0x1e0fe4u: goto label_1e0fe4;
        case 0x1e0fe8u: goto label_1e0fe8;
        case 0x1e0fecu: goto label_1e0fec;
        case 0x1e0ff0u: goto label_1e0ff0;
        case 0x1e0ff4u: goto label_1e0ff4;
        case 0x1e0ff8u: goto label_1e0ff8;
        case 0x1e0ffcu: goto label_1e0ffc;
        case 0x1e1000u: goto label_1e1000;
        case 0x1e1004u: goto label_1e1004;
        case 0x1e1008u: goto label_1e1008;
        case 0x1e100cu: goto label_1e100c;
        case 0x1e1010u: goto label_1e1010;
        case 0x1e1014u: goto label_1e1014;
        case 0x1e1018u: goto label_1e1018;
        case 0x1e101cu: goto label_1e101c;
        case 0x1e1020u: goto label_1e1020;
        case 0x1e1024u: goto label_1e1024;
        case 0x1e1028u: goto label_1e1028;
        case 0x1e102cu: goto label_1e102c;
        case 0x1e1030u: goto label_1e1030;
        case 0x1e1034u: goto label_1e1034;
        case 0x1e1038u: goto label_1e1038;
        case 0x1e103cu: goto label_1e103c;
        case 0x1e1040u: goto label_1e1040;
        case 0x1e1044u: goto label_1e1044;
        case 0x1e1048u: goto label_1e1048;
        case 0x1e104cu: goto label_1e104c;
        case 0x1e1050u: goto label_1e1050;
        case 0x1e1054u: goto label_1e1054;
        case 0x1e1058u: goto label_1e1058;
        case 0x1e105cu: goto label_1e105c;
        case 0x1e1060u: goto label_1e1060;
        case 0x1e1064u: goto label_1e1064;
        case 0x1e1068u: goto label_1e1068;
        case 0x1e106cu: goto label_1e106c;
        case 0x1e1070u: goto label_1e1070;
        case 0x1e1074u: goto label_1e1074;
        case 0x1e1078u: goto label_1e1078;
        case 0x1e107cu: goto label_1e107c;
        case 0x1e1080u: goto label_1e1080;
        case 0x1e1084u: goto label_1e1084;
        case 0x1e1088u: goto label_1e1088;
        case 0x1e108cu: goto label_1e108c;
        case 0x1e1090u: goto label_1e1090;
        case 0x1e1094u: goto label_1e1094;
        case 0x1e1098u: goto label_1e1098;
        case 0x1e109cu: goto label_1e109c;
        case 0x1e10a0u: goto label_1e10a0;
        case 0x1e10a4u: goto label_1e10a4;
        case 0x1e10a8u: goto label_1e10a8;
        case 0x1e10acu: goto label_1e10ac;
        case 0x1e10b0u: goto label_1e10b0;
        case 0x1e10b4u: goto label_1e10b4;
        case 0x1e10b8u: goto label_1e10b8;
        case 0x1e10bcu: goto label_1e10bc;
        case 0x1e10c0u: goto label_1e10c0;
        case 0x1e10c4u: goto label_1e10c4;
        case 0x1e10c8u: goto label_1e10c8;
        case 0x1e10ccu: goto label_1e10cc;
        case 0x1e10d0u: goto label_1e10d0;
        case 0x1e10d4u: goto label_1e10d4;
        case 0x1e10d8u: goto label_1e10d8;
        case 0x1e10dcu: goto label_1e10dc;
        case 0x1e10e0u: goto label_1e10e0;
        case 0x1e10e4u: goto label_1e10e4;
        case 0x1e10e8u: goto label_1e10e8;
        case 0x1e10ecu: goto label_1e10ec;
        case 0x1e10f0u: goto label_1e10f0;
        case 0x1e10f4u: goto label_1e10f4;
        case 0x1e10f8u: goto label_1e10f8;
        case 0x1e10fcu: goto label_1e10fc;
        case 0x1e1100u: goto label_1e1100;
        case 0x1e1104u: goto label_1e1104;
        case 0x1e1108u: goto label_1e1108;
        case 0x1e110cu: goto label_1e110c;
        case 0x1e1110u: goto label_1e1110;
        case 0x1e1114u: goto label_1e1114;
        case 0x1e1118u: goto label_1e1118;
        case 0x1e111cu: goto label_1e111c;
        case 0x1e1120u: goto label_1e1120;
        case 0x1e1124u: goto label_1e1124;
        case 0x1e1128u: goto label_1e1128;
        case 0x1e112cu: goto label_1e112c;
        case 0x1e1130u: goto label_1e1130;
        case 0x1e1134u: goto label_1e1134;
        case 0x1e1138u: goto label_1e1138;
        case 0x1e113cu: goto label_1e113c;
        case 0x1e1140u: goto label_1e1140;
        case 0x1e1144u: goto label_1e1144;
        case 0x1e1148u: goto label_1e1148;
        case 0x1e114cu: goto label_1e114c;
        case 0x1e1150u: goto label_1e1150;
        case 0x1e1154u: goto label_1e1154;
        case 0x1e1158u: goto label_1e1158;
        case 0x1e115cu: goto label_1e115c;
        case 0x1e1160u: goto label_1e1160;
        case 0x1e1164u: goto label_1e1164;
        case 0x1e1168u: goto label_1e1168;
        case 0x1e116cu: goto label_1e116c;
        case 0x1e1170u: goto label_1e1170;
        case 0x1e1174u: goto label_1e1174;
        case 0x1e1178u: goto label_1e1178;
        case 0x1e117cu: goto label_1e117c;
        case 0x1e1180u: goto label_1e1180;
        case 0x1e1184u: goto label_1e1184;
        case 0x1e1188u: goto label_1e1188;
        case 0x1e118cu: goto label_1e118c;
        case 0x1e1190u: goto label_1e1190;
        case 0x1e1194u: goto label_1e1194;
        case 0x1e1198u: goto label_1e1198;
        case 0x1e119cu: goto label_1e119c;
        case 0x1e11a0u: goto label_1e11a0;
        case 0x1e11a4u: goto label_1e11a4;
        case 0x1e11a8u: goto label_1e11a8;
        case 0x1e11acu: goto label_1e11ac;
        case 0x1e11b0u: goto label_1e11b0;
        case 0x1e11b4u: goto label_1e11b4;
        case 0x1e11b8u: goto label_1e11b8;
        case 0x1e11bcu: goto label_1e11bc;
        case 0x1e11c0u: goto label_1e11c0;
        case 0x1e11c4u: goto label_1e11c4;
        case 0x1e11c8u: goto label_1e11c8;
        case 0x1e11ccu: goto label_1e11cc;
        case 0x1e11d0u: goto label_1e11d0;
        case 0x1e11d4u: goto label_1e11d4;
        case 0x1e11d8u: goto label_1e11d8;
        case 0x1e11dcu: goto label_1e11dc;
        case 0x1e11e0u: goto label_1e11e0;
        case 0x1e11e4u: goto label_1e11e4;
        case 0x1e11e8u: goto label_1e11e8;
        case 0x1e11ecu: goto label_1e11ec;
        case 0x1e11f0u: goto label_1e11f0;
        case 0x1e11f4u: goto label_1e11f4;
        case 0x1e11f8u: goto label_1e11f8;
        case 0x1e11fcu: goto label_1e11fc;
        case 0x1e1200u: goto label_1e1200;
        case 0x1e1204u: goto label_1e1204;
        case 0x1e1208u: goto label_1e1208;
        case 0x1e120cu: goto label_1e120c;
        case 0x1e1210u: goto label_1e1210;
        case 0x1e1214u: goto label_1e1214;
        case 0x1e1218u: goto label_1e1218;
        case 0x1e121cu: goto label_1e121c;
        case 0x1e1220u: goto label_1e1220;
        case 0x1e1224u: goto label_1e1224;
        case 0x1e1228u: goto label_1e1228;
        case 0x1e122cu: goto label_1e122c;
        case 0x1e1230u: goto label_1e1230;
        case 0x1e1234u: goto label_1e1234;
        case 0x1e1238u: goto label_1e1238;
        case 0x1e123cu: goto label_1e123c;
        case 0x1e1240u: goto label_1e1240;
        case 0x1e1244u: goto label_1e1244;
        case 0x1e1248u: goto label_1e1248;
        case 0x1e124cu: goto label_1e124c;
        case 0x1e1250u: goto label_1e1250;
        case 0x1e1254u: goto label_1e1254;
        case 0x1e1258u: goto label_1e1258;
        case 0x1e125cu: goto label_1e125c;
        case 0x1e1260u: goto label_1e1260;
        case 0x1e1264u: goto label_1e1264;
        case 0x1e1268u: goto label_1e1268;
        case 0x1e126cu: goto label_1e126c;
        case 0x1e1270u: goto label_1e1270;
        case 0x1e1274u: goto label_1e1274;
        case 0x1e1278u: goto label_1e1278;
        case 0x1e127cu: goto label_1e127c;
        case 0x1e1280u: goto label_1e1280;
        case 0x1e1284u: goto label_1e1284;
        case 0x1e1288u: goto label_1e1288;
        case 0x1e128cu: goto label_1e128c;
        case 0x1e1290u: goto label_1e1290;
        case 0x1e1294u: goto label_1e1294;
        case 0x1e1298u: goto label_1e1298;
        case 0x1e129cu: goto label_1e129c;
        case 0x1e12a0u: goto label_1e12a0;
        case 0x1e12a4u: goto label_1e12a4;
        case 0x1e12a8u: goto label_1e12a8;
        case 0x1e12acu: goto label_1e12ac;
        case 0x1e12b0u: goto label_1e12b0;
        case 0x1e12b4u: goto label_1e12b4;
        case 0x1e12b8u: goto label_1e12b8;
        case 0x1e12bcu: goto label_1e12bc;
        case 0x1e12c0u: goto label_1e12c0;
        case 0x1e12c4u: goto label_1e12c4;
        case 0x1e12c8u: goto label_1e12c8;
        case 0x1e12ccu: goto label_1e12cc;
        case 0x1e12d0u: goto label_1e12d0;
        case 0x1e12d4u: goto label_1e12d4;
        case 0x1e12d8u: goto label_1e12d8;
        case 0x1e12dcu: goto label_1e12dc;
        case 0x1e12e0u: goto label_1e12e0;
        case 0x1e12e4u: goto label_1e12e4;
        case 0x1e12e8u: goto label_1e12e8;
        case 0x1e12ecu: goto label_1e12ec;
        case 0x1e12f0u: goto label_1e12f0;
        case 0x1e12f4u: goto label_1e12f4;
        case 0x1e12f8u: goto label_1e12f8;
        case 0x1e12fcu: goto label_1e12fc;
        case 0x1e1300u: goto label_1e1300;
        case 0x1e1304u: goto label_1e1304;
        case 0x1e1308u: goto label_1e1308;
        case 0x1e130cu: goto label_1e130c;
        case 0x1e1310u: goto label_1e1310;
        case 0x1e1314u: goto label_1e1314;
        case 0x1e1318u: goto label_1e1318;
        case 0x1e131cu: goto label_1e131c;
        case 0x1e1320u: goto label_1e1320;
        case 0x1e1324u: goto label_1e1324;
        case 0x1e1328u: goto label_1e1328;
        case 0x1e132cu: goto label_1e132c;
        case 0x1e1330u: goto label_1e1330;
        case 0x1e1334u: goto label_1e1334;
        case 0x1e1338u: goto label_1e1338;
        case 0x1e133cu: goto label_1e133c;
        case 0x1e1340u: goto label_1e1340;
        case 0x1e1344u: goto label_1e1344;
        case 0x1e1348u: goto label_1e1348;
        case 0x1e134cu: goto label_1e134c;
        case 0x1e1350u: goto label_1e1350;
        case 0x1e1354u: goto label_1e1354;
        case 0x1e1358u: goto label_1e1358;
        case 0x1e135cu: goto label_1e135c;
        default: return;
    }

label_1e0b90:
    // 0x1e0b90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e0b90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0b94:
    // 0x1e0b94: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1e0b94u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0b98:
    // 0x1e0b98: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1e0b98u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0b9c:
    // 0x1e0b9c: 0x0  nop
    ctx->pc = 0x1e0b9cu;
    // NOP
label_1e0ba0:
    // 0x1e0ba0: 0x2527fff0  addiu       $a3, $t1, -0x10
    ctx->pc = 0x1e0ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
label_1e0ba4:
    // 0x1e0ba4: 0x749c0  sll         $t1, $a3, 7
    ctx->pc = 0x1e0ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
label_1e0ba8:
    // 0x1e0ba8: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_1e0bac:
    if (ctx->pc == 0x1E0BACu) {
        ctx->pc = 0x1E0BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BA8u;
        // 0x1e0bac: 0x938c3  sra         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0BB0u;
        goto label_1e0bb0;
    }
    ctx->pc = 0x1E0BA8u;
    {
        const bool branch_taken_0x1e0ba8 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1E0BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BA8u;
        // 0x1e0bac: 0x938c3  sra         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ba8) {
            ctx->pc = 0x1E0BB8u;
            goto label_1e0bb8;
        }
    }
    ctx->pc = 0x1E0BB0u;
label_1e0bb0:
    // 0x1e0bb0: 0x25270007  addiu       $a3, $t1, 0x7
    ctx->pc = 0x1e0bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
label_1e0bb4:
    // 0x1e0bb4: 0x738c3  sra         $a3, $a3, 3
    ctx->pc = 0x1e0bb4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 3));
label_1e0bb8:
    // 0x1e0bb8: 0x147c023  subu        $t8, $t2, $a3
    ctx->pc = 0x1e0bb8u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_1e0bbc:
    // 0x1e0bbc: 0x7010003  bgez        $t8, . + 4 + (0x3 << 2)
label_1e0bc0:
    if (ctx->pc == 0x1E0BC0u) {
        ctx->pc = 0x1E0BC4u;
        goto label_1e0bc4;
    }
    ctx->pc = 0x1E0BBCu;
    {
        const bool branch_taken_0x1e0bbc = (GPR_S32(ctx, 24) >= 0);
        if (branch_taken_0x1e0bbc) {
            ctx->pc = 0x1E0BCCu;
            goto label_1e0bcc;
        }
    }
    ctx->pc = 0x1E0BC4u;
label_1e0bc4:
    // 0x1e0bc4: 0x10000001  b           . + 4 + (0x1 << 2)
label_1e0bc8:
    if (ctx->pc == 0x1E0BC8u) {
        ctx->pc = 0x1E0BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BC4u;
        // 0x1e0bc8: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0BCCu;
        goto label_1e0bcc;
    }
    ctx->pc = 0x1E0BC4u;
    {
        const bool branch_taken_0x1e0bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BC4u;
        // 0x1e0bc8: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0bc4) {
            ctx->pc = 0x1E0BCCu;
            goto label_1e0bcc;
        }
    }
    ctx->pc = 0x1E0BCCu;
label_1e0bcc:
    // 0x1e0bcc: 0x0  nop
    ctx->pc = 0x1e0bccu;
    // NOP
label_1e0bd0:
    // 0x1e0bd0: 0xa64821  addu        $t1, $a1, $a2
    ctx->pc = 0x1e0bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1e0bd4:
    // 0x1e0bd4: 0xa52e0160  sh          $t6, 0x160($t1)
    ctx->pc = 0x1e0bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 352), (uint16_t)GPR_U32(ctx, 14));
label_1e0bd8:
    // 0x1e0bd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e0bdc:
    // 0x1e0bdc: 0xa52f0170  sh          $t7, 0x170($t1)
    ctx->pc = 0x1e0bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 368), (uint16_t)GPR_U32(ctx, 15));
label_1e0be0:
    // 0x1e0be0: 0x28470010  slti        $a3, $v0, 0x10
    ctx->pc = 0x1e0be0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1e0be4:
    // 0x1e0be4: 0xa1380150  sb          $t8, 0x150($t1)
    ctx->pc = 0x1e0be4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 336), (uint8_t)GPR_U32(ctx, 24));
label_1e0be8:
    // 0x1e0be8: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x1e0be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
label_1e0bec:
    // 0x1e0bec: 0xa1380151  sb          $t8, 0x151($t1)
    ctx->pc = 0x1e0becu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 337), (uint8_t)GPR_U32(ctx, 24));
label_1e0bf0:
    // 0x1e0bf0: 0xa1380152  sb          $t8, 0x152($t1)
    ctx->pc = 0x1e0bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 338), (uint8_t)GPR_U32(ctx, 24));
label_1e0bf4:
    // 0x1e0bf4: 0xa1230153  sb          $v1, 0x153($t1)
    ctx->pc = 0x1e0bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 339), (uint8_t)GPR_U32(ctx, 3));
label_1e0bf8:
    // 0x1e0bf8: 0x14e0ffb5  bnez        $a3, . + 4 + (-0x4B << 2)
label_1e0bfc:
    if (ctx->pc == 0x1E0BFCu) {
        ctx->pc = 0x1E0BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BF8u;
        // 0x1e0bfc: 0xad280154  sw          $t0, 0x154($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 340), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C00u;
        goto label_1e0c00;
    }
    ctx->pc = 0x1E0BF8u;
    {
        const bool branch_taken_0x1e0bf8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BF8u;
        // 0x1e0bfc: 0xad280154  sw          $t0, 0x154($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 340), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0bf8) {
            ctx->pc = 0x1E0AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1e0ad0; return; }
        }
    }
    ctx->pc = 0x1E0C00u;
label_1e0c00:
    // 0x1e0c00: 0x8f828d20  lw          $v0, -0x72E0($gp)
    ctx->pc = 0x1e0c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937888)));
label_1e0c04:
    // 0x1e0c04: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1e0c04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1e0c08:
    // 0x1e0c08: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1e0c0c:
    if (ctx->pc == 0x1E0C0Cu) {
        ctx->pc = 0x1E0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C08u;
        // 0x1e0c0c: 0x24a30ae0  addiu       $v1, $a1, 0xAE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C10u;
        goto label_1e0c10;
    }
    ctx->pc = 0x1E0C08u;
    {
        const bool branch_taken_0x1e0c08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C08u;
        // 0x1e0c0c: 0x24a30ae0  addiu       $v1, $a1, 0xAE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c08) {
            ctx->pc = 0x1E0C18u;
            goto label_1e0c18;
        }
    }
    ctx->pc = 0x1E0C10u;
label_1e0c10:
    // 0x1e0c10: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e0c14:
    if (ctx->pc == 0x1E0C14u) {
        ctx->pc = 0x1E0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C10u;
        // 0x1e0c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C18u;
        goto label_1e0c18;
    }
    ctx->pc = 0x1E0C10u;
    {
        const bool branch_taken_0x1e0c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C10u;
        // 0x1e0c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c10) {
            ctx->pc = 0x1E0C1Cu;
            goto label_1e0c1c;
        }
    }
    ctx->pc = 0x1E0C18u;
label_1e0c18:
    // 0x1e0c18: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e0c1c:
    // 0x1e0c1c: 0xa0620073  sb          $v0, 0x73($v1)
    ctx->pc = 0x1e0c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 115), (uint8_t)GPR_U32(ctx, 2));
label_1e0c20:
    // 0x1e0c20: 0x8f828d20  lw          $v0, -0x72E0($gp)
    ctx->pc = 0x1e0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937888)));
label_1e0c24:
    // 0x1e0c24: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1e0c24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1e0c28:
    // 0x1e0c28: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1e0c2c:
    if (ctx->pc == 0x1E0C2Cu) {
        ctx->pc = 0x1E0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C28u;
        // 0x1e0c2c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C30u;
        goto label_1e0c30;
    }
    ctx->pc = 0x1E0C28u;
    {
        const bool branch_taken_0x1e0c28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C28u;
        // 0x1e0c2c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c28) {
            ctx->pc = 0x1E0C50u;
            goto label_1e0c50;
        }
    }
    ctx->pc = 0x1E0C30u;
label_1e0c30:
    // 0x1e0c30: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1e0c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1e0c34:
    // 0x1e0c34: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_1e0c38:
    if (ctx->pc == 0x1E0C38u) {
        ctx->pc = 0x1E0C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C34u;
        // 0x1e0c38: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C3Cu;
        goto label_1e0c3c;
    }
    ctx->pc = 0x1E0C34u;
    {
        const bool branch_taken_0x1e0c34 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E0C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C34u;
        // 0x1e0c38: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c34) {
            ctx->pc = 0x1E0C50u;
            goto label_1e0c50;
        }
    }
    ctx->pc = 0x1E0C3Cu;
label_1e0c3c:
    // 0x1e0c3c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1e0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1e0c40:
    // 0x1e0c40: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x1e0c40u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_1e0c44:
    // 0x1e0c44: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e0c48:
    if (ctx->pc == 0x1E0C48u) {
        ctx->pc = 0x1E0C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C44u;
        // 0x1e0c48: 0xa0a600b3  sb          $a2, 0xB3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 179), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C4Cu;
        goto label_1e0c4c;
    }
    ctx->pc = 0x1E0C44u;
    {
        const bool branch_taken_0x1e0c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C44u;
        // 0x1e0c48: 0xa0a600b3  sb          $a2, 0xB3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 179), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c44) {
            ctx->pc = 0x1E0C54u;
            goto label_1e0c54;
        }
    }
    ctx->pc = 0x1E0C4Cu;
label_1e0c4c:
    // 0x1e0c4c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e0c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e0c50:
    // 0x1e0c50: 0xa0a600b3  sb          $a2, 0xB3($a1)
    ctx->pc = 0x1e0c50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 179), (uint8_t)GPR_U32(ctx, 6));
label_1e0c54:
    // 0x1e0c54: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e0c54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0c58:
    // 0x1e0c58: 0xa0a60083  sb          $a2, 0x83($a1)
    ctx->pc = 0x1e0c58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 131), (uint8_t)GPR_U32(ctx, 6));
label_1e0c5c:
    // 0x1e0c5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0c60:
    // 0x1e0c60: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x1e0c60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1e0c64:
    // 0x1e0c64: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x1e0c64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e0c68:
    // 0x1e0c68: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x1e0c68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e0c6c:
    // 0x1e0c6c: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x1e0c6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e0c70:
    // 0x1e0c70: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1e0c70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_1e0c74:
    // 0x1e0c74: 0x8f898d24  lw          $t1, -0x72DC($gp)
    ctx->pc = 0x1e0c74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937892)));
label_1e0c78:
    // 0x1e0c78: 0x15200006  bnez        $t1, . + 4 + (0x6 << 2)
label_1e0c7c:
    if (ctx->pc == 0x1E0C7Cu) {
        ctx->pc = 0x1E0C80u;
        goto label_1e0c80;
    }
    ctx->pc = 0x1E0C78u;
    {
        const bool branch_taken_0x1e0c78 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0c78) {
            ctx->pc = 0x1E0C94u;
            goto label_1e0c94;
        }
    }
    ctx->pc = 0x1E0C80u;
label_1e0c80:
    // 0x1e0c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0c84:
    // 0x1e0c84: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1e0c84u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0c88:
    // 0x1e0c88: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1e0c88u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0c8c:
    // 0x1e0c8c: 0x10000039  b           . + 4 + (0x39 << 2)
label_1e0c90:
    if (ctx->pc == 0x1E0C90u) {
        ctx->pc = 0x1E0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C8Cu;
        // 0x1e0c90: 0x24180080  addiu       $t8, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C94u;
        goto label_1e0c94;
    }
    ctx->pc = 0x1E0C8Cu;
    {
        const bool branch_taken_0x1e0c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C8Cu;
        // 0x1e0c90: 0x24180080  addiu       $t8, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c8c) {
            ctx->pc = 0x1E0D74u;
            goto label_1e0d74;
        }
    }
    ctx->pc = 0x1E0C94u;
label_1e0c94:
    // 0x1e0c94: 0x0  nop
    ctx->pc = 0x1e0c94u;
    // NOP
label_1e0c98:
    // 0x1e0c98: 0x29210010  slti        $at, $t1, 0x10
    ctx->pc = 0x1e0c98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
label_1e0c9c:
    // 0x1e0c9c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_1e0ca0:
    if (ctx->pc == 0x1E0CA0u) {
        ctx->pc = 0x1E0CA4u;
        goto label_1e0ca4;
    }
    ctx->pc = 0x1E0C9Cu;
    {
        const bool branch_taken_0x1e0c9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0c9c) {
            ctx->pc = 0x1E0D20u;
            goto label_1e0d20;
        }
    }
    ctx->pc = 0x1E0CA4u;
label_1e0ca4:
    // 0x1e0ca4: 0x931c0  sll         $a2, $t1, 7
    ctx->pc = 0x1e0ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 7));
label_1e0ca8:
    // 0x1e0ca8: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e0cac:
    if (ctx->pc == 0x1E0CACu) {
        ctx->pc = 0x1E0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CA8u;
        // 0x1e0cac: 0x63903  sra         $a3, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0CB0u;
        goto label_1e0cb0;
    }
    ctx->pc = 0x1E0CA8u;
    {
        const bool branch_taken_0x1e0ca8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CA8u;
        // 0x1e0cac: 0x63903  sra         $a3, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ca8) {
            ctx->pc = 0x1E0CB8u;
            goto label_1e0cb8;
        }
    }
    ctx->pc = 0x1E0CB0u;
label_1e0cb0:
    // 0x1e0cb0: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1e0cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1e0cb4:
    // 0x1e0cb4: 0x63903  sra         $a3, $a2, 4
    ctx->pc = 0x1e0cb4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
label_1e0cb8:
    // 0x1e0cb8: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1e0cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e0cbc:
    // 0x1e0cbc: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x1e0cbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1e0cc0:
    // 0x1e0cc0: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e0cc4:
    if (ctx->pc == 0x1E0CC4u) {
        ctx->pc = 0x1E0CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CC0u;
        // 0x1e0cc4: 0x63903  sra         $a3, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0CC8u;
        goto label_1e0cc8;
    }
    ctx->pc = 0x1E0CC0u;
    {
        const bool branch_taken_0x1e0cc0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E0CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CC0u;
        // 0x1e0cc4: 0x63903  sra         $a3, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cc0) {
            ctx->pc = 0x1E0CD0u;
            goto label_1e0cd0;
        }
    }
    ctx->pc = 0x1E0CC8u;
label_1e0cc8:
    // 0x1e0cc8: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1e0cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1e0ccc:
    // 0x1e0ccc: 0x63903  sra         $a3, $a2, 4
    ctx->pc = 0x1e0cccu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
label_1e0cd0:
    // 0x1e0cd0: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
label_1e0cd4:
    if (ctx->pc == 0x1E0CD4u) {
        ctx->pc = 0x1E0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CD0u;
        // 0x1e0cd4: 0x73083  sra         $a2, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0CD8u;
        goto label_1e0cd8;
    }
    ctx->pc = 0x1E0CD0u;
    {
        const bool branch_taken_0x1e0cd0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1E0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CD0u;
        // 0x1e0cd4: 0x73083  sra         $a2, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cd0) {
            ctx->pc = 0x1E0CE0u;
            goto label_1e0ce0;
        }
    }
    ctx->pc = 0x1E0CD8u;
label_1e0cd8:
    // 0x1e0cd8: 0x24e60003  addiu       $a2, $a3, 0x3
    ctx->pc = 0x1e0cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
label_1e0cdc:
    // 0x1e0cdc: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x1e0cdcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_1e0ce0:
    // 0x1e0ce0: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1e0ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_1e0ce4:
    // 0x1e0ce4: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_1e0ce8:
    if (ctx->pc == 0x1E0CE8u) {
        ctx->pc = 0x1E0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CE4u;
        // 0x1e0ce8: 0x93903  sra         $a3, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0CECu;
        goto label_1e0cec;
    }
    ctx->pc = 0x1E0CE4u;
    {
        const bool branch_taken_0x1e0ce4 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1E0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CE4u;
        // 0x1e0ce8: 0x93903  sra         $a3, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ce4) {
            ctx->pc = 0x1E0CF4u;
            goto label_1e0cf4;
        }
    }
    ctx->pc = 0x1E0CECu;
label_1e0cec:
    // 0x1e0cec: 0x2527000f  addiu       $a3, $t1, 0xF
    ctx->pc = 0x1e0cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
label_1e0cf0:
    // 0x1e0cf0: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x1e0cf0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
label_1e0cf4:
    // 0x1e0cf4: 0x1a74823  subu        $t1, $t5, $a3
    ctx->pc = 0x1e0cf4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
label_1e0cf8:
    // 0x1e0cf8: 0x160c02d  daddu       $t8, $t3, $zero
    ctx->pc = 0x1e0cf8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1e0cfc:
    // 0x1e0cfc: 0x1833823  subu        $a3, $t4, $v1
    ctx->pc = 0x1e0cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_1e0d00:
    // 0x1e0d00: 0x1273818  mult        $a3, $t1, $a3
    ctx->pc = 0x1e0d00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_1e0d04:
    // 0x1e0d04: 0x1674823  subu        $t1, $t3, $a3
    ctx->pc = 0x1e0d04u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_1e0d08:
    // 0x1e0d08: 0x24e70280  addiu       $a3, $a3, 0x280
    ctx->pc = 0x1e0d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 640));
label_1e0d0c:
    // 0x1e0d0c: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x1e0d0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1e0d10:
    // 0x1e0d10: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1e0d10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1e0d14:
    // 0x1e0d14: 0x252f6c00  addiu       $t7, $t1, 0x6C00
    ctx->pc = 0x1e0d14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 27648));
label_1e0d18:
    // 0x1e0d18: 0x10000016  b           . + 4 + (0x16 << 2)
label_1e0d1c:
    if (ctx->pc == 0x1E0D1Cu) {
        ctx->pc = 0x1E0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D18u;
        // 0x1e0d1c: 0x24ee6c00  addiu       $t6, $a3, 0x6C00 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0D20u;
        goto label_1e0d20;
    }
    ctx->pc = 0x1E0D18u;
    {
        const bool branch_taken_0x1e0d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D18u;
        // 0x1e0d1c: 0x24ee6c00  addiu       $t6, $a3, 0x6C00 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d18) {
            ctx->pc = 0x1E0D74u;
            goto label_1e0d74;
        }
    }
    ctx->pc = 0x1E0D20u;
label_1e0d20:
    // 0x1e0d20: 0x146a0005  bne         $v1, $t2, . + 4 + (0x5 << 2)
label_1e0d24:
    if (ctx->pc == 0x1E0D24u) {
        ctx->pc = 0x1E0D28u;
        goto label_1e0d28;
    }
    ctx->pc = 0x1E0D20u;
    {
        const bool branch_taken_0x1e0d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x1e0d20) {
            ctx->pc = 0x1E0D38u;
            goto label_1e0d38;
        }
    }
    ctx->pc = 0x1E0D28u;
label_1e0d28:
    // 0x1e0d28: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e0d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e0d2c:
    // 0x1e0d2c: 0x240f7400  addiu       $t7, $zero, 0x7400
    ctx->pc = 0x1e0d2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 29696));
label_1e0d30:
    // 0x1e0d30: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e0d34:
    if (ctx->pc == 0x1E0D34u) {
        ctx->pc = 0x1E0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D30u;
        // 0x1e0d34: 0x340e9400  ori         $t6, $zero, 0x9400 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0D38u;
        goto label_1e0d38;
    }
    ctx->pc = 0x1E0D30u;
    {
        const bool branch_taken_0x1e0d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D30u;
        // 0x1e0d34: 0x340e9400  ori         $t6, $zero, 0x9400 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d30) {
            ctx->pc = 0x1E0D44u;
            goto label_1e0d44;
        }
    }
    ctx->pc = 0x1E0D38u;
label_1e0d38:
    // 0x1e0d38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0d3c:
    // 0x1e0d3c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1e0d3cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0d40:
    // 0x1e0d40: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1e0d40u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0d44:
    // 0x1e0d44: 0x0  nop
    ctx->pc = 0x1e0d44u;
    // NOP
label_1e0d48:
    // 0x1e0d48: 0x2527fff0  addiu       $a3, $t1, -0x10
    ctx->pc = 0x1e0d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
label_1e0d4c:
    // 0x1e0d4c: 0x749c0  sll         $t1, $a3, 7
    ctx->pc = 0x1e0d4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
label_1e0d50:
    // 0x1e0d50: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_1e0d54:
    if (ctx->pc == 0x1E0D54u) {
        ctx->pc = 0x1E0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D50u;
        // 0x1e0d54: 0x938c3  sra         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0D58u;
        goto label_1e0d58;
    }
    ctx->pc = 0x1E0D50u;
    {
        const bool branch_taken_0x1e0d50 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1E0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D50u;
        // 0x1e0d54: 0x938c3  sra         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d50) {
            ctx->pc = 0x1E0D60u;
            goto label_1e0d60;
        }
    }
    ctx->pc = 0x1E0D58u;
label_1e0d58:
    // 0x1e0d58: 0x25270007  addiu       $a3, $t1, 0x7
    ctx->pc = 0x1e0d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
label_1e0d5c:
    // 0x1e0d5c: 0x738c3  sra         $a3, $a3, 3
    ctx->pc = 0x1e0d5cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 3));
label_1e0d60:
    // 0x1e0d60: 0x167c023  subu        $t8, $t3, $a3
    ctx->pc = 0x1e0d60u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_1e0d64:
    // 0x1e0d64: 0x7010003  bgez        $t8, . + 4 + (0x3 << 2)
label_1e0d68:
    if (ctx->pc == 0x1E0D68u) {
        ctx->pc = 0x1E0D6Cu;
        goto label_1e0d6c;
    }
    ctx->pc = 0x1E0D64u;
    {
        const bool branch_taken_0x1e0d64 = (GPR_S32(ctx, 24) >= 0);
        if (branch_taken_0x1e0d64) {
            ctx->pc = 0x1E0D74u;
            goto label_1e0d74;
        }
    }
    ctx->pc = 0x1E0D6Cu;
label_1e0d6c:
    // 0x1e0d6c: 0x10000001  b           . + 4 + (0x1 << 2)
label_1e0d70:
    if (ctx->pc == 0x1E0D70u) {
        ctx->pc = 0x1E0D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D6Cu;
        // 0x1e0d70: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0D74u;
        goto label_1e0d74;
    }
    ctx->pc = 0x1E0D6Cu;
    {
        const bool branch_taken_0x1e0d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D6Cu;
        // 0x1e0d70: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d6c) {
            ctx->pc = 0x1E0D74u;
            goto label_1e0d74;
        }
    }
    ctx->pc = 0x1E0D74u;
label_1e0d74:
    // 0x1e0d74: 0x0  nop
    ctx->pc = 0x1e0d74u;
    // NOP
label_1e0d78:
    // 0x1e0d78: 0xa24821  addu        $t1, $a1, $v0
    ctx->pc = 0x1e0d78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1e0d7c:
    // 0x1e0d7c: 0xa52f0cd0  sh          $t7, 0xCD0($t1)
    ctx->pc = 0x1e0d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 3280), (uint16_t)GPR_U32(ctx, 15));
label_1e0d80:
    // 0x1e0d80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e0d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e0d84:
    // 0x1e0d84: 0xa52e0ce0  sh          $t6, 0xCE0($t1)
    ctx->pc = 0x1e0d84u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 3296), (uint16_t)GPR_U32(ctx, 14));
label_1e0d88:
    // 0x1e0d88: 0x28670010  slti        $a3, $v1, 0x10
    ctx->pc = 0x1e0d88u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_1e0d8c:
    // 0x1e0d8c: 0xa1380cc0  sb          $t8, 0xCC0($t1)
    ctx->pc = 0x1e0d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3264), (uint8_t)GPR_U32(ctx, 24));
label_1e0d90:
    // 0x1e0d90: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1e0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_1e0d94:
    // 0x1e0d94: 0xa1380cc1  sb          $t8, 0xCC1($t1)
    ctx->pc = 0x1e0d94u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3265), (uint8_t)GPR_U32(ctx, 24));
label_1e0d98:
    // 0x1e0d98: 0xa1380cc2  sb          $t8, 0xCC2($t1)
    ctx->pc = 0x1e0d98u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3266), (uint8_t)GPR_U32(ctx, 24));
label_1e0d9c:
    // 0x1e0d9c: 0xa1260cc3  sb          $a2, 0xCC3($t1)
    ctx->pc = 0x1e0d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3267), (uint8_t)GPR_U32(ctx, 6));
label_1e0da0:
    // 0x1e0da0: 0x14e0ffb4  bnez        $a3, . + 4 + (-0x4C << 2)
label_1e0da4:
    if (ctx->pc == 0x1E0DA4u) {
        ctx->pc = 0x1E0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DA0u;
        // 0x1e0da4: 0xad280cc4  sw          $t0, 0xCC4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 3268), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0DA8u;
        goto label_1e0da8;
    }
    ctx->pc = 0x1E0DA0u;
    {
        const bool branch_taken_0x1e0da0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DA0u;
        // 0x1e0da4: 0xad280cc4  sw          $t0, 0xCC4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 3268), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0da0) {
            ctx->pc = 0x1E0C74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0c74;
        }
    }
    ctx->pc = 0x1E0DA8u;
label_1e0da8:
    // 0x1e0da8: 0x8f828d24  lw          $v0, -0x72DC($gp)
    ctx->pc = 0x1e0da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937892)));
label_1e0dac:
    // 0x1e0dac: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1e0dacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1e0db0:
    // 0x1e0db0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1e0db4:
    if (ctx->pc == 0x1E0DB4u) {
        ctx->pc = 0x1E0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DB0u;
        // 0x1e0db4: 0x24a31650  addiu       $v1, $a1, 0x1650 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0DB8u;
        goto label_1e0db8;
    }
    ctx->pc = 0x1E0DB0u;
    {
        const bool branch_taken_0x1e0db0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DB0u;
        // 0x1e0db4: 0x24a31650  addiu       $v1, $a1, 0x1650 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0db0) {
            ctx->pc = 0x1E0DC0u;
            goto label_1e0dc0;
        }
    }
    ctx->pc = 0x1E0DB8u;
label_1e0db8:
    // 0x1e0db8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e0dbc:
    if (ctx->pc == 0x1E0DBCu) {
        ctx->pc = 0x1E0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DB8u;
        // 0x1e0dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0DC0u;
        goto label_1e0dc0;
    }
    ctx->pc = 0x1E0DB8u;
    {
        const bool branch_taken_0x1e0db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DB8u;
        // 0x1e0dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0db8) {
            ctx->pc = 0x1E0DC4u;
            goto label_1e0dc4;
        }
    }
    ctx->pc = 0x1E0DC0u;
label_1e0dc0:
    // 0x1e0dc0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e0dc4:
    // 0x1e0dc4: 0xa0620073  sb          $v0, 0x73($v1)
    ctx->pc = 0x1e0dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 115), (uint8_t)GPR_U32(ctx, 2));
label_1e0dc8:
    // 0x1e0dc8: 0x8f828d24  lw          $v0, -0x72DC($gp)
    ctx->pc = 0x1e0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937892)));
label_1e0dcc:
    // 0x1e0dcc: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1e0dccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1e0dd0:
    // 0x1e0dd0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1e0dd4:
    if (ctx->pc == 0x1E0DD4u) {
        ctx->pc = 0x1E0DD8u;
        goto label_1e0dd8;
    }
    ctx->pc = 0x1E0DD0u;
    {
        const bool branch_taken_0x1e0dd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0dd0) {
            ctx->pc = 0x1E0DF4u;
            goto label_1e0df4;
        }
    }
    ctx->pc = 0x1E0DD8u;
label_1e0dd8:
    // 0x1e0dd8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1e0dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1e0ddc:
    // 0x1e0ddc: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_1e0de0:
    if (ctx->pc == 0x1E0DE0u) {
        ctx->pc = 0x1E0DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DDCu;
        // 0x1e0de0: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0DE4u;
        goto label_1e0de4;
    }
    ctx->pc = 0x1E0DDCu;
    {
        const bool branch_taken_0x1e0ddc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E0DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DDCu;
        // 0x1e0de0: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ddc) {
            ctx->pc = 0x1E0DF8u;
            goto label_1e0df8;
        }
    }
    ctx->pc = 0x1E0DE4u;
label_1e0de4:
    // 0x1e0de4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1e0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1e0de8:
    // 0x1e0de8: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x1e0de8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_1e0dec:
    // 0x1e0dec: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e0df0:
    if (ctx->pc == 0x1E0DF0u) {
        ctx->pc = 0x1E0DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DECu;
        // 0x1e0df0: 0xa0a30c3b  sb          $v1, 0xC3B($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3131), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0DF4u;
        goto label_1e0df4;
    }
    ctx->pc = 0x1E0DECu;
    {
        const bool branch_taken_0x1e0dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DECu;
        // 0x1e0df0: 0xa0a30c3b  sb          $v1, 0xC3B($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3131), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0dec) {
            ctx->pc = 0x1E0DFCu;
            goto label_1e0dfc;
        }
    }
    ctx->pc = 0x1E0DF4u;
label_1e0df4:
    // 0x1e0df4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e0df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e0df8:
    // 0x1e0df8: 0xa0a30c3b  sb          $v1, 0xC3B($a1)
    ctx->pc = 0x1e0df8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3131), (uint8_t)GPR_U32(ctx, 3));
label_1e0dfc:
    // 0x1e0dfc: 0x2406016f  addiu       $a2, $zero, 0x16F
    ctx->pc = 0x1e0dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 367));
label_1e0e00:
    // 0x1e0e00: 0xa0a30c0b  sb          $v1, 0xC0B($a1)
    ctx->pc = 0x1e0e00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3083), (uint8_t)GPR_U32(ctx, 3));
label_1e0e04:
    // 0x1e0e04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e0e04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0e08:
    // 0x1e0e08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e0e08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0e0c:
    // 0x1e0e0c: 0xc066c72  jal         func_19B1C8
label_1e0e10:
    if (ctx->pc == 0x1E0E10u) {
        ctx->pc = 0x1E0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E0Cu;
        // 0x1e0e10: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0E14u;
        goto label_1e0e14;
    }
    ctx->pc = 0x1E0E0Cu;
    SET_GPR_U32(ctx, 31, 0x1E0E14u);
    ctx->pc = 0x1E0E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0E0Cu;
    // 0x1e0e10: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1E0E14u;
label_1e0e14:
    // 0x1e0e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0e18:
    // 0x1e0e18: 0x3e00008  jr          $ra
label_1e0e1c:
    if (ctx->pc == 0x1E0E1Cu) {
        ctx->pc = 0x1E0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E18u;
        // 0x1e0e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0E20u;
        goto label_1e0e20;
    }
    ctx->pc = 0x1E0E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E18u;
        // 0x1e0e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0E20u;
label_1e0e20:
    // 0x1e0e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e0e24:
    // 0x1e0e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e0e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e0e28:
    // 0x1e0e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e0e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e0e2c:
    // 0x1e0e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e0e30:
    // 0x1e0e30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e0e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e0e34:
    // 0x1e0e34: 0xc078434  jal         func_1E10D0
label_1e0e38:
    if (ctx->pc == 0x1E0E38u) {
        ctx->pc = 0x1E0E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E34u;
        // 0x1e0e38: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0E3Cu;
        goto label_1e0e3c;
    }
    ctx->pc = 0x1E0E34u;
    SET_GPR_U32(ctx, 31, 0x1E0E3Cu);
    ctx->pc = 0x1E0E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0E34u;
    // 0x1e0e38: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E10D0u;
    goto label_1e10d0;
    ctx->pc = 0x1E0E3Cu;
label_1e0e3c:
    // 0x1e0e3c: 0xc0785f8  jal         func_1E17E0
label_1e0e40:
    if (ctx->pc == 0x1E0E40u) {
        ctx->pc = 0x1E0E44u;
        goto label_1e0e44;
    }
    ctx->pc = 0x1E0E3Cu;
    SET_GPR_U32(ctx, 31, 0x1E0E44u);
    ctx->pc = 0x1E17E0u;
    { ctx->pc = 0x1e17e0; return; }
    ctx->pc = 0x1E0E44u;
label_1e0e44:
    // 0x1e0e44: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1e0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1e0e48:
    // 0x1e0e48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e0e4c:
    if (ctx->pc == 0x1E0E4Cu) {
        ctx->pc = 0x1E0E50u;
        goto label_1e0e50;
    }
    ctx->pc = 0x1E0E48u;
    {
        const bool branch_taken_0x1e0e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0e48) {
            ctx->pc = 0x1E0E60u;
            goto label_1e0e60;
        }
    }
    ctx->pc = 0x1E0E50u;
label_1e0e50:
    // 0x1e0e50: 0x8f828dc0  lw          $v0, -0x7240($gp)
    ctx->pc = 0x1e0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938048)));
label_1e0e54:
    // 0x1e0e54: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e0e54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e0e58:
    // 0x1e0e58: 0x8f828dbc  lw          $v0, -0x7244($gp)
    ctx->pc = 0x1e0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938044)));
label_1e0e5c:
    // 0x1e0e5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e0e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e0e60:
    // 0x1e0e60: 0xc060258  jal         func_180960
label_1e0e64:
    if (ctx->pc == 0x1E0E64u) {
        ctx->pc = 0x1E0E68u;
        goto label_1e0e68;
    }
    ctx->pc = 0x1E0E60u;
    SET_GPR_U32(ctx, 31, 0x1E0E68u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x1E0E68u;
label_1e0e68:
    // 0x1e0e68: 0xc060258  jal         func_180960
label_1e0e6c:
    if (ctx->pc == 0x1E0E6Cu) {
        ctx->pc = 0x1E0E70u;
        goto label_1e0e70;
    }
    ctx->pc = 0x1E0E68u;
    SET_GPR_U32(ctx, 31, 0x1E0E70u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x1E0E70u;
label_1e0e70:
    // 0x1e0e70: 0xc0783a8  jal         func_1E0EA0
label_1e0e74:
    if (ctx->pc == 0x1E0E74u) {
        ctx->pc = 0x1E0E78u;
        goto label_1e0e78;
    }
    ctx->pc = 0x1E0E70u;
    SET_GPR_U32(ctx, 31, 0x1E0E78u);
    ctx->pc = 0x1E0EA0u;
    goto label_1e0ea0;
    ctx->pc = 0x1E0E78u;
label_1e0e78:
    // 0x1e0e78: 0x8f848db0  lw          $a0, -0x7250($gp)
    ctx->pc = 0x1e0e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1e0e7c:
    // 0x1e0e7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0e80:
    // 0x1e0e80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e0e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e0e84:
    // 0x1e0e84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e0e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0e88:
    // 0x1e0e88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e0e88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0e8c:
    // 0x1e0e8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0e90:
    // 0x1e0e90: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x1e0e90u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1e0e94:
    // 0x1e0e94: 0x3e00008  jr          $ra
label_1e0e98:
    if (ctx->pc == 0x1E0E98u) {
        ctx->pc = 0x1E0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E94u;
        // 0x1e0e98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0E9Cu;
        goto label_1e0e9c;
    }
    ctx->pc = 0x1E0E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E94u;
        // 0x1e0e98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0E9Cu;
label_1e0e9c:
    // 0x1e0e9c: 0x0  nop
    ctx->pc = 0x1e0e9cu;
    // NOP
label_1e0ea0:
    // 0x1e0ea0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e0ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e0ea4:
    // 0x1e0ea4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e0ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e0ea8:
    // 0x1e0ea8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e0ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e0eac:
    // 0x1e0eac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e0eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e0eb0:
    // 0x1e0eb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e0eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e0eb4:
    // 0x1e0eb4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e0eb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0eb8:
    // 0x1e0eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e0eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e0ebc:
    // 0x1e0ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e0ec0:
    // 0x1e0ec0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e0ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0ec4:
    // 0x1e0ec4: 0x27828da8  addiu       $v0, $gp, -0x7258
    ctx->pc = 0x1e0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938024));
label_1e0ec8:
    // 0x1e0ec8: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e0ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e0ecc:
    // 0x1e0ecc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e0eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e0ed0:
    // 0x1e0ed0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e0ed4:
    if (ctx->pc == 0x1E0ED4u) {
        ctx->pc = 0x1E0ED8u;
        goto label_1e0ed8;
    }
    ctx->pc = 0x1E0ED0u;
    {
        const bool branch_taken_0x1e0ed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0ed0) {
            ctx->pc = 0x1E0EE4u;
            goto label_1e0ee4;
        }
    }
    ctx->pc = 0x1E0ED8u;
label_1e0ed8:
    // 0x1e0ed8: 0xc070038  jal         func_1C00E0
label_1e0edc:
    if (ctx->pc == 0x1E0EDCu) {
        ctx->pc = 0x1E0EE0u;
        goto label_1e0ee0;
    }
    ctx->pc = 0x1E0ED8u;
    SET_GPR_U32(ctx, 31, 0x1E0EE0u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E0EE0u;
label_1e0ee0:
    // 0x1e0ee0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e0ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e0ee4:
    // 0x1e0ee4: 0x0  nop
    ctx->pc = 0x1e0ee4u;
    // NOP
label_1e0ee8:
    // 0x1e0ee8: 0x27828da0  addiu       $v0, $gp, -0x7260
    ctx->pc = 0x1e0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938016));
label_1e0eec:
    // 0x1e0eec: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e0eecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e0ef0:
    // 0x1e0ef0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e0ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e0ef4:
    // 0x1e0ef4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e0ef8:
    if (ctx->pc == 0x1E0EF8u) {
        ctx->pc = 0x1E0EFCu;
        goto label_1e0efc;
    }
    ctx->pc = 0x1E0EF4u;
    {
        const bool branch_taken_0x1e0ef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0ef4) {
            ctx->pc = 0x1E0F08u;
            goto label_1e0f08;
        }
    }
    ctx->pc = 0x1E0EFCu;
label_1e0efc:
    // 0x1e0efc: 0xc070038  jal         func_1C00E0
label_1e0f00:
    if (ctx->pc == 0x1E0F00u) {
        ctx->pc = 0x1E0F04u;
        goto label_1e0f04;
    }
    ctx->pc = 0x1E0EFCu;
    SET_GPR_U32(ctx, 31, 0x1E0F04u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E0F04u;
label_1e0f04:
    // 0x1e0f04: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e0f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e0f08:
    // 0x1e0f08: 0x27828d98  addiu       $v0, $gp, -0x7268
    ctx->pc = 0x1e0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938008));
label_1e0f0c:
    // 0x1e0f0c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e0f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e0f10:
    // 0x1e0f10: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e0f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e0f14:
    // 0x1e0f14: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e0f18:
    if (ctx->pc == 0x1E0F18u) {
        ctx->pc = 0x1E0F1Cu;
        goto label_1e0f1c;
    }
    ctx->pc = 0x1E0F14u;
    {
        const bool branch_taken_0x1e0f14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f14) {
            ctx->pc = 0x1E0F28u;
            goto label_1e0f28;
        }
    }
    ctx->pc = 0x1E0F1Cu;
label_1e0f1c:
    // 0x1e0f1c: 0xc070038  jal         func_1C00E0
label_1e0f20:
    if (ctx->pc == 0x1E0F20u) {
        ctx->pc = 0x1E0F24u;
        goto label_1e0f24;
    }
    ctx->pc = 0x1E0F1Cu;
    SET_GPR_U32(ctx, 31, 0x1E0F24u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E0F24u;
label_1e0f24:
    // 0x1e0f24: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e0f24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e0f28:
    // 0x1e0f28: 0x27828d78  addiu       $v0, $gp, -0x7288
    ctx->pc = 0x1e0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937976));
label_1e0f2c:
    // 0x1e0f2c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e0f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e0f30:
    // 0x1e0f30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e0f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e0f34:
    // 0x1e0f34: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e0f38:
    if (ctx->pc == 0x1E0F38u) {
        ctx->pc = 0x1E0F3Cu;
        goto label_1e0f3c;
    }
    ctx->pc = 0x1E0F34u;
    {
        const bool branch_taken_0x1e0f34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f34) {
            ctx->pc = 0x1E0F48u;
            goto label_1e0f48;
        }
    }
    ctx->pc = 0x1E0F3Cu;
label_1e0f3c:
    // 0x1e0f3c: 0xc070038  jal         func_1C00E0
label_1e0f40:
    if (ctx->pc == 0x1E0F40u) {
        ctx->pc = 0x1E0F44u;
        goto label_1e0f44;
    }
    ctx->pc = 0x1E0F3Cu;
    SET_GPR_U32(ctx, 31, 0x1E0F44u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E0F44u;
label_1e0f44:
    // 0x1e0f44: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e0f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e0f48:
    // 0x1e0f48: 0x27828d58  addiu       $v0, $gp, -0x72A8
    ctx->pc = 0x1e0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937944));
label_1e0f4c:
    // 0x1e0f4c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e0f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e0f50:
    // 0x1e0f50: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e0f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e0f54:
    // 0x1e0f54: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e0f58:
    if (ctx->pc == 0x1E0F58u) {
        ctx->pc = 0x1E0F5Cu;
        goto label_1e0f5c;
    }
    ctx->pc = 0x1E0F54u;
    {
        const bool branch_taken_0x1e0f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f54) {
            ctx->pc = 0x1E0F68u;
            goto label_1e0f68;
        }
    }
    ctx->pc = 0x1E0F5Cu;
label_1e0f5c:
    // 0x1e0f5c: 0xc070038  jal         func_1C00E0
label_1e0f60:
    if (ctx->pc == 0x1E0F60u) {
        ctx->pc = 0x1E0F64u;
        goto label_1e0f64;
    }
    ctx->pc = 0x1E0F5Cu;
    SET_GPR_U32(ctx, 31, 0x1E0F64u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E0F64u;
label_1e0f64:
    // 0x1e0f64: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e0f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e0f68:
    // 0x1e0f68: 0x27828d40  addiu       $v0, $gp, -0x72C0
    ctx->pc = 0x1e0f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937920));
label_1e0f6c:
    // 0x1e0f6c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e0f6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e0f70:
    // 0x1e0f70: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e0f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e0f74:
    // 0x1e0f74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e0f78:
    if (ctx->pc == 0x1E0F78u) {
        ctx->pc = 0x1E0F7Cu;
        goto label_1e0f7c;
    }
    ctx->pc = 0x1E0F74u;
    {
        const bool branch_taken_0x1e0f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f74) {
            ctx->pc = 0x1E0F88u;
            goto label_1e0f88;
        }
    }
    ctx->pc = 0x1E0F7Cu;
label_1e0f7c:
    // 0x1e0f7c: 0xc070038  jal         func_1C00E0
label_1e0f80:
    if (ctx->pc == 0x1E0F80u) {
        ctx->pc = 0x1E0F84u;
        goto label_1e0f84;
    }
    ctx->pc = 0x1E0F7Cu;
    SET_GPR_U32(ctx, 31, 0x1E0F84u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E0F84u;
label_1e0f84:
    // 0x1e0f84: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e0f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e0f88:
    // 0x1e0f88: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e0f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e0f8c:
    // 0x1e0f8c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e0f90:
    // 0x1e0f90: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
label_1e0f94:
    if (ctx->pc == 0x1E0F94u) {
        ctx->pc = 0x1E0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F90u;
        // 0x1e0f94: 0x27828d88  addiu       $v0, $gp, -0x7278 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0F98u;
        goto label_1e0f98;
    }
    ctx->pc = 0x1E0F90u;
    {
        const bool branch_taken_0x1e0f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F90u;
        // 0x1e0f94: 0x27828d88  addiu       $v0, $gp, -0x7278 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f90) {
            ctx->pc = 0x1E1008u;
            goto label_1e1008;
        }
    }
    ctx->pc = 0x1E0F98u;
label_1e0f98:
    // 0x1e0f98: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e0f98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e0f9c:
    // 0x1e0f9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e0f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e0fa0:
    // 0x1e0fa0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e0fa4:
    if (ctx->pc == 0x1E0FA4u) {
        ctx->pc = 0x1E0FA8u;
        goto label_1e0fa8;
    }
    ctx->pc = 0x1E0FA0u;
    {
        const bool branch_taken_0x1e0fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0fa0) {
            ctx->pc = 0x1E0FB4u;
            goto label_1e0fb4;
        }
    }
    ctx->pc = 0x1E0FA8u;
label_1e0fa8:
    // 0x1e0fa8: 0xc070038  jal         func_1C00E0
label_1e0fac:
    if (ctx->pc == 0x1E0FACu) {
        ctx->pc = 0x1E0FB0u;
        goto label_1e0fb0;
    }
    ctx->pc = 0x1E0FA8u;
    SET_GPR_U32(ctx, 31, 0x1E0FB0u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E0FB0u;
label_1e0fb0:
    // 0x1e0fb0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e0fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e0fb4:
    // 0x1e0fb4: 0x0  nop
    ctx->pc = 0x1e0fb4u;
    // NOP
label_1e0fb8:
    // 0x1e0fb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e0fb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0fbc:
    // 0x1e0fbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e0fbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0fc0:
    // 0x1e0fc0: 0x0  nop
    ctx->pc = 0x1e0fc0u;
    // NOP
label_1e0fc4:
    // 0x1e0fc4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e0fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e0fc8:
    // 0x1e0fc8: 0x244226b0  addiu       $v0, $v0, 0x26B0
    ctx->pc = 0x1e0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9904));
label_1e0fcc:
    // 0x1e0fcc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e0fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e0fd0:
    // 0x1e0fd0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e0fd4:
    // 0x1e0fd4: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x1e0fd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1e0fd8:
    // 0x1e0fd8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1e0fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e0fdc:
    // 0x1e0fdc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e0fe0:
    if (ctx->pc == 0x1E0FE0u) {
        ctx->pc = 0x1E0FE4u;
        goto label_1e0fe4;
    }
    ctx->pc = 0x1E0FDCu;
    {
        const bool branch_taken_0x1e0fdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0fdc) {
            ctx->pc = 0x1E0FF0u;
            goto label_1e0ff0;
        }
    }
    ctx->pc = 0x1E0FE4u;
label_1e0fe4:
    // 0x1e0fe4: 0xc070038  jal         func_1C00E0
label_1e0fe8:
    if (ctx->pc == 0x1E0FE8u) {
        ctx->pc = 0x1E0FECu;
        goto label_1e0fec;
    }
    ctx->pc = 0x1E0FE4u;
    SET_GPR_U32(ctx, 31, 0x1E0FECu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E0FECu;
label_1e0fec:
    // 0x1e0fec: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1e0fecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1e0ff0:
    // 0x1e0ff0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e0ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e0ff4:
    // 0x1e0ff4: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1e0ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_1e0ff8:
    // 0x1e0ff8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_1e0ffc:
    if (ctx->pc == 0x1E0FFCu) {
        ctx->pc = 0x1E0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FF8u;
        // 0x1e0ffc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1000u;
        goto label_1e1000;
    }
    ctx->pc = 0x1E0FF8u;
    {
        const bool branch_taken_0x1e0ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0FF8u;
        // 0x1e0ffc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ff8) {
            ctx->pc = 0x1E0FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0fc0;
        }
    }
    ctx->pc = 0x1E1000u;
label_1e1000:
    // 0x1e1000: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1e1004:
    if (ctx->pc == 0x1E1004u) {
        ctx->pc = 0x1E1008u;
        goto label_1e1008;
    }
    ctx->pc = 0x1E1000u;
    {
        const bool branch_taken_0x1e1000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1000) {
            ctx->pc = 0x1E1070u;
            goto label_1e1070;
        }
    }
    ctx->pc = 0x1E1008u;
label_1e1008:
    // 0x1e1008: 0x27828d88  addiu       $v0, $gp, -0x7278
    ctx->pc = 0x1e1008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937992));
label_1e100c:
    // 0x1e100c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e100cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e1010:
    // 0x1e1010: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e1010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e1014:
    // 0x1e1014: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e1018:
    if (ctx->pc == 0x1E1018u) {
        ctx->pc = 0x1E101Cu;
        goto label_1e101c;
    }
    ctx->pc = 0x1E1014u;
    {
        const bool branch_taken_0x1e1014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1014) {
            ctx->pc = 0x1E1028u;
            goto label_1e1028;
        }
    }
    ctx->pc = 0x1E101Cu;
label_1e101c:
    // 0x1e101c: 0xc070038  jal         func_1C00E0
label_1e1020:
    if (ctx->pc == 0x1E1020u) {
        ctx->pc = 0x1E1024u;
        goto label_1e1024;
    }
    ctx->pc = 0x1E101Cu;
    SET_GPR_U32(ctx, 31, 0x1E1024u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E1024u;
label_1e1024:
    // 0x1e1024: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e1024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e1028:
    // 0x1e1028: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e1028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e102c:
    // 0x1e102c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e102cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1030:
    // 0x1e1030: 0x0  nop
    ctx->pc = 0x1e1030u;
    // NOP
label_1e1034:
    // 0x1e1034: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e1034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e1038:
    // 0x1e1038: 0x244226b0  addiu       $v0, $v0, 0x26B0
    ctx->pc = 0x1e1038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9904));
label_1e103c:
    // 0x1e103c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e103cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e1040:
    // 0x1e1040: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e1040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e1044:
    // 0x1e1044: 0x51a021  addu        $s4, $v0, $s1
    ctx->pc = 0x1e1044u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e1048:
    // 0x1e1048: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1e1048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e104c:
    // 0x1e104c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e1050:
    if (ctx->pc == 0x1E1050u) {
        ctx->pc = 0x1E1054u;
        goto label_1e1054;
    }
    ctx->pc = 0x1E104Cu;
    {
        const bool branch_taken_0x1e104c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e104c) {
            ctx->pc = 0x1E1060u;
            goto label_1e1060;
        }
    }
    ctx->pc = 0x1E1054u;
label_1e1054:
    // 0x1e1054: 0xc070038  jal         func_1C00E0
label_1e1058:
    if (ctx->pc == 0x1E1058u) {
        ctx->pc = 0x1E105Cu;
        goto label_1e105c;
    }
    ctx->pc = 0x1E1054u;
    SET_GPR_U32(ctx, 31, 0x1E105Cu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E105Cu;
label_1e105c:
    // 0x1e105c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1e105cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1e1060:
    // 0x1e1060: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e1060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e1064:
    // 0x1e1064: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x1e1064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_1e1068:
    // 0x1e1068: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_1e106c:
    if (ctx->pc == 0x1E106Cu) {
        ctx->pc = 0x1E106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1068u;
        // 0x1e106c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1070u;
        goto label_1e1070;
    }
    ctx->pc = 0x1E1068u;
    {
        const bool branch_taken_0x1e1068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1068u;
        // 0x1e106c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1068) {
            ctx->pc = 0x1E1030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1030;
        }
    }
    ctx->pc = 0x1E1070u;
label_1e1070:
    // 0x1e1070: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e1070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e1074:
    // 0x1e1074: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1e1074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e1078:
    // 0x1e1078: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
label_1e107c:
    if (ctx->pc == 0x1E107Cu) {
        ctx->pc = 0x1E107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1078u;
        // 0x1e107c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1080u;
        goto label_1e1080;
    }
    ctx->pc = 0x1E1078u;
    {
        const bool branch_taken_0x1e1078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1078u;
        // 0x1e107c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1078) {
            ctx->pc = 0x1E0EC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0ec4;
        }
    }
    ctx->pc = 0x1E1080u;
label_1e1080:
    // 0x1e1080: 0xc07ab58  jal         func_1EAD60
label_1e1084:
    if (ctx->pc == 0x1E1084u) {
        ctx->pc = 0x1E1088u;
        goto label_1e1088;
    }
    ctx->pc = 0x1E1080u;
    SET_GPR_U32(ctx, 31, 0x1E1088u);
    ctx->pc = 0x1EAD60u;
    { ctx->pc = 0x1ead60; return; }
    ctx->pc = 0x1E1088u;
label_1e1088:
    // 0x1e1088: 0xc04e19c  jal         func_138670
label_1e108c:
    if (ctx->pc == 0x1E108Cu) {
        ctx->pc = 0x1E1090u;
        goto label_1e1090;
    }
    ctx->pc = 0x1E1088u;
    SET_GPR_U32(ctx, 31, 0x1E1090u);
    ctx->pc = 0x138670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138670u, 0x1E1088u, 0x1E1090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1090u;
label_1e1090:
    // 0x1e1090: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1e1090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1e1094:
    // 0x1e1094: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e1098:
    if (ctx->pc == 0x1E1098u) {
        ctx->pc = 0x1E109Cu;
        goto label_1e109c;
    }
    ctx->pc = 0x1E1094u;
    {
        const bool branch_taken_0x1e1094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1094) {
            ctx->pc = 0x1E10A4u;
            goto label_1e10a4;
        }
    }
    ctx->pc = 0x1E109Cu;
label_1e109c:
    // 0x1e109c: 0xc07a0dc  jal         func_1E8370
label_1e10a0:
    if (ctx->pc == 0x1E10A0u) {
        ctx->pc = 0x1E10A4u;
        goto label_1e10a4;
    }
    ctx->pc = 0x1E109Cu;
    SET_GPR_U32(ctx, 31, 0x1E10A4u);
    ctx->pc = 0x1E8370u;
    { ctx->pc = 0x1e8370; return; }
    ctx->pc = 0x1E10A4u;
label_1e10a4:
    // 0x1e10a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e10a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e10a8:
    // 0x1e10a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e10a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e10ac:
    // 0x1e10ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e10acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e10b0:
    // 0x1e10b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e10b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e10b4:
    // 0x1e10b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e10b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e10b8:
    // 0x1e10b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e10b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e10bc:
    // 0x1e10bc: 0x3e00008  jr          $ra
label_1e10c0:
    if (ctx->pc == 0x1E10C0u) {
        ctx->pc = 0x1E10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E10BCu;
        // 0x1e10c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E10C4u;
        goto label_1e10c4;
    }
    ctx->pc = 0x1E10BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E10BCu;
        // 0x1e10c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E10BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E10C4u;
label_1e10c4:
    // 0x1e10c4: 0x0  nop
    ctx->pc = 0x1e10c4u;
    // NOP
label_1e10c8:
    // 0x1e10c8: 0x0  nop
    ctx->pc = 0x1e10c8u;
    // NOP
label_1e10cc:
    // 0x1e10cc: 0x0  nop
    ctx->pc = 0x1e10ccu;
    // NOP
label_1e10d0:
    // 0x1e10d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e10d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1e10d4:
    // 0x1e10d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e10d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e10d8:
    // 0x1e10d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e10d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1e10dc:
    // 0x1e10dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e10dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e10e0:
    // 0x1e10e0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1e10e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1e10e4:
    // 0x1e10e4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e10e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1e10e8:
    // 0x1e10e8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e10e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e10ec:
    // 0x1e10ec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e10ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1e10f0:
    // 0x1e10f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e10f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e10f4:
    // 0x1e10f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e10f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e10f8:
    // 0x1e10f8: 0xc06dfd4  jal         func_1B7F50
label_1e10fc:
    if (ctx->pc == 0x1E10FCu) {
        ctx->pc = 0x1E10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E10F8u;
        // 0x1e10fc: 0x7fb00020  sq          $s0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1100u;
        goto label_1e1100;
    }
    ctx->pc = 0x1E10F8u;
    SET_GPR_U32(ctx, 31, 0x1E1100u);
    ctx->pc = 0x1E10FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E10F8u;
    // 0x1e10fc: 0x7fb00020  sq          $s0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F50u;
    { ctx->pc = 0x1b7f50; return; }
    ctx->pc = 0x1E1100u;
label_1e1100:
    // 0x1e1100: 0xc041738  jal         func_105CE0
label_1e1104:
    if (ctx->pc == 0x1E1104u) {
        ctx->pc = 0x1E1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1100u;
        // 0x1e1104: 0x240407e8  addiu       $a0, $zero, 0x7E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1108u;
        goto label_1e1108;
    }
    ctx->pc = 0x1E1100u;
    SET_GPR_U32(ctx, 31, 0x1E1108u);
    ctx->pc = 0x1E1104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1100u;
    // 0x1e1104: 0x240407e8  addiu       $a0, $zero, 0x7E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1E1100u, 0x1E1108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1108u;
label_1e1108:
    // 0x1e1108: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1e1108u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1e110c:
    // 0x1e110c: 0xc070080  jal         func_1C0200
label_1e1110:
    if (ctx->pc == 0x1E1110u) {
        ctx->pc = 0x1E1110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E110Cu;
        // 0x1e1110: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1114u;
        goto label_1e1114;
    }
    ctx->pc = 0x1E110Cu;
    SET_GPR_U32(ctx, 31, 0x1E1114u);
    ctx->pc = 0x1E1110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E110Cu;
    // 0x1e1110: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E1114u;
label_1e1114:
    // 0x1e1114: 0x240407e8  addiu       $a0, $zero, 0x7E8
    ctx->pc = 0x1e1114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2024));
label_1e1118:
    // 0x1e1118: 0xc0416e4  jal         func_105B90
label_1e111c:
    if (ctx->pc == 0x1E111Cu) {
        ctx->pc = 0x1E111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1118u;
        // 0x1e111c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1120u;
        goto label_1e1120;
    }
    ctx->pc = 0x1E1118u;
    SET_GPR_U32(ctx, 31, 0x1E1120u);
    ctx->pc = 0x1E111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1118u;
    // 0x1e111c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1E1118u, 0x1E1120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1120u;
label_1e1120:
    // 0x1e1120: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1124:
    // 0x1e1124: 0xc060678  jal         func_1819E0
label_1e1128:
    if (ctx->pc == 0x1E1128u) {
        ctx->pc = 0x1E1128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1124u;
        // 0x1e1128: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E112Cu;
        goto label_1e112c;
    }
    ctx->pc = 0x1E1124u;
    SET_GPR_U32(ctx, 31, 0x1E112Cu);
    ctx->pc = 0x1E1128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1124u;
    // 0x1e1128: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    { ctx->pc = 0x1819e0; return; }
    ctx->pc = 0x1E112Cu;
label_1e112c:
    // 0x1e112c: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1e112cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_1e1130:
    // 0x1e1130: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e1130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1134:
    // 0x1e1134: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x1e1134u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_1e1138:
    // 0x1e1138: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e1138u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e113c:
    // 0x1e113c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e113cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1140:
    // 0x1e1140: 0xc0602c8  jal         func_180B20
label_1e1144:
    if (ctx->pc == 0x1E1144u) {
        ctx->pc = 0x1E1144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1140u;
        // 0x1e1144: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1148u;
        goto label_1e1148;
    }
    ctx->pc = 0x1E1140u;
    SET_GPR_U32(ctx, 31, 0x1E1148u);
    ctx->pc = 0x1E1144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1140u;
    // 0x1e1144: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B20u;
    { ctx->pc = 0x180b20; return; }
    ctx->pc = 0x1E1148u;
label_1e1148:
    // 0x1e1148: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e1148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e114c:
    // 0x1e114c: 0x26470018  addiu       $a3, $s2, 0x18
    ctx->pc = 0x1e114cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_1e1150:
    // 0x1e1150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1154:
    // 0x1e1154: 0x27a6008e  addiu       $a2, $sp, 0x8E
    ctx->pc = 0x1e1154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 142));
label_1e1158:
    // 0x1e1158: 0xc060390  jal         func_180E40
label_1e115c:
    if (ctx->pc == 0x1E115Cu) {
        ctx->pc = 0x1E115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1158u;
        // 0x1e115c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1160u;
        goto label_1e1160;
    }
    ctx->pc = 0x1E1158u;
    SET_GPR_U32(ctx, 31, 0x1E1160u);
    ctx->pc = 0x1E115Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1158u;
    // 0x1e115c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E40u;
    { ctx->pc = 0x180e40; return; }
    ctx->pc = 0x1E1160u;
label_1e1160:
    // 0x1e1160: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e1160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e1164:
    // 0x1e1164: 0x24632900  addiu       $v1, $v1, 0x2900
    ctx->pc = 0x1e1164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10496));
label_1e1168:
    // 0x1e1168: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x1e1168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1e116c:
    // 0x1e116c: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1e116cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_1e1170:
    // 0x1e1170: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x1e1170u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_1e1174:
    // 0x1e1174: 0xc06063c  jal         func_1818F0
label_1e1178:
    if (ctx->pc == 0x1E1178u) {
        ctx->pc = 0x1E1178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1174u;
        // 0x1e1178: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E117Cu;
        goto label_1e117c;
    }
    ctx->pc = 0x1E1174u;
    SET_GPR_U32(ctx, 31, 0x1E117Cu);
    ctx->pc = 0x1E1178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1174u;
    // 0x1e1178: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1818F0u;
    { ctx->pc = 0x1818f0; return; }
    ctx->pc = 0x1E117Cu;
label_1e117c:
    // 0x1e117c: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1e117cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_1e1180:
    // 0x1e1180: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e1180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e1184:
    // 0x1e1184: 0x87b1008e  lh          $s1, 0x8E($sp)
    ctx->pc = 0x1e1184u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 142)));
label_1e1188:
    // 0x1e1188: 0x2a420028  slti        $v0, $s2, 0x28
    ctx->pc = 0x1e1188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)40) ? 1 : 0);
label_1e118c:
    // 0x1e118c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_1e1190:
    if (ctx->pc == 0x1E1190u) {
        ctx->pc = 0x1E1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E118Cu;
        // 0x1e1190: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1194u;
        goto label_1e1194;
    }
    ctx->pc = 0x1E118Cu;
    {
        const bool branch_taken_0x1e118c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E118Cu;
        // 0x1e1190: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e118c) {
            ctx->pc = 0x1E113Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e113c;
        }
    }
    ctx->pc = 0x1E1194u;
label_1e1194:
    // 0x1e1194: 0xc070038  jal         func_1C00E0
label_1e1198:
    if (ctx->pc == 0x1E1198u) {
        ctx->pc = 0x1E1198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1194u;
        // 0x1e1198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E119Cu;
        goto label_1e119c;
    }
    ctx->pc = 0x1E1194u;
    SET_GPR_U32(ctx, 31, 0x1E119Cu);
    ctx->pc = 0x1E1198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1194u;
    // 0x1e1198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E119Cu;
label_1e119c:
    // 0x1e119c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x1e119cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1e11a0:
    // 0x1e11a0: 0xaf948218  sw          $s4, -0x7DE8($gp)
    ctx->pc = 0x1e11a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935064), GPR_U32(ctx, 20));
label_1e11a4:
    // 0x1e11a4: 0xaf828dc0  sw          $v0, -0x7240($gp)
    ctx->pc = 0x1e11a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938048), GPR_U32(ctx, 2));
label_1e11a8:
    // 0x1e11a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e11a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e11ac:
    // 0x1e11ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e11acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e11b0:
    // 0x1e11b0: 0x27828da8  addiu       $v0, $gp, -0x7258
    ctx->pc = 0x1e11b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938024));
label_1e11b4:
    // 0x1e11b4: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e11b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e11b8:
    // 0x1e11b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e11b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e11bc:
    // 0x1e11bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e11c0:
    if (ctx->pc == 0x1E11C0u) {
        ctx->pc = 0x1E11C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11BCu;
        // 0x1e11c0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E11C4u;
        goto label_1e11c4;
    }
    ctx->pc = 0x1E11BCu;
    {
        const bool branch_taken_0x1e11bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E11C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11BCu;
        // 0x1e11c0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e11bc) {
            ctx->pc = 0x1E11D0u;
            goto label_1e11d0;
        }
    }
    ctx->pc = 0x1E11C4u;
label_1e11c4:
    // 0x1e11c4: 0xc070080  jal         func_1C0200
label_1e11c8:
    if (ctx->pc == 0x1E11C8u) {
        ctx->pc = 0x1E11C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11C4u;
        // 0x1e11c8: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E11CCu;
        goto label_1e11cc;
    }
    ctx->pc = 0x1E11C4u;
    SET_GPR_U32(ctx, 31, 0x1E11CCu);
    ctx->pc = 0x1E11C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E11C4u;
    // 0x1e11c8: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E11CCu;
label_1e11cc:
    // 0x1e11cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e11ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e11d0:
    // 0x1e11d0: 0x27828da0  addiu       $v0, $gp, -0x7260
    ctx->pc = 0x1e11d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938016));
label_1e11d4:
    // 0x1e11d4: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e11d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e11d8:
    // 0x1e11d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e11d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e11dc:
    // 0x1e11dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e11e0:
    if (ctx->pc == 0x1E11E0u) {
        ctx->pc = 0x1E11E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11DCu;
        // 0x1e11e0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E11E4u;
        goto label_1e11e4;
    }
    ctx->pc = 0x1E11DCu;
    {
        const bool branch_taken_0x1e11dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E11E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11DCu;
        // 0x1e11e0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e11dc) {
            ctx->pc = 0x1E11F0u;
            goto label_1e11f0;
        }
    }
    ctx->pc = 0x1E11E4u;
label_1e11e4:
    // 0x1e11e4: 0xc070080  jal         func_1C0200
label_1e11e8:
    if (ctx->pc == 0x1E11E8u) {
        ctx->pc = 0x1E11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11E4u;
        // 0x1e11e8: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E11ECu;
        goto label_1e11ec;
    }
    ctx->pc = 0x1E11E4u;
    SET_GPR_U32(ctx, 31, 0x1E11ECu);
    ctx->pc = 0x1E11E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E11E4u;
    // 0x1e11e8: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E11ECu;
label_1e11ec:
    // 0x1e11ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e11ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e11f0:
    // 0x1e11f0: 0x27828d98  addiu       $v0, $gp, -0x7268
    ctx->pc = 0x1e11f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938008));
label_1e11f4:
    // 0x1e11f4: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e11f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e11f8:
    // 0x1e11f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e11f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e11fc:
    // 0x1e11fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e1200:
    if (ctx->pc == 0x1E1200u) {
        ctx->pc = 0x1E1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11FCu;
        // 0x1e1200: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1204u;
        goto label_1e1204;
    }
    ctx->pc = 0x1E11FCu;
    {
        const bool branch_taken_0x1e11fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11FCu;
        // 0x1e1200: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e11fc) {
            ctx->pc = 0x1E1210u;
            goto label_1e1210;
        }
    }
    ctx->pc = 0x1E1204u;
label_1e1204:
    // 0x1e1204: 0xc070080  jal         func_1C0200
label_1e1208:
    if (ctx->pc == 0x1E1208u) {
        ctx->pc = 0x1E1208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1204u;
        // 0x1e1208: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E120Cu;
        goto label_1e120c;
    }
    ctx->pc = 0x1E1204u;
    SET_GPR_U32(ctx, 31, 0x1E120Cu);
    ctx->pc = 0x1E1208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1204u;
    // 0x1e1208: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E120Cu;
label_1e120c:
    // 0x1e120c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e120cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e1210:
    // 0x1e1210: 0x27828d78  addiu       $v0, $gp, -0x7288
    ctx->pc = 0x1e1210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937976));
label_1e1214:
    // 0x1e1214: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e1214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e1218:
    // 0x1e1218: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e1218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e121c:
    // 0x1e121c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e1220:
    if (ctx->pc == 0x1E1220u) {
        ctx->pc = 0x1E1220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E121Cu;
        // 0x1e1220: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1224u;
        goto label_1e1224;
    }
    ctx->pc = 0x1E121Cu;
    {
        const bool branch_taken_0x1e121c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E121Cu;
        // 0x1e1220: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e121c) {
            ctx->pc = 0x1E1230u;
            goto label_1e1230;
        }
    }
    ctx->pc = 0x1E1224u;
label_1e1224:
    // 0x1e1224: 0xc070080  jal         func_1C0200
label_1e1228:
    if (ctx->pc == 0x1E1228u) {
        ctx->pc = 0x1E1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1224u;
        // 0x1e1228: 0x24050540  addiu       $a1, $zero, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E122Cu;
        goto label_1e122c;
    }
    ctx->pc = 0x1E1224u;
    SET_GPR_U32(ctx, 31, 0x1E122Cu);
    ctx->pc = 0x1E1228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1224u;
    // 0x1e1228: 0x24050540  addiu       $a1, $zero, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E122Cu;
label_1e122c:
    // 0x1e122c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e122cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e1230:
    // 0x1e1230: 0x27828d58  addiu       $v0, $gp, -0x72A8
    ctx->pc = 0x1e1230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937944));
label_1e1234:
    // 0x1e1234: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e1234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e1238:
    // 0x1e1238: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e1238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e123c:
    // 0x1e123c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e1240:
    if (ctx->pc == 0x1E1240u) {
        ctx->pc = 0x1E1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E123Cu;
        // 0x1e1240: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1244u;
        goto label_1e1244;
    }
    ctx->pc = 0x1E123Cu;
    {
        const bool branch_taken_0x1e123c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E123Cu;
        // 0x1e1240: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e123c) {
            ctx->pc = 0x1E1250u;
            goto label_1e1250;
        }
    }
    ctx->pc = 0x1E1244u;
label_1e1244:
    // 0x1e1244: 0xc070080  jal         func_1C0200
label_1e1248:
    if (ctx->pc == 0x1E1248u) {
        ctx->pc = 0x1E1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1244u;
        // 0x1e1248: 0x24050510  addiu       $a1, $zero, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E124Cu;
        goto label_1e124c;
    }
    ctx->pc = 0x1E1244u;
    SET_GPR_U32(ctx, 31, 0x1E124Cu);
    ctx->pc = 0x1E1248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1244u;
    // 0x1e1248: 0x24050510  addiu       $a1, $zero, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E124Cu;
label_1e124c:
    // 0x1e124c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e124cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e1250:
    // 0x1e1250: 0x27828d40  addiu       $v0, $gp, -0x72C0
    ctx->pc = 0x1e1250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937920));
label_1e1254:
    // 0x1e1254: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e1254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e1258:
    // 0x1e1258: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e1258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e125c:
    // 0x1e125c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e1260:
    if (ctx->pc == 0x1E1260u) {
        ctx->pc = 0x1E1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E125Cu;
        // 0x1e1260: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1264u;
        goto label_1e1264;
    }
    ctx->pc = 0x1E125Cu;
    {
        const bool branch_taken_0x1e125c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E125Cu;
        // 0x1e1260: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e125c) {
            ctx->pc = 0x1E1270u;
            goto label_1e1270;
        }
    }
    ctx->pc = 0x1E1264u;
label_1e1264:
    // 0x1e1264: 0xc070080  jal         func_1C0200
label_1e1268:
    if (ctx->pc == 0x1E1268u) {
        ctx->pc = 0x1E1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1264u;
        // 0x1e1268: 0x24050970  addiu       $a1, $zero, 0x970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E126Cu;
        goto label_1e126c;
    }
    ctx->pc = 0x1E1264u;
    SET_GPR_U32(ctx, 31, 0x1E126Cu);
    ctx->pc = 0x1E1268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1264u;
    // 0x1e1268: 0x24050970  addiu       $a1, $zero, 0x970 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E126Cu;
label_1e126c:
    // 0x1e126c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e126cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e1270:
    // 0x1e1270: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e1270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e1274:
    // 0x1e1274: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e1274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e1278:
    // 0x1e1278: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
label_1e127c:
    if (ctx->pc == 0x1E127Cu) {
        ctx->pc = 0x1E127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1278u;
        // 0x1e127c: 0x27828d88  addiu       $v0, $gp, -0x7278 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1280u;
        goto label_1e1280;
    }
    ctx->pc = 0x1E1278u;
    {
        const bool branch_taken_0x1e1278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1278u;
        // 0x1e127c: 0x27828d88  addiu       $v0, $gp, -0x7278 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1278) {
            ctx->pc = 0x1E12F0u;
            goto label_1e12f0;
        }
    }
    ctx->pc = 0x1E1280u;
label_1e1280:
    // 0x1e1280: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e1280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e1284:
    // 0x1e1284: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e1284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e1288:
    // 0x1e1288: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e128c:
    if (ctx->pc == 0x1E128Cu) {
        ctx->pc = 0x1E128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1288u;
        // 0x1e128c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1290u;
        goto label_1e1290;
    }
    ctx->pc = 0x1E1288u;
    {
        const bool branch_taken_0x1e1288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1288u;
        // 0x1e128c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1288) {
            ctx->pc = 0x1E129Cu;
            goto label_1e129c;
        }
    }
    ctx->pc = 0x1E1290u;
label_1e1290:
    // 0x1e1290: 0xc070080  jal         func_1C0200
label_1e1294:
    if (ctx->pc == 0x1E1294u) {
        ctx->pc = 0x1E1294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1290u;
        // 0x1e1294: 0x24051d70  addiu       $a1, $zero, 0x1D70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1298u;
        goto label_1e1298;
    }
    ctx->pc = 0x1E1290u;
    SET_GPR_U32(ctx, 31, 0x1E1298u);
    ctx->pc = 0x1E1294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1290u;
    // 0x1e1294: 0x24051d70  addiu       $a1, $zero, 0x1D70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E1298u;
label_1e1298:
    // 0x1e1298: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e1298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e129c:
    // 0x1e129c: 0x0  nop
    ctx->pc = 0x1e129cu;
    // NOP
label_1e12a0:
    // 0x1e12a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e12a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e12a4:
    // 0x1e12a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e12a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e12a8:
    // 0x1e12a8: 0x0  nop
    ctx->pc = 0x1e12a8u;
    // NOP
label_1e12ac:
    // 0x1e12ac: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e12acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e12b0:
    // 0x1e12b0: 0x244226b0  addiu       $v0, $v0, 0x26B0
    ctx->pc = 0x1e12b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9904));
label_1e12b4:
    // 0x1e12b4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e12b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e12b8:
    // 0x1e12b8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e12b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e12bc:
    // 0x1e12bc: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x1e12bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1e12c0:
    // 0x1e12c0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1e12c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e12c4:
    // 0x1e12c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e12c8:
    if (ctx->pc == 0x1E12C8u) {
        ctx->pc = 0x1E12C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12C4u;
        // 0x1e12c8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E12CCu;
        goto label_1e12cc;
    }
    ctx->pc = 0x1E12C4u;
    {
        const bool branch_taken_0x1e12c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E12C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12C4u;
        // 0x1e12c8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12c4) {
            ctx->pc = 0x1E12D8u;
            goto label_1e12d8;
        }
    }
    ctx->pc = 0x1E12CCu;
label_1e12cc:
    // 0x1e12cc: 0xc070080  jal         func_1C0200
label_1e12d0:
    if (ctx->pc == 0x1E12D0u) {
        ctx->pc = 0x1E12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12CCu;
        // 0x1e12d0: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E12D4u;
        goto label_1e12d4;
    }
    ctx->pc = 0x1E12CCu;
    SET_GPR_U32(ctx, 31, 0x1E12D4u);
    ctx->pc = 0x1E12D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E12CCu;
    // 0x1e12d0: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E12D4u;
label_1e12d4:
    // 0x1e12d4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1e12d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1e12d8:
    // 0x1e12d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e12d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e12dc:
    // 0x1e12dc: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1e12dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_1e12e0:
    // 0x1e12e0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_1e12e4:
    if (ctx->pc == 0x1E12E4u) {
        ctx->pc = 0x1E12E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12E0u;
        // 0x1e12e4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E12E8u;
        goto label_1e12e8;
    }
    ctx->pc = 0x1E12E0u;
    {
        const bool branch_taken_0x1e12e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E12E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12E0u;
        // 0x1e12e4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12e0) {
            ctx->pc = 0x1E12A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e12a8;
        }
    }
    ctx->pc = 0x1E12E8u;
label_1e12e8:
    // 0x1e12e8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1e12ec:
    if (ctx->pc == 0x1E12ECu) {
        ctx->pc = 0x1E12F0u;
        goto label_1e12f0;
    }
    ctx->pc = 0x1E12E8u;
    {
        const bool branch_taken_0x1e12e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e12e8) {
            ctx->pc = 0x1E1358u;
            goto label_1e1358;
        }
    }
    ctx->pc = 0x1E12F0u;
label_1e12f0:
    // 0x1e12f0: 0x27828d88  addiu       $v0, $gp, -0x7278
    ctx->pc = 0x1e12f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937992));
label_1e12f4:
    // 0x1e12f4: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e12f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e12f8:
    // 0x1e12f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e12f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e12fc:
    // 0x1e12fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e1300:
    if (ctx->pc == 0x1E1300u) {
        ctx->pc = 0x1E1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12FCu;
        // 0x1e1300: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1304u;
        goto label_1e1304;
    }
    ctx->pc = 0x1E12FCu;
    {
        const bool branch_taken_0x1e12fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E12FCu;
        // 0x1e1300: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12fc) {
            ctx->pc = 0x1E1310u;
            goto label_1e1310;
        }
    }
    ctx->pc = 0x1E1304u;
label_1e1304:
    // 0x1e1304: 0xc070080  jal         func_1C0200
label_1e1308:
    if (ctx->pc == 0x1E1308u) {
        ctx->pc = 0x1E1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1304u;
        // 0x1e1308: 0x240519b0  addiu       $a1, $zero, 0x19B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E130Cu;
        goto label_1e130c;
    }
    ctx->pc = 0x1E1304u;
    SET_GPR_U32(ctx, 31, 0x1E130Cu);
    ctx->pc = 0x1E1308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1304u;
    // 0x1e1308: 0x240519b0  addiu       $a1, $zero, 0x19B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E130Cu;
label_1e130c:
    // 0x1e130c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e130cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e1310:
    // 0x1e1310: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e1310u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1314:
    // 0x1e1314: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e1314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1318:
    // 0x1e1318: 0x0  nop
    ctx->pc = 0x1e1318u;
    // NOP
label_1e131c:
    // 0x1e131c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e131cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e1320:
    // 0x1e1320: 0x244226b0  addiu       $v0, $v0, 0x26B0
    ctx->pc = 0x1e1320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9904));
label_1e1324:
    // 0x1e1324: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e1324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e1328:
    // 0x1e1328: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e1328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e132c:
    // 0x1e132c: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1e132cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e1330:
    // 0x1e1330: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e1330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e1334:
    // 0x1e1334: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e1338:
    if (ctx->pc == 0x1E1338u) {
        ctx->pc = 0x1E1338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1334u;
        // 0x1e1338: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E133Cu;
        goto label_1e133c;
    }
    ctx->pc = 0x1E1334u;
    {
        const bool branch_taken_0x1e1334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1334u;
        // 0x1e1338: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1334) {
            ctx->pc = 0x1E1348u;
            goto label_1e1348;
        }
    }
    ctx->pc = 0x1E133Cu;
label_1e133c:
    // 0x1e133c: 0xc070080  jal         func_1C0200
label_1e1340:
    if (ctx->pc == 0x1E1340u) {
        ctx->pc = 0x1E1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E133Cu;
        // 0x1e1340: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1344u;
        goto label_1e1344;
    }
    ctx->pc = 0x1E133Cu;
    SET_GPR_U32(ctx, 31, 0x1E1344u);
    ctx->pc = 0x1E1340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E133Cu;
    // 0x1e1340: 0x24050160  addiu       $a1, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E1344u;
label_1e1344:
    // 0x1e1344: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1e1344u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1e1348:
    // 0x1e1348: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e1348u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1e134c:
    // 0x1e134c: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x1e134cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
label_1e1350:
    // 0x1e1350: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_1e1354:
    if (ctx->pc == 0x1E1354u) {
        ctx->pc = 0x1E1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1350u;
        // 0x1e1354: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1358u;
        goto label_1e1358;
    }
    ctx->pc = 0x1E1350u;
    {
        const bool branch_taken_0x1e1350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1350u;
        // 0x1e1354: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1350) {
            ctx->pc = 0x1E1318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1318;
        }
    }
    ctx->pc = 0x1E1358u;
label_1e1358:
    // 0x1e1358: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e1358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e135c:
    // 0x1e135c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1e135cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    ctx->pc = 0x1e1360u;
    return;
}
