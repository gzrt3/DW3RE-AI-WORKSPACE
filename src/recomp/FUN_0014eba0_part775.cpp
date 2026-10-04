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


void FUN_0014eba0_part775(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2c8a80u: goto label_2c8a80;
        case 0x2c8a84u: goto label_2c8a84;
        case 0x2c8a88u: goto label_2c8a88;
        case 0x2c8a8cu: goto label_2c8a8c;
        case 0x2c8a90u: goto label_2c8a90;
        case 0x2c8a94u: goto label_2c8a94;
        case 0x2c8a98u: goto label_2c8a98;
        case 0x2c8a9cu: goto label_2c8a9c;
        case 0x2c8aa0u: goto label_2c8aa0;
        case 0x2c8aa4u: goto label_2c8aa4;
        case 0x2c8aa8u: goto label_2c8aa8;
        case 0x2c8aacu: goto label_2c8aac;
        case 0x2c8ab0u: goto label_2c8ab0;
        case 0x2c8ab4u: goto label_2c8ab4;
        case 0x2c8ab8u: goto label_2c8ab8;
        case 0x2c8abcu: goto label_2c8abc;
        case 0x2c8ac0u: goto label_2c8ac0;
        case 0x2c8ac4u: goto label_2c8ac4;
        case 0x2c8ac8u: goto label_2c8ac8;
        case 0x2c8accu: goto label_2c8acc;
        case 0x2c8ad0u: goto label_2c8ad0;
        case 0x2c8ad4u: goto label_2c8ad4;
        case 0x2c8ad8u: goto label_2c8ad8;
        case 0x2c8adcu: goto label_2c8adc;
        case 0x2c8ae0u: goto label_2c8ae0;
        case 0x2c8ae4u: goto label_2c8ae4;
        case 0x2c8ae8u: goto label_2c8ae8;
        case 0x2c8aecu: goto label_2c8aec;
        case 0x2c8af0u: goto label_2c8af0;
        case 0x2c8af4u: goto label_2c8af4;
        case 0x2c8af8u: goto label_2c8af8;
        case 0x2c8afcu: goto label_2c8afc;
        case 0x2c8b00u: goto label_2c8b00;
        case 0x2c8b04u: goto label_2c8b04;
        case 0x2c8b08u: goto label_2c8b08;
        case 0x2c8b0cu: goto label_2c8b0c;
        case 0x2c8b10u: goto label_2c8b10;
        case 0x2c8b14u: goto label_2c8b14;
        case 0x2c8b18u: goto label_2c8b18;
        case 0x2c8b1cu: goto label_2c8b1c;
        case 0x2c8b20u: goto label_2c8b20;
        case 0x2c8b24u: goto label_2c8b24;
        case 0x2c8b28u: goto label_2c8b28;
        case 0x2c8b2cu: goto label_2c8b2c;
        case 0x2c8b30u: goto label_2c8b30;
        case 0x2c8b34u: goto label_2c8b34;
        case 0x2c8b38u: goto label_2c8b38;
        case 0x2c8b3cu: goto label_2c8b3c;
        case 0x2c8b40u: goto label_2c8b40;
        case 0x2c8b44u: goto label_2c8b44;
        case 0x2c8b48u: goto label_2c8b48;
        case 0x2c8b4cu: goto label_2c8b4c;
        case 0x2c8b50u: goto label_2c8b50;
        case 0x2c8b54u: goto label_2c8b54;
        case 0x2c8b58u: goto label_2c8b58;
        case 0x2c8b5cu: goto label_2c8b5c;
        case 0x2c8b60u: goto label_2c8b60;
        case 0x2c8b64u: goto label_2c8b64;
        case 0x2c8b68u: goto label_2c8b68;
        case 0x2c8b6cu: goto label_2c8b6c;
        case 0x2c8b70u: goto label_2c8b70;
        case 0x2c8b74u: goto label_2c8b74;
        case 0x2c8b78u: goto label_2c8b78;
        case 0x2c8b7cu: goto label_2c8b7c;
        case 0x2c8b80u: goto label_2c8b80;
        case 0x2c8b84u: goto label_2c8b84;
        case 0x2c8b88u: goto label_2c8b88;
        case 0x2c8b8cu: goto label_2c8b8c;
        case 0x2c8b90u: goto label_2c8b90;
        case 0x2c8b94u: goto label_2c8b94;
        case 0x2c8b98u: goto label_2c8b98;
        case 0x2c8b9cu: goto label_2c8b9c;
        case 0x2c8ba0u: goto label_2c8ba0;
        case 0x2c8ba4u: goto label_2c8ba4;
        case 0x2c8ba8u: goto label_2c8ba8;
        case 0x2c8bacu: goto label_2c8bac;
        case 0x2c8bb0u: goto label_2c8bb0;
        case 0x2c8bb4u: goto label_2c8bb4;
        case 0x2c8bb8u: goto label_2c8bb8;
        case 0x2c8bbcu: goto label_2c8bbc;
        case 0x2c8bc0u: goto label_2c8bc0;
        case 0x2c8bc4u: goto label_2c8bc4;
        case 0x2c8bc8u: goto label_2c8bc8;
        case 0x2c8bccu: goto label_2c8bcc;
        case 0x2c8bd0u: goto label_2c8bd0;
        case 0x2c8bd4u: goto label_2c8bd4;
        case 0x2c8bd8u: goto label_2c8bd8;
        case 0x2c8bdcu: goto label_2c8bdc;
        case 0x2c8be0u: goto label_2c8be0;
        case 0x2c8be4u: goto label_2c8be4;
        case 0x2c8be8u: goto label_2c8be8;
        case 0x2c8becu: goto label_2c8bec;
        case 0x2c8bf0u: goto label_2c8bf0;
        case 0x2c8bf4u: goto label_2c8bf4;
        case 0x2c8bf8u: goto label_2c8bf8;
        case 0x2c8bfcu: goto label_2c8bfc;
        case 0x2c8c00u: goto label_2c8c00;
        case 0x2c8c04u: goto label_2c8c04;
        case 0x2c8c08u: goto label_2c8c08;
        case 0x2c8c0cu: goto label_2c8c0c;
        case 0x2c8c10u: goto label_2c8c10;
        case 0x2c8c14u: goto label_2c8c14;
        case 0x2c8c18u: goto label_2c8c18;
        case 0x2c8c1cu: goto label_2c8c1c;
        case 0x2c8c20u: goto label_2c8c20;
        case 0x2c8c24u: goto label_2c8c24;
        case 0x2c8c28u: goto label_2c8c28;
        case 0x2c8c2cu: goto label_2c8c2c;
        case 0x2c8c30u: goto label_2c8c30;
        case 0x2c8c34u: goto label_2c8c34;
        case 0x2c8c38u: goto label_2c8c38;
        case 0x2c8c3cu: goto label_2c8c3c;
        case 0x2c8c40u: goto label_2c8c40;
        case 0x2c8c44u: goto label_2c8c44;
        case 0x2c8c48u: goto label_2c8c48;
        case 0x2c8c4cu: goto label_2c8c4c;
        case 0x2c8c50u: goto label_2c8c50;
        case 0x2c8c54u: goto label_2c8c54;
        case 0x2c8c58u: goto label_2c8c58;
        case 0x2c8c5cu: goto label_2c8c5c;
        case 0x2c8c60u: goto label_2c8c60;
        case 0x2c8c64u: goto label_2c8c64;
        case 0x2c8c68u: goto label_2c8c68;
        case 0x2c8c6cu: goto label_2c8c6c;
        case 0x2c8c70u: goto label_2c8c70;
        case 0x2c8c74u: goto label_2c8c74;
        case 0x2c8c78u: goto label_2c8c78;
        case 0x2c8c7cu: goto label_2c8c7c;
        case 0x2c8c80u: goto label_2c8c80;
        case 0x2c8c84u: goto label_2c8c84;
        case 0x2c8c88u: goto label_2c8c88;
        case 0x2c8c8cu: goto label_2c8c8c;
        case 0x2c8c90u: goto label_2c8c90;
        case 0x2c8c94u: goto label_2c8c94;
        case 0x2c8c98u: goto label_2c8c98;
        case 0x2c8c9cu: goto label_2c8c9c;
        case 0x2c8ca0u: goto label_2c8ca0;
        case 0x2c8ca4u: goto label_2c8ca4;
        case 0x2c8ca8u: goto label_2c8ca8;
        case 0x2c8cacu: goto label_2c8cac;
        case 0x2c8cb0u: goto label_2c8cb0;
        case 0x2c8cb4u: goto label_2c8cb4;
        case 0x2c8cb8u: goto label_2c8cb8;
        case 0x2c8cbcu: goto label_2c8cbc;
        case 0x2c8cc0u: goto label_2c8cc0;
        case 0x2c8cc4u: goto label_2c8cc4;
        case 0x2c8cc8u: goto label_2c8cc8;
        case 0x2c8cccu: goto label_2c8ccc;
        case 0x2c8cd0u: goto label_2c8cd0;
        case 0x2c8cd4u: goto label_2c8cd4;
        case 0x2c8cd8u: goto label_2c8cd8;
        case 0x2c8cdcu: goto label_2c8cdc;
        case 0x2c8ce0u: goto label_2c8ce0;
        case 0x2c8ce4u: goto label_2c8ce4;
        case 0x2c8ce8u: goto label_2c8ce8;
        case 0x2c8cecu: goto label_2c8cec;
        case 0x2c8cf0u: goto label_2c8cf0;
        case 0x2c8cf4u: goto label_2c8cf4;
        case 0x2c8cf8u: goto label_2c8cf8;
        case 0x2c8cfcu: goto label_2c8cfc;
        case 0x2c8d00u: goto label_2c8d00;
        case 0x2c8d04u: goto label_2c8d04;
        case 0x2c8d08u: goto label_2c8d08;
        case 0x2c8d0cu: goto label_2c8d0c;
        case 0x2c8d10u: goto label_2c8d10;
        case 0x2c8d14u: goto label_2c8d14;
        case 0x2c8d18u: goto label_2c8d18;
        case 0x2c8d1cu: goto label_2c8d1c;
        case 0x2c8d20u: goto label_2c8d20;
        case 0x2c8d24u: goto label_2c8d24;
        case 0x2c8d28u: goto label_2c8d28;
        case 0x2c8d2cu: goto label_2c8d2c;
        case 0x2c8d30u: goto label_2c8d30;
        case 0x2c8d34u: goto label_2c8d34;
        case 0x2c8d38u: goto label_2c8d38;
        case 0x2c8d3cu: goto label_2c8d3c;
        case 0x2c8d40u: goto label_2c8d40;
        case 0x2c8d44u: goto label_2c8d44;
        case 0x2c8d48u: goto label_2c8d48;
        case 0x2c8d4cu: goto label_2c8d4c;
        case 0x2c8d50u: goto label_2c8d50;
        case 0x2c8d54u: goto label_2c8d54;
        case 0x2c8d58u: goto label_2c8d58;
        case 0x2c8d5cu: goto label_2c8d5c;
        case 0x2c8d60u: goto label_2c8d60;
        case 0x2c8d64u: goto label_2c8d64;
        case 0x2c8d68u: goto label_2c8d68;
        case 0x2c8d6cu: goto label_2c8d6c;
        case 0x2c8d70u: goto label_2c8d70;
        case 0x2c8d74u: goto label_2c8d74;
        case 0x2c8d78u: goto label_2c8d78;
        case 0x2c8d7cu: goto label_2c8d7c;
        case 0x2c8d80u: goto label_2c8d80;
        case 0x2c8d84u: goto label_2c8d84;
        case 0x2c8d88u: goto label_2c8d88;
        case 0x2c8d8cu: goto label_2c8d8c;
        case 0x2c8d90u: goto label_2c8d90;
        case 0x2c8d94u: goto label_2c8d94;
        case 0x2c8d98u: goto label_2c8d98;
        case 0x2c8d9cu: goto label_2c8d9c;
        case 0x2c8da0u: goto label_2c8da0;
        case 0x2c8da4u: goto label_2c8da4;
        case 0x2c8da8u: goto label_2c8da8;
        case 0x2c8dacu: goto label_2c8dac;
        case 0x2c8db0u: goto label_2c8db0;
        case 0x2c8db4u: goto label_2c8db4;
        case 0x2c8db8u: goto label_2c8db8;
        case 0x2c8dbcu: goto label_2c8dbc;
        case 0x2c8dc0u: goto label_2c8dc0;
        case 0x2c8dc4u: goto label_2c8dc4;
        case 0x2c8dc8u: goto label_2c8dc8;
        case 0x2c8dccu: goto label_2c8dcc;
        case 0x2c8dd0u: goto label_2c8dd0;
        case 0x2c8dd4u: goto label_2c8dd4;
        case 0x2c8dd8u: goto label_2c8dd8;
        case 0x2c8ddcu: goto label_2c8ddc;
        case 0x2c8de0u: goto label_2c8de0;
        case 0x2c8de4u: goto label_2c8de4;
        case 0x2c8de8u: goto label_2c8de8;
        case 0x2c8decu: goto label_2c8dec;
        case 0x2c8df0u: goto label_2c8df0;
        case 0x2c8df4u: goto label_2c8df4;
        case 0x2c8df8u: goto label_2c8df8;
        case 0x2c8dfcu: goto label_2c8dfc;
        case 0x2c8e00u: goto label_2c8e00;
        case 0x2c8e04u: goto label_2c8e04;
        case 0x2c8e08u: goto label_2c8e08;
        case 0x2c8e0cu: goto label_2c8e0c;
        case 0x2c8e10u: goto label_2c8e10;
        case 0x2c8e14u: goto label_2c8e14;
        case 0x2c8e18u: goto label_2c8e18;
        case 0x2c8e1cu: goto label_2c8e1c;
        case 0x2c8e20u: goto label_2c8e20;
        case 0x2c8e24u: goto label_2c8e24;
        case 0x2c8e28u: goto label_2c8e28;
        case 0x2c8e2cu: goto label_2c8e2c;
        case 0x2c8e30u: goto label_2c8e30;
        case 0x2c8e34u: goto label_2c8e34;
        case 0x2c8e38u: goto label_2c8e38;
        case 0x2c8e3cu: goto label_2c8e3c;
        case 0x2c8e40u: goto label_2c8e40;
        case 0x2c8e44u: goto label_2c8e44;
        case 0x2c8e48u: goto label_2c8e48;
        case 0x2c8e4cu: goto label_2c8e4c;
        case 0x2c8e50u: goto label_2c8e50;
        case 0x2c8e54u: goto label_2c8e54;
        case 0x2c8e58u: goto label_2c8e58;
        case 0x2c8e5cu: goto label_2c8e5c;
        case 0x2c8e60u: goto label_2c8e60;
        case 0x2c8e64u: goto label_2c8e64;
        case 0x2c8e68u: goto label_2c8e68;
        case 0x2c8e6cu: goto label_2c8e6c;
        case 0x2c8e70u: goto label_2c8e70;
        case 0x2c8e74u: goto label_2c8e74;
        case 0x2c8e78u: goto label_2c8e78;
        case 0x2c8e7cu: goto label_2c8e7c;
        case 0x2c8e80u: goto label_2c8e80;
        case 0x2c8e84u: goto label_2c8e84;
        case 0x2c8e88u: goto label_2c8e88;
        case 0x2c8e8cu: goto label_2c8e8c;
        case 0x2c8e90u: goto label_2c8e90;
        case 0x2c8e94u: goto label_2c8e94;
        case 0x2c8e98u: goto label_2c8e98;
        case 0x2c8e9cu: goto label_2c8e9c;
        case 0x2c8ea0u: goto label_2c8ea0;
        case 0x2c8ea4u: goto label_2c8ea4;
        case 0x2c8ea8u: goto label_2c8ea8;
        case 0x2c8eacu: goto label_2c8eac;
        case 0x2c8eb0u: goto label_2c8eb0;
        case 0x2c8eb4u: goto label_2c8eb4;
        case 0x2c8eb8u: goto label_2c8eb8;
        case 0x2c8ebcu: goto label_2c8ebc;
        case 0x2c8ec0u: goto label_2c8ec0;
        case 0x2c8ec4u: goto label_2c8ec4;
        case 0x2c8ec8u: goto label_2c8ec8;
        case 0x2c8eccu: goto label_2c8ecc;
        case 0x2c8ed0u: goto label_2c8ed0;
        case 0x2c8ed4u: goto label_2c8ed4;
        case 0x2c8ed8u: goto label_2c8ed8;
        case 0x2c8edcu: goto label_2c8edc;
        case 0x2c8ee0u: goto label_2c8ee0;
        case 0x2c8ee4u: goto label_2c8ee4;
        case 0x2c8ee8u: goto label_2c8ee8;
        case 0x2c8eecu: goto label_2c8eec;
        case 0x2c8ef0u: goto label_2c8ef0;
        case 0x2c8ef4u: goto label_2c8ef4;
        case 0x2c8ef8u: goto label_2c8ef8;
        case 0x2c8efcu: goto label_2c8efc;
        case 0x2c8f00u: goto label_2c8f00;
        case 0x2c8f04u: goto label_2c8f04;
        case 0x2c8f08u: goto label_2c8f08;
        case 0x2c8f0cu: goto label_2c8f0c;
        case 0x2c8f10u: goto label_2c8f10;
        case 0x2c8f14u: goto label_2c8f14;
        case 0x2c8f18u: goto label_2c8f18;
        case 0x2c8f1cu: goto label_2c8f1c;
        case 0x2c8f20u: goto label_2c8f20;
        case 0x2c8f24u: goto label_2c8f24;
        case 0x2c8f28u: goto label_2c8f28;
        case 0x2c8f2cu: goto label_2c8f2c;
        case 0x2c8f30u: goto label_2c8f30;
        case 0x2c8f34u: goto label_2c8f34;
        case 0x2c8f38u: goto label_2c8f38;
        case 0x2c8f3cu: goto label_2c8f3c;
        case 0x2c8f40u: goto label_2c8f40;
        case 0x2c8f44u: goto label_2c8f44;
        case 0x2c8f48u: goto label_2c8f48;
        case 0x2c8f4cu: goto label_2c8f4c;
        case 0x2c8f50u: goto label_2c8f50;
        case 0x2c8f54u: goto label_2c8f54;
        case 0x2c8f58u: goto label_2c8f58;
        case 0x2c8f5cu: goto label_2c8f5c;
        case 0x2c8f60u: goto label_2c8f60;
        case 0x2c8f64u: goto label_2c8f64;
        case 0x2c8f68u: goto label_2c8f68;
        case 0x2c8f6cu: goto label_2c8f6c;
        case 0x2c8f70u: goto label_2c8f70;
        case 0x2c8f74u: goto label_2c8f74;
        case 0x2c8f78u: goto label_2c8f78;
        case 0x2c8f7cu: goto label_2c8f7c;
        case 0x2c8f80u: goto label_2c8f80;
        case 0x2c8f84u: goto label_2c8f84;
        case 0x2c8f88u: goto label_2c8f88;
        case 0x2c8f8cu: goto label_2c8f8c;
        case 0x2c8f90u: goto label_2c8f90;
        case 0x2c8f94u: goto label_2c8f94;
        case 0x2c8f98u: goto label_2c8f98;
        case 0x2c8f9cu: goto label_2c8f9c;
        case 0x2c8fa0u: goto label_2c8fa0;
        case 0x2c8fa4u: goto label_2c8fa4;
        case 0x2c8fa8u: goto label_2c8fa8;
        case 0x2c8facu: goto label_2c8fac;
        case 0x2c8fb0u: goto label_2c8fb0;
        case 0x2c8fb4u: goto label_2c8fb4;
        case 0x2c8fb8u: goto label_2c8fb8;
        case 0x2c8fbcu: goto label_2c8fbc;
        case 0x2c8fc0u: goto label_2c8fc0;
        case 0x2c8fc4u: goto label_2c8fc4;
        case 0x2c8fc8u: goto label_2c8fc8;
        case 0x2c8fccu: goto label_2c8fcc;
        case 0x2c8fd0u: goto label_2c8fd0;
        case 0x2c8fd4u: goto label_2c8fd4;
        case 0x2c8fd8u: goto label_2c8fd8;
        case 0x2c8fdcu: goto label_2c8fdc;
        case 0x2c8fe0u: goto label_2c8fe0;
        case 0x2c8fe4u: goto label_2c8fe4;
        case 0x2c8fe8u: goto label_2c8fe8;
        case 0x2c8fecu: goto label_2c8fec;
        case 0x2c8ff0u: goto label_2c8ff0;
        case 0x2c8ff4u: goto label_2c8ff4;
        case 0x2c8ff8u: goto label_2c8ff8;
        case 0x2c8ffcu: goto label_2c8ffc;
        case 0x2c9000u: goto label_2c9000;
        case 0x2c9004u: goto label_2c9004;
        case 0x2c9008u: goto label_2c9008;
        case 0x2c900cu: goto label_2c900c;
        case 0x2c9010u: goto label_2c9010;
        case 0x2c9014u: goto label_2c9014;
        case 0x2c9018u: goto label_2c9018;
        case 0x2c901cu: goto label_2c901c;
        case 0x2c9020u: goto label_2c9020;
        case 0x2c9024u: goto label_2c9024;
        case 0x2c9028u: goto label_2c9028;
        case 0x2c902cu: goto label_2c902c;
        case 0x2c9030u: goto label_2c9030;
        case 0x2c9034u: goto label_2c9034;
        case 0x2c9038u: goto label_2c9038;
        case 0x2c903cu: goto label_2c903c;
        case 0x2c9040u: goto label_2c9040;
        case 0x2c9044u: goto label_2c9044;
        case 0x2c9048u: goto label_2c9048;
        case 0x2c904cu: goto label_2c904c;
        case 0x2c9050u: goto label_2c9050;
        case 0x2c9054u: goto label_2c9054;
        case 0x2c9058u: goto label_2c9058;
        case 0x2c905cu: goto label_2c905c;
        case 0x2c9060u: goto label_2c9060;
        case 0x2c9064u: goto label_2c9064;
        case 0x2c9068u: goto label_2c9068;
        case 0x2c906cu: goto label_2c906c;
        case 0x2c9070u: goto label_2c9070;
        case 0x2c9074u: goto label_2c9074;
        case 0x2c9078u: goto label_2c9078;
        case 0x2c907cu: goto label_2c907c;
        case 0x2c9080u: goto label_2c9080;
        case 0x2c9084u: goto label_2c9084;
        case 0x2c9088u: goto label_2c9088;
        case 0x2c908cu: goto label_2c908c;
        case 0x2c9090u: goto label_2c9090;
        case 0x2c9094u: goto label_2c9094;
        case 0x2c9098u: goto label_2c9098;
        case 0x2c909cu: goto label_2c909c;
        case 0x2c90a0u: goto label_2c90a0;
        case 0x2c90a4u: goto label_2c90a4;
        case 0x2c90a8u: goto label_2c90a8;
        case 0x2c90acu: goto label_2c90ac;
        case 0x2c90b0u: goto label_2c90b0;
        case 0x2c90b4u: goto label_2c90b4;
        case 0x2c90b8u: goto label_2c90b8;
        case 0x2c90bcu: goto label_2c90bc;
        case 0x2c90c0u: goto label_2c90c0;
        case 0x2c90c4u: goto label_2c90c4;
        case 0x2c90c8u: goto label_2c90c8;
        case 0x2c90ccu: goto label_2c90cc;
        case 0x2c90d0u: goto label_2c90d0;
        case 0x2c90d4u: goto label_2c90d4;
        case 0x2c90d8u: goto label_2c90d8;
        case 0x2c90dcu: goto label_2c90dc;
        case 0x2c90e0u: goto label_2c90e0;
        case 0x2c90e4u: goto label_2c90e4;
        case 0x2c90e8u: goto label_2c90e8;
        case 0x2c90ecu: goto label_2c90ec;
        case 0x2c90f0u: goto label_2c90f0;
        case 0x2c90f4u: goto label_2c90f4;
        case 0x2c90f8u: goto label_2c90f8;
        case 0x2c90fcu: goto label_2c90fc;
        case 0x2c9100u: goto label_2c9100;
        case 0x2c9104u: goto label_2c9104;
        case 0x2c9108u: goto label_2c9108;
        case 0x2c910cu: goto label_2c910c;
        case 0x2c9110u: goto label_2c9110;
        case 0x2c9114u: goto label_2c9114;
        case 0x2c9118u: goto label_2c9118;
        case 0x2c911cu: goto label_2c911c;
        case 0x2c9120u: goto label_2c9120;
        case 0x2c9124u: goto label_2c9124;
        case 0x2c9128u: goto label_2c9128;
        case 0x2c912cu: goto label_2c912c;
        case 0x2c9130u: goto label_2c9130;
        case 0x2c9134u: goto label_2c9134;
        case 0x2c9138u: goto label_2c9138;
        case 0x2c913cu: goto label_2c913c;
        case 0x2c9140u: goto label_2c9140;
        case 0x2c9144u: goto label_2c9144;
        case 0x2c9148u: goto label_2c9148;
        case 0x2c914cu: goto label_2c914c;
        case 0x2c9150u: goto label_2c9150;
        case 0x2c9154u: goto label_2c9154;
        case 0x2c9158u: goto label_2c9158;
        case 0x2c915cu: goto label_2c915c;
        case 0x2c9160u: goto label_2c9160;
        case 0x2c9164u: goto label_2c9164;
        case 0x2c9168u: goto label_2c9168;
        case 0x2c916cu: goto label_2c916c;
        case 0x2c9170u: goto label_2c9170;
        case 0x2c9174u: goto label_2c9174;
        case 0x2c9178u: goto label_2c9178;
        case 0x2c917cu: goto label_2c917c;
        case 0x2c9180u: goto label_2c9180;
        case 0x2c9184u: goto label_2c9184;
        case 0x2c9188u: goto label_2c9188;
        case 0x2c918cu: goto label_2c918c;
        case 0x2c9190u: goto label_2c9190;
        case 0x2c9194u: goto label_2c9194;
        case 0x2c9198u: goto label_2c9198;
        case 0x2c919cu: goto label_2c919c;
        case 0x2c91a0u: goto label_2c91a0;
        case 0x2c91a4u: goto label_2c91a4;
        case 0x2c91a8u: goto label_2c91a8;
        case 0x2c91acu: goto label_2c91ac;
        case 0x2c91b0u: goto label_2c91b0;
        case 0x2c91b4u: goto label_2c91b4;
        case 0x2c91b8u: goto label_2c91b8;
        case 0x2c91bcu: goto label_2c91bc;
        case 0x2c91c0u: goto label_2c91c0;
        case 0x2c91c4u: goto label_2c91c4;
        case 0x2c91c8u: goto label_2c91c8;
        case 0x2c91ccu: goto label_2c91cc;
        case 0x2c91d0u: goto label_2c91d0;
        case 0x2c91d4u: goto label_2c91d4;
        case 0x2c91d8u: goto label_2c91d8;
        case 0x2c91dcu: goto label_2c91dc;
        case 0x2c91e0u: goto label_2c91e0;
        case 0x2c91e4u: goto label_2c91e4;
        case 0x2c91e8u: goto label_2c91e8;
        case 0x2c91ecu: goto label_2c91ec;
        case 0x2c91f0u: goto label_2c91f0;
        case 0x2c91f4u: goto label_2c91f4;
        case 0x2c91f8u: goto label_2c91f8;
        case 0x2c91fcu: goto label_2c91fc;
        case 0x2c9200u: goto label_2c9200;
        case 0x2c9204u: goto label_2c9204;
        case 0x2c9208u: goto label_2c9208;
        case 0x2c920cu: goto label_2c920c;
        case 0x2c9210u: goto label_2c9210;
        case 0x2c9214u: goto label_2c9214;
        case 0x2c9218u: goto label_2c9218;
        case 0x2c921cu: goto label_2c921c;
        case 0x2c9220u: goto label_2c9220;
        case 0x2c9224u: goto label_2c9224;
        case 0x2c9228u: goto label_2c9228;
        case 0x2c922cu: goto label_2c922c;
        case 0x2c9230u: goto label_2c9230;
        case 0x2c9234u: goto label_2c9234;
        case 0x2c9238u: goto label_2c9238;
        case 0x2c923cu: goto label_2c923c;
        case 0x2c9240u: goto label_2c9240;
        case 0x2c9244u: goto label_2c9244;
        case 0x2c9248u: goto label_2c9248;
        case 0x2c924cu: goto label_2c924c;
        default: return;
    }

