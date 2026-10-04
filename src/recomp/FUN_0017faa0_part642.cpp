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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part642(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2b8a70u: goto label_2b8a70;
        case 0x2b8a74u: goto label_2b8a74;
        case 0x2b8a78u: goto label_2b8a78;
        case 0x2b8a7cu: goto label_2b8a7c;
        case 0x2b8a80u: goto label_2b8a80;
        case 0x2b8a84u: goto label_2b8a84;
        case 0x2b8a88u: goto label_2b8a88;
        case 0x2b8a8cu: goto label_2b8a8c;
        case 0x2b8a90u: goto label_2b8a90;
        case 0x2b8a94u: goto label_2b8a94;
        case 0x2b8a98u: goto label_2b8a98;
        case 0x2b8a9cu: goto label_2b8a9c;
        case 0x2b8aa0u: goto label_2b8aa0;
        case 0x2b8aa4u: goto label_2b8aa4;
        case 0x2b8aa8u: goto label_2b8aa8;
        case 0x2b8aacu: goto label_2b8aac;
        case 0x2b8ab0u: goto label_2b8ab0;
        case 0x2b8ab4u: goto label_2b8ab4;
        case 0x2b8ab8u: goto label_2b8ab8;
        case 0x2b8abcu: goto label_2b8abc;
        case 0x2b8ac0u: goto label_2b8ac0;
        case 0x2b8ac4u: goto label_2b8ac4;
        case 0x2b8ac8u: goto label_2b8ac8;
        case 0x2b8accu: goto label_2b8acc;
        case 0x2b8ad0u: goto label_2b8ad0;
        case 0x2b8ad4u: goto label_2b8ad4;
        case 0x2b8ad8u: goto label_2b8ad8;
        case 0x2b8adcu: goto label_2b8adc;
        case 0x2b8ae0u: goto label_2b8ae0;
        case 0x2b8ae4u: goto label_2b8ae4;
        case 0x2b8ae8u: goto label_2b8ae8;
        case 0x2b8aecu: goto label_2b8aec;
        case 0x2b8af0u: goto label_2b8af0;
        case 0x2b8af4u: goto label_2b8af4;
        case 0x2b8af8u: goto label_2b8af8;
        case 0x2b8afcu: goto label_2b8afc;
        case 0x2b8b00u: goto label_2b8b00;
        case 0x2b8b04u: goto label_2b8b04;
        case 0x2b8b08u: goto label_2b8b08;
        case 0x2b8b0cu: goto label_2b8b0c;
        case 0x2b8b10u: goto label_2b8b10;
        case 0x2b8b14u: goto label_2b8b14;
        case 0x2b8b18u: goto label_2b8b18;
        case 0x2b8b1cu: goto label_2b8b1c;
        case 0x2b8b20u: goto label_2b8b20;
        case 0x2b8b24u: goto label_2b8b24;
        case 0x2b8b28u: goto label_2b8b28;
        case 0x2b8b2cu: goto label_2b8b2c;
        case 0x2b8b30u: goto label_2b8b30;
        case 0x2b8b34u: goto label_2b8b34;
        case 0x2b8b38u: goto label_2b8b38;
        case 0x2b8b3cu: goto label_2b8b3c;
        case 0x2b8b40u: goto label_2b8b40;
        case 0x2b8b44u: goto label_2b8b44;
        case 0x2b8b48u: goto label_2b8b48;
        case 0x2b8b4cu: goto label_2b8b4c;
        case 0x2b8b50u: goto label_2b8b50;
        case 0x2b8b54u: goto label_2b8b54;
        case 0x2b8b58u: goto label_2b8b58;
        case 0x2b8b5cu: goto label_2b8b5c;
        case 0x2b8b60u: goto label_2b8b60;
        case 0x2b8b64u: goto label_2b8b64;
        case 0x2b8b68u: goto label_2b8b68;
        case 0x2b8b6cu: goto label_2b8b6c;
        case 0x2b8b70u: goto label_2b8b70;
        case 0x2b8b74u: goto label_2b8b74;
        case 0x2b8b78u: goto label_2b8b78;
        case 0x2b8b7cu: goto label_2b8b7c;
        case 0x2b8b80u: goto label_2b8b80;
        case 0x2b8b84u: goto label_2b8b84;
        case 0x2b8b88u: goto label_2b8b88;
        case 0x2b8b8cu: goto label_2b8b8c;
        case 0x2b8b90u: goto label_2b8b90;
        case 0x2b8b94u: goto label_2b8b94;
        case 0x2b8b98u: goto label_2b8b98;
        case 0x2b8b9cu: goto label_2b8b9c;
        case 0x2b8ba0u: goto label_2b8ba0;
        case 0x2b8ba4u: goto label_2b8ba4;
        case 0x2b8ba8u: goto label_2b8ba8;
        case 0x2b8bacu: goto label_2b8bac;
        case 0x2b8bb0u: goto label_2b8bb0;
        case 0x2b8bb4u: goto label_2b8bb4;
        case 0x2b8bb8u: goto label_2b8bb8;
        case 0x2b8bbcu: goto label_2b8bbc;
        case 0x2b8bc0u: goto label_2b8bc0;
        case 0x2b8bc4u: goto label_2b8bc4;
        case 0x2b8bc8u: goto label_2b8bc8;
        case 0x2b8bccu: goto label_2b8bcc;
        case 0x2b8bd0u: goto label_2b8bd0;
        case 0x2b8bd4u: goto label_2b8bd4;
        case 0x2b8bd8u: goto label_2b8bd8;
        case 0x2b8bdcu: goto label_2b8bdc;
        case 0x2b8be0u: goto label_2b8be0;
        case 0x2b8be4u: goto label_2b8be4;
        case 0x2b8be8u: goto label_2b8be8;
        case 0x2b8becu: goto label_2b8bec;
        case 0x2b8bf0u: goto label_2b8bf0;
        case 0x2b8bf4u: goto label_2b8bf4;
        case 0x2b8bf8u: goto label_2b8bf8;
        case 0x2b8bfcu: goto label_2b8bfc;
        case 0x2b8c00u: goto label_2b8c00;
        case 0x2b8c04u: goto label_2b8c04;
        case 0x2b8c08u: goto label_2b8c08;
        case 0x2b8c0cu: goto label_2b8c0c;
        case 0x2b8c10u: goto label_2b8c10;
        case 0x2b8c14u: goto label_2b8c14;
        case 0x2b8c18u: goto label_2b8c18;
        case 0x2b8c1cu: goto label_2b8c1c;
        case 0x2b8c20u: goto label_2b8c20;
        case 0x2b8c24u: goto label_2b8c24;
        case 0x2b8c28u: goto label_2b8c28;
        case 0x2b8c2cu: goto label_2b8c2c;
        case 0x2b8c30u: goto label_2b8c30;
        case 0x2b8c34u: goto label_2b8c34;
        case 0x2b8c38u: goto label_2b8c38;
        case 0x2b8c3cu: goto label_2b8c3c;
        case 0x2b8c40u: goto label_2b8c40;
        case 0x2b8c44u: goto label_2b8c44;
        case 0x2b8c48u: goto label_2b8c48;
        case 0x2b8c4cu: goto label_2b8c4c;
        case 0x2b8c50u: goto label_2b8c50;
        case 0x2b8c54u: goto label_2b8c54;
        case 0x2b8c58u: goto label_2b8c58;
        case 0x2b8c5cu: goto label_2b8c5c;
        case 0x2b8c60u: goto label_2b8c60;
        case 0x2b8c64u: goto label_2b8c64;
        case 0x2b8c68u: goto label_2b8c68;
        case 0x2b8c6cu: goto label_2b8c6c;
        case 0x2b8c70u: goto label_2b8c70;
        case 0x2b8c74u: goto label_2b8c74;
        case 0x2b8c78u: goto label_2b8c78;
        case 0x2b8c7cu: goto label_2b8c7c;
        case 0x2b8c80u: goto label_2b8c80;
        case 0x2b8c84u: goto label_2b8c84;
        case 0x2b8c88u: goto label_2b8c88;
        case 0x2b8c8cu: goto label_2b8c8c;
        case 0x2b8c90u: goto label_2b8c90;
        case 0x2b8c94u: goto label_2b8c94;
        case 0x2b8c98u: goto label_2b8c98;
        case 0x2b8c9cu: goto label_2b8c9c;
        case 0x2b8ca0u: goto label_2b8ca0;
        case 0x2b8ca4u: goto label_2b8ca4;
        case 0x2b8ca8u: goto label_2b8ca8;
        case 0x2b8cacu: goto label_2b8cac;
        case 0x2b8cb0u: goto label_2b8cb0;
        case 0x2b8cb4u: goto label_2b8cb4;
        case 0x2b8cb8u: goto label_2b8cb8;
        case 0x2b8cbcu: goto label_2b8cbc;
        case 0x2b8cc0u: goto label_2b8cc0;
        case 0x2b8cc4u: goto label_2b8cc4;
        case 0x2b8cc8u: goto label_2b8cc8;
        case 0x2b8cccu: goto label_2b8ccc;
        case 0x2b8cd0u: goto label_2b8cd0;
        case 0x2b8cd4u: goto label_2b8cd4;
        case 0x2b8cd8u: goto label_2b8cd8;
        case 0x2b8cdcu: goto label_2b8cdc;
        case 0x2b8ce0u: goto label_2b8ce0;
        case 0x2b8ce4u: goto label_2b8ce4;
        case 0x2b8ce8u: goto label_2b8ce8;
        case 0x2b8cecu: goto label_2b8cec;
        case 0x2b8cf0u: goto label_2b8cf0;
        case 0x2b8cf4u: goto label_2b8cf4;
        case 0x2b8cf8u: goto label_2b8cf8;
        case 0x2b8cfcu: goto label_2b8cfc;
        case 0x2b8d00u: goto label_2b8d00;
        case 0x2b8d04u: goto label_2b8d04;
        case 0x2b8d08u: goto label_2b8d08;
        case 0x2b8d0cu: goto label_2b8d0c;
        case 0x2b8d10u: goto label_2b8d10;
        case 0x2b8d14u: goto label_2b8d14;
        case 0x2b8d18u: goto label_2b8d18;
        case 0x2b8d1cu: goto label_2b8d1c;
        case 0x2b8d20u: goto label_2b8d20;
        case 0x2b8d24u: goto label_2b8d24;
        case 0x2b8d28u: goto label_2b8d28;
        case 0x2b8d2cu: goto label_2b8d2c;
        case 0x2b8d30u: goto label_2b8d30;
        case 0x2b8d34u: goto label_2b8d34;
        case 0x2b8d38u: goto label_2b8d38;
        case 0x2b8d3cu: goto label_2b8d3c;
        case 0x2b8d40u: goto label_2b8d40;
        case 0x2b8d44u: goto label_2b8d44;
        case 0x2b8d48u: goto label_2b8d48;
        case 0x2b8d4cu: goto label_2b8d4c;
        case 0x2b8d50u: goto label_2b8d50;
        case 0x2b8d54u: goto label_2b8d54;
        case 0x2b8d58u: goto label_2b8d58;
        case 0x2b8d5cu: goto label_2b8d5c;
        case 0x2b8d60u: goto label_2b8d60;
        case 0x2b8d64u: goto label_2b8d64;
        case 0x2b8d68u: goto label_2b8d68;
        case 0x2b8d6cu: goto label_2b8d6c;
        case 0x2b8d70u: goto label_2b8d70;
        case 0x2b8d74u: goto label_2b8d74;
        case 0x2b8d78u: goto label_2b8d78;
        case 0x2b8d7cu: goto label_2b8d7c;
        case 0x2b8d80u: goto label_2b8d80;
        case 0x2b8d84u: goto label_2b8d84;
        case 0x2b8d88u: goto label_2b8d88;
        case 0x2b8d8cu: goto label_2b8d8c;
        case 0x2b8d90u: goto label_2b8d90;
        case 0x2b8d94u: goto label_2b8d94;
        case 0x2b8d98u: goto label_2b8d98;
        case 0x2b8d9cu: goto label_2b8d9c;
        case 0x2b8da0u: goto label_2b8da0;
        case 0x2b8da4u: goto label_2b8da4;
        case 0x2b8da8u: goto label_2b8da8;
        case 0x2b8dacu: goto label_2b8dac;
        case 0x2b8db0u: goto label_2b8db0;
        case 0x2b8db4u: goto label_2b8db4;
        case 0x2b8db8u: goto label_2b8db8;
        case 0x2b8dbcu: goto label_2b8dbc;
        case 0x2b8dc0u: goto label_2b8dc0;
        case 0x2b8dc4u: goto label_2b8dc4;
        case 0x2b8dc8u: goto label_2b8dc8;
        case 0x2b8dccu: goto label_2b8dcc;
        case 0x2b8dd0u: goto label_2b8dd0;
        case 0x2b8dd4u: goto label_2b8dd4;
        case 0x2b8dd8u: goto label_2b8dd8;
        case 0x2b8ddcu: goto label_2b8ddc;
        case 0x2b8de0u: goto label_2b8de0;
        case 0x2b8de4u: goto label_2b8de4;
        case 0x2b8de8u: goto label_2b8de8;
        case 0x2b8decu: goto label_2b8dec;
        case 0x2b8df0u: goto label_2b8df0;
        case 0x2b8df4u: goto label_2b8df4;
        case 0x2b8df8u: goto label_2b8df8;
        case 0x2b8dfcu: goto label_2b8dfc;
        case 0x2b8e00u: goto label_2b8e00;
        case 0x2b8e04u: goto label_2b8e04;
        case 0x2b8e08u: goto label_2b8e08;
        case 0x2b8e0cu: goto label_2b8e0c;
        case 0x2b8e10u: goto label_2b8e10;
        case 0x2b8e14u: goto label_2b8e14;
        case 0x2b8e18u: goto label_2b8e18;
        case 0x2b8e1cu: goto label_2b8e1c;
        case 0x2b8e20u: goto label_2b8e20;
        case 0x2b8e24u: goto label_2b8e24;
        case 0x2b8e28u: goto label_2b8e28;
        case 0x2b8e2cu: goto label_2b8e2c;
        case 0x2b8e30u: goto label_2b8e30;
        case 0x2b8e34u: goto label_2b8e34;
        case 0x2b8e38u: goto label_2b8e38;
        case 0x2b8e3cu: goto label_2b8e3c;
        case 0x2b8e40u: goto label_2b8e40;
        case 0x2b8e44u: goto label_2b8e44;
        case 0x2b8e48u: goto label_2b8e48;
        case 0x2b8e4cu: goto label_2b8e4c;
        case 0x2b8e50u: goto label_2b8e50;
        case 0x2b8e54u: goto label_2b8e54;
        case 0x2b8e58u: goto label_2b8e58;
        case 0x2b8e5cu: goto label_2b8e5c;
        case 0x2b8e60u: goto label_2b8e60;
        case 0x2b8e64u: goto label_2b8e64;
        case 0x2b8e68u: goto label_2b8e68;
        case 0x2b8e6cu: goto label_2b8e6c;
        case 0x2b8e70u: goto label_2b8e70;
        case 0x2b8e74u: goto label_2b8e74;
        case 0x2b8e78u: goto label_2b8e78;
        case 0x2b8e7cu: goto label_2b8e7c;
        case 0x2b8e80u: goto label_2b8e80;
        case 0x2b8e84u: goto label_2b8e84;
        case 0x2b8e88u: goto label_2b8e88;
        case 0x2b8e8cu: goto label_2b8e8c;
        case 0x2b8e90u: goto label_2b8e90;
        case 0x2b8e94u: goto label_2b8e94;
        case 0x2b8e98u: goto label_2b8e98;
        case 0x2b8e9cu: goto label_2b8e9c;
        case 0x2b8ea0u: goto label_2b8ea0;
        case 0x2b8ea4u: goto label_2b8ea4;
        case 0x2b8ea8u: goto label_2b8ea8;
        case 0x2b8eacu: goto label_2b8eac;
        case 0x2b8eb0u: goto label_2b8eb0;
        case 0x2b8eb4u: goto label_2b8eb4;
        case 0x2b8eb8u: goto label_2b8eb8;
        case 0x2b8ebcu: goto label_2b8ebc;
        case 0x2b8ec0u: goto label_2b8ec0;
        case 0x2b8ec4u: goto label_2b8ec4;
        case 0x2b8ec8u: goto label_2b8ec8;
        case 0x2b8eccu: goto label_2b8ecc;
        case 0x2b8ed0u: goto label_2b8ed0;
        case 0x2b8ed4u: goto label_2b8ed4;
        case 0x2b8ed8u: goto label_2b8ed8;
        case 0x2b8edcu: goto label_2b8edc;
        case 0x2b8ee0u: goto label_2b8ee0;
        case 0x2b8ee4u: goto label_2b8ee4;
        case 0x2b8ee8u: goto label_2b8ee8;
        case 0x2b8eecu: goto label_2b8eec;
        case 0x2b8ef0u: goto label_2b8ef0;
        case 0x2b8ef4u: goto label_2b8ef4;
        case 0x2b8ef8u: goto label_2b8ef8;
        case 0x2b8efcu: goto label_2b8efc;
        case 0x2b8f00u: goto label_2b8f00;
        case 0x2b8f04u: goto label_2b8f04;
        case 0x2b8f08u: goto label_2b8f08;
        case 0x2b8f0cu: goto label_2b8f0c;
        case 0x2b8f10u: goto label_2b8f10;
        case 0x2b8f14u: goto label_2b8f14;
        case 0x2b8f18u: goto label_2b8f18;
        case 0x2b8f1cu: goto label_2b8f1c;
        case 0x2b8f20u: goto label_2b8f20;
        case 0x2b8f24u: goto label_2b8f24;
        case 0x2b8f28u: goto label_2b8f28;
        case 0x2b8f2cu: goto label_2b8f2c;
        case 0x2b8f30u: goto label_2b8f30;
        case 0x2b8f34u: goto label_2b8f34;
        case 0x2b8f38u: goto label_2b8f38;
        case 0x2b8f3cu: goto label_2b8f3c;
        case 0x2b8f40u: goto label_2b8f40;
        case 0x2b8f44u: goto label_2b8f44;
        case 0x2b8f48u: goto label_2b8f48;
        case 0x2b8f4cu: goto label_2b8f4c;
        case 0x2b8f50u: goto label_2b8f50;
        case 0x2b8f54u: goto label_2b8f54;
        case 0x2b8f58u: goto label_2b8f58;
        case 0x2b8f5cu: goto label_2b8f5c;
        case 0x2b8f60u: goto label_2b8f60;
        case 0x2b8f64u: goto label_2b8f64;
        case 0x2b8f68u: goto label_2b8f68;
        case 0x2b8f6cu: goto label_2b8f6c;
        case 0x2b8f70u: goto label_2b8f70;
        case 0x2b8f74u: goto label_2b8f74;
        case 0x2b8f78u: goto label_2b8f78;
        case 0x2b8f7cu: goto label_2b8f7c;
        case 0x2b8f80u: goto label_2b8f80;
        case 0x2b8f84u: goto label_2b8f84;
        case 0x2b8f88u: goto label_2b8f88;
        case 0x2b8f8cu: goto label_2b8f8c;
        case 0x2b8f90u: goto label_2b8f90;
        case 0x2b8f94u: goto label_2b8f94;
        case 0x2b8f98u: goto label_2b8f98;
        case 0x2b8f9cu: goto label_2b8f9c;
        case 0x2b8fa0u: goto label_2b8fa0;
        case 0x2b8fa4u: goto label_2b8fa4;
        case 0x2b8fa8u: goto label_2b8fa8;
        case 0x2b8facu: goto label_2b8fac;
        case 0x2b8fb0u: goto label_2b8fb0;
        case 0x2b8fb4u: goto label_2b8fb4;
        case 0x2b8fb8u: goto label_2b8fb8;
        case 0x2b8fbcu: goto label_2b8fbc;
        case 0x2b8fc0u: goto label_2b8fc0;
        case 0x2b8fc4u: goto label_2b8fc4;
        case 0x2b8fc8u: goto label_2b8fc8;
        case 0x2b8fccu: goto label_2b8fcc;
        case 0x2b8fd0u: goto label_2b8fd0;
        case 0x2b8fd4u: goto label_2b8fd4;
        case 0x2b8fd8u: goto label_2b8fd8;
        case 0x2b8fdcu: goto label_2b8fdc;
        case 0x2b8fe0u: goto label_2b8fe0;
        case 0x2b8fe4u: goto label_2b8fe4;
        case 0x2b8fe8u: goto label_2b8fe8;
        case 0x2b8fecu: goto label_2b8fec;
        case 0x2b8ff0u: goto label_2b8ff0;
        case 0x2b8ff4u: goto label_2b8ff4;
        case 0x2b8ff8u: goto label_2b8ff8;
        case 0x2b8ffcu: goto label_2b8ffc;
        case 0x2b9000u: goto label_2b9000;
        case 0x2b9004u: goto label_2b9004;
        case 0x2b9008u: goto label_2b9008;
        case 0x2b900cu: goto label_2b900c;
        case 0x2b9010u: goto label_2b9010;
        case 0x2b9014u: goto label_2b9014;
        case 0x2b9018u: goto label_2b9018;
        case 0x2b901cu: goto label_2b901c;
        case 0x2b9020u: goto label_2b9020;
        case 0x2b9024u: goto label_2b9024;
        case 0x2b9028u: goto label_2b9028;
        case 0x2b902cu: goto label_2b902c;
        case 0x2b9030u: goto label_2b9030;
        case 0x2b9034u: goto label_2b9034;
        case 0x2b9038u: goto label_2b9038;
        case 0x2b903cu: goto label_2b903c;
        case 0x2b9040u: goto label_2b9040;
        case 0x2b9044u: goto label_2b9044;
        case 0x2b9048u: goto label_2b9048;
        case 0x2b904cu: goto label_2b904c;
        case 0x2b9050u: goto label_2b9050;
        case 0x2b9054u: goto label_2b9054;
        case 0x2b9058u: goto label_2b9058;
        case 0x2b905cu: goto label_2b905c;
        case 0x2b9060u: goto label_2b9060;
        case 0x2b9064u: goto label_2b9064;
        case 0x2b9068u: goto label_2b9068;
        case 0x2b906cu: goto label_2b906c;
        case 0x2b9070u: goto label_2b9070;
        case 0x2b9074u: goto label_2b9074;
        case 0x2b9078u: goto label_2b9078;
        case 0x2b907cu: goto label_2b907c;
        case 0x2b9080u: goto label_2b9080;
        case 0x2b9084u: goto label_2b9084;
        case 0x2b9088u: goto label_2b9088;
        case 0x2b908cu: goto label_2b908c;
        case 0x2b9090u: goto label_2b9090;
        case 0x2b9094u: goto label_2b9094;
        case 0x2b9098u: goto label_2b9098;
        case 0x2b909cu: goto label_2b909c;
        case 0x2b90a0u: goto label_2b90a0;
        case 0x2b90a4u: goto label_2b90a4;
        case 0x2b90a8u: goto label_2b90a8;
        case 0x2b90acu: goto label_2b90ac;
        case 0x2b90b0u: goto label_2b90b0;
        case 0x2b90b4u: goto label_2b90b4;
        case 0x2b90b8u: goto label_2b90b8;
        case 0x2b90bcu: goto label_2b90bc;
        case 0x2b90c0u: goto label_2b90c0;
        case 0x2b90c4u: goto label_2b90c4;
        case 0x2b90c8u: goto label_2b90c8;
        case 0x2b90ccu: goto label_2b90cc;
        case 0x2b90d0u: goto label_2b90d0;
        case 0x2b90d4u: goto label_2b90d4;
        case 0x2b90d8u: goto label_2b90d8;
        case 0x2b90dcu: goto label_2b90dc;
        case 0x2b90e0u: goto label_2b90e0;
        case 0x2b90e4u: goto label_2b90e4;
        case 0x2b90e8u: goto label_2b90e8;
        case 0x2b90ecu: goto label_2b90ec;
        case 0x2b90f0u: goto label_2b90f0;
        case 0x2b90f4u: goto label_2b90f4;
        case 0x2b90f8u: goto label_2b90f8;
        case 0x2b90fcu: goto label_2b90fc;
        case 0x2b9100u: goto label_2b9100;
        case 0x2b9104u: goto label_2b9104;
        case 0x2b9108u: goto label_2b9108;
        case 0x2b910cu: goto label_2b910c;
        case 0x2b9110u: goto label_2b9110;
        case 0x2b9114u: goto label_2b9114;
        case 0x2b9118u: goto label_2b9118;
        case 0x2b911cu: goto label_2b911c;
        case 0x2b9120u: goto label_2b9120;
        case 0x2b9124u: goto label_2b9124;
        case 0x2b9128u: goto label_2b9128;
        case 0x2b912cu: goto label_2b912c;
        case 0x2b9130u: goto label_2b9130;
        case 0x2b9134u: goto label_2b9134;
        case 0x2b9138u: goto label_2b9138;
        case 0x2b913cu: goto label_2b913c;
        case 0x2b9140u: goto label_2b9140;
        case 0x2b9144u: goto label_2b9144;
        case 0x2b9148u: goto label_2b9148;
        case 0x2b914cu: goto label_2b914c;
        case 0x2b9150u: goto label_2b9150;
        case 0x2b9154u: goto label_2b9154;
        case 0x2b9158u: goto label_2b9158;
        case 0x2b915cu: goto label_2b915c;
        case 0x2b9160u: goto label_2b9160;
        case 0x2b9164u: goto label_2b9164;
        case 0x2b9168u: goto label_2b9168;
        case 0x2b916cu: goto label_2b916c;
        case 0x2b9170u: goto label_2b9170;
        case 0x2b9174u: goto label_2b9174;
        case 0x2b9178u: goto label_2b9178;
        case 0x2b917cu: goto label_2b917c;
        case 0x2b9180u: goto label_2b9180;
        case 0x2b9184u: goto label_2b9184;
        case 0x2b9188u: goto label_2b9188;
        case 0x2b918cu: goto label_2b918c;
        case 0x2b9190u: goto label_2b9190;
        case 0x2b9194u: goto label_2b9194;
        case 0x2b9198u: goto label_2b9198;
        case 0x2b919cu: goto label_2b919c;
        case 0x2b91a0u: goto label_2b91a0;
        case 0x2b91a4u: goto label_2b91a4;
        case 0x2b91a8u: goto label_2b91a8;
        case 0x2b91acu: goto label_2b91ac;
        case 0x2b91b0u: goto label_2b91b0;
        case 0x2b91b4u: goto label_2b91b4;
        case 0x2b91b8u: goto label_2b91b8;
        case 0x2b91bcu: goto label_2b91bc;
        case 0x2b91c0u: goto label_2b91c0;
        case 0x2b91c4u: goto label_2b91c4;
        case 0x2b91c8u: goto label_2b91c8;
        case 0x2b91ccu: goto label_2b91cc;
        case 0x2b91d0u: goto label_2b91d0;
        case 0x2b91d4u: goto label_2b91d4;
        case 0x2b91d8u: goto label_2b91d8;
        case 0x2b91dcu: goto label_2b91dc;
        case 0x2b91e0u: goto label_2b91e0;
        case 0x2b91e4u: goto label_2b91e4;
        case 0x2b91e8u: goto label_2b91e8;
        case 0x2b91ecu: goto label_2b91ec;
        case 0x2b91f0u: goto label_2b91f0;
        case 0x2b91f4u: goto label_2b91f4;
        case 0x2b91f8u: goto label_2b91f8;
        case 0x2b91fcu: goto label_2b91fc;
        case 0x2b9200u: goto label_2b9200;
        case 0x2b9204u: goto label_2b9204;
        case 0x2b9208u: goto label_2b9208;
        case 0x2b920cu: goto label_2b920c;
        case 0x2b9210u: goto label_2b9210;
        case 0x2b9214u: goto label_2b9214;
        case 0x2b9218u: goto label_2b9218;
        case 0x2b921cu: goto label_2b921c;
        case 0x2b9220u: goto label_2b9220;
        case 0x2b9224u: goto label_2b9224;
        case 0x2b9228u: goto label_2b9228;
        case 0x2b922cu: goto label_2b922c;
        case 0x2b9230u: goto label_2b9230;
        case 0x2b9234u: goto label_2b9234;
        case 0x2b9238u: goto label_2b9238;
        case 0x2b923cu: goto label_2b923c;
        default: return;
    }

