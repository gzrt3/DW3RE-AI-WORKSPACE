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


void FUN_0014eba0_part56(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x169950u: goto label_169950;
        case 0x169954u: goto label_169954;
        case 0x169958u: goto label_169958;
        case 0x16995cu: goto label_16995c;
        case 0x169960u: goto label_169960;
        case 0x169964u: goto label_169964;
        case 0x169968u: goto label_169968;
        case 0x16996cu: goto label_16996c;
        case 0x169970u: goto label_169970;
        case 0x169974u: goto label_169974;
        case 0x169978u: goto label_169978;
        case 0x16997cu: goto label_16997c;
        case 0x169980u: goto label_169980;
        case 0x169984u: goto label_169984;
        case 0x169988u: goto label_169988;
        case 0x16998cu: goto label_16998c;
        case 0x169990u: goto label_169990;
        case 0x169994u: goto label_169994;
        case 0x169998u: goto label_169998;
        case 0x16999cu: goto label_16999c;
        case 0x1699a0u: goto label_1699a0;
        case 0x1699a4u: goto label_1699a4;
        case 0x1699a8u: goto label_1699a8;
        case 0x1699acu: goto label_1699ac;
        case 0x1699b0u: goto label_1699b0;
        case 0x1699b4u: goto label_1699b4;
        case 0x1699b8u: goto label_1699b8;
        case 0x1699bcu: goto label_1699bc;
        case 0x1699c0u: goto label_1699c0;
        case 0x1699c4u: goto label_1699c4;
        case 0x1699c8u: goto label_1699c8;
        case 0x1699ccu: goto label_1699cc;
        case 0x1699d0u: goto label_1699d0;
        case 0x1699d4u: goto label_1699d4;
        case 0x1699d8u: goto label_1699d8;
        case 0x1699dcu: goto label_1699dc;
        case 0x1699e0u: goto label_1699e0;
        case 0x1699e4u: goto label_1699e4;
        case 0x1699e8u: goto label_1699e8;
        case 0x1699ecu: goto label_1699ec;
        case 0x1699f0u: goto label_1699f0;
        case 0x1699f4u: goto label_1699f4;
        case 0x1699f8u: goto label_1699f8;
        case 0x1699fcu: goto label_1699fc;
        case 0x169a00u: goto label_169a00;
        case 0x169a04u: goto label_169a04;
        case 0x169a08u: goto label_169a08;
        case 0x169a0cu: goto label_169a0c;
        case 0x169a10u: goto label_169a10;
        case 0x169a14u: goto label_169a14;
        case 0x169a18u: goto label_169a18;
        case 0x169a1cu: goto label_169a1c;
        case 0x169a20u: goto label_169a20;
        case 0x169a24u: goto label_169a24;
        case 0x169a28u: goto label_169a28;
        case 0x169a2cu: goto label_169a2c;
        case 0x169a30u: goto label_169a30;
        case 0x169a34u: goto label_169a34;
        case 0x169a38u: goto label_169a38;
        case 0x169a3cu: goto label_169a3c;
        case 0x169a40u: goto label_169a40;
        case 0x169a44u: goto label_169a44;
        case 0x169a48u: goto label_169a48;
        case 0x169a4cu: goto label_169a4c;
        case 0x169a50u: goto label_169a50;
        case 0x169a54u: goto label_169a54;
        case 0x169a58u: goto label_169a58;
        case 0x169a5cu: goto label_169a5c;
        case 0x169a60u: goto label_169a60;
        case 0x169a64u: goto label_169a64;
        case 0x169a68u: goto label_169a68;
        case 0x169a6cu: goto label_169a6c;
        case 0x169a70u: goto label_169a70;
        case 0x169a74u: goto label_169a74;
        case 0x169a78u: goto label_169a78;
        case 0x169a7cu: goto label_169a7c;
        case 0x169a80u: goto label_169a80;
        case 0x169a84u: goto label_169a84;
        case 0x169a88u: goto label_169a88;
        case 0x169a8cu: goto label_169a8c;
        case 0x169a90u: goto label_169a90;
        case 0x169a94u: goto label_169a94;
        case 0x169a98u: goto label_169a98;
        case 0x169a9cu: goto label_169a9c;
        case 0x169aa0u: goto label_169aa0;
        case 0x169aa4u: goto label_169aa4;
        case 0x169aa8u: goto label_169aa8;
        case 0x169aacu: goto label_169aac;
        case 0x169ab0u: goto label_169ab0;
        case 0x169ab4u: goto label_169ab4;
        case 0x169ab8u: goto label_169ab8;
        case 0x169abcu: goto label_169abc;
        case 0x169ac0u: goto label_169ac0;
        case 0x169ac4u: goto label_169ac4;
        case 0x169ac8u: goto label_169ac8;
        case 0x169accu: goto label_169acc;
        case 0x169ad0u: goto label_169ad0;
        case 0x169ad4u: goto label_169ad4;
        case 0x169ad8u: goto label_169ad8;
        case 0x169adcu: goto label_169adc;
        case 0x169ae0u: goto label_169ae0;
        case 0x169ae4u: goto label_169ae4;
        case 0x169ae8u: goto label_169ae8;
        case 0x169aecu: goto label_169aec;
        case 0x169af0u: goto label_169af0;
        case 0x169af4u: goto label_169af4;
        case 0x169af8u: goto label_169af8;
        case 0x169afcu: goto label_169afc;
        case 0x169b00u: goto label_169b00;
        case 0x169b04u: goto label_169b04;
        case 0x169b08u: goto label_169b08;
        case 0x169b0cu: goto label_169b0c;
        case 0x169b10u: goto label_169b10;
        case 0x169b14u: goto label_169b14;
        case 0x169b18u: goto label_169b18;
        case 0x169b1cu: goto label_169b1c;
        case 0x169b20u: goto label_169b20;
        case 0x169b24u: goto label_169b24;
        case 0x169b28u: goto label_169b28;
        case 0x169b2cu: goto label_169b2c;
        case 0x169b30u: goto label_169b30;
        case 0x169b34u: goto label_169b34;
        case 0x169b38u: goto label_169b38;
        case 0x169b3cu: goto label_169b3c;
        case 0x169b40u: goto label_169b40;
        case 0x169b44u: goto label_169b44;
        case 0x169b48u: goto label_169b48;
        case 0x169b4cu: goto label_169b4c;
        case 0x169b50u: goto label_169b50;
        case 0x169b54u: goto label_169b54;
        case 0x169b58u: goto label_169b58;
        case 0x169b5cu: goto label_169b5c;
        case 0x169b60u: goto label_169b60;
        case 0x169b64u: goto label_169b64;
        case 0x169b68u: goto label_169b68;
        case 0x169b6cu: goto label_169b6c;
        case 0x169b70u: goto label_169b70;
        case 0x169b74u: goto label_169b74;
        case 0x169b78u: goto label_169b78;
        case 0x169b7cu: goto label_169b7c;
        case 0x169b80u: goto label_169b80;
        case 0x169b84u: goto label_169b84;
        case 0x169b88u: goto label_169b88;
        case 0x169b8cu: goto label_169b8c;
        case 0x169b90u: goto label_169b90;
        case 0x169b94u: goto label_169b94;
        case 0x169b98u: goto label_169b98;
        case 0x169b9cu: goto label_169b9c;
        case 0x169ba0u: goto label_169ba0;
        case 0x169ba4u: goto label_169ba4;
        case 0x169ba8u: goto label_169ba8;
        case 0x169bacu: goto label_169bac;
        case 0x169bb0u: goto label_169bb0;
        case 0x169bb4u: goto label_169bb4;
        case 0x169bb8u: goto label_169bb8;
        case 0x169bbcu: goto label_169bbc;
        case 0x169bc0u: goto label_169bc0;
        case 0x169bc4u: goto label_169bc4;
        case 0x169bc8u: goto label_169bc8;
        case 0x169bccu: goto label_169bcc;
        case 0x169bd0u: goto label_169bd0;
        case 0x169bd4u: goto label_169bd4;
        case 0x169bd8u: goto label_169bd8;
        case 0x169bdcu: goto label_169bdc;
        case 0x169be0u: goto label_169be0;
        case 0x169be4u: goto label_169be4;
        case 0x169be8u: goto label_169be8;
        case 0x169becu: goto label_169bec;
        case 0x169bf0u: goto label_169bf0;
        case 0x169bf4u: goto label_169bf4;
        case 0x169bf8u: goto label_169bf8;
        case 0x169bfcu: goto label_169bfc;
        case 0x169c00u: goto label_169c00;
        case 0x169c04u: goto label_169c04;
        case 0x169c08u: goto label_169c08;
        case 0x169c0cu: goto label_169c0c;
        case 0x169c10u: goto label_169c10;
        case 0x169c14u: goto label_169c14;
        case 0x169c18u: goto label_169c18;
        case 0x169c1cu: goto label_169c1c;
        case 0x169c20u: goto label_169c20;
        case 0x169c24u: goto label_169c24;
        case 0x169c28u: goto label_169c28;
        case 0x169c2cu: goto label_169c2c;
        case 0x169c30u: goto label_169c30;
        case 0x169c34u: goto label_169c34;
        case 0x169c38u: goto label_169c38;
        case 0x169c3cu: goto label_169c3c;
        case 0x169c40u: goto label_169c40;
        case 0x169c44u: goto label_169c44;
        case 0x169c48u: goto label_169c48;
        case 0x169c4cu: goto label_169c4c;
        case 0x169c50u: goto label_169c50;
        case 0x169c54u: goto label_169c54;
        case 0x169c58u: goto label_169c58;
        case 0x169c5cu: goto label_169c5c;
        case 0x169c60u: goto label_169c60;
        case 0x169c64u: goto label_169c64;
        case 0x169c68u: goto label_169c68;
        case 0x169c6cu: goto label_169c6c;
        case 0x169c70u: goto label_169c70;
        case 0x169c74u: goto label_169c74;
        case 0x169c78u: goto label_169c78;
        case 0x169c7cu: goto label_169c7c;
        case 0x169c80u: goto label_169c80;
        case 0x169c84u: goto label_169c84;
        case 0x169c88u: goto label_169c88;
        case 0x169c8cu: goto label_169c8c;
        case 0x169c90u: goto label_169c90;
        case 0x169c94u: goto label_169c94;
        case 0x169c98u: goto label_169c98;
        case 0x169c9cu: goto label_169c9c;
        case 0x169ca0u: goto label_169ca0;
        case 0x169ca4u: goto label_169ca4;
        case 0x169ca8u: goto label_169ca8;
        case 0x169cacu: goto label_169cac;
        case 0x169cb0u: goto label_169cb0;
        case 0x169cb4u: goto label_169cb4;
        case 0x169cb8u: goto label_169cb8;
        case 0x169cbcu: goto label_169cbc;
        case 0x169cc0u: goto label_169cc0;
        case 0x169cc4u: goto label_169cc4;
        case 0x169cc8u: goto label_169cc8;
        case 0x169cccu: goto label_169ccc;
        case 0x169cd0u: goto label_169cd0;
        case 0x169cd4u: goto label_169cd4;
        case 0x169cd8u: goto label_169cd8;
        case 0x169cdcu: goto label_169cdc;
        case 0x169ce0u: goto label_169ce0;
        case 0x169ce4u: goto label_169ce4;
        case 0x169ce8u: goto label_169ce8;
        case 0x169cecu: goto label_169cec;
        case 0x169cf0u: goto label_169cf0;
        case 0x169cf4u: goto label_169cf4;
        case 0x169cf8u: goto label_169cf8;
        case 0x169cfcu: goto label_169cfc;
        case 0x169d00u: goto label_169d00;
        case 0x169d04u: goto label_169d04;
        case 0x169d08u: goto label_169d08;
        case 0x169d0cu: goto label_169d0c;
        case 0x169d10u: goto label_169d10;
        case 0x169d14u: goto label_169d14;
        case 0x169d18u: goto label_169d18;
        case 0x169d1cu: goto label_169d1c;
        case 0x169d20u: goto label_169d20;
        case 0x169d24u: goto label_169d24;
        case 0x169d28u: goto label_169d28;
        case 0x169d2cu: goto label_169d2c;
        case 0x169d30u: goto label_169d30;
        case 0x169d34u: goto label_169d34;
        case 0x169d38u: goto label_169d38;
        case 0x169d3cu: goto label_169d3c;
        case 0x169d40u: goto label_169d40;
        case 0x169d44u: goto label_169d44;
        case 0x169d48u: goto label_169d48;
        case 0x169d4cu: goto label_169d4c;
        case 0x169d50u: goto label_169d50;
        case 0x169d54u: goto label_169d54;
        case 0x169d58u: goto label_169d58;
        case 0x169d5cu: goto label_169d5c;
        case 0x169d60u: goto label_169d60;
        case 0x169d64u: goto label_169d64;
        case 0x169d68u: goto label_169d68;
        case 0x169d6cu: goto label_169d6c;
        case 0x169d70u: goto label_169d70;
        case 0x169d74u: goto label_169d74;
        case 0x169d78u: goto label_169d78;
        case 0x169d7cu: goto label_169d7c;
        case 0x169d80u: goto label_169d80;
        case 0x169d84u: goto label_169d84;
        case 0x169d88u: goto label_169d88;
        case 0x169d8cu: goto label_169d8c;
        case 0x169d90u: goto label_169d90;
        case 0x169d94u: goto label_169d94;
        case 0x169d98u: goto label_169d98;
        case 0x169d9cu: goto label_169d9c;
        case 0x169da0u: goto label_169da0;
        case 0x169da4u: goto label_169da4;
        case 0x169da8u: goto label_169da8;
        case 0x169dacu: goto label_169dac;
        case 0x169db0u: goto label_169db0;
        case 0x169db4u: goto label_169db4;
        case 0x169db8u: goto label_169db8;
        case 0x169dbcu: goto label_169dbc;
        case 0x169dc0u: goto label_169dc0;
        case 0x169dc4u: goto label_169dc4;
        case 0x169dc8u: goto label_169dc8;
        case 0x169dccu: goto label_169dcc;
        case 0x169dd0u: goto label_169dd0;
        case 0x169dd4u: goto label_169dd4;
        case 0x169dd8u: goto label_169dd8;
        case 0x169ddcu: goto label_169ddc;
        case 0x169de0u: goto label_169de0;
        case 0x169de4u: goto label_169de4;
        case 0x169de8u: goto label_169de8;
        case 0x169decu: goto label_169dec;
        case 0x169df0u: goto label_169df0;
        case 0x169df4u: goto label_169df4;
        case 0x169df8u: goto label_169df8;
        case 0x169dfcu: goto label_169dfc;
        case 0x169e00u: goto label_169e00;
        case 0x169e04u: goto label_169e04;
        case 0x169e08u: goto label_169e08;
        case 0x169e0cu: goto label_169e0c;
        case 0x169e10u: goto label_169e10;
        case 0x169e14u: goto label_169e14;
        case 0x169e18u: goto label_169e18;
        case 0x169e1cu: goto label_169e1c;
        case 0x169e20u: goto label_169e20;
        case 0x169e24u: goto label_169e24;
        case 0x169e28u: goto label_169e28;
        case 0x169e2cu: goto label_169e2c;
        case 0x169e30u: goto label_169e30;
        case 0x169e34u: goto label_169e34;
        case 0x169e38u: goto label_169e38;
        case 0x169e3cu: goto label_169e3c;
        case 0x169e40u: goto label_169e40;
        case 0x169e44u: goto label_169e44;
        case 0x169e48u: goto label_169e48;
        case 0x169e4cu: goto label_169e4c;
        case 0x169e50u: goto label_169e50;
        case 0x169e54u: goto label_169e54;
        case 0x169e58u: goto label_169e58;
        case 0x169e5cu: goto label_169e5c;
        case 0x169e60u: goto label_169e60;
        case 0x169e64u: goto label_169e64;
        case 0x169e68u: goto label_169e68;
        case 0x169e6cu: goto label_169e6c;
        case 0x169e70u: goto label_169e70;
        case 0x169e74u: goto label_169e74;
        case 0x169e78u: goto label_169e78;
        case 0x169e7cu: goto label_169e7c;
        case 0x169e80u: goto label_169e80;
        case 0x169e84u: goto label_169e84;
        case 0x169e88u: goto label_169e88;
        case 0x169e8cu: goto label_169e8c;
        case 0x169e90u: goto label_169e90;
        case 0x169e94u: goto label_169e94;
        case 0x169e98u: goto label_169e98;
        case 0x169e9cu: goto label_169e9c;
        case 0x169ea0u: goto label_169ea0;
        case 0x169ea4u: goto label_169ea4;
        case 0x169ea8u: goto label_169ea8;
        case 0x169eacu: goto label_169eac;
        case 0x169eb0u: goto label_169eb0;
        case 0x169eb4u: goto label_169eb4;
        case 0x169eb8u: goto label_169eb8;
        case 0x169ebcu: goto label_169ebc;
        case 0x169ec0u: goto label_169ec0;
        case 0x169ec4u: goto label_169ec4;
        case 0x169ec8u: goto label_169ec8;
        case 0x169eccu: goto label_169ecc;
        case 0x169ed0u: goto label_169ed0;
        case 0x169ed4u: goto label_169ed4;
        case 0x169ed8u: goto label_169ed8;
        case 0x169edcu: goto label_169edc;
        case 0x169ee0u: goto label_169ee0;
        case 0x169ee4u: goto label_169ee4;
        case 0x169ee8u: goto label_169ee8;
        case 0x169eecu: goto label_169eec;
        case 0x169ef0u: goto label_169ef0;
        case 0x169ef4u: goto label_169ef4;
        case 0x169ef8u: goto label_169ef8;
        case 0x169efcu: goto label_169efc;
        case 0x169f00u: goto label_169f00;
        case 0x169f04u: goto label_169f04;
        case 0x169f08u: goto label_169f08;
        case 0x169f0cu: goto label_169f0c;
        case 0x169f10u: goto label_169f10;
        case 0x169f14u: goto label_169f14;
        case 0x169f18u: goto label_169f18;
        case 0x169f1cu: goto label_169f1c;
        case 0x169f20u: goto label_169f20;
        case 0x169f24u: goto label_169f24;
        case 0x169f28u: goto label_169f28;
        case 0x169f2cu: goto label_169f2c;
        case 0x169f30u: goto label_169f30;
        case 0x169f34u: goto label_169f34;
        case 0x169f38u: goto label_169f38;
        case 0x169f3cu: goto label_169f3c;
        case 0x169f40u: goto label_169f40;
        case 0x169f44u: goto label_169f44;
        case 0x169f48u: goto label_169f48;
        case 0x169f4cu: goto label_169f4c;
        case 0x169f50u: goto label_169f50;
        case 0x169f54u: goto label_169f54;
        case 0x169f58u: goto label_169f58;
        case 0x169f5cu: goto label_169f5c;
        case 0x169f60u: goto label_169f60;
        case 0x169f64u: goto label_169f64;
        case 0x169f68u: goto label_169f68;
        case 0x169f6cu: goto label_169f6c;
        case 0x169f70u: goto label_169f70;
        case 0x169f74u: goto label_169f74;
        case 0x169f78u: goto label_169f78;
        case 0x169f7cu: goto label_169f7c;
        case 0x169f80u: goto label_169f80;
        case 0x169f84u: goto label_169f84;
        case 0x169f88u: goto label_169f88;
        case 0x169f8cu: goto label_169f8c;
        case 0x169f90u: goto label_169f90;
        case 0x169f94u: goto label_169f94;
        case 0x169f98u: goto label_169f98;
        case 0x169f9cu: goto label_169f9c;
        case 0x169fa0u: goto label_169fa0;
        case 0x169fa4u: goto label_169fa4;
        case 0x169fa8u: goto label_169fa8;
        case 0x169facu: goto label_169fac;
        case 0x169fb0u: goto label_169fb0;
        case 0x169fb4u: goto label_169fb4;
        case 0x169fb8u: goto label_169fb8;
        case 0x169fbcu: goto label_169fbc;
        case 0x169fc0u: goto label_169fc0;
        case 0x169fc4u: goto label_169fc4;
        case 0x169fc8u: goto label_169fc8;
        case 0x169fccu: goto label_169fcc;
        case 0x169fd0u: goto label_169fd0;
        case 0x169fd4u: goto label_169fd4;
        case 0x169fd8u: goto label_169fd8;
        case 0x169fdcu: goto label_169fdc;
        case 0x169fe0u: goto label_169fe0;
        case 0x169fe4u: goto label_169fe4;
        case 0x169fe8u: goto label_169fe8;
        case 0x169fecu: goto label_169fec;
        case 0x169ff0u: goto label_169ff0;
        case 0x169ff4u: goto label_169ff4;
        case 0x169ff8u: goto label_169ff8;
        case 0x169ffcu: goto label_169ffc;
        case 0x16a000u: goto label_16a000;
        case 0x16a004u: goto label_16a004;
        case 0x16a008u: goto label_16a008;
        case 0x16a00cu: goto label_16a00c;
        case 0x16a010u: goto label_16a010;
        case 0x16a014u: goto label_16a014;
        case 0x16a018u: goto label_16a018;
        case 0x16a01cu: goto label_16a01c;
        case 0x16a020u: goto label_16a020;
        case 0x16a024u: goto label_16a024;
        case 0x16a028u: goto label_16a028;
        case 0x16a02cu: goto label_16a02c;
        case 0x16a030u: goto label_16a030;
        case 0x16a034u: goto label_16a034;
        case 0x16a038u: goto label_16a038;
        case 0x16a03cu: goto label_16a03c;
        case 0x16a040u: goto label_16a040;
        case 0x16a044u: goto label_16a044;
        case 0x16a048u: goto label_16a048;
        case 0x16a04cu: goto label_16a04c;
        case 0x16a050u: goto label_16a050;
        case 0x16a054u: goto label_16a054;
        case 0x16a058u: goto label_16a058;
        case 0x16a05cu: goto label_16a05c;
        case 0x16a060u: goto label_16a060;
        case 0x16a064u: goto label_16a064;
        case 0x16a068u: goto label_16a068;
        case 0x16a06cu: goto label_16a06c;
        case 0x16a070u: goto label_16a070;
        case 0x16a074u: goto label_16a074;
        case 0x16a078u: goto label_16a078;
        case 0x16a07cu: goto label_16a07c;
        case 0x16a080u: goto label_16a080;
        case 0x16a084u: goto label_16a084;
        case 0x16a088u: goto label_16a088;
        case 0x16a08cu: goto label_16a08c;
        case 0x16a090u: goto label_16a090;
        case 0x16a094u: goto label_16a094;
        case 0x16a098u: goto label_16a098;
        case 0x16a09cu: goto label_16a09c;
        case 0x16a0a0u: goto label_16a0a0;
        case 0x16a0a4u: goto label_16a0a4;
        case 0x16a0a8u: goto label_16a0a8;
        case 0x16a0acu: goto label_16a0ac;
        case 0x16a0b0u: goto label_16a0b0;
        case 0x16a0b4u: goto label_16a0b4;
        case 0x16a0b8u: goto label_16a0b8;
        case 0x16a0bcu: goto label_16a0bc;
        case 0x16a0c0u: goto label_16a0c0;
        case 0x16a0c4u: goto label_16a0c4;
        case 0x16a0c8u: goto label_16a0c8;
        case 0x16a0ccu: goto label_16a0cc;
        case 0x16a0d0u: goto label_16a0d0;
        case 0x16a0d4u: goto label_16a0d4;
        case 0x16a0d8u: goto label_16a0d8;
        case 0x16a0dcu: goto label_16a0dc;
        case 0x16a0e0u: goto label_16a0e0;
        case 0x16a0e4u: goto label_16a0e4;
        case 0x16a0e8u: goto label_16a0e8;
        case 0x16a0ecu: goto label_16a0ec;
        case 0x16a0f0u: goto label_16a0f0;
        case 0x16a0f4u: goto label_16a0f4;
        case 0x16a0f8u: goto label_16a0f8;
        case 0x16a0fcu: goto label_16a0fc;
        case 0x16a100u: goto label_16a100;
        case 0x16a104u: goto label_16a104;
        case 0x16a108u: goto label_16a108;
        case 0x16a10cu: goto label_16a10c;
        case 0x16a110u: goto label_16a110;
        case 0x16a114u: goto label_16a114;
        case 0x16a118u: goto label_16a118;
        case 0x16a11cu: goto label_16a11c;
        default: return;
    }