label_2c8a80:
    // 0x2c8a80: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8a84:
    if (ctx->pc == 0x2C8A84u) {
        ctx->pc = 0x2C8A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A80u;
        // 0x2c8a84: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8A84 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8A88u;
        goto label_2c8a88;
    }
    ctx->pc = 0x2C8A80u;
    {
        const bool branch_taken_0x2c8a80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8a80) {
            ctx->pc = 0x2C8A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8A80u;
            // 0x2c8a84: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8A84 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBFF4u;
            return;
        }
    }
    ctx->pc = 0x2C8A88u;
label_2c8a88:
    // 0x2c8a88: 0x5f383053  .word       0x5F383053                   # bgtzl       $t9, . + 4 + (0x3053 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_2c8a8c:
    if (ctx->pc == 0x2C8A8Cu) {
        ctx->pc = 0x2C8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A88u;
        // 0x2c8a8c: 0x2e31504f  sltiu       $s1, $s1, 0x504F (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8A90u;
        goto label_2c8a90;
    }
    ctx->pc = 0x2C8A88u;
    {
        const bool branch_taken_0x2c8a88 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8a88) {
            ctx->pc = 0x2C8A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8A88u;
            // 0x2c8a8c: 0x2e31504f  sltiu       $s1, $s1, 0x504F (Delay Slot)
            SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4BD8u;
            return;
        }
    }
    ctx->pc = 0x2C8A90u;
label_2c8a90:
    // 0x2c8a90: 0x3b535350  xori        $s3, $k0, 0x5350
    ctx->pc = 0x2c8a90u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21328);
label_2c8a94:
    // 0x2c8a94: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c8a94u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8a98:
    // 0x2c8a98: 0x0  nop
    ctx->pc = 0x2c8a98u;
    // NOP
label_2c8a9c:
    // 0x2c8a9c: 0x0  nop
    ctx->pc = 0x2c8a9cu;
    // NOP
label_2c8aa0:
    // 0x2c8aa0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8aa4:
    if (ctx->pc == 0x2C8AA4u) {
        ctx->pc = 0x2C8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AA0u;
        // 0x2c8aa4: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8AA4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8AA8u;
        goto label_2c8aa8;
    }
    ctx->pc = 0x2C8AA0u;
    {
        const bool branch_taken_0x2c8aa0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8aa0) {
            ctx->pc = 0x2C8AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8AA0u;
            // 0x2c8aa4: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8AA4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC014u;
            return;
        }
    }
    ctx->pc = 0x2C8AA8u;
label_2c8aa8:
    // 0x2c8aa8: 0x5f383053  .word       0x5F383053                   # bgtzl       $t9, . + 4 + (0x3053 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_2c8aac:
    if (ctx->pc == 0x2C8AACu) {
        ctx->pc = 0x2C8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AA8u;
        // 0x2c8aac: 0x2e32504f  sltiu       $s2, $s1, 0x504F (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8AB0u;
        goto label_2c8ab0;
    }
    ctx->pc = 0x2C8AA8u;
    {
        const bool branch_taken_0x2c8aa8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8aa8) {
            ctx->pc = 0x2C8AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8AA8u;
            // 0x2c8aac: 0x2e32504f  sltiu       $s2, $s1, 0x504F (Delay Slot)
            SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4BF8u;
            return;
        }
    }
    ctx->pc = 0x2C8AB0u;
label_2c8ab0:
    // 0x2c8ab0: 0x3b535350  xori        $s3, $k0, 0x5350
    ctx->pc = 0x2c8ab0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21328);
label_2c8ab4:
    // 0x2c8ab4: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c8ab4u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8ab8:
    // 0x2c8ab8: 0x0  nop
    ctx->pc = 0x2c8ab8u;
    // NOP
label_2c8abc:
    // 0x2c8abc: 0x0  nop
    ctx->pc = 0x2c8abcu;
    // NOP
label_2c8ac0:
    // 0x2c8ac0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8ac4:
    if (ctx->pc == 0x2C8AC4u) {
        ctx->pc = 0x2C8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AC0u;
        // 0x2c8ac4: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8AC4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8AC8u;
        goto label_2c8ac8;
    }
    ctx->pc = 0x2C8AC0u;
    {
        const bool branch_taken_0x2c8ac0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8ac0) {
            ctx->pc = 0x2C8AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8AC0u;
            // 0x2c8ac4: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8AC4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC034u;
            return;
        }
    }
    ctx->pc = 0x2C8AC8u;
label_2c8ac8:
    // 0x2c8ac8: 0x5f383053  .word       0x5F383053                   # bgtzl       $t9, . + 4 + (0x3053 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_2c8acc:
    if (ctx->pc == 0x2C8ACCu) {
        ctx->pc = 0x2C8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AC8u;
        // 0x2c8acc: 0x2e33504f  sltiu       $s3, $s1, 0x504F (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8AD0u;
        goto label_2c8ad0;
    }
    ctx->pc = 0x2C8AC8u;
    {
        const bool branch_taken_0x2c8ac8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8ac8) {
            ctx->pc = 0x2C8ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8AC8u;
            // 0x2c8acc: 0x2e33504f  sltiu       $s3, $s1, 0x504F (Delay Slot)
            SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4C18u;
            return;
        }
    }
    ctx->pc = 0x2C8AD0u;
label_2c8ad0:
    // 0x2c8ad0: 0x3b535350  xori        $s3, $k0, 0x5350
    ctx->pc = 0x2c8ad0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21328);
label_2c8ad4:
    // 0x2c8ad4: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c8ad4u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8ad8:
    // 0x2c8ad8: 0x0  nop
    ctx->pc = 0x2c8ad8u;
    // NOP
label_2c8adc:
    // 0x2c8adc: 0x0  nop
    ctx->pc = 0x2c8adcu;
    // NOP
label_2c8ae0:
    // 0x2c8ae0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8ae4:
    if (ctx->pc == 0x2C8AE4u) {
        ctx->pc = 0x2C8AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AE0u;
        // 0x2c8ae4: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8AE4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8AE8u;
        goto label_2c8ae8;
    }
    ctx->pc = 0x2C8AE0u;
    {
        const bool branch_taken_0x2c8ae0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8ae0) {
            ctx->pc = 0x2C8AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8AE0u;
            // 0x2c8ae4: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8AE4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC054u;
            return;
        }
    }
    ctx->pc = 0x2C8AE8u;
label_2c8ae8:
    // 0x2c8ae8: 0x5f313153  .word       0x5F313153                   # bgtzl       $t9, . + 4 + (0x3153 << 2) # 00110000 <InstrIdType: CPU_NORMAL>
