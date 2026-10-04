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


void FUN_0017faa0_part349(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x229960u: goto label_229960;
        case 0x229964u: goto label_229964;
        case 0x229968u: goto label_229968;
        case 0x22996cu: goto label_22996c;
        case 0x229970u: goto label_229970;
        case 0x229974u: goto label_229974;
        case 0x229978u: goto label_229978;
        case 0x22997cu: goto label_22997c;
        case 0x229980u: goto label_229980;
        case 0x229984u: goto label_229984;
        case 0x229988u: goto label_229988;
        case 0x22998cu: goto label_22998c;
        case 0x229990u: goto label_229990;
        case 0x229994u: goto label_229994;
        case 0x229998u: goto label_229998;
        case 0x22999cu: goto label_22999c;
        case 0x2299a0u: goto label_2299a0;
        case 0x2299a4u: goto label_2299a4;
        case 0x2299a8u: goto label_2299a8;
        case 0x2299acu: goto label_2299ac;
        case 0x2299b0u: goto label_2299b0;
        case 0x2299b4u: goto label_2299b4;
        case 0x2299b8u: goto label_2299b8;
        case 0x2299bcu: goto label_2299bc;
        case 0x2299c0u: goto label_2299c0;
        case 0x2299c4u: goto label_2299c4;
        case 0x2299c8u: goto label_2299c8;
        case 0x2299ccu: goto label_2299cc;
        case 0x2299d0u: goto label_2299d0;
        case 0x2299d4u: goto label_2299d4;
        case 0x2299d8u: goto label_2299d8;
        case 0x2299dcu: goto label_2299dc;
        case 0x2299e0u: goto label_2299e0;
        case 0x2299e4u: goto label_2299e4;
        case 0x2299e8u: goto label_2299e8;
        case 0x2299ecu: goto label_2299ec;
        case 0x2299f0u: goto label_2299f0;
        case 0x2299f4u: goto label_2299f4;
        case 0x2299f8u: goto label_2299f8;
        case 0x2299fcu: goto label_2299fc;
        case 0x229a00u: goto label_229a00;
        case 0x229a04u: goto label_229a04;
        case 0x229a08u: goto label_229a08;
        case 0x229a0cu: goto label_229a0c;
        case 0x229a10u: goto label_229a10;
        case 0x229a14u: goto label_229a14;
        case 0x229a18u: goto label_229a18;
        case 0x229a1cu: goto label_229a1c;
        case 0x229a20u: goto label_229a20;
        case 0x229a24u: goto label_229a24;
        case 0x229a28u: goto label_229a28;
        case 0x229a2cu: goto label_229a2c;
        case 0x229a30u: goto label_229a30;
        case 0x229a34u: goto label_229a34;
        case 0x229a38u: goto label_229a38;
        case 0x229a3cu: goto label_229a3c;
        case 0x229a40u: goto label_229a40;
        case 0x229a44u: goto label_229a44;
        case 0x229a48u: goto label_229a48;
        case 0x229a4cu: goto label_229a4c;
        case 0x229a50u: goto label_229a50;
        case 0x229a54u: goto label_229a54;
        case 0x229a58u: goto label_229a58;
        case 0x229a5cu: goto label_229a5c;
        case 0x229a60u: goto label_229a60;
        case 0x229a64u: goto label_229a64;
        case 0x229a68u: goto label_229a68;
        case 0x229a6cu: goto label_229a6c;
        case 0x229a70u: goto label_229a70;
        case 0x229a74u: goto label_229a74;
        case 0x229a78u: goto label_229a78;
        case 0x229a7cu: goto label_229a7c;
        case 0x229a80u: goto label_229a80;
        case 0x229a84u: goto label_229a84;
        case 0x229a88u: goto label_229a88;
        case 0x229a8cu: goto label_229a8c;
        case 0x229a90u: goto label_229a90;
        case 0x229a94u: goto label_229a94;
        case 0x229a98u: goto label_229a98;
        case 0x229a9cu: goto label_229a9c;
        case 0x229aa0u: goto label_229aa0;
        case 0x229aa4u: goto label_229aa4;
        case 0x229aa8u: goto label_229aa8;
        case 0x229aacu: goto label_229aac;
        case 0x229ab0u: goto label_229ab0;
        case 0x229ab4u: goto label_229ab4;
        case 0x229ab8u: goto label_229ab8;
        case 0x229abcu: goto label_229abc;
        case 0x229ac0u: goto label_229ac0;
        case 0x229ac4u: goto label_229ac4;
        case 0x229ac8u: goto label_229ac8;
        case 0x229accu: goto label_229acc;
        case 0x229ad0u: goto label_229ad0;
        case 0x229ad4u: goto label_229ad4;
        case 0x229ad8u: goto label_229ad8;
        case 0x229adcu: goto label_229adc;
        case 0x229ae0u: goto label_229ae0;
        case 0x229ae4u: goto label_229ae4;
        case 0x229ae8u: goto label_229ae8;
        case 0x229aecu: goto label_229aec;
        case 0x229af0u: goto label_229af0;
        case 0x229af4u: goto label_229af4;
        case 0x229af8u: goto label_229af8;
        case 0x229afcu: goto label_229afc;
        case 0x229b00u: goto label_229b00;
        case 0x229b04u: goto label_229b04;
        case 0x229b08u: goto label_229b08;
        case 0x229b0cu: goto label_229b0c;
        case 0x229b10u: goto label_229b10;
        case 0x229b14u: goto label_229b14;
        case 0x229b18u: goto label_229b18;
        case 0x229b1cu: goto label_229b1c;
        case 0x229b20u: goto label_229b20;
        case 0x229b24u: goto label_229b24;
        case 0x229b28u: goto label_229b28;
        case 0x229b2cu: goto label_229b2c;
        case 0x229b30u: goto label_229b30;
        case 0x229b34u: goto label_229b34;
        case 0x229b38u: goto label_229b38;
        case 0x229b3cu: goto label_229b3c;
        case 0x229b40u: goto label_229b40;
        case 0x229b44u: goto label_229b44;
        case 0x229b48u: goto label_229b48;
        case 0x229b4cu: goto label_229b4c;
        case 0x229b50u: goto label_229b50;
        case 0x229b54u: goto label_229b54;
        case 0x229b58u: goto label_229b58;
        case 0x229b5cu: goto label_229b5c;
        case 0x229b60u: goto label_229b60;
        case 0x229b64u: goto label_229b64;
        case 0x229b68u: goto label_229b68;
        case 0x229b6cu: goto label_229b6c;
        case 0x229b70u: goto label_229b70;
        case 0x229b74u: goto label_229b74;
        case 0x229b78u: goto label_229b78;
        case 0x229b7cu: goto label_229b7c;
        case 0x229b80u: goto label_229b80;
        case 0x229b84u: goto label_229b84;
        case 0x229b88u: goto label_229b88;
        case 0x229b8cu: goto label_229b8c;
        case 0x229b90u: goto label_229b90;
        case 0x229b94u: goto label_229b94;
        case 0x229b98u: goto label_229b98;
        case 0x229b9cu: goto label_229b9c;
        case 0x229ba0u: goto label_229ba0;
        case 0x229ba4u: goto label_229ba4;
        case 0x229ba8u: goto label_229ba8;
        case 0x229bacu: goto label_229bac;
        case 0x229bb0u: goto label_229bb0;
        case 0x229bb4u: goto label_229bb4;
        case 0x229bb8u: goto label_229bb8;
        case 0x229bbcu: goto label_229bbc;
        case 0x229bc0u: goto label_229bc0;
        case 0x229bc4u: goto label_229bc4;
        case 0x229bc8u: goto label_229bc8;
        case 0x229bccu: goto label_229bcc;
        case 0x229bd0u: goto label_229bd0;
        case 0x229bd4u: goto label_229bd4;
        case 0x229bd8u: goto label_229bd8;
        case 0x229bdcu: goto label_229bdc;
        case 0x229be0u: goto label_229be0;
        case 0x229be4u: goto label_229be4;
        case 0x229be8u: goto label_229be8;
        case 0x229becu: goto label_229bec;
        case 0x229bf0u: goto label_229bf0;
        case 0x229bf4u: goto label_229bf4;
        case 0x229bf8u: goto label_229bf8;
        case 0x229bfcu: goto label_229bfc;
        case 0x229c00u: goto label_229c00;
        case 0x229c04u: goto label_229c04;
        case 0x229c08u: goto label_229c08;
        case 0x229c0cu: goto label_229c0c;
        case 0x229c10u: goto label_229c10;
        case 0x229c14u: goto label_229c14;
        case 0x229c18u: goto label_229c18;
        case 0x229c1cu: goto label_229c1c;
        case 0x229c20u: goto label_229c20;
        case 0x229c24u: goto label_229c24;
        case 0x229c28u: goto label_229c28;
        case 0x229c2cu: goto label_229c2c;
        case 0x229c30u: goto label_229c30;
        case 0x229c34u: goto label_229c34;
        case 0x229c38u: goto label_229c38;
        case 0x229c3cu: goto label_229c3c;
        case 0x229c40u: goto label_229c40;
        case 0x229c44u: goto label_229c44;
        case 0x229c48u: goto label_229c48;
        case 0x229c4cu: goto label_229c4c;
        case 0x229c50u: goto label_229c50;
        case 0x229c54u: goto label_229c54;
        case 0x229c58u: goto label_229c58;
        case 0x229c5cu: goto label_229c5c;
        case 0x229c60u: goto label_229c60;
        case 0x229c64u: goto label_229c64;
        case 0x229c68u: goto label_229c68;
        case 0x229c6cu: goto label_229c6c;
        case 0x229c70u: goto label_229c70;
        case 0x229c74u: goto label_229c74;
        case 0x229c78u: goto label_229c78;
        case 0x229c7cu: goto label_229c7c;
        case 0x229c80u: goto label_229c80;
        case 0x229c84u: goto label_229c84;
        case 0x229c88u: goto label_229c88;
        case 0x229c8cu: goto label_229c8c;
        case 0x229c90u: goto label_229c90;
        case 0x229c94u: goto label_229c94;
        case 0x229c98u: goto label_229c98;
        case 0x229c9cu: goto label_229c9c;
        case 0x229ca0u: goto label_229ca0;
        case 0x229ca4u: goto label_229ca4;
        case 0x229ca8u: goto label_229ca8;
        case 0x229cacu: goto label_229cac;
        case 0x229cb0u: goto label_229cb0;
        case 0x229cb4u: goto label_229cb4;
        case 0x229cb8u: goto label_229cb8;
        case 0x229cbcu: goto label_229cbc;
        case 0x229cc0u: goto label_229cc0;
        case 0x229cc4u: goto label_229cc4;
        case 0x229cc8u: goto label_229cc8;
        case 0x229cccu: goto label_229ccc;
        case 0x229cd0u: goto label_229cd0;
        case 0x229cd4u: goto label_229cd4;
        case 0x229cd8u: goto label_229cd8;
        case 0x229cdcu: goto label_229cdc;
        case 0x229ce0u: goto label_229ce0;
        case 0x229ce4u: goto label_229ce4;
        case 0x229ce8u: goto label_229ce8;
        case 0x229cecu: goto label_229cec;
        case 0x229cf0u: goto label_229cf0;
        case 0x229cf4u: goto label_229cf4;
        case 0x229cf8u: goto label_229cf8;
        case 0x229cfcu: goto label_229cfc;
        case 0x229d00u: goto label_229d00;
        case 0x229d04u: goto label_229d04;
        case 0x229d08u: goto label_229d08;
        case 0x229d0cu: goto label_229d0c;
        case 0x229d10u: goto label_229d10;
        case 0x229d14u: goto label_229d14;
        case 0x229d18u: goto label_229d18;
        case 0x229d1cu: goto label_229d1c;
        case 0x229d20u: goto label_229d20;
        case 0x229d24u: goto label_229d24;
        case 0x229d28u: goto label_229d28;
        case 0x229d2cu: goto label_229d2c;
        case 0x229d30u: goto label_229d30;
        case 0x229d34u: goto label_229d34;
        case 0x229d38u: goto label_229d38;
        case 0x229d3cu: goto label_229d3c;
        case 0x229d40u: goto label_229d40;
        case 0x229d44u: goto label_229d44;
        case 0x229d48u: goto label_229d48;
        case 0x229d4cu: goto label_229d4c;
        case 0x229d50u: goto label_229d50;
        case 0x229d54u: goto label_229d54;
        case 0x229d58u: goto label_229d58;
        case 0x229d5cu: goto label_229d5c;
        case 0x229d60u: goto label_229d60;
        case 0x229d64u: goto label_229d64;
        case 0x229d68u: goto label_229d68;
        case 0x229d6cu: goto label_229d6c;
        case 0x229d70u: goto label_229d70;
        case 0x229d74u: goto label_229d74;
        case 0x229d78u: goto label_229d78;
        case 0x229d7cu: goto label_229d7c;
        case 0x229d80u: goto label_229d80;
        case 0x229d84u: goto label_229d84;
        case 0x229d88u: goto label_229d88;
        case 0x229d8cu: goto label_229d8c;
        case 0x229d90u: goto label_229d90;
        case 0x229d94u: goto label_229d94;
        case 0x229d98u: goto label_229d98;
        case 0x229d9cu: goto label_229d9c;
        case 0x229da0u: goto label_229da0;
        case 0x229da4u: goto label_229da4;
        case 0x229da8u: goto label_229da8;
        case 0x229dacu: goto label_229dac;
        case 0x229db0u: goto label_229db0;
        case 0x229db4u: goto label_229db4;
        case 0x229db8u: goto label_229db8;
        case 0x229dbcu: goto label_229dbc;
        case 0x229dc0u: goto label_229dc0;
        case 0x229dc4u: goto label_229dc4;
        case 0x229dc8u: goto label_229dc8;
        case 0x229dccu: goto label_229dcc;
        case 0x229dd0u: goto label_229dd0;
        case 0x229dd4u: goto label_229dd4;
        case 0x229dd8u: goto label_229dd8;
        case 0x229ddcu: goto label_229ddc;
        case 0x229de0u: goto label_229de0;
        case 0x229de4u: goto label_229de4;
        case 0x229de8u: goto label_229de8;
        case 0x229decu: goto label_229dec;
        case 0x229df0u: goto label_229df0;
        case 0x229df4u: goto label_229df4;
        case 0x229df8u: goto label_229df8;
        case 0x229dfcu: goto label_229dfc;
        case 0x229e00u: goto label_229e00;
        case 0x229e04u: goto label_229e04;
        case 0x229e08u: goto label_229e08;
        case 0x229e0cu: goto label_229e0c;
        case 0x229e10u: goto label_229e10;
        case 0x229e14u: goto label_229e14;
        case 0x229e18u: goto label_229e18;
        case 0x229e1cu: goto label_229e1c;
        case 0x229e20u: goto label_229e20;
        case 0x229e24u: goto label_229e24;
        case 0x229e28u: goto label_229e28;
        case 0x229e2cu: goto label_229e2c;
        case 0x229e30u: goto label_229e30;
        case 0x229e34u: goto label_229e34;
        case 0x229e38u: goto label_229e38;
        case 0x229e3cu: goto label_229e3c;
        case 0x229e40u: goto label_229e40;
        case 0x229e44u: goto label_229e44;
        case 0x229e48u: goto label_229e48;
        case 0x229e4cu: goto label_229e4c;
        case 0x229e50u: goto label_229e50;
        case 0x229e54u: goto label_229e54;
        case 0x229e58u: goto label_229e58;
        case 0x229e5cu: goto label_229e5c;
        case 0x229e60u: goto label_229e60;
        case 0x229e64u: goto label_229e64;
        case 0x229e68u: goto label_229e68;
        case 0x229e6cu: goto label_229e6c;
        case 0x229e70u: goto label_229e70;
        case 0x229e74u: goto label_229e74;
        case 0x229e78u: goto label_229e78;
        case 0x229e7cu: goto label_229e7c;
        case 0x229e80u: goto label_229e80;
        case 0x229e84u: goto label_229e84;
        case 0x229e88u: goto label_229e88;
        case 0x229e8cu: goto label_229e8c;
        case 0x229e90u: goto label_229e90;
        case 0x229e94u: goto label_229e94;
        case 0x229e98u: goto label_229e98;
        case 0x229e9cu: goto label_229e9c;
        case 0x229ea0u: goto label_229ea0;
        case 0x229ea4u: goto label_229ea4;
        case 0x229ea8u: goto label_229ea8;
        case 0x229eacu: goto label_229eac;
        case 0x229eb0u: goto label_229eb0;
        case 0x229eb4u: goto label_229eb4;
        case 0x229eb8u: goto label_229eb8;
        case 0x229ebcu: goto label_229ebc;
        case 0x229ec0u: goto label_229ec0;
        case 0x229ec4u: goto label_229ec4;
        case 0x229ec8u: goto label_229ec8;
        case 0x229eccu: goto label_229ecc;
        case 0x229ed0u: goto label_229ed0;
        case 0x229ed4u: goto label_229ed4;
        case 0x229ed8u: goto label_229ed8;
        case 0x229edcu: goto label_229edc;
        case 0x229ee0u: goto label_229ee0;
        case 0x229ee4u: goto label_229ee4;
        case 0x229ee8u: goto label_229ee8;
        case 0x229eecu: goto label_229eec;
        case 0x229ef0u: goto label_229ef0;
        case 0x229ef4u: goto label_229ef4;
        case 0x229ef8u: goto label_229ef8;
        case 0x229efcu: goto label_229efc;
        case 0x229f00u: goto label_229f00;
        case 0x229f04u: goto label_229f04;
        case 0x229f08u: goto label_229f08;
        case 0x229f0cu: goto label_229f0c;
        case 0x229f10u: goto label_229f10;
        case 0x229f14u: goto label_229f14;
        case 0x229f18u: goto label_229f18;
        case 0x229f1cu: goto label_229f1c;
        case 0x229f20u: goto label_229f20;
        case 0x229f24u: goto label_229f24;
        case 0x229f28u: goto label_229f28;
        case 0x229f2cu: goto label_229f2c;
        case 0x229f30u: goto label_229f30;
        case 0x229f34u: goto label_229f34;
        case 0x229f38u: goto label_229f38;
        case 0x229f3cu: goto label_229f3c;
        case 0x229f40u: goto label_229f40;
        case 0x229f44u: goto label_229f44;
        case 0x229f48u: goto label_229f48;
        case 0x229f4cu: goto label_229f4c;
        case 0x229f50u: goto label_229f50;
        case 0x229f54u: goto label_229f54;
        case 0x229f58u: goto label_229f58;
        case 0x229f5cu: goto label_229f5c;
        case 0x229f60u: goto label_229f60;
        case 0x229f64u: goto label_229f64;
        case 0x229f68u: goto label_229f68;
        case 0x229f6cu: goto label_229f6c;
        case 0x229f70u: goto label_229f70;
        case 0x229f74u: goto label_229f74;
        case 0x229f78u: goto label_229f78;
        case 0x229f7cu: goto label_229f7c;
        case 0x229f80u: goto label_229f80;
        case 0x229f84u: goto label_229f84;
        case 0x229f88u: goto label_229f88;
        case 0x229f8cu: goto label_229f8c;
        case 0x229f90u: goto label_229f90;
        case 0x229f94u: goto label_229f94;
        case 0x229f98u: goto label_229f98;
        case 0x229f9cu: goto label_229f9c;
        case 0x229fa0u: goto label_229fa0;
        case 0x229fa4u: goto label_229fa4;
        case 0x229fa8u: goto label_229fa8;
        case 0x229facu: goto label_229fac;
        case 0x229fb0u: goto label_229fb0;
        case 0x229fb4u: goto label_229fb4;
        case 0x229fb8u: goto label_229fb8;
        case 0x229fbcu: goto label_229fbc;
        case 0x229fc0u: goto label_229fc0;
        case 0x229fc4u: goto label_229fc4;
        case 0x229fc8u: goto label_229fc8;
        case 0x229fccu: goto label_229fcc;
        case 0x229fd0u: goto label_229fd0;
        case 0x229fd4u: goto label_229fd4;
        case 0x229fd8u: goto label_229fd8;
        case 0x229fdcu: goto label_229fdc;
        case 0x229fe0u: goto label_229fe0;
        case 0x229fe4u: goto label_229fe4;
        case 0x229fe8u: goto label_229fe8;
        case 0x229fecu: goto label_229fec;
        case 0x229ff0u: goto label_229ff0;
        case 0x229ff4u: goto label_229ff4;
        case 0x229ff8u: goto label_229ff8;
        case 0x229ffcu: goto label_229ffc;
        case 0x22a000u: goto label_22a000;
        case 0x22a004u: goto label_22a004;
        case 0x22a008u: goto label_22a008;
        case 0x22a00cu: goto label_22a00c;
        case 0x22a010u: goto label_22a010;
        case 0x22a014u: goto label_22a014;
        case 0x22a018u: goto label_22a018;
        case 0x22a01cu: goto label_22a01c;
        case 0x22a020u: goto label_22a020;
        case 0x22a024u: goto label_22a024;
        case 0x22a028u: goto label_22a028;
        case 0x22a02cu: goto label_22a02c;
        case 0x22a030u: goto label_22a030;
        case 0x22a034u: goto label_22a034;
        case 0x22a038u: goto label_22a038;
        case 0x22a03cu: goto label_22a03c;
        case 0x22a040u: goto label_22a040;
        case 0x22a044u: goto label_22a044;
        case 0x22a048u: goto label_22a048;
        case 0x22a04cu: goto label_22a04c;
        case 0x22a050u: goto label_22a050;
        case 0x22a054u: goto label_22a054;
        case 0x22a058u: goto label_22a058;
        case 0x22a05cu: goto label_22a05c;
        case 0x22a060u: goto label_22a060;
        case 0x22a064u: goto label_22a064;
        case 0x22a068u: goto label_22a068;
        case 0x22a06cu: goto label_22a06c;
        case 0x22a070u: goto label_22a070;
        case 0x22a074u: goto label_22a074;
        case 0x22a078u: goto label_22a078;
        case 0x22a07cu: goto label_22a07c;
        case 0x22a080u: goto label_22a080;
        case 0x22a084u: goto label_22a084;
        case 0x22a088u: goto label_22a088;
        case 0x22a08cu: goto label_22a08c;
        case 0x22a090u: goto label_22a090;
        case 0x22a094u: goto label_22a094;
        case 0x22a098u: goto label_22a098;
        case 0x22a09cu: goto label_22a09c;
        case 0x22a0a0u: goto label_22a0a0;
        case 0x22a0a4u: goto label_22a0a4;
        case 0x22a0a8u: goto label_22a0a8;
        case 0x22a0acu: goto label_22a0ac;
        case 0x22a0b0u: goto label_22a0b0;
        case 0x22a0b4u: goto label_22a0b4;
        case 0x22a0b8u: goto label_22a0b8;
        case 0x22a0bcu: goto label_22a0bc;
        case 0x22a0c0u: goto label_22a0c0;
        case 0x22a0c4u: goto label_22a0c4;
        case 0x22a0c8u: goto label_22a0c8;
        case 0x22a0ccu: goto label_22a0cc;
        case 0x22a0d0u: goto label_22a0d0;
        case 0x22a0d4u: goto label_22a0d4;
        case 0x22a0d8u: goto label_22a0d8;
        case 0x22a0dcu: goto label_22a0dc;
        case 0x22a0e0u: goto label_22a0e0;
        case 0x22a0e4u: goto label_22a0e4;
        case 0x22a0e8u: goto label_22a0e8;
        case 0x22a0ecu: goto label_22a0ec;
        case 0x22a0f0u: goto label_22a0f0;
        case 0x22a0f4u: goto label_22a0f4;
        case 0x22a0f8u: goto label_22a0f8;
        case 0x22a0fcu: goto label_22a0fc;
        case 0x22a100u: goto label_22a100;
        case 0x22a104u: goto label_22a104;
        case 0x22a108u: goto label_22a108;
        case 0x22a10cu: goto label_22a10c;
        case 0x22a110u: goto label_22a110;
        case 0x22a114u: goto label_22a114;
        case 0x22a118u: goto label_22a118;
        case 0x22a11cu: goto label_22a11c;
        case 0x22a120u: goto label_22a120;
        case 0x22a124u: goto label_22a124;
        case 0x22a128u: goto label_22a128;
        case 0x22a12cu: goto label_22a12c;
        default: return;
    }

