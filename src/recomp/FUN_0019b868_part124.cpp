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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1d7958u: goto label_1d7958;
        case 0x1d795cu: goto label_1d795c;
        case 0x1d7960u: goto label_1d7960;
        case 0x1d7964u: goto label_1d7964;
        case 0x1d7968u: goto label_1d7968;
        case 0x1d796cu: goto label_1d796c;
        case 0x1d7970u: goto label_1d7970;
        case 0x1d7974u: goto label_1d7974;
        case 0x1d7978u: goto label_1d7978;
        case 0x1d797cu: goto label_1d797c;
        case 0x1d7980u: goto label_1d7980;
        case 0x1d7984u: goto label_1d7984;
        case 0x1d7988u: goto label_1d7988;
        case 0x1d798cu: goto label_1d798c;
        case 0x1d7990u: goto label_1d7990;
        case 0x1d7994u: goto label_1d7994;
        case 0x1d7998u: goto label_1d7998;
        case 0x1d799cu: goto label_1d799c;
        case 0x1d79a0u: goto label_1d79a0;
        case 0x1d79a4u: goto label_1d79a4;
        case 0x1d79a8u: goto label_1d79a8;
        case 0x1d79acu: goto label_1d79ac;
        case 0x1d79b0u: goto label_1d79b0;
        case 0x1d79b4u: goto label_1d79b4;
        case 0x1d79b8u: goto label_1d79b8;
        case 0x1d79bcu: goto label_1d79bc;
        case 0x1d79c0u: goto label_1d79c0;
        case 0x1d79c4u: goto label_1d79c4;
        case 0x1d79c8u: goto label_1d79c8;
        case 0x1d79ccu: goto label_1d79cc;
        case 0x1d79d0u: goto label_1d79d0;
        case 0x1d79d4u: goto label_1d79d4;
        case 0x1d79d8u: goto label_1d79d8;
        case 0x1d79dcu: goto label_1d79dc;
        case 0x1d79e0u: goto label_1d79e0;
        case 0x1d79e4u: goto label_1d79e4;
        case 0x1d79e8u: goto label_1d79e8;
        case 0x1d79ecu: goto label_1d79ec;
        case 0x1d79f0u: goto label_1d79f0;
        case 0x1d79f4u: goto label_1d79f4;
        case 0x1d79f8u: goto label_1d79f8;
        case 0x1d79fcu: goto label_1d79fc;
        case 0x1d7a00u: goto label_1d7a00;
        case 0x1d7a04u: goto label_1d7a04;
        case 0x1d7a08u: goto label_1d7a08;
        case 0x1d7a0cu: goto label_1d7a0c;
        case 0x1d7a10u: goto label_1d7a10;
        case 0x1d7a14u: goto label_1d7a14;
        case 0x1d7a18u: goto label_1d7a18;
        case 0x1d7a1cu: goto label_1d7a1c;
        case 0x1d7a20u: goto label_1d7a20;
        case 0x1d7a24u: goto label_1d7a24;
        case 0x1d7a28u: goto label_1d7a28;
        case 0x1d7a2cu: goto label_1d7a2c;
        case 0x1d7a30u: goto label_1d7a30;
        case 0x1d7a34u: goto label_1d7a34;
        case 0x1d7a38u: goto label_1d7a38;
        case 0x1d7a3cu: goto label_1d7a3c;
        case 0x1d7a40u: goto label_1d7a40;
        case 0x1d7a44u: goto label_1d7a44;
        case 0x1d7a48u: goto label_1d7a48;
        case 0x1d7a4cu: goto label_1d7a4c;
        case 0x1d7a50u: goto label_1d7a50;
        case 0x1d7a54u: goto label_1d7a54;
        case 0x1d7a58u: goto label_1d7a58;
        case 0x1d7a5cu: goto label_1d7a5c;
        case 0x1d7a60u: goto label_1d7a60;
        case 0x1d7a64u: goto label_1d7a64;
        case 0x1d7a68u: goto label_1d7a68;
        case 0x1d7a6cu: goto label_1d7a6c;
        case 0x1d7a70u: goto label_1d7a70;
        case 0x1d7a74u: goto label_1d7a74;
        case 0x1d7a78u: goto label_1d7a78;
        case 0x1d7a7cu: goto label_1d7a7c;
        case 0x1d7a80u: goto label_1d7a80;
        case 0x1d7a84u: goto label_1d7a84;
        case 0x1d7a88u: goto label_1d7a88;
        case 0x1d7a8cu: goto label_1d7a8c;
        case 0x1d7a90u: goto label_1d7a90;
        case 0x1d7a94u: goto label_1d7a94;
        case 0x1d7a98u: goto label_1d7a98;
        case 0x1d7a9cu: goto label_1d7a9c;
        case 0x1d7aa0u: goto label_1d7aa0;
        case 0x1d7aa4u: goto label_1d7aa4;
        case 0x1d7aa8u: goto label_1d7aa8;
        case 0x1d7aacu: goto label_1d7aac;
        case 0x1d7ab0u: goto label_1d7ab0;
        case 0x1d7ab4u: goto label_1d7ab4;
        case 0x1d7ab8u: goto label_1d7ab8;
        case 0x1d7abcu: goto label_1d7abc;
        case 0x1d7ac0u: goto label_1d7ac0;
        case 0x1d7ac4u: goto label_1d7ac4;
        case 0x1d7ac8u: goto label_1d7ac8;
        case 0x1d7accu: goto label_1d7acc;
        case 0x1d7ad0u: goto label_1d7ad0;
        case 0x1d7ad4u: goto label_1d7ad4;
        case 0x1d7ad8u: goto label_1d7ad8;
        case 0x1d7adcu: goto label_1d7adc;
        case 0x1d7ae0u: goto label_1d7ae0;
        case 0x1d7ae4u: goto label_1d7ae4;
        case 0x1d7ae8u: goto label_1d7ae8;
        case 0x1d7aecu: goto label_1d7aec;
        case 0x1d7af0u: goto label_1d7af0;
        case 0x1d7af4u: goto label_1d7af4;
        case 0x1d7af8u: goto label_1d7af8;
        case 0x1d7afcu: goto label_1d7afc;
        case 0x1d7b00u: goto label_1d7b00;
        case 0x1d7b04u: goto label_1d7b04;
        case 0x1d7b08u: goto label_1d7b08;
        case 0x1d7b0cu: goto label_1d7b0c;
        case 0x1d7b10u: goto label_1d7b10;
        case 0x1d7b14u: goto label_1d7b14;
        case 0x1d7b18u: goto label_1d7b18;
        case 0x1d7b1cu: goto label_1d7b1c;
        case 0x1d7b20u: goto label_1d7b20;
        case 0x1d7b24u: goto label_1d7b24;
        case 0x1d7b28u: goto label_1d7b28;
        case 0x1d7b2cu: goto label_1d7b2c;
        case 0x1d7b30u: goto label_1d7b30;
        case 0x1d7b34u: goto label_1d7b34;
        case 0x1d7b38u: goto label_1d7b38;
        case 0x1d7b3cu: goto label_1d7b3c;
        case 0x1d7b40u: goto label_1d7b40;
        case 0x1d7b44u: goto label_1d7b44;
        case 0x1d7b48u: goto label_1d7b48;
        case 0x1d7b4cu: goto label_1d7b4c;
        case 0x1d7b50u: goto label_1d7b50;
        case 0x1d7b54u: goto label_1d7b54;
        case 0x1d7b58u: goto label_1d7b58;
        case 0x1d7b5cu: goto label_1d7b5c;
        case 0x1d7b60u: goto label_1d7b60;
        case 0x1d7b64u: goto label_1d7b64;
        case 0x1d7b68u: goto label_1d7b68;
        case 0x1d7b6cu: goto label_1d7b6c;
        case 0x1d7b70u: goto label_1d7b70;
        case 0x1d7b74u: goto label_1d7b74;
        case 0x1d7b78u: goto label_1d7b78;
        case 0x1d7b7cu: goto label_1d7b7c;
        case 0x1d7b80u: goto label_1d7b80;
        case 0x1d7b84u: goto label_1d7b84;
        case 0x1d7b88u: goto label_1d7b88;
        case 0x1d7b8cu: goto label_1d7b8c;
        case 0x1d7b90u: goto label_1d7b90;
        case 0x1d7b94u: goto label_1d7b94;
        case 0x1d7b98u: goto label_1d7b98;
        case 0x1d7b9cu: goto label_1d7b9c;
        case 0x1d7ba0u: goto label_1d7ba0;
        case 0x1d7ba4u: goto label_1d7ba4;
        case 0x1d7ba8u: goto label_1d7ba8;
        case 0x1d7bacu: goto label_1d7bac;
        case 0x1d7bb0u: goto label_1d7bb0;
        case 0x1d7bb4u: goto label_1d7bb4;
        case 0x1d7bb8u: goto label_1d7bb8;
        case 0x1d7bbcu: goto label_1d7bbc;
        case 0x1d7bc0u: goto label_1d7bc0;
        case 0x1d7bc4u: goto label_1d7bc4;
        case 0x1d7bc8u: goto label_1d7bc8;
        case 0x1d7bccu: goto label_1d7bcc;
        case 0x1d7bd0u: goto label_1d7bd0;
        case 0x1d7bd4u: goto label_1d7bd4;
        case 0x1d7bd8u: goto label_1d7bd8;
        case 0x1d7bdcu: goto label_1d7bdc;
        case 0x1d7be0u: goto label_1d7be0;
        case 0x1d7be4u: goto label_1d7be4;
        case 0x1d7be8u: goto label_1d7be8;
        case 0x1d7becu: goto label_1d7bec;
        case 0x1d7bf0u: goto label_1d7bf0;
        case 0x1d7bf4u: goto label_1d7bf4;
        case 0x1d7bf8u: goto label_1d7bf8;
        case 0x1d7bfcu: goto label_1d7bfc;
        case 0x1d7c00u: goto label_1d7c00;
        case 0x1d7c04u: goto label_1d7c04;
        case 0x1d7c08u: goto label_1d7c08;
        case 0x1d7c0cu: goto label_1d7c0c;
        case 0x1d7c10u: goto label_1d7c10;
        case 0x1d7c14u: goto label_1d7c14;
        case 0x1d7c18u: goto label_1d7c18;
        case 0x1d7c1cu: goto label_1d7c1c;
        case 0x1d7c20u: goto label_1d7c20;
        case 0x1d7c24u: goto label_1d7c24;
        case 0x1d7c28u: goto label_1d7c28;
        case 0x1d7c2cu: goto label_1d7c2c;
        case 0x1d7c30u: goto label_1d7c30;
        case 0x1d7c34u: goto label_1d7c34;
        case 0x1d7c38u: goto label_1d7c38;
        case 0x1d7c3cu: goto label_1d7c3c;
        case 0x1d7c40u: goto label_1d7c40;
        case 0x1d7c44u: goto label_1d7c44;
        case 0x1d7c48u: goto label_1d7c48;
        case 0x1d7c4cu: goto label_1d7c4c;
        case 0x1d7c50u: goto label_1d7c50;
        case 0x1d7c54u: goto label_1d7c54;
        case 0x1d7c58u: goto label_1d7c58;
        case 0x1d7c5cu: goto label_1d7c5c;
        case 0x1d7c60u: goto label_1d7c60;
        case 0x1d7c64u: goto label_1d7c64;
        case 0x1d7c68u: goto label_1d7c68;
        case 0x1d7c6cu: goto label_1d7c6c;
        case 0x1d7c70u: goto label_1d7c70;
        case 0x1d7c74u: goto label_1d7c74;
        case 0x1d7c78u: goto label_1d7c78;
        case 0x1d7c7cu: goto label_1d7c7c;
        case 0x1d7c80u: goto label_1d7c80;
        case 0x1d7c84u: goto label_1d7c84;
        case 0x1d7c88u: goto label_1d7c88;
        case 0x1d7c8cu: goto label_1d7c8c;
        case 0x1d7c90u: goto label_1d7c90;
        case 0x1d7c94u: goto label_1d7c94;
        case 0x1d7c98u: goto label_1d7c98;
        case 0x1d7c9cu: goto label_1d7c9c;
        case 0x1d7ca0u: goto label_1d7ca0;
        case 0x1d7ca4u: goto label_1d7ca4;
        case 0x1d7ca8u: goto label_1d7ca8;
        case 0x1d7cacu: goto label_1d7cac;
        case 0x1d7cb0u: goto label_1d7cb0;
        case 0x1d7cb4u: goto label_1d7cb4;
        case 0x1d7cb8u: goto label_1d7cb8;
        case 0x1d7cbcu: goto label_1d7cbc;
        case 0x1d7cc0u: goto label_1d7cc0;
        case 0x1d7cc4u: goto label_1d7cc4;
        case 0x1d7cc8u: goto label_1d7cc8;
        case 0x1d7cccu: goto label_1d7ccc;
        case 0x1d7cd0u: goto label_1d7cd0;
        case 0x1d7cd4u: goto label_1d7cd4;
        case 0x1d7cd8u: goto label_1d7cd8;
        case 0x1d7cdcu: goto label_1d7cdc;
        case 0x1d7ce0u: goto label_1d7ce0;
        case 0x1d7ce4u: goto label_1d7ce4;
        case 0x1d7ce8u: goto label_1d7ce8;
        case 0x1d7cecu: goto label_1d7cec;
        case 0x1d7cf0u: goto label_1d7cf0;
        case 0x1d7cf4u: goto label_1d7cf4;
        case 0x1d7cf8u: goto label_1d7cf8;
        case 0x1d7cfcu: goto label_1d7cfc;
        case 0x1d7d00u: goto label_1d7d00;
        case 0x1d7d04u: goto label_1d7d04;
        case 0x1d7d08u: goto label_1d7d08;
        case 0x1d7d0cu: goto label_1d7d0c;
        case 0x1d7d10u: goto label_1d7d10;
        case 0x1d7d14u: goto label_1d7d14;
        case 0x1d7d18u: goto label_1d7d18;
        case 0x1d7d1cu: goto label_1d7d1c;
        case 0x1d7d20u: goto label_1d7d20;
        case 0x1d7d24u: goto label_1d7d24;
        case 0x1d7d28u: goto label_1d7d28;
        case 0x1d7d2cu: goto label_1d7d2c;
        case 0x1d7d30u: goto label_1d7d30;
        case 0x1d7d34u: goto label_1d7d34;
        case 0x1d7d38u: goto label_1d7d38;
        case 0x1d7d3cu: goto label_1d7d3c;
        case 0x1d7d40u: goto label_1d7d40;
        case 0x1d7d44u: goto label_1d7d44;
        case 0x1d7d48u: goto label_1d7d48;
        case 0x1d7d4cu: goto label_1d7d4c;
        case 0x1d7d50u: goto label_1d7d50;
        case 0x1d7d54u: goto label_1d7d54;
        case 0x1d7d58u: goto label_1d7d58;
        case 0x1d7d5cu: goto label_1d7d5c;
        case 0x1d7d60u: goto label_1d7d60;
        case 0x1d7d64u: goto label_1d7d64;
        case 0x1d7d68u: goto label_1d7d68;
        case 0x1d7d6cu: goto label_1d7d6c;
        case 0x1d7d70u: goto label_1d7d70;
        case 0x1d7d74u: goto label_1d7d74;
        case 0x1d7d78u: goto label_1d7d78;
        case 0x1d7d7cu: goto label_1d7d7c;
        case 0x1d7d80u: goto label_1d7d80;
        case 0x1d7d84u: goto label_1d7d84;
        case 0x1d7d88u: goto label_1d7d88;
        case 0x1d7d8cu: goto label_1d7d8c;
        case 0x1d7d90u: goto label_1d7d90;
        case 0x1d7d94u: goto label_1d7d94;
        case 0x1d7d98u: goto label_1d7d98;
        case 0x1d7d9cu: goto label_1d7d9c;
        case 0x1d7da0u: goto label_1d7da0;
        case 0x1d7da4u: goto label_1d7da4;
        case 0x1d7da8u: goto label_1d7da8;
        case 0x1d7dacu: goto label_1d7dac;
        case 0x1d7db0u: goto label_1d7db0;
        case 0x1d7db4u: goto label_1d7db4;
        case 0x1d7db8u: goto label_1d7db8;
        case 0x1d7dbcu: goto label_1d7dbc;
        case 0x1d7dc0u: goto label_1d7dc0;
        case 0x1d7dc4u: goto label_1d7dc4;
        case 0x1d7dc8u: goto label_1d7dc8;
        case 0x1d7dccu: goto label_1d7dcc;
        case 0x1d7dd0u: goto label_1d7dd0;
        case 0x1d7dd4u: goto label_1d7dd4;
        case 0x1d7dd8u: goto label_1d7dd8;
        case 0x1d7ddcu: goto label_1d7ddc;
        case 0x1d7de0u: goto label_1d7de0;
        case 0x1d7de4u: goto label_1d7de4;
        case 0x1d7de8u: goto label_1d7de8;
        case 0x1d7decu: goto label_1d7dec;
        case 0x1d7df0u: goto label_1d7df0;
        case 0x1d7df4u: goto label_1d7df4;
        case 0x1d7df8u: goto label_1d7df8;
        case 0x1d7dfcu: goto label_1d7dfc;
        case 0x1d7e00u: goto label_1d7e00;
        case 0x1d7e04u: goto label_1d7e04;
        case 0x1d7e08u: goto label_1d7e08;
        case 0x1d7e0cu: goto label_1d7e0c;
        case 0x1d7e10u: goto label_1d7e10;
        case 0x1d7e14u: goto label_1d7e14;
        case 0x1d7e18u: goto label_1d7e18;
        case 0x1d7e1cu: goto label_1d7e1c;
        case 0x1d7e20u: goto label_1d7e20;
        case 0x1d7e24u: goto label_1d7e24;
        case 0x1d7e28u: goto label_1d7e28;
        case 0x1d7e2cu: goto label_1d7e2c;
        case 0x1d7e30u: goto label_1d7e30;
        case 0x1d7e34u: goto label_1d7e34;
        case 0x1d7e38u: goto label_1d7e38;
        case 0x1d7e3cu: goto label_1d7e3c;
        case 0x1d7e40u: goto label_1d7e40;
        case 0x1d7e44u: goto label_1d7e44;
        case 0x1d7e48u: goto label_1d7e48;
        case 0x1d7e4cu: goto label_1d7e4c;
        case 0x1d7e50u: goto label_1d7e50;
        case 0x1d7e54u: goto label_1d7e54;
        case 0x1d7e58u: goto label_1d7e58;
        case 0x1d7e5cu: goto label_1d7e5c;
        case 0x1d7e60u: goto label_1d7e60;
        case 0x1d7e64u: goto label_1d7e64;
        case 0x1d7e68u: goto label_1d7e68;
        case 0x1d7e6cu: goto label_1d7e6c;
        case 0x1d7e70u: goto label_1d7e70;
        case 0x1d7e74u: goto label_1d7e74;
        case 0x1d7e78u: goto label_1d7e78;
        case 0x1d7e7cu: goto label_1d7e7c;
        case 0x1d7e80u: goto label_1d7e80;
        case 0x1d7e84u: goto label_1d7e84;
        case 0x1d7e88u: goto label_1d7e88;
        case 0x1d7e8cu: goto label_1d7e8c;
        case 0x1d7e90u: goto label_1d7e90;
        case 0x1d7e94u: goto label_1d7e94;
        case 0x1d7e98u: goto label_1d7e98;
        case 0x1d7e9cu: goto label_1d7e9c;
        case 0x1d7ea0u: goto label_1d7ea0;
        case 0x1d7ea4u: goto label_1d7ea4;
        case 0x1d7ea8u: goto label_1d7ea8;
        case 0x1d7eacu: goto label_1d7eac;
        case 0x1d7eb0u: goto label_1d7eb0;
        case 0x1d7eb4u: goto label_1d7eb4;
        case 0x1d7eb8u: goto label_1d7eb8;
        case 0x1d7ebcu: goto label_1d7ebc;
        case 0x1d7ec0u: goto label_1d7ec0;
        case 0x1d7ec4u: goto label_1d7ec4;
        case 0x1d7ec8u: goto label_1d7ec8;
        case 0x1d7eccu: goto label_1d7ecc;
        case 0x1d7ed0u: goto label_1d7ed0;
        case 0x1d7ed4u: goto label_1d7ed4;
        case 0x1d7ed8u: goto label_1d7ed8;
        case 0x1d7edcu: goto label_1d7edc;
        case 0x1d7ee0u: goto label_1d7ee0;
        case 0x1d7ee4u: goto label_1d7ee4;
        case 0x1d7ee8u: goto label_1d7ee8;
        case 0x1d7eecu: goto label_1d7eec;
        case 0x1d7ef0u: goto label_1d7ef0;
        case 0x1d7ef4u: goto label_1d7ef4;
        case 0x1d7ef8u: goto label_1d7ef8;
        case 0x1d7efcu: goto label_1d7efc;
        case 0x1d7f00u: goto label_1d7f00;
        case 0x1d7f04u: goto label_1d7f04;
        case 0x1d7f08u: goto label_1d7f08;
        case 0x1d7f0cu: goto label_1d7f0c;
        case 0x1d7f10u: goto label_1d7f10;
        case 0x1d7f14u: goto label_1d7f14;
        case 0x1d7f18u: goto label_1d7f18;
        case 0x1d7f1cu: goto label_1d7f1c;
        case 0x1d7f20u: goto label_1d7f20;
        case 0x1d7f24u: goto label_1d7f24;
        case 0x1d7f28u: goto label_1d7f28;
        case 0x1d7f2cu: goto label_1d7f2c;
        case 0x1d7f30u: goto label_1d7f30;
        case 0x1d7f34u: goto label_1d7f34;
        case 0x1d7f38u: goto label_1d7f38;
        case 0x1d7f3cu: goto label_1d7f3c;
        case 0x1d7f40u: goto label_1d7f40;
        case 0x1d7f44u: goto label_1d7f44;
        case 0x1d7f48u: goto label_1d7f48;
        case 0x1d7f4cu: goto label_1d7f4c;
        case 0x1d7f50u: goto label_1d7f50;
        case 0x1d7f54u: goto label_1d7f54;
        case 0x1d7f58u: goto label_1d7f58;
        case 0x1d7f5cu: goto label_1d7f5c;
        case 0x1d7f60u: goto label_1d7f60;
        case 0x1d7f64u: goto label_1d7f64;
        case 0x1d7f68u: goto label_1d7f68;
        case 0x1d7f6cu: goto label_1d7f6c;
        case 0x1d7f70u: goto label_1d7f70;
        case 0x1d7f74u: goto label_1d7f74;
        case 0x1d7f78u: goto label_1d7f78;
        case 0x1d7f7cu: goto label_1d7f7c;
        case 0x1d7f80u: goto label_1d7f80;
        case 0x1d7f84u: goto label_1d7f84;
        case 0x1d7f88u: goto label_1d7f88;
        case 0x1d7f8cu: goto label_1d7f8c;
        case 0x1d7f90u: goto label_1d7f90;
        case 0x1d7f94u: goto label_1d7f94;
        case 0x1d7f98u: goto label_1d7f98;
        case 0x1d7f9cu: goto label_1d7f9c;
        case 0x1d7fa0u: goto label_1d7fa0;
        case 0x1d7fa4u: goto label_1d7fa4;
        case 0x1d7fa8u: goto label_1d7fa8;
        case 0x1d7facu: goto label_1d7fac;
        case 0x1d7fb0u: goto label_1d7fb0;
        case 0x1d7fb4u: goto label_1d7fb4;
        case 0x1d7fb8u: goto label_1d7fb8;
        case 0x1d7fbcu: goto label_1d7fbc;
        case 0x1d7fc0u: goto label_1d7fc0;
        case 0x1d7fc4u: goto label_1d7fc4;
        case 0x1d7fc8u: goto label_1d7fc8;
        case 0x1d7fccu: goto label_1d7fcc;
        case 0x1d7fd0u: goto label_1d7fd0;
        case 0x1d7fd4u: goto label_1d7fd4;
        case 0x1d7fd8u: goto label_1d7fd8;
        case 0x1d7fdcu: goto label_1d7fdc;
        case 0x1d7fe0u: goto label_1d7fe0;
        case 0x1d7fe4u: goto label_1d7fe4;
        case 0x1d7fe8u: goto label_1d7fe8;
        case 0x1d7fecu: goto label_1d7fec;
        case 0x1d7ff0u: goto label_1d7ff0;
        case 0x1d7ff4u: goto label_1d7ff4;
        case 0x1d7ff8u: goto label_1d7ff8;
        case 0x1d7ffcu: goto label_1d7ffc;
        case 0x1d8000u: goto label_1d8000;
        case 0x1d8004u: goto label_1d8004;
        case 0x1d8008u: goto label_1d8008;
        case 0x1d800cu: goto label_1d800c;
        case 0x1d8010u: goto label_1d8010;
        case 0x1d8014u: goto label_1d8014;
        case 0x1d8018u: goto label_1d8018;
        case 0x1d801cu: goto label_1d801c;
        case 0x1d8020u: goto label_1d8020;
        case 0x1d8024u: goto label_1d8024;
        case 0x1d8028u: goto label_1d8028;
        case 0x1d802cu: goto label_1d802c;
        case 0x1d8030u: goto label_1d8030;
        case 0x1d8034u: goto label_1d8034;
        case 0x1d8038u: goto label_1d8038;
        case 0x1d803cu: goto label_1d803c;
        case 0x1d8040u: goto label_1d8040;
        case 0x1d8044u: goto label_1d8044;
        case 0x1d8048u: goto label_1d8048;
        case 0x1d804cu: goto label_1d804c;
        case 0x1d8050u: goto label_1d8050;
        case 0x1d8054u: goto label_1d8054;
        case 0x1d8058u: goto label_1d8058;
        case 0x1d805cu: goto label_1d805c;
        case 0x1d8060u: goto label_1d8060;
        case 0x1d8064u: goto label_1d8064;
        case 0x1d8068u: goto label_1d8068;
        case 0x1d806cu: goto label_1d806c;
        case 0x1d8070u: goto label_1d8070;
        case 0x1d8074u: goto label_1d8074;
        case 0x1d8078u: goto label_1d8078;
        case 0x1d807cu: goto label_1d807c;
        case 0x1d8080u: goto label_1d8080;
        case 0x1d8084u: goto label_1d8084;
        case 0x1d8088u: goto label_1d8088;
        case 0x1d808cu: goto label_1d808c;
        case 0x1d8090u: goto label_1d8090;
        case 0x1d8094u: goto label_1d8094;
        case 0x1d8098u: goto label_1d8098;
        case 0x1d809cu: goto label_1d809c;
        case 0x1d80a0u: goto label_1d80a0;
        case 0x1d80a4u: goto label_1d80a4;
        case 0x1d80a8u: goto label_1d80a8;
        case 0x1d80acu: goto label_1d80ac;
        case 0x1d80b0u: goto label_1d80b0;
        case 0x1d80b4u: goto label_1d80b4;
        case 0x1d80b8u: goto label_1d80b8;
        case 0x1d80bcu: goto label_1d80bc;
        case 0x1d80c0u: goto label_1d80c0;
        case 0x1d80c4u: goto label_1d80c4;
        case 0x1d80c8u: goto label_1d80c8;
        case 0x1d80ccu: goto label_1d80cc;
        case 0x1d80d0u: goto label_1d80d0;
        case 0x1d80d4u: goto label_1d80d4;
        case 0x1d80d8u: goto label_1d80d8;
        case 0x1d80dcu: goto label_1d80dc;
        case 0x1d80e0u: goto label_1d80e0;
        case 0x1d80e4u: goto label_1d80e4;
        case 0x1d80e8u: goto label_1d80e8;
        case 0x1d80ecu: goto label_1d80ec;
        case 0x1d80f0u: goto label_1d80f0;
        case 0x1d80f4u: goto label_1d80f4;
        case 0x1d80f8u: goto label_1d80f8;
        case 0x1d80fcu: goto label_1d80fc;
        case 0x1d8100u: goto label_1d8100;
        case 0x1d8104u: goto label_1d8104;
        case 0x1d8108u: goto label_1d8108;
        case 0x1d810cu: goto label_1d810c;
        case 0x1d8110u: goto label_1d8110;
        case 0x1d8114u: goto label_1d8114;
        case 0x1d8118u: goto label_1d8118;
        case 0x1d811cu: goto label_1d811c;
        case 0x1d8120u: goto label_1d8120;
        case 0x1d8124u: goto label_1d8124;
        default: return;
    }

