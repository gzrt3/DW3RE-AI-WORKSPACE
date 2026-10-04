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


void FUN_0014eba0_part437(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2239e0u: goto label_2239e0;
        case 0x2239e4u: goto label_2239e4;
        case 0x2239e8u: goto label_2239e8;
        case 0x2239ecu: goto label_2239ec;
        case 0x2239f0u: goto label_2239f0;
        case 0x2239f4u: goto label_2239f4;
        case 0x2239f8u: goto label_2239f8;
        case 0x2239fcu: goto label_2239fc;
        case 0x223a00u: goto label_223a00;
        case 0x223a04u: goto label_223a04;
        case 0x223a08u: goto label_223a08;
        case 0x223a0cu: goto label_223a0c;
        case 0x223a10u: goto label_223a10;
        case 0x223a14u: goto label_223a14;
        case 0x223a18u: goto label_223a18;
        case 0x223a1cu: goto label_223a1c;
        case 0x223a20u: goto label_223a20;
        case 0x223a24u: goto label_223a24;
        case 0x223a28u: goto label_223a28;
        case 0x223a2cu: goto label_223a2c;
        case 0x223a30u: goto label_223a30;
        case 0x223a34u: goto label_223a34;
        case 0x223a38u: goto label_223a38;
        case 0x223a3cu: goto label_223a3c;
        case 0x223a40u: goto label_223a40;
        case 0x223a44u: goto label_223a44;
        case 0x223a48u: goto label_223a48;
        case 0x223a4cu: goto label_223a4c;
        case 0x223a50u: goto label_223a50;
        case 0x223a54u: goto label_223a54;
        case 0x223a58u: goto label_223a58;
        case 0x223a5cu: goto label_223a5c;
        case 0x223a60u: goto label_223a60;
        case 0x223a64u: goto label_223a64;
        case 0x223a68u: goto label_223a68;
        case 0x223a6cu: goto label_223a6c;
        case 0x223a70u: goto label_223a70;
        case 0x223a74u: goto label_223a74;
        case 0x223a78u: goto label_223a78;
        case 0x223a7cu: goto label_223a7c;
        case 0x223a80u: goto label_223a80;
        case 0x223a84u: goto label_223a84;
        case 0x223a88u: goto label_223a88;
        case 0x223a8cu: goto label_223a8c;
        case 0x223a90u: goto label_223a90;
        case 0x223a94u: goto label_223a94;
        case 0x223a98u: goto label_223a98;
        case 0x223a9cu: goto label_223a9c;
        case 0x223aa0u: goto label_223aa0;
        case 0x223aa4u: goto label_223aa4;
        case 0x223aa8u: goto label_223aa8;
        case 0x223aacu: goto label_223aac;
        case 0x223ab0u: goto label_223ab0;
        case 0x223ab4u: goto label_223ab4;
        case 0x223ab8u: goto label_223ab8;
        case 0x223abcu: goto label_223abc;
        case 0x223ac0u: goto label_223ac0;
        case 0x223ac4u: goto label_223ac4;
        case 0x223ac8u: goto label_223ac8;
        case 0x223accu: goto label_223acc;
        case 0x223ad0u: goto label_223ad0;
        case 0x223ad4u: goto label_223ad4;
        case 0x223ad8u: goto label_223ad8;
        case 0x223adcu: goto label_223adc;
        case 0x223ae0u: goto label_223ae0;
        case 0x223ae4u: goto label_223ae4;
        case 0x223ae8u: goto label_223ae8;
        case 0x223aecu: goto label_223aec;
        case 0x223af0u: goto label_223af0;
        case 0x223af4u: goto label_223af4;
        case 0x223af8u: goto label_223af8;
        case 0x223afcu: goto label_223afc;
        case 0x223b00u: goto label_223b00;
        case 0x223b04u: goto label_223b04;
        case 0x223b08u: goto label_223b08;
        case 0x223b0cu: goto label_223b0c;
        case 0x223b10u: goto label_223b10;
        case 0x223b14u: goto label_223b14;
        case 0x223b18u: goto label_223b18;
        case 0x223b1cu: goto label_223b1c;
        case 0x223b20u: goto label_223b20;
        case 0x223b24u: goto label_223b24;
        case 0x223b28u: goto label_223b28;
        case 0x223b2cu: goto label_223b2c;
        case 0x223b30u: goto label_223b30;
        case 0x223b34u: goto label_223b34;
        case 0x223b38u: goto label_223b38;
        case 0x223b3cu: goto label_223b3c;
        case 0x223b40u: goto label_223b40;
        case 0x223b44u: goto label_223b44;
        case 0x223b48u: goto label_223b48;
        case 0x223b4cu: goto label_223b4c;
        case 0x223b50u: goto label_223b50;
        case 0x223b54u: goto label_223b54;
        case 0x223b58u: goto label_223b58;
        case 0x223b5cu: goto label_223b5c;
        case 0x223b60u: goto label_223b60;
        case 0x223b64u: goto label_223b64;
        case 0x223b68u: goto label_223b68;
        case 0x223b6cu: goto label_223b6c;
        case 0x223b70u: goto label_223b70;
        case 0x223b74u: goto label_223b74;
        case 0x223b78u: goto label_223b78;
        case 0x223b7cu: goto label_223b7c;
        case 0x223b80u: goto label_223b80;
        case 0x223b84u: goto label_223b84;
        case 0x223b88u: goto label_223b88;
        case 0x223b8cu: goto label_223b8c;
        case 0x223b90u: goto label_223b90;
        case 0x223b94u: goto label_223b94;
        case 0x223b98u: goto label_223b98;
        case 0x223b9cu: goto label_223b9c;
        case 0x223ba0u: goto label_223ba0;
        case 0x223ba4u: goto label_223ba4;
        case 0x223ba8u: goto label_223ba8;
        case 0x223bacu: goto label_223bac;
        case 0x223bb0u: goto label_223bb0;
        case 0x223bb4u: goto label_223bb4;
        case 0x223bb8u: goto label_223bb8;
        case 0x223bbcu: goto label_223bbc;
        case 0x223bc0u: goto label_223bc0;
        case 0x223bc4u: goto label_223bc4;
        case 0x223bc8u: goto label_223bc8;
        case 0x223bccu: goto label_223bcc;
        case 0x223bd0u: goto label_223bd0;
        case 0x223bd4u: goto label_223bd4;
        case 0x223bd8u: goto label_223bd8;
        case 0x223bdcu: goto label_223bdc;
        case 0x223be0u: goto label_223be0;
        case 0x223be4u: goto label_223be4;
        case 0x223be8u: goto label_223be8;
        case 0x223becu: goto label_223bec;
        case 0x223bf0u: goto label_223bf0;
        case 0x223bf4u: goto label_223bf4;
        case 0x223bf8u: goto label_223bf8;
        case 0x223bfcu: goto label_223bfc;
        case 0x223c00u: goto label_223c00;
        case 0x223c04u: goto label_223c04;
        case 0x223c08u: goto label_223c08;
        case 0x223c0cu: goto label_223c0c;
        case 0x223c10u: goto label_223c10;
        case 0x223c14u: goto label_223c14;
        case 0x223c18u: goto label_223c18;
        case 0x223c1cu: goto label_223c1c;
        case 0x223c20u: goto label_223c20;
        case 0x223c24u: goto label_223c24;
        case 0x223c28u: goto label_223c28;
        case 0x223c2cu: goto label_223c2c;
        case 0x223c30u: goto label_223c30;
        case 0x223c34u: goto label_223c34;
        case 0x223c38u: goto label_223c38;
        case 0x223c3cu: goto label_223c3c;
        case 0x223c40u: goto label_223c40;
        case 0x223c44u: goto label_223c44;
        case 0x223c48u: goto label_223c48;
        case 0x223c4cu: goto label_223c4c;
        case 0x223c50u: goto label_223c50;
        case 0x223c54u: goto label_223c54;
        case 0x223c58u: goto label_223c58;
        case 0x223c5cu: goto label_223c5c;
        case 0x223c60u: goto label_223c60;
        case 0x223c64u: goto label_223c64;
        case 0x223c68u: goto label_223c68;
        case 0x223c6cu: goto label_223c6c;
        case 0x223c70u: goto label_223c70;
        case 0x223c74u: goto label_223c74;
        case 0x223c78u: goto label_223c78;
        case 0x223c7cu: goto label_223c7c;
        case 0x223c80u: goto label_223c80;
        case 0x223c84u: goto label_223c84;
        case 0x223c88u: goto label_223c88;
        case 0x223c8cu: goto label_223c8c;
        case 0x223c90u: goto label_223c90;
        case 0x223c94u: goto label_223c94;
        case 0x223c98u: goto label_223c98;
        case 0x223c9cu: goto label_223c9c;
        case 0x223ca0u: goto label_223ca0;
        case 0x223ca4u: goto label_223ca4;
        case 0x223ca8u: goto label_223ca8;
        case 0x223cacu: goto label_223cac;
        case 0x223cb0u: goto label_223cb0;
        case 0x223cb4u: goto label_223cb4;
        case 0x223cb8u: goto label_223cb8;
        case 0x223cbcu: goto label_223cbc;
        case 0x223cc0u: goto label_223cc0;
        case 0x223cc4u: goto label_223cc4;
        case 0x223cc8u: goto label_223cc8;
        case 0x223cccu: goto label_223ccc;
        case 0x223cd0u: goto label_223cd0;
        case 0x223cd4u: goto label_223cd4;
        case 0x223cd8u: goto label_223cd8;
        case 0x223cdcu: goto label_223cdc;
        case 0x223ce0u: goto label_223ce0;
        case 0x223ce4u: goto label_223ce4;
        case 0x223ce8u: goto label_223ce8;
        case 0x223cecu: goto label_223cec;
        case 0x223cf0u: goto label_223cf0;
        case 0x223cf4u: goto label_223cf4;
        case 0x223cf8u: goto label_223cf8;
        case 0x223cfcu: goto label_223cfc;
        case 0x223d00u: goto label_223d00;
        case 0x223d04u: goto label_223d04;
        case 0x223d08u: goto label_223d08;
        case 0x223d0cu: goto label_223d0c;
        case 0x223d10u: goto label_223d10;
        case 0x223d14u: goto label_223d14;
        case 0x223d18u: goto label_223d18;
        case 0x223d1cu: goto label_223d1c;
        case 0x223d20u: goto label_223d20;
        case 0x223d24u: goto label_223d24;
        case 0x223d28u: goto label_223d28;
        case 0x223d2cu: goto label_223d2c;
        case 0x223d30u: goto label_223d30;
        case 0x223d34u: goto label_223d34;
        case 0x223d38u: goto label_223d38;
        case 0x223d3cu: goto label_223d3c;
        case 0x223d40u: goto label_223d40;
        case 0x223d44u: goto label_223d44;
        case 0x223d48u: goto label_223d48;
        case 0x223d4cu: goto label_223d4c;
        case 0x223d50u: goto label_223d50;
        case 0x223d54u: goto label_223d54;
        case 0x223d58u: goto label_223d58;
        case 0x223d5cu: goto label_223d5c;
        case 0x223d60u: goto label_223d60;
        case 0x223d64u: goto label_223d64;
        case 0x223d68u: goto label_223d68;
        case 0x223d6cu: goto label_223d6c;
        case 0x223d70u: goto label_223d70;
        case 0x223d74u: goto label_223d74;
        case 0x223d78u: goto label_223d78;
        case 0x223d7cu: goto label_223d7c;
        case 0x223d80u: goto label_223d80;
        case 0x223d84u: goto label_223d84;
        case 0x223d88u: goto label_223d88;
        case 0x223d8cu: goto label_223d8c;
        case 0x223d90u: goto label_223d90;
        case 0x223d94u: goto label_223d94;
        case 0x223d98u: goto label_223d98;
        case 0x223d9cu: goto label_223d9c;
        case 0x223da0u: goto label_223da0;
        case 0x223da4u: goto label_223da4;
        case 0x223da8u: goto label_223da8;
        case 0x223dacu: goto label_223dac;
        case 0x223db0u: goto label_223db0;
        case 0x223db4u: goto label_223db4;
        case 0x223db8u: goto label_223db8;
        case 0x223dbcu: goto label_223dbc;
        case 0x223dc0u: goto label_223dc0;
        case 0x223dc4u: goto label_223dc4;
        case 0x223dc8u: goto label_223dc8;
        case 0x223dccu: goto label_223dcc;
        case 0x223dd0u: goto label_223dd0;
        case 0x223dd4u: goto label_223dd4;
        case 0x223dd8u: goto label_223dd8;
        case 0x223ddcu: goto label_223ddc;
        case 0x223de0u: goto label_223de0;
        case 0x223de4u: goto label_223de4;
        case 0x223de8u: goto label_223de8;
        case 0x223decu: goto label_223dec;
        case 0x223df0u: goto label_223df0;
        case 0x223df4u: goto label_223df4;
        case 0x223df8u: goto label_223df8;
        case 0x223dfcu: goto label_223dfc;
        case 0x223e00u: goto label_223e00;
        case 0x223e04u: goto label_223e04;
        case 0x223e08u: goto label_223e08;
        case 0x223e0cu: goto label_223e0c;
        case 0x223e10u: goto label_223e10;
        case 0x223e14u: goto label_223e14;
        case 0x223e18u: goto label_223e18;
        case 0x223e1cu: goto label_223e1c;
        case 0x223e20u: goto label_223e20;
        case 0x223e24u: goto label_223e24;
        case 0x223e28u: goto label_223e28;
        case 0x223e2cu: goto label_223e2c;
        case 0x223e30u: goto label_223e30;
        case 0x223e34u: goto label_223e34;
        case 0x223e38u: goto label_223e38;
        case 0x223e3cu: goto label_223e3c;
        case 0x223e40u: goto label_223e40;
        case 0x223e44u: goto label_223e44;
        case 0x223e48u: goto label_223e48;
        case 0x223e4cu: goto label_223e4c;
        case 0x223e50u: goto label_223e50;
        case 0x223e54u: goto label_223e54;
        case 0x223e58u: goto label_223e58;
        case 0x223e5cu: goto label_223e5c;
        case 0x223e60u: goto label_223e60;
        case 0x223e64u: goto label_223e64;
        case 0x223e68u: goto label_223e68;
        case 0x223e6cu: goto label_223e6c;
        case 0x223e70u: goto label_223e70;
        case 0x223e74u: goto label_223e74;
        case 0x223e78u: goto label_223e78;
        case 0x223e7cu: goto label_223e7c;
        case 0x223e80u: goto label_223e80;
        case 0x223e84u: goto label_223e84;
        case 0x223e88u: goto label_223e88;
        case 0x223e8cu: goto label_223e8c;
        case 0x223e90u: goto label_223e90;
        case 0x223e94u: goto label_223e94;
        case 0x223e98u: goto label_223e98;
        case 0x223e9cu: goto label_223e9c;
        case 0x223ea0u: goto label_223ea0;
        case 0x223ea4u: goto label_223ea4;
        case 0x223ea8u: goto label_223ea8;
        case 0x223eacu: goto label_223eac;
        case 0x223eb0u: goto label_223eb0;
        case 0x223eb4u: goto label_223eb4;
        case 0x223eb8u: goto label_223eb8;
        case 0x223ebcu: goto label_223ebc;
        case 0x223ec0u: goto label_223ec0;
        case 0x223ec4u: goto label_223ec4;
        case 0x223ec8u: goto label_223ec8;
        case 0x223eccu: goto label_223ecc;
        case 0x223ed0u: goto label_223ed0;
        case 0x223ed4u: goto label_223ed4;
        case 0x223ed8u: goto label_223ed8;
        case 0x223edcu: goto label_223edc;
        case 0x223ee0u: goto label_223ee0;
        case 0x223ee4u: goto label_223ee4;
        case 0x223ee8u: goto label_223ee8;
        case 0x223eecu: goto label_223eec;
        case 0x223ef0u: goto label_223ef0;
        case 0x223ef4u: goto label_223ef4;
        case 0x223ef8u: goto label_223ef8;
        case 0x223efcu: goto label_223efc;
        case 0x223f00u: goto label_223f00;
        case 0x223f04u: goto label_223f04;
        case 0x223f08u: goto label_223f08;
        case 0x223f0cu: goto label_223f0c;
        case 0x223f10u: goto label_223f10;
        case 0x223f14u: goto label_223f14;
        case 0x223f18u: goto label_223f18;
        case 0x223f1cu: goto label_223f1c;
        case 0x223f20u: goto label_223f20;
        case 0x223f24u: goto label_223f24;
        case 0x223f28u: goto label_223f28;
        case 0x223f2cu: goto label_223f2c;
        case 0x223f30u: goto label_223f30;
        case 0x223f34u: goto label_223f34;
        case 0x223f38u: goto label_223f38;
        case 0x223f3cu: goto label_223f3c;
        case 0x223f40u: goto label_223f40;
        case 0x223f44u: goto label_223f44;
        case 0x223f48u: goto label_223f48;
        case 0x223f4cu: goto label_223f4c;
        case 0x223f50u: goto label_223f50;
        case 0x223f54u: goto label_223f54;
        case 0x223f58u: goto label_223f58;
        case 0x223f5cu: goto label_223f5c;
        case 0x223f60u: goto label_223f60;
        case 0x223f64u: goto label_223f64;
        case 0x223f68u: goto label_223f68;
        case 0x223f6cu: goto label_223f6c;
        case 0x223f70u: goto label_223f70;
        case 0x223f74u: goto label_223f74;
        case 0x223f78u: goto label_223f78;
        case 0x223f7cu: goto label_223f7c;
        case 0x223f80u: goto label_223f80;
        case 0x223f84u: goto label_223f84;
        case 0x223f88u: goto label_223f88;
        case 0x223f8cu: goto label_223f8c;
        case 0x223f90u: goto label_223f90;
        case 0x223f94u: goto label_223f94;
        case 0x223f98u: goto label_223f98;
        case 0x223f9cu: goto label_223f9c;
        case 0x223fa0u: goto label_223fa0;
        case 0x223fa4u: goto label_223fa4;
        case 0x223fa8u: goto label_223fa8;
        case 0x223facu: goto label_223fac;
        case 0x223fb0u: goto label_223fb0;
        case 0x223fb4u: goto label_223fb4;
        case 0x223fb8u: goto label_223fb8;
        case 0x223fbcu: goto label_223fbc;
        case 0x223fc0u: goto label_223fc0;
        case 0x223fc4u: goto label_223fc4;
        case 0x223fc8u: goto label_223fc8;
        case 0x223fccu: goto label_223fcc;
        case 0x223fd0u: goto label_223fd0;
        case 0x223fd4u: goto label_223fd4;
        case 0x223fd8u: goto label_223fd8;
        case 0x223fdcu: goto label_223fdc;
        case 0x223fe0u: goto label_223fe0;
        case 0x223fe4u: goto label_223fe4;
        case 0x223fe8u: goto label_223fe8;
        case 0x223fecu: goto label_223fec;
        case 0x223ff0u: goto label_223ff0;
        case 0x223ff4u: goto label_223ff4;
        case 0x223ff8u: goto label_223ff8;
        case 0x223ffcu: goto label_223ffc;
        case 0x224000u: goto label_224000;
        case 0x224004u: goto label_224004;
        case 0x224008u: goto label_224008;
        case 0x22400cu: goto label_22400c;
        case 0x224010u: goto label_224010;
        case 0x224014u: goto label_224014;
        case 0x224018u: goto label_224018;
        case 0x22401cu: goto label_22401c;
        case 0x224020u: goto label_224020;
        case 0x224024u: goto label_224024;
        case 0x224028u: goto label_224028;
        case 0x22402cu: goto label_22402c;
        case 0x224030u: goto label_224030;
        case 0x224034u: goto label_224034;
        case 0x224038u: goto label_224038;
        case 0x22403cu: goto label_22403c;
        case 0x224040u: goto label_224040;
        case 0x224044u: goto label_224044;
        case 0x224048u: goto label_224048;
        case 0x22404cu: goto label_22404c;
        case 0x224050u: goto label_224050;
        case 0x224054u: goto label_224054;
        case 0x224058u: goto label_224058;
        case 0x22405cu: goto label_22405c;
        case 0x224060u: goto label_224060;
        case 0x224064u: goto label_224064;
        case 0x224068u: goto label_224068;
        case 0x22406cu: goto label_22406c;
        case 0x224070u: goto label_224070;
        case 0x224074u: goto label_224074;
        case 0x224078u: goto label_224078;
        case 0x22407cu: goto label_22407c;
        case 0x224080u: goto label_224080;
        case 0x224084u: goto label_224084;
        case 0x224088u: goto label_224088;
        case 0x22408cu: goto label_22408c;
        case 0x224090u: goto label_224090;
        case 0x224094u: goto label_224094;
        case 0x224098u: goto label_224098;
        case 0x22409cu: goto label_22409c;
        case 0x2240a0u: goto label_2240a0;
        case 0x2240a4u: goto label_2240a4;
        case 0x2240a8u: goto label_2240a8;
        case 0x2240acu: goto label_2240ac;
        case 0x2240b0u: goto label_2240b0;
        case 0x2240b4u: goto label_2240b4;
        case 0x2240b8u: goto label_2240b8;
        case 0x2240bcu: goto label_2240bc;
        case 0x2240c0u: goto label_2240c0;
        case 0x2240c4u: goto label_2240c4;
        case 0x2240c8u: goto label_2240c8;
        case 0x2240ccu: goto label_2240cc;
        case 0x2240d0u: goto label_2240d0;
        case 0x2240d4u: goto label_2240d4;
        case 0x2240d8u: goto label_2240d8;
        case 0x2240dcu: goto label_2240dc;
        case 0x2240e0u: goto label_2240e0;
        case 0x2240e4u: goto label_2240e4;
        case 0x2240e8u: goto label_2240e8;
        case 0x2240ecu: goto label_2240ec;
        case 0x2240f0u: goto label_2240f0;
        case 0x2240f4u: goto label_2240f4;
        case 0x2240f8u: goto label_2240f8;
        case 0x2240fcu: goto label_2240fc;
        case 0x224100u: goto label_224100;
        case 0x224104u: goto label_224104;
        case 0x224108u: goto label_224108;
        case 0x22410cu: goto label_22410c;
        case 0x224110u: goto label_224110;
        case 0x224114u: goto label_224114;
        case 0x224118u: goto label_224118;
        case 0x22411cu: goto label_22411c;
        case 0x224120u: goto label_224120;
        case 0x224124u: goto label_224124;
        case 0x224128u: goto label_224128;
        case 0x22412cu: goto label_22412c;
        case 0x224130u: goto label_224130;
        case 0x224134u: goto label_224134;
        case 0x224138u: goto label_224138;
        case 0x22413cu: goto label_22413c;
        case 0x224140u: goto label_224140;
        case 0x224144u: goto label_224144;
        case 0x224148u: goto label_224148;
        case 0x22414cu: goto label_22414c;
        case 0x224150u: goto label_224150;
        case 0x224154u: goto label_224154;
        case 0x224158u: goto label_224158;
        case 0x22415cu: goto label_22415c;
        case 0x224160u: goto label_224160;
        case 0x224164u: goto label_224164;
        case 0x224168u: goto label_224168;
        case 0x22416cu: goto label_22416c;
        case 0x224170u: goto label_224170;
        case 0x224174u: goto label_224174;
        case 0x224178u: goto label_224178;
        case 0x22417cu: goto label_22417c;
        case 0x224180u: goto label_224180;
        case 0x224184u: goto label_224184;
        case 0x224188u: goto label_224188;
        case 0x22418cu: goto label_22418c;
        case 0x224190u: goto label_224190;
        case 0x224194u: goto label_224194;
        case 0x224198u: goto label_224198;
        case 0x22419cu: goto label_22419c;
        case 0x2241a0u: goto label_2241a0;
        case 0x2241a4u: goto label_2241a4;
        case 0x2241a8u: goto label_2241a8;
        case 0x2241acu: goto label_2241ac;
        default: return;
    }

