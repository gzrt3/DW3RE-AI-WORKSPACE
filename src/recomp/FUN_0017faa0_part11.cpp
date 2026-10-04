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


void FUN_0017faa0_part11(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1848c0u: goto label_1848c0;
        case 0x1848c4u: goto label_1848c4;
        case 0x1848c8u: goto label_1848c8;
        case 0x1848ccu: goto label_1848cc;
        case 0x1848d0u: goto label_1848d0;
        case 0x1848d4u: goto label_1848d4;
        case 0x1848d8u: goto label_1848d8;
        case 0x1848dcu: goto label_1848dc;
        case 0x1848e0u: goto label_1848e0;
        case 0x1848e4u: goto label_1848e4;
        case 0x1848e8u: goto label_1848e8;
        case 0x1848ecu: goto label_1848ec;
        case 0x1848f0u: goto label_1848f0;
        case 0x1848f4u: goto label_1848f4;
        case 0x1848f8u: goto label_1848f8;
        case 0x1848fcu: goto label_1848fc;
        case 0x184900u: goto label_184900;
        case 0x184904u: goto label_184904;
        case 0x184908u: goto label_184908;
        case 0x18490cu: goto label_18490c;
        case 0x184910u: goto label_184910;
        case 0x184914u: goto label_184914;
        case 0x184918u: goto label_184918;
        case 0x18491cu: goto label_18491c;
        case 0x184920u: goto label_184920;
        case 0x184924u: goto label_184924;
        case 0x184928u: goto label_184928;
        case 0x18492cu: goto label_18492c;
        case 0x184930u: goto label_184930;
        case 0x184934u: goto label_184934;
        case 0x184938u: goto label_184938;
        case 0x18493cu: goto label_18493c;
        case 0x184940u: goto label_184940;
        case 0x184944u: goto label_184944;
        case 0x184948u: goto label_184948;
        case 0x18494cu: goto label_18494c;
        case 0x184950u: goto label_184950;
        case 0x184954u: goto label_184954;
        case 0x184958u: goto label_184958;
        case 0x18495cu: goto label_18495c;
        case 0x184960u: goto label_184960;
        case 0x184964u: goto label_184964;
        case 0x184968u: goto label_184968;
        case 0x18496cu: goto label_18496c;
        case 0x184970u: goto label_184970;
        case 0x184974u: goto label_184974;
        case 0x184978u: goto label_184978;
        case 0x18497cu: goto label_18497c;
        case 0x184980u: goto label_184980;
        case 0x184984u: goto label_184984;
        case 0x184988u: goto label_184988;
        case 0x18498cu: goto label_18498c;
        case 0x184990u: goto label_184990;
        case 0x184994u: goto label_184994;
        case 0x184998u: goto label_184998;
        case 0x18499cu: goto label_18499c;
        case 0x1849a0u: goto label_1849a0;
        case 0x1849a4u: goto label_1849a4;
        case 0x1849a8u: goto label_1849a8;
        case 0x1849acu: goto label_1849ac;
        case 0x1849b0u: goto label_1849b0;
        case 0x1849b4u: goto label_1849b4;
        case 0x1849b8u: goto label_1849b8;
        case 0x1849bcu: goto label_1849bc;
        case 0x1849c0u: goto label_1849c0;
        case 0x1849c4u: goto label_1849c4;
        case 0x1849c8u: goto label_1849c8;
        case 0x1849ccu: goto label_1849cc;
        case 0x1849d0u: goto label_1849d0;
        case 0x1849d4u: goto label_1849d4;
        case 0x1849d8u: goto label_1849d8;
        case 0x1849dcu: goto label_1849dc;
        case 0x1849e0u: goto label_1849e0;
        case 0x1849e4u: goto label_1849e4;
        case 0x1849e8u: goto label_1849e8;
        case 0x1849ecu: goto label_1849ec;
        case 0x1849f0u: goto label_1849f0;
        case 0x1849f4u: goto label_1849f4;
        case 0x1849f8u: goto label_1849f8;
        case 0x1849fcu: goto label_1849fc;
        case 0x184a00u: goto label_184a00;
        case 0x184a04u: goto label_184a04;
        case 0x184a08u: goto label_184a08;
        case 0x184a0cu: goto label_184a0c;
        case 0x184a10u: goto label_184a10;
        case 0x184a14u: goto label_184a14;
        case 0x184a18u: goto label_184a18;
        case 0x184a1cu: goto label_184a1c;
        case 0x184a20u: goto label_184a20;
        case 0x184a24u: goto label_184a24;
        case 0x184a28u: goto label_184a28;
        case 0x184a2cu: goto label_184a2c;
        case 0x184a30u: goto label_184a30;
        case 0x184a34u: goto label_184a34;
        case 0x184a38u: goto label_184a38;
        case 0x184a3cu: goto label_184a3c;
        case 0x184a40u: goto label_184a40;
        case 0x184a44u: goto label_184a44;
        case 0x184a48u: goto label_184a48;
        case 0x184a4cu: goto label_184a4c;
        case 0x184a50u: goto label_184a50;
        case 0x184a54u: goto label_184a54;
        case 0x184a58u: goto label_184a58;
        case 0x184a5cu: goto label_184a5c;
        case 0x184a60u: goto label_184a60;
        case 0x184a64u: goto label_184a64;
        case 0x184a68u: goto label_184a68;
        case 0x184a6cu: goto label_184a6c;
        case 0x184a70u: goto label_184a70;
        case 0x184a74u: goto label_184a74;
        case 0x184a78u: goto label_184a78;
        case 0x184a7cu: goto label_184a7c;
        case 0x184a80u: goto label_184a80;
        case 0x184a84u: goto label_184a84;
        case 0x184a88u: goto label_184a88;
        case 0x184a8cu: goto label_184a8c;
        case 0x184a90u: goto label_184a90;
        case 0x184a94u: goto label_184a94;
        case 0x184a98u: goto label_184a98;
        case 0x184a9cu: goto label_184a9c;
        case 0x184aa0u: goto label_184aa0;
        case 0x184aa4u: goto label_184aa4;
        case 0x184aa8u: goto label_184aa8;
        case 0x184aacu: goto label_184aac;
        case 0x184ab0u: goto label_184ab0;
        case 0x184ab4u: goto label_184ab4;
        case 0x184ab8u: goto label_184ab8;
        case 0x184abcu: goto label_184abc;
        case 0x184ac0u: goto label_184ac0;
        case 0x184ac4u: goto label_184ac4;
        case 0x184ac8u: goto label_184ac8;
        case 0x184accu: goto label_184acc;
        case 0x184ad0u: goto label_184ad0;
        case 0x184ad4u: goto label_184ad4;
        case 0x184ad8u: goto label_184ad8;
        case 0x184adcu: goto label_184adc;
        case 0x184ae0u: goto label_184ae0;
        case 0x184ae4u: goto label_184ae4;
        case 0x184ae8u: goto label_184ae8;
        case 0x184aecu: goto label_184aec;
        case 0x184af0u: goto label_184af0;
        case 0x184af4u: goto label_184af4;
        case 0x184af8u: goto label_184af8;
        case 0x184afcu: goto label_184afc;
        case 0x184b00u: goto label_184b00;
        case 0x184b04u: goto label_184b04;
        case 0x184b08u: goto label_184b08;
        case 0x184b0cu: goto label_184b0c;
        case 0x184b10u: goto label_184b10;
        case 0x184b14u: goto label_184b14;
        case 0x184b18u: goto label_184b18;
        case 0x184b1cu: goto label_184b1c;
        case 0x184b20u: goto label_184b20;
        case 0x184b24u: goto label_184b24;
        case 0x184b28u: goto label_184b28;
        case 0x184b2cu: goto label_184b2c;
        case 0x184b30u: goto label_184b30;
        case 0x184b34u: goto label_184b34;
        case 0x184b38u: goto label_184b38;
        case 0x184b3cu: goto label_184b3c;
        case 0x184b40u: goto label_184b40;
        case 0x184b44u: goto label_184b44;
        case 0x184b48u: goto label_184b48;
        case 0x184b4cu: goto label_184b4c;
        case 0x184b50u: goto label_184b50;
        case 0x184b54u: goto label_184b54;
        case 0x184b58u: goto label_184b58;
        case 0x184b5cu: goto label_184b5c;
        case 0x184b60u: goto label_184b60;
        case 0x184b64u: goto label_184b64;
        case 0x184b68u: goto label_184b68;
        case 0x184b6cu: goto label_184b6c;
        case 0x184b70u: goto label_184b70;
        case 0x184b74u: goto label_184b74;
        case 0x184b78u: goto label_184b78;
        case 0x184b7cu: goto label_184b7c;
        case 0x184b80u: goto label_184b80;
        case 0x184b84u: goto label_184b84;
        case 0x184b88u: goto label_184b88;
        case 0x184b8cu: goto label_184b8c;
        case 0x184b90u: goto label_184b90;
        case 0x184b94u: goto label_184b94;
        case 0x184b98u: goto label_184b98;
        case 0x184b9cu: goto label_184b9c;
        case 0x184ba0u: goto label_184ba0;
        case 0x184ba4u: goto label_184ba4;
        case 0x184ba8u: goto label_184ba8;
        case 0x184bacu: goto label_184bac;
        case 0x184bb0u: goto label_184bb0;
        case 0x184bb4u: goto label_184bb4;
        case 0x184bb8u: goto label_184bb8;
        case 0x184bbcu: goto label_184bbc;
        case 0x184bc0u: goto label_184bc0;
        case 0x184bc4u: goto label_184bc4;
        case 0x184bc8u: goto label_184bc8;
        case 0x184bccu: goto label_184bcc;
        case 0x184bd0u: goto label_184bd0;
        case 0x184bd4u: goto label_184bd4;
        case 0x184bd8u: goto label_184bd8;
        case 0x184bdcu: goto label_184bdc;
        case 0x184be0u: goto label_184be0;
        case 0x184be4u: goto label_184be4;
        case 0x184be8u: goto label_184be8;
        case 0x184becu: goto label_184bec;
        case 0x184bf0u: goto label_184bf0;
        case 0x184bf4u: goto label_184bf4;
        case 0x184bf8u: goto label_184bf8;
        case 0x184bfcu: goto label_184bfc;
        case 0x184c00u: goto label_184c00;
        case 0x184c04u: goto label_184c04;
        case 0x184c08u: goto label_184c08;
        case 0x184c0cu: goto label_184c0c;
        case 0x184c10u: goto label_184c10;
        case 0x184c14u: goto label_184c14;
        case 0x184c18u: goto label_184c18;
        case 0x184c1cu: goto label_184c1c;
        case 0x184c20u: goto label_184c20;
        case 0x184c24u: goto label_184c24;
        case 0x184c28u: goto label_184c28;
        case 0x184c2cu: goto label_184c2c;
        case 0x184c30u: goto label_184c30;
        case 0x184c34u: goto label_184c34;
        case 0x184c38u: goto label_184c38;
        case 0x184c3cu: goto label_184c3c;
        case 0x184c40u: goto label_184c40;
        case 0x184c44u: goto label_184c44;
        case 0x184c48u: goto label_184c48;
        case 0x184c4cu: goto label_184c4c;
        case 0x184c50u: goto label_184c50;
        case 0x184c54u: goto label_184c54;
        case 0x184c58u: goto label_184c58;
        case 0x184c5cu: goto label_184c5c;
        case 0x184c60u: goto label_184c60;
        case 0x184c64u: goto label_184c64;
        case 0x184c68u: goto label_184c68;
        case 0x184c6cu: goto label_184c6c;
        case 0x184c70u: goto label_184c70;
        case 0x184c74u: goto label_184c74;
        case 0x184c78u: goto label_184c78;
        case 0x184c7cu: goto label_184c7c;
        case 0x184c80u: goto label_184c80;
        case 0x184c84u: goto label_184c84;
        case 0x184c88u: goto label_184c88;
        case 0x184c8cu: goto label_184c8c;
        case 0x184c90u: goto label_184c90;
        case 0x184c94u: goto label_184c94;
        case 0x184c98u: goto label_184c98;
        case 0x184c9cu: goto label_184c9c;
        case 0x184ca0u: goto label_184ca0;
        case 0x184ca4u: goto label_184ca4;
        case 0x184ca8u: goto label_184ca8;
        case 0x184cacu: goto label_184cac;
        case 0x184cb0u: goto label_184cb0;
        case 0x184cb4u: goto label_184cb4;
        case 0x184cb8u: goto label_184cb8;
        case 0x184cbcu: goto label_184cbc;
        case 0x184cc0u: goto label_184cc0;
        case 0x184cc4u: goto label_184cc4;
        case 0x184cc8u: goto label_184cc8;
        case 0x184cccu: goto label_184ccc;
        case 0x184cd0u: goto label_184cd0;
        case 0x184cd4u: goto label_184cd4;
        case 0x184cd8u: goto label_184cd8;
        case 0x184cdcu: goto label_184cdc;
        case 0x184ce0u: goto label_184ce0;
        case 0x184ce4u: goto label_184ce4;
        case 0x184ce8u: goto label_184ce8;
        case 0x184cecu: goto label_184cec;
        case 0x184cf0u: goto label_184cf0;
        case 0x184cf4u: goto label_184cf4;
        case 0x184cf8u: goto label_184cf8;
        case 0x184cfcu: goto label_184cfc;
        case 0x184d00u: goto label_184d00;
        case 0x184d04u: goto label_184d04;
        case 0x184d08u: goto label_184d08;
        case 0x184d0cu: goto label_184d0c;
        case 0x184d10u: goto label_184d10;
        case 0x184d14u: goto label_184d14;
        case 0x184d18u: goto label_184d18;
        case 0x184d1cu: goto label_184d1c;
        case 0x184d20u: goto label_184d20;
        case 0x184d24u: goto label_184d24;
        case 0x184d28u: goto label_184d28;
        case 0x184d2cu: goto label_184d2c;
        case 0x184d30u: goto label_184d30;
        case 0x184d34u: goto label_184d34;
        case 0x184d38u: goto label_184d38;
        case 0x184d3cu: goto label_184d3c;
        case 0x184d40u: goto label_184d40;
        case 0x184d44u: goto label_184d44;
        case 0x184d48u: goto label_184d48;
        case 0x184d4cu: goto label_184d4c;
        case 0x184d50u: goto label_184d50;
        case 0x184d54u: goto label_184d54;
        case 0x184d58u: goto label_184d58;
        case 0x184d5cu: goto label_184d5c;
        case 0x184d60u: goto label_184d60;
        case 0x184d64u: goto label_184d64;
        case 0x184d68u: goto label_184d68;
        case 0x184d6cu: goto label_184d6c;
        case 0x184d70u: goto label_184d70;
        case 0x184d74u: goto label_184d74;
        case 0x184d78u: goto label_184d78;
        case 0x184d7cu: goto label_184d7c;
        case 0x184d80u: goto label_184d80;
        case 0x184d84u: goto label_184d84;
        case 0x184d88u: goto label_184d88;
        case 0x184d8cu: goto label_184d8c;
        case 0x184d90u: goto label_184d90;
        case 0x184d94u: goto label_184d94;
        case 0x184d98u: goto label_184d98;
        case 0x184d9cu: goto label_184d9c;
        case 0x184da0u: goto label_184da0;
        case 0x184da4u: goto label_184da4;
        case 0x184da8u: goto label_184da8;
        case 0x184dacu: goto label_184dac;
        case 0x184db0u: goto label_184db0;
        case 0x184db4u: goto label_184db4;
        case 0x184db8u: goto label_184db8;
        case 0x184dbcu: goto label_184dbc;
        case 0x184dc0u: goto label_184dc0;
        case 0x184dc4u: goto label_184dc4;
        case 0x184dc8u: goto label_184dc8;
        case 0x184dccu: goto label_184dcc;
        case 0x184dd0u: goto label_184dd0;
        case 0x184dd4u: goto label_184dd4;
        case 0x184dd8u: goto label_184dd8;
        case 0x184ddcu: goto label_184ddc;
        case 0x184de0u: goto label_184de0;
        case 0x184de4u: goto label_184de4;
        case 0x184de8u: goto label_184de8;
        case 0x184decu: goto label_184dec;
        case 0x184df0u: goto label_184df0;
        case 0x184df4u: goto label_184df4;
        case 0x184df8u: goto label_184df8;
        case 0x184dfcu: goto label_184dfc;
        case 0x184e00u: goto label_184e00;
        case 0x184e04u: goto label_184e04;
        case 0x184e08u: goto label_184e08;
        case 0x184e0cu: goto label_184e0c;
        case 0x184e10u: goto label_184e10;
        case 0x184e14u: goto label_184e14;
        case 0x184e18u: goto label_184e18;
        case 0x184e1cu: goto label_184e1c;
        case 0x184e20u: goto label_184e20;
        case 0x184e24u: goto label_184e24;
        case 0x184e28u: goto label_184e28;
        case 0x184e2cu: goto label_184e2c;
        case 0x184e30u: goto label_184e30;
        case 0x184e34u: goto label_184e34;
        case 0x184e38u: goto label_184e38;
        case 0x184e3cu: goto label_184e3c;
        case 0x184e40u: goto label_184e40;
        case 0x184e44u: goto label_184e44;
        case 0x184e48u: goto label_184e48;
        case 0x184e4cu: goto label_184e4c;
        case 0x184e50u: goto label_184e50;
        case 0x184e54u: goto label_184e54;
        case 0x184e58u: goto label_184e58;
        case 0x184e5cu: goto label_184e5c;
        case 0x184e60u: goto label_184e60;
        case 0x184e64u: goto label_184e64;
        case 0x184e68u: goto label_184e68;
        case 0x184e6cu: goto label_184e6c;
        case 0x184e70u: goto label_184e70;
        case 0x184e74u: goto label_184e74;
        case 0x184e78u: goto label_184e78;
        case 0x184e7cu: goto label_184e7c;
        case 0x184e80u: goto label_184e80;
        case 0x184e84u: goto label_184e84;
        case 0x184e88u: goto label_184e88;
        case 0x184e8cu: goto label_184e8c;
        case 0x184e90u: goto label_184e90;
        case 0x184e94u: goto label_184e94;
        case 0x184e98u: goto label_184e98;
        case 0x184e9cu: goto label_184e9c;
        case 0x184ea0u: goto label_184ea0;
        case 0x184ea4u: goto label_184ea4;
        case 0x184ea8u: goto label_184ea8;
        case 0x184eacu: goto label_184eac;
        case 0x184eb0u: goto label_184eb0;
        case 0x184eb4u: goto label_184eb4;
        case 0x184eb8u: goto label_184eb8;
        case 0x184ebcu: goto label_184ebc;
        case 0x184ec0u: goto label_184ec0;
        case 0x184ec4u: goto label_184ec4;
        case 0x184ec8u: goto label_184ec8;
        case 0x184eccu: goto label_184ecc;
        case 0x184ed0u: goto label_184ed0;
        case 0x184ed4u: goto label_184ed4;
        case 0x184ed8u: goto label_184ed8;
        case 0x184edcu: goto label_184edc;
        case 0x184ee0u: goto label_184ee0;
        case 0x184ee4u: goto label_184ee4;
        case 0x184ee8u: goto label_184ee8;
        case 0x184eecu: goto label_184eec;
        case 0x184ef0u: goto label_184ef0;
        case 0x184ef4u: goto label_184ef4;
        case 0x184ef8u: goto label_184ef8;
        case 0x184efcu: goto label_184efc;
        case 0x184f00u: goto label_184f00;
        case 0x184f04u: goto label_184f04;
        case 0x184f08u: goto label_184f08;
        case 0x184f0cu: goto label_184f0c;
        case 0x184f10u: goto label_184f10;
        case 0x184f14u: goto label_184f14;
        case 0x184f18u: goto label_184f18;
        case 0x184f1cu: goto label_184f1c;
        case 0x184f20u: goto label_184f20;
        case 0x184f24u: goto label_184f24;
        case 0x184f28u: goto label_184f28;
        case 0x184f2cu: goto label_184f2c;
        case 0x184f30u: goto label_184f30;
        case 0x184f34u: goto label_184f34;
        case 0x184f38u: goto label_184f38;
        case 0x184f3cu: goto label_184f3c;
        case 0x184f40u: goto label_184f40;
        case 0x184f44u: goto label_184f44;
        case 0x184f48u: goto label_184f48;
        case 0x184f4cu: goto label_184f4c;
        case 0x184f50u: goto label_184f50;
        case 0x184f54u: goto label_184f54;
        case 0x184f58u: goto label_184f58;
        case 0x184f5cu: goto label_184f5c;
        case 0x184f60u: goto label_184f60;
        case 0x184f64u: goto label_184f64;
        case 0x184f68u: goto label_184f68;
        case 0x184f6cu: goto label_184f6c;
        case 0x184f70u: goto label_184f70;
        case 0x184f74u: goto label_184f74;
        case 0x184f78u: goto label_184f78;
        case 0x184f7cu: goto label_184f7c;
        case 0x184f80u: goto label_184f80;
        case 0x184f84u: goto label_184f84;
        case 0x184f88u: goto label_184f88;
        case 0x184f8cu: goto label_184f8c;
        case 0x184f90u: goto label_184f90;
        case 0x184f94u: goto label_184f94;
        case 0x184f98u: goto label_184f98;
        case 0x184f9cu: goto label_184f9c;
        case 0x184fa0u: goto label_184fa0;
        case 0x184fa4u: goto label_184fa4;
        case 0x184fa8u: goto label_184fa8;
        case 0x184facu: goto label_184fac;
        case 0x184fb0u: goto label_184fb0;
        case 0x184fb4u: goto label_184fb4;
        case 0x184fb8u: goto label_184fb8;
        case 0x184fbcu: goto label_184fbc;
        case 0x184fc0u: goto label_184fc0;
        case 0x184fc4u: goto label_184fc4;
        case 0x184fc8u: goto label_184fc8;
        case 0x184fccu: goto label_184fcc;
        case 0x184fd0u: goto label_184fd0;
        case 0x184fd4u: goto label_184fd4;
        case 0x184fd8u: goto label_184fd8;
        case 0x184fdcu: goto label_184fdc;
        case 0x184fe0u: goto label_184fe0;
        case 0x184fe4u: goto label_184fe4;
        case 0x184fe8u: goto label_184fe8;
        case 0x184fecu: goto label_184fec;
        case 0x184ff0u: goto label_184ff0;
        case 0x184ff4u: goto label_184ff4;
        case 0x184ff8u: goto label_184ff8;
        case 0x184ffcu: goto label_184ffc;
        case 0x185000u: goto label_185000;
        case 0x185004u: goto label_185004;
        case 0x185008u: goto label_185008;
        case 0x18500cu: goto label_18500c;
        case 0x185010u: goto label_185010;
        case 0x185014u: goto label_185014;
        case 0x185018u: goto label_185018;
        case 0x18501cu: goto label_18501c;
        case 0x185020u: goto label_185020;
        case 0x185024u: goto label_185024;
        case 0x185028u: goto label_185028;
        case 0x18502cu: goto label_18502c;
        case 0x185030u: goto label_185030;
        case 0x185034u: goto label_185034;
        case 0x185038u: goto label_185038;
        case 0x18503cu: goto label_18503c;
        case 0x185040u: goto label_185040;
        case 0x185044u: goto label_185044;
        case 0x185048u: goto label_185048;
        case 0x18504cu: goto label_18504c;
        case 0x185050u: goto label_185050;
        case 0x185054u: goto label_185054;
        case 0x185058u: goto label_185058;
        case 0x18505cu: goto label_18505c;
        case 0x185060u: goto label_185060;
        case 0x185064u: goto label_185064;
        case 0x185068u: goto label_185068;
        case 0x18506cu: goto label_18506c;
        case 0x185070u: goto label_185070;
        case 0x185074u: goto label_185074;
        case 0x185078u: goto label_185078;
        case 0x18507cu: goto label_18507c;
        case 0x185080u: goto label_185080;
        case 0x185084u: goto label_185084;
        case 0x185088u: goto label_185088;
        case 0x18508cu: goto label_18508c;
        default: return;
    }