label_1d7958:
    // 0x1d7958: 0xa0aa0082  sb          $t2, 0x82($a1)
    ctx->pc = 0x1d7958u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 130), (uint8_t)GPR_U32(ctx, 10));
label_1d795c:
    // 0x1d795c: 0x83828c68  lb          $v0, -0x7398($gp)
    ctx->pc = 0x1d795cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937704)));
label_1d7960:
    // 0x1d7960: 0xa0a20083  sb          $v0, 0x83($a1)
    ctx->pc = 0x1d7960u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 131), (uint8_t)GPR_U32(ctx, 2));
label_1d7964:
    // 0x1d7964: 0xaca30084  sw          $v1, 0x84($a1)
    ctx->pc = 0x1d7964u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 3));
label_1d7968:
    // 0x1d7968: 0xa0aa0120  sb          $t2, 0x120($a1)
    ctx->pc = 0x1d7968u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 288), (uint8_t)GPR_U32(ctx, 10));
label_1d796c:
    // 0x1d796c: 0xa0aa0121  sb          $t2, 0x121($a1)
    ctx->pc = 0x1d796cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 289), (uint8_t)GPR_U32(ctx, 10));
label_1d7970:
    // 0x1d7970: 0xa0aa0122  sb          $t2, 0x122($a1)
    ctx->pc = 0x1d7970u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 290), (uint8_t)GPR_U32(ctx, 10));
