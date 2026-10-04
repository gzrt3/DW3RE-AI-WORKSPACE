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


void FUN_0014eba0_part144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1948d0u: goto label_1948d0;
        case 0x1948d4u: goto label_1948d4;
        case 0x1948d8u: goto label_1948d8;
        case 0x1948dcu: goto label_1948dc;
        case 0x1948e0u: goto label_1948e0;
        case 0x1948e4u: goto label_1948e4;
        case 0x1948e8u: goto label_1948e8;
        case 0x1948ecu: goto label_1948ec;
        case 0x1948f0u: goto label_1948f0;
        case 0x1948f4u: goto label_1948f4;
        case 0x1948f8u: goto label_1948f8;
        case 0x1948fcu: goto label_1948fc;
        case 0x194900u: goto label_194900;
        case 0x194904u: goto label_194904;
        case 0x194908u: goto label_194908;
        case 0x19490cu: goto label_19490c;
        case 0x194910u: goto label_194910;
        case 0x194914u: goto label_194914;
        case 0x194918u: goto label_194918;
        case 0x19491cu: goto label_19491c;
        case 0x194920u: goto label_194920;
        case 0x194924u: goto label_194924;
        case 0x194928u: goto label_194928;
        case 0x19492cu: goto label_19492c;
        case 0x194930u: goto label_194930;
        case 0x194934u: goto label_194934;
        case 0x194938u: goto label_194938;
        case 0x19493cu: goto label_19493c;
        case 0x194940u: goto label_194940;
        case 0x194944u: goto label_194944;
        case 0x194948u: goto label_194948;
        case 0x19494cu: goto label_19494c;
        case 0x194950u: goto label_194950;
        case 0x194954u: goto label_194954;
        case 0x194958u: goto label_194958;
        case 0x19495cu: goto label_19495c;
        case 0x194960u: goto label_194960;
        case 0x194964u: goto label_194964;
        case 0x194968u: goto label_194968;
        case 0x19496cu: goto label_19496c;
        case 0x194970u: goto label_194970;
        case 0x194974u: goto label_194974;
        case 0x194978u: goto label_194978;
        case 0x19497cu: goto label_19497c;
        case 0x194980u: goto label_194980;
        case 0x194984u: goto label_194984;
        case 0x194988u: goto label_194988;
        case 0x19498cu: goto label_19498c;
        case 0x194990u: goto label_194990;
        case 0x194994u: goto label_194994;
        case 0x194998u: goto label_194998;
        case 0x19499cu: goto label_19499c;
        case 0x1949a0u: goto label_1949a0;
        case 0x1949a4u: goto label_1949a4;
        case 0x1949a8u: goto label_1949a8;
        case 0x1949acu: goto label_1949ac;
        case 0x1949b0u: goto label_1949b0;
        case 0x1949b4u: goto label_1949b4;
        case 0x1949b8u: goto label_1949b8;
        case 0x1949bcu: goto label_1949bc;
        case 0x1949c0u: goto label_1949c0;
        case 0x1949c4u: goto label_1949c4;
        case 0x1949c8u: goto label_1949c8;
        case 0x1949ccu: goto label_1949cc;
        case 0x1949d0u: goto label_1949d0;
        case 0x1949d4u: goto label_1949d4;
        case 0x1949d8u: goto label_1949d8;
        case 0x1949dcu: goto label_1949dc;
        case 0x1949e0u: goto label_1949e0;
        case 0x1949e4u: goto label_1949e4;
        case 0x1949e8u: goto label_1949e8;
        case 0x1949ecu: goto label_1949ec;
        case 0x1949f0u: goto label_1949f0;
        case 0x1949f4u: goto label_1949f4;
        case 0x1949f8u: goto label_1949f8;
        case 0x1949fcu: goto label_1949fc;
        case 0x194a00u: goto label_194a00;
        case 0x194a04u: goto label_194a04;
        case 0x194a08u: goto label_194a08;
        case 0x194a0cu: goto label_194a0c;
        case 0x194a10u: goto label_194a10;
        case 0x194a14u: goto label_194a14;
        case 0x194a18u: goto label_194a18;
        case 0x194a1cu: goto label_194a1c;
        case 0x194a20u: goto label_194a20;
        case 0x194a24u: goto label_194a24;
        case 0x194a28u: goto label_194a28;
        case 0x194a2cu: goto label_194a2c;
        case 0x194a30u: goto label_194a30;
        case 0x194a34u: goto label_194a34;
        case 0x194a38u: goto label_194a38;
        case 0x194a3cu: goto label_194a3c;
        case 0x194a40u: goto label_194a40;
        case 0x194a44u: goto label_194a44;
        case 0x194a48u: goto label_194a48;
        case 0x194a4cu: goto label_194a4c;
        case 0x194a50u: goto label_194a50;
        case 0x194a54u: goto label_194a54;
        case 0x194a58u: goto label_194a58;
        case 0x194a5cu: goto label_194a5c;
        case 0x194a60u: goto label_194a60;
        case 0x194a64u: goto label_194a64;
        case 0x194a68u: goto label_194a68;
        case 0x194a6cu: goto label_194a6c;
        case 0x194a70u: goto label_194a70;
        case 0x194a74u: goto label_194a74;
        case 0x194a78u: goto label_194a78;
        case 0x194a7cu: goto label_194a7c;
        case 0x194a80u: goto label_194a80;
        case 0x194a84u: goto label_194a84;
        case 0x194a88u: goto label_194a88;
        case 0x194a8cu: goto label_194a8c;
        case 0x194a90u: goto label_194a90;
        case 0x194a94u: goto label_194a94;
        case 0x194a98u: goto label_194a98;
        case 0x194a9cu: goto label_194a9c;
        case 0x194aa0u: goto label_194aa0;
        case 0x194aa4u: goto label_194aa4;
        case 0x194aa8u: goto label_194aa8;
        case 0x194aacu: goto label_194aac;
        case 0x194ab0u: goto label_194ab0;
        case 0x194ab4u: goto label_194ab4;
        case 0x194ab8u: goto label_194ab8;
        case 0x194abcu: goto label_194abc;
        case 0x194ac0u: goto label_194ac0;
        case 0x194ac4u: goto label_194ac4;
        case 0x194ac8u: goto label_194ac8;
        case 0x194accu: goto label_194acc;
        case 0x194ad0u: goto label_194ad0;
        case 0x194ad4u: goto label_194ad4;
        case 0x194ad8u: goto label_194ad8;
        case 0x194adcu: goto label_194adc;
        case 0x194ae0u: goto label_194ae0;
        case 0x194ae4u: goto label_194ae4;
        case 0x194ae8u: goto label_194ae8;
        case 0x194aecu: goto label_194aec;
        case 0x194af0u: goto label_194af0;
        case 0x194af4u: goto label_194af4;
        case 0x194af8u: goto label_194af8;
        case 0x194afcu: goto label_194afc;
        case 0x194b00u: goto label_194b00;
        case 0x194b04u: goto label_194b04;
        case 0x194b08u: goto label_194b08;
        case 0x194b0cu: goto label_194b0c;
        case 0x194b10u: goto label_194b10;
        case 0x194b14u: goto label_194b14;
        case 0x194b18u: goto label_194b18;
        case 0x194b1cu: goto label_194b1c;
        case 0x194b20u: goto label_194b20;
        case 0x194b24u: goto label_194b24;
        case 0x194b28u: goto label_194b28;
        case 0x194b2cu: goto label_194b2c;
        case 0x194b30u: goto label_194b30;
        case 0x194b34u: goto label_194b34;
        case 0x194b38u: goto label_194b38;
        case 0x194b3cu: goto label_194b3c;
        case 0x194b40u: goto label_194b40;
        case 0x194b44u: goto label_194b44;
        case 0x194b48u: goto label_194b48;
        case 0x194b4cu: goto label_194b4c;
        case 0x194b50u: goto label_194b50;
        case 0x194b54u: goto label_194b54;
        case 0x194b58u: goto label_194b58;
        case 0x194b5cu: goto label_194b5c;
        case 0x194b60u: goto label_194b60;
        case 0x194b64u: goto label_194b64;
        case 0x194b68u: goto label_194b68;
        case 0x194b6cu: goto label_194b6c;
        case 0x194b70u: goto label_194b70;
        case 0x194b74u: goto label_194b74;
        case 0x194b78u: goto label_194b78;
        case 0x194b7cu: goto label_194b7c;
        case 0x194b80u: goto label_194b80;
        case 0x194b84u: goto label_194b84;
        case 0x194b88u: goto label_194b88;
        case 0x194b8cu: goto label_194b8c;
        case 0x194b90u: goto label_194b90;
        case 0x194b94u: goto label_194b94;
        case 0x194b98u: goto label_194b98;
        case 0x194b9cu: goto label_194b9c;
        case 0x194ba0u: goto label_194ba0;
        case 0x194ba4u: goto label_194ba4;
        case 0x194ba8u: goto label_194ba8;
        case 0x194bacu: goto label_194bac;
        case 0x194bb0u: goto label_194bb0;
        case 0x194bb4u: goto label_194bb4;
        case 0x194bb8u: goto label_194bb8;
        case 0x194bbcu: goto label_194bbc;
        case 0x194bc0u: goto label_194bc0;
        case 0x194bc4u: goto label_194bc4;
        case 0x194bc8u: goto label_194bc8;
        case 0x194bccu: goto label_194bcc;
        case 0x194bd0u: goto label_194bd0;
        case 0x194bd4u: goto label_194bd4;
        case 0x194bd8u: goto label_194bd8;
        case 0x194bdcu: goto label_194bdc;
        case 0x194be0u: goto label_194be0;
        case 0x194be4u: goto label_194be4;
        case 0x194be8u: goto label_194be8;
        case 0x194becu: goto label_194bec;
        case 0x194bf0u: goto label_194bf0;
        case 0x194bf4u: goto label_194bf4;
        case 0x194bf8u: goto label_194bf8;
        case 0x194bfcu: goto label_194bfc;
        case 0x194c00u: goto label_194c00;
        case 0x194c04u: goto label_194c04;
        case 0x194c08u: goto label_194c08;
        case 0x194c0cu: goto label_194c0c;
        case 0x194c10u: goto label_194c10;
        case 0x194c14u: goto label_194c14;
        case 0x194c18u: goto label_194c18;
        case 0x194c1cu: goto label_194c1c;
        case 0x194c20u: goto label_194c20;
        case 0x194c24u: goto label_194c24;
        case 0x194c28u: goto label_194c28;
        case 0x194c2cu: goto label_194c2c;
        case 0x194c30u: goto label_194c30;
        case 0x194c34u: goto label_194c34;
        case 0x194c38u: goto label_194c38;
        case 0x194c3cu: goto label_194c3c;
        case 0x194c40u: goto label_194c40;
        case 0x194c44u: goto label_194c44;
        case 0x194c48u: goto label_194c48;
        case 0x194c4cu: goto label_194c4c;
        case 0x194c50u: goto label_194c50;
        case 0x194c54u: goto label_194c54;
        case 0x194c58u: goto label_194c58;
        case 0x194c5cu: goto label_194c5c;
        case 0x194c60u: goto label_194c60;
        case 0x194c64u: goto label_194c64;
        case 0x194c68u: goto label_194c68;
        case 0x194c6cu: goto label_194c6c;
        case 0x194c70u: goto label_194c70;
        case 0x194c74u: goto label_194c74;
        case 0x194c78u: goto label_194c78;
        case 0x194c7cu: goto label_194c7c;
        case 0x194c80u: goto label_194c80;
        case 0x194c84u: goto label_194c84;
        case 0x194c88u: goto label_194c88;
        case 0x194c8cu: goto label_194c8c;
        case 0x194c90u: goto label_194c90;
        case 0x194c94u: goto label_194c94;
        case 0x194c98u: goto label_194c98;
        case 0x194c9cu: goto label_194c9c;
        case 0x194ca0u: goto label_194ca0;
        case 0x194ca4u: goto label_194ca4;
        case 0x194ca8u: goto label_194ca8;
        case 0x194cacu: goto label_194cac;
        case 0x194cb0u: goto label_194cb0;
        case 0x194cb4u: goto label_194cb4;
        case 0x194cb8u: goto label_194cb8;
        case 0x194cbcu: goto label_194cbc;
        case 0x194cc0u: goto label_194cc0;
        case 0x194cc4u: goto label_194cc4;
        case 0x194cc8u: goto label_194cc8;
        case 0x194cccu: goto label_194ccc;
        case 0x194cd0u: goto label_194cd0;
        case 0x194cd4u: goto label_194cd4;
        case 0x194cd8u: goto label_194cd8;
        case 0x194cdcu: goto label_194cdc;
        case 0x194ce0u: goto label_194ce0;
        case 0x194ce4u: goto label_194ce4;
        case 0x194ce8u: goto label_194ce8;
        case 0x194cecu: goto label_194cec;
        case 0x194cf0u: goto label_194cf0;
        case 0x194cf4u: goto label_194cf4;
        case 0x194cf8u: goto label_194cf8;
        case 0x194cfcu: goto label_194cfc;
        case 0x194d00u: goto label_194d00;
        case 0x194d04u: goto label_194d04;
        case 0x194d08u: goto label_194d08;
        case 0x194d0cu: goto label_194d0c;
        case 0x194d10u: goto label_194d10;
        case 0x194d14u: goto label_194d14;
        case 0x194d18u: goto label_194d18;
        case 0x194d1cu: goto label_194d1c;
        case 0x194d20u: goto label_194d20;
        case 0x194d24u: goto label_194d24;
        case 0x194d28u: goto label_194d28;
        case 0x194d2cu: goto label_194d2c;
        case 0x194d30u: goto label_194d30;
        case 0x194d34u: goto label_194d34;
        case 0x194d38u: goto label_194d38;
        case 0x194d3cu: goto label_194d3c;
        case 0x194d40u: goto label_194d40;
        case 0x194d44u: goto label_194d44;
        case 0x194d48u: goto label_194d48;
        case 0x194d4cu: goto label_194d4c;
        case 0x194d50u: goto label_194d50;
        case 0x194d54u: goto label_194d54;
        case 0x194d58u: goto label_194d58;
        case 0x194d5cu: goto label_194d5c;
        case 0x194d60u: goto label_194d60;
        case 0x194d64u: goto label_194d64;
        case 0x194d68u: goto label_194d68;
        case 0x194d6cu: goto label_194d6c;
        case 0x194d70u: goto label_194d70;
        case 0x194d74u: goto label_194d74;
        case 0x194d78u: goto label_194d78;
        case 0x194d7cu: goto label_194d7c;
        case 0x194d80u: goto label_194d80;
        case 0x194d84u: goto label_194d84;
        case 0x194d88u: goto label_194d88;
        case 0x194d8cu: goto label_194d8c;
        case 0x194d90u: goto label_194d90;
        case 0x194d94u: goto label_194d94;
        case 0x194d98u: goto label_194d98;
        case 0x194d9cu: goto label_194d9c;
        case 0x194da0u: goto label_194da0;
        case 0x194da4u: goto label_194da4;
        case 0x194da8u: goto label_194da8;
        case 0x194dacu: goto label_194dac;
        case 0x194db0u: goto label_194db0;
        case 0x194db4u: goto label_194db4;
        case 0x194db8u: goto label_194db8;
        case 0x194dbcu: goto label_194dbc;
        case 0x194dc0u: goto label_194dc0;
        case 0x194dc4u: goto label_194dc4;
        case 0x194dc8u: goto label_194dc8;
        case 0x194dccu: goto label_194dcc;
        case 0x194dd0u: goto label_194dd0;
        case 0x194dd4u: goto label_194dd4;
        case 0x194dd8u: goto label_194dd8;
        case 0x194ddcu: goto label_194ddc;
        case 0x194de0u: goto label_194de0;
        case 0x194de4u: goto label_194de4;
        case 0x194de8u: goto label_194de8;
        case 0x194decu: goto label_194dec;
        case 0x194df0u: goto label_194df0;
        case 0x194df4u: goto label_194df4;
        case 0x194df8u: goto label_194df8;
        case 0x194dfcu: goto label_194dfc;
        case 0x194e00u: goto label_194e00;
        case 0x194e04u: goto label_194e04;
        case 0x194e08u: goto label_194e08;
        case 0x194e0cu: goto label_194e0c;
        case 0x194e10u: goto label_194e10;
        case 0x194e14u: goto label_194e14;
        case 0x194e18u: goto label_194e18;
        case 0x194e1cu: goto label_194e1c;
        case 0x194e20u: goto label_194e20;
        case 0x194e24u: goto label_194e24;
        case 0x194e28u: goto label_194e28;
        case 0x194e2cu: goto label_194e2c;
        case 0x194e30u: goto label_194e30;
        case 0x194e34u: goto label_194e34;
        case 0x194e38u: goto label_194e38;
        case 0x194e3cu: goto label_194e3c;
        case 0x194e40u: goto label_194e40;
        case 0x194e44u: goto label_194e44;
        case 0x194e48u: goto label_194e48;
        case 0x194e4cu: goto label_194e4c;
        case 0x194e50u: goto label_194e50;
        case 0x194e54u: goto label_194e54;
        case 0x194e58u: goto label_194e58;
        case 0x194e5cu: goto label_194e5c;
        case 0x194e60u: goto label_194e60;
        case 0x194e64u: goto label_194e64;
        case 0x194e68u: goto label_194e68;
        case 0x194e6cu: goto label_194e6c;
        case 0x194e70u: goto label_194e70;
        case 0x194e74u: goto label_194e74;
        case 0x194e78u: goto label_194e78;
        case 0x194e7cu: goto label_194e7c;
        case 0x194e80u: goto label_194e80;
        case 0x194e84u: goto label_194e84;
        case 0x194e88u: goto label_194e88;
        case 0x194e8cu: goto label_194e8c;
        case 0x194e90u: goto label_194e90;
        case 0x194e94u: goto label_194e94;
        case 0x194e98u: goto label_194e98;
        case 0x194e9cu: goto label_194e9c;
        case 0x194ea0u: goto label_194ea0;
        case 0x194ea4u: goto label_194ea4;
        case 0x194ea8u: goto label_194ea8;
        case 0x194eacu: goto label_194eac;
        case 0x194eb0u: goto label_194eb0;
        case 0x194eb4u: goto label_194eb4;
        case 0x194eb8u: goto label_194eb8;
        case 0x194ebcu: goto label_194ebc;
        case 0x194ec0u: goto label_194ec0;
        case 0x194ec4u: goto label_194ec4;
        case 0x194ec8u: goto label_194ec8;
        case 0x194eccu: goto label_194ecc;
        case 0x194ed0u: goto label_194ed0;
        case 0x194ed4u: goto label_194ed4;
        case 0x194ed8u: goto label_194ed8;
        case 0x194edcu: goto label_194edc;
        case 0x194ee0u: goto label_194ee0;
        case 0x194ee4u: goto label_194ee4;
        case 0x194ee8u: goto label_194ee8;
        case 0x194eecu: goto label_194eec;
        case 0x194ef0u: goto label_194ef0;
        case 0x194ef4u: goto label_194ef4;
        case 0x194ef8u: goto label_194ef8;
        case 0x194efcu: goto label_194efc;
        case 0x194f00u: goto label_194f00;
        case 0x194f04u: goto label_194f04;
        case 0x194f08u: goto label_194f08;
        case 0x194f0cu: goto label_194f0c;
        case 0x194f10u: goto label_194f10;
        case 0x194f14u: goto label_194f14;
        case 0x194f18u: goto label_194f18;
        case 0x194f1cu: goto label_194f1c;
        case 0x194f20u: goto label_194f20;
        case 0x194f24u: goto label_194f24;
        case 0x194f28u: goto label_194f28;
        case 0x194f2cu: goto label_194f2c;
        case 0x194f30u: goto label_194f30;
        case 0x194f34u: goto label_194f34;
        case 0x194f38u: goto label_194f38;
        case 0x194f3cu: goto label_194f3c;
        case 0x194f40u: goto label_194f40;
        case 0x194f44u: goto label_194f44;
        case 0x194f48u: goto label_194f48;
        case 0x194f4cu: goto label_194f4c;
        case 0x194f50u: goto label_194f50;
        case 0x194f54u: goto label_194f54;
        case 0x194f58u: goto label_194f58;
        case 0x194f5cu: goto label_194f5c;
        case 0x194f60u: goto label_194f60;
        case 0x194f64u: goto label_194f64;
        case 0x194f68u: goto label_194f68;
        case 0x194f6cu: goto label_194f6c;
        case 0x194f70u: goto label_194f70;
        case 0x194f74u: goto label_194f74;
        case 0x194f78u: goto label_194f78;
        case 0x194f7cu: goto label_194f7c;
        case 0x194f80u: goto label_194f80;
        case 0x194f84u: goto label_194f84;
        case 0x194f88u: goto label_194f88;
        case 0x194f8cu: goto label_194f8c;
        case 0x194f90u: goto label_194f90;
        case 0x194f94u: goto label_194f94;
        case 0x194f98u: goto label_194f98;
        case 0x194f9cu: goto label_194f9c;
        case 0x194fa0u: goto label_194fa0;
        case 0x194fa4u: goto label_194fa4;
        case 0x194fa8u: goto label_194fa8;
        case 0x194facu: goto label_194fac;
        case 0x194fb0u: goto label_194fb0;
        case 0x194fb4u: goto label_194fb4;
        case 0x194fb8u: goto label_194fb8;
        case 0x194fbcu: goto label_194fbc;
        case 0x194fc0u: goto label_194fc0;
        case 0x194fc4u: goto label_194fc4;
        case 0x194fc8u: goto label_194fc8;
        case 0x194fccu: goto label_194fcc;
        case 0x194fd0u: goto label_194fd0;
        case 0x194fd4u: goto label_194fd4;
        case 0x194fd8u: goto label_194fd8;
        case 0x194fdcu: goto label_194fdc;
        case 0x194fe0u: goto label_194fe0;
        case 0x194fe4u: goto label_194fe4;
        case 0x194fe8u: goto label_194fe8;
        case 0x194fecu: goto label_194fec;
        case 0x194ff0u: goto label_194ff0;
        case 0x194ff4u: goto label_194ff4;
        case 0x194ff8u: goto label_194ff8;
        case 0x194ffcu: goto label_194ffc;
        case 0x195000u: goto label_195000;
        case 0x195004u: goto label_195004;
        case 0x195008u: goto label_195008;
        case 0x19500cu: goto label_19500c;
        case 0x195010u: goto label_195010;
        case 0x195014u: goto label_195014;
        case 0x195018u: goto label_195018;
        case 0x19501cu: goto label_19501c;
        case 0x195020u: goto label_195020;
        case 0x195024u: goto label_195024;
        case 0x195028u: goto label_195028;
        case 0x19502cu: goto label_19502c;
        case 0x195030u: goto label_195030;
        case 0x195034u: goto label_195034;
        case 0x195038u: goto label_195038;
        case 0x19503cu: goto label_19503c;
        case 0x195040u: goto label_195040;
        case 0x195044u: goto label_195044;
        case 0x195048u: goto label_195048;
        case 0x19504cu: goto label_19504c;
        case 0x195050u: goto label_195050;
        case 0x195054u: goto label_195054;
        case 0x195058u: goto label_195058;
        case 0x19505cu: goto label_19505c;
        case 0x195060u: goto label_195060;
        case 0x195064u: goto label_195064;
        case 0x195068u: goto label_195068;
        case 0x19506cu: goto label_19506c;
        case 0x195070u: goto label_195070;
        case 0x195074u: goto label_195074;
        case 0x195078u: goto label_195078;
        case 0x19507cu: goto label_19507c;
        case 0x195080u: goto label_195080;
        case 0x195084u: goto label_195084;
        case 0x195088u: goto label_195088;
        case 0x19508cu: goto label_19508c;
        case 0x195090u: goto label_195090;
        case 0x195094u: goto label_195094;
        case 0x195098u: goto label_195098;
        case 0x19509cu: goto label_19509c;
        default: return;
    }