label_1848c0:
    // 0x1848c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1848c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1848c4:
    // 0x1848c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1848c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1848c8:
    // 0x1848c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1848c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1848cc:
    // 0x1848cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1848ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1848d0:
    // 0x1848d0: 0x3e00008  jr          $ra
label_1848d4:
    if (ctx->pc == 0x1848D4u) {
        ctx->pc = 0x1848D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848D0u;
        // 0x1848d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1848D8u;
        goto label_1848d8;
    }
    ctx->pc = 0x1848D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1848D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848D0u;
        // 0x1848d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1848D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1848D8u;
label_1848d8:
    // 0x1848d8: 0x0  nop
    ctx->pc = 0x1848d8u;
    // NOP
label_1848dc:
    // 0x1848dc: 0x0  nop
    ctx->pc = 0x1848dcu;
    // NOP
label_1848e0:
    // 0x1848e0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1848e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1848e4:
    // 0x1848e4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1848e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1848e8:
    // 0x1848e8: 0x84254af4  lh          $a1, 0x4AF4($at)
    ctx->pc = 0x1848e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_1848ec:
    // 0x1848ec: 0x10a30056  beq         $a1, $v1, . + 4 + (0x56 << 2)
label_1848f0:
    if (ctx->pc == 0x1848F0u) {
        ctx->pc = 0x1848F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848ECu;
        // 0x1848f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1848F4u;
        goto label_1848f4;
    }
    ctx->pc = 0x1848ECu;
    {
        const bool branch_taken_0x1848ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1848F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848ECu;
        // 0x1848f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1848ec) {
            ctx->pc = 0x184A48u;
            goto label_184a48;
        }
    }
    ctx->pc = 0x1848F4u;