label_229960:
    // 0x229960: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229964:
    // 0x229964: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x229964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229968:
    // 0x229968: 0xc090df4  jal         func_2437D0
label_22996c:
    if (ctx->pc == 0x22996Cu) {
        ctx->pc = 0x22996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229968u;
        // 0x22996c: 0xac22a270  sw          $v0, -0x5D90($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229970u;
        goto label_229970;
    }
    ctx->pc = 0x229968u;
    SET_GPR_U32(ctx, 31, 0x229970u);
    ctx->pc = 0x22996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229968u;
    // 0x22996c: 0xac22a270  sw          $v0, -0x5D90($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943344), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2437D0u;
    { ctx->pc = 0x2437d0; return; }
    ctx->pc = 0x229970u;
label_229970:
    // 0x229970: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x229970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_229974:
    // 0x229974: 0x1443002e  bne         $v0, $v1, . + 4 + (0x2E << 2)
label_229978:
    if (ctx->pc == 0x229978u) {
        ctx->pc = 0x22997Cu;
        goto label_22997c;
    }
    ctx->pc = 0x229974u;
    {
        const bool branch_taken_0x229974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x229974) {
            ctx->pc = 0x229A30u;
            goto label_229a30;
        }
    }
    ctx->pc = 0x22997Cu;