label_2c8aec:
    if (ctx->pc == 0x2C8AECu) {
        ctx->pc = 0x2C8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AE8u;
        // 0x2c8aec: 0x2e31504f  sltiu       $s1, $s1, 0x504F (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8AF0u;
        goto label_2c8af0;
    }
    ctx->pc = 0x2C8AE8u;
    {
        const bool branch_taken_0x2c8ae8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8ae8) {
            ctx->pc = 0x2C8AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8AE8u;
            // 0x2c8aec: 0x2e31504f  sltiu       $s1, $s1, 0x504F (Delay Slot)
            SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5038u;
            return;
        }
    }
    ctx->pc = 0x2C8AF0u;
label_2c8af0:
    // 0x2c8af0: 0x3b535350  xori        $s3, $k0, 0x5350
    ctx->pc = 0x2c8af0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21328);
label_2c8af4:
    // 0x2c8af4: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c8af4u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8af8:
    // 0x2c8af8: 0x0  nop
    ctx->pc = 0x2c8af8u;
    // NOP
label_2c8afc:
    // 0x2c8afc: 0x0  nop
    ctx->pc = 0x2c8afcu;
    // NOP
label_2c8b00:
    // 0x2c8b00: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8b04:
    if (ctx->pc == 0x2C8B04u) {
        ctx->pc = 0x2C8B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B00u;
        // 0x2c8b04: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8B04 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8B08u;
        goto label_2c8b08;
    }
    ctx->pc = 0x2C8B00u;
    {
        const bool branch_taken_0x2c8b00 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8b00) {
            ctx->pc = 0x2C8B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8B00u;
            // 0x2c8b04: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8B04 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC074u;
            return;
        }
    }
    ctx->pc = 0x2C8B08u;
label_2c8b08:
    // 0x2c8b08: 0x5f313153  .word       0x5F313153                   # bgtzl       $t9, . + 4 + (0x3153 << 2) # 00110000 <InstrIdType: CPU_NORMAL>
label_2c8b0c:
    if (ctx->pc == 0x2C8B0Cu) {
        ctx->pc = 0x2C8B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B08u;
        // 0x2c8b0c: 0x2e32504f  sltiu       $s2, $s1, 0x504F (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8B10u;
        goto label_2c8b10;
    }
    ctx->pc = 0x2C8B08u;
    {
        const bool branch_taken_0x2c8b08 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8b08) {
            ctx->pc = 0x2C8B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8B08u;
            // 0x2c8b0c: 0x2e32504f  sltiu       $s2, $s1, 0x504F (Delay Slot)
            SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5058u;
            return;
        }
    }
    ctx->pc = 0x2C8B10u;
label_2c8b10:
    // 0x2c8b10: 0x3b535350  xori        $s3, $k0, 0x5350
    ctx->pc = 0x2c8b10u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21328);
label_2c8b14:
    // 0x2c8b14: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c8b14u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8b18:
    // 0x2c8b18: 0x0  nop
    ctx->pc = 0x2c8b18u;
    // NOP
label_2c8b1c:
    // 0x2c8b1c: 0x0  nop
    ctx->pc = 0x2c8b1cu;
    // NOP
label_2c8b20:
    // 0x2c8b20: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8b24:
    if (ctx->pc == 0x2C8B24u) {
        ctx->pc = 0x2C8B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B20u;
        // 0x2c8b24: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8B24 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8B28u;
        goto label_2c8b28;
    }
    ctx->pc = 0x2C8B20u;
    {
        const bool branch_taken_0x2c8b20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8b20) {
            ctx->pc = 0x2C8B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8B20u;
            // 0x2c8b24: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8B24 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC094u;
            return;
        }
    }
    ctx->pc = 0x2C8B28u;
label_2c8b28:
    // 0x2c8b28: 0x5f343153  .word       0x5F343153                   # bgtzl       $t9, . + 4 + (0x3153 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_2c8b2c:
    if (ctx->pc == 0x2C8B2Cu) {
        ctx->pc = 0x2C8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B28u;
        // 0x2c8b2c: 0x2e31504f  sltiu       $s1, $s1, 0x504F (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8B30u;
        goto label_2c8b30;
    }
    ctx->pc = 0x2C8B28u;
    {
        const bool branch_taken_0x2c8b28 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8b28) {
            ctx->pc = 0x2C8B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8B28u;
            // 0x2c8b2c: 0x2e31504f  sltiu       $s1, $s1, 0x504F (Delay Slot)
            SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5078u;
            return;
        }
    }
    ctx->pc = 0x2C8B30u;
label_2c8b30:
    // 0x2c8b30: 0x3b535350  xori        $s3, $k0, 0x5350
    ctx->pc = 0x2c8b30u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21328);
label_2c8b34:
    // 0x2c8b34: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c8b34u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8b38:
    // 0x2c8b38: 0x0  nop
    ctx->pc = 0x2c8b38u;
    // NOP
label_2c8b3c:
    // 0x2c8b3c: 0x0  nop
    ctx->pc = 0x2c8b3cu;
    // NOP
label_2c8b40:
    // 0x2c8b40: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8b44:
    if (ctx->pc == 0x2C8B44u) {
        ctx->pc = 0x2C8B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B40u;
        // 0x2c8b44: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8B44 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8B48u;
        goto label_2c8b48;
    }
    ctx->pc = 0x2C8B40u;
    {
        const bool branch_taken_0x2c8b40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8b40) {
            ctx->pc = 0x2C8B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8B40u;
            // 0x2c8b44: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8B44 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC0B4u;
            return;
        }
    }
    ctx->pc = 0x2C8B48u;
label_2c8b48:
    // 0x2c8b48: 0x5f343153  .word       0x5F343153                   # bgtzl       $t9, . + 4 + (0x3153 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_2c8b4c:
    if (ctx->pc == 0x2C8B4Cu) {
        ctx->pc = 0x2C8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B48u;
        // 0x2c8b4c: 0x2e32504f  sltiu       $s2, $s1, 0x504F (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8B50u;
        goto label_2c8b50;
    }
    ctx->pc = 0x2C8B48u;
    {
        const bool branch_taken_0x2c8b48 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8b48) {
            ctx->pc = 0x2C8B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8B48u;
            // 0x2c8b4c: 0x2e32504f  sltiu       $s2, $s1, 0x504F (Delay Slot)
            SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5098u;
            return;
        }
    }
    ctx->pc = 0x2C8B50u;
label_2c8b50:
    // 0x2c8b50: 0x3b535350  xori        $s3, $k0, 0x5350
    ctx->pc = 0x2c8b50u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21328);
label_2c8b54:
    // 0x2c8b54: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c8b54u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8b58:
    // 0x2c8b58: 0x0  nop
    ctx->pc = 0x2c8b58u;
    // NOP
label_2c8b5c:
    // 0x2c8b5c: 0x0  nop
    ctx->pc = 0x2c8b5cu;
    // NOP
label_2c8b60:
    // 0x2c8b60: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8b64:
    if (ctx->pc == 0x2C8B64u) {
        ctx->pc = 0x2C8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B60u;
        // 0x2c8b64: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8B64 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8B68u;
        goto label_2c8b68;
    }
    ctx->pc = 0x2C8B60u;
    {
        const bool branch_taken_0x2c8b60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8b60) {
            ctx->pc = 0x2C8B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8B60u;
            // 0x2c8b64: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8B64 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC0D4u;
            return;
        }
    }
    ctx->pc = 0x2C8B68u;
label_2c8b68:
    // 0x2c8b68: 0x5f353153  .word       0x5F353153                   # bgtzl       $t9, . + 4 + (0x3153 << 2) # 00150000 <InstrIdType: CPU_NORMAL>
label_2c8b6c:
    if (ctx->pc == 0x2C8B6Cu) {
        ctx->pc = 0x2C8B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B68u;
        // 0x2c8b6c: 0x2e31504f  sltiu       $s1, $s1, 0x504F (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8B70u;
        goto label_2c8b70;
    }
    ctx->pc = 0x2C8B68u;
    {
        const bool branch_taken_0x2c8b68 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8b68) {
            ctx->pc = 0x2C8B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8B68u;
            // 0x2c8b6c: 0x2e31504f  sltiu       $s1, $s1, 0x504F (Delay Slot)
            SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D50B8u;
            return;
        }
    }
    ctx->pc = 0x2C8B70u;
label_2c8b70:
    // 0x2c8b70: 0x3b535350  xori        $s3, $k0, 0x5350
    ctx->pc = 0x2c8b70u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21328);
label_2c8b74:
    // 0x2c8b74: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c8b74u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8b78:
    // 0x2c8b78: 0x0  nop
    ctx->pc = 0x2c8b78u;
    // NOP
label_2c8b7c:
    // 0x2c8b7c: 0x0  nop
    ctx->pc = 0x2c8b7cu;
    // NOP
label_2c8b80:
    // 0x2c8b80: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8b84:
    if (ctx->pc == 0x2C8B84u) {
        ctx->pc = 0x2C8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B80u;
        // 0x2c8b84: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8B84 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8B88u;
        goto label_2c8b88;
    }
    ctx->pc = 0x2C8B80u;
    {
        const bool branch_taken_0x2c8b80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8b80) {
            ctx->pc = 0x2C8B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8B80u;
            // 0x2c8b84: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8B84 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC0F4u;
            return;
        }
    }
    ctx->pc = 0x2C8B88u;
label_2c8b88:
    // 0x2c8b88: 0x5f353153  .word       0x5F353153                   # bgtzl       $t9, . + 4 + (0x3153 << 2) # 00150000 <InstrIdType: CPU_NORMAL>
label_2c8b8c:
    if (ctx->pc == 0x2C8B8Cu) {
        ctx->pc = 0x2C8B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8B88u;
        // 0x2c8b8c: 0x2e32504f  sltiu       $s2, $s1, 0x504F (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8B90u;
        goto label_2c8b90;
    }
    ctx->pc = 0x2C8B88u;
    {
        const bool branch_taken_0x2c8b88 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8b88) {
            ctx->pc = 0x2C8B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8B88u;
            // 0x2c8b8c: 0x2e32504f  sltiu       $s2, $s1, 0x504F (Delay Slot)
            SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D50D8u;
            return;
        }
    }
    ctx->pc = 0x2C8B90u;
label_2c8b90:
    // 0x2c8b90: 0x3b535350  xori        $s3, $k0, 0x5350
    ctx->pc = 0x2c8b90u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21328);
label_2c8b94:
    // 0x2c8b94: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c8b94u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8b98:
    // 0x2c8b98: 0x0  nop
    ctx->pc = 0x2c8b98u;
    // NOP
label_2c8b9c:
    // 0x2c8b9c: 0x0  nop
    ctx->pc = 0x2c8b9cu;
    // NOP
label_2c8ba0:
    // 0x2c8ba0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8ba4:
    if (ctx->pc == 0x2C8BA4u) {
        ctx->pc = 0x2C8BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BA0u;
        // 0x2c8ba4: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8BA4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8BA8u;
        goto label_2c8ba8;
    }
    ctx->pc = 0x2C8BA0u;
    {
        const bool branch_taken_0x2c8ba0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8ba0) {
            ctx->pc = 0x2C8BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8BA0u;
            // 0x2c8ba4: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8BA4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC114u;
            return;
        }
    }
    ctx->pc = 0x2C8BA8u;
label_2c8ba8:
    // 0x2c8ba8: 0x5f383153  .word       0x5F383153                   # bgtzl       $t9, . + 4 + (0x3153 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_2c8bac:
    if (ctx->pc == 0x2C8BACu) {
        ctx->pc = 0x2C8BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BA8u;
        // 0x2c8bac: 0x2e31504f  sltiu       $s1, $s1, 0x504F (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8BB0u;
        goto label_2c8bb0;
    }
    ctx->pc = 0x2C8BA8u;
    {
        const bool branch_taken_0x2c8ba8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8ba8) {
            ctx->pc = 0x2C8BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8BA8u;
            // 0x2c8bac: 0x2e31504f  sltiu       $s1, $s1, 0x504F (Delay Slot)
            SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D50F8u;
            return;
        }
    }
    ctx->pc = 0x2C8BB0u;
label_2c8bb0:
    // 0x2c8bb0: 0x3b535350  xori        $s3, $k0, 0x5350
    ctx->pc = 0x2c8bb0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21328);
label_2c8bb4:
    // 0x2c8bb4: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c8bb4u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8bb8:
    // 0x2c8bb8: 0x0  nop
    ctx->pc = 0x2c8bb8u;
    // NOP
label_2c8bbc:
    // 0x2c8bbc: 0x0  nop
    ctx->pc = 0x2c8bbcu;
    // NOP
label_2c8bc0:
    // 0x2c8bc0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8bc4:
    if (ctx->pc == 0x2C8BC4u) {
        ctx->pc = 0x2C8BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BC0u;
        // 0x2c8bc4: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8BC4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8BC8u;
        goto label_2c8bc8;
    }
    ctx->pc = 0x2C8BC0u;
    {
        const bool branch_taken_0x2c8bc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8bc0) {
            ctx->pc = 0x2C8BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8BC0u;
            // 0x2c8bc4: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8BC4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC134u;
            return;
        }
    }
    ctx->pc = 0x2C8BC8u;
label_2c8bc8:
    // 0x2c8bc8: 0x5f383153  .word       0x5F383153                   # bgtzl       $t9, . + 4 + (0x3153 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_2c8bcc:
    if (ctx->pc == 0x2C8BCCu) {
        ctx->pc = 0x2C8BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BC8u;
        // 0x2c8bcc: 0x2e32504f  sltiu       $s2, $s1, 0x504F (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8BD0u;
        goto label_2c8bd0;
    }
    ctx->pc = 0x2C8BC8u;
    {
        const bool branch_taken_0x2c8bc8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8bc8) {
            ctx->pc = 0x2C8BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8BC8u;
            // 0x2c8bcc: 0x2e32504f  sltiu       $s2, $s1, 0x504F (Delay Slot)
            SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5118u;
            return;
        }
    }
    ctx->pc = 0x2C8BD0u;
label_2c8bd0:
    // 0x2c8bd0: 0x3b535350  xori        $s3, $k0, 0x5350
    ctx->pc = 0x2c8bd0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21328);
label_2c8bd4:
    // 0x2c8bd4: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c8bd4u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8bd8:
    // 0x2c8bd8: 0x0  nop
    ctx->pc = 0x2c8bd8u;
    // NOP
label_2c8bdc:
    // 0x2c8bdc: 0x0  nop
    ctx->pc = 0x2c8bdcu;
    // NOP
label_2c8be0:
    // 0x2c8be0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8be4:
    if (ctx->pc == 0x2C8BE4u) {
        ctx->pc = 0x2C8BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BE0u;
        // 0x2c8be4: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8BE4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8BE8u;
        goto label_2c8be8;
    }
    ctx->pc = 0x2C8BE0u;
    {
        const bool branch_taken_0x2c8be0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8be0) {
            ctx->pc = 0x2C8BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8BE0u;
            // 0x2c8be4: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8BE4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC154u;
            return;
        }
    }
    ctx->pc = 0x2C8BE8u;
label_2c8be8:
    // 0x2c8be8: 0x5f393153  .word       0x5F393153                   # bgtzl       $t9, . + 4 + (0x3153 << 2) # 00190000 <InstrIdType: CPU_NORMAL>
label_2c8bec:
    if (ctx->pc == 0x2C8BECu) {
        ctx->pc = 0x2C8BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BE8u;
        // 0x2c8bec: 0x2e31504f  sltiu       $s1, $s1, 0x504F (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8BF0u;
        goto label_2c8bf0;
    }
    ctx->pc = 0x2C8BE8u;
    {
        const bool branch_taken_0x2c8be8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8be8) {
            ctx->pc = 0x2C8BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8BE8u;
            // 0x2c8bec: 0x2e31504f  sltiu       $s1, $s1, 0x504F (Delay Slot)
            SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5138u;
            return;
        }
    }
    ctx->pc = 0x2C8BF0u;
label_2c8bf0:
    // 0x2c8bf0: 0x3b535350  xori        $s3, $k0, 0x5350
    ctx->pc = 0x2c8bf0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21328);
label_2c8bf4:
    // 0x2c8bf4: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c8bf4u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8bf8:
    // 0x2c8bf8: 0x0  nop
    ctx->pc = 0x2c8bf8u;
    // NOP
label_2c8bfc:
    // 0x2c8bfc: 0x0  nop
    ctx->pc = 0x2c8bfcu;
    // NOP
label_2c8c00:
    // 0x2c8c00: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8c04:
    if (ctx->pc == 0x2C8C04u) {
        ctx->pc = 0x2C8C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C00u;
        // 0x2c8c04: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8C04 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C08u;
        goto label_2c8c08;
    }
    ctx->pc = 0x2C8C00u;
    {
        const bool branch_taken_0x2c8c00 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8c00) {
            ctx->pc = 0x2C8C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C00u;
            // 0x2c8c04: 0x5c334549  .word       0x5C334549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8C04 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC174u;
            return;
        }
    }
    ctx->pc = 0x2C8C08u;
label_2c8c08:
    // 0x2c8c08: 0x5f393153  .word       0x5F393153                   # bgtzl       $t9, . + 4 + (0x3153 << 2) # 00190000 <InstrIdType: CPU_NORMAL>
label_2c8c0c:
    if (ctx->pc == 0x2C8C0Cu) {
        ctx->pc = 0x2C8C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C08u;
        // 0x2c8c0c: 0x2e32504f  sltiu       $s2, $s1, 0x504F (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C10u;
        goto label_2c8c10;
    }
    ctx->pc = 0x2C8C08u;
    {
        const bool branch_taken_0x2c8c08 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8c08) {
            ctx->pc = 0x2C8C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C08u;
            // 0x2c8c0c: 0x2e32504f  sltiu       $s2, $s1, 0x504F (Delay Slot)
            SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20559) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5158u;
            return;
        }
    }
    ctx->pc = 0x2C8C10u;