label_2b8a70:
    // 0x2b8a70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8a70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8a74:
    // 0x2b8a74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8a74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8a78:
    // 0x2b8a78: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b8a7c:
    if (ctx->pc == 0x2B8A7Cu) {
        ctx->pc = 0x2B8A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A78u;
        // 0x2b8a7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8A80u;
        goto label_2b8a80;
    }
    ctx->pc = 0x2B8A78u;
    {
        const bool branch_taken_0x2b8a78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B8A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A78u;
        // 0x2b8a7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a78) {
            ctx->pc = 0x2CCA80u;
            return;
        }
    }
    ctx->pc = 0x2B8A80u;
label_2b8a80:
    // 0x2b8a80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8a80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8a84:
    // 0x2b8a84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8a84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8a88:
    // 0x2b8a88: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b8a8c:
    if (ctx->pc == 0x2B8A8Cu) {
        ctx->pc = 0x2B8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A88u;
        // 0x2b8a8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8A90u;
        goto label_2b8a90;
    }
    ctx->pc = 0x2B8A88u;
    {
        const bool branch_taken_0x2b8a88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b8a88) {
            ctx->pc = 0x2B8A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8A88u;
            // 0x2b8a8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAA78u;
            { ctx->pc = 0x2baa78; return; }
        }
    }
    ctx->pc = 0x2B8A90u;
