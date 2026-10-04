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


void FUN_0017faa0_part564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x292910u: goto label_292910;
        case 0x292914u: goto label_292914;
        case 0x292918u: goto label_292918;
        case 0x29291cu: goto label_29291c;
        case 0x292920u: goto label_292920;
        case 0x292924u: goto label_292924;
        case 0x292928u: goto label_292928;
        case 0x29292cu: goto label_29292c;
        case 0x292930u: goto label_292930;
        case 0x292934u: goto label_292934;
        case 0x292938u: goto label_292938;
        case 0x29293cu: goto label_29293c;
        case 0x292940u: goto label_292940;
        case 0x292944u: goto label_292944;
        case 0x292948u: goto label_292948;
        case 0x29294cu: goto label_29294c;
        case 0x292950u: goto label_292950;
        case 0x292954u: goto label_292954;
        case 0x292958u: goto label_292958;
        case 0x29295cu: goto label_29295c;
        case 0x292960u: goto label_292960;
        case 0x292964u: goto label_292964;
        case 0x292968u: goto label_292968;
        case 0x29296cu: goto label_29296c;
        case 0x292970u: goto label_292970;
        case 0x292974u: goto label_292974;
        case 0x292978u: goto label_292978;
        case 0x29297cu: goto label_29297c;
        case 0x292980u: goto label_292980;
        case 0x292984u: goto label_292984;
        case 0x292988u: goto label_292988;
        case 0x29298cu: goto label_29298c;
        case 0x292990u: goto label_292990;
        case 0x292994u: goto label_292994;
        case 0x292998u: goto label_292998;
        case 0x29299cu: goto label_29299c;
        case 0x2929a0u: goto label_2929a0;
        case 0x2929a4u: goto label_2929a4;
        case 0x2929a8u: goto label_2929a8;
        case 0x2929acu: goto label_2929ac;
        case 0x2929b0u: goto label_2929b0;
        case 0x2929b4u: goto label_2929b4;
        case 0x2929b8u: goto label_2929b8;
        case 0x2929bcu: goto label_2929bc;
        case 0x2929c0u: goto label_2929c0;
        case 0x2929c4u: goto label_2929c4;
        case 0x2929c8u: goto label_2929c8;
        case 0x2929ccu: goto label_2929cc;
        case 0x2929d0u: goto label_2929d0;
        case 0x2929d4u: goto label_2929d4;
        case 0x2929d8u: goto label_2929d8;
        case 0x2929dcu: goto label_2929dc;
        case 0x2929e0u: goto label_2929e0;
        case 0x2929e4u: goto label_2929e4;
        case 0x2929e8u: goto label_2929e8;
        case 0x2929ecu: goto label_2929ec;
        case 0x2929f0u: goto label_2929f0;
        case 0x2929f4u: goto label_2929f4;
        case 0x2929f8u: goto label_2929f8;
        case 0x2929fcu: goto label_2929fc;
        case 0x292a00u: goto label_292a00;
        case 0x292a04u: goto label_292a04;
        case 0x292a08u: goto label_292a08;
        case 0x292a0cu: goto label_292a0c;
        case 0x292a10u: goto label_292a10;
        case 0x292a14u: goto label_292a14;
        case 0x292a18u: goto label_292a18;
        case 0x292a1cu: goto label_292a1c;
        case 0x292a20u: goto label_292a20;
        case 0x292a24u: goto label_292a24;
        case 0x292a28u: goto label_292a28;
        case 0x292a2cu: goto label_292a2c;
        case 0x292a30u: goto label_292a30;
        case 0x292a34u: goto label_292a34;
        case 0x292a38u: goto label_292a38;
        case 0x292a3cu: goto label_292a3c;
        case 0x292a40u: goto label_292a40;
        case 0x292a44u: goto label_292a44;
        case 0x292a48u: goto label_292a48;
        case 0x292a4cu: goto label_292a4c;
        case 0x292a50u: goto label_292a50;
        case 0x292a54u: goto label_292a54;
        case 0x292a58u: goto label_292a58;
        case 0x292a5cu: goto label_292a5c;
        case 0x292a60u: goto label_292a60;
        case 0x292a64u: goto label_292a64;
        case 0x292a68u: goto label_292a68;
        case 0x292a6cu: goto label_292a6c;
        case 0x292a70u: goto label_292a70;
        case 0x292a74u: goto label_292a74;
        case 0x292a78u: goto label_292a78;
        case 0x292a7cu: goto label_292a7c;
        case 0x292a80u: goto label_292a80;
        case 0x292a84u: goto label_292a84;
        case 0x292a88u: goto label_292a88;
        case 0x292a8cu: goto label_292a8c;
        case 0x292a90u: goto label_292a90;
        case 0x292a94u: goto label_292a94;
        case 0x292a98u: goto label_292a98;
        case 0x292a9cu: goto label_292a9c;
        case 0x292aa0u: goto label_292aa0;
        case 0x292aa4u: goto label_292aa4;
        case 0x292aa8u: goto label_292aa8;
        case 0x292aacu: goto label_292aac;
        case 0x292ab0u: goto label_292ab0;
        case 0x292ab4u: goto label_292ab4;
        case 0x292ab8u: goto label_292ab8;
        case 0x292abcu: goto label_292abc;
        case 0x292ac0u: goto label_292ac0;
        case 0x292ac4u: goto label_292ac4;
        case 0x292ac8u: goto label_292ac8;
        case 0x292accu: goto label_292acc;
        case 0x292ad0u: goto label_292ad0;
        case 0x292ad4u: goto label_292ad4;
        case 0x292ad8u: goto label_292ad8;
        case 0x292adcu: goto label_292adc;
        case 0x292ae0u: goto label_292ae0;
        case 0x292ae4u: goto label_292ae4;
        case 0x292ae8u: goto label_292ae8;
        case 0x292aecu: goto label_292aec;
        case 0x292af0u: goto label_292af0;
        case 0x292af4u: goto label_292af4;
        case 0x292af8u: goto label_292af8;
        case 0x292afcu: goto label_292afc;
        case 0x292b00u: goto label_292b00;
        case 0x292b04u: goto label_292b04;
        case 0x292b08u: goto label_292b08;
        case 0x292b0cu: goto label_292b0c;
        case 0x292b10u: goto label_292b10;
        case 0x292b14u: goto label_292b14;
        case 0x292b18u: goto label_292b18;
        case 0x292b1cu: goto label_292b1c;
        case 0x292b20u: goto label_292b20;
        case 0x292b24u: goto label_292b24;
        case 0x292b28u: goto label_292b28;
        case 0x292b2cu: goto label_292b2c;
        case 0x292b30u: goto label_292b30;
        case 0x292b34u: goto label_292b34;
        case 0x292b38u: goto label_292b38;
        case 0x292b3cu: goto label_292b3c;
        case 0x292b40u: goto label_292b40;
        case 0x292b44u: goto label_292b44;
        case 0x292b48u: goto label_292b48;
        case 0x292b4cu: goto label_292b4c;
        case 0x292b50u: goto label_292b50;
        case 0x292b54u: goto label_292b54;
        case 0x292b58u: goto label_292b58;
        case 0x292b5cu: goto label_292b5c;
        case 0x292b60u: goto label_292b60;
        case 0x292b64u: goto label_292b64;
        case 0x292b68u: goto label_292b68;
        case 0x292b6cu: goto label_292b6c;
        case 0x292b70u: goto label_292b70;
        case 0x292b74u: goto label_292b74;
        case 0x292b78u: goto label_292b78;
        case 0x292b7cu: goto label_292b7c;
        case 0x292b80u: goto label_292b80;
        case 0x292b84u: goto label_292b84;
        case 0x292b88u: goto label_292b88;
        case 0x292b8cu: goto label_292b8c;
        case 0x292b90u: goto label_292b90;
        case 0x292b94u: goto label_292b94;
        case 0x292b98u: goto label_292b98;
        case 0x292b9cu: goto label_292b9c;
        case 0x292ba0u: goto label_292ba0;
        case 0x292ba4u: goto label_292ba4;
        case 0x292ba8u: goto label_292ba8;
        case 0x292bacu: goto label_292bac;
        case 0x292bb0u: goto label_292bb0;
        case 0x292bb4u: goto label_292bb4;
        case 0x292bb8u: goto label_292bb8;
        case 0x292bbcu: goto label_292bbc;
        case 0x292bc0u: goto label_292bc0;
        case 0x292bc4u: goto label_292bc4;
        case 0x292bc8u: goto label_292bc8;
        case 0x292bccu: goto label_292bcc;
        case 0x292bd0u: goto label_292bd0;
        case 0x292bd4u: goto label_292bd4;
        case 0x292bd8u: goto label_292bd8;
        case 0x292bdcu: goto label_292bdc;
        case 0x292be0u: goto label_292be0;
        case 0x292be4u: goto label_292be4;
        case 0x292be8u: goto label_292be8;
        case 0x292becu: goto label_292bec;
        case 0x292bf0u: goto label_292bf0;
        case 0x292bf4u: goto label_292bf4;
        case 0x292bf8u: goto label_292bf8;
        case 0x292bfcu: goto label_292bfc;
        case 0x292c00u: goto label_292c00;
        case 0x292c04u: goto label_292c04;
        case 0x292c08u: goto label_292c08;
        case 0x292c0cu: goto label_292c0c;
        case 0x292c10u: goto label_292c10;
        case 0x292c14u: goto label_292c14;
        case 0x292c18u: goto label_292c18;
        case 0x292c1cu: goto label_292c1c;
        case 0x292c20u: goto label_292c20;
        case 0x292c24u: goto label_292c24;
        case 0x292c28u: goto label_292c28;
        case 0x292c2cu: goto label_292c2c;
        case 0x292c30u: goto label_292c30;
        case 0x292c34u: goto label_292c34;
        case 0x292c38u: goto label_292c38;
        case 0x292c3cu: goto label_292c3c;
        case 0x292c40u: goto label_292c40;
        case 0x292c44u: goto label_292c44;
        case 0x292c48u: goto label_292c48;
        case 0x292c4cu: goto label_292c4c;
        case 0x292c50u: goto label_292c50;
        case 0x292c54u: goto label_292c54;
        case 0x292c58u: goto label_292c58;
        case 0x292c5cu: goto label_292c5c;
        case 0x292c60u: goto label_292c60;
        case 0x292c64u: goto label_292c64;
        case 0x292c68u: goto label_292c68;
        case 0x292c6cu: goto label_292c6c;
        case 0x292c70u: goto label_292c70;
        case 0x292c74u: goto label_292c74;
        case 0x292c78u: goto label_292c78;
        case 0x292c7cu: goto label_292c7c;
        case 0x292c80u: goto label_292c80;
        case 0x292c84u: goto label_292c84;
        case 0x292c88u: goto label_292c88;
        case 0x292c8cu: goto label_292c8c;
        case 0x292c90u: goto label_292c90;
        case 0x292c94u: goto label_292c94;
        case 0x292c98u: goto label_292c98;
        case 0x292c9cu: goto label_292c9c;
        case 0x292ca0u: goto label_292ca0;
        case 0x292ca4u: goto label_292ca4;
        case 0x292ca8u: goto label_292ca8;
        case 0x292cacu: goto label_292cac;
        case 0x292cb0u: goto label_292cb0;
        case 0x292cb4u: goto label_292cb4;
        case 0x292cb8u: goto label_292cb8;
        case 0x292cbcu: goto label_292cbc;
        case 0x292cc0u: goto label_292cc0;
        case 0x292cc4u: goto label_292cc4;
        case 0x292cc8u: goto label_292cc8;
        case 0x292cccu: goto label_292ccc;
        case 0x292cd0u: goto label_292cd0;
        case 0x292cd4u: goto label_292cd4;
        case 0x292cd8u: goto label_292cd8;
        case 0x292cdcu: goto label_292cdc;
        case 0x292ce0u: goto label_292ce0;
        case 0x292ce4u: goto label_292ce4;
        case 0x292ce8u: goto label_292ce8;
        case 0x292cecu: goto label_292cec;
        case 0x292cf0u: goto label_292cf0;
        case 0x292cf4u: goto label_292cf4;
        case 0x292cf8u: goto label_292cf8;
        case 0x292cfcu: goto label_292cfc;
        case 0x292d00u: goto label_292d00;
        case 0x292d04u: goto label_292d04;
        case 0x292d08u: goto label_292d08;
        case 0x292d0cu: goto label_292d0c;
        case 0x292d10u: goto label_292d10;
        case 0x292d14u: goto label_292d14;
        case 0x292d18u: goto label_292d18;
        case 0x292d1cu: goto label_292d1c;
        case 0x292d20u: goto label_292d20;
        case 0x292d24u: goto label_292d24;
        case 0x292d28u: goto label_292d28;
        case 0x292d2cu: goto label_292d2c;
        case 0x292d30u: goto label_292d30;
        case 0x292d34u: goto label_292d34;
        case 0x292d38u: goto label_292d38;
        case 0x292d3cu: goto label_292d3c;
        case 0x292d40u: goto label_292d40;
        case 0x292d44u: goto label_292d44;
        case 0x292d48u: goto label_292d48;
        case 0x292d4cu: goto label_292d4c;
        case 0x292d50u: goto label_292d50;
        case 0x292d54u: goto label_292d54;
        case 0x292d58u: goto label_292d58;
        case 0x292d5cu: goto label_292d5c;
        case 0x292d60u: goto label_292d60;
        case 0x292d64u: goto label_292d64;
        case 0x292d68u: goto label_292d68;
        case 0x292d6cu: goto label_292d6c;
        case 0x292d70u: goto label_292d70;
        case 0x292d74u: goto label_292d74;
        case 0x292d78u: goto label_292d78;
        case 0x292d7cu: goto label_292d7c;
        case 0x292d80u: goto label_292d80;
        case 0x292d84u: goto label_292d84;
        case 0x292d88u: goto label_292d88;
        case 0x292d8cu: goto label_292d8c;
        case 0x292d90u: goto label_292d90;
        case 0x292d94u: goto label_292d94;
        case 0x292d98u: goto label_292d98;
        case 0x292d9cu: goto label_292d9c;
        case 0x292da0u: goto label_292da0;
        case 0x292da4u: goto label_292da4;
        case 0x292da8u: goto label_292da8;
        case 0x292dacu: goto label_292dac;
        case 0x292db0u: goto label_292db0;
        case 0x292db4u: goto label_292db4;
        case 0x292db8u: goto label_292db8;
        case 0x292dbcu: goto label_292dbc;
        case 0x292dc0u: goto label_292dc0;
        case 0x292dc4u: goto label_292dc4;
        case 0x292dc8u: goto label_292dc8;
        case 0x292dccu: goto label_292dcc;
        case 0x292dd0u: goto label_292dd0;
        case 0x292dd4u: goto label_292dd4;
        case 0x292dd8u: goto label_292dd8;
        case 0x292ddcu: goto label_292ddc;
        case 0x292de0u: goto label_292de0;
        case 0x292de4u: goto label_292de4;
        case 0x292de8u: goto label_292de8;
        case 0x292decu: goto label_292dec;
        case 0x292df0u: goto label_292df0;
        case 0x292df4u: goto label_292df4;
        case 0x292df8u: goto label_292df8;
        case 0x292dfcu: goto label_292dfc;
        case 0x292e00u: goto label_292e00;
        case 0x292e04u: goto label_292e04;
        case 0x292e08u: goto label_292e08;
        case 0x292e0cu: goto label_292e0c;
        case 0x292e10u: goto label_292e10;
        case 0x292e14u: goto label_292e14;
        case 0x292e18u: goto label_292e18;
        case 0x292e1cu: goto label_292e1c;
        case 0x292e20u: goto label_292e20;
        case 0x292e24u: goto label_292e24;
        case 0x292e28u: goto label_292e28;
        case 0x292e2cu: goto label_292e2c;
        case 0x292e30u: goto label_292e30;
        case 0x292e34u: goto label_292e34;
        case 0x292e38u: goto label_292e38;
        case 0x292e3cu: goto label_292e3c;
        case 0x292e40u: goto label_292e40;
        case 0x292e44u: goto label_292e44;
        case 0x292e48u: goto label_292e48;
        case 0x292e4cu: goto label_292e4c;
        case 0x292e50u: goto label_292e50;
        case 0x292e54u: goto label_292e54;
        case 0x292e58u: goto label_292e58;
        case 0x292e5cu: goto label_292e5c;
        case 0x292e60u: goto label_292e60;
        case 0x292e64u: goto label_292e64;
        case 0x292e68u: goto label_292e68;
        case 0x292e6cu: goto label_292e6c;
        case 0x292e70u: goto label_292e70;
        case 0x292e74u: goto label_292e74;
        case 0x292e78u: goto label_292e78;
        case 0x292e7cu: goto label_292e7c;
        case 0x292e80u: goto label_292e80;
        case 0x292e84u: goto label_292e84;
        case 0x292e88u: goto label_292e88;
        case 0x292e8cu: goto label_292e8c;
        case 0x292e90u: goto label_292e90;
        case 0x292e94u: goto label_292e94;
        case 0x292e98u: goto label_292e98;
        case 0x292e9cu: goto label_292e9c;
        case 0x292ea0u: goto label_292ea0;
        case 0x292ea4u: goto label_292ea4;
        case 0x292ea8u: goto label_292ea8;
        case 0x292eacu: goto label_292eac;
        case 0x292eb0u: goto label_292eb0;
        case 0x292eb4u: goto label_292eb4;
        case 0x292eb8u: goto label_292eb8;
        case 0x292ebcu: goto label_292ebc;
        case 0x292ec0u: goto label_292ec0;
        case 0x292ec4u: goto label_292ec4;
        case 0x292ec8u: goto label_292ec8;
        case 0x292eccu: goto label_292ecc;
        case 0x292ed0u: goto label_292ed0;
        case 0x292ed4u: goto label_292ed4;
        case 0x292ed8u: goto label_292ed8;
        case 0x292edcu: goto label_292edc;
        case 0x292ee0u: goto label_292ee0;
        case 0x292ee4u: goto label_292ee4;
        case 0x292ee8u: goto label_292ee8;
        case 0x292eecu: goto label_292eec;
        case 0x292ef0u: goto label_292ef0;
        case 0x292ef4u: goto label_292ef4;
        case 0x292ef8u: goto label_292ef8;
        case 0x292efcu: goto label_292efc;
        case 0x292f00u: goto label_292f00;
        case 0x292f04u: goto label_292f04;
        case 0x292f08u: goto label_292f08;
        case 0x292f0cu: goto label_292f0c;
        case 0x292f10u: goto label_292f10;
        case 0x292f14u: goto label_292f14;
        case 0x292f18u: goto label_292f18;
        case 0x292f1cu: goto label_292f1c;
        case 0x292f20u: goto label_292f20;
        case 0x292f24u: goto label_292f24;
        case 0x292f28u: goto label_292f28;
        case 0x292f2cu: goto label_292f2c;
        case 0x292f30u: goto label_292f30;
        case 0x292f34u: goto label_292f34;
        case 0x292f38u: goto label_292f38;
        case 0x292f3cu: goto label_292f3c;
        case 0x292f40u: goto label_292f40;
        case 0x292f44u: goto label_292f44;
        case 0x292f48u: goto label_292f48;
        case 0x292f4cu: goto label_292f4c;
        case 0x292f50u: goto label_292f50;
        case 0x292f54u: goto label_292f54;
        case 0x292f58u: goto label_292f58;
        case 0x292f5cu: goto label_292f5c;
        case 0x292f60u: goto label_292f60;
        case 0x292f64u: goto label_292f64;
        case 0x292f68u: goto label_292f68;
        case 0x292f6cu: goto label_292f6c;
        case 0x292f70u: goto label_292f70;
        case 0x292f74u: goto label_292f74;
        case 0x292f78u: goto label_292f78;
        case 0x292f7cu: goto label_292f7c;
        case 0x292f80u: goto label_292f80;
        case 0x292f84u: goto label_292f84;
        case 0x292f88u: goto label_292f88;
        case 0x292f8cu: goto label_292f8c;
        case 0x292f90u: goto label_292f90;
        case 0x292f94u: goto label_292f94;
        case 0x292f98u: goto label_292f98;
        case 0x292f9cu: goto label_292f9c;
        case 0x292fa0u: goto label_292fa0;
        case 0x292fa4u: goto label_292fa4;
        case 0x292fa8u: goto label_292fa8;
        case 0x292facu: goto label_292fac;
        case 0x292fb0u: goto label_292fb0;
        case 0x292fb4u: goto label_292fb4;
        case 0x292fb8u: goto label_292fb8;
        case 0x292fbcu: goto label_292fbc;
        case 0x292fc0u: goto label_292fc0;
        case 0x292fc4u: goto label_292fc4;
        case 0x292fc8u: goto label_292fc8;
        case 0x292fccu: goto label_292fcc;
        case 0x292fd0u: goto label_292fd0;
        case 0x292fd4u: goto label_292fd4;
        case 0x292fd8u: goto label_292fd8;
        case 0x292fdcu: goto label_292fdc;
        case 0x292fe0u: goto label_292fe0;
        case 0x292fe4u: goto label_292fe4;
        case 0x292fe8u: goto label_292fe8;
        case 0x292fecu: goto label_292fec;
        case 0x292ff0u: goto label_292ff0;
        case 0x292ff4u: goto label_292ff4;
        case 0x292ff8u: goto label_292ff8;
        case 0x292ffcu: goto label_292ffc;
        case 0x293000u: goto label_293000;
        case 0x293004u: goto label_293004;
        case 0x293008u: goto label_293008;
        case 0x29300cu: goto label_29300c;
        case 0x293010u: goto label_293010;
        case 0x293014u: goto label_293014;
        case 0x293018u: goto label_293018;
        case 0x29301cu: goto label_29301c;
        case 0x293020u: goto label_293020;
        case 0x293024u: goto label_293024;
        case 0x293028u: goto label_293028;
        case 0x29302cu: goto label_29302c;
        case 0x293030u: goto label_293030;
        case 0x293034u: goto label_293034;
        case 0x293038u: goto label_293038;
        case 0x29303cu: goto label_29303c;
        case 0x293040u: goto label_293040;
        case 0x293044u: goto label_293044;
        case 0x293048u: goto label_293048;
        case 0x29304cu: goto label_29304c;
        case 0x293050u: goto label_293050;
        case 0x293054u: goto label_293054;
        case 0x293058u: goto label_293058;
        case 0x29305cu: goto label_29305c;
        case 0x293060u: goto label_293060;
        case 0x293064u: goto label_293064;
        case 0x293068u: goto label_293068;
        case 0x29306cu: goto label_29306c;
        case 0x293070u: goto label_293070;
        case 0x293074u: goto label_293074;
        case 0x293078u: goto label_293078;
        case 0x29307cu: goto label_29307c;
        case 0x293080u: goto label_293080;
        case 0x293084u: goto label_293084;
        case 0x293088u: goto label_293088;
        case 0x29308cu: goto label_29308c;
        case 0x293090u: goto label_293090;
        case 0x293094u: goto label_293094;
        case 0x293098u: goto label_293098;
        case 0x29309cu: goto label_29309c;
        case 0x2930a0u: goto label_2930a0;
        case 0x2930a4u: goto label_2930a4;
        case 0x2930a8u: goto label_2930a8;
        case 0x2930acu: goto label_2930ac;
        case 0x2930b0u: goto label_2930b0;
        case 0x2930b4u: goto label_2930b4;
        case 0x2930b8u: goto label_2930b8;
        case 0x2930bcu: goto label_2930bc;
        case 0x2930c0u: goto label_2930c0;
        case 0x2930c4u: goto label_2930c4;
        case 0x2930c8u: goto label_2930c8;
        case 0x2930ccu: goto label_2930cc;
        case 0x2930d0u: goto label_2930d0;
        case 0x2930d4u: goto label_2930d4;
        case 0x2930d8u: goto label_2930d8;
        case 0x2930dcu: goto label_2930dc;
        default: return;
    }