label_1848f4:
    // 0x1848f4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1848f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1848f8:
    // 0x1848f8: 0x10a30053  beq         $a1, $v1, . + 4 + (0x53 << 2)
label_1848fc:
    if (ctx->pc == 0x1848FCu) {
        ctx->pc = 0x184900u;
        goto label_184900;
    }
    ctx->pc = 0x1848F8u;
    {
        const bool branch_taken_0x1848f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1848f8) {
            ctx->pc = 0x184A48u;
            goto label_184a48;
        }
    }
    ctx->pc = 0x184900u;
label_184900:
    // 0x184900: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x184900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_184904:
    // 0x184904: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
label_184908:
    if (ctx->pc == 0x184908u) {
        ctx->pc = 0x18490Cu;
        goto label_18490c;
    }
    ctx->pc = 0x184904u;
    {
        const bool branch_taken_0x184904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184904) {
            ctx->pc = 0x184A48u;
            goto label_184a48;
        }
    }
    ctx->pc = 0x18490Cu;
label_18490c:
    // 0x18490c: 0x90850236  lbu         $a1, 0x236($a0)
    ctx->pc = 0x18490cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 566)));
label_184910:
    // 0x184910: 0x28a1004a  slti        $at, $a1, 0x4A
    ctx->pc = 0x184910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)74) ? 1 : 0);
label_184914:
    // 0x184914: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
label_184918:
    if (ctx->pc == 0x184918u) {
        ctx->pc = 0x18491Cu;
        goto label_18491c;
    }
    ctx->pc = 0x184914u;
    {
        const bool branch_taken_0x184914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x184914) {
            ctx->pc = 0x184A48u;
            goto label_184a48;
        }
    }
    ctx->pc = 0x18491Cu;
label_18491c:
    // 0x18491c: 0x90830235  lbu         $v1, 0x235($a0)
    ctx->pc = 0x18491cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 565)));
label_184920:
    // 0x184920: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x184920u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_184924:
    // 0x184924: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
label_184928:
    if (ctx->pc == 0x184928u) {
        ctx->pc = 0x18492Cu;
        goto label_18492c;
    }
    ctx->pc = 0x184924u;
    {
        const bool branch_taken_0x184924 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x184924) {
            ctx->pc = 0x184A48u;
            goto label_184a48;
        }
    }
    ctx->pc = 0x18492Cu;
label_18492c:
    // 0x18492c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x18492cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_184930:
    // 0x184930: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x184930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_184934:
    // 0x184934: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x184934u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_184938:
    // 0x184938: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x184938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18493c:
    // 0x18493c: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x18493cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_184940:
    // 0x184940: 0x8f8584e0  lw          $a1, -0x7B20($gp)
    ctx->pc = 0x184940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_184944:
    // 0x184944: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x184944u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_184948:
    // 0x184948: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x184948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_18494c:
    // 0x18494c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x18494cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_184950:
    // 0x184950: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x184950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_184954:
    // 0x184954: 0x10a0003c  beqz        $a1, . + 4 + (0x3C << 2)
label_184958:
    if (ctx->pc == 0x184958u) {
        ctx->pc = 0x18495Cu;
        goto label_18495c;
    }
    ctx->pc = 0x184954u;
    {
        const bool branch_taken_0x184954 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x184954) {
            ctx->pc = 0x184A48u;
            goto label_184a48;
        }
    }
    ctx->pc = 0x18495Cu;
label_18495c:
    // 0x18495c: 0x90a3023a  lbu         $v1, 0x23A($a1)
    ctx->pc = 0x18495cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 570)));
label_184960:
    // 0x184960: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
label_184964:
    if (ctx->pc == 0x184964u) {
        ctx->pc = 0x184968u;
        goto label_184968;
    }
    ctx->pc = 0x184960u;
    {
        const bool branch_taken_0x184960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184960) {
            ctx->pc = 0x184A48u;
            goto label_184a48;
        }
    }
    ctx->pc = 0x184968u;
label_184968:
    // 0x184968: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x184968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_18496c:
    // 0x18496c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x18496cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_184970:
    // 0x184970: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x184970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_184974:
    // 0x184974: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_184978:
    if (ctx->pc == 0x184978u) {
        ctx->pc = 0x18497Cu;
        goto label_18497c;
    }
    ctx->pc = 0x184974u;
    {
        const bool branch_taken_0x184974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184974) {
            ctx->pc = 0x184A48u;
            goto label_184a48;
        }
    }
    ctx->pc = 0x18497Cu;
label_18497c:
    // 0x18497c: 0x30c30020  andi        $v1, $a2, 0x20
    ctx->pc = 0x18497cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
label_184980:
    // 0x184980: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
label_184984:
    if (ctx->pc == 0x184984u) {
        ctx->pc = 0x184988u;
        goto label_184988;
    }
    ctx->pc = 0x184980u;
    {
        const bool branch_taken_0x184980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184980) {
            ctx->pc = 0x184A48u;
            goto label_184a48;
        }
    }
    ctx->pc = 0x184988u;
label_184988:
    // 0x184988: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x184988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_18498c:
    // 0x18498c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x18498cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_184990:
    // 0x184990: 0x30a30800  andi        $v1, $a1, 0x800
    ctx->pc = 0x184990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
label_184994:
    // 0x184994: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_184998:
    if (ctx->pc == 0x184998u) {
        ctx->pc = 0x18499Cu;
        goto label_18499c;
    }
    ctx->pc = 0x184994u;
    {
        const bool branch_taken_0x184994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184994) {
            ctx->pc = 0x1849A8u;
            goto label_1849a8;
        }
    }
    ctx->pc = 0x18499Cu;
label_18499c:
    // 0x18499c: 0x30a30020  andi        $v1, $a1, 0x20
    ctx->pc = 0x18499cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_1849a0:
    // 0x1849a0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1849a4:
    if (ctx->pc == 0x1849A4u) {
        ctx->pc = 0x1849A8u;
        goto label_1849a8;
    }
    ctx->pc = 0x1849A0u;
    {
        const bool branch_taken_0x1849a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1849a0) {
            ctx->pc = 0x1849B8u;
            goto label_1849b8;
        }
    }
    ctx->pc = 0x1849A8u;
label_1849a8:
    // 0x1849a8: 0x8485003c  lh          $a1, 0x3C($a0)
    ctx->pc = 0x1849a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
label_1849ac:
    // 0x1849ac: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1849acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1849b0:
    // 0x1849b0: 0x14a30025  bne         $a1, $v1, . + 4 + (0x25 << 2)
label_1849b4:
    if (ctx->pc == 0x1849B4u) {
        ctx->pc = 0x1849B8u;
        goto label_1849b8;
    }
    ctx->pc = 0x1849B0u;
    {
        const bool branch_taken_0x1849b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1849b0) {
            ctx->pc = 0x184A48u;
            goto label_184a48;
        }
    }
    ctx->pc = 0x1849B8u;
