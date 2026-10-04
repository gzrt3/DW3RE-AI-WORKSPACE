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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a8998u: goto label_1a8998;
        case 0x1a899cu: goto label_1a899c;
        case 0x1a89a0u: goto label_1a89a0;
        case 0x1a89a4u: goto label_1a89a4;
        case 0x1a89a8u: goto label_1a89a8;
        case 0x1a89acu: goto label_1a89ac;
        case 0x1a89b0u: goto label_1a89b0;
        case 0x1a89b4u: goto label_1a89b4;
        case 0x1a89b8u: goto label_1a89b8;
        case 0x1a89bcu: goto label_1a89bc;
        case 0x1a89c0u: goto label_1a89c0;
        case 0x1a89c4u: goto label_1a89c4;
        case 0x1a89c8u: goto label_1a89c8;
        case 0x1a89ccu: goto label_1a89cc;
        case 0x1a89d0u: goto label_1a89d0;
        case 0x1a89d4u: goto label_1a89d4;
        case 0x1a89d8u: goto label_1a89d8;
        case 0x1a89dcu: goto label_1a89dc;
        case 0x1a89e0u: goto label_1a89e0;
        case 0x1a89e4u: goto label_1a89e4;
        case 0x1a89e8u: goto label_1a89e8;
        case 0x1a89ecu: goto label_1a89ec;
        case 0x1a89f0u: goto label_1a89f0;
        case 0x1a89f4u: goto label_1a89f4;
        case 0x1a89f8u: goto label_1a89f8;
        case 0x1a89fcu: goto label_1a89fc;
        case 0x1a8a00u: goto label_1a8a00;
        case 0x1a8a04u: goto label_1a8a04;
        case 0x1a8a08u: goto label_1a8a08;
        case 0x1a8a0cu: goto label_1a8a0c;
        case 0x1a8a10u: goto label_1a8a10;
        case 0x1a8a14u: goto label_1a8a14;
        case 0x1a8a18u: goto label_1a8a18;
        case 0x1a8a1cu: goto label_1a8a1c;
        case 0x1a8a20u: goto label_1a8a20;
        case 0x1a8a24u: goto label_1a8a24;
        case 0x1a8a28u: goto label_1a8a28;
        case 0x1a8a2cu: goto label_1a8a2c;
        case 0x1a8a30u: goto label_1a8a30;
        case 0x1a8a34u: goto label_1a8a34;
        case 0x1a8a38u: goto label_1a8a38;
        case 0x1a8a3cu: goto label_1a8a3c;
        case 0x1a8a40u: goto label_1a8a40;
        case 0x1a8a44u: goto label_1a8a44;
        case 0x1a8a48u: goto label_1a8a48;
        case 0x1a8a4cu: goto label_1a8a4c;
        case 0x1a8a50u: goto label_1a8a50;
        case 0x1a8a54u: goto label_1a8a54;
        case 0x1a8a58u: goto label_1a8a58;
        case 0x1a8a5cu: goto label_1a8a5c;
        case 0x1a8a60u: goto label_1a8a60;
        case 0x1a8a64u: goto label_1a8a64;
        case 0x1a8a68u: goto label_1a8a68;
        case 0x1a8a6cu: goto label_1a8a6c;
        case 0x1a8a70u: goto label_1a8a70;
        case 0x1a8a74u: goto label_1a8a74;
        case 0x1a8a78u: goto label_1a8a78;
        case 0x1a8a7cu: goto label_1a8a7c;
        case 0x1a8a80u: goto label_1a8a80;
        case 0x1a8a84u: goto label_1a8a84;
        case 0x1a8a88u: goto label_1a8a88;
        case 0x1a8a8cu: goto label_1a8a8c;
        case 0x1a8a90u: goto label_1a8a90;
        case 0x1a8a94u: goto label_1a8a94;
        case 0x1a8a98u: goto label_1a8a98;
        case 0x1a8a9cu: goto label_1a8a9c;
        case 0x1a8aa0u: goto label_1a8aa0;
        case 0x1a8aa4u: goto label_1a8aa4;
        case 0x1a8aa8u: goto label_1a8aa8;
        case 0x1a8aacu: goto label_1a8aac;
        case 0x1a8ab0u: goto label_1a8ab0;
        case 0x1a8ab4u: goto label_1a8ab4;
        case 0x1a8ab8u: goto label_1a8ab8;
        case 0x1a8abcu: goto label_1a8abc;
        case 0x1a8ac0u: goto label_1a8ac0;
        case 0x1a8ac4u: goto label_1a8ac4;
        case 0x1a8ac8u: goto label_1a8ac8;
        case 0x1a8accu: goto label_1a8acc;
        case 0x1a8ad0u: goto label_1a8ad0;
        case 0x1a8ad4u: goto label_1a8ad4;
        case 0x1a8ad8u: goto label_1a8ad8;
        case 0x1a8adcu: goto label_1a8adc;
        case 0x1a8ae0u: goto label_1a8ae0;
        case 0x1a8ae4u: goto label_1a8ae4;
        case 0x1a8ae8u: goto label_1a8ae8;
        case 0x1a8aecu: goto label_1a8aec;
        case 0x1a8af0u: goto label_1a8af0;
        case 0x1a8af4u: goto label_1a8af4;
        case 0x1a8af8u: goto label_1a8af8;
        case 0x1a8afcu: goto label_1a8afc;
        case 0x1a8b00u: goto label_1a8b00;
        case 0x1a8b04u: goto label_1a8b04;
        case 0x1a8b08u: goto label_1a8b08;
        case 0x1a8b0cu: goto label_1a8b0c;
        case 0x1a8b10u: goto label_1a8b10;
        case 0x1a8b14u: goto label_1a8b14;
        case 0x1a8b18u: goto label_1a8b18;
        case 0x1a8b1cu: goto label_1a8b1c;
        case 0x1a8b20u: goto label_1a8b20;
        case 0x1a8b24u: goto label_1a8b24;
        case 0x1a8b28u: goto label_1a8b28;
        case 0x1a8b2cu: goto label_1a8b2c;
        case 0x1a8b30u: goto label_1a8b30;
        case 0x1a8b34u: goto label_1a8b34;
        case 0x1a8b38u: goto label_1a8b38;
        case 0x1a8b3cu: goto label_1a8b3c;
        case 0x1a8b40u: goto label_1a8b40;
        case 0x1a8b44u: goto label_1a8b44;
        case 0x1a8b48u: goto label_1a8b48;
        case 0x1a8b4cu: goto label_1a8b4c;
        case 0x1a8b50u: goto label_1a8b50;
        case 0x1a8b54u: goto label_1a8b54;
        case 0x1a8b58u: goto label_1a8b58;
        case 0x1a8b5cu: goto label_1a8b5c;
        case 0x1a8b60u: goto label_1a8b60;
        case 0x1a8b64u: goto label_1a8b64;
        case 0x1a8b68u: goto label_1a8b68;
        case 0x1a8b6cu: goto label_1a8b6c;
        case 0x1a8b70u: goto label_1a8b70;
        case 0x1a8b74u: goto label_1a8b74;
        case 0x1a8b78u: goto label_1a8b78;
        case 0x1a8b7cu: goto label_1a8b7c;
        case 0x1a8b80u: goto label_1a8b80;
        case 0x1a8b84u: goto label_1a8b84;
        case 0x1a8b88u: goto label_1a8b88;
        case 0x1a8b8cu: goto label_1a8b8c;
        case 0x1a8b90u: goto label_1a8b90;
        case 0x1a8b94u: goto label_1a8b94;
        case 0x1a8b98u: goto label_1a8b98;
        case 0x1a8b9cu: goto label_1a8b9c;
        case 0x1a8ba0u: goto label_1a8ba0;
        case 0x1a8ba4u: goto label_1a8ba4;
        case 0x1a8ba8u: goto label_1a8ba8;
        case 0x1a8bacu: goto label_1a8bac;
        case 0x1a8bb0u: goto label_1a8bb0;
        case 0x1a8bb4u: goto label_1a8bb4;
        case 0x1a8bb8u: goto label_1a8bb8;
        case 0x1a8bbcu: goto label_1a8bbc;
        case 0x1a8bc0u: goto label_1a8bc0;
        case 0x1a8bc4u: goto label_1a8bc4;
        case 0x1a8bc8u: goto label_1a8bc8;
        case 0x1a8bccu: goto label_1a8bcc;
        case 0x1a8bd0u: goto label_1a8bd0;
        case 0x1a8bd4u: goto label_1a8bd4;
        case 0x1a8bd8u: goto label_1a8bd8;
        case 0x1a8bdcu: goto label_1a8bdc;
        case 0x1a8be0u: goto label_1a8be0;
        case 0x1a8be4u: goto label_1a8be4;
        case 0x1a8be8u: goto label_1a8be8;
        case 0x1a8becu: goto label_1a8bec;
        case 0x1a8bf0u: goto label_1a8bf0;
        case 0x1a8bf4u: goto label_1a8bf4;
        case 0x1a8bf8u: goto label_1a8bf8;
        case 0x1a8bfcu: goto label_1a8bfc;
        case 0x1a8c00u: goto label_1a8c00;
        case 0x1a8c04u: goto label_1a8c04;
        case 0x1a8c08u: goto label_1a8c08;
        case 0x1a8c0cu: goto label_1a8c0c;
        case 0x1a8c10u: goto label_1a8c10;
        case 0x1a8c14u: goto label_1a8c14;
        case 0x1a8c18u: goto label_1a8c18;
        case 0x1a8c1cu: goto label_1a8c1c;
        case 0x1a8c20u: goto label_1a8c20;
        case 0x1a8c24u: goto label_1a8c24;
        case 0x1a8c28u: goto label_1a8c28;
        case 0x1a8c2cu: goto label_1a8c2c;
        case 0x1a8c30u: goto label_1a8c30;
        case 0x1a8c34u: goto label_1a8c34;
        case 0x1a8c38u: goto label_1a8c38;
        case 0x1a8c3cu: goto label_1a8c3c;
        case 0x1a8c40u: goto label_1a8c40;
        case 0x1a8c44u: goto label_1a8c44;
        case 0x1a8c48u: goto label_1a8c48;
        case 0x1a8c4cu: goto label_1a8c4c;
        case 0x1a8c50u: goto label_1a8c50;
        case 0x1a8c54u: goto label_1a8c54;
        case 0x1a8c58u: goto label_1a8c58;
        case 0x1a8c5cu: goto label_1a8c5c;
        case 0x1a8c60u: goto label_1a8c60;
        case 0x1a8c64u: goto label_1a8c64;
        case 0x1a8c68u: goto label_1a8c68;
        case 0x1a8c6cu: goto label_1a8c6c;
        case 0x1a8c70u: goto label_1a8c70;
        case 0x1a8c74u: goto label_1a8c74;
        case 0x1a8c78u: goto label_1a8c78;
        case 0x1a8c7cu: goto label_1a8c7c;
        case 0x1a8c80u: goto label_1a8c80;
        case 0x1a8c84u: goto label_1a8c84;
        case 0x1a8c88u: goto label_1a8c88;
        case 0x1a8c8cu: goto label_1a8c8c;
        case 0x1a8c90u: goto label_1a8c90;
        case 0x1a8c94u: goto label_1a8c94;
        case 0x1a8c98u: goto label_1a8c98;
        case 0x1a8c9cu: goto label_1a8c9c;
        case 0x1a8ca0u: goto label_1a8ca0;
        case 0x1a8ca4u: goto label_1a8ca4;
        case 0x1a8ca8u: goto label_1a8ca8;
        case 0x1a8cacu: goto label_1a8cac;
        case 0x1a8cb0u: goto label_1a8cb0;
        case 0x1a8cb4u: goto label_1a8cb4;
        case 0x1a8cb8u: goto label_1a8cb8;
        case 0x1a8cbcu: goto label_1a8cbc;
        case 0x1a8cc0u: goto label_1a8cc0;
        case 0x1a8cc4u: goto label_1a8cc4;
        case 0x1a8cc8u: goto label_1a8cc8;
        case 0x1a8cccu: goto label_1a8ccc;
        case 0x1a8cd0u: goto label_1a8cd0;
        case 0x1a8cd4u: goto label_1a8cd4;
        case 0x1a8cd8u: goto label_1a8cd8;
        case 0x1a8cdcu: goto label_1a8cdc;
        case 0x1a8ce0u: goto label_1a8ce0;
        case 0x1a8ce4u: goto label_1a8ce4;
        case 0x1a8ce8u: goto label_1a8ce8;
        case 0x1a8cecu: goto label_1a8cec;
        case 0x1a8cf0u: goto label_1a8cf0;
        case 0x1a8cf4u: goto label_1a8cf4;
        case 0x1a8cf8u: goto label_1a8cf8;
        case 0x1a8cfcu: goto label_1a8cfc;
        case 0x1a8d00u: goto label_1a8d00;
        case 0x1a8d04u: goto label_1a8d04;
        case 0x1a8d08u: goto label_1a8d08;
        case 0x1a8d0cu: goto label_1a8d0c;
        case 0x1a8d10u: goto label_1a8d10;
        case 0x1a8d14u: goto label_1a8d14;
        case 0x1a8d18u: goto label_1a8d18;
        case 0x1a8d1cu: goto label_1a8d1c;
        case 0x1a8d20u: goto label_1a8d20;
        case 0x1a8d24u: goto label_1a8d24;
        case 0x1a8d28u: goto label_1a8d28;
        case 0x1a8d2cu: goto label_1a8d2c;
        case 0x1a8d30u: goto label_1a8d30;
        case 0x1a8d34u: goto label_1a8d34;
        case 0x1a8d38u: goto label_1a8d38;
        case 0x1a8d3cu: goto label_1a8d3c;
        case 0x1a8d40u: goto label_1a8d40;
        case 0x1a8d44u: goto label_1a8d44;
        case 0x1a8d48u: goto label_1a8d48;
        case 0x1a8d4cu: goto label_1a8d4c;
        case 0x1a8d50u: goto label_1a8d50;
        case 0x1a8d54u: goto label_1a8d54;
        case 0x1a8d58u: goto label_1a8d58;
        case 0x1a8d5cu: goto label_1a8d5c;
        case 0x1a8d60u: goto label_1a8d60;
        case 0x1a8d64u: goto label_1a8d64;
        case 0x1a8d68u: goto label_1a8d68;
        case 0x1a8d6cu: goto label_1a8d6c;
        case 0x1a8d70u: goto label_1a8d70;
        case 0x1a8d74u: goto label_1a8d74;
        case 0x1a8d78u: goto label_1a8d78;
        case 0x1a8d7cu: goto label_1a8d7c;
        case 0x1a8d80u: goto label_1a8d80;
        case 0x1a8d84u: goto label_1a8d84;
        case 0x1a8d88u: goto label_1a8d88;
        case 0x1a8d8cu: goto label_1a8d8c;
        case 0x1a8d90u: goto label_1a8d90;
        case 0x1a8d94u: goto label_1a8d94;
        case 0x1a8d98u: goto label_1a8d98;
        case 0x1a8d9cu: goto label_1a8d9c;
        case 0x1a8da0u: goto label_1a8da0;
        case 0x1a8da4u: goto label_1a8da4;
        case 0x1a8da8u: goto label_1a8da8;
        case 0x1a8dacu: goto label_1a8dac;
        case 0x1a8db0u: goto label_1a8db0;
        case 0x1a8db4u: goto label_1a8db4;
        case 0x1a8db8u: goto label_1a8db8;
        case 0x1a8dbcu: goto label_1a8dbc;
        case 0x1a8dc0u: goto label_1a8dc0;
        case 0x1a8dc4u: goto label_1a8dc4;
        case 0x1a8dc8u: goto label_1a8dc8;
        case 0x1a8dccu: goto label_1a8dcc;
        case 0x1a8dd0u: goto label_1a8dd0;
        case 0x1a8dd4u: goto label_1a8dd4;
        case 0x1a8dd8u: goto label_1a8dd8;
        case 0x1a8ddcu: goto label_1a8ddc;
        case 0x1a8de0u: goto label_1a8de0;
        case 0x1a8de4u: goto label_1a8de4;
        case 0x1a8de8u: goto label_1a8de8;
        case 0x1a8decu: goto label_1a8dec;
        case 0x1a8df0u: goto label_1a8df0;
        case 0x1a8df4u: goto label_1a8df4;
        case 0x1a8df8u: goto label_1a8df8;
        case 0x1a8dfcu: goto label_1a8dfc;
        case 0x1a8e00u: goto label_1a8e00;
        case 0x1a8e04u: goto label_1a8e04;
        case 0x1a8e08u: goto label_1a8e08;
        case 0x1a8e0cu: goto label_1a8e0c;
        case 0x1a8e10u: goto label_1a8e10;
        case 0x1a8e14u: goto label_1a8e14;
        case 0x1a8e18u: goto label_1a8e18;
        case 0x1a8e1cu: goto label_1a8e1c;
        case 0x1a8e20u: goto label_1a8e20;
        case 0x1a8e24u: goto label_1a8e24;
        case 0x1a8e28u: goto label_1a8e28;
        case 0x1a8e2cu: goto label_1a8e2c;
        case 0x1a8e30u: goto label_1a8e30;
        case 0x1a8e34u: goto label_1a8e34;
        case 0x1a8e38u: goto label_1a8e38;
        case 0x1a8e3cu: goto label_1a8e3c;
        case 0x1a8e40u: goto label_1a8e40;
        case 0x1a8e44u: goto label_1a8e44;
        case 0x1a8e48u: goto label_1a8e48;
        case 0x1a8e4cu: goto label_1a8e4c;
        case 0x1a8e50u: goto label_1a8e50;
        case 0x1a8e54u: goto label_1a8e54;
        case 0x1a8e58u: goto label_1a8e58;
        case 0x1a8e5cu: goto label_1a8e5c;
        case 0x1a8e60u: goto label_1a8e60;
        case 0x1a8e64u: goto label_1a8e64;
        case 0x1a8e68u: goto label_1a8e68;
        case 0x1a8e6cu: goto label_1a8e6c;
        case 0x1a8e70u: goto label_1a8e70;
        case 0x1a8e74u: goto label_1a8e74;
        case 0x1a8e78u: goto label_1a8e78;
        case 0x1a8e7cu: goto label_1a8e7c;
        case 0x1a8e80u: goto label_1a8e80;
        case 0x1a8e84u: goto label_1a8e84;
        case 0x1a8e88u: goto label_1a8e88;
        case 0x1a8e8cu: goto label_1a8e8c;
        case 0x1a8e90u: goto label_1a8e90;
        case 0x1a8e94u: goto label_1a8e94;
        case 0x1a8e98u: goto label_1a8e98;
        case 0x1a8e9cu: goto label_1a8e9c;
        case 0x1a8ea0u: goto label_1a8ea0;
        case 0x1a8ea4u: goto label_1a8ea4;
        case 0x1a8ea8u: goto label_1a8ea8;
        case 0x1a8eacu: goto label_1a8eac;
        case 0x1a8eb0u: goto label_1a8eb0;
        case 0x1a8eb4u: goto label_1a8eb4;
        case 0x1a8eb8u: goto label_1a8eb8;
        case 0x1a8ebcu: goto label_1a8ebc;
        case 0x1a8ec0u: goto label_1a8ec0;
        case 0x1a8ec4u: goto label_1a8ec4;
        case 0x1a8ec8u: goto label_1a8ec8;
        case 0x1a8eccu: goto label_1a8ecc;
        case 0x1a8ed0u: goto label_1a8ed0;
        case 0x1a8ed4u: goto label_1a8ed4;
        case 0x1a8ed8u: goto label_1a8ed8;
        case 0x1a8edcu: goto label_1a8edc;
        case 0x1a8ee0u: goto label_1a8ee0;
        case 0x1a8ee4u: goto label_1a8ee4;
        case 0x1a8ee8u: goto label_1a8ee8;
        case 0x1a8eecu: goto label_1a8eec;
        case 0x1a8ef0u: goto label_1a8ef0;
        case 0x1a8ef4u: goto label_1a8ef4;
        case 0x1a8ef8u: goto label_1a8ef8;
        case 0x1a8efcu: goto label_1a8efc;
        case 0x1a8f00u: goto label_1a8f00;
        case 0x1a8f04u: goto label_1a8f04;
        case 0x1a8f08u: goto label_1a8f08;
        case 0x1a8f0cu: goto label_1a8f0c;
        case 0x1a8f10u: goto label_1a8f10;
        case 0x1a8f14u: goto label_1a8f14;
        case 0x1a8f18u: goto label_1a8f18;
        case 0x1a8f1cu: goto label_1a8f1c;
        case 0x1a8f20u: goto label_1a8f20;
        case 0x1a8f24u: goto label_1a8f24;
        case 0x1a8f28u: goto label_1a8f28;
        case 0x1a8f2cu: goto label_1a8f2c;
        case 0x1a8f30u: goto label_1a8f30;
        case 0x1a8f34u: goto label_1a8f34;
        case 0x1a8f38u: goto label_1a8f38;
        case 0x1a8f3cu: goto label_1a8f3c;
        case 0x1a8f40u: goto label_1a8f40;
        case 0x1a8f44u: goto label_1a8f44;
        case 0x1a8f48u: goto label_1a8f48;
        case 0x1a8f4cu: goto label_1a8f4c;
        case 0x1a8f50u: goto label_1a8f50;
        case 0x1a8f54u: goto label_1a8f54;
        case 0x1a8f58u: goto label_1a8f58;
        case 0x1a8f5cu: goto label_1a8f5c;
        case 0x1a8f60u: goto label_1a8f60;
        case 0x1a8f64u: goto label_1a8f64;
        case 0x1a8f68u: goto label_1a8f68;
        case 0x1a8f6cu: goto label_1a8f6c;
        case 0x1a8f70u: goto label_1a8f70;
        case 0x1a8f74u: goto label_1a8f74;
        case 0x1a8f78u: goto label_1a8f78;
        case 0x1a8f7cu: goto label_1a8f7c;
        case 0x1a8f80u: goto label_1a8f80;
        case 0x1a8f84u: goto label_1a8f84;
        case 0x1a8f88u: goto label_1a8f88;
        case 0x1a8f8cu: goto label_1a8f8c;
        case 0x1a8f90u: goto label_1a8f90;
        case 0x1a8f94u: goto label_1a8f94;
        case 0x1a8f98u: goto label_1a8f98;
        case 0x1a8f9cu: goto label_1a8f9c;
        case 0x1a8fa0u: goto label_1a8fa0;
        case 0x1a8fa4u: goto label_1a8fa4;
        case 0x1a8fa8u: goto label_1a8fa8;
        case 0x1a8facu: goto label_1a8fac;
        case 0x1a8fb0u: goto label_1a8fb0;
        case 0x1a8fb4u: goto label_1a8fb4;
        case 0x1a8fb8u: goto label_1a8fb8;
        case 0x1a8fbcu: goto label_1a8fbc;
        case 0x1a8fc0u: goto label_1a8fc0;
        case 0x1a8fc4u: goto label_1a8fc4;
        case 0x1a8fc8u: goto label_1a8fc8;
        case 0x1a8fccu: goto label_1a8fcc;
        case 0x1a8fd0u: goto label_1a8fd0;
        case 0x1a8fd4u: goto label_1a8fd4;
        case 0x1a8fd8u: goto label_1a8fd8;
        case 0x1a8fdcu: goto label_1a8fdc;
        case 0x1a8fe0u: goto label_1a8fe0;
        case 0x1a8fe4u: goto label_1a8fe4;
        case 0x1a8fe8u: goto label_1a8fe8;
        case 0x1a8fecu: goto label_1a8fec;
        case 0x1a8ff0u: goto label_1a8ff0;
        case 0x1a8ff4u: goto label_1a8ff4;
        case 0x1a8ff8u: goto label_1a8ff8;
        case 0x1a8ffcu: goto label_1a8ffc;
        case 0x1a9000u: goto label_1a9000;
        case 0x1a9004u: goto label_1a9004;
        case 0x1a9008u: goto label_1a9008;
        case 0x1a900cu: goto label_1a900c;
        case 0x1a9010u: goto label_1a9010;
        case 0x1a9014u: goto label_1a9014;
        case 0x1a9018u: goto label_1a9018;
        case 0x1a901cu: goto label_1a901c;
        case 0x1a9020u: goto label_1a9020;
        case 0x1a9024u: goto label_1a9024;
        case 0x1a9028u: goto label_1a9028;
        case 0x1a902cu: goto label_1a902c;
        case 0x1a9030u: goto label_1a9030;
        case 0x1a9034u: goto label_1a9034;
        case 0x1a9038u: goto label_1a9038;
        case 0x1a903cu: goto label_1a903c;
        case 0x1a9040u: goto label_1a9040;
        case 0x1a9044u: goto label_1a9044;
        case 0x1a9048u: goto label_1a9048;
        case 0x1a904cu: goto label_1a904c;
        case 0x1a9050u: goto label_1a9050;
        case 0x1a9054u: goto label_1a9054;
        case 0x1a9058u: goto label_1a9058;
        case 0x1a905cu: goto label_1a905c;
        case 0x1a9060u: goto label_1a9060;
        case 0x1a9064u: goto label_1a9064;
        case 0x1a9068u: goto label_1a9068;
        case 0x1a906cu: goto label_1a906c;
        case 0x1a9070u: goto label_1a9070;
        case 0x1a9074u: goto label_1a9074;
        case 0x1a9078u: goto label_1a9078;
        case 0x1a907cu: goto label_1a907c;
        case 0x1a9080u: goto label_1a9080;
        case 0x1a9084u: goto label_1a9084;
        case 0x1a9088u: goto label_1a9088;
        case 0x1a908cu: goto label_1a908c;
        case 0x1a9090u: goto label_1a9090;
        case 0x1a9094u: goto label_1a9094;
        case 0x1a9098u: goto label_1a9098;
        case 0x1a909cu: goto label_1a909c;
        case 0x1a90a0u: goto label_1a90a0;
        case 0x1a90a4u: goto label_1a90a4;
        case 0x1a90a8u: goto label_1a90a8;
        case 0x1a90acu: goto label_1a90ac;
        case 0x1a90b0u: goto label_1a90b0;
        case 0x1a90b4u: goto label_1a90b4;
        case 0x1a90b8u: goto label_1a90b8;
        case 0x1a90bcu: goto label_1a90bc;
        case 0x1a90c0u: goto label_1a90c0;
        case 0x1a90c4u: goto label_1a90c4;
        case 0x1a90c8u: goto label_1a90c8;
        case 0x1a90ccu: goto label_1a90cc;
        case 0x1a90d0u: goto label_1a90d0;
        case 0x1a90d4u: goto label_1a90d4;
        case 0x1a90d8u: goto label_1a90d8;
        case 0x1a90dcu: goto label_1a90dc;
        case 0x1a90e0u: goto label_1a90e0;
        case 0x1a90e4u: goto label_1a90e4;
        case 0x1a90e8u: goto label_1a90e8;
        case 0x1a90ecu: goto label_1a90ec;
        case 0x1a90f0u: goto label_1a90f0;
        case 0x1a90f4u: goto label_1a90f4;
        case 0x1a90f8u: goto label_1a90f8;
        case 0x1a90fcu: goto label_1a90fc;
        case 0x1a9100u: goto label_1a9100;
        case 0x1a9104u: goto label_1a9104;
        case 0x1a9108u: goto label_1a9108;
        case 0x1a910cu: goto label_1a910c;
        case 0x1a9110u: goto label_1a9110;
        case 0x1a9114u: goto label_1a9114;
        case 0x1a9118u: goto label_1a9118;
        case 0x1a911cu: goto label_1a911c;
        case 0x1a9120u: goto label_1a9120;
        case 0x1a9124u: goto label_1a9124;
        case 0x1a9128u: goto label_1a9128;
        case 0x1a912cu: goto label_1a912c;
        case 0x1a9130u: goto label_1a9130;
        case 0x1a9134u: goto label_1a9134;
        case 0x1a9138u: goto label_1a9138;
        case 0x1a913cu: goto label_1a913c;
        case 0x1a9140u: goto label_1a9140;
        case 0x1a9144u: goto label_1a9144;
        case 0x1a9148u: goto label_1a9148;
        case 0x1a914cu: goto label_1a914c;
        case 0x1a9150u: goto label_1a9150;
        case 0x1a9154u: goto label_1a9154;
        case 0x1a9158u: goto label_1a9158;
        case 0x1a915cu: goto label_1a915c;
        case 0x1a9160u: goto label_1a9160;
        case 0x1a9164u: goto label_1a9164;
        default: return;
    }