label_292910:
    // 0x292910: 0x874a  .word       0x0000874A                   # movz        $s0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292910u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_292914:
    // 0x292914: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x292914u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292918:
    // 0x292918: 0x391c0  sll         $s2, $v1, 7
    ctx->pc = 0x292918u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_29291c:
    // 0x29291c: 0x0  nop
    ctx->pc = 0x29291cu;
    // NOP
label_292920:
    // 0x292920: 0x87bd  .word       0x000087BD                   # INVALID     $zero, $zero, -0x7843 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292920u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x292920 raw=0x000087BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292924:
    // 0x292924: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292924u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292928:
    // 0x292928: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29292c:
    // 0x29292c: 0x0  nop
    ctx->pc = 0x29292cu;
    // NOP
label_292930:
    // 0x292930: 0x87bf  dsra32      $s0, $zero, 30
    ctx->pc = 0x292930u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 30));
label_292934:
    // 0x292934: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292934u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292938:
    // 0x292938: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292938u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29293c:
    // 0x29293c: 0x0  nop
    ctx->pc = 0x29293cu;
    // NOP
label_292940:
    // 0x292940: 0x87c1  .word       0x000087C1                   # INVALID     $zero, $zero, -0x783F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292940 raw=0x000087C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292944:
    // 0x292944: 0xb0  tge         $zero, $zero, 2
    ctx->pc = 0x292944u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292948:
    // 0x292948: 0x57a10  .word       0x00057A10                   # mfhi        $t7 # 00050200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292948u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_29294c:
    // 0x29294c: 0x0  nop
    ctx->pc = 0x29294cu;
    // NOP