label_1948d0:
    // 0x1948d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1948d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1948d4:
    // 0x1948d4: 0x3e00008  jr          $ra
label_1948d8:
    if (ctx->pc == 0x1948D8u) {
        ctx->pc = 0x1948DCu;
        goto label_1948dc;
    }
    ctx->pc = 0x1948D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1948D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1948DCu;
label_1948dc:
    // 0x1948dc: 0x0  nop
    ctx->pc = 0x1948dcu;
    // NOP
label_1948e0:
    // 0x1948e0: 0x28a10059  slti        $at, $a1, 0x59
    ctx->pc = 0x1948e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)89) ? 1 : 0);
label_1948e4:
    // 0x1948e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1948e8:
    if (ctx->pc == 0x1948E8u) {
        ctx->pc = 0x1948E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948E4u;
        // 0x1948e8: 0xa085000b  sb          $a1, 0xB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1948ECu;
        goto label_1948ec;
    }
    ctx->pc = 0x1948E4u;
    {
        const bool branch_taken_0x1948e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1948E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948E4u;
        // 0x1948e8: 0xa085000b  sb          $a1, 0xB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948e4) {
            ctx->pc = 0x1948F4u;
            goto label_1948f4;
        }
    }
    ctx->pc = 0x1948ECu;
label_1948ec:
    // 0x1948ec: 0x1000000e  b           . + 4 + (0xE << 2)