label_169950:
    // 0x169950: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_169954:
    // 0x169954: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x169954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_169958:
    // 0x169958: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_16995c:
    if (ctx->pc == 0x16995Cu) {
        ctx->pc = 0x16995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169958u;
        // 0x16995c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169960u;
        goto label_169960;
    }
    ctx->pc = 0x169958u;
    {
        const bool branch_taken_0x169958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169958u;
        // 0x16995c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169958) {
            ctx->pc = 0x169970u;
            goto label_169970;
        }
    }
    ctx->pc = 0x169960u;
label_169960:
    // 0x169960: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x169960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_169964:
    // 0x169964: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_169968:
    if (ctx->pc == 0x169968u) {
        ctx->pc = 0x16996Cu;
        goto label_16996c;
    }
    ctx->pc = 0x169964u;
    {
        const bool branch_taken_0x169964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x169964) {
            ctx->pc = 0x169978u;
            goto label_169978;
        }
    }
    ctx->pc = 0x16996Cu;
label_16996c:
    // 0x16996c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16996cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_169970:
    // 0x169970: 0x10000019  b           . + 4 + (0x19 << 2)
label_169974:
    if (ctx->pc == 0x169974u) {
        ctx->pc = 0x169974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169970u;
        // 0x169974: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169978u;
        goto label_169978;
    }
    ctx->pc = 0x169970u;
    {
        const bool branch_taken_0x169970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169970u;
        // 0x169974: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169970) {
            ctx->pc = 0x1699D8u;
            goto label_1699d8;
        }
    }
    ctx->pc = 0x169978u;