label_292950:
    // 0x292950: 0x8871  tgeu        $zero, $zero, 545
    ctx->pc = 0x292950u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292954:
    // 0x292954: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292954u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292958:
    // 0x292958: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29295c:
    // 0x29295c: 0x0  nop
    ctx->pc = 0x29295cu;
    // NOP
label_292960:
    // 0x292960: 0x8873  tltu        $zero, $zero, 545
    ctx->pc = 0x292960u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292964:
    // 0x292964: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292964u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292968:
    // 0x292968: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292968u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29296c:
    // 0x29296c: 0x0  nop
    ctx->pc = 0x29296cu;
    // NOP
label_292970:
    // 0x292970: 0x8875  .word       0x00008875                   # INVALID     $zero, $zero, -0x778B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292970u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x292970 raw=0x00008875"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292974:
    // 0x292974: 0xa9  .word       0x000000A9                   # mtsa        $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x292974u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_292978:
    // 0x292978: 0x546d0  .word       0x000546D0                   # mfhi        $t0 # 000506C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292978u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_29297c:
    // 0x29297c: 0x0  nop
    ctx->pc = 0x29297cu;
    // NOP
label_292980:
    // 0x292980: 0x891e  .word       0x0000891E                   # ddiv        $s1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292980u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x292980 raw=0x0000891E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292984:
    // 0x292984: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292984u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292988:
    // 0x292988: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29298c:
    // 0x29298c: 0x0  nop
    ctx->pc = 0x29298cu;
    // NOP
label_292990:
    // 0x292990: 0x8920  .word       0x00008920                   # add         $s1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292990u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_292994:
    // 0x292994: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292994u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292998:
    // 0x292998: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292998u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_29299c:
    // 0x29299c: 0x0  nop
    ctx->pc = 0x29299cu;
    // NOP
label_2929a0:
    // 0x2929a0: 0x8922  .word       0x00008922                   # neg         $s1, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2929a0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_2929a4:
    // 0x2929a4: 0x83  sra         $zero, $zero, 2
    ctx->pc = 0x2929a4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 2));
label_2929a8:
    // 0x2929a8: 0x41460  .word       0x00041460                   # add         $v0, $zero, $a0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2929a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2929ac:
    // 0x2929ac: 0x0  nop
    ctx->pc = 0x2929acu;
    // NOP
