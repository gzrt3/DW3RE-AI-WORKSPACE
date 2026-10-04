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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1f7aa8u: goto label_1f7aa8;
        case 0x1f7aacu: goto label_1f7aac;
        case 0x1f7ab0u: goto label_1f7ab0;
        case 0x1f7ab4u: goto label_1f7ab4;
        case 0x1f7ab8u: goto label_1f7ab8;
        case 0x1f7abcu: goto label_1f7abc;
        case 0x1f7ac0u: goto label_1f7ac0;
        case 0x1f7ac4u: goto label_1f7ac4;
        case 0x1f7ac8u: goto label_1f7ac8;
        case 0x1f7accu: goto label_1f7acc;
        case 0x1f7ad0u: goto label_1f7ad0;
        case 0x1f7ad4u: goto label_1f7ad4;
        case 0x1f7ad8u: goto label_1f7ad8;
        case 0x1f7adcu: goto label_1f7adc;
        case 0x1f7ae0u: goto label_1f7ae0;
        case 0x1f7ae4u: goto label_1f7ae4;
        case 0x1f7ae8u: goto label_1f7ae8;
        case 0x1f7aecu: goto label_1f7aec;
        case 0x1f7af0u: goto label_1f7af0;
        case 0x1f7af4u: goto label_1f7af4;
        case 0x1f7af8u: goto label_1f7af8;
        case 0x1f7afcu: goto label_1f7afc;
        case 0x1f7b00u: goto label_1f7b00;
        case 0x1f7b04u: goto label_1f7b04;
        case 0x1f7b08u: goto label_1f7b08;
        case 0x1f7b0cu: goto label_1f7b0c;
        case 0x1f7b10u: goto label_1f7b10;
        case 0x1f7b14u: goto label_1f7b14;
        case 0x1f7b18u: goto label_1f7b18;
        case 0x1f7b1cu: goto label_1f7b1c;
        case 0x1f7b20u: goto label_1f7b20;
        case 0x1f7b24u: goto label_1f7b24;
        case 0x1f7b28u: goto label_1f7b28;
        case 0x1f7b2cu: goto label_1f7b2c;
        case 0x1f7b30u: goto label_1f7b30;
        case 0x1f7b34u: goto label_1f7b34;
        case 0x1f7b38u: goto label_1f7b38;
        case 0x1f7b3cu: goto label_1f7b3c;
        case 0x1f7b40u: goto label_1f7b40;
        case 0x1f7b44u: goto label_1f7b44;
        case 0x1f7b48u: goto label_1f7b48;
        case 0x1f7b4cu: goto label_1f7b4c;
        case 0x1f7b50u: goto label_1f7b50;
        case 0x1f7b54u: goto label_1f7b54;
        case 0x1f7b58u: goto label_1f7b58;
        case 0x1f7b5cu: goto label_1f7b5c;
        case 0x1f7b60u: goto label_1f7b60;
        case 0x1f7b64u: goto label_1f7b64;
        case 0x1f7b68u: goto label_1f7b68;
        case 0x1f7b6cu: goto label_1f7b6c;
        case 0x1f7b70u: goto label_1f7b70;
        case 0x1f7b74u: goto label_1f7b74;
        case 0x1f7b78u: goto label_1f7b78;
        case 0x1f7b7cu: goto label_1f7b7c;
        case 0x1f7b80u: goto label_1f7b80;
        case 0x1f7b84u: goto label_1f7b84;
        case 0x1f7b88u: goto label_1f7b88;
        case 0x1f7b8cu: goto label_1f7b8c;
        case 0x1f7b90u: goto label_1f7b90;
        case 0x1f7b94u: goto label_1f7b94;
        case 0x1f7b98u: goto label_1f7b98;
        case 0x1f7b9cu: goto label_1f7b9c;
        case 0x1f7ba0u: goto label_1f7ba0;
        case 0x1f7ba4u: goto label_1f7ba4;
        case 0x1f7ba8u: goto label_1f7ba8;
        case 0x1f7bacu: goto label_1f7bac;
        case 0x1f7bb0u: goto label_1f7bb0;
        case 0x1f7bb4u: goto label_1f7bb4;
        case 0x1f7bb8u: goto label_1f7bb8;
        case 0x1f7bbcu: goto label_1f7bbc;
        case 0x1f7bc0u: goto label_1f7bc0;
        case 0x1f7bc4u: goto label_1f7bc4;
        case 0x1f7bc8u: goto label_1f7bc8;
        case 0x1f7bccu: goto label_1f7bcc;
        case 0x1f7bd0u: goto label_1f7bd0;
        case 0x1f7bd4u: goto label_1f7bd4;
        case 0x1f7bd8u: goto label_1f7bd8;
        case 0x1f7bdcu: goto label_1f7bdc;
        case 0x1f7be0u: goto label_1f7be0;
        case 0x1f7be4u: goto label_1f7be4;
        case 0x1f7be8u: goto label_1f7be8;
        case 0x1f7becu: goto label_1f7bec;
        case 0x1f7bf0u: goto label_1f7bf0;
        case 0x1f7bf4u: goto label_1f7bf4;
        case 0x1f7bf8u: goto label_1f7bf8;
        case 0x1f7bfcu: goto label_1f7bfc;
        case 0x1f7c00u: goto label_1f7c00;
        case 0x1f7c04u: goto label_1f7c04;
        case 0x1f7c08u: goto label_1f7c08;
        case 0x1f7c0cu: goto label_1f7c0c;
        case 0x1f7c10u: goto label_1f7c10;
        case 0x1f7c14u: goto label_1f7c14;
        case 0x1f7c18u: goto label_1f7c18;
        case 0x1f7c1cu: goto label_1f7c1c;
        case 0x1f7c20u: goto label_1f7c20;
        case 0x1f7c24u: goto label_1f7c24;
        case 0x1f7c28u: goto label_1f7c28;
        case 0x1f7c2cu: goto label_1f7c2c;
        case 0x1f7c30u: goto label_1f7c30;
        case 0x1f7c34u: goto label_1f7c34;
        case 0x1f7c38u: goto label_1f7c38;
        case 0x1f7c3cu: goto label_1f7c3c;
        case 0x1f7c40u: goto label_1f7c40;
        case 0x1f7c44u: goto label_1f7c44;
        case 0x1f7c48u: goto label_1f7c48;
        case 0x1f7c4cu: goto label_1f7c4c;
        case 0x1f7c50u: goto label_1f7c50;
        case 0x1f7c54u: goto label_1f7c54;
        case 0x1f7c58u: goto label_1f7c58;
        case 0x1f7c5cu: goto label_1f7c5c;
        case 0x1f7c60u: goto label_1f7c60;
        case 0x1f7c64u: goto label_1f7c64;
        case 0x1f7c68u: goto label_1f7c68;
        case 0x1f7c6cu: goto label_1f7c6c;
        case 0x1f7c70u: goto label_1f7c70;
        case 0x1f7c74u: goto label_1f7c74;
        case 0x1f7c78u: goto label_1f7c78;
        case 0x1f7c7cu: goto label_1f7c7c;
        case 0x1f7c80u: goto label_1f7c80;
        case 0x1f7c84u: goto label_1f7c84;
        case 0x1f7c88u: goto label_1f7c88;
        case 0x1f7c8cu: goto label_1f7c8c;
        case 0x1f7c90u: goto label_1f7c90;
        case 0x1f7c94u: goto label_1f7c94;
        case 0x1f7c98u: goto label_1f7c98;
        case 0x1f7c9cu: goto label_1f7c9c;
        case 0x1f7ca0u: goto label_1f7ca0;
        case 0x1f7ca4u: goto label_1f7ca4;
        case 0x1f7ca8u: goto label_1f7ca8;
        case 0x1f7cacu: goto label_1f7cac;
        case 0x1f7cb0u: goto label_1f7cb0;
        case 0x1f7cb4u: goto label_1f7cb4;
        case 0x1f7cb8u: goto label_1f7cb8;
        case 0x1f7cbcu: goto label_1f7cbc;
        case 0x1f7cc0u: goto label_1f7cc0;
        case 0x1f7cc4u: goto label_1f7cc4;
        case 0x1f7cc8u: goto label_1f7cc8;
        case 0x1f7cccu: goto label_1f7ccc;
        case 0x1f7cd0u: goto label_1f7cd0;
        case 0x1f7cd4u: goto label_1f7cd4;
        case 0x1f7cd8u: goto label_1f7cd8;
        case 0x1f7cdcu: goto label_1f7cdc;
        case 0x1f7ce0u: goto label_1f7ce0;
        case 0x1f7ce4u: goto label_1f7ce4;
        case 0x1f7ce8u: goto label_1f7ce8;
        case 0x1f7cecu: goto label_1f7cec;
        case 0x1f7cf0u: goto label_1f7cf0;
        case 0x1f7cf4u: goto label_1f7cf4;
        case 0x1f7cf8u: goto label_1f7cf8;
        case 0x1f7cfcu: goto label_1f7cfc;
        case 0x1f7d00u: goto label_1f7d00;
        case 0x1f7d04u: goto label_1f7d04;
        case 0x1f7d08u: goto label_1f7d08;
        case 0x1f7d0cu: goto label_1f7d0c;
        case 0x1f7d10u: goto label_1f7d10;
        case 0x1f7d14u: goto label_1f7d14;
        case 0x1f7d18u: goto label_1f7d18;
        case 0x1f7d1cu: goto label_1f7d1c;
        case 0x1f7d20u: goto label_1f7d20;
        case 0x1f7d24u: goto label_1f7d24;
        case 0x1f7d28u: goto label_1f7d28;
        case 0x1f7d2cu: goto label_1f7d2c;
        case 0x1f7d30u: goto label_1f7d30;
        case 0x1f7d34u: goto label_1f7d34;
        case 0x1f7d38u: goto label_1f7d38;
        case 0x1f7d3cu: goto label_1f7d3c;
        case 0x1f7d40u: goto label_1f7d40;
        case 0x1f7d44u: goto label_1f7d44;
        case 0x1f7d48u: goto label_1f7d48;
        case 0x1f7d4cu: goto label_1f7d4c;
        case 0x1f7d50u: goto label_1f7d50;
        case 0x1f7d54u: goto label_1f7d54;
        case 0x1f7d58u: goto label_1f7d58;
        case 0x1f7d5cu: goto label_1f7d5c;
        case 0x1f7d60u: goto label_1f7d60;
        case 0x1f7d64u: goto label_1f7d64;
        case 0x1f7d68u: goto label_1f7d68;
        case 0x1f7d6cu: goto label_1f7d6c;
        case 0x1f7d70u: goto label_1f7d70;
        case 0x1f7d74u: goto label_1f7d74;
        case 0x1f7d78u: goto label_1f7d78;
        case 0x1f7d7cu: goto label_1f7d7c;
        case 0x1f7d80u: goto label_1f7d80;
        case 0x1f7d84u: goto label_1f7d84;
        case 0x1f7d88u: goto label_1f7d88;
        case 0x1f7d8cu: goto label_1f7d8c;
        case 0x1f7d90u: goto label_1f7d90;
        case 0x1f7d94u: goto label_1f7d94;
        case 0x1f7d98u: goto label_1f7d98;
        case 0x1f7d9cu: goto label_1f7d9c;
        case 0x1f7da0u: goto label_1f7da0;
        case 0x1f7da4u: goto label_1f7da4;
        case 0x1f7da8u: goto label_1f7da8;
        case 0x1f7dacu: goto label_1f7dac;
        case 0x1f7db0u: goto label_1f7db0;
        case 0x1f7db4u: goto label_1f7db4;
        case 0x1f7db8u: goto label_1f7db8;
        case 0x1f7dbcu: goto label_1f7dbc;
        case 0x1f7dc0u: goto label_1f7dc0;
        case 0x1f7dc4u: goto label_1f7dc4;
        case 0x1f7dc8u: goto label_1f7dc8;
        case 0x1f7dccu: goto label_1f7dcc;
        case 0x1f7dd0u: goto label_1f7dd0;
        case 0x1f7dd4u: goto label_1f7dd4;
        case 0x1f7dd8u: goto label_1f7dd8;
        case 0x1f7ddcu: goto label_1f7ddc;
        case 0x1f7de0u: goto label_1f7de0;
        case 0x1f7de4u: goto label_1f7de4;
        case 0x1f7de8u: goto label_1f7de8;
        case 0x1f7decu: goto label_1f7dec;
        case 0x1f7df0u: goto label_1f7df0;
        case 0x1f7df4u: goto label_1f7df4;
        case 0x1f7df8u: goto label_1f7df8;
        case 0x1f7dfcu: goto label_1f7dfc;
        case 0x1f7e00u: goto label_1f7e00;
        case 0x1f7e04u: goto label_1f7e04;
        case 0x1f7e08u: goto label_1f7e08;
        case 0x1f7e0cu: goto label_1f7e0c;
        case 0x1f7e10u: goto label_1f7e10;
        case 0x1f7e14u: goto label_1f7e14;
        case 0x1f7e18u: goto label_1f7e18;
        case 0x1f7e1cu: goto label_1f7e1c;
        case 0x1f7e20u: goto label_1f7e20;
        case 0x1f7e24u: goto label_1f7e24;
        case 0x1f7e28u: goto label_1f7e28;
        case 0x1f7e2cu: goto label_1f7e2c;
        case 0x1f7e30u: goto label_1f7e30;
        case 0x1f7e34u: goto label_1f7e34;
        case 0x1f7e38u: goto label_1f7e38;
        case 0x1f7e3cu: goto label_1f7e3c;
        case 0x1f7e40u: goto label_1f7e40;
        case 0x1f7e44u: goto label_1f7e44;
        case 0x1f7e48u: goto label_1f7e48;
        case 0x1f7e4cu: goto label_1f7e4c;
        case 0x1f7e50u: goto label_1f7e50;
        case 0x1f7e54u: goto label_1f7e54;
        case 0x1f7e58u: goto label_1f7e58;
        case 0x1f7e5cu: goto label_1f7e5c;
        case 0x1f7e60u: goto label_1f7e60;
        case 0x1f7e64u: goto label_1f7e64;
        case 0x1f7e68u: goto label_1f7e68;
        case 0x1f7e6cu: goto label_1f7e6c;
        case 0x1f7e70u: goto label_1f7e70;
        case 0x1f7e74u: goto label_1f7e74;
        case 0x1f7e78u: goto label_1f7e78;
        case 0x1f7e7cu: goto label_1f7e7c;
        case 0x1f7e80u: goto label_1f7e80;
        case 0x1f7e84u: goto label_1f7e84;
        case 0x1f7e88u: goto label_1f7e88;
        case 0x1f7e8cu: goto label_1f7e8c;
        case 0x1f7e90u: goto label_1f7e90;
        case 0x1f7e94u: goto label_1f7e94;
        case 0x1f7e98u: goto label_1f7e98;
        case 0x1f7e9cu: goto label_1f7e9c;
        case 0x1f7ea0u: goto label_1f7ea0;
        case 0x1f7ea4u: goto label_1f7ea4;
        case 0x1f7ea8u: goto label_1f7ea8;
        case 0x1f7eacu: goto label_1f7eac;
        case 0x1f7eb0u: goto label_1f7eb0;
        case 0x1f7eb4u: goto label_1f7eb4;
        case 0x1f7eb8u: goto label_1f7eb8;
        case 0x1f7ebcu: goto label_1f7ebc;
        case 0x1f7ec0u: goto label_1f7ec0;
        case 0x1f7ec4u: goto label_1f7ec4;
        case 0x1f7ec8u: goto label_1f7ec8;
        case 0x1f7eccu: goto label_1f7ecc;
        case 0x1f7ed0u: goto label_1f7ed0;
        case 0x1f7ed4u: goto label_1f7ed4;
        case 0x1f7ed8u: goto label_1f7ed8;
        case 0x1f7edcu: goto label_1f7edc;
        case 0x1f7ee0u: goto label_1f7ee0;
        case 0x1f7ee4u: goto label_1f7ee4;
        case 0x1f7ee8u: goto label_1f7ee8;
        case 0x1f7eecu: goto label_1f7eec;
        case 0x1f7ef0u: goto label_1f7ef0;
        case 0x1f7ef4u: goto label_1f7ef4;
        case 0x1f7ef8u: goto label_1f7ef8;
        case 0x1f7efcu: goto label_1f7efc;
        case 0x1f7f00u: goto label_1f7f00;
        case 0x1f7f04u: goto label_1f7f04;
        case 0x1f7f08u: goto label_1f7f08;
        case 0x1f7f0cu: goto label_1f7f0c;
        case 0x1f7f10u: goto label_1f7f10;
        case 0x1f7f14u: goto label_1f7f14;
        case 0x1f7f18u: goto label_1f7f18;
        case 0x1f7f1cu: goto label_1f7f1c;
        case 0x1f7f20u: goto label_1f7f20;
        case 0x1f7f24u: goto label_1f7f24;
        case 0x1f7f28u: goto label_1f7f28;
        case 0x1f7f2cu: goto label_1f7f2c;
        case 0x1f7f30u: goto label_1f7f30;
        case 0x1f7f34u: goto label_1f7f34;
        case 0x1f7f38u: goto label_1f7f38;
        case 0x1f7f3cu: goto label_1f7f3c;
        case 0x1f7f40u: goto label_1f7f40;
        case 0x1f7f44u: goto label_1f7f44;
        case 0x1f7f48u: goto label_1f7f48;
        case 0x1f7f4cu: goto label_1f7f4c;
        case 0x1f7f50u: goto label_1f7f50;
        case 0x1f7f54u: goto label_1f7f54;
        case 0x1f7f58u: goto label_1f7f58;
        case 0x1f7f5cu: goto label_1f7f5c;
        case 0x1f7f60u: goto label_1f7f60;
        case 0x1f7f64u: goto label_1f7f64;
        case 0x1f7f68u: goto label_1f7f68;
        case 0x1f7f6cu: goto label_1f7f6c;
        case 0x1f7f70u: goto label_1f7f70;
        case 0x1f7f74u: goto label_1f7f74;
        case 0x1f7f78u: goto label_1f7f78;
        case 0x1f7f7cu: goto label_1f7f7c;
        case 0x1f7f80u: goto label_1f7f80;
        case 0x1f7f84u: goto label_1f7f84;
        case 0x1f7f88u: goto label_1f7f88;
        case 0x1f7f8cu: goto label_1f7f8c;
        case 0x1f7f90u: goto label_1f7f90;
        case 0x1f7f94u: goto label_1f7f94;
        case 0x1f7f98u: goto label_1f7f98;
        case 0x1f7f9cu: goto label_1f7f9c;
        case 0x1f7fa0u: goto label_1f7fa0;
        case 0x1f7fa4u: goto label_1f7fa4;
        case 0x1f7fa8u: goto label_1f7fa8;
        case 0x1f7facu: goto label_1f7fac;
        case 0x1f7fb0u: goto label_1f7fb0;
        case 0x1f7fb4u: goto label_1f7fb4;
        case 0x1f7fb8u: goto label_1f7fb8;
        case 0x1f7fbcu: goto label_1f7fbc;
        case 0x1f7fc0u: goto label_1f7fc0;
        case 0x1f7fc4u: goto label_1f7fc4;
        case 0x1f7fc8u: goto label_1f7fc8;
        case 0x1f7fccu: goto label_1f7fcc;
        case 0x1f7fd0u: goto label_1f7fd0;
        case 0x1f7fd4u: goto label_1f7fd4;
        case 0x1f7fd8u: goto label_1f7fd8;
        case 0x1f7fdcu: goto label_1f7fdc;
        case 0x1f7fe0u: goto label_1f7fe0;
        case 0x1f7fe4u: goto label_1f7fe4;
        case 0x1f7fe8u: goto label_1f7fe8;
        case 0x1f7fecu: goto label_1f7fec;
        case 0x1f7ff0u: goto label_1f7ff0;
        case 0x1f7ff4u: goto label_1f7ff4;
        case 0x1f7ff8u: goto label_1f7ff8;
        case 0x1f7ffcu: goto label_1f7ffc;
        case 0x1f8000u: goto label_1f8000;
        case 0x1f8004u: goto label_1f8004;
        case 0x1f8008u: goto label_1f8008;
        case 0x1f800cu: goto label_1f800c;
        case 0x1f8010u: goto label_1f8010;
        case 0x1f8014u: goto label_1f8014;
        case 0x1f8018u: goto label_1f8018;
        case 0x1f801cu: goto label_1f801c;
        case 0x1f8020u: goto label_1f8020;
        case 0x1f8024u: goto label_1f8024;
        case 0x1f8028u: goto label_1f8028;
        case 0x1f802cu: goto label_1f802c;
        case 0x1f8030u: goto label_1f8030;
        case 0x1f8034u: goto label_1f8034;
        case 0x1f8038u: goto label_1f8038;
        case 0x1f803cu: goto label_1f803c;
        case 0x1f8040u: goto label_1f8040;
        case 0x1f8044u: goto label_1f8044;
        case 0x1f8048u: goto label_1f8048;
        case 0x1f804cu: goto label_1f804c;
        case 0x1f8050u: goto label_1f8050;
        case 0x1f8054u: goto label_1f8054;
        case 0x1f8058u: goto label_1f8058;
        case 0x1f805cu: goto label_1f805c;
        case 0x1f8060u: goto label_1f8060;
        case 0x1f8064u: goto label_1f8064;
        case 0x1f8068u: goto label_1f8068;
        case 0x1f806cu: goto label_1f806c;
        case 0x1f8070u: goto label_1f8070;
        case 0x1f8074u: goto label_1f8074;
        case 0x1f8078u: goto label_1f8078;
        case 0x1f807cu: goto label_1f807c;
        case 0x1f8080u: goto label_1f8080;
        case 0x1f8084u: goto label_1f8084;
        case 0x1f8088u: goto label_1f8088;
        case 0x1f808cu: goto label_1f808c;
        case 0x1f8090u: goto label_1f8090;
        case 0x1f8094u: goto label_1f8094;
        case 0x1f8098u: goto label_1f8098;
        case 0x1f809cu: goto label_1f809c;
        case 0x1f80a0u: goto label_1f80a0;
        case 0x1f80a4u: goto label_1f80a4;
        case 0x1f80a8u: goto label_1f80a8;
        case 0x1f80acu: goto label_1f80ac;
        case 0x1f80b0u: goto label_1f80b0;
        case 0x1f80b4u: goto label_1f80b4;
        case 0x1f80b8u: goto label_1f80b8;
        case 0x1f80bcu: goto label_1f80bc;
        case 0x1f80c0u: goto label_1f80c0;
        case 0x1f80c4u: goto label_1f80c4;
        case 0x1f80c8u: goto label_1f80c8;
        case 0x1f80ccu: goto label_1f80cc;
        case 0x1f80d0u: goto label_1f80d0;
        case 0x1f80d4u: goto label_1f80d4;
        case 0x1f80d8u: goto label_1f80d8;
        case 0x1f80dcu: goto label_1f80dc;
        case 0x1f80e0u: goto label_1f80e0;
        case 0x1f80e4u: goto label_1f80e4;
        case 0x1f80e8u: goto label_1f80e8;
        case 0x1f80ecu: goto label_1f80ec;
        case 0x1f80f0u: goto label_1f80f0;
        case 0x1f80f4u: goto label_1f80f4;
        case 0x1f80f8u: goto label_1f80f8;
        case 0x1f80fcu: goto label_1f80fc;
        case 0x1f8100u: goto label_1f8100;
        case 0x1f8104u: goto label_1f8104;
        case 0x1f8108u: goto label_1f8108;
        case 0x1f810cu: goto label_1f810c;
        case 0x1f8110u: goto label_1f8110;
        case 0x1f8114u: goto label_1f8114;
        case 0x1f8118u: goto label_1f8118;
        case 0x1f811cu: goto label_1f811c;
        case 0x1f8120u: goto label_1f8120;
        case 0x1f8124u: goto label_1f8124;
        case 0x1f8128u: goto label_1f8128;
        case 0x1f812cu: goto label_1f812c;
        case 0x1f8130u: goto label_1f8130;
        case 0x1f8134u: goto label_1f8134;
        case 0x1f8138u: goto label_1f8138;
        case 0x1f813cu: goto label_1f813c;
        case 0x1f8140u: goto label_1f8140;
        case 0x1f8144u: goto label_1f8144;
        case 0x1f8148u: goto label_1f8148;
        case 0x1f814cu: goto label_1f814c;
        case 0x1f8150u: goto label_1f8150;
        case 0x1f8154u: goto label_1f8154;
        case 0x1f8158u: goto label_1f8158;
        case 0x1f815cu: goto label_1f815c;
        case 0x1f8160u: goto label_1f8160;
        case 0x1f8164u: goto label_1f8164;
        case 0x1f8168u: goto label_1f8168;
        case 0x1f816cu: goto label_1f816c;
        case 0x1f8170u: goto label_1f8170;
        case 0x1f8174u: goto label_1f8174;
        case 0x1f8178u: goto label_1f8178;
        case 0x1f817cu: goto label_1f817c;
        case 0x1f8180u: goto label_1f8180;
        case 0x1f8184u: goto label_1f8184;
        case 0x1f8188u: goto label_1f8188;
        case 0x1f818cu: goto label_1f818c;
        case 0x1f8190u: goto label_1f8190;
        case 0x1f8194u: goto label_1f8194;
        case 0x1f8198u: goto label_1f8198;
        case 0x1f819cu: goto label_1f819c;
        case 0x1f81a0u: goto label_1f81a0;
        case 0x1f81a4u: goto label_1f81a4;
        case 0x1f81a8u: goto label_1f81a8;
        case 0x1f81acu: goto label_1f81ac;
        case 0x1f81b0u: goto label_1f81b0;
        case 0x1f81b4u: goto label_1f81b4;
        case 0x1f81b8u: goto label_1f81b8;
        case 0x1f81bcu: goto label_1f81bc;
        case 0x1f81c0u: goto label_1f81c0;
        case 0x1f81c4u: goto label_1f81c4;
        case 0x1f81c8u: goto label_1f81c8;
        case 0x1f81ccu: goto label_1f81cc;
        case 0x1f81d0u: goto label_1f81d0;
        case 0x1f81d4u: goto label_1f81d4;
        case 0x1f81d8u: goto label_1f81d8;
        case 0x1f81dcu: goto label_1f81dc;
        case 0x1f81e0u: goto label_1f81e0;
        case 0x1f81e4u: goto label_1f81e4;
        case 0x1f81e8u: goto label_1f81e8;
        case 0x1f81ecu: goto label_1f81ec;
        case 0x1f81f0u: goto label_1f81f0;
        case 0x1f81f4u: goto label_1f81f4;
        case 0x1f81f8u: goto label_1f81f8;
        case 0x1f81fcu: goto label_1f81fc;
        case 0x1f8200u: goto label_1f8200;
        case 0x1f8204u: goto label_1f8204;
        case 0x1f8208u: goto label_1f8208;
        case 0x1f820cu: goto label_1f820c;
        case 0x1f8210u: goto label_1f8210;
        case 0x1f8214u: goto label_1f8214;
        case 0x1f8218u: goto label_1f8218;
        case 0x1f821cu: goto label_1f821c;
        case 0x1f8220u: goto label_1f8220;
        case 0x1f8224u: goto label_1f8224;
        case 0x1f8228u: goto label_1f8228;
        case 0x1f822cu: goto label_1f822c;
        case 0x1f8230u: goto label_1f8230;
        case 0x1f8234u: goto label_1f8234;
        case 0x1f8238u: goto label_1f8238;
        case 0x1f823cu: goto label_1f823c;
        case 0x1f8240u: goto label_1f8240;
        case 0x1f8244u: goto label_1f8244;
        case 0x1f8248u: goto label_1f8248;
        case 0x1f824cu: goto label_1f824c;
        case 0x1f8250u: goto label_1f8250;
        case 0x1f8254u: goto label_1f8254;
        case 0x1f8258u: goto label_1f8258;
        case 0x1f825cu: goto label_1f825c;
        case 0x1f8260u: goto label_1f8260;
        case 0x1f8264u: goto label_1f8264;
        case 0x1f8268u: goto label_1f8268;
        case 0x1f826cu: goto label_1f826c;
        case 0x1f8270u: goto label_1f8270;
        case 0x1f8274u: goto label_1f8274;
        default: return;
    }