label_1849b8:
    // 0x1849b8: 0xc4810260  lwc1        $f1, 0x260($a0)
    ctx->pc = 0x1849b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1849bc:
    // 0x1849bc: 0x3c0347af  lui         $v1, 0x47AF
    ctx->pc = 0x1849bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18351 << 16));
label_1849c0:
    // 0x1849c0: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x1849c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
label_1849c4:
    // 0x1849c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1849c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1849c8:
    // 0x1849c8: 0x0  nop
    ctx->pc = 0x1849c8u;
    // NOP
label_1849cc:
    // 0x1849cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1849ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1849d0:
    // 0x1849d0: 0x0  nop
    ctx->pc = 0x1849d0u;
    // NOP
label_1849d4:
    // 0x1849d4: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_1849d8:
    if (ctx->pc == 0x1849D8u) {
        ctx->pc = 0x1849DCu;
        goto label_1849dc;
    }
    ctx->pc = 0x1849D4u;
    {
        const bool branch_taken_0x1849d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1849d4) {
            ctx->pc = 0x184A48u;
            goto label_184a48;
        }
    }
    ctx->pc = 0x1849DCu;
label_1849dc:
    // 0x1849dc: 0x84850220  lh          $a1, 0x220($a0)
    ctx->pc = 0x1849dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
label_1849e0:
    // 0x1849e0: 0x8486021c  lh          $a2, 0x21C($a0)
    ctx->pc = 0x1849e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 540)));
label_1849e4:
    // 0x1849e4: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_1849e8:
    if (ctx->pc == 0x1849E8u) {
        ctx->pc = 0x1849E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1849E4u;
        // 0x1849e8: 0x51843  sra         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1849ECu;
        goto label_1849ec;
    }
    ctx->pc = 0x1849E4u;
    {
        const bool branch_taken_0x1849e4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1849E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1849E4u;
        // 0x1849e8: 0x51843  sra         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1849e4) {
            ctx->pc = 0x1849F4u;
            goto label_1849f4;
        }
    }
    ctx->pc = 0x1849ECu;
label_1849ec:
    // 0x1849ec: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1849ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1849f0:
    // 0x1849f0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1849f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1849f4:
    // 0x1849f4: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x1849f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1849f8:
    // 0x1849f8: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
label_1849fc:
    if (ctx->pc == 0x1849FCu) {
        ctx->pc = 0x184A00u;
        goto label_184a00;
    }
    ctx->pc = 0x1849F8u;
    {
        const bool branch_taken_0x1849f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1849f8) {
            ctx->pc = 0x184A48u;
            goto label_184a48;
        }
    }
    ctx->pc = 0x184A00u;
label_184a00:
    // 0x184a00: 0x90830240  lbu         $v1, 0x240($a0)
    ctx->pc = 0x184a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 576)));
label_184a04:
    // 0x184a04: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_184a08:
    if (ctx->pc == 0x184A08u) {
        ctx->pc = 0x184A0Cu;
        goto label_184a0c;
    }
    ctx->pc = 0x184A04u;
    {
        const bool branch_taken_0x184a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184a04) {
            ctx->pc = 0x184A48u;
            goto label_184a48;
        }
    }
    ctx->pc = 0x184A0Cu;
label_184a0c:
    // 0x184a0c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x184a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_184a10:
    // 0x184a10: 0x84850252  lh          $a1, 0x252($a0)
    ctx->pc = 0x184a10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 594)));
label_184a14:
    // 0x184a14: 0x90234af2  lbu         $v1, 0x4AF2($at)
    ctx->pc = 0x184a14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19186)));
label_184a18:
    // 0x184a18: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x184a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_184a1c:
    // 0x184a1c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x184a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_184a20:
    // 0x184a20: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x184a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_184a24:
    // 0x184a24: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x184a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_184a28:
    // 0x184a28: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x184a28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_184a2c:
    // 0x184a2c: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x184a2cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_184a30:
    // 0x184a30: 0xa4820222  sh          $v0, 0x222($a0)
    ctx->pc = 0x184a30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 546), (uint16_t)GPR_U32(ctx, 2));
label_184a34:
    // 0x184a34: 0x24031004  addiu       $v1, $zero, 0x1004
    ctx->pc = 0x184a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
label_184a38:
    // 0x184a38: 0xa480019e  sh          $zero, 0x19E($a0)
    ctx->pc = 0x184a38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 414), (uint16_t)GPR_U32(ctx, 0));
label_184a3c:
    // 0x184a3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x184a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184a40:
    // 0x184a40: 0xa480019c  sh          $zero, 0x19C($a0)
    ctx->pc = 0x184a40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 412), (uint16_t)GPR_U32(ctx, 0));
label_184a44:
    // 0x184a44: 0xac830194  sw          $v1, 0x194($a0)
    ctx->pc = 0x184a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 3));
label_184a48:
    // 0x184a48: 0x3e00008  jr          $ra
label_184a4c:
    if (ctx->pc == 0x184A4Cu) {
        ctx->pc = 0x184A50u;
        goto label_184a50;
    }
    ctx->pc = 0x184A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184A50u;
label_184a50:
    // 0x184a50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x184a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_184a54:
    // 0x184a54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x184a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_184a58:
    // 0x184a58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x184a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_184a5c:
    // 0x184a5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_184a60:
    // 0x184a60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x184a60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184a64:
    // 0x184a64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_184a68:
    // 0x184a68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x184a68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_184a6c:
    // 0x184a6c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x184a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_184a70:
    // 0x184a70: 0xc0524e0  jal         func_149380
label_184a74:
    if (ctx->pc == 0x184A74u) {
        ctx->pc = 0x184A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184A70u;
        // 0x184a74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184A78u;
        goto label_184a78;
    }
    ctx->pc = 0x184A70u;
    SET_GPR_U32(ctx, 31, 0x184A78u);
    ctx->pc = 0x184A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184A70u;
    // 0x184a74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149380u, 0x184A70u, 0x184A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184A78u;
label_184a78:
    // 0x184a78: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_184a7c:
    if (ctx->pc == 0x184A7Cu) {
        ctx->pc = 0x184A80u;
        goto label_184a80;
    }
    ctx->pc = 0x184A78u;
    {
        const bool branch_taken_0x184a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184a78) {
            ctx->pc = 0x184AE4u;
            goto label_184ae4;
        }
    }
    ctx->pc = 0x184A80u;
label_184a80:
    // 0x184a80: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x184a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_184a84:
    // 0x184a84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x184a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_184a88:
    // 0x184a88: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x184a88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_184a8c:
    // 0x184a8c: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
label_184a90:
    if (ctx->pc == 0x184A90u) {
        ctx->pc = 0x184A94u;
        goto label_184a94;
    }
    ctx->pc = 0x184A8Cu;
    {
        const bool branch_taken_0x184a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x184a8c) {
            ctx->pc = 0x184AE4u;
            goto label_184ae4;
        }
    }
    ctx->pc = 0x184A94u;
label_184a94:
    // 0x184a94: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x184a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184a98:
    // 0x184a98: 0x8f8280c0  lw          $v0, -0x7F40($gp)
    ctx->pc = 0x184a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934720)));
label_184a9c:
    // 0x184a9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x184a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184aa0:
    // 0x184aa0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x184aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_184aa4:
    // 0x184aa4: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x184aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_184aa8:
    // 0x184aa8: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x184aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184aac:
    // 0x184aac: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x184aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_184ab0:
    // 0x184ab0: 0x92430034  lbu         $v1, 0x34($s2)
    ctx->pc = 0x184ab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_184ab4:
    // 0x184ab4: 0x92420038  lbu         $v0, 0x38($s2)
    ctx->pc = 0x184ab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
label_184ab8:
    // 0x184ab8: 0x38670001  xori        $a3, $v1, 0x1
    ctx->pc = 0x184ab8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_184abc:
    // 0x184abc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x184abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_184ac0:
    // 0x184ac0: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x184ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_184ac4:
    // 0x184ac4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x184ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_184ac8:
    // 0x184ac8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x184ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_184acc:
    // 0x184acc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x184accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_184ad0:
    // 0x184ad0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x184ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_184ad4:
    // 0x184ad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x184ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_184ad8:
    // 0x184ad8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x184ad8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_184adc:
    // 0x184adc: 0xc06261c  jal         func_189870
label_184ae0:
    if (ctx->pc == 0x184AE0u) {
        ctx->pc = 0x184AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184ADCu;
        // 0x184ae0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184AE4u;
        goto label_184ae4;
    }
    ctx->pc = 0x184ADCu;
    SET_GPR_U32(ctx, 31, 0x184AE4u);
    ctx->pc = 0x184AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184ADCu;
    // 0x184ae0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189870u;
    { ctx->pc = 0x189870; return; }
    ctx->pc = 0x184AE4u;
label_184ae4:
    // 0x184ae4: 0x92430036  lbu         $v1, 0x36($s2)
    ctx->pc = 0x184ae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_184ae8:
    // 0x184ae8: 0x14600049  bnez        $v1, . + 4 + (0x49 << 2)
label_184aec:
    if (ctx->pc == 0x184AECu) {
        ctx->pc = 0x184AF0u;
        goto label_184af0;
    }
    ctx->pc = 0x184AE8u;
    {
        const bool branch_taken_0x184ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184ae8) {
            ctx->pc = 0x184C10u;
            goto label_184c10;
        }
    }
    ctx->pc = 0x184AF0u;
label_184af0:
    // 0x184af0: 0xa2200237  sb          $zero, 0x237($s1)
    ctx->pc = 0x184af0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 567), (uint8_t)GPR_U32(ctx, 0));
label_184af4:
    // 0x184af4: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x184af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_184af8:
    // 0x184af8: 0x9206002c  lbu         $a2, 0x2C($s0)
    ctx->pc = 0x184af8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_184afc:
    // 0x184afc: 0x24a52590  addiu       $a1, $a1, 0x2590
    ctx->pc = 0x184afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9616));
label_184b00:
    // 0x184b00: 0x9204002f  lbu         $a0, 0x2F($s0)
    ctx->pc = 0x184b00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
label_184b04:
    // 0x184b04: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x184b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_184b08:
    // 0x184b08: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x184b08u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_184b0c:
    // 0x184b0c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x184b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_184b10:
    // 0x184b10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x184b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_184b14:
    // 0x184b14: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x184b14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_184b18:
    // 0x184b18: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x184b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_184b1c:
    // 0x184b1c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x184b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_184b20:
    // 0x184b20: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x184b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_184b24:
    // 0x184b24: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x184b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_184b28:
    // 0x184b28: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x184b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_184b2c:
    // 0x184b2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x184b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_184b30:
    // 0x184b30: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x184b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_184b34:
    // 0x184b34: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_184b38:
    if (ctx->pc == 0x184B38u) {
        ctx->pc = 0x184B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B34u;
        // 0x184b38: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B3Cu;
        goto label_184b3c;
    }
    ctx->pc = 0x184B34u;
    {
        const bool branch_taken_0x184b34 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x184B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B34u;
        // 0x184b38: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b34) {
            ctx->pc = 0x184B48u;
            goto label_184b48;
        }
    }
    ctx->pc = 0x184B3Cu;