label_22997c:
    // 0x22997c: 0xc08a004  jal         func_228010
label_229980:
    if (ctx->pc == 0x229980u) {
        ctx->pc = 0x229980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22997Cu;
        // 0x229980: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229984u;
        goto label_229984;
    }
    ctx->pc = 0x22997Cu;
    SET_GPR_U32(ctx, 31, 0x229984u);
    ctx->pc = 0x229980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22997Cu;
    // 0x229980: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    { ctx->pc = 0x228010; return; }
    ctx->pc = 0x229984u;
label_229984:
    // 0x229984: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229988:
    // 0x229988: 0xc08a004  jal         func_228010
label_22998c:
    if (ctx->pc == 0x22998Cu) {
        ctx->pc = 0x22998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229988u;
        // 0x22998c: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229990u;
        goto label_229990;
    }
    ctx->pc = 0x229988u;
    SET_GPR_U32(ctx, 31, 0x229990u);
    ctx->pc = 0x22998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229988u;
    // 0x22998c: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    { ctx->pc = 0x228010; return; }
    ctx->pc = 0x229990u;
label_229990:
    // 0x229990: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x229990u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_229994:
    // 0x229994: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
label_229998:
    if (ctx->pc == 0x229998u) {
        ctx->pc = 0x22999Cu;
        goto label_22999c;
    }
    ctx->pc = 0x229994u;
    {
        const bool branch_taken_0x229994 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x229994) {
            ctx->pc = 0x2299E0u;
            goto label_2299e0;
        }
    }
    ctx->pc = 0x22999Cu;
label_22999c:
    // 0x22999c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22999cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2299a0:
    // 0x2299a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2299a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2299a4:
    // 0x2299a4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_2299a8:
    if (ctx->pc == 0x2299A8u) {
        ctx->pc = 0x2299ACu;
        goto label_2299ac;
    }
    ctx->pc = 0x2299A4u;
    {
        const bool branch_taken_0x2299a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2299a4) {
            ctx->pc = 0x2299C8u;
            goto label_2299c8;
        }
    }
    ctx->pc = 0x2299ACu;
label_2299ac:
    // 0x2299ac: 0x86050006  lh          $a1, 0x6($s0)
    ctx->pc = 0x2299acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_2299b0:
    // 0x2299b0: 0x86060008  lh          $a2, 0x8($s0)
    ctx->pc = 0x2299b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_2299b4:
    // 0x2299b4: 0x8607000a  lh          $a3, 0xA($s0)
    ctx->pc = 0x2299b4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_2299b8:
    // 0x2299b8: 0x8608000c  lh          $t0, 0xC($s0)
    ctx->pc = 0x2299b8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2299bc:
    // 0x2299bc: 0x8609000e  lh          $t1, 0xE($s0)
    ctx->pc = 0x2299bcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_2299c0:
    // 0x2299c0: 0xc05d3e4  jal         func_174F90
label_2299c4:
    if (ctx->pc == 0x2299C4u) {
        ctx->pc = 0x2299C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2299C0u;
        // 0x2299c4: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2299C8u;
        goto label_2299c8;
    }
    ctx->pc = 0x2299C0u;
    SET_GPR_U32(ctx, 31, 0x2299C8u);
    ctx->pc = 0x2299C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299C0u;
    // 0x2299c4: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x2299C0u, 0x2299C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299C8u;
label_2299c8:
    // 0x2299c8: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x2299c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_2299cc:
    // 0x2299cc: 0xc08a004  jal         func_228010
label_2299d0:
    if (ctx->pc == 0x2299D0u) {
        ctx->pc = 0x2299D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2299CCu;
        // 0x2299d0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2299D4u;
        goto label_2299d4;
    }
    ctx->pc = 0x2299CCu;
    SET_GPR_U32(ctx, 31, 0x2299D4u);
    ctx->pc = 0x2299D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299CCu;
    // 0x2299d0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    { ctx->pc = 0x228010; return; }
    ctx->pc = 0x2299D4u;
label_2299d4:
    // 0x2299d4: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x2299d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2299d8:
    // 0x2299d8: 0x1020fff0  beqz        $at, . + 4 + (-0x10 << 2)
label_2299dc:
    if (ctx->pc == 0x2299DCu) {
        ctx->pc = 0x2299E0u;
        goto label_2299e0;
    }
    ctx->pc = 0x2299D8u;
    {
        const bool branch_taken_0x2299d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2299d8) {
            ctx->pc = 0x22999Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22999c;
        }
    }
    ctx->pc = 0x2299E0u;
label_2299e0:
    // 0x2299e0: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2299e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2299e4:
    // 0x2299e4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2299e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2299e8:
    // 0x2299e8: 0xac22a274  sw          $v0, -0x5D8C($at)
    ctx->pc = 0x2299e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943348), GPR_U32(ctx, 2));
label_2299ec:
    // 0x2299ec: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2299ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2299f0:
    // 0x2299f0: 0x8c23a270  lw          $v1, -0x5D90($at)
    ctx->pc = 0x2299f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943344)));
label_2299f4:
    // 0x2299f4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2299f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2299f8:
    // 0x2299f8: 0x8c22a274  lw          $v0, -0x5D8C($at)
    ctx->pc = 0x2299f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943348)));
label_2299fc:
    // 0x2299fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2299fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_229a00:
    // 0x229a00: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229a04:
    // 0x229a04: 0xac22a270  sw          $v0, -0x5D90($at)
    ctx->pc = 0x229a04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943344), GPR_U32(ctx, 2));
label_229a08:
    // 0x229a08: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229a0c:
    // 0x229a0c: 0x8c22a270  lw          $v0, -0x5D90($at)
    ctx->pc = 0x229a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943344)));
label_229a10:
    // 0x229a10: 0x2841270f  slti        $at, $v0, 0x270F
    ctx->pc = 0x229a10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9999) ? 1 : 0);
label_229a14:
    // 0x229a14: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_229a18:
    if (ctx->pc == 0x229A18u) {
        ctx->pc = 0x229A1Cu;
        goto label_229a1c;
    }
    ctx->pc = 0x229A14u;
    {
        const bool branch_taken_0x229a14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a14) {
            ctx->pc = 0x229A24u;
            goto label_229a24;
        }
    }
    ctx->pc = 0x229A1Cu;
label_229a1c:
    // 0x229a1c: 0x10000002  b           . + 4 + (0x2 << 2)
label_229a20:
    if (ctx->pc == 0x229A20u) {
        ctx->pc = 0x229A24u;
        goto label_229a24;
    }
    ctx->pc = 0x229A1Cu;
    {
        const bool branch_taken_0x229a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a1c) {
            ctx->pc = 0x229A28u;
            goto label_229a28;
        }
    }
    ctx->pc = 0x229A24u;
label_229a24:
    // 0x229a24: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x229a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_229a28:
    // 0x229a28: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229a2c:
    // 0x229a2c: 0xac22a270  sw          $v0, -0x5D90($at)
    ctx->pc = 0x229a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943344), GPR_U32(ctx, 2));
label_229a30:
    // 0x229a30: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229a34:
    // 0x229a34: 0x8c23a270  lw          $v1, -0x5D90($at)
    ctx->pc = 0x229a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943344)));
label_229a38:
    // 0x229a38: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x229a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_229a3c:
    // 0x229a3c: 0x8c22cc38  lw          $v0, -0x33C8($at)
    ctx->pc = 0x229a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954040)));
label_229a40:
    // 0x229a40: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x229a40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_229a44:
    // 0x229a44: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_229a48:
    if (ctx->pc == 0x229A48u) {
        ctx->pc = 0x229A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A44u;
        // 0x229a48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229A4Cu;
        goto label_229a4c;
    }
    ctx->pc = 0x229A44u;
    {
        const bool branch_taken_0x229a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A44u;
        // 0x229a48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a44) {
            ctx->pc = 0x229AE0u;
            goto label_229ae0;
        }
    }
    ctx->pc = 0x229A4Cu;
label_229a4c:
    // 0x229a4c: 0xc08a004  jal         func_228010
label_229a50:
    if (ctx->pc == 0x229A50u) {
        ctx->pc = 0x229A54u;
        goto label_229a54;
    }
    ctx->pc = 0x229A4Cu;
    SET_GPR_U32(ctx, 31, 0x229A54u);
    ctx->pc = 0x228010u;
    { ctx->pc = 0x228010; return; }
    ctx->pc = 0x229A54u;
label_229a54:
    // 0x229a54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229a58:
    // 0x229a58: 0xc08a004  jal         func_228010
label_229a5c:
    if (ctx->pc == 0x229A5Cu) {
        ctx->pc = 0x229A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A58u;
        // 0x229a5c: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229A60u;
        goto label_229a60;
    }
    ctx->pc = 0x229A58u;
    SET_GPR_U32(ctx, 31, 0x229A60u);
    ctx->pc = 0x229A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229A58u;
    // 0x229a5c: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    { ctx->pc = 0x228010; return; }
    ctx->pc = 0x229A60u;
label_229a60:
    // 0x229a60: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x229a60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_229a64:
    // 0x229a64: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
label_229a68:
    if (ctx->pc == 0x229A68u) {
        ctx->pc = 0x229A6Cu;
        goto label_229a6c;
    }
    ctx->pc = 0x229A64u;
    {
        const bool branch_taken_0x229a64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x229a64) {
            ctx->pc = 0x229AE0u;
            goto label_229ae0;
        }
    }
    ctx->pc = 0x229A6Cu;
label_229a6c:
    // 0x229a6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x229a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_229a70:
    // 0x229a70: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x229a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_229a74:
    // 0x229a74: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_229a78:
    if (ctx->pc == 0x229A78u) {
        ctx->pc = 0x229A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A74u;
        // 0x229a78: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229A7Cu;
        goto label_229a7c;
    }
    ctx->pc = 0x229A74u;
    {
        const bool branch_taken_0x229a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x229A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229A74u;
        // 0x229a78: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229a74) {
            ctx->pc = 0x229AC4u;
            goto label_229ac4;
        }
    }
    ctx->pc = 0x229A7Cu;
label_229a7c:
    // 0x229a7c: 0x24424a30  addiu       $v0, $v0, 0x4A30
    ctx->pc = 0x229a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18992));
label_229a80:
    // 0x229a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x229a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_229a84:
    // 0x229a84: 0x90420680  lbu         $v0, 0x680($v0)
    ctx->pc = 0x229a84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1664)));
label_229a88:
    // 0x229a88: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_229a8c:
    if (ctx->pc == 0x229A8Cu) {
        ctx->pc = 0x229A90u;
        goto label_229a90;
    }
    ctx->pc = 0x229A88u;
    {
        const bool branch_taken_0x229a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229a88) {
            ctx->pc = 0x229AC4u;
            goto label_229ac4;
        }
    }
    ctx->pc = 0x229A90u;
