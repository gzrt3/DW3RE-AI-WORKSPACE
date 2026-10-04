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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part159(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e8b30u: goto label_1e8b30;
        case 0x1e8b34u: goto label_1e8b34;
        case 0x1e8b38u: goto label_1e8b38;
        case 0x1e8b3cu: goto label_1e8b3c;
        case 0x1e8b40u: goto label_1e8b40;
        case 0x1e8b44u: goto label_1e8b44;
        case 0x1e8b48u: goto label_1e8b48;
        case 0x1e8b4cu: goto label_1e8b4c;
        case 0x1e8b50u: goto label_1e8b50;
        case 0x1e8b54u: goto label_1e8b54;
        case 0x1e8b58u: goto label_1e8b58;
        case 0x1e8b5cu: goto label_1e8b5c;
        case 0x1e8b60u: goto label_1e8b60;
        case 0x1e8b64u: goto label_1e8b64;
        case 0x1e8b68u: goto label_1e8b68;
        case 0x1e8b6cu: goto label_1e8b6c;
        case 0x1e8b70u: goto label_1e8b70;
        case 0x1e8b74u: goto label_1e8b74;
        case 0x1e8b78u: goto label_1e8b78;
        case 0x1e8b7cu: goto label_1e8b7c;
        case 0x1e8b80u: goto label_1e8b80;
        case 0x1e8b84u: goto label_1e8b84;
        case 0x1e8b88u: goto label_1e8b88;
        case 0x1e8b8cu: goto label_1e8b8c;
        case 0x1e8b90u: goto label_1e8b90;
        case 0x1e8b94u: goto label_1e8b94;
        case 0x1e8b98u: goto label_1e8b98;
        case 0x1e8b9cu: goto label_1e8b9c;
        case 0x1e8ba0u: goto label_1e8ba0;
        case 0x1e8ba4u: goto label_1e8ba4;
        case 0x1e8ba8u: goto label_1e8ba8;
        case 0x1e8bacu: goto label_1e8bac;
        case 0x1e8bb0u: goto label_1e8bb0;
        case 0x1e8bb4u: goto label_1e8bb4;
        case 0x1e8bb8u: goto label_1e8bb8;
        case 0x1e8bbcu: goto label_1e8bbc;
        case 0x1e8bc0u: goto label_1e8bc0;
        case 0x1e8bc4u: goto label_1e8bc4;
        case 0x1e8bc8u: goto label_1e8bc8;
        case 0x1e8bccu: goto label_1e8bcc;
        case 0x1e8bd0u: goto label_1e8bd0;
        case 0x1e8bd4u: goto label_1e8bd4;
        case 0x1e8bd8u: goto label_1e8bd8;
        case 0x1e8bdcu: goto label_1e8bdc;
        case 0x1e8be0u: goto label_1e8be0;
        case 0x1e8be4u: goto label_1e8be4;
        case 0x1e8be8u: goto label_1e8be8;
        case 0x1e8becu: goto label_1e8bec;
        case 0x1e8bf0u: goto label_1e8bf0;
        case 0x1e8bf4u: goto label_1e8bf4;
        case 0x1e8bf8u: goto label_1e8bf8;
        case 0x1e8bfcu: goto label_1e8bfc;
        case 0x1e8c00u: goto label_1e8c00;
        case 0x1e8c04u: goto label_1e8c04;
        case 0x1e8c08u: goto label_1e8c08;
        case 0x1e8c0cu: goto label_1e8c0c;
        case 0x1e8c10u: goto label_1e8c10;
        case 0x1e8c14u: goto label_1e8c14;
        case 0x1e8c18u: goto label_1e8c18;
        case 0x1e8c1cu: goto label_1e8c1c;
        case 0x1e8c20u: goto label_1e8c20;
        case 0x1e8c24u: goto label_1e8c24;
        case 0x1e8c28u: goto label_1e8c28;
        case 0x1e8c2cu: goto label_1e8c2c;
        case 0x1e8c30u: goto label_1e8c30;
        case 0x1e8c34u: goto label_1e8c34;
        case 0x1e8c38u: goto label_1e8c38;
        case 0x1e8c3cu: goto label_1e8c3c;
        case 0x1e8c40u: goto label_1e8c40;
        case 0x1e8c44u: goto label_1e8c44;
        case 0x1e8c48u: goto label_1e8c48;
        case 0x1e8c4cu: goto label_1e8c4c;
        case 0x1e8c50u: goto label_1e8c50;
        case 0x1e8c54u: goto label_1e8c54;
        case 0x1e8c58u: goto label_1e8c58;
        case 0x1e8c5cu: goto label_1e8c5c;
        case 0x1e8c60u: goto label_1e8c60;
        case 0x1e8c64u: goto label_1e8c64;
        case 0x1e8c68u: goto label_1e8c68;
        case 0x1e8c6cu: goto label_1e8c6c;
        case 0x1e8c70u: goto label_1e8c70;
        case 0x1e8c74u: goto label_1e8c74;
        case 0x1e8c78u: goto label_1e8c78;
        case 0x1e8c7cu: goto label_1e8c7c;
        case 0x1e8c80u: goto label_1e8c80;
        case 0x1e8c84u: goto label_1e8c84;
        case 0x1e8c88u: goto label_1e8c88;
        case 0x1e8c8cu: goto label_1e8c8c;
        case 0x1e8c90u: goto label_1e8c90;
        case 0x1e8c94u: goto label_1e8c94;
        case 0x1e8c98u: goto label_1e8c98;
        case 0x1e8c9cu: goto label_1e8c9c;
        case 0x1e8ca0u: goto label_1e8ca0;
        case 0x1e8ca4u: goto label_1e8ca4;
        case 0x1e8ca8u: goto label_1e8ca8;
        case 0x1e8cacu: goto label_1e8cac;
        case 0x1e8cb0u: goto label_1e8cb0;
        case 0x1e8cb4u: goto label_1e8cb4;
        case 0x1e8cb8u: goto label_1e8cb8;
        case 0x1e8cbcu: goto label_1e8cbc;
        case 0x1e8cc0u: goto label_1e8cc0;
        case 0x1e8cc4u: goto label_1e8cc4;
        case 0x1e8cc8u: goto label_1e8cc8;
        case 0x1e8cccu: goto label_1e8ccc;
        case 0x1e8cd0u: goto label_1e8cd0;
        case 0x1e8cd4u: goto label_1e8cd4;
        case 0x1e8cd8u: goto label_1e8cd8;
        case 0x1e8cdcu: goto label_1e8cdc;
        case 0x1e8ce0u: goto label_1e8ce0;
        case 0x1e8ce4u: goto label_1e8ce4;
        case 0x1e8ce8u: goto label_1e8ce8;
        case 0x1e8cecu: goto label_1e8cec;
        case 0x1e8cf0u: goto label_1e8cf0;
        case 0x1e8cf4u: goto label_1e8cf4;
        case 0x1e8cf8u: goto label_1e8cf8;
        case 0x1e8cfcu: goto label_1e8cfc;
        case 0x1e8d00u: goto label_1e8d00;
        case 0x1e8d04u: goto label_1e8d04;
        case 0x1e8d08u: goto label_1e8d08;
        case 0x1e8d0cu: goto label_1e8d0c;
        case 0x1e8d10u: goto label_1e8d10;
        case 0x1e8d14u: goto label_1e8d14;
        case 0x1e8d18u: goto label_1e8d18;
        case 0x1e8d1cu: goto label_1e8d1c;
        case 0x1e8d20u: goto label_1e8d20;
        case 0x1e8d24u: goto label_1e8d24;
        case 0x1e8d28u: goto label_1e8d28;
        case 0x1e8d2cu: goto label_1e8d2c;
        case 0x1e8d30u: goto label_1e8d30;
        case 0x1e8d34u: goto label_1e8d34;
        case 0x1e8d38u: goto label_1e8d38;
        case 0x1e8d3cu: goto label_1e8d3c;
        case 0x1e8d40u: goto label_1e8d40;
        case 0x1e8d44u: goto label_1e8d44;
        case 0x1e8d48u: goto label_1e8d48;
        case 0x1e8d4cu: goto label_1e8d4c;
        case 0x1e8d50u: goto label_1e8d50;
        case 0x1e8d54u: goto label_1e8d54;
        case 0x1e8d58u: goto label_1e8d58;
        case 0x1e8d5cu: goto label_1e8d5c;
        case 0x1e8d60u: goto label_1e8d60;
        case 0x1e8d64u: goto label_1e8d64;
        case 0x1e8d68u: goto label_1e8d68;
        case 0x1e8d6cu: goto label_1e8d6c;
        case 0x1e8d70u: goto label_1e8d70;
        case 0x1e8d74u: goto label_1e8d74;
        case 0x1e8d78u: goto label_1e8d78;
        case 0x1e8d7cu: goto label_1e8d7c;
        case 0x1e8d80u: goto label_1e8d80;
        case 0x1e8d84u: goto label_1e8d84;
        case 0x1e8d88u: goto label_1e8d88;
        case 0x1e8d8cu: goto label_1e8d8c;
        case 0x1e8d90u: goto label_1e8d90;
        case 0x1e8d94u: goto label_1e8d94;
        case 0x1e8d98u: goto label_1e8d98;
        case 0x1e8d9cu: goto label_1e8d9c;
        case 0x1e8da0u: goto label_1e8da0;
        case 0x1e8da4u: goto label_1e8da4;
        case 0x1e8da8u: goto label_1e8da8;
        case 0x1e8dacu: goto label_1e8dac;
        case 0x1e8db0u: goto label_1e8db0;
        case 0x1e8db4u: goto label_1e8db4;
        case 0x1e8db8u: goto label_1e8db8;
        case 0x1e8dbcu: goto label_1e8dbc;
        case 0x1e8dc0u: goto label_1e8dc0;
        case 0x1e8dc4u: goto label_1e8dc4;
        case 0x1e8dc8u: goto label_1e8dc8;
        case 0x1e8dccu: goto label_1e8dcc;
        case 0x1e8dd0u: goto label_1e8dd0;
        case 0x1e8dd4u: goto label_1e8dd4;
        case 0x1e8dd8u: goto label_1e8dd8;
        case 0x1e8ddcu: goto label_1e8ddc;
        case 0x1e8de0u: goto label_1e8de0;
        case 0x1e8de4u: goto label_1e8de4;
        case 0x1e8de8u: goto label_1e8de8;
        case 0x1e8decu: goto label_1e8dec;
        case 0x1e8df0u: goto label_1e8df0;
        case 0x1e8df4u: goto label_1e8df4;
        case 0x1e8df8u: goto label_1e8df8;
        case 0x1e8dfcu: goto label_1e8dfc;
        case 0x1e8e00u: goto label_1e8e00;
        case 0x1e8e04u: goto label_1e8e04;
        case 0x1e8e08u: goto label_1e8e08;
        case 0x1e8e0cu: goto label_1e8e0c;
        case 0x1e8e10u: goto label_1e8e10;
        case 0x1e8e14u: goto label_1e8e14;
        case 0x1e8e18u: goto label_1e8e18;
        case 0x1e8e1cu: goto label_1e8e1c;
        case 0x1e8e20u: goto label_1e8e20;
        case 0x1e8e24u: goto label_1e8e24;
        case 0x1e8e28u: goto label_1e8e28;
        case 0x1e8e2cu: goto label_1e8e2c;
        case 0x1e8e30u: goto label_1e8e30;
        case 0x1e8e34u: goto label_1e8e34;
        case 0x1e8e38u: goto label_1e8e38;
        case 0x1e8e3cu: goto label_1e8e3c;
        case 0x1e8e40u: goto label_1e8e40;
        case 0x1e8e44u: goto label_1e8e44;
        case 0x1e8e48u: goto label_1e8e48;
        case 0x1e8e4cu: goto label_1e8e4c;
        case 0x1e8e50u: goto label_1e8e50;
        case 0x1e8e54u: goto label_1e8e54;
        case 0x1e8e58u: goto label_1e8e58;
        case 0x1e8e5cu: goto label_1e8e5c;
        case 0x1e8e60u: goto label_1e8e60;
        case 0x1e8e64u: goto label_1e8e64;
        case 0x1e8e68u: goto label_1e8e68;
        case 0x1e8e6cu: goto label_1e8e6c;
        case 0x1e8e70u: goto label_1e8e70;
        case 0x1e8e74u: goto label_1e8e74;
        case 0x1e8e78u: goto label_1e8e78;
        case 0x1e8e7cu: goto label_1e8e7c;
        case 0x1e8e80u: goto label_1e8e80;
        case 0x1e8e84u: goto label_1e8e84;
        case 0x1e8e88u: goto label_1e8e88;
        case 0x1e8e8cu: goto label_1e8e8c;
        case 0x1e8e90u: goto label_1e8e90;
        case 0x1e8e94u: goto label_1e8e94;
        case 0x1e8e98u: goto label_1e8e98;
        case 0x1e8e9cu: goto label_1e8e9c;
        case 0x1e8ea0u: goto label_1e8ea0;
        case 0x1e8ea4u: goto label_1e8ea4;
        case 0x1e8ea8u: goto label_1e8ea8;
        case 0x1e8eacu: goto label_1e8eac;
        case 0x1e8eb0u: goto label_1e8eb0;
        case 0x1e8eb4u: goto label_1e8eb4;
        case 0x1e8eb8u: goto label_1e8eb8;
        case 0x1e8ebcu: goto label_1e8ebc;
        case 0x1e8ec0u: goto label_1e8ec0;
        case 0x1e8ec4u: goto label_1e8ec4;
        case 0x1e8ec8u: goto label_1e8ec8;
        case 0x1e8eccu: goto label_1e8ecc;
        case 0x1e8ed0u: goto label_1e8ed0;
        case 0x1e8ed4u: goto label_1e8ed4;
        case 0x1e8ed8u: goto label_1e8ed8;
        case 0x1e8edcu: goto label_1e8edc;
        case 0x1e8ee0u: goto label_1e8ee0;
        case 0x1e8ee4u: goto label_1e8ee4;
        case 0x1e8ee8u: goto label_1e8ee8;
        case 0x1e8eecu: goto label_1e8eec;
        case 0x1e8ef0u: goto label_1e8ef0;
        case 0x1e8ef4u: goto label_1e8ef4;
        case 0x1e8ef8u: goto label_1e8ef8;
        case 0x1e8efcu: goto label_1e8efc;
        case 0x1e8f00u: goto label_1e8f00;
        case 0x1e8f04u: goto label_1e8f04;
        case 0x1e8f08u: goto label_1e8f08;
        case 0x1e8f0cu: goto label_1e8f0c;
        case 0x1e8f10u: goto label_1e8f10;
        case 0x1e8f14u: goto label_1e8f14;
        case 0x1e8f18u: goto label_1e8f18;
        case 0x1e8f1cu: goto label_1e8f1c;
        case 0x1e8f20u: goto label_1e8f20;
        case 0x1e8f24u: goto label_1e8f24;
        case 0x1e8f28u: goto label_1e8f28;
        case 0x1e8f2cu: goto label_1e8f2c;
        case 0x1e8f30u: goto label_1e8f30;
        case 0x1e8f34u: goto label_1e8f34;
        case 0x1e8f38u: goto label_1e8f38;
        case 0x1e8f3cu: goto label_1e8f3c;
        case 0x1e8f40u: goto label_1e8f40;
        case 0x1e8f44u: goto label_1e8f44;
        case 0x1e8f48u: goto label_1e8f48;
        case 0x1e8f4cu: goto label_1e8f4c;
        case 0x1e8f50u: goto label_1e8f50;
        case 0x1e8f54u: goto label_1e8f54;
        case 0x1e8f58u: goto label_1e8f58;
        case 0x1e8f5cu: goto label_1e8f5c;
        case 0x1e8f60u: goto label_1e8f60;
        case 0x1e8f64u: goto label_1e8f64;
        case 0x1e8f68u: goto label_1e8f68;
        case 0x1e8f6cu: goto label_1e8f6c;
        case 0x1e8f70u: goto label_1e8f70;
        case 0x1e8f74u: goto label_1e8f74;
        case 0x1e8f78u: goto label_1e8f78;
        case 0x1e8f7cu: goto label_1e8f7c;
        case 0x1e8f80u: goto label_1e8f80;
        case 0x1e8f84u: goto label_1e8f84;
        case 0x1e8f88u: goto label_1e8f88;
        case 0x1e8f8cu: goto label_1e8f8c;
        case 0x1e8f90u: goto label_1e8f90;
        case 0x1e8f94u: goto label_1e8f94;
        case 0x1e8f98u: goto label_1e8f98;
        case 0x1e8f9cu: goto label_1e8f9c;
        case 0x1e8fa0u: goto label_1e8fa0;
        case 0x1e8fa4u: goto label_1e8fa4;
        case 0x1e8fa8u: goto label_1e8fa8;
        case 0x1e8facu: goto label_1e8fac;
        case 0x1e8fb0u: goto label_1e8fb0;
        case 0x1e8fb4u: goto label_1e8fb4;
        case 0x1e8fb8u: goto label_1e8fb8;
        case 0x1e8fbcu: goto label_1e8fbc;
        case 0x1e8fc0u: goto label_1e8fc0;
        case 0x1e8fc4u: goto label_1e8fc4;
        case 0x1e8fc8u: goto label_1e8fc8;
        case 0x1e8fccu: goto label_1e8fcc;
        case 0x1e8fd0u: goto label_1e8fd0;
        case 0x1e8fd4u: goto label_1e8fd4;
        case 0x1e8fd8u: goto label_1e8fd8;
        case 0x1e8fdcu: goto label_1e8fdc;
        case 0x1e8fe0u: goto label_1e8fe0;
        case 0x1e8fe4u: goto label_1e8fe4;
        case 0x1e8fe8u: goto label_1e8fe8;
        case 0x1e8fecu: goto label_1e8fec;
        case 0x1e8ff0u: goto label_1e8ff0;
        case 0x1e8ff4u: goto label_1e8ff4;
        case 0x1e8ff8u: goto label_1e8ff8;
        case 0x1e8ffcu: goto label_1e8ffc;
        case 0x1e9000u: goto label_1e9000;
        case 0x1e9004u: goto label_1e9004;
        case 0x1e9008u: goto label_1e9008;
        case 0x1e900cu: goto label_1e900c;
        case 0x1e9010u: goto label_1e9010;
        case 0x1e9014u: goto label_1e9014;
        case 0x1e9018u: goto label_1e9018;
        case 0x1e901cu: goto label_1e901c;
        case 0x1e9020u: goto label_1e9020;
        case 0x1e9024u: goto label_1e9024;
        case 0x1e9028u: goto label_1e9028;
        case 0x1e902cu: goto label_1e902c;
        case 0x1e9030u: goto label_1e9030;
        case 0x1e9034u: goto label_1e9034;
        case 0x1e9038u: goto label_1e9038;
        case 0x1e903cu: goto label_1e903c;
        case 0x1e9040u: goto label_1e9040;
        case 0x1e9044u: goto label_1e9044;
        case 0x1e9048u: goto label_1e9048;
        case 0x1e904cu: goto label_1e904c;
        case 0x1e9050u: goto label_1e9050;
        case 0x1e9054u: goto label_1e9054;
        case 0x1e9058u: goto label_1e9058;
        case 0x1e905cu: goto label_1e905c;
        case 0x1e9060u: goto label_1e9060;
        case 0x1e9064u: goto label_1e9064;
        case 0x1e9068u: goto label_1e9068;
        case 0x1e906cu: goto label_1e906c;
        case 0x1e9070u: goto label_1e9070;
        case 0x1e9074u: goto label_1e9074;
        case 0x1e9078u: goto label_1e9078;
        case 0x1e907cu: goto label_1e907c;
        case 0x1e9080u: goto label_1e9080;
        case 0x1e9084u: goto label_1e9084;
        case 0x1e9088u: goto label_1e9088;
        case 0x1e908cu: goto label_1e908c;
        case 0x1e9090u: goto label_1e9090;
        case 0x1e9094u: goto label_1e9094;
        case 0x1e9098u: goto label_1e9098;
        case 0x1e909cu: goto label_1e909c;
        case 0x1e90a0u: goto label_1e90a0;
        case 0x1e90a4u: goto label_1e90a4;
        case 0x1e90a8u: goto label_1e90a8;
        case 0x1e90acu: goto label_1e90ac;
        case 0x1e90b0u: goto label_1e90b0;
        case 0x1e90b4u: goto label_1e90b4;
        case 0x1e90b8u: goto label_1e90b8;
        case 0x1e90bcu: goto label_1e90bc;
        case 0x1e90c0u: goto label_1e90c0;
        case 0x1e90c4u: goto label_1e90c4;
        case 0x1e90c8u: goto label_1e90c8;
        case 0x1e90ccu: goto label_1e90cc;
        case 0x1e90d0u: goto label_1e90d0;
        case 0x1e90d4u: goto label_1e90d4;
        case 0x1e90d8u: goto label_1e90d8;
        case 0x1e90dcu: goto label_1e90dc;
        case 0x1e90e0u: goto label_1e90e0;
        case 0x1e90e4u: goto label_1e90e4;
        case 0x1e90e8u: goto label_1e90e8;
        case 0x1e90ecu: goto label_1e90ec;
        case 0x1e90f0u: goto label_1e90f0;
        case 0x1e90f4u: goto label_1e90f4;
        case 0x1e90f8u: goto label_1e90f8;
        case 0x1e90fcu: goto label_1e90fc;
        case 0x1e9100u: goto label_1e9100;
        case 0x1e9104u: goto label_1e9104;
        case 0x1e9108u: goto label_1e9108;
        case 0x1e910cu: goto label_1e910c;
        case 0x1e9110u: goto label_1e9110;
        case 0x1e9114u: goto label_1e9114;
        case 0x1e9118u: goto label_1e9118;
        case 0x1e911cu: goto label_1e911c;
        case 0x1e9120u: goto label_1e9120;
        case 0x1e9124u: goto label_1e9124;
        case 0x1e9128u: goto label_1e9128;
        case 0x1e912cu: goto label_1e912c;
        case 0x1e9130u: goto label_1e9130;
        case 0x1e9134u: goto label_1e9134;
        case 0x1e9138u: goto label_1e9138;
        case 0x1e913cu: goto label_1e913c;
        case 0x1e9140u: goto label_1e9140;
        case 0x1e9144u: goto label_1e9144;
        case 0x1e9148u: goto label_1e9148;
        case 0x1e914cu: goto label_1e914c;
        case 0x1e9150u: goto label_1e9150;
        case 0x1e9154u: goto label_1e9154;
        case 0x1e9158u: goto label_1e9158;
        case 0x1e915cu: goto label_1e915c;
        case 0x1e9160u: goto label_1e9160;
        case 0x1e9164u: goto label_1e9164;
        case 0x1e9168u: goto label_1e9168;
        case 0x1e916cu: goto label_1e916c;
        case 0x1e9170u: goto label_1e9170;
        case 0x1e9174u: goto label_1e9174;
        case 0x1e9178u: goto label_1e9178;
        case 0x1e917cu: goto label_1e917c;
        case 0x1e9180u: goto label_1e9180;
        case 0x1e9184u: goto label_1e9184;
        case 0x1e9188u: goto label_1e9188;
        case 0x1e918cu: goto label_1e918c;
        case 0x1e9190u: goto label_1e9190;
        case 0x1e9194u: goto label_1e9194;
        case 0x1e9198u: goto label_1e9198;
        case 0x1e919cu: goto label_1e919c;
        case 0x1e91a0u: goto label_1e91a0;
        case 0x1e91a4u: goto label_1e91a4;
        case 0x1e91a8u: goto label_1e91a8;
        case 0x1e91acu: goto label_1e91ac;
        case 0x1e91b0u: goto label_1e91b0;
        case 0x1e91b4u: goto label_1e91b4;
        case 0x1e91b8u: goto label_1e91b8;
        case 0x1e91bcu: goto label_1e91bc;
        case 0x1e91c0u: goto label_1e91c0;
        case 0x1e91c4u: goto label_1e91c4;
        case 0x1e91c8u: goto label_1e91c8;
        case 0x1e91ccu: goto label_1e91cc;
        case 0x1e91d0u: goto label_1e91d0;
        case 0x1e91d4u: goto label_1e91d4;
        case 0x1e91d8u: goto label_1e91d8;
        case 0x1e91dcu: goto label_1e91dc;
        case 0x1e91e0u: goto label_1e91e0;
        case 0x1e91e4u: goto label_1e91e4;
        case 0x1e91e8u: goto label_1e91e8;
        case 0x1e91ecu: goto label_1e91ec;
        case 0x1e91f0u: goto label_1e91f0;
        case 0x1e91f4u: goto label_1e91f4;
        case 0x1e91f8u: goto label_1e91f8;
        case 0x1e91fcu: goto label_1e91fc;
        case 0x1e9200u: goto label_1e9200;
        case 0x1e9204u: goto label_1e9204;
        case 0x1e9208u: goto label_1e9208;
        case 0x1e920cu: goto label_1e920c;
        case 0x1e9210u: goto label_1e9210;
        case 0x1e9214u: goto label_1e9214;
        case 0x1e9218u: goto label_1e9218;
        case 0x1e921cu: goto label_1e921c;
        case 0x1e9220u: goto label_1e9220;
        case 0x1e9224u: goto label_1e9224;
        case 0x1e9228u: goto label_1e9228;
        case 0x1e922cu: goto label_1e922c;
        case 0x1e9230u: goto label_1e9230;
        case 0x1e9234u: goto label_1e9234;
        case 0x1e9238u: goto label_1e9238;
        case 0x1e923cu: goto label_1e923c;
        case 0x1e9240u: goto label_1e9240;
        case 0x1e9244u: goto label_1e9244;
        case 0x1e9248u: goto label_1e9248;
        case 0x1e924cu: goto label_1e924c;
        case 0x1e9250u: goto label_1e9250;
        case 0x1e9254u: goto label_1e9254;
        case 0x1e9258u: goto label_1e9258;
        case 0x1e925cu: goto label_1e925c;
        case 0x1e9260u: goto label_1e9260;
        case 0x1e9264u: goto label_1e9264;
        case 0x1e9268u: goto label_1e9268;
        case 0x1e926cu: goto label_1e926c;
        case 0x1e9270u: goto label_1e9270;
        case 0x1e9274u: goto label_1e9274;
        case 0x1e9278u: goto label_1e9278;
        case 0x1e927cu: goto label_1e927c;
        case 0x1e9280u: goto label_1e9280;
        case 0x1e9284u: goto label_1e9284;
        case 0x1e9288u: goto label_1e9288;
        case 0x1e928cu: goto label_1e928c;
        case 0x1e9290u: goto label_1e9290;
        case 0x1e9294u: goto label_1e9294;
        case 0x1e9298u: goto label_1e9298;
        case 0x1e929cu: goto label_1e929c;
        case 0x1e92a0u: goto label_1e92a0;
        case 0x1e92a4u: goto label_1e92a4;
        case 0x1e92a8u: goto label_1e92a8;
        case 0x1e92acu: goto label_1e92ac;
        case 0x1e92b0u: goto label_1e92b0;
        case 0x1e92b4u: goto label_1e92b4;
        case 0x1e92b8u: goto label_1e92b8;
        case 0x1e92bcu: goto label_1e92bc;
        case 0x1e92c0u: goto label_1e92c0;
        case 0x1e92c4u: goto label_1e92c4;
        case 0x1e92c8u: goto label_1e92c8;
        case 0x1e92ccu: goto label_1e92cc;
        case 0x1e92d0u: goto label_1e92d0;
        case 0x1e92d4u: goto label_1e92d4;
        case 0x1e92d8u: goto label_1e92d8;
        case 0x1e92dcu: goto label_1e92dc;
        case 0x1e92e0u: goto label_1e92e0;
        case 0x1e92e4u: goto label_1e92e4;
        case 0x1e92e8u: goto label_1e92e8;
        case 0x1e92ecu: goto label_1e92ec;
        case 0x1e92f0u: goto label_1e92f0;
        case 0x1e92f4u: goto label_1e92f4;
        case 0x1e92f8u: goto label_1e92f8;
        case 0x1e92fcu: goto label_1e92fc;
        default: return;
    }