label_184b3c:
    // 0x184b3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184b3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184b40:
    // 0x184b40: 0x10000007  b           . + 4 + (0x7 << 2)
label_184b44:
    if (ctx->pc == 0x184B44u) {
        ctx->pc = 0x184B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B40u;
        // 0x184b44: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x184B48u;
        goto label_184b48;
    }
    ctx->pc = 0x184B40u;
    {
        const bool branch_taken_0x184b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184B40u;
        // 0x184b44: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b40) {
            ctx->pc = 0x184B60u;
            goto label_184b60;
        }
    }
    ctx->pc = 0x184B48u;
label_184b48:
    // 0x184b48: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x184b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_184b4c:
    // 0x184b4c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x184b4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_184b50:
    // 0x184b50: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x184b50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184b54:
    // 0x184b54: 0x0  nop
    ctx->pc = 0x184b54u;
    // NOP
label_184b58:
    // 0x184b58: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x184b58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_184b5c:
    // 0x184b5c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x184b5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_184b60:
    // 0x184b60: 0x3c044234  lui         $a0, 0x4234
    ctx->pc = 0x184b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16948 << 16));
label_184b64:
    // 0x184b64: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x184b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_184b68:
    // 0x184b68: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x184b68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184b6c:
    // 0x184b6c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x184b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_184b70:
    // 0x184b70: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x184b70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_184b74:
    // 0x184b74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x184b74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_184b78:
    // 0x184b78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x184b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184b7c:
    // 0x184b7c: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x184b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_184b80:
    // 0x184b80: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x184b80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_184b84:
    // 0x184b84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184b88:
    // 0x184b88: 0x0  nop
    ctx->pc = 0x184b88u;
    // NOP
label_184b8c:
    // 0x184b8c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x184b8cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_184b90:
    // 0x184b90: 0x0  nop
    ctx->pc = 0x184b90u;
    // NOP
label_184b94:
    // 0x184b94: 0x0  nop
    ctx->pc = 0x184b94u;
    // NOP
label_184b98:
    // 0x184b98: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x184b98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_184b9c:
    // 0x184b9c: 0x0  nop
    ctx->pc = 0x184b9cu;
    // NOP
label_184ba0:
    // 0x184ba0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_184ba4:
    if (ctx->pc == 0x184BA4u) {
        ctx->pc = 0x184BA8u;
        goto label_184ba8;
    }
    ctx->pc = 0x184BA0u;
    {
        const bool branch_taken_0x184ba0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x184ba0) {
            ctx->pc = 0x184BACu;
            goto label_184bac;
        }
    }
    ctx->pc = 0x184BA8u;
label_184ba8:
    // 0x184ba8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x184ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184bac:
    // 0x184bac: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_184bb0:
    if (ctx->pc == 0x184BB0u) {
        ctx->pc = 0x184BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BACu;
        // 0x184bb0: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BB4u;
        goto label_184bb4;
    }
    ctx->pc = 0x184BACu;
    {
        const bool branch_taken_0x184bac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x184BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BACu;
        // 0x184bb0: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184bac) {
            ctx->pc = 0x184BC8u;
            goto label_184bc8;
        }
    }
    ctx->pc = 0x184BB4u;
label_184bb4:
    // 0x184bb4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x184bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_184bb8:
    // 0x184bb8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x184bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_184bbc:
    // 0x184bbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184bbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184bc0:
    // 0x184bc0: 0x1000000d  b           . + 4 + (0xD << 2)
label_184bc4:
    if (ctx->pc == 0x184BC4u) {
        ctx->pc = 0x184BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BC0u;
        // 0x184bc4: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BC8u;
        goto label_184bc8;
    }
    ctx->pc = 0x184BC0u;
    {
        const bool branch_taken_0x184bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BC0u;
        // 0x184bc4: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x184bc0) {
            ctx->pc = 0x184BF8u;
            goto label_184bf8;
        }
    }
    ctx->pc = 0x184BC8u;
label_184bc8:
    // 0x184bc8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x184bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_184bcc:
    // 0x184bcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184bccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184bd0:
    // 0x184bd0: 0x0  nop
    ctx->pc = 0x184bd0u;
    // NOP
label_184bd4:
    // 0x184bd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184bd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_184bd8:
    // 0x184bd8: 0x0  nop
    ctx->pc = 0x184bd8u;
    // NOP
label_184bdc:
    // 0x184bdc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_184be0:
    if (ctx->pc == 0x184BE0u) {
        ctx->pc = 0x184BE4u;
        goto label_184be4;
    }
    ctx->pc = 0x184BDCu;
    {
        const bool branch_taken_0x184bdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x184bdc) {
            ctx->pc = 0x184BF8u;
            goto label_184bf8;
        }
    }
    ctx->pc = 0x184BE4u;
label_184be4:
    // 0x184be4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x184be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_184be8:
    // 0x184be8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x184be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_184bec:
    // 0x184bec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184becu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184bf0:
    // 0x184bf0: 0x10000001  b           . + 4 + (0x1 << 2)
label_184bf4:
    if (ctx->pc == 0x184BF4u) {
        ctx->pc = 0x184BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BF0u;
        // 0x184bf4: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x184BF8u;
        goto label_184bf8;
    }
    ctx->pc = 0x184BF0u;
    {
        const bool branch_taken_0x184bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BF0u;
        // 0x184bf4: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x184bf0) {
            ctx->pc = 0x184BF8u;
            goto label_184bf8;
        }
    }
    ctx->pc = 0x184BF8u;
label_184bf8:
    // 0x184bf8: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x184bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_184bfc:
    // 0x184bfc: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x184bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184c00:
    // 0x184c00: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x184c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_184c04:
    // 0x184c04: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x184c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184c08:
    // 0x184c08: 0x10000027  b           . + 4 + (0x27 << 2)
label_184c0c:
    if (ctx->pc == 0x184C0Cu) {
        ctx->pc = 0x184C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C08u;
        // 0x184c0c: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C10u;
        goto label_184c10;
    }
    ctx->pc = 0x184C08u;
    {
        const bool branch_taken_0x184c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C08u;
        // 0x184c0c: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c08) {
            ctx->pc = 0x184CA8u;
            goto label_184ca8;
        }
    }
    ctx->pc = 0x184C10u;
label_184c10:
    // 0x184c10: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x184c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_184c14:
    // 0x184c14: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_184c18:
    if (ctx->pc == 0x184C18u) {
        ctx->pc = 0x184C1Cu;
        goto label_184c1c;
    }
    ctx->pc = 0x184C14u;
    {
        const bool branch_taken_0x184c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x184c14) {
            ctx->pc = 0x184C68u;
            goto label_184c68;
        }
    }
    ctx->pc = 0x184C1Cu;
label_184c1c:
    // 0x184c1c: 0xa2220237  sb          $v0, 0x237($s1)
    ctx->pc = 0x184c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 567), (uint8_t)GPR_U32(ctx, 2));
label_184c20:
    // 0x184c20: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x184c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_184c24:
    // 0x184c24: 0x92420034  lbu         $v0, 0x34($s2)
    ctx->pc = 0x184c24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_184c28:
    // 0x184c28: 0x248425a9  addiu       $a0, $a0, 0x25A9
    ctx->pc = 0x184c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9641));
label_184c2c:
    // 0x184c2c: 0x92430038  lbu         $v1, 0x38($s2)
    ctx->pc = 0x184c2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
label_184c30:
    // 0x184c30: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x184c30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_184c34:
    // 0x184c34: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x184c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_184c38:
    // 0x184c38: 0x62a00  sll         $a1, $a2, 8
    ctx->pc = 0x184c38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_184c3c:
    // 0x184c3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x184c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_184c40:
    // 0x184c40: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x184c40u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_184c44:
    // 0x184c44: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x184c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_184c48:
    // 0x184c48: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x184c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_184c4c:
    // 0x184c4c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x184c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_184c50:
    // 0x184c50: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x184c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_184c54:
    // 0x184c54: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x184c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_184c58:
    // 0x184c58: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x184c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_184c5c:
    // 0x184c5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x184c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_184c60:
    // 0x184c60: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x184c60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_184c64:
    // 0x184c64: 0xa2220236  sb          $v0, 0x236($s1)
    ctx->pc = 0x184c64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 566), (uint8_t)GPR_U32(ctx, 2));
label_184c68:
    // 0x184c68: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x184c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184c6c:
    // 0x184c6c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x184c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_184c70:
    // 0x184c70: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x184c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_184c74:
    // 0x184c74: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x184c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_184c78:
    // 0x184c78: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x184c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_184c7c:
    // 0x184c7c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x184c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184c80:
    // 0x184c80: 0xc0439e8  jal         func_10E7A0
label_184c84:
    if (ctx->pc == 0x184C84u) {
        ctx->pc = 0x184C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C80u;
        // 0x184c84: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x184C88u;
        goto label_184c88;
    }
    ctx->pc = 0x184C80u;
    SET_GPR_U32(ctx, 31, 0x184C88u);
    ctx->pc = 0x184C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184C80u;
    // 0x184c84: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x184C80u, 0x184C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C88u;
label_184c88:
    // 0x184c88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_184c8c:
    if (ctx->pc == 0x184C8Cu) {
        ctx->pc = 0x184C90u;
        goto label_184c90;
    }
    ctx->pc = 0x184C88u;
    {
        const bool branch_taken_0x184c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184c88) {
            ctx->pc = 0x184C98u;
            goto label_184c98;
        }
    }
    ctx->pc = 0x184C90u;
label_184c90:
    // 0x184c90: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x184c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184c94:
    // 0x184c94: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x184c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_184c98:
    // 0x184c98: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x184c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184c9c:
    // 0x184c9c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x184c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_184ca0:
    // 0x184ca0: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x184ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184ca4:
    // 0x184ca4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x184ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_184ca8:
    // 0x184ca8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x184ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_184cac:
    // 0x184cac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x184cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_184cb0:
    // 0x184cb0: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x184cb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_184cb4:
    // 0x184cb4: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_184cb8:
    if (ctx->pc == 0x184CB8u) {
        ctx->pc = 0x184CBCu;
        goto label_184cbc;
    }
    ctx->pc = 0x184CB4u;
    {
        const bool branch_taken_0x184cb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x184cb4) {
            ctx->pc = 0x184CCCu;
            goto label_184ccc;
        }
    }
    ctx->pc = 0x184CBCu;
label_184cbc:
    // 0x184cbc: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x184cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_184cc0:
    // 0x184cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184cc4:
    // 0x184cc4: 0xc062900  jal         func_18A400