label_1a8998:
    // 0x1a8998: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1a899c:
    if (ctx->pc == 0x1A899Cu) {
        ctx->pc = 0x1A899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8998u;
        // 0x1a899c: 0xa2230014  sb          $v1, 0x14($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A89A0u;
        goto label_1a89a0;
    }
    ctx->pc = 0x1A8998u;
    {
        const bool branch_taken_0x1a8998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8998u;
        // 0x1a899c: 0xa2230014  sb          $v1, 0x14($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8998) {
            ctx->pc = 0x1A89E4u;
            goto label_1a89e4;
        }
    }
    ctx->pc = 0x1A89A0u;
label_1a89a0:
    // 0x1a89a0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1a89a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1a89a4:
    // 0x1a89a4: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1a89a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a89a8:
    // 0x1a89a8: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1a89a8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1a89ac:
    // 0x1a89ac: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1a89acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1a89b0:
    // 0x1a89b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a89b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a89b4:
    // 0x1a89b4: 0x0  nop
    ctx->pc = 0x1a89b4u;
    // NOP
label_1a89b8:
    // 0x1a89b8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1a89b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1a89bc:
    // 0x1a89bc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1a89c0:
    if (ctx->pc == 0x1A89C0u) {
        ctx->pc = 0x1A89C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89BCu;
        // 0x1a89c0: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A89C4u;
        goto label_1a89c4;
    }
    ctx->pc = 0x1A89BCu;
    {
        const bool branch_taken_0x1a89bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A89C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89BCu;
        // 0x1a89c0: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a89bc) {
            ctx->pc = 0x1A89F4u;
            goto label_1a89f4;
        }
    }
    ctx->pc = 0x1A89C4u;