label_169978:
    // 0x169978: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x169978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16997c:
    // 0x16997c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x16997cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_169980:
    // 0x169980: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x169980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_169984:
    // 0x169984: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x169984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_169988:
    // 0x169988: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x169988u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_16998c:
    // 0x16998c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x16998cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_169990:
    // 0x169990: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169990u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_169994:
    // 0x169994: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169994u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_169998:
    // 0x169998: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x169998u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16999c:
    // 0x16999c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x16999cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1699a0:
    // 0x1699a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1699a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1699a4:
    // 0x1699a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1699a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1699a8:
    // 0x1699a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1699a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1699ac:
    // 0x1699ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1699acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1699b0:
    // 0x1699b0: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
label_1699b4:
    if (ctx->pc == 0x1699B4u) {
        ctx->pc = 0x1699B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699B0u;
        // 0x1699b4: 0x28411900  slti        $at, $v0, 0x1900 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6400) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1699B8u;
        goto label_1699b8;
    }
    ctx->pc = 0x1699B0u;
    {
        const bool branch_taken_0x1699b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1699B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699B0u;
        // 0x1699b4: 0x28411900  slti        $at, $v0, 0x1900 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6400) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699b0) {
            ctx->pc = 0x1699C0u;
            goto label_1699c0;
        }
    }
    ctx->pc = 0x1699B8u;
label_1699b8:
    // 0x1699b8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1699bc:
    if (ctx->pc == 0x1699BCu) {
        ctx->pc = 0x1699C0u;
        goto label_1699c0;
    }
    ctx->pc = 0x1699B8u;
    {
        const bool branch_taken_0x1699b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1699b8) {
            ctx->pc = 0x1699C8u;
            goto label_1699c8;
        }
    }
    ctx->pc = 0x1699C0u;
label_1699c0:
    // 0x1699c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1699c4:
    if (ctx->pc == 0x1699C4u) {
        ctx->pc = 0x1699C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699C0u;
        // 0x1699c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1699C8u;
        goto label_1699c8;
    }
    ctx->pc = 0x1699C0u;
    {
        const bool branch_taken_0x1699c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1699C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699C0u;
        // 0x1699c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699c0) {
            ctx->pc = 0x1699D4u;
            goto label_1699d4;
        }
    }
    ctx->pc = 0x1699C8u;
label_1699c8:
    // 0x1699c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1699c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1699cc:
    // 0x1699cc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1699ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1699d0:
    // 0x1699d0: 0x0  nop
    ctx->pc = 0x1699d0u;
    // NOP
label_1699d4:
    // 0x1699d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1699d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1699d8:
    // 0x1699d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1699d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1699dc:
    // 0x1699dc: 0x3e00008  jr          $ra
label_1699e0:
    if (ctx->pc == 0x1699E0u) {
        ctx->pc = 0x1699E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699DCu;
        // 0x1699e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1699E4u;
        goto label_1699e4;
    }
    ctx->pc = 0x1699DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1699E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699DCu;
        // 0x1699e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1699DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1699E4u;
label_1699e4:
    // 0x1699e4: 0x0  nop
    ctx->pc = 0x1699e4u;
    // NOP
label_1699e8:
    // 0x1699e8: 0x0  nop
    ctx->pc = 0x1699e8u;
    // NOP
label_1699ec:
    // 0x1699ec: 0x0  nop
    ctx->pc = 0x1699ecu;
    // NOP
label_1699f0:
    // 0x1699f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1699f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1699f4:
    // 0x1699f4: 0x278381c8  addiu       $v1, $gp, -0x7E38
    ctx->pc = 0x1699f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934984));
label_1699f8:
    // 0x1699f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1699f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1699fc:
    // 0x1699fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1699fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_169a00:
    // 0x169a00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_169a04:
    // 0x169a04: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x169a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_169a08:
    // 0x169a08: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x169a08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_169a0c:
    // 0x169a0c: 0x28c10020  slti        $at, $a2, 0x20
    ctx->pc = 0x169a0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
label_169a10:
    // 0x169a10: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_169a14:
    if (ctx->pc == 0x169A14u) {
        ctx->pc = 0x169A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A10u;
        // 0x169a14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169A18u;
        goto label_169a18;
    }
    ctx->pc = 0x169A10u;
    {
        const bool branch_taken_0x169a10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A10u;
        // 0x169a14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a10) {
            ctx->pc = 0x169A40u;
            goto label_169a40;
        }
    }
    ctx->pc = 0x169A18u;
label_169a18:
    // 0x169a18: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x169a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_169a1c:
    // 0x169a1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x169a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169a20:
    // 0x169a20: 0x8c231ed8  lw          $v1, 0x1ED8($at)
    ctx->pc = 0x169a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7896)));
label_169a24:
    // 0x169a24: 0xc52004  sllv        $a0, $a1, $a2
    ctx->pc = 0x169a24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_169a28:
    // 0x169a28: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x169a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_169a2c:
    // 0x169a2c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_169a30:
    if (ctx->pc == 0x169A30u) {
        ctx->pc = 0x169A34u;
        goto label_169a34;
    }
    ctx->pc = 0x169A2Cu;
    {
        const bool branch_taken_0x169a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a2c) {
            ctx->pc = 0x169A3Cu;
            goto label_169a3c;
        }
    }
    ctx->pc = 0x169A34u;
label_169a34:
    // 0x169a34: 0x10000002  b           . + 4 + (0x2 << 2)
label_169a38:
    if (ctx->pc == 0x169A38u) {
        ctx->pc = 0x169A3Cu;
        goto label_169a3c;
    }
    ctx->pc = 0x169A34u;
    {
        const bool branch_taken_0x169a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a34) {
            ctx->pc = 0x169A40u;
            goto label_169a40;
        }
    }
    ctx->pc = 0x169A3Cu;
label_169a3c:
    // 0x169a3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169a40:
    // 0x169a40: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
label_169a44:
    if (ctx->pc == 0x169A44u) {
        ctx->pc = 0x169A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A40u;
        // 0x169a44: 0x30d000ff  andi        $s0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x169A48u;
        goto label_169a48;
    }
    ctx->pc = 0x169A40u;
    {
        const bool branch_taken_0x169a40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A40u;
        // 0x169a44: 0x30d000ff  andi        $s0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a40) {
            ctx->pc = 0x169AF4u;
            goto label_169af4;
        }
    }
    ctx->pc = 0x169A48u;
label_169a48:
    // 0x169a48: 0x2a010020  slti        $at, $s0, 0x20
    ctx->pc = 0x169a48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
label_169a4c:
    // 0x169a4c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_169a50:
    if (ctx->pc == 0x169A50u) {
        ctx->pc = 0x169A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A4Cu;
        // 0x169a50: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169A54u;
        goto label_169a54;
    }
    ctx->pc = 0x169A4Cu;
    {
        const bool branch_taken_0x169a4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A4Cu;
        // 0x169a50: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a4c) {
            ctx->pc = 0x169AF0u;
            goto label_169af0;
        }
    }
    ctx->pc = 0x169A54u;
label_169a54:
    // 0x169a54: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x169a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_169a58:
    // 0x169a58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169a5c:
    // 0x169a5c: 0x8c251ed8  lw          $a1, 0x1ED8($at)
    ctx->pc = 0x169a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7896)));
label_169a60:
    // 0x169a60: 0x2032004  sllv        $a0, $v1, $s0
    ctx->pc = 0x169a60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
label_169a64:
    // 0x169a64: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x169a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_169a68:
    // 0x169a68: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_169a6c:
    if (ctx->pc == 0x169A6Cu) {
        ctx->pc = 0x169A70u;
        goto label_169a70;
    }
    ctx->pc = 0x169A68u;
    {
        const bool branch_taken_0x169a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a68) {
            ctx->pc = 0x169AECu;
            goto label_169aec;
        }
    }
    ctx->pc = 0x169A70u;