label_1948f0:
    if (ctx->pc == 0x1948F0u) {
        ctx->pc = 0x1948F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948ECu;
        // 0x1948f0: 0xa085000a  sb          $a1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1948F4u;
        goto label_1948f4;
    }
    ctx->pc = 0x1948ECu;
    {
        const bool branch_taken_0x1948ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1948F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948ECu;
        // 0x1948f0: 0xa085000a  sb          $a1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948ec) {
            ctx->pc = 0x194928u;
            goto label_194928;
        }
    }
    ctx->pc = 0x1948F4u;
label_1948f4:
    // 0x1948f4: 0x28a30082  slti        $v1, $a1, 0x82
    ctx->pc = 0x1948f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
label_1948f8:
    // 0x1948f8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1948fc:
    if (ctx->pc == 0x1948FCu) {
        ctx->pc = 0x1948FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948F8u;
        // 0x1948fc: 0x53040  sll         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194900u;
        goto label_194900;
    }
    ctx->pc = 0x1948F8u;
    {
        const bool branch_taken_0x1948f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1948FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948F8u;
        // 0x1948fc: 0x53040  sll         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948f8) {
            ctx->pc = 0x19490Cu;
            goto label_19490c;
        }
    }
    ctx->pc = 0x194900u;
label_194900:
    // 0x194900: 0x24a3ffd7  addiu       $v1, $a1, -0x29
    ctx->pc = 0x194900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
label_194904:
    // 0x194904: 0x10000008  b           . + 4 + (0x8 << 2)
label_194908:
    if (ctx->pc == 0x194908u) {
        ctx->pc = 0x194908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194904u;
        // 0x194908: 0xa083000a  sb          $v1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19490Cu;
        goto label_19490c;
    }
    ctx->pc = 0x194904u;
    {
        const bool branch_taken_0x194904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194904u;
        // 0x194908: 0xa083000a  sb          $v1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194904) {
            ctx->pc = 0x194928u;
            goto label_194928;
        }
    }
    ctx->pc = 0x19490Cu;
label_19490c:
    // 0x19490c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x19490cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_194910:
    // 0x194910: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x194910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_194914:
    // 0x194914: 0x24639d72  addiu       $v1, $v1, -0x628E
    ctx->pc = 0x194914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942066));
label_194918:
    // 0x194918: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x194918u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_19491c:
    // 0x19491c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19491cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_194920:
    // 0x194920: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x194920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_194924:
    // 0x194924: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x194924u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
label_194928:
    // 0x194928: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x194928u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
label_19492c:
    // 0x19492c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x19492cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_194930:
    // 0x194930: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x194930u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_194934:
    // 0x194934: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x194934u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_194938:
    // 0x194938: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x194938u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
label_19493c:
    // 0x19493c: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x19493cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
label_194940:
    // 0x194940: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x194940u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
label_194944:
    // 0x194944: 0xa0830018  sb          $v1, 0x18($a0)
    ctx->pc = 0x194944u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 3));
label_194948:
    // 0x194948: 0xa0800019  sb          $zero, 0x19($a0)
    ctx->pc = 0x194948u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 0));
label_19494c:
    // 0x19494c: 0xa083001a  sb          $v1, 0x1A($a0)
    ctx->pc = 0x19494cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
label_194950:
    // 0x194950: 0xa080001b  sb          $zero, 0x1B($a0)
    ctx->pc = 0x194950u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 27), (uint8_t)GPR_U32(ctx, 0));
label_194954:
    // 0x194954: 0xa083001c  sb          $v1, 0x1C($a0)
    ctx->pc = 0x194954u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
label_194958:
    // 0x194958: 0xa080001d  sb          $zero, 0x1D($a0)
    ctx->pc = 0x194958u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 0));
label_19495c:
    // 0x19495c: 0xa083001e  sb          $v1, 0x1E($a0)
    ctx->pc = 0x19495cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30), (uint8_t)GPR_U32(ctx, 3));
label_194960:
    // 0x194960: 0xa080001f  sb          $zero, 0x1F($a0)
    ctx->pc = 0x194960u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 0));
label_194964:
    // 0x194964: 0xa0830020  sb          $v1, 0x20($a0)
    ctx->pc = 0x194964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 3));
label_194968:
    // 0x194968: 0x3e00008  jr          $ra
label_19496c:
    if (ctx->pc == 0x19496Cu) {
        ctx->pc = 0x19496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194968u;
        // 0x19496c: 0xa0800021  sb          $zero, 0x21($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194970u;
        goto label_194970;
    }
    ctx->pc = 0x194968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194968u;
        // 0x19496c: 0xa0800021  sb          $zero, 0x21($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194970u;
label_194970:
    // 0x194970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x194970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_194974:
    // 0x194974: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x194974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_194978:
    // 0x194978: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x194978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_19497c:
    // 0x19497c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19497cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_194980:
    // 0x194980: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_194984:
    // 0x194984: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x194984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_194988:
    // 0x194988: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x194988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19498c:
    // 0x19498c: 0x2a2500ab  slti        $a1, $s1, 0xAB
    ctx->pc = 0x19498cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)171) ? 1 : 0);
label_194990:
    // 0x194990: 0x14a00044  bnez        $a1, . + 4 + (0x44 << 2)
label_194994:
    if (ctx->pc == 0x194994u) {
        ctx->pc = 0x194994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194990u;
        // 0x194994: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194998u;
        goto label_194998;
    }
    ctx->pc = 0x194990u;
    {
        const bool branch_taken_0x194990 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x194994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194990u;
        // 0x194994: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194990) {
            ctx->pc = 0x194AA4u;
            goto label_194aa4;
        }
    }
    ctx->pc = 0x194998u;
label_194998:
    // 0x194998: 0x2625ff55  addiu       $a1, $s1, -0xAB
    ctx->pc = 0x194998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967125));
label_19499c:
    // 0x19499c: 0x28a300ab  slti        $v1, $a1, 0xAB
    ctx->pc = 0x19499cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)171) ? 1 : 0);
label_1949a0:
    // 0x1949a0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1949a4:
    if (ctx->pc == 0x1949A4u) {
        ctx->pc = 0x1949A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949A0u;
        // 0x1949a4: 0x28a30082  slti        $v1, $a1, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949A8u;
        goto label_1949a8;
    }
    ctx->pc = 0x1949A0u;
    {
        const bool branch_taken_0x1949a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1949A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949A0u;
        // 0x1949a4: 0x28a30082  slti        $v1, $a1, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949a0) {
            ctx->pc = 0x1949C0u;
            goto label_1949c0;
        }
    }
    ctx->pc = 0x1949A8u;
label_1949a8:
    // 0x1949a8: 0x24a4ff55  addiu       $a0, $a1, -0xAB
    ctx->pc = 0x1949a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967125));
label_1949ac:
    // 0x1949ac: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1949acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1949b0:
    // 0x1949b0: 0x246352f0  addiu       $v1, $v1, 0x52F0
    ctx->pc = 0x1949b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21232));
label_1949b4:
    // 0x1949b4: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x1949b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_1949b8:
    // 0x1949b8: 0x10000014  b           . + 4 + (0x14 << 2)
label_1949bc:
    if (ctx->pc == 0x1949BCu) {
        ctx->pc = 0x1949BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949B8u;
        // 0x1949bc: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949C0u;
        goto label_1949c0;
    }
    ctx->pc = 0x1949B8u;
    {
        const bool branch_taken_0x1949b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1949BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949B8u;
        // 0x1949bc: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949b8) {
            ctx->pc = 0x194A0Cu;
            goto label_194a0c;
        }
    }
    ctx->pc = 0x1949C0u;
label_1949c0:
    // 0x1949c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1949c4:
    if (ctx->pc == 0x1949C4u) {
        ctx->pc = 0x1949C8u;
        goto label_1949c8;
    }
    ctx->pc = 0x1949C0u;
    {
        const bool branch_taken_0x1949c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1949c0) {
            ctx->pc = 0x1949D0u;
            goto label_1949d0;
        }
    }
    ctx->pc = 0x1949C8u;
label_1949c8:
    // 0x1949c8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1949cc:
    if (ctx->pc == 0x1949CCu) {
        ctx->pc = 0x1949CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949C8u;
        // 0x1949cc: 0x24a5ffd7  addiu       $a1, $a1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1949D0u;
        goto label_1949d0;
    }
    ctx->pc = 0x1949C8u;
    {
        const bool branch_taken_0x1949c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1949CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949C8u;
        // 0x1949cc: 0x24a5ffd7  addiu       $a1, $a1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949c8) {
            ctx->pc = 0x1949FCu;
            goto label_1949fc;
        }
    }
    ctx->pc = 0x1949D0u;
label_1949d0:
    // 0x1949d0: 0x28a30059  slti        $v1, $a1, 0x59
    ctx->pc = 0x1949d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)89) ? 1 : 0);
label_1949d4:
    // 0x1949d4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1949d8:
    if (ctx->pc == 0x1949D8u) {
        ctx->pc = 0x1949DCu;
        goto label_1949dc;
    }
    ctx->pc = 0x1949D4u;
    {
        const bool branch_taken_0x1949d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1949d4) {
            ctx->pc = 0x1949FCu;
            goto label_1949fc;
        }
    }
    ctx->pc = 0x1949DCu;
label_1949dc:
    // 0x1949dc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1949dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1949e0:
    // 0x1949e0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1949e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1949e4:
    // 0x1949e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1949e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1949e8:
    // 0x1949e8: 0x24639d72  addiu       $v1, $v1, -0x628E
    ctx->pc = 0x1949e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942066));
label_1949ec:
    // 0x1949ec: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1949ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1949f0:
    // 0x1949f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1949f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1949f4:
    // 0x1949f4: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1949f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1949f8:
    // 0x1949f8: 0x0  nop
    ctx->pc = 0x1949f8u;
    // NOP
label_1949fc:
    // 0x1949fc: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1949fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_194a00:
    // 0x194a00: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x194a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_194a04:
    // 0x194a04: 0x24633270  addiu       $v1, $v1, 0x3270
    ctx->pc = 0x194a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12912));