label_2239e0:
    // 0x2239e0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_2239e4:
    if (ctx->pc == 0x2239E4u) {
        ctx->pc = 0x2239E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239E0u;
        // 0x2239e4: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2239E8u;
        goto label_2239e8;
    }
    ctx->pc = 0x2239E0u;
    {
        const bool branch_taken_0x2239e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2239E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239E0u;
        // 0x2239e4: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239e0) {
            ctx->pc = 0x223970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x223970; return; }
        }
    }
    ctx->pc = 0x2239E8u;
label_2239e8:
    // 0x2239e8: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2239e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2239ec:
    // 0x2239ec: 0x1262001e  beq         $s3, $v0, . + 4 + (0x1E << 2)
label_2239f0:
    if (ctx->pc == 0x2239F0u) {
        ctx->pc = 0x2239F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239ECu;
        // 0x2239f0: 0x3c02c3c8  lui         $v0, 0xC3C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2239F4u;
        goto label_2239f4;
    }
    ctx->pc = 0x2239ECu;
    {
        const bool branch_taken_0x2239ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2239F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239ECu;
        // 0x2239f0: 0x3c02c3c8  lui         $v0, 0xC3C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239ec) {
            ctx->pc = 0x223A68u;
            goto label_223a68;
        }
    }
    ctx->pc = 0x2239F4u;