label_2929b0:
    // 0x2929b0: 0x89a5  .word       0x000089A5                   # move        $s1, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2929b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2929b4:
    // 0x2929b4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2929b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2929b8:
    // 0x2929b8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2929b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2929bc:
    // 0x2929bc: 0x0  nop
    ctx->pc = 0x2929bcu;
    // NOP
label_2929c0:
    // 0x2929c0: 0x89a7  .word       0x000089A7                   # not         $s1, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2929c0u;
    SET_GPR_U64(ctx, 17, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2929c4:
    // 0x2929c4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2929c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2929c8:
    // 0x2929c8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x2929c8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_2929cc:
    // 0x2929cc: 0x0  nop
    ctx->pc = 0x2929ccu;
    // NOP
label_2929d0:
    // 0x2929d0: 0x89a9  .word       0x000089A9                   # mtsa        $zero # 00008980 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2929d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2929d4:
    // 0x2929d4: 0x86  .word       0x00000086                   # srlv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2929d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2929d8:
    // 0x2929d8: 0x42f70  tge         $zero, $a0, 189
    ctx->pc = 0x2929d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_2929dc:
    // 0x2929dc: 0x0  nop
    ctx->pc = 0x2929dcu;
    // NOP
label_2929e0:
    // 0x2929e0: 0x8a2f  .word       0x00008A2F                   # dsubu       $s1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2929e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2929e4:
    // 0x2929e4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2929e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2929e8:
    // 0x2929e8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x2929e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2929ec:
    // 0x2929ec: 0x0  nop
    ctx->pc = 0x2929ecu;
    // NOP
label_2929f0:
    // 0x2929f0: 0x8a31  tgeu        $zero, $zero, 552
    ctx->pc = 0x2929f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2929f4:
    // 0x2929f4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2929f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2929f8:
    // 0x2929f8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x2929f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_2929fc:
    // 0x2929fc: 0x0  nop
    ctx->pc = 0x2929fcu;
    // NOP
label_292a00:
    // 0x292a00: 0x8a33  tltu        $zero, $zero, 552
    ctx->pc = 0x292a00u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292a04:
    // 0x292a04: 0xc3  sra         $zero, $zero, 3
    ctx->pc = 0x292a04u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 3));
label_292a08:
    // 0x292a08: 0x61360  .word       0x00061360                   # add         $v0, $zero, $a2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292a08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_292a0c:
    // 0x292a0c: 0x0  nop
    ctx->pc = 0x292a0cu;
    // NOP
label_292a10:
    // 0x292a10: 0x8af6  tne         $zero, $zero, 555
    ctx->pc = 0x292a10u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292a14:
    // 0x292a14: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292a14u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292a18:
    // 0x292a18: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292a1c:
    // 0x292a1c: 0x0  nop
    ctx->pc = 0x292a1cu;
    // NOP
label_292a20:
    // 0x292a20: 0x8af8  dsll        $s1, $zero, 11
    ctx->pc = 0x292a20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << 11);
label_292a24:
    // 0x292a24: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292a24u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292a28:
    // 0x292a28: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292a28u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292a2c:
    // 0x292a2c: 0x0  nop
    ctx->pc = 0x292a2cu;
    // NOP
label_292a30:
    // 0x292a30: 0x8afa  dsrl        $s1, $zero, 11
    ctx->pc = 0x292a30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> 11);
label_292a34:
    // 0x292a34: 0x7d  .word       0x0000007D                   # INVALID     $zero, $zero, 0x7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292a34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x292A34 raw=0x0000007D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292a38:
    // 0x292a38: 0x3e420  .word       0x0003E420                   # add         $gp, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292a38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_292a3c:
    // 0x292a3c: 0x0  nop
    ctx->pc = 0x292a3cu;
    // NOP
label_292a40:
    // 0x292a40: 0x8b77  .word       0x00008B77                   # INVALID     $zero, $zero, -0x7489 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292a40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x292A40 raw=0x00008B77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292a44:
    // 0x292a44: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292a44u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292a48:
    // 0x292a48: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292a4c:
    // 0x292a4c: 0x0  nop
    ctx->pc = 0x292a4cu;
    // NOP
label_292a50:
    // 0x292a50: 0x8b79  .word       0x00008B79                   # INVALID     $zero, $zero, -0x7487 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292a50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x292A50 raw=0x00008B79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292a54:
    // 0x292a54: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292a54u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292a58:
    // 0x292a58: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292a58u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292a5c:
    // 0x292a5c: 0x0  nop
    ctx->pc = 0x292a5cu;
    // NOP
label_292a60:
    // 0x292a60: 0x8b7b  dsra        $s1, $zero, 13
    ctx->pc = 0x292a60u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> 13);
label_292a64:
    // 0x292a64: 0xb5  .word       0x000000B5                   # INVALID     $zero, $zero, 0xB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292a64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x292A64 raw=0x000000B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292a68:
    // 0x292a68: 0x5a2b0  tge         $zero, $a1, 650
    ctx->pc = 0x292a68u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_292a6c:
    // 0x292a6c: 0x0  nop
    ctx->pc = 0x292a6cu;
    // NOP
label_292a70:
    // 0x292a70: 0x8c30  tge         $zero, $zero, 560
    ctx->pc = 0x292a70u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292a74:
    // 0x292a74: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292a74u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292a78:
    // 0x292a78: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292a7c:
    // 0x292a7c: 0x0  nop
    ctx->pc = 0x292a7cu;
    // NOP
label_292a80:
    // 0x292a80: 0x8c32  tlt         $zero, $zero, 560
    ctx->pc = 0x292a80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292a84:
    // 0x292a84: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292a84u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292a88:
    // 0x292a88: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292a88u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292a8c:
    // 0x292a8c: 0x0  nop
    ctx->pc = 0x292a8cu;
    // NOP
label_292a90:
    // 0x292a90: 0x8c34  teq         $zero, $zero, 560
    ctx->pc = 0x292a90u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292a94:
    // 0x292a94: 0x83  sra         $zero, $zero, 2
    ctx->pc = 0x292a94u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 2));
label_292a98:
    // 0x292a98: 0x41070  tge         $zero, $a0, 65
    ctx->pc = 0x292a98u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_292a9c:
    // 0x292a9c: 0x0  nop
    ctx->pc = 0x292a9cu;
    // NOP
label_292aa0:
    // 0x292aa0: 0x8cb7  .word       0x00008CB7                   # INVALID     $zero, $zero, -0x7349 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292aa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x292AA0 raw=0x00008CB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292aa4:
    // 0x292aa4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292aa4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292aa8:
    // 0x292aa8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292aac:
    // 0x292aac: 0x0  nop
    ctx->pc = 0x292aacu;
    // NOP
label_292ab0:
    // 0x292ab0: 0x8cb9  .word       0x00008CB9                   # INVALID     $zero, $zero, -0x7347 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ab0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x292AB0 raw=0x00008CB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292ab4:
    // 0x292ab4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292ab4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292ab8:
    // 0x292ab8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292abc:
    // 0x292abc: 0x0  nop
    ctx->pc = 0x292abcu;
    // NOP
label_292ac0:
    // 0x292ac0: 0x8cbb  dsra        $s1, $zero, 18
    ctx->pc = 0x292ac0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> 18);
label_292ac4:
    // 0x292ac4: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ac4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x292AC4 raw=0x00000075"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292ac8:
    // 0x292ac8: 0x3a390  .word       0x0003A390                   # mfhi        $s4 # 00030380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ac8u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_292acc:
    // 0x292acc: 0x0  nop
    ctx->pc = 0x292accu;
    // NOP
label_292ad0:
    // 0x292ad0: 0x8d30  tge         $zero, $zero, 564
    ctx->pc = 0x292ad0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292ad4:
    // 0x292ad4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292ad4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292ad8:
    // 0x292ad8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292adc:
    // 0x292adc: 0x0  nop
    ctx->pc = 0x292adcu;
    // NOP
label_292ae0:
    // 0x292ae0: 0x8d32  tlt         $zero, $zero, 564
    ctx->pc = 0x292ae0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292ae4:
    // 0x292ae4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292ae4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292ae8:
    // 0x292ae8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292aec:
    // 0x292aec: 0x0  nop
    ctx->pc = 0x292aecu;
    // NOP
label_292af0:
    // 0x292af0: 0x8d34  teq         $zero, $zero, 564
    ctx->pc = 0x292af0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292af4:
    // 0x292af4: 0x84  .word       0x00000084                   # sllv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292af4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292af8:
    // 0x292af8: 0x418a0  .word       0x000418A0                   # add         $v1, $zero, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292af8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_292afc:
    // 0x292afc: 0x0  nop
    ctx->pc = 0x292afcu;
    // NOP
label_292b00:
    // 0x292b00: 0x8db8  dsll        $s1, $zero, 22
    ctx->pc = 0x292b00u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << 22);
label_292b04:
    // 0x292b04: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292b04u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292b08:
    // 0x292b08: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292b0c:
    // 0x292b0c: 0x0  nop
    ctx->pc = 0x292b0cu;
    // NOP
label_292b10:
    // 0x292b10: 0x8dba  dsrl        $s1, $zero, 22
    ctx->pc = 0x292b10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> 22);
label_292b14:
    // 0x292b14: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292b14u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292b18:
    // 0x292b18: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292b18u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292b1c:
    // 0x292b1c: 0x0  nop
    ctx->pc = 0x292b1cu;
    // NOP
label_292b20:
    // 0x292b20: 0x8dbc  dsll32      $s1, $zero, 22
    ctx->pc = 0x292b20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << (32 + 22));