label_2b8a90:
    // 0x2b8a90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8a90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8a94:
    // 0x2b8a94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8a94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8a98:
    // 0x2b8a98: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b8a9c:
    if (ctx->pc == 0x2B8A9Cu) {
        ctx->pc = 0x2B8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A98u;
        // 0x2b8a9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8AA0u;
        goto label_2b8aa0;
    }
    ctx->pc = 0x2B8A98u;
    {
        const bool branch_taken_0x2b8a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A98u;
        // 0x2b8a9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a98) {
            ctx->pc = 0x2BEA9Cu;
            { ctx->pc = 0x2bea9c; return; }
        }
    }
    ctx->pc = 0x2B8AA0u;
label_2b8aa0:
    // 0x2b8aa0: 0x4202005b  .word       0x4202005B                   # INVALID     $s0, $v0, 0x5B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b8aa0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1B at 0x2B8AA0 raw=0x4202005B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8aa4:
    // 0x2b8aa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8aa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8aa8:
    // 0x2b8aa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8aa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8aac:
    // 0x2b8aac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8aacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ab0:
    // 0x2b8ab0: 0x500b0057  beql        $zero, $t3, . + 4 + (0x57 << 2)
label_2b8ab4:
    if (ctx->pc == 0x2B8AB4u) {
        ctx->pc = 0x2B8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AB0u;
        // 0x2b8ab4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8AB8u;
        goto label_2b8ab8;
    }
    ctx->pc = 0x2B8AB0u;
    {
        const bool branch_taken_0x2b8ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b8ab0) {
            ctx->pc = 0x2B8AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8AB0u;
            // 0x2b8ab4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8C10u;
            goto label_2b8c10;
        }
    }
    ctx->pc = 0x2B8AB8u;
label_2b8ab8:
    // 0x2b8ab8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8ab8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8abc:
    // 0x2b8abc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8abcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ac0:
    // 0x2b8ac0: 0x100d0040  beq         $zero, $t5, . + 4 + (0x40 << 2)
label_2b8ac4:
    if (ctx->pc == 0x2B8AC4u) {
        ctx->pc = 0x2B8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AC0u;
        // 0x2b8ac4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8AC8u;
        goto label_2b8ac8;
    }
    ctx->pc = 0x2B8AC0u;
    {
        const bool branch_taken_0x2b8ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AC0u;
        // 0x2b8ac4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ac0) {
            ctx->pc = 0x2B8BC4u;
            goto label_2b8bc4;
        }
    }
    ctx->pc = 0x2B8AC8u;
label_2b8ac8:
    // 0x2b8ac8: 0x10060001  beq         $zero, $a2, . + 4 + (0x1 << 2)
label_2b8acc:
    if (ctx->pc == 0x2B8ACCu) {
        ctx->pc = 0x2B8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AC8u;
        // 0x2b8acc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8AD0u;
        goto label_2b8ad0;
    }
    ctx->pc = 0x2B8AC8u;
    {
        const bool branch_taken_0x2b8ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AC8u;
        // 0x2b8acc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ac8) {
            ctx->pc = 0x2B8AD0u;
            goto label_2b8ad0;
        }
    }
    ctx->pc = 0x2B8AD0u;