label_229a90:
    // 0x229a90: 0x86050006  lh          $a1, 0x6($s0)
    ctx->pc = 0x229a90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_229a94:
    // 0x229a94: 0x86060008  lh          $a2, 0x8($s0)
    ctx->pc = 0x229a94u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_229a98:
    // 0x229a98: 0x8607000a  lh          $a3, 0xA($s0)
    ctx->pc = 0x229a98u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_229a9c:
    // 0x229a9c: 0x8608000c  lh          $t0, 0xC($s0)
    ctx->pc = 0x229a9cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_229aa0:
    // 0x229aa0: 0x8609000e  lh          $t1, 0xE($s0)
    ctx->pc = 0x229aa0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_229aa4:
    // 0x229aa4: 0xc05d3e4  jal         func_174F90
label_229aa8:
    if (ctx->pc == 0x229AA8u) {
        ctx->pc = 0x229AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AA4u;
        // 0x229aa8: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229AACu;
        goto label_229aac;
    }
    ctx->pc = 0x229AA4u;
    SET_GPR_U32(ctx, 31, 0x229AACu);
    ctx->pc = 0x229AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AA4u;
    // 0x229aa8: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x229AA4u, 0x229AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229AACu;
label_229aac:
    // 0x229aac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x229aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_229ab0:
    // 0x229ab0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x229ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_229ab4:
    // 0x229ab4: 0x24424a30  addiu       $v0, $v0, 0x4A30
    ctx->pc = 0x229ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18992));
label_229ab8:
    // 0x229ab8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x229ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_229abc:
    // 0x229abc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x229abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_229ac0:
    // 0x229ac0: 0xa0440680  sb          $a0, 0x680($v0)
    ctx->pc = 0x229ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1664), (uint8_t)GPR_U32(ctx, 4));
label_229ac4:
    // 0x229ac4: 0x0  nop
    ctx->pc = 0x229ac4u;
    // NOP
label_229ac8:
    // 0x229ac8: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x229ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_229acc:
    // 0x229acc: 0xc08a004  jal         func_228010
label_229ad0:
    if (ctx->pc == 0x229AD0u) {
        ctx->pc = 0x229AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229ACCu;
        // 0x229ad0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229AD4u;
        goto label_229ad4;
    }
    ctx->pc = 0x229ACCu;
    SET_GPR_U32(ctx, 31, 0x229AD4u);
    ctx->pc = 0x229AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229ACCu;
    // 0x229ad0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    { ctx->pc = 0x228010; return; }
    ctx->pc = 0x229AD4u;
label_229ad4:
    // 0x229ad4: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x229ad4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_229ad8:
    // 0x229ad8: 0x1020ffe4  beqz        $at, . + 4 + (-0x1C << 2)
label_229adc:
    if (ctx->pc == 0x229ADCu) {
        ctx->pc = 0x229AE0u;
        goto label_229ae0;
    }
    ctx->pc = 0x229AD8u;
    {
        const bool branch_taken_0x229ad8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x229ad8) {
            ctx->pc = 0x229A6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229a6c;
        }
    }
    ctx->pc = 0x229AE0u;
label_229ae0:
    // 0x229ae0: 0xc090e38  jal         func_2438E0
label_229ae4:
    if (ctx->pc == 0x229AE4u) {
        ctx->pc = 0x229AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AE0u;
        // 0x229ae4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229AE8u;
        goto label_229ae8;
    }
    ctx->pc = 0x229AE0u;
    SET_GPR_U32(ctx, 31, 0x229AE8u);
    ctx->pc = 0x229AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AE0u;
    // 0x229ae4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2438E0u;
    { ctx->pc = 0x2438e0; return; }
    ctx->pc = 0x229AE8u;
label_229ae8:
    // 0x229ae8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229aec:
    // 0x229aec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x229aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229af0:
    // 0x229af0: 0xc090df4  jal         func_2437D0
label_229af4:
    if (ctx->pc == 0x229AF4u) {
        ctx->pc = 0x229AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AF0u;
        // 0x229af4: 0xac22a27c  sw          $v0, -0x5D84($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229AF8u;
        goto label_229af8;
    }
    ctx->pc = 0x229AF0u;
    SET_GPR_U32(ctx, 31, 0x229AF8u);
    ctx->pc = 0x229AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229AF0u;
    // 0x229af4: 0xac22a27c  sw          $v0, -0x5D84($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943356), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2437D0u;
    { ctx->pc = 0x2437d0; return; }
    ctx->pc = 0x229AF8u;
label_229af8:
    // 0x229af8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229afc:
    // 0x229afc: 0xac22a278  sw          $v0, -0x5D88($at)
    ctx->pc = 0x229afcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943352), GPR_U32(ctx, 2));
label_229b00:
    // 0x229b00: 0xc08a93c  jal         func_22A4F0
label_229b04:
    if (ctx->pc == 0x229B04u) {
        ctx->pc = 0x229B08u;
        goto label_229b08;
    }
    ctx->pc = 0x229B00u;
    SET_GPR_U32(ctx, 31, 0x229B08u);
    ctx->pc = 0x22A4F0u;
    { ctx->pc = 0x22a4f0; return; }
    ctx->pc = 0x229B08u;
label_229b08:
    // 0x229b08: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229b0c:
    // 0x229b0c: 0x8c23a280  lw          $v1, -0x5D80($at)
    ctx->pc = 0x229b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943360)));
label_229b10:
    // 0x229b10: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_229b14:
    if (ctx->pc == 0x229B14u) {
        ctx->pc = 0x229B18u;
        goto label_229b18;
    }
    ctx->pc = 0x229B10u;
    {
        const bool branch_taken_0x229b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x229b10) {
            ctx->pc = 0x229B50u;
            goto label_229b50;
        }
    }
    ctx->pc = 0x229B18u;
label_229b18:
    // 0x229b18: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x229b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_229b1c:
    // 0x229b1c: 0x8c244968  lw          $a0, 0x4968($at)
    ctx->pc = 0x229b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18792)));
label_229b20:
    // 0x229b20: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x229b20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
label_229b24:
    // 0x229b24: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229b28:
    // 0x229b28: 0xac23a280  sw          $v1, -0x5D80($at)
    ctx->pc = 0x229b28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943360), GPR_U32(ctx, 3));
label_229b2c:
    // 0x229b2c: 0x84830252  lh          $v1, 0x252($a0)
    ctx->pc = 0x229b2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 594)));
label_229b30:
    // 0x229b30: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229b34:
    // 0x229b34: 0xac23a284  sw          $v1, -0x5D7C($at)
    ctx->pc = 0x229b34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943364), GPR_U32(ctx, 3));
label_229b38:
    // 0x229b38: 0x9083024a  lbu         $v1, 0x24A($a0)
    ctx->pc = 0x229b38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 586)));
label_229b3c:
    // 0x229b3c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229b40:
    // 0x229b40: 0xac23a288  sw          $v1, -0x5D78($at)
    ctx->pc = 0x229b40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943368), GPR_U32(ctx, 3));
label_229b44:
    // 0x229b44: 0x9083024b  lbu         $v1, 0x24B($a0)
    ctx->pc = 0x229b44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 587)));
label_229b48:
    // 0x229b48: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229b4c:
    // 0x229b4c: 0xac23a28c  sw          $v1, -0x5D74($at)
    ctx->pc = 0x229b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943372), GPR_U32(ctx, 3));
label_229b50:
    // 0x229b50: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229b54:
    // 0x229b54: 0x8c23a290  lw          $v1, -0x5D70($at)
    ctx->pc = 0x229b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943376)));
label_229b58:
    // 0x229b58: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_229b5c:
    if (ctx->pc == 0x229B5Cu) {
        ctx->pc = 0x229B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B58u;
        // 0x229b5c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229B60u;
        goto label_229b60;
    }
    ctx->pc = 0x229B58u;
    {
        const bool branch_taken_0x229b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x229B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B58u;
        // 0x229b5c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b58) {
            ctx->pc = 0x229BBCu;
            goto label_229bbc;
        }
    }
    ctx->pc = 0x229B60u;
label_229b60:
    // 0x229b60: 0x3c0240b5  lui         $v0, 0x40B5
    ctx->pc = 0x229b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16565 << 16));
label_229b64:
    // 0x229b64: 0x8c244900  lw          $a0, 0x4900($at)
    ctx->pc = 0x229b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_229b68:
    // 0x229b68: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x229b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
label_229b6c:
    // 0x229b6c: 0xc06df0a  jal         func_1B7C28
label_229b70:
    if (ctx->pc == 0x229B70u) {
        ctx->pc = 0x229B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B6Cu;
        // 0x229b70: 0x2803c  dsll32      $s0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229B74u;
        goto label_229b74;
    }
    ctx->pc = 0x229B6Cu;
    SET_GPR_U32(ctx, 31, 0x229B74u);
    ctx->pc = 0x229B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B6Cu;
    // 0x229b70: 0x2803c  dsll32      $s0, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    { ctx->pc = 0x1b7c28; return; }
    ctx->pc = 0x229B74u;
label_229b74:
    // 0x229b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_229b78:
    // 0x229b78: 0xc04003c  jal         func_1000F0
label_229b7c:
    if (ctx->pc == 0x229B7Cu) {
        ctx->pc = 0x229B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B78u;
        // 0x229b7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229B80u;
        goto label_229b80;
    }
    ctx->pc = 0x229B78u;
    SET_GPR_U32(ctx, 31, 0x229B80u);
    ctx->pc = 0x229B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B78u;
    // 0x229b7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1000F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1000F0u, 0x229B78u, 0x229B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B80u;
label_229b80:
    // 0x229b80: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_229b84:
    if (ctx->pc == 0x229B84u) {
        ctx->pc = 0x229B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B80u;
        // 0x229b84: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229B88u;
        goto label_229b88;
    }
    ctx->pc = 0x229B80u;
    {
        const bool branch_taken_0x229b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B80u;
        // 0x229b84: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b80) {
            ctx->pc = 0x229BBCu;
            goto label_229bbc;
        }
    }
    ctx->pc = 0x229B88u;
label_229b88:
    // 0x229b88: 0x8c244968  lw          $a0, 0x4968($at)
    ctx->pc = 0x229b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18792)));
label_229b8c:
    // 0x229b8c: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x229b8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
label_229b90:
    // 0x229b90: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229b94:
    // 0x229b94: 0xac23a290  sw          $v1, -0x5D70($at)
    ctx->pc = 0x229b94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943376), GPR_U32(ctx, 3));
label_229b98:
    // 0x229b98: 0x84830252  lh          $v1, 0x252($a0)
    ctx->pc = 0x229b98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 594)));
label_229b9c:
    // 0x229b9c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229ba0:
    // 0x229ba0: 0xac23a294  sw          $v1, -0x5D6C($at)
    ctx->pc = 0x229ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943380), GPR_U32(ctx, 3));
label_229ba4:
    // 0x229ba4: 0x9083024a  lbu         $v1, 0x24A($a0)
    ctx->pc = 0x229ba4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 586)));
label_229ba8:
    // 0x229ba8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229bac:
    // 0x229bac: 0xac23a298  sw          $v1, -0x5D68($at)
    ctx->pc = 0x229bacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943384), GPR_U32(ctx, 3));
label_229bb0:
    // 0x229bb0: 0x9083024b  lbu         $v1, 0x24B($a0)
    ctx->pc = 0x229bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 587)));
label_229bb4:
    // 0x229bb4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229bb8:
    // 0x229bb8: 0xac23a29c  sw          $v1, -0x5D64($at)
    ctx->pc = 0x229bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943388), GPR_U32(ctx, 3));
label_229bbc:
    // 0x229bbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x229bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_229bc0:
    // 0x229bc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x229bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_229bc4:
    // 0x229bc4: 0x3e00008  jr          $ra
label_229bc8:
    if (ctx->pc == 0x229BC8u) {
        ctx->pc = 0x229BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BC4u;
        // 0x229bc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229BCCu;
        goto label_229bcc;
    }
    ctx->pc = 0x229BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BC4u;
        // 0x229bc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229BCCu;