label_194a08:
    // 0x194a08: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x194a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194a0c:
    // 0x194a0c: 0xde450270  ld          $a1, 0x270($s2)
    ctx->pc = 0x194a0cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 624)));
label_194a10:
    // 0x194a10: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x194a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_194a14:
    // 0x194a14: 0xdcc40030  ld          $a0, 0x30($a2)
    ctx->pc = 0x194a14u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 48)));
label_194a18:
    // 0x194a18: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x194a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_194a1c:
    // 0x194a1c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x194a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_194a20:
    // 0x194a20: 0xfe440270  sd          $a0, 0x270($s2)
    ctx->pc = 0x194a20u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 624), GPR_U64(ctx, 4));
label_194a24:
    // 0x194a24: 0x84254af4  lh          $a1, 0x4AF4($at)
    ctx->pc = 0x194a24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_194a28:
    // 0x194a28: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_194a2c:
    if (ctx->pc == 0x194A2Cu) {
        ctx->pc = 0x194A30u;
        goto label_194a30;
    }
    ctx->pc = 0x194A28u;
    {
        const bool branch_taken_0x194a28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194a28) {
            ctx->pc = 0x194A3Cu;
            goto label_194a3c;
        }
    }
    ctx->pc = 0x194A30u;
label_194a30:
    // 0x194a30: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x194a30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_194a34:
    // 0x194a34: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_194a38:
    if (ctx->pc == 0x194A38u) {
        ctx->pc = 0x194A3Cu;
        goto label_194a3c;
    }
    ctx->pc = 0x194A34u;
    {
        const bool branch_taken_0x194a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194a34) {
            ctx->pc = 0x194A80u;
            goto label_194a80;
        }
    }
    ctx->pc = 0x194A3Cu;
label_194a3c:
    // 0x194a3c: 0x92440234  lbu         $a0, 0x234($s2)
    ctx->pc = 0x194a3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 564)));
label_194a40:
    // 0x194a40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194a44:
    // 0x194a44: 0x14830118  bne         $a0, $v1, . + 4 + (0x118 << 2)
label_194a48:
    if (ctx->pc == 0x194A48u) {
        ctx->pc = 0x194A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A44u;
        // 0x194a48: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A4Cu;
        goto label_194a4c;
    }
    ctx->pc = 0x194A44u;
    {
        const bool branch_taken_0x194a44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x194A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A44u;
        // 0x194a48: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a44) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194A4Cu;
label_194a4c:
    // 0x194a4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x194a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_194a50:
    // 0x194a50: 0x8c244afc  lw          $a0, 0x4AFC($at)
    ctx->pc = 0x194a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_194a54:
    // 0x194a54: 0x14830114  bne         $a0, $v1, . + 4 + (0x114 << 2)
label_194a58:
    if (ctx->pc == 0x194A58u) {
        ctx->pc = 0x194A5Cu;
        goto label_194a5c;
    }
    ctx->pc = 0x194A54u;
    {
        const bool branch_taken_0x194a54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x194a54) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194A5Cu;
label_194a5c:
    // 0x194a5c: 0x92430242  lbu         $v1, 0x242($s2)
    ctx->pc = 0x194a5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 578)));
label_194a60:
    // 0x194a60: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x194a60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_194a64:
    // 0x194a64: 0x10200110  beqz        $at, . + 4 + (0x110 << 2)
label_194a68:
    if (ctx->pc == 0x194A68u) {
        ctx->pc = 0x194A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A64u;
        // 0x194a68: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194A6Cu;
        goto label_194a6c;
    }
    ctx->pc = 0x194A64u;
    {
        const bool branch_taken_0x194a64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A64u;
        // 0x194a68: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a64) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194A6Cu;
label_194a6c:
    // 0x194a6c: 0x10a3010e  beq         $a1, $v1, . + 4 + (0x10E << 2)
label_194a70:
    if (ctx->pc == 0x194A70u) {
        ctx->pc = 0x194A74u;
        goto label_194a74;
    }
    ctx->pc = 0x194A6Cu;
    {
        const bool branch_taken_0x194a6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194a6c) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194A74u;
label_194a74:
    // 0x194a74: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x194a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_194a78:
    // 0x194a78: 0x10a3010b  beq         $a1, $v1, . + 4 + (0x10B << 2)
label_194a7c:
    if (ctx->pc == 0x194A7Cu) {
        ctx->pc = 0x194A80u;
        goto label_194a80;
    }
    ctx->pc = 0x194A78u;
    {
        const bool branch_taken_0x194a78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194a78) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194A80u;
label_194a80:
    // 0x194a80: 0x90c3003b  lbu         $v1, 0x3B($a2)
    ctx->pc = 0x194a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 59)));
label_194a84:
    // 0x194a84: 0x9244024a  lbu         $a0, 0x24A($s2)
    ctx->pc = 0x194a84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 586)));
label_194a88:
    // 0x194a88: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x194a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_194a8c:
    // 0x194a8c: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x194a8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_194a90:
    // 0x194a90: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_194a94:
    if (ctx->pc == 0x194A94u) {
        ctx->pc = 0x194A98u;
        goto label_194a98;
    }
    ctx->pc = 0x194A90u;
    {
        const bool branch_taken_0x194a90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x194a90) {
            ctx->pc = 0x194A9Cu;
            goto label_194a9c;
        }
    }
    ctx->pc = 0x194A98u;
label_194a98:
    // 0x194a98: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x194a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_194a9c:
    // 0x194a9c: 0x10000102  b           . + 4 + (0x102 << 2)
label_194aa0:
    if (ctx->pc == 0x194AA0u) {
        ctx->pc = 0x194AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A9Cu;
        // 0x194aa0: 0xa243024a  sb          $v1, 0x24A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194AA4u;
        goto label_194aa4;
    }
    ctx->pc = 0x194A9Cu;
    {
        const bool branch_taken_0x194a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A9Cu;
        // 0x194aa0: 0xa243024a  sb          $v1, 0x24A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a9c) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194AA4u;
label_194aa4:
    // 0x194aa4: 0x2a240082  slti        $a0, $s1, 0x82
    ctx->pc = 0x194aa4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)130) ? 1 : 0);
label_194aa8:
    // 0x194aa8: 0x14800061  bnez        $a0, . + 4 + (0x61 << 2)
label_194aac:
    if (ctx->pc == 0x194AACu) {
        ctx->pc = 0x194AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AA8u;
        // 0x194aac: 0x2a230059  slti        $v1, $s1, 0x59 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)89) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194AB0u;
        goto label_194ab0;
    }
    ctx->pc = 0x194AA8u;
    {
        const bool branch_taken_0x194aa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x194AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AA8u;
        // 0x194aac: 0x2a230059  slti        $v1, $s1, 0x59 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)89) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194aa8) {
            ctx->pc = 0x194C30u;
            goto label_194c30;
        }
    }
    ctx->pc = 0x194AB0u;
label_194ab0:
    // 0x194ab0: 0x2624ff7e  addiu       $a0, $s1, -0x82
    ctx->pc = 0x194ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967166));
label_194ab4:
    // 0x194ab4: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x194ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_194ab8:
    // 0x194ab8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x194ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_194abc:
    // 0x194abc: 0x2442a9a0  addiu       $v0, $v0, -0x5660
    ctx->pc = 0x194abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945184));
label_194ac0:
    // 0x194ac0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194ac4:
    // 0x194ac4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x194ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194ac8:
    // 0x194ac8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x194ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_194acc:
    // 0x194acc: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x194accu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_194ad0:
    // 0x194ad0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194ad4:
    // 0x194ad4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x194ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_194ad8:
    // 0x194ad8: 0xc06542c  jal         func_1950B0
label_194adc:
    if (ctx->pc == 0x194ADCu) {
        ctx->pc = 0x194ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AD8u;
        // 0x194adc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194AE0u;
        goto label_194ae0;
    }
    ctx->pc = 0x194AD8u;
    SET_GPR_U32(ctx, 31, 0x194AE0u);
    ctx->pc = 0x194ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194AD8u;
    // 0x194adc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1950B0u;
    { ctx->pc = 0x1950b0; return; }
    ctx->pc = 0x194AE0u;
label_194ae0:
    // 0x194ae0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x194ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_194ae4:
    // 0x194ae4: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x194ae4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_194ae8:
    // 0x194ae8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_194aec:
    if (ctx->pc == 0x194AECu) {
        ctx->pc = 0x194AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AE8u;
        // 0x194aec: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194AF0u;
        goto label_194af0;
    }
    ctx->pc = 0x194AE8u;
    {
        const bool branch_taken_0x194ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194AE8u;
        // 0x194aec: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ae8) {
            ctx->pc = 0x194AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194ad0;
        }
    }
    ctx->pc = 0x194AF0u;
label_194af0:
    // 0x194af0: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x194af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_194af4:
    // 0x194af4: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x194af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_194af8:
    // 0x194af8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x194af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_194afc:
    // 0x194afc: 0x24849d80  addiu       $a0, $a0, -0x6280
    ctx->pc = 0x194afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942080));
label_194b00:
    // 0x194b00: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x194b00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_194b04:
    // 0x194b04: 0xde450270  ld          $a1, 0x270($s2)
    ctx->pc = 0x194b04u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 624)));
label_194b08:
    // 0x194b08: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x194b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_194b0c:
    // 0x194b0c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x194b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_194b10:
    // 0x194b10: 0xdc840000  ld          $a0, 0x0($a0)
    ctx->pc = 0x194b10u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_194b14:
    // 0x194b14: 0x24639d7a  addiu       $v1, $v1, -0x6286
    ctx->pc = 0x194b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942074));
label_194b18:
    // 0x194b18: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x194b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_194b1c:
    // 0x194b1c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x194b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_194b20:
    // 0x194b20: 0xfe440270  sd          $a0, 0x270($s2)
    ctx->pc = 0x194b20u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 624), GPR_U64(ctx, 4));
label_194b24:
    // 0x194b24: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x194b24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_194b28:
    // 0x194b28: 0x28a300ab  slti        $v1, $a1, 0xAB
    ctx->pc = 0x194b28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)171) ? 1 : 0);
label_194b2c:
    // 0x194b2c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_194b30:
    if (ctx->pc == 0x194B30u) {
        ctx->pc = 0x194B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B2Cu;
        // 0x194b30: 0x28a30082  slti        $v1, $a1, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B34u;
        goto label_194b34;
    }
    ctx->pc = 0x194B2Cu;
    {
        const bool branch_taken_0x194b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B2Cu;
        // 0x194b30: 0x28a30082  slti        $v1, $a1, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b2c) {
            ctx->pc = 0x194B4Cu;
            goto label_194b4c;
        }
    }
    ctx->pc = 0x194B34u;
label_194b34:
    // 0x194b34: 0x24a4ff55  addiu       $a0, $a1, -0xAB
    ctx->pc = 0x194b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967125));
label_194b38:
    // 0x194b38: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x194b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_194b3c:
    // 0x194b3c: 0x246352f0  addiu       $v1, $v1, 0x52F0
    ctx->pc = 0x194b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21232));
label_194b40:
    // 0x194b40: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x194b40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_194b44:
    // 0x194b44: 0x10000014  b           . + 4 + (0x14 << 2)
label_194b48:
    if (ctx->pc == 0x194B48u) {
        ctx->pc = 0x194B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B44u;
        // 0x194b48: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B4Cu;
        goto label_194b4c;
    }
    ctx->pc = 0x194B44u;
    {
        const bool branch_taken_0x194b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B44u;
        // 0x194b48: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b44) {
            ctx->pc = 0x194B98u;
            goto label_194b98;
        }
    }
    ctx->pc = 0x194B4Cu;
label_194b4c:
    // 0x194b4c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_194b50:
    if (ctx->pc == 0x194B50u) {
        ctx->pc = 0x194B54u;
        goto label_194b54;
    }
    ctx->pc = 0x194B4Cu;
    {
        const bool branch_taken_0x194b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194b4c) {
            ctx->pc = 0x194B5Cu;
            goto label_194b5c;
        }
    }
    ctx->pc = 0x194B54u;