label_292b24:
    // 0x292b24: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x292b24u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292b28:
    // 0x292b28: 0x39b30  tge         $zero, $v1, 620
    ctx->pc = 0x292b28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_292b2c:
    // 0x292b2c: 0x0  nop
    ctx->pc = 0x292b2cu;
    // NOP
label_292b30:
    // 0x292b30: 0x8e30  tge         $zero, $zero, 568
    ctx->pc = 0x292b30u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292b34:
    // 0x292b34: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292b34u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292b38:
    // 0x292b38: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292b3c:
    // 0x292b3c: 0x0  nop
    ctx->pc = 0x292b3cu;
    // NOP
label_292b40:
    // 0x292b40: 0x8e32  tlt         $zero, $zero, 568
    ctx->pc = 0x292b40u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292b44:
    // 0x292b44: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292b44u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292b48:
    // 0x292b48: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292b48u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292b4c:
    // 0x292b4c: 0x0  nop
    ctx->pc = 0x292b4cu;
    // NOP
label_292b50:
    // 0x292b50: 0x8e34  teq         $zero, $zero, 568
    ctx->pc = 0x292b50u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292b54:
    // 0x292b54: 0x81  .word       0x00000081                   # INVALID     $zero, $zero, 0x81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292b54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292B54 raw=0x00000081"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292b58:
    // 0x292b58: 0x40320  .word       0x00040320                   # add         $zero, $zero, $a0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292b58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_292b5c:
    // 0x292b5c: 0x0  nop
    ctx->pc = 0x292b5cu;
    // NOP
label_292b60:
    // 0x292b60: 0x8eb5  .word       0x00008EB5                   # INVALID     $zero, $zero, -0x714B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292b60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x292B60 raw=0x00008EB5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292b64:
    // 0x292b64: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292b64u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292b68:
    // 0x292b68: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292b6c:
    // 0x292b6c: 0x0  nop
    ctx->pc = 0x292b6cu;
    // NOP
label_292b70:
    // 0x292b70: 0x8eb7  .word       0x00008EB7                   # INVALID     $zero, $zero, -0x7149 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292b70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x292B70 raw=0x00008EB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292b74:
    // 0x292b74: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292b74u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292b78:
    // 0x292b78: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292b78u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292b7c:
    // 0x292b7c: 0x0  nop
    ctx->pc = 0x292b7cu;
    // NOP
label_292b80:
    // 0x292b80: 0x8eb9  .word       0x00008EB9                   # INVALID     $zero, $zero, -0x7147 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292b80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x292B80 raw=0x00008EB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292b84:
    // 0x292b84: 0x84  .word       0x00000084                   # sllv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292b84u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292b88:
    // 0x292b88: 0x41ca0  .word       0x00041CA0                   # add         $v1, $zero, $a0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292b88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_292b8c:
    // 0x292b8c: 0x0  nop
    ctx->pc = 0x292b8cu;
    // NOP
label_292b90:
    // 0x292b90: 0x8f3d  .word       0x00008F3D                   # INVALID     $zero, $zero, -0x70C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292b90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x292B90 raw=0x00008F3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292b94:
    // 0x292b94: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292b94u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292b98:
    // 0x292b98: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292b9c:
    // 0x292b9c: 0x0  nop
    ctx->pc = 0x292b9cu;
    // NOP
label_292ba0:
    // 0x292ba0: 0x8f3f  dsra32      $s1, $zero, 28
    ctx->pc = 0x292ba0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> (32 + 28));
label_292ba4:
    // 0x292ba4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292ba4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292ba8:
    // 0x292ba8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292bac:
    // 0x292bac: 0x0  nop
    ctx->pc = 0x292bacu;
    // NOP
label_292bb0:
    // 0x292bb0: 0x8f41  .word       0x00008F41                   # INVALID     $zero, $zero, -0x70BF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292bb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292BB0 raw=0x00008F41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292bb4:
    // 0x292bb4: 0x5e  .word       0x0000005E                   # ddiv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292bb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x292BB4 raw=0x0000005E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292bb8:
    // 0x292bb8: 0x2ed60  .word       0x0002ED60                   # add         $sp, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292bb8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_292bbc:
    // 0x292bbc: 0x0  nop
    ctx->pc = 0x292bbcu;
    // NOP
label_292bc0:
    // 0x292bc0: 0x8f9f  .word       0x00008F9F                   # ddivu       $s1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292bc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x292BC0 raw=0x00008F9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292bc4:
    // 0x292bc4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292bc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292bc8:
    // 0x292bc8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292bcc:
    // 0x292bcc: 0x0  nop
    ctx->pc = 0x292bccu;
    // NOP
label_292bd0:
    // 0x292bd0: 0x8fa1  .word       0x00008FA1                   # addu        $s1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_292bd4:
    // 0x292bd4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292bd4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292bd8:
    // 0x292bd8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292bdc:
    // 0x292bdc: 0x0  nop
    ctx->pc = 0x292bdcu;
    // NOP
label_292be0:
    // 0x292be0: 0x8fa3  .word       0x00008FA3                   # negu        $s1, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292be0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_292be4:
    // 0x292be4: 0x82  srl         $zero, $zero, 2
    ctx->pc = 0x292be4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_292be8:
    // 0x292be8: 0x409d0  .word       0x000409D0                   # mfhi        $at # 000401C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292be8u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_292bec:
    // 0x292bec: 0x0  nop
    ctx->pc = 0x292becu;
    // NOP
label_292bf0:
    // 0x292bf0: 0x9025  move        $s2, $zero
    ctx->pc = 0x292bf0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_292bf4:
    // 0x292bf4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292bf4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292bf8:
    // 0x292bf8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292bfc:
    // 0x292bfc: 0x0  nop
    ctx->pc = 0x292bfcu;
    // NOP
label_292c00:
    // 0x292c00: 0x9027  not         $s2, $zero
    ctx->pc = 0x292c00u;
    SET_GPR_U64(ctx, 18, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_292c04:
    // 0x292c04: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292c04u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292c08:
    // 0x292c08: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292c08u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292c0c:
    // 0x292c0c: 0x0  nop
    ctx->pc = 0x292c0cu;
    // NOP
label_292c10:
    // 0x292c10: 0x9029  .word       0x00009029                   # mtsa        $zero # 00009000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x292c10u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_292c14:
    // 0x292c14: 0x92  .word       0x00000092                   # mflo        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292c14u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_292c18:
    // 0x292c18: 0x48e10  .word       0x00048E10                   # mfhi        $s1 # 00040600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292c18u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_292c1c:
    // 0x292c1c: 0x0  nop
    ctx->pc = 0x292c1cu;
    // NOP
label_292c20:
    // 0x292c20: 0x90bb  dsra        $s2, $zero, 2
    ctx->pc = 0x292c20u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 0) >> 2);
label_292c24:
    // 0x292c24: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292c24u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292c28:
    // 0x292c28: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292c2c:
    // 0x292c2c: 0x0  nop
    ctx->pc = 0x292c2cu;
    // NOP
label_292c30:
    // 0x292c30: 0x90bd  .word       0x000090BD                   # INVALID     $zero, $zero, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292c30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x292C30 raw=0x000090BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292c34:
    // 0x292c34: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292c34u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292c38:
    // 0x292c38: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292c38u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292c3c:
    // 0x292c3c: 0x0  nop
    ctx->pc = 0x292c3cu;
    // NOP
label_292c40:
    // 0x292c40: 0x90bf  dsra32      $s2, $zero, 2
    ctx->pc = 0x292c40u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 0) >> (32 + 2));
label_292c44:
    // 0x292c44: 0x62  .word       0x00000062                   # neg         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292c44u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_292c48:
    // 0x292c48: 0x30b80  sll         $at, $v1, 14
    ctx->pc = 0x292c48u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
label_292c4c:
    // 0x292c4c: 0x0  nop
    ctx->pc = 0x292c4cu;
    // NOP
label_292c50:
    // 0x292c50: 0x9121  .word       0x00009121                   # addu        $s2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292c50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_292c54:
    // 0x292c54: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292c54u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292c58:
    // 0x292c58: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292c5c:
    // 0x292c5c: 0x0  nop
    ctx->pc = 0x292c5cu;
    // NOP
label_292c60:
    // 0x292c60: 0x9123  .word       0x00009123                   # negu        $s2, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292c60u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_292c64:
    // 0x292c64: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292c64u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292c68:
    // 0x292c68: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292c68u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292c6c:
    // 0x292c6c: 0x0  nop
    ctx->pc = 0x292c6cu;
    // NOP
label_292c70:
    // 0x292c70: 0x9125  .word       0x00009125                   # move        $s2, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292c70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_292c74:
    // 0x292c74: 0x7f  dsra32      $zero, $zero, 1
    ctx->pc = 0x292c74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 1));
label_292c78:
    // 0x292c78: 0x3f400  sll         $fp, $v1, 16
    ctx->pc = 0x292c78u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_292c7c:
    // 0x292c7c: 0x0  nop
    ctx->pc = 0x292c7cu;
    // NOP
label_292c80:
    // 0x292c80: 0x91a4  .word       0x000091A4                   # and         $s2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292c80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_292c84:
    // 0x292c84: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292c84u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292c88:
    // 0x292c88: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292c8c:
    // 0x292c8c: 0x0  nop
    ctx->pc = 0x292c8cu;
    // NOP