label_1e8b30:
    // 0x1e8b30: 0x10830163  beq         $a0, $v1, . + 4 + (0x163 << 2)
label_1e8b34:
    if (ctx->pc == 0x1E8B34u) {
        ctx->pc = 0x1E8B38u;
        goto label_1e8b38;
    }
    ctx->pc = 0x1E8B30u;
    {
        const bool branch_taken_0x1e8b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8b30) {
            ctx->pc = 0x1E90C0u;
            goto label_1e90c0;
        }
    }
    ctx->pc = 0x1E8B38u;
label_1e8b38:
    // 0x1e8b38: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x1e8b38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_1e8b3c:
    // 0x1e8b3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e8b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8b40:
    // 0x1e8b40: 0x2842004  sllv        $a0, $a0, $s4
    ctx->pc = 0x1e8b40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 20) & 0x1F));
label_1e8b44:
    // 0x1e8b44: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e8b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1e8b48:
    // 0x1e8b48: 0x1460015d  bnez        $v1, . + 4 + (0x15D << 2)
label_1e8b4c:
    if (ctx->pc == 0x1E8B4Cu) {
        ctx->pc = 0x1E8B50u;
        goto label_1e8b50;
    }
    ctx->pc = 0x1E8B48u;
    {
        const bool branch_taken_0x1e8b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8b48) {
            ctx->pc = 0x1E90C0u;
            goto label_1e90c0;
        }
    }
    ctx->pc = 0x1E8B50u;