label_1f7aa8:
    // 0x1f7aa8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f7aa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7aac:
    // 0x1f7aac: 0x0  nop
    ctx->pc = 0x1f7aacu;
    // NOP
label_1f7ab0:
    // 0x1f7ab0: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x1f7ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_1f7ab4:
    // 0x1f7ab4: 0x24426f40  addiu       $v0, $v0, 0x6F40
    ctx->pc = 0x1f7ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28480));
label_1f7ab8:
    // 0x1f7ab8: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1f7ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1f7abc:
    // 0x1f7abc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1f7abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1f7ac0:
    // 0x1f7ac0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f7ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f7ac4:
    // 0x1f7ac4: 0x549021  addu        $s2, $v0, $s4
    ctx->pc = 0x1f7ac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1f7ac8:
    // 0x1f7ac8: 0xc05e234  jal         func_1788D0
label_1f7acc:
    if (ctx->pc == 0x1F7ACCu) {
        ctx->pc = 0x1F7ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AC8u;
        // 0x1f7acc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7AD0u;
        goto label_1f7ad0;
    }
    ctx->pc = 0x1F7AC8u;
    SET_GPR_U32(ctx, 31, 0x1F7AD0u);
    ctx->pc = 0x1F7ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7AC8u;
    // 0x1f7acc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1F7AC8u, 0x1F7AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7AD0u;