label_292c90:
    // 0x292c90: 0x91a6  .word       0x000091A6                   # xor         $s2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292c90u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_292c94:
    // 0x292c94: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292c94u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292c98:
    // 0x292c98: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292c98u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292c9c:
    // 0x292c9c: 0x0  nop
    ctx->pc = 0x292c9cu;
    // NOP
label_292ca0:
    // 0x292ca0: 0x91a8  .word       0x000091A8                   # mfsa        $s2 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x292ca0u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_292ca4:
    // 0x292ca4: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x292ca4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292ca8:
    // 0x292ca8: 0x39ae0  .word       0x00039AE0                   # add         $s3, $zero, $v1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ca8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_292cac:
    // 0x292cac: 0x0  nop
    ctx->pc = 0x292cacu;
    // NOP
label_292cb0:
    // 0x292cb0: 0x921c  .word       0x0000921C                   # dmult       $zero, $zero # 00009200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292cb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x292CB0 raw=0x0000921C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292cb4:
    // 0x292cb4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292cb4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292cb8:
    // 0x292cb8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292cbc:
    // 0x292cbc: 0x0  nop
    ctx->pc = 0x292cbcu;
    // NOP
label_292cc0:
    // 0x292cc0: 0x921e  .word       0x0000921E                   # ddiv        $s2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292cc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x292CC0 raw=0x0000921E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292cc4:
    // 0x292cc4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292cc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292cc8:
    // 0x292cc8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292ccc:
    // 0x292ccc: 0x0  nop
    ctx->pc = 0x292cccu;
    // NOP
label_292cd0:
    // 0x292cd0: 0x9220  .word       0x00009220                   # add         $s2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292cd0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_292cd4:
    // 0x292cd4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292cd4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292cd8:
    // 0x292cd8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292cdc:
    // 0x292cdc: 0x0  nop
    ctx->pc = 0x292cdcu;
    // NOP
label_292ce0:
    // 0x292ce0: 0x9222  .word       0x00009222                   # neg         $s2, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ce0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_292ce4:
    // 0x292ce4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292ce4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292ce8:
    // 0x292ce8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292cec:
    // 0x292cec: 0x0  nop
    ctx->pc = 0x292cecu;
    // NOP
label_292cf0:
    // 0x292cf0: 0x9224  .word       0x00009224                   # and         $s2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292cf0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_292cf4:
    // 0x292cf4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292cf4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292cf8:
    // 0x292cf8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292cfc:
    // 0x292cfc: 0x0  nop
    ctx->pc = 0x292cfcu;
    // NOP
label_292d00:
    // 0x292d00: 0x9226  .word       0x00009226                   # xor         $s2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292d00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_292d04:
    // 0x292d04: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292d04u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292d08:
    // 0x292d08: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292d08u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292d0c:
    // 0x292d0c: 0x0  nop
    ctx->pc = 0x292d0cu;
    // NOP
label_292d10:
    // 0x292d10: 0x9228  .word       0x00009228                   # mfsa        $s2 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x292d10u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_292d14:
    // 0x292d14: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292d14u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292d18:
    // 0x292d18: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292d1c:
    // 0x292d1c: 0x0  nop
    ctx->pc = 0x292d1cu;
    // NOP
label_292d20:
    // 0x292d20: 0x922a  .word       0x0000922A                   # slt         $s2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292d20u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_292d24:
    // 0x292d24: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292d24u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292d28:
    // 0x292d28: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292d28u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292d2c:
    // 0x292d2c: 0x0  nop
    ctx->pc = 0x292d2cu;
    // NOP
label_292d30:
    // 0x292d30: 0x922c  .word       0x0000922C                   # dadd        $s2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292d30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_292d34:
    // 0x292d34: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292d34u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292d38:
    // 0x292d38: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292d3c:
    // 0x292d3c: 0x0  nop
    ctx->pc = 0x292d3cu;
    // NOP
label_292d40:
    // 0x292d40: 0x922e  .word       0x0000922E                   # dsub        $s2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292d40u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_292d44:
    // 0x292d44: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292d44u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292d48:
    // 0x292d48: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292d48u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292d4c:
    // 0x292d4c: 0x0  nop
    ctx->pc = 0x292d4cu;
    // NOP
label_292d50:
    // 0x292d50: 0x9230  tge         $zero, $zero, 584
    ctx->pc = 0x292d50u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292d54:
    // 0x292d54: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292d54u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292d58:
    // 0x292d58: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292d5c:
    // 0x292d5c: 0x0  nop
    ctx->pc = 0x292d5cu;
    // NOP
label_292d60:
    // 0x292d60: 0x9232  tlt         $zero, $zero, 584
    ctx->pc = 0x292d60u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292d64:
    // 0x292d64: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292d64u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292d68:
    // 0x292d68: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292d68u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292d6c:
    // 0x292d6c: 0x0  nop
    ctx->pc = 0x292d6cu;
    // NOP
label_292d70:
    // 0x292d70: 0x9234  teq         $zero, $zero, 584
    ctx->pc = 0x292d70u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292d74:
    // 0x292d74: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292d74u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292d78:
    // 0x292d78: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292d7c:
    // 0x292d7c: 0x0  nop
    ctx->pc = 0x292d7cu;
    // NOP
label_292d80:
    // 0x292d80: 0x9236  tne         $zero, $zero, 584
    ctx->pc = 0x292d80u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292d84:
    // 0x292d84: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292d84u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292d88:
    // 0x292d88: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292d88u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292d8c:
    // 0x292d8c: 0x0  nop
    ctx->pc = 0x292d8cu;
    // NOP
label_292d90:
    // 0x292d90: 0x9238  dsll        $s2, $zero, 8
    ctx->pc = 0x292d90u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << 8);
label_292d94:
    // 0x292d94: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292d94u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292d98:
    // 0x292d98: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292d9c:
    // 0x292d9c: 0x0  nop
    ctx->pc = 0x292d9cu;
    // NOP
label_292da0:
    // 0x292da0: 0x923a  dsrl        $s2, $zero, 8
    ctx->pc = 0x292da0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> 8);
label_292da4:
    // 0x292da4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292da4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292da8:
    // 0x292da8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292da8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292dac:
    // 0x292dac: 0x0  nop
    ctx->pc = 0x292dacu;
    // NOP
label_292db0:
    // 0x292db0: 0x923c  dsll32      $s2, $zero, 8
    ctx->pc = 0x292db0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << (32 + 8));
label_292db4:
    // 0x292db4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292db4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292db8:
    // 0x292db8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292dbc:
    // 0x292dbc: 0x0  nop
    ctx->pc = 0x292dbcu;
    // NOP
label_292dc0:
    // 0x292dc0: 0x923e  dsrl32      $s2, $zero, 8
    ctx->pc = 0x292dc0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> (32 + 8));
label_292dc4:
    // 0x292dc4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292dc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292dc8:
    // 0x292dc8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292dcc:
    // 0x292dcc: 0x0  nop
    ctx->pc = 0x292dccu;
    // NOP
label_292dd0:
    // 0x292dd0: 0x9240  sll         $s2, $zero, 9
    ctx->pc = 0x292dd0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_292dd4:
    // 0x292dd4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292dd4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292dd8:
    // 0x292dd8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292ddc:
    // 0x292ddc: 0x0  nop
    ctx->pc = 0x292ddcu;
    // NOP
label_292de0:
    // 0x292de0: 0x9242  srl         $s2, $zero, 9
    ctx->pc = 0x292de0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 0), 9));
label_292de4:
    // 0x292de4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292de4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292de8:
    // 0x292de8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292de8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292dec:
    // 0x292dec: 0x0  nop
    ctx->pc = 0x292decu;
    // NOP
label_292df0:
    // 0x292df0: 0x9244  .word       0x00009244                   # sllv        $s2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292df0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292df4:
    // 0x292df4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292df4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292df8:
    // 0x292df8: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292dfc:
    // 0x292dfc: 0x0  nop
    ctx->pc = 0x292dfcu;
    // NOP
label_292e00:
    // 0x292e00: 0x9246  .word       0x00009246                   # srlv        $s2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292e00u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292e04:
    // 0x292e04: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292e04u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292e08:
    // 0x292e08: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292e08u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292e0c:
    // 0x292e0c: 0x0  nop
    ctx->pc = 0x292e0cu;
    // NOP
label_292e10:
    // 0x292e10: 0x9248  .word       0x00009248                   # jr          $zero # 00009240 <InstrIdType: CPU_SPECIAL>
label_292e14:
    if (ctx->pc == 0x292E14u) {
        ctx->pc = 0x292E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E10u;
        // 0x292e14: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E18u;
        goto label_292e18;
    }
    ctx->pc = 0x292E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x292E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E10u;
        // 0x292e14: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292E10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x292E18u;
label_292e18:
    // 0x292e18: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292e1c:
    // 0x292e1c: 0x0  nop
    ctx->pc = 0x292e1cu;
    // NOP
label_292e20:
    // 0x292e20: 0x924a  .word       0x0000924A                   # movz        $s2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292e20u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_292e24:
    // 0x292e24: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292e24u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292e28:
    // 0x292e28: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292e28u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292e2c:
    // 0x292e2c: 0x0  nop
    ctx->pc = 0x292e2cu;
    // NOP
label_292e30:
    // 0x292e30: 0x924c  syscall     585
    ctx->pc = 0x292e30u;
    ctx->pc = 0x292E34u;