label_2239f4:
    // 0x2239f4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2239f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2239f8:
    // 0x2239f8: 0x12620011  beq         $s3, $v0, . + 4 + (0x11 << 2)
label_2239fc:
    if (ctx->pc == 0x2239FCu) {
        ctx->pc = 0x2239FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239F8u;
        // 0x2239fc: 0x3c02c496  lui         $v0, 0xC496 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50326 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223A00u;
        goto label_223a00;
    }
    ctx->pc = 0x2239F8u;
    {
        const bool branch_taken_0x2239f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2239FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239F8u;
        // 0x2239fc: 0x3c02c496  lui         $v0, 0xC496 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50326 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239f8) {
            ctx->pc = 0x223A40u;
            goto label_223a40;
        }
    }
    ctx->pc = 0x223A00u;
label_223a00:
    // 0x223a00: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x223a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_223a04:
    // 0x223a04: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_223a08:
    if (ctx->pc == 0x223A08u) {
        ctx->pc = 0x223A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A04u;
        // 0x223a08: 0x3c034692  lui         $v1, 0x4692 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18066 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223A0Cu;
        goto label_223a0c;
    }
    ctx->pc = 0x223A04u;
    {
        const bool branch_taken_0x223a04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x223A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A04u;
        // 0x223a08: 0x3c034692  lui         $v1, 0x4692 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18066 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a04) {
            ctx->pc = 0x223A14u;
            goto label_223a14;
        }
    }
    ctx->pc = 0x223A0Cu;
label_223a0c:
    // 0x223a0c: 0x1000002f  b           . + 4 + (0x2F << 2)
label_223a10:
    if (ctx->pc == 0x223A10u) {
        ctx->pc = 0x223A14u;
        goto label_223a14;
    }
    ctx->pc = 0x223A0Cu;
    {
        const bool branch_taken_0x223a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223a0c) {
            ctx->pc = 0x223ACCu;
            goto label_223acc;
        }
    }
    ctx->pc = 0x223A14u;
label_223a14:
    // 0x223a14: 0x3c02c49c  lui         $v0, 0xC49C
    ctx->pc = 0x223a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50332 << 16));
label_223a18:
    // 0x223a18: 0x34647c00  ori         $a0, $v1, 0x7C00
    ctx->pc = 0x223a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31744);
label_223a1c:
    // 0x223a1c: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x223a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_223a20:
    // 0x223a20: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x223a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_223a24:
    // 0x223a24: 0x3c024719  lui         $v0, 0x4719
    ctx->pc = 0x223a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18201 << 16));
label_223a28:
    // 0x223a28: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x223a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
label_223a2c:
    // 0x223a2c: 0x34425200  ori         $v0, $v0, 0x5200
    ctx->pc = 0x223a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20992);
label_223a30:
    // 0x223a30: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x223a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_223a34:
    // 0x223a34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x223a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_223a38:
    // 0x223a38: 0x10000014  b           . + 4 + (0x14 << 2)
label_223a3c:
    if (ctx->pc == 0x223A3Cu) {
        ctx->pc = 0x223A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A38u;
        // 0x223a3c: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223A40u;
        goto label_223a40;
    }
    ctx->pc = 0x223A38u;
    {
        const bool branch_taken_0x223a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A38u;
        // 0x223a3c: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a38) {
            ctx->pc = 0x223A8Cu;
            goto label_223a8c;
        }
    }
    ctx->pc = 0x223A40u;
label_223a40:
    // 0x223a40: 0x3c0346da  lui         $v1, 0x46DA
    ctx->pc = 0x223a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18138 << 16));
label_223a44:
    // 0x223a44: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x223a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_223a48:
    // 0x223a48: 0x3462c000  ori         $v0, $v1, 0xC000
    ctx->pc = 0x223a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
label_223a4c:
    // 0x223a4c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x223a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_223a50:
    // 0x223a50: 0x3c02470b  lui         $v0, 0x470B
    ctx->pc = 0x223a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18187 << 16));
label_223a54:
    // 0x223a54: 0x34437400  ori         $v1, $v0, 0x7400
    ctx->pc = 0x223a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29696);
label_223a58:
    // 0x223a58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x223a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_223a5c:
    // 0x223a5c: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x223a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
label_223a60:
    // 0x223a60: 0x1000000a  b           . + 4 + (0xA << 2)
label_223a64:
    if (ctx->pc == 0x223A64u) {
        ctx->pc = 0x223A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A60u;
        // 0x223a64: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223A68u;
        goto label_223a68;
    }
    ctx->pc = 0x223A60u;
    {
        const bool branch_taken_0x223a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A60u;
        // 0x223a64: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a60) {
            ctx->pc = 0x223A8Cu;
            goto label_223a8c;
        }
    }
    ctx->pc = 0x223A68u;
label_223a68:
    // 0x223a68: 0x3c034675  lui         $v1, 0x4675
    ctx->pc = 0x223a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18037 << 16));
label_223a6c:
    // 0x223a6c: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x223a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_223a70:
    // 0x223a70: 0x34625000  ori         $v0, $v1, 0x5000
    ctx->pc = 0x223a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
label_223a74:
    // 0x223a74: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x223a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_223a78:
    // 0x223a78: 0x3c024651  lui         $v0, 0x4651
    ctx->pc = 0x223a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18001 << 16));
label_223a7c:
    // 0x223a7c: 0x34436000  ori         $v1, $v0, 0x6000
    ctx->pc = 0x223a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
label_223a80:
    // 0x223a80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x223a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_223a84:
    // 0x223a84: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x223a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
label_223a88:
    // 0x223a88: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x223a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_223a8c:
    // 0x223a8c: 0xc0590dc  jal         func_164370
label_223a90:
    if (ctx->pc == 0x223A90u) {
        ctx->pc = 0x223A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A8Cu;
        // 0x223a90: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223A94u;
        goto label_223a94;
    }
    ctx->pc = 0x223A8Cu;
    SET_GPR_U32(ctx, 31, 0x223A94u);
    ctx->pc = 0x223A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223A8Cu;
    // 0x223a90: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    { ctx->pc = 0x164370; return; }
    ctx->pc = 0x223A94u;
label_223a94:
    // 0x223a94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x223a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_223a98:
    // 0x223a98: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_223a9c:
    if (ctx->pc == 0x223A9Cu) {
        ctx->pc = 0x223AA0u;
        goto label_223aa0;
    }
    ctx->pc = 0x223A98u;
    {
        const bool branch_taken_0x223a98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x223a98) {
            ctx->pc = 0x223ACCu;
            goto label_223acc;
        }
    }
    ctx->pc = 0x223AA0u;
label_223aa0:
    // 0x223aa0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x223aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_223aa4:
    // 0x223aa4: 0xc066e26  jal         func_19B898
label_223aa8:
    if (ctx->pc == 0x223AA8u) {
        ctx->pc = 0x223AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AA4u;
        // 0x223aa8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223AACu;
        goto label_223aac;
    }
    ctx->pc = 0x223AA4u;
    SET_GPR_U32(ctx, 31, 0x223AACu);
    ctx->pc = 0x223AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223AA4u;
    // 0x223aa8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x223AACu;
label_223aac:
    // 0x223aac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x223aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223ab0:
    // 0x223ab0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x223ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_223ab4:
    // 0x223ab4: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x223ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
label_223ab8:
    // 0x223ab8: 0x244235b0  addiu       $v0, $v0, 0x35B0
    ctx->pc = 0x223ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13744));
label_223abc:
    // 0x223abc: 0x96030014  lhu         $v1, 0x14($s0)
    ctx->pc = 0x223abcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_223ac0:
    // 0x223ac0: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x223ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_223ac4:
    // 0x223ac4: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x223ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
label_223ac8:
    // 0x223ac8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x223ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_223acc:
    // 0x223acc: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x223accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_223ad0:
    // 0x223ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x223ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223ad4:
    // 0x223ad4: 0x24848fb0  addiu       $a0, $a0, -0x7050
    ctx->pc = 0x223ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938544));
label_223ad8:
    // 0x223ad8: 0xc08e9ac  jal         func_23A6B0
label_223adc:
    if (ctx->pc == 0x223ADCu) {
        ctx->pc = 0x223ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AD8u;
        // 0x223adc: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223AE0u;
        goto label_223ae0;
    }
    ctx->pc = 0x223AD8u;
    SET_GPR_U32(ctx, 31, 0x223AE0u);
    ctx->pc = 0x223ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223AD8u;
    // 0x223adc: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x223AE0u;
label_223ae0:
    // 0x223ae0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x223ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_223ae4:
    // 0x223ae4: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x223ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_223ae8:
    // 0x223ae8: 0x2463e580  addiu       $v1, $v1, -0x1A80
    ctx->pc = 0x223ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960512));