label_1d7974:
    // 0x1d7974: 0x83828c64  lb          $v0, -0x739C($gp)
    ctx->pc = 0x1d7974u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937700)));
label_1d7978:
    // 0x1d7978: 0xa0a20123  sb          $v0, 0x123($a1)
    ctx->pc = 0x1d7978u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 2));
label_1d797c:
    // 0x1d797c: 0xaca30124  sw          $v1, 0x124($a1)
    ctx->pc = 0x1d797cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 3));
label_1d7980:
    // 0x1d7980: 0xa0aa01c0  sb          $t2, 0x1C0($a1)
    ctx->pc = 0x1d7980u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 448), (uint8_t)GPR_U32(ctx, 10));
label_1d7984:
    // 0x1d7984: 0xa0aa01c1  sb          $t2, 0x1C1($a1)
    ctx->pc = 0x1d7984u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 449), (uint8_t)GPR_U32(ctx, 10));
label_1d7988:
    // 0x1d7988: 0xa0aa01c2  sb          $t2, 0x1C2($a1)
    ctx->pc = 0x1d7988u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 450), (uint8_t)GPR_U32(ctx, 10));
label_1d798c:
    // 0x1d798c: 0x83828c60  lb          $v0, -0x73A0($gp)
    ctx->pc = 0x1d798cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937696)));
label_1d7990:
    // 0x1d7990: 0xa0a201c3  sb          $v0, 0x1C3($a1)
    ctx->pc = 0x1d7990u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 451), (uint8_t)GPR_U32(ctx, 2));
label_1d7994:
    // 0x1d7994: 0xaca301c4  sw          $v1, 0x1C4($a1)
    ctx->pc = 0x1d7994u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 452), GPR_U32(ctx, 3));
label_1d7998:
    // 0x1d7998: 0xa0aa0260  sb          $t2, 0x260($a1)
    ctx->pc = 0x1d7998u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 608), (uint8_t)GPR_U32(ctx, 10));
label_1d799c:
    // 0x1d799c: 0xa0aa0261  sb          $t2, 0x261($a1)
    ctx->pc = 0x1d799cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 609), (uint8_t)GPR_U32(ctx, 10));
label_1d79a0:
    // 0x1d79a0: 0xa0aa0262  sb          $t2, 0x262($a1)
    ctx->pc = 0x1d79a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 610), (uint8_t)GPR_U32(ctx, 10));
label_1d79a4:
    // 0x1d79a4: 0x83828c5c  lb          $v0, -0x73A4($gp)
    ctx->pc = 0x1d79a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_1d79a8:
    // 0x1d79a8: 0xa0a20263  sb          $v0, 0x263($a1)
    ctx->pc = 0x1d79a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 611), (uint8_t)GPR_U32(ctx, 2));
label_1d79ac:
    // 0x1d79ac: 0xc066c72  jal         func_19B1C8
label_1d79b0:
    if (ctx->pc == 0x1D79B0u) {
        ctx->pc = 0x1D79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79ACu;
        // 0x1d79b0: 0xaca30264  sw          $v1, 0x264($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D79B4u;
        goto label_1d79b4;
    }
    ctx->pc = 0x1D79ACu;
    SET_GPR_U32(ctx, 31, 0x1D79B4u);
    ctx->pc = 0x1D79B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D79ACu;
    // 0x1d79b0: 0xaca30264  sw          $v1, 0x264($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D79ACu, 0x1D79B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D79B4u;
label_1d79b4:
    // 0x1d79b4: 0xc04e120  jal         func_138480
label_1d79b8:
    if (ctx->pc == 0x1D79B8u) {
        ctx->pc = 0x1D79BCu;
        goto label_1d79bc;
    }
    ctx->pc = 0x1D79B4u;
    SET_GPR_U32(ctx, 31, 0x1D79BCu);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1D79B4u, 0x1D79BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D79BCu;
label_1d79bc:
    // 0x1d79bc: 0xc05b578  jal         func_16D5E0
label_1d79c0:
    if (ctx->pc == 0x1D79C0u) {
        ctx->pc = 0x1D79C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79BCu;
        // 0x1d79c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D79C4u;
        goto label_1d79c4;
    }
    ctx->pc = 0x1D79BCu;
    SET_GPR_U32(ctx, 31, 0x1D79C4u);
    ctx->pc = 0x1D79C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D79BCu;
    // 0x1d79c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1D79BCu, 0x1D79C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D79C4u;
label_1d79c4:
    // 0x1d79c4: 0xc060258  jal         func_180960
label_1d79c8:
    if (ctx->pc == 0x1D79C8u) {
        ctx->pc = 0x1D79CCu;
        goto label_1d79cc;
    }
    ctx->pc = 0x1D79C4u;
    SET_GPR_U32(ctx, 31, 0x1D79CCu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D79C4u, 0x1D79CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D79CCu;
label_1d79cc:
    // 0x1d79cc: 0x1000ff7b  b           . + 4 + (-0x85 << 2)
label_1d79d0:
    if (ctx->pc == 0x1D79D0u) {
        ctx->pc = 0x1D79D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79CCu;
        // 0x1d79d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D79D4u;
        goto label_1d79d4;
    }
    ctx->pc = 0x1D79CCu;
    {
        const bool branch_taken_0x1d79cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D79D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79CCu;
        // 0x1d79d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79cc) {
            ctx->pc = 0x1D77BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d77bc; return; }
        }
    }
    ctx->pc = 0x1D79D4u;
label_1d79d4:
    // 0x1d79d4: 0x0  nop
    ctx->pc = 0x1d79d4u;
    // NOP
label_1d79d8:
    // 0x1d79d8: 0x12600050  beqz        $s3, . + 4 + (0x50 << 2)
label_1d79dc:
    if (ctx->pc == 0x1D79DCu) {
        ctx->pc = 0x1D79DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79D8u;
        // 0x1d79dc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D79E0u;
        goto label_1d79e0;
    }
    ctx->pc = 0x1D79D8u;
    {
        const bool branch_taken_0x1d79d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D79DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79D8u;
        // 0x1d79dc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79d8) {
            ctx->pc = 0x1D7B1Cu;
            goto label_1d7b1c;
        }
    }
    ctx->pc = 0x1D79E0u;
label_1d79e0:
    // 0x1d79e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d79e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d79e4:
    // 0x1d79e4: 0x8f828c68  lw          $v0, -0x7398($gp)
    ctx->pc = 0x1d79e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
label_1d79e8:
    // 0x1d79e8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d79e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1d79ec:
    // 0x1d79ec: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d79ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d79f0:
    // 0x1d79f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d79f4:
    if (ctx->pc == 0x1D79F4u) {
        ctx->pc = 0x1D79F8u;
        goto label_1d79f8;
    }
    ctx->pc = 0x1D79F0u;
    {
        const bool branch_taken_0x1d79f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d79f0) {
            ctx->pc = 0x1D7A00u;
            goto label_1d7a00;
        }
    }
    ctx->pc = 0x1D79F8u;
label_1d79f8:
    // 0x1d79f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d79fc:
    if (ctx->pc == 0x1D79FCu) {
        ctx->pc = 0x1D79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79F8u;
        // 0x1d79fc: 0xaf828c68  sw          $v0, -0x7398($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7A00u;
        goto label_1d7a00;
    }
    ctx->pc = 0x1D79F8u;
    {
        const bool branch_taken_0x1d79f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79F8u;
        // 0x1d79fc: 0xaf828c68  sw          $v0, -0x7398($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79f8) {
            ctx->pc = 0x1D7A08u;
            goto label_1d7a08;
        }
    }
    ctx->pc = 0x1D7A00u;
label_1d7a00:
    // 0x1d7a00: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d7a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d7a04:
    // 0x1d7a04: 0xaf828c68  sw          $v0, -0x7398($gp)
    ctx->pc = 0x1d7a04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937704), GPR_U32(ctx, 2));
label_1d7a08:
    // 0x1d7a08: 0x8f828c64  lw          $v0, -0x739C($gp)
    ctx->pc = 0x1d7a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
label_1d7a0c:
    // 0x1d7a0c: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1d7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1d7a10:
    // 0x1d7a10: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d7a10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d7a14:
    // 0x1d7a14: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1d7a14u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1d7a18:
    // 0x1d7a18: 0xaf828c64  sw          $v0, -0x739C($gp)
    ctx->pc = 0x1d7a18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937700), GPR_U32(ctx, 2));
label_1d7a1c:
    // 0x1d7a1c: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x1d7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
label_1d7a20:
    // 0x1d7a20: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1d7a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1d7a24:
    // 0x1d7a24: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d7a24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d7a28:
    // 0x1d7a28: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1d7a28u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1d7a2c:
    // 0x1d7a2c: 0xaf828c60  sw          $v0, -0x73A0($gp)
    ctx->pc = 0x1d7a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937696), GPR_U32(ctx, 2));
label_1d7a30:
    // 0x1d7a30: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x1d7a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_1d7a34:
    // 0x1d7a34: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1d7a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1d7a38:
    // 0x1d7a38: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d7a38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d7a3c:
    // 0x1d7a3c: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1d7a3cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1d7a40:
    // 0x1d7a40: 0xaf828c5c  sw          $v0, -0x73A4($gp)
    ctx->pc = 0x1d7a40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937692), GPR_U32(ctx, 2));
label_1d7a44:
    // 0x1d7a44: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d7a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d7a48:
    // 0x1d7a48: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x1d7a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d7a4c:
    // 0x1d7a4c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d7a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d7a50:
    // 0x1d7a50: 0x27828c70  addiu       $v0, $gp, -0x7390
    ctx->pc = 0x1d7a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937712));
label_1d7a54:
    // 0x1d7a54: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1d7a54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d7a58:
    // 0x1d7a58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d7a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1d7a5c:
    // 0x1d7a5c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d7a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d7a60:
    // 0x1d7a60: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x1d7a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1d7a64:
    // 0x1d7a64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7a64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7a68:
    // 0x1d7a68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7a68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7a6c:
    // 0x1d7a6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d7a6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7a70:
    // 0x1d7a70: 0x55940  sll         $t3, $a1, 5
    ctx->pc = 0x1d7a70u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1d7a74:
    // 0x1d7a74: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d7a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d7a78:
    // 0x1d7a78: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x1d7a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1d7a7c:
    // 0x1d7a7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d7a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d7a80:
    // 0x1d7a80: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d7a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d7a84:
    // 0x1d7a84: 0xa0aa0080  sb          $t2, 0x80($a1)
    ctx->pc = 0x1d7a84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 128), (uint8_t)GPR_U32(ctx, 10));