label_2c8c10:
    // 0x2c8c10: 0x3b535350  xori        $s3, $k0, 0x5350
    ctx->pc = 0x2c8c10u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21328);
label_2c8c14:
    // 0x2c8c14: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c8c14u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8c18:
    // 0x2c8c18: 0x0  nop
    ctx->pc = 0x2c8c18u;
    // NOP
label_2c8c1c:
    // 0x2c8c1c: 0x0  nop
    ctx->pc = 0x2c8c1cu;
    // NOP
label_2c8c20:
    // 0x2c8c20: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8c24:
    if (ctx->pc == 0x2C8C24u) {
        ctx->pc = 0x2C8C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C20u;
        // 0x2c8c24: 0x455c4549  .word       0x455C4549                   # INVALID     $t2, $gp, 0x4549 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
//         throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x9 at 0x2C8C24 raw=0x455C4549");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C28u;
        goto label_2c8c28;
    }
    ctx->pc = 0x2C8C20u;
    {
        const bool branch_taken_0x2c8c20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8c20) {
            ctx->pc = 0x2C8C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C20u;
            // 0x2c8c24: 0x455c4549  .word       0x455C4549                   # INVALID     $t2, $gp, 0x4549 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
//             throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x9 at 0x2C8C24 raw=0x455C4549");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC194u;
            return;
        }
    }
    ctx->pc = 0x2C8C28u;
label_2c8c28:
    // 0x2c8c28: 0x5f4f4d44  .word       0x5F4F4D44                   # bgtzl       $k0, . + 4 + (0x4D44 << 2) # 000F0000 <InstrIdType: CPU_NORMAL>
label_2c8c2c:
    if (ctx->pc == 0x2C8C2Cu) {
        ctx->pc = 0x2C8C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C28u;
        // 0x2c8c2c: 0x502e4947  beql        $at, $t6, . + 4 + (0x4947 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8C2C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C30u;
        goto label_2c8c30;
    }
    ctx->pc = 0x2C8C28u;
    {
        const bool branch_taken_0x2c8c28 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x2c8c28) {
            ctx->pc = 0x2C8C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C28u;
            // 0x2c8c2c: 0x502e4947  beql        $at, $t6, . + 4 + (0x4947 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8C2C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC13Cu;
            return;
        }
    }
    ctx->pc = 0x2C8C30u;
label_2c8c30:
    // 0x2c8c30: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8c30u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8c34:
    // 0x2c8c34: 0x0  nop
    ctx->pc = 0x2c8c34u;
    // NOP
label_2c8c38:
    // 0x2c8c38: 0x0  nop
    ctx->pc = 0x2c8c38u;
    // NOP
label_2c8c3c:
    // 0x2c8c3c: 0x0  nop
    ctx->pc = 0x2c8c3cu;
    // NOP
label_2c8c40:
    // 0x2c8c40: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8c44:
    if (ctx->pc == 0x2C8C44u) {
        ctx->pc = 0x2C8C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C40u;
        // 0x2c8c44: 0x455c4549  .word       0x455C4549                   # INVALID     $t2, $gp, 0x4549 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
//         throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x9 at 0x2C8C44 raw=0x455C4549");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C48u;
        goto label_2c8c48;
    }
    ctx->pc = 0x2C8C40u;
    {
        const bool branch_taken_0x2c8c40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8c40) {
            ctx->pc = 0x2C8C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C40u;
            // 0x2c8c44: 0x455c4549  .word       0x455C4549                   # INVALID     $t2, $gp, 0x4549 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
//             throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x9 at 0x2C8C44 raw=0x455C4549");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC1B4u;
            return;
        }
    }
    ctx->pc = 0x2C8C48u;
label_2c8c48:
    // 0x2c8c48: 0x5f4f4d44  .word       0x5F4F4D44                   # bgtzl       $k0, . + 4 + (0x4D44 << 2) # 000F0000 <InstrIdType: CPU_NORMAL>
label_2c8c4c:
    if (ctx->pc == 0x2C8C4Cu) {
        ctx->pc = 0x2C8C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C48u;
        // 0x2c8c4c: 0x502e4f47  beql        $at, $t6, . + 4 + (0x4F47 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8C4C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C50u;
        goto label_2c8c50;
    }
    ctx->pc = 0x2C8C48u;
    {
        const bool branch_taken_0x2c8c48 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x2c8c48) {
            ctx->pc = 0x2C8C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C48u;
            // 0x2c8c4c: 0x502e4f47  beql        $at, $t6, . + 4 + (0x4F47 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8C4C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC15Cu;
            return;
        }
    }
    ctx->pc = 0x2C8C50u;
label_2c8c50:
    // 0x2c8c50: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8c50u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8c54:
    // 0x2c8c54: 0x0  nop
    ctx->pc = 0x2c8c54u;
    // NOP
label_2c8c58:
    // 0x2c8c58: 0x0  nop
    ctx->pc = 0x2c8c58u;
    // NOP
label_2c8c5c:
    // 0x2c8c5c: 0x0  nop
    ctx->pc = 0x2c8c5cu;
    // NOP
label_2c8c60:
    // 0x2c8c60: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8c64:
    if (ctx->pc == 0x2C8C64u) {
        ctx->pc = 0x2C8C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C60u;
        // 0x2c8c64: 0x455c4549  .word       0x455C4549                   # INVALID     $t2, $gp, 0x4549 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
//         throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x9 at 0x2C8C64 raw=0x455C4549");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C68u;
        goto label_2c8c68;
    }
    ctx->pc = 0x2C8C60u;
    {
        const bool branch_taken_0x2c8c60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8c60) {
            ctx->pc = 0x2C8C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C60u;
            // 0x2c8c64: 0x455c4549  .word       0x455C4549                   # INVALID     $t2, $gp, 0x4549 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
//             throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x9 at 0x2C8C64 raw=0x455C4549");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC1D4u;
            return;
        }
    }
    ctx->pc = 0x2C8C68u;
label_2c8c68:
    // 0x2c8c68: 0x5f4f4d44  .word       0x5F4F4D44                   # bgtzl       $k0, . + 4 + (0x4D44 << 2) # 000F0000 <InstrIdType: CPU_NORMAL>
label_2c8c6c:
    if (ctx->pc == 0x2C8C6Cu) {
        ctx->pc = 0x2C8C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C68u;
        // 0x2c8c6c: 0x502e4853  beql        $at, $t6, . + 4 + (0x4853 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8C6C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C70u;
        goto label_2c8c70;
    }
    ctx->pc = 0x2C8C68u;
    {
        const bool branch_taken_0x2c8c68 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x2c8c68) {
            ctx->pc = 0x2C8C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C68u;
            // 0x2c8c6c: 0x502e4853  beql        $at, $t6, . + 4 + (0x4853 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8C6C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC17Cu;
            return;
        }
    }
    ctx->pc = 0x2C8C70u;
label_2c8c70:
    // 0x2c8c70: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8c70u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8c74:
    // 0x2c8c74: 0x0  nop
    ctx->pc = 0x2c8c74u;
    // NOP
label_2c8c78:
    // 0x2c8c78: 0x0  nop
    ctx->pc = 0x2c8c78u;
    // NOP
label_2c8c7c:
    // 0x2c8c7c: 0x0  nop
    ctx->pc = 0x2c8c7cu;
    // NOP
label_2c8c80:
    // 0x2c8c80: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8c84:
    if (ctx->pc == 0x2C8C84u) {
        ctx->pc = 0x2C8C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C80u;
        // 0x2c8c84: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8C84 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8C88u;
        goto label_2c8c88;
    }
    ctx->pc = 0x2C8C80u;
    {
        const bool branch_taken_0x2c8c80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8c80) {
            ctx->pc = 0x2C8C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C80u;
            // 0x2c8c84: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8C84 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC1F4u;
            return;
        }
    }
    ctx->pc = 0x2C8C88u;
label_2c8c88:
    // 0x2c8c88: 0x4e45504f  .word       0x4E45504F                   # INVALID     $s2, $a1, 0x504F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8c88u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C8C88 raw=0x4E45504F");
 /* MITIGATED */
label_2c8c8c:
    // 0x2c8c8c: 0x2e474e49  sltiu       $a3, $s2, 0x4E49
    ctx->pc = 0x2c8c8cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)20041) ? 1 : 0);
label_2c8c90:
    // 0x2c8c90: 0x3b535350  xori        $s3, $k0, 0x5350
    ctx->pc = 0x2c8c90u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)21328);
label_2c8c94:
    // 0x2c8c94: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2c8c94u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8c98:
    // 0x2c8c98: 0x0  nop
    ctx->pc = 0x2c8c98u;
    // NOP
label_2c8c9c:
    // 0x2c8c9c: 0x0  nop
    ctx->pc = 0x2c8c9cu;
    // NOP
label_2c8ca0:
    // 0x2c8ca0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8ca4:
    if (ctx->pc == 0x2C8CA4u) {
        ctx->pc = 0x2C8CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CA0u;
        // 0x2c8ca4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8CA4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8CA8u;
        goto label_2c8ca8;
    }
    ctx->pc = 0x2C8CA0u;
    {
        const bool branch_taken_0x2c8ca0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8ca0) {
            ctx->pc = 0x2C8CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8CA0u;
            // 0x2c8ca4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8CA4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC214u;
            return;
        }
    }
    ctx->pc = 0x2C8CA8u;
label_2c8ca8:
    // 0x2c8ca8: 0x5f30304d  .word       0x5F30304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00100000 <InstrIdType: CPU_NORMAL>
label_2c8cac:
    if (ctx->pc == 0x2C8CACu) {
        ctx->pc = 0x2C8CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CA8u;
        // 0x2c8cac: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8CAC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8CB0u;
        goto label_2c8cb0;
    }
    ctx->pc = 0x2C8CA8u;
    {
        const bool branch_taken_0x2c8ca8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8ca8) {
            ctx->pc = 0x2C8CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8CA8u;
            // 0x2c8cac: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8CAC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4DE0u;
            return;
        }
    }
    ctx->pc = 0x2C8CB0u;
label_2c8cb0:
    // 0x2c8cb0: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8cb0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8cb4:
    // 0x2c8cb4: 0x0  nop
    ctx->pc = 0x2c8cb4u;
    // NOP
label_2c8cb8:
    // 0x2c8cb8: 0x0  nop
    ctx->pc = 0x2c8cb8u;
    // NOP
label_2c8cbc:
    // 0x2c8cbc: 0x0  nop
    ctx->pc = 0x2c8cbcu;
    // NOP
label_2c8cc0:
    // 0x2c8cc0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8cc4:
    if (ctx->pc == 0x2C8CC4u) {
        ctx->pc = 0x2C8CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CC0u;
        // 0x2c8cc4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8CC4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8CC8u;
        goto label_2c8cc8;
    }
    ctx->pc = 0x2C8CC0u;
    {
        const bool branch_taken_0x2c8cc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8cc0) {
            ctx->pc = 0x2C8CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8CC0u;
            // 0x2c8cc4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8CC4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC234u;
            return;
        }
    }
    ctx->pc = 0x2C8CC8u;
label_2c8cc8:
    // 0x2c8cc8: 0x5f30304d  .word       0x5F30304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00100000 <InstrIdType: CPU_NORMAL>
label_2c8ccc:
    if (ctx->pc == 0x2C8CCCu) {
        ctx->pc = 0x2C8CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CC8u;
        // 0x2c8ccc: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8CCC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8CD0u;
        goto label_2c8cd0;
    }
    ctx->pc = 0x2C8CC8u;
    {
        const bool branch_taken_0x2c8cc8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8cc8) {
            ctx->pc = 0x2C8CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8CC8u;
            // 0x2c8ccc: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8CCC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4E00u;
            return;
        }
    }
    ctx->pc = 0x2C8CD0u;
label_2c8cd0:
    // 0x2c8cd0: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8cd0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8cd4:
    // 0x2c8cd4: 0x0  nop
    ctx->pc = 0x2c8cd4u;
    // NOP
label_2c8cd8:
    // 0x2c8cd8: 0x0  nop
    ctx->pc = 0x2c8cd8u;
    // NOP
label_2c8cdc:
    // 0x2c8cdc: 0x0  nop
    ctx->pc = 0x2c8cdcu;
    // NOP
label_2c8ce0:
    // 0x2c8ce0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8ce4:
    if (ctx->pc == 0x2C8CE4u) {
        ctx->pc = 0x2C8CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CE0u;
        // 0x2c8ce4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8CE4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8CE8u;
        goto label_2c8ce8;
    }
    ctx->pc = 0x2C8CE0u;
    {
        const bool branch_taken_0x2c8ce0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8ce0) {
            ctx->pc = 0x2C8CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8CE0u;
            // 0x2c8ce4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8CE4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC254u;
            return;
        }
    }
    ctx->pc = 0x2C8CE8u;
label_2c8ce8:
    // 0x2c8ce8: 0x5f31304d  .word       0x5F31304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00110000 <InstrIdType: CPU_NORMAL>
label_2c8cec:
    if (ctx->pc == 0x2C8CECu) {
        ctx->pc = 0x2C8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CE8u;
        // 0x2c8cec: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8CEC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8CF0u;
        goto label_2c8cf0;
    }
    ctx->pc = 0x2C8CE8u;
    {
        const bool branch_taken_0x2c8ce8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8ce8) {
            ctx->pc = 0x2C8CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8CE8u;
            // 0x2c8cec: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8CEC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4E20u;
            return;
        }
    }
    ctx->pc = 0x2C8CF0u;
label_2c8cf0:
    // 0x2c8cf0: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8cf0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8cf4:
    // 0x2c8cf4: 0x0  nop
    ctx->pc = 0x2c8cf4u;
    // NOP
label_2c8cf8:
    // 0x2c8cf8: 0x0  nop
    ctx->pc = 0x2c8cf8u;
    // NOP
label_2c8cfc:
    // 0x2c8cfc: 0x0  nop
    ctx->pc = 0x2c8cfcu;
    // NOP
label_2c8d00:
    // 0x2c8d00: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8d04:
    if (ctx->pc == 0x2C8D04u) {
        ctx->pc = 0x2C8D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D00u;
        // 0x2c8d04: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8D04 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D08u;
        goto label_2c8d08;
    }
    ctx->pc = 0x2C8D00u;
    {
        const bool branch_taken_0x2c8d00 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8d00) {
            ctx->pc = 0x2C8D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8D00u;
            // 0x2c8d04: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8D04 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC274u;
            return;
        }
    }
    ctx->pc = 0x2C8D08u;
label_2c8d08:
    // 0x2c8d08: 0x5f31304d  .word       0x5F31304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00110000 <InstrIdType: CPU_NORMAL>
label_2c8d0c:
    if (ctx->pc == 0x2C8D0Cu) {
        ctx->pc = 0x2C8D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D08u;
        // 0x2c8d0c: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8D0C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D10u;
        goto label_2c8d10;
    }
    ctx->pc = 0x2C8D08u;
    {
        const bool branch_taken_0x2c8d08 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8d08) {
            ctx->pc = 0x2C8D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8D08u;
            // 0x2c8d0c: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8D0C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4E40u;
            return;
        }
    }
    ctx->pc = 0x2C8D10u;
label_2c8d10:
    // 0x2c8d10: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8d10u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8d14:
    // 0x2c8d14: 0x0  nop
    ctx->pc = 0x2c8d14u;
    // NOP
label_2c8d18:
    // 0x2c8d18: 0x0  nop
    ctx->pc = 0x2c8d18u;
    // NOP
label_2c8d1c:
    // 0x2c8d1c: 0x0  nop
    ctx->pc = 0x2c8d1cu;
    // NOP
label_2c8d20:
    // 0x2c8d20: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8d24:
    if (ctx->pc == 0x2C8D24u) {
        ctx->pc = 0x2C8D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D20u;
        // 0x2c8d24: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8D24 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D28u;
        goto label_2c8d28;
    }
    ctx->pc = 0x2C8D20u;
    {
        const bool branch_taken_0x2c8d20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8d20) {
            ctx->pc = 0x2C8D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8D20u;
            // 0x2c8d24: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8D24 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC294u;
            return;
        }
    }
    ctx->pc = 0x2C8D28u;
label_2c8d28:
    // 0x2c8d28: 0x5f35304d  .word       0x5F35304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00150000 <InstrIdType: CPU_NORMAL>
label_2c8d2c:
    if (ctx->pc == 0x2C8D2Cu) {
        ctx->pc = 0x2C8D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D28u;
        // 0x2c8d2c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8D2C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D30u;
        goto label_2c8d30;
    }
    ctx->pc = 0x2C8D28u;
    {
        const bool branch_taken_0x2c8d28 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8d28) {
            ctx->pc = 0x2C8D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8D28u;
            // 0x2c8d2c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8D2C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4E60u;
            return;
        }
    }
    ctx->pc = 0x2C8D30u;
label_2c8d30:
    // 0x2c8d30: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8d30u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8d34:
    // 0x2c8d34: 0x0  nop
    ctx->pc = 0x2c8d34u;
    // NOP
label_2c8d38:
    // 0x2c8d38: 0x0  nop
    ctx->pc = 0x2c8d38u;
    // NOP
label_2c8d3c:
    // 0x2c8d3c: 0x0  nop
    ctx->pc = 0x2c8d3cu;
    // NOP