label_223aec:
    // 0x223aec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x223aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_223af0:
    // 0x223af0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x223af0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_223af4:
    // 0x223af4: 0x12000054  beqz        $s0, . + 4 + (0x54 << 2)
label_223af8:
    if (ctx->pc == 0x223AF8u) {
        ctx->pc = 0x223AFCu;
        goto label_223afc;
    }
    ctx->pc = 0x223AF4u;
    {
        const bool branch_taken_0x223af4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x223af4) {
            ctx->pc = 0x223C48u;
            goto label_223c48;
        }
    }
    ctx->pc = 0x223AFCu;
label_223afc:
    // 0x223afc: 0x8f9385d0  lw          $s3, -0x7A30($gp)
    ctx->pc = 0x223afcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_223b00:
    // 0x223b00: 0x12600050  beqz        $s3, . + 4 + (0x50 << 2)
label_223b04:
    if (ctx->pc == 0x223B04u) {
        ctx->pc = 0x223B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B00u;
        // 0x223b04: 0x92120000  lbu         $s2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223B08u;
        goto label_223b08;
    }
    ctx->pc = 0x223B00u;
    {
        const bool branch_taken_0x223b00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B00u;
        // 0x223b04: 0x92120000  lbu         $s2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b00) {
            ctx->pc = 0x223C44u;
            goto label_223c44;
        }
    }
    ctx->pc = 0x223B08u;
label_223b08:
    // 0x223b08: 0x92690096  lbu         $t1, 0x96($s3)
    ctx->pc = 0x223b08u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 150)));
label_223b0c:
    // 0x223b0c: 0x11200049  beqz        $t1, . + 4 + (0x49 << 2)
label_223b10:
    if (ctx->pc == 0x223B10u) {
        ctx->pc = 0x223B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B0Cu;
        // 0x223b10: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x223B14u;
        goto label_223b14;
    }
    ctx->pc = 0x223B0Cu;
    {
        const bool branch_taken_0x223b0c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B0Cu;
        // 0x223b10: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b0c) {
            ctx->pc = 0x223C34u;
            goto label_223c34;
        }
    }
    ctx->pc = 0x223B14u;
label_223b14:
    // 0x223b14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x223b14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223b18:
    // 0x223b18: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_223b1c:
    if (ctx->pc == 0x223B1Cu) {
        ctx->pc = 0x223B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B18u;
        // 0x223b1c: 0x26110001  addiu       $s1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223B20u;
        goto label_223b20;
    }
    ctx->pc = 0x223B18u;
    {
        const bool branch_taken_0x223b18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B18u;
        // 0x223b1c: 0x26110001  addiu       $s1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b18) {
            ctx->pc = 0x223B78u;
            goto label_223b78;
        }
    }
    ctx->pc = 0x223B20u;
label_223b20:
    // 0x223b20: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x223b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_223b24:
    // 0x223b24: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x223b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_223b28:
    // 0x223b28: 0x9027490c  lbu         $a3, 0x490C($at)
    ctx->pc = 0x223b28u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_223b2c:
    // 0x223b2c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x223b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_223b30:
    // 0x223b30: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x223b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_223b34:
    // 0x223b34: 0x0  nop
    ctx->pc = 0x223b34u;
    // NOP
label_223b38:
    // 0x223b38: 0x10e60003  beq         $a3, $a2, . + 4 + (0x3 << 2)
label_223b3c:
    if (ctx->pc == 0x223B3Cu) {
        ctx->pc = 0x223B40u;
        goto label_223b40;
    }
    ctx->pc = 0x223B38u;
    {
        const bool branch_taken_0x223b38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x223b38) {
            ctx->pc = 0x223B48u;
            goto label_223b48;
        }
    }
    ctx->pc = 0x223B40u;
label_223b40:
    // 0x223b40: 0x14e50005  bne         $a3, $a1, . + 4 + (0x5 << 2)
label_223b44:
    if (ctx->pc == 0x223B44u) {
        ctx->pc = 0x223B48u;
        goto label_223b48;
    }
    ctx->pc = 0x223B40u;
    {
        const bool branch_taken_0x223b40 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x223b40) {
            ctx->pc = 0x223B58u;
            goto label_223b58;
        }
    }
    ctx->pc = 0x223B48u;
label_223b48:
    // 0x223b48: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x223b48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_223b4c:
    // 0x223b4c: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x223b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_223b50:
    // 0x223b50: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_223b54:
    if (ctx->pc == 0x223B54u) {
        ctx->pc = 0x223B58u;
        goto label_223b58;
    }
    ctx->pc = 0x223B50u;
    {
        const bool branch_taken_0x223b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x223b50) {
            ctx->pc = 0x223B68u;
            goto label_223b68;
        }
    }
    ctx->pc = 0x223B58u;
label_223b58:
    // 0x223b58: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x223b58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_223b5c:
    // 0x223b5c: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x223b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_223b60:
    // 0x223b60: 0x11230005  beq         $t1, $v1, . + 4 + (0x5 << 2)
label_223b64:
    if (ctx->pc == 0x223B64u) {
        ctx->pc = 0x223B68u;
        goto label_223b68;
    }
    ctx->pc = 0x223B60u;
    {
        const bool branch_taken_0x223b60 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x223b60) {
            ctx->pc = 0x223B78u;
            goto label_223b78;
        }
    }
    ctx->pc = 0x223B68u;
label_223b68:
    // 0x223b68: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x223b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_223b6c:
    // 0x223b6c: 0x112182a  slt         $v1, $t0, $s2
    ctx->pc = 0x223b6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_223b70:
    // 0x223b70: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_223b74:
    if (ctx->pc == 0x223B74u) {
        ctx->pc = 0x223B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B70u;
        // 0x223b74: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223B78u;
        goto label_223b78;
    }
    ctx->pc = 0x223B70u;
    {
        const bool branch_taken_0x223b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x223B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B70u;
        // 0x223b74: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b70) {
            ctx->pc = 0x223B34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223b34;
        }
    }
    ctx->pc = 0x223B78u;
label_223b78:
    // 0x223b78: 0x112082a  slt         $at, $t0, $s2
    ctx->pc = 0x223b78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_223b7c:
    // 0x223b7c: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
label_223b80:
    if (ctx->pc == 0x223B80u) {
        ctx->pc = 0x223B84u;
        goto label_223b84;
    }
    ctx->pc = 0x223B7Cu;
    {
        const bool branch_taken_0x223b7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x223b7c) {
            ctx->pc = 0x223C34u;
            goto label_223c34;
        }
    }
    ctx->pc = 0x223B84u;
label_223b84:
    // 0x223b84: 0x9263009d  lbu         $v1, 0x9D($s3)
    ctx->pc = 0x223b84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 157)));
label_223b88:
    // 0x223b88: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_223b8c:
    if (ctx->pc == 0x223B8Cu) {
        ctx->pc = 0x223B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B88u;
        // 0x223b8c: 0x28610080  slti        $at, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x223B90u;
        goto label_223b90;
    }
    ctx->pc = 0x223B88u;
    {
        const bool branch_taken_0x223b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B88u;
        // 0x223b8c: 0x28610080  slti        $at, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b88) {
            ctx->pc = 0x223C34u;
            goto label_223c34;
        }
    }
    ctx->pc = 0x223B90u;
label_223b90:
    // 0x223b90: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_223b94:
    if (ctx->pc == 0x223B94u) {
        ctx->pc = 0x223B98u;
        goto label_223b98;
    }
    ctx->pc = 0x223B90u;
    {
        const bool branch_taken_0x223b90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x223b90) {
            ctx->pc = 0x223C34u;
            goto label_223c34;
        }
    }
    ctx->pc = 0x223B98u;
label_223b98:
    // 0x223b98: 0x8f8292dc  lw          $v0, -0x6D24($gp)
    ctx->pc = 0x223b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939356)));
label_223b9c:
    // 0x223b9c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x223b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_223ba0:
    // 0x223ba0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x223ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_223ba4:
    // 0x223ba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x223ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_223ba8:
    // 0x223ba8: 0xc08f0cc  jal         func_23C330
label_223bac:
    if (ctx->pc == 0x223BACu) {
        ctx->pc = 0x223BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BA8u;
        // 0x223bac: 0x8c540004  lw          $s4, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223BB0u;
        goto label_223bb0;
    }
    ctx->pc = 0x223BA8u;
    SET_GPR_U32(ctx, 31, 0x223BB0u);
    ctx->pc = 0x223BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223BA8u;
    // 0x223bac: 0x8c540004  lw          $s4, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x223BB0u;
label_223bb0:
    // 0x223bb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223bb4:
    // 0x223bb4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x223bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_223bb8:
    // 0x223bb8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_223bbc:
    if (ctx->pc == 0x223BBCu) {
        ctx->pc = 0x223BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BB8u;
        // 0x223bbc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x223BC0u;
        goto label_223bc0;
    }
    ctx->pc = 0x223BB8u;
    {
        const bool branch_taken_0x223bb8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x223BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BB8u;
        // 0x223bbc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223bb8) {
            ctx->pc = 0x223BCCu;
            goto label_223bcc;
        }
    }
    ctx->pc = 0x223BC0u;
label_223bc0:
    // 0x223bc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x223bc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223bc4:
    // 0x223bc4: 0x10000008  b           . + 4 + (0x8 << 2)
label_223bc8:
    if (ctx->pc == 0x223BC8u) {
        ctx->pc = 0x223BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BC4u;
        // 0x223bc8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x223BCCu;
        goto label_223bcc;
    }
    ctx->pc = 0x223BC4u;
    {
        const bool branch_taken_0x223bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BC4u;
        // 0x223bc8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223bc4) {
            ctx->pc = 0x223BE8u;
            goto label_223be8;
        }
    }
    ctx->pc = 0x223BCCu;
label_223bcc:
    // 0x223bcc: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x223bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_223bd0:
    // 0x223bd0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x223bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_223bd4:
    // 0x223bd4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x223bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_223bd8:
    // 0x223bd8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x223bd8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223bdc:
    // 0x223bdc: 0x0  nop
    ctx->pc = 0x223bdcu;
    // NOP
label_223be0:
    // 0x223be0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_223be4:
    // 0x223be4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x223be4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_223be8:
    // 0x223be8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x223be8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_223bec:
    // 0x223bec: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x223becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_223bf0:
    // 0x223bf0: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x223bf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
label_223bf4:
    // 0x223bf4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x223bf4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223bf8:
    // 0x223bf8: 0x0  nop
    ctx->pc = 0x223bf8u;
    // NOP
label_223bfc:
    // 0x223bfc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x223bfcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_223c00:
    // 0x223c00: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x223c00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_223c04:
    // 0x223c04: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x223c04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_223c08:
    // 0x223c08: 0x0  nop
    ctx->pc = 0x223c08u;
    // NOP
label_223c0c:
    // 0x223c0c: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x223c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_223c10:
    // 0x223c10: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x223c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_223c14:
    // 0x223c14: 0xa263009c  sb          $v1, 0x9C($s3)
    ctx->pc = 0x223c14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 156), (uint8_t)GPR_U32(ctx, 3));
label_223c18:
    // 0x223c18: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x223c18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_223c1c:
    // 0x223c1c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x223c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_223c20:
    // 0x223c20: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_223c24:
    if (ctx->pc == 0x223C24u) {
        ctx->pc = 0x223C28u;
        goto label_223c28;
    }
    ctx->pc = 0x223C20u;
    {
        const bool branch_taken_0x223c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223c20) {
            ctx->pc = 0x223C34u;
            goto label_223c34;
        }
    }
    ctx->pc = 0x223C28u;