label_229bcc:
    // 0x229bcc: 0x0  nop
    ctx->pc = 0x229bccu;
    // NOP
label_229bd0:
    // 0x229bd0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x229bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_229bd4:
    // 0x229bd4: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x229bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_229bd8:
    // 0x229bd8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x229bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_229bdc:
    // 0x229bdc: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x229bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_229be0:
    // 0x229be0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x229be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_229be4:
    // 0x229be4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x229be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_229be8:
    // 0x229be8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x229be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_229bec:
    // 0x229bec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x229becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_229bf0:
    // 0x229bf0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x229bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_229bf4:
    // 0x229bf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x229bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_229bf8:
    // 0x229bf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x229bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_229bfc:
    // 0x229bfc: 0x902325ad  lbu         $v1, 0x25AD($at)
    ctx->pc = 0x229bfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 9645)));
label_229c00:
    // 0x229c00: 0x1460015d  bnez        $v1, . + 4 + (0x15D << 2)
label_229c04:
    if (ctx->pc == 0x229C04u) {
        ctx->pc = 0x229C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C00u;
        // 0x229c04: 0x24842570  addiu       $a0, $a0, 0x2570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C08u;
        goto label_229c08;
    }
    ctx->pc = 0x229C00u;
    {
        const bool branch_taken_0x229c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x229C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C00u;
        // 0x229c04: 0x24842570  addiu       $a0, $a0, 0x2570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c00) {
            ctx->pc = 0x22A178u;
            { ctx->pc = 0x22a178; return; }
        }
    }
    ctx->pc = 0x229C08u;
label_229c08:
    // 0x229c08: 0x90840039  lbu         $a0, 0x39($a0)
    ctx->pc = 0x229c08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
label_229c0c:
    // 0x229c0c: 0x3c02c599  lui         $v0, 0xC599
    ctx->pc = 0x229c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50585 << 16));
label_229c10:
    // 0x229c10: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x229c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
label_229c14:
    // 0x229c14: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x229c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_229c18:
    // 0x229c18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_229c1c:
    // 0x229c1c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x229c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_229c20:
    // 0x229c20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x229c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_229c24:
    // 0x229c24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x229c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_229c28:
    // 0x229c28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x229c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_229c2c:
    // 0x229c2c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x229c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_229c30:
    // 0x229c30: 0xc6220188  lwc1        $f2, 0x188($s1)
    ctx->pc = 0x229c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_229c34:
    // 0x229c34: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x229c34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_229c38:
    // 0x229c38: 0x0  nop
    ctx->pc = 0x229c38u;
    // NOP
label_229c3c:
    // 0x229c3c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_229c40:
    if (ctx->pc == 0x229C40u) {
        ctx->pc = 0x229C44u;
        goto label_229c44;
    }
    ctx->pc = 0x229C3Cu;
    {
        const bool branch_taken_0x229c3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229c3c) {
            ctx->pc = 0x229C90u;
            goto label_229c90;
        }
    }
    ctx->pc = 0x229C44u;
label_229c44:
    // 0x229c44: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x229c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_229c48:
    // 0x229c48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_229c4c:
    // 0x229c4c: 0xc6210054  lwc1        $f1, 0x54($s1)
    ctx->pc = 0x229c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_229c50:
    // 0x229c50: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x229c50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_229c54:
    // 0x229c54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x229c54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_229c58:
    // 0x229c58: 0x0  nop
    ctx->pc = 0x229c58u;
    // NOP
label_229c5c:
    // 0x229c5c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_229c60:
    if (ctx->pc == 0x229C60u) {
        ctx->pc = 0x229C64u;
        goto label_229c64;
    }
    ctx->pc = 0x229C5Cu;
    {
        const bool branch_taken_0x229c5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229c5c) {
            ctx->pc = 0x229C90u;
            goto label_229c90;
        }
    }
    ctx->pc = 0x229C64u;
label_229c64:
    // 0x229c64: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x229c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_229c68:
    // 0x229c68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x229c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229c6c:
    // 0x229c6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x229c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229c70:
    // 0x229c70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x229c70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229c74:
    // 0x229c74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x229c74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229c78:
    // 0x229c78: 0xc05d3e4  jal         func_174F90
label_229c7c:
    if (ctx->pc == 0x229C7Cu) {
        ctx->pc = 0x229C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C78u;
        // 0x229c7c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C80u;
        goto label_229c80;
    }
    ctx->pc = 0x229C78u;
    SET_GPR_U32(ctx, 31, 0x229C80u);
    ctx->pc = 0x229C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229C78u;
    // 0x229c7c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x229C78u, 0x229C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C80u;
label_229c80:
    // 0x229c80: 0x8f83858c  lw          $v1, -0x7A74($gp)
    ctx->pc = 0x229c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
label_229c84:
    // 0x229c84: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x229c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_229c88:
    // 0x229c88: 0x1000013b  b           . + 4 + (0x13B << 2)
label_229c8c:
    if (ctx->pc == 0x229C8Cu) {
        ctx->pc = 0x229C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C88u;
        // 0x229c8c: 0xaf83858c  sw          $v1, -0x7A74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229C90u;
        goto label_229c90;
    }
    ctx->pc = 0x229C88u;
    {
        const bool branch_taken_0x229c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229C88u;
        // 0x229c8c: 0xaf83858c  sw          $v1, -0x7A74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229c88) {
            ctx->pc = 0x22A178u;
            { ctx->pc = 0x22a178; return; }
        }
    }
    ctx->pc = 0x229C90u;
label_229c90:
    // 0x229c90: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229c94:
    // 0x229c94: 0x8c22a280  lw          $v0, -0x5D80($at)
    ctx->pc = 0x229c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943360)));
label_229c98:
    // 0x229c98: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_229c9c:
    if (ctx->pc == 0x229C9Cu) {
        ctx->pc = 0x229CA0u;
        goto label_229ca0;
    }
    ctx->pc = 0x229C98u;
    {
        const bool branch_taken_0x229c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229c98) {
            ctx->pc = 0x229CD0u;
            goto label_229cd0;
        }
    }
    ctx->pc = 0x229CA0u;
label_229ca0:
    // 0x229ca0: 0x86220220  lh          $v0, 0x220($s1)
    ctx->pc = 0x229ca0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
label_229ca4:
    // 0x229ca4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229ca8:
    // 0x229ca8: 0xac22a280  sw          $v0, -0x5D80($at)
    ctx->pc = 0x229ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943360), GPR_U32(ctx, 2));
label_229cac:
    // 0x229cac: 0x86220252  lh          $v0, 0x252($s1)
    ctx->pc = 0x229cacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 594)));
label_229cb0:
    // 0x229cb0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229cb4:
    // 0x229cb4: 0xac22a284  sw          $v0, -0x5D7C($at)
    ctx->pc = 0x229cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943364), GPR_U32(ctx, 2));
label_229cb8:
    // 0x229cb8: 0x9222024a  lbu         $v0, 0x24A($s1)
    ctx->pc = 0x229cb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 586)));
label_229cbc:
    // 0x229cbc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229cc0:
    // 0x229cc0: 0xac22a288  sw          $v0, -0x5D78($at)
    ctx->pc = 0x229cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943368), GPR_U32(ctx, 2));
label_229cc4:
    // 0x229cc4: 0x9222024b  lbu         $v0, 0x24B($s1)
    ctx->pc = 0x229cc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 587)));
label_229cc8:
    // 0x229cc8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229ccc:
    // 0x229ccc: 0xac22a28c  sw          $v0, -0x5D74($at)
    ctx->pc = 0x229cccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943372), GPR_U32(ctx, 2));
label_229cd0:
    // 0x229cd0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229cd4:
    // 0x229cd4: 0x8c22a290  lw          $v0, -0x5D70($at)
    ctx->pc = 0x229cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943376)));
label_229cd8:
    // 0x229cd8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_229cdc:
    if (ctx->pc == 0x229CDCu) {
        ctx->pc = 0x229CE0u;
        goto label_229ce0;
    }
    ctx->pc = 0x229CD8u;
    {
        const bool branch_taken_0x229cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229cd8) {
            ctx->pc = 0x229D24u;
            goto label_229d24;
        }
    }
    ctx->pc = 0x229CE0u;
label_229ce0:
    // 0x229ce0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x229ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_229ce4:
    // 0x229ce4: 0x8c224900  lw          $v0, 0x4900($at)
    ctx->pc = 0x229ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_229ce8:
    // 0x229ce8: 0x28424650  slti        $v0, $v0, 0x4650
    ctx->pc = 0x229ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18000) ? 1 : 0);
label_229cec:
    // 0x229cec: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_229cf0:
    if (ctx->pc == 0x229CF0u) {
        ctx->pc = 0x229CF4u;
        goto label_229cf4;
    }
    ctx->pc = 0x229CECu;
    {
        const bool branch_taken_0x229cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229cec) {
            ctx->pc = 0x229D24u;
            goto label_229d24;
        }
    }
    ctx->pc = 0x229CF4u;
label_229cf4:
    // 0x229cf4: 0x86220220  lh          $v0, 0x220($s1)
    ctx->pc = 0x229cf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
label_229cf8:
    // 0x229cf8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229cfc:
    // 0x229cfc: 0xac22a290  sw          $v0, -0x5D70($at)
    ctx->pc = 0x229cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943376), GPR_U32(ctx, 2));
label_229d00:
    // 0x229d00: 0x86220252  lh          $v0, 0x252($s1)
    ctx->pc = 0x229d00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 594)));
label_229d04:
    // 0x229d04: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229d08:
    // 0x229d08: 0xac22a294  sw          $v0, -0x5D6C($at)
    ctx->pc = 0x229d08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943380), GPR_U32(ctx, 2));
label_229d0c:
    // 0x229d0c: 0x9222024a  lbu         $v0, 0x24A($s1)
    ctx->pc = 0x229d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 586)));
label_229d10:
    // 0x229d10: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229d14:
    // 0x229d14: 0xac22a298  sw          $v0, -0x5D68($at)
    ctx->pc = 0x229d14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943384), GPR_U32(ctx, 2));
label_229d18:
    // 0x229d18: 0x9222024b  lbu         $v0, 0x24B($s1)
    ctx->pc = 0x229d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 587)));
label_229d1c:
    // 0x229d1c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229d20:
    // 0x229d20: 0xac22a29c  sw          $v0, -0x5D64($at)
    ctx->pc = 0x229d20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943388), GPR_U32(ctx, 2));
label_229d24:
    // 0x229d24: 0x3c15002f  lui         $s5, 0x2F
    ctx->pc = 0x229d24u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)47 << 16));
label_229d28:
    // 0x229d28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x229d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229d2c:
    // 0x229d2c: 0x26b56d28  addiu       $s5, $s5, 0x6D28
    ctx->pc = 0x229d2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 27944));
label_229d30:
    // 0x229d30: 0x92a2003d  lbu         $v0, 0x3D($s5)
    ctx->pc = 0x229d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 61)));
label_229d34:
    // 0x229d34: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
label_229d38:
    if (ctx->pc == 0x229D38u) {
        ctx->pc = 0x229D3Cu;
        goto label_229d3c;
    }
    ctx->pc = 0x229D34u;
    {
        const bool branch_taken_0x229d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229d34) {
            ctx->pc = 0x229E30u;
            goto label_229e30;
        }
    }
    ctx->pc = 0x229D3Cu;
label_229d3c:
    // 0x229d3c: 0x92a40039  lbu         $a0, 0x39($s5)
    ctx->pc = 0x229d3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 57)));
label_229d40:
    // 0x229d40: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x229d40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229d44:
    // 0x229d44: 0x8f8284e0  lw          $v0, -0x7B20($gp)
    ctx->pc = 0x229d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_229d48:
    // 0x229d48: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x229d48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229d4c:
    // 0x229d4c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x229d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_229d50:
    // 0x229d50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x229d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_229d54:
    // 0x229d54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x229d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_229d58:
    // 0x229d58: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x229d58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_229d5c:
    // 0x229d5c: 0x0  nop
    ctx->pc = 0x229d5cu;
    // NOP
label_229d60:
    // 0x229d60: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x229d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_229d64:
    // 0x229d64: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x229d64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_229d68:
    // 0x229d68: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