label_1e8b50:
    // 0x1e8b50: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x1e8b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1e8b54:
    // 0x1e8b54: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1e8b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1e8b58:
    // 0x1e8b58: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1e8b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e8b5c:
    // 0x1e8b5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e8b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1e8b60:
    // 0x1e8b60: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_1e8b64:
    if (ctx->pc == 0x1E8B64u) {
        ctx->pc = 0x1E8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B60u;
        // 0x1e8b64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8B68u;
        goto label_1e8b68;
    }
    ctx->pc = 0x1E8B60u;
    {
        const bool branch_taken_0x1e8b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B60u;
        // 0x1e8b64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b60) {
            ctx->pc = 0x1E8C5Cu;
            goto label_1e8c5c;
        }
    }
    ctx->pc = 0x1E8B68u;
label_1e8b68:
    // 0x1e8b68: 0x86430054  lh          $v1, 0x54($s2)
    ctx->pc = 0x1e8b68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 84)));
label_1e8b6c:
    // 0x1e8b6c: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x1e8b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8b70:
    // 0x1e8b70: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1e8b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e8b74:
    // 0x1e8b74: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x1e8b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1e8b78:
    // 0x1e8b78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e8b78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e8b7c:
    // 0x1e8b7c: 0x0  nop
    ctx->pc = 0x1e8b7cu;
    // NOP
label_1e8b80:
    // 0x1e8b80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e8b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e8b84:
    // 0x1e8b84: 0x24830150  addiu       $v1, $a0, 0x150
    ctx->pc = 0x1e8b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
label_1e8b88:
    // 0x1e8b88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e8b88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e8b8c:
    // 0x1e8b8c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e8b8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1e8b90:
    // 0x1e8b90: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e8b90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1e8b94:
    // 0x1e8b94: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1e8b94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1e8b98:
    // 0x1e8b98: 0x4a0002ff  vnop
    ctx->pc = 0x1e8b98u;
    // NOP operation, no action needed for VU0
label_1e8b9c:
    // 0x1e8b9c: 0x4a0002ff  vnop
    ctx->pc = 0x1e8b9cu;
    // NOP operation, no action needed for VU0
label_1e8ba0:
    // 0x1e8ba0: 0x4a0002ff  vnop
    ctx->pc = 0x1e8ba0u;
    // NOP operation, no action needed for VU0
label_1e8ba4:
    // 0x1e8ba4: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x1e8ba4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1e8ba8:
    // 0x1e8ba8: 0x4a0002ff  vnop
    ctx->pc = 0x1e8ba8u;
    // NOP operation, no action needed for VU0
label_1e8bac:
    // 0x1e8bac: 0x4a0002ff  vnop
    ctx->pc = 0x1e8bacu;
    // NOP operation, no action needed for VU0
label_1e8bb0:
    // 0x1e8bb0: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x1e8bb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1e8bb4:
    // 0x1e8bb4: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x1e8bb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1e8bb8:
    // 0x1e8bb8: 0x4a0002ff  vnop
    ctx->pc = 0x1e8bb8u;
    // NOP operation, no action needed for VU0
label_1e8bbc:
    // 0x1e8bbc: 0x4a0002ff  vnop
    ctx->pc = 0x1e8bbcu;
    // NOP operation, no action needed for VU0
label_1e8bc0:
    // 0x1e8bc0: 0x4a0002ff  vnop
    ctx->pc = 0x1e8bc0u;
    // NOP operation, no action needed for VU0
label_1e8bc4:
    // 0x1e8bc4: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1e8bc4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1e8bc8:
    // 0x1e8bc8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e8bc8u;
    // VWAITQ (Q already resolved in this runtime)
label_1e8bcc:
    // 0x1e8bcc: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x1e8bccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1e8bd0:
    // 0x1e8bd0: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x1e8bd0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e8bd4:
    // 0x1e8bd4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1e8bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_1e8bd8:
    // 0x1e8bd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8bd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8bdc:
    // 0x1e8bdc: 0x0  nop
    ctx->pc = 0x1e8bdcu;
    // NOP
label_1e8be0:
    // 0x1e8be0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1e8be0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1e8be4:
    // 0x1e8be4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1e8be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8be8:
    // 0x1e8be8: 0x0  nop
    ctx->pc = 0x1e8be8u;
    // NOP
label_1e8bec:
    // 0x1e8bec: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
label_1e8bf0:
    if (ctx->pc == 0x1E8BF0u) {
        ctx->pc = 0x1E8BF4u;
        goto label_1e8bf4;
    }
    ctx->pc = 0x1E8BECu;
    {
        const bool branch_taken_0x1e8bec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8bec) {
            ctx->pc = 0x1E8CDCu;
            goto label_1e8cdc;
        }
    }
    ctx->pc = 0x1E8BF4u;
label_1e8bf4:
    // 0x1e8bf4: 0x9642005c  lhu         $v0, 0x5C($s2)
    ctx->pc = 0x1e8bf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 92)));
label_1e8bf8:
    // 0x1e8bf8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e8bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1e8bfc:
    // 0x1e8bfc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1e8c00:
    if (ctx->pc == 0x1E8C00u) {
        ctx->pc = 0x1E8C04u;
        goto label_1e8c04;
    }
    ctx->pc = 0x1E8BFCu;
    {
        const bool branch_taken_0x1e8bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8bfc) {
            ctx->pc = 0x1E8C30u;
            goto label_1e8c30;
        }
    }
    ctx->pc = 0x1E8C04u;
label_1e8c04:
    // 0x1e8c04: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x1e8c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8c08:
    // 0x1e8c08: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x1e8c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8c0c:
    // 0x1e8c0c: 0xc06d448  jal         func_1B5120
label_1e8c10:
    if (ctx->pc == 0x1E8C10u) {
        ctx->pc = 0x1E8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C0Cu;
        // 0x1e8c10: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8C14u;
        goto label_1e8c14;
    }
    ctx->pc = 0x1E8C0Cu;
    SET_GPR_U32(ctx, 31, 0x1E8C14u);
    ctx->pc = 0x1E8C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8C0Cu;
    // 0x1e8c10: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1E8C14u;
label_1e8c14:
    // 0x1e8c14: 0xc6410050  lwc1        $f1, 0x50($s2)
    ctx->pc = 0x1e8c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8c18:
    // 0x1e8c18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e8c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8c1c:
    // 0x1e8c1c: 0x0  nop
    ctx->pc = 0x1e8c1cu;
    // NOP
label_1e8c20:
    // 0x1e8c20: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_1e8c24:
    if (ctx->pc == 0x1E8C24u) {
        ctx->pc = 0x1E8C28u;
        goto label_1e8c28;
    }
    ctx->pc = 0x1E8C20u;
    {
        const bool branch_taken_0x1e8c20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8c20) {
            ctx->pc = 0x1E8CDCu;
            goto label_1e8cdc;
        }
    }
    ctx->pc = 0x1E8C28u;
label_1e8c28:
    // 0x1e8c28: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1e8c2c:
    if (ctx->pc == 0x1E8C2Cu) {
        ctx->pc = 0x1E8C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C28u;
        // 0x1e8c2c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8C30u;
        goto label_1e8c30;
    }
    ctx->pc = 0x1E8C28u;
    {
        const bool branch_taken_0x1e8c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C28u;
        // 0x1e8c2c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c28) {
            ctx->pc = 0x1E8CDCu;
            goto label_1e8cdc;
        }
    }
    ctx->pc = 0x1E8C30u;
label_1e8c30:
    // 0x1e8c30: 0xc4810154  lwc1        $f1, 0x154($a0)
    ctx->pc = 0x1e8c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8c34:
    // 0x1e8c34: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x1e8c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8c38:
    // 0x1e8c38: 0xc06d448  jal         func_1B5120
label_1e8c3c:
    if (ctx->pc == 0x1E8C3Cu) {
        ctx->pc = 0x1E8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C38u;
        // 0x1e8c3c: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8C40u;
        goto label_1e8c40;
    }
    ctx->pc = 0x1E8C38u;
    SET_GPR_U32(ctx, 31, 0x1E8C40u);
    ctx->pc = 0x1E8C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8C38u;
    // 0x1e8c3c: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1E8C40u;