label_223c28:
    // 0x223c28: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x223c28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
label_223c2c:
    // 0x223c2c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x223c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_223c30:
    // 0x223c30: 0xa263009c  sb          $v1, 0x9C($s3)
    ctx->pc = 0x223c30u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 156), (uint8_t)GPR_U32(ctx, 3));
label_223c34:
    // 0x223c34: 0x0  nop
    ctx->pc = 0x223c34u;
    // NOP
label_223c38:
    // 0x223c38: 0x8e730084  lw          $s3, 0x84($s3)
    ctx->pc = 0x223c38u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_223c3c:
    // 0x223c3c: 0x1660ffb2  bnez        $s3, . + 4 + (-0x4E << 2)
label_223c40:
    if (ctx->pc == 0x223C40u) {
        ctx->pc = 0x223C44u;
        goto label_223c44;
    }
    ctx->pc = 0x223C3Cu;
    {
        const bool branch_taken_0x223c3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x223c3c) {
            ctx->pc = 0x223B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223b08;
        }
    }
    ctx->pc = 0x223C44u;
label_223c44:
    // 0x223c44: 0x0  nop
    ctx->pc = 0x223c44u;
    // NOP
label_223c48:
    // 0x223c48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x223c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_223c4c:
    // 0x223c4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x223c4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_223c50:
    // 0x223c50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x223c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_223c54:
    // 0x223c54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x223c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_223c58:
    // 0x223c58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_223c5c:
    // 0x223c5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_223c60:
    // 0x223c60: 0x3e00008  jr          $ra
label_223c64:
    if (ctx->pc == 0x223C64u) {
        ctx->pc = 0x223C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C60u;
        // 0x223c64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223C68u;
        goto label_223c68;
    }
    ctx->pc = 0x223C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C60u;
        // 0x223c64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223C68u;
label_223c68:
    // 0x223c68: 0x0  nop
    ctx->pc = 0x223c68u;
    // NOP
label_223c6c:
    // 0x223c6c: 0x0  nop
    ctx->pc = 0x223c6cu;
    // NOP
label_223c70:
    // 0x223c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_223c74:
    // 0x223c74: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x223c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_223c78:
    // 0x223c78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x223c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_223c7c:
    // 0x223c7c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x223c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_223c80:
    // 0x223c80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_223c84:
    // 0x223c84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_223c88:
    // 0x223c88: 0x9030490d  lbu         $s0, 0x490D($at)
    ctx->pc = 0x223c88u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_223c8c:
    // 0x223c8c: 0x1603001c  bne         $s0, $v1, . + 4 + (0x1C << 2)
label_223c90:
    if (ctx->pc == 0x223C90u) {
        ctx->pc = 0x223C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C8Cu;
        // 0x223c90: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223C94u;
        goto label_223c94;
    }
    ctx->pc = 0x223C8Cu;
    {
        const bool branch_taken_0x223c8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x223C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C8Cu;
        // 0x223c90: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c8c) {
            ctx->pc = 0x223D00u;
            goto label_223d00;
        }
    }
    ctx->pc = 0x223C94u;
label_223c94:
    // 0x223c94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x223c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_223c98:
    // 0x223c98: 0x16230019  bne         $s1, $v1, . + 4 + (0x19 << 2)
label_223c9c:
    if (ctx->pc == 0x223C9Cu) {
        ctx->pc = 0x223CA0u;
        goto label_223ca0;
    }
    ctx->pc = 0x223C98u;
    {
        const bool branch_taken_0x223c98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x223c98) {
            ctx->pc = 0x223D00u;
            goto label_223d00;
        }
    }
    ctx->pc = 0x223CA0u;
label_223ca0:
    // 0x223ca0: 0x8f9085d0  lw          $s0, -0x7A30($gp)
    ctx->pc = 0x223ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_223ca4:
    // 0x223ca4: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_223ca8:
    if (ctx->pc == 0x223CA8u) {
        ctx->pc = 0x223CACu;
        goto label_223cac;
    }
    ctx->pc = 0x223CA4u;
    {
        const bool branch_taken_0x223ca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x223ca4) {
            ctx->pc = 0x223CF4u;
            goto label_223cf4;
        }
    }
    ctx->pc = 0x223CACu;
label_223cac:
    // 0x223cac: 0x92030096  lbu         $v1, 0x96($s0)
    ctx->pc = 0x223cacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
label_223cb0:
    // 0x223cb0: 0x1471000c  bne         $v1, $s1, . + 4 + (0xC << 2)
label_223cb4:
    if (ctx->pc == 0x223CB4u) {
        ctx->pc = 0x223CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CB0u;
        // 0x223cb4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223CB8u;
        goto label_223cb8;
    }
    ctx->pc = 0x223CB0u;
    {
        const bool branch_taken_0x223cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x223CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CB0u;
        // 0x223cb4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cb0) {
            ctx->pc = 0x223CE4u;
            goto label_223ce4;
        }
    }
    ctx->pc = 0x223CB8u;
label_223cb8:
    // 0x223cb8: 0xc0590dc  jal         func_164370
label_223cbc:
    if (ctx->pc == 0x223CBCu) {
        ctx->pc = 0x223CC0u;
        goto label_223cc0;
    }
    ctx->pc = 0x223CB8u;
    SET_GPR_U32(ctx, 31, 0x223CC0u);
    ctx->pc = 0x164370u;
    { ctx->pc = 0x164370; return; }
    ctx->pc = 0x223CC0u;
label_223cc0:
    // 0x223cc0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_223cc4:
    if (ctx->pc == 0x223CC4u) {
        ctx->pc = 0x223CC8u;
        goto label_223cc8;
    }
    ctx->pc = 0x223CC0u;
    {
        const bool branch_taken_0x223cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223cc0) {
            ctx->pc = 0x223CE4u;
            goto label_223ce4;
        }
    }
    ctx->pc = 0x223CC8u;
label_223cc8:
    // 0x223cc8: 0x9204009c  lbu         $a0, 0x9C($s0)
    ctx->pc = 0x223cc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
label_223ccc:
    // 0x223ccc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x223cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_223cd0:
    // 0x223cd0: 0x24633710  addiu       $v1, $v1, 0x3710
    ctx->pc = 0x223cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14096));
label_223cd4:
    // 0x223cd4: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x223cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
label_223cd8:
    // 0x223cd8: 0xa204009c  sb          $a0, 0x9C($s0)
    ctx->pc = 0x223cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 4));
label_223cdc:
    // 0x223cdc: 0xac50005c  sw          $s0, 0x5C($v0)
    ctx->pc = 0x223cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 16));
label_223ce0:
    // 0x223ce0: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x223ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_223ce4:
    // 0x223ce4: 0x0  nop
    ctx->pc = 0x223ce4u;
    // NOP
label_223ce8:
    // 0x223ce8: 0x8e100084  lw          $s0, 0x84($s0)
    ctx->pc = 0x223ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_223cec:
    // 0x223cec: 0x1600ffef  bnez        $s0, . + 4 + (-0x11 << 2)
label_223cf0:
    if (ctx->pc == 0x223CF0u) {
        ctx->pc = 0x223CF4u;
        goto label_223cf4;
    }
    ctx->pc = 0x223CECu;
    {
        const bool branch_taken_0x223cec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x223cec) {
            ctx->pc = 0x223CACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223cac;
        }
    }
    ctx->pc = 0x223CF4u;
label_223cf4:
    // 0x223cf4: 0x0  nop
    ctx->pc = 0x223cf4u;
    // NOP
label_223cf8:
    // 0x223cf8: 0x10000022  b           . + 4 + (0x22 << 2)
label_223cfc:
    if (ctx->pc == 0x223CFCu) {
        ctx->pc = 0x223CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CF8u;
        // 0x223cfc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223D00u;
        goto label_223d00;
    }
    ctx->pc = 0x223CF8u;
    {
        const bool branch_taken_0x223cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CF8u;
        // 0x223cfc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cf8) {
            ctx->pc = 0x223D84u;
            goto label_223d84;
        }
    }
    ctx->pc = 0x223D00u;
label_223d00:
    // 0x223d00: 0x8f8385d0  lw          $v1, -0x7A30($gp)
    ctx->pc = 0x223d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_223d04:
    // 0x223d04: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_223d08:
    if (ctx->pc == 0x223D08u) {
        ctx->pc = 0x223D0Cu;
        goto label_223d0c;
    }
    ctx->pc = 0x223D04u;
    {
        const bool branch_taken_0x223d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223d04) {
            ctx->pc = 0x223D44u;
            goto label_223d44;
        }
    }
    ctx->pc = 0x223D0Cu;
label_223d0c:
    // 0x223d0c: 0x90620096  lbu         $v0, 0x96($v1)
    ctx->pc = 0x223d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 150)));
label_223d10:
    // 0x223d10: 0x14510009  bne         $v0, $s1, . + 4 + (0x9 << 2)
label_223d14:
    if (ctx->pc == 0x223D14u) {
        ctx->pc = 0x223D18u;
        goto label_223d18;
    }
    ctx->pc = 0x223D10u;
    {
        const bool branch_taken_0x223d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x223d10) {
            ctx->pc = 0x223D38u;
            goto label_223d38;
        }
    }
    ctx->pc = 0x223D18u;
label_223d18:
    // 0x223d18: 0x9062009d  lbu         $v0, 0x9D($v1)
    ctx->pc = 0x223d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 157)));
label_223d1c:
    // 0x223d1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_223d20:
    if (ctx->pc == 0x223D20u) {
        ctx->pc = 0x223D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D1Cu;
        // 0x223d20: 0x28410080  slti        $at, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x223D24u;
        goto label_223d24;
    }
    ctx->pc = 0x223D1Cu;
    {
        const bool branch_taken_0x223d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D1Cu;
        // 0x223d20: 0x28410080  slti        $at, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d1c) {
            ctx->pc = 0x223D38u;
            goto label_223d38;
        }
    }
    ctx->pc = 0x223D24u;
label_223d24:
    // 0x223d24: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_223d28:
    if (ctx->pc == 0x223D28u) {
        ctx->pc = 0x223D2Cu;
        goto label_223d2c;
    }
    ctx->pc = 0x223D24u;
    {
        const bool branch_taken_0x223d24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x223d24) {
            ctx->pc = 0x223D38u;
            goto label_223d38;
        }
    }
    ctx->pc = 0x223D2Cu;
label_223d2c:
    // 0x223d2c: 0x9062009c  lbu         $v0, 0x9C($v1)
    ctx->pc = 0x223d2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 156)));
label_223d30:
    // 0x223d30: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x223d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_223d34:
    // 0x223d34: 0xa062009c  sb          $v0, 0x9C($v1)
    ctx->pc = 0x223d34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 156), (uint8_t)GPR_U32(ctx, 2));
label_223d38:
    // 0x223d38: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x223d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_223d3c:
    // 0x223d3c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_223d40:
    if (ctx->pc == 0x223D40u) {
        ctx->pc = 0x223D44u;
        goto label_223d44;
    }
    ctx->pc = 0x223D3Cu;
    {
        const bool branch_taken_0x223d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x223d3c) {
            ctx->pc = 0x223D0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223d0c;
        }
    }
    ctx->pc = 0x223D44u;