label_2c8d40:
    // 0x2c8d40: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8d44:
    if (ctx->pc == 0x2C8D44u) {
        ctx->pc = 0x2C8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D40u;
        // 0x2c8d44: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8D44 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D48u;
        goto label_2c8d48;
    }
    ctx->pc = 0x2C8D40u;
    {
        const bool branch_taken_0x2c8d40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8d40) {
            ctx->pc = 0x2C8D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8D40u;
            // 0x2c8d44: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8D44 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC2B4u;
            return;
        }
    }
    ctx->pc = 0x2C8D48u;
label_2c8d48:
    // 0x2c8d48: 0x5f35304d  .word       0x5F35304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00150000 <InstrIdType: CPU_NORMAL>
label_2c8d4c:
    if (ctx->pc == 0x2C8D4Cu) {
        ctx->pc = 0x2C8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D48u;
        // 0x2c8d4c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8D4C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D50u;
        goto label_2c8d50;
    }
    ctx->pc = 0x2C8D48u;
    {
        const bool branch_taken_0x2c8d48 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8d48) {
            ctx->pc = 0x2C8D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8D48u;
            // 0x2c8d4c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8D4C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4E80u;
            return;
        }
    }
    ctx->pc = 0x2C8D50u;
label_2c8d50:
    // 0x2c8d50: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8d50u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8d54:
    // 0x2c8d54: 0x0  nop
    ctx->pc = 0x2c8d54u;
    // NOP
label_2c8d58:
    // 0x2c8d58: 0x0  nop
    ctx->pc = 0x2c8d58u;
    // NOP
label_2c8d5c:
    // 0x2c8d5c: 0x0  nop
    ctx->pc = 0x2c8d5cu;
    // NOP
label_2c8d60:
    // 0x2c8d60: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8d64:
    if (ctx->pc == 0x2C8D64u) {
        ctx->pc = 0x2C8D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D60u;
        // 0x2c8d64: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8D64 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D68u;
        goto label_2c8d68;
    }
    ctx->pc = 0x2C8D60u;
    {
        const bool branch_taken_0x2c8d60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8d60) {
            ctx->pc = 0x2C8D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8D60u;
            // 0x2c8d64: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8D64 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC2D4u;
            return;
        }
    }
    ctx->pc = 0x2C8D68u;
label_2c8d68:
    // 0x2c8d68: 0x5f37304d  .word       0x5F37304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00170000 <InstrIdType: CPU_NORMAL>
label_2c8d6c:
    if (ctx->pc == 0x2C8D6Cu) {
        ctx->pc = 0x2C8D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D68u;
        // 0x2c8d6c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8D6C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D70u;
        goto label_2c8d70;
    }
    ctx->pc = 0x2C8D68u;
    {
        const bool branch_taken_0x2c8d68 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8d68) {
            ctx->pc = 0x2C8D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8D68u;
            // 0x2c8d6c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8D6C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4EA0u;
            return;
        }
    }
    ctx->pc = 0x2C8D70u;
label_2c8d70:
    // 0x2c8d70: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8d70u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8d74:
    // 0x2c8d74: 0x0  nop
    ctx->pc = 0x2c8d74u;
    // NOP
label_2c8d78:
    // 0x2c8d78: 0x0  nop
    ctx->pc = 0x2c8d78u;
    // NOP
label_2c8d7c:
    // 0x2c8d7c: 0x0  nop
    ctx->pc = 0x2c8d7cu;
    // NOP
label_2c8d80:
    // 0x2c8d80: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8d84:
    if (ctx->pc == 0x2C8D84u) {
        ctx->pc = 0x2C8D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D80u;
        // 0x2c8d84: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8D84 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D88u;
        goto label_2c8d88;
    }
    ctx->pc = 0x2C8D80u;
    {
        const bool branch_taken_0x2c8d80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8d80) {
            ctx->pc = 0x2C8D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8D80u;
            // 0x2c8d84: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8D84 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC2F4u;
            return;
        }
    }
    ctx->pc = 0x2C8D88u;
label_2c8d88:
    // 0x2c8d88: 0x5f37304d  .word       0x5F37304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00170000 <InstrIdType: CPU_NORMAL>
label_2c8d8c:
    if (ctx->pc == 0x2C8D8Cu) {
        ctx->pc = 0x2C8D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D88u;
        // 0x2c8d8c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8D8C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8D90u;
        goto label_2c8d90;
    }
    ctx->pc = 0x2C8D88u;
    {
        const bool branch_taken_0x2c8d88 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8d88) {
            ctx->pc = 0x2C8D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8D88u;
            // 0x2c8d8c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8D8C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4EC0u;
            return;
        }
    }
    ctx->pc = 0x2C8D90u;
label_2c8d90:
    // 0x2c8d90: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8d90u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8d94:
    // 0x2c8d94: 0x0  nop
    ctx->pc = 0x2c8d94u;
    // NOP
label_2c8d98:
    // 0x2c8d98: 0x0  nop
    ctx->pc = 0x2c8d98u;
    // NOP
label_2c8d9c:
    // 0x2c8d9c: 0x0  nop
    ctx->pc = 0x2c8d9cu;
    // NOP
label_2c8da0:
    // 0x2c8da0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8da4:
    if (ctx->pc == 0x2C8DA4u) {
        ctx->pc = 0x2C8DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DA0u;
        // 0x2c8da4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8DA4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8DA8u;
        goto label_2c8da8;
    }
    ctx->pc = 0x2C8DA0u;
    {
        const bool branch_taken_0x2c8da0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8da0) {
            ctx->pc = 0x2C8DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8DA0u;
            // 0x2c8da4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8DA4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC314u;
            return;
        }
    }
    ctx->pc = 0x2C8DA8u;
label_2c8da8:
    // 0x2c8da8: 0x5f37304d  .word       0x5F37304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00170000 <InstrIdType: CPU_NORMAL>
label_2c8dac:
    if (ctx->pc == 0x2C8DACu) {
        ctx->pc = 0x2C8DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DA8u;
        // 0x2c8dac: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8DAC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8DB0u;
        goto label_2c8db0;
    }
    ctx->pc = 0x2C8DA8u;
    {
        const bool branch_taken_0x2c8da8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8da8) {
            ctx->pc = 0x2C8DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8DA8u;
            // 0x2c8dac: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8DAC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4EE0u;
            return;
        }
    }
    ctx->pc = 0x2C8DB0u;
label_2c8db0:
    // 0x2c8db0: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8db0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8db4:
    // 0x2c8db4: 0x0  nop
    ctx->pc = 0x2c8db4u;
    // NOP
label_2c8db8:
    // 0x2c8db8: 0x0  nop
    ctx->pc = 0x2c8db8u;
    // NOP
label_2c8dbc:
    // 0x2c8dbc: 0x0  nop
    ctx->pc = 0x2c8dbcu;
    // NOP
label_2c8dc0:
    // 0x2c8dc0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8dc4:
    if (ctx->pc == 0x2C8DC4u) {
        ctx->pc = 0x2C8DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DC0u;
        // 0x2c8dc4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8DC4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8DC8u;
        goto label_2c8dc8;
    }
    ctx->pc = 0x2C8DC0u;
    {
        const bool branch_taken_0x2c8dc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8dc0) {
            ctx->pc = 0x2C8DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8DC0u;
            // 0x2c8dc4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8DC4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC334u;
            return;
        }
    }
    ctx->pc = 0x2C8DC8u;
label_2c8dc8:
    // 0x2c8dc8: 0x5f37304d  .word       0x5F37304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00170000 <InstrIdType: CPU_NORMAL>
label_2c8dcc:
    if (ctx->pc == 0x2C8DCCu) {
        ctx->pc = 0x2C8DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DC8u;
        // 0x2c8dcc: 0x502e3330  beql        $at, $t6, . + 4 + (0x3330 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8DCC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8DD0u;
        goto label_2c8dd0;
    }
    ctx->pc = 0x2C8DC8u;
    {
        const bool branch_taken_0x2c8dc8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8dc8) {
            ctx->pc = 0x2C8DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8DC8u;
            // 0x2c8dcc: 0x502e3330  beql        $at, $t6, . + 4 + (0x3330 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8DCC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4F00u;
            return;
        }
    }
    ctx->pc = 0x2C8DD0u;
label_2c8dd0:
    // 0x2c8dd0: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8dd0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8dd4:
    // 0x2c8dd4: 0x0  nop
    ctx->pc = 0x2c8dd4u;
    // NOP
label_2c8dd8:
    // 0x2c8dd8: 0x0  nop
    ctx->pc = 0x2c8dd8u;
    // NOP
label_2c8ddc:
    // 0x2c8ddc: 0x0  nop
    ctx->pc = 0x2c8ddcu;
    // NOP
label_2c8de0:
    // 0x2c8de0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8de4:
    if (ctx->pc == 0x2C8DE4u) {
        ctx->pc = 0x2C8DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DE0u;
        // 0x2c8de4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8DE4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8DE8u;
        goto label_2c8de8;
    }
    ctx->pc = 0x2C8DE0u;
    {
        const bool branch_taken_0x2c8de0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8de0) {
            ctx->pc = 0x2C8DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8DE0u;
            // 0x2c8de4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8DE4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC354u;
            return;
        }
    }
    ctx->pc = 0x2C8DE8u;
label_2c8de8:
    // 0x2c8de8: 0x5f38304d  .word       0x5F38304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_2c8dec:
    if (ctx->pc == 0x2C8DECu) {
        ctx->pc = 0x2C8DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DE8u;
        // 0x2c8dec: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8DEC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8DF0u;
        goto label_2c8df0;
    }
    ctx->pc = 0x2C8DE8u;
    {
        const bool branch_taken_0x2c8de8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8de8) {
            ctx->pc = 0x2C8DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8DE8u;
            // 0x2c8dec: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8DEC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4F20u;
            return;
        }
    }
    ctx->pc = 0x2C8DF0u;
label_2c8df0:
    // 0x2c8df0: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8df0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8df4:
    // 0x2c8df4: 0x0  nop
    ctx->pc = 0x2c8df4u;
    // NOP
label_2c8df8:
    // 0x2c8df8: 0x0  nop
    ctx->pc = 0x2c8df8u;
    // NOP
label_2c8dfc:
    // 0x2c8dfc: 0x0  nop
    ctx->pc = 0x2c8dfcu;
    // NOP
label_2c8e00:
    // 0x2c8e00: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8e04:
    if (ctx->pc == 0x2C8E04u) {
        ctx->pc = 0x2C8E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E00u;
        // 0x2c8e04: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8E04 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8E08u;
        goto label_2c8e08;
    }
    ctx->pc = 0x2C8E00u;
    {
        const bool branch_taken_0x2c8e00 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8e00) {
            ctx->pc = 0x2C8E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8E00u;
            // 0x2c8e04: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8E04 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC374u;
            return;
        }
    }
    ctx->pc = 0x2C8E08u;
label_2c8e08:
    // 0x2c8e08: 0x5f38304d  .word       0x5F38304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_2c8e0c:
    if (ctx->pc == 0x2C8E0Cu) {
        ctx->pc = 0x2C8E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E08u;
        // 0x2c8e0c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8E0C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8E10u;
        goto label_2c8e10;
    }
    ctx->pc = 0x2C8E08u;
    {
        const bool branch_taken_0x2c8e08 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8e08) {
            ctx->pc = 0x2C8E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8E08u;
            // 0x2c8e0c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8E0C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4F40u;
            return;
        }
    }
    ctx->pc = 0x2C8E10u;
label_2c8e10:
    // 0x2c8e10: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8e10u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8e14:
    // 0x2c8e14: 0x0  nop
    ctx->pc = 0x2c8e14u;
    // NOP
label_2c8e18:
    // 0x2c8e18: 0x0  nop
    ctx->pc = 0x2c8e18u;
    // NOP
label_2c8e1c:
    // 0x2c8e1c: 0x0  nop
    ctx->pc = 0x2c8e1cu;
    // NOP
label_2c8e20:
    // 0x2c8e20: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8e24:
    if (ctx->pc == 0x2C8E24u) {
        ctx->pc = 0x2C8E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E20u;
        // 0x2c8e24: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8E24 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8E28u;
        goto label_2c8e28;
    }
    ctx->pc = 0x2C8E20u;
    {
        const bool branch_taken_0x2c8e20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8e20) {
            ctx->pc = 0x2C8E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8E20u;
            // 0x2c8e24: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8E24 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC394u;
            return;
        }
    }
    ctx->pc = 0x2C8E28u;
label_2c8e28:
    // 0x2c8e28: 0x5f38304d  .word       0x5F38304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_2c8e2c:
    if (ctx->pc == 0x2C8E2Cu) {
        ctx->pc = 0x2C8E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E28u;
        // 0x2c8e2c: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8E2C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8E30u;
        goto label_2c8e30;
    }
    ctx->pc = 0x2C8E28u;
    {
        const bool branch_taken_0x2c8e28 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8e28) {
            ctx->pc = 0x2C8E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8E28u;
            // 0x2c8e2c: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8E2C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4F60u;
            return;
        }
    }
    ctx->pc = 0x2C8E30u;
label_2c8e30:
    // 0x2c8e30: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8e30u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8e34:
    // 0x2c8e34: 0x0  nop
    ctx->pc = 0x2c8e34u;
    // NOP
label_2c8e38:
    // 0x2c8e38: 0x0  nop
    ctx->pc = 0x2c8e38u;
    // NOP
label_2c8e3c:
    // 0x2c8e3c: 0x0  nop
    ctx->pc = 0x2c8e3cu;
    // NOP
label_2c8e40:
    // 0x2c8e40: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8e44:
    if (ctx->pc == 0x2C8E44u) {
        ctx->pc = 0x2C8E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E40u;
        // 0x2c8e44: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8E44 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8E48u;
        goto label_2c8e48;
    }
    ctx->pc = 0x2C8E40u;
    {
        const bool branch_taken_0x2c8e40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8e40) {
            ctx->pc = 0x2C8E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8E40u;
            // 0x2c8e44: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8E44 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC3B4u;
            return;
        }
    }
    ctx->pc = 0x2C8E48u;
label_2c8e48:
    // 0x2c8e48: 0x5f31314d  .word       0x5F31314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00110000 <InstrIdType: CPU_NORMAL>
label_2c8e4c:
    if (ctx->pc == 0x2C8E4Cu) {
        ctx->pc = 0x2C8E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E48u;
        // 0x2c8e4c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8E4C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8E50u;
        goto label_2c8e50;
    }
    ctx->pc = 0x2C8E48u;
    {
        const bool branch_taken_0x2c8e48 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8e48) {
            ctx->pc = 0x2C8E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8E48u;
            // 0x2c8e4c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8E4C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5380u;
            return;
        }
    }
    ctx->pc = 0x2C8E50u;
label_2c8e50:
    // 0x2c8e50: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8e50u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8e54:
    // 0x2c8e54: 0x0  nop
    ctx->pc = 0x2c8e54u;
    // NOP
label_2c8e58:
    // 0x2c8e58: 0x0  nop
    ctx->pc = 0x2c8e58u;
    // NOP
label_2c8e5c:
    // 0x2c8e5c: 0x0  nop
    ctx->pc = 0x2c8e5cu;
    // NOP
label_2c8e60:
    // 0x2c8e60: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8e64:
    if (ctx->pc == 0x2C8E64u) {
        ctx->pc = 0x2C8E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E60u;
        // 0x2c8e64: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8E64 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8E68u;
        goto label_2c8e68;
    }
    ctx->pc = 0x2C8E60u;
    {
        const bool branch_taken_0x2c8e60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8e60) {
            ctx->pc = 0x2C8E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8E60u;
            // 0x2c8e64: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8E64 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC3D4u;
            return;
        }
    }
    ctx->pc = 0x2C8E68u;
label_2c8e68:
    // 0x2c8e68: 0x5f31314d  .word       0x5F31314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00110000 <InstrIdType: CPU_NORMAL>
label_2c8e6c:
    if (ctx->pc == 0x2C8E6Cu) {
        ctx->pc = 0x2C8E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E68u;
        // 0x2c8e6c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8E6C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8E70u;
        goto label_2c8e70;
    }
    ctx->pc = 0x2C8E68u;
    {
        const bool branch_taken_0x2c8e68 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8e68) {
            ctx->pc = 0x2C8E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8E68u;
            // 0x2c8e6c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8E6C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D53A0u;
            return;
        }
    }
    ctx->pc = 0x2C8E70u;
label_2c8e70:
    // 0x2c8e70: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8e70u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8e74:
    // 0x2c8e74: 0x0  nop
    ctx->pc = 0x2c8e74u;
    // NOP
label_2c8e78:
    // 0x2c8e78: 0x0  nop
    ctx->pc = 0x2c8e78u;
    // NOP
label_2c8e7c:
    // 0x2c8e7c: 0x0  nop
    ctx->pc = 0x2c8e7cu;
    // NOP
label_2c8e80:
    // 0x2c8e80: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8e84:
    if (ctx->pc == 0x2C8E84u) {
        ctx->pc = 0x2C8E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E80u;
        // 0x2c8e84: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8E84 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8E88u;
        goto label_2c8e88;
    }
    ctx->pc = 0x2C8E80u;
    {
        const bool branch_taken_0x2c8e80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8e80) {
            ctx->pc = 0x2C8E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8E80u;
            // 0x2c8e84: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8E84 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC3F4u;
            return;
        }
    }
    ctx->pc = 0x2C8E88u;
label_2c8e88:
    // 0x2c8e88: 0x5f31314d  .word       0x5F31314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00110000 <InstrIdType: CPU_NORMAL>