label_1e8c40:
    // 0x1e8c40: 0xc6410050  lwc1        $f1, 0x50($s2)
    ctx->pc = 0x1e8c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8c44:
    // 0x1e8c44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e8c44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8c48:
    // 0x1e8c48: 0x0  nop
    ctx->pc = 0x1e8c48u;
    // NOP
label_1e8c4c:
    // 0x1e8c4c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_1e8c50:
    if (ctx->pc == 0x1E8C50u) {
        ctx->pc = 0x1E8C54u;
        goto label_1e8c54;
    }
    ctx->pc = 0x1E8C4Cu;
    {
        const bool branch_taken_0x1e8c4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8c4c) {
            ctx->pc = 0x1E8CDCu;
            goto label_1e8cdc;
        }
    }
    ctx->pc = 0x1E8C54u;
label_1e8c54:
    // 0x1e8c54: 0x10000021  b           . + 4 + (0x21 << 2)
label_1e8c58:
    if (ctx->pc == 0x1E8C58u) {
        ctx->pc = 0x1E8C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C54u;
        // 0x1e8c58: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8C5Cu;
        goto label_1e8c5c;
    }
    ctx->pc = 0x1E8C54u;
    {
        const bool branch_taken_0x1e8c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C54u;
        // 0x1e8c58: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c54) {
            ctx->pc = 0x1E8CDCu;
            goto label_1e8cdc;
        }
    }
    ctx->pc = 0x1E8C5Cu;
label_1e8c5c:
    // 0x1e8c5c: 0x0  nop
    ctx->pc = 0x1e8c5cu;
    // NOP
label_1e8c60:
    // 0x1e8c60: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e8c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e8c64:
    // 0x1e8c64: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x1e8c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1e8c68:
    // 0x1e8c68: 0x24630150  addiu       $v1, $v1, 0x150
    ctx->pc = 0x1e8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
label_1e8c6c:
    // 0x1e8c6c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e8c6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1e8c70:
    // 0x1e8c70: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e8c70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1e8c74:
    // 0x1e8c74: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1e8c74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1e8c78:
    // 0x1e8c78: 0x4a0002ff  vnop
    ctx->pc = 0x1e8c78u;
    // NOP operation, no action needed for VU0
label_1e8c7c:
    // 0x1e8c7c: 0x4a0002ff  vnop
    ctx->pc = 0x1e8c7cu;
    // NOP operation, no action needed for VU0
label_1e8c80:
    // 0x1e8c80: 0x4a0002ff  vnop
    ctx->pc = 0x1e8c80u;
    // NOP operation, no action needed for VU0
label_1e8c84:
    // 0x1e8c84: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x1e8c84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1e8c88:
    // 0x1e8c88: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x1e8c88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1e8c8c:
    // 0x1e8c8c: 0x4a0002ff  vnop
    ctx->pc = 0x1e8c8cu;
    // NOP operation, no action needed for VU0
label_1e8c90:
    // 0x1e8c90: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x1e8c90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1e8c94:
    // 0x1e8c94: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x1e8c94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1e8c98:
    // 0x1e8c98: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x1e8c98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1e8c9c:
    // 0x1e8c9c: 0x4a0002ff  vnop
    ctx->pc = 0x1e8c9cu;
    // NOP operation, no action needed for VU0
label_1e8ca0:
    // 0x1e8ca0: 0x4a0002ff  vnop
    ctx->pc = 0x1e8ca0u;
    // NOP operation, no action needed for VU0
label_1e8ca4:
    // 0x1e8ca4: 0x4a0002ff  vnop
    ctx->pc = 0x1e8ca4u;
    // NOP operation, no action needed for VU0
label_1e8ca8:
    // 0x1e8ca8: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1e8ca8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1e8cac:
    // 0x1e8cac: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e8cacu;
    // VWAITQ (Q already resolved in this runtime)
label_1e8cb0:
    // 0x1e8cb0: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x1e8cb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1e8cb4:
    // 0x1e8cb4: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x1e8cb4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e8cb8:
    // 0x1e8cb8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1e8cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_1e8cbc:
    // 0x1e8cbc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e8cbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e8cc0:
    // 0x1e8cc0: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x1e8cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8cc4:
    // 0x1e8cc4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1e8cc4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1e8cc8:
    // 0x1e8cc8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e8cc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8ccc:
    // 0x1e8ccc: 0x0  nop
    ctx->pc = 0x1e8cccu;
    // NOP
label_1e8cd0:
    // 0x1e8cd0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1e8cd4:
    if (ctx->pc == 0x1E8CD4u) {
        ctx->pc = 0x1E8CD8u;
        goto label_1e8cd8;
    }
    ctx->pc = 0x1E8CD0u;
    {
        const bool branch_taken_0x1e8cd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8cd0) {
            ctx->pc = 0x1E8CDCu;
            goto label_1e8cdc;
        }
    }
    ctx->pc = 0x1E8CD8u;
label_1e8cd8:
    // 0x1e8cd8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1e8cd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8cdc:
    // 0x1e8cdc: 0x0  nop
    ctx->pc = 0x1e8cdcu;
    // NOP
label_1e8ce0:
    // 0x1e8ce0: 0x126000f7  beqz        $s3, . + 4 + (0xF7 << 2)
label_1e8ce4:
    if (ctx->pc == 0x1E8CE4u) {
        ctx->pc = 0x1E8CE8u;
        goto label_1e8ce8;
    }
    ctx->pc = 0x1E8CE0u;
    {
        const bool branch_taken_0x1e8ce0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8ce0) {
            ctx->pc = 0x1E90C0u;
            goto label_1e90c0;
        }
    }
    ctx->pc = 0x1E8CE8u;
label_1e8ce8:
    // 0x1e8ce8: 0x8203002a  lb          $v1, 0x2A($s0)
    ctx->pc = 0x1e8ce8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
label_1e8cec:
    // 0x1e8cec: 0x146000c5  bnez        $v1, . + 4 + (0xC5 << 2)
label_1e8cf0:
    if (ctx->pc == 0x1E8CF0u) {
        ctx->pc = 0x1E8CF4u;
        goto label_1e8cf4;
    }
    ctx->pc = 0x1E8CECu;
    {
        const bool branch_taken_0x1e8cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8cec) {
            ctx->pc = 0x1E9004u;
            goto label_1e9004;
        }
    }
    ctx->pc = 0x1E8CF4u;
label_1e8cf4:
    // 0x1e8cf4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1e8cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e8cf8:
    // 0x1e8cf8: 0x9244005e  lbu         $a0, 0x5E($s2)
    ctx->pc = 0x1e8cf8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 94)));
label_1e8cfc:
    // 0x1e8cfc: 0x90630234  lbu         $v1, 0x234($v1)
    ctx->pc = 0x1e8cfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 564)));
label_1e8d00:
    // 0x1e8d00: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_1e8d04:
    if (ctx->pc == 0x1E8D04u) {
        ctx->pc = 0x1E8D08u;
        goto label_1e8d08;
    }
    ctx->pc = 0x1E8D00u;
    {
        const bool branch_taken_0x1e8d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e8d00) {
            ctx->pc = 0x1E8D38u;
            goto label_1e8d38;
        }
    }
    ctx->pc = 0x1E8D08u;
label_1e8d08:
    // 0x1e8d08: 0x82420058  lb          $v0, 0x58($s2)
    ctx->pc = 0x1e8d08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
label_1e8d0c:
    // 0x1e8d0c: 0x38420019  xori        $v0, $v0, 0x19
    ctx->pc = 0x1e8d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)25);
label_1e8d10:
    // 0x1e8d10: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e8d10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e8d14:
    // 0x1e8d14: 0xaf828ea8  sw          $v0, -0x7158($gp)
    ctx->pc = 0x1e8d14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938280), GPR_U32(ctx, 2));
label_1e8d18:
    // 0x1e8d18: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1e8d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1e8d1c:
    // 0x1e8d1c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1e8d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e8d20:
    // 0x1e8d20: 0x8e460044  lw          $a2, 0x44($s2)
    ctx->pc = 0x1e8d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1e8d24:
    // 0x1e8d24: 0xc040938  jal         func_1024E0
label_1e8d28:
    if (ctx->pc == 0x1E8D28u) {
        ctx->pc = 0x1E8D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D24u;
        // 0x1e8d28: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D2Cu;
        goto label_1e8d2c;
    }
    ctx->pc = 0x1E8D24u;
    SET_GPR_U32(ctx, 31, 0x1E8D2Cu);
    ctx->pc = 0x1E8D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8D24u;
    // 0x1e8d28: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1024E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1024E0u, 0x1E8D24u, 0x1E8D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8D2Cu;
label_1e8d2c:
    // 0x1e8d2c: 0xaf808ea8  sw          $zero, -0x7158($gp)
    ctx->pc = 0x1e8d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938280), GPR_U32(ctx, 0));
label_1e8d30:
    // 0x1e8d30: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e8d34:
    if (ctx->pc == 0x1E8D34u) {
        ctx->pc = 0x1E8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D30u;
        // 0x1e8d34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D38u;
        goto label_1e8d38;
    }
    ctx->pc = 0x1E8D30u;
    {
        const bool branch_taken_0x1e8d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D30u;
        // 0x1e8d34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8d30) {
            ctx->pc = 0x1E8D3Cu;
            goto label_1e8d3c;
        }
    }
    ctx->pc = 0x1E8D38u;
label_1e8d38:
    // 0x1e8d38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8d3c:
    // 0x1e8d3c: 0x0  nop
    ctx->pc = 0x1e8d3cu;
    // NOP
label_1e8d40:
    // 0x1e8d40: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x1e8d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1e8d44:
    // 0x1e8d44: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x1e8d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_1e8d48:
    // 0x1e8d48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e8d4c:
    if (ctx->pc == 0x1E8D4Cu) {
        ctx->pc = 0x1E8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D48u;
        // 0x1e8d4c: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D50u;
        goto label_1e8d50;
    }
    ctx->pc = 0x1E8D48u;
    {
        const bool branch_taken_0x1e8d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D48u;
        // 0x1e8d4c: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8d48) {
            ctx->pc = 0x1E8D58u;
            goto label_1e8d58;
        }
    }
    ctx->pc = 0x1E8D50u;
label_1e8d50:
    // 0x1e8d50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e8d54:
    if (ctx->pc == 0x1E8D54u) {
        ctx->pc = 0x1E8D58u;
        goto label_1e8d58;
    }
    ctx->pc = 0x1E8D50u;
    {
        const bool branch_taken_0x1e8d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8d50) {
            ctx->pc = 0x1E8D60u;
            goto label_1e8d60;
        }
    }
    ctx->pc = 0x1E8D58u;
label_1e8d58:
    // 0x1e8d58: 0x10a000c0  beqz        $a1, . + 4 + (0xC0 << 2)
label_1e8d5c:
    if (ctx->pc == 0x1E8D5Cu) {
        ctx->pc = 0x1E8D60u;
        goto label_1e8d60;
    }
    ctx->pc = 0x1E8D58u;
    {
        const bool branch_taken_0x1e8d58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8d58) {
            ctx->pc = 0x1E905Cu;
            goto label_1e905c;
        }
    }
    ctx->pc = 0x1E8D60u;
label_1e8d60:
    // 0x1e8d60: 0x9644005c  lhu         $a0, 0x5C($s2)
    ctx->pc = 0x1e8d60u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 92)));
label_1e8d64:
    // 0x1e8d64: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x1e8d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_1e8d68:
    // 0x1e8d68: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1e8d6c:
    if (ctx->pc == 0x1E8D6Cu) {
        ctx->pc = 0x1E8D70u;
        goto label_1e8d70;
    }
    ctx->pc = 0x1E8D68u;
    {
        const bool branch_taken_0x1e8d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8d68) {
            ctx->pc = 0x1E8D84u;
            goto label_1e8d84;
        }
    }
    ctx->pc = 0x1E8D70u;
label_1e8d70:
    // 0x1e8d70: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1e8d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e8d74:
    // 0x1e8d74: 0x8c830198  lw          $v1, 0x198($a0)
    ctx->pc = 0x1e8d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
label_1e8d78:
    // 0x1e8d78: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x1e8d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_1e8d7c:
    // 0x1e8d7c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1e8d80:
    if (ctx->pc == 0x1E8D80u) {
        ctx->pc = 0x1E8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D7Cu;
        // 0x1e8d80: 0xac830198  sw          $v1, 0x198($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8D84u;
        goto label_1e8d84;
    }
    ctx->pc = 0x1E8D7Cu;
    {
        const bool branch_taken_0x1e8d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D7Cu;
        // 0x1e8d80: 0xac830198  sw          $v1, 0x198($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8d7c) {
            ctx->pc = 0x1E8DA4u;
            goto label_1e8da4;
        }
    }
    ctx->pc = 0x1E8D84u;