label_223d44:
    // 0x223d44: 0x0  nop
    ctx->pc = 0x223d44u;
    // NOP
label_223d48:
    // 0x223d48: 0xc088d14  jal         func_223450
label_223d4c:
    if (ctx->pc == 0x223D4Cu) {
        ctx->pc = 0x223D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D48u;
        // 0x223d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223D50u;
        goto label_223d50;
    }
    ctx->pc = 0x223D48u;
    SET_GPR_U32(ctx, 31, 0x223D50u);
    ctx->pc = 0x223D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223D48u;
    // 0x223d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223450u;
    { ctx->pc = 0x223450; return; }
    ctx->pc = 0x223D50u;
label_223d50:
    // 0x223d50: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x223d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_223d54:
    // 0x223d54: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
label_223d58:
    if (ctx->pc == 0x223D58u) {
        ctx->pc = 0x223D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D54u;
        // 0x223d58: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223D5Cu;
        goto label_223d5c;
    }
    ctx->pc = 0x223D54u;
    {
        const bool branch_taken_0x223d54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x223D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D54u;
        // 0x223d58: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d54) {
            ctx->pc = 0x223D80u;
            goto label_223d80;
        }
    }
    ctx->pc = 0x223D5Cu;
label_223d5c:
    // 0x223d5c: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x223d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_223d60:
    // 0x223d60: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x223d60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_223d64:
    // 0x223d64: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_223d68:
    if (ctx->pc == 0x223D68u) {
        ctx->pc = 0x223D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D64u;
        // 0x223d68: 0x2a230003  slti        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x223D6Cu;
        goto label_223d6c;
    }
    ctx->pc = 0x223D64u;
    {
        const bool branch_taken_0x223d64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x223D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D64u;
        // 0x223d68: 0x2a230003  slti        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d64) {
            ctx->pc = 0x223D80u;
            goto label_223d80;
        }
    }
    ctx->pc = 0x223D6Cu;
label_223d6c:
    // 0x223d6c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_223d70:
    if (ctx->pc == 0x223D70u) {
        ctx->pc = 0x223D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D6Cu;
        // 0x223d70: 0x2a210010  slti        $at, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x223D74u;
        goto label_223d74;
    }
    ctx->pc = 0x223D6Cu;
    {
        const bool branch_taken_0x223d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x223D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D6Cu;
        // 0x223d70: 0x2a210010  slti        $at, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d6c) {
            ctx->pc = 0x223D80u;
            goto label_223d80;
        }
    }
    ctx->pc = 0x223D74u;
label_223d74:
    // 0x223d74: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_223d78:
    if (ctx->pc == 0x223D78u) {
        ctx->pc = 0x223D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D74u;
        // 0x223d78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223D7Cu;
        goto label_223d7c;
    }
    ctx->pc = 0x223D74u;
    {
        const bool branch_taken_0x223d74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x223D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D74u;
        // 0x223d78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d74) {
            ctx->pc = 0x223D80u;
            goto label_223d80;
        }
    }
    ctx->pc = 0x223D7Cu;
label_223d7c:
    // 0x223d7c: 0xaf8392e0  sw          $v1, -0x6D20($gp)
    ctx->pc = 0x223d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
label_223d80:
    // 0x223d80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x223d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_223d84:
    // 0x223d84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_223d88:
    // 0x223d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_223d8c:
    // 0x223d8c: 0x3e00008  jr          $ra
label_223d90:
    if (ctx->pc == 0x223D90u) {
        ctx->pc = 0x223D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D8Cu;
        // 0x223d90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223D94u;
        goto label_223d94;
    }
    ctx->pc = 0x223D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D8Cu;
        // 0x223d90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223D94u;
label_223d94:
    // 0x223d94: 0x0  nop
    ctx->pc = 0x223d94u;
    // NOP
label_223d98:
    // 0x223d98: 0x0  nop
    ctx->pc = 0x223d98u;
    // NOP
label_223d9c:
    // 0x223d9c: 0x0  nop
    ctx->pc = 0x223d9cu;
    // NOP
label_223da0:
    // 0x223da0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x223da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_223da4:
    // 0x223da4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223da8:
    // 0x223da8: 0x24a58fb0  addiu       $a1, $a1, -0x7050
    ctx->pc = 0x223da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938544));
label_223dac:
    // 0x223dac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x223dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_223db0:
    // 0x223db0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_223db4:
    if (ctx->pc == 0x223DB4u) {
        ctx->pc = 0x223DB8u;
        goto label_223db8;
    }
    ctx->pc = 0x223DB0u;
    {
        const bool branch_taken_0x223db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223db0) {
            ctx->pc = 0x223DE8u;
            goto label_223de8;
        }
    }
    ctx->pc = 0x223DB8u;
label_223db8:
    // 0x223db8: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x223db8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_223dbc:
    // 0x223dbc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_223dc0:
    if (ctx->pc == 0x223DC0u) {
        ctx->pc = 0x223DC4u;
        goto label_223dc4;
    }
    ctx->pc = 0x223DBCu;
    {
        const bool branch_taken_0x223dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223dbc) {
            ctx->pc = 0x223DCCu;
            goto label_223dcc;
        }
    }
    ctx->pc = 0x223DC4u;
label_223dc4:
    // 0x223dc4: 0x10000008  b           . + 4 + (0x8 << 2)
label_223dc8:
    if (ctx->pc == 0x223DC8u) {
        ctx->pc = 0x223DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223DC4u;
        // 0x223dc8: 0xa0a00001  sb          $zero, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223DCCu;
        goto label_223dcc;
    }
    ctx->pc = 0x223DC4u;
    {
        const bool branch_taken_0x223dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223DC4u;
        // 0x223dc8: 0xa0a00001  sb          $zero, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223dc4) {
            ctx->pc = 0x223DE8u;
            goto label_223de8;
        }
    }
    ctx->pc = 0x223DCCu;
label_223dcc:
    // 0x223dcc: 0x0  nop
    ctx->pc = 0x223dccu;
    // NOP
label_223dd0:
    // 0x223dd0: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x223dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_223dd4:
    // 0x223dd4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x223dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_223dd8:
    // 0x223dd8: 0x9083009c  lbu         $v1, 0x9C($a0)
    ctx->pc = 0x223dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 156)));
label_223ddc:
    // 0x223ddc: 0x306300bf  andi        $v1, $v1, 0xBF
    ctx->pc = 0x223ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)191);
label_223de0:
    // 0x223de0: 0xa083009c  sb          $v1, 0x9C($a0)
    ctx->pc = 0x223de0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 156), (uint8_t)GPR_U32(ctx, 3));
label_223de4:
    // 0x223de4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x223de4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_223de8:
    // 0x223de8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x223de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_223dec:
    // 0x223dec: 0x28c30040  slti        $v1, $a2, 0x40
    ctx->pc = 0x223decu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
label_223df0:
    // 0x223df0: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_223df4:
    if (ctx->pc == 0x223DF4u) {
        ctx->pc = 0x223DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223DF0u;
        // 0x223df4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223DF8u;
        goto label_223df8;
    }
    ctx->pc = 0x223DF0u;
    {
        const bool branch_taken_0x223df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x223DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223DF0u;
        // 0x223df4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223df0) {
            ctx->pc = 0x223DACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223dac;
        }
    }
    ctx->pc = 0x223DF8u;
label_223df8:
    // 0x223df8: 0x3e00008  jr          $ra
label_223dfc:
    if (ctx->pc == 0x223DFCu) {
        ctx->pc = 0x223E00u;
        goto label_223e00;
    }
    ctx->pc = 0x223DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223E00u;
label_223e00:
    // 0x223e00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x223e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_223e04:
    // 0x223e04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x223e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223e08:
    // 0x223e08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x223e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_223e0c:
    // 0x223e0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223e10:
    // 0x223e10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x223e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_223e14:
    // 0x223e14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x223e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_223e18:
    // 0x223e18: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x223e18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_223e1c:
    // 0x223e1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_223e20:
    // 0x223e20: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x223e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_223e24:
    // 0x223e24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_223e28:
    // 0x223e28: 0x24848fb0  addiu       $a0, $a0, -0x7050
    ctx->pc = 0x223e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938544));
label_223e2c:
    // 0x223e2c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x223e2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_223e30:
    // 0x223e30: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_223e34:
    if (ctx->pc == 0x223E34u) {
        ctx->pc = 0x223E38u;
        goto label_223e38;
    }
    ctx->pc = 0x223E30u;
    {
        const bool branch_taken_0x223e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x223e30) {
            ctx->pc = 0x223E48u;
            goto label_223e48;
        }
    }
    ctx->pc = 0x223E38u;
label_223e38:
    // 0x223e38: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_223e3c:
    if (ctx->pc == 0x223E3Cu) {
        ctx->pc = 0x223E40u;
        goto label_223e40;
    }
    ctx->pc = 0x223E38u;
    {
        const bool branch_taken_0x223e38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x223e38) {
            ctx->pc = 0x223E5Cu;
            goto label_223e5c;
        }
    }
    ctx->pc = 0x223E40u;
label_223e40:
    // 0x223e40: 0x10000006  b           . + 4 + (0x6 << 2)
label_223e44:
    if (ctx->pc == 0x223E44u) {
        ctx->pc = 0x223E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E40u;
        // 0x223e44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223E48u;
        goto label_223e48;
    }
    ctx->pc = 0x223E40u;
    {
        const bool branch_taken_0x223e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E40u;
        // 0x223e44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e40) {
            ctx->pc = 0x223E5Cu;
            goto label_223e5c;
        }
    }
    ctx->pc = 0x223E48u;
label_223e48:
    // 0x223e48: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x223e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_223e4c:
    // 0x223e4c: 0x14730003  bne         $v1, $s3, . + 4 + (0x3 << 2)
label_223e50:
    if (ctx->pc == 0x223E50u) {
        ctx->pc = 0x223E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E4Cu;
        // 0x223e50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223E54u;
        goto label_223e54;
    }
    ctx->pc = 0x223E4Cu;
    {
        const bool branch_taken_0x223e4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x223E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E4Cu;
        // 0x223e50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e4c) {
            ctx->pc = 0x223E5Cu;
            goto label_223e5c;
        }
    }
    ctx->pc = 0x223E54u;
label_223e54:
    // 0x223e54: 0x10000042  b           . + 4 + (0x42 << 2)
label_223e58:
    if (ctx->pc == 0x223E58u) {
        ctx->pc = 0x223E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E54u;
        // 0x223e58: 0xa0830001  sb          $v1, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223E5Cu;
        goto label_223e5c;
    }
    ctx->pc = 0x223E54u;
    {
        const bool branch_taken_0x223e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E54u;
        // 0x223e58: 0xa0830001  sb          $v1, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e54) {
            ctx->pc = 0x223F60u;
            goto label_223f60;
        }
    }
    ctx->pc = 0x223E5Cu;
label_223e5c:
    // 0x223e5c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x223e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_223e60:
    // 0x223e60: 0x28c30040  slti        $v1, $a2, 0x40
    ctx->pc = 0x223e60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
label_223e64:
    // 0x223e64: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_223e68:
    if (ctx->pc == 0x223E68u) {
        ctx->pc = 0x223E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E64u;
        // 0x223e68: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223E6Cu;
        goto label_223e6c;
    }
    ctx->pc = 0x223E64u;
    {
        const bool branch_taken_0x223e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x223E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E64u;
        // 0x223e68: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e64) {
            ctx->pc = 0x223E2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223e2c;
        }
    }
    ctx->pc = 0x223E6Cu;