label_2b8ad0:
    // 0x2b8ad0: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2b8ad4:
    if (ctx->pc == 0x2B8AD4u) {
        ctx->pc = 0x2B8AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AD0u;
        // 0x2b8ad4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8AD8u;
        goto label_2b8ad8;
    }
    ctx->pc = 0x2B8AD0u;
    {
        const bool branch_taken_0x2b8ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B8AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AD0u;
        // 0x2b8ad4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ad0) {
            ctx->pc = 0x2B8AD4u;
            goto label_2b8ad4;
        }
    }
    ctx->pc = 0x2B8AD8u;
label_2b8ad8:
    // 0x2b8ad8: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b8adc:
    if (ctx->pc == 0x2B8ADCu) {
        ctx->pc = 0x2B8ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AD8u;
        // 0x2b8adc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8AE0u;
        goto label_2b8ae0;
    }
    ctx->pc = 0x2B8AD8u;
    {
        const bool branch_taken_0x2b8ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B8ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AD8u;
        // 0x2b8adc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ad8) {
            ctx->pc = 0x2BEADCu;
            { ctx->pc = 0x2beadc; return; }
        }
    }
    ctx->pc = 0x2B8AE0u;
label_2b8ae0:
    // 0x2b8ae0: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2b8ae4:
    if (ctx->pc == 0x2B8AE4u) {
        ctx->pc = 0x2B8AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AE0u;
        // 0x2b8ae4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8AE8u;
        goto label_2b8ae8;
    }
    ctx->pc = 0x2B8AE0u;
    {
        const bool branch_taken_0x2b8ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B8AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AE0u;
        // 0x2b8ae4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ae0) {
            ctx->pc = 0x2BEB64u;
            { ctx->pc = 0x2beb64; return; }
        }
    }
    ctx->pc = 0x2B8AE8u;
label_2b8ae8:
    // 0x2b8ae8: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b8ae8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b8aec:
    // 0x2b8aec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8aecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8af0:
    // 0x2b8af0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b8af4:
    if (ctx->pc == 0x2B8AF4u) {
        ctx->pc = 0x2B8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AF0u;
        // 0x2b8af4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8AF8u;
        goto label_2b8af8;
    }
    ctx->pc = 0x2B8AF0u;
    {
        const bool branch_taken_0x2b8af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AF0u;
        // 0x2b8af4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8af0) {
            ctx->pc = 0x2B8AF4u;
            goto label_2b8af4;
        }
    }
    ctx->pc = 0x2B8AF8u;
label_2b8af8:
    // 0x2b8af8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8af8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8afc:
    // 0x2b8afc: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8afcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2b8b00:
    // 0x2b8b00: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b8b00u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8b04:
    // 0x2b8b04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8b08:
    // 0x2b8b08: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b8b08u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8b0c:
    // 0x2b8b0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8b10:
    // 0x2b8b10: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b8b10u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8b14:
    // 0x2b8b14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8b18:
    // 0x2b8b18: 0x42020055  .word       0x42020055                   # INVALID     $s0, $v0, 0x55 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b8b18u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x15 at 0x2B8B18 raw=0x42020055"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8b1c:
    // 0x2b8b1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8b20:
    // 0x2b8b20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8b20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8b24:
    // 0x2b8b24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8b28:
    // 0x2b8b28: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b8b2c:
    if (ctx->pc == 0x2B8B2Cu) {
        ctx->pc = 0x2B8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B28u;
        // 0x2b8b2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B30u;
        goto label_2b8b30;
    }
    ctx->pc = 0x2B8B28u;
    {
        const bool branch_taken_0x2b8b28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B28u;
        // 0x2b8b2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b28) {
            ctx->pc = 0x2CCB30u;
            return;
        }
    }
    ctx->pc = 0x2B8B30u;
label_2b8b30:
    // 0x2b8b30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8b30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8b34:
    // 0x2b8b34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8b38:
    // 0x2b8b38: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b8b3c:
    if (ctx->pc == 0x2B8B3Cu) {
        ctx->pc = 0x2B8B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B38u;
        // 0x2b8b3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B40u;
        goto label_2b8b40;
    }
    ctx->pc = 0x2B8B38u;
    {
        const bool branch_taken_0x2b8b38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b8b38) {
            ctx->pc = 0x2B8B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8B38u;
            // 0x2b8b3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAB28u;
            { ctx->pc = 0x2bab28; return; }
        }
    }
    ctx->pc = 0x2B8B40u;
label_2b8b40:
    // 0x2b8b40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8b40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8b44:
    // 0x2b8b44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8b48:
    // 0x2b8b48: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b8b4c:
    if (ctx->pc == 0x2B8B4Cu) {
        ctx->pc = 0x2B8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B48u;
        // 0x2b8b4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B50u;
        goto label_2b8b50;
    }
    ctx->pc = 0x2B8B48u;
    {
        const bool branch_taken_0x2b8b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B48u;
        // 0x2b8b4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b48) {
            ctx->pc = 0x2BEBCCu;
            { ctx->pc = 0x2bebcc; return; }
        }
    }
    ctx->pc = 0x2B8B50u;
label_2b8b50:
    // 0x2b8b50: 0x42020045  .word       0x42020045                   # INVALID     $s0, $v0, 0x45 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b8b50u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x5 at 0x2B8B50 raw=0x42020045"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8b54:
    // 0x2b8b54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8b58:
    // 0x2b8b58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8b58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8b5c:
    // 0x2b8b5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8b60:
    // 0x2b8b60: 0x500b0041  beql        $zero, $t3, . + 4 + (0x41 << 2)
label_2b8b64:
    if (ctx->pc == 0x2B8B64u) {
        ctx->pc = 0x2B8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B60u;
        // 0x2b8b64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B68u;
        goto label_2b8b68;
    }
    ctx->pc = 0x2B8B60u;
    {
        const bool branch_taken_0x2b8b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b8b60) {
            ctx->pc = 0x2B8B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8B60u;
            // 0x2b8b64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8C68u;
            goto label_2b8c68;
        }
    }
    ctx->pc = 0x2B8B68u;
label_2b8b68:
    // 0x2b8b68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8b68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8b6c:
    // 0x2b8b6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8b70:
    // 0x2b8b70: 0x100d0200  beq         $zero, $t5, . + 4 + (0x200 << 2)
label_2b8b74:
    if (ctx->pc == 0x2B8B74u) {
        ctx->pc = 0x2B8B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B70u;
        // 0x2b8b74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B78u;
        goto label_2b8b78;
    }
    ctx->pc = 0x2B8B70u;
    {
        const bool branch_taken_0x2b8b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B8B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B70u;
        // 0x2b8b74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b70) {
            ctx->pc = 0x2B9374u;
            { ctx->pc = 0x2b9374; return; }
        }
    }
    ctx->pc = 0x2B8B78u;
label_2b8b78:
    // 0x2b8b78: 0x10060008  beq         $zero, $a2, . + 4 + (0x8 << 2)
label_2b8b7c:
    if (ctx->pc == 0x2B8B7Cu) {
        ctx->pc = 0x2B8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B78u;
        // 0x2b8b7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B80u;
        goto label_2b8b80;
    }
    ctx->pc = 0x2B8B78u;
    {
        const bool branch_taken_0x2b8b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B78u;
        // 0x2b8b7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b78) {
            ctx->pc = 0x2B8B9Cu;
            goto label_2b8b9c;
        }
    }
    ctx->pc = 0x2B8B80u;
label_2b8b80:
    // 0x2b8b80: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2b8b84:
    if (ctx->pc == 0x2B8B84u) {
        ctx->pc = 0x2B8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B80u;
        // 0x2b8b84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B88u;
        goto label_2b8b88;
    }
    ctx->pc = 0x2B8B80u;
    {
        const bool branch_taken_0x2b8b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B80u;
        // 0x2b8b84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b80) {
            ctx->pc = 0x2B8B88u;
            goto label_2b8b88;
        }
    }
    ctx->pc = 0x2B8B88u;
label_2b8b88:
    // 0x2b8b88: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b8b8c:
    if (ctx->pc == 0x2B8B8Cu) {
        ctx->pc = 0x2B8B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B88u;
        // 0x2b8b8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B90u;
        goto label_2b8b90;
    }
    ctx->pc = 0x2B8B88u;
    {
        const bool branch_taken_0x2b8b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B8B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B88u;
        // 0x2b8b8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b88) {
            ctx->pc = 0x2BEC0Cu;
            { ctx->pc = 0x2bec0c; return; }
        }
    }
    ctx->pc = 0x2B8B90u;
label_2b8b90:
    // 0x2b8b90: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2b8b94:
    if (ctx->pc == 0x2B8B94u) {
        ctx->pc = 0x2B8B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B90u;
        // 0x2b8b94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8B98u;
        goto label_2b8b98;
    }
    ctx->pc = 0x2B8B90u;
    {
        const bool branch_taken_0x2b8b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B8B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8B90u;
        // 0x2b8b94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8b90) {
            ctx->pc = 0x2BEB94u;
            { ctx->pc = 0x2beb94; return; }
        }
    }
    ctx->pc = 0x2B8B98u;
label_2b8b98:
    // 0x2b8b98: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b8b98u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b8b9c:
    // 0x2b8b9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8b9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ba0:
    // 0x2b8ba0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b8ba4:
    if (ctx->pc == 0x2B8BA4u) {
        ctx->pc = 0x2B8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BA0u;
        // 0x2b8ba4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8BA8u;
        goto label_2b8ba8;
    }
    ctx->pc = 0x2B8BA0u;
    {
        const bool branch_taken_0x2b8ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BA0u;
        // 0x2b8ba4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ba0) {
            ctx->pc = 0x2B8BA4u;
            goto label_2b8ba4;
        }
    }
    ctx->pc = 0x2B8BA8u;
label_2b8ba8:
    // 0x2b8ba8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8ba8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8bac:
    // 0x2b8bac: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8bacu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2b8bb0:
    // 0x2b8bb0: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b8bb0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8bb4:
    // 0x2b8bb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8bb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8bb8:
    // 0x2b8bb8: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b8bb8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8bbc:
    // 0x2b8bbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8bbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8bc0:
    // 0x2b8bc0: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b8bc0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8bc4:
    // 0x2b8bc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8bc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8bc8:
    // 0x2b8bc8: 0x4202003f  .word       0x4202003F                   # INVALID     $s0, $v0, 0x3F # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b8bc8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3F at 0x2B8BC8 raw=0x4202003F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8bcc:
    // 0x2b8bcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8bccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8bd0:
    // 0x2b8bd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8bd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8bd4:
    // 0x2b8bd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8bd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8bd8:
    // 0x2b8bd8: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b8bdc:
    if (ctx->pc == 0x2B8BDCu) {
        ctx->pc = 0x2B8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BD8u;
        // 0x2b8bdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8BE0u;
        goto label_2b8be0;
    }
    ctx->pc = 0x2B8BD8u;
    {
        const bool branch_taken_0x2b8bd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BD8u;
        // 0x2b8bdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8bd8) {
            ctx->pc = 0x2CCBE0u;
            return;
        }
    }
    ctx->pc = 0x2B8BE0u;