label_1a89c4:
    // 0x1a89c4: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x1a89c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1a89c8:
    // 0x1a89c8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1a89c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1a89cc:
    // 0x1a89cc: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x1a89ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
label_1a89d0:
    // 0x1a89d0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1a89d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1a89d4:
    // 0x1a89d4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1a89d8:
    if (ctx->pc == 0x1A89D8u) {
        ctx->pc = 0x1A89D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89D4u;
        // 0x1a89d8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A89DCu;
        goto label_1a89dc;
    }
    ctx->pc = 0x1A89D4u;
    {
        const bool branch_taken_0x1a89d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a89d4) {
            ctx->pc = 0x1A89D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A89D4u;
            // 0x1a89d8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A89B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a89b8;
        }
    }
    ctx->pc = 0x1A89DCu;
label_1a89dc:
    // 0x1a89dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a89e0:
    if (ctx->pc == 0x1A89E0u) {
        ctx->pc = 0x1A89E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89DCu;
        // 0x1a89e0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A89E4u;
        goto label_1a89e4;
    }
    ctx->pc = 0x1A89DCu;
    {
        const bool branch_taken_0x1a89dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A89E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89DCu;
        // 0x1a89e0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a89dc) {
            ctx->pc = 0x1A89F8u;
            goto label_1a89f8;
        }
    }
    ctx->pc = 0x1A89E4u;
label_1a89e4:
    // 0x1a89e4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1a89e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1a89e8:
    // 0x1a89e8: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1a89e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a89ec:
    // 0x1a89ec: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1a89ecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1a89f0:
    // 0x1a89f0: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1a89f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1a89f4:
    // 0x1a89f4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1a89f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1a89f8:
    // 0x1a89f8: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
label_1a89fc:
    if (ctx->pc == 0x1A89FCu) {
        ctx->pc = 0x1A89FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89F8u;
        // 0x1a89fc: 0xa2200413  sb          $zero, 0x413($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A00u;
        goto label_1a8a00;
    }
    ctx->pc = 0x1A89F8u;
    {
        const bool branch_taken_0x1a89f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a89f8) {
            ctx->pc = 0x1A89FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A89F8u;
            // 0x1a89fc: 0xa2200413  sb          $zero, 0x413($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8A00u;
            goto label_1a8a00;
        }
    }
    ctx->pc = 0x1A8A00u;
label_1a8a00:
    // 0x1a8a00: 0x24c24300  addiu       $v0, $a2, 0x4300
    ctx->pc = 0x1a8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 17152));
label_1a8a04:
    // 0x1a8a04: 0x3c036fff  lui         $v1, 0x6FFF
    ctx->pc = 0x1a8a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28671 << 16));
label_1a8a08:
    // 0x1a8a08: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x1a8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1a8a0c:
    // 0x1a8a0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a8a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1a8a10:
    // 0x1a8a10: 0x2a903  sra         $s5, $v0, 4
    ctx->pc = 0x1a8a10u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 4));
label_1a8a14:
    // 0x1a8a14: 0x2e31824  and         $v1, $s7, $v1
    ctx->pc = 0x1a8a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 3));
label_1a8a18:
    // 0x1a8a18: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1a8a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_1a8a1c:
    // 0x1a8a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8a20:
    // 0x1a8a20: 0xae270010  sw          $a3, 0x10($s1)
    ctx->pc = 0x1a8a20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 7));
label_1a8a24:
    // 0x1a8a24: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a8a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a8a28:
    // 0x1a8a28: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1a8a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1a8a2c:
    // 0x1a8a2c: 0x26943e80  addiu       $s4, $s4, 0x3E80
    ctx->pc = 0x1a8a2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16000));
label_1a8a30:
    // 0x1a8a30: 0xae350414  sw          $s5, 0x414($s1)
    ctx->pc = 0x1a8a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 21));
label_1a8a34:
    // 0x1a8a34: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1a8a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1a8a38:
    // 0x1a8a38: 0xc069208  jal         func_1A4820
label_1a8a3c:
    if (ctx->pc == 0x1A8A3Cu) {
        ctx->pc = 0x1A8A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A38u;
        // 0x1a8a3c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A40u;
        goto label_1a8a40;
    }
    ctx->pc = 0x1A8A38u;
    SET_GPR_U32(ctx, 31, 0x1A8A40u);
    ctx->pc = 0x1A8A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8A38u;
    // 0x1a8a3c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1A8A40u;
label_1a8a40:
    // 0x1a8a40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a8a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8a44:
    // 0x1a8a44: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x1a8a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_1a8a48:
    // 0x1a8a48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a8a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a8a4c:
    // 0x1a8a4c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1a8a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_1a8a50:
    // 0x1a8a50: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1a8a50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1a8a54:
    // 0x1a8a54: 0x26c44500  addiu       $a0, $s6, 0x4500
    ctx->pc = 0x1a8a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 17664));
label_1a8a58:
    // 0x1a8a58: 0x27c73240  addiu       $a3, $fp, 0x3240
    ctx->pc = 0x1a8a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 12864));
label_1a8a5c:
    // 0x1a8a5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a8a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8a60:
    // 0x1a8a60: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a8a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a8a64:
    // 0x1a8a64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a8a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8a68:
    // 0x1a8a68: 0x24080418  addiu       $t0, $zero, 0x418
    ctx->pc = 0x1a8a68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
label_1a8a6c:
    // 0x1a8a6c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1a8a6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a8a70:
    // 0x1a8a70: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1a8a70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a8a74:
    // 0x1a8a74: 0xc069e2a  jal         func_1A78A8
label_1a8a78:
    if (ctx->pc == 0x1A8A78u) {
        ctx->pc = 0x1A8A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A74u;
        // 0x1a8a78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A7Cu;
        goto label_1a8a7c;
    }
    ctx->pc = 0x1A8A74u;
    SET_GPR_U32(ctx, 31, 0x1A8A7Cu);
    ctx->pc = 0x1A8A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8A74u;
    // 0x1a8a78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1A8A7Cu;
label_1a8a7c:
    // 0x1a8a7c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1a8a80:
    if (ctx->pc == 0x1A8A80u) {
        ctx->pc = 0x1A8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A7Cu;
        // 0x1a8a80: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A84u;
        goto label_1a8a84;
    }
    ctx->pc = 0x1A8A7Cu;
    {
        const bool branch_taken_0x1a8a7c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A7Cu;
        // 0x1a8a80: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a7c) {
            ctx->pc = 0x1A8A9Cu;
            goto label_1a8a9c;
        }
    }
    ctx->pc = 0x1A8A84u;
label_1a8a84:
    // 0x1a8a84: 0xc06920c  jal         func_1A4830
label_1a8a88:
    if (ctx->pc == 0x1A8A88u) {
        ctx->pc = 0x1A8A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A84u;
        // 0x1a8a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A8Cu;
        goto label_1a8a8c;
    }
    ctx->pc = 0x1A8A84u;
    SET_GPR_U32(ctx, 31, 0x1A8A8Cu);
    ctx->pc = 0x1A8A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8A84u;
    // 0x1a8a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A8A8Cu;
label_1a8a8c:
    // 0x1a8a8c: 0xc06a158  jal         func_1A8560
label_1a8a90:
    if (ctx->pc == 0x1A8A90u) {
        ctx->pc = 0x1A8A94u;
        goto label_1a8a94;
    }
    ctx->pc = 0x1A8A8Cu;
    SET_GPR_U32(ctx, 31, 0x1A8A94u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A8A94u;
label_1a8a94:
    // 0x1a8a94: 0x10000023  b           . + 4 + (0x23 << 2)
label_1a8a98:
    if (ctx->pc == 0x1A8A98u) {
        ctx->pc = 0x1A8A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A94u;
        // 0x1a8a98: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A9Cu;
        goto label_1a8a9c;
    }
    ctx->pc = 0x1A8A94u;
    {
        const bool branch_taken_0x1a8a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A94u;
        // 0x1a8a98: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a94) {
            ctx->pc = 0x1A8B24u;
            goto label_1a8b24;
        }
    }
    ctx->pc = 0x1A8A9Cu;
label_1a8a9c:
    // 0x1a8a9c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1a8a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_1a8aa0:
    // 0x1a8aa0: 0xc06a158  jal         func_1A8560
label_1a8aa4:
    if (ctx->pc == 0x1A8AA4u) {
        ctx->pc = 0x1A8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AA0u;
        // 0x1a8aa4: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AA8u;
        goto label_1a8aa8;
    }
    ctx->pc = 0x1A8AA0u;
    SET_GPR_U32(ctx, 31, 0x1A8AA8u);
    ctx->pc = 0x1A8AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8AA0u;
    // 0x1a8aa4: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A8AA8u;
label_1a8aa8:
    // 0x1a8aa8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_1a8aac:
    if (ctx->pc == 0x1A8AACu) {
        ctx->pc = 0x1A8AB0u;
        goto label_1a8ab0;
    }
    ctx->pc = 0x1A8AA8u;
    {
        const bool branch_taken_0x1a8aa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8aa8) {
            ctx->pc = 0x1A8AC0u;
            goto label_1a8ac0;
        }
    }
    ctx->pc = 0x1A8AB0u;
label_1a8ab0:
    // 0x1a8ab0: 0xc06920c  jal         func_1A4830
label_1a8ab4:
    if (ctx->pc == 0x1A8AB4u) {
        ctx->pc = 0x1A8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AB0u;
        // 0x1a8ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AB8u;
        goto label_1a8ab8;
    }
    ctx->pc = 0x1A8AB0u;
    SET_GPR_U32(ctx, 31, 0x1A8AB8u);
    ctx->pc = 0x1A8AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8AB0u;
    // 0x1a8ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A8AB8u;
label_1a8ab8:
    // 0x1a8ab8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1a8abc:
    if (ctx->pc == 0x1A8ABCu) {
        ctx->pc = 0x1A8ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AB8u;
        // 0x1a8abc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AC0u;
        goto label_1a8ac0;
    }
    ctx->pc = 0x1A8AB8u;
    {
        const bool branch_taken_0x1a8ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AB8u;
        // 0x1a8abc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ab8) {
            ctx->pc = 0x1A8B24u;
            goto label_1a8b24;
        }
    }
    ctx->pc = 0x1A8AC0u;
label_1a8ac0:
    // 0x1a8ac0: 0xc069218  jal         func_1A4860
label_1a8ac4:
    if (ctx->pc == 0x1A8AC4u) {
        ctx->pc = 0x1A8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AC0u;
        // 0x1a8ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AC8u;
        goto label_1a8ac8;
    }
    ctx->pc = 0x1A8AC0u;
    SET_GPR_U32(ctx, 31, 0x1A8AC8u);
    ctx->pc = 0x1A8AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8AC0u;
    // 0x1a8ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A8AC8u;
label_1a8ac8:
    // 0x1a8ac8: 0xc06920c  jal         func_1A4830
label_1a8acc:
    if (ctx->pc == 0x1A8ACCu) {
        ctx->pc = 0x1A8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AC8u;
        // 0x1a8acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AD0u;
        goto label_1a8ad0;
    }
    ctx->pc = 0x1A8AC8u;
    SET_GPR_U32(ctx, 31, 0x1A8AD0u);
    ctx->pc = 0x1A8ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8AC8u;
    // 0x1a8acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A8AD0u;
label_1a8ad0:
    // 0x1a8ad0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1a8ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a8ad4:
    // 0x1a8ad4: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
label_1a8ad8:
    if (ctx->pc == 0x1A8AD8u) {
        ctx->pc = 0x1A8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AD4u;
        // 0x1a8ad8: 0x3c100028  lui         $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8ADCu;
        goto label_1a8adc;
    }
    ctx->pc = 0x1A8AD4u;
    {
        const bool branch_taken_0x1a8ad4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AD4u;
        // 0x1a8ad8: 0x3c100028  lui         $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ad4) {
            ctx->pc = 0x1A8AF8u;
            goto label_1a8af8;
        }
    }
    ctx->pc = 0x1A8ADCu;