label_169a70:
    // 0x169a70: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x169a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_169a74:
    // 0x169a74: 0x802027  not         $a0, $a0
    ctx->pc = 0x169a74u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_169a78:
    // 0x169a78: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x169a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_169a7c:
    // 0x169a7c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x169a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_169a80:
    // 0x169a80: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_169a84:
    if (ctx->pc == 0x169A84u) {
        ctx->pc = 0x169A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A80u;
        // 0x169a84: 0xac241ed8  sw          $a0, 0x1ED8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169A88u;
        goto label_169a88;
    }
    ctx->pc = 0x169A80u;
    {
        const bool branch_taken_0x169a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A80u;
        // 0x169a84: 0xac241ed8  sw          $a0, 0x1ED8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a80) {
            ctx->pc = 0x169AECu;
            goto label_169aec;
        }
    }
    ctx->pc = 0x169A88u;
label_169a88:
    // 0x169a88: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x169a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169a8c:
    // 0x169a8c: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x169a8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_169a90:
    // 0x169a90: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_169a94:
    if (ctx->pc == 0x169A94u) {
        ctx->pc = 0x169A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A90u;
        // 0x169a94: 0x1021c0  sll         $a0, $s0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169A98u;
        goto label_169a98;
    }
    ctx->pc = 0x169A90u;
    {
        const bool branch_taken_0x169a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x169A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A90u;
        // 0x169a94: 0x1021c0  sll         $a0, $s0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a90) {
            ctx->pc = 0x169AC0u;
            goto label_169ac0;
        }
    }
    ctx->pc = 0x169A98u;
label_169a98:
    // 0x169a98: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x169a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169a9c:
    // 0x169a9c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x169a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_169aa0:
    // 0x169aa0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_169aa4:
    // 0x169aa4: 0xc08d61c  jal         func_235870
label_169aa8:
    if (ctx->pc == 0x169AA8u) {
        ctx->pc = 0x169AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AA4u;
        // 0x169aa8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169AACu;
        goto label_169aac;
    }
    ctx->pc = 0x169AA4u;
    SET_GPR_U32(ctx, 31, 0x169AACu);
    ctx->pc = 0x169AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169AA4u;
    // 0x169aa8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x169AACu;
label_169aac:
    // 0x169aac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x169aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_169ab0:
    // 0x169ab0: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_169ab4:
    if (ctx->pc == 0x169AB4u) {
        ctx->pc = 0x169AB8u;
        goto label_169ab8;
    }
    ctx->pc = 0x169AB0u;
    {
        const bool branch_taken_0x169ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x169ab0) {
            ctx->pc = 0x169A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169a98;
        }
    }
    ctx->pc = 0x169AB8u;
label_169ab8:
    // 0x169ab8: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x169ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_169abc:
    // 0x169abc: 0x1021c0  sll         $a0, $s0, 7
    ctx->pc = 0x169abcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
label_169ac0:
    // 0x169ac0: 0x3c03460f  lui         $v1, 0x460F
    ctx->pc = 0x169ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17935 << 16));
label_169ac4:
    // 0x169ac4: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x169ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_169ac8:
    // 0x169ac8: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x169ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169acc:
    // 0x169acc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x169accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_169ad0:
    // 0x169ad0: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x169ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_169ad4:
    // 0x169ad4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x169ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_169ad8:
    // 0x169ad8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_169adc:
    // 0x169adc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x169adcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_169ae0:
    // 0x169ae0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x169ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169ae4:
    // 0x169ae4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x169ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_169ae8:
    // 0x169ae8: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x169ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_169aec:
    // 0x169aec: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x169aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_169af0:
    // 0x169af0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x169af0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_169af4:
    // 0x169af4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x169af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_169af8:
    // 0x169af8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_169afc:
    // 0x169afc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_169b00:
    // 0x169b00: 0x3e00008  jr          $ra
label_169b04:
    if (ctx->pc == 0x169B04u) {
        ctx->pc = 0x169B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B00u;
        // 0x169b04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B08u;
        goto label_169b08;
    }
    ctx->pc = 0x169B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B00u;
        // 0x169b04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169B08u;
label_169b08:
    // 0x169b08: 0x0  nop
    ctx->pc = 0x169b08u;
    // NOP
label_169b0c:
    // 0x169b0c: 0x0  nop
    ctx->pc = 0x169b0cu;
    // NOP
label_169b10:
    // 0x169b10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x169b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_169b14:
    // 0x169b14: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x169b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_169b18:
    // 0x169b18: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x169b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_169b1c:
    // 0x169b1c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x169b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_169b20:
    // 0x169b20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x169b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_169b24:
    // 0x169b24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x169b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_169b28:
    // 0x169b28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x169b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_169b2c:
    // 0x169b2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x169b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_169b30:
    // 0x169b30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_169b34:
    // 0x169b34: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x169b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_169b38:
    // 0x169b38: 0x30630027  andi        $v1, $v1, 0x27
    ctx->pc = 0x169b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)39);
label_169b3c:
    // 0x169b3c: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_169b40:
    if (ctx->pc == 0x169B40u) {
        ctx->pc = 0x169B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B3Cu;
        // 0x169b40: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B44u;
        goto label_169b44;
    }
    ctx->pc = 0x169B3Cu;
    {
        const bool branch_taken_0x169b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B3Cu;
        // 0x169b40: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b3c) {
            ctx->pc = 0x169C44u;
            goto label_169c44;
        }
    }
    ctx->pc = 0x169B44u;
label_169b44:
    // 0x169b44: 0x278381c8  addiu       $v1, $gp, -0x7E38
    ctx->pc = 0x169b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934984));
label_169b48:
    // 0x169b48: 0x758821  addu        $s1, $v1, $s5
    ctx->pc = 0x169b48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_169b4c:
    // 0x169b4c: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x169b4cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_169b50:
    // 0x169b50: 0x28c10020  slti        $at, $a2, 0x20
    ctx->pc = 0x169b50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
label_169b54:
    // 0x169b54: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_169b58:
    if (ctx->pc == 0x169B58u) {
        ctx->pc = 0x169B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B54u;
        // 0x169b58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B5Cu;
        goto label_169b5c;
    }
    ctx->pc = 0x169B54u;
    {
        const bool branch_taken_0x169b54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x169B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B54u;
        // 0x169b58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b54) {
            ctx->pc = 0x169B84u;
            goto label_169b84;
        }
    }
    ctx->pc = 0x169B5Cu;
label_169b5c:
    // 0x169b5c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x169b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_169b60:
    // 0x169b60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x169b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169b64:
    // 0x169b64: 0x8c231ed8  lw          $v1, 0x1ED8($at)
    ctx->pc = 0x169b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7896)));
label_169b68:
    // 0x169b68: 0xc52004  sllv        $a0, $a1, $a2
    ctx->pc = 0x169b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_169b6c:
    // 0x169b6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x169b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_169b70:
    // 0x169b70: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_169b74:
    if (ctx->pc == 0x169B74u) {
        ctx->pc = 0x169B78u;
        goto label_169b78;
    }
    ctx->pc = 0x169B70u;
    {
        const bool branch_taken_0x169b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x169b70) {
            ctx->pc = 0x169B80u;
            goto label_169b80;
        }
    }
    ctx->pc = 0x169B78u;
label_169b78:
    // 0x169b78: 0x10000002  b           . + 4 + (0x2 << 2)
label_169b7c:
    if (ctx->pc == 0x169B7Cu) {
        ctx->pc = 0x169B80u;
        goto label_169b80;
    }
    ctx->pc = 0x169B78u;
    {
        const bool branch_taken_0x169b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169b78) {
            ctx->pc = 0x169B84u;
            goto label_169b84;
        }
    }
    ctx->pc = 0x169B80u;
label_169b80:
    // 0x169b80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169b84:
    // 0x169b84: 0x10a004fb  beqz        $a1, . + 4 + (0x4FB << 2)
label_169b88:
    if (ctx->pc == 0x169B88u) {
        ctx->pc = 0x169B8Cu;
        goto label_169b8c;
    }
    ctx->pc = 0x169B84u;
    {
        const bool branch_taken_0x169b84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x169b84) {
            ctx->pc = 0x16AF74u;
            { ctx->pc = 0x16af74; return; }
        }
    }
    ctx->pc = 0x169B8Cu;
label_169b8c:
    // 0x169b8c: 0x30d000ff  andi        $s0, $a2, 0xFF
    ctx->pc = 0x169b8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_169b90:
    // 0x169b90: 0x2a010020  slti        $at, $s0, 0x20
    ctx->pc = 0x169b90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
label_169b94:
    // 0x169b94: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_169b98:
    if (ctx->pc == 0x169B98u) {
        ctx->pc = 0x169B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B94u;
        // 0x169b98: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169B9Cu;
        goto label_169b9c;
    }
    ctx->pc = 0x169B94u;
    {
        const bool branch_taken_0x169b94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x169B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B94u;
        // 0x169b98: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b94) {
            ctx->pc = 0x169C38u;
            goto label_169c38;
        }
    }
    ctx->pc = 0x169B9Cu;
label_169b9c:
    // 0x169b9c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x169b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_169ba0:
    // 0x169ba0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169ba4:
    // 0x169ba4: 0x8c251ed8  lw          $a1, 0x1ED8($at)
    ctx->pc = 0x169ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7896)));
label_169ba8:
    // 0x169ba8: 0x2032004  sllv        $a0, $v1, $s0
    ctx->pc = 0x169ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
label_169bac:
    // 0x169bac: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x169bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_169bb0:
    // 0x169bb0: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_169bb4:
    if (ctx->pc == 0x169BB4u) {
        ctx->pc = 0x169BB8u;
        goto label_169bb8;
    }
    ctx->pc = 0x169BB0u;
    {
        const bool branch_taken_0x169bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x169bb0) {
            ctx->pc = 0x169C34u;
            goto label_169c34;
        }
    }
    ctx->pc = 0x169BB8u;
label_169bb8:
    // 0x169bb8: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x169bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_169bbc:
    // 0x169bbc: 0x802027  not         $a0, $a0
    ctx->pc = 0x169bbcu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_169bc0:
    // 0x169bc0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x169bc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_169bc4:
    // 0x169bc4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x169bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_169bc8:
    // 0x169bc8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_169bcc:
    if (ctx->pc == 0x169BCCu) {
        ctx->pc = 0x169BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BC8u;
        // 0x169bcc: 0xac241ed8  sw          $a0, 0x1ED8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169BD0u;
        goto label_169bd0;
    }
    ctx->pc = 0x169BC8u;
    {
        const bool branch_taken_0x169bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BC8u;
        // 0x169bcc: 0xac241ed8  sw          $a0, 0x1ED8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169bc8) {
            ctx->pc = 0x169C34u;
            goto label_169c34;
        }
    }
    ctx->pc = 0x169BD0u;
label_169bd0:
    // 0x169bd0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x169bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169bd4:
    // 0x169bd4: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x169bd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_169bd8:
    // 0x169bd8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_169bdc:
    if (ctx->pc == 0x169BDCu) {
        ctx->pc = 0x169BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BD8u;
        // 0x169bdc: 0x1021c0  sll         $a0, $s0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169BE0u;
        goto label_169be0;
    }
    ctx->pc = 0x169BD8u;
    {
        const bool branch_taken_0x169bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x169BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BD8u;
        // 0x169bdc: 0x1021c0  sll         $a0, $s0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169bd8) {
            ctx->pc = 0x169C08u;
            goto label_169c08;
        }
    }
    ctx->pc = 0x169BE0u;