label_194b54:
    // 0x194b54: 0x1000000c  b           . + 4 + (0xC << 2)
label_194b58:
    if (ctx->pc == 0x194B58u) {
        ctx->pc = 0x194B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B54u;
        // 0x194b58: 0x24a5ffd7  addiu       $a1, $a1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194B5Cu;
        goto label_194b5c;
    }
    ctx->pc = 0x194B54u;
    {
        const bool branch_taken_0x194b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194B54u;
        // 0x194b58: 0x24a5ffd7  addiu       $a1, $a1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b54) {
            ctx->pc = 0x194B88u;
            goto label_194b88;
        }
    }
    ctx->pc = 0x194B5Cu;
label_194b5c:
    // 0x194b5c: 0x28a30059  slti        $v1, $a1, 0x59
    ctx->pc = 0x194b5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)89) ? 1 : 0);
label_194b60:
    // 0x194b60: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_194b64:
    if (ctx->pc == 0x194B64u) {
        ctx->pc = 0x194B68u;
        goto label_194b68;
    }
    ctx->pc = 0x194B60u;
    {
        const bool branch_taken_0x194b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194b60) {
            ctx->pc = 0x194B88u;
            goto label_194b88;
        }
    }
    ctx->pc = 0x194B68u;
label_194b68:
    // 0x194b68: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x194b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_194b6c:
    // 0x194b6c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x194b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_194b70:
    // 0x194b70: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x194b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_194b74:
    // 0x194b74: 0x24639d72  addiu       $v1, $v1, -0x628E
    ctx->pc = 0x194b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942066));
label_194b78:
    // 0x194b78: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x194b78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_194b7c:
    // 0x194b7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194b80:
    // 0x194b80: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x194b80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_194b84:
    // 0x194b84: 0x0  nop
    ctx->pc = 0x194b84u;
    // NOP
label_194b88:
    // 0x194b88: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x194b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_194b8c:
    // 0x194b8c: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x194b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_194b90:
    // 0x194b90: 0x24633270  addiu       $v1, $v1, 0x3270
    ctx->pc = 0x194b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12912));
label_194b94:
    // 0x194b94: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x194b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194b98:
    // 0x194b98: 0xde450270  ld          $a1, 0x270($s2)
    ctx->pc = 0x194b98u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 624)));
label_194b9c:
    // 0x194b9c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x194b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_194ba0:
    // 0x194ba0: 0xdcc40030  ld          $a0, 0x30($a2)
    ctx->pc = 0x194ba0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 48)));
label_194ba4:
    // 0x194ba4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x194ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_194ba8:
    // 0x194ba8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x194ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_194bac:
    // 0x194bac: 0xfe440270  sd          $a0, 0x270($s2)
    ctx->pc = 0x194bacu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 624), GPR_U64(ctx, 4));
label_194bb0:
    // 0x194bb0: 0x84254af4  lh          $a1, 0x4AF4($at)
    ctx->pc = 0x194bb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_194bb4:
    // 0x194bb4: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_194bb8:
    if (ctx->pc == 0x194BB8u) {
        ctx->pc = 0x194BBCu;
        goto label_194bbc;
    }
    ctx->pc = 0x194BB4u;
    {
        const bool branch_taken_0x194bb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194bb4) {
            ctx->pc = 0x194BC8u;
            goto label_194bc8;
        }
    }
    ctx->pc = 0x194BBCu;
label_194bbc:
    // 0x194bbc: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x194bbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_194bc0:
    // 0x194bc0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_194bc4:
    if (ctx->pc == 0x194BC4u) {
        ctx->pc = 0x194BC8u;
        goto label_194bc8;
    }
    ctx->pc = 0x194BC0u;
    {
        const bool branch_taken_0x194bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194bc0) {
            ctx->pc = 0x194C0Cu;
            goto label_194c0c;
        }
    }
    ctx->pc = 0x194BC8u;
label_194bc8:
    // 0x194bc8: 0x92440234  lbu         $a0, 0x234($s2)
    ctx->pc = 0x194bc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 564)));
label_194bcc:
    // 0x194bcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194bd0:
    // 0x194bd0: 0x148300b5  bne         $a0, $v1, . + 4 + (0xB5 << 2)
label_194bd4:
    if (ctx->pc == 0x194BD4u) {
        ctx->pc = 0x194BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BD0u;
        // 0x194bd4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BD8u;
        goto label_194bd8;
    }
    ctx->pc = 0x194BD0u;
    {
        const bool branch_taken_0x194bd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x194BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BD0u;
        // 0x194bd4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194bd0) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194BD8u;
label_194bd8:
    // 0x194bd8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x194bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_194bdc:
    // 0x194bdc: 0x8c244afc  lw          $a0, 0x4AFC($at)
    ctx->pc = 0x194bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_194be0:
    // 0x194be0: 0x148300b1  bne         $a0, $v1, . + 4 + (0xB1 << 2)
label_194be4:
    if (ctx->pc == 0x194BE4u) {
        ctx->pc = 0x194BE8u;
        goto label_194be8;
    }
    ctx->pc = 0x194BE0u;
    {
        const bool branch_taken_0x194be0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x194be0) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194BE8u;
label_194be8:
    // 0x194be8: 0x92430242  lbu         $v1, 0x242($s2)
    ctx->pc = 0x194be8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 578)));
label_194bec:
    // 0x194bec: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x194becu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_194bf0:
    // 0x194bf0: 0x102000ad  beqz        $at, . + 4 + (0xAD << 2)
label_194bf4:
    if (ctx->pc == 0x194BF4u) {
        ctx->pc = 0x194BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BF0u;
        // 0x194bf4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BF8u;
        goto label_194bf8;
    }
    ctx->pc = 0x194BF0u;
    {
        const bool branch_taken_0x194bf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x194BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BF0u;
        // 0x194bf4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194bf0) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194BF8u;
label_194bf8:
    // 0x194bf8: 0x10a300ab  beq         $a1, $v1, . + 4 + (0xAB << 2)
label_194bfc:
    if (ctx->pc == 0x194BFCu) {
        ctx->pc = 0x194C00u;
        goto label_194c00;
    }
    ctx->pc = 0x194BF8u;
    {
        const bool branch_taken_0x194bf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194bf8) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194C00u;
label_194c00:
    // 0x194c00: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x194c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_194c04:
    // 0x194c04: 0x10a300a8  beq         $a1, $v1, . + 4 + (0xA8 << 2)
label_194c08:
    if (ctx->pc == 0x194C08u) {
        ctx->pc = 0x194C0Cu;
        goto label_194c0c;
    }
    ctx->pc = 0x194C04u;
    {
        const bool branch_taken_0x194c04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194c04) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194C0Cu;
label_194c0c:
    // 0x194c0c: 0x90c3003b  lbu         $v1, 0x3B($a2)
    ctx->pc = 0x194c0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 59)));
label_194c10:
    // 0x194c10: 0x9244024a  lbu         $a0, 0x24A($s2)
    ctx->pc = 0x194c10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 586)));
label_194c14:
    // 0x194c14: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x194c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_194c18:
    // 0x194c18: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x194c18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_194c1c:
    // 0x194c1c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_194c20:
    if (ctx->pc == 0x194C20u) {
        ctx->pc = 0x194C24u;
        goto label_194c24;
    }
    ctx->pc = 0x194C1Cu;
    {
        const bool branch_taken_0x194c1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x194c1c) {
            ctx->pc = 0x194C28u;
            goto label_194c28;
        }
    }
    ctx->pc = 0x194C24u;
label_194c24:
    // 0x194c24: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x194c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_194c28:
    // 0x194c28: 0x1000009f  b           . + 4 + (0x9F << 2)
label_194c2c:
    if (ctx->pc == 0x194C2Cu) {
        ctx->pc = 0x194C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C28u;
        // 0x194c2c: 0xa243024a  sb          $v1, 0x24A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C30u;
        goto label_194c30;
    }
    ctx->pc = 0x194C28u;
    {
        const bool branch_taken_0x194c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C28u;
        // 0x194c2c: 0xa243024a  sb          $v1, 0x24A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c28) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194C30u;
label_194c30:
    // 0x194c30: 0x1460005f  bnez        $v1, . + 4 + (0x5F << 2)
label_194c34:
    if (ctx->pc == 0x194C34u) {
        ctx->pc = 0x194C38u;
        goto label_194c38;
    }
    ctx->pc = 0x194C30u;
    {
        const bool branch_taken_0x194c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194c30) {
            ctx->pc = 0x194DB0u;
            goto label_194db0;
        }
    }
    ctx->pc = 0x194C38u;
label_194c38:
    // 0x194c38: 0x2624ffa7  addiu       $a0, $s1, -0x59
    ctx->pc = 0x194c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967207));
label_194c3c:
    // 0x194c3c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x194c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_194c40:
    // 0x194c40: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x194c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_194c44:
    // 0x194c44: 0x2442a5c0  addiu       $v0, $v0, -0x5A40
    ctx->pc = 0x194c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944192));
label_194c48:
    // 0x194c48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194c4c:
    // 0x194c4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x194c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194c50:
    // 0x194c50: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x194c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_194c54:
    // 0x194c54: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x194c54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_194c58:
    // 0x194c58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194c5c:
    // 0x194c5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x194c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_194c60:
    // 0x194c60: 0xc06542c  jal         func_1950B0
label_194c64:
    if (ctx->pc == 0x194C64u) {
        ctx->pc = 0x194C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C60u;
        // 0x194c64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C68u;
        goto label_194c68;
    }
    ctx->pc = 0x194C60u;
    SET_GPR_U32(ctx, 31, 0x194C68u);
    ctx->pc = 0x194C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C60u;
    // 0x194c64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1950B0u;
    { ctx->pc = 0x1950b0; return; }
    ctx->pc = 0x194C68u;
label_194c68:
    // 0x194c68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x194c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_194c6c:
    // 0x194c6c: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x194c6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_194c70:
    // 0x194c70: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_194c74:
    if (ctx->pc == 0x194C74u) {
        ctx->pc = 0x194C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C70u;
        // 0x194c74: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194C78u;
        goto label_194c78;
    }
    ctx->pc = 0x194C70u;
    {
        const bool branch_taken_0x194c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C70u;
        // 0x194c74: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c70) {
            ctx->pc = 0x194C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194c58;
        }
    }
    ctx->pc = 0x194C78u;
label_194c78:
    // 0x194c78: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x194c78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_194c7c:
    // 0x194c7c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x194c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_194c80:
    // 0x194c80: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x194c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_194c84:
    // 0x194c84: 0x24639d78  addiu       $v1, $v1, -0x6288
    ctx->pc = 0x194c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942072));
label_194c88:
    // 0x194c88: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x194c88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_194c8c:
    // 0x194c8c: 0xde460270  ld          $a2, 0x270($s2)
    ctx->pc = 0x194c8cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 624)));
label_194c90:
    // 0x194c90: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x194c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_194c94:
    // 0x194c94: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x194c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_194c98:
    // 0x194c98: 0xdca50000  ld          $a1, 0x0($a1)
    ctx->pc = 0x194c98u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_194c9c:
    // 0x194c9c: 0x24849d72  addiu       $a0, $a0, -0x628E
    ctx->pc = 0x194c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942066));
label_194ca0:
    // 0x194ca0: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x194ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_194ca4:
    // 0x194ca4: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x194ca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_194ca8:
    // 0x194ca8: 0xfe450270  sd          $a1, 0x270($s2)
    ctx->pc = 0x194ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 624), GPR_U64(ctx, 5));
label_194cac:
    // 0x194cac: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x194cacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_194cb0:
    // 0x194cb0: 0x28a300ab  slti        $v1, $a1, 0xAB
    ctx->pc = 0x194cb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)171) ? 1 : 0);