label_2b8be0:
    // 0x2b8be0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8be0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8be4:
    // 0x2b8be4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8be4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8be8:
    // 0x2b8be8: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b8bec:
    if (ctx->pc == 0x2B8BECu) {
        ctx->pc = 0x2B8BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BE8u;
        // 0x2b8bec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8BF0u;
        goto label_2b8bf0;
    }
    ctx->pc = 0x2B8BE8u;
    {
        const bool branch_taken_0x2b8be8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b8be8) {
            ctx->pc = 0x2B8BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8BE8u;
            // 0x2b8bec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BABD8u;
            { ctx->pc = 0x2babd8; return; }
        }
    }
    ctx->pc = 0x2B8BF0u;
label_2b8bf0:
    // 0x2b8bf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8bf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8bf4:
    // 0x2b8bf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8bf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8bf8:
    // 0x2b8bf8: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b8bfc:
    if (ctx->pc == 0x2B8BFCu) {
        ctx->pc = 0x2B8BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BF8u;
        // 0x2b8bfc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C00u;
        goto label_2b8c00;
    }
    ctx->pc = 0x2B8BF8u;
    {
        const bool branch_taken_0x2b8bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B8BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8BF8u;
        // 0x2b8bfc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8bf8) {
            ctx->pc = 0x2BEBFCu;
            { ctx->pc = 0x2bebfc; return; }
        }
    }
    ctx->pc = 0x2B8C00u;
label_2b8c00:
    // 0x2b8c00: 0x4202002f  .word       0x4202002F                   # INVALID     $s0, $v0, 0x2F # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b8c00u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2F at 0x2B8C00 raw=0x4202002F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8c04:
    // 0x2b8c04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8c04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8c08:
    // 0x2b8c08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8c08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8c0c:
    // 0x2b8c0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8c0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8c10:
    // 0x2b8c10: 0x500b002b  beql        $zero, $t3, . + 4 + (0x2B << 2)
label_2b8c14:
    if (ctx->pc == 0x2B8C14u) {
        ctx->pc = 0x2B8C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C10u;
        // 0x2b8c14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C18u;
        goto label_2b8c18;
    }
    ctx->pc = 0x2B8C10u;
    {
        const bool branch_taken_0x2b8c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b8c10) {
            ctx->pc = 0x2B8C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8C10u;
            // 0x2b8c14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8CC0u;
            goto label_2b8cc0;
        }
    }
    ctx->pc = 0x2B8C18u;
label_2b8c18:
    // 0x2b8c18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8c18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8c1c:
    // 0x2b8c1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8c1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8c20:
    // 0x2b8c20: 0x100d0100  beq         $zero, $t5, . + 4 + (0x100 << 2)
label_2b8c24:
    if (ctx->pc == 0x2B8C24u) {
        ctx->pc = 0x2B8C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C20u;
        // 0x2b8c24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C28u;
        goto label_2b8c28;
    }
    ctx->pc = 0x2B8C20u;
    {
        const bool branch_taken_0x2b8c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B8C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C20u;
        // 0x2b8c24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c20) {
            ctx->pc = 0x2B9024u;
            goto label_2b9024;
        }
    }
    ctx->pc = 0x2B8C28u;
label_2b8c28:
    // 0x2b8c28: 0x10060004  beq         $zero, $a2, . + 4 + (0x4 << 2)
label_2b8c2c:
    if (ctx->pc == 0x2B8C2Cu) {
        ctx->pc = 0x2B8C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C28u;
        // 0x2b8c2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C30u;
        goto label_2b8c30;
    }
    ctx->pc = 0x2B8C28u;
    {
        const bool branch_taken_0x2b8c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B8C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C28u;
        // 0x2b8c2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c28) {
            ctx->pc = 0x2B8C3Cu;
            goto label_2b8c3c;
        }
    }
    ctx->pc = 0x2B8C30u;
label_2b8c30:
    // 0x2b8c30: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2b8c34:
    if (ctx->pc == 0x2B8C34u) {
        ctx->pc = 0x2B8C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C30u;
        // 0x2b8c34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C38u;
        goto label_2b8c38;
    }
    ctx->pc = 0x2B8C30u;
    {
        const bool branch_taken_0x2b8c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B8C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C30u;
        // 0x2b8c34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c30) {
            ctx->pc = 0x2B8C38u;
            goto label_2b8c38;
        }
    }
    ctx->pc = 0x2B8C38u;
label_2b8c38:
    // 0x2b8c38: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b8c3c:
    if (ctx->pc == 0x2B8C3Cu) {
        ctx->pc = 0x2B8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C38u;
        // 0x2b8c3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C40u;
        goto label_2b8c40;
    }
    ctx->pc = 0x2B8C38u;
    {
        const bool branch_taken_0x2b8c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C38u;
        // 0x2b8c3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c38) {
            ctx->pc = 0x2BEC3Cu;
            { ctx->pc = 0x2bec3c; return; }
        }
    }
    ctx->pc = 0x2B8C40u;
label_2b8c40:
    // 0x2b8c40: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2b8c44:
    if (ctx->pc == 0x2B8C44u) {
        ctx->pc = 0x2B8C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C40u;
        // 0x2b8c44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C48u;
        goto label_2b8c48;
    }
    ctx->pc = 0x2B8C40u;
    {
        const bool branch_taken_0x2b8c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B8C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C40u;
        // 0x2b8c44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c40) {
            ctx->pc = 0x2BECC4u;
            { ctx->pc = 0x2becc4; return; }
        }
    }
    ctx->pc = 0x2B8C48u;
label_2b8c48:
    // 0x2b8c48: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b8c48u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b8c4c:
    // 0x2b8c4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8c4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8c50:
    // 0x2b8c50: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b8c54:
    if (ctx->pc == 0x2B8C54u) {
        ctx->pc = 0x2B8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C50u;
        // 0x2b8c54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C58u;
        goto label_2b8c58;
    }
    ctx->pc = 0x2B8C50u;
    {
        const bool branch_taken_0x2b8c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C50u;
        // 0x2b8c54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c50) {
            ctx->pc = 0x2B8C54u;
            goto label_2b8c54;
        }
    }
    ctx->pc = 0x2B8C58u;
label_2b8c58:
    // 0x2b8c58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8c58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8c5c:
    // 0x2b8c5c: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8c5cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2b8c60:
    // 0x2b8c60: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b8c60u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8c64:
    // 0x2b8c64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8c64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8c68:
    // 0x2b8c68: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b8c68u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8c6c:
    // 0x2b8c6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8c6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8c70:
    // 0x2b8c70: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b8c70u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8c74:
    // 0x2b8c74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8c74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8c78:
    // 0x2b8c78: 0x42020029  .word       0x42020029                   # INVALID     $s0, $v0, 0x29 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b8c78u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x29 at 0x2B8C78 raw=0x42020029"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8c7c:
    // 0x2b8c7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8c7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8c80:
    // 0x2b8c80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8c80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8c84:
    // 0x2b8c84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8c84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8c88:
    // 0x2b8c88: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b8c8c:
    if (ctx->pc == 0x2B8C8Cu) {
        ctx->pc = 0x2B8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C88u;
        // 0x2b8c8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8C90u;
        goto label_2b8c90;
    }
    ctx->pc = 0x2B8C88u;
    {
        const bool branch_taken_0x2b8c88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C88u;
        // 0x2b8c8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c88) {
            ctx->pc = 0x2CCC90u;
            return;
        }
    }
    ctx->pc = 0x2B8C90u;
label_2b8c90:
    // 0x2b8c90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8c90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8c94:
    // 0x2b8c94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8c94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8c98:
    // 0x2b8c98: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b8c9c:
    if (ctx->pc == 0x2B8C9Cu) {
        ctx->pc = 0x2B8C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8C98u;
        // 0x2b8c9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8CA0u;
        goto label_2b8ca0;
    }
    ctx->pc = 0x2B8C98u;
    {
        const bool branch_taken_0x2b8c98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b8c98) {
            ctx->pc = 0x2B8C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8C98u;
            // 0x2b8c9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAC88u;
            { ctx->pc = 0x2bac88; return; }
        }
    }
    ctx->pc = 0x2B8CA0u;
label_2b8ca0:
    // 0x2b8ca0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8ca0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8ca4:
    // 0x2b8ca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8ca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ca8:
    // 0x2b8ca8: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b8cac:
    if (ctx->pc == 0x2B8CACu) {
        ctx->pc = 0x2B8CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CA8u;
        // 0x2b8cac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8CB0u;
        goto label_2b8cb0;
    }
    ctx->pc = 0x2B8CA8u;
    {
        const bool branch_taken_0x2b8ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B8CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CA8u;
        // 0x2b8cac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ca8) {
            ctx->pc = 0x2BED2Cu;
            { ctx->pc = 0x2bed2c; return; }
        }
    }
    ctx->pc = 0x2B8CB0u;
label_2b8cb0:
    // 0x2b8cb0: 0x42020019  .word       0x42020019                   # INVALID     $s0, $v0, 0x19 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b8cb0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x19 at 0x2B8CB0 raw=0x42020019"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8cb4:
    // 0x2b8cb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8cb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8cb8:
    // 0x2b8cb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8cb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8cbc:
    // 0x2b8cbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8cbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8cc0:
    // 0x2b8cc0: 0x500b0015  beql        $zero, $t3, . + 4 + (0x15 << 2)
label_2b8cc4:
    if (ctx->pc == 0x2B8CC4u) {
        ctx->pc = 0x2B8CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CC0u;
        // 0x2b8cc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8CC8u;
        goto label_2b8cc8;
    }
    ctx->pc = 0x2B8CC0u;
    {
        const bool branch_taken_0x2b8cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b8cc0) {
            ctx->pc = 0x2B8CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8CC0u;
            // 0x2b8cc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8D18u;
            goto label_2b8d18;
        }
    }
    ctx->pc = 0x2B8CC8u;
label_2b8cc8:
    // 0x2b8cc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8cc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8ccc:
    // 0x2b8ccc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8cccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8cd0:
    // 0x2b8cd0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b8cd0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b8cd4:
    // 0x2b8cd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8cd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8cd8:
    // 0x2b8cd8: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b8cd8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b8cdc:
    // 0x2b8cdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8cdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ce0:
    // 0x2b8ce0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b8ce4:
    if (ctx->pc == 0x2B8CE4u) {
        ctx->pc = 0x2B8CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CE0u;
        // 0x2b8ce4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8CE8u;
        goto label_2b8ce8;
    }
    ctx->pc = 0x2B8CE0u;
    {
        const bool branch_taken_0x2b8ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B8CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CE0u;
        // 0x2b8ce4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ce0) {
            ctx->pc = 0x2B8CE4u;
            goto label_2b8ce4;
        }
    }
    ctx->pc = 0x2B8CE8u;
label_2b8ce8:
    // 0x2b8ce8: 0x10010066  beq         $zero, $at, . + 4 + (0x66 << 2)