label_184cc8:
    if (ctx->pc == 0x184CC8u) {
        ctx->pc = 0x184CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CC4u;
        // 0x184cc8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184CCCu;
        goto label_184ccc;
    }
    ctx->pc = 0x184CC4u;
    SET_GPR_U32(ctx, 31, 0x184CCCu);
    ctx->pc = 0x184CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184CC4u;
    // 0x184cc8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A400u;
    { ctx->pc = 0x18a400; return; }
    ctx->pc = 0x184CCCu;
label_184ccc:
    // 0x184ccc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x184cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_184cd0:
    // 0x184cd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x184cd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_184cd4:
    // 0x184cd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x184cd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_184cd8:
    // 0x184cd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_184cdc:
    // 0x184cdc: 0x3e00008  jr          $ra
label_184ce0:
    if (ctx->pc == 0x184CE0u) {
        ctx->pc = 0x184CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CDCu;
        // 0x184ce0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184CE4u;
        goto label_184ce4;
    }
    ctx->pc = 0x184CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CDCu;
        // 0x184ce0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184CE4u;
label_184ce4:
    // 0x184ce4: 0x0  nop
    ctx->pc = 0x184ce4u;
    // NOP
label_184ce8:
    // 0x184ce8: 0x0  nop
    ctx->pc = 0x184ce8u;
    // NOP
label_184cec:
    // 0x184cec: 0x0  nop
    ctx->pc = 0x184cecu;
    // NOP
label_184cf0:
    // 0x184cf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x184cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_184cf4:
    // 0x184cf4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x184cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_184cf8:
    // 0x184cf8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x184cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_184cfc:
    // 0x184cfc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x184cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_184d00:
    // 0x184d00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x184d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_184d04:
    // 0x184d04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x184d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184d08:
    // 0x184d08: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x184d08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_184d0c:
    // 0x184d0c: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x184d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_184d10:
    // 0x184d10: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x184d10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_184d14:
    // 0x184d14: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_184d18:
    if (ctx->pc == 0x184D18u) {
        ctx->pc = 0x184D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D14u;
        // 0x184d18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184D1Cu;
        goto label_184d1c;
    }
    ctx->pc = 0x184D14u;
    {
        const bool branch_taken_0x184d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D14u;
        // 0x184d18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d14) {
            ctx->pc = 0x184DE0u;
            goto label_184de0;
        }
    }
    ctx->pc = 0x184D1Cu;
label_184d1c:
    // 0x184d1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x184d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_184d20:
    // 0x184d20: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x184d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184d24:
    // 0x184d24: 0x27a30058  addiu       $v1, $sp, 0x58
    ctx->pc = 0x184d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_184d28:
    // 0x184d28: 0xc4410150  lwc1        $f1, 0x150($v0)
    ctx->pc = 0x184d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_184d2c:
    // 0x184d2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x184d2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_184d30:
    // 0x184d30: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x184d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_184d34:
    // 0x184d34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x184d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_184d38:
    // 0x184d38: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x184d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184d3c:
    // 0x184d3c: 0xc4410158  lwc1        $f1, 0x158($v0)
    ctx->pc = 0x184d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_184d40:
    // 0x184d40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x184d40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_184d44:
    // 0x184d44: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x184d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_184d48:
    // 0x184d48: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x184d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_184d4c:
    // 0x184d4c: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x184d4cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_184d50:
    // 0x184d50: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x184d50u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_184d54:
    // 0x184d54: 0xc062ee0  jal         func_18BB80
label_184d58:
    if (ctx->pc == 0x184D58u) {
        ctx->pc = 0x184D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D54u;
        // 0x184d58: 0x4600051c  madd.s      $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184D5Cu;
        goto label_184d5c;
    }
    ctx->pc = 0x184D54u;
    SET_GPR_U32(ctx, 31, 0x184D5Cu);
    ctx->pc = 0x184D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184D54u;
    // 0x184d58: 0x4600051c  madd.s      $f20, $f0, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BB80u;
    { ctx->pc = 0x18bb80; return; }
    ctx->pc = 0x184D5Cu;
label_184d5c:
    // 0x184d5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_184d60:
    if (ctx->pc == 0x184D60u) {
        ctx->pc = 0x184D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D5Cu;
        // 0x184d60: 0x3c0349af  lui         $v1, 0x49AF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18863 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184D64u;
        goto label_184d64;
    }
    ctx->pc = 0x184D5Cu;
    {
        const bool branch_taken_0x184d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D5Cu;
        // 0x184d60: 0x3c0349af  lui         $v1, 0x49AF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18863 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d5c) {
            ctx->pc = 0x184D78u;
            goto label_184d78;
        }
    }
    ctx->pc = 0x184D64u;
label_184d64:
    // 0x184d64: 0x3c03491c  lui         $v1, 0x491C
    ctx->pc = 0x184d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18716 << 16));
label_184d68:
    // 0x184d68: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x184d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_184d6c:
    // 0x184d6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184d70:
    // 0x184d70: 0x10000005  b           . + 4 + (0x5 << 2)
label_184d74:
    if (ctx->pc == 0x184D74u) {
        ctx->pc = 0x184D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D70u;
        // 0x184d74: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x184D78u;
        goto label_184d78;
    }
    ctx->pc = 0x184D70u;
    {
        const bool branch_taken_0x184d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D70u;
        // 0x184d74: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d70) {
            ctx->pc = 0x184D88u;
            goto label_184d88;
        }
    }
    ctx->pc = 0x184D78u;
label_184d78:
    // 0x184d78: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x184d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
label_184d7c:
    // 0x184d7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184d7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184d80:
    // 0x184d80: 0x0  nop
    ctx->pc = 0x184d80u;
    // NOP
label_184d84:
    // 0x184d84: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x184d84u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_184d88:
    // 0x184d88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x184d88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184d8c:
    // 0x184d8c: 0x0  nop
    ctx->pc = 0x184d8cu;
    // NOP
label_184d90:
    // 0x184d90: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x184d90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_184d94:
    // 0x184d94: 0x0  nop
    ctx->pc = 0x184d94u;
    // NOP
label_184d98:
    // 0x184d98: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_184d9c:
    if (ctx->pc == 0x184D9Cu) {
        ctx->pc = 0x184DA0u;
        goto label_184da0;
    }
    ctx->pc = 0x184D98u;
    {
        const bool branch_taken_0x184d98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x184d98) {
            ctx->pc = 0x184DD4u;
            goto label_184dd4;
        }
    }
    ctx->pc = 0x184DA0u;
label_184da0:
    // 0x184da0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x184da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_184da4:
    // 0x184da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x184da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184da8:
    // 0x184da8: 0x9052023f  lbu         $s2, 0x23F($v0)
    ctx->pc = 0x184da8u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 575)));
label_184dac:
    // 0x184dac: 0x24500150  addiu       $s0, $v0, 0x150
    ctx->pc = 0x184dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
label_184db0:
    // 0x184db0: 0xc062adc  jal         func_18AB70
label_184db4:
    if (ctx->pc == 0x184DB4u) {
        ctx->pc = 0x184DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DB0u;
        // 0x184db4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184DB8u;
        goto label_184db8;
    }
    ctx->pc = 0x184DB0u;
    SET_GPR_U32(ctx, 31, 0x184DB8u);
    ctx->pc = 0x184DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184DB0u;
    // 0x184db4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AB70u;
    { ctx->pc = 0x18ab70; return; }
    ctx->pc = 0x184DB8u;
label_184db8:
    // 0x184db8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_184dbc:
    if (ctx->pc == 0x184DBCu) {
        ctx->pc = 0x184DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DB8u;
        // 0x184dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184DC0u;
        goto label_184dc0;
    }
    ctx->pc = 0x184DB8u;
    {
        const bool branch_taken_0x184db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DB8u;
        // 0x184dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184db8) {
            ctx->pc = 0x184E0Cu;
            goto label_184e0c;
        }
    }
    ctx->pc = 0x184DC0u;
label_184dc0:
    // 0x184dc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x184dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184dc4:
    // 0x184dc4: 0xc06261c  jal         func_189870
label_184dc8:
    if (ctx->pc == 0x184DC8u) {
        ctx->pc = 0x184DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DC4u;
        // 0x184dc8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184DCCu;
        goto label_184dcc;
    }
    ctx->pc = 0x184DC4u;
    SET_GPR_U32(ctx, 31, 0x184DCCu);
    ctx->pc = 0x184DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184DC4u;
    // 0x184dc8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189870u;
    { ctx->pc = 0x189870; return; }
    ctx->pc = 0x184DCCu;
label_184dcc:
    // 0x184dcc: 0x10000010  b           . + 4 + (0x10 << 2)
label_184dd0:
    if (ctx->pc == 0x184DD0u) {
        ctx->pc = 0x184DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DCCu;
        // 0x184dd0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184DD4u;
        goto label_184dd4;
    }
    ctx->pc = 0x184DCCu;
    {
        const bool branch_taken_0x184dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DCCu;
        // 0x184dd0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184dcc) {
            ctx->pc = 0x184E10u;
            goto label_184e10;
        }
    }
    ctx->pc = 0x184DD4u;
label_184dd4:
    // 0x184dd4: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x184dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
label_184dd8:
    // 0x184dd8: 0x1000000c  b           . + 4 + (0xC << 2)
label_184ddc:
    if (ctx->pc == 0x184DDCu) {
        ctx->pc = 0x184DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DD8u;
        // 0x184ddc: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184DE0u;
        goto label_184de0;
    }
    ctx->pc = 0x184DD8u;
    {
        const bool branch_taken_0x184dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DD8u;
        // 0x184ddc: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184dd8) {
            ctx->pc = 0x184E0Cu;
            goto label_184e0c;
        }
    }
    ctx->pc = 0x184DE0u;
label_184de0:
    // 0x184de0: 0xc6200210  lwc1        $f0, 0x210($s1)
    ctx->pc = 0x184de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184de4:
    // 0x184de4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x184de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_184de8:
    // 0x184de8: 0xc6200214  lwc1        $f0, 0x214($s1)
    ctx->pc = 0x184de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184dec:
    // 0x184dec: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x184decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_184df0:
    // 0x184df0: 0xc60c0028  lwc1        $f12, 0x28($s0)
    ctx->pc = 0x184df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_184df4:
    // 0x184df4: 0xc0625b8  jal         func_1896E0
label_184df8:
    if (ctx->pc == 0x184DF8u) {
        ctx->pc = 0x184DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184DF4u;
        // 0x184df8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184DFCu;
        goto label_184dfc;
    }
    ctx->pc = 0x184DF4u;
    SET_GPR_U32(ctx, 31, 0x184DFCu);
    ctx->pc = 0x184DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184DF4u;
    // 0x184df8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1896E0u;
    { ctx->pc = 0x1896e0; return; }
    ctx->pc = 0x184DFCu;