label_1d7a88:
    // 0x1d7a88: 0xa0aa0081  sb          $t2, 0x81($a1)
    ctx->pc = 0x1d7a88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 129), (uint8_t)GPR_U32(ctx, 10));
label_1d7a8c:
    // 0x1d7a8c: 0xa0aa0082  sb          $t2, 0x82($a1)
    ctx->pc = 0x1d7a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 130), (uint8_t)GPR_U32(ctx, 10));
label_1d7a90:
    // 0x1d7a90: 0x83828c68  lb          $v0, -0x7398($gp)
    ctx->pc = 0x1d7a90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937704)));
label_1d7a94:
    // 0x1d7a94: 0xa0a20083  sb          $v0, 0x83($a1)
    ctx->pc = 0x1d7a94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 131), (uint8_t)GPR_U32(ctx, 2));
label_1d7a98:
    // 0x1d7a98: 0xaca30084  sw          $v1, 0x84($a1)
    ctx->pc = 0x1d7a98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 3));
label_1d7a9c:
    // 0x1d7a9c: 0xa0aa0120  sb          $t2, 0x120($a1)
    ctx->pc = 0x1d7a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 288), (uint8_t)GPR_U32(ctx, 10));
label_1d7aa0:
    // 0x1d7aa0: 0xa0aa0121  sb          $t2, 0x121($a1)
    ctx->pc = 0x1d7aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 289), (uint8_t)GPR_U32(ctx, 10));
label_1d7aa4:
    // 0x1d7aa4: 0xa0aa0122  sb          $t2, 0x122($a1)
    ctx->pc = 0x1d7aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 290), (uint8_t)GPR_U32(ctx, 10));
label_1d7aa8:
    // 0x1d7aa8: 0x83828c64  lb          $v0, -0x739C($gp)
    ctx->pc = 0x1d7aa8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937700)));
label_1d7aac:
    // 0x1d7aac: 0xa0a20123  sb          $v0, 0x123($a1)
    ctx->pc = 0x1d7aacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 2));
label_1d7ab0:
    // 0x1d7ab0: 0xaca30124  sw          $v1, 0x124($a1)
    ctx->pc = 0x1d7ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 3));
label_1d7ab4:
    // 0x1d7ab4: 0xa0aa01c0  sb          $t2, 0x1C0($a1)
    ctx->pc = 0x1d7ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 448), (uint8_t)GPR_U32(ctx, 10));
label_1d7ab8:
    // 0x1d7ab8: 0xa0aa01c1  sb          $t2, 0x1C1($a1)
    ctx->pc = 0x1d7ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 449), (uint8_t)GPR_U32(ctx, 10));
label_1d7abc:
    // 0x1d7abc: 0xa0aa01c2  sb          $t2, 0x1C2($a1)
    ctx->pc = 0x1d7abcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 450), (uint8_t)GPR_U32(ctx, 10));
label_1d7ac0:
    // 0x1d7ac0: 0x83828c60  lb          $v0, -0x73A0($gp)
    ctx->pc = 0x1d7ac0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937696)));
label_1d7ac4:
    // 0x1d7ac4: 0xa0a201c3  sb          $v0, 0x1C3($a1)
    ctx->pc = 0x1d7ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 451), (uint8_t)GPR_U32(ctx, 2));
label_1d7ac8:
    // 0x1d7ac8: 0xaca301c4  sw          $v1, 0x1C4($a1)
    ctx->pc = 0x1d7ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 452), GPR_U32(ctx, 3));
label_1d7acc:
    // 0x1d7acc: 0xa0aa0260  sb          $t2, 0x260($a1)
    ctx->pc = 0x1d7accu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 608), (uint8_t)GPR_U32(ctx, 10));
label_1d7ad0:
    // 0x1d7ad0: 0xa0aa0261  sb          $t2, 0x261($a1)
    ctx->pc = 0x1d7ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 609), (uint8_t)GPR_U32(ctx, 10));
label_1d7ad4:
    // 0x1d7ad4: 0xa0aa0262  sb          $t2, 0x262($a1)
    ctx->pc = 0x1d7ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 610), (uint8_t)GPR_U32(ctx, 10));
label_1d7ad8:
    // 0x1d7ad8: 0x83828c5c  lb          $v0, -0x73A4($gp)
    ctx->pc = 0x1d7ad8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_1d7adc:
    // 0x1d7adc: 0xa0a20263  sb          $v0, 0x263($a1)
    ctx->pc = 0x1d7adcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 611), (uint8_t)GPR_U32(ctx, 2));
label_1d7ae0:
    // 0x1d7ae0: 0xc066c72  jal         func_19B1C8
label_1d7ae4:
    if (ctx->pc == 0x1D7AE4u) {
        ctx->pc = 0x1D7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7AE0u;
        // 0x1d7ae4: 0xaca30264  sw          $v1, 0x264($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7AE8u;
        goto label_1d7ae8;
    }
    ctx->pc = 0x1D7AE0u;
    SET_GPR_U32(ctx, 31, 0x1D7AE8u);
    ctx->pc = 0x1D7AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7AE0u;
    // 0x1d7ae4: 0xaca30264  sw          $v1, 0x264($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D7AE0u, 0x1D7AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7AE8u;
label_1d7ae8:
    // 0x1d7ae8: 0xc04e120  jal         func_138480
label_1d7aec:
    if (ctx->pc == 0x1D7AECu) {
        ctx->pc = 0x1D7AF0u;
        goto label_1d7af0;
    }
    ctx->pc = 0x1D7AE8u;
    SET_GPR_U32(ctx, 31, 0x1D7AF0u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1D7AE8u, 0x1D7AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7AF0u;
label_1d7af0:
    // 0x1d7af0: 0xc05b578  jal         func_16D5E0
label_1d7af4:
    if (ctx->pc == 0x1D7AF4u) {
        ctx->pc = 0x1D7AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7AF0u;
        // 0x1d7af4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7AF8u;
        goto label_1d7af8;
    }
    ctx->pc = 0x1D7AF0u;
    SET_GPR_U32(ctx, 31, 0x1D7AF8u);
    ctx->pc = 0x1D7AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7AF0u;
    // 0x1d7af4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1D7AF0u, 0x1D7AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7AF8u;
label_1d7af8:
    // 0x1d7af8: 0xc060258  jal         func_180960
label_1d7afc:
    if (ctx->pc == 0x1D7AFCu) {
        ctx->pc = 0x1D7B00u;
        goto label_1d7b00;
    }
    ctx->pc = 0x1D7AF8u;
    SET_GPR_U32(ctx, 31, 0x1D7B00u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D7AF8u, 0x1D7B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B00u;
label_1d7b00:
    // 0x1d7b00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d7b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d7b04:
    // 0x1d7b04: 0x2a210011  slti        $at, $s1, 0x11
    ctx->pc = 0x1d7b04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
label_1d7b08:
    // 0x1d7b08: 0x1420ffb6  bnez        $at, . + 4 + (-0x4A << 2)
label_1d7b0c:
    if (ctx->pc == 0x1D7B0Cu) {
        ctx->pc = 0x1D7B10u;
        goto label_1d7b10;
    }
    ctx->pc = 0x1D7B08u;
    {
        const bool branch_taken_0x1d7b08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b08) {
            ctx->pc = 0x1D79E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d79e4;
        }
    }
    ctx->pc = 0x1D7B10u;
label_1d7b10:
    // 0x1d7b10: 0x10000048  b           . + 4 + (0x48 << 2)
label_1d7b14:
    if (ctx->pc == 0x1D7B14u) {
        ctx->pc = 0x1D7B18u;
        goto label_1d7b18;
    }
    ctx->pc = 0x1D7B10u;
    {
        const bool branch_taken_0x1d7b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b10) {
            ctx->pc = 0x1D7C34u;
            goto label_1d7c34;
        }
    }
    ctx->pc = 0x1D7B18u;
label_1d7b18:
    // 0x1d7b18: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1d7b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d7b1c:
    // 0x1d7b1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7b20:
    // 0x1d7b20: 0xc04e188  jal         func_138620
label_1d7b24:
    if (ctx->pc == 0x1D7B24u) {
        ctx->pc = 0x1D7B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B20u;
        // 0x1d7b24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7B28u;
        goto label_1d7b28;
    }
    ctx->pc = 0x1D7B20u;
    SET_GPR_U32(ctx, 31, 0x1D7B28u);
    ctx->pc = 0x1D7B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B20u;
    // 0x1d7b24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1D7B20u, 0x1D7B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B28u;
label_1d7b28:
    // 0x1d7b28: 0xc04e198  jal         func_138660
label_1d7b2c:
    if (ctx->pc == 0x1D7B2Cu) {
        ctx->pc = 0x1D7B30u;
        goto label_1d7b30;
    }
    ctx->pc = 0x1D7B28u;
    SET_GPR_U32(ctx, 31, 0x1D7B30u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1D7B28u, 0x1D7B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B30u;
label_1d7b30:
    // 0x1d7b30: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
label_1d7b34:
    if (ctx->pc == 0x1D7B34u) {
        ctx->pc = 0x1D7B38u;
        goto label_1d7b38;
    }
    ctx->pc = 0x1D7B30u;
    {
        const bool branch_taken_0x1d7b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b30) {
            ctx->pc = 0x1D7C34u;
            goto label_1d7c34;
        }
    }
    ctx->pc = 0x1D7B38u;
label_1d7b38:
    // 0x1d7b38: 0xc04e168  jal         func_1385A0
label_1d7b3c:
    if (ctx->pc == 0x1D7B3Cu) {
        ctx->pc = 0x1D7B40u;
        goto label_1d7b40;
    }
    ctx->pc = 0x1D7B38u;
    SET_GPR_U32(ctx, 31, 0x1D7B40u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1D7B38u, 0x1D7B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B40u;
label_1d7b40:
    // 0x1d7b40: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x1d7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
label_1d7b44:
    // 0x1d7b44: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1d7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1d7b48:
    // 0x1d7b48: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d7b48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d7b4c:
    // 0x1d7b4c: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1d7b4cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1d7b50:
    // 0x1d7b50: 0xaf828c60  sw          $v0, -0x73A0($gp)
    ctx->pc = 0x1d7b50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937696), GPR_U32(ctx, 2));
label_1d7b54:
    // 0x1d7b54: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x1d7b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_1d7b58:
    // 0x1d7b58: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1d7b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1d7b5c:
    // 0x1d7b5c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d7b5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d7b60:
    // 0x1d7b60: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1d7b60u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1d7b64:
    // 0x1d7b64: 0xaf828c5c  sw          $v0, -0x73A4($gp)
    ctx->pc = 0x1d7b64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937692), GPR_U32(ctx, 2));
label_1d7b68:
    // 0x1d7b68: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d7b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d7b6c:
    // 0x1d7b6c: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x1d7b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d7b70:
    // 0x1d7b70: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d7b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d7b74:
    // 0x1d7b74: 0x27828c70  addiu       $v0, $gp, -0x7390
    ctx->pc = 0x1d7b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937712));
label_1d7b78:
    // 0x1d7b78: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1d7b78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d7b7c:
    // 0x1d7b7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d7b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1d7b80:
    // 0x1d7b80: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d7b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d7b84:
    // 0x1d7b84: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x1d7b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1d7b88:
    // 0x1d7b88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7b88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7b8c:
    // 0x1d7b8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7b8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7b90:
    // 0x1d7b90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d7b90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7b94:
    // 0x1d7b94: 0x55940  sll         $t3, $a1, 5
    ctx->pc = 0x1d7b94u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1d7b98:
    // 0x1d7b98: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d7b98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d7b9c:
    // 0x1d7b9c: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x1d7b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1d7ba0:
    // 0x1d7ba0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d7ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d7ba4:
    // 0x1d7ba4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d7ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d7ba8:
    // 0x1d7ba8: 0xa0aa0080  sb          $t2, 0x80($a1)
    ctx->pc = 0x1d7ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 128), (uint8_t)GPR_U32(ctx, 10));
label_1d7bac:
    // 0x1d7bac: 0xa0aa0081  sb          $t2, 0x81($a1)
    ctx->pc = 0x1d7bacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 129), (uint8_t)GPR_U32(ctx, 10));
label_1d7bb0:
    // 0x1d7bb0: 0xa0aa0082  sb          $t2, 0x82($a1)
    ctx->pc = 0x1d7bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 130), (uint8_t)GPR_U32(ctx, 10));
label_1d7bb4:
    // 0x1d7bb4: 0x83828c68  lb          $v0, -0x7398($gp)
    ctx->pc = 0x1d7bb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937704)));
label_1d7bb8:
    // 0x1d7bb8: 0xa0a20083  sb          $v0, 0x83($a1)
    ctx->pc = 0x1d7bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 131), (uint8_t)GPR_U32(ctx, 2));
label_1d7bbc:
    // 0x1d7bbc: 0xaca30084  sw          $v1, 0x84($a1)
    ctx->pc = 0x1d7bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 3));
label_1d7bc0:
    // 0x1d7bc0: 0xa0aa0120  sb          $t2, 0x120($a1)
    ctx->pc = 0x1d7bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 288), (uint8_t)GPR_U32(ctx, 10));
label_1d7bc4:
    // 0x1d7bc4: 0xa0aa0121  sb          $t2, 0x121($a1)
    ctx->pc = 0x1d7bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 289), (uint8_t)GPR_U32(ctx, 10));
label_1d7bc8:
    // 0x1d7bc8: 0xa0aa0122  sb          $t2, 0x122($a1)
    ctx->pc = 0x1d7bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 290), (uint8_t)GPR_U32(ctx, 10));
label_1d7bcc:
    // 0x1d7bcc: 0x83828c64  lb          $v0, -0x739C($gp)
    ctx->pc = 0x1d7bccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937700)));