runtime->handleSyscall(rdram, ctx, 0x249u);
label_292e34:
    // 0x292e34: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292e34u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292e38:
    // 0x292e38: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292e3c:
    // 0x292e3c: 0x0  nop
    ctx->pc = 0x292e3cu;
    // NOP
label_292e40:
    // 0x292e40: 0x924e  .word       0x0000924E                   # INVALID     $zero, $zero, -0x6DB2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292e40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x292E40 raw=0x0000924E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292e44:
    // 0x292e44: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292e44u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292e48:
    // 0x292e48: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292e48u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292e4c:
    // 0x292e4c: 0x0  nop
    ctx->pc = 0x292e4cu;
    // NOP
label_292e50:
    // 0x292e50: 0x9250  .word       0x00009250                   # mfhi        $s2 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292e50u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_292e54:
    // 0x292e54: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292e54u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292e58:
    // 0x292e58: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292e5c:
    // 0x292e5c: 0x0  nop
    ctx->pc = 0x292e5cu;
    // NOP
label_292e60:
    // 0x292e60: 0x9252  .word       0x00009252                   # mflo        $s2 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292e60u;
    SET_GPR_U64(ctx, 18, ctx->lo);
label_292e64:
    // 0x292e64: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292e64u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292e68:
    // 0x292e68: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292e68u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292e6c:
    // 0x292e6c: 0x0  nop
    ctx->pc = 0x292e6cu;
    // NOP
label_292e70:
    // 0x292e70: 0x9254  .word       0x00009254                   # dsllv       $s2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292e70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_292e74:
    // 0x292e74: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292e74u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292e78:
    // 0x292e78: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292e7c:
    // 0x292e7c: 0x0  nop
    ctx->pc = 0x292e7cu;
    // NOP
label_292e80:
    // 0x292e80: 0x9256  .word       0x00009256                   # dsrlv       $s2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292e80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_292e84:
    // 0x292e84: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292e84u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292e88:
    // 0x292e88: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292e88u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292e8c:
    // 0x292e8c: 0x0  nop
    ctx->pc = 0x292e8cu;
    // NOP
label_292e90:
    // 0x292e90: 0x9258  .word       0x00009258                   # mult        $s2, $zero, $zero # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x292e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_292e94:
    // 0x292e94: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292e94u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292e98:
    // 0x292e98: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x292e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292e9c:
    // 0x292e9c: 0x0  nop
    ctx->pc = 0x292e9cu;
    // NOP
label_292ea0:
    // 0x292ea0: 0x925a  .word       0x0000925A                   # div         $s2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ea0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_292ea4:
    // 0x292ea4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x292ea4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_292ea8:
    // 0x292ea8: 0xd40  sll         $at, $zero, 21
    ctx->pc = 0x292ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_292eac:
    // 0x292eac: 0x0  nop
    ctx->pc = 0x292eacu;
    // NOP
label_292eb0:
    // 0x292eb0: 0x925c  .word       0x0000925C                   # dmult       $zero, $zero # 00009240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292eb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x292EB0 raw=0x0000925C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292eb4:
    // 0x292eb4: 0x4f  sync
    ctx->pc = 0x292eb4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_292eb8:
    // 0x292eb8: 0x27460  .word       0x00027460                   # add         $t6, $zero, $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292eb8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_292ebc:
    // 0x292ebc: 0x0  nop
    ctx->pc = 0x292ebcu;
    // NOP
label_292ec0:
    // 0x292ec0: 0x92ab  .word       0x000092AB                   # sltu        $s2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ec0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_292ec4:
    // 0x292ec4: 0x41  .word       0x00000041                   # INVALID     $zero, $zero, 0x41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ec4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x292EC4 raw=0x00000041"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292ec8:
    // 0x292ec8: 0x20440  sll         $zero, $v0, 17
    ctx->pc = 0x292ec8u;
    
label_292ecc:
    // 0x292ecc: 0x0  nop
    ctx->pc = 0x292eccu;
    // NOP
label_292ed0:
    // 0x292ed0: 0x92ec  .word       0x000092EC                   # dadd        $s2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ed0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_292ed4:
    // 0x292ed4: 0x264  .word       0x00000264                   # and         $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ed4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_292ed8:
    // 0x292ed8: 0x131a90  .word       0x00131A90                   # mfhi        $v1 # 00130280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ed8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_292edc:
    // 0x292edc: 0x0  nop
    ctx->pc = 0x292edcu;
    // NOP
label_292ee0:
    // 0x292ee0: 0x9550  .word       0x00009550                   # mfhi        $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ee0u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_292ee4:
    // 0x292ee4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x292ee4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292ee8:
    // 0x292ee8: 0x2b40  sll         $a1, $zero, 13
    ctx->pc = 0x292ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_292eec:
    // 0x292eec: 0x0  nop
    ctx->pc = 0x292eecu;
    // NOP
label_292ef0:
    // 0x292ef0: 0x9556  .word       0x00009556                   # dsrlv       $s2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ef0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_292ef4:
    // 0x292ef4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x292ef4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292ef8:
    // 0x292ef8: 0x1f60  .word       0x00001F60                   # add         $v1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ef8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_292efc:
    // 0x292efc: 0x0  nop
    ctx->pc = 0x292efcu;
    // NOP
label_292f00:
    // 0x292f00: 0x955a  .word       0x0000955A                   # div         $s2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292f00u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_292f04:
    // 0x292f04: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292f04u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x292F04 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292f08:
    // 0x292f08: 0x25b0  tge         $zero, $zero, 150
    ctx->pc = 0x292f08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292f0c:
    // 0x292f0c: 0x0  nop
    ctx->pc = 0x292f0cu;
    // NOP
label_292f10:
    // 0x292f10: 0x955f  .word       0x0000955F                   # ddivu       $s2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292f10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x292F10 raw=0x0000955F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292f14:
    // 0x292f14: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x292f14u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292f18:
    // 0x292f18: 0x3440  sll         $a2, $zero, 17
    ctx->pc = 0x292f18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_292f1c:
    // 0x292f1c: 0x0  nop
    ctx->pc = 0x292f1cu;
    // NOP
label_292f20:
    // 0x292f20: 0x9566  .word       0x00009566                   # xor         $s2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292f20u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_292f24:
    // 0x292f24: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292f24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x292F24 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292f28:
    // 0x292f28: 0x2490  .word       0x00002490                   # mfhi        $a0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292f28u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_292f2c:
    // 0x292f2c: 0x0  nop
    ctx->pc = 0x292f2cu;
    // NOP
label_292f30:
    // 0x292f30: 0x956b  .word       0x0000956B                   # sltu        $s2, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292f30u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_292f34:
    // 0x292f34: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292f34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x292F34 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292f38:
    // 0x292f38: 0x2370  tge         $zero, $zero, 141
    ctx->pc = 0x292f38u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292f3c:
    // 0x292f3c: 0x0  nop
    ctx->pc = 0x292f3cu;
    // NOP
label_292f40:
    // 0x292f40: 0x9570  tge         $zero, $zero, 597
    ctx->pc = 0x292f40u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292f44:
    // 0x292f44: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x292f44u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_292f48:
    // 0x292f48: 0x5420  .word       0x00005420                   # add         $t2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292f48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_292f4c:
    // 0x292f4c: 0x0  nop
    ctx->pc = 0x292f4cu;
    // NOP
label_292f50:
    // 0x292f50: 0x957b  dsra        $s2, $zero, 21
    ctx->pc = 0x292f50u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 0) >> 21);
label_292f54:
    // 0x292f54: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x292f54u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_292f58:
    // 0x292f58: 0x4bf0  tge         $zero, $zero, 303
    ctx->pc = 0x292f58u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292f5c:
    // 0x292f5c: 0x0  nop
    ctx->pc = 0x292f5cu;
    // NOP
label_292f60:
    // 0x292f60: 0x9585  .word       0x00009585                   # INVALID     $zero, $zero, -0x6A7B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292f60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x292F60 raw=0x00009585"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292f64:
    // 0x292f64: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x292f64u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292f68:
    // 0x292f68: 0x33e0  .word       0x000033E0                   # add         $a2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292f68u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_292f6c:
    // 0x292f6c: 0x0  nop
    ctx->pc = 0x292f6cu;
    // NOP
label_292f70:
    // 0x292f70: 0x958c  syscall     598
    ctx->pc = 0x292f70u;
    ctx->pc = 0x292F74u;
runtime->handleSyscall(rdram, ctx, 0x256u);
label_292f74:
    // 0x292f74: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x292f74u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_292f78:
    // 0x292f78: 0x5800  sll         $t3, $zero, 0
    ctx->pc = 0x292f78u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_292f7c:
    // 0x292f7c: 0x0  nop
    ctx->pc = 0x292f7cu;
    // NOP
label_292f80:
    // 0x292f80: 0x9597  .word       0x00009597                   # dsrav       $s2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292f80u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_292f84:
    // 0x292f84: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292f84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x292F84 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292f88:
    // 0x292f88: 0x2100  sll         $a0, $zero, 4
    ctx->pc = 0x292f88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_292f8c:
    // 0x292f8c: 0x0  nop
    ctx->pc = 0x292f8cu;
    // NOP
label_292f90:
    // 0x292f90: 0x959c  .word       0x0000959C                   # dmult       $zero, $zero # 00009580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292f90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x292F90 raw=0x0000959C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292f94:
    // 0x292f94: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x292f94u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292f98:
    // 0x292f98: 0x35c0  sll         $a2, $zero, 23
    ctx->pc = 0x292f98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_292f9c:
    // 0x292f9c: 0x0  nop
    ctx->pc = 0x292f9cu;
    // NOP