label_1e8d84:
    // 0x1e8d84: 0x0  nop
    ctx->pc = 0x1e8d84u;
    // NOP
label_1e8d88:
    // 0x1e8d88: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x1e8d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
label_1e8d8c:
    // 0x1e8d8c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1e8d90:
    if (ctx->pc == 0x1E8D90u) {
        ctx->pc = 0x1E8D94u;
        goto label_1e8d94;
    }
    ctx->pc = 0x1E8D8Cu;
    {
        const bool branch_taken_0x1e8d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8d8c) {
            ctx->pc = 0x1E8DA4u;
            goto label_1e8da4;
        }
    }
    ctx->pc = 0x1E8D94u;
label_1e8d94:
    // 0x1e8d94: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1e8d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e8d98:
    // 0x1e8d98: 0x8c830198  lw          $v1, 0x198($a0)
    ctx->pc = 0x1e8d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
label_1e8d9c:
    // 0x1e8d9c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1e8d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_1e8da0:
    // 0x1e8da0: 0xac830198  sw          $v1, 0x198($a0)
    ctx->pc = 0x1e8da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 3));
label_1e8da4:
    // 0x1e8da4: 0x0  nop
    ctx->pc = 0x1e8da4u;
    // NOP
label_1e8da8:
    // 0x1e8da8: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x1e8da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1e8dac:
    // 0x1e8dac: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x1e8dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_1e8db0:
    // 0x1e8db0: 0x106000aa  beqz        $v1, . + 4 + (0xAA << 2)
label_1e8db4:
    if (ctx->pc == 0x1E8DB4u) {
        ctx->pc = 0x1E8DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8DB0u;
        // 0x1e8db4: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8DB8u;
        goto label_1e8db8;
    }
    ctx->pc = 0x1E8DB0u;
    {
        const bool branch_taken_0x1e8db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8DB0u;
        // 0x1e8db4: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8db0) {
            ctx->pc = 0x1E905Cu;
            goto label_1e905c;
        }
    }
    ctx->pc = 0x1E8DB8u;
label_1e8db8:
    // 0x1e8db8: 0x146000a8  bnez        $v1, . + 4 + (0xA8 << 2)
label_1e8dbc:
    if (ctx->pc == 0x1E8DBCu) {
        ctx->pc = 0x1E8DC0u;
        goto label_1e8dc0;
    }
    ctx->pc = 0x1E8DB8u;
    {
        const bool branch_taken_0x1e8db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8db8) {
            ctx->pc = 0x1E905Cu;
            goto label_1e905c;
        }
    }
    ctx->pc = 0x1E8DC0u;
label_1e8dc0:
    // 0x1e8dc0: 0x9644005c  lhu         $a0, 0x5C($s2)
    ctx->pc = 0x1e8dc0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 92)));
label_1e8dc4:
    // 0x1e8dc4: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x1e8dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_1e8dc8:
    // 0x1e8dc8: 0x146000a4  bnez        $v1, . + 4 + (0xA4 << 2)
label_1e8dcc:
    if (ctx->pc == 0x1E8DCCu) {
        ctx->pc = 0x1E8DD0u;
        goto label_1e8dd0;
    }
    ctx->pc = 0x1E8DC8u;
    {
        const bool branch_taken_0x1e8dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8dc8) {
            ctx->pc = 0x1E905Cu;
            goto label_1e905c;
        }
    }
    ctx->pc = 0x1E8DD0u;
label_1e8dd0:
    // 0x1e8dd0: 0x348200a4  ori         $v0, $a0, 0xA4
    ctx->pc = 0x1e8dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)164);
label_1e8dd4:
    // 0x1e8dd4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e8dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1e8dd8:
    // 0x1e8dd8: 0xa642005c  sh          $v0, 0x5C($s2)
    ctx->pc = 0x1e8dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 92), (uint16_t)GPR_U32(ctx, 2));
label_1e8ddc:
    // 0x1e8ddc: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x1e8ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1e8de0:
    // 0x1e8de0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e8de4:
    // 0x1e8de4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e8de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8de8:
    // 0x1e8de8: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x1e8de8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_1e8dec:
    // 0x1e8dec: 0xa6400054  sh          $zero, 0x54($s2)
    ctx->pc = 0x1e8decu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 84), (uint16_t)GPR_U32(ctx, 0));
label_1e8df0:
    // 0x1e8df0: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1e8df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1e8df4:
    // 0x1e8df4: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1e8df4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_1e8df8:
    // 0x1e8df8: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x1e8df8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_1e8dfc:
    // 0x1e8dfc: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x1e8dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_1e8e00:
    // 0x1e8e00: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x1e8e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1e8e04:
    // 0x1e8e04: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x1e8e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1e8e08:
    // 0x1e8e08: 0x8c660034  lw          $a2, 0x34($v1)
    ctx->pc = 0x1e8e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1e8e0c:
    // 0x1e8e0c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e8e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e8e10:
    // 0x1e8e10: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e8e14:
    // 0x1e8e14: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1e8e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1e8e18:
    // 0x1e8e18: 0x245305a0  addiu       $s3, $v0, 0x5A0
    ctx->pc = 0x1e8e18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
label_1e8e1c:
    // 0x1e8e1c: 0x26620080  addiu       $v0, $s3, 0x80
    ctx->pc = 0x1e8e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_1e8e20:
    // 0x1e8e20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e8e24:
    // 0x1e8e24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e8e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e8e28:
    // 0x1e8e28: 0xc066e08  jal         func_19B820
label_1e8e2c:
    if (ctx->pc == 0x1E8E2Cu) {
        ctx->pc = 0x1E8E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E28u;
        // 0x1e8e2c: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8E30u;
        goto label_1e8e30;
    }
    ctx->pc = 0x1E8E28u;
    SET_GPR_U32(ctx, 31, 0x1E8E30u);
    ctx->pc = 0x1E8E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E28u;
    // 0x1e8e2c: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B820u, 0x1E8E28u, 0x1E8E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E30u;
label_1e8e30:
    // 0x1e8e30: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e8e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1e8e34:
    // 0x1e8e34: 0x26620080  addiu       $v0, $s3, 0x80
    ctx->pc = 0x1e8e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_1e8e38:
    // 0x1e8e38: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1e8e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1e8e3c:
    // 0x1e8e3c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1e8e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1e8e40:
    // 0x1e8e40: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1e8e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1e8e44:
    // 0x1e8e44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e8e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e8e48:
    // 0x1e8e48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e8e4c:
    // 0x1e8e4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e8e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e8e50:
    // 0x1e8e50: 0xc08e93e  jal         func_23A4F8
label_1e8e54:
    if (ctx->pc == 0x1E8E54u) {
        ctx->pc = 0x1E8E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E50u;
        // 0x1e8e54: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8E58u;
        goto label_1e8e58;
    }
    ctx->pc = 0x1E8E50u;
    SET_GPR_U32(ctx, 31, 0x1E8E58u);
    ctx->pc = 0x1E8E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E50u;
    // 0x1e8e54: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1E8E58u;
label_1e8e58:
    // 0x1e8e58: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e8e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e8e5c:
    // 0x1e8e5c: 0xc066dba  jal         func_19B6E8
label_1e8e60:
    if (ctx->pc == 0x1E8E60u) {
        ctx->pc = 0x1E8E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E5Cu;
        // 0x1e8e60: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8E64u;
        goto label_1e8e64;
    }
    ctx->pc = 0x1E8E5Cu;
    SET_GPR_U32(ctx, 31, 0x1E8E64u);
    ctx->pc = 0x1E8E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E5Cu;
    // 0x1e8e60: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6E8u, 0x1E8E5Cu, 0x1E8E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E64u;
label_1e8e64:
    // 0x1e8e64: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x1e8e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1e8e68:
    // 0x1e8e68: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1e8e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e8e6c:
    // 0x1e8e6c: 0xc066d7a  jal         func_19B5E8
label_1e8e70:
    if (ctx->pc == 0x1E8E70u) {
        ctx->pc = 0x1E8E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E6Cu;
        // 0x1e8e70: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8E74u;
        goto label_1e8e74;
    }
    ctx->pc = 0x1E8E6Cu;
    SET_GPR_U32(ctx, 31, 0x1E8E74u);
    ctx->pc = 0x1E8E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8E6Cu;
    // 0x1e8e70: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1E8E6Cu, 0x1E8E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E74u;
label_1e8e74:
    // 0x1e8e74: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1e8e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1e8e78:
    // 0x1e8e78: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1e8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_1e8e7c:
    // 0x1e8e7c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1e8e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1e8e80:
    // 0x1e8e80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e8e80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e8e84:
    // 0x1e8e84: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1e8e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e8e88:
    // 0x1e8e88: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1e8e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1e8e8c:
    // 0x1e8e8c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1e8e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1e8e90:
    // 0x1e8e90: 0xc4840044  lwc1        $f4, 0x44($a0)
    ctx->pc = 0x1e8e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e8e94:
    // 0x1e8e94: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1e8e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e8e98:
    // 0x1e8e98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8e9c:
    // 0x1e8e9c: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x1e8e9cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_1e8ea0:
    // 0x1e8ea0: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1e8ea0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1e8ea4:
    // 0x1e8ea4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e8ea4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e8ea8:
    // 0x1e8ea8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e8ea8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8eac:
    // 0x1e8eac: 0x0  nop
    ctx->pc = 0x1e8eacu;
    // NOP
label_1e8eb0:
    // 0x1e8eb0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1e8eb4:
    if (ctx->pc == 0x1E8EB4u) {
        ctx->pc = 0x1E8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EB0u;
        // 0x1e8eb4: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8EB8u;
        goto label_1e8eb8;
    }
    ctx->pc = 0x1E8EB0u;
    {
        const bool branch_taken_0x1e8eb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EB0u;
        // 0x1e8eb4: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8eb0) {
            ctx->pc = 0x1E8EC8u;
            goto label_1e8ec8;
        }
    }
    ctx->pc = 0x1E8EB8u;
label_1e8eb8:
    // 0x1e8eb8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1e8eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1e8ebc:
    // 0x1e8ebc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8ebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8ec0:
    // 0x1e8ec0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1e8ec4:
    if (ctx->pc == 0x1E8EC4u) {
        ctx->pc = 0x1E8EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EC0u;
        // 0x1e8ec4: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8EC8u;
        goto label_1e8ec8;
    }
    ctx->pc = 0x1E8EC0u;
    {
        const bool branch_taken_0x1e8ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EC0u;
        // 0x1e8ec4: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ec0) {
            ctx->pc = 0x1E8EF8u;
            goto label_1e8ef8;
        }
    }
    ctx->pc = 0x1E8EC8u;
label_1e8ec8:
    // 0x1e8ec8: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1e8ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
label_1e8ecc:
    // 0x1e8ecc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1e8eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1e8ed0:
    // 0x1e8ed0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8ed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8ed4:
    // 0x1e8ed4: 0x0  nop
    ctx->pc = 0x1e8ed4u;
    // NOP
label_1e8ed8:
    // 0x1e8ed8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e8ed8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8edc:
    // 0x1e8edc: 0x0  nop
    ctx->pc = 0x1e8edcu;
    // NOP
label_1e8ee0:
    // 0x1e8ee0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1e8ee4:
    if (ctx->pc == 0x1E8EE4u) {
        ctx->pc = 0x1E8EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EE0u;
        // 0x1e8ee4: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8EE8u;
        goto label_1e8ee8;
    }
    ctx->pc = 0x1E8EE0u;
    {
        const bool branch_taken_0x1e8ee0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EE0u;
        // 0x1e8ee4: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ee0) {
            ctx->pc = 0x1E8EF8u;
            goto label_1e8ef8;
        }
    }
    ctx->pc = 0x1E8EE8u;
label_1e8ee8:
    // 0x1e8ee8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1e8ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1e8eec:
    // 0x1e8eec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8eecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8ef0:
    // 0x1e8ef0: 0x10000001  b           . + 4 + (0x1 << 2)
label_1e8ef4:
    if (ctx->pc == 0x1E8EF4u) {
        ctx->pc = 0x1E8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EF0u;
        // 0x1e8ef4: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8EF8u;
        goto label_1e8ef8;
    }
    ctx->pc = 0x1E8EF0u;
    {
        const bool branch_taken_0x1e8ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EF0u;
        // 0x1e8ef4: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ef0) {
            ctx->pc = 0x1E8EF8u;
            goto label_1e8ef8;
        }
    }
    ctx->pc = 0x1E8EF8u;
label_1e8ef8:
    // 0x1e8ef8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1e8ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1e8efc:
    // 0x1e8efc: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x1e8efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1e8f00:
    // 0x1e8f00: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1e8f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e8f04:
    // 0x1e8f04: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x1e8f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8f08:
    // 0x1e8f08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e8f08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e8f0c:
    // 0x1e8f0c: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x1e8f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_1e8f10:
    // 0x1e8f10: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1e8f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1e8f14:
    // 0x1e8f14: 0x0  nop
    ctx->pc = 0x1e8f14u;
    // NOP