label_2b8cec:
    if (ctx->pc == 0x2B8CECu) {
        ctx->pc = 0x2B8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CE8u;
        // 0x2b8cec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8CF0u;
        goto label_2b8cf0;
    }
    ctx->pc = 0x2B8CE8u;
    {
        const bool branch_taken_0x2b8ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CE8u;
        // 0x2b8cec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8ce8) {
            ctx->pc = 0x2B8E84u;
            goto label_2b8e84;
        }
    }
    ctx->pc = 0x2B8CF0u;
label_2b8cf0:
    // 0x2b8cf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8cf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8cf4:
    // 0x2b8cf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8cf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8cf8:
    // 0x2b8cf8: 0x5203080e  beql        $s0, $v1, . + 4 + (0x80E << 2)
label_2b8cfc:
    if (ctx->pc == 0x2B8CFCu) {
        ctx->pc = 0x2B8CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8CF8u;
        // 0x2b8cfc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D00u;
        goto label_2b8d00;
    }
    ctx->pc = 0x2B8CF8u;
    {
        const bool branch_taken_0x2b8cf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b8cf8) {
            ctx->pc = 0x2B8CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8CF8u;
            // 0x2b8cfc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAD34u;
            { ctx->pc = 0x2bad34; return; }
        }
    }
    ctx->pc = 0x2B8D00u;
label_2b8d00:
    // 0x2b8d00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8d00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8d04:
    // 0x2b8d04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d08:
    // 0x2b8d08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8d08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8d0c:
    // 0x2b8d0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d10:
    // 0x2b8d10: 0x10021840  beq         $zero, $v0, . + 4 + (0x1840 << 2)
label_2b8d14:
    if (ctx->pc == 0x2B8D14u) {
        ctx->pc = 0x2B8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D10u;
        // 0x2b8d14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D18u;
        goto label_2b8d18;
    }
    ctx->pc = 0x2B8D10u;
    {
        const bool branch_taken_0x2b8d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D10u;
        // 0x2b8d14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d10) {
            ctx->pc = 0x2BEE14u;
            { ctx->pc = 0x2bee14; return; }
        }
    }
    ctx->pc = 0x2B8D18u;
label_2b8d18:
    // 0x2b8d18: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b8d18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b8d1c:
    // 0x2b8d1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d20:
    // 0x2b8d20: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8d20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B8D20 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8d24:
    // 0x2b8d24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d28:
    // 0x2b8d28: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
label_2b8d2c:
    if (ctx->pc == 0x2B8D2Cu) {
        ctx->pc = 0x2B8D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D28u;
        // 0x2b8d2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D30u;
        goto label_2b8d30;
    }
    ctx->pc = 0x2B8D28u;
    {
        const bool branch_taken_0x2b8d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D28u;
        // 0x2b8d2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d28) {
            ctx->pc = 0x2BCD30u;
            { ctx->pc = 0x2bcd30; return; }
        }
    }
    ctx->pc = 0x2B8D30u;
label_2b8d30:
    // 0x2b8d30: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b8d34:
    if (ctx->pc == 0x2B8D34u) {
        ctx->pc = 0x2B8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D30u;
        // 0x2b8d34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D38u;
        goto label_2b8d38;
    }
    ctx->pc = 0x2B8D30u;
    {
        const bool branch_taken_0x2b8d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D30u;
        // 0x2b8d34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d30) {
            ctx->pc = 0x2BEDB4u;
            { ctx->pc = 0x2bedb4; return; }
        }
    }
    ctx->pc = 0x2B8D38u;
label_2b8d38:
    // 0x2b8d38: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2b8d3c:
    if (ctx->pc == 0x2B8D3Cu) {
        ctx->pc = 0x2B8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D38u;
        // 0x2b8d3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D40u;
        goto label_2b8d40;
    }
    ctx->pc = 0x2B8D38u;
    {
        const bool branch_taken_0x2b8d38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D38u;
        // 0x2b8d3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d38) {
            ctx->pc = 0x2CED38u;
            return;
        }
    }
    ctx->pc = 0x2B8D40u;
label_2b8d40:
    // 0x2b8d40: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b8d44:
    if (ctx->pc == 0x2B8D44u) {
        ctx->pc = 0x2B8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D40u;
        // 0x2b8d44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D48u;
        goto label_2b8d48;
    }
    ctx->pc = 0x2B8D40u;
    {
        const bool branch_taken_0x2b8d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D40u;
        // 0x2b8d44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d40) {
            ctx->pc = 0x2CED48u;
            return;
        }
    }
    ctx->pc = 0x2B8D48u;
label_2b8d48:
    // 0x2b8d48: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8d48u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2b8d4c:
    // 0x2b8d4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d50:
    // 0x2b8d50: 0xb0b1000  j           func_C2C4000
label_2b8d54:
    if (ctx->pc == 0x2B8D54u) {
        ctx->pc = 0x2B8D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D50u;
        // 0x2b8d54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8D58u;
        goto label_2b8d58;
    }
    ctx->pc = 0x2B8D50u;
    ctx->pc = 0x2B8D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8D50u;
    // 0x2b8d54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2B8D50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B8D58u;
label_2b8d58:
    // 0x2b8d58: 0x42010061  .word       0x42010061                   # INVALID     $s0, $at, 0x61 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b8d58u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x21 at 0x2B8D58 raw=0x42010061"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8d5c:
    // 0x2b8d5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d60:
    // 0x2b8d60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8d60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8d64:
    // 0x2b8d64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d68:
    // 0x2b8d68: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b8d68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b8d6c:
    // 0x2b8d6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d70:
    // 0x2b8d70: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b8d70u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B8D70 raw=0x48007800");
 /* MITIGATED */
label_2b8d74:
    // 0x2b8d74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d78:
    // 0x2b8d78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8d78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8d7c:
    // 0x2b8d7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d80:
    // 0x2b8d80: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8d80u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2b8d84:
    // 0x2b8d84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d88:
    // 0x2b8d88: 0x1f64001  .word       0x01F64001                   # INVALID     $t7, $s6, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8d88u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B8D88 raw=0x01F64001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8d8c:
    // 0x2b8d8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d90:
    // 0x2b8d90: 0x1f74002  .word       0x01F74002                   # srl         $t0, $s7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8d90u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 23), 0));
label_2b8d94:
    // 0x2b8d94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8d98:
    // 0x2b8d98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8d98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8d9c:
    // 0x2b8d9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8d9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8da0:
    // 0x2b8da0: 0x81e9ab7d  lb          $t1, -0x5483($t7)
    ctx->pc = 0x2b8da0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b8da4:
    // 0x2b8da4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8da4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8da8:
    // 0x2b8da8: 0x81e9b37d  lb          $t1, -0x4C83($t7)
    ctx->pc = 0x2b8da8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b8dac:
    // 0x2b8dac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8dacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8db0:
    // 0x2b8db0: 0x81e9bb7d  lb          $t1, -0x4483($t7)
    ctx->pc = 0x2b8db0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b8db4:
    // 0x2b8db4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8db4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8db8:
    // 0x2b8db8: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b8db8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B8DB8 raw=0x48001000");
 /* MITIGATED */
label_2b8dbc:
    // 0x2b8dbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8dbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8dc0:
    // 0x2b8dc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8dc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8dc4:
    // 0x2b8dc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8dc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8dc8:
    // 0x2b8dc8: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b8dc8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8dcc:
    // 0x2b8dcc: 0x1f5fc68  .word       0x01F5FC68                   # mfsa        $ra # 01F50440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b8dccu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2b8dd0:
    // 0x2b8dd0: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b8dd0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8dd4:
    // 0x2b8dd4: 0x1f6fca8  .word       0x01F6FCA8                   # mfsa        $ra # 01F60480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b8dd4u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2b8dd8:
    // 0x2b8dd8: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b8dd8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b8ddc:
    // 0x2b8ddc: 0x1f7fce8  .word       0x01F7FCE8                   # mfsa        $ra # 01F704C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b8ddcu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2b8de0:
    // 0x2b8de0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8de0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8de4:
    // 0x2b8de4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8de4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8de8:
    // 0x2b8de8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8de8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8dec:
    // 0x2b8dec: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8decu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2b8df0:
    // 0x2b8df0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8df0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8df4:
    // 0x2b8df4: 0x1d5a9ff  .word       0x01D5A9FF                   # dsra32      $s5, $s5, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8df4u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 7));
label_2b8df8:
    // 0x2b8df8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8df8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8dfc:
    // 0x2b8dfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8dfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e00:
    // 0x2b8e00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8e00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8e04:
    // 0x2b8e04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e08:
    // 0x2b8e08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8e08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8e0c:
    // 0x2b8e0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e10:
    // 0x2b8e10: 0x38010000  xori        $at, $zero, 0x0
    ctx->pc = 0x2b8e10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
label_2b8e14:
    // 0x2b8e14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e18:
    // 0x2b8e18: 0x800d0934  lb          $t5, 0x934($zero)
    ctx->pc = 0x2b8e18u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x934u));
label_2b8e1c:
    // 0x2b8e1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e20:
    // 0x2b8e20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8e20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8e24:
    // 0x2b8e24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e28:
    // 0x2b8e28: 0x5004000f  beql        $zero, $a0, . + 4 + (0xF << 2)
label_2b8e2c:
    if (ctx->pc == 0x2B8E2Cu) {
        ctx->pc = 0x2B8E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E28u;
        // 0x2b8e2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8E30u;
        goto label_2b8e30;
    }
    ctx->pc = 0x2B8E28u;
    {
        const bool branch_taken_0x2b8e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b8e28) {
            ctx->pc = 0x2B8E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8E28u;
            // 0x2b8e2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8E68u;
            goto label_2b8e68;
        }
    }
    ctx->pc = 0x2B8E30u;
label_2b8e30:
    // 0x2b8e30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8e30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8e34:
    // 0x2b8e34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e38:
    // 0x2b8e38: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2b8e38u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2b8e3c:
    // 0x2b8e3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e40:
    // 0x2b8e40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8e40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8e44:
    // 0x2b8e44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e48:
    // 0x2b8e48: 0x50040003  beql        $zero, $a0, . + 4 + (0x3 << 2)
label_2b8e4c:
    if (ctx->pc == 0x2B8E4Cu) {
        ctx->pc = 0x2B8E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E48u;
        // 0x2b8e4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8E50u;
        goto label_2b8e50;
    }
    ctx->pc = 0x2B8E48u;
    {
        const bool branch_taken_0x2b8e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b8e48) {
            ctx->pc = 0x2B8E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8E48u;
            // 0x2b8e4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8E58u;
            goto label_2b8e58;
        }
    }
    ctx->pc = 0x2B8E50u;