label_1a8adc:
    // 0x1a8adc: 0xc069218  jal         func_1A4860
label_1a8ae0:
    if (ctx->pc == 0x1A8AE0u) {
        ctx->pc = 0x1A8AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8ADCu;
        // 0x1a8ae0: 0x8e045c00  lw          $a0, 0x5C00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AE4u;
        goto label_1a8ae4;
    }
    ctx->pc = 0x1A8ADCu;
    SET_GPR_U32(ctx, 31, 0x1A8AE4u);
    ctx->pc = 0x1A8AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8ADCu;
    // 0x1a8ae0: 0x8e045c00  lw          $a0, 0x5C00($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A8AE4u;
label_1a8ae4:
    // 0x1a8ae4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1a8ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1a8ae8:
    // 0x1a8ae8: 0xc069210  jal         func_1A4840
label_1a8aec:
    if (ctx->pc == 0x1A8AECu) {
        ctx->pc = 0x1A8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AE8u;
        // 0x1a8aec: 0x8e045c00  lw          $a0, 0x5C00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AF0u;
        goto label_1a8af0;
    }
    ctx->pc = 0x1A8AE8u;
    SET_GPR_U32(ctx, 31, 0x1A8AF0u);
    ctx->pc = 0x1A8AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8AE8u;
    // 0x1a8aec: 0x8e045c00  lw          $a0, 0x5C00($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1A8AF0u;
label_1a8af0:
    // 0x1a8af0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a8af4:
    if (ctx->pc == 0x1A8AF4u) {
        ctx->pc = 0x1A8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AF0u;
        // 0x1a8af4: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AF8u;
        goto label_1a8af8;
    }
    ctx->pc = 0x1A8AF0u;
    {
        const bool branch_taken_0x1a8af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AF0u;
        // 0x1a8af4: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8af0) {
            ctx->pc = 0x1A8B24u;
            goto label_1a8b24;
        }
    }
    ctx->pc = 0x1A8AF8u;
label_1a8af8:
    // 0x1a8af8: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1a8af8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a8afc:
    // 0x1a8afc: 0xc069218  jal         func_1A4860
label_1a8b00:
    if (ctx->pc == 0x1A8B00u) {
        ctx->pc = 0x1A8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AFCu;
        // 0x1a8b00: 0x8e045c00  lw          $a0, 0x5C00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B04u;
        goto label_1a8b04;
    }
    ctx->pc = 0x1A8AFCu;
    SET_GPR_U32(ctx, 31, 0x1A8B04u);
    ctx->pc = 0x1A8B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8AFCu;
    // 0x1a8b00: 0x8e045c00  lw          $a0, 0x5C00($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A8B04u;
label_1a8b04:
    // 0x1a8b04: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1a8b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1a8b08:
    // 0x1a8b08: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a8b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a8b0c:
    // 0x1a8b0c: 0x8e045c00  lw          $a0, 0x5C00($s0)
    ctx->pc = 0x1a8b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
label_1a8b10:
    // 0x1a8b10: 0x771825  or          $v1, $v1, $s7
    ctx->pc = 0x1a8b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 23));
label_1a8b14:
    // 0x1a8b14: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x1a8b14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_1a8b18:
    // 0x1a8b18: 0xc069210  jal         func_1A4840
label_1a8b1c:
    if (ctx->pc == 0x1A8B1Cu) {
        ctx->pc = 0x1A8B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B18u;
        // 0x1a8b1c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B20u;
        goto label_1a8b20;
    }
    ctx->pc = 0x1A8B18u;
    SET_GPR_U32(ctx, 31, 0x1A8B20u);
    ctx->pc = 0x1A8B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B18u;
    // 0x1a8b1c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1A8B20u;
label_1a8b20:
    // 0x1a8b20: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a8b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8b24:
    // 0x1a8b24: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1a8b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1a8b28:
    // 0x1a8b28: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1a8b28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1a8b2c:
    // 0x1a8b2c: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1a8b2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1a8b30:
    // 0x1a8b30: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1a8b30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1a8b34:
    // 0x1a8b34: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1a8b34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a8b38:
    // 0x1a8b38: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1a8b38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a8b3c:
    // 0x1a8b3c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1a8b3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a8b40:
    // 0x1a8b40: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1a8b40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a8b44:
    // 0x1a8b44: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1a8b44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a8b48:
    // 0x1a8b48: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1a8b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a8b4c:
    // 0x1a8b4c: 0x3e00008  jr          $ra
label_1a8b50:
    if (ctx->pc == 0x1A8B50u) {
        ctx->pc = 0x1A8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B4Cu;
        // 0x1a8b50: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B54u;
        goto label_1a8b54;
    }
    ctx->pc = 0x1A8B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B4Cu;
        // 0x1a8b50: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8B54u;
label_1a8b54:
    // 0x1a8b54: 0x0  nop
    ctx->pc = 0x1a8b54u;
    // NOP
label_1a8b58:
    // 0x1a8b58: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a8b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1a8b5c:
    // 0x1a8b5c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1a8b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1a8b60:
    // 0x1a8b60: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a8b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1a8b64:
    // 0x1a8b64: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1a8b64u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1a8b68:
    // 0x1a8b68: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a8b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1a8b6c:
    // 0x1a8b6c: 0x26923240  addiu       $s2, $s4, 0x3240
    ctx->pc = 0x1a8b6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 12864));
label_1a8b70:
    // 0x1a8b70: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a8b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1a8b74:
    // 0x1a8b74: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1a8b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_1a8b78:
    // 0x1a8b78: 0xc06a02c  jal         func_1A80B0
label_1a8b7c:
    if (ctx->pc == 0x1A8B7Cu) {
        ctx->pc = 0x1A8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B78u;
        // 0x1a8b7c: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B80u;
        goto label_1a8b80;
    }
    ctx->pc = 0x1A8B78u;
    SET_GPR_U32(ctx, 31, 0x1A8B80u);
    ctx->pc = 0x1A8B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B78u;
    // 0x1a8b7c: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80B0u;
    { ctx->pc = 0x1a80b0; return; }
    ctx->pc = 0x1A8B80u;
label_1a8b80:
    // 0x1a8b80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a8b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8b84:
    // 0x1a8b84: 0xc06a14c  jal         func_1A8530
label_1a8b88:
    if (ctx->pc == 0x1A8B88u) {
        ctx->pc = 0x1A8B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B84u;
        // 0x1a8b88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B8Cu;
        goto label_1a8b8c;
    }
    ctx->pc = 0x1A8B84u;
    SET_GPR_U32(ctx, 31, 0x1A8B8Cu);
    ctx->pc = 0x1A8B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B84u;
    // 0x1a8b88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1A8B8Cu;
label_1a8b8c:
    // 0x1a8b8c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1a8b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1a8b90:
    // 0x1a8b90: 0x8c625bf8  lw          $v0, 0x5BF8($v1)
    ctx->pc = 0x1a8b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23544)));
label_1a8b94:
    // 0x1a8b94: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a8b98:
    if (ctx->pc == 0x1A8B98u) {
        ctx->pc = 0x1A8B9Cu;
        goto label_1a8b9c;
    }
    ctx->pc = 0x1A8B94u;
    {
        const bool branch_taken_0x1a8b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8b94) {
            ctx->pc = 0x1A8BACu;
            goto label_1a8bac;
        }
    }
    ctx->pc = 0x1A8B9Cu;
label_1a8b9c:
    // 0x1a8b9c: 0xc06a158  jal         func_1A8560
label_1a8ba0:
    if (ctx->pc == 0x1A8BA0u) {
        ctx->pc = 0x1A8BA4u;
        goto label_1a8ba4;
    }
    ctx->pc = 0x1A8B9Cu;
    SET_GPR_U32(ctx, 31, 0x1A8BA4u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A8BA4u;
label_1a8ba4:
    // 0x1a8ba4: 0x10000043  b           . + 4 + (0x43 << 2)
label_1a8ba8:
    if (ctx->pc == 0x1A8BA8u) {
        ctx->pc = 0x1A8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BA4u;
        // 0x1a8ba8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8BACu;
        goto label_1a8bac;
    }
    ctx->pc = 0x1A8BA4u;
    {
        const bool branch_taken_0x1a8ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BA4u;
        // 0x1a8ba8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ba4) {
            ctx->pc = 0x1A8CB4u;
            goto label_1a8cb4;
        }
    }
    ctx->pc = 0x1A8BACu;
label_1a8bac:
    // 0x1a8bac: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1a8bb0:
    if (ctx->pc == 0x1A8BB0u) {
        ctx->pc = 0x1A8BB4u;
        goto label_1a8bb4;
    }
    ctx->pc = 0x1A8BACu;
    {
        const bool branch_taken_0x1a8bac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8bac) {
            ctx->pc = 0x1A8BC0u;
            goto label_1a8bc0;
        }
    }
    ctx->pc = 0x1A8BB4u;
label_1a8bb4:
    // 0x1a8bb4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a8bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a8bb8:
    // 0x1a8bb8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1a8bbc:
    if (ctx->pc == 0x1A8BBCu) {
        ctx->pc = 0x1A8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BB8u;
        // 0x1a8bbc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8BC0u;
        goto label_1a8bc0;
    }
    ctx->pc = 0x1A8BB8u;
    {
        const bool branch_taken_0x1a8bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8bb8) {
            ctx->pc = 0x1A8BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8BB8u;
            // 0x1a8bbc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8BD0u;
            goto label_1a8bd0;
        }
    }
    ctx->pc = 0x1A8BC0u;
label_1a8bc0:
    // 0x1a8bc0: 0xc06a158  jal         func_1A8560
label_1a8bc4:
    if (ctx->pc == 0x1A8BC4u) {
        ctx->pc = 0x1A8BC8u;
        goto label_1a8bc8;
    }
    ctx->pc = 0x1A8BC0u;
    SET_GPR_U32(ctx, 31, 0x1A8BC8u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A8BC8u;
label_1a8bc8:
    // 0x1a8bc8: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1a8bcc:
    if (ctx->pc == 0x1A8BCCu) {
        ctx->pc = 0x1A8BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BC8u;
        // 0x1a8bcc: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8BD0u;
        goto label_1a8bd0;
    }
    ctx->pc = 0x1A8BC8u;
    {
        const bool branch_taken_0x1a8bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BC8u;
        // 0x1a8bcc: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8bc8) {
            ctx->pc = 0x1A8CB4u;
            goto label_1a8cb4;
        }
    }
    ctx->pc = 0x1A8BD0u;
label_1a8bd0:
    // 0x1a8bd0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a8bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a8bd4:
    // 0x1a8bd4: 0x24424300  addiu       $v0, $v0, 0x4300
    ctx->pc = 0x1a8bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17152));
label_1a8bd8:
    // 0x1a8bd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a8bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8bdc:
    // 0x1a8bdc: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1a8bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_1a8be0:
    // 0x1a8be0: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1a8be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a8be4:
    // 0x1a8be4: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1a8be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
label_1a8be8:
    // 0x1a8be8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1a8be8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1a8bec:
    // 0x1a8bec: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1a8becu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_1a8bf0:
    // 0x1a8bf0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a8bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a8bf4:
    // 0x1a8bf4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1a8bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1a8bf8:
    // 0x1a8bf8: 0xc069208  jal         func_1A4820
label_1a8bfc:
    if (ctx->pc == 0x1A8BFCu) {
        ctx->pc = 0x1A8BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BF8u;
        // 0x1a8bfc: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8C00u;
        goto label_1a8c00;
    }
    ctx->pc = 0x1A8BF8u;
    SET_GPR_U32(ctx, 31, 0x1A8C00u);
    ctx->pc = 0x1A8BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8BF8u;
    // 0x1a8bfc: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1A8C00u;
label_1a8c00:
    // 0x1a8c00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a8c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8c04:
    // 0x1a8c04: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1a8c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a8c08:
    // 0x1a8c08: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a8c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a8c0c:
    // 0x1a8c0c: 0xae913240  sw          $s1, 0x3240($s4)
    ctx->pc = 0x1a8c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12864), GPR_U32(ctx, 17));
label_1a8c10:
    // 0x1a8c10: 0x24533e80  addiu       $s3, $v0, 0x3E80
    ctx->pc = 0x1a8c10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16000));
label_1a8c14:
    // 0x1a8c14: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a8c14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1a8c18:
    // 0x1a8c18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a8c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a8c1c:
    // 0x1a8c1c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1a8c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_1a8c20:
    // 0x1a8c20: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1a8c20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1a8c24:
    // 0x1a8c24: 0x24844500  addiu       $a0, $a0, 0x4500
    ctx->pc = 0x1a8c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17664));
label_1a8c28:
    // 0x1a8c28: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1a8c28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a8c2c:
    // 0x1a8c2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a8c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8c30:
    // 0x1a8c30: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a8c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a8c34:
    // 0x1a8c34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a8c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8c38:
    // 0x1a8c38: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1a8c38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a8c3c:
    // 0x1a8c3c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1a8c3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a8c40:
    // 0x1a8c40: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1a8c40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a8c44:
    // 0x1a8c44: 0xc069e2a  jal         func_1A78A8
label_1a8c48:
    if (ctx->pc == 0x1A8C48u) {
        ctx->pc = 0x1A8C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C44u;
        // 0x1a8c48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8C4Cu;
        goto label_1a8c4c;
    }
    ctx->pc = 0x1A8C44u;
    SET_GPR_U32(ctx, 31, 0x1A8C4Cu);
    ctx->pc = 0x1A8C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8C44u;
    // 0x1a8c48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1A8C4Cu;
label_1a8c4c:
    // 0x1a8c4c: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