label_184dfc:
    // 0x184dfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_184e00:
    if (ctx->pc == 0x184E00u) {
        ctx->pc = 0x184E04u;
        goto label_184e04;
    }
    ctx->pc = 0x184DFCu;
    {
        const bool branch_taken_0x184dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184dfc) {
            ctx->pc = 0x184E0Cu;
            goto label_184e0c;
        }
    }
    ctx->pc = 0x184E04u;
label_184e04:
    // 0x184e04: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x184e04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
label_184e08:
    // 0x184e08: 0xa620019c  sh          $zero, 0x19C($s1)
    ctx->pc = 0x184e08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
label_184e0c:
    // 0x184e0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x184e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_184e10:
    // 0x184e10: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x184e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_184e14:
    // 0x184e14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x184e14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_184e18:
    // 0x184e18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x184e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_184e1c:
    // 0x184e1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x184e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_184e20:
    // 0x184e20: 0x3e00008  jr          $ra
label_184e24:
    if (ctx->pc == 0x184E24u) {
        ctx->pc = 0x184E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E20u;
        // 0x184e24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184E28u;
        goto label_184e28;
    }
    ctx->pc = 0x184E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E20u;
        // 0x184e24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184E28u;
label_184e28:
    // 0x184e28: 0x0  nop
    ctx->pc = 0x184e28u;
    // NOP
label_184e2c:
    // 0x184e2c: 0x0  nop
    ctx->pc = 0x184e2cu;
    // NOP
label_184e30:
    // 0x184e30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x184e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_184e34:
    // 0x184e34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x184e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_184e38:
    // 0x184e38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x184e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_184e3c:
    // 0x184e3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_184e40:
    // 0x184e40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x184e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184e44:
    // 0x184e44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_184e48:
    // 0x184e48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x184e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_184e4c:
    // 0x184e4c: 0xc061c40  jal         func_187100
label_184e50:
    if (ctx->pc == 0x184E50u) {
        ctx->pc = 0x184E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E4Cu;
        // 0x184e50: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184E54u;
        goto label_184e54;
    }
    ctx->pc = 0x184E4Cu;
    SET_GPR_U32(ctx, 31, 0x184E54u);
    ctx->pc = 0x184E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184E4Cu;
    // 0x184e50: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187100u;
    { ctx->pc = 0x187100; return; }
    ctx->pc = 0x184E54u;
label_184e54:
    // 0x184e54: 0x9244023d  lbu         $a0, 0x23D($s2)
    ctx->pc = 0x184e54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_184e58:
    // 0x184e58: 0x3083000c  andi        $v1, $a0, 0xC
    ctx->pc = 0x184e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
label_184e5c:
    // 0x184e5c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_184e60:
    if (ctx->pc == 0x184E60u) {
        ctx->pc = 0x184E64u;
        goto label_184e64;
    }
    ctx->pc = 0x184E5Cu;
    {
        const bool branch_taken_0x184e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184e5c) {
            ctx->pc = 0x184E8Cu;
            goto label_184e8c;
        }
    }
    ctx->pc = 0x184E64u;
label_184e64:
    // 0x184e64: 0x9243023c  lbu         $v1, 0x23C($s2)
    ctx->pc = 0x184e64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 572)));
label_184e68:
    // 0x184e68: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_184e6c:
    if (ctx->pc == 0x184E6Cu) {
        ctx->pc = 0x184E70u;
        goto label_184e70;
    }
    ctx->pc = 0x184E68u;
    {
        const bool branch_taken_0x184e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184e68) {
            ctx->pc = 0x184E8Cu;
            goto label_184e8c;
        }
    }
    ctx->pc = 0x184E70u;
label_184e70:
    // 0x184e70: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x184e70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_184e74:
    // 0x184e74: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x184e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_184e78:
    // 0x184e78: 0xa244023d  sb          $a0, 0x23D($s2)
    ctx->pc = 0x184e78u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 4));
label_184e7c:
    // 0x184e7c: 0x8244023d  lb          $a0, 0x23D($s2)
    ctx->pc = 0x184e7cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_184e80:
    // 0x184e80: 0x308400fd  andi        $a0, $a0, 0xFD
    ctx->pc = 0x184e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)253);
label_184e84:
    // 0x184e84: 0xa244023d  sb          $a0, 0x23D($s2)
    ctx->pc = 0x184e84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 4));
label_184e88:
    // 0x184e88: 0xa6430224  sh          $v1, 0x224($s2)
    ctx->pc = 0x184e88u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 548), (uint16_t)GPR_U32(ctx, 3));
label_184e8c:
    // 0x184e8c: 0x9245023d  lbu         $a1, 0x23D($s2)
    ctx->pc = 0x184e8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_184e90:
    // 0x184e90: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x184e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_184e94:
    // 0x184e94: 0x106000bb  beqz        $v1, . + 4 + (0xBB << 2)
label_184e98:
    if (ctx->pc == 0x184E98u) {
        ctx->pc = 0x184E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E94u;
        // 0x184e98: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184E9Cu;
        goto label_184e9c;
    }
    ctx->pc = 0x184E94u;
    {
        const bool branch_taken_0x184e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x184E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E94u;
        // 0x184e98: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e94) {
            ctx->pc = 0x185184u;
            { ctx->pc = 0x185184; return; }
        }
    }
    ctx->pc = 0x184E9Cu;
label_184e9c:
    // 0x184e9c: 0x86430224  lh          $v1, 0x224($s2)
    ctx->pc = 0x184e9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 548)));
label_184ea0:
    // 0x184ea0: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x184ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_184ea4:
    // 0x184ea4: 0xa6430224  sh          $v1, 0x224($s2)
    ctx->pc = 0x184ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 548), (uint16_t)GPR_U32(ctx, 3));
label_184ea8:
    // 0x184ea8: 0x86430224  lh          $v1, 0x224($s2)
    ctx->pc = 0x184ea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 548)));
label_184eac:
    // 0x184eac: 0x1c600026  bgtz        $v1, . + 4 + (0x26 << 2)
label_184eb0:
    if (ctx->pc == 0x184EB0u) {
        ctx->pc = 0x184EB4u;
        goto label_184eb4;
    }
    ctx->pc = 0x184EACu;
    {
        const bool branch_taken_0x184eac = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x184eac) {
            ctx->pc = 0x184F48u;
            goto label_184f48;
        }
    }
    ctx->pc = 0x184EB4u;
label_184eb4:
    // 0x184eb4: 0xa6400224  sh          $zero, 0x224($s2)
    ctx->pc = 0x184eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 548), (uint16_t)GPR_U32(ctx, 0));
label_184eb8:
    // 0x184eb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x184eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184ebc:
    // 0x184ebc: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x184ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_184ec0:
    // 0x184ec0: 0xa640019c  sh          $zero, 0x19C($s2)
    ctx->pc = 0x184ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
label_184ec4:
    // 0x184ec4: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x184ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_184ec8:
    // 0x184ec8: 0x14660016  bne         $v1, $a2, . + 4 + (0x16 << 2)
label_184ecc:
    if (ctx->pc == 0x184ECCu) {
        ctx->pc = 0x184ED0u;
        goto label_184ed0;
    }
    ctx->pc = 0x184EC8u;
    {
        const bool branch_taken_0x184ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x184ec8) {
            ctx->pc = 0x184F24u;
            goto label_184f24;
        }
    }
    ctx->pc = 0x184ED0u;
label_184ed0:
    // 0x184ed0: 0x92440238  lbu         $a0, 0x238($s2)
    ctx->pc = 0x184ed0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 568)));
label_184ed4:
    // 0x184ed4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x184ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_184ed8:
    // 0x184ed8: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x184ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_184edc:
    // 0x184edc: 0x2485ffb8  addiu       $a1, $a0, -0x48
    ctx->pc = 0x184edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
label_184ee0:
    // 0x184ee0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x184ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_184ee4:
    // 0x184ee4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x184ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_184ee8:
    // 0x184ee8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x184ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_184eec:
    // 0x184eec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x184eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_184ef0:
    // 0x184ef0: 0x24643620  addiu       $a0, $v1, 0x3620
    ctx->pc = 0x184ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_184ef4:
    // 0x184ef4: 0x9063367c  lbu         $v1, 0x367C($v1)
    ctx->pc = 0x184ef4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_184ef8:
    // 0x184ef8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_184efc:
    if (ctx->pc == 0x184EFCu) {
        ctx->pc = 0x184F00u;
        goto label_184f00;
    }
    ctx->pc = 0x184EF8u;
    {
        const bool branch_taken_0x184ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184ef8) {
            ctx->pc = 0x184F24u;
            goto label_184f24;
        }
    }
    ctx->pc = 0x184F00u;
label_184f00:
    // 0x184f00: 0x9084006b  lbu         $a0, 0x6B($a0)
    ctx->pc = 0x184f00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
label_184f04:
    // 0x184f04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x184f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_184f08:
    // 0x184f08: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_184f0c:
    if (ctx->pc == 0x184F0Cu) {
        ctx->pc = 0x184F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F08u;
        // 0x184f0c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184F10u;
        goto label_184f10;
    }
    ctx->pc = 0x184F08u;
    {
        const bool branch_taken_0x184f08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x184F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F08u;
        // 0x184f0c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f08) {
            ctx->pc = 0x184F24u;
            goto label_184f24;
        }
    }
    ctx->pc = 0x184F10u;
label_184f10:
    // 0x184f10: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x184f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_184f14:
    // 0x184f14: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x184f14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_184f18:
    // 0x184f18: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_184f1c:
    if (ctx->pc == 0x184F1Cu) {
        ctx->pc = 0x184F20u;
        goto label_184f20;
    }
    ctx->pc = 0x184F18u;
    {
        const bool branch_taken_0x184f18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x184f18) {
            ctx->pc = 0x184F24u;
            goto label_184f24;
        }
    }
    ctx->pc = 0x184F20u;
label_184f20:
    // 0x184f20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x184f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184f24:
    // 0x184f24: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_184f28:
    if (ctx->pc == 0x184F28u) {
        ctx->pc = 0x184F2Cu;
        goto label_184f2c;
    }
    ctx->pc = 0x184F24u;
    {
        const bool branch_taken_0x184f24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x184f24) {
            ctx->pc = 0x184F38u;
            goto label_184f38;
        }
    }
    ctx->pc = 0x184F2Cu;
label_184f2c:
    // 0x184f2c: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x184f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_184f30:
    // 0x184f30: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x184f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_184f34:
    // 0x184f34: 0xae430194  sw          $v1, 0x194($s2)
    ctx->pc = 0x184f34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
label_184f38:
    // 0x184f38: 0x8243023d  lb          $v1, 0x23D($s2)
    ctx->pc = 0x184f38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_184f3c:
    // 0x184f3c: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x184f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
label_184f40:
    // 0x184f40: 0x100002cc  b           . + 4 + (0x2CC << 2)