label_194cb4:
    // 0x194cb4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_194cb8:
    if (ctx->pc == 0x194CB8u) {
        ctx->pc = 0x194CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CB4u;
        // 0x194cb8: 0x28a30082  slti        $v1, $a1, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194CBCu;
        goto label_194cbc;
    }
    ctx->pc = 0x194CB4u;
    {
        const bool branch_taken_0x194cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CB4u;
        // 0x194cb8: 0x28a30082  slti        $v1, $a1, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194cb4) {
            ctx->pc = 0x194CD4u;
            goto label_194cd4;
        }
    }
    ctx->pc = 0x194CBCu;
label_194cbc:
    // 0x194cbc: 0x24a4ff55  addiu       $a0, $a1, -0xAB
    ctx->pc = 0x194cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967125));
label_194cc0:
    // 0x194cc0: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x194cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_194cc4:
    // 0x194cc4: 0x246352f0  addiu       $v1, $v1, 0x52F0
    ctx->pc = 0x194cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21232));
label_194cc8:
    // 0x194cc8: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x194cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_194ccc:
    // 0x194ccc: 0x10000012  b           . + 4 + (0x12 << 2)
label_194cd0:
    if (ctx->pc == 0x194CD0u) {
        ctx->pc = 0x194CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CCCu;
        // 0x194cd0: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194CD4u;
        goto label_194cd4;
    }
    ctx->pc = 0x194CCCu;
    {
        const bool branch_taken_0x194ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CCCu;
        // 0x194cd0: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ccc) {
            ctx->pc = 0x194D18u;
            goto label_194d18;
        }
    }
    ctx->pc = 0x194CD4u;
label_194cd4:
    // 0x194cd4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_194cd8:
    if (ctx->pc == 0x194CD8u) {
        ctx->pc = 0x194CDCu;
        goto label_194cdc;
    }
    ctx->pc = 0x194CD4u;
    {
        const bool branch_taken_0x194cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194cd4) {
            ctx->pc = 0x194CE4u;
            goto label_194ce4;
        }
    }
    ctx->pc = 0x194CDCu;
label_194cdc:
    // 0x194cdc: 0x1000000a  b           . + 4 + (0xA << 2)
label_194ce0:
    if (ctx->pc == 0x194CE0u) {
        ctx->pc = 0x194CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CDCu;
        // 0x194ce0: 0x24a5ffd7  addiu       $a1, $a1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194CE4u;
        goto label_194ce4;
    }
    ctx->pc = 0x194CDCu;
    {
        const bool branch_taken_0x194cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CDCu;
        // 0x194ce0: 0x24a5ffd7  addiu       $a1, $a1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194cdc) {
            ctx->pc = 0x194D08u;
            goto label_194d08;
        }
    }
    ctx->pc = 0x194CE4u;
label_194ce4:
    // 0x194ce4: 0x28a30059  slti        $v1, $a1, 0x59
    ctx->pc = 0x194ce4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)89) ? 1 : 0);
label_194ce8:
    // 0x194ce8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_194cec:
    if (ctx->pc == 0x194CECu) {
        ctx->pc = 0x194CF0u;
        goto label_194cf0;
    }
    ctx->pc = 0x194CE8u;
    {
        const bool branch_taken_0x194ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194ce8) {
            ctx->pc = 0x194D08u;
            goto label_194d08;
        }
    }
    ctx->pc = 0x194CF0u;
label_194cf0:
    // 0x194cf0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x194cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_194cf4:
    // 0x194cf4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x194cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_194cf8:
    // 0x194cf8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x194cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_194cfc:
    // 0x194cfc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x194cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_194d00:
    // 0x194d00: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x194d00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_194d04:
    // 0x194d04: 0x0  nop
    ctx->pc = 0x194d04u;
    // NOP
label_194d08:
    // 0x194d08: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x194d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_194d0c:
    // 0x194d0c: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x194d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_194d10:
    // 0x194d10: 0x24633270  addiu       $v1, $v1, 0x3270
    ctx->pc = 0x194d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12912));
label_194d14:
    // 0x194d14: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x194d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194d18:
    // 0x194d18: 0xde450270  ld          $a1, 0x270($s2)
    ctx->pc = 0x194d18u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 624)));
label_194d1c:
    // 0x194d1c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x194d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_194d20:
    // 0x194d20: 0xdcc40030  ld          $a0, 0x30($a2)
    ctx->pc = 0x194d20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 48)));
label_194d24:
    // 0x194d24: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x194d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_194d28:
    // 0x194d28: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x194d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_194d2c:
    // 0x194d2c: 0xfe440270  sd          $a0, 0x270($s2)
    ctx->pc = 0x194d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 624), GPR_U64(ctx, 4));
label_194d30:
    // 0x194d30: 0x84254af4  lh          $a1, 0x4AF4($at)
    ctx->pc = 0x194d30u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_194d34:
    // 0x194d34: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_194d38:
    if (ctx->pc == 0x194D38u) {
        ctx->pc = 0x194D3Cu;
        goto label_194d3c;
    }
    ctx->pc = 0x194D34u;
    {
        const bool branch_taken_0x194d34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194d34) {
            ctx->pc = 0x194D48u;
            goto label_194d48;
        }
    }
    ctx->pc = 0x194D3Cu;
label_194d3c:
    // 0x194d3c: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x194d3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_194d40:
    // 0x194d40: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_194d44:
    if (ctx->pc == 0x194D44u) {
        ctx->pc = 0x194D48u;
        goto label_194d48;
    }
    ctx->pc = 0x194D40u;
    {
        const bool branch_taken_0x194d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194d40) {
            ctx->pc = 0x194D8Cu;
            goto label_194d8c;
        }
    }
    ctx->pc = 0x194D48u;
label_194d48:
    // 0x194d48: 0x92440234  lbu         $a0, 0x234($s2)
    ctx->pc = 0x194d48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 564)));
label_194d4c:
    // 0x194d4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194d50:
    // 0x194d50: 0x14830055  bne         $a0, $v1, . + 4 + (0x55 << 2)
label_194d54:
    if (ctx->pc == 0x194D54u) {
        ctx->pc = 0x194D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D50u;
        // 0x194d54: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D58u;
        goto label_194d58;
    }
    ctx->pc = 0x194D50u;
    {
        const bool branch_taken_0x194d50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x194D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D50u;
        // 0x194d54: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d50) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194D58u;
label_194d58:
    // 0x194d58: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x194d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_194d5c:
    // 0x194d5c: 0x8c244afc  lw          $a0, 0x4AFC($at)
    ctx->pc = 0x194d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_194d60:
    // 0x194d60: 0x14830051  bne         $a0, $v1, . + 4 + (0x51 << 2)
label_194d64:
    if (ctx->pc == 0x194D64u) {
        ctx->pc = 0x194D68u;
        goto label_194d68;
    }
    ctx->pc = 0x194D60u;
    {
        const bool branch_taken_0x194d60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x194d60) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194D68u;
label_194d68:
    // 0x194d68: 0x92430242  lbu         $v1, 0x242($s2)
    ctx->pc = 0x194d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 578)));
label_194d6c:
    // 0x194d6c: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x194d6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_194d70:
    // 0x194d70: 0x1020004d  beqz        $at, . + 4 + (0x4D << 2)
label_194d74:
    if (ctx->pc == 0x194D74u) {
        ctx->pc = 0x194D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D70u;
        // 0x194d74: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D78u;
        goto label_194d78;
    }
    ctx->pc = 0x194D70u;
    {
        const bool branch_taken_0x194d70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D70u;
        // 0x194d74: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d70) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194D78u;
label_194d78:
    // 0x194d78: 0x10a3004b  beq         $a1, $v1, . + 4 + (0x4B << 2)
label_194d7c:
    if (ctx->pc == 0x194D7Cu) {
        ctx->pc = 0x194D80u;
        goto label_194d80;
    }
    ctx->pc = 0x194D78u;
    {
        const bool branch_taken_0x194d78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194d78) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194D80u;
label_194d80:
    // 0x194d80: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x194d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_194d84:
    // 0x194d84: 0x10a30048  beq         $a1, $v1, . + 4 + (0x48 << 2)
label_194d88:
    if (ctx->pc == 0x194D88u) {
        ctx->pc = 0x194D8Cu;
        goto label_194d8c;
    }
    ctx->pc = 0x194D84u;
    {
        const bool branch_taken_0x194d84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194d84) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194D8Cu;
label_194d8c:
    // 0x194d8c: 0x90c3003b  lbu         $v1, 0x3B($a2)
    ctx->pc = 0x194d8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 59)));
label_194d90:
    // 0x194d90: 0x9244024a  lbu         $a0, 0x24A($s2)
    ctx->pc = 0x194d90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 586)));
label_194d94:
    // 0x194d94: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x194d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_194d98:
    // 0x194d98: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x194d98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_194d9c:
    // 0x194d9c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_194da0:
    if (ctx->pc == 0x194DA0u) {
        ctx->pc = 0x194DA4u;
        goto label_194da4;
    }
    ctx->pc = 0x194D9Cu;
    {
        const bool branch_taken_0x194d9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x194d9c) {
            ctx->pc = 0x194DA8u;
            goto label_194da8;
        }
    }
    ctx->pc = 0x194DA4u;
label_194da4:
    // 0x194da4: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x194da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_194da8:
    // 0x194da8: 0x1000003f  b           . + 4 + (0x3F << 2)
label_194dac:
    if (ctx->pc == 0x194DACu) {
        ctx->pc = 0x194DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DA8u;
        // 0x194dac: 0xa243024a  sb          $v1, 0x24A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194DB0u;
        goto label_194db0;
    }
    ctx->pc = 0x194DA8u;
    {
        const bool branch_taken_0x194da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DA8u;
        // 0x194dac: 0xa243024a  sb          $v1, 0x24A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194da8) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194DB0u;
label_194db0:
    // 0x194db0: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_194db4:
    if (ctx->pc == 0x194DB4u) {
        ctx->pc = 0x194DB8u;
        goto label_194db8;
    }
    ctx->pc = 0x194DB0u;
    {
        const bool branch_taken_0x194db0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x194db0) {
            ctx->pc = 0x194DD0u;
            goto label_194dd0;
        }
    }
    ctx->pc = 0x194DB8u;
label_194db8:
    // 0x194db8: 0x2624ff55  addiu       $a0, $s1, -0xAB
    ctx->pc = 0x194db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967125));
label_194dbc:
    // 0x194dbc: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x194dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_194dc0:
    // 0x194dc0: 0x246352f0  addiu       $v1, $v1, 0x52F0
    ctx->pc = 0x194dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21232));
label_194dc4:
    // 0x194dc4: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x194dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_194dc8:
    // 0x194dc8: 0x10000012  b           . + 4 + (0x12 << 2)
label_194dcc:
    if (ctx->pc == 0x194DCCu) {
        ctx->pc = 0x194DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DC8u;
        // 0x194dcc: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194DD0u;
        goto label_194dd0;
    }
    ctx->pc = 0x194DC8u;
    {
        const bool branch_taken_0x194dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DC8u;
        // 0x194dcc: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194dc8) {
            ctx->pc = 0x194E14u;
            goto label_194e14;
        }
    }
    ctx->pc = 0x194DD0u;
label_194dd0:
    // 0x194dd0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_194dd4:
    if (ctx->pc == 0x194DD4u) {
        ctx->pc = 0x194DD8u;
        goto label_194dd8;
    }
    ctx->pc = 0x194DD0u;
    {
        const bool branch_taken_0x194dd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x194dd0) {
            ctx->pc = 0x194DE0u;
            goto label_194de0;
        }
    }
    ctx->pc = 0x194DD8u;
label_194dd8:
    // 0x194dd8: 0x1000000a  b           . + 4 + (0xA << 2)
label_194ddc:
    if (ctx->pc == 0x194DDCu) {
        ctx->pc = 0x194DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DD8u;
        // 0x194ddc: 0x2631ffd7  addiu       $s1, $s1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194DE0u;
        goto label_194de0;
    }
    ctx->pc = 0x194DD8u;
    {
        const bool branch_taken_0x194dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DD8u;
        // 0x194ddc: 0x2631ffd7  addiu       $s1, $s1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194dd8) {
            ctx->pc = 0x194E04u;
            goto label_194e04;
        }
    }
    ctx->pc = 0x194DE0u;