label_1a8c50:
    if (ctx->pc == 0x1A8C50u) {
        ctx->pc = 0x1A8C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C4Cu;
        // 0x1a8c50: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8C54u;
        goto label_1a8c54;
    }
    ctx->pc = 0x1A8C4Cu;
    {
        const bool branch_taken_0x1a8c4c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a8c4c) {
            ctx->pc = 0x1A8C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8C4Cu;
            // 0x1a8c50: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8C6Cu;
            goto label_1a8c6c;
        }
    }
    ctx->pc = 0x1A8C54u;
label_1a8c54:
    // 0x1a8c54: 0xc06920c  jal         func_1A4830
label_1a8c58:
    if (ctx->pc == 0x1A8C58u) {
        ctx->pc = 0x1A8C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C54u;
        // 0x1a8c58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8C5Cu;
        goto label_1a8c5c;
    }
    ctx->pc = 0x1A8C54u;
    SET_GPR_U32(ctx, 31, 0x1A8C5Cu);
    ctx->pc = 0x1A8C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8C54u;
    // 0x1a8c58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A8C5Cu;
label_1a8c5c:
    // 0x1a8c5c: 0xc06a158  jal         func_1A8560
label_1a8c60:
    if (ctx->pc == 0x1A8C60u) {
        ctx->pc = 0x1A8C64u;
        goto label_1a8c64;
    }
    ctx->pc = 0x1A8C5Cu;
    SET_GPR_U32(ctx, 31, 0x1A8C64u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A8C64u;
label_1a8c64:
    // 0x1a8c64: 0x10000013  b           . + 4 + (0x13 << 2)
label_1a8c68:
    if (ctx->pc == 0x1A8C68u) {
        ctx->pc = 0x1A8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C64u;
        // 0x1a8c68: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8C6Cu;
        goto label_1a8c6c;
    }
    ctx->pc = 0x1A8C64u;
    {
        const bool branch_taken_0x1a8c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C64u;
        // 0x1a8c68: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c64) {
            ctx->pc = 0x1A8CB4u;
            goto label_1a8cb4;
        }
    }
    ctx->pc = 0x1A8C6Cu;
label_1a8c6c:
    // 0x1a8c6c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1a8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1a8c70:
    // 0x1a8c70: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1a8c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_1a8c74:
    // 0x1a8c74: 0xc06a158  jal         func_1A8560
label_1a8c78:
    if (ctx->pc == 0x1A8C78u) {
        ctx->pc = 0x1A8C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C74u;
        // 0x1a8c78: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8C7Cu;
        goto label_1a8c7c;
    }
    ctx->pc = 0x1A8C74u;
    SET_GPR_U32(ctx, 31, 0x1A8C7Cu);
    ctx->pc = 0x1A8C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8C74u;
    // 0x1a8c78: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A8C7Cu;
label_1a8c7c:
    // 0x1a8c7c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1a8c80:
    if (ctx->pc == 0x1A8C80u) {
        ctx->pc = 0x1A8C84u;
        goto label_1a8c84;
    }
    ctx->pc = 0x1A8C7Cu;
    {
        const bool branch_taken_0x1a8c7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8c7c) {
            ctx->pc = 0x1A8C94u;
            goto label_1a8c94;
        }
    }
    ctx->pc = 0x1A8C84u;
label_1a8c84:
    // 0x1a8c84: 0xc06920c  jal         func_1A4830
label_1a8c88:
    if (ctx->pc == 0x1A8C88u) {
        ctx->pc = 0x1A8C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C84u;
        // 0x1a8c88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8C8Cu;
        goto label_1a8c8c;
    }
    ctx->pc = 0x1A8C84u;
    SET_GPR_U32(ctx, 31, 0x1A8C8Cu);
    ctx->pc = 0x1A8C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8C84u;
    // 0x1a8c88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A8C8Cu;
label_1a8c8c:
    // 0x1a8c8c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1a8c90:
    if (ctx->pc == 0x1A8C90u) {
        ctx->pc = 0x1A8C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C8Cu;
        // 0x1a8c90: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8C94u;
        goto label_1a8c94;
    }
    ctx->pc = 0x1A8C8Cu;
    {
        const bool branch_taken_0x1a8c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C8Cu;
        // 0x1a8c90: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c8c) {
            ctx->pc = 0x1A8CB4u;
            goto label_1a8cb4;
        }
    }
    ctx->pc = 0x1A8C94u;
label_1a8c94:
    // 0x1a8c94: 0xc069218  jal         func_1A4860
label_1a8c98:
    if (ctx->pc == 0x1A8C98u) {
        ctx->pc = 0x1A8C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C94u;
        // 0x1a8c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8C9Cu;
        goto label_1a8c9c;
    }
    ctx->pc = 0x1A8C94u;
    SET_GPR_U32(ctx, 31, 0x1A8C9Cu);
    ctx->pc = 0x1A8C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8C94u;
    // 0x1a8c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A8C9Cu;
label_1a8c9c:
    // 0x1a8c9c: 0xc06920c  jal         func_1A4830
label_1a8ca0:
    if (ctx->pc == 0x1A8CA0u) {
        ctx->pc = 0x1A8CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C9Cu;
        // 0x1a8ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8CA4u;
        goto label_1a8ca4;
    }
    ctx->pc = 0x1A8C9Cu;
    SET_GPR_U32(ctx, 31, 0x1A8CA4u);
    ctx->pc = 0x1A8CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8C9Cu;
    // 0x1a8ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A8CA4u;
label_1a8ca4:
    // 0x1a8ca4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a8ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a8ca8:
    // 0x1a8ca8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a8ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a8cac:
    // 0x1a8cac: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1a8cacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a8cb0:
    // 0x1a8cb0: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1a8cb0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1a8cb4:
    // 0x1a8cb4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1a8cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a8cb8:
    // 0x1a8cb8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1a8cb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a8cbc:
    // 0x1a8cbc: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1a8cbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a8cc0:
    // 0x1a8cc0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1a8cc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a8cc4:
    // 0x1a8cc4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1a8cc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a8cc8:
    // 0x1a8cc8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1a8cc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a8ccc:
    // 0x1a8ccc: 0x3e00008  jr          $ra
label_1a8cd0:
    if (ctx->pc == 0x1A8CD0u) {
        ctx->pc = 0x1A8CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8CCCu;
        // 0x1a8cd0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8CD4u;
        goto label_1a8cd4;
    }
    ctx->pc = 0x1A8CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8CCCu;
        // 0x1a8cd0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8CD4u;
label_1a8cd4:
    // 0x1a8cd4: 0x0  nop
    ctx->pc = 0x1a8cd4u;
    // NOP
label_1a8cd8:
    // 0x1a8cd8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a8cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1a8cdc:
    // 0x1a8cdc: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1a8cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1a8ce0:
    // 0x1a8ce0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1a8ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_1a8ce4:
    // 0x1a8ce4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1a8ce4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a8ce8:
    // 0x1a8ce8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1a8ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_1a8cec:
    // 0x1a8cec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a8cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a8cf0:
    // 0x1a8cf0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a8cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1a8cf4:
    // 0x1a8cf4: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1a8cf4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1a8cf8:
    // 0x1a8cf8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a8cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1a8cfc:
    // 0x1a8cfc: 0x26b13240  addiu       $s1, $s5, 0x3240
    ctx->pc = 0x1a8cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 12864));
label_1a8d00:
    // 0x1a8d00: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1a8d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1a8d04:
    // 0x1a8d04: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1a8d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_1a8d08:
    // 0x1a8d08: 0xc06a02c  jal         func_1A80B0
label_1a8d0c:
    if (ctx->pc == 0x1A8D0Cu) {
        ctx->pc = 0x1A8D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D08u;
        // 0x1a8d0c: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8D10u;
        goto label_1a8d10;
    }
    ctx->pc = 0x1A8D08u;
    SET_GPR_U32(ctx, 31, 0x1A8D10u);
    ctx->pc = 0x1A8D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8D08u;
    // 0x1a8d0c: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80B0u;
    { ctx->pc = 0x1a80b0; return; }
    ctx->pc = 0x1A8D10u;
label_1a8d10:
    // 0x1a8d10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a8d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8d14:
    // 0x1a8d14: 0xc06a14c  jal         func_1A8530
label_1a8d18:
    if (ctx->pc == 0x1A8D18u) {
        ctx->pc = 0x1A8D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D14u;
        // 0x1a8d18: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8D1Cu;
        goto label_1a8d1c;
    }
    ctx->pc = 0x1A8D14u;
    SET_GPR_U32(ctx, 31, 0x1A8D1Cu);
    ctx->pc = 0x1A8D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8D14u;
    // 0x1a8d18: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1A8D1Cu;
label_1a8d1c:
    // 0x1a8d1c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1a8d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1a8d20:
    // 0x1a8d20: 0x8c625bf8  lw          $v0, 0x5BF8($v1)
    ctx->pc = 0x1a8d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23544)));
label_1a8d24:
    // 0x1a8d24: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a8d28:
    if (ctx->pc == 0x1A8D28u) {
        ctx->pc = 0x1A8D2Cu;
        goto label_1a8d2c;
    }
    ctx->pc = 0x1A8D24u;
    {
        const bool branch_taken_0x1a8d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8d24) {
            ctx->pc = 0x1A8D3Cu;
            goto label_1a8d3c;
        }
    }
    ctx->pc = 0x1A8D2Cu;
label_1a8d2c:
    // 0x1a8d2c: 0xc06a158  jal         func_1A8560
label_1a8d30:
    if (ctx->pc == 0x1A8D30u) {
        ctx->pc = 0x1A8D34u;
        goto label_1a8d34;
    }
    ctx->pc = 0x1A8D2Cu;
    SET_GPR_U32(ctx, 31, 0x1A8D34u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A8D34u;
label_1a8d34:
    // 0x1a8d34: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1a8d38:
    if (ctx->pc == 0x1A8D38u) {
        ctx->pc = 0x1A8D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D34u;
        // 0x1a8d38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8D3Cu;
        goto label_1a8d3c;
    }
    ctx->pc = 0x1A8D34u;
    {
        const bool branch_taken_0x1a8d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D34u;
        // 0x1a8d38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d34) {
            ctx->pc = 0x1A8EE8u;
            goto label_1a8ee8;
        }
    }
    ctx->pc = 0x1A8D3Cu;
label_1a8d3c:
    // 0x1a8d3c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1a8d40:
    if (ctx->pc == 0x1A8D40u) {
        ctx->pc = 0x1A8D44u;
        goto label_1a8d44;
    }
    ctx->pc = 0x1A8D3Cu;
    {
        const bool branch_taken_0x1a8d3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8d3c) {
            ctx->pc = 0x1A8D50u;
            goto label_1a8d50;
        }
    }
    ctx->pc = 0x1A8D44u;
label_1a8d44:
    // 0x1a8d44: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x1a8d44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a8d48:
    // 0x1a8d48: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_1a8d4c:
    if (ctx->pc == 0x1A8D4Cu) {
        ctx->pc = 0x1A8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D48u;
        // 0x1a8d4c: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8D50u;
        goto label_1a8d50;
    }
    ctx->pc = 0x1A8D48u;
    {
        const bool branch_taken_0x1a8d48 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D48u;
        // 0x1a8d4c: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d48) {
            ctx->pc = 0x1A8D60u;
            goto label_1a8d60;
        }
    }
    ctx->pc = 0x1A8D50u;
label_1a8d50:
    // 0x1a8d50: 0xc06a158  jal         func_1A8560
label_1a8d54:
    if (ctx->pc == 0x1A8D54u) {
        ctx->pc = 0x1A8D58u;
        goto label_1a8d58;
    }
    ctx->pc = 0x1A8D50u;
    SET_GPR_U32(ctx, 31, 0x1A8D58u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A8D58u;
label_1a8d58:
    // 0x1a8d58: 0x10000063  b           . + 4 + (0x63 << 2)
label_1a8d5c:
    if (ctx->pc == 0x1A8D5Cu) {
        ctx->pc = 0x1A8D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D58u;
        // 0x1a8d5c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8D60u;
        goto label_1a8d60;
    }
    ctx->pc = 0x1A8D58u;
    {
        const bool branch_taken_0x1a8d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D58u;
        // 0x1a8d5c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d58) {
            ctx->pc = 0x1A8EE8u;
            goto label_1a8ee8;
        }
    }
    ctx->pc = 0x1A8D60u;
label_1a8d60:
    // 0x1a8d60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a8d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a8d64:
    // 0x1a8d64: 0x24424300  addiu       $v0, $v0, 0x4300
    ctx->pc = 0x1a8d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17152));
label_1a8d68:
    // 0x1a8d68: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x1a8d68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
label_1a8d6c:
    // 0x1a8d6c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1a8d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a8d70:
    // 0x1a8d70: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1a8d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_1a8d74:
    // 0x1a8d74: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1a8d74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1a8d78:
    // 0x1a8d78: 0xae340014  sw          $s4, 0x14($s1)
    ctx->pc = 0x1a8d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 20));
label_1a8d7c:
    // 0x1a8d7c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1a8d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_1a8d80:
    // 0x1a8d80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a8d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8d84:
    // 0x1a8d84: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a8d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a8d88:
    // 0x1a8d88: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x1a8d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
label_1a8d8c:
    // 0x1a8d8c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1a8d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1a8d90:
    // 0x1a8d90: 0xc069208  jal         func_1A4820
label_1a8d94:
    if (ctx->pc == 0x1A8D94u) {
        ctx->pc = 0x1A8D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D90u;
        // 0x1a8d94: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8D98u;
        goto label_1a8d98;
    }
    ctx->pc = 0x1A8D90u;
    SET_GPR_U32(ctx, 31, 0x1A8D98u);
    ctx->pc = 0x1A8D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8D90u;
    // 0x1a8d94: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1A8D98u;
label_1a8d98:
    // 0x1a8d98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a8d98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8d9c:
    // 0x1a8d9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a8d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a8da0:
    // 0x1a8da0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a8da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a8da4:
    // 0x1a8da4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1a8da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1a8da8:
    // 0x1a8da8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a8da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1a8dac:
    // 0x1a8dac: 0x32628000  andi        $v0, $s3, 0x8000
    ctx->pc = 0x1a8dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