label_229d6c:
    if (ctx->pc == 0x229D6Cu) {
        ctx->pc = 0x229D70u;
        goto label_229d70;
    }
    ctx->pc = 0x229D68u;
    {
        const bool branch_taken_0x229d68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x229d68) {
            ctx->pc = 0x229E20u;
            goto label_229e20;
        }
    }
    ctx->pc = 0x229D70u;
label_229d70:
    // 0x229d70: 0xc6020188  lwc1        $f2, 0x188($s0)
    ctx->pc = 0x229d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_229d74:
    // 0x229d74: 0x3c02c599  lui         $v0, 0xC599
    ctx->pc = 0x229d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50585 << 16));
label_229d78:
    // 0x229d78: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x229d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
label_229d7c:
    // 0x229d7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_229d80:
    // 0x229d80: 0x0  nop
    ctx->pc = 0x229d80u;
    // NOP
label_229d84:
    // 0x229d84: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x229d84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_229d88:
    // 0x229d88: 0x0  nop
    ctx->pc = 0x229d88u;
    // NOP
label_229d8c:
    // 0x229d8c: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_229d90:
    if (ctx->pc == 0x229D90u) {
        ctx->pc = 0x229D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D8Cu;
        // 0x229d90: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229D94u;
        goto label_229d94;
    }
    ctx->pc = 0x229D8Cu;
    {
        const bool branch_taken_0x229d8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x229D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229D8Cu;
        // 0x229d90: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229d8c) {
            ctx->pc = 0x229E20u;
            goto label_229e20;
        }
    }
    ctx->pc = 0x229D94u;
label_229d94:
    // 0x229d94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_229d98:
    // 0x229d98: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x229d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_229d9c:
    // 0x229d9c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x229d9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_229da0:
    // 0x229da0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x229da0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_229da4:
    // 0x229da4: 0x0  nop
    ctx->pc = 0x229da4u;
    // NOP
label_229da8:
    // 0x229da8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_229dac:
    if (ctx->pc == 0x229DACu) {
        ctx->pc = 0x229DB0u;
        goto label_229db0;
    }
    ctx->pc = 0x229DA8u;
    {
        const bool branch_taken_0x229da8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229da8) {
            ctx->pc = 0x229DF0u;
            goto label_229df0;
        }
    }
    ctx->pc = 0x229DB0u;
label_229db0:
    // 0x229db0: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x229db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_229db4:
    // 0x229db4: 0x3c02478a  lui         $v0, 0x478A
    ctx->pc = 0x229db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18314 << 16));
label_229db8:
    // 0x229db8: 0x3442b100  ori         $v0, $v0, 0xB100
    ctx->pc = 0x229db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45312);
label_229dbc:
    // 0x229dbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_229dc0:
    // 0x229dc0: 0x0  nop
    ctx->pc = 0x229dc0u;
    // NOP
label_229dc4:
    // 0x229dc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x229dc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_229dc8:
    // 0x229dc8: 0x0  nop
    ctx->pc = 0x229dc8u;
    // NOP
label_229dcc:
    // 0x229dcc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_229dd0:
    if (ctx->pc == 0x229DD0u) {
        ctx->pc = 0x229DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DCCu;
        // 0x229dd0: 0x3c024790  lui         $v0, 0x4790 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18320 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229DD4u;
        goto label_229dd4;
    }
    ctx->pc = 0x229DCCu;
    {
        const bool branch_taken_0x229dcc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x229DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229DCCu;
        // 0x229dd0: 0x3c024790  lui         $v0, 0x4790 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18320 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229dcc) {
            ctx->pc = 0x229DF0u;
            goto label_229df0;
        }
    }
    ctx->pc = 0x229DD4u;
label_229dd4:
    // 0x229dd4: 0x34428300  ori         $v0, $v0, 0x8300
    ctx->pc = 0x229dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33536);
label_229dd8:
    // 0x229dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_229ddc:
    // 0x229ddc: 0x0  nop
    ctx->pc = 0x229ddcu;
    // NOP
label_229de0:
    // 0x229de0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x229de0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_229de4:
    // 0x229de4: 0x0  nop
    ctx->pc = 0x229de4u;
    // NOP
label_229de8:
    // 0x229de8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_229dec:
    if (ctx->pc == 0x229DECu) {
        ctx->pc = 0x229DF0u;
        goto label_229df0;
    }
    ctx->pc = 0x229DE8u;
    {
        const bool branch_taken_0x229de8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229de8) {
            ctx->pc = 0x229E20u;
            goto label_229e20;
        }
    }
    ctx->pc = 0x229DF0u;
label_229df0:
    // 0x229df0: 0x9202023a  lbu         $v0, 0x23A($s0)
    ctx->pc = 0x229df0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 570)));
label_229df4:
    // 0x229df4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_229df8:
    if (ctx->pc == 0x229DF8u) {
        ctx->pc = 0x229DFCu;
        goto label_229dfc;
    }
    ctx->pc = 0x229DF4u;
    {
        const bool branch_taken_0x229df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229df4) {
            ctx->pc = 0x229E20u;
            goto label_229e20;
        }
    }
    ctx->pc = 0x229DFCu;
label_229dfc:
    // 0x229dfc: 0x8602021c  lh          $v0, 0x21C($s0)
    ctx->pc = 0x229dfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 540)));
label_229e00:
    // 0x229e00: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_229e04:
    if (ctx->pc == 0x229E04u) {
        ctx->pc = 0x229E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E00u;
        // 0x229e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E08u;
        goto label_229e08;
    }
    ctx->pc = 0x229E00u;
    {
        const bool branch_taken_0x229e00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x229E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E00u;
        // 0x229e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e00) {
            ctx->pc = 0x229E20u;
            goto label_229e20;
        }
    }
    ctx->pc = 0x229E08u;
label_229e08:
    // 0x229e08: 0xc06eb6c  jal         func_1BADB0
label_229e0c:
    if (ctx->pc == 0x229E0Cu) {
        ctx->pc = 0x229E10u;
        goto label_229e10;
    }
    ctx->pc = 0x229E08u;
    SET_GPR_U32(ctx, 31, 0x229E10u);
    ctx->pc = 0x1BADB0u;
    { ctx->pc = 0x1badb0; return; }
    ctx->pc = 0x229E10u;
label_229e10:
    // 0x229e10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x229e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_229e14:
    // 0x229e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x229e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_229e18:
    // 0x229e18: 0xc062f84  jal         func_18BE10
label_229e1c:
    if (ctx->pc == 0x229E1Cu) {
        ctx->pc = 0x229E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E18u;
        // 0x229e1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E20u;
        goto label_229e20;
    }
    ctx->pc = 0x229E18u;
    SET_GPR_U32(ctx, 31, 0x229E20u);
    ctx->pc = 0x229E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229E18u;
    // 0x229e1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BE10u;
    { ctx->pc = 0x18be10; return; }
    ctx->pc = 0x229E20u;
label_229e20:
    // 0x229e20: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x229e20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_229e24:
    // 0x229e24: 0x2a620009  slti        $v0, $s3, 0x9
    ctx->pc = 0x229e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)9) ? 1 : 0);
label_229e28:
    // 0x229e28: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_229e2c:
    if (ctx->pc == 0x229E2Cu) {
        ctx->pc = 0x229E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E28u;
        // 0x229e2c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E30u;
        goto label_229e30;
    }
    ctx->pc = 0x229E28u;
    {
        const bool branch_taken_0x229e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E28u;
        // 0x229e2c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e28) {
            ctx->pc = 0x229D5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229d5c;
        }
    }
    ctx->pc = 0x229E30u;
label_229e30:
    // 0x229e30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x229e30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_229e34:
    // 0x229e34: 0x2a4200ff  slti        $v0, $s2, 0xFF
    ctx->pc = 0x229e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)255) ? 1 : 0);
label_229e38:
    // 0x229e38: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
label_229e3c:
    if (ctx->pc == 0x229E3Cu) {
        ctx->pc = 0x229E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E38u;
        // 0x229e3c: 0x26b50048  addiu       $s5, $s5, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229E40u;
        goto label_229e40;
    }
    ctx->pc = 0x229E38u;
    {
        const bool branch_taken_0x229e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229E38u;
        // 0x229e3c: 0x26b50048  addiu       $s5, $s5, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229e38) {
            ctx->pc = 0x229D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229d30;
        }
    }
    ctx->pc = 0x229E40u;
label_229e40:
    // 0x229e40: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x229e40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_229e44:
    // 0x229e44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x229e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229e48:
    // 0x229e48: 0x24a56d28  addiu       $a1, $a1, 0x6D28
    ctx->pc = 0x229e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27944));
label_229e4c:
    // 0x229e4c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x229e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_229e50:
    // 0x229e50: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x229e50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_229e54:
    // 0x229e54: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x229e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_229e58:
    // 0x229e58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x229e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_229e5c:
    // 0x229e5c: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x229e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_229e60:
    // 0x229e60: 0x90a7003d  lbu         $a3, 0x3D($a1)
    ctx->pc = 0x229e60u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 61)));
label_229e64:
    // 0x229e64: 0x14e0006c  bnez        $a3, . + 4 + (0x6C << 2)
label_229e68:
    if (ctx->pc == 0x229E68u) {
        ctx->pc = 0x229E6Cu;
        goto label_229e6c;
    }
    ctx->pc = 0x229E64u;
    {
        const bool branch_taken_0x229e64 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x229e64) {
            ctx->pc = 0x22A018u;
            goto label_22a018;
        }
    }
    ctx->pc = 0x229E6Cu;
label_229e6c:
    // 0x229e6c: 0x90a70036  lbu         $a3, 0x36($a1)
    ctx->pc = 0x229e6cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 54)));
label_229e70:
    // 0x229e70: 0x10e40046  beq         $a3, $a0, . + 4 + (0x46 << 2)
label_229e74:
    if (ctx->pc == 0x229E74u) {
        ctx->pc = 0x229E78u;
        goto label_229e78;
    }
    ctx->pc = 0x229E70u;
    {
        const bool branch_taken_0x229e70 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x229e70) {
            ctx->pc = 0x229F8Cu;
            goto label_229f8c;
        }
    }
    ctx->pc = 0x229E78u;
label_229e78:
    // 0x229e78: 0x10e30044  beq         $a3, $v1, . + 4 + (0x44 << 2)
label_229e7c:
    if (ctx->pc == 0x229E7Cu) {
        ctx->pc = 0x229E80u;
        goto label_229e80;
    }
    ctx->pc = 0x229E78u;
    {
        const bool branch_taken_0x229e78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x229e78) {
            ctx->pc = 0x229F8Cu;
            goto label_229f8c;
        }
    }
    ctx->pc = 0x229E80u;
label_229e80:
    // 0x229e80: 0xa0a30036  sb          $v1, 0x36($a1)
    ctx->pc = 0x229e80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 54), (uint8_t)GPR_U32(ctx, 3));
label_229e84:
    // 0x229e84: 0x92270239  lbu         $a3, 0x239($s1)
    ctx->pc = 0x229e84u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 569)));
label_229e88:
    // 0x229e88: 0xa0a70038  sb          $a3, 0x38($a1)
    ctx->pc = 0x229e88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 56), (uint8_t)GPR_U32(ctx, 7));
label_229e8c:
    // 0x229e8c: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x229e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_229e90:
    // 0x229e90: 0xa0e00006  sb          $zero, 0x6($a3)
    ctx->pc = 0x229e90u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 0));
label_229e94:
    // 0x229e94: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x229e94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_229e98:
    // 0x229e98: 0xa0e30014  sb          $v1, 0x14($a3)
    ctx->pc = 0x229e98u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 20), (uint8_t)GPR_U32(ctx, 3));
label_229e9c:
    // 0x229e9c: 0x922a0234  lbu         $t2, 0x234($s1)
    ctx->pc = 0x229e9cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 564)));
label_229ea0:
    // 0x229ea0: 0x92290239  lbu         $t1, 0x239($s1)
    ctx->pc = 0x229ea0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 569)));
label_229ea4:
    // 0x229ea4: 0xa3a00  sll         $a3, $t2, 8
    ctx->pc = 0x229ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