label_169be0:
    // 0x169be0: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x169be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169be4:
    // 0x169be4: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x169be4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_169be8:
    // 0x169be8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_169bec:
    // 0x169bec: 0xc08d61c  jal         func_235870
label_169bf0:
    if (ctx->pc == 0x169BF0u) {
        ctx->pc = 0x169BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BECu;
        // 0x169bf0: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169BF4u;
        goto label_169bf4;
    }
    ctx->pc = 0x169BECu;
    SET_GPR_U32(ctx, 31, 0x169BF4u);
    ctx->pc = 0x169BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169BECu;
    // 0x169bf0: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x169BF4u;
label_169bf4:
    // 0x169bf4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x169bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_169bf8:
    // 0x169bf8: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_169bfc:
    if (ctx->pc == 0x169BFCu) {
        ctx->pc = 0x169C00u;
        goto label_169c00;
    }
    ctx->pc = 0x169BF8u;
    {
        const bool branch_taken_0x169bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x169bf8) {
            ctx->pc = 0x169BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169be0;
        }
    }
    ctx->pc = 0x169C00u;
label_169c00:
    // 0x169c00: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x169c00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_169c04:
    // 0x169c04: 0x1021c0  sll         $a0, $s0, 7
    ctx->pc = 0x169c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
label_169c08:
    // 0x169c08: 0x3c03460f  lui         $v1, 0x460F
    ctx->pc = 0x169c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17935 << 16));
label_169c0c:
    // 0x169c0c: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x169c0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_169c10:
    // 0x169c10: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x169c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169c14:
    // 0x169c14: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x169c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_169c18:
    // 0x169c18: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x169c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_169c1c:
    // 0x169c1c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x169c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_169c20:
    // 0x169c20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_169c24:
    // 0x169c24: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x169c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_169c28:
    // 0x169c28: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x169c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169c2c:
    // 0x169c2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x169c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_169c30:
    // 0x169c30: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x169c30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_169c34:
    // 0x169c34: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x169c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_169c38:
    // 0x169c38: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x169c38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_169c3c:
    // 0x169c3c: 0x100004ce  b           . + 4 + (0x4CE << 2)
label_169c40:
    if (ctx->pc == 0x169C40u) {
        ctx->pc = 0x169C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C3Cu;
        // 0x169c40: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C44u;
        goto label_169c44;
    }
    ctx->pc = 0x169C3Cu;
    {
        const bool branch_taken_0x169c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C3Cu;
        // 0x169c40: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c3c) {
            ctx->pc = 0x16AF78u;
            { ctx->pc = 0x16af78; return; }
        }
    }
    ctx->pc = 0x169C44u;
label_169c44:
    // 0x169c44: 0x8f858700  lw          $a1, -0x7900($gp)
    ctx->pc = 0x169c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_169c48:
    // 0x169c48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169c4c:
    // 0x169c4c: 0x10a304c9  beq         $a1, $v1, . + 4 + (0x4C9 << 2)
label_169c50:
    if (ctx->pc == 0x169C50u) {
        ctx->pc = 0x169C54u;
        goto label_169c54;
    }
    ctx->pc = 0x169C4Cu;
    {
        const bool branch_taken_0x169c4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x169c4c) {
            ctx->pc = 0x16AF74u;
            { ctx->pc = 0x16af74; return; }
        }
    }
    ctx->pc = 0x169C54u;
label_169c54:
    // 0x169c54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x169c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_169c58:
    // 0x169c58: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_169c5c:
    if (ctx->pc == 0x169C5Cu) {
        ctx->pc = 0x169C60u;
        goto label_169c60;
    }
    ctx->pc = 0x169C58u;
    {
        const bool branch_taken_0x169c58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x169c58) {
            ctx->pc = 0x169C68u;
            goto label_169c68;
        }
    }
    ctx->pc = 0x169C60u;
label_169c60:
    // 0x169c60: 0x100004c4  b           . + 4 + (0x4C4 << 2)
label_169c64:
    if (ctx->pc == 0x169C64u) {
        ctx->pc = 0x169C68u;
        goto label_169c68;
    }
    ctx->pc = 0x169C60u;
    {
        const bool branch_taken_0x169c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c60) {
            ctx->pc = 0x16AF74u;
            { ctx->pc = 0x16af74; return; }
        }
    }
    ctx->pc = 0x169C68u;
label_169c68:
    // 0x169c68: 0xc05a620  jal         func_169880
label_169c6c:
    if (ctx->pc == 0x169C6Cu) {
        ctx->pc = 0x169C70u;
        goto label_169c70;
    }
    ctx->pc = 0x169C68u;
    SET_GPR_U32(ctx, 31, 0x169C70u);
    ctx->pc = 0x169880u;
    { ctx->pc = 0x169880; return; }
    ctx->pc = 0x169C70u;
label_169c70:
    // 0x169c70: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x169c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_169c74:
    // 0x169c74: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x169c74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_169c78:
    // 0x169c78: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_169c7c:
    if (ctx->pc == 0x169C7Cu) {
        ctx->pc = 0x169C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C78u;
        // 0x169c7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C80u;
        goto label_169c80;
    }
    ctx->pc = 0x169C78u;
    {
        const bool branch_taken_0x169c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x169C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C78u;
        // 0x169c7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c78) {
            ctx->pc = 0x169CA4u;
            goto label_169ca4;
        }
    }
    ctx->pc = 0x169C80u;
label_169c80:
    // 0x169c80: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x169c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_169c84:
    // 0x169c84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169c88:
    // 0x169c88: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_169c8c:
    if (ctx->pc == 0x169C8Cu) {
        ctx->pc = 0x169C90u;
        goto label_169c90;
    }
    ctx->pc = 0x169C88u;
    {
        const bool branch_taken_0x169c88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x169c88) {
            ctx->pc = 0x169CA4u;
            goto label_169ca4;
        }
    }
    ctx->pc = 0x169C90u;
label_169c90:
    // 0x169c90: 0xc059ec8  jal         func_167B20
label_169c94:
    if (ctx->pc == 0x169C94u) {
        ctx->pc = 0x169C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C90u;
        // 0x169c94: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169C98u;
        goto label_169c98;
    }
    ctx->pc = 0x169C90u;
    SET_GPR_U32(ctx, 31, 0x169C98u);
    ctx->pc = 0x169C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169C90u;
    // 0x169c94: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    { ctx->pc = 0x167b20; return; }
    ctx->pc = 0x169C98u;
label_169c98:
    // 0x169c98: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_169c9c:
    if (ctx->pc == 0x169C9Cu) {
        ctx->pc = 0x169CA0u;
        goto label_169ca0;
    }
    ctx->pc = 0x169C98u;
    {
        const bool branch_taken_0x169c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c98) {
            ctx->pc = 0x169CA4u;
            goto label_169ca4;
        }
    }
    ctx->pc = 0x169CA0u;
label_169ca0:
    // 0x169ca0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x169ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169ca4:
    // 0x169ca4: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x169ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_169ca8:
    // 0x169ca8: 0x30660400  andi        $a2, $v1, 0x400
    ctx->pc = 0x169ca8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_169cac:
    // 0x169cac: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_169cb0:
    if (ctx->pc == 0x169CB0u) {
        ctx->pc = 0x169CB4u;
        goto label_169cb4;
    }
    ctx->pc = 0x169CACu;
    {
        const bool branch_taken_0x169cac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x169cac) {
            ctx->pc = 0x169CF8u;
            goto label_169cf8;
        }
    }
    ctx->pc = 0x169CB4u;
label_169cb4:
    // 0x169cb4: 0x938381c8  lbu         $v1, -0x7E38($gp)
    ctx->pc = 0x169cb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934984)));
label_169cb8:
    // 0x169cb8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x169cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_169cbc:
    // 0x169cbc: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
label_169cc0:
    if (ctx->pc == 0x169CC0u) {
        ctx->pc = 0x169CC4u;
        goto label_169cc4;
    }
    ctx->pc = 0x169CBCu;
    {
        const bool branch_taken_0x169cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x169cbc) {
            ctx->pc = 0x169CE4u;
            goto label_169ce4;
        }
    }
    ctx->pc = 0x169CC4u;
label_169cc4:
    // 0x169cc4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x169cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_169cc8:
    // 0x169cc8: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
label_169ccc:
    if (ctx->pc == 0x169CCCu) {
        ctx->pc = 0x169CD0u;
        goto label_169cd0;
    }
    ctx->pc = 0x169CC8u;
    {
        const bool branch_taken_0x169cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x169cc8) {
            ctx->pc = 0x169CE4u;
            goto label_169ce4;
        }
    }
    ctx->pc = 0x169CD0u;
label_169cd0:
    // 0x169cd0: 0x938381c9  lbu         $v1, -0x7E37($gp)
    ctx->pc = 0x169cd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934985)));
label_169cd4:
    // 0x169cd4: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
label_169cd8:
    if (ctx->pc == 0x169CD8u) {
        ctx->pc = 0x169CDCu;
        goto label_169cdc;
    }
    ctx->pc = 0x169CD4u;
    {
        const bool branch_taken_0x169cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x169cd4) {
            ctx->pc = 0x169CE4u;
            goto label_169ce4;
        }
    }
    ctx->pc = 0x169CDCu;
label_169cdc:
    // 0x169cdc: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_169ce0:
    if (ctx->pc == 0x169CE0u) {
        ctx->pc = 0x169CE4u;
        goto label_169ce4;
    }
    ctx->pc = 0x169CDCu;
    {
        const bool branch_taken_0x169cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x169cdc) {
            ctx->pc = 0x169CF0u;
            goto label_169cf0;
        }
    }
    ctx->pc = 0x169CE4u;
label_169ce4:
    // 0x169ce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169ce8:
    // 0x169ce8: 0x1000000e  b           . + 4 + (0xE << 2)
label_169cec:
    if (ctx->pc == 0x169CECu) {
        ctx->pc = 0x169CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CE8u;
        // 0x169cec: 0xaf83870c  sw          $v1, -0x78F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169CF0u;
        goto label_169cf0;
    }
    ctx->pc = 0x169CE8u;
    {
        const bool branch_taken_0x169ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CE8u;
        // 0x169cec: 0xaf83870c  sw          $v1, -0x78F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ce8) {
            ctx->pc = 0x169D24u;
            goto label_169d24;
        }
    }
    ctx->pc = 0x169CF0u;
label_169cf0:
    // 0x169cf0: 0x1000000c  b           . + 4 + (0xC << 2)
label_169cf4:
    if (ctx->pc == 0x169CF4u) {
        ctx->pc = 0x169CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CF0u;
        // 0x169cf4: 0xaf80870c  sw          $zero, -0x78F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169CF8u;
        goto label_169cf8;
    }
    ctx->pc = 0x169CF0u;
    {
        const bool branch_taken_0x169cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CF0u;
        // 0x169cf4: 0xaf80870c  sw          $zero, -0x78F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169cf0) {
            ctx->pc = 0x169D24u;
            goto label_169d24;
        }
    }
    ctx->pc = 0x169CF8u;
label_169cf8:
    // 0x169cf8: 0x938481c8  lbu         $a0, -0x7E38($gp)
    ctx->pc = 0x169cf8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934984)));