label_1a8db0:
    // 0x1a8db0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1a8db4:
    if (ctx->pc == 0x1A8DB4u) {
        ctx->pc = 0x1A8DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DB0u;
        // 0x1a8db4: 0xaeb23240  sw          $s2, 0x3240($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12864), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DB8u;
        goto label_1a8db8;
    }
    ctx->pc = 0x1A8DB0u;
    {
        const bool branch_taken_0x1a8db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DB0u;
        // 0x1a8db4: 0xaeb23240  sw          $s2, 0x3240($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12864), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8db0) {
            ctx->pc = 0x1A8E44u;
            goto label_1a8e44;
        }
    }
    ctx->pc = 0x1A8DB8u;
label_1a8db8:
    // 0x1a8db8: 0x3c140028  lui         $s4, 0x28
    ctx->pc = 0x1a8db8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
label_1a8dbc:
    // 0x1a8dbc: 0xc069218  jal         func_1A4860
label_1a8dc0:
    if (ctx->pc == 0x1A8DC0u) {
        ctx->pc = 0x1A8DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DBCu;
        // 0x1a8dc0: 0x8e845c04  lw          $a0, 0x5C04($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 23556)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DC4u;
        goto label_1a8dc4;
    }
    ctx->pc = 0x1A8DBCu;
    SET_GPR_U32(ctx, 31, 0x1A8DC4u);
    ctx->pc = 0x1A8DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8DBCu;
    // 0x1a8dc0: 0x8e845c04  lw          $a0, 0x5C04($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 23556)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A8DC4u;
label_1a8dc4:
    // 0x1a8dc4: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x1a8dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
label_1a8dc8:
    // 0x1a8dc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a8dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8dcc:
    // 0x1a8dcc: 0x8ce35b78  lw          $v1, 0x5B78($a3)
    ctx->pc = 0x1a8dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 23416)));
label_1a8dd0:
    // 0x1a8dd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a8dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a8dd4:
    // 0x1a8dd4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1a8dd8:
    if (ctx->pc == 0x1A8DD8u) {
        ctx->pc = 0x1A8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DD4u;
        // 0x1a8dd8: 0x3c160037  lui         $s6, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DDCu;
        goto label_1a8ddc;
    }
    ctx->pc = 0x1A8DD4u;
    {
        const bool branch_taken_0x1a8dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DD4u;
        // 0x1a8dd8: 0x3c160037  lui         $s6, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8dd4) {
            ctx->pc = 0x1A8DF8u;
            goto label_1a8df8;
        }
    }
    ctx->pc = 0x1A8DDCu;
label_1a8ddc:
    // 0x1a8ddc: 0x8ea33240  lw          $v1, 0x3240($s5)
    ctx->pc = 0x1a8ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12864)));
label_1a8de0:
    // 0x1a8de0: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1a8de0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1a8de4:
    // 0x1a8de4: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1a8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_1a8de8:
    // 0x1a8de8: 0xace35b78  sw          $v1, 0x5B78($a3)
    ctx->pc = 0x1a8de8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 23416), GPR_U32(ctx, 3));
label_1a8dec:
    // 0x1a8dec: 0x10000011  b           . + 4 + (0x11 << 2)
label_1a8df0:
    if (ctx->pc == 0x1A8DF0u) {
        ctx->pc = 0x1A8DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DECu;
        // 0x1a8df0: 0xaea23240  sw          $v0, 0x3240($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DF4u;
        goto label_1a8df4;
    }
    ctx->pc = 0x1A8DECu;
    {
        const bool branch_taken_0x1a8dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DECu;
        // 0x1a8df0: 0xaea23240  sw          $v0, 0x3240($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8dec) {
            ctx->pc = 0x1A8E34u;
            goto label_1a8e34;
        }
    }
    ctx->pc = 0x1A8DF4u;
label_1a8df4:
    // 0x1a8df4: 0x0  nop
    ctx->pc = 0x1a8df4u;
    // NOP
label_1a8df8:
    // 0x1a8df8: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1a8df8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1a8dfc:
    // 0x1a8dfc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a8dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1a8e00:
    // 0x1a8e00: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1a8e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
label_1a8e04:
    // 0x1a8e04: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1a8e08:
    if (ctx->pc == 0x1A8E08u) {
        ctx->pc = 0x1A8E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E04u;
        // 0x1a8e08: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E0Cu;
        goto label_1a8e0c;
    }
    ctx->pc = 0x1A8E04u;
    {
        const bool branch_taken_0x1a8e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E04u;
        // 0x1a8e08: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e04) {
            ctx->pc = 0x1A8E34u;
            goto label_1a8e34;
        }
    }
    ctx->pc = 0x1A8E0Cu;
label_1a8e0c:
    // 0x1a8e0c: 0x24e35b78  addiu       $v1, $a3, 0x5B78
    ctx->pc = 0x1a8e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 23416));
label_1a8e10:
    // 0x1a8e10: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1a8e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8e14:
    // 0x1a8e14: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a8e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a8e18:
    // 0x1a8e18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a8e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a8e1c:
    // 0x1a8e1c: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
label_1a8e20:
    if (ctx->pc == 0x1A8E20u) {
        ctx->pc = 0x1A8E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E1Cu;
        // 0x1a8e20: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E24u;
        goto label_1a8e24;
    }
    ctx->pc = 0x1A8E1Cu;
    {
        const bool branch_taken_0x1a8e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A8E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E1Cu;
        // 0x1a8e20: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e1c) {
            ctx->pc = 0x1A8E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8e00;
        }
    }
    ctx->pc = 0x1A8E24u;
label_1a8e24:
    // 0x1a8e24: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a8e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a8e28:
    // 0x1a8e28: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1a8e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1a8e2c:
    // 0x1a8e2c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a8e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1a8e30:
    // 0x1a8e30: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1a8e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1a8e34:
    // 0x1a8e34: 0xc069210  jal         func_1A4840
label_1a8e38:
    if (ctx->pc == 0x1A8E38u) {
        ctx->pc = 0x1A8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E34u;
        // 0x1a8e38: 0x8e845c04  lw          $a0, 0x5C04($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 23556)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E3Cu;
        goto label_1a8e3c;
    }
    ctx->pc = 0x1A8E34u;
    SET_GPR_U32(ctx, 31, 0x1A8E3Cu);
    ctx->pc = 0x1A8E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E34u;
    // 0x1a8e38: 0x8e845c04  lw          $a0, 0x5C04($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 23556)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1A8E3Cu;
label_1a8e3c:
    // 0x1a8e3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a8e40:
    if (ctx->pc == 0x1A8E40u) {
        ctx->pc = 0x1A8E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E3Cu;
        // 0x1a8e40: 0x26103e80  addiu       $s0, $s0, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E44u;
        goto label_1a8e44;
    }
    ctx->pc = 0x1A8E3Cu;
    {
        const bool branch_taken_0x1a8e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E3Cu;
        // 0x1a8e40: 0x26103e80  addiu       $s0, $s0, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e3c) {
            ctx->pc = 0x1A8E50u;
            goto label_1a8e50;
        }
    }
    ctx->pc = 0x1A8E44u;
label_1a8e44:
    // 0x1a8e44: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1a8e44u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1a8e48:
    // 0x1a8e48: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1a8e48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1a8e4c:
    // 0x1a8e4c: 0x26103e80  addiu       $s0, $s0, 0x3E80
    ctx->pc = 0x1a8e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16000));
label_1a8e50:
    // 0x1a8e50: 0x26c44500  addiu       $a0, $s6, 0x4500
    ctx->pc = 0x1a8e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 17664));
label_1a8e54:
    // 0x1a8e54: 0x26a73240  addiu       $a3, $s5, 0x3240
    ctx->pc = 0x1a8e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 12864));
label_1a8e58:
    // 0x1a8e58: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a8e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a8e5c:
    // 0x1a8e5c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a8e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a8e60:
    // 0x1a8e60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a8e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8e64:
    // 0x1a8e64: 0x2408001c  addiu       $t0, $zero, 0x1C
    ctx->pc = 0x1a8e64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1a8e68:
    // 0x1a8e68: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1a8e68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8e6c:
    // 0x1a8e6c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1a8e6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a8e70:
    // 0x1a8e70: 0xc069e2a  jal         func_1A78A8
label_1a8e74:
    if (ctx->pc == 0x1A8E74u) {
        ctx->pc = 0x1A8E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E70u;
        // 0x1a8e74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E78u;
        goto label_1a8e78;
    }
    ctx->pc = 0x1A8E70u;
    SET_GPR_U32(ctx, 31, 0x1A8E78u);
    ctx->pc = 0x1A8E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E70u;
    // 0x1a8e74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1A8E78u;
label_1a8e78:
    // 0x1a8e78: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1a8e7c:
    if (ctx->pc == 0x1A8E7Cu) {
        ctx->pc = 0x1A8E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E78u;
        // 0x1a8e7c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E80u;
        goto label_1a8e80;
    }
    ctx->pc = 0x1A8E78u;
    {
        const bool branch_taken_0x1a8e78 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A8E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E78u;
        // 0x1a8e7c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e78) {
            ctx->pc = 0x1A8E98u;
            goto label_1a8e98;
        }
    }
    ctx->pc = 0x1A8E80u;
label_1a8e80:
    // 0x1a8e80: 0xc06920c  jal         func_1A4830
label_1a8e84:
    if (ctx->pc == 0x1A8E84u) {
        ctx->pc = 0x1A8E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E80u;
        // 0x1a8e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E88u;
        goto label_1a8e88;
    }
    ctx->pc = 0x1A8E80u;
    SET_GPR_U32(ctx, 31, 0x1A8E88u);
    ctx->pc = 0x1A8E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E80u;
    // 0x1a8e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A8E88u;
label_1a8e88:
    // 0x1a8e88: 0xc06a158  jal         func_1A8560
label_1a8e8c:
    if (ctx->pc == 0x1A8E8Cu) {
        ctx->pc = 0x1A8E90u;
        goto label_1a8e90;
    }
    ctx->pc = 0x1A8E88u;
    SET_GPR_U32(ctx, 31, 0x1A8E90u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A8E90u;
label_1a8e90:
    // 0x1a8e90: 0x10000015  b           . + 4 + (0x15 << 2)
label_1a8e94:
    if (ctx->pc == 0x1A8E94u) {
        ctx->pc = 0x1A8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E90u;
        // 0x1a8e94: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E98u;
        goto label_1a8e98;
    }
    ctx->pc = 0x1A8E90u;
    {
        const bool branch_taken_0x1a8e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E90u;
        // 0x1a8e94: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e90) {
            ctx->pc = 0x1A8EE8u;
            goto label_1a8ee8;
        }
    }
    ctx->pc = 0x1A8E98u;
label_1a8e98:
    // 0x1a8e98: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1a8e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1a8e9c:
    // 0x1a8e9c: 0xc06a158  jal         func_1A8560
label_1a8ea0:
    if (ctx->pc == 0x1A8EA0u) {
        ctx->pc = 0x1A8EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E9Cu;
        // 0x1a8ea0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8EA4u;
        goto label_1a8ea4;
    }
    ctx->pc = 0x1A8E9Cu;
    SET_GPR_U32(ctx, 31, 0x1A8EA4u);
    ctx->pc = 0x1A8EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E9Cu;
    // 0x1a8ea0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A8EA4u;
label_1a8ea4:
    // 0x1a8ea4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1a8ea8:
    if (ctx->pc == 0x1A8EA8u) {
        ctx->pc = 0x1A8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EA4u;
        // 0x1a8ea8: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8EACu;
        goto label_1a8eac;
    }
    ctx->pc = 0x1A8EA4u;
    {
        const bool branch_taken_0x1a8ea4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EA4u;
        // 0x1a8ea8: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ea4) {
            ctx->pc = 0x1A8EBCu;
            goto label_1a8ebc;
        }
    }
    ctx->pc = 0x1A8EACu;
label_1a8eac:
    // 0x1a8eac: 0xc06920c  jal         func_1A4830
label_1a8eb0:
    if (ctx->pc == 0x1A8EB0u) {
        ctx->pc = 0x1A8EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EACu;
        // 0x1a8eb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8EB4u;
        goto label_1a8eb4;
    }
    ctx->pc = 0x1A8EACu;
    SET_GPR_U32(ctx, 31, 0x1A8EB4u);
    ctx->pc = 0x1A8EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8EACu;
    // 0x1a8eb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A8EB4u;
label_1a8eb4:
    // 0x1a8eb4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a8eb8:
    if (ctx->pc == 0x1A8EB8u) {
        ctx->pc = 0x1A8EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EB4u;
        // 0x1a8eb8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8EBCu;
        goto label_1a8ebc;
    }
    ctx->pc = 0x1A8EB4u;
    {
        const bool branch_taken_0x1a8eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EB4u;
        // 0x1a8eb8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8eb4) {
            ctx->pc = 0x1A8EE8u;
            goto label_1a8ee8;
        }
    }
    ctx->pc = 0x1A8EBCu;
label_1a8ebc:
    // 0x1a8ebc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a8ec0:
    if (ctx->pc == 0x1A8EC0u) {
        ctx->pc = 0x1A8EC4u;
        goto label_1a8ec4;
    }
    ctx->pc = 0x1A8EBCu;
    {
        const bool branch_taken_0x1a8ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8ebc) {
            ctx->pc = 0x1A8ED4u;
            goto label_1a8ed4;
        }
    }
    ctx->pc = 0x1A8EC4u;
label_1a8ec4:
    // 0x1a8ec4: 0xc06920c  jal         func_1A4830
label_1a8ec8:
    if (ctx->pc == 0x1A8EC8u) {
        ctx->pc = 0x1A8EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EC4u;
        // 0x1a8ec8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8ECCu;
        goto label_1a8ecc;
    }
    ctx->pc = 0x1A8EC4u;
    SET_GPR_U32(ctx, 31, 0x1A8ECCu);
    ctx->pc = 0x1A8EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8EC4u;
    // 0x1a8ec8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A8ECCu;