label_229ea8:
    // 0x229ea8: 0xea5023  subu        $t2, $a3, $t2
    ctx->pc = 0x229ea8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_229eac:
    // 0x229eac: 0x938c0  sll         $a3, $t1, 3
    ctx->pc = 0x229eacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_229eb0:
    // 0x229eb0: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x229eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_229eb4:
    // 0x229eb4: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x229eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_229eb8:
    // 0x229eb8: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x229eb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_229ebc:
    // 0x229ebc: 0x748c0  sll         $t1, $a3, 3
    ctx->pc = 0x229ebcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_229ec0:
    // 0x229ec0: 0xa38c0  sll         $a3, $t2, 3
    ctx->pc = 0x229ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_229ec4:
    // 0x229ec4: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x229ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_229ec8:
    // 0x229ec8: 0x24e70000  addiu       $a3, $a3, 0x0
    ctx->pc = 0x229ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
label_229ecc:
    // 0x229ecc: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x229eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_229ed0:
    // 0x229ed0: 0x90e70026  lbu         $a3, 0x26($a3)
    ctx->pc = 0x229ed0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 38)));
label_229ed4:
    // 0x229ed4: 0xa0a70026  sb          $a3, 0x26($a1)
    ctx->pc = 0x229ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 38), (uint8_t)GPR_U32(ctx, 7));
label_229ed8:
    // 0x229ed8: 0x922a0234  lbu         $t2, 0x234($s1)
    ctx->pc = 0x229ed8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 564)));
label_229edc:
    // 0x229edc: 0x92290239  lbu         $t1, 0x239($s1)
    ctx->pc = 0x229edcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 569)));
label_229ee0:
    // 0x229ee0: 0xa3a00  sll         $a3, $t2, 8
    ctx->pc = 0x229ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
label_229ee4:
    // 0x229ee4: 0xea5023  subu        $t2, $a3, $t2
    ctx->pc = 0x229ee4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_229ee8:
    // 0x229ee8: 0x938c0  sll         $a3, $t1, 3
    ctx->pc = 0x229ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_229eec:
    // 0x229eec: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x229eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_229ef0:
    // 0x229ef0: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x229ef0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_229ef4:
    // 0x229ef4: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x229ef4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_229ef8:
    // 0x229ef8: 0x748c0  sll         $t1, $a3, 3
    ctx->pc = 0x229ef8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_229efc:
    // 0x229efc: 0xa38c0  sll         $a3, $t2, 3
    ctx->pc = 0x229efcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_229f00:
    // 0x229f00: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x229f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_229f04:
    // 0x229f04: 0x24e70000  addiu       $a3, $a3, 0x0
    ctx->pc = 0x229f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
label_229f08:
    // 0x229f08: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x229f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_229f0c:
    // 0x229f0c: 0x90e70027  lbu         $a3, 0x27($a3)
    ctx->pc = 0x229f0cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 39)));
label_229f10:
    // 0x229f10: 0xa0a70027  sb          $a3, 0x27($a1)
    ctx->pc = 0x229f10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 39), (uint8_t)GPR_U32(ctx, 7));
label_229f14:
    // 0x229f14: 0x922a0234  lbu         $t2, 0x234($s1)
    ctx->pc = 0x229f14u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 564)));
label_229f18:
    // 0x229f18: 0x92290239  lbu         $t1, 0x239($s1)
    ctx->pc = 0x229f18u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 569)));
label_229f1c:
    // 0x229f1c: 0xa3a00  sll         $a3, $t2, 8
    ctx->pc = 0x229f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
label_229f20:
    // 0x229f20: 0xea5023  subu        $t2, $a3, $t2
    ctx->pc = 0x229f20u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_229f24:
    // 0x229f24: 0x938c0  sll         $a3, $t1, 3
    ctx->pc = 0x229f24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_229f28:
    // 0x229f28: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x229f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_229f2c:
    // 0x229f2c: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x229f2cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_229f30:
    // 0x229f30: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x229f30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_229f34:
    // 0x229f34: 0x748c0  sll         $t1, $a3, 3
    ctx->pc = 0x229f34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_229f38:
    // 0x229f38: 0xa38c0  sll         $a3, $t2, 3
    ctx->pc = 0x229f38u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_229f3c:
    // 0x229f3c: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x229f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_229f40:
    // 0x229f40: 0x24e70000  addiu       $a3, $a3, 0x0
    ctx->pc = 0x229f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
label_229f44:
    // 0x229f44: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x229f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_229f48:
    // 0x229f48: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x229f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229f4c:
    // 0x229f4c: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x229f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_229f50:
    // 0x229f50: 0x922a0234  lbu         $t2, 0x234($s1)
    ctx->pc = 0x229f50u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 564)));
label_229f54:
    // 0x229f54: 0x92290239  lbu         $t1, 0x239($s1)
    ctx->pc = 0x229f54u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 569)));
label_229f58:
    // 0x229f58: 0xa3a00  sll         $a3, $t2, 8
    ctx->pc = 0x229f58u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
label_229f5c:
    // 0x229f5c: 0xea5023  subu        $t2, $a3, $t2
    ctx->pc = 0x229f5cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_229f60:
    // 0x229f60: 0x938c0  sll         $a3, $t1, 3
    ctx->pc = 0x229f60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_229f64:
    // 0x229f64: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x229f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_229f68:
    // 0x229f68: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x229f68u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_229f6c:
    // 0x229f6c: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x229f6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_229f70:
    // 0x229f70: 0x748c0  sll         $t1, $a3, 3
    ctx->pc = 0x229f70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_229f74:
    // 0x229f74: 0xa38c0  sll         $a3, $t2, 3
    ctx->pc = 0x229f74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_229f78:
    // 0x229f78: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x229f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_229f7c:
    // 0x229f7c: 0x24e70000  addiu       $a3, $a3, 0x0
    ctx->pc = 0x229f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
label_229f80:
    // 0x229f80: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x229f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_229f84:
    // 0x229f84: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x229f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229f88:
    // 0x229f88: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x229f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_229f8c:
    // 0x229f8c: 0x0  nop
    ctx->pc = 0x229f8cu;
    // NOP
label_229f90:
    // 0x229f90: 0x90aa0039  lbu         $t2, 0x39($a1)
    ctx->pc = 0x229f90u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 57)));
label_229f94:
    // 0x229f94: 0x8f8784e0  lw          $a3, -0x7B20($gp)
    ctx->pc = 0x229f94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_229f98:
    // 0x229f98: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x229f98u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229f9c:
    // 0x229f9c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x229f9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229fa0:
    // 0x229fa0: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x229fa0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_229fa4:
    // 0x229fa4: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x229fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_229fa8:
    // 0x229fa8: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x229fa8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_229fac:
    // 0x229fac: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x229facu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_229fb0:
    // 0x229fb0: 0x12b3821  addu        $a3, $t1, $t3
    ctx->pc = 0x229fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_229fb4:
    // 0x229fb4: 0x8cea0000  lw          $t2, 0x0($a3)
    ctx->pc = 0x229fb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_229fb8:
    // 0x229fb8: 0x11400013  beqz        $t2, . + 4 + (0x13 << 2)
label_229fbc:
    if (ctx->pc == 0x229FBCu) {
        ctx->pc = 0x229FC0u;
        goto label_229fc0;
    }
    ctx->pc = 0x229FB8u;
    {
        const bool branch_taken_0x229fb8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x229fb8) {
            ctx->pc = 0x22A008u;
            goto label_22a008;
        }
    }
    ctx->pc = 0x229FC0u;
label_229fc0:
    // 0x229fc0: 0x9147023a  lbu         $a3, 0x23A($t2)
    ctx->pc = 0x229fc0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 570)));
label_229fc4:
    // 0x229fc4: 0x14e00010  bnez        $a3, . + 4 + (0x10 << 2)
label_229fc8:
    if (ctx->pc == 0x229FC8u) {
        ctx->pc = 0x229FCCu;
        goto label_229fcc;
    }
    ctx->pc = 0x229FC4u;
    {
        const bool branch_taken_0x229fc4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x229fc4) {
            ctx->pc = 0x22A008u;
            goto label_22a008;
        }
    }
    ctx->pc = 0x229FCCu;
label_229fcc:
    // 0x229fcc: 0x8547021c  lh          $a3, 0x21C($t2)
    ctx->pc = 0x229fccu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 540)));
label_229fd0:
    // 0x229fd0: 0x18e0000d  blez        $a3, . + 4 + (0xD << 2)
label_229fd4:
    if (ctx->pc == 0x229FD4u) {
        ctx->pc = 0x229FD8u;
        goto label_229fd8;
    }
    ctx->pc = 0x229FD0u;
    {
        const bool branch_taken_0x229fd0 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x229fd0) {
            ctx->pc = 0x22A008u;
            goto label_22a008;
        }
    }
    ctx->pc = 0x229FD8u;
label_229fd8:
    // 0x229fd8: 0x91470237  lbu         $a3, 0x237($t2)
    ctx->pc = 0x229fd8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 567)));
label_229fdc:
    // 0x229fdc: 0x10e3000a  beq         $a3, $v1, . + 4 + (0xA << 2)
label_229fe0:
    if (ctx->pc == 0x229FE0u) {
        ctx->pc = 0x229FE4u;
        goto label_229fe4;
    }
    ctx->pc = 0x229FDCu;
    {
        const bool branch_taken_0x229fdc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x229fdc) {
            ctx->pc = 0x22A008u;
            goto label_22a008;
        }
    }
    ctx->pc = 0x229FE4u;
label_229fe4:
    // 0x229fe4: 0x10e40008  beq         $a3, $a0, . + 4 + (0x8 << 2)
label_229fe8:
    if (ctx->pc == 0x229FE8u) {
        ctx->pc = 0x229FECu;
        goto label_229fec;
    }
    ctx->pc = 0x229FE4u;
    {
        const bool branch_taken_0x229fe4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x229fe4) {
            ctx->pc = 0x22A008u;
            goto label_22a008;
        }
    }
    ctx->pc = 0x229FECu;
label_229fec:
    // 0x229fec: 0x10e80006  beq         $a3, $t0, . + 4 + (0x6 << 2)
label_229ff0:
    if (ctx->pc == 0x229FF0u) {
        ctx->pc = 0x229FF4u;
        goto label_229ff4;
    }
    ctx->pc = 0x229FECu;
    {
        const bool branch_taken_0x229fec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x229fec) {
            ctx->pc = 0x22A008u;
            goto label_22a008;
        }
    }
    ctx->pc = 0x229FF4u;
label_229ff4:
    // 0x229ff4: 0xa1430237  sb          $v1, 0x237($t2)
    ctx->pc = 0x229ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 567), (uint8_t)GPR_U32(ctx, 3));
label_229ff8:
    // 0x229ff8: 0x92270238  lbu         $a3, 0x238($s1)
    ctx->pc = 0x229ff8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 568)));
label_229ffc:
    // 0x229ffc: 0xa1470236  sb          $a3, 0x236($t2)
    ctx->pc = 0x229ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 566), (uint8_t)GPR_U32(ctx, 7));
label_22a000:
    // 0x22a000: 0x92270233  lbu         $a3, 0x233($s1)
    ctx->pc = 0x22a000u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 563)));
label_22a004:
    // 0x22a004: 0xa1470235  sb          $a3, 0x235($t2)
    ctx->pc = 0x22a004u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 565), (uint8_t)GPR_U32(ctx, 7));
label_22a008:
    // 0x22a008: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x22a008u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_22a00c:
    // 0x22a00c: 0x29870009  slti        $a3, $t4, 0x9
    ctx->pc = 0x22a00cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)9) ? 1 : 0);
label_22a010:
    // 0x22a010: 0x14e0ffe7  bnez        $a3, . + 4 + (-0x19 << 2)
label_22a014:
    if (ctx->pc == 0x22A014u) {
        ctx->pc = 0x22A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A010u;
        // 0x22a014: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A018u;
        goto label_22a018;
    }
    ctx->pc = 0x22A010u;
    {
        const bool branch_taken_0x22a010 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A010u;
        // 0x22a014: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a010) {
            ctx->pc = 0x229FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229fb0;
        }
    }
    ctx->pc = 0x22A018u;