label_169cfc:
    // 0x169cfc: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x169cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_169d00:
    // 0x169d00: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_169d04:
    if (ctx->pc == 0x169D04u) {
        ctx->pc = 0x169D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D00u;
        // 0x169d04: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169D08u;
        goto label_169d08;
    }
    ctx->pc = 0x169D00u;
    {
        const bool branch_taken_0x169d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x169D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D00u;
        // 0x169d04: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d00) {
            ctx->pc = 0x169D18u;
            goto label_169d18;
        }
    }
    ctx->pc = 0x169D08u;
label_169d08:
    // 0x169d08: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x169d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_169d0c:
    // 0x169d0c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_169d10:
    if (ctx->pc == 0x169D10u) {
        ctx->pc = 0x169D14u;
        goto label_169d14;
    }
    ctx->pc = 0x169D0Cu;
    {
        const bool branch_taken_0x169d0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x169d0c) {
            ctx->pc = 0x169D20u;
            goto label_169d20;
        }
    }
    ctx->pc = 0x169D14u;
label_169d14:
    // 0x169d14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169d18:
    // 0x169d18: 0x10000002  b           . + 4 + (0x2 << 2)
label_169d1c:
    if (ctx->pc == 0x169D1Cu) {
        ctx->pc = 0x169D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D18u;
        // 0x169d1c: 0xaf83870c  sw          $v1, -0x78F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169D20u;
        goto label_169d20;
    }
    ctx->pc = 0x169D18u;
    {
        const bool branch_taken_0x169d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D18u;
        // 0x169d1c: 0xaf83870c  sw          $v1, -0x78F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d18) {
            ctx->pc = 0x169D24u;
            goto label_169d24;
        }
    }
    ctx->pc = 0x169D20u;
label_169d20:
    // 0x169d20: 0xaf80870c  sw          $zero, -0x78F4($gp)
    ctx->pc = 0x169d20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 0));
label_169d24:
    // 0x169d24: 0x120003e3  beqz        $s0, . + 4 + (0x3E3 << 2)
label_169d28:
    if (ctx->pc == 0x169D28u) {
        ctx->pc = 0x169D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D24u;
        // 0x169d28: 0x278381c8  addiu       $v1, $gp, -0x7E38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169D2Cu;
        goto label_169d2c;
    }
    ctx->pc = 0x169D24u;
    {
        const bool branch_taken_0x169d24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D24u;
        // 0x169d28: 0x278381c8  addiu       $v1, $gp, -0x7E38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d24) {
            ctx->pc = 0x16ACB4u;
            { ctx->pc = 0x16acb4; return; }
        }
    }
    ctx->pc = 0x169D2Cu;
label_169d2c:
    // 0x169d2c: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x169d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_169d30:
    // 0x169d30: 0x10c000bd  beqz        $a2, . + 4 + (0xBD << 2)
label_169d34:
    if (ctx->pc == 0x169D34u) {
        ctx->pc = 0x169D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D30u;
        // 0x169d34: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x169D38u;
        goto label_169d38;
    }
    ctx->pc = 0x169D30u;
    {
        const bool branch_taken_0x169d30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D30u;
        // 0x169d34: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d30) {
            ctx->pc = 0x16A028u;
            goto label_16a028;
        }
    }
    ctx->pc = 0x169D38u;
label_169d38:
    // 0x169d38: 0x3aa30001  xori        $v1, $s5, 0x1
    ctx->pc = 0x169d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)1);
label_169d3c:
    // 0x169d3c: 0x278481c8  addiu       $a0, $gp, -0x7E38
    ctx->pc = 0x169d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934984));
label_169d40:
    // 0x169d40: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x169d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_169d44:
    // 0x169d44: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x169d44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_169d48:
    // 0x169d48: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x169d48u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_169d4c:
    // 0x169d4c: 0x14e60018  bne         $a3, $a2, . + 4 + (0x18 << 2)
label_169d50:
    if (ctx->pc == 0x169D50u) {
        ctx->pc = 0x169D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D4Cu;
        // 0x169d50: 0x278381c8  addiu       $v1, $gp, -0x7E38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169D54u;
        goto label_169d54;
    }
    ctx->pc = 0x169D4Cu;
    {
        const bool branch_taken_0x169d4c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x169D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D4Cu;
        // 0x169d50: 0x278381c8  addiu       $v1, $gp, -0x7E38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d4c) {
            ctx->pc = 0x169DB0u;
            goto label_169db0;
        }
    }
    ctx->pc = 0x169D54u;
label_169d54:
    // 0x169d54: 0x952821  addu        $a1, $a0, $s5
    ctx->pc = 0x169d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_169d58:
    // 0x169d58: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x169d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_169d5c:
    // 0x169d5c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x169d5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_169d60:
    // 0x169d60: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
label_169d64:
    if (ctx->pc == 0x169D64u) {
        ctx->pc = 0x169D68u;
        goto label_169d68;
    }
    ctx->pc = 0x169D60u;
    {
        const bool branch_taken_0x169d60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x169d60) {
            ctx->pc = 0x169DACu;
            goto label_169dac;
        }
    }
    ctx->pc = 0x169D68u;
label_169d68:
    // 0x169d68: 0x153080  sll         $a2, $s5, 2
    ctx->pc = 0x169d68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_169d6c:
    // 0x169d6c: 0x27848198  addiu       $a0, $gp, -0x7E68
    ctx->pc = 0x169d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934936));
label_169d70:
    // 0x169d70: 0x278381a0  addiu       $v1, $gp, -0x7E60
    ctx->pc = 0x169d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934944));
label_169d74:
    // 0x169d74: 0xa0b00000  sb          $s0, 0x0($a1)
    ctx->pc = 0x169d74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 16));
label_169d78:
    // 0x169d78: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x169d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_169d7c:
    // 0x169d7c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x169d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_169d80:
    // 0x169d80: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x169d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_169d84:
    // 0x169d84: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x169d84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_169d88:
    // 0x169d88: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x169d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_169d8c:
    // 0x169d8c: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x169d8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_169d90:
    // 0x169d90: 0x24841e40  addiu       $a0, $a0, 0x1E40
    ctx->pc = 0x169d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7744));
label_169d94:
    // 0x169d94: 0x27838188  addiu       $v1, $gp, -0x7E78
    ctx->pc = 0x169d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934920));
label_169d98:
    // 0x169d98: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x169d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_169d9c:
    // 0x169d9c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x169d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_169da0:
    // 0x169da0: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x169da0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_169da4:
    // 0x169da4: 0x10000473  b           . + 4 + (0x473 << 2)
label_169da8:
    if (ctx->pc == 0x169DA8u) {
        ctx->pc = 0x169DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DA4u;
        // 0x169da8: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169DACu;
        goto label_169dac;
    }
    ctx->pc = 0x169DA4u;
    {
        const bool branch_taken_0x169da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DA4u;
        // 0x169da8: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169da4) {
            ctx->pc = 0x16AF74u;
            { ctx->pc = 0x16af74; return; }
        }
    }
    ctx->pc = 0x169DACu;
label_169dac:
    // 0x169dac: 0x278381c8  addiu       $v1, $gp, -0x7E38
    ctx->pc = 0x169dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934984));
label_169db0:
    // 0x169db0: 0x754021  addu        $t0, $v1, $s5
    ctx->pc = 0x169db0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_169db4:
    // 0x169db4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x169db4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_169db8:
    // 0x169db8: 0x10c3008f  beq         $a2, $v1, . + 4 + (0x8F << 2)
label_169dbc:
    if (ctx->pc == 0x169DBCu) {
        ctx->pc = 0x169DC0u;
        goto label_169dc0;
    }
    ctx->pc = 0x169DB8u;
    {
        const bool branch_taken_0x169db8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x169db8) {
            ctx->pc = 0x169FF8u;
            goto label_169ff8;
        }
    }
    ctx->pc = 0x169DC0u;
label_169dc0:
    // 0x169dc0: 0x1467008d  bne         $v1, $a3, . + 4 + (0x8D << 2)
label_169dc4:
    if (ctx->pc == 0x169DC4u) {
        ctx->pc = 0x169DC8u;
        goto label_169dc8;
    }
    ctx->pc = 0x169DC0u;
    {
        const bool branch_taken_0x169dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x169dc0) {
            ctx->pc = 0x169FF8u;
            goto label_169ff8;
        }
    }
    ctx->pc = 0x169DC8u;
label_169dc8:
    // 0x169dc8: 0x158880  sll         $s1, $s5, 2
    ctx->pc = 0x169dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_169dcc:
    // 0x169dcc: 0x27838198  addiu       $v1, $gp, -0x7E68
    ctx->pc = 0x169dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934936));
label_169dd0:
    // 0x169dd0: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x169dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_169dd4:
    // 0x169dd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x169dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169dd8:
    // 0x169dd8: 0x27838188  addiu       $v1, $gp, -0x7E78
    ctx->pc = 0x169dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934920));
label_169ddc:
    // 0x169ddc: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x169ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_169de0:
    // 0x169de0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x169de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_169de4:
    // 0x169de4: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x169de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_169de8:
    // 0x169de8: 0xa1100000  sb          $s0, 0x0($t0)
    ctx->pc = 0x169de8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 16));
label_169dec:
    // 0x169dec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x169decu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_169df0:
    // 0x169df0: 0x91130000  lbu         $s3, 0x0($t0)
    ctx->pc = 0x169df0u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_169df4:
    // 0x169df4: 0x2a610020  slti        $at, $s3, 0x20
    ctx->pc = 0x169df4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
label_169df8:
    // 0x169df8: 0x10200078  beqz        $at, . + 4 + (0x78 << 2)
label_169dfc:
    if (ctx->pc == 0x169DFCu) {
        ctx->pc = 0x169DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DF8u;
        // 0x169dfc: 0x90720000  lbu         $s2, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169E00u;
        goto label_169e00;
    }
    ctx->pc = 0x169DF8u;
    {
        const bool branch_taken_0x169df8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x169DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DF8u;
        // 0x169dfc: 0x90720000  lbu         $s2, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169df8) {
            ctx->pc = 0x169FDCu;
            goto label_169fdc;
        }
    }
    ctx->pc = 0x169E00u;
label_169e00:
    // 0x169e00: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x169e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_169e04:
    // 0x169e04: 0x2662804  sllv        $a1, $a2, $s3
    ctx->pc = 0x169e04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 19) & 0x1F));
label_169e08:
    // 0x169e08: 0x8c241ed8  lw          $a0, 0x1ED8($at)
    ctx->pc = 0x169e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7896)));
label_169e0c:
    // 0x169e0c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x169e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_169e10:
    // 0x169e10: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
label_169e14:
    if (ctx->pc == 0x169E14u) {
        ctx->pc = 0x169E18u;
        goto label_169e18;
    }
    ctx->pc = 0x169E10u;
    {
        const bool branch_taken_0x169e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169e10) {
            ctx->pc = 0x169FDCu;
            goto label_169fdc;
        }
    }
    ctx->pc = 0x169E18u;
label_169e18:
    // 0x169e18: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x169e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_169e1c:
    // 0x169e1c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x169e1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_169e20:
    // 0x169e20: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x169e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_169e24:
    // 0x169e24: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