label_1e8f18:
    // 0x1e8f18: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x1e8f18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1e8f1c:
    // 0x1e8f1c: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x1e8f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
label_1e8f20:
    // 0x1e8f20: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1e8f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1e8f24:
    // 0x1e8f24: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x1e8f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8f28:
    // 0x1e8f28: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1e8f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1e8f2c:
    // 0x1e8f2c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x1e8f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8f30:
    // 0x1e8f30: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1e8f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1e8f34:
    // 0x1e8f34: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1e8f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8f38:
    // 0x1e8f38: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e8f38u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1e8f3c:
    // 0x1e8f3c: 0x0  nop
    ctx->pc = 0x1e8f3cu;
    // NOP
label_1e8f40:
    // 0x1e8f40: 0x0  nop
    ctx->pc = 0x1e8f40u;
    // NOP
label_1e8f44:
    // 0x1e8f44: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1e8f44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8f48:
    // 0x1e8f48: 0x0  nop
    ctx->pc = 0x1e8f48u;
    // NOP
label_1e8f4c:
    // 0x1e8f4c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1e8f50:
    if (ctx->pc == 0x1E8F50u) {
        ctx->pc = 0x1E8F54u;
        goto label_1e8f54;
    }
    ctx->pc = 0x1E8F4Cu;
    {
        const bool branch_taken_0x1e8f4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8f4c) {
            ctx->pc = 0x1E8F5Cu;
            goto label_1e8f5c;
        }
    }
    ctx->pc = 0x1E8F54u;
label_1e8f54:
    // 0x1e8f54: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e8f58:
    if (ctx->pc == 0x1E8F58u) {
        ctx->pc = 0x1E8F5Cu;
        goto label_1e8f5c;
    }
    ctx->pc = 0x1E8F54u;
    {
        const bool branch_taken_0x1e8f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8f54) {
            ctx->pc = 0x1E8F64u;
            goto label_1e8f64;
        }
    }
    ctx->pc = 0x1E8F5Cu;
label_1e8f5c:
    // 0x1e8f5c: 0x0  nop
    ctx->pc = 0x1e8f5cu;
    // NOP
label_1e8f60:
    // 0x1e8f60: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x1e8f60u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_1e8f64:
    // 0x1e8f64: 0x0  nop
    ctx->pc = 0x1e8f64u;
    // NOP
label_1e8f68:
    // 0x1e8f68: 0x3c03c170  lui         $v1, 0xC170
    ctx->pc = 0x1e8f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49520 << 16));
label_1e8f6c:
    // 0x1e8f6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8f6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8f70:
    // 0x1e8f70: 0x0  nop
    ctx->pc = 0x1e8f70u;
    // NOP
label_1e8f74:
    // 0x1e8f74: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1e8f74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8f78:
    // 0x1e8f78: 0x0  nop
    ctx->pc = 0x1e8f78u;
    // NOP
label_1e8f7c:
    // 0x1e8f7c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e8f80:
    if (ctx->pc == 0x1E8F80u) {
        ctx->pc = 0x1E8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F7Cu;
        // 0x1e8f80: 0xe6430020  swc1        $f3, 0x20($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8F84u;
        goto label_1e8f84;
    }
    ctx->pc = 0x1E8F7Cu;
    {
        const bool branch_taken_0x1e8f7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F7Cu;
        // 0x1e8f80: 0xe6430020  swc1        $f3, 0x20($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8f7c) {
            ctx->pc = 0x1E8F8Cu;
            goto label_1e8f8c;
        }
    }
    ctx->pc = 0x1E8F84u;
label_1e8f84:
    // 0x1e8f84: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e8f88:
    if (ctx->pc == 0x1E8F88u) {
        ctx->pc = 0x1E8F8Cu;
        goto label_1e8f8c;
    }
    ctx->pc = 0x1E8F84u;
    {
        const bool branch_taken_0x1e8f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8f84) {
            ctx->pc = 0x1E8F94u;
            goto label_1e8f94;
        }
    }
    ctx->pc = 0x1E8F8Cu;
label_1e8f8c:
    // 0x1e8f8c: 0x0  nop
    ctx->pc = 0x1e8f8cu;
    // NOP
label_1e8f90:
    // 0x1e8f90: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x1e8f90u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_1e8f94:
    // 0x1e8f94: 0x0  nop
    ctx->pc = 0x1e8f94u;
    // NOP
label_1e8f98:
    // 0x1e8f98: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1e8f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_1e8f9c:
    // 0x1e8f9c: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x1e8f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8fa0:
    // 0x1e8fa0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e8fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e8fa4:
    // 0x1e8fa4: 0x0  nop
    ctx->pc = 0x1e8fa4u;
    // NOP
label_1e8fa8:
    // 0x1e8fa8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e8fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8fac:
    // 0x1e8fac: 0x0  nop
    ctx->pc = 0x1e8facu;
    // NOP
label_1e8fb0:
    // 0x1e8fb0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1e8fb4:
    if (ctx->pc == 0x1E8FB4u) {
        ctx->pc = 0x1E8FB8u;
        goto label_1e8fb8;
    }
    ctx->pc = 0x1E8FB0u;
    {
        const bool branch_taken_0x1e8fb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8fb0) {
            ctx->pc = 0x1E8FC0u;
            goto label_1e8fc0;
        }
    }
    ctx->pc = 0x1E8FB8u;
label_1e8fb8:
    // 0x1e8fb8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e8fbc:
    if (ctx->pc == 0x1E8FBCu) {
        ctx->pc = 0x1E8FC0u;
        goto label_1e8fc0;
    }
    ctx->pc = 0x1E8FB8u;
    {
        const bool branch_taken_0x1e8fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8fb8) {
            ctx->pc = 0x1E8FC4u;
            goto label_1e8fc4;
        }
    }
    ctx->pc = 0x1E8FC0u;
label_1e8fc0:
    // 0x1e8fc0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1e8fc0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1e8fc4:
    // 0x1e8fc4: 0x0  nop
    ctx->pc = 0x1e8fc4u;
    // NOP
label_1e8fc8:
    // 0x1e8fc8: 0x3c03c1f0  lui         $v1, 0xC1F0
    ctx->pc = 0x1e8fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49648 << 16));
label_1e8fcc:
    // 0x1e8fcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e8fccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e8fd0:
    // 0x1e8fd0: 0x0  nop
    ctx->pc = 0x1e8fd0u;
    // NOP
label_1e8fd4:
    // 0x1e8fd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e8fd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8fd8:
    // 0x1e8fd8: 0x0  nop
    ctx->pc = 0x1e8fd8u;
    // NOP
label_1e8fdc:
    // 0x1e8fdc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e8fe0:
    if (ctx->pc == 0x1E8FE0u) {
        ctx->pc = 0x1E8FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FDCu;
        // 0x1e8fe0: 0xe6410024  swc1        $f1, 0x24($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8FE4u;
        goto label_1e8fe4;
    }
    ctx->pc = 0x1E8FDCu;
    {
        const bool branch_taken_0x1e8fdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FDCu;
        // 0x1e8fe0: 0xe6410024  swc1        $f1, 0x24($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8fdc) {
            ctx->pc = 0x1E8FECu;
            goto label_1e8fec;
        }
    }
    ctx->pc = 0x1E8FE4u;
label_1e8fe4:
    // 0x1e8fe4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e8fe8:
    if (ctx->pc == 0x1E8FE8u) {
        ctx->pc = 0x1E8FECu;
        goto label_1e8fec;
    }
    ctx->pc = 0x1E8FE4u;
    {
        const bool branch_taken_0x1e8fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8fe4) {
            ctx->pc = 0x1E8FF4u;
            goto label_1e8ff4;
        }
    }
    ctx->pc = 0x1E8FECu;
label_1e8fec:
    // 0x1e8fec: 0x0  nop
    ctx->pc = 0x1e8fecu;
    // NOP
label_1e8ff0:
    // 0x1e8ff0: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1e8ff0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_1e8ff4:
    // 0x1e8ff4: 0x0  nop
    ctx->pc = 0x1e8ff4u;
    // NOP
label_1e8ff8:
    // 0x1e8ff8: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x1e8ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_1e8ffc:
    // 0x1e8ffc: 0x10000017  b           . + 4 + (0x17 << 2)
label_1e9000:
    if (ctx->pc == 0x1E9000u) {
        ctx->pc = 0x1E9000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FFCu;
        // 0x1e9000: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9004u;
        goto label_1e9004;
    }
    ctx->pc = 0x1E8FFCu;
    {
        const bool branch_taken_0x1e8ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FFCu;
        // 0x1e9000: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ffc) {
            ctx->pc = 0x1E905Cu;
            goto label_1e905c;
        }
    }
    ctx->pc = 0x1E9004u;
label_1e9004:
    // 0x1e9004: 0x0  nop
    ctx->pc = 0x1e9004u;
    // NOP
label_1e9008:
    // 0x1e9008: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1e9008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e900c:
    // 0x1e900c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1e900cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1e9010:
    // 0x1e9010: 0x84a4020a  lh          $a0, 0x20A($a1)
    ctx->pc = 0x1e9010u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 522)));
label_1e9014:
    // 0x1e9014: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_1e9018:
    if (ctx->pc == 0x1E9018u) {
        ctx->pc = 0x1E901Cu;
        goto label_1e901c;
    }
    ctx->pc = 0x1E9014u;
    {
        const bool branch_taken_0x1e9014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9014) {
            ctx->pc = 0x1E905Cu;
            goto label_1e905c;
        }
    }
    ctx->pc = 0x1E901Cu;
label_1e901c:
    // 0x1e901c: 0x8ca30200  lw          $v1, 0x200($a1)
    ctx->pc = 0x1e901cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 512)));
label_1e9020:
    // 0x1e9020: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1e9024:
    if (ctx->pc == 0x1E9024u) {
        ctx->pc = 0x1E9028u;
        goto label_1e9028;
    }
    ctx->pc = 0x1E9020u;
    {
        const bool branch_taken_0x1e9020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9020) {
            ctx->pc = 0x1E905Cu;
            goto label_1e905c;
        }
    }
    ctx->pc = 0x1E9028u;
label_1e9028:
    // 0x1e9028: 0x90630234  lbu         $v1, 0x234($v1)
    ctx->pc = 0x1e9028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 564)));
label_1e902c:
    // 0x1e902c: 0x9244005e  lbu         $a0, 0x5E($s2)
    ctx->pc = 0x1e902cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 94)));
label_1e9030:
    // 0x1e9030: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_1e9034:
    if (ctx->pc == 0x1E9034u) {
        ctx->pc = 0x1E9038u;
        goto label_1e9038;
    }
    ctx->pc = 0x1E9030u;
    {
        const bool branch_taken_0x1e9030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9030) {
            ctx->pc = 0x1E905Cu;
            goto label_1e905c;
        }
    }
    ctx->pc = 0x1E9038u;
label_1e9038:
    // 0x1e9038: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1e9038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e903c:
    // 0x1e903c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e903cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e9040:
    // 0x1e9040: 0xc050f08  jal         func_143C20
label_1e9044:
    if (ctx->pc == 0x1E9044u) {
        ctx->pc = 0x1E9044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9040u;
        // 0x1e9044: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9048u;
        goto label_1e9048;
    }
    ctx->pc = 0x1E9040u;
    SET_GPR_U32(ctx, 31, 0x1E9048u);
    ctx->pc = 0x1E9044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9040u;
    // 0x1e9044: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x1E9040u, 0x1E9048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9048u;
label_1e9048:
    // 0x1e9048: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e9048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e904c:
    // 0x1e904c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e904cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e9050:
    // 0x1e9050: 0x8c450200  lw          $a1, 0x200($v0)
    ctx->pc = 0x1e9050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 512)));
label_1e9054:
    // 0x1e9054: 0xc050f08  jal         func_143C20
label_1e9058:
    if (ctx->pc == 0x1E9058u) {
        ctx->pc = 0x1E9058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9054u;
        // 0x1e9058: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E905Cu;
        goto label_1e905c;
    }
    ctx->pc = 0x1E9054u;
    SET_GPR_U32(ctx, 31, 0x1E905Cu);
    ctx->pc = 0x1E9058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9054u;
    // 0x1e9058: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x1E9054u, 0x1E905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E905Cu;
label_1e905c:
    // 0x1e905c: 0x0  nop
    ctx->pc = 0x1e905cu;
    // NOP
label_1e9060:
    // 0x1e9060: 0x9644005c  lhu         $a0, 0x5C($s2)
    ctx->pc = 0x1e9060u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 92)));