label_223e6c:
    // 0x223e6c: 0x10a0003c  beqz        $a1, . + 4 + (0x3C << 2)
label_223e70:
    if (ctx->pc == 0x223E70u) {
        ctx->pc = 0x223E74u;
        goto label_223e74;
    }
    ctx->pc = 0x223E6Cu;
    {
        const bool branch_taken_0x223e6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x223e6c) {
            ctx->pc = 0x223F60u;
            goto label_223f60;
        }
    }
    ctx->pc = 0x223E74u;
label_223e74:
    // 0x223e74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x223e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223e78:
    // 0x223e78: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x223e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_223e7c:
    // 0x223e7c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x223e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_223e80:
    // 0x223e80: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x223e80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_223e84:
    // 0x223e84: 0xacb30004  sw          $s3, 0x4($a1)
    ctx->pc = 0x223e84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 19));
label_223e88:
    // 0x223e88: 0x9262009c  lbu         $v0, 0x9C($s3)
    ctx->pc = 0x223e88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
label_223e8c:
    // 0x223e8c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x223e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_223e90:
    // 0x223e90: 0xc066e44  jal         func_19B910
label_223e94:
    if (ctx->pc == 0x223E94u) {
        ctx->pc = 0x223E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E90u;
        // 0x223e94: 0xa262009c  sb          $v0, 0x9C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 156), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223E98u;
        goto label_223e98;
    }
    ctx->pc = 0x223E90u;
    SET_GPR_U32(ctx, 31, 0x223E98u);
    ctx->pc = 0x223E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223E90u;
    // 0x223e94: 0xa262009c  sb          $v0, 0x9C($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 156), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x223E98u;
label_223e98:
    // 0x223e98: 0xc66c0054  lwc1        $f12, 0x54($s3)
    ctx->pc = 0x223e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_223e9c:
    // 0x223e9c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x223e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_223ea0:
    // 0x223ea0: 0xc066ec0  jal         func_19BB00
label_223ea4:
    if (ctx->pc == 0x223EA4u) {
        ctx->pc = 0x223EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223EA0u;
        // 0x223ea4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223EA8u;
        goto label_223ea8;
    }
    ctx->pc = 0x223EA0u;
    SET_GPR_U32(ctx, 31, 0x223EA8u);
    ctx->pc = 0x223EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223EA0u;
    // 0x223ea4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x223EA8u;
label_223ea8:
    // 0x223ea8: 0x9265009d  lbu         $a1, 0x9D($s3)
    ctx->pc = 0x223ea8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 157)));
label_223eac:
    // 0x223eac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x223eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223eb0:
    // 0x223eb0: 0x8f8492dc  lw          $a0, -0x6D24($gp)
    ctx->pc = 0x223eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939356)));
label_223eb4:
    // 0x223eb4: 0x9263009c  lbu         $v1, 0x9C($s3)
    ctx->pc = 0x223eb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 156)));
label_223eb8:
    // 0x223eb8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x223eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_223ebc:
    // 0x223ebc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x223ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_223ec0:
    // 0x223ec0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x223ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_223ec4:
    // 0x223ec4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x223ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_223ec8:
    // 0x223ec8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x223ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_223ecc:
    // 0x223ecc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x223eccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_223ed0:
    // 0x223ed0: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x223ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_223ed4:
    // 0x223ed4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x223ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_223ed8:
    // 0x223ed8: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x223ed8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_223edc:
    // 0x223edc: 0x1000001b  b           . + 4 + (0x1B << 2)
label_223ee0:
    if (ctx->pc == 0x223EE0u) {
        ctx->pc = 0x223EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223EDCu;
        // 0x223ee0: 0x26510004  addiu       $s1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223EE4u;
        goto label_223ee4;
    }
    ctx->pc = 0x223EDCu;
    {
        const bool branch_taken_0x223edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223EDCu;
        // 0x223ee0: 0x26510004  addiu       $s1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223edc) {
            ctx->pc = 0x223F4Cu;
            goto label_223f4c;
        }
    }
    ctx->pc = 0x223EE4u;
label_223ee4:
    // 0x223ee4: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x223ee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_223ee8:
    // 0x223ee8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x223ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_223eec:
    // 0x223eec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x223eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_223ef0:
    // 0x223ef0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x223ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_223ef4:
    // 0x223ef4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x223ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_223ef8:
    // 0x223ef8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x223ef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223efc:
    // 0x223efc: 0x0  nop
    ctx->pc = 0x223efcu;
    // NOP
label_223f00:
    // 0x223f00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223f00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_223f04:
    // 0x223f04: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x223f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_223f08:
    // 0x223f08: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x223f08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_223f0c:
    // 0x223f0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x223f0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223f10:
    // 0x223f10: 0x0  nop
    ctx->pc = 0x223f10u;
    // NOP
label_223f14:
    // 0x223f14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223f14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_223f18:
    // 0x223f18: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x223f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_223f1c:
    // 0x223f1c: 0x86230004  lh          $v1, 0x4($s1)
    ctx->pc = 0x223f1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_223f20:
    // 0x223f20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x223f20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_223f24:
    // 0x223f24: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x223f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_223f28:
    // 0x223f28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_223f2c:
    // 0x223f2c: 0xc066d7a  jal         func_19B5E8
label_223f30:
    if (ctx->pc == 0x223F30u) {
        ctx->pc = 0x223F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F2Cu;
        // 0x223f30: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x223F34u;
        goto label_223f34;
    }
    ctx->pc = 0x223F2Cu;
    SET_GPR_U32(ctx, 31, 0x223F34u);
    ctx->pc = 0x223F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F2Cu;
    // 0x223f30: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x223F34u;
label_223f34:
    // 0x223f34: 0x96260006  lhu         $a2, 0x6($s1)
    ctx->pc = 0x223f34u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_223f38:
    // 0x223f38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x223f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_223f3c:
    // 0x223f3c: 0xc088fe0  jal         func_223F80
label_223f40:
    if (ctx->pc == 0x223F40u) {
        ctx->pc = 0x223F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F3Cu;
        // 0x223f40: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223F44u;
        goto label_223f44;
    }
    ctx->pc = 0x223F3Cu;
    SET_GPR_U32(ctx, 31, 0x223F44u);
    ctx->pc = 0x223F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F3Cu;
    // 0x223f40: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223F80u;
    goto label_223f80;
    ctx->pc = 0x223F44u;
label_223f44:
    // 0x223f44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x223f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_223f48:
    // 0x223f48: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x223f48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_223f4c:
    // 0x223f4c: 0x0  nop
    ctx->pc = 0x223f4cu;
    // NOP
label_223f50:
    // 0x223f50: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x223f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_223f54:
    // 0x223f54: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x223f54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_223f58:
    // 0x223f58: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_223f5c:
    if (ctx->pc == 0x223F5Cu) {
        ctx->pc = 0x223F60u;
        goto label_223f60;
    }
    ctx->pc = 0x223F58u;
    {
        const bool branch_taken_0x223f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x223f58) {
            ctx->pc = 0x223EE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223ee4;
        }
    }
    ctx->pc = 0x223F60u;
label_223f60:
    // 0x223f60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x223f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_223f64:
    // 0x223f64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x223f64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_223f68:
    // 0x223f68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x223f68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_223f6c:
    // 0x223f6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_223f70:
    // 0x223f70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x223f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_223f74:
    // 0x223f74: 0x3e00008  jr          $ra
label_223f78:
    if (ctx->pc == 0x223F78u) {
        ctx->pc = 0x223F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F74u;
        // 0x223f78: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223F7Cu;
        goto label_223f7c;
    }
    ctx->pc = 0x223F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F74u;
        // 0x223f78: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223F7Cu;
label_223f7c:
    // 0x223f7c: 0x0  nop
    ctx->pc = 0x223f7cu;
    // NOP
label_223f80:
    // 0x223f80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x223f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_223f84:
    // 0x223f84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x223f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_223f88:
    // 0x223f88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x223f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_223f8c:
    // 0x223f8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_223f90:
    // 0x223f90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x223f90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_223f94:
    // 0x223f94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x223f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_223f98:
    // 0x223f98: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x223f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_223f9c:
    // 0x223f9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x223f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_223fa0:
    // 0x223fa0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x223fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_223fa4:
    // 0x223fa4: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x223fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_223fa8:
    // 0x223fa8: 0xc066e02  jal         func_19B808
label_223fac:
    if (ctx->pc == 0x223FACu) {
        ctx->pc = 0x223FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FA8u;
        // 0x223fac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223FB0u;
        goto label_223fb0;
    }
    ctx->pc = 0x223FA8u;
    SET_GPR_U32(ctx, 31, 0x223FB0u);
    ctx->pc = 0x223FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223FA8u;
    // 0x223fac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x223FB0u;
label_223fb0:
    // 0x223fb0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x223fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_223fb4:
    // 0x223fb4: 0x2e210007  sltiu       $at, $s1, 0x7
    ctx->pc = 0x223fb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_223fb8:
    // 0x223fb8: 0x102000db  beqz        $at, . + 4 + (0xDB << 2)
label_223fbc:
    if (ctx->pc == 0x223FBCu) {
        ctx->pc = 0x223FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FB8u;
        // 0x223fbc: 0xafa3004c  sw          $v1, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x223FC0u;
        goto label_223fc0;
    }
    ctx->pc = 0x223FB8u;
    {
        const bool branch_taken_0x223fb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x223FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FB8u;
        // 0x223fbc: 0xafa3004c  sw          $v1, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fb8) {
            ctx->pc = 0x224328u;
            { ctx->pc = 0x224328; return; }
        }
    }
    ctx->pc = 0x223FC0u;
label_223fc0:
    // 0x223fc0: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x223fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_223fc4:
    // 0x223fc4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x223fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_223fc8:
    // 0x223fc8: 0x2484e180  addiu       $a0, $a0, -0x1E80
    ctx->pc = 0x223fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959488));
label_223fcc:
    // 0x223fcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x223fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_223fd0:
    // 0x223fd0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x223fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_223fd4:
    // 0x223fd4: 0x600008  jr          $v1
label_223fd8:
    if (ctx->pc == 0x223FD8u) {
        ctx->pc = 0x223FDCu;
        goto label_223fdc;
    }
    ctx->pc = 0x223FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223FDCu: goto label_223fdc;
            case 0x224054u: goto label_224054;
            case 0x2240CCu: goto label_2240cc;
            case 0x2240E8u: goto label_2240e8;
            case 0x224104u: goto label_224104;
            case 0x2242A4u: { ctx->pc = 0x2242a4; return; }
            case 0x2242B8u: { ctx->pc = 0x2242b8; return; }
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223FD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x223FDCu;
label_223fdc:
    // 0x223fdc: 0xc08f0cc  jal         func_23C330