label_2c8e8c:
    if (ctx->pc == 0x2C8E8Cu) {
        ctx->pc = 0x2C8E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E88u;
        // 0x2c8e8c: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8E8C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8E90u;
        goto label_2c8e90;
    }
    ctx->pc = 0x2C8E88u;
    {
        const bool branch_taken_0x2c8e88 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8e88) {
            ctx->pc = 0x2C8E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8E88u;
            // 0x2c8e8c: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8E8C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D53C0u;
            return;
        }
    }
    ctx->pc = 0x2C8E90u;
label_2c8e90:
    // 0x2c8e90: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8e90u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8e94:
    // 0x2c8e94: 0x0  nop
    ctx->pc = 0x2c8e94u;
    // NOP
label_2c8e98:
    // 0x2c8e98: 0x0  nop
    ctx->pc = 0x2c8e98u;
    // NOP
label_2c8e9c:
    // 0x2c8e9c: 0x0  nop
    ctx->pc = 0x2c8e9cu;
    // NOP
label_2c8ea0:
    // 0x2c8ea0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8ea4:
    if (ctx->pc == 0x2C8EA4u) {
        ctx->pc = 0x2C8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8EA0u;
        // 0x2c8ea4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8EA4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8EA8u;
        goto label_2c8ea8;
    }
    ctx->pc = 0x2C8EA0u;
    {
        const bool branch_taken_0x2c8ea0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8ea0) {
            ctx->pc = 0x2C8EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8EA0u;
            // 0x2c8ea4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8EA4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC414u;
            return;
        }
    }
    ctx->pc = 0x2C8EA8u;
label_2c8ea8:
    // 0x2c8ea8: 0x5f34314d  .word       0x5F34314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_2c8eac:
    if (ctx->pc == 0x2C8EACu) {
        ctx->pc = 0x2C8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8EA8u;
        // 0x2c8eac: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8EAC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8EB0u;
        goto label_2c8eb0;
    }
    ctx->pc = 0x2C8EA8u;
    {
        const bool branch_taken_0x2c8ea8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8ea8) {
            ctx->pc = 0x2C8EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8EA8u;
            // 0x2c8eac: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8EAC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D53E0u;
            return;
        }
    }
    ctx->pc = 0x2C8EB0u;
label_2c8eb0:
    // 0x2c8eb0: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8eb0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8eb4:
    // 0x2c8eb4: 0x0  nop
    ctx->pc = 0x2c8eb4u;
    // NOP
label_2c8eb8:
    // 0x2c8eb8: 0x0  nop
    ctx->pc = 0x2c8eb8u;
    // NOP
label_2c8ebc:
    // 0x2c8ebc: 0x0  nop
    ctx->pc = 0x2c8ebcu;
    // NOP
label_2c8ec0:
    // 0x2c8ec0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8ec4:
    if (ctx->pc == 0x2C8EC4u) {
        ctx->pc = 0x2C8EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8EC0u;
        // 0x2c8ec4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8EC4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8EC8u;
        goto label_2c8ec8;
    }
    ctx->pc = 0x2C8EC0u;
    {
        const bool branch_taken_0x2c8ec0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8ec0) {
            ctx->pc = 0x2C8EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8EC0u;
            // 0x2c8ec4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8EC4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC434u;
            return;
        }
    }
    ctx->pc = 0x2C8EC8u;
label_2c8ec8:
    // 0x2c8ec8: 0x5f34314d  .word       0x5F34314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_2c8ecc:
    if (ctx->pc == 0x2C8ECCu) {
        ctx->pc = 0x2C8ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8EC8u;
        // 0x2c8ecc: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8ECC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8ED0u;
        goto label_2c8ed0;
    }
    ctx->pc = 0x2C8EC8u;
    {
        const bool branch_taken_0x2c8ec8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8ec8) {
            ctx->pc = 0x2C8ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8EC8u;
            // 0x2c8ecc: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8ECC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5400u;
            return;
        }
    }
    ctx->pc = 0x2C8ED0u;
label_2c8ed0:
    // 0x2c8ed0: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8ed0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8ed4:
    // 0x2c8ed4: 0x0  nop
    ctx->pc = 0x2c8ed4u;
    // NOP
label_2c8ed8:
    // 0x2c8ed8: 0x0  nop
    ctx->pc = 0x2c8ed8u;
    // NOP
label_2c8edc:
    // 0x2c8edc: 0x0  nop
    ctx->pc = 0x2c8edcu;
    // NOP
label_2c8ee0:
    // 0x2c8ee0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8ee4:
    if (ctx->pc == 0x2C8EE4u) {
        ctx->pc = 0x2C8EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8EE0u;
        // 0x2c8ee4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8EE4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8EE8u;
        goto label_2c8ee8;
    }
    ctx->pc = 0x2C8EE0u;
    {
        const bool branch_taken_0x2c8ee0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8ee0) {
            ctx->pc = 0x2C8EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8EE0u;
            // 0x2c8ee4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8EE4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC454u;
            return;
        }
    }
    ctx->pc = 0x2C8EE8u;
label_2c8ee8:
    // 0x2c8ee8: 0x5f34314d  .word       0x5F34314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_2c8eec:
    if (ctx->pc == 0x2C8EECu) {
        ctx->pc = 0x2C8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8EE8u;
        // 0x2c8eec: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8EEC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8EF0u;
        goto label_2c8ef0;
    }
    ctx->pc = 0x2C8EE8u;
    {
        const bool branch_taken_0x2c8ee8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8ee8) {
            ctx->pc = 0x2C8EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8EE8u;
            // 0x2c8eec: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8EEC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5420u;
            return;
        }
    }
    ctx->pc = 0x2C8EF0u;
label_2c8ef0:
    // 0x2c8ef0: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8ef0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8ef4:
    // 0x2c8ef4: 0x0  nop
    ctx->pc = 0x2c8ef4u;
    // NOP
label_2c8ef8:
    // 0x2c8ef8: 0x0  nop
    ctx->pc = 0x2c8ef8u;
    // NOP
label_2c8efc:
    // 0x2c8efc: 0x0  nop
    ctx->pc = 0x2c8efcu;
    // NOP
label_2c8f00:
    // 0x2c8f00: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8f04:
    if (ctx->pc == 0x2C8F04u) {
        ctx->pc = 0x2C8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F00u;
        // 0x2c8f04: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8F04 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8F08u;
        goto label_2c8f08;
    }
    ctx->pc = 0x2C8F00u;
    {
        const bool branch_taken_0x2c8f00 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8f00) {
            ctx->pc = 0x2C8F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8F00u;
            // 0x2c8f04: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8F04 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC474u;
            return;
        }
    }
    ctx->pc = 0x2C8F08u;
label_2c8f08:
    // 0x2c8f08: 0x5f35314d  .word       0x5F35314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00150000 <InstrIdType: CPU_NORMAL>
label_2c8f0c:
    if (ctx->pc == 0x2C8F0Cu) {
        ctx->pc = 0x2C8F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F08u;
        // 0x2c8f0c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8F0C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8F10u;
        goto label_2c8f10;
    }
    ctx->pc = 0x2C8F08u;
    {
        const bool branch_taken_0x2c8f08 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8f08) {
            ctx->pc = 0x2C8F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8F08u;
            // 0x2c8f0c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8F0C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5440u;
            return;
        }
    }
    ctx->pc = 0x2C8F10u;
label_2c8f10:
    // 0x2c8f10: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8f10u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8f14:
    // 0x2c8f14: 0x0  nop
    ctx->pc = 0x2c8f14u;
    // NOP
label_2c8f18:
    // 0x2c8f18: 0x0  nop
    ctx->pc = 0x2c8f18u;
    // NOP
label_2c8f1c:
    // 0x2c8f1c: 0x0  nop
    ctx->pc = 0x2c8f1cu;
    // NOP
label_2c8f20:
    // 0x2c8f20: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8f24:
    if (ctx->pc == 0x2C8F24u) {
        ctx->pc = 0x2C8F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F20u;
        // 0x2c8f24: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8F24 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8F28u;
        goto label_2c8f28;
    }
    ctx->pc = 0x2C8F20u;
    {
        const bool branch_taken_0x2c8f20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8f20) {
            ctx->pc = 0x2C8F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8F20u;
            // 0x2c8f24: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8F24 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC494u;
            return;
        }
    }
    ctx->pc = 0x2C8F28u;
label_2c8f28:
    // 0x2c8f28: 0x5f35314d  .word       0x5F35314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00150000 <InstrIdType: CPU_NORMAL>
label_2c8f2c:
    if (ctx->pc == 0x2C8F2Cu) {
        ctx->pc = 0x2C8F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F28u;
        // 0x2c8f2c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8F2C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8F30u;
        goto label_2c8f30;
    }
    ctx->pc = 0x2C8F28u;
    {
        const bool branch_taken_0x2c8f28 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8f28) {
            ctx->pc = 0x2C8F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8F28u;
            // 0x2c8f2c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8F2C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5460u;
            return;
        }
    }
    ctx->pc = 0x2C8F30u;
label_2c8f30:
    // 0x2c8f30: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8f30u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8f34:
    // 0x2c8f34: 0x0  nop
    ctx->pc = 0x2c8f34u;
    // NOP
label_2c8f38:
    // 0x2c8f38: 0x0  nop
    ctx->pc = 0x2c8f38u;
    // NOP
label_2c8f3c:
    // 0x2c8f3c: 0x0  nop
    ctx->pc = 0x2c8f3cu;
    // NOP
label_2c8f40:
    // 0x2c8f40: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8f44:
    if (ctx->pc == 0x2C8F44u) {
        ctx->pc = 0x2C8F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F40u;
        // 0x2c8f44: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8F44 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8F48u;
        goto label_2c8f48;
    }
    ctx->pc = 0x2C8F40u;
    {
        const bool branch_taken_0x2c8f40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8f40) {
            ctx->pc = 0x2C8F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8F40u;
            // 0x2c8f44: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8F44 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC4B4u;
            return;
        }
    }
    ctx->pc = 0x2C8F48u;
label_2c8f48:
    // 0x2c8f48: 0x5f38314d  .word       0x5F38314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_2c8f4c:
    if (ctx->pc == 0x2C8F4Cu) {
        ctx->pc = 0x2C8F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F48u;
        // 0x2c8f4c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8F4C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8F50u;
        goto label_2c8f50;
    }
    ctx->pc = 0x2C8F48u;
    {
        const bool branch_taken_0x2c8f48 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8f48) {
            ctx->pc = 0x2C8F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8F48u;
            // 0x2c8f4c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8F4C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5480u;
            return;
        }
    }
    ctx->pc = 0x2C8F50u;
label_2c8f50:
    // 0x2c8f50: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8f50u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8f54:
    // 0x2c8f54: 0x0  nop
    ctx->pc = 0x2c8f54u;
    // NOP
label_2c8f58:
    // 0x2c8f58: 0x0  nop
    ctx->pc = 0x2c8f58u;
    // NOP
label_2c8f5c:
    // 0x2c8f5c: 0x0  nop
    ctx->pc = 0x2c8f5cu;
    // NOP
label_2c8f60:
    // 0x2c8f60: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8f64:
    if (ctx->pc == 0x2C8F64u) {
        ctx->pc = 0x2C8F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F60u;
        // 0x2c8f64: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8F64 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8F68u;
        goto label_2c8f68;
    }
    ctx->pc = 0x2C8F60u;
    {
        const bool branch_taken_0x2c8f60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8f60) {
            ctx->pc = 0x2C8F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8F60u;
            // 0x2c8f64: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8F64 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC4D4u;
            return;
        }
    }
    ctx->pc = 0x2C8F68u;
label_2c8f68:
    // 0x2c8f68: 0x5f38314d  .word       0x5F38314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_2c8f6c:
    if (ctx->pc == 0x2C8F6Cu) {
        ctx->pc = 0x2C8F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F68u;
        // 0x2c8f6c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8F6C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8F70u;
        goto label_2c8f70;
    }
    ctx->pc = 0x2C8F68u;
    {
        const bool branch_taken_0x2c8f68 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8f68) {
            ctx->pc = 0x2C8F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8F68u;
            // 0x2c8f6c: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8F6C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D54A0u;
            return;
        }
    }
    ctx->pc = 0x2C8F70u;
label_2c8f70:
    // 0x2c8f70: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8f70u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8f74:
    // 0x2c8f74: 0x0  nop
    ctx->pc = 0x2c8f74u;
    // NOP
label_2c8f78:
    // 0x2c8f78: 0x0  nop
    ctx->pc = 0x2c8f78u;
    // NOP
label_2c8f7c:
    // 0x2c8f7c: 0x0  nop
    ctx->pc = 0x2c8f7cu;
    // NOP
label_2c8f80:
    // 0x2c8f80: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8f84:
    if (ctx->pc == 0x2C8F84u) {
        ctx->pc = 0x2C8F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F80u;
        // 0x2c8f84: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8F84 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8F88u;
        goto label_2c8f88;
    }
    ctx->pc = 0x2C8F80u;
    {
        const bool branch_taken_0x2c8f80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8f80) {
            ctx->pc = 0x2C8F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8F80u;
            // 0x2c8f84: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8F84 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC4F4u;
            return;
        }
    }
    ctx->pc = 0x2C8F88u;
label_2c8f88:
    // 0x2c8f88: 0x5f38314d  .word       0x5F38314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_2c8f8c:
    if (ctx->pc == 0x2C8F8Cu) {
        ctx->pc = 0x2C8F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F88u;
        // 0x2c8f8c: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8F8C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8F90u;
        goto label_2c8f90;
    }
    ctx->pc = 0x2C8F88u;
    {
        const bool branch_taken_0x2c8f88 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8f88) {
            ctx->pc = 0x2C8F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8F88u;
            // 0x2c8f8c: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8F8C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D54C0u;
            return;
        }
    }
    ctx->pc = 0x2C8F90u;
label_2c8f90:
    // 0x2c8f90: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8f90u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8f94:
    // 0x2c8f94: 0x0  nop
    ctx->pc = 0x2c8f94u;
    // NOP
label_2c8f98:
    // 0x2c8f98: 0x0  nop
    ctx->pc = 0x2c8f98u;
    // NOP
label_2c8f9c:
    // 0x2c8f9c: 0x0  nop
    ctx->pc = 0x2c8f9cu;
    // NOP
label_2c8fa0:
    // 0x2c8fa0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8fa4:
    if (ctx->pc == 0x2C8FA4u) {
        ctx->pc = 0x2C8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FA0u;
        // 0x2c8fa4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8FA4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8FA8u;
        goto label_2c8fa8;
    }
    ctx->pc = 0x2C8FA0u;
    {
        const bool branch_taken_0x2c8fa0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8fa0) {
            ctx->pc = 0x2C8FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8FA0u;
            // 0x2c8fa4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8FA4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC514u;
            return;
        }
    }
    ctx->pc = 0x2C8FA8u;
label_2c8fa8:
    // 0x2c8fa8: 0x5f39314d  .word       0x5F39314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00190000 <InstrIdType: CPU_NORMAL>
label_2c8fac:
    if (ctx->pc == 0x2C8FACu) {
        ctx->pc = 0x2C8FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FA8u;
        // 0x2c8fac: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8FAC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8FB0u;
        goto label_2c8fb0;
    }
    ctx->pc = 0x2C8FA8u;
    {
        const bool branch_taken_0x2c8fa8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8fa8) {
            ctx->pc = 0x2C8FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8FA8u;
            // 0x2c8fac: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8FAC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D54E0u;
            return;
        }
    }
    ctx->pc = 0x2C8FB0u;
label_2c8fb0:
    // 0x2c8fb0: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8fb0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8fb4:
    // 0x2c8fb4: 0x0  nop
    ctx->pc = 0x2c8fb4u;
    // NOP
label_2c8fb8:
    // 0x2c8fb8: 0x0  nop
    ctx->pc = 0x2c8fb8u;
    // NOP
label_2c8fbc:
    // 0x2c8fbc: 0x0  nop
    ctx->pc = 0x2c8fbcu;
    // NOP
label_2c8fc0:
    // 0x2c8fc0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8fc4:
    if (ctx->pc == 0x2C8FC4u) {
        ctx->pc = 0x2C8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FC0u;
        // 0x2c8fc4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8FC4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8FC8u;
        goto label_2c8fc8;
    }
    ctx->pc = 0x2C8FC0u;
    {
        const bool branch_taken_0x2c8fc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8fc0) {
            ctx->pc = 0x2C8FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8FC0u;
            // 0x2c8fc4: 0x5c344549  .word       0x5C344549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8FC4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC534u;
            return;
        }
    }
    ctx->pc = 0x2C8FC8u;
label_2c8fc8:
    // 0x2c8fc8: 0x5f39314d  .word       0x5F39314D                   # bgtzl       $t9, . + 4 + (0x314D << 2) # 00190000 <InstrIdType: CPU_NORMAL>
label_2c8fcc:
    if (ctx->pc == 0x2C8FCCu) {
        ctx->pc = 0x2C8FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FC8u;
        // 0x2c8fcc: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C8FCC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8FD0u;
        goto label_2c8fd0;
    }
    ctx->pc = 0x2C8FC8u;
    {
        const bool branch_taken_0x2c8fc8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c8fc8) {
            ctx->pc = 0x2C8FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8FC8u;
            // 0x2c8fcc: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C8FCC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5500u;
            return;
        }
    }
    ctx->pc = 0x2C8FD0u;
label_2c8fd0:
    // 0x2c8fd0: 0x313b5353  andi        $k1, $t1, 0x5353
    ctx->pc = 0x2c8fd0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
label_2c8fd4:
    // 0x2c8fd4: 0x0  nop
    ctx->pc = 0x2c8fd4u;
    // NOP
label_2c8fd8:
    // 0x2c8fd8: 0x0  nop
    ctx->pc = 0x2c8fd8u;
    // NOP