label_1a8ecc:
    // 0x1a8ecc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a8ed0:
    if (ctx->pc == 0x1A8ED0u) {
        ctx->pc = 0x1A8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8ECCu;
        // 0x1a8ed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8ED4u;
        goto label_1a8ed4;
    }
    ctx->pc = 0x1A8ECCu;
    {
        const bool branch_taken_0x1a8ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8ECCu;
        // 0x1a8ed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ecc) {
            ctx->pc = 0x1A8EE8u;
            goto label_1a8ee8;
        }
    }
    ctx->pc = 0x1A8ED4u;
label_1a8ed4:
    // 0x1a8ed4: 0xc069218  jal         func_1A4860
label_1a8ed8:
    if (ctx->pc == 0x1A8ED8u) {
        ctx->pc = 0x1A8ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8ED4u;
        // 0x1a8ed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8EDCu;
        goto label_1a8edc;
    }
    ctx->pc = 0x1A8ED4u;
    SET_GPR_U32(ctx, 31, 0x1A8EDCu);
    ctx->pc = 0x1A8ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8ED4u;
    // 0x1a8ed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A8EDCu;
label_1a8edc:
    // 0x1a8edc: 0xc06920c  jal         func_1A4830
label_1a8ee0:
    if (ctx->pc == 0x1A8EE0u) {
        ctx->pc = 0x1A8EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EDCu;
        // 0x1a8ee0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8EE4u;
        goto label_1a8ee4;
    }
    ctx->pc = 0x1A8EDCu;
    SET_GPR_U32(ctx, 31, 0x1A8EE4u);
    ctx->pc = 0x1A8EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8EDCu;
    // 0x1a8ee0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A8EE4u;
label_1a8ee4:
    // 0x1a8ee4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a8ee8:
    // 0x1a8ee8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1a8ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1a8eec:
    // 0x1a8eec: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1a8eecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1a8ef0:
    // 0x1a8ef0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1a8ef0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a8ef4:
    // 0x1a8ef4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1a8ef4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a8ef8:
    // 0x1a8ef8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1a8ef8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a8efc:
    // 0x1a8efc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1a8efcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a8f00:
    // 0x1a8f00: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1a8f00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a8f04:
    // 0x1a8f04: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1a8f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a8f08:
    // 0x1a8f08: 0x3e00008  jr          $ra
label_1a8f0c:
    if (ctx->pc == 0x1A8F0Cu) {
        ctx->pc = 0x1A8F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F08u;
        // 0x1a8f0c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8F10u;
        goto label_1a8f10;
    }
    ctx->pc = 0x1A8F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F08u;
        // 0x1a8f0c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8F10u;
label_1a8f10:
    // 0x1a8f10: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1a8f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1a8f14:
    // 0x1a8f14: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1a8f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_1a8f18:
    // 0x1a8f18: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1a8f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_1a8f1c:
    // 0x1a8f1c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1a8f1cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a8f20:
    // 0x1a8f20: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1a8f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_1a8f24:
    // 0x1a8f24: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1a8f24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a8f28:
    // 0x1a8f28: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1a8f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1a8f2c:
    // 0x1a8f2c: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1a8f2cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1a8f30:
    // 0x1a8f30: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a8f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1a8f34:
    // 0x1a8f34: 0x26913240  addiu       $s1, $s4, 0x3240
    ctx->pc = 0x1a8f34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 12864));
label_1a8f38:
    // 0x1a8f38: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1a8f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_1a8f3c:
    // 0x1a8f3c: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1a8f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_1a8f40:
    // 0x1a8f40: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1a8f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_1a8f44:
    // 0x1a8f44: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1a8f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_1a8f48:
    // 0x1a8f48: 0xc06a02c  jal         func_1A80B0
label_1a8f4c:
    if (ctx->pc == 0x1A8F4Cu) {
        ctx->pc = 0x1A8F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F48u;
        // 0x1a8f4c: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8F50u;
        goto label_1a8f50;
    }
    ctx->pc = 0x1A8F48u;
    SET_GPR_U32(ctx, 31, 0x1A8F50u);
    ctx->pc = 0x1A8F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F48u;
    // 0x1a8f4c: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80B0u;
    { ctx->pc = 0x1a80b0; return; }
    ctx->pc = 0x1A8F50u;
label_1a8f50:
    // 0x1a8f50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a8f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8f54:
    // 0x1a8f54: 0xc06a14c  jal         func_1A8530
label_1a8f58:
    if (ctx->pc == 0x1A8F58u) {
        ctx->pc = 0x1A8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F54u;
        // 0x1a8f58: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8F5Cu;
        goto label_1a8f5c;
    }
    ctx->pc = 0x1A8F54u;
    SET_GPR_U32(ctx, 31, 0x1A8F5Cu);
    ctx->pc = 0x1A8F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F54u;
    // 0x1a8f58: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    { ctx->pc = 0x1a8530; return; }
    ctx->pc = 0x1A8F5Cu;
label_1a8f5c:
    // 0x1a8f5c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1a8f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1a8f60:
    // 0x1a8f60: 0x8c625bf8  lw          $v0, 0x5BF8($v1)
    ctx->pc = 0x1a8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23544)));
label_1a8f64:
    // 0x1a8f64: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a8f68:
    if (ctx->pc == 0x1A8F68u) {
        ctx->pc = 0x1A8F6Cu;
        goto label_1a8f6c;
    }
    ctx->pc = 0x1A8F64u;
    {
        const bool branch_taken_0x1a8f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f64) {
            ctx->pc = 0x1A8F7Cu;
            goto label_1a8f7c;
        }
    }
    ctx->pc = 0x1A8F6Cu;
label_1a8f6c:
    // 0x1a8f6c: 0xc06a158  jal         func_1A8560
label_1a8f70:
    if (ctx->pc == 0x1A8F70u) {
        ctx->pc = 0x1A8F74u;
        goto label_1a8f74;
    }
    ctx->pc = 0x1A8F6Cu;
    SET_GPR_U32(ctx, 31, 0x1A8F74u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A8F74u;
label_1a8f74:
    // 0x1a8f74: 0x10000076  b           . + 4 + (0x76 << 2)
label_1a8f78:
    if (ctx->pc == 0x1A8F78u) {
        ctx->pc = 0x1A8F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F74u;
        // 0x1a8f78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8F7Cu;
        goto label_1a8f7c;
    }
    ctx->pc = 0x1A8F74u;
    {
        const bool branch_taken_0x1a8f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F74u;
        // 0x1a8f78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f74) {
            ctx->pc = 0x1A9150u;
            goto label_1a9150;
        }
    }
    ctx->pc = 0x1A8F7Cu;
label_1a8f7c:
    // 0x1a8f7c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1a8f80:
    if (ctx->pc == 0x1A8F80u) {
        ctx->pc = 0x1A8F84u;
        goto label_1a8f84;
    }
    ctx->pc = 0x1A8F7Cu;
    {
        const bool branch_taken_0x1a8f7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f7c) {
            ctx->pc = 0x1A8F90u;
            goto label_1a8f90;
        }
    }
    ctx->pc = 0x1A8F84u;
label_1a8f84:
    // 0x1a8f84: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x1a8f84u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a8f88:
    // 0x1a8f88: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
label_1a8f8c:
    if (ctx->pc == 0x1A8F8Cu) {
        ctx->pc = 0x1A8F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F88u;
        // 0x1a8f8c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8F90u;
        goto label_1a8f90;
    }
    ctx->pc = 0x1A8F88u;
    {
        const bool branch_taken_0x1a8f88 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f88) {
            ctx->pc = 0x1A8F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8F88u;
            // 0x1a8f8c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8FA0u;
            goto label_1a8fa0;
        }
    }
    ctx->pc = 0x1A8F90u;
label_1a8f90:
    // 0x1a8f90: 0xc06a158  jal         func_1A8560
label_1a8f94:
    if (ctx->pc == 0x1A8F94u) {
        ctx->pc = 0x1A8F98u;
        goto label_1a8f98;
    }
    ctx->pc = 0x1A8F90u;
    SET_GPR_U32(ctx, 31, 0x1A8F98u);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A8F98u;
label_1a8f98:
    // 0x1a8f98: 0x1000006d  b           . + 4 + (0x6D << 2)
label_1a8f9c:
    if (ctx->pc == 0x1A8F9Cu) {
        ctx->pc = 0x1A8F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F98u;
        // 0x1a8f9c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8FA0u;
        goto label_1a8fa0;
    }
    ctx->pc = 0x1A8F98u;
    {
        const bool branch_taken_0x1a8f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F98u;
        // 0x1a8f9c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f98) {
            ctx->pc = 0x1A9150u;
            goto label_1a9150;
        }
    }
    ctx->pc = 0x1A8FA0u;
label_1a8fa0:
    // 0x1a8fa0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a8fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a8fa4:
    // 0x1a8fa4: 0x24424300  addiu       $v0, $v0, 0x4300
    ctx->pc = 0x1a8fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17152));
label_1a8fa8:
    // 0x1a8fa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a8fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8fac:
    // 0x1a8fac: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1a8facu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_1a8fb0:
    // 0x1a8fb0: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1a8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a8fb4:
    // 0x1a8fb4: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1a8fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
label_1a8fb8:
    // 0x1a8fb8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1a8fb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1a8fbc:
    // 0x1a8fbc: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1a8fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_1a8fc0:
    // 0x1a8fc0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a8fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a8fc4:
    // 0x1a8fc4: 0xae360010  sw          $s6, 0x10($s1)
    ctx->pc = 0x1a8fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
label_1a8fc8:
    // 0x1a8fc8: 0xae370014  sw          $s7, 0x14($s1)
    ctx->pc = 0x1a8fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 23));
label_1a8fcc:
    // 0x1a8fcc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1a8fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1a8fd0:
    // 0x1a8fd0: 0xc069208  jal         func_1A4820
label_1a8fd4:
    if (ctx->pc == 0x1A8FD4u) {
        ctx->pc = 0x1A8FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FD0u;
        // 0x1a8fd4: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8FD8u;
        goto label_1a8fd8;
    }
    ctx->pc = 0x1A8FD0u;
    SET_GPR_U32(ctx, 31, 0x1A8FD8u);
    ctx->pc = 0x1A8FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8FD0u;
    // 0x1a8fd4: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1A8FD8u;
label_1a8fd8:
    // 0x1a8fd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a8fd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8fdc:
    // 0x1a8fdc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a8fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a8fe0:
    // 0x1a8fe0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a8fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a8fe4:
    // 0x1a8fe4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1a8fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1a8fe8:
    // 0x1a8fe8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a8fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1a8fec:
    // 0x1a8fec: 0x32628000  andi        $v0, $s3, 0x8000
    ctx->pc = 0x1a8fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
label_1a8ff0:
    // 0x1a8ff0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_1a8ff4:
    if (ctx->pc == 0x1A8FF4u) {
        ctx->pc = 0x1A8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FF0u;
        // 0x1a8ff4: 0xae923240  sw          $s2, 0x3240($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12864), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8FF8u;
        goto label_1a8ff8;
    }
    ctx->pc = 0x1A8FF0u;
    {
        const bool branch_taken_0x1a8ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FF0u;
        // 0x1a8ff4: 0xae923240  sw          $s2, 0x3240($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12864), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ff0) {
            ctx->pc = 0x1A9078u;
            goto label_1a9078;
        }
    }
    ctx->pc = 0x1A8FF8u;
label_1a8ff8:
    // 0x1a8ff8: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1a8ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
label_1a8ffc:
    // 0x1a8ffc: 0xc069218  jal         func_1A4860
label_1a9000:
    if (ctx->pc == 0x1A9000u) {
        ctx->pc = 0x1A9000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FFCu;
        // 0x1a9000: 0x8e045c04  lw          $a0, 0x5C04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23556)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9004u;
        goto label_1a9004;
    }
    ctx->pc = 0x1A8FFCu;
    SET_GPR_U32(ctx, 31, 0x1A9004u);
    ctx->pc = 0x1A9000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8FFCu;
    // 0x1a9000: 0x8e045c04  lw          $a0, 0x5C04($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23556)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A9004u;
label_1a9004:
    // 0x1a9004: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x1a9004u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
label_1a9008:
    // 0x1a9008: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a9008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a900c:
    // 0x1a900c: 0x8ce35b78  lw          $v1, 0x5B78($a3)
    ctx->pc = 0x1a900cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 23416)));
label_1a9010:
    // 0x1a9010: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a9010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a9014:
    // 0x1a9014: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1a9018:
    if (ctx->pc == 0x1A9018u) {
        ctx->pc = 0x1A9018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9014u;
        // 0x1a9018: 0x3c1e0037  lui         $fp, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A901Cu;
        goto label_1a901c;
    }
    ctx->pc = 0x1A9014u;
    {
        const bool branch_taken_0x1a9014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9014u;
        // 0x1a9018: 0x3c1e0037  lui         $fp, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9014) {
            ctx->pc = 0x1A9030u;
            goto label_1a9030;
        }
    }
    ctx->pc = 0x1A901Cu;
label_1a901c:
    // 0x1a901c: 0x8e833240  lw          $v1, 0x3240($s4)
    ctx->pc = 0x1a901cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12864)));
label_1a9020:
    // 0x1a9020: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1a9020u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_1a9024:
    // 0x1a9024: 0xace35b78  sw          $v1, 0x5B78($a3)
    ctx->pc = 0x1a9024u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 23416), GPR_U32(ctx, 3));
label_1a9028:
    // 0x1a9028: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a902c:
    if (ctx->pc == 0x1A902Cu) {
        ctx->pc = 0x1A902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9028u;
        // 0x1a902c: 0xae823240  sw          $v0, 0x3240($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9030u;
        goto label_1a9030;
    }
    ctx->pc = 0x1A9028u;
    {
        const bool branch_taken_0x1a9028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9028u;
        // 0x1a902c: 0xae823240  sw          $v0, 0x3240($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9028) {
            ctx->pc = 0x1A9068u;
            goto label_1a9068;
        }
    }
    ctx->pc = 0x1A9030u;
label_1a9030:
    // 0x1a9030: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a9030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1a9034:
    // 0x1a9034: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1a9034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