label_194de0:
    // 0x194de0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_194de4:
    if (ctx->pc == 0x194DE4u) {
        ctx->pc = 0x194DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DE0u;
        // 0x194de4: 0x112040  sll         $a0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194DE8u;
        goto label_194de8;
    }
    ctx->pc = 0x194DE0u;
    {
        const bool branch_taken_0x194de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DE0u;
        // 0x194de4: 0x112040  sll         $a0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194de0) {
            ctx->pc = 0x194E04u;
            goto label_194e04;
        }
    }
    ctx->pc = 0x194DE8u;
label_194de8:
    // 0x194de8: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x194de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_194dec:
    // 0x194dec: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x194decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_194df0:
    // 0x194df0: 0x24639d72  addiu       $v1, $v1, -0x628E
    ctx->pc = 0x194df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942066));
label_194df4:
    // 0x194df4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x194df4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_194df8:
    // 0x194df8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194dfc:
    // 0x194dfc: 0x90710000  lbu         $s1, 0x0($v1)
    ctx->pc = 0x194dfcu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_194e00:
    // 0x194e00: 0x0  nop
    ctx->pc = 0x194e00u;
    // NOP
label_194e04:
    // 0x194e04: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x194e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_194e08:
    // 0x194e08: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x194e08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_194e0c:
    // 0x194e0c: 0x24633270  addiu       $v1, $v1, 0x3270
    ctx->pc = 0x194e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12912));
label_194e10:
    // 0x194e10: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x194e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194e14:
    // 0x194e14: 0xde450270  ld          $a1, 0x270($s2)
    ctx->pc = 0x194e14u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 624)));
label_194e18:
    // 0x194e18: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x194e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_194e1c:
    // 0x194e1c: 0xdcc40030  ld          $a0, 0x30($a2)
    ctx->pc = 0x194e1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 48)));
label_194e20:
    // 0x194e20: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x194e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_194e24:
    // 0x194e24: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x194e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_194e28:
    // 0x194e28: 0xfe440270  sd          $a0, 0x270($s2)
    ctx->pc = 0x194e28u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 624), GPR_U64(ctx, 4));
label_194e2c:
    // 0x194e2c: 0x84254af4  lh          $a1, 0x4AF4($at)
    ctx->pc = 0x194e2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_194e30:
    // 0x194e30: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_194e34:
    if (ctx->pc == 0x194E34u) {
        ctx->pc = 0x194E38u;
        goto label_194e38;
    }
    ctx->pc = 0x194E30u;
    {
        const bool branch_taken_0x194e30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194e30) {
            ctx->pc = 0x194E44u;
            goto label_194e44;
        }
    }
    ctx->pc = 0x194E38u;
label_194e38:
    // 0x194e38: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x194e38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_194e3c:
    // 0x194e3c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_194e40:
    if (ctx->pc == 0x194E40u) {
        ctx->pc = 0x194E44u;
        goto label_194e44;
    }
    ctx->pc = 0x194E3Cu;
    {
        const bool branch_taken_0x194e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194e3c) {
            ctx->pc = 0x194E88u;
            goto label_194e88;
        }
    }
    ctx->pc = 0x194E44u;
label_194e44:
    // 0x194e44: 0x92440234  lbu         $a0, 0x234($s2)
    ctx->pc = 0x194e44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 564)));
label_194e48:
    // 0x194e48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194e4c:
    // 0x194e4c: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
label_194e50:
    if (ctx->pc == 0x194E50u) {
        ctx->pc = 0x194E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E4Cu;
        // 0x194e50: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E54u;
        goto label_194e54;
    }
    ctx->pc = 0x194E4Cu;
    {
        const bool branch_taken_0x194e4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x194E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E4Cu;
        // 0x194e50: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e4c) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194E54u;
label_194e54:
    // 0x194e54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x194e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_194e58:
    // 0x194e58: 0x8c244afc  lw          $a0, 0x4AFC($at)
    ctx->pc = 0x194e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_194e5c:
    // 0x194e5c: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
label_194e60:
    if (ctx->pc == 0x194E60u) {
        ctx->pc = 0x194E64u;
        goto label_194e64;
    }
    ctx->pc = 0x194E5Cu;
    {
        const bool branch_taken_0x194e5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x194e5c) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194E64u;
label_194e64:
    // 0x194e64: 0x92430242  lbu         $v1, 0x242($s2)
    ctx->pc = 0x194e64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 578)));
label_194e68:
    // 0x194e68: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x194e68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_194e6c:
    // 0x194e6c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_194e70:
    if (ctx->pc == 0x194E70u) {
        ctx->pc = 0x194E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E6Cu;
        // 0x194e70: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E74u;
        goto label_194e74;
    }
    ctx->pc = 0x194E6Cu;
    {
        const bool branch_taken_0x194e6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x194E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E6Cu;
        // 0x194e70: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e6c) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194E74u;
label_194e74:
    // 0x194e74: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_194e78:
    if (ctx->pc == 0x194E78u) {
        ctx->pc = 0x194E7Cu;
        goto label_194e7c;
    }
    ctx->pc = 0x194E74u;
    {
        const bool branch_taken_0x194e74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194e74) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194E7Cu;
label_194e7c:
    // 0x194e7c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x194e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_194e80:
    // 0x194e80: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_194e84:
    if (ctx->pc == 0x194E84u) {
        ctx->pc = 0x194E88u;
        goto label_194e88;
    }
    ctx->pc = 0x194E80u;
    {
        const bool branch_taken_0x194e80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194e80) {
            ctx->pc = 0x194EA8u;
            goto label_194ea8;
        }
    }
    ctx->pc = 0x194E88u;
label_194e88:
    // 0x194e88: 0x90c3003b  lbu         $v1, 0x3B($a2)
    ctx->pc = 0x194e88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 59)));
label_194e8c:
    // 0x194e8c: 0x9244024a  lbu         $a0, 0x24A($s2)
    ctx->pc = 0x194e8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 586)));
label_194e90:
    // 0x194e90: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x194e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_194e94:
    // 0x194e94: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x194e94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_194e98:
    // 0x194e98: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_194e9c:
    if (ctx->pc == 0x194E9Cu) {
        ctx->pc = 0x194EA0u;
        goto label_194ea0;
    }
    ctx->pc = 0x194E98u;
    {
        const bool branch_taken_0x194e98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x194e98) {
            ctx->pc = 0x194EA4u;
            goto label_194ea4;
        }
    }
    ctx->pc = 0x194EA0u;
label_194ea0:
    // 0x194ea0: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x194ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_194ea4:
    // 0x194ea4: 0xa243024a  sb          $v1, 0x24A($s2)
    ctx->pc = 0x194ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 586), (uint8_t)GPR_U32(ctx, 3));
label_194ea8:
    // 0x194ea8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x194ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_194eac:
    // 0x194eac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x194eacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_194eb0:
    // 0x194eb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x194eb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_194eb4:
    // 0x194eb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_194eb8:
    // 0x194eb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_194ebc:
    // 0x194ebc: 0x3e00008  jr          $ra
label_194ec0:
    if (ctx->pc == 0x194EC0u) {
        ctx->pc = 0x194EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EBCu;
        // 0x194ec0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194EC4u;
        goto label_194ec4;
    }
    ctx->pc = 0x194EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EBCu;
        // 0x194ec0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194EC4u;
label_194ec4:
    // 0x194ec4: 0x0  nop
    ctx->pc = 0x194ec4u;
    // NOP
label_194ec8:
    // 0x194ec8: 0x0  nop
    ctx->pc = 0x194ec8u;
    // NOP
label_194ecc:
    // 0x194ecc: 0x0  nop
    ctx->pc = 0x194eccu;
    // NOP
label_194ed0:
    // 0x194ed0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x194ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_194ed4:
    // 0x194ed4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x194ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_194ed8:
    // 0x194ed8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x194ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_194edc:
    // 0x194edc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x194edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_194ee0:
    // 0x194ee0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x194ee0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194ee4:
    // 0x194ee4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x194ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_194ee8:
    // 0x194ee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_194eec:
    // 0x194eec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x194eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_194ef0:
    // 0x194ef0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_194ef4:
    // 0x194ef4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x194ef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_194ef8:
    // 0x194ef8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x194ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_194efc:
    // 0x194efc: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x194efcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_194f00:
    // 0x194f00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194f04:
    // 0x194f04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x194f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_194f08:
    // 0x194f08: 0xc06542c  jal         func_1950B0
label_194f0c:
    if (ctx->pc == 0x194F0Cu) {
        ctx->pc = 0x194F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F08u;
        // 0x194f0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F10u;
        goto label_194f10;
    }
    ctx->pc = 0x194F08u;
    SET_GPR_U32(ctx, 31, 0x194F10u);
    ctx->pc = 0x194F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F08u;
    // 0x194f0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1950B0u;
    { ctx->pc = 0x1950b0; return; }
    ctx->pc = 0x194F10u;
label_194f10:
    // 0x194f10: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x194f10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_194f14:
    // 0x194f14: 0x2a830005  slti        $v1, $s4, 0x5
    ctx->pc = 0x194f14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
label_194f18:
    // 0x194f18: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_194f1c:
    if (ctx->pc == 0x194F1Cu) {
        ctx->pc = 0x194F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F18u;
        // 0x194f1c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F20u;
        goto label_194f20;
    }
    ctx->pc = 0x194F18u;
    {
        const bool branch_taken_0x194f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F18u;
        // 0x194f1c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f18) {
            ctx->pc = 0x194F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194f00;
        }
    }
    ctx->pc = 0x194F20u;
label_194f20:
    // 0x194f20: 0xde440270  ld          $a0, 0x270($s2)
    ctx->pc = 0x194f20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 624)));
label_194f24:
    // 0x194f24: 0xde230010  ld          $v1, 0x10($s1)
    ctx->pc = 0x194f24u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_194f28:
    // 0x194f28: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x194f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_194f2c:
    // 0x194f2c: 0x16000044  bnez        $s0, . + 4 + (0x44 << 2)
label_194f30:
    if (ctx->pc == 0x194F30u) {
        ctx->pc = 0x194F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F2Cu;
        // 0x194f30: 0xfe430270  sd          $v1, 0x270($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 624), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F34u;
        goto label_194f34;
    }
    ctx->pc = 0x194F2Cu;
    {
        const bool branch_taken_0x194f2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x194F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F2Cu;
        // 0x194f30: 0xfe430270  sd          $v1, 0x270($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 624), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f2c) {
            ctx->pc = 0x195040u;
            goto label_195040;
        }
    }
    ctx->pc = 0x194F34u;
label_194f34:
    // 0x194f34: 0x9225000a  lbu         $a1, 0xA($s1)
    ctx->pc = 0x194f34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
label_194f38:
    // 0x194f38: 0x28a300ab  slti        $v1, $a1, 0xAB
    ctx->pc = 0x194f38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)171) ? 1 : 0);
label_194f3c:
    // 0x194f3c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_194f40:
    if (ctx->pc == 0x194F40u) {
        ctx->pc = 0x194F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F3Cu;
        // 0x194f40: 0x28a30082  slti        $v1, $a1, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F44u;
        goto label_194f44;
    }
    ctx->pc = 0x194F3Cu;
    {
        const bool branch_taken_0x194f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F3Cu;
        // 0x194f40: 0x28a30082  slti        $v1, $a1, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f3c) {
            ctx->pc = 0x194F5Cu;
            goto label_194f5c;
        }
    }
    ctx->pc = 0x194F44u;
label_194f44:
    // 0x194f44: 0x24a4ff55  addiu       $a0, $a1, -0xAB
    ctx->pc = 0x194f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967125));