label_1f7ad0:
    // 0x1f7ad0: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1f7ad0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f7ad4:
    // 0x1f7ad4: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1f7ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1f7ad8:
    // 0x1f7ad8: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1f7ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f7adc:
    // 0x1f7adc: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1f7adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f7ae0:
    // 0x1f7ae0: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x1f7ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1f7ae4:
    // 0x1f7ae4: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x1f7ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f7ae8:
    // 0x1f7ae8: 0xc07c1f4  jal         func_1F07D0
label_1f7aec:
    if (ctx->pc == 0x1F7AECu) {
        ctx->pc = 0x1F7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AE8u;
        // 0x1f7aec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7AF0u;
        goto label_1f7af0;
    }
    ctx->pc = 0x1F7AE8u;
    SET_GPR_U32(ctx, 31, 0x1F7AF0u);
    ctx->pc = 0x1F7AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7AE8u;
    // 0x1f7aec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F07D0u;
    { ctx->pc = 0x1f07d0; return; }
    ctx->pc = 0x1F7AF0u;
label_1f7af0:
    // 0x1f7af0: 0x264405b0  addiu       $a0, $s2, 0x5B0
    ctx->pc = 0x1f7af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1456));
label_1f7af4:
    // 0x1f7af4: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1f7af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f7af8:
    // 0x1f7af8: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1f7af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f7afc:
    // 0x1f7afc: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1f7afcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f7b00:
    // 0x1f7b00: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x1f7b00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1f7b04:
    // 0x1f7b04: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x1f7b04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f7b08:
    // 0x1f7b08: 0xc07c084  jal         func_1F0210
label_1f7b0c:
    if (ctx->pc == 0x1F7B0Cu) {
        ctx->pc = 0x1F7B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B08u;
        // 0x1f7b0c: 0x240a000c  addiu       $t2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7B10u;
        goto label_1f7b10;
    }
    ctx->pc = 0x1F7B08u;
    SET_GPR_U32(ctx, 31, 0x1F7B10u);
    ctx->pc = 0x1F7B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7B08u;
    // 0x1f7b0c: 0x240a000c  addiu       $t2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0210u;
    { ctx->pc = 0x1f0210; return; }
    ctx->pc = 0x1F7B10u;
label_1f7b10:
    // 0x1f7b10: 0xc07082c  jal         func_1C20B0
label_1f7b14:
    if (ctx->pc == 0x1F7B14u) {
        ctx->pc = 0x1F7B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B10u;
        // 0x1f7b14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7B18u;
        goto label_1f7b18;
    }
    ctx->pc = 0x1F7B10u;
    SET_GPR_U32(ctx, 31, 0x1F7B18u);
    ctx->pc = 0x1F7B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7B10u;
    // 0x1f7b14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x1F7B18u;
label_1f7b18:
    // 0x1f7b18: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1f7b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f7b1c:
    // 0x1f7b1c: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1f7b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f7b20:
    // 0x1f7b20: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x1f7b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_1f7b24:
    // 0x1f7b24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f7b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f7b28:
    // 0x1f7b28: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1f7b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1f7b2c:
    // 0x1f7b2c: 0x2624000a  addiu       $a0, $s1, 0xA
    ctx->pc = 0x1f7b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
label_1f7b30:
    // 0x1f7b30: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1f7b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1f7b34:
    // 0x1f7b34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f7b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7b38:
    // 0x1f7b38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f7b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f7b3c:
    // 0x1f7b3c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1f7b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1f7b40:
    // 0x1f7b40: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x1f7b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
label_1f7b44:
    // 0x1f7b44: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f7b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1f7b48:
    // 0x1f7b48: 0x26440870  addiu       $a0, $s2, 0x870
    ctx->pc = 0x1f7b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2160));
label_1f7b4c:
    // 0x1f7b4c: 0x306affff  andi        $t2, $v1, 0xFFFF
    ctx->pc = 0x1f7b4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1f7b50:
    // 0x1f7b50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f7b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f7b54:
    // 0x1f7b54: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1f7b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f7b58:
    // 0x1f7b58: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1f7b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f7b5c:
    // 0x1f7b5c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1f7b5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f7b60:
    // 0x1f7b60: 0xc05de30  jal         func_1778C0
label_1f7b64:
    if (ctx->pc == 0x1F7B64u) {
        ctx->pc = 0x1F7B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B60u;
        // 0x1f7b64: 0x120582d  daddu       $t3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7B68u;
        goto label_1f7b68;
    }
    ctx->pc = 0x1F7B60u;
    SET_GPR_U32(ctx, 31, 0x1F7B68u);
    ctx->pc = 0x1F7B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7B60u;
    // 0x1f7b64: 0x120582d  daddu       $t3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1F7B60u, 0x1F7B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7B68u;
label_1f7b68:
    // 0x1f7b68: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1f7b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1f7b6c:
    // 0x1f7b6c: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x1f7b6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1f7b70:
    // 0x1f7b70: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x1f7b70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_1f7b74:
    // 0x1f7b74: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1f7b78:
    if (ctx->pc == 0x1F7B78u) {
        ctx->pc = 0x1F7B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B74u;
        // 0x1f7b78: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7B7Cu;
        goto label_1f7b7c;
    }
    ctx->pc = 0x1F7B74u;
    {
        const bool branch_taken_0x1f7b74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B74u;
        // 0x1f7b78: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b74) {
            ctx->pc = 0x1F7B94u;
            goto label_1f7b94;
        }
    }
    ctx->pc = 0x1F7B7Cu;