label_1e9064:
    // 0x1e9064: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x1e9064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_1e9068:
    // 0x1e9068: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1e906c:
    if (ctx->pc == 0x1E906Cu) {
        ctx->pc = 0x1E9070u;
        goto label_1e9070;
    }
    ctx->pc = 0x1E9068u;
    {
        const bool branch_taken_0x1e9068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9068) {
            ctx->pc = 0x1E9088u;
            goto label_1e9088;
        }
    }
    ctx->pc = 0x1E9070u;
label_1e9070:
    // 0x1e9070: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x1e9070u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_1e9074:
    // 0x1e9074: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e9074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9078:
    // 0x1e9078: 0x2842004  sllv        $a0, $a0, $s4
    ctx->pc = 0x1e9078u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 20) & 0x1F));
label_1e907c:
    // 0x1e907c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e907cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1e9080:
    // 0x1e9080: 0x1000000f  b           . + 4 + (0xF << 2)
label_1e9084:
    if (ctx->pc == 0x1E9084u) {
        ctx->pc = 0x1E9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9080u;
        // 0x1e9084: 0xfe030008  sd          $v1, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9088u;
        goto label_1e9088;
    }
    ctx->pc = 0x1E9080u;
    {
        const bool branch_taken_0x1e9080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9080u;
        // 0x1e9084: 0xfe030008  sd          $v1, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9080) {
            ctx->pc = 0x1E90C0u;
            goto label_1e90c0;
        }
    }
    ctx->pc = 0x1E9088u;
label_1e9088:
    // 0x1e9088: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x1e9088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_1e908c:
    // 0x1e908c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_1e9090:
    if (ctx->pc == 0x1E9090u) {
        ctx->pc = 0x1E9094u;
        goto label_1e9094;
    }
    ctx->pc = 0x1E908Cu;
    {
        const bool branch_taken_0x1e908c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e908c) {
            ctx->pc = 0x1E90D4u;
            goto label_1e90d4;
        }
    }
    ctx->pc = 0x1E9094u;
label_1e9094:
    // 0x1e9094: 0xa240005a  sb          $zero, 0x5A($s2)
    ctx->pc = 0x1e9094u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 90), (uint8_t)GPR_U32(ctx, 0));
label_1e9098:
    // 0x1e9098: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x1e9098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1e909c:
    // 0x1e909c: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x1e909cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_1e90a0:
    // 0x1e90a0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1e90a4:
    if (ctx->pc == 0x1E90A4u) {
        ctx->pc = 0x1E90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E90A0u;
        // 0x1e90a4: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E90A8u;
        goto label_1e90a8;
    }
    ctx->pc = 0x1E90A0u;
    {
        const bool branch_taken_0x1e90a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E90A0u;
        // 0x1e90a4: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e90a0) {
            ctx->pc = 0x1E90D4u;
            goto label_1e90d4;
        }
    }
    ctx->pc = 0x1E90A8u;
label_1e90a8:
    // 0x1e90a8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_1e90ac:
    if (ctx->pc == 0x1E90ACu) {
        ctx->pc = 0x1E90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E90A8u;
        // 0x1e90ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E90B0u;
        goto label_1e90b0;
    }
    ctx->pc = 0x1E90A8u;
    {
        const bool branch_taken_0x1e90a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E90A8u;
        // 0x1e90ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e90a8) {
            ctx->pc = 0x1E90D4u;
            goto label_1e90d4;
        }
    }
    ctx->pc = 0x1E90B0u;
label_1e90b0:
    // 0x1e90b0: 0xc04bba0  jal         func_12EE80
label_1e90b4:
    if (ctx->pc == 0x1E90B4u) {
        ctx->pc = 0x1E90B8u;
        goto label_1e90b8;
    }
    ctx->pc = 0x1E90B0u;
    SET_GPR_U32(ctx, 31, 0x1E90B8u);
    ctx->pc = 0x12EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE80u, 0x1E90B0u, 0x1E90B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E90B8u;
label_1e90b8:
    // 0x1e90b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e90bc:
    if (ctx->pc == 0x1E90BCu) {
        ctx->pc = 0x1E90C0u;
        goto label_1e90c0;
    }
    ctx->pc = 0x1E90B8u;
    {
        const bool branch_taken_0x1e90b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e90b8) {
            ctx->pc = 0x1E90D4u;
            goto label_1e90d4;
        }
    }
    ctx->pc = 0x1E90C0u;
label_1e90c0:
    // 0x1e90c0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1e90c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1e90c4:
    // 0x1e90c4: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x1e90c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_1e90c8:
    // 0x1e90c8: 0x2aa3002f  slti        $v1, $s5, 0x2F
    ctx->pc = 0x1e90c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)47) ? 1 : 0);
label_1e90cc:
    // 0x1e90cc: 0x1460fe6d  bnez        $v1, . + 4 + (-0x193 << 2)
label_1e90d0:
    if (ctx->pc == 0x1E90D0u) {
        ctx->pc = 0x1E90D4u;
        goto label_1e90d4;
    }
    ctx->pc = 0x1E90CCu;
    {
        const bool branch_taken_0x1e90cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e90cc) {
            ctx->pc = 0x1E8A84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1e8a84; return; }
        }
    }
    ctx->pc = 0x1E90D4u;
label_1e90d4:
    // 0x1e90d4: 0x0  nop
    ctx->pc = 0x1e90d4u;
    // NOP
label_1e90d8:
    // 0x1e90d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e90d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1e90dc:
    // 0x1e90dc: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x1e90dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_1e90e0:
    // 0x1e90e0: 0x2a830032  slti        $v1, $s4, 0x32
    ctx->pc = 0x1e90e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)50) ? 1 : 0);
label_1e90e4:
    // 0x1e90e4: 0x1460fe5b  bnez        $v1, . + 4 + (-0x1A5 << 2)
label_1e90e8:
    if (ctx->pc == 0x1E90E8u) {
        ctx->pc = 0x1E90ECu;
        goto label_1e90ec;
    }
    ctx->pc = 0x1E90E4u;
    {
        const bool branch_taken_0x1e90e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e90e4) {
            ctx->pc = 0x1E8A54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1e8a54; return; }
        }
    }
    ctx->pc = 0x1E90ECu;
label_1e90ec:
    // 0x1e90ec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1e90ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1e90f0:
    // 0x1e90f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e90f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e90f4:
    // 0x1e90f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e90f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e90f8:
    // 0x1e90f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e90f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e90fc:
    // 0x1e90fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e90fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e9100:
    // 0x1e9100: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e9100u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e9104:
    // 0x1e9104: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9108:
    // 0x1e9108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e910c:
    // 0x1e910c: 0x3e00008  jr          $ra
label_1e9110:
    if (ctx->pc == 0x1E9110u) {
        ctx->pc = 0x1E9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E910Cu;
        // 0x1e9110: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9114u;
        goto label_1e9114;
    }
    ctx->pc = 0x1E910Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E910Cu;
        // 0x1e9110: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E910Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9114u;
label_1e9114:
    // 0x1e9114: 0x0  nop
    ctx->pc = 0x1e9114u;
    // NOP
label_1e9118:
    // 0x1e9118: 0x0  nop
    ctx->pc = 0x1e9118u;
    // NOP
label_1e911c:
    // 0x1e911c: 0x0  nop
    ctx->pc = 0x1e911cu;
    // NOP
label_1e9120:
    // 0x1e9120: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e9120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1e9124:
    // 0x1e9124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e9124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e9128:
    // 0x1e9128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e912c:
    // 0x1e912c: 0xc08bbe4  jal         func_22EF90
label_1e9130:
    if (ctx->pc == 0x1E9130u) {
        ctx->pc = 0x1E9130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E912Cu;
        // 0x1e9130: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9134u;
        goto label_1e9134;
    }
    ctx->pc = 0x1E912Cu;
    SET_GPR_U32(ctx, 31, 0x1E9134u);
    ctx->pc = 0x1E9130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E912Cu;
    // 0x1e9130: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF90u;
    { ctx->pc = 0x22ef90; return; }
    ctx->pc = 0x1E9134u;
label_1e9134:
    // 0x1e9134: 0x8f91821c  lw          $s1, -0x7DE4($gp)
    ctx->pc = 0x1e9134u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935068)));
label_1e9138:
    // 0x1e9138: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_1e913c:
    if (ctx->pc == 0x1E913Cu) {
        ctx->pc = 0x1E913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9138u;
        // 0x1e913c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9140u;
        goto label_1e9140;
    }
    ctx->pc = 0x1E9138u;
    {
        const bool branch_taken_0x1e9138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9138u;
        // 0x1e913c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9138) {
            ctx->pc = 0x1E93C0u;
            { ctx->pc = 0x1e93c0; return; }
        }
    }
    ctx->pc = 0x1E9140u;
label_1e9140:
    // 0x1e9140: 0x9223005a  lbu         $v1, 0x5A($s1)
    ctx->pc = 0x1e9140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
label_1e9144:
    // 0x1e9144: 0x1060009b  beqz        $v1, . + 4 + (0x9B << 2)
label_1e9148:
    if (ctx->pc == 0x1E9148u) {
        ctx->pc = 0x1E914Cu;
        goto label_1e914c;
    }
    ctx->pc = 0x1E9144u;
    {
        const bool branch_taken_0x1e9144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9144) {
            ctx->pc = 0x1E93B4u;
            { ctx->pc = 0x1e93b4; return; }
        }
    }
    ctx->pc = 0x1E914Cu;
label_1e914c:
    // 0x1e914c: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x1e914cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1e9150:
    // 0x1e9150: 0x10a00098  beqz        $a1, . + 4 + (0x98 << 2)
label_1e9154:
    if (ctx->pc == 0x1E9154u) {
        ctx->pc = 0x1E9158u;
        goto label_1e9158;
    }
    ctx->pc = 0x1E9150u;
    {
        const bool branch_taken_0x1e9150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9150) {
            ctx->pc = 0x1E93B4u;
            { ctx->pc = 0x1e93b4; return; }
        }
    }
    ctx->pc = 0x1E9158u;
label_1e9158:
    // 0x1e9158: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x1e9158u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_1e915c:
    // 0x1e915c: 0x86240056  lh          $a0, 0x56($s1)
    ctx->pc = 0x1e915cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 86)));
label_1e9160:
    // 0x1e9160: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1e9160u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1e9164:
    // 0x1e9164: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1e9168:
    if (ctx->pc == 0x1E9168u) {
        ctx->pc = 0x1E916Cu;
        goto label_1e916c;
    }
    ctx->pc = 0x1E9164u;
    {
        const bool branch_taken_0x1e9164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9164) {
            ctx->pc = 0x1E9178u;
            goto label_1e9178;
        }
    }
    ctx->pc = 0x1E916Cu;
label_1e916c:
    // 0x1e916c: 0xa220005a  sb          $zero, 0x5A($s1)
    ctx->pc = 0x1e916cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 0));
label_1e9170:
    // 0x1e9170: 0x10000090  b           . + 4 + (0x90 << 2)
label_1e9174:
    if (ctx->pc == 0x1E9174u) {
        ctx->pc = 0x1E9174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9170u;
        // 0x1e9174: 0xa220005b  sb          $zero, 0x5B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9178u;
        goto label_1e9178;
    }
    ctx->pc = 0x1E9170u;
    {
        const bool branch_taken_0x1e9170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9170u;
        // 0x1e9174: 0xa220005b  sb          $zero, 0x5B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9170) {
            ctx->pc = 0x1E93B4u;
            { ctx->pc = 0x1e93b4; return; }
        }
    }
    ctx->pc = 0x1E9178u;
label_1e9178:
    // 0x1e9178: 0x90a3023a  lbu         $v1, 0x23A($a1)
    ctx->pc = 0x1e9178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 570)));
label_1e917c:
    // 0x1e917c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e9180:
    if (ctx->pc == 0x1E9180u) {
        ctx->pc = 0x1E9180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E917Cu;
        // 0x1e9180: 0x2483ffc4  addiu       $v1, $a0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9184u;
        goto label_1e9184;
    }
    ctx->pc = 0x1E917Cu;
    {
        const bool branch_taken_0x1e917c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E917Cu;
        // 0x1e9180: 0x2483ffc4  addiu       $v1, $a0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e917c) {
            ctx->pc = 0x1E918Cu;
            goto label_1e918c;
        }
    }
    ctx->pc = 0x1E9184u;
label_1e9184:
    // 0x1e9184: 0xa6230054  sh          $v1, 0x54($s1)
    ctx->pc = 0x1e9184u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 84), (uint16_t)GPR_U32(ctx, 3));
label_1e9188:
    // 0x1e9188: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x1e9188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_1e918c:
    // 0x1e918c: 0x0  nop
    ctx->pc = 0x1e918cu;
    // NOP