label_194f48:
    // 0x194f48: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x194f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_194f4c:
    // 0x194f4c: 0x246352f0  addiu       $v1, $v1, 0x52F0
    ctx->pc = 0x194f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21232));
label_194f50:
    // 0x194f50: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x194f50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_194f54:
    // 0x194f54: 0x10000014  b           . + 4 + (0x14 << 2)
label_194f58:
    if (ctx->pc == 0x194F58u) {
        ctx->pc = 0x194F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F54u;
        // 0x194f58: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F5Cu;
        goto label_194f5c;
    }
    ctx->pc = 0x194F54u;
    {
        const bool branch_taken_0x194f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F54u;
        // 0x194f58: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f54) {
            ctx->pc = 0x194FA8u;
            goto label_194fa8;
        }
    }
    ctx->pc = 0x194F5Cu;
label_194f5c:
    // 0x194f5c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_194f60:
    if (ctx->pc == 0x194F60u) {
        ctx->pc = 0x194F64u;
        goto label_194f64;
    }
    ctx->pc = 0x194F5Cu;
    {
        const bool branch_taken_0x194f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194f5c) {
            ctx->pc = 0x194F6Cu;
            goto label_194f6c;
        }
    }
    ctx->pc = 0x194F64u;
label_194f64:
    // 0x194f64: 0x1000000c  b           . + 4 + (0xC << 2)
label_194f68:
    if (ctx->pc == 0x194F68u) {
        ctx->pc = 0x194F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F64u;
        // 0x194f68: 0x24a5ffd7  addiu       $a1, $a1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194F6Cu;
        goto label_194f6c;
    }
    ctx->pc = 0x194F64u;
    {
        const bool branch_taken_0x194f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F64u;
        // 0x194f68: 0x24a5ffd7  addiu       $a1, $a1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f64) {
            ctx->pc = 0x194F98u;
            goto label_194f98;
        }
    }
    ctx->pc = 0x194F6Cu;
label_194f6c:
    // 0x194f6c: 0x28a30059  slti        $v1, $a1, 0x59
    ctx->pc = 0x194f6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)89) ? 1 : 0);
label_194f70:
    // 0x194f70: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_194f74:
    if (ctx->pc == 0x194F74u) {
        ctx->pc = 0x194F78u;
        goto label_194f78;
    }
    ctx->pc = 0x194F70u;
    {
        const bool branch_taken_0x194f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194f70) {
            ctx->pc = 0x194F98u;
            goto label_194f98;
        }
    }
    ctx->pc = 0x194F78u;
label_194f78:
    // 0x194f78: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x194f78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_194f7c:
    // 0x194f7c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x194f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_194f80:
    // 0x194f80: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x194f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_194f84:
    // 0x194f84: 0x24639d72  addiu       $v1, $v1, -0x628E
    ctx->pc = 0x194f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942066));
label_194f88:
    // 0x194f88: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x194f88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_194f8c:
    // 0x194f8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194f90:
    // 0x194f90: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x194f90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_194f94:
    // 0x194f94: 0x0  nop
    ctx->pc = 0x194f94u;
    // NOP
label_194f98:
    // 0x194f98: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x194f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_194f9c:
    // 0x194f9c: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x194f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_194fa0:
    // 0x194fa0: 0x24633270  addiu       $v1, $v1, 0x3270
    ctx->pc = 0x194fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12912));
label_194fa4:
    // 0x194fa4: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x194fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194fa8:
    // 0x194fa8: 0xde450270  ld          $a1, 0x270($s2)
    ctx->pc = 0x194fa8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 624)));
label_194fac:
    // 0x194fac: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x194facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_194fb0:
    // 0x194fb0: 0xdcc40030  ld          $a0, 0x30($a2)
    ctx->pc = 0x194fb0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 48)));
label_194fb4:
    // 0x194fb4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x194fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_194fb8:
    // 0x194fb8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x194fb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_194fbc:
    // 0x194fbc: 0xfe440270  sd          $a0, 0x270($s2)
    ctx->pc = 0x194fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 624), GPR_U64(ctx, 4));
label_194fc0:
    // 0x194fc0: 0x84254af4  lh          $a1, 0x4AF4($at)
    ctx->pc = 0x194fc0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_194fc4:
    // 0x194fc4: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_194fc8:
    if (ctx->pc == 0x194FC8u) {
        ctx->pc = 0x194FCCu;
        goto label_194fcc;
    }
    ctx->pc = 0x194FC4u;
    {
        const bool branch_taken_0x194fc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x194fc4) {
            ctx->pc = 0x194FD8u;
            goto label_194fd8;
        }
    }
    ctx->pc = 0x194FCCu;
label_194fcc:
    // 0x194fcc: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x194fccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_194fd0:
    // 0x194fd0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_194fd4:
    if (ctx->pc == 0x194FD4u) {
        ctx->pc = 0x194FD8u;
        goto label_194fd8;
    }
    ctx->pc = 0x194FD0u;
    {
        const bool branch_taken_0x194fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194fd0) {
            ctx->pc = 0x19501Cu;
            goto label_19501c;
        }
    }
    ctx->pc = 0x194FD8u;
label_194fd8:
    // 0x194fd8: 0x92440234  lbu         $a0, 0x234($s2)
    ctx->pc = 0x194fd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 564)));
label_194fdc:
    // 0x194fdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194fe0:
    // 0x194fe0: 0x14830028  bne         $a0, $v1, . + 4 + (0x28 << 2)
label_194fe4:
    if (ctx->pc == 0x194FE4u) {
        ctx->pc = 0x194FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FE0u;
        // 0x194fe4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194FE8u;
        goto label_194fe8;
    }
    ctx->pc = 0x194FE0u;
    {
        const bool branch_taken_0x194fe0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x194FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FE0u;
        // 0x194fe4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194fe0) {
            ctx->pc = 0x195084u;
            goto label_195084;
        }
    }
    ctx->pc = 0x194FE8u;
label_194fe8:
    // 0x194fe8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x194fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_194fec:
    // 0x194fec: 0x8c244afc  lw          $a0, 0x4AFC($at)
    ctx->pc = 0x194fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_194ff0:
    // 0x194ff0: 0x14830024  bne         $a0, $v1, . + 4 + (0x24 << 2)
label_194ff4:
    if (ctx->pc == 0x194FF4u) {
        ctx->pc = 0x194FF8u;
        goto label_194ff8;
    }
    ctx->pc = 0x194FF0u;
    {
        const bool branch_taken_0x194ff0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x194ff0) {
            ctx->pc = 0x195084u;
            goto label_195084;
        }
    }
    ctx->pc = 0x194FF8u;
label_194ff8:
    // 0x194ff8: 0x92430242  lbu         $v1, 0x242($s2)
    ctx->pc = 0x194ff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 578)));
label_194ffc:
    // 0x194ffc: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x194ffcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_195000:
    // 0x195000: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_195004:
    if (ctx->pc == 0x195004u) {
        ctx->pc = 0x195004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195000u;
        // 0x195004: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195008u;
        goto label_195008;
    }
    ctx->pc = 0x195000u;
    {
        const bool branch_taken_0x195000 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x195004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195000u;
        // 0x195004: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195000) {
            ctx->pc = 0x195084u;
            goto label_195084;
        }
    }
    ctx->pc = 0x195008u;
label_195008:
    // 0x195008: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
label_19500c:
    if (ctx->pc == 0x19500Cu) {
        ctx->pc = 0x195010u;
        goto label_195010;
    }
    ctx->pc = 0x195008u;
    {
        const bool branch_taken_0x195008 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x195008) {
            ctx->pc = 0x195084u;
            goto label_195084;
        }
    }
    ctx->pc = 0x195010u;
label_195010:
    // 0x195010: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x195010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_195014:
    // 0x195014: 0x10a3001b  beq         $a1, $v1, . + 4 + (0x1B << 2)
label_195018:
    if (ctx->pc == 0x195018u) {
        ctx->pc = 0x19501Cu;
        goto label_19501c;
    }
    ctx->pc = 0x195014u;
    {
        const bool branch_taken_0x195014 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x195014) {
            ctx->pc = 0x195084u;
            goto label_195084;
        }
    }
    ctx->pc = 0x19501Cu;
label_19501c:
    // 0x19501c: 0x90c3003b  lbu         $v1, 0x3B($a2)
    ctx->pc = 0x19501cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 59)));
label_195020:
    // 0x195020: 0x9244024a  lbu         $a0, 0x24A($s2)
    ctx->pc = 0x195020u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 586)));
label_195024:
    // 0x195024: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x195024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_195028:
    // 0x195028: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x195028u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_19502c:
    // 0x19502c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_195030:
    if (ctx->pc == 0x195030u) {
        ctx->pc = 0x195034u;
        goto label_195034;
    }
    ctx->pc = 0x19502Cu;
    {
        const bool branch_taken_0x19502c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19502c) {
            ctx->pc = 0x195038u;
            goto label_195038;
        }
    }
    ctx->pc = 0x195034u;
label_195034:
    // 0x195034: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x195034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_195038:
    // 0x195038: 0x10000012  b           . + 4 + (0x12 << 2)
label_19503c:
    if (ctx->pc == 0x19503Cu) {
        ctx->pc = 0x19503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195038u;
        // 0x19503c: 0xa243024a  sb          $v1, 0x24A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195040u;
        goto label_195040;
    }
    ctx->pc = 0x195038u;
    {
        const bool branch_taken_0x195038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195038u;
        // 0x19503c: 0xa243024a  sb          $v1, 0x24A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195038) {
            ctx->pc = 0x195084u;
            goto label_195084;
        }
    }
    ctx->pc = 0x195040u;
label_195040:
    // 0x195040: 0x9225000b  lbu         $a1, 0xB($s1)
    ctx->pc = 0x195040u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
label_195044:
    // 0x195044: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x195044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_195048:
    // 0x195048: 0x24635370  addiu       $v1, $v1, 0x5370
    ctx->pc = 0x195048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21360));
label_19504c:
    // 0x19504c: 0xde440270  ld          $a0, 0x270($s2)
    ctx->pc = 0x19504cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 624)));
label_195050:
    // 0x195050: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x195050u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_195054:
    // 0x195054: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x195054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_195058:
    // 0x195058: 0xdca30030  ld          $v1, 0x30($a1)
    ctx->pc = 0x195058u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 48)));
label_19505c:
    // 0x19505c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x19505cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_195060:
    // 0x195060: 0xfe430270  sd          $v1, 0x270($s2)
    ctx->pc = 0x195060u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 624), GPR_U64(ctx, 3));
label_195064:
    // 0x195064: 0x90a3003b  lbu         $v1, 0x3B($a1)
    ctx->pc = 0x195064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 59)));
label_195068:
    // 0x195068: 0x9244024a  lbu         $a0, 0x24A($s2)
    ctx->pc = 0x195068u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 586)));
label_19506c:
    // 0x19506c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19506cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_195070:
    // 0x195070: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x195070u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_195074:
    // 0x195074: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_195078:
    if (ctx->pc == 0x195078u) {
        ctx->pc = 0x19507Cu;
        goto label_19507c;
    }
    ctx->pc = 0x195074u;
    {
        const bool branch_taken_0x195074 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195074) {
            ctx->pc = 0x195080u;
            goto label_195080;
        }
    }
    ctx->pc = 0x19507Cu;
label_19507c:
    // 0x19507c: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x19507cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_195080:
    // 0x195080: 0xa243024a  sb          $v1, 0x24A($s2)
    ctx->pc = 0x195080u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 586), (uint8_t)GPR_U32(ctx, 3));
label_195084:
    // 0x195084: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x195084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_195088:
    // 0x195088: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x195088u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19508c:
    // 0x19508c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19508cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_195090:
    // 0x195090: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x195090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_195094:
    // 0x195094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_195098:
    // 0x195098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19509c:
    // 0x19509c: 0x3e00008  jr          $ra
    ctx->pc = 0x1950a0u;
    return;
}