label_1f7b7c:
    // 0x1f7b7c: 0x16230005  bne         $s1, $v1, . + 4 + (0x5 << 2)
label_1f7b80:
    if (ctx->pc == 0x1F7B80u) {
        ctx->pc = 0x1F7B84u;
        goto label_1f7b84;
    }
    ctx->pc = 0x1F7B7Cu;
    {
        const bool branch_taken_0x1f7b7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7b7c) {
            ctx->pc = 0x1F7B94u;
            goto label_1f7b94;
        }
    }
    ctx->pc = 0x1F7B84u;
label_1f7b84:
    // 0x1f7b84: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1f7b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1f7b88:
    // 0x1f7b88: 0xa24308e2  sb          $v1, 0x8E2($s2)
    ctx->pc = 0x1f7b88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2274), (uint8_t)GPR_U32(ctx, 3));
label_1f7b8c:
    // 0x1f7b8c: 0xa24308e1  sb          $v1, 0x8E1($s2)
    ctx->pc = 0x1f7b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2273), (uint8_t)GPR_U32(ctx, 3));
label_1f7b90:
    // 0x1f7b90: 0xa24308e0  sb          $v1, 0x8E0($s2)
    ctx->pc = 0x1f7b90u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2272), (uint8_t)GPR_U32(ctx, 3));
label_1f7b94:
    // 0x1f7b94: 0x0  nop
    ctx->pc = 0x1f7b94u;
    // NOP
label_1f7b98:
    // 0x1f7b98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7b98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f7b9c:
    // 0x1f7b9c: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x1f7b9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_1f7ba0:
    // 0x1f7ba0: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
label_1f7ba4:
    if (ctx->pc == 0x1F7BA4u) {
        ctx->pc = 0x1F7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BA0u;
        // 0x1f7ba4: 0x26731220  addiu       $s3, $s3, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7BA8u;
        goto label_1f7ba8;
    }
    ctx->pc = 0x1F7BA0u;
    {
        const bool branch_taken_0x1f7ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BA0u;
        // 0x1f7ba4: 0x26731220  addiu       $s3, $s3, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ba0) {
            ctx->pc = 0x1F7AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7aac;
        }
    }
    ctx->pc = 0x1F7BA8u;
label_1f7ba8:
    // 0x1f7ba8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f7ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f7bac:
    // 0x1f7bac: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1f7bacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f7bb0:
    // 0x1f7bb0: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
label_1f7bb4:
    if (ctx->pc == 0x1F7BB4u) {
        ctx->pc = 0x1F7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BB0u;
        // 0x1f7bb4: 0x26940910  addiu       $s4, $s4, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7BB8u;
        goto label_1f7bb8;
    }
    ctx->pc = 0x1F7BB0u;
    {
        const bool branch_taken_0x1f7bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BB0u;
        // 0x1f7bb4: 0x26940910  addiu       $s4, $s4, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7bb0) {
            ctx->pc = 0x1F7AA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1f7aa4; return; }
        }
    }
    ctx->pc = 0x1F7BB8u;
label_1f7bb8:
    // 0x1f7bb8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f7bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1f7bbc:
    // 0x1f7bbc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1f7bbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f7bc0:
    // 0x1f7bc0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1f7bc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f7bc4:
    // 0x1f7bc4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1f7bc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f7bc8:
    // 0x1f7bc8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f7bc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f7bcc:
    // 0x1f7bcc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f7bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f7bd0:
    // 0x1f7bd0: 0x3e00008  jr          $ra
label_1f7bd4:
    if (ctx->pc == 0x1F7BD4u) {
        ctx->pc = 0x1F7BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BD0u;
        // 0x1f7bd4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7BD8u;
        goto label_1f7bd8;
    }
    ctx->pc = 0x1F7BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BD0u;
        // 0x1f7bd4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7BD8u;
label_1f7bd8:
    // 0x1f7bd8: 0x0  nop
    ctx->pc = 0x1f7bd8u;
    // NOP
label_1f7bdc:
    // 0x1f7bdc: 0x0  nop
    ctx->pc = 0x1f7bdcu;
    // NOP
label_1f7be0:
    // 0x1f7be0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f7be0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7be4:
    // 0x1f7be4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f7be4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7be8:
    // 0x1f7be8: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x1f7be8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
label_1f7bec:
    // 0x1f7bec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f7becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f7bf0:
    // 0x1f7bf0: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x1f7bf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f7bf4:
    // 0x1f7bf4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f7bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f7bf8:
    // 0x1f7bf8: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x1f7bf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f7bfc:
    // 0x1f7bfc: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x1f7bfcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f7c00:
    // 0x1f7c00: 0x24c66f10  addiu       $a2, $a2, 0x6F10
    ctx->pc = 0x1f7c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28432));
label_1f7c04:
    // 0x1f7c04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f7c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7c08:
    // 0x1f7c08: 0xc84821  addu        $t1, $a2, $t0
    ctx->pc = 0x1f7c08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1f7c0c:
    // 0x1f7c0c: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x1f7c0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1f7c10:
    // 0x1f7c10: 0x1545000a  bne         $t2, $a1, . + 4 + (0xA << 2)
label_1f7c14:
    if (ctx->pc == 0x1F7C14u) {
        ctx->pc = 0x1F7C18u;
        goto label_1f7c18;
    }
    ctx->pc = 0x1F7C10u;
    {
        const bool branch_taken_0x1f7c10 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 5));
        if (branch_taken_0x1f7c10) {
            ctx->pc = 0x1F7C3Cu;
            goto label_1f7c3c;
        }
    }
    ctx->pc = 0x1F7C18u;
label_1f7c18:
    // 0x1f7c18: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1f7c1c:
    // 0x1f7c1c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f7c1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1f7c20:
    // 0x1f7c20: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c20u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
label_1f7c24:
    // 0x1f7c24: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1f7c28:
    // 0x1f7c28: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1f7c28u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
label_1f7c2c:
    // 0x1f7c2c: 0x15400026  bnez        $t2, . + 4 + (0x26 << 2)
label_1f7c30:
    if (ctx->pc == 0x1F7C30u) {
        ctx->pc = 0x1F7C34u;
        goto label_1f7c34;
    }
    ctx->pc = 0x1F7C2Cu;
    {
        const bool branch_taken_0x1f7c2c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c2c) {
            ctx->pc = 0x1F7CC8u;
            goto label_1f7cc8;
        }
    }
    ctx->pc = 0x1F7C34u;
label_1f7c34:
    // 0x1f7c34: 0x10000024  b           . + 4 + (0x24 << 2)
label_1f7c38:
    if (ctx->pc == 0x1F7C38u) {
        ctx->pc = 0x1F7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C34u;
        // 0x1f7c38: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7C3Cu;
        goto label_1f7c3c;
    }
    ctx->pc = 0x1F7C34u;
    {
        const bool branch_taken_0x1f7c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C34u;
        // 0x1f7c38: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c34) {
            ctx->pc = 0x1F7CC8u;
            goto label_1f7cc8;
        }
    }
    ctx->pc = 0x1F7C3Cu;
label_1f7c3c:
    // 0x1f7c3c: 0x0  nop
    ctx->pc = 0x1f7c3cu;
    // NOP
label_1f7c40:
    // 0x1f7c40: 0x1543000a  bne         $t2, $v1, . + 4 + (0xA << 2)
label_1f7c44:
    if (ctx->pc == 0x1F7C44u) {
        ctx->pc = 0x1F7C48u;
        goto label_1f7c48;
    }
    ctx->pc = 0x1F7C40u;
    {
        const bool branch_taken_0x1f7c40 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7c40) {
            ctx->pc = 0x1F7C6Cu;
            goto label_1f7c6c;
        }
    }
    ctx->pc = 0x1F7C48u;
label_1f7c48:
    // 0x1f7c48: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1f7c4c:
    // 0x1f7c4c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f7c4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1f7c50:
    // 0x1f7c50: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
label_1f7c54:
    // 0x1f7c54: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1f7c58:
    // 0x1f7c58: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1f7c58u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
label_1f7c5c:
    // 0x1f7c5c: 0x1540001a  bnez        $t2, . + 4 + (0x1A << 2)
label_1f7c60:
    if (ctx->pc == 0x1F7C60u) {
        ctx->pc = 0x1F7C64u;
        goto label_1f7c64;
    }
    ctx->pc = 0x1F7C5Cu;
    {
        const bool branch_taken_0x1f7c5c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c5c) {
            ctx->pc = 0x1F7CC8u;
            goto label_1f7cc8;
        }
    }
    ctx->pc = 0x1F7C64u;
label_1f7c64:
    // 0x1f7c64: 0x10000018  b           . + 4 + (0x18 << 2)
label_1f7c68:
    if (ctx->pc == 0x1F7C68u) {
        ctx->pc = 0x1F7C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C64u;
        // 0x1f7c68: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7C6Cu;
        goto label_1f7c6c;
    }
    ctx->pc = 0x1F7C64u;
    {
        const bool branch_taken_0x1f7c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C64u;
        // 0x1f7c68: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c64) {
            ctx->pc = 0x1F7CC8u;
            goto label_1f7cc8;
        }
    }
    ctx->pc = 0x1F7C6Cu;
label_1f7c6c:
    // 0x1f7c6c: 0x0  nop
    ctx->pc = 0x1f7c6cu;
    // NOP
label_1f7c70:
    // 0x1f7c70: 0x154d000a  bne         $t2, $t5, . + 4 + (0xA << 2)
label_1f7c74:
    if (ctx->pc == 0x1F7C74u) {
        ctx->pc = 0x1F7C78u;
        goto label_1f7c78;
    }
    ctx->pc = 0x1F7C70u;
    {
        const bool branch_taken_0x1f7c70 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 13));
        if (branch_taken_0x1f7c70) {
            ctx->pc = 0x1F7C9Cu;
            goto label_1f7c9c;
        }
    }
    ctx->pc = 0x1F7C78u;
label_1f7c78:
    // 0x1f7c78: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c78u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1f7c7c:
    // 0x1f7c7c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f7c7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1f7c80:
    // 0x1f7c80: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c80u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
label_1f7c84:
    // 0x1f7c84: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c84u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1f7c88:
    // 0x1f7c88: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1f7c88u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
label_1f7c8c:
    // 0x1f7c8c: 0x1540000e  bnez        $t2, . + 4 + (0xE << 2)
label_1f7c90:
    if (ctx->pc == 0x1F7C90u) {
        ctx->pc = 0x1F7C94u;
        goto label_1f7c94;
    }
    ctx->pc = 0x1F7C8Cu;
    {
        const bool branch_taken_0x1f7c8c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c8c) {
            ctx->pc = 0x1F7CC8u;
            goto label_1f7cc8;
        }
    }
    ctx->pc = 0x1F7C94u;
label_1f7c94:
    // 0x1f7c94: 0x1000000c  b           . + 4 + (0xC << 2)
label_1f7c98:
    if (ctx->pc == 0x1F7C98u) {
        ctx->pc = 0x1F7C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C94u;
        // 0x1f7c98: 0xad2c0000  sw          $t4, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7C9Cu;
        goto label_1f7c9c;
    }
    ctx->pc = 0x1F7C94u;
    {
        const bool branch_taken_0x1f7c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C94u;
        // 0x1f7c98: 0xad2c0000  sw          $t4, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c94) {
            ctx->pc = 0x1F7CC8u;
            goto label_1f7cc8;
        }
    }
    ctx->pc = 0x1F7C9Cu;
label_1f7c9c:
    // 0x1f7c9c: 0x0  nop
    ctx->pc = 0x1f7c9cu;
    // NOP
label_1f7ca0:
    // 0x1f7ca0: 0x154b0009  bne         $t2, $t3, . + 4 + (0x9 << 2)