label_22a018:
    // 0x22a018: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22a018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_22a01c:
    // 0x22a01c: 0x28c700ff  slti        $a3, $a2, 0xFF
    ctx->pc = 0x22a01cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)255) ? 1 : 0);
label_22a020:
    // 0x22a020: 0x14e0ff8f  bnez        $a3, . + 4 + (-0x71 << 2)
label_22a024:
    if (ctx->pc == 0x22A024u) {
        ctx->pc = 0x22A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A020u;
        // 0x22a024: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A028u;
        goto label_22a028;
    }
    ctx->pc = 0x22A020u;
    {
        const bool branch_taken_0x22a020 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A020u;
        // 0x22a024: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a020) {
            ctx->pc = 0x229E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229e60;
        }
    }
    ctx->pc = 0x22A028u;
label_22a028:
    // 0x22a028: 0xc0448d4  jal         func_112350
label_22a02c:
    if (ctx->pc == 0x22A02Cu) {
        ctx->pc = 0x22A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A028u;
        // 0x22a02c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A030u;
        goto label_22a030;
    }
    ctx->pc = 0x22A028u;
    SET_GPR_U32(ctx, 31, 0x22A030u);
    ctx->pc = 0x22A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A028u;
    // 0x22a02c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112350u, 0x22A028u, 0x22A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A030u;
label_22a030:
    // 0x22a030: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x22a030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_22a034:
    // 0x22a034: 0x8c23cbe8  lw          $v1, -0x3418($at)
    ctx->pc = 0x22a034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953960)));
label_22a038:
    // 0x22a038: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x22a038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22a03c:
    // 0x22a03c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_22a040:
    if (ctx->pc == 0x22A040u) {
        ctx->pc = 0x22A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A03Cu;
        // 0x22a040: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A044u;
        goto label_22a044;
    }
    ctx->pc = 0x22A03Cu;
    {
        const bool branch_taken_0x22a03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A03Cu;
        // 0x22a040: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a03c) {
            ctx->pc = 0x22A0D8u;
            goto label_22a0d8;
        }
    }
    ctx->pc = 0x22A044u;
label_22a044:
    // 0x22a044: 0xc08a004  jal         func_228010
label_22a048:
    if (ctx->pc == 0x22A048u) {
        ctx->pc = 0x22A04Cu;
        goto label_22a04c;
    }
    ctx->pc = 0x22A044u;
    SET_GPR_U32(ctx, 31, 0x22A04Cu);
    ctx->pc = 0x228010u;
    { ctx->pc = 0x228010; return; }
    ctx->pc = 0x22A04Cu;
label_22a04c:
    // 0x22a04c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22a04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a050:
    // 0x22a050: 0xc08a004  jal         func_228010
label_22a054:
    if (ctx->pc == 0x22A054u) {
        ctx->pc = 0x22A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A050u;
        // 0x22a054: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A058u;
        goto label_22a058;
    }
    ctx->pc = 0x22A050u;
    SET_GPR_U32(ctx, 31, 0x22A058u);
    ctx->pc = 0x22A054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A050u;
    // 0x22a054: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    { ctx->pc = 0x228010; return; }
    ctx->pc = 0x22A058u;
label_22a058:
    // 0x22a058: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x22a058u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_22a05c:
    // 0x22a05c: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
label_22a060:
    if (ctx->pc == 0x22A060u) {
        ctx->pc = 0x22A064u;
        goto label_22a064;
    }
    ctx->pc = 0x22A05Cu;
    {
        const bool branch_taken_0x22a05c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a05c) {
            ctx->pc = 0x22A0D8u;
            goto label_22a0d8;
        }
    }
    ctx->pc = 0x22A064u;
label_22a064:
    // 0x22a064: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22a064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a068:
    // 0x22a068: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x22a068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_22a06c:
    // 0x22a06c: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_22a070:
    if (ctx->pc == 0x22A070u) {
        ctx->pc = 0x22A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A06Cu;
        // 0x22a070: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A074u;
        goto label_22a074;
    }
    ctx->pc = 0x22A06Cu;
    {
        const bool branch_taken_0x22a06c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A06Cu;
        // 0x22a070: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a06c) {
            ctx->pc = 0x22A0BCu;
            goto label_22a0bc;
        }
    }
    ctx->pc = 0x22A074u;
label_22a074:
    // 0x22a074: 0x24424a30  addiu       $v0, $v0, 0x4A30
    ctx->pc = 0x22a074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18992));
label_22a078:
    // 0x22a078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a07c:
    // 0x22a07c: 0x90420680  lbu         $v0, 0x680($v0)
    ctx->pc = 0x22a07cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1664)));
label_22a080:
    // 0x22a080: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_22a084:
    if (ctx->pc == 0x22A084u) {
        ctx->pc = 0x22A088u;
        goto label_22a088;
    }
    ctx->pc = 0x22A080u;
    {
        const bool branch_taken_0x22a080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a080) {
            ctx->pc = 0x22A0BCu;
            goto label_22a0bc;
        }
    }
    ctx->pc = 0x22A088u;
label_22a088:
    // 0x22a088: 0x86050006  lh          $a1, 0x6($s0)
    ctx->pc = 0x22a088u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_22a08c:
    // 0x22a08c: 0x86060008  lh          $a2, 0x8($s0)
    ctx->pc = 0x22a08cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_22a090:
    // 0x22a090: 0x8607000a  lh          $a3, 0xA($s0)
    ctx->pc = 0x22a090u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_22a094:
    // 0x22a094: 0x8608000c  lh          $t0, 0xC($s0)
    ctx->pc = 0x22a094u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_22a098:
    // 0x22a098: 0x8609000e  lh          $t1, 0xE($s0)
    ctx->pc = 0x22a098u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_22a09c:
    // 0x22a09c: 0xc05d3e4  jal         func_174F90
label_22a0a0:
    if (ctx->pc == 0x22A0A0u) {
        ctx->pc = 0x22A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A09Cu;
        // 0x22a0a0: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A0A4u;
        goto label_22a0a4;
    }
    ctx->pc = 0x22A09Cu;
    SET_GPR_U32(ctx, 31, 0x22A0A4u);
    ctx->pc = 0x22A0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A09Cu;
    // 0x22a0a0: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x22A09Cu, 0x22A0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A0A4u;
label_22a0a4:
    // 0x22a0a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a0a8:
    // 0x22a0a8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_22a0ac:
    // 0x22a0ac: 0x24424a30  addiu       $v0, $v0, 0x4A30
    ctx->pc = 0x22a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18992));
label_22a0b0:
    // 0x22a0b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22a0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a0b4:
    // 0x22a0b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a0b8:
    // 0x22a0b8: 0xa0440680  sb          $a0, 0x680($v0)
    ctx->pc = 0x22a0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1664), (uint8_t)GPR_U32(ctx, 4));
label_22a0bc:
    // 0x22a0bc: 0x0  nop
    ctx->pc = 0x22a0bcu;
    // NOP
label_22a0c0:
    // 0x22a0c0: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x22a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_22a0c4:
    // 0x22a0c4: 0xc08a004  jal         func_228010
label_22a0c8:
    if (ctx->pc == 0x22A0C8u) {
        ctx->pc = 0x22A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0C4u;
        // 0x22a0c8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A0CCu;
        goto label_22a0cc;
    }
    ctx->pc = 0x22A0C4u;
    SET_GPR_U32(ctx, 31, 0x22A0CCu);
    ctx->pc = 0x22A0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A0C4u;
    // 0x22a0c8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    { ctx->pc = 0x228010; return; }
    ctx->pc = 0x22A0CCu;
label_22a0cc:
    // 0x22a0cc: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x22a0ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_22a0d0:
    // 0x22a0d0: 0x1020ffe4  beqz        $at, . + 4 + (-0x1C << 2)
label_22a0d4:
    if (ctx->pc == 0x22A0D4u) {
        ctx->pc = 0x22A0D8u;
        goto label_22a0d8;
    }
    ctx->pc = 0x22A0D0u;
    {
        const bool branch_taken_0x22a0d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a0d0) {
            ctx->pc = 0x22A064u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a064;
        }
    }
    ctx->pc = 0x22A0D8u;
label_22a0d8:
    // 0x22a0d8: 0xc08a93c  jal         func_22A4F0
label_22a0dc:
    if (ctx->pc == 0x22A0DCu) {
        ctx->pc = 0x22A0E0u;
        goto label_22a0e0;
    }
    ctx->pc = 0x22A0D8u;
    SET_GPR_U32(ctx, 31, 0x22A0E0u);
    ctx->pc = 0x22A4F0u;
    { ctx->pc = 0x22a4f0; return; }
    ctx->pc = 0x22A0E0u;
label_22a0e0:
    // 0x22a0e0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x22a0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_22a0e4:
    // 0x22a0e4: 0x902350b7  lbu         $v1, 0x50B7($at)
    ctx->pc = 0x22a0e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20663)));
label_22a0e8:
    // 0x22a0e8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_22a0ec:
    if (ctx->pc == 0x22A0ECu) {
        ctx->pc = 0x22A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0E8u;
        // 0x22a0ec: 0x3c10002f  lui         $s0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A0F0u;
        goto label_22a0f0;
    }
    ctx->pc = 0x22A0E8u;
    {
        const bool branch_taken_0x22a0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0E8u;
        // 0x22a0ec: 0x3c10002f  lui         $s0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a0e8) {
            ctx->pc = 0x22A100u;
            goto label_22a100;
        }
    }
    ctx->pc = 0x22A0F0u;
label_22a0f0:
    // 0x22a0f0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x22a0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_22a0f4:
    // 0x22a0f4: 0x902350b8  lbu         $v1, 0x50B8($at)
    ctx->pc = 0x22a0f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20664)));
label_22a0f8:
    // 0x22a0f8: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_22a0fc:
    if (ctx->pc == 0x22A0FCu) {
        ctx->pc = 0x22A100u;
        goto label_22a100;
    }
    ctx->pc = 0x22A0F8u;
    {
        const bool branch_taken_0x22a0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a0f8) {
            ctx->pc = 0x22A178u;
            { ctx->pc = 0x22a178; return; }
        }
    }
    ctx->pc = 0x22A100u;
label_22a100:
    // 0x22a100: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22a100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a104:
    // 0x22a104: 0x26106d28  addiu       $s0, $s0, 0x6D28
    ctx->pc = 0x22a104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27944));
label_22a108:
    // 0x22a108: 0xc04485c  jal         func_112170
label_22a10c:
    if (ctx->pc == 0x22A10Cu) {
        ctx->pc = 0x22A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A108u;
        // 0x22a10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A110u;
        goto label_22a110;
    }
    ctx->pc = 0x22A108u;
    SET_GPR_U32(ctx, 31, 0x22A110u);
    ctx->pc = 0x22A10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A108u;
    // 0x22a10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112170u, 0x22A108u, 0x22A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A110u;
label_22a110:
    // 0x22a110: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_22a114:
    if (ctx->pc == 0x22A114u) {
        ctx->pc = 0x22A118u;
        goto label_22a118;
    }
    ctx->pc = 0x22A110u;
    {
        const bool branch_taken_0x22a110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a110) {
            ctx->pc = 0x22A12Cu;
            goto label_22a12c;
        }
    }
    ctx->pc = 0x22A118u;
label_22a118:
    // 0x22a118: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22a118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22a11c:
    // 0x22a11c: 0x26100048  addiu       $s0, $s0, 0x48
    ctx->pc = 0x22a11cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_22a120:
    // 0x22a120: 0x2a2300ff  slti        $v1, $s1, 0xFF
    ctx->pc = 0x22a120u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)255) ? 1 : 0);
label_22a124:
    // 0x22a124: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_22a128:
    if (ctx->pc == 0x22A128u) {
        ctx->pc = 0x22A12Cu;
        goto label_22a12c;
    }
    ctx->pc = 0x22A124u;
    {
        const bool branch_taken_0x22a124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a124) {
            ctx->pc = 0x22A108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a108;
        }
    }
    ctx->pc = 0x22A12Cu;
label_22a12c:
    // 0x22a12c: 0x0  nop
    ctx->pc = 0x22a12cu;
    // NOP
    ctx->pc = 0x22a130u;
    return;
}