label_1d7bd0:
    // 0x1d7bd0: 0xa0a20123  sb          $v0, 0x123($a1)
    ctx->pc = 0x1d7bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 2));
label_1d7bd4:
    // 0x1d7bd4: 0xaca30124  sw          $v1, 0x124($a1)
    ctx->pc = 0x1d7bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 3));
label_1d7bd8:
    // 0x1d7bd8: 0xa0aa01c0  sb          $t2, 0x1C0($a1)
    ctx->pc = 0x1d7bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 448), (uint8_t)GPR_U32(ctx, 10));
label_1d7bdc:
    // 0x1d7bdc: 0xa0aa01c1  sb          $t2, 0x1C1($a1)
    ctx->pc = 0x1d7bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 449), (uint8_t)GPR_U32(ctx, 10));
label_1d7be0:
    // 0x1d7be0: 0xa0aa01c2  sb          $t2, 0x1C2($a1)
    ctx->pc = 0x1d7be0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 450), (uint8_t)GPR_U32(ctx, 10));
label_1d7be4:
    // 0x1d7be4: 0x83828c60  lb          $v0, -0x73A0($gp)
    ctx->pc = 0x1d7be4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937696)));
label_1d7be8:
    // 0x1d7be8: 0xa0a201c3  sb          $v0, 0x1C3($a1)
    ctx->pc = 0x1d7be8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 451), (uint8_t)GPR_U32(ctx, 2));
label_1d7bec:
    // 0x1d7bec: 0xaca301c4  sw          $v1, 0x1C4($a1)
    ctx->pc = 0x1d7becu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 452), GPR_U32(ctx, 3));
label_1d7bf0:
    // 0x1d7bf0: 0xa0aa0260  sb          $t2, 0x260($a1)
    ctx->pc = 0x1d7bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 608), (uint8_t)GPR_U32(ctx, 10));
label_1d7bf4:
    // 0x1d7bf4: 0xa0aa0261  sb          $t2, 0x261($a1)
    ctx->pc = 0x1d7bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 609), (uint8_t)GPR_U32(ctx, 10));
label_1d7bf8:
    // 0x1d7bf8: 0xa0aa0262  sb          $t2, 0x262($a1)
    ctx->pc = 0x1d7bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 610), (uint8_t)GPR_U32(ctx, 10));
label_1d7bfc:
    // 0x1d7bfc: 0x83828c5c  lb          $v0, -0x73A4($gp)
    ctx->pc = 0x1d7bfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_1d7c00:
    // 0x1d7c00: 0xa0a20263  sb          $v0, 0x263($a1)
    ctx->pc = 0x1d7c00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 611), (uint8_t)GPR_U32(ctx, 2));
label_1d7c04:
    // 0x1d7c04: 0xc066c72  jal         func_19B1C8
label_1d7c08:
    if (ctx->pc == 0x1D7C08u) {
        ctx->pc = 0x1D7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C04u;
        // 0x1d7c08: 0xaca30264  sw          $v1, 0x264($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7C0Cu;
        goto label_1d7c0c;
    }
    ctx->pc = 0x1D7C04u;
    SET_GPR_U32(ctx, 31, 0x1D7C0Cu);
    ctx->pc = 0x1D7C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C04u;
    // 0x1d7c08: 0xaca30264  sw          $v1, 0x264($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D7C04u, 0x1D7C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C0Cu;
label_1d7c0c:
    // 0x1d7c0c: 0xc04e120  jal         func_138480
label_1d7c10:
    if (ctx->pc == 0x1D7C10u) {
        ctx->pc = 0x1D7C14u;
        goto label_1d7c14;
    }
    ctx->pc = 0x1D7C0Cu;
    SET_GPR_U32(ctx, 31, 0x1D7C14u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1D7C0Cu, 0x1D7C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C14u;
label_1d7c14:
    // 0x1d7c14: 0xc05b578  jal         func_16D5E0
label_1d7c18:
    if (ctx->pc == 0x1D7C18u) {
        ctx->pc = 0x1D7C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C14u;
        // 0x1d7c18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7C1Cu;
        goto label_1d7c1c;
    }
    ctx->pc = 0x1D7C14u;
    SET_GPR_U32(ctx, 31, 0x1D7C1Cu);
    ctx->pc = 0x1D7C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C14u;
    // 0x1d7c18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1D7C14u, 0x1D7C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C1Cu;
label_1d7c1c:
    // 0x1d7c1c: 0xc060258  jal         func_180960
label_1d7c20:
    if (ctx->pc == 0x1D7C20u) {
        ctx->pc = 0x1D7C24u;
        goto label_1d7c24;
    }
    ctx->pc = 0x1D7C1Cu;
    SET_GPR_U32(ctx, 31, 0x1D7C24u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D7C1Cu, 0x1D7C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C24u;
label_1d7c24:
    // 0x1d7c24: 0xc04e198  jal         func_138660
label_1d7c28:
    if (ctx->pc == 0x1D7C28u) {
        ctx->pc = 0x1D7C2Cu;
        goto label_1d7c2c;
    }
    ctx->pc = 0x1D7C24u;
    SET_GPR_U32(ctx, 31, 0x1D7C2Cu);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1D7C24u, 0x1D7C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C2Cu;
label_1d7c2c:
    // 0x1d7c2c: 0x1040ffc2  beqz        $v0, . + 4 + (-0x3E << 2)
label_1d7c30:
    if (ctx->pc == 0x1D7C30u) {
        ctx->pc = 0x1D7C34u;
        goto label_1d7c34;
    }
    ctx->pc = 0x1D7C2Cu;
    {
        const bool branch_taken_0x1d7c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7c2c) {
            ctx->pc = 0x1D7B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7b38;
        }
    }
    ctx->pc = 0x1D7C34u;
label_1d7c34:
    // 0x1d7c34: 0x0  nop
    ctx->pc = 0x1d7c34u;
    // NOP
label_1d7c38:
    // 0x1d7c38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d7c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d7c3c:
    // 0x1d7c3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d7c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d7c40:
    // 0x1d7c40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d7c40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d7c44:
    // 0x1d7c44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d7c44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7c48:
    // 0x1d7c48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7c4c:
    // 0x1d7c4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7c50:
    // 0x1d7c50: 0x3e00008  jr          $ra
label_1d7c54:
    if (ctx->pc == 0x1D7C54u) {
        ctx->pc = 0x1D7C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C50u;
        // 0x1d7c54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7C58u;
        goto label_1d7c58;
    }
    ctx->pc = 0x1D7C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C50u;
        // 0x1d7c54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7C58u;
label_1d7c58:
    // 0x1d7c58: 0x0  nop
    ctx->pc = 0x1d7c58u;
    // NOP
label_1d7c5c:
    // 0x1d7c5c: 0x0  nop
    ctx->pc = 0x1d7c5cu;
    // NOP
label_1d7c60:
    // 0x1d7c60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d7c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d7c64:
    // 0x1d7c64: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d7c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d7c68:
    // 0x1d7c68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d7c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1d7c6c:
    // 0x1d7c6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d7c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d7c70:
    // 0x1d7c70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d7c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d7c74:
    // 0x1d7c74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d7c78:
    // 0x1d7c78: 0xc041738  jal         func_105CE0
label_1d7c7c:
    if (ctx->pc == 0x1D7C7Cu) {
        ctx->pc = 0x1D7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C78u;
        // 0x1d7c7c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7C80u;
        goto label_1d7c80;
    }
    ctx->pc = 0x1D7C78u;
    SET_GPR_U32(ctx, 31, 0x1D7C80u);
    ctx->pc = 0x1D7C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C78u;
    // 0x1d7c7c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1D7C78u, 0x1D7C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C80u;
label_1d7c80:
    // 0x1d7c80: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1d7c80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1d7c84:
    // 0x1d7c84: 0xc070080  jal         func_1C0200
label_1d7c88:
    if (ctx->pc == 0x1D7C88u) {
        ctx->pc = 0x1D7C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C84u;
        // 0x1d7c88: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7C8Cu;
        goto label_1d7c8c;
    }
    ctx->pc = 0x1D7C84u;
    SET_GPR_U32(ctx, 31, 0x1D7C8Cu);
    ctx->pc = 0x1D7C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C84u;
    // 0x1d7c88: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1D7C8Cu;
label_1d7c8c:
    // 0x1d7c8c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d7c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d7c90:
    // 0x1d7c90: 0xc0416e4  jal         func_105B90
label_1d7c94:
    if (ctx->pc == 0x1D7C94u) {
        ctx->pc = 0x1D7C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C90u;
        // 0x1d7c94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7C98u;
        goto label_1d7c98;
    }
    ctx->pc = 0x1D7C90u;
    SET_GPR_U32(ctx, 31, 0x1D7C98u);
    ctx->pc = 0x1D7C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C90u;
    // 0x1d7c94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1D7C90u, 0x1D7C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C98u;
label_1d7c98:
    // 0x1d7c98: 0xaf828c50  sw          $v0, -0x73B0($gp)
    ctx->pc = 0x1d7c98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937680), GPR_U32(ctx, 2));
label_1d7c9c:
    // 0x1d7c9c: 0xc041738  jal         func_105CE0
label_1d7ca0:
    if (ctx->pc == 0x1D7CA0u) {
        ctx->pc = 0x1D7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C9Cu;
        // 0x1d7ca0: 0x240407f9  addiu       $a0, $zero, 0x7F9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7CA4u;
        goto label_1d7ca4;
    }
    ctx->pc = 0x1D7C9Cu;
    SET_GPR_U32(ctx, 31, 0x1D7CA4u);
    ctx->pc = 0x1D7CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C9Cu;
    // 0x1d7ca0: 0x240407f9  addiu       $a0, $zero, 0x7F9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1D7C9Cu, 0x1D7CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CA4u;
label_1d7ca4:
    // 0x1d7ca4: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1d7ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1d7ca8:
    // 0x1d7ca8: 0xc070080  jal         func_1C0200
label_1d7cac:
    if (ctx->pc == 0x1D7CACu) {
        ctx->pc = 0x1D7CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CA8u;
        // 0x1d7cac: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7CB0u;
        goto label_1d7cb0;
    }
    ctx->pc = 0x1D7CA8u;
    SET_GPR_U32(ctx, 31, 0x1D7CB0u);
    ctx->pc = 0x1D7CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CA8u;
    // 0x1d7cac: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1D7CB0u;
label_1d7cb0:
    // 0x1d7cb0: 0x240407f9  addiu       $a0, $zero, 0x7F9
    ctx->pc = 0x1d7cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
label_1d7cb4:
    // 0x1d7cb4: 0xc0416e4  jal         func_105B90
label_1d7cb8:
    if (ctx->pc == 0x1D7CB8u) {
        ctx->pc = 0x1D7CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CB4u;
        // 0x1d7cb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7CBCu;
        goto label_1d7cbc;
    }
    ctx->pc = 0x1D7CB4u;
    SET_GPR_U32(ctx, 31, 0x1D7CBCu);
    ctx->pc = 0x1D7CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CB4u;
    // 0x1d7cb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1D7CB4u, 0x1D7CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CBCu;
label_1d7cbc:
    // 0x1d7cbc: 0xaf828c4c  sw          $v0, -0x73B4($gp)
    ctx->pc = 0x1d7cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937676), GPR_U32(ctx, 2));
label_1d7cc0:
    // 0x1d7cc0: 0xc041738  jal         func_105CE0
label_1d7cc4:
    if (ctx->pc == 0x1D7CC4u) {
        ctx->pc = 0x1D7CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CC0u;
        // 0x1d7cc4: 0x240407e6  addiu       $a0, $zero, 0x7E6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2022));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7CC8u;
        goto label_1d7cc8;
    }
    ctx->pc = 0x1D7CC0u;
    SET_GPR_U32(ctx, 31, 0x1D7CC8u);
    ctx->pc = 0x1D7CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CC0u;
    // 0x1d7cc4: 0x240407e6  addiu       $a0, $zero, 0x7E6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2022));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1D7CC0u, 0x1D7CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CC8u;
label_1d7cc8:
    // 0x1d7cc8: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1d7cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1d7ccc:
    // 0x1d7ccc: 0xc070080  jal         func_1C0200
label_1d7cd0:
    if (ctx->pc == 0x1D7CD0u) {
        ctx->pc = 0x1D7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CCCu;
        // 0x1d7cd0: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7CD4u;
        goto label_1d7cd4;
    }
    ctx->pc = 0x1D7CCCu;
    SET_GPR_U32(ctx, 31, 0x1D7CD4u);
    ctx->pc = 0x1D7CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CCCu;
    // 0x1d7cd0: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1D7CD4u;
label_1d7cd4:
    // 0x1d7cd4: 0x240407e6  addiu       $a0, $zero, 0x7E6
    ctx->pc = 0x1d7cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2022));
label_1d7cd8:
    // 0x1d7cd8: 0xc0416e4  jal         func_105B90
label_1d7cdc:
    if (ctx->pc == 0x1D7CDCu) {
        ctx->pc = 0x1D7CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CD8u;
        // 0x1d7cdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7CE0u;
        goto label_1d7ce0;
    }
    ctx->pc = 0x1D7CD8u;
    SET_GPR_U32(ctx, 31, 0x1D7CE0u);
    ctx->pc = 0x1D7CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CD8u;
    // 0x1d7cdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1D7CD8u, 0x1D7CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CE0u;
label_1d7ce0:
    // 0x1d7ce0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d7ce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7ce4:
    // 0x1d7ce4: 0xc060678  jal         func_1819E0