label_292fa0:
    // 0x292fa0: 0x95a3  .word       0x000095A3                   # negu        $s2, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292fa0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_292fa4:
    // 0x292fa4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x292fa4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292fa8:
    // 0x292fa8: 0x3120  .word       0x00003120                   # add         $a2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292fa8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_292fac:
    // 0x292fac: 0x0  nop
    ctx->pc = 0x292facu;
    // NOP
label_292fb0:
    // 0x292fb0: 0x95aa  .word       0x000095AA                   # slt         $s2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292fb0u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_292fb4:
    // 0x292fb4: 0x8  jr          $zero
label_292fb8:
    if (ctx->pc == 0x292FB8u) {
        ctx->pc = 0x292FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FB4u;
        // 0x292fb8: 0x3fb0  tge         $zero, $zero, 254 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x292FBCu;
        goto label_292fbc;
    }
    ctx->pc = 0x292FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x292FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FB4u;
        // 0x292fb8: 0x3fb0  tge         $zero, $zero, 254 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292FB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x292FBCu;
label_292fbc:
    // 0x292fbc: 0x0  nop
    ctx->pc = 0x292fbcu;
    // NOP
label_292fc0:
    // 0x292fc0: 0x95b2  tlt         $zero, $zero, 598
    ctx->pc = 0x292fc0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292fc4:
    // 0x292fc4: 0x8  jr          $zero
label_292fc8:
    if (ctx->pc == 0x292FC8u) {
        ctx->pc = 0x292FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FC4u;
        // 0x292fc8: 0x39c0  sll         $a3, $zero, 7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292FCCu;
        goto label_292fcc;
    }
    ctx->pc = 0x292FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x292FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292FC4u;
        // 0x292fc8: 0x39c0  sll         $a3, $zero, 7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292FC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x292FCCu;
label_292fcc:
    // 0x292fcc: 0x0  nop
    ctx->pc = 0x292fccu;
    // NOP
label_292fd0:
    // 0x292fd0: 0x95ba  dsrl        $s2, $zero, 22
    ctx->pc = 0x292fd0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> 22);
label_292fd4:
    // 0x292fd4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x292fd4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292fd8:
    // 0x292fd8: 0x2e80  sll         $a1, $zero, 26
    ctx->pc = 0x292fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_292fdc:
    // 0x292fdc: 0x0  nop
    ctx->pc = 0x292fdcu;
    // NOP
label_292fe0:
    // 0x292fe0: 0x95c0  sll         $s2, $zero, 23
    ctx->pc = 0x292fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_292fe4:
    // 0x292fe4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x292fe4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292fe8:
    // 0x292fe8: 0x2a30  tge         $zero, $zero, 168
    ctx->pc = 0x292fe8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292fec:
    // 0x292fec: 0x0  nop
    ctx->pc = 0x292fecu;
    // NOP
label_292ff0:
    // 0x292ff0: 0x95c6  .word       0x000095C6                   # srlv        $s2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ff0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292ff4:
    // 0x292ff4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292ff4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x292FF4 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292ff8:
    // 0x292ff8: 0x24f0  tge         $zero, $zero, 147
    ctx->pc = 0x292ff8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292ffc:
    // 0x292ffc: 0x0  nop
    ctx->pc = 0x292ffcu;
    // NOP
label_293000:
    // 0x293000: 0x95cb  .word       0x000095CB                   # movn        $s2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293000u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_293004:
    // 0x293004: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x293004u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293008:
    // 0x293008: 0x2e80  sll         $a1, $zero, 26
    ctx->pc = 0x293008u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_29300c:
    // 0x29300c: 0x0  nop
    ctx->pc = 0x29300cu;
    // NOP
label_293010:
    // 0x293010: 0x95d1  .word       0x000095D1                   # mthi        $zero # 000095C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293010u;
    ctx->hi = GPR_U64(ctx, 0);
label_293014:
    // 0x293014: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x293014u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293018:
    // 0x293018: 0x3210  .word       0x00003210                   # mfhi        $a2 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293018u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_29301c:
    // 0x29301c: 0x0  nop
    ctx->pc = 0x29301cu;
    // NOP
label_293020:
    // 0x293020: 0x95d8  .word       0x000095D8                   # mult        $s2, $zero, $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x293020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_293024:
    // 0x293024: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x293024u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293028:
    // 0x293028: 0x3120  .word       0x00003120                   # add         $a2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293028u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_29302c:
    // 0x29302c: 0x0  nop
    ctx->pc = 0x29302cu;
    // NOP
label_293030:
    // 0x293030: 0x95df  .word       0x000095DF                   # ddivu       $s2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293030u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x293030 raw=0x000095DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293034:
    // 0x293034: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x293034u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293038:
    // 0x293038: 0x3360  .word       0x00003360                   # add         $a2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293038u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_29303c:
    // 0x29303c: 0x0  nop
    ctx->pc = 0x29303cu;
    // NOP
label_293040:
    // 0x293040: 0x95e6  .word       0x000095E6                   # xor         $s2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293040u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_293044:
    // 0x293044: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293044u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x293044 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293048:
    // 0x293048: 0x22c0  sll         $a0, $zero, 11
    ctx->pc = 0x293048u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_29304c:
    // 0x29304c: 0x0  nop
    ctx->pc = 0x29304cu;
    // NOP
label_293050:
    // 0x293050: 0x95eb  .word       0x000095EB                   # sltu        $s2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293050u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_293054:
    // 0x293054: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293054u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x293054 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293058:
    // 0x293058: 0x26f0  tge         $zero, $zero, 155
    ctx->pc = 0x293058u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29305c:
    // 0x29305c: 0x0  nop
    ctx->pc = 0x29305cu;
    // NOP
label_293060:
    // 0x293060: 0x95f0  tge         $zero, $zero, 599
    ctx->pc = 0x293060u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293064:
    // 0x293064: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x293064u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293068:
    // 0x293068: 0x2c30  tge         $zero, $zero, 176
    ctx->pc = 0x293068u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29306c:
    // 0x29306c: 0x0  nop
    ctx->pc = 0x29306cu;
    // NOP
label_293070:
    // 0x293070: 0x95f6  tne         $zero, $zero, 599
    ctx->pc = 0x293070u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_293074:
    // 0x293074: 0x9  jalr        $zero, $zero
label_293078:
    if (ctx->pc == 0x293078u) {
        ctx->pc = 0x293078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293074u;
        // 0x293078: 0x4500  sll         $t0, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29307Cu;
        goto label_29307c;
    }
    ctx->pc = 0x293074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x293078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293074u;
        // 0x293078: 0x4500  sll         $t0, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293074u, 0x29307Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29307Cu;
label_29307c:
    // 0x29307c: 0x0  nop
    ctx->pc = 0x29307cu;
    // NOP
label_293080:
    // 0x293080: 0x95ff  dsra32      $s2, $zero, 23
    ctx->pc = 0x293080u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 0) >> (32 + 23));
label_293084:
    // 0x293084: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293084u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x293084 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_293088:
    // 0x293088: 0x2480  sll         $a0, $zero, 18
    ctx->pc = 0x293088u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_29308c:
    // 0x29308c: 0x0  nop
    ctx->pc = 0x29308cu;
    // NOP
label_293090:
    // 0x293090: 0x9604  .word       0x00009604                   # sllv        $s2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293090u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293094:
    // 0x293094: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x293094u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_293098:
    // 0x293098: 0x2e10  .word       0x00002E10                   # mfhi        $a1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x293098u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_29309c:
    // 0x29309c: 0x0  nop
    ctx->pc = 0x29309cu;
    // NOP
label_2930a0:
    // 0x2930a0: 0x960a  .word       0x0000960A                   # movz        $s2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2930a0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_2930a4:
    // 0x2930a4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2930a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2930a8:
    // 0x2930a8: 0x1840  sll         $v1, $zero, 1
    ctx->pc = 0x2930a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2930ac:
    // 0x2930ac: 0x0  nop
    ctx->pc = 0x2930acu;
    // NOP
label_2930b0:
    // 0x2930b0: 0x960e  .word       0x0000960E                   # INVALID     $zero, $zero, -0x69F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2930b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2930B0 raw=0x0000960E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2930b4:
    // 0x2930b4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2930b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2930b8:
    // 0x2930b8: 0x2e80  sll         $a1, $zero, 26
    ctx->pc = 0x2930b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_2930bc:
    // 0x2930bc: 0x0  nop
    ctx->pc = 0x2930bcu;
    // NOP
label_2930c0:
    // 0x2930c0: 0x9614  .word       0x00009614                   # dsllv       $s2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2930c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2930c4:
    // 0x2930c4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2930c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2930C4 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2930c8:
    // 0x2930c8: 0x2230  tge         $zero, $zero, 136
    ctx->pc = 0x2930c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2930cc:
    // 0x2930cc: 0x0  nop
    ctx->pc = 0x2930ccu;
    // NOP
label_2930d0:
    // 0x2930d0: 0x9619  .word       0x00009619                   # multu       $zero, $zero # 00009600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2930d0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_2930d4:
    // 0x2930d4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2930d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2930d8:
    // 0x2930d8: 0x2f90  .word       0x00002F90                   # mfhi        $a1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2930d8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2930dc:
    // 0x2930dc: 0x0  nop
    ctx->pc = 0x2930dcu;
    // NOP
    ctx->pc = 0x2930e0u;
    return;
}