label_1f7ca4:
    if (ctx->pc == 0x1F7CA4u) {
        ctx->pc = 0x1F7CA8u;
        goto label_1f7ca8;
    }
    ctx->pc = 0x1F7CA0u;
    {
        const bool branch_taken_0x1f7ca0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 11));
        if (branch_taken_0x1f7ca0) {
            ctx->pc = 0x1F7CC8u;
            goto label_1f7cc8;
        }
    }
    ctx->pc = 0x1F7CA8u;
label_1f7ca8:
    // 0x1f7ca8: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7ca8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1f7cac:
    // 0x1f7cac: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f7cacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1f7cb0:
    // 0x1f7cb0: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1f7cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
label_1f7cb4:
    // 0x1f7cb4: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1f7cb8:
    // 0x1f7cb8: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1f7cb8u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
label_1f7cbc:
    // 0x1f7cbc: 0x15400002  bnez        $t2, . + 4 + (0x2 << 2)
label_1f7cc0:
    if (ctx->pc == 0x1F7CC0u) {
        ctx->pc = 0x1F7CC4u;
        goto label_1f7cc4;
    }
    ctx->pc = 0x1F7CBCu;
    {
        const bool branch_taken_0x1f7cbc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7cbc) {
            ctx->pc = 0x1F7CC8u;
            goto label_1f7cc8;
        }
    }
    ctx->pc = 0x1F7CC4u;
label_1f7cc4:
    // 0x1f7cc4: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x1f7cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
label_1f7cc8:
    // 0x1f7cc8: 0x8d2a0008  lw          $t2, 0x8($t1)
    ctx->pc = 0x1f7cc8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_1f7ccc:
    // 0x1f7ccc: 0x19400008  blez        $t2, . + 4 + (0x8 << 2)
label_1f7cd0:
    if (ctx->pc == 0x1F7CD0u) {
        ctx->pc = 0x1F7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CCCu;
        // 0x1f7cd0: 0x252e0008  addiu       $t6, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7CD4u;
        goto label_1f7cd4;
    }
    ctx->pc = 0x1F7CCCu;
    {
        const bool branch_taken_0x1f7ccc = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x1F7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CCCu;
        // 0x1f7cd0: 0x252e0008  addiu       $t6, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ccc) {
            ctx->pc = 0x1F7CF0u;
            goto label_1f7cf0;
        }
    }
    ctx->pc = 0x1F7CD4u;
label_1f7cd4:
    // 0x1f7cd4: 0x8d29000c  lw          $t1, 0xC($t1)
    ctx->pc = 0x1f7cd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_1f7cd8:
    // 0x1f7cd8: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
label_1f7cdc:
    if (ctx->pc == 0x1F7CDCu) {
        ctx->pc = 0x1F7CE0u;
        goto label_1f7ce0;
    }
    ctx->pc = 0x1F7CD8u;
    {
        const bool branch_taken_0x1f7cd8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7cd8) {
            ctx->pc = 0x1F7CF0u;
            goto label_1f7cf0;
        }
    }
    ctx->pc = 0x1F7CE0u;
label_1f7ce0:
    // 0x1f7ce0: 0x2549fff8  addiu       $t1, $t2, -0x8
    ctx->pc = 0x1f7ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
label_1f7ce4:
    // 0x1f7ce4: 0x9082a  slt         $at, $zero, $t1
    ctx->pc = 0x1f7ce4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1f7ce8:
    // 0x1f7ce8: 0x1480a  movz        $t1, $zero, $at
    ctx->pc = 0x1f7ce8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_1f7cec:
    // 0x1f7cec: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x1f7cecu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
label_1f7cf0:
    // 0x1f7cf0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f7cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1f7cf4:
    // 0x1f7cf4: 0x28e90003  slti        $t1, $a3, 0x3
    ctx->pc = 0x1f7cf4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
label_1f7cf8:
    // 0x1f7cf8: 0x1520ffc3  bnez        $t1, . + 4 + (-0x3D << 2)
label_1f7cfc:
    if (ctx->pc == 0x1F7CFCu) {
        ctx->pc = 0x1F7CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CF8u;
        // 0x1f7cfc: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7D00u;
        goto label_1f7d00;
    }
    ctx->pc = 0x1F7CF8u;
    {
        const bool branch_taken_0x1f7cf8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CF8u;
        // 0x1f7cfc: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cf8) {
            ctx->pc = 0x1F7C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7c08;
        }
    }
    ctx->pc = 0x1F7D00u;
label_1f7d00:
    // 0x1f7d00: 0x3e00008  jr          $ra
label_1f7d04:
    if (ctx->pc == 0x1F7D04u) {
        ctx->pc = 0x1F7D08u;
        goto label_1f7d08;
    }
    ctx->pc = 0x1F7D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7D08u;
label_1f7d08:
    // 0x1f7d08: 0x0  nop
    ctx->pc = 0x1f7d08u;
    // NOP
label_1f7d0c:
    // 0x1f7d0c: 0x0  nop
    ctx->pc = 0x1f7d0cu;
    // NOP
label_1f7d10:
    // 0x1f7d10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f7d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1f7d14:
    // 0x1f7d14: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1f7d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_1f7d18:
    // 0x1f7d18: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f7d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1f7d1c:
    // 0x1f7d1c: 0x34643ffc  ori         $a0, $v1, 0x3FFC
    ctx->pc = 0x1f7d1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_1f7d20:
    // 0x1f7d20: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f7d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1f7d24:
    // 0x1f7d24: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1f7d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1f7d28:
    // 0x1f7d28: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f7d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1f7d2c:
    // 0x1f7d2c: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1f7d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_1f7d30:
    // 0x1f7d30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f7d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f7d34:
    // 0x1f7d34: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1f7d34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7d38:
    // 0x1f7d38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f7d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f7d3c:
    // 0x1f7d3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f7d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f7d40:
    // 0x1f7d40: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f7d40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7d44:
    // 0x1f7d44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f7d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f7d48:
    // 0x1f7d48: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f7d48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7d4c:
    // 0x1f7d4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f7d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f7d50:
    // 0x1f7d50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f7d50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7d54:
    // 0x1f7d54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f7d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f7d58:
    // 0x1f7d58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f7d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f7d5c:
    // 0x1f7d5c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1f7d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f7d60:
    // 0x1f7d60: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1f7d60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1f7d64:
    // 0x1f7d64: 0x64f021  addu        $fp, $v1, $a0
    ctx->pc = 0x1f7d64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f7d68:
    // 0x1f7d68: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x1f7d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_1f7d6c:
    // 0x1f7d6c: 0x24636f10  addiu       $v1, $v1, 0x6F10
    ctx->pc = 0x1f7d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28432));
label_1f7d70:
    // 0x1f7d70: 0x73b021  addu        $s6, $v1, $s3
    ctx->pc = 0x1f7d70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1f7d74:
    // 0x1f7d74: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1f7d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1f7d78:
    // 0x1f7d78: 0x106000ae  beqz        $v1, . + 4 + (0xAE << 2)
label_1f7d7c:
    if (ctx->pc == 0x1F7D7Cu) {
        ctx->pc = 0x1F7D80u;
        goto label_1f7d80;
    }
    ctx->pc = 0x1F7D78u;
    {
        const bool branch_taken_0x1f7d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7d78) {
            ctx->pc = 0x1F8034u;
            goto label_1f8034;
        }
    }
    ctx->pc = 0x1F7D80u;
label_1f7d80:
    // 0x1f7d80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7d84:
    // 0x1f7d84: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_1f7d88:
    if (ctx->pc == 0x1F7D88u) {
        ctx->pc = 0x1F7D8Cu;
        goto label_1f7d8c;
    }
    ctx->pc = 0x1F7D84u;
    {
        const bool branch_taken_0x1f7d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7d84) {
            ctx->pc = 0x1F7DD0u;
            goto label_1f7dd0;
        }
    }
    ctx->pc = 0x1F7D8Cu;
label_1f7d8c:
    // 0x1f7d8c: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x1f7d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1f7d90:
    // 0x1f7d90: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1f7d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1f7d94:
    // 0x1f7d94: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1f7d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1f7d98:
    // 0x1f7d98: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1f7d98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1f7d9c:
    // 0x1f7d9c: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x1f7d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f7da0:
    // 0x1f7da0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1f7da0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f7da4:
    // 0x1f7da4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1f7da4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f7da8:
    // 0x1f7da8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1f7da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1f7dac:
    // 0x1f7dac: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x1f7dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f7db0:
    // 0x1f7db0: 0x0  nop
    ctx->pc = 0x1f7db0u;
    // NOP
label_1f7db4:
    // 0x1f7db4: 0x0  nop
    ctx->pc = 0x1f7db4u;
    // NOP
label_1f7db8:
    // 0x1f7db8: 0x1010  mfhi        $v0
    ctx->pc = 0x1f7db8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f7dbc:
    // 0x1f7dbc: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1f7dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1f7dc0:
    // 0x1f7dc0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1f7dc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1f7dc4:
    // 0x1f7dc4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f7dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f7dc8:
    // 0x1f7dc8: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1f7dcc:
    if (ctx->pc == 0x1F7DCCu) {
        ctx->pc = 0x1F7DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DC8u;
        // 0x1f7dcc: 0x2450ff58  addiu       $s0, $v0, -0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7DD0u;
        goto label_1f7dd0;
    }
    ctx->pc = 0x1F7DC8u;
    {
        const bool branch_taken_0x1f7dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DC8u;
        // 0x1f7dcc: 0x2450ff58  addiu       $s0, $v0, -0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7dc8) {
            ctx->pc = 0x1F7EC4u;
            goto label_1f7ec4;
        }
    }
    ctx->pc = 0x1F7DD0u;
label_1f7dd0:
    // 0x1f7dd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f7dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f7dd4:
    // 0x1f7dd4: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_1f7dd8:
    if (ctx->pc == 0x1F7DD8u) {
        ctx->pc = 0x1F7DDCu;
        goto label_1f7ddc;
    }
    ctx->pc = 0x1F7DD4u;
    {
        const bool branch_taken_0x1f7dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7dd4) {
            ctx->pc = 0x1F7E20u;
            goto label_1f7e20;
        }
    }
    ctx->pc = 0x1F7DDCu;
label_1f7ddc:
    // 0x1f7ddc: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x1f7ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1f7de0:
    // 0x1f7de0: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1f7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1f7de4:
    // 0x1f7de4: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1f7de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1f7de8:
    // 0x1f7de8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1f7de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1f7dec:
    // 0x1f7dec: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x1f7decu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f7df0:
    // 0x1f7df0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1f7df0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f7df4:
    // 0x1f7df4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1f7df4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f7df8:
    // 0x1f7df8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1f7df8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1f7dfc:
    // 0x1f7dfc: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x1f7dfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f7e00:
    // 0x1f7e00: 0x0  nop
    ctx->pc = 0x1f7e00u;
    // NOP
label_1f7e04:
    // 0x1f7e04: 0x0  nop
    ctx->pc = 0x1f7e04u;
    // NOP
label_1f7e08:
    // 0x1f7e08: 0x1010  mfhi        $v0
    ctx->pc = 0x1f7e08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f7e0c:
    // 0x1f7e0c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1f7e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1f7e10:
    // 0x1f7e10: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1f7e10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1f7e14:
    // 0x1f7e14: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f7e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f7e18:
    // 0x1f7e18: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1f7e1c:
    if (ctx->pc == 0x1F7E1Cu) {
        ctx->pc = 0x1F7E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E18u;
        // 0x1f7e1c: 0x28023  negu        $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7E20u;
        goto label_1f7e20;
    }
    ctx->pc = 0x1F7E18u;
    {
        const bool branch_taken_0x1f7e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E18u;
        // 0x1f7e1c: 0x28023  negu        $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e18) {
            ctx->pc = 0x1F7EC4u;
            goto label_1f7ec4;
        }
    }
    ctx->pc = 0x1F7E20u;