label_1d7ce8:
    if (ctx->pc == 0x1D7CE8u) {
        ctx->pc = 0x1D7CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CE4u;
        // 0x1d7ce8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7CECu;
        goto label_1d7cec;
    }
    ctx->pc = 0x1D7CE4u;
    SET_GPR_U32(ctx, 31, 0x1D7CECu);
    ctx->pc = 0x1D7CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CE4u;
    // 0x1d7ce8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819E0u, 0x1D7CE4u, 0x1D7CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CECu;
label_1d7cec:
    // 0x1d7cec: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1d7cecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_1d7cf0:
    // 0x1d7cf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d7cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7cf4:
    // 0x1d7cf4: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x1d7cf4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_1d7cf8:
    // 0x1d7cf8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d7cf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7cfc:
    // 0x1d7cfc: 0x2a03000c  slti        $v1, $s0, 0xC
    ctx->pc = 0x1d7cfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_1d7d00:
    // 0x1d7d00: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1d7d04:
    if (ctx->pc == 0x1D7D04u) {
        ctx->pc = 0x1D7D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D00u;
        // 0x1d7d04: 0x2a010015  slti        $at, $s0, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7D08u;
        goto label_1d7d08;
    }
    ctx->pc = 0x1D7D00u;
    {
        const bool branch_taken_0x1d7d00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D00u;
        // 0x1d7d04: 0x2a010015  slti        $at, $s0, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d00) {
            ctx->pc = 0x1D7D10u;
            goto label_1d7d10;
        }
    }
    ctx->pc = 0x1D7D08u;
label_1d7d08:
    // 0x1d7d08: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
label_1d7d0c:
    if (ctx->pc == 0x1D7D0Cu) {
        ctx->pc = 0x1D7D10u;
        goto label_1d7d10;
    }
    ctx->pc = 0x1D7D08u;
    {
        const bool branch_taken_0x1d7d08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7d08) {
            ctx->pc = 0x1D7D5Cu;
            goto label_1d7d5c;
        }
    }
    ctx->pc = 0x1D7D10u;
label_1d7d10:
    // 0x1d7d10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d7d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d7d14:
    // 0x1d7d14: 0xc0602c8  jal         func_180B20
label_1d7d18:
    if (ctx->pc == 0x1D7D18u) {
        ctx->pc = 0x1D7D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D14u;
        // 0x1d7d18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7D1Cu;
        goto label_1d7d1c;
    }
    ctx->pc = 0x1D7D14u;
    SET_GPR_U32(ctx, 31, 0x1D7D1Cu);
    ctx->pc = 0x1D7D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D14u;
    // 0x1d7d18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B20u, 0x1D7D14u, 0x1D7D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D1Cu;
label_1d7d1c:
    // 0x1d7d1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d7d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d7d20:
    // 0x1d7d20: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x1d7d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1d7d24:
    // 0x1d7d24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d7d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7d28:
    // 0x1d7d28: 0x27a6005e  addiu       $a2, $sp, 0x5E
    ctx->pc = 0x1d7d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 94));
label_1d7d2c:
    // 0x1d7d2c: 0xc060390  jal         func_180E40
label_1d7d30:
    if (ctx->pc == 0x1D7D30u) {
        ctx->pc = 0x1D7D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D2Cu;
        // 0x1d7d30: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7D34u;
        goto label_1d7d34;
    }
    ctx->pc = 0x1D7D2Cu;
    SET_GPR_U32(ctx, 31, 0x1D7D34u);
    ctx->pc = 0x1D7D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D2Cu;
    // 0x1d7d30: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E40u, 0x1D7D2Cu, 0x1D7D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D34u;
label_1d7d34:
    // 0x1d7d34: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d7d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d7d38:
    // 0x1d7d38: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1d7d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
label_1d7d3c:
    // 0x1d7d3c: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x1d7d3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1d7d40:
    // 0x1d7d40: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1d7d40u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_1d7d44:
    // 0x1d7d44: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x1d7d44u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_1d7d48:
    // 0x1d7d48: 0xc06063c  jal         func_1818F0
label_1d7d4c:
    if (ctx->pc == 0x1D7D4Cu) {
        ctx->pc = 0x1D7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D48u;
        // 0x1d7d4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7D50u;
        goto label_1d7d50;
    }
    ctx->pc = 0x1D7D48u;
    SET_GPR_U32(ctx, 31, 0x1D7D50u);
    ctx->pc = 0x1D7D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D48u;
    // 0x1d7d4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1818F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1818F0u, 0x1D7D48u, 0x1D7D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D50u;
label_1d7d50:
    // 0x1d7d50: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1d7d50u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_1d7d54:
    // 0x1d7d54: 0x87b1005e  lh          $s1, 0x5E($sp)
    ctx->pc = 0x1d7d54u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 94)));
label_1d7d58:
    // 0x1d7d58: 0x0  nop
    ctx->pc = 0x1d7d58u;
    // NOP
label_1d7d5c:
    // 0x1d7d5c: 0x0  nop
    ctx->pc = 0x1d7d5cu;
    // NOP
label_1d7d60:
    // 0x1d7d60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d7d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d7d64:
    // 0x1d7d64: 0x2a030018  slti        $v1, $s0, 0x18
    ctx->pc = 0x1d7d64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
label_1d7d68:
    // 0x1d7d68: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_1d7d6c:
    if (ctx->pc == 0x1D7D6Cu) {
        ctx->pc = 0x1D7D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D68u;
        // 0x1d7d6c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7D70u;
        goto label_1d7d70;
    }
    ctx->pc = 0x1D7D68u;
    {
        const bool branch_taken_0x1d7d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D68u;
        // 0x1d7d6c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d68) {
            ctx->pc = 0x1D7CFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7cfc;
        }
    }
    ctx->pc = 0x1D7D70u;
label_1d7d70:
    // 0x1d7d70: 0xa7918c58  sh          $s1, -0x73A8($gp)
    ctx->pc = 0x1d7d70u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937688), (uint16_t)GPR_U32(ctx, 17));
label_1d7d74:
    // 0x1d7d74: 0xaf928c54  sw          $s2, -0x73AC($gp)
    ctx->pc = 0x1d7d74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937684), GPR_U32(ctx, 18));
label_1d7d78:
    // 0x1d7d78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d7d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d7d7c:
    // 0x1d7d7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d7d7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d7d80:
    // 0x1d7d80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d7d80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7d84:
    // 0x1d7d84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7d88:
    // 0x1d7d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7d8c:
    // 0x1d7d8c: 0x3e00008  jr          $ra
label_1d7d90:
    if (ctx->pc == 0x1D7D90u) {
        ctx->pc = 0x1D7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D8Cu;
        // 0x1d7d90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7D94u;
        goto label_1d7d94;
    }
    ctx->pc = 0x1D7D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D8Cu;
        // 0x1d7d90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7D94u;
label_1d7d94:
    // 0x1d7d94: 0x0  nop
    ctx->pc = 0x1d7d94u;
    // NOP
label_1d7d98:
    // 0x1d7d98: 0x0  nop
    ctx->pc = 0x1d7d98u;
    // NOP
label_1d7d9c:
    // 0x1d7d9c: 0x0  nop
    ctx->pc = 0x1d7d9cu;
    // NOP
label_1d7da0:
    // 0x1d7da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d7da4:
    // 0x1d7da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d7da8:
    // 0x1d7da8: 0xc075ff0  jal         func_1D7FC0
label_1d7dac:
    if (ctx->pc == 0x1D7DACu) {
        ctx->pc = 0x1D7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DA8u;
        // 0x1d7dac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7DB0u;
        goto label_1d7db0;
    }
    ctx->pc = 0x1D7DA8u;
    SET_GPR_U32(ctx, 31, 0x1D7DB0u);
    ctx->pc = 0x1D7DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DA8u;
    // 0x1d7dac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7FC0u;
    goto label_1d7fc0;
    ctx->pc = 0x1D7DB0u;
label_1d7db0:
    // 0x1d7db0: 0xc076198  jal         func_1D8660
label_1d7db4:
    if (ctx->pc == 0x1D7DB4u) {
        ctx->pc = 0x1D7DB8u;
        goto label_1d7db8;
    }
    ctx->pc = 0x1D7DB0u;
    SET_GPR_U32(ctx, 31, 0x1D7DB8u);
    ctx->pc = 0x1D8660u;
    { ctx->pc = 0x1d8660; return; }
    ctx->pc = 0x1D7DB8u;
label_1d7db8:
    // 0x1d7db8: 0xc060258  jal         func_180960
label_1d7dbc:
    if (ctx->pc == 0x1D7DBCu) {
        ctx->pc = 0x1D7DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DB8u;
        // 0x1d7dbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7DC0u;
        goto label_1d7dc0;
    }
    ctx->pc = 0x1D7DB8u;
    SET_GPR_U32(ctx, 31, 0x1D7DC0u);
    ctx->pc = 0x1D7DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DB8u;
    // 0x1d7dbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D7DB8u, 0x1D7DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DC0u;
label_1d7dc0:
    // 0x1d7dc0: 0xc060258  jal         func_180960
label_1d7dc4:
    if (ctx->pc == 0x1D7DC4u) {
        ctx->pc = 0x1D7DC8u;
        goto label_1d7dc8;
    }
    ctx->pc = 0x1D7DC0u;
    SET_GPR_U32(ctx, 31, 0x1D7DC8u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D7DC0u, 0x1D7DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DC8u;
label_1d7dc8:
    // 0x1d7dc8: 0xc075f7c  jal         func_1D7DF0
label_1d7dcc:
    if (ctx->pc == 0x1D7DCCu) {
        ctx->pc = 0x1D7DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DC8u;
        // 0x1d7dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7DD0u;
        goto label_1d7dd0;
    }
    ctx->pc = 0x1D7DC8u;
    SET_GPR_U32(ctx, 31, 0x1D7DD0u);
    ctx->pc = 0x1D7DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DC8u;
    // 0x1d7dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7DF0u;
    goto label_1d7df0;
    ctx->pc = 0x1D7DD0u;
label_1d7dd0:
    // 0x1d7dd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d7dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d7dd4:
    // 0x1d7dd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7dd8:
    // 0x1d7dd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7ddc:
    // 0x1d7ddc: 0x3e00008  jr          $ra
label_1d7de0:
    if (ctx->pc == 0x1D7DE0u) {
        ctx->pc = 0x1D7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DDCu;
        // 0x1d7de0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7DE4u;
        goto label_1d7de4;
    }
    ctx->pc = 0x1D7DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DDCu;
        // 0x1d7de0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7DE4u;
label_1d7de4:
    // 0x1d7de4: 0x0  nop
    ctx->pc = 0x1d7de4u;
    // NOP
label_1d7de8:
    // 0x1d7de8: 0x0  nop
    ctx->pc = 0x1d7de8u;
    // NOP
label_1d7dec:
    // 0x1d7dec: 0x0  nop
    ctx->pc = 0x1d7decu;
    // NOP
label_1d7df0:
    // 0x1d7df0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d7df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1d7df4:
    // 0x1d7df4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1d7df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1d7df8:
    // 0x1d7df8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d7df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1d7dfc:
    // 0x1d7dfc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d7dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d7e00:
    // 0x1d7e00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d7e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d7e04:
    // 0x1d7e04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d7e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d7e08:
    // 0x1d7e08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d7e0c:
    // 0x1d7e0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d7e0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7e10:
    // 0x1d7e10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d7e14:
    // 0x1d7e14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d7e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d7e18:
    // 0x1d7e18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d7e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7e1c:
    // 0x1d7e1c: 0x27838ce0  addiu       $v1, $gp, -0x7320
    ctx->pc = 0x1d7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1d7e20:
    // 0x1d7e20: 0x709821  addu        $s3, $v1, $s0
    ctx->pc = 0x1d7e20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d7e24:
    // 0x1d7e24: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d7e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d7e28:
    // 0x1d7e28: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d7e2c:
    if (ctx->pc == 0x1D7E2Cu) {
        ctx->pc = 0x1D7E30u;
        goto label_1d7e30;
    }
    ctx->pc = 0x1D7E28u;
    {
        const bool branch_taken_0x1d7e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e28) {
            ctx->pc = 0x1D7E3Cu;
            goto label_1d7e3c;
        }
    }
    ctx->pc = 0x1D7E30u;
label_1d7e30:
    // 0x1d7e30: 0xc070038  jal         func_1C00E0
label_1d7e34:
    if (ctx->pc == 0x1D7E34u) {
        ctx->pc = 0x1D7E38u;
        goto label_1d7e38;
    }
    ctx->pc = 0x1D7E30u;
    SET_GPR_U32(ctx, 31, 0x1D7E38u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1D7E38u;
label_1d7e38:
    // 0x1d7e38: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1d7e38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1d7e3c:
    // 0x1d7e3c: 0x0  nop
    ctx->pc = 0x1d7e3cu;
    // NOP
label_1d7e40:
    // 0x1d7e40: 0x27838cd8  addiu       $v1, $gp, -0x7328
    ctx->pc = 0x1d7e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937816));
label_1d7e44:
    // 0x1d7e44: 0x709821  addu        $s3, $v1, $s0
    ctx->pc = 0x1d7e44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d7e48:
    // 0x1d7e48: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d7e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d7e4c:
    // 0x1d7e4c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d7e50:
    if (ctx->pc == 0x1D7E50u) {
        ctx->pc = 0x1D7E54u;
        goto label_1d7e54;
    }
    ctx->pc = 0x1D7E4Cu;
    {
        const bool branch_taken_0x1d7e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e4c) {
            ctx->pc = 0x1D7E60u;
            goto label_1d7e60;
        }
    }
    ctx->pc = 0x1D7E54u;