label_223fe0:
    if (ctx->pc == 0x223FE0u) {
        ctx->pc = 0x223FE4u;
        goto label_223fe4;
    }
    ctx->pc = 0x223FDCu;
    SET_GPR_U32(ctx, 31, 0x223FE4u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x223FE4u;
label_223fe4:
    // 0x223fe4: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x223fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_223fe8:
    // 0x223fe8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x223fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_223fec:
    // 0x223fec: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x223fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_223ff0:
    // 0x223ff0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x223ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_223ff4:
    // 0x223ff4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x223ff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_223ff8:
    // 0x223ff8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x223ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_223ffc:
    // 0x223ffc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x223ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_224000:
    // 0x224000: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x224000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_224004:
    // 0x224004: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x224004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_224008:
    // 0x224008: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x224008u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_22400c:
    // 0x22400c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x22400cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_224010:
    // 0x224010: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x224010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224014:
    // 0x224014: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x224014u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[3];
label_224018:
    // 0x224018: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x224018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
label_22401c:
    // 0x22401c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22401cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_224020:
    // 0x224020: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x224020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
label_224024:
    // 0x224024: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x224024u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_224028:
    // 0x224028: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x224028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22402c:
    // 0x22402c: 0x0  nop
    ctx->pc = 0x22402cu;
    // NOP
label_224030:
    // 0x224030: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x224030u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_224034:
    // 0x224034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_224038:
    // 0x224038: 0x0  nop
    ctx->pc = 0x224038u;
    // NOP
label_22403c:
    // 0x22403c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x22403cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_224040:
    // 0x224040: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x224040u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_224044:
    // 0x224044: 0xc073504  jal         func_1CD410
label_224048:
    if (ctx->pc == 0x224048u) {
        ctx->pc = 0x224048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224044u;
        // 0x224048: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22404Cu;
        goto label_22404c;
    }
    ctx->pc = 0x224044u;
    SET_GPR_U32(ctx, 31, 0x22404Cu);
    ctx->pc = 0x224048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224044u;
    // 0x224048: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD410u;
    { ctx->pc = 0x1cd410; return; }
    ctx->pc = 0x22404Cu;
label_22404c:
    // 0x22404c: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_224050:
    if (ctx->pc == 0x224050u) {
        ctx->pc = 0x224050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22404Cu;
        // 0x224050: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224054u;
        goto label_224054;
    }
    ctx->pc = 0x22404Cu;
    {
        const bool branch_taken_0x22404c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22404Cu;
        // 0x224050: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22404c) {
            ctx->pc = 0x22432Cu;
            { ctx->pc = 0x22432c; return; }
        }
    }
    ctx->pc = 0x224054u;
label_224054:
    // 0x224054: 0xc08f0cc  jal         func_23C330
label_224058:
    if (ctx->pc == 0x224058u) {
        ctx->pc = 0x22405Cu;
        goto label_22405c;
    }
    ctx->pc = 0x224054u;
    SET_GPR_U32(ctx, 31, 0x22405Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22405Cu;
label_22405c:
    // 0x22405c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x22405cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_224060:
    // 0x224060: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x224060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_224064:
    // 0x224064: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x224064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_224068:
    // 0x224068: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x224068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22406c:
    // 0x22406c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x22406cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_224070:
    // 0x224070: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x224070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_224074:
    // 0x224074: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x224074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_224078:
    // 0x224078: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x224078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_22407c:
    // 0x22407c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x22407cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_224080:
    // 0x224080: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x224080u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_224084:
    // 0x224084: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x224084u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_224088:
    // 0x224088: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x224088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22408c:
    // 0x22408c: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x22408cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[3];
label_224090:
    // 0x224090: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x224090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
label_224094:
    // 0x224094: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x224094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_224098:
    // 0x224098: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x224098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
label_22409c:
    // 0x22409c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x22409cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_2240a0:
    // 0x2240a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2240a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2240a4:
    // 0x2240a4: 0x0  nop
    ctx->pc = 0x2240a4u;
    // NOP
label_2240a8:
    // 0x2240a8: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x2240a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2240ac:
    // 0x2240ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2240acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2240b0:
    // 0x2240b0: 0x0  nop
    ctx->pc = 0x2240b0u;
    // NOP
label_2240b4:
    // 0x2240b4: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2240b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_2240b8:
    // 0x2240b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2240b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2240bc:
    // 0x2240bc: 0xc073504  jal         func_1CD410
label_2240c0:
    if (ctx->pc == 0x2240C0u) {
        ctx->pc = 0x2240C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240BCu;
        // 0x2240c0: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2240C4u;
        goto label_2240c4;
    }
    ctx->pc = 0x2240BCu;
    SET_GPR_U32(ctx, 31, 0x2240C4u);
    ctx->pc = 0x2240C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2240BCu;
    // 0x2240c0: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD410u;
    { ctx->pc = 0x1cd410; return; }
    ctx->pc = 0x2240C4u;
label_2240c4:
    // 0x2240c4: 0x10000098  b           . + 4 + (0x98 << 2)
label_2240c8:
    if (ctx->pc == 0x2240C8u) {
        ctx->pc = 0x2240CCu;
        goto label_2240cc;
    }
    ctx->pc = 0x2240C4u;
    {
        const bool branch_taken_0x2240c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2240c4) {
            ctx->pc = 0x224328u;
            { ctx->pc = 0x224328; return; }
        }
    }
    ctx->pc = 0x2240CCu;
label_2240cc:
    // 0x2240cc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2240ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_2240d0:
    // 0x2240d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2240d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2240d4:
    // 0x2240d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2240d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2240d8:
    // 0x2240d8: 0xc073504  jal         func_1CD410
label_2240dc:
    if (ctx->pc == 0x2240DCu) {
        ctx->pc = 0x2240DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240D8u;
        // 0x2240dc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2240E0u;
        goto label_2240e0;
    }
    ctx->pc = 0x2240D8u;
    SET_GPR_U32(ctx, 31, 0x2240E0u);
    ctx->pc = 0x2240DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2240D8u;
    // 0x2240dc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD410u;
    { ctx->pc = 0x1cd410; return; }
    ctx->pc = 0x2240E0u;
label_2240e0:
    // 0x2240e0: 0x10000091  b           . + 4 + (0x91 << 2)
label_2240e4:
    if (ctx->pc == 0x2240E4u) {
        ctx->pc = 0x2240E8u;
        goto label_2240e8;
    }
    ctx->pc = 0x2240E0u;
    {
        const bool branch_taken_0x2240e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2240e0) {
            ctx->pc = 0x224328u;
            { ctx->pc = 0x224328; return; }
        }
    }
    ctx->pc = 0x2240E8u;
label_2240e8:
    // 0x2240e8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2240e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_2240ec:
    // 0x2240ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2240ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2240f0:
    // 0x2240f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2240f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2240f4:
    // 0x2240f4: 0xc073504  jal         func_1CD410
label_2240f8:
    if (ctx->pc == 0x2240F8u) {
        ctx->pc = 0x2240F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240F4u;
        // 0x2240f8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2240FCu;
        goto label_2240fc;
    }
    ctx->pc = 0x2240F4u;
    SET_GPR_U32(ctx, 31, 0x2240FCu);
    ctx->pc = 0x2240F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2240F4u;
    // 0x2240f8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD410u;
    { ctx->pc = 0x1cd410; return; }
    ctx->pc = 0x2240FCu;
label_2240fc:
    // 0x2240fc: 0x1000008a  b           . + 4 + (0x8A << 2)
label_224100:
    if (ctx->pc == 0x224100u) {
        ctx->pc = 0x224104u;
        goto label_224104;
    }
    ctx->pc = 0x2240FCu;
    {
        const bool branch_taken_0x2240fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2240fc) {
            ctx->pc = 0x224328u;
            { ctx->pc = 0x224328; return; }
        }
    }
    ctx->pc = 0x224104u;
label_224104:
    // 0x224104: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x224104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_224108:
    // 0x224108: 0xc066e26  jal         func_19B898
label_22410c:
    if (ctx->pc == 0x22410Cu) {
        ctx->pc = 0x22410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224108u;
        // 0x22410c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224110u;
        goto label_224110;
    }
    ctx->pc = 0x224108u;
    SET_GPR_U32(ctx, 31, 0x224110u);
    ctx->pc = 0x22410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224108u;
    // 0x22410c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x224110u;
label_224110:
    // 0x224110: 0x27b00054  addiu       $s0, $sp, 0x54
    ctx->pc = 0x224110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_224114:
    // 0x224114: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x224114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_224118:
    // 0x224118: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x224118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22411c:
    // 0x22411c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22411cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_224120:
    // 0x224120: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x224120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_224124:
    // 0x224124: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x224124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_224128:
    // 0x224128: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x224128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_22412c:
    // 0x22412c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22412cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_224130:
    // 0x224130: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x224130u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_224134:
    // 0x224134: 0xc073504  jal         func_1CD410
label_224138:
    if (ctx->pc == 0x224138u) {
        ctx->pc = 0x224138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224134u;
        // 0x224138: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22413Cu;
        goto label_22413c;
    }
    ctx->pc = 0x224134u;
    SET_GPR_U32(ctx, 31, 0x22413Cu);
    ctx->pc = 0x224138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224134u;
    // 0x224138: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD410u;
    { ctx->pc = 0x1cd410; return; }
    ctx->pc = 0x22413Cu;
label_22413c:
    // 0x22413c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22413cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_224140:
    // 0x224140: 0xc066e26  jal         func_19B898
label_224144:
    if (ctx->pc == 0x224144u) {
        ctx->pc = 0x224144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224140u;
        // 0x224144: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224148u;
        goto label_224148;
    }
    ctx->pc = 0x224140u;
    SET_GPR_U32(ctx, 31, 0x224148u);
    ctx->pc = 0x224144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224140u;
    // 0x224144: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x224148u;
label_224148:
    // 0x224148: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x224148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22414c:
    // 0x22414c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x22414cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_224150:
    // 0x224150: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x224150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_224154:
    // 0x224154: 0x27b10058  addiu       $s1, $sp, 0x58
    ctx->pc = 0x224154u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_224158:
    // 0x224158: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x224158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22415c:
    // 0x22415c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22415cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_224160:
    // 0x224160: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x224160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_224164:
    // 0x224164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_224168:
    // 0x224168: 0x0  nop
    ctx->pc = 0x224168u;
    // NOP
label_22416c:
    // 0x22416c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x22416cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_224170:
    // 0x224170: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x224170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_224174:
    // 0x224174: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x224174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_224178:
    // 0x224178: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x224178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22417c:
    // 0x22417c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22417cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_224180:
    // 0x224180: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x224180u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_224184:
    // 0x224184: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x224184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_224188:
    // 0x224188: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x224188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22418c:
    // 0x22418c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x22418cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_224190:
    // 0x224190: 0xc073504  jal         func_1CD410
label_224194:
    if (ctx->pc == 0x224194u) {
        ctx->pc = 0x224194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224190u;
        // 0x224194: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x224198u;
        goto label_224198;
    }
    ctx->pc = 0x224190u;
    SET_GPR_U32(ctx, 31, 0x224198u);
    ctx->pc = 0x224194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224190u;
    // 0x224194: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD410u;
    { ctx->pc = 0x1cd410; return; }
    ctx->pc = 0x224198u;
label_224198:
    // 0x224198: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x224198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22419c:
    // 0x22419c: 0xc066e26  jal         func_19B898
label_2241a0:
    if (ctx->pc == 0x2241A0u) {
        ctx->pc = 0x2241A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22419Cu;
        // 0x2241a0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2241A4u;
        goto label_2241a4;
    }
    ctx->pc = 0x22419Cu;
    SET_GPR_U32(ctx, 31, 0x2241A4u);
    ctx->pc = 0x2241A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22419Cu;
    // 0x2241a0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x2241A4u;
label_2241a4:
    // 0x2241a4: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x2241a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2241a8:
    // 0x2241a8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2241a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_2241ac:
    // 0x2241ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2241acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    ctx->pc = 0x2241b0u;
    return;
}