label_2c8fdc:
    // 0x2c8fdc: 0x0  nop
    ctx->pc = 0x2c8fdcu;
    // NOP
label_2c8fe0:
    // 0x2c8fe0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c8fe4:
    if (ctx->pc == 0x2C8FE4u) {
        ctx->pc = 0x2C8FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FE0u;
        // 0x2c8fe4: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C8FE4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8FE8u;
        goto label_2c8fe8;
    }
    ctx->pc = 0x2C8FE0u;
    {
        const bool branch_taken_0x2c8fe0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c8fe0) {
            ctx->pc = 0x2C8FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8FE0u;
            // 0x2c8fe4: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C8FE4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC554u;
            return;
        }
    }
    ctx->pc = 0x2C8FE8u;
label_2c8fe8:
    // 0x2c8fe8: 0x4f4d4445  .word       0x4F4D4445                   # INVALID     $k0, $t5, 0x4445 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8fe8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C8FE8 raw=0x4F4D4445");
 /* MITIGATED */
label_2c8fec:
    // 0x2c8fec: 0x4354455f  .word       0x4354455F                   # INVALID     $k0, $s4, 0x455F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c8fecu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2C8FEC raw=0x4354455F");
 /* MITIGATED */
label_2c8ff0:
    // 0x2c8ff0: 0x5353502e  beql        $k0, $s3, . + 4 + (0x502E << 2)
label_2c8ff4:
    if (ctx->pc == 0x2C8FF4u) {
        ctx->pc = 0x2C8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FF0u;
        // 0x2c8ff4: 0x313b  dsra        $a2, $zero, 4 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8FF8u;
        goto label_2c8ff8;
    }
    ctx->pc = 0x2C8FF0u;
    {
        const bool branch_taken_0x2c8ff0 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 19));
        if (branch_taken_0x2c8ff0) {
            ctx->pc = 0x2C8FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8FF0u;
            // 0x2c8ff4: 0x313b  dsra        $a2, $zero, 4 (Delay Slot)
            SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD0ACu;
            return;
        }
    }
    ctx->pc = 0x2C8FF8u;
label_2c8ff8:
    // 0x2c8ff8: 0x0  nop
    ctx->pc = 0x2c8ff8u;
    // NOP
label_2c8ffc:
    // 0x2c8ffc: 0x0  nop
    ctx->pc = 0x2c8ffcu;
    // NOP
label_2c9000:
    // 0x2c9000: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9004:
    if (ctx->pc == 0x2C9004u) {
        ctx->pc = 0x2C9004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9000u;
        // 0x2c9004: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C9004 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9008u;
        goto label_2c9008;
    }
    ctx->pc = 0x2C9000u;
    {
        const bool branch_taken_0x2c9000 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9000) {
            ctx->pc = 0x2C9004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9000u;
            // 0x2c9004: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C9004 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC574u;
            return;
        }
    }
    ctx->pc = 0x2C9008u;
label_2c9008:
    // 0x2c9008: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2)
label_2c900c:
    if (ctx->pc == 0x2C900Cu) {
        ctx->pc = 0x2C900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9008u;
        // 0x2c900c: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9010u;
        goto label_2c9010;
    }
    ctx->pc = 0x2C9008u;
    {
        const bool branch_taken_0x2c9008 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c9008) {
            ctx->pc = 0x2C900Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9008u;
            // 0x2c900c: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D50CCu;
            return;
        }
    }
    ctx->pc = 0x2C9010u;
label_2c9010:
    // 0x2c9010: 0x0  nop
    ctx->pc = 0x2c9010u;
    // NOP
label_2c9014:
    // 0x2c9014: 0x0  nop
    ctx->pc = 0x2c9014u;
    // NOP
label_2c9018:
    // 0x2c9018: 0x0  nop
    ctx->pc = 0x2c9018u;
    // NOP
label_2c901c:
    // 0x2c901c: 0x0  nop
    ctx->pc = 0x2c901cu;
    // NOP
label_2c9020:
    // 0x2c9020: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9024:
    if (ctx->pc == 0x2C9024u) {
        ctx->pc = 0x2C9024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9020u;
        // 0x2c9024: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C9024 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9028u;
        goto label_2c9028;
    }
    ctx->pc = 0x2C9020u;
    {
        const bool branch_taken_0x2c9020 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9020) {
            ctx->pc = 0x2C9024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9020u;
            // 0x2c9024: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C9024 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC594u;
            return;
        }
    }
    ctx->pc = 0x2C9028u;
label_2c9028:
    // 0x2c9028: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2)
label_2c902c:
    if (ctx->pc == 0x2C902Cu) {
        ctx->pc = 0x2C902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9028u;
        // 0x2c902c: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9030u;
        goto label_2c9030;
    }
    ctx->pc = 0x2C9028u;
    {
        const bool branch_taken_0x2c9028 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c9028) {
            ctx->pc = 0x2C902Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9028u;
            // 0x2c902c: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D54ECu;
            return;
        }
    }
    ctx->pc = 0x2C9030u;
label_2c9030:
    // 0x2c9030: 0x0  nop
    ctx->pc = 0x2c9030u;
    // NOP
label_2c9034:
    // 0x2c9034: 0x0  nop
    ctx->pc = 0x2c9034u;
    // NOP
label_2c9038:
    // 0x2c9038: 0x0  nop
    ctx->pc = 0x2c9038u;
    // NOP
label_2c903c:
    // 0x2c903c: 0x0  nop
    ctx->pc = 0x2c903cu;
    // NOP
label_2c9040:
    // 0x2c9040: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9044:
    if (ctx->pc == 0x2C9044u) {
        ctx->pc = 0x2C9044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9040u;
        // 0x2c9044: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C9044 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9048u;
        goto label_2c9048;
    }
    ctx->pc = 0x2C9040u;
    {
        const bool branch_taken_0x2c9040 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9040) {
            ctx->pc = 0x2C9044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9040u;
            // 0x2c9044: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C9044 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC5B4u;
            return;
        }
    }
    ctx->pc = 0x2C9048u;
label_2c9048:
    // 0x2c9048: 0x502e3530  beql        $at, $t6, . + 4 + (0x3530 << 2)
label_2c904c:
    if (ctx->pc == 0x2C904Cu) {
        ctx->pc = 0x2C904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9048u;
        // 0x2c904c: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9050u;
        goto label_2c9050;
    }
    ctx->pc = 0x2C9048u;
    {
        const bool branch_taken_0x2c9048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c9048) {
            ctx->pc = 0x2C904Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9048u;
            // 0x2c904c: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D650Cu;
            return;
        }
    }
    ctx->pc = 0x2C9050u;
label_2c9050:
    // 0x2c9050: 0x0  nop
    ctx->pc = 0x2c9050u;
    // NOP
label_2c9054:
    // 0x2c9054: 0x0  nop
    ctx->pc = 0x2c9054u;
    // NOP
label_2c9058:
    // 0x2c9058: 0x0  nop
    ctx->pc = 0x2c9058u;
    // NOP
label_2c905c:
    // 0x2c905c: 0x0  nop
    ctx->pc = 0x2c905cu;
    // NOP
label_2c9060:
    // 0x2c9060: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9064:
    if (ctx->pc == 0x2C9064u) {
        ctx->pc = 0x2C9064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9060u;
        // 0x2c9064: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C9064 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9068u;
        goto label_2c9068;
    }
    ctx->pc = 0x2C9060u;
    {
        const bool branch_taken_0x2c9060 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9060) {
            ctx->pc = 0x2C9064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9060u;
            // 0x2c9064: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C9064 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC5D4u;
            return;
        }
    }
    ctx->pc = 0x2C9068u;
label_2c9068:
    // 0x2c9068: 0x4f5f3730  .word       0x4F5F3730                   # INVALID     $k0, $ra, 0x3730 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9068u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9068 raw=0x4F5F3730");
 /* MITIGATED */
label_2c906c:
    // 0x2c906c: 0x502e3150  beql        $at, $t6, . + 4 + (0x3150 << 2)
label_2c9070:
    if (ctx->pc == 0x2C9070u) {
        ctx->pc = 0x2C9070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C906Cu;
        // 0x2c9070: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9074u;
        goto label_2c9074;
    }
    ctx->pc = 0x2C906Cu;
    {
        const bool branch_taken_0x2c906c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c906c) {
            ctx->pc = 0x2C9070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C906Cu;
            // 0x2c9070: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D55B0u;
            return;
        }
    }
    ctx->pc = 0x2C9074u;
label_2c9074:
    // 0x2c9074: 0x0  nop
    ctx->pc = 0x2c9074u;
    // NOP
label_2c9078:
    // 0x2c9078: 0x0  nop
    ctx->pc = 0x2c9078u;
    // NOP
label_2c907c:
    // 0x2c907c: 0x0  nop
    ctx->pc = 0x2c907cu;
    // NOP
label_2c9080:
    // 0x2c9080: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9084:
    if (ctx->pc == 0x2C9084u) {
        ctx->pc = 0x2C9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9080u;
        // 0x2c9084: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C9084 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9088u;
        goto label_2c9088;
    }
    ctx->pc = 0x2C9080u;
    {
        const bool branch_taken_0x2c9080 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9080) {
            ctx->pc = 0x2C9084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9080u;
            // 0x2c9084: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C9084 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC5F4u;
            return;
        }
    }
    ctx->pc = 0x2C9088u;
label_2c9088:
    // 0x2c9088: 0x4f5f3730  .word       0x4F5F3730                   # INVALID     $k0, $ra, 0x3730 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9088u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9088 raw=0x4F5F3730");
 /* MITIGATED */
label_2c908c:
    // 0x2c908c: 0x502e3250  beql        $at, $t6, . + 4 + (0x3250 << 2)
label_2c9090:
    if (ctx->pc == 0x2C9090u) {
        ctx->pc = 0x2C9090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C908Cu;
        // 0x2c9090: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9094u;
        goto label_2c9094;
    }
    ctx->pc = 0x2C908Cu;
    {
        const bool branch_taken_0x2c908c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c908c) {
            ctx->pc = 0x2C9090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C908Cu;
            // 0x2c9090: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D59D0u;
            return;
        }
    }
    ctx->pc = 0x2C9094u;
label_2c9094:
    // 0x2c9094: 0x0  nop
    ctx->pc = 0x2c9094u;
    // NOP
label_2c9098:
    // 0x2c9098: 0x0  nop
    ctx->pc = 0x2c9098u;
    // NOP
label_2c909c:
    // 0x2c909c: 0x0  nop
    ctx->pc = 0x2c909cu;
    // NOP
label_2c90a0:
    // 0x2c90a0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c90a4:
    if (ctx->pc == 0x2C90A4u) {
        ctx->pc = 0x2C90A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C90A0u;
        // 0x2c90a4: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C90A4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C90A8u;
        goto label_2c90a8;
    }
    ctx->pc = 0x2C90A0u;
    {
        const bool branch_taken_0x2c90a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c90a0) {
            ctx->pc = 0x2C90A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C90A0u;
            // 0x2c90a4: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C90A4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC614u;
            return;
        }
    }
    ctx->pc = 0x2C90A8u;
label_2c90a8:
    // 0x2c90a8: 0x4f5f3830  .word       0x4F5F3830                   # INVALID     $k0, $ra, 0x3830 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c90a8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C90A8 raw=0x4F5F3830");
 /* MITIGATED */
label_2c90ac:
    // 0x2c90ac: 0x502e3150  beql        $at, $t6, . + 4 + (0x3150 << 2)
label_2c90b0:
    if (ctx->pc == 0x2C90B0u) {
        ctx->pc = 0x2C90B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C90ACu;
        // 0x2c90b0: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C90B4u;
        goto label_2c90b4;
    }
    ctx->pc = 0x2C90ACu;
    {
        const bool branch_taken_0x2c90ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c90ac) {
            ctx->pc = 0x2C90B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C90ACu;
            // 0x2c90b0: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D55F0u;
            return;
        }
    }
    ctx->pc = 0x2C90B4u;
label_2c90b4:
    // 0x2c90b4: 0x0  nop
    ctx->pc = 0x2c90b4u;
    // NOP
label_2c90b8:
    // 0x2c90b8: 0x0  nop
    ctx->pc = 0x2c90b8u;
    // NOP
label_2c90bc:
    // 0x2c90bc: 0x0  nop
    ctx->pc = 0x2c90bcu;
    // NOP
label_2c90c0:
    // 0x2c90c0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c90c4:
    if (ctx->pc == 0x2C90C4u) {
        ctx->pc = 0x2C90C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C90C0u;
        // 0x2c90c4: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C90C4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C90C8u;
        goto label_2c90c8;
    }
    ctx->pc = 0x2C90C0u;
    {
        const bool branch_taken_0x2c90c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c90c0) {
            ctx->pc = 0x2C90C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C90C0u;
            // 0x2c90c4: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C90C4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC634u;
            return;
        }
    }
    ctx->pc = 0x2C90C8u;
label_2c90c8:
    // 0x2c90c8: 0x4f5f3830  .word       0x4F5F3830                   # INVALID     $k0, $ra, 0x3830 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c90c8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C90C8 raw=0x4F5F3830");
 /* MITIGATED */
label_2c90cc:
    // 0x2c90cc: 0x502e3250  beql        $at, $t6, . + 4 + (0x3250 << 2)
label_2c90d0:
    if (ctx->pc == 0x2C90D0u) {
        ctx->pc = 0x2C90D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C90CCu;
        // 0x2c90d0: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C90D4u;
        goto label_2c90d4;
    }
    ctx->pc = 0x2C90CCu;
    {
        const bool branch_taken_0x2c90cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c90cc) {
            ctx->pc = 0x2C90D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C90CCu;
            // 0x2c90d0: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5A10u;
            return;
        }
    }
    ctx->pc = 0x2C90D4u;
label_2c90d4:
    // 0x2c90d4: 0x0  nop
    ctx->pc = 0x2c90d4u;
    // NOP
label_2c90d8:
    // 0x2c90d8: 0x0  nop
    ctx->pc = 0x2c90d8u;
    // NOP
label_2c90dc:
    // 0x2c90dc: 0x0  nop
    ctx->pc = 0x2c90dcu;
    // NOP
label_2c90e0:
    // 0x2c90e0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c90e4:
    if (ctx->pc == 0x2C90E4u) {
        ctx->pc = 0x2C90E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C90E0u;
        // 0x2c90e4: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C90E4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C90E8u;
        goto label_2c90e8;
    }
    ctx->pc = 0x2C90E0u;
    {
        const bool branch_taken_0x2c90e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c90e0) {
            ctx->pc = 0x2C90E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C90E0u;
            // 0x2c90e4: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C90E4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC654u;
            return;
        }
    }
    ctx->pc = 0x2C90E8u;
label_2c90e8:
    // 0x2c90e8: 0x4f5f3830  .word       0x4F5F3830                   # INVALID     $k0, $ra, 0x3830 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c90e8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C90E8 raw=0x4F5F3830");
 /* MITIGATED */
label_2c90ec:
    // 0x2c90ec: 0x502e3350  beql        $at, $t6, . + 4 + (0x3350 << 2)
label_2c90f0:
    if (ctx->pc == 0x2C90F0u) {
        ctx->pc = 0x2C90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C90ECu;
        // 0x2c90f0: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C90F4u;
        goto label_2c90f4;
    }
    ctx->pc = 0x2C90ECu;
    {
        const bool branch_taken_0x2c90ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c90ec) {
            ctx->pc = 0x2C90F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C90ECu;
            // 0x2c90f0: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5E30u;
            return;
        }
    }
    ctx->pc = 0x2C90F4u;
label_2c90f4:
    // 0x2c90f4: 0x0  nop
    ctx->pc = 0x2c90f4u;
    // NOP
label_2c90f8:
    // 0x2c90f8: 0x0  nop
    ctx->pc = 0x2c90f8u;
    // NOP
label_2c90fc:
    // 0x2c90fc: 0x0  nop
    ctx->pc = 0x2c90fcu;
    // NOP
label_2c9100:
    // 0x2c9100: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9104:
    if (ctx->pc == 0x2C9104u) {
        ctx->pc = 0x2C9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9100u;
        // 0x2c9104: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C9104 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9108u;
        goto label_2c9108;
    }
    ctx->pc = 0x2C9100u;
    {
        const bool branch_taken_0x2c9100 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9100) {
            ctx->pc = 0x2C9104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9100u;
            // 0x2c9104: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C9104 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC674u;
            return;
        }
    }
    ctx->pc = 0x2C9108u;
label_2c9108:
    // 0x2c9108: 0x4f5f3131  .word       0x4F5F3131                   # INVALID     $k0, $ra, 0x3131 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9108u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9108 raw=0x4F5F3131");
 /* MITIGATED */
label_2c910c:
    // 0x2c910c: 0x502e3150  beql        $at, $t6, . + 4 + (0x3150 << 2)
label_2c9110:
    if (ctx->pc == 0x2C9110u) {
        ctx->pc = 0x2C9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C910Cu;
        // 0x2c9110: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9114u;
        goto label_2c9114;
    }
    ctx->pc = 0x2C910Cu;
    {
        const bool branch_taken_0x2c910c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c910c) {
            ctx->pc = 0x2C9110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C910Cu;
            // 0x2c9110: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5650u;
            return;
        }
    }
    ctx->pc = 0x2C9114u;
label_2c9114:
    // 0x2c9114: 0x0  nop
    ctx->pc = 0x2c9114u;
    // NOP
label_2c9118:
    // 0x2c9118: 0x0  nop
    ctx->pc = 0x2c9118u;
    // NOP
label_2c911c:
    // 0x2c911c: 0x0  nop
    ctx->pc = 0x2c911cu;
    // NOP