label_1d7e54:
    // 0x1d7e54: 0xc070038  jal         func_1C00E0
label_1d7e58:
    if (ctx->pc == 0x1D7E58u) {
        ctx->pc = 0x1D7E5Cu;
        goto label_1d7e5c;
    }
    ctx->pc = 0x1D7E54u;
    SET_GPR_U32(ctx, 31, 0x1D7E5Cu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1D7E5Cu;
label_1d7e5c:
    // 0x1d7e5c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1d7e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1d7e60:
    // 0x1d7e60: 0x27838cc8  addiu       $v1, $gp, -0x7338
    ctx->pc = 0x1d7e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937800));
label_1d7e64:
    // 0x1d7e64: 0x709821  addu        $s3, $v1, $s0
    ctx->pc = 0x1d7e64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d7e68:
    // 0x1d7e68: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d7e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d7e6c:
    // 0x1d7e6c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d7e70:
    if (ctx->pc == 0x1D7E70u) {
        ctx->pc = 0x1D7E74u;
        goto label_1d7e74;
    }
    ctx->pc = 0x1D7E6Cu;
    {
        const bool branch_taken_0x1d7e6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e6c) {
            ctx->pc = 0x1D7E80u;
            goto label_1d7e80;
        }
    }
    ctx->pc = 0x1D7E74u;
label_1d7e74:
    // 0x1d7e74: 0xc070038  jal         func_1C00E0
label_1d7e78:
    if (ctx->pc == 0x1D7E78u) {
        ctx->pc = 0x1D7E7Cu;
        goto label_1d7e7c;
    }
    ctx->pc = 0x1D7E74u;
    SET_GPR_U32(ctx, 31, 0x1D7E7Cu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1D7E7Cu;
label_1d7e7c:
    // 0x1d7e7c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1d7e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1d7e80:
    // 0x1d7e80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d7e80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7e84:
    // 0x1d7e84: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d7e84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7e88:
    // 0x1d7e88: 0x0  nop
    ctx->pc = 0x1d7e88u;
    // NOP
label_1d7e8c:
    // 0x1d7e8c: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d7e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d7e90:
    // 0x1d7e90: 0x24630620  addiu       $v1, $v1, 0x620
    ctx->pc = 0x1d7e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1568));
label_1d7e94:
    // 0x1d7e94: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d7e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d7e98:
    // 0x1d7e98: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1d7e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1d7e9c:
    // 0x1d7e9c: 0x74a821  addu        $s5, $v1, $s4
    ctx->pc = 0x1d7e9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1d7ea0:
    // 0x1d7ea0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1d7ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1d7ea4:
    // 0x1d7ea4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d7ea8:
    if (ctx->pc == 0x1D7EA8u) {
        ctx->pc = 0x1D7EACu;
        goto label_1d7eac;
    }
    ctx->pc = 0x1D7EA4u;
    {
        const bool branch_taken_0x1d7ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7ea4) {
            ctx->pc = 0x1D7EB8u;
            goto label_1d7eb8;
        }
    }
    ctx->pc = 0x1D7EACu;
label_1d7eac:
    // 0x1d7eac: 0xc070038  jal         func_1C00E0
label_1d7eb0:
    if (ctx->pc == 0x1D7EB0u) {
        ctx->pc = 0x1D7EB4u;
        goto label_1d7eb4;
    }
    ctx->pc = 0x1D7EACu;
    SET_GPR_U32(ctx, 31, 0x1D7EB4u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1D7EB4u;
label_1d7eb4:
    // 0x1d7eb4: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1d7eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_1d7eb8:
    // 0x1d7eb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d7eb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d7ebc:
    // 0x1d7ebc: 0x2a630008  slti        $v1, $s3, 0x8
    ctx->pc = 0x1d7ebcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d7ec0:
    // 0x1d7ec0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_1d7ec4:
    if (ctx->pc == 0x1D7EC4u) {
        ctx->pc = 0x1D7EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EC0u;
        // 0x1d7ec4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7EC8u;
        goto label_1d7ec8;
    }
    ctx->pc = 0x1D7EC0u;
    {
        const bool branch_taken_0x1d7ec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EC0u;
        // 0x1d7ec4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ec0) {
            ctx->pc = 0x1D7E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7e88;
        }
    }
    ctx->pc = 0x1D7EC8u;
label_1d7ec8:
    // 0x1d7ec8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d7ec8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7ecc:
    // 0x1d7ecc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d7eccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7ed0:
    // 0x1d7ed0: 0x0  nop
    ctx->pc = 0x1d7ed0u;
    // NOP
label_1d7ed4:
    // 0x1d7ed4: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d7ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d7ed8:
    // 0x1d7ed8: 0x24630550  addiu       $v1, $v1, 0x550
    ctx->pc = 0x1d7ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1360));
label_1d7edc:
    // 0x1d7edc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d7edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d7ee0:
    // 0x1d7ee0: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1d7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1d7ee4:
    // 0x1d7ee4: 0x73a821  addu        $s5, $v1, $s3
    ctx->pc = 0x1d7ee4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1d7ee8:
    // 0x1d7ee8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1d7ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1d7eec:
    // 0x1d7eec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d7ef0:
    if (ctx->pc == 0x1D7EF0u) {
        ctx->pc = 0x1D7EF4u;
        goto label_1d7ef4;
    }
    ctx->pc = 0x1D7EECu;
    {
        const bool branch_taken_0x1d7eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7eec) {
            ctx->pc = 0x1D7F00u;
            goto label_1d7f00;
        }
    }
    ctx->pc = 0x1D7EF4u;
label_1d7ef4:
    // 0x1d7ef4: 0xc070038  jal         func_1C00E0
label_1d7ef8:
    if (ctx->pc == 0x1D7EF8u) {
        ctx->pc = 0x1D7EFCu;
        goto label_1d7efc;
    }
    ctx->pc = 0x1D7EF4u;
    SET_GPR_U32(ctx, 31, 0x1D7EFCu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1D7EFCu;
label_1d7efc:
    // 0x1d7efc: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1d7efcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_1d7f00:
    // 0x1d7f00: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d7f00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1d7f04:
    // 0x1d7f04: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x1d7f04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d7f08:
    // 0x1d7f08: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_1d7f0c:
    if (ctx->pc == 0x1D7F0Cu) {
        ctx->pc = 0x1D7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F08u;
        // 0x1d7f0c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7F10u;
        goto label_1d7f10;
    }
    ctx->pc = 0x1D7F08u;
    {
        const bool branch_taken_0x1d7f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F08u;
        // 0x1d7f0c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f08) {
            ctx->pc = 0x1D7ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7ed0;
        }
    }
    ctx->pc = 0x1D7F10u;
label_1d7f10:
    // 0x1d7f10: 0x27838c90  addiu       $v1, $gp, -0x7370
    ctx->pc = 0x1d7f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1d7f14:
    // 0x1d7f14: 0x709821  addu        $s3, $v1, $s0
    ctx->pc = 0x1d7f14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d7f18:
    // 0x1d7f18: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d7f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d7f1c:
    // 0x1d7f1c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d7f20:
    if (ctx->pc == 0x1D7F20u) {
        ctx->pc = 0x1D7F24u;
        goto label_1d7f24;
    }
    ctx->pc = 0x1D7F1Cu;
    {
        const bool branch_taken_0x1d7f1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7f1c) {
            ctx->pc = 0x1D7F30u;
            goto label_1d7f30;
        }
    }
    ctx->pc = 0x1D7F24u;
label_1d7f24:
    // 0x1d7f24: 0xc070038  jal         func_1C00E0
label_1d7f28:
    if (ctx->pc == 0x1D7F28u) {
        ctx->pc = 0x1D7F2Cu;
        goto label_1d7f2c;
    }
    ctx->pc = 0x1D7F24u;
    SET_GPR_U32(ctx, 31, 0x1D7F2Cu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1D7F2Cu;
label_1d7f2c:
    // 0x1d7f2c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1d7f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1d7f30:
    // 0x1d7f30: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d7f30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7f34:
    // 0x1d7f34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d7f34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7f38:
    // 0x1d7f38: 0x0  nop
    ctx->pc = 0x1d7f38u;
    // NOP
label_1d7f3c:
    // 0x1d7f3c: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d7f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d7f40:
    // 0x1d7f40: 0x24630540  addiu       $v1, $v1, 0x540
    ctx->pc = 0x1d7f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1344));
label_1d7f44:
    // 0x1d7f44: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d7f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d7f48:
    // 0x1d7f48: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1d7f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1d7f4c:
    // 0x1d7f4c: 0x73a821  addu        $s5, $v1, $s3
    ctx->pc = 0x1d7f4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1d7f50:
    // 0x1d7f50: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1d7f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1d7f54:
    // 0x1d7f54: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d7f58:
    if (ctx->pc == 0x1D7F58u) {
        ctx->pc = 0x1D7F5Cu;
        goto label_1d7f5c;
    }
    ctx->pc = 0x1D7F54u;
    {
        const bool branch_taken_0x1d7f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7f54) {
            ctx->pc = 0x1D7F68u;
            goto label_1d7f68;
        }
    }
    ctx->pc = 0x1D7F5Cu;
label_1d7f5c:
    // 0x1d7f5c: 0xc070038  jal         func_1C00E0
label_1d7f60:
    if (ctx->pc == 0x1D7F60u) {
        ctx->pc = 0x1D7F64u;
        goto label_1d7f64;
    }
    ctx->pc = 0x1D7F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F64u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1D7F64u;
label_1d7f64:
    // 0x1d7f64: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1d7f64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_1d7f68:
    // 0x1d7f68: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d7f68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1d7f6c:
    // 0x1d7f6c: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x1d7f6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d7f70:
    // 0x1d7f70: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_1d7f74:
    if (ctx->pc == 0x1D7F74u) {
        ctx->pc = 0x1D7F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F70u;
        // 0x1d7f74: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7F78u;
        goto label_1d7f78;
    }
    ctx->pc = 0x1D7F70u;
    {
        const bool branch_taken_0x1d7f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F70u;
        // 0x1d7f74: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f70) {
            ctx->pc = 0x1D7F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7f38;
        }
    }
    ctx->pc = 0x1D7F78u;
label_1d7f78:
    // 0x1d7f78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d7f78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d7f7c:
    // 0x1d7f7c: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x1d7f7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d7f80:
    // 0x1d7f80: 0x1460ffa6  bnez        $v1, . + 4 + (-0x5A << 2)
label_1d7f84:
    if (ctx->pc == 0x1D7F84u) {
        ctx->pc = 0x1D7F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F80u;
        // 0x1d7f84: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7F88u;
        goto label_1d7f88;
    }
    ctx->pc = 0x1D7F80u;
    {
        const bool branch_taken_0x1d7f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F80u;
        // 0x1d7f84: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f80) {
            ctx->pc = 0x1D7E1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7e1c;
        }
    }
    ctx->pc = 0x1D7F88u;
label_1d7f88:
    // 0x1d7f88: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d7f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d7f8c:
    // 0x1d7f8c: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
label_1d7f90:
    if (ctx->pc == 0x1D7F90u) {
        ctx->pc = 0x1D7F94u;
        goto label_1d7f94;
    }
    ctx->pc = 0x1D7F8Cu;
    {
        const bool branch_taken_0x1d7f8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d7f8c) {
            ctx->pc = 0x1D7F9Cu;
            goto label_1d7f9c;
        }
    }
    ctx->pc = 0x1D7F94u;
label_1d7f94:
    // 0x1d7f94: 0xc07a0dc  jal         func_1E8370
label_1d7f98:
    if (ctx->pc == 0x1D7F98u) {
        ctx->pc = 0x1D7F9Cu;
        goto label_1d7f9c;
    }
    ctx->pc = 0x1D7F94u;
    SET_GPR_U32(ctx, 31, 0x1D7F9Cu);
    ctx->pc = 0x1E8370u;
    { ctx->pc = 0x1e8370; return; }
    ctx->pc = 0x1D7F9Cu;
label_1d7f9c:
    // 0x1d7f9c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1d7f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1d7fa0:
    // 0x1d7fa0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d7fa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7fa4:
    // 0x1d7fa4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d7fa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d7fa8:
    // 0x1d7fa8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d7fa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d7fac:
    // 0x1d7fac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d7facu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7fb0:
    // 0x1d7fb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7fb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7fb4:
    // 0x1d7fb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7fb8:
    // 0x1d7fb8: 0x3e00008  jr          $ra
label_1d7fbc:
    if (ctx->pc == 0x1D7FBCu) {
        ctx->pc = 0x1D7FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FB8u;
        // 0x1d7fbc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7FC0u;
        goto label_1d7fc0;
    }
    ctx->pc = 0x1D7FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FB8u;
        // 0x1d7fbc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7FC0u;
label_1d7fc0:
    // 0x1d7fc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d7fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1d7fc4:
    // 0x1d7fc4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1d7fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1d7fc8:
    // 0x1d7fc8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1d7fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1d7fcc:
    // 0x1d7fcc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d7fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1d7fd0:
    // 0x1d7fd0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d7fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1d7fd4:
    // 0x1d7fd4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d7fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1d7fd8:
    // 0x1d7fd8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d7fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1d7fdc:
    // 0x1d7fdc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d7fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1d7fe0:
    // 0x1d7fe0: 0xc07612c  jal         func_1D84B0
label_1d7fe4:
    if (ctx->pc == 0x1D7FE4u) {
        ctx->pc = 0x1D7FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FE0u;
        // 0x1d7fe4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7FE8u;
        goto label_1d7fe8;
    }
    ctx->pc = 0x1D7FE0u;
    SET_GPR_U32(ctx, 31, 0x1D7FE8u);
    ctx->pc = 0x1D7FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FE0u;
    // 0x1d7fe4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D84B0u;
    { ctx->pc = 0x1d84b0; return; }
    ctx->pc = 0x1D7FE8u;