label_1a9038:
    // 0x1a9038: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1a903c:
    if (ctx->pc == 0x1A903Cu) {
        ctx->pc = 0x1A903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9038u;
        // 0x1a903c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9040u;
        goto label_1a9040;
    }
    ctx->pc = 0x1A9038u;
    {
        const bool branch_taken_0x1a9038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9038u;
        // 0x1a903c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9038) {
            ctx->pc = 0x1A9068u;
            goto label_1a9068;
        }
    }
    ctx->pc = 0x1A9040u;
label_1a9040:
    // 0x1a9040: 0x24e35b78  addiu       $v1, $a3, 0x5B78
    ctx->pc = 0x1a9040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 23416));
label_1a9044:
    // 0x1a9044: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1a9044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9048:
    // 0x1a9048: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a9048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a904c:
    // 0x1a904c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a9050:
    // 0x1a9050: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
label_1a9054:
    if (ctx->pc == 0x1A9054u) {
        ctx->pc = 0x1A9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9050u;
        // 0x1a9054: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9058u;
        goto label_1a9058;
    }
    ctx->pc = 0x1A9050u;
    {
        const bool branch_taken_0x1a9050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9050u;
        // 0x1a9054: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9050) {
            ctx->pc = 0x1A9034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9034;
        }
    }
    ctx->pc = 0x1A9058u;
label_1a9058:
    // 0x1a9058: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a9058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a905c:
    // 0x1a905c: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1a905cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1a9060:
    // 0x1a9060: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a9060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1a9064:
    // 0x1a9064: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1a9064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1a9068:
    // 0x1a9068: 0xc069210  jal         func_1A4840
label_1a906c:
    if (ctx->pc == 0x1A906Cu) {
        ctx->pc = 0x1A906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9068u;
        // 0x1a906c: 0x8e045c04  lw          $a0, 0x5C04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23556)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9070u;
        goto label_1a9070;
    }
    ctx->pc = 0x1A9068u;
    SET_GPR_U32(ctx, 31, 0x1A9070u);
    ctx->pc = 0x1A906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9068u;
    // 0x1a906c: 0x8e045c04  lw          $a0, 0x5C04($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23556)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1A9070u;
label_1a9070:
    // 0x1a9070: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a9074:
    if (ctx->pc == 0x1A9074u) {
        ctx->pc = 0x1A9074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9070u;
        // 0x1a9074: 0x3c152000  lui         $s5, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9078u;
        goto label_1a9078;
    }
    ctx->pc = 0x1A9070u;
    {
        const bool branch_taken_0x1a9070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9070u;
        // 0x1a9074: 0x3c152000  lui         $s5, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9070) {
            ctx->pc = 0x1A9080u;
            goto label_1a9080;
        }
    }
    ctx->pc = 0x1A9078u;
label_1a9078:
    // 0x1a9078: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x1a9078u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
label_1a907c:
    // 0x1a907c: 0x3c152000  lui         $s5, 0x2000
    ctx->pc = 0x1a907cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)8192 << 16));
label_1a9080:
    // 0x1a9080: 0x2751024  and         $v0, $s3, $s5
    ctx->pc = 0x1a9080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
label_1a9084:
    // 0x1a9084: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a9088:
    if (ctx->pc == 0x1A9088u) {
        ctx->pc = 0x1A9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9084u;
        // 0x1a9088: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A908Cu;
        goto label_1a908c;
    }
    ctx->pc = 0x1A9084u;
    {
        const bool branch_taken_0x1a9084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9084u;
        // 0x1a9088: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9084) {
            ctx->pc = 0x1A909Cu;
            goto label_1a909c;
        }
    }
    ctx->pc = 0x1A908Cu;
label_1a908c:
    // 0x1a908c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1a908cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a9090:
    // 0x1a9090: 0xc069bee  jal         func_1A6FB8
label_1a9094:
    if (ctx->pc == 0x1A9094u) {
        ctx->pc = 0x1A9094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9090u;
        // 0x1a9094: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9098u;
        goto label_1a9098;
    }
    ctx->pc = 0x1A9090u;
    SET_GPR_U32(ctx, 31, 0x1A9098u);
    ctx->pc = 0x1A9094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9090u;
    // 0x1a9094: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1A9098u;
label_1a9098:
    // 0x1a9098: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a9098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a909c:
    // 0x1a909c: 0x240500a4  addiu       $a1, $zero, 0xA4
    ctx->pc = 0x1a909cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
label_1a90a0:
    // 0x1a90a0: 0x24443ec0  addiu       $a0, $v0, 0x3EC0
    ctx->pc = 0x1a90a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16064));
label_1a90a4:
    // 0x1a90a4: 0xc069bee  jal         func_1A6FB8
label_1a90a8:
    if (ctx->pc == 0x1A90A8u) {
        ctx->pc = 0x1A90A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90A4u;
        // 0x1a90a8: 0x27d03e80  addiu       $s0, $fp, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 16000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A90ACu;
        goto label_1a90ac;
    }
    ctx->pc = 0x1A90A4u;
    SET_GPR_U32(ctx, 31, 0x1A90ACu);
    ctx->pc = 0x1A90A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A90A4u;
    // 0x1a90a8: 0x27d03e80  addiu       $s0, $fp, 0x3E80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 16000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1A90ACu;
label_1a90ac:
    // 0x1a90ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a90acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a90b0:
    // 0x1a90b0: 0xc069bee  jal         func_1A6FB8
label_1a90b4:
    if (ctx->pc == 0x1A90B4u) {
        ctx->pc = 0x1A90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90B0u;
        // 0x1a90b4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A90B8u;
        goto label_1a90b8;
    }
    ctx->pc = 0x1A90B0u;
    SET_GPR_U32(ctx, 31, 0x1A90B8u);
    ctx->pc = 0x1A90B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A90B0u;
    // 0x1a90b4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1A90B8u;
label_1a90b8:
    // 0x1a90b8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a90bc:
    // 0x1a90bc: 0x26873240  addiu       $a3, $s4, 0x3240
    ctx->pc = 0x1a90bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 12864));
label_1a90c0:
    // 0x1a90c0: 0x24444500  addiu       $a0, $v0, 0x4500
    ctx->pc = 0x1a90c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 17664));
label_1a90c4:
    // 0x1a90c4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a90c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a90c8:
    // 0x1a90c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a90c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a90cc:
    // 0x1a90cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a90ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a90d0:
    // 0x1a90d0: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1a90d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1a90d4:
    // 0x1a90d4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1a90d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a90d8:
    // 0x1a90d8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1a90d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a90dc:
    // 0x1a90dc: 0xc069e2a  jal         func_1A78A8
label_1a90e0:
    if (ctx->pc == 0x1A90E0u) {
        ctx->pc = 0x1A90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90DCu;
        // 0x1a90e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A90E4u;
        goto label_1a90e4;
    }
    ctx->pc = 0x1A90DCu;
    SET_GPR_U32(ctx, 31, 0x1A90E4u);
    ctx->pc = 0x1A90E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A90DCu;
    // 0x1a90e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1A90E4u;
label_1a90e4:
    // 0x1a90e4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1a90e8:
    if (ctx->pc == 0x1A90E8u) {
        ctx->pc = 0x1A90E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90E4u;
        // 0x1a90e8: 0x2b01025  or          $v0, $s5, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A90ECu;
        goto label_1a90ec;
    }
    ctx->pc = 0x1A90E4u;
    {
        const bool branch_taken_0x1a90e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A90E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90E4u;
        // 0x1a90e8: 0x2b01025  or          $v0, $s5, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90e4) {
            ctx->pc = 0x1A9104u;
            goto label_1a9104;
        }
    }
    ctx->pc = 0x1A90ECu;
label_1a90ec:
    // 0x1a90ec: 0xc06920c  jal         func_1A4830
label_1a90f0:
    if (ctx->pc == 0x1A90F0u) {
        ctx->pc = 0x1A90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90ECu;
        // 0x1a90f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A90F4u;
        goto label_1a90f4;
    }
    ctx->pc = 0x1A90ECu;
    SET_GPR_U32(ctx, 31, 0x1A90F4u);
    ctx->pc = 0x1A90F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A90ECu;
    // 0x1a90f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A90F4u;
label_1a90f4:
    // 0x1a90f4: 0xc06a158  jal         func_1A8560
label_1a90f8:
    if (ctx->pc == 0x1A90F8u) {
        ctx->pc = 0x1A90FCu;
        goto label_1a90fc;
    }
    ctx->pc = 0x1A90F4u;
    SET_GPR_U32(ctx, 31, 0x1A90FCu);
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A90FCu;
label_1a90fc:
    // 0x1a90fc: 0x10000014  b           . + 4 + (0x14 << 2)
label_1a9100:
    if (ctx->pc == 0x1A9100u) {
        ctx->pc = 0x1A9100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90FCu;
        // 0x1a9100: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9104u;
        goto label_1a9104;
    }
    ctx->pc = 0x1A90FCu;
    {
        const bool branch_taken_0x1a90fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90FCu;
        // 0x1a9100: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90fc) {
            ctx->pc = 0x1A9150u;
            goto label_1a9150;
        }
    }
    ctx->pc = 0x1A9104u;
label_1a9104:
    // 0x1a9104: 0xc06a158  jal         func_1A8560
label_1a9108:
    if (ctx->pc == 0x1A9108u) {
        ctx->pc = 0x1A9108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9104u;
        // 0x1a9108: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A910Cu;
        goto label_1a910c;
    }
    ctx->pc = 0x1A9104u;
    SET_GPR_U32(ctx, 31, 0x1A910Cu);
    ctx->pc = 0x1A9108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9104u;
    // 0x1a9108: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8560u;
    { ctx->pc = 0x1a8560; return; }
    ctx->pc = 0x1A910Cu;
label_1a910c:
    // 0x1a910c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1a9110:
    if (ctx->pc == 0x1A9110u) {
        ctx->pc = 0x1A9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A910Cu;
        // 0x1a9110: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9114u;
        goto label_1a9114;
    }
    ctx->pc = 0x1A910Cu;
    {
        const bool branch_taken_0x1a910c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A910Cu;
        // 0x1a9110: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a910c) {
            ctx->pc = 0x1A9124u;
            goto label_1a9124;
        }
    }
    ctx->pc = 0x1A9114u;
label_1a9114:
    // 0x1a9114: 0xc06920c  jal         func_1A4830
label_1a9118:
    if (ctx->pc == 0x1A9118u) {
        ctx->pc = 0x1A9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9114u;
        // 0x1a9118: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A911Cu;
        goto label_1a911c;
    }
    ctx->pc = 0x1A9114u;
    SET_GPR_U32(ctx, 31, 0x1A911Cu);
    ctx->pc = 0x1A9118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9114u;
    // 0x1a9118: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A911Cu;
label_1a911c:
    // 0x1a911c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a9120:
    if (ctx->pc == 0x1A9120u) {
        ctx->pc = 0x1A9120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A911Cu;
        // 0x1a9120: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9124u;
        goto label_1a9124;
    }
    ctx->pc = 0x1A911Cu;
    {
        const bool branch_taken_0x1a911c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A911Cu;
        // 0x1a9120: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a911c) {
            ctx->pc = 0x1A9150u;
            goto label_1a9150;
        }
    }
    ctx->pc = 0x1A9124u;
label_1a9124:
    // 0x1a9124: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a9128:
    if (ctx->pc == 0x1A9128u) {
        ctx->pc = 0x1A912Cu;
        goto label_1a912c;
    }
    ctx->pc = 0x1A9124u;
    {
        const bool branch_taken_0x1a9124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9124) {
            ctx->pc = 0x1A913Cu;
            goto label_1a913c;
        }
    }
    ctx->pc = 0x1A912Cu;
label_1a912c:
    // 0x1a912c: 0xc06920c  jal         func_1A4830
label_1a9130:
    if (ctx->pc == 0x1A9130u) {
        ctx->pc = 0x1A9130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A912Cu;
        // 0x1a9130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9134u;
        goto label_1a9134;
    }
    ctx->pc = 0x1A912Cu;
    SET_GPR_U32(ctx, 31, 0x1A9134u);
    ctx->pc = 0x1A9130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A912Cu;
    // 0x1a9130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A9134u;
label_1a9134:
    // 0x1a9134: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a9138:
    if (ctx->pc == 0x1A9138u) {
        ctx->pc = 0x1A9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9134u;
        // 0x1a9138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A913Cu;
        goto label_1a913c;
    }
    ctx->pc = 0x1A9134u;
    {
        const bool branch_taken_0x1a9134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9134u;
        // 0x1a9138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9134) {
            ctx->pc = 0x1A9150u;
            goto label_1a9150;
        }
    }
    ctx->pc = 0x1A913Cu;
label_1a913c:
    // 0x1a913c: 0xc069218  jal         func_1A4860
label_1a9140:
    if (ctx->pc == 0x1A9140u) {
        ctx->pc = 0x1A9140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A913Cu;
        // 0x1a9140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9144u;
        goto label_1a9144;
    }
    ctx->pc = 0x1A913Cu;
    SET_GPR_U32(ctx, 31, 0x1A9144u);
    ctx->pc = 0x1A9140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A913Cu;
    // 0x1a9140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A9144u;
label_1a9144:
    // 0x1a9144: 0xc06920c  jal         func_1A4830
label_1a9148:
    if (ctx->pc == 0x1A9148u) {
        ctx->pc = 0x1A9148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9144u;
        // 0x1a9148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A914Cu;
        goto label_1a914c;
    }
    ctx->pc = 0x1A9144u;
    SET_GPR_U32(ctx, 31, 0x1A914Cu);
    ctx->pc = 0x1A9148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9144u;
    // 0x1a9148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A914Cu;
label_1a914c:
    // 0x1a914c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a9150:
    // 0x1a9150: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1a9150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1a9154:
    // 0x1a9154: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1a9154u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1a9158:
    // 0x1a9158: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1a9158u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1a915c:
    // 0x1a915c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1a915cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1a9160:
    // 0x1a9160: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1a9160u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a9164:
    // 0x1a9164: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1a9164u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->pc = 0x1a9168u;
    return;
}