label_1f7e20:
    // 0x1f7e20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f7e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f7e24:
    // 0x1f7e24: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_1f7e28:
    if (ctx->pc == 0x1F7E28u) {
        ctx->pc = 0x1F7E2Cu;
        goto label_1f7e2c;
    }
    ctx->pc = 0x1F7E24u;
    {
        const bool branch_taken_0x1f7e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7e24) {
            ctx->pc = 0x1F7E5Cu;
            goto label_1f7e5c;
        }
    }
    ctx->pc = 0x1F7E2Cu;
label_1f7e2c:
    // 0x1f7e2c: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x1f7e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1f7e30:
    // 0x1f7e30: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1f7e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1f7e34:
    // 0x1f7e34: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1f7e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1f7e38:
    // 0x1f7e38: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1f7e38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1f7e3c:
    // 0x1f7e3c: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x1f7e3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f7e40:
    // 0x1f7e40: 0x0  nop
    ctx->pc = 0x1f7e40u;
    // NOP
label_1f7e44:
    // 0x1f7e44: 0x0  nop
    ctx->pc = 0x1f7e44u;
    // NOP
label_1f7e48:
    // 0x1f7e48: 0x1010  mfhi        $v0
    ctx->pc = 0x1f7e48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f7e4c:
    // 0x1f7e4c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1f7e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1f7e50:
    // 0x1f7e50: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1f7e50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1f7e54:
    // 0x1f7e54: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1f7e58:
    if (ctx->pc == 0x1F7E58u) {
        ctx->pc = 0x1F7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E54u;
        // 0x1f7e58: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7E5Cu;
        goto label_1f7e5c;
    }
    ctx->pc = 0x1F7E54u;
    {
        const bool branch_taken_0x1f7e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E54u;
        // 0x1f7e58: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e54) {
            ctx->pc = 0x1F7EC4u;
            goto label_1f7ec4;
        }
    }
    ctx->pc = 0x1F7E5Cu;
label_1f7e5c:
    // 0x1f7e5c: 0x0  nop
    ctx->pc = 0x1f7e5cu;
    // NOP
label_1f7e60:
    // 0x1f7e60: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f7e64:
    // 0x1f7e64: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_1f7e68:
    if (ctx->pc == 0x1F7E68u) {
        ctx->pc = 0x1F7E6Cu;
        goto label_1f7e6c;
    }
    ctx->pc = 0x1F7E64u;
    {
        const bool branch_taken_0x1f7e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7e64) {
            ctx->pc = 0x1F7EA4u;
            goto label_1f7ea4;
        }
    }
    ctx->pc = 0x1F7E6Cu;
label_1f7e6c:
    // 0x1f7e6c: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x1f7e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1f7e70:
    // 0x1f7e70: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1f7e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1f7e74:
    // 0x1f7e74: 0x3444aaab  ori         $a0, $v0, 0xAAAB
    ctx->pc = 0x1f7e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1f7e78:
    // 0x1f7e78: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1f7e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1f7e7c:
    // 0x1f7e7c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1f7e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1f7e80:
    // 0x1f7e80: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x1f7e80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f7e84:
    // 0x1f7e84: 0x0  nop
    ctx->pc = 0x1f7e84u;
    // NOP
label_1f7e88:
    // 0x1f7e88: 0x0  nop
    ctx->pc = 0x1f7e88u;
    // NOP
label_1f7e8c:
    // 0x1f7e8c: 0x2010  mfhi        $a0
    ctx->pc = 0x1f7e8cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1f7e90:
    // 0x1f7e90: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1f7e90u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1f7e94:
    // 0x1f7e94: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x1f7e94u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_1f7e98:
    // 0x1f7e98: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f7e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f7e9c:
    // 0x1f7e9c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1f7ea0:
    if (ctx->pc == 0x1F7EA0u) {
        ctx->pc = 0x1F7EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E9Cu;
        // 0x1f7ea0: 0x448023  subu        $s0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7EA4u;
        goto label_1f7ea4;
    }
    ctx->pc = 0x1F7E9Cu;
    {
        const bool branch_taken_0x1f7e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E9Cu;
        // 0x1f7ea0: 0x448023  subu        $s0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e9c) {
            ctx->pc = 0x1F7EC4u;
            goto label_1f7ec4;
        }
    }
    ctx->pc = 0x1F7EA4u;
label_1f7ea4:
    // 0x1f7ea4: 0x0  nop
    ctx->pc = 0x1f7ea4u;
    // NOP
label_1f7ea8:
    // 0x1f7ea8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f7ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f7eac:
    // 0x1f7eac: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1f7eb0:
    if (ctx->pc == 0x1F7EB0u) {
        ctx->pc = 0x1F7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EACu;
        // 0x1f7eb0: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7EB4u;
        goto label_1f7eb4;
    }
    ctx->pc = 0x1F7EACu;
    {
        const bool branch_taken_0x1f7eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EACu;
        // 0x1f7eb0: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7eac) {
            ctx->pc = 0x1F7EBCu;
            goto label_1f7ebc;
        }
    }
    ctx->pc = 0x1F7EB4u;
label_1f7eb4:
    // 0x1f7eb4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f7eb8:
    if (ctx->pc == 0x1F7EB8u) {
        ctx->pc = 0x1F7EBCu;
        goto label_1f7ebc;
    }
    ctx->pc = 0x1F7EB4u;
    {
        const bool branch_taken_0x1f7eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7eb4) {
            ctx->pc = 0x1F7EC4u;
            goto label_1f7ec4;
        }
    }
    ctx->pc = 0x1F7EBCu;
label_1f7ebc:
    // 0x1f7ebc: 0x0  nop
    ctx->pc = 0x1f7ebcu;
    // NOP
label_1f7ec0:
    // 0x1f7ec0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f7ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7ec4:
    // 0x1f7ec4: 0x0  nop
    ctx->pc = 0x1f7ec4u;
    // NOP
label_1f7ec8:
    // 0x1f7ec8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f7ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f7ecc:
    // 0x1f7ecc: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_1f7ed0:
    if (ctx->pc == 0x1F7ED0u) {
        ctx->pc = 0x1F7ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7ECCu;
        // 0x1f7ed0: 0x26910050  addiu       $s1, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7ED4u;
        goto label_1f7ed4;
    }
    ctx->pc = 0x1F7ECCu;
    {
        const bool branch_taken_0x1f7ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7ECCu;
        // 0x1f7ed0: 0x26910050  addiu       $s1, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ecc) {
            ctx->pc = 0x1F7F0Cu;
            goto label_1f7f0c;
        }
    }
    ctx->pc = 0x1F7ED4u;
label_1f7ed4:
    // 0x1f7ed4: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x1f7ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1f7ed8:
    // 0x1f7ed8: 0x2624ffc0  addiu       $a0, $s1, -0x40
    ctx->pc = 0x1f7ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967232));
label_1f7edc:
    // 0x1f7edc: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1f7edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1f7ee0:
    // 0x1f7ee0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1f7ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1f7ee4:
    // 0x1f7ee4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1f7ee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1f7ee8:
    // 0x1f7ee8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1f7ee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f7eec:
    // 0x1f7eec: 0x0  nop
    ctx->pc = 0x1f7eecu;
    // NOP
label_1f7ef0:
    // 0x1f7ef0: 0x0  nop
    ctx->pc = 0x1f7ef0u;
    // NOP
label_1f7ef4:
    // 0x1f7ef4: 0x1010  mfhi        $v0
    ctx->pc = 0x1f7ef4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f7ef8:
    // 0x1f7ef8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1f7ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1f7efc:
    // 0x1f7efc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1f7efcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1f7f00:
    // 0x1f7f00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f7f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f7f04:
    // 0x1f7f04: 0x10000018  b           . + 4 + (0x18 << 2)
label_1f7f08:
    if (ctx->pc == 0x1F7F08u) {
        ctx->pc = 0x1F7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F04u;
        // 0x1f7f08: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7F0Cu;
        goto label_1f7f0c;
    }
    ctx->pc = 0x1F7F04u;
    {
        const bool branch_taken_0x1f7f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F04u;
        // 0x1f7f08: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f04) {
            ctx->pc = 0x1F7F68u;
            goto label_1f7f68;
        }
    }
    ctx->pc = 0x1F7F0Cu;
label_1f7f0c:
    // 0x1f7f0c: 0x0  nop
    ctx->pc = 0x1f7f0cu;
    // NOP
label_1f7f10:
    // 0x1f7f10: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f7f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f7f14:
    // 0x1f7f14: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_1f7f18:
    if (ctx->pc == 0x1F7F18u) {
        ctx->pc = 0x1F7F1Cu;
        goto label_1f7f1c;
    }
    ctx->pc = 0x1F7F14u;
    {
        const bool branch_taken_0x1f7f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7f14) {
            ctx->pc = 0x1F7F54u;
            goto label_1f7f54;
        }
    }
    ctx->pc = 0x1F7F1Cu;
label_1f7f1c:
    // 0x1f7f1c: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x1f7f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1f7f20:
    // 0x1f7f20: 0x2624ffc0  addiu       $a0, $s1, -0x40
    ctx->pc = 0x1f7f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967232));
label_1f7f24:
    // 0x1f7f24: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1f7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1f7f28:
    // 0x1f7f28: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1f7f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1f7f2c:
    // 0x1f7f2c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1f7f2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1f7f30:
    // 0x1f7f30: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1f7f30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f7f34:
    // 0x1f7f34: 0x0  nop
    ctx->pc = 0x1f7f34u;
    // NOP
label_1f7f38:
    // 0x1f7f38: 0x0  nop
    ctx->pc = 0x1f7f38u;
    // NOP
label_1f7f3c:
    // 0x1f7f3c: 0x1010  mfhi        $v0
    ctx->pc = 0x1f7f3cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f7f40:
    // 0x1f7f40: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1f7f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1f7f44:
    // 0x1f7f44: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1f7f44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1f7f48:
    // 0x1f7f48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f7f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f7f4c:
    // 0x1f7f4c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f7f50:
    if (ctx->pc == 0x1F7F50u) {
        ctx->pc = 0x1F7F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F4Cu;
        // 0x1f7f50: 0x24510040  addiu       $s1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7F54u;
        goto label_1f7f54;
    }
    ctx->pc = 0x1F7F4Cu;
    {
        const bool branch_taken_0x1f7f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F4Cu;
        // 0x1f7f50: 0x24510040  addiu       $s1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f4c) {
            ctx->pc = 0x1F7F68u;
            goto label_1f7f68;
        }
    }
    ctx->pc = 0x1F7F54u;
label_1f7f54:
    // 0x1f7f54: 0x0  nop
    ctx->pc = 0x1f7f54u;
    // NOP
label_1f7f58:
    // 0x1f7f58: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f7f5c:
    // 0x1f7f5c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1f7f60:
    if (ctx->pc == 0x1F7F60u) {
        ctx->pc = 0x1F7F64u;
        goto label_1f7f64;
    }
    ctx->pc = 0x1F7F5Cu;
    {
        const bool branch_taken_0x1f7f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7f5c) {
            ctx->pc = 0x1F7F68u;
            goto label_1f7f68;
        }
    }
    ctx->pc = 0x1F7F64u;
label_1f7f64:
    // 0x1f7f64: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x1f7f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f7f68:
    // 0x1f7f68: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1f7f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1f7f6c:
    // 0x1f7f6c: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x1f7f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1f7f70:
    // 0x1f7f70: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x1f7f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_1f7f74:
    // 0x1f7f74: 0x24426f40  addiu       $v0, $v0, 0x6F40
    ctx->pc = 0x1f7f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28480));