label_1d7fe8:
    // 0x1d7fe8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d7fec:
    // 0x1d7fec: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_1d7ff0:
    if (ctx->pc == 0x1D7FF0u) {
        ctx->pc = 0x1D7FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FECu;
        // 0x1d7ff0: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7FF4u;
        goto label_1d7ff4;
    }
    ctx->pc = 0x1D7FECu;
    {
        const bool branch_taken_0x1d7fec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FECu;
        // 0x1d7ff0: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fec) {
            ctx->pc = 0x1D8000u;
            goto label_1d8000;
        }
    }
    ctx->pc = 0x1D7FF4u;
label_1d7ff4:
    // 0x1d7ff4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d7ff8:
    // 0x1d7ff8: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_1d7ffc:
    if (ctx->pc == 0x1D7FFCu) {
        ctx->pc = 0x1D7FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FF8u;
        // 0x1d7ffc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8000u;
        goto label_1d8000;
    }
    ctx->pc = 0x1D7FF8u;
    {
        const bool branch_taken_0x1d7ff8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D7FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FF8u;
        // 0x1d7ffc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ff8) {
            ctx->pc = 0x1D8008u;
            goto label_1d8008;
        }
    }
    ctx->pc = 0x1D8000u;
label_1d8000:
    // 0x1d8000: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d8004:
    if (ctx->pc == 0x1D8004u) {
        ctx->pc = 0x1D8004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8000u;
        // 0x1d8004: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8008u;
        goto label_1d8008;
    }
    ctx->pc = 0x1D8000u;
    {
        const bool branch_taken_0x1d8000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8000u;
        // 0x1d8004: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8000) {
            ctx->pc = 0x1D8014u;
            goto label_1d8014;
        }
    }
    ctx->pc = 0x1D8008u;
label_1d8008:
    // 0x1d8008: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
label_1d800c:
    if (ctx->pc == 0x1D800Cu) {
        ctx->pc = 0x1D8010u;
        goto label_1d8010;
    }
    ctx->pc = 0x1D8008u;
    {
        const bool branch_taken_0x1d8008 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8008) {
            ctx->pc = 0x1D8014u;
            goto label_1d8014;
        }
    }
    ctx->pc = 0x1D8010u;
label_1d8010:
    // 0x1d8010: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x1d8010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d8014:
    // 0x1d8014: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d8014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d8018:
    // 0x1d8018: 0xc0569e4  jal         func_15A790
label_1d801c:
    if (ctx->pc == 0x1D801Cu) {
        ctx->pc = 0x1D801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8018u;
        // 0x1d801c: 0xaf808cf0  sw          $zero, -0x7310($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937840), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8020u;
        goto label_1d8020;
    }
    ctx->pc = 0x1D8018u;
    SET_GPR_U32(ctx, 31, 0x1D8020u);
    ctx->pc = 0x1D801Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8018u;
    // 0x1d801c: 0xaf808cf0  sw          $zero, -0x7310($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937840), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A790u, 0x1D8018u, 0x1D8020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8020u;
label_1d8020:
    // 0x1d8020: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1d8024:
    if (ctx->pc == 0x1D8024u) {
        ctx->pc = 0x1D8024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8020u;
        // 0x1d8024: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8028u;
        goto label_1d8028;
    }
    ctx->pc = 0x1D8020u;
    {
        const bool branch_taken_0x1d8020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8020u;
        // 0x1d8024: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8020) {
            ctx->pc = 0x1D8084u;
            goto label_1d8084;
        }
    }
    ctx->pc = 0x1D8028u;
label_1d8028:
    // 0x1d8028: 0x8f858cf0  lw          $a1, -0x7310($gp)
    ctx->pc = 0x1d8028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
label_1d802c:
    // 0x1d802c: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1d802cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_1d8030:
    // 0x1d8030: 0x24840660  addiu       $a0, $a0, 0x660
    ctx->pc = 0x1d8030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1632));
label_1d8034:
    // 0x1d8034: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1d8034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d8038:
    // 0x1d8038: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1d8038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d803c:
    // 0x1d803c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d803cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d8040:
    // 0x1d8040: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d8040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d8044:
    // 0x1d8044: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d8044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1d8048:
    // 0x1d8048: 0x8f848cf0  lw          $a0, -0x7310($gp)
    ctx->pc = 0x1d8048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
label_1d804c:
    // 0x1d804c: 0xaf838cec  sw          $v1, -0x7314($gp)
    ctx->pc = 0x1d804cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937836), GPR_U32(ctx, 3));
label_1d8050:
    // 0x1d8050: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d8050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1d8054:
    // 0x1d8054: 0x12020029  beq         $s0, $v0, . + 4 + (0x29 << 2)
label_1d8058:
    if (ctx->pc == 0x1D8058u) {
        ctx->pc = 0x1D8058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8054u;
        // 0x1d8058: 0xaf848cf0  sw          $a0, -0x7310($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937840), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D805Cu;
        goto label_1d805c;
    }
    ctx->pc = 0x1D8054u;
    {
        const bool branch_taken_0x1d8054 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8054u;
        // 0x1d8058: 0xaf848cf0  sw          $a0, -0x7310($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937840), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8054) {
            ctx->pc = 0x1D80FCu;
            goto label_1d80fc;
        }
    }
    ctx->pc = 0x1D805Cu;
label_1d805c:
    // 0x1d805c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d805cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d8060:
    // 0x1d8060: 0x12020026  beq         $s0, $v0, . + 4 + (0x26 << 2)
label_1d8064:
    if (ctx->pc == 0x1D8064u) {
        ctx->pc = 0x1D8064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8060u;
        // 0x1d8064: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8068u;
        goto label_1d8068;
    }
    ctx->pc = 0x1D8060u;
    {
        const bool branch_taken_0x1d8060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8060u;
        // 0x1d8064: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8060) {
            ctx->pc = 0x1D80FCu;
            goto label_1d80fc;
        }
    }
    ctx->pc = 0x1D8068u;
label_1d8068:
    // 0x1d8068: 0x12020024  beq         $s0, $v0, . + 4 + (0x24 << 2)
label_1d806c:
    if (ctx->pc == 0x1D806Cu) {
        ctx->pc = 0x1D8070u;
        goto label_1d8070;
    }
    ctx->pc = 0x1D8068u;
    {
        const bool branch_taken_0x1d8068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8068) {
            ctx->pc = 0x1D80FCu;
            goto label_1d80fc;
        }
    }
    ctx->pc = 0x1D8070u;
label_1d8070:
    // 0x1d8070: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d8070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d8074:
    // 0x1d8074: 0x12020021  beq         $s0, $v0, . + 4 + (0x21 << 2)
label_1d8078:
    if (ctx->pc == 0x1D8078u) {
        ctx->pc = 0x1D807Cu;
        goto label_1d807c;
    }
    ctx->pc = 0x1D8074u;
    {
        const bool branch_taken_0x1d8074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8074) {
            ctx->pc = 0x1D80FCu;
            goto label_1d80fc;
        }
    }
    ctx->pc = 0x1D807Cu;
label_1d807c:
    // 0x1d807c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1d8080:
    if (ctx->pc == 0x1D8080u) {
        ctx->pc = 0x1D8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D807Cu;
        // 0x1d8080: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8084u;
        goto label_1d8084;
    }
    ctx->pc = 0x1D807Cu;
    {
        const bool branch_taken_0x1d807c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D807Cu;
        // 0x1d8080: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d807c) {
            ctx->pc = 0x1D80FCu;
            goto label_1d80fc;
        }
    }
    ctx->pc = 0x1D8084u;
label_1d8084:
    // 0x1d8084: 0xc0569e4  jal         func_15A790
label_1d8088:
    if (ctx->pc == 0x1D8088u) {
        ctx->pc = 0x1D808Cu;
        goto label_1d808c;
    }
    ctx->pc = 0x1D8084u;
    SET_GPR_U32(ctx, 31, 0x1D808Cu);
    ctx->pc = 0x15A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A790u, 0x1D8084u, 0x1D808Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D808Cu;
label_1d808c:
    // 0x1d808c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1d8090:
    if (ctx->pc == 0x1D8090u) {
        ctx->pc = 0x1D8094u;
        goto label_1d8094;
    }
    ctx->pc = 0x1D808Cu;
    {
        const bool branch_taken_0x1d808c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d808c) {
            ctx->pc = 0x1D80F4u;
            goto label_1d80f4;
        }
    }
    ctx->pc = 0x1D8094u;
label_1d8094:
    // 0x1d8094: 0x8f858cf0  lw          $a1, -0x7310($gp)
    ctx->pc = 0x1d8094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
label_1d8098:
    // 0x1d8098: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1d8098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_1d809c:
    // 0x1d809c: 0x24840660  addiu       $a0, $a0, 0x660
    ctx->pc = 0x1d809cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1632));
label_1d80a0:
    // 0x1d80a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d80a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d80a4:
    // 0x1d80a4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1d80a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d80a8:
    // 0x1d80a8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1d80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d80ac:
    // 0x1d80ac: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d80acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d80b0:
    // 0x1d80b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d80b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d80b4:
    // 0x1d80b4: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1d80b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_1d80b8:
    // 0x1d80b8: 0x8f848cf0  lw          $a0, -0x7310($gp)
    ctx->pc = 0x1d80b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
label_1d80bc:
    // 0x1d80bc: 0xaf838cec  sw          $v1, -0x7314($gp)
    ctx->pc = 0x1d80bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937836), GPR_U32(ctx, 3));
label_1d80c0:
    // 0x1d80c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d80c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1d80c4:
    // 0x1d80c4: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
label_1d80c8:
    if (ctx->pc == 0x1D80C8u) {
        ctx->pc = 0x1D80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80C4u;
        // 0x1d80c8: 0xaf848cf0  sw          $a0, -0x7310($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937840), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D80CCu;
        goto label_1d80cc;
    }
    ctx->pc = 0x1D80C4u;
    {
        const bool branch_taken_0x1d80c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80C4u;
        // 0x1d80c8: 0xaf848cf0  sw          $a0, -0x7310($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937840), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80c4) {
            ctx->pc = 0x1D80FCu;
            goto label_1d80fc;
        }
    }
    ctx->pc = 0x1D80CCu;
label_1d80cc:
    // 0x1d80cc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d80ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d80d0:
    // 0x1d80d0: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_1d80d4:
    if (ctx->pc == 0x1D80D4u) {
        ctx->pc = 0x1D80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80D0u;
        // 0x1d80d4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D80D8u;
        goto label_1d80d8;
    }
    ctx->pc = 0x1D80D0u;
    {
        const bool branch_taken_0x1d80d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80D0u;
        // 0x1d80d4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80d0) {
            ctx->pc = 0x1D80FCu;
            goto label_1d80fc;
        }
    }
    ctx->pc = 0x1D80D8u;
label_1d80d8:
    // 0x1d80d8: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_1d80dc:
    if (ctx->pc == 0x1D80DCu) {
        ctx->pc = 0x1D80E0u;
        goto label_1d80e0;
    }
    ctx->pc = 0x1D80D8u;
    {
        const bool branch_taken_0x1d80d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d80d8) {
            ctx->pc = 0x1D80FCu;
            goto label_1d80fc;
        }
    }
    ctx->pc = 0x1D80E0u;
label_1d80e0:
    // 0x1d80e0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d80e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d80e4:
    // 0x1d80e4: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_1d80e8:
    if (ctx->pc == 0x1D80E8u) {
        ctx->pc = 0x1D80ECu;
        goto label_1d80ec;
    }
    ctx->pc = 0x1D80E4u;
    {
        const bool branch_taken_0x1d80e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d80e4) {
            ctx->pc = 0x1D80FCu;
            goto label_1d80fc;
        }
    }
    ctx->pc = 0x1D80ECu;
label_1d80ec:
    // 0x1d80ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d80f0:
    if (ctx->pc == 0x1D80F0u) {
        ctx->pc = 0x1D80F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80ECu;
        // 0x1d80f0: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D80F4u;
        goto label_1d80f4;
    }
    ctx->pc = 0x1D80ECu;
    {
        const bool branch_taken_0x1d80ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D80F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80ECu;
        // 0x1d80f0: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80ec) {
            ctx->pc = 0x1D80FCu;
            goto label_1d80fc;
        }
    }
    ctx->pc = 0x1D80F4u;
label_1d80f4:
    // 0x1d80f4: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1d80f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1d80f8:
    // 0x1d80f8: 0xaf828cec  sw          $v0, -0x7314($gp)
    ctx->pc = 0x1d80f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937836), GPR_U32(ctx, 2));
label_1d80fc:
    // 0x1d80fc: 0x8f838cf0  lw          $v1, -0x7310($gp)
    ctx->pc = 0x1d80fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
label_1d8100:
    // 0x1d8100: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d8100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d8104:
    // 0x1d8104: 0x24420660  addiu       $v0, $v0, 0x660
    ctx->pc = 0x1d8104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1632));
label_1d8108:
    // 0x1d8108: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d8108u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d810c:
    // 0x1d810c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1d810cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d8110:
    // 0x1d8110: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1d8110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d8114:
    // 0x1d8114: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1d8114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d8118:
    // 0x1d8118: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1d8118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d811c:
    // 0x1d811c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1d811cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d8120:
    // 0x1d8120: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d8120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d8124:
    // 0x1d8124: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d8124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1d8128u;
    return;
}