label_184f44:
    if (ctx->pc == 0x184F44u) {
        ctx->pc = 0x184F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F40u;
        // 0x184f44: 0xa243023d  sb          $v1, 0x23D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184F48u;
        goto label_184f48;
    }
    ctx->pc = 0x184F40u;
    {
        const bool branch_taken_0x184f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F40u;
        // 0x184f44: 0xa243023d  sb          $v1, 0x23D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f40) {
            ctx->pc = 0x185A74u;
            { ctx->pc = 0x185a74; return; }
        }
    }
    ctx->pc = 0x184F48u;
label_184f48:
    // 0x184f48: 0xc6410264  lwc1        $f1, 0x264($s2)
    ctx->pc = 0x184f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_184f4c:
    // 0x184f4c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x184f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_184f50:
    // 0x184f50: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x184f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184f54:
    // 0x184f54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x184f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_184f58:
    // 0x184f58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x184f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_184f5c:
    // 0x184f5c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x184f5cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_184f60:
    // 0x184f60: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x184f60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_184f64:
    // 0x184f64: 0x0  nop
    ctx->pc = 0x184f64u;
    // NOP
label_184f68:
    // 0x184f68: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_184f6c:
    if (ctx->pc == 0x184F6Cu) {
        ctx->pc = 0x184F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F68u;
        // 0x184f6c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184F70u;
        goto label_184f70;
    }
    ctx->pc = 0x184F68u;
    {
        const bool branch_taken_0x184f68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x184F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F68u;
        // 0x184f6c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f68) {
            ctx->pc = 0x184F84u;
            goto label_184f84;
        }
    }
    ctx->pc = 0x184F70u;
label_184f70:
    // 0x184f70: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x184f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_184f74:
    // 0x184f74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x184f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_184f78:
    // 0x184f78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184f7c:
    // 0x184f7c: 0x1000000d  b           . + 4 + (0xD << 2)
label_184f80:
    if (ctx->pc == 0x184F80u) {
        ctx->pc = 0x184F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F7Cu;
        // 0x184f80: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x184F84u;
        goto label_184f84;
    }
    ctx->pc = 0x184F7Cu;
    {
        const bool branch_taken_0x184f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F7Cu;
        // 0x184f80: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f7c) {
            ctx->pc = 0x184FB4u;
            goto label_184fb4;
        }
    }
    ctx->pc = 0x184F84u;
label_184f84:
    // 0x184f84: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x184f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_184f88:
    // 0x184f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184f8c:
    // 0x184f8c: 0x0  nop
    ctx->pc = 0x184f8cu;
    // NOP
label_184f90:
    // 0x184f90: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x184f90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_184f94:
    // 0x184f94: 0x0  nop
    ctx->pc = 0x184f94u;
    // NOP
label_184f98:
    // 0x184f98: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_184f9c:
    if (ctx->pc == 0x184F9Cu) {
        ctx->pc = 0x184FA0u;
        goto label_184fa0;
    }
    ctx->pc = 0x184F98u;
    {
        const bool branch_taken_0x184f98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x184f98) {
            ctx->pc = 0x184FB4u;
            goto label_184fb4;
        }
    }
    ctx->pc = 0x184FA0u;
label_184fa0:
    // 0x184fa0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x184fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_184fa4:
    // 0x184fa4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x184fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_184fa8:
    // 0x184fa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184fac:
    // 0x184fac: 0x10000001  b           . + 4 + (0x1 << 2)
label_184fb0:
    if (ctx->pc == 0x184FB0u) {
        ctx->pc = 0x184FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FACu;
        // 0x184fb0: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x184FB4u;
        goto label_184fb4;
    }
    ctx->pc = 0x184FACu;
    {
        const bool branch_taken_0x184fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FACu;
        // 0x184fb0: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x184fac) {
            ctx->pc = 0x184FB4u;
            goto label_184fb4;
        }
    }
    ctx->pc = 0x184FB4u;
label_184fb4:
    // 0x184fb4: 0xc06d448  jal         func_1B5120
label_184fb8:
    if (ctx->pc == 0x184FB8u) {
        ctx->pc = 0x184FBCu;
        goto label_184fbc;
    }
    ctx->pc = 0x184FB4u;
    SET_GPR_U32(ctx, 31, 0x184FBCu);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x184FBCu;
label_184fbc:
    // 0x184fbc: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x184fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
label_184fc0:
    // 0x184fc0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x184fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_184fc4:
    // 0x184fc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x184fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_184fc8:
    // 0x184fc8: 0x0  nop
    ctx->pc = 0x184fc8u;
    // NOP
label_184fcc:
    // 0x184fcc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x184fccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_184fd0:
    // 0x184fd0: 0x0  nop
    ctx->pc = 0x184fd0u;
    // NOP
label_184fd4:
    // 0x184fd4: 0x45010046  bc1t        . + 4 + (0x46 << 2)
label_184fd8:
    if (ctx->pc == 0x184FD8u) {
        ctx->pc = 0x184FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FD4u;
        // 0x184fd8: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184FDCu;
        goto label_184fdc;
    }
    ctx->pc = 0x184FD4u;
    {
        const bool branch_taken_0x184fd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x184FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FD4u;
        // 0x184fd8: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184fd4) {
            ctx->pc = 0x1850F0u;
            { ctx->pc = 0x1850f0; return; }
        }
    }
    ctx->pc = 0x184FDCu;
label_184fdc:
    // 0x184fdc: 0x26450150  addiu       $a1, $s2, 0x150
    ctx->pc = 0x184fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_184fe0:
    // 0x184fe0: 0xc0439e8  jal         func_10E7A0
label_184fe4:
    if (ctx->pc == 0x184FE4u) {
        ctx->pc = 0x184FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FE0u;
        // 0x184fe4: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184FE8u;
        goto label_184fe8;
    }
    ctx->pc = 0x184FE0u;
    SET_GPR_U32(ctx, 31, 0x184FE8u);
    ctx->pc = 0x184FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184FE0u;
    // 0x184fe4: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x184FE0u, 0x184FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184FE8u;
label_184fe8:
    // 0x184fe8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_184fec:
    if (ctx->pc == 0x184FECu) {
        ctx->pc = 0x184FF0u;
        goto label_184ff0;
    }
    ctx->pc = 0x184FE8u;
    {
        const bool branch_taken_0x184fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184fe8) {
            ctx->pc = 0x184FF8u;
            goto label_184ff8;
        }
    }
    ctx->pc = 0x184FF0u;
label_184ff0:
    // 0x184ff0: 0x10000020  b           . + 4 + (0x20 << 2)
label_184ff4:
    if (ctx->pc == 0x184FF4u) {
        ctx->pc = 0x184FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FF0u;
        // 0x184ff4: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184FF8u;
        goto label_184ff8;
    }
    ctx->pc = 0x184FF0u;
    {
        const bool branch_taken_0x184ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FF0u;
        // 0x184ff4: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ff0) {
            ctx->pc = 0x185074u;
            goto label_185074;
        }
    }
    ctx->pc = 0x184FF8u;
label_184ff8:
    // 0x184ff8: 0xc6420044  lwc1        $f2, 0x44($s2)
    ctx->pc = 0x184ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_184ffc:
    // 0x184ffc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x184ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_185000:
    // 0x185000: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x185000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185004:
    // 0x185004: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185008:
    // 0x185008: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18500c:
    // 0x18500c: 0x0  nop
    ctx->pc = 0x18500cu;
    // NOP
label_185010:
    // 0x185010: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x185010u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_185014:
    // 0x185014: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185014u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185018:
    // 0x185018: 0x0  nop
    ctx->pc = 0x185018u;
    // NOP
label_18501c:
    // 0x18501c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_185020:
    if (ctx->pc == 0x185020u) {
        ctx->pc = 0x185020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18501Cu;
        // 0x185020: 0xe7ac0044  swc1        $f12, 0x44($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x185024u;
        goto label_185024;
    }
    ctx->pc = 0x18501Cu;
    {
        const bool branch_taken_0x18501c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x185020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18501Cu;
        // 0x185020: 0xe7ac0044  swc1        $f12, 0x44($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18501c) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x185024u;
label_185024:
    // 0x185024: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_185028:
    // 0x185028: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18502c:
    // 0x18502c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18502cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185030:
    // 0x185030: 0x1000000d  b           . + 4 + (0xD << 2)
label_185034:
    if (ctx->pc == 0x185034u) {
        ctx->pc = 0x185034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185030u;
        // 0x185034: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185038u;
        goto label_185038;
    }
    ctx->pc = 0x185030u;
    {
        const bool branch_taken_0x185030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185030u;
        // 0x185034: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185030) {
            ctx->pc = 0x185068u;
            goto label_185068;
        }
    }
    ctx->pc = 0x185038u;
label_185038:
    // 0x185038: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x185038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_18503c:
    // 0x18503c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18503cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185040:
    // 0x185040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185044:
    // 0x185044: 0x0  nop
    ctx->pc = 0x185044u;
    // NOP
label_185048:
    // 0x185048: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18504c:
    // 0x18504c: 0x0  nop
    ctx->pc = 0x18504cu;
    // NOP
label_185050:
    // 0x185050: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_185054:
    if (ctx->pc == 0x185054u) {
        ctx->pc = 0x185054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185050u;
        // 0x185054: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185058u;
        goto label_185058;
    }
    ctx->pc = 0x185050u;
    {
        const bool branch_taken_0x185050 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185050u;
        // 0x185054: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185050) {
            ctx->pc = 0x185068u;
            goto label_185068;
        }
    }
    ctx->pc = 0x185058u;
label_185058:
    // 0x185058: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18505c:
    // 0x18505c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18505cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185060:
    // 0x185060: 0x10000001  b           . + 4 + (0x1 << 2)
label_185064:
    if (ctx->pc == 0x185064u) {
        ctx->pc = 0x185064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185060u;
        // 0x185064: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185068u;
        goto label_185068;
    }
    ctx->pc = 0x185060u;
    {
        const bool branch_taken_0x185060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185060u;
        // 0x185064: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185060) {
            ctx->pc = 0x185068u;
            goto label_185068;
        }
    }
    ctx->pc = 0x185068u;
label_185068:
    // 0x185068: 0xc06d448  jal         func_1B5120
label_18506c:
    if (ctx->pc == 0x18506Cu) {
        ctx->pc = 0x185070u;
        goto label_185070;
    }
    ctx->pc = 0x185068u;
    SET_GPR_U32(ctx, 31, 0x185070u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x185070u;
label_185070:
    // 0x185070: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x185070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_185074:
    // 0x185074: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x185074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185078:
    // 0x185078: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x185078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_18507c:
    // 0x18507c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18507cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_185080:
    // 0x185080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185084:
    // 0x185084: 0x0  nop
    ctx->pc = 0x185084u;
    // NOP
label_185088:
    // 0x185088: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18508c:
    // 0x18508c: 0x0  nop
    ctx->pc = 0x18508cu;
    // NOP
    ctx->pc = 0x185090u;
    return;
}