label_169e28:
    if (ctx->pc == 0x169E28u) {
        ctx->pc = 0x169E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E24u;
        // 0x169e28: 0xac241ed8  sw          $a0, 0x1ED8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169E2Cu;
        goto label_169e2c;
    }
    ctx->pc = 0x169E24u;
    {
        const bool branch_taken_0x169e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E24u;
        // 0x169e28: 0xac241ed8  sw          $a0, 0x1ED8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169e24) {
            ctx->pc = 0x169FDCu;
            goto label_169fdc;
        }
    }
    ctx->pc = 0x169E2Cu;
label_169e2c:
    // 0x169e2c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x169e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169e30:
    // 0x169e30: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x169e30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_169e34:
    // 0x169e34: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_169e38:
    if (ctx->pc == 0x169E38u) {
        ctx->pc = 0x169E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E34u;
        // 0x169e38: 0x132b80  sll         $a1, $s3, 14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169E3Cu;
        goto label_169e3c;
    }
    ctx->pc = 0x169E34u;
    {
        const bool branch_taken_0x169e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x169E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E34u;
        // 0x169e38: 0x132b80  sll         $a1, $s3, 14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169e34) {
            ctx->pc = 0x169E64u;
            goto label_169e64;
        }
    }
    ctx->pc = 0x169E3Cu;
label_169e3c:
    // 0x169e3c: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x169e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169e40:
    // 0x169e40: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x169e40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_169e44:
    // 0x169e44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_169e48:
    // 0x169e48: 0xc08d61c  jal         func_235870
label_169e4c:
    if (ctx->pc == 0x169E4Cu) {
        ctx->pc = 0x169E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E48u;
        // 0x169e4c: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169E50u;
        goto label_169e50;
    }
    ctx->pc = 0x169E48u;
    SET_GPR_U32(ctx, 31, 0x169E50u);
    ctx->pc = 0x169E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E48u;
    // 0x169e4c: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x169E50u;
label_169e50:
    // 0x169e50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x169e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_169e54:
    // 0x169e54: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_169e58:
    if (ctx->pc == 0x169E58u) {
        ctx->pc = 0x169E5Cu;
        goto label_169e5c;
    }
    ctx->pc = 0x169E54u;
    {
        const bool branch_taken_0x169e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x169e54) {
            ctx->pc = 0x169E3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169e3c;
        }
    }
    ctx->pc = 0x169E5Cu;
label_169e5c:
    // 0x169e5c: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x169e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_169e60:
    // 0x169e60: 0x132b80  sll         $a1, $s3, 14
    ctx->pc = 0x169e60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 14));
label_169e64:
    // 0x169e64: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x169e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
label_169e68:
    // 0x169e68: 0x325200ff  andi        $s2, $s2, 0xFF
    ctx->pc = 0x169e68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_169e6c:
    // 0x169e6c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x169e6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_169e70:
    // 0x169e70: 0x1221c0  sll         $a0, $s2, 7
    ctx->pc = 0x169e70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
label_169e74:
    // 0x169e74: 0x3c038600  lui         $v1, 0x8600
    ctx->pc = 0x169e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34304 << 16));
label_169e78:
    // 0x169e78: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x169e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_169e7c:
    // 0x169e7c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x169e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_169e80:
    // 0x169e80: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x169e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_169e84:
    // 0x169e84: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x169e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169e88:
    // 0x169e88: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x169e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_169e8c:
    // 0x169e8c: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x169e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_169e90:
    // 0x169e90: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x169e90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_169e94:
    // 0x169e94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_169e98:
    // 0x169e98: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x169e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_169e9c:
    // 0x169e9c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x169e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169ea0:
    // 0x169ea0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x169ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_169ea4:
    // 0x169ea4: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x169ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_169ea8:
    // 0x169ea8: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x169ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169eac:
    // 0x169eac: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x169eacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_169eb0:
    // 0x169eb0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_169eb4:
    if (ctx->pc == 0x169EB4u) {
        ctx->pc = 0x169EB8u;
        goto label_169eb8;
    }
    ctx->pc = 0x169EB0u;
    {
        const bool branch_taken_0x169eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169eb0) {
            ctx->pc = 0x169EDCu;
            goto label_169edc;
        }
    }
    ctx->pc = 0x169EB8u;
label_169eb8:
    // 0x169eb8: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x169eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169ebc:
    // 0x169ebc: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x169ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_169ec0:
    // 0x169ec0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_169ec4:
    // 0x169ec4: 0xc08d61c  jal         func_235870
label_169ec8:
    if (ctx->pc == 0x169EC8u) {
        ctx->pc = 0x169EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EC4u;
        // 0x169ec8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169ECCu;
        goto label_169ecc;
    }
    ctx->pc = 0x169EC4u;
    SET_GPR_U32(ctx, 31, 0x169ECCu);
    ctx->pc = 0x169EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169EC4u;
    // 0x169ec8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x169ECCu;
label_169ecc:
    // 0x169ecc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x169eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_169ed0:
    // 0x169ed0: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_169ed4:
    if (ctx->pc == 0x169ED4u) {
        ctx->pc = 0x169ED8u;
        goto label_169ed8;
    }
    ctx->pc = 0x169ED0u;
    {
        const bool branch_taken_0x169ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x169ed0) {
            ctx->pc = 0x169EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169eb8;
        }
    }
    ctx->pc = 0x169ED8u;
label_169ed8:
    // 0x169ed8: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x169ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_169edc:
    // 0x169edc: 0x1399c0  sll         $s3, $s3, 7
    ctx->pc = 0x169edcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
label_169ee0:
    // 0x169ee0: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x169ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_169ee4:
    // 0x169ee4: 0x2632025  or          $a0, $s3, $v1
    ctx->pc = 0x169ee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_169ee8:
    // 0x169ee8: 0x2449025  or          $s2, $s2, $a0
    ctx->pc = 0x169ee8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
label_169eec:
    // 0x169eec: 0x3c034600  lui         $v1, 0x4600
    ctx->pc = 0x169eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17920 << 16));
label_169ef0:
    // 0x169ef0: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x169ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169ef4:
    // 0x169ef4: 0x2432825  or          $a1, $s2, $v1
    ctx->pc = 0x169ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
label_169ef8:
    // 0x169ef8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x169ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_169efc:
    // 0x169efc: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x169efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_169f00:
    // 0x169f00: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x169f00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_169f04:
    // 0x169f04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_169f08:
    // 0x169f08: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x169f08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_169f0c:
    // 0x169f0c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x169f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169f10:
    // 0x169f10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x169f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_169f14:
    // 0x169f14: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x169f14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_169f18:
    // 0x169f18: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x169f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169f1c:
    // 0x169f1c: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x169f1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_169f20:
    // 0x169f20: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_169f24:
    if (ctx->pc == 0x169F24u) {
        ctx->pc = 0x169F28u;
        goto label_169f28;
    }
    ctx->pc = 0x169F20u;
    {
        const bool branch_taken_0x169f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169f20) {
            ctx->pc = 0x169F4Cu;
            goto label_169f4c;
        }
    }
    ctx->pc = 0x169F28u;
label_169f28:
    // 0x169f28: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x169f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169f2c:
    // 0x169f2c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x169f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_169f30:
    // 0x169f30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_169f34:
    // 0x169f34: 0xc08d61c  jal         func_235870
label_169f38:
    if (ctx->pc == 0x169F38u) {
        ctx->pc = 0x169F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F34u;
        // 0x169f38: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169F3Cu;
        goto label_169f3c;
    }
    ctx->pc = 0x169F34u;
    SET_GPR_U32(ctx, 31, 0x169F3Cu);
    ctx->pc = 0x169F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169F34u;
    // 0x169f38: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x169F3Cu;
label_169f3c:
    // 0x169f3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x169f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_169f40:
    // 0x169f40: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_169f44:
    if (ctx->pc == 0x169F44u) {
        ctx->pc = 0x169F48u;
        goto label_169f48;
    }
    ctx->pc = 0x169F40u;
    {
        const bool branch_taken_0x169f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x169f40) {
            ctx->pc = 0x169F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169f28;
        }
    }
    ctx->pc = 0x169F48u;
label_169f48:
    // 0x169f48: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x169f48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_169f4c:
    // 0x169f4c: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x169f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169f50:
    // 0x169f50: 0x3c03660f  lui         $v1, 0x660F
    ctx->pc = 0x169f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26127 << 16));
label_169f54:
    // 0x169f54: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x169f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_169f58:
    // 0x169f58: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x169f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_169f5c:
    // 0x169f5c: 0x2652825  or          $a1, $s3, $a1
    ctx->pc = 0x169f5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 5));
label_169f60:
    // 0x169f60: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x169f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_169f64:
    // 0x169f64: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x169f64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_169f68:
    // 0x169f68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_169f6c:
    // 0x169f6c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x169f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_169f70:
    // 0x169f70: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x169f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169f74:
    // 0x169f74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x169f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_169f78:
    // 0x169f78: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x169f78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_169f7c:
    // 0x169f7c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x169f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169f80:
    // 0x169f80: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x169f80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_169f84:
    // 0x169f84: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_169f88:
    if (ctx->pc == 0x169F88u) {
        ctx->pc = 0x169F8Cu;
        goto label_169f8c;
    }
    ctx->pc = 0x169F84u;
    {
        const bool branch_taken_0x169f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169f84) {
            ctx->pc = 0x169FB0u;
            goto label_169fb0;
        }
    }
    ctx->pc = 0x169F8Cu;
label_169f8c:
    // 0x169f8c: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x169f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169f90:
    // 0x169f90: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x169f90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_169f94:
    // 0x169f94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x169f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_169f98:
    // 0x169f98: 0xc08d61c  jal         func_235870
label_169f9c:
    if (ctx->pc == 0x169F9Cu) {
        ctx->pc = 0x169F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F98u;
        // 0x169f9c: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169FA0u;
        goto label_169fa0;
    }
    ctx->pc = 0x169F98u;
    SET_GPR_U32(ctx, 31, 0x169FA0u);
    ctx->pc = 0x169F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169F98u;
    // 0x169f9c: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x169FA0u;
label_169fa0:
    // 0x169fa0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x169fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_169fa4:
    // 0x169fa4: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_169fa8:
    if (ctx->pc == 0x169FA8u) {
        ctx->pc = 0x169FACu;
        goto label_169fac;
    }
    ctx->pc = 0x169FA4u;
    {
        const bool branch_taken_0x169fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x169fa4) {
            ctx->pc = 0x169F8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169f8c;
        }
    }
    ctx->pc = 0x169FACu;
label_169fac:
    // 0x169fac: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x169facu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_169fb0:
    // 0x169fb0: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x169fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169fb4:
    // 0x169fb4: 0x3c035600  lui         $v1, 0x5600
    ctx->pc = 0x169fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22016 << 16));
label_169fb8:
    // 0x169fb8: 0x2432825  or          $a1, $s2, $v1
    ctx->pc = 0x169fb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
label_169fbc:
    // 0x169fbc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x169fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_169fc0:
    // 0x169fc0: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x169fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_169fc4:
    // 0x169fc4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x169fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_169fc8:
    // 0x169fc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_169fcc:
    // 0x169fcc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x169fccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_169fd0:
    // 0x169fd0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x169fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_169fd4:
    // 0x169fd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x169fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_169fd8:
    // 0x169fd8: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x169fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_169fdc:
    // 0x169fdc: 0x27848190  addiu       $a0, $gp, -0x7E70
    ctx->pc = 0x169fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934928));
label_169fe0:
    // 0x169fe0: 0x278381a0  addiu       $v1, $gp, -0x7E60
    ctx->pc = 0x169fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934944));