label_1e9190:
    // 0x1e9190: 0x9623005c  lhu         $v1, 0x5C($s1)
    ctx->pc = 0x1e9190u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
label_1e9194:
    // 0x1e9194: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1e9194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1e9198:
    // 0x1e9198: 0x14600082  bnez        $v1, . + 4 + (0x82 << 2)
label_1e919c:
    if (ctx->pc == 0x1E919Cu) {
        ctx->pc = 0x1E91A0u;
        goto label_1e91a0;
    }
    ctx->pc = 0x1E9198u;
    {
        const bool branch_taken_0x1e9198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9198) {
            ctx->pc = 0x1E93A4u;
            { ctx->pc = 0x1e93a4; return; }
        }
    }
    ctx->pc = 0x1E91A0u;
label_1e91a0:
    // 0x1e91a0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1e91a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e91a4:
    // 0x1e91a4: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x1e91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1e91a8:
    // 0x1e91a8: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x1e91a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_1e91ac:
    // 0x1e91ac: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x1e91acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e91b0:
    // 0x1e91b0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1e91b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_1e91b4:
    // 0x1e91b4: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x1e91b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e91b8:
    // 0x1e91b8: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x1e91b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_1e91bc:
    // 0x1e91bc: 0xc620002c  lwc1        $f0, 0x2C($s1)
    ctx->pc = 0x1e91bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e91c0:
    // 0x1e91c0: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x1e91c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_1e91c4:
    // 0x1e91c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e91c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1e91c8:
    // 0x1e91c8: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e91c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1e91cc:
    // 0x1e91cc: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e91ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1e91d0:
    // 0x1e91d0: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e91d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1e91d4:
    // 0x1e91d4: 0x4a0002ff  vnop
    ctx->pc = 0x1e91d4u;
    // NOP operation, no action needed for VU0
label_1e91d8:
    // 0x1e91d8: 0x4a0002ff  vnop
    ctx->pc = 0x1e91d8u;
    // NOP operation, no action needed for VU0
label_1e91dc:
    // 0x1e91dc: 0x4a0002ff  vnop
    ctx->pc = 0x1e91dcu;
    // NOP operation, no action needed for VU0
label_1e91e0:
    // 0x1e91e0: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e91e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1e91e4:
    // 0x1e91e4: 0x9622005c  lhu         $v0, 0x5C($s1)
    ctx->pc = 0x1e91e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
label_1e91e8:
    // 0x1e91e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e91e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e91ec:
    // 0x1e91ec: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1e91f0:
    if (ctx->pc == 0x1E91F0u) {
        ctx->pc = 0x1E91F4u;
        goto label_1e91f4;
    }
    ctx->pc = 0x1E91ECu;
    {
        const bool branch_taken_0x1e91ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e91ec) {
            ctx->pc = 0x1E9260u;
            goto label_1e9260;
        }
    }
    ctx->pc = 0x1E91F4u;
label_1e91f4:
    // 0x1e91f4: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x1e91f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e91f8:
    // 0x1e91f8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1e91f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_1e91fc:
    // 0x1e91fc: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x1e91fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e9200:
    // 0x1e9200: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e9200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1e9204:
    // 0x1e9204: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1e9204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9208:
    // 0x1e9208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e920c:
    // 0x1e920c: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x1e920cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_1e9210:
    // 0x1e9210: 0x4602109c  madd.s      $f2, $f2, $f2
    ctx->pc = 0x1e9210u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1e9214:
    // 0x1e9214: 0x46020344  c1          0x20344
    ctx->pc = 0x1e9214u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_1e9218:
    // 0x1e9218: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e9218u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e921c:
    // 0x1e921c: 0x0  nop
    ctx->pc = 0x1e921cu;
    // NOP
label_1e9220:
    // 0x1e9220: 0x0  nop
    ctx->pc = 0x1e9220u;
    // NOP
label_1e9224:
    // 0x1e9224: 0xc06d51e  jal         func_1B5478
label_1e9228:
    if (ctx->pc == 0x1E9228u) {
        ctx->pc = 0x1E9228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9224u;
        // 0x1e9228: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E922Cu;
        goto label_1e922c;
    }
    ctx->pc = 0x1E9224u;
    SET_GPR_U32(ctx, 31, 0x1E922Cu);
    ctx->pc = 0x1E9228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9224u;
    // 0x1e9228: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x1E922Cu;
label_1e922c:
    // 0x1e922c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1e922cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1e9230:
    // 0x1e9230: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1e9230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e9234:
    // 0x1e9234: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1e9234u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1e9238:
    // 0x1e9238: 0x4a000238  vcallms     0x40
    ctx->pc = 0x1e9238u;
    {     ctx->vu0_tpc = 0x40;     runtime->executeVU0Microprogram(rdram, ctx, 0x40); }
label_1e923c:
    // 0x1e923c: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x1e923cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_1e9240:
    // 0x1e9240: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x1e9240u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_1e9244:
    // 0x1e9244: 0xf8510010  sqc2        $vf17, 0x10($v0)
    ctx->pc = 0x1e9244u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_1e9248:
    // 0x1e9248: 0xf8520020  sqc2        $vf18, 0x20($v0)
    ctx->pc = 0x1e9248u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_1e924c:
    // 0x1e924c: 0xf8530030  sqc2        $vf19, 0x30($v0)
    ctx->pc = 0x1e924cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_1e9250:
    // 0x1e9250: 0xc62c0048  lwc1        $f12, 0x48($s1)
    ctx->pc = 0x1e9250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e9254:
    // 0x1e9254: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1e9254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1e9258:
    // 0x1e9258: 0xc066e14  jal         func_19B850
label_1e925c:
    if (ctx->pc == 0x1E925Cu) {
        ctx->pc = 0x1E925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9258u;
        // 0x1e925c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9260u;
        goto label_1e9260;
    }
    ctx->pc = 0x1E9258u;
    SET_GPR_U32(ctx, 31, 0x1E9260u);
    ctx->pc = 0x1E925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9258u;
    // 0x1e925c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1E9258u, 0x1E9260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9260u;
label_1e9260:
    // 0x1e9260: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1e9260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1e9264:
    // 0x1e9264: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1e9264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1e9268:
    // 0x1e9268: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_1e926c:
    if (ctx->pc == 0x1E926Cu) {
        ctx->pc = 0x1E926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9268u;
        // 0x1e926c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9270u;
        goto label_1e9270;
    }
    ctx->pc = 0x1E9268u;
    {
        const bool branch_taken_0x1e9268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9268u;
        // 0x1e926c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9268) {
            ctx->pc = 0x1E936Cu;
            { ctx->pc = 0x1e936c; return; }
        }
    }
    ctx->pc = 0x1E9270u;
label_1e9270:
    // 0x1e9270: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
label_1e9274:
    if (ctx->pc == 0x1E9274u) {
        ctx->pc = 0x1E9278u;
        goto label_1e9278;
    }
    ctx->pc = 0x1E9270u;
    {
        const bool branch_taken_0x1e9270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9270) {
            ctx->pc = 0x1E936Cu;
            { ctx->pc = 0x1e936c; return; }
        }
    }
    ctx->pc = 0x1E9278u;
label_1e9278:
    // 0x1e9278: 0x82230058  lb          $v1, 0x58($s1)
    ctx->pc = 0x1e9278u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_1e927c:
    // 0x1e927c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1e927cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1e9280:
    // 0x1e9280: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
label_1e9284:
    if (ctx->pc == 0x1E9284u) {
        ctx->pc = 0x1E9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9280u;
        // 0x1e9284: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9288u;
        goto label_1e9288;
    }
    ctx->pc = 0x1E9280u;
    {
        const bool branch_taken_0x1e9280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9280u;
        // 0x1e9284: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9280) {
            ctx->pc = 0x1E936Cu;
            { ctx->pc = 0x1e936c; return; }
        }
    }
    ctx->pc = 0x1E9288u;
label_1e9288:
    // 0x1e9288: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1e9288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e928c:
    // 0x1e928c: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x1e928cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1e9290:
    // 0x1e9290: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x1e9290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1e9294:
    // 0x1e9294: 0xc043274  jal         func_10C9D0
label_1e9298:
    if (ctx->pc == 0x1E9298u) {
        ctx->pc = 0x1E9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9294u;
        // 0x1e9298: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E929Cu;
        goto label_1e929c;
    }
    ctx->pc = 0x1E9294u;
    SET_GPR_U32(ctx, 31, 0x1E929Cu);
    ctx->pc = 0x1E9298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9294u;
    // 0x1e9298: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C9D0u, 0x1E9294u, 0x1E929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E929Cu;
label_1e929c:
    // 0x1e929c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1e92a0:
    if (ctx->pc == 0x1E92A0u) {
        ctx->pc = 0x1E92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E929Cu;
        // 0x1e92a0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E92A4u;
        goto label_1e92a4;
    }
    ctx->pc = 0x1E929Cu;
    {
        const bool branch_taken_0x1e929c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E929Cu;
        // 0x1e92a0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e929c) {
            ctx->pc = 0x1E92BCu;
            goto label_1e92bc;
        }
    }
    ctx->pc = 0x1E92A4u;
label_1e92a4:
    // 0x1e92a4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1e92a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e92a8:
    // 0x1e92a8: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x1e92a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1e92ac:
    // 0x1e92ac: 0xc0435cc  jal         func_10D730
label_1e92b0:
    if (ctx->pc == 0x1E92B0u) {
        ctx->pc = 0x1E92B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92ACu;
        // 0x1e92b0: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E92B4u;
        goto label_1e92b4;
    }
    ctx->pc = 0x1E92ACu;
    SET_GPR_U32(ctx, 31, 0x1E92B4u);
    ctx->pc = 0x1E92B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E92ACu;
    // 0x1e92b0: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D730u, 0x1E92ACu, 0x1E92B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E92B4u;
label_1e92b4:
    // 0x1e92b4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1e92b8:
    if (ctx->pc == 0x1E92B8u) {
        ctx->pc = 0x1E92BCu;
        goto label_1e92bc;
    }
    ctx->pc = 0x1E92B4u;
    {
        const bool branch_taken_0x1e92b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e92b4) {
            ctx->pc = 0x1E9308u;
            { ctx->pc = 0x1e9308; return; }
        }
    }
    ctx->pc = 0x1E92BCu;
label_1e92bc:
    // 0x1e92bc: 0x0  nop
    ctx->pc = 0x1e92bcu;
    // NOP
label_1e92c0:
    // 0x1e92c0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1e92c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1e92c4:
    // 0x1e92c4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1e92c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e92c8:
    // 0x1e92c8: 0xc066e02  jal         func_19B808
label_1e92cc:
    if (ctx->pc == 0x1E92CCu) {
        ctx->pc = 0x1E92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92C8u;
        // 0x1e92cc: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E92D0u;
        goto label_1e92d0;
    }
    ctx->pc = 0x1E92C8u;
    SET_GPR_U32(ctx, 31, 0x1E92D0u);
    ctx->pc = 0x1E92CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E92C8u;
    // 0x1e92cc: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x1E92C8u, 0x1E92D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E92D0u;
label_1e92d0:
    // 0x1e92d0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1e92d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1e92d4:
    // 0x1e92d4: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x1e92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_1e92d8:
    // 0x1e92d8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1e92d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_1e92dc:
    // 0x1e92dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e92dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e92e0:
    // 0x1e92e0: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1e92e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_1e92e4:
    // 0x1e92e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e92e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e92e8:
    // 0x1e92e8: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1e92e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_1e92ec:
    // 0x1e92ec: 0xa6220056  sh          $v0, 0x56($s1)
    ctx->pc = 0x1e92ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 86), (uint16_t)GPR_U32(ctx, 2));
label_1e92f0:
    // 0x1e92f0: 0x9622005c  lhu         $v0, 0x5C($s1)
    ctx->pc = 0x1e92f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
label_1e92f4:
    // 0x1e92f4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1e92f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1e92f8:
    // 0x1e92f8: 0xc04a1f0  jal         func_1287C0
label_1e92fc:
    if (ctx->pc == 0x1E92FCu) {
        ctx->pc = 0x1E92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92F8u;
        // 0x1e92fc: 0xa622005c  sh          $v0, 0x5C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 92), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9300u;
        { ctx->pc = 0x1e9300; return; }
    }
    ctx->pc = 0x1E92F8u;
    SET_GPR_U32(ctx, 31, 0x1E9300u);
    ctx->pc = 0x1E92FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E92F8u;
    // 0x1e92fc: 0xa622005c  sh          $v0, 0x5C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 92), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x1E92F8u, 0x1E9300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9300u;
    ctx->pc = 0x1e9300u;
    return;
}