label_1f7f78:
    // 0x1f7f78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f7f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7f7c:
    // 0x1f7f7c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1f7f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1f7f80:
    // 0x1f7f80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f7f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f7f84:
    // 0x1f7f84: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f7f88:
    // 0x1f7f88: 0x240700a8  addiu       $a3, $zero, 0xA8
    ctx->pc = 0x1f7f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1f7f8c:
    // 0x1f7f8c: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x1f7f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f7f90:
    // 0x1f7f90: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1f7f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1f7f94:
    // 0x1f7f94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f7f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f7f98:
    // 0x1f7f98: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f7f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f7f9c:
    // 0x1f7f9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f7f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f7fa0:
    // 0x1f7fa0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f7fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f7fa4:
    // 0x1f7fa4: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1f7fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f7fa8:
    // 0x1f7fa8: 0xc07c25c  jal         func_1F0970
label_1f7fac:
    if (ctx->pc == 0x1F7FACu) {
        ctx->pc = 0x1F7FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FA8u;
        // 0x1f7fac: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7FB0u;
        goto label_1f7fb0;
    }
    ctx->pc = 0x1F7FA8u;
    SET_GPR_U32(ctx, 31, 0x1F7FB0u);
    ctx->pc = 0x1F7FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7FA8u;
    // 0x1f7fac: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0970u;
    { ctx->pc = 0x1f0970; return; }
    ctx->pc = 0x1F7FB0u;
label_1f7fb0:
    // 0x1f7fb0: 0x92ca0008  lbu         $t2, 0x8($s6)
    ctx->pc = 0x1f7fb0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 8)));
label_1f7fb4:
    // 0x1f7fb4: 0x264405b0  addiu       $a0, $s2, 0x5B0
    ctx->pc = 0x1f7fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1456));
label_1f7fb8:
    // 0x1f7fb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f7fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7fbc:
    // 0x1f7fbc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f7fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f7fc0:
    // 0x1f7fc0: 0x240700a8  addiu       $a3, $zero, 0xA8
    ctx->pc = 0x1f7fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1f7fc4:
    // 0x1f7fc4: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x1f7fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f7fc8:
    // 0x1f7fc8: 0xc07c0d0  jal         func_1F0340
label_1f7fcc:
    if (ctx->pc == 0x1F7FCCu) {
        ctx->pc = 0x1F7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FC8u;
        // 0x1f7fcc: 0x2409000c  addiu       $t1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7FD0u;
        goto label_1f7fd0;
    }
    ctx->pc = 0x1F7FC8u;
    SET_GPR_U32(ctx, 31, 0x1F7FD0u);
    ctx->pc = 0x1F7FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7FC8u;
    // 0x1f7fcc: 0x2409000c  addiu       $t1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0340u;
    { ctx->pc = 0x1f0340; return; }
    ctx->pc = 0x1F7FD0u;
label_1f7fd0:
    // 0x1f7fd0: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x1f7fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_1f7fd4:
    // 0x1f7fd4: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1f7fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1f7fd8:
    // 0x1f7fd8: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1f7fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1f7fdc:
    // 0x1f7fdc: 0x24447900  addiu       $a0, $v0, 0x7900
    ctx->pc = 0x1f7fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1f7fe0:
    // 0x1f7fe0: 0x24656c00  addiu       $a1, $v1, 0x6C00
    ctx->pc = 0x1f7fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1f7fe4:
    // 0x1f7fe4: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x1f7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_1f7fe8:
    // 0x1f7fe8: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x1f7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_1f7fec:
    // 0x1f7fec: 0xa64508f0  sh          $a1, 0x8F0($s2)
    ctx->pc = 0x1f7fecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2288), (uint16_t)GPR_U32(ctx, 5));
label_1f7ff0:
    // 0x1f7ff0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f7ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f7ff4:
    // 0x1f7ff4: 0xa64408f2  sh          $a0, 0x8F2($s2)
    ctx->pc = 0x1f7ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2290), (uint16_t)GPR_U32(ctx, 4));
label_1f7ff8:
    // 0x1f7ff8: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1f7ff8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f7ffc:
    // 0x1f7ffc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f7ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1f8000:
    // 0x1f8000: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1f8000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1f8004:
    // 0x1f8004: 0xae4708f4  sw          $a3, 0x8F4($s2)
    ctx->pc = 0x1f8004u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2292), GPR_U32(ctx, 7));
label_1f8008:
    // 0x1f8008: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1f8008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1f800c:
    // 0x1f800c: 0xa6430900  sh          $v1, 0x900($s2)
    ctx->pc = 0x1f800cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2304), (uint16_t)GPR_U32(ctx, 3));
label_1f8010:
    // 0x1f8010: 0xa6420902  sh          $v0, 0x902($s2)
    ctx->pc = 0x1f8010u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2306), (uint16_t)GPR_U32(ctx, 2));
label_1f8014:
    // 0x1f8014: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1f8014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f8018:
    // 0x1f8018: 0xae470904  sw          $a3, 0x904($s2)
    ctx->pc = 0x1f8018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2308), GPR_U32(ctx, 7));
label_1f801c:
    // 0x1f801c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f801cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f8020:
    // 0x1f8020: 0x24060091  addiu       $a2, $zero, 0x91
    ctx->pc = 0x1f8020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
label_1f8024:
    // 0x1f8024: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f8024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8028:
    // 0x1f8028: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f8028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f802c:
    // 0x1f802c: 0xc066c72  jal         func_19B1C8
label_1f8030:
    if (ctx->pc == 0x1F8030u) {
        ctx->pc = 0x1F8030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F802Cu;
        // 0x1f8030: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8034u;
        goto label_1f8034;
    }
    ctx->pc = 0x1F802Cu;
    SET_GPR_U32(ctx, 31, 0x1F8034u);
    ctx->pc = 0x1F8030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F802Cu;
    // 0x1f8030: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1F802Cu, 0x1F8034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8034u;
label_1f8034:
    // 0x1f8034: 0x0  nop
    ctx->pc = 0x1f8034u;
    // NOP
label_1f8038:
    // 0x1f8038: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1f8038u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1f803c:
    // 0x1f803c: 0x2ae30003  slti        $v1, $s7, 0x3
    ctx->pc = 0x1f803cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)3) ? 1 : 0);
label_1f8040:
    // 0x1f8040: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1f8040u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1f8044:
    // 0x1f8044: 0x26940024  addiu       $s4, $s4, 0x24
    ctx->pc = 0x1f8044u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
label_1f8048:
    // 0x1f8048: 0x1460ff47  bnez        $v1, . + 4 + (-0xB9 << 2)
label_1f804c:
    if (ctx->pc == 0x1F804Cu) {
        ctx->pc = 0x1F804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8048u;
        // 0x1f804c: 0x26b51220  addiu       $s5, $s5, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8050u;
        goto label_1f8050;
    }
    ctx->pc = 0x1F8048u;
    {
        const bool branch_taken_0x1f8048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8048u;
        // 0x1f804c: 0x26b51220  addiu       $s5, $s5, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8048) {
            ctx->pc = 0x1F7D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7d68;
        }
    }
    ctx->pc = 0x1F8050u;
label_1f8050:
    // 0x1f8050: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f8050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1f8054:
    // 0x1f8054: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1f8054u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f8058:
    // 0x1f8058: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f8058u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f805c:
    // 0x1f805c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f805cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f8060:
    // 0x1f8060: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f8060u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f8064:
    // 0x1f8064: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f8064u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f8068:
    // 0x1f8068: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f8068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f806c:
    // 0x1f806c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f806cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f8070:
    // 0x1f8070: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f8070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f8074:
    // 0x1f8074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f8074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8078:
    // 0x1f8078: 0x3e00008  jr          $ra
label_1f807c:
    if (ctx->pc == 0x1F807Cu) {
        ctx->pc = 0x1F807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8078u;
        // 0x1f807c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8080u;
        goto label_1f8080;
    }
    ctx->pc = 0x1F8078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8078u;
        // 0x1f807c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8080u;
label_1f8080:
    // 0x1f8080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f8080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f8084:
    // 0x1f8084: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f8084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1f8088:
    // 0x1f8088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f8088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f808c:
    // 0x1f808c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f808cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f8090:
    // 0x1f8090: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f8090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f8094:
    // 0x1f8094: 0xc0590dc  jal         func_164370
label_1f8098:
    if (ctx->pc == 0x1F8098u) {
        ctx->pc = 0x1F8098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8094u;
        // 0x1f8098: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F809Cu;
        goto label_1f809c;
    }
    ctx->pc = 0x1F8094u;
    SET_GPR_U32(ctx, 31, 0x1F809Cu);
    ctx->pc = 0x1F8098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8094u;
    // 0x1f8098: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1F8094u, 0x1F809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F809Cu;
label_1f809c:
    // 0x1f809c: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_1f80a0:
    if (ctx->pc == 0x1F80A0u) {
        ctx->pc = 0x1F80A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F809Cu;
        // 0x1f80a0: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F80A4u;
        goto label_1f80a4;
    }
    ctx->pc = 0x1F809Cu;
    {
        const bool branch_taken_0x1f809c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F80A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F809Cu;
        // 0x1f80a0: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f809c) {
            ctx->pc = 0x1F81C8u;
            goto label_1f81c8;
        }
    }
    ctx->pc = 0x1F80A4u;
label_1f80a4:
    // 0x1f80a4: 0xa0510010  sb          $s1, 0x10($v0)
    ctx->pc = 0x1f80a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 17));
label_1f80a8:
    // 0x1f80a8: 0x246381e0  addiu       $v1, $v1, -0x7E20
    ctx->pc = 0x1f80a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935008));
label_1f80ac:
    // 0x1f80ac: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1f80acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1f80b0:
    // 0x1f80b0: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x1f80b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_1f80b4:
    // 0x1f80b4: 0x115880  sll         $t3, $s1, 2
    ctx->pc = 0x1f80b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1f80b8:
    // 0x1f80b8: 0x90460010  lbu         $a2, 0x10($v0)
    ctx->pc = 0x1f80b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_1f80bc:
    // 0x1f80bc: 0x27838238  addiu       $v1, $gp, -0x7DC8
    ctx->pc = 0x1f80bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935096));
label_1f80c0:
    // 0x1f80c0: 0x27828240  addiu       $v0, $gp, -0x7DC0
    ctx->pc = 0x1f80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935104));
label_1f80c4:
    // 0x1f80c4: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x1f80c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1f80c8:
    // 0x1f80c8: 0x4b4821  addu        $t1, $v0, $t3
    ctx->pc = 0x1f80c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1f80cc:
    // 0x1f80cc: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1f80ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1f80d0:
    // 0x1f80d0: 0x27828248  addiu       $v0, $gp, -0x7DB8
    ctx->pc = 0x1f80d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935112));
label_1f80d4:
    // 0x1f80d4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f80d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1f80d8:
    // 0x1f80d8: 0x4b4021  addu        $t0, $v0, $t3
    ctx->pc = 0x1f80d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1f80dc:
    // 0x1f80dc: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1f80dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_1f80e0:
    // 0x1f80e0: 0x27828250  addiu       $v0, $gp, -0x7DB0
    ctx->pc = 0x1f80e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935120));
label_1f80e4:
    // 0x1f80e4: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1f80e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_1f80e8:
    // 0x1f80e8: 0x4b2821  addu        $a1, $v0, $t3
    ctx->pc = 0x1f80e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1f80ec:
    // 0x1f80ec: 0x27828258  addiu       $v0, $gp, -0x7DA8
    ctx->pc = 0x1f80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935128));
label_1f80f0:
    // 0x1f80f0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1f80f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1f80f4:
    // 0x1f80f4: 0x4b3821  addu        $a3, $v0, $t3
    ctx->pc = 0x1f80f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1f80f8:
    // 0x1f80f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f80f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f80fc:
    // 0x1f80fc: 0x27828260  addiu       $v0, $gp, -0x7DA0
    ctx->pc = 0x1f80fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935136));