label_2b8e50:
    // 0x2b8e50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8e50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8e54:
    // 0x2b8e54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e58:
    // 0x2b8e58: 0x4000001c  .word       0x4000001C                   # mfc0        $zero, Index # 0000001C <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b8e58u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b8e5c:
    // 0x2b8e5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e60:
    // 0x2b8e60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8e60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8e64:
    // 0x2b8e64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e68:
    // 0x2b8e68: 0x4201001c  .word       0x4201001C                   # INVALID     $s0, $at, 0x1C # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b8e68u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1C at 0x2B8E68 raw=0x4201001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8e6c:
    // 0x2b8e6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e70:
    // 0x2b8e70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8e70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8e74:
    // 0x2b8e74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e78:
    // 0x2b8e78: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2b8e78u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2b8e7c:
    // 0x2b8e7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e80:
    // 0x2b8e80: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2b8e80u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2b8e84:
    // 0x2b8e84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e88:
    // 0x2b8e88: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2b8e88u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2b8e8c:
    // 0x2b8e8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8e90:
    // 0x2b8e90: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b8e94:
    if (ctx->pc == 0x2B8E94u) {
        ctx->pc = 0x2B8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E90u;
        // 0x2b8e94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8E98u;
        goto label_2b8e98;
    }
    ctx->pc = 0x2B8E90u;
    {
        const bool branch_taken_0x2b8e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8E90u;
        // 0x2b8e94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8e90) {
            ctx->pc = 0x2CEE98u;
            return;
        }
    }
    ctx->pc = 0x2B8E98u;
label_2b8e98:
    // 0x2b8e98: 0x40000014  .word       0x40000014                   # mfc0        $zero, Index # 00000014 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b8e98u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b8e9c:
    // 0x2b8e9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8e9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ea0:
    // 0x2b8ea0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8ea0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8ea4:
    // 0x2b8ea4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8ea4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ea8:
    // 0x2b8ea8: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2b8ea8u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2b8eac:
    // 0x2b8eac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8eacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8eb0:
    // 0x2b8eb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8eb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8eb4:
    // 0x2b8eb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8eb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8eb8:
    // 0x2b8eb8: 0x5004000c  beql        $zero, $a0, . + 4 + (0xC << 2)
label_2b8ebc:
    if (ctx->pc == 0x2B8EBCu) {
        ctx->pc = 0x2B8EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8EB8u;
        // 0x2b8ebc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8EC0u;
        goto label_2b8ec0;
    }
    ctx->pc = 0x2B8EB8u;
    {
        const bool branch_taken_0x2b8eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b8eb8) {
            ctx->pc = 0x2B8EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8EB8u;
            // 0x2b8ebc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8EECu;
            goto label_2b8eec;
        }
    }
    ctx->pc = 0x2B8EC0u;
label_2b8ec0:
    // 0x2b8ec0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8ec0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8ec4:
    // 0x2b8ec4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8ec4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ec8:
    // 0x2b8ec8: 0x42010010  .word       0x42010010                   # rfe # 00010000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b8ec8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x10 at 0x2B8EC8 raw=0x42010010"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8ecc:
    // 0x2b8ecc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8eccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ed0:
    // 0x2b8ed0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8ed0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8ed4:
    // 0x2b8ed4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8ed4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ed8:
    // 0x2b8ed8: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2b8ed8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2b8edc:
    // 0x2b8edc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8edcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ee0:
    // 0x2b8ee0: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2b8ee0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2b8ee4:
    // 0x2b8ee4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8ee4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ee8:
    // 0x2b8ee8: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2b8ee8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2b8eec:
    // 0x2b8eec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8eecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ef0:
    // 0x2b8ef0: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2b8ef0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2b8ef4:
    // 0x2b8ef4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8ef4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ef8:
    // 0x2b8ef8: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2b8ef8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2b8efc:
    // 0x2b8efc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8efcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8f00:
    // 0x2b8f00: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2b8f00u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2b8f04:
    // 0x2b8f04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8f04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8f08:
    // 0x2b8f08: 0x100b5802  beq         $zero, $t3, . + 4 + (0x5802 << 2)
label_2b8f0c:
    if (ctx->pc == 0x2B8F0Cu) {
        ctx->pc = 0x2B8F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F08u;
        // 0x2b8f0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F10u;
        goto label_2b8f10;
    }
    ctx->pc = 0x2B8F08u;
    {
        const bool branch_taken_0x2b8f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B8F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F08u;
        // 0x2b8f0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f08) {
            ctx->pc = 0x2CEF14u;
            return;
        }
    }
    ctx->pc = 0x2B8F10u;
label_2b8f10:
    // 0x2b8f10: 0x40000005  .word       0x40000005                   # mfc0        $zero, Index # 00000005 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b8f10u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b8f14:
    // 0x2b8f14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8f14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8f18:
    // 0x2b8f18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8f18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8f1c:
    // 0x2b8f1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8f1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8f20:
    // 0x2b8f20: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2b8f20u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2b8f24:
    // 0x2b8f24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8f24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8f28:
    // 0x2b8f28: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2b8f28u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2b8f2c:
    // 0x2b8f2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8f2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8f30:
    // 0x2b8f30: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2b8f30u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2b8f34:
    // 0x2b8f34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8f34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8f38:
    // 0x2b8f38: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b8f3c:
    if (ctx->pc == 0x2B8F3Cu) {
        ctx->pc = 0x2B8F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F38u;
        // 0x2b8f3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F40u;
        goto label_2b8f40;
    }
    ctx->pc = 0x2B8F38u;
    {
        const bool branch_taken_0x2b8f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B8F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F38u;
        // 0x2b8f3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f38) {
            ctx->pc = 0x2CEF40u;
            return;
        }
    }
    ctx->pc = 0x2B8F40u;
label_2b8f40:
    // 0x2b8f40: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b8f40u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B8F40 raw=0x48001000");
 /* MITIGATED */
label_2b8f44:
    // 0x2b8f44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8f44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8f48:
    // 0x2b8f48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8f48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8f4c:
    // 0x2b8f4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8f4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8f50:
    // 0x2b8f50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8f50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8f54:
    // 0x2b8f54: 0x3c8e58  .word       0x003C8E58                   # mult        $s1, $at, $gp # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b8f54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2b8f58:
    // 0x2b8f58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8f58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8f5c:
    // 0x2b8f5c: 0x3cae98  .word       0x003CAE98                   # mult        $s5, $at, $gp # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b8f5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_2b8f60:
    // 0x2b8f60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8f60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8f64:
    // 0x2b8f64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8f64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8f68:
    // 0x2b8f68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8f68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8f6c:
    // 0x2b8f6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8f6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8f70:
    // 0x2b8f70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8f70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8f74:
    // 0x2b8f74: 0x1f98e47  .word       0x01F98E47                   # srav        $s1, $t9, $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8f74u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 25), GPR_U32(ctx, 15) & 0x1F));
label_2b8f78:
    // 0x2b8f78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8f78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8f7c:
    // 0x2b8f7c: 0x1faae87  .word       0x01FAAE87                   # srav        $s5, $k0, $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8f7cu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 26), GPR_U32(ctx, 15) & 0x1F));
label_2b8f80:
    // 0x2b8f80: 0x80070330  lb          $a3, 0x330($zero)
    ctx->pc = 0x2b8f80u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x330u));
label_2b8f84:
    // 0x2b8f84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8f84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8f88:
    // 0x2b8f88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8f88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8f8c:
    // 0x2b8f8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8f8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8f90:
    // 0x2b8f90: 0x0  nop
    ctx->pc = 0x2b8f90u;
    // NOP
label_2b8f94:
    // 0x2b8f94: 0x4ab10650  vmaxx.yw    $vf25, $vf0, $vf17x
    ctx->pc = 0x2b8f94u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
label_2b8f98:
    // 0x2b8f98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8f98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8f9c:
    // 0x2b8f9c: 0x1f9c9fd  .word       0x01F9C9FD                   # INVALID     $t7, $t9, -0x3603 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8f9cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B8F9C raw=0x01F9C9FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8fa0:
    // 0x2b8fa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8fa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8fa4:
    // 0x2b8fa4: 0x1fad1fd  .word       0x01FAD1FD                   # INVALID     $t7, $k0, -0x2E03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8fa4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B8FA4 raw=0x01FAD1FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b8fa8:
    // 0x2b8fa8: 0x500c0004  beql        $zero, $t4, . + 4 + (0x4 << 2)
label_2b8fac:
    if (ctx->pc == 0x2B8FACu) {
        ctx->pc = 0x2B8FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FA8u;
        // 0x2b8fac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FB0u;
        goto label_2b8fb0;
    }
    ctx->pc = 0x2B8FA8u;
    {
        const bool branch_taken_0x2b8fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        if (branch_taken_0x2b8fa8) {
            ctx->pc = 0x2B8FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8FA8u;
            // 0x2b8fac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8FBCu;
            goto label_2b8fbc;
        }
    }
    ctx->pc = 0x2B8FB0u;
label_2b8fb0:
    // 0x2b8fb0: 0x120c6001  beq         $s0, $t4, . + 4 + (0x6001 << 2)
label_2b8fb4:
    if (ctx->pc == 0x2B8FB4u) {
        ctx->pc = 0x2B8FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FB0u;
        // 0x2b8fb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FB8u;
        goto label_2b8fb8;
    }
    ctx->pc = 0x2B8FB0u;
    {
        const bool branch_taken_0x2b8fb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        ctx->pc = 0x2B8FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FB0u;
        // 0x2b8fb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8fb0) {
            ctx->pc = 0x2D0FB8u;
            return;
        }
    }
    ctx->pc = 0x2B8FB8u;
label_2b8fb8:
    // 0x2b8fb8: 0x81f9cb3d  lb          $t9, -0x34C3($t7)
    ctx->pc = 0x2b8fb8u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953789)));
label_2b8fbc:
    // 0x2b8fbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8fbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8fc0:
    // 0x2b8fc0: 0x400007fc  .word       0x400007FC                   # mfc0        $zero, Index # 000007FC <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b8fc0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b8fc4:
    // 0x2b8fc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8fc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8fc8:
    // 0x2b8fc8: 0x81fad33d  lb          $k0, -0x2CC3($t7)
    ctx->pc = 0x2b8fc8u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955837)));
label_2b8fcc:
    // 0x2b8fcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8fccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8fd0:
    // 0x2b8fd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8fd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8fd4:
    // 0x2b8fd4: 0x1d9d6e8  .word       0x01D9D6E8                   # mfsa        $k0 # 01D906C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b8fd4u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2b8fd8:
    // 0x2b8fd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8fd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8fdc:
    // 0x2b8fdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8fdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8fe0:
    // 0x2b8fe0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8fe0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8fe4:
    // 0x2b8fe4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8fe4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8fe8:
    // 0x2b8fe8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b8fe8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b8fec:
    // 0x2b8fec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8fecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ff0:
    // 0x2b8ff0: 0x801bcbbc  lb          $k1, -0x3444($zero)
    ctx->pc = 0x2b8ff0u;
    SET_GPR_S32(ctx, 27, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFCBBCu));