label_169fe4:
    // 0x169fe4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x169fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_169fe8:
    // 0x169fe8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x169fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_169fec:
    // 0x169fec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x169fecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_169ff0:
    // 0x169ff0: 0x1000000d  b           . + 4 + (0xD << 2)
label_169ff4:
    if (ctx->pc == 0x169FF4u) {
        ctx->pc = 0x169FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FF0u;
        // 0x169ff4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169FF8u;
        goto label_169ff8;
    }
    ctx->pc = 0x169FF0u;
    {
        const bool branch_taken_0x169ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FF0u;
        // 0x169ff4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ff0) {
            ctx->pc = 0x16A028u;
            goto label_16a028;
        }
    }
    ctx->pc = 0x169FF8u;
label_169ff8:
    // 0x169ff8: 0x10c3000b  beq         $a2, $v1, . + 4 + (0xB << 2)
label_169ffc:
    if (ctx->pc == 0x169FFCu) {
        ctx->pc = 0x16A000u;
        goto label_16a000;
    }
    ctx->pc = 0x169FF8u;
    {
        const bool branch_taken_0x169ff8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x169ff8) {
            ctx->pc = 0x16A028u;
            goto label_16a028;
        }
    }
    ctx->pc = 0x16A000u;
label_16a000:
    // 0x16a000: 0x10670009  beq         $v1, $a3, . + 4 + (0x9 << 2)
label_16a004:
    if (ctx->pc == 0x16A004u) {
        ctx->pc = 0x16A008u;
        goto label_16a008;
    }
    ctx->pc = 0x16A000u;
    {
        const bool branch_taken_0x16a000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x16a000) {
            ctx->pc = 0x16A028u;
            goto label_16a028;
        }
    }
    ctx->pc = 0x16A008u;
label_16a008:
    // 0x16a008: 0x153080  sll         $a2, $s5, 2
    ctx->pc = 0x16a008u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_16a00c:
    // 0x16a00c: 0x278481a0  addiu       $a0, $gp, -0x7E60
    ctx->pc = 0x16a00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934944));
label_16a010:
    // 0x16a010: 0x27838198  addiu       $v1, $gp, -0x7E68
    ctx->pc = 0x16a010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934936));
label_16a014:
    // 0x16a014: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16a014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a018:
    // 0x16a018: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x16a018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_16a01c:
    // 0x16a01c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x16a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_16a020:
    // 0x16a020: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x16a020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_16a024:
    // 0x16a024: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x16a024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_16a028:
    // 0x16a028: 0x278381c8  addiu       $v1, $gp, -0x7E38
    ctx->pc = 0x16a028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934984));
label_16a02c:
    // 0x16a02c: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x16a02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16a030:
    // 0x16a030: 0x758821  addu        $s1, $v1, $s5
    ctx->pc = 0x16a030u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_16a034:
    // 0x16a034: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x16a034u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_16a038:
    // 0x16a038: 0x10830096  beq         $a0, $v1, . + 4 + (0x96 << 2)
label_16a03c:
    if (ctx->pc == 0x16A03Cu) {
        ctx->pc = 0x16A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A038u;
        // 0x16a03c: 0x159080  sll         $s2, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A040u;
        goto label_16a040;
    }
    ctx->pc = 0x16A038u;
    {
        const bool branch_taken_0x16a038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A038u;
        // 0x16a03c: 0x159080  sll         $s2, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a038) {
            ctx->pc = 0x16A294u;
            { ctx->pc = 0x16a294; return; }
        }
    }
    ctx->pc = 0x16A040u;
label_16a040:
    // 0x16a040: 0x159080  sll         $s2, $s5, 2
    ctx->pc = 0x16a040u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_16a044:
    // 0x16a044: 0x278481a0  addiu       $a0, $gp, -0x7E60
    ctx->pc = 0x16a044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934944));
label_16a048:
    // 0x16a048: 0x922821  addu        $a1, $a0, $s2
    ctx->pc = 0x16a048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_16a04c:
    // 0x16a04c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16a04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16a050:
    // 0x16a050: 0x1480008f  bnez        $a0, . + 4 + (0x8F << 2)
label_16a054:
    if (ctx->pc == 0x16A054u) {
        ctx->pc = 0x16A058u;
        goto label_16a058;
    }
    ctx->pc = 0x16A050u;
    {
        const bool branch_taken_0x16a050 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a050) {
            ctx->pc = 0x16A290u;
            { ctx->pc = 0x16a290; return; }
        }
    }
    ctx->pc = 0x16A058u;
label_16a058:
    // 0x16a058: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x16a058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_16a05c:
    // 0x16a05c: 0x14640089  bne         $v1, $a0, . + 4 + (0x89 << 2)
label_16a060:
    if (ctx->pc == 0x16A060u) {
        ctx->pc = 0x16A064u;
        goto label_16a064;
    }
    ctx->pc = 0x16A05Cu;
    {
        const bool branch_taken_0x16a05c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x16a05c) {
            ctx->pc = 0x16A284u;
            { ctx->pc = 0x16a284; return; }
        }
    }
    ctx->pc = 0x16A064u;
label_16a064:
    // 0x16a064: 0x27838198  addiu       $v1, $gp, -0x7E68
    ctx->pc = 0x16a064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934936));
label_16a068:
    // 0x16a068: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16a068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a06c:
    // 0x16a06c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x16a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_16a070:
    // 0x16a070: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x16a070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_16a074:
    // 0x16a074: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16a074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16a078:
    // 0x16a078: 0x27838188  addiu       $v1, $gp, -0x7E78
    ctx->pc = 0x16a078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934920));
label_16a07c:
    // 0x16a07c: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x16a07cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
label_16a080:
    // 0x16a080: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x16a080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_16a084:
    // 0x16a084: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x16a084u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_16a088:
    // 0x16a088: 0x92310000  lbu         $s1, 0x0($s1)
    ctx->pc = 0x16a088u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_16a08c:
    // 0x16a08c: 0x2a210020  slti        $at, $s1, 0x20
    ctx->pc = 0x16a08cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_16a090:
    // 0x16a090: 0x10200078  beqz        $at, . + 4 + (0x78 << 2)
label_16a094:
    if (ctx->pc == 0x16A094u) {
        ctx->pc = 0x16A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A090u;
        // 0x16a094: 0x90700000  lbu         $s0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A098u;
        goto label_16a098;
    }
    ctx->pc = 0x16A090u;
    {
        const bool branch_taken_0x16a090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A090u;
        // 0x16a094: 0x90700000  lbu         $s0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a090) {
            ctx->pc = 0x16A274u;
            { ctx->pc = 0x16a274; return; }
        }
    }
    ctx->pc = 0x16A098u;
label_16a098:
    // 0x16a098: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16a098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16a09c:
    // 0x16a09c: 0x2252804  sllv        $a1, $a1, $s1
    ctx->pc = 0x16a09cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
label_16a0a0:
    // 0x16a0a0: 0x8c241ed8  lw          $a0, 0x1ED8($at)
    ctx->pc = 0x16a0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7896)));
label_16a0a4:
    // 0x16a0a4: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x16a0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_16a0a8:
    // 0x16a0a8: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
label_16a0ac:
    if (ctx->pc == 0x16A0ACu) {
        ctx->pc = 0x16A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0A8u;
        // 0x16a0ac: 0x27838190  addiu       $v1, $gp, -0x7E70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A0B0u;
        goto label_16a0b0;
    }
    ctx->pc = 0x16A0A8u;
    {
        const bool branch_taken_0x16a0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0A8u;
        // 0x16a0ac: 0x27838190  addiu       $v1, $gp, -0x7E70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a0a8) {
            ctx->pc = 0x16A278u;
            { ctx->pc = 0x16a278; return; }
        }
    }
    ctx->pc = 0x16A0B0u;
label_16a0b0:
    // 0x16a0b0: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16a0b4:
    // 0x16a0b4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x16a0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_16a0b8:
    // 0x16a0b8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16a0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16a0bc:
    // 0x16a0bc: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
label_16a0c0:
    if (ctx->pc == 0x16A0C0u) {
        ctx->pc = 0x16A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0BCu;
        // 0x16a0c0: 0xac241ed8  sw          $a0, 0x1ED8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A0C4u;
        goto label_16a0c4;
    }
    ctx->pc = 0x16A0BCu;
    {
        const bool branch_taken_0x16a0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0BCu;
        // 0x16a0c0: 0xac241ed8  sw          $a0, 0x1ED8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a0bc) {
            ctx->pc = 0x16A274u;
            { ctx->pc = 0x16a274; return; }
        }
    }
    ctx->pc = 0x16A0C4u;
label_16a0c4:
    // 0x16a0c4: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a0c8:
    // 0x16a0c8: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16a0c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16a0cc:
    // 0x16a0cc: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16a0d0:
    if (ctx->pc == 0x16A0D0u) {
        ctx->pc = 0x16A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0CCu;
        // 0x16a0d0: 0x112b80  sll         $a1, $s1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A0D4u;
        goto label_16a0d4;
    }
    ctx->pc = 0x16A0CCu;
    {
        const bool branch_taken_0x16a0cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0CCu;
        // 0x16a0d0: 0x112b80  sll         $a1, $s1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a0cc) {
            ctx->pc = 0x16A0FCu;
            goto label_16a0fc;
        }
    }
    ctx->pc = 0x16A0D4u;
label_16a0d4:
    // 0x16a0d4: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16a0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a0d8:
    // 0x16a0d8: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16a0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16a0dc:
    // 0x16a0dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16a0e0:
    // 0x16a0e0: 0xc08d61c  jal         func_235870
label_16a0e4:
    if (ctx->pc == 0x16A0E4u) {
        ctx->pc = 0x16A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0E0u;
        // 0x16a0e4: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A0E8u;
        goto label_16a0e8;
    }
    ctx->pc = 0x16A0E0u;
    SET_GPR_U32(ctx, 31, 0x16A0E8u);
    ctx->pc = 0x16A0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A0E0u;
    // 0x16a0e4: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16A0E8u;
label_16a0e8:
    // 0x16a0e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a0ec:
    // 0x16a0ec: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16a0f0:
    if (ctx->pc == 0x16A0F0u) {
        ctx->pc = 0x16A0F4u;
        goto label_16a0f4;
    }
    ctx->pc = 0x16A0ECu;
    {
        const bool branch_taken_0x16a0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a0ec) {
            ctx->pc = 0x16A0D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a0d4;
        }
    }
    ctx->pc = 0x16A0F4u;
label_16a0f4:
    // 0x16a0f4: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16a0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16a0f8:
    // 0x16a0f8: 0x112b80  sll         $a1, $s1, 14
    ctx->pc = 0x16a0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 14));
label_16a0fc:
    // 0x16a0fc: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x16a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
label_16a100:
    // 0x16a100: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x16a100u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16a104:
    // 0x16a104: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16a104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_16a108:
    // 0x16a108: 0x1021c0  sll         $a0, $s0, 7
    ctx->pc = 0x16a108u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
label_16a10c:
    // 0x16a10c: 0x3c038600  lui         $v1, 0x8600
    ctx->pc = 0x16a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34304 << 16));
label_16a110:
    // 0x16a110: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x16a110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_16a114:
    // 0x16a114: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x16a114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_16a118:
    // 0x16a118: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x16a118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16a11c:
    // 0x16a11c: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    ctx->pc = 0x16a120u;
    return;
}