label_1f8100:
    // 0x1f8100: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1f8100u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_1f8104:
    // 0x1f8104: 0x4b3021  addu        $a2, $v0, $t3
    ctx->pc = 0x1f8104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1f8108:
    // 0x1f8108: 0x27828268  addiu       $v0, $gp, -0x7D98
    ctx->pc = 0x1f8108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935144));
label_1f810c:
    // 0x1f810c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1f810cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1f8110:
    // 0x1f8110: 0x4b1821  addu        $v1, $v0, $t3
    ctx->pc = 0x1f8110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1f8114:
    // 0x1f8114: 0x27828270  addiu       $v0, $gp, -0x7D90
    ctx->pc = 0x1f8114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935152));
label_1f8118:
    // 0x1f8118: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f8118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1f811c:
    // 0x1f811c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1f811cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1f8120:
    // 0x1f8120: 0xc0552d8  jal         func_154B60
label_1f8124:
    if (ctx->pc == 0x1F8124u) {
        ctx->pc = 0x1F8124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8120u;
        // 0x1f8124: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8128u;
        goto label_1f8128;
    }
    ctx->pc = 0x1F8120u;
    SET_GPR_U32(ctx, 31, 0x1F8128u);
    ctx->pc = 0x1F8124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8120u;
    // 0x1f8124: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B60u, 0x1F8120u, 0x1F8128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8128u;
label_1f8128:
    // 0x1f8128: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_1f812c:
    if (ctx->pc == 0x1F812Cu) {
        ctx->pc = 0x1F812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8128u;
        // 0x1f812c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8130u;
        goto label_1f8130;
    }
    ctx->pc = 0x1F8128u;
    {
        const bool branch_taken_0x1f8128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8128u;
        // 0x1f812c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8128) {
            ctx->pc = 0x1F81ACu;
            goto label_1f81ac;
        }
    }
    ctx->pc = 0x1F8130u;
label_1f8130:
    // 0x1f8130: 0xc0590dc  jal         func_164370
label_1f8134:
    if (ctx->pc == 0x1F8134u) {
        ctx->pc = 0x1F8134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8130u;
        // 0x1f8134: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8138u;
        goto label_1f8138;
    }
    ctx->pc = 0x1F8130u;
    SET_GPR_U32(ctx, 31, 0x1F8138u);
    ctx->pc = 0x1F8134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8130u;
    // 0x1f8134: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1F8130u, 0x1F8138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8138u;
label_1f8138:
    // 0x1f8138: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f813c:
    // 0x1f813c: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_1f8140:
    if (ctx->pc == 0x1F8140u) {
        ctx->pc = 0x1F8144u;
        goto label_1f8144;
    }
    ctx->pc = 0x1F813Cu;
    {
        const bool branch_taken_0x1f813c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f813c) {
            ctx->pc = 0x1F81A8u;
            goto label_1f81a8;
        }
    }
    ctx->pc = 0x1F8144u;
label_1f8144:
    // 0x1f8144: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x1f8144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_1f8148:
    // 0x1f8148: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f8148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1f814c:
    // 0x1f814c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1f814cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_1f8150:
    // 0x1f8150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8154:
    // 0x1f8154: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1f8154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_1f8158:
    // 0x1f8158: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1f8158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f815c:
    // 0x1f815c: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1f815cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_1f8160:
    // 0x1f8160: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x1f8160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_1f8164:
    // 0x1f8164: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f8164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f8168:
    // 0x1f8168: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f816c:
    // 0x1f816c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1f816cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f8170:
    // 0x1f8170: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1f8170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
label_1f8174:
    // 0x1f8174: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f8174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f8178:
    // 0x1f8178: 0xc0718c4  jal         func_1C6310
label_1f817c:
    if (ctx->pc == 0x1F817Cu) {
        ctx->pc = 0x1F817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8178u;
        // 0x1f817c: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8180u;
        goto label_1f8180;
    }
    ctx->pc = 0x1F8178u;
    SET_GPR_U32(ctx, 31, 0x1F8180u);
    ctx->pc = 0x1F817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8178u;
    // 0x1f817c: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6310u;
    { ctx->pc = 0x1c6310; return; }
    ctx->pc = 0x1F8180u;
label_1f8180:
    // 0x1f8180: 0xa20002e1  sb          $zero, 0x2E1($s0)
    ctx->pc = 0x1f8180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 737), (uint8_t)GPR_U32(ctx, 0));
label_1f8184:
    // 0x1f8184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8188:
    // 0x1f8188: 0xa20202e4  sb          $v0, 0x2E4($s0)
    ctx->pc = 0x1f8188u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 740), (uint8_t)GPR_U32(ctx, 2));
label_1f818c:
    // 0x1f818c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1f818cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1f8190:
    // 0x1f8190: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1f8190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
label_1f8194:
    // 0x1f8194: 0x2463ca30  addiu       $v1, $v1, -0x35D0
    ctx->pc = 0x1f8194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953520));
label_1f8198:
    // 0x1f8198: 0xae000258  sw          $zero, 0x258($s0)
    ctx->pc = 0x1f8198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
label_1f819c:
    // 0x1f819c: 0x24426600  addiu       $v0, $v0, 0x6600
    ctx->pc = 0x1f819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26112));
label_1f81a0:
    // 0x1f81a0: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x1f81a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
label_1f81a4:
    // 0x1f81a4: 0xae020368  sw          $v0, 0x368($s0)
    ctx->pc = 0x1f81a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
label_1f81a8:
    // 0x1f81a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f81a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f81ac:
    // 0x1f81ac: 0xc04f198  jal         func_13C660
label_1f81b0:
    if (ctx->pc == 0x1F81B0u) {
        ctx->pc = 0x1F81B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81ACu;
        // 0x1f81b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F81B4u;
        goto label_1f81b4;
    }
    ctx->pc = 0x1F81ACu;
    SET_GPR_U32(ctx, 31, 0x1F81B4u);
    ctx->pc = 0x1F81B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81ACu;
    // 0x1f81b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C660u, 0x1F81ACu, 0x1F81B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81B4u;
label_1f81b4:
    // 0x1f81b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f81b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f81b8:
    // 0x1f81b8: 0xc04f198  jal         func_13C660
label_1f81bc:
    if (ctx->pc == 0x1F81BCu) {
        ctx->pc = 0x1F81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81B8u;
        // 0x1f81bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F81C0u;
        goto label_1f81c0;
    }
    ctx->pc = 0x1F81B8u;
    SET_GPR_U32(ctx, 31, 0x1F81C0u);
    ctx->pc = 0x1F81BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81B8u;
    // 0x1f81bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C660u, 0x1F81B8u, 0x1F81C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81C0u;
label_1f81c0:
    // 0x1f81c0: 0xc04f208  jal         func_13C820
label_1f81c4:
    if (ctx->pc == 0x1F81C4u) {
        ctx->pc = 0x1F81C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81C0u;
        // 0x1f81c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F81C8u;
        goto label_1f81c8;
    }
    ctx->pc = 0x1F81C0u;
    SET_GPR_U32(ctx, 31, 0x1F81C8u);
    ctx->pc = 0x1F81C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F81C0u;
    // 0x1f81c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C820u, 0x1F81C0u, 0x1F81C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81C8u;
label_1f81c8:
    // 0x1f81c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f81c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f81cc:
    // 0x1f81cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f81ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f81d0:
    // 0x1f81d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f81d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f81d4:
    // 0x1f81d4: 0x3e00008  jr          $ra
label_1f81d8:
    if (ctx->pc == 0x1F81D8u) {
        ctx->pc = 0x1F81D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81D4u;
        // 0x1f81d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F81DCu;
        goto label_1f81dc;
    }
    ctx->pc = 0x1F81D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F81D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81D4u;
        // 0x1f81d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F81D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F81DCu;
label_1f81dc:
    // 0x1f81dc: 0x0  nop
    ctx->pc = 0x1f81dcu;
    // NOP
label_1f81e0:
    // 0x1f81e0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1f81e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_1f81e4:
    // 0x1f81e4: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f81e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f81e8:
    // 0x1f81e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f81e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f81ec:
    // 0x1f81ec: 0x27838278  addiu       $v1, $gp, -0x7D88
    ctx->pc = 0x1f81ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f81f0:
    // 0x1f81f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f81f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1f81f4:
    // 0x1f81f4: 0x2442c558  addiu       $v0, $v0, -0x3AA8
    ctx->pc = 0x1f81f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952280));
label_1f81f8:
    // 0x1f81f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f81f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1f81fc:
    // 0x1f81fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f81fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f8200:
    // 0x1f8200: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f8200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f8204:
    // 0x1f8204: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1f8204u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f8208:
    // 0x1f8208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f8208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f820c:
    // 0x1f820c: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x1f820cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_1f8210:
    // 0x1f8210: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1f8210u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f8214:
    // 0x1f8214: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f8214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f8218:
    // 0x1f8218: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1f8218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f821c:
    // 0x1f821c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1f821cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f8220:
    // 0x1f8220: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f8220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f8224:
    // 0x1f8224: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f8224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f8228:
    // 0x1f8228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f8228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f822c:
    // 0x1f822c: 0xc04f190  jal         func_13C640
label_1f8230:
    if (ctx->pc == 0x1F8230u) {
        ctx->pc = 0x1F8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F822Cu;
        // 0x1f8230: 0x80450000  lb          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8234u;
        goto label_1f8234;
    }
    ctx->pc = 0x1F822Cu;
    SET_GPR_U32(ctx, 31, 0x1F8234u);
    ctx->pc = 0x1F8230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F822Cu;
    // 0x1f8230: 0x80450000  lb          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C640u, 0x1F822Cu, 0x1F8234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8234u;
label_1f8234:
    // 0x1f8234: 0xc0713f8  jal         func_1C4FE0
label_1f8238:
    if (ctx->pc == 0x1F8238u) {
        ctx->pc = 0x1F823Cu;
        goto label_1f823c;
    }
    ctx->pc = 0x1F8234u;
    SET_GPR_U32(ctx, 31, 0x1F823Cu);
    ctx->pc = 0x1C4FE0u;
    { ctx->pc = 0x1c4fe0; return; }
    ctx->pc = 0x1F823Cu;
label_1f823c:
    // 0x1f823c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_1f8240:
    if (ctx->pc == 0x1F8240u) {
        ctx->pc = 0x1F8244u;
        goto label_1f8244;
    }
    ctx->pc = 0x1F823Cu;
    {
        const bool branch_taken_0x1f823c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f823c) {
            ctx->pc = 0x1F82E0u;
            { ctx->pc = 0x1f82e0; return; }
        }
    }
    ctx->pc = 0x1F8244u;
label_1f8244:
    // 0x1f8244: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x1f8244u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_1f8248:
    // 0x1f8248: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_1f824c:
    if (ctx->pc == 0x1F824Cu) {
        ctx->pc = 0x1F8250u;
        goto label_1f8250;
    }
    ctx->pc = 0x1F8248u;
    {
        const bool branch_taken_0x1f8248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8248) {
            ctx->pc = 0x1F82B8u;
            { ctx->pc = 0x1f82b8; return; }
        }
    }
    ctx->pc = 0x1F8250u;
label_1f8250:
    // 0x1f8250: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x1f8250u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8254:
    // 0x1f8254: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f8254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f8258:
    // 0x1f8258: 0x27838278  addiu       $v1, $gp, -0x7D88
    ctx->pc = 0x1f8258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f825c:
    // 0x1f825c: 0x2442c554  addiu       $v0, $v0, -0x3AAC
    ctx->pc = 0x1f825cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952276));
label_1f8260:
    // 0x1f8260: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f8260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f8264:
    // 0x1f8264: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f8264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f8268:
    // 0x1f8268: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f8268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f826c:
    // 0x1f826c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1f826cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1f8270:
    // 0x1f8270: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f8270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f8274:
    // 0x1f8274: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f8274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    ctx->pc = 0x1f8278u;
    return;
}