label_2b8ff4:
    // 0x2b8ff4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8ff4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8ff8:
    // 0x2b8ff8: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x2b8ff8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_2b8ffc:
    // 0x2b8ffc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8ffcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9000:
    // 0x2b9000: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9000u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9004:
    // 0x2b9004: 0x1000760  .word       0x01000760                   # add         $zero, $t0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9004u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2b9008:
    // 0x2b9008: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9008u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b900c:
    // 0x2b900c: 0x1f1ae6c  .word       0x01F1AE6C                   # dadd        $s5, $t7, $s1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b900cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 17); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_2b9010:
    // 0x2b9010: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9010u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9014:
    // 0x2b9014: 0x1f2b6ac  .word       0x01F2B6AC                   # dadd        $s6, $t7, $s2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9014u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2b9018:
    // 0x2b9018: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9018u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b901c:
    // 0x2b901c: 0x1f3beec  .word       0x01F3BEEC                   # dadd        $s7, $t7, $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b901cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_2b9020:
    // 0x2b9020: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9020u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9024:
    // 0x2b9024: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9028:
    // 0x2b9028: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9028u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b902c:
    // 0x2b902c: 0x1fdce58  .word       0x01FDCE58                   # mult        $t9, $t7, $sp # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b902cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_2b9030:
    // 0x2b9030: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9030u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9034:
    // 0x2b9034: 0x1fdd698  .word       0x01FDD698                   # mult        $k0, $t7, $sp # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b9034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_2b9038:
    // 0x2b9038: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9038u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b903c:
    // 0x2b903c: 0x1fdded8  .word       0x01FDDED8                   # mult        $k1, $t7, $sp # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b903cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2b9040:
    // 0x2b9040: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9040u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9044:
    // 0x2b9044: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9044u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9048:
    // 0x2b9048: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9048u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b904c:
    // 0x2b904c: 0x1f1ce68  .word       0x01F1CE68                   # mfsa        $t9 # 01F10640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b904cu;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_2b9050:
    // 0x2b9050: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9050u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9054:
    // 0x2b9054: 0x1f2d6a8  .word       0x01F2D6A8                   # mfsa        $k0 # 01F20680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b9054u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2b9058:
    // 0x2b9058: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9058u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b905c:
    // 0x2b905c: 0x1f3dee8  .word       0x01F3DEE8                   # mfsa        $k1 # 01F306C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b905cu;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_2b9060:
    // 0x2b9060: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b9060u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B9060 raw=0x48000800");
 /* MITIGATED */
label_2b9064:
    // 0x2b9064: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9068:
    // 0x2b9068: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9068u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b906c:
    // 0x2b906c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b906cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9070:
    // 0x2b9070: 0x1f1000a  movz        $zero, $t7, $s1
    ctx->pc = 0x2b9070u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2b9074:
    // 0x2b9074: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9074u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9078:
    // 0x2b9078: 0x1f2000b  movn        $zero, $t7, $s2
    ctx->pc = 0x2b9078u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2b907c:
    // 0x2b907c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b907cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9080:
    // 0x2b9080: 0x1f3000c  .word       0x01F3000C                   # syscall     0 # 01F30000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9080u;
    ctx->pc = 0x2B9084u;
runtime->handleSyscall(rdram, ctx, 0x7CC00u);
label_2b9084:
    // 0x2b9084: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9084u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9088:
    // 0x2b9088: 0x1f4000d  break       500
    ctx->pc = 0x2b9088u;
    runtime->handleBreak(rdram, ctx);
label_2b908c:
    // 0x2b908c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b908cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9090:
    // 0x2b9090: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9090u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9094:
    // 0x2b9094: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9094u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9098:
    // 0x2b9098: 0x10071001  beq         $zero, $a3, . + 4 + (0x1001 << 2)
label_2b909c:
    if (ctx->pc == 0x2B909Cu) {
        ctx->pc = 0x2B909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9098u;
        // 0x2b909c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B90A0u;
        goto label_2b90a0;
    }
    ctx->pc = 0x2B9098u;
    {
        const bool branch_taken_0x2b9098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9098u;
        // 0x2b909c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9098) {
            ctx->pc = 0x2BD0A0u;
            { ctx->pc = 0x2bd0a0; return; }
        }
    }
    ctx->pc = 0x2B90A0u;
label_2b90a0:
    // 0x2b90a0: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b90a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2b90a4:
    // 0x2b90a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b90a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b90a8:
    // 0x2b90a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b90a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b90ac:
    // 0x2b90ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b90acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b90b0:
    // 0x2b90b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b90b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b90b4:
    // 0x2b90b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b90b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b90b8:
    // 0x2b90b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b90b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b90bc:
    // 0x2b90bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b90bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b90c0:
    // 0x2b90c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b90c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b90c4:
    // 0x2b90c4: 0x1f589bc  .word       0x01F589BC                   # dsll32      $s1, $s5, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b90c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 6));
label_2b90c8:
    // 0x2b90c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b90c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b90cc:
    // 0x2b90cc: 0x1f590bd  .word       0x01F590BD                   # INVALID     $t7, $s5, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b90ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B90CC raw=0x01F590BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b90d0:
    // 0x2b90d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b90d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b90d4:
    // 0x2b90d4: 0x1f598be  .word       0x01F598BE                   # dsrl32      $s3, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b90d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) >> (32 + 2));
label_2b90d8:
    // 0x2b90d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b90d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b90dc:
    // 0x2b90dc: 0x1f5a64b  .word       0x01F5A64B                   # movn        $s4, $t7, $s5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b90dcu;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 15));
label_2b90e0:
    // 0x2b90e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b90e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b90e4:
    // 0x2b90e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b90e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b90e8:
    // 0x2b90e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b90e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b90ec:
    // 0x2b90ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b90ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b90f0:
    // 0x2b90f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b90f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b90f4:
    // 0x2b90f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b90f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b90f8:
    // 0x2b90f8: 0x81f903bc  lb          $t9, 0x3BC($t7)
    ctx->pc = 0x2b90f8u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b90fc:
    // 0x2b90fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b90fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9100:
    // 0x2b9100: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9100u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9104:
    // 0x2b9104: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9104u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9108:
    // 0x2b9108: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9108u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b910c:
    // 0x2b910c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b910cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9110:
    // 0x2b9110: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9110u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9114:
    // 0x2b9114: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9114u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9118:
    // 0x2b9118: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9118u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b911c:
    // 0x2b911c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b911cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9120:
    // 0x2b9120: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9120u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9124:
    // 0x2b9124: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9124u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9128:
    // 0x2b9128: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9128u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b912c:
    // 0x2b912c: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b912cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2b9130:
    // 0x2b9130: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9130u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9134:
    // 0x2b9134: 0x20f6a1  .word       0x0020F6A1                   # addu        $fp, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9134u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2b9138:
    // 0x2b9138: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9138u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b913c:
    // 0x2b913c: 0x1e0ce1c  .word       0x01E0CE1C                   # dmult       $t7, $zero # 0000CE00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b913cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B913C raw=0x01E0CE1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9140:
    // 0x2b9140: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9140u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9144:
    // 0x2b9144: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9144u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9148:
    // 0x2b9148: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9148u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b914c:
    // 0x2b914c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b914cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9150:
    // 0x2b9150: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9150u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9154:
    // 0x2b9154: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9154u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9158:
    // 0x2b9158: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9158u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b915c:
    // 0x2b915c: 0x20d69f  .word       0x0020D69F                   # ddivu       $k0, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b915cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B915C raw=0x0020D69F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9160:
    // 0x2b9160: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9160u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9164:
    // 0x2b9164: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9164u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9168:
    // 0x2b9168: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9168u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b916c:
    // 0x2b916c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b916cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9170:
    // 0x2b9170: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9170u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9174:
    // 0x2b9174: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9174u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9178:
    // 0x2b9178: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9178u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b917c:
    // 0x2b917c: 0x20d610  .word       0x0020D610                   # mfhi        $k0 # 00200600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b917cu;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2b9180:
    // 0x2b9180: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9180u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9184:
    // 0x2b9184: 0x1fac17d  .word       0x01FAC17D                   # INVALID     $t7, $k0, -0x3E83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9184u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B9184 raw=0x01FAC17D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b9188:
    // 0x2b9188: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9188u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b918c:
    // 0x2b918c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b918cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9190:
    // 0x2b9190: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9190u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9194:
    // 0x2b9194: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9194u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9198:
    // 0x2b9198: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9198u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b919c:
    // 0x2b919c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b919cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b91a0:
    // 0x2b91a0: 0x3e7d002  .word       0x03E7D002                   # srl         $k0, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b91a0u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2b91a4:
    // 0x2b91a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b91a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b91a8:
    // 0x2b91a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b91a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b91ac:
    // 0x2b91ac: 0x400583  .word       0x00400583                   # sra         $zero, $zero, 22 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b91acu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 22));
label_2b91b0:
    // 0x2b91b0: 0x1964002  .word       0x01964002                   # srl         $t0, $s6, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b91b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 22), 0));
label_2b91b4:
    // 0x2b91b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b91b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b91b8:
    // 0x2b91b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b91b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b91bc:
    // 0x2b91bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b91bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b91c0:
    // 0x2b91c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b91c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b91c4:
    // 0x2b91c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b91c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b91c8:
    // 0x2b91c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b91c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b91cc:
    // 0x2b91cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b91ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b91d0:
    // 0x2b91d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b91d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b91d4:
    // 0x2b91d4: 0x1c0b71c  .word       0x01C0B71C                   # dmult       $t6, $zero # 0000B700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b91d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B91D4 raw=0x01C0B71C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b91d8:
    // 0x2b91d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b91d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b91dc:
    // 0x2b91dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b91dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b91e0:
    // 0x2b91e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b91e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b91e4:
    // 0x2b91e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b91e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b91e8:
    // 0x2b91e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b91e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b91ec:
    // 0x2b91ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b91ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b91f0:
    // 0x2b91f0: 0x3e7e000  .word       0x03E7E000                   # sll         $gp, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b91f0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2b91f4:
    // 0x2b91f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b91f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b91f8:
    // 0x2b91f8: 0x1fb4001  .word       0x01FB4001                   # INVALID     $t7, $k1, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b91f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B91F8 raw=0x01FB4001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b91fc:
    // 0x2b91fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b91fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9200:
    // 0x2b9200: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9200u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9204:
    // 0x2b9204: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9204u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9208:
    // 0x2b9208: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9208u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b920c:
    // 0x2b920c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b920cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9210:
    // 0x2b9210: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9210u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9214:
    // 0x2b9214: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9214u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9218:
    // 0x2b9218: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9218u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b921c:
    // 0x2b921c: 0x1fdd97c  .word       0x01FDD97C                   # dsll32      $k1, $sp, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b921cu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 29) << (32 + 5));
label_2b9220:
    // 0x2b9220: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9220u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9224:
    // 0x2b9224: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9224u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9228:
    // 0x2b9228: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9228u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b922c:
    // 0x2b922c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b922cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9230:
    // 0x2b9230: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b9230u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b9234:
    // 0x2b9234: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b9234u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b9238:
    // 0x2b9238: 0x3e7e801  .word       0x03E7E801                   # INVALID     $ra, $a3, -0x17FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b9238u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B9238 raw=0x03E7E801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b923c:
    // 0x2b923c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b923cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2b9240u;
    return;
}