label_2c9120:
    // 0x2c9120: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9124:
    if (ctx->pc == 0x2C9124u) {
        ctx->pc = 0x2C9124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9120u;
        // 0x2c9124: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C9124 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9128u;
        goto label_2c9128;
    }
    ctx->pc = 0x2C9120u;
    {
        const bool branch_taken_0x2c9120 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9120) {
            ctx->pc = 0x2C9124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9120u;
            // 0x2c9124: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C9124 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC694u;
            return;
        }
    }
    ctx->pc = 0x2C9128u;
label_2c9128:
    // 0x2c9128: 0x4f5f3131  .word       0x4F5F3131                   # INVALID     $k0, $ra, 0x3131 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9128u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9128 raw=0x4F5F3131");
 /* MITIGATED */
label_2c912c:
    // 0x2c912c: 0x502e3250  beql        $at, $t6, . + 4 + (0x3250 << 2)
label_2c9130:
    if (ctx->pc == 0x2C9130u) {
        ctx->pc = 0x2C9130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C912Cu;
        // 0x2c9130: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9134u;
        goto label_2c9134;
    }
    ctx->pc = 0x2C912Cu;
    {
        const bool branch_taken_0x2c912c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c912c) {
            ctx->pc = 0x2C9130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C912Cu;
            // 0x2c9130: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5A70u;
            return;
        }
    }
    ctx->pc = 0x2C9134u;
label_2c9134:
    // 0x2c9134: 0x0  nop
    ctx->pc = 0x2c9134u;
    // NOP
label_2c9138:
    // 0x2c9138: 0x0  nop
    ctx->pc = 0x2c9138u;
    // NOP
label_2c913c:
    // 0x2c913c: 0x0  nop
    ctx->pc = 0x2c913cu;
    // NOP
label_2c9140:
    // 0x2c9140: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9144:
    if (ctx->pc == 0x2C9144u) {
        ctx->pc = 0x2C9144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9140u;
        // 0x2c9144: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C9144 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9148u;
        goto label_2c9148;
    }
    ctx->pc = 0x2C9140u;
    {
        const bool branch_taken_0x2c9140 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9140) {
            ctx->pc = 0x2C9144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9140u;
            // 0x2c9144: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C9144 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC6B4u;
            return;
        }
    }
    ctx->pc = 0x2C9148u;
label_2c9148:
    // 0x2c9148: 0x4f5f3431  .word       0x4F5F3431                   # INVALID     $k0, $ra, 0x3431 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9148u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9148 raw=0x4F5F3431");
 /* MITIGATED */
label_2c914c:
    // 0x2c914c: 0x502e3150  beql        $at, $t6, . + 4 + (0x3150 << 2)
label_2c9150:
    if (ctx->pc == 0x2C9150u) {
        ctx->pc = 0x2C9150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C914Cu;
        // 0x2c9150: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9154u;
        goto label_2c9154;
    }
    ctx->pc = 0x2C914Cu;
    {
        const bool branch_taken_0x2c914c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c914c) {
            ctx->pc = 0x2C9150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C914Cu;
            // 0x2c9150: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5690u;
            return;
        }
    }
    ctx->pc = 0x2C9154u;
label_2c9154:
    // 0x2c9154: 0x0  nop
    ctx->pc = 0x2c9154u;
    // NOP
label_2c9158:
    // 0x2c9158: 0x0  nop
    ctx->pc = 0x2c9158u;
    // NOP
label_2c915c:
    // 0x2c915c: 0x0  nop
    ctx->pc = 0x2c915cu;
    // NOP
label_2c9160:
    // 0x2c9160: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9164:
    if (ctx->pc == 0x2C9164u) {
        ctx->pc = 0x2C9164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9160u;
        // 0x2c9164: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C9164 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9168u;
        goto label_2c9168;
    }
    ctx->pc = 0x2C9160u;
    {
        const bool branch_taken_0x2c9160 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9160) {
            ctx->pc = 0x2C9164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9160u;
            // 0x2c9164: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C9164 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC6D4u;
            return;
        }
    }
    ctx->pc = 0x2C9168u;
label_2c9168:
    // 0x2c9168: 0x4f5f3431  .word       0x4F5F3431                   # INVALID     $k0, $ra, 0x3431 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9168u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9168 raw=0x4F5F3431");
 /* MITIGATED */
label_2c916c:
    // 0x2c916c: 0x502e3250  beql        $at, $t6, . + 4 + (0x3250 << 2)
label_2c9170:
    if (ctx->pc == 0x2C9170u) {
        ctx->pc = 0x2C9170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C916Cu;
        // 0x2c9170: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9174u;
        goto label_2c9174;
    }
    ctx->pc = 0x2C916Cu;
    {
        const bool branch_taken_0x2c916c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c916c) {
            ctx->pc = 0x2C9170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C916Cu;
            // 0x2c9170: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5AB0u;
            return;
        }
    }
    ctx->pc = 0x2C9174u;
label_2c9174:
    // 0x2c9174: 0x0  nop
    ctx->pc = 0x2c9174u;
    // NOP
label_2c9178:
    // 0x2c9178: 0x0  nop
    ctx->pc = 0x2c9178u;
    // NOP
label_2c917c:
    // 0x2c917c: 0x0  nop
    ctx->pc = 0x2c917cu;
    // NOP
label_2c9180:
    // 0x2c9180: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9184:
    if (ctx->pc == 0x2C9184u) {
        ctx->pc = 0x2C9184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9180u;
        // 0x2c9184: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C9184 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9188u;
        goto label_2c9188;
    }
    ctx->pc = 0x2C9180u;
    {
        const bool branch_taken_0x2c9180 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9180) {
            ctx->pc = 0x2C9184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9180u;
            // 0x2c9184: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C9184 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC6F4u;
            return;
        }
    }
    ctx->pc = 0x2C9188u;
label_2c9188:
    // 0x2c9188: 0x4f5f3531  .word       0x4F5F3531                   # INVALID     $k0, $ra, 0x3531 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9188u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9188 raw=0x4F5F3531");
 /* MITIGATED */
label_2c918c:
    // 0x2c918c: 0x502e3150  beql        $at, $t6, . + 4 + (0x3150 << 2)
label_2c9190:
    if (ctx->pc == 0x2C9190u) {
        ctx->pc = 0x2C9190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C918Cu;
        // 0x2c9190: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9194u;
        goto label_2c9194;
    }
    ctx->pc = 0x2C918Cu;
    {
        const bool branch_taken_0x2c918c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c918c) {
            ctx->pc = 0x2C9190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C918Cu;
            // 0x2c9190: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D56D0u;
            return;
        }
    }
    ctx->pc = 0x2C9194u;
label_2c9194:
    // 0x2c9194: 0x0  nop
    ctx->pc = 0x2c9194u;
    // NOP
label_2c9198:
    // 0x2c9198: 0x0  nop
    ctx->pc = 0x2c9198u;
    // NOP
label_2c919c:
    // 0x2c919c: 0x0  nop
    ctx->pc = 0x2c919cu;
    // NOP
label_2c91a0:
    // 0x2c91a0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c91a4:
    if (ctx->pc == 0x2C91A4u) {
        ctx->pc = 0x2C91A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C91A0u;
        // 0x2c91a4: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C91A4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C91A8u;
        goto label_2c91a8;
    }
    ctx->pc = 0x2C91A0u;
    {
        const bool branch_taken_0x2c91a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c91a0) {
            ctx->pc = 0x2C91A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C91A0u;
            // 0x2c91a4: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C91A4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC714u;
            return;
        }
    }
    ctx->pc = 0x2C91A8u;
label_2c91a8:
    // 0x2c91a8: 0x4f5f3531  .word       0x4F5F3531                   # INVALID     $k0, $ra, 0x3531 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c91a8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C91A8 raw=0x4F5F3531");
 /* MITIGATED */
label_2c91ac:
    // 0x2c91ac: 0x502e3250  beql        $at, $t6, . + 4 + (0x3250 << 2)
label_2c91b0:
    if (ctx->pc == 0x2C91B0u) {
        ctx->pc = 0x2C91B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C91ACu;
        // 0x2c91b0: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C91B4u;
        goto label_2c91b4;
    }
    ctx->pc = 0x2C91ACu;
    {
        const bool branch_taken_0x2c91ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c91ac) {
            ctx->pc = 0x2C91B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C91ACu;
            // 0x2c91b0: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5AF0u;
            return;
        }
    }
    ctx->pc = 0x2C91B4u;
label_2c91b4:
    // 0x2c91b4: 0x0  nop
    ctx->pc = 0x2c91b4u;
    // NOP
label_2c91b8:
    // 0x2c91b8: 0x0  nop
    ctx->pc = 0x2c91b8u;
    // NOP
label_2c91bc:
    // 0x2c91bc: 0x0  nop
    ctx->pc = 0x2c91bcu;
    // NOP
label_2c91c0:
    // 0x2c91c0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c91c4:
    if (ctx->pc == 0x2C91C4u) {
        ctx->pc = 0x2C91C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C91C0u;
        // 0x2c91c4: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C91C4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C91C8u;
        goto label_2c91c8;
    }
    ctx->pc = 0x2C91C0u;
    {
        const bool branch_taken_0x2c91c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c91c0) {
            ctx->pc = 0x2C91C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C91C0u;
            // 0x2c91c4: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C91C4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC734u;
            return;
        }
    }
    ctx->pc = 0x2C91C8u;
label_2c91c8:
    // 0x2c91c8: 0x4f5f3831  .word       0x4F5F3831                   # INVALID     $k0, $ra, 0x3831 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c91c8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C91C8 raw=0x4F5F3831");
 /* MITIGATED */
label_2c91cc:
    // 0x2c91cc: 0x502e3150  beql        $at, $t6, . + 4 + (0x3150 << 2)
label_2c91d0:
    if (ctx->pc == 0x2C91D0u) {
        ctx->pc = 0x2C91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C91CCu;
        // 0x2c91d0: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C91D4u;
        goto label_2c91d4;
    }
    ctx->pc = 0x2C91CCu;
    {
        const bool branch_taken_0x2c91cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c91cc) {
            ctx->pc = 0x2C91D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C91CCu;
            // 0x2c91d0: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5710u;
            return;
        }
    }
    ctx->pc = 0x2C91D4u;
label_2c91d4:
    // 0x2c91d4: 0x0  nop
    ctx->pc = 0x2c91d4u;
    // NOP
label_2c91d8:
    // 0x2c91d8: 0x0  nop
    ctx->pc = 0x2c91d8u;
    // NOP
label_2c91dc:
    // 0x2c91dc: 0x0  nop
    ctx->pc = 0x2c91dcu;
    // NOP
label_2c91e0:
    // 0x2c91e0: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c91e4:
    if (ctx->pc == 0x2C91E4u) {
        ctx->pc = 0x2C91E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C91E0u;
        // 0x2c91e4: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C91E4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C91E8u;
        goto label_2c91e8;
    }
    ctx->pc = 0x2C91E0u;
    {
        const bool branch_taken_0x2c91e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c91e0) {
            ctx->pc = 0x2C91E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C91E0u;
            // 0x2c91e4: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C91E4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC754u;
            return;
        }
    }
    ctx->pc = 0x2C91E8u;
label_2c91e8:
    // 0x2c91e8: 0x4f5f3831  .word       0x4F5F3831                   # INVALID     $k0, $ra, 0x3831 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c91e8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C91E8 raw=0x4F5F3831");
 /* MITIGATED */
label_2c91ec:
    // 0x2c91ec: 0x502e3250  beql        $at, $t6, . + 4 + (0x3250 << 2)
label_2c91f0:
    if (ctx->pc == 0x2C91F0u) {
        ctx->pc = 0x2C91F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C91ECu;
        // 0x2c91f0: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C91F4u;
        goto label_2c91f4;
    }
    ctx->pc = 0x2C91ECu;
    {
        const bool branch_taken_0x2c91ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c91ec) {
            ctx->pc = 0x2C91F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C91ECu;
            // 0x2c91f0: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5B30u;
            return;
        }
    }
    ctx->pc = 0x2C91F4u;
label_2c91f4:
    // 0x2c91f4: 0x0  nop
    ctx->pc = 0x2c91f4u;
    // NOP
label_2c91f8:
    // 0x2c91f8: 0x0  nop
    ctx->pc = 0x2c91f8u;
    // NOP
label_2c91fc:
    // 0x2c91fc: 0x0  nop
    ctx->pc = 0x2c91fcu;
    // NOP
label_2c9200:
    // 0x2c9200: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9204:
    if (ctx->pc == 0x2C9204u) {
        ctx->pc = 0x2C9204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9200u;
        // 0x2c9204: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C9204 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9208u;
        goto label_2c9208;
    }
    ctx->pc = 0x2C9200u;
    {
        const bool branch_taken_0x2c9200 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9200) {
            ctx->pc = 0x2C9204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9200u;
            // 0x2c9204: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C9204 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC774u;
            return;
        }
    }
    ctx->pc = 0x2C9208u;
label_2c9208:
    // 0x2c9208: 0x4f5f3931  .word       0x4F5F3931                   # INVALID     $k0, $ra, 0x3931 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9208u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9208 raw=0x4F5F3931");
 /* MITIGATED */
label_2c920c:
    // 0x2c920c: 0x502e3150  beql        $at, $t6, . + 4 + (0x3150 << 2)
label_2c9210:
    if (ctx->pc == 0x2C9210u) {
        ctx->pc = 0x2C9210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C920Cu;
        // 0x2c9210: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9214u;
        goto label_2c9214;
    }
    ctx->pc = 0x2C920Cu;
    {
        const bool branch_taken_0x2c920c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c920c) {
            ctx->pc = 0x2C9210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C920Cu;
            // 0x2c9210: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5750u;
            return;
        }
    }
    ctx->pc = 0x2C9214u;
label_2c9214:
    // 0x2c9214: 0x0  nop
    ctx->pc = 0x2c9214u;
    // NOP
label_2c9218:
    // 0x2c9218: 0x0  nop
    ctx->pc = 0x2c9218u;
    // NOP
label_2c921c:
    // 0x2c921c: 0x0  nop
    ctx->pc = 0x2c921cu;
    // NOP
label_2c9220:
    // 0x2c9220: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9224:
    if (ctx->pc == 0x2C9224u) {
        ctx->pc = 0x2C9224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9220u;
        // 0x2c9224: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C9224 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9228u;
        goto label_2c9228;
    }
    ctx->pc = 0x2C9220u;
    {
        const bool branch_taken_0x2c9220 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9220) {
            ctx->pc = 0x2C9224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9220u;
            // 0x2c9224: 0x535c4549  beql        $k0, $gp, . + 4 + (0x4549 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C9224 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC794u;
            return;
        }
    }
    ctx->pc = 0x2C9228u;
label_2c9228:
    // 0x2c9228: 0x4f5f3931  .word       0x4F5F3931                   # INVALID     $k0, $ra, 0x3931 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9228u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9228 raw=0x4F5F3931");
 /* MITIGATED */
label_2c922c:
    // 0x2c922c: 0x502e3250  beql        $at, $t6, . + 4 + (0x3250 << 2)
label_2c9230:
    if (ctx->pc == 0x2C9230u) {
        ctx->pc = 0x2C9230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C922Cu;
        // 0x2c9230: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9234u;
        goto label_2c9234;
    }
    ctx->pc = 0x2C922Cu;
    {
        const bool branch_taken_0x2c922c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 14));
        if (branch_taken_0x2c922c) {
            ctx->pc = 0x2C9230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C922Cu;
            // 0x2c9230: 0x313b5353  andi        $k1, $t1, 0x5353 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)21331);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5B70u;
            return;
        }
    }
    ctx->pc = 0x2C9234u;
label_2c9234:
    // 0x2c9234: 0x0  nop
    ctx->pc = 0x2c9234u;
    // NOP
label_2c9238:
    // 0x2c9238: 0x0  nop
    ctx->pc = 0x2c9238u;
    // NOP
label_2c923c:
    // 0x2c923c: 0x0  nop
    ctx->pc = 0x2c923cu;
    // NOP
label_2c9240:
    // 0x2c9240: 0x564f4d5c  bnel        $s2, $t7, . + 4 + (0x4D5C << 2)
label_2c9244:
    if (ctx->pc == 0x2C9244u) {
        ctx->pc = 0x2C9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9240u;
        // 0x2c9244: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2C9244 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9248u;
        goto label_2c9248;
    }
    ctx->pc = 0x2C9240u;
    {
        const bool branch_taken_0x2c9240 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x2c9240) {
            ctx->pc = 0x2C9244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9240u;
            // 0x2c9244: 0x5c324549  .word       0x5C324549                   # bgtzl       $at, . + 4 + (0x4549 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2C9244 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC7B4u;
            return;
        }
    }
    ctx->pc = 0x2C9248u;
label_2c9248:
    // 0x2c9248: 0x5f30304d  .word       0x5F30304D                   # bgtzl       $t9, . + 4 + (0x304D << 2) # 00100000 <InstrIdType: CPU_NORMAL>
label_2c924c:
    if (ctx->pc == 0x2C924Cu) {
        ctx->pc = 0x2C924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9248u;
        // 0x2c924c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C924C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9250u;
        { ctx->pc = 0x2c9250; return; }
    }
    ctx->pc = 0x2C9248u;
    {
        const bool branch_taken_0x2c9248 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x2c9248) {
            ctx->pc = 0x2C924Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9248u;
            // 0x2c924c: 0x502e3030  beql        $at, $t6, . + 4 + (0x3030 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C924C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5380u;
            return;
        }
    }
    ctx->pc = 0x2C9250u;
    ctx->pc = 0x2c9250u;
    return;
}
