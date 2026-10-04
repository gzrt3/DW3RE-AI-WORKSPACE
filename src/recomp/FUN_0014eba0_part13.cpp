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


void FUN_0014eba0_part13(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x154960u: goto label_154960;
        case 0x154964u: goto label_154964;
        case 0x154968u: goto label_154968;
        case 0x15496cu: goto label_15496c;
        case 0x154970u: goto label_154970;
        case 0x154974u: goto label_154974;
        case 0x154978u: goto label_154978;
        case 0x15497cu: goto label_15497c;
        case 0x154980u: goto label_154980;
        case 0x154984u: goto label_154984;
        case 0x154988u: goto label_154988;
        case 0x15498cu: goto label_15498c;
        case 0x154990u: goto label_154990;
        case 0x154994u: goto label_154994;
        case 0x154998u: goto label_154998;
        case 0x15499cu: goto label_15499c;
        case 0x1549a0u: goto label_1549a0;
        case 0x1549a4u: goto label_1549a4;
        case 0x1549a8u: goto label_1549a8;
        case 0x1549acu: goto label_1549ac;
        case 0x1549b0u: goto label_1549b0;
        case 0x1549b4u: goto label_1549b4;
        case 0x1549b8u: goto label_1549b8;
        case 0x1549bcu: goto label_1549bc;
        case 0x1549c0u: goto label_1549c0;
        case 0x1549c4u: goto label_1549c4;
        case 0x1549c8u: goto label_1549c8;
        case 0x1549ccu: goto label_1549cc;
        case 0x1549d0u: goto label_1549d0;
        case 0x1549d4u: goto label_1549d4;
        case 0x1549d8u: goto label_1549d8;
        case 0x1549dcu: goto label_1549dc;
        case 0x1549e0u: goto label_1549e0;
        case 0x1549e4u: goto label_1549e4;
        case 0x1549e8u: goto label_1549e8;
        case 0x1549ecu: goto label_1549ec;
        case 0x1549f0u: goto label_1549f0;
        case 0x1549f4u: goto label_1549f4;
        case 0x1549f8u: goto label_1549f8;
        case 0x1549fcu: goto label_1549fc;
        case 0x154a00u: goto label_154a00;
        case 0x154a04u: goto label_154a04;
        case 0x154a08u: goto label_154a08;
        case 0x154a0cu: goto label_154a0c;
        case 0x154a10u: goto label_154a10;
        case 0x154a14u: goto label_154a14;
        case 0x154a18u: goto label_154a18;
        case 0x154a1cu: goto label_154a1c;
        case 0x154a20u: goto label_154a20;
        case 0x154a24u: goto label_154a24;
        case 0x154a28u: goto label_154a28;
        case 0x154a2cu: goto label_154a2c;
        case 0x154a30u: goto label_154a30;
        case 0x154a34u: goto label_154a34;
        case 0x154a38u: goto label_154a38;
        case 0x154a3cu: goto label_154a3c;
        case 0x154a40u: goto label_154a40;
        case 0x154a44u: goto label_154a44;
        case 0x154a48u: goto label_154a48;
        case 0x154a4cu: goto label_154a4c;
        case 0x154a50u: goto label_154a50;
        case 0x154a54u: goto label_154a54;
        case 0x154a58u: goto label_154a58;
        case 0x154a5cu: goto label_154a5c;
        case 0x154a60u: goto label_154a60;
        case 0x154a64u: goto label_154a64;
        case 0x154a68u: goto label_154a68;
        case 0x154a6cu: goto label_154a6c;
        case 0x154a70u: goto label_154a70;
        case 0x154a74u: goto label_154a74;
        case 0x154a78u: goto label_154a78;
        case 0x154a7cu: goto label_154a7c;
        case 0x154a80u: goto label_154a80;
        case 0x154a84u: goto label_154a84;
        case 0x154a88u: goto label_154a88;
        case 0x154a8cu: goto label_154a8c;
        case 0x154a90u: goto label_154a90;
        case 0x154a94u: goto label_154a94;
        case 0x154a98u: goto label_154a98;
        case 0x154a9cu: goto label_154a9c;
        case 0x154aa0u: goto label_154aa0;
        case 0x154aa4u: goto label_154aa4;
        case 0x154aa8u: goto label_154aa8;
        case 0x154aacu: goto label_154aac;
        case 0x154ab0u: goto label_154ab0;
        case 0x154ab4u: goto label_154ab4;
        case 0x154ab8u: goto label_154ab8;
        case 0x154abcu: goto label_154abc;
        case 0x154ac0u: goto label_154ac0;
        case 0x154ac4u: goto label_154ac4;
        case 0x154ac8u: goto label_154ac8;
        case 0x154accu: goto label_154acc;
        case 0x154ad0u: goto label_154ad0;
        case 0x154ad4u: goto label_154ad4;
        case 0x154ad8u: goto label_154ad8;
        case 0x154adcu: goto label_154adc;
        case 0x154ae0u: goto label_154ae0;
        case 0x154ae4u: goto label_154ae4;
        case 0x154ae8u: goto label_154ae8;
        case 0x154aecu: goto label_154aec;
        case 0x154af0u: goto label_154af0;
        case 0x154af4u: goto label_154af4;
        case 0x154af8u: goto label_154af8;
        case 0x154afcu: goto label_154afc;
        case 0x154b00u: goto label_154b00;
        case 0x154b04u: goto label_154b04;
        case 0x154b08u: goto label_154b08;
        case 0x154b0cu: goto label_154b0c;
        case 0x154b10u: goto label_154b10;
        case 0x154b14u: goto label_154b14;
        case 0x154b18u: goto label_154b18;
        case 0x154b1cu: goto label_154b1c;
        case 0x154b20u: goto label_154b20;
        case 0x154b24u: goto label_154b24;
        case 0x154b28u: goto label_154b28;
        case 0x154b2cu: goto label_154b2c;
        case 0x154b30u: goto label_154b30;
        case 0x154b34u: goto label_154b34;
        case 0x154b38u: goto label_154b38;
        case 0x154b3cu: goto label_154b3c;
        case 0x154b40u: goto label_154b40;
        case 0x154b44u: goto label_154b44;
        case 0x154b48u: goto label_154b48;
        case 0x154b4cu: goto label_154b4c;
        case 0x154b50u: goto label_154b50;
        case 0x154b54u: goto label_154b54;
        case 0x154b58u: goto label_154b58;
        case 0x154b5cu: goto label_154b5c;
        case 0x154b60u: goto label_154b60;
        case 0x154b64u: goto label_154b64;
        case 0x154b68u: goto label_154b68;
        case 0x154b6cu: goto label_154b6c;
        case 0x154b70u: goto label_154b70;
        case 0x154b74u: goto label_154b74;
        case 0x154b78u: goto label_154b78;
        case 0x154b7cu: goto label_154b7c;
        case 0x154b80u: goto label_154b80;
        case 0x154b84u: goto label_154b84;
        case 0x154b88u: goto label_154b88;
        case 0x154b8cu: goto label_154b8c;
        case 0x154b90u: goto label_154b90;
        case 0x154b94u: goto label_154b94;
        case 0x154b98u: goto label_154b98;
        case 0x154b9cu: goto label_154b9c;
        case 0x154ba0u: goto label_154ba0;
        case 0x154ba4u: goto label_154ba4;
        case 0x154ba8u: goto label_154ba8;
        case 0x154bacu: goto label_154bac;
        case 0x154bb0u: goto label_154bb0;
        case 0x154bb4u: goto label_154bb4;
        case 0x154bb8u: goto label_154bb8;
        case 0x154bbcu: goto label_154bbc;
        case 0x154bc0u: goto label_154bc0;
        case 0x154bc4u: goto label_154bc4;
        case 0x154bc8u: goto label_154bc8;
        case 0x154bccu: goto label_154bcc;
        case 0x154bd0u: goto label_154bd0;
        case 0x154bd4u: goto label_154bd4;
        case 0x154bd8u: goto label_154bd8;
        case 0x154bdcu: goto label_154bdc;
        case 0x154be0u: goto label_154be0;
        case 0x154be4u: goto label_154be4;
        case 0x154be8u: goto label_154be8;
        case 0x154becu: goto label_154bec;
        case 0x154bf0u: goto label_154bf0;
        case 0x154bf4u: goto label_154bf4;
        case 0x154bf8u: goto label_154bf8;
        case 0x154bfcu: goto label_154bfc;
        case 0x154c00u: goto label_154c00;
        case 0x154c04u: goto label_154c04;
        case 0x154c08u: goto label_154c08;
        case 0x154c0cu: goto label_154c0c;
        case 0x154c10u: goto label_154c10;
        case 0x154c14u: goto label_154c14;
        case 0x154c18u: goto label_154c18;
        case 0x154c1cu: goto label_154c1c;
        case 0x154c20u: goto label_154c20;
        case 0x154c24u: goto label_154c24;
        case 0x154c28u: goto label_154c28;
        case 0x154c2cu: goto label_154c2c;
        case 0x154c30u: goto label_154c30;
        case 0x154c34u: goto label_154c34;
        case 0x154c38u: goto label_154c38;
        case 0x154c3cu: goto label_154c3c;
        case 0x154c40u: goto label_154c40;
        case 0x154c44u: goto label_154c44;
        case 0x154c48u: goto label_154c48;
        case 0x154c4cu: goto label_154c4c;
        case 0x154c50u: goto label_154c50;
        case 0x154c54u: goto label_154c54;
        case 0x154c58u: goto label_154c58;
        case 0x154c5cu: goto label_154c5c;
        case 0x154c60u: goto label_154c60;
        case 0x154c64u: goto label_154c64;
        case 0x154c68u: goto label_154c68;
        case 0x154c6cu: goto label_154c6c;
        case 0x154c70u: goto label_154c70;
        case 0x154c74u: goto label_154c74;
        case 0x154c78u: goto label_154c78;
        case 0x154c7cu: goto label_154c7c;
        case 0x154c80u: goto label_154c80;
        case 0x154c84u: goto label_154c84;
        case 0x154c88u: goto label_154c88;
        case 0x154c8cu: goto label_154c8c;
        case 0x154c90u: goto label_154c90;
        case 0x154c94u: goto label_154c94;
        case 0x154c98u: goto label_154c98;
        case 0x154c9cu: goto label_154c9c;
        case 0x154ca0u: goto label_154ca0;
        case 0x154ca4u: goto label_154ca4;
        case 0x154ca8u: goto label_154ca8;
        case 0x154cacu: goto label_154cac;
        case 0x154cb0u: goto label_154cb0;
        case 0x154cb4u: goto label_154cb4;
        case 0x154cb8u: goto label_154cb8;
        case 0x154cbcu: goto label_154cbc;
        case 0x154cc0u: goto label_154cc0;
        case 0x154cc4u: goto label_154cc4;
        case 0x154cc8u: goto label_154cc8;
        case 0x154cccu: goto label_154ccc;
        case 0x154cd0u: goto label_154cd0;
        case 0x154cd4u: goto label_154cd4;
        case 0x154cd8u: goto label_154cd8;
        case 0x154cdcu: goto label_154cdc;
        case 0x154ce0u: goto label_154ce0;
        case 0x154ce4u: goto label_154ce4;
        case 0x154ce8u: goto label_154ce8;
        case 0x154cecu: goto label_154cec;
        case 0x154cf0u: goto label_154cf0;
        case 0x154cf4u: goto label_154cf4;
        case 0x154cf8u: goto label_154cf8;
        case 0x154cfcu: goto label_154cfc;
        case 0x154d00u: goto label_154d00;
        case 0x154d04u: goto label_154d04;
        case 0x154d08u: goto label_154d08;
        case 0x154d0cu: goto label_154d0c;
        case 0x154d10u: goto label_154d10;
        case 0x154d14u: goto label_154d14;
        case 0x154d18u: goto label_154d18;
        case 0x154d1cu: goto label_154d1c;
        case 0x154d20u: goto label_154d20;
        case 0x154d24u: goto label_154d24;
        case 0x154d28u: goto label_154d28;
        case 0x154d2cu: goto label_154d2c;
        case 0x154d30u: goto label_154d30;
        case 0x154d34u: goto label_154d34;
        case 0x154d38u: goto label_154d38;
        case 0x154d3cu: goto label_154d3c;
        case 0x154d40u: goto label_154d40;
        case 0x154d44u: goto label_154d44;
        case 0x154d48u: goto label_154d48;
        case 0x154d4cu: goto label_154d4c;
        case 0x154d50u: goto label_154d50;
        case 0x154d54u: goto label_154d54;
        case 0x154d58u: goto label_154d58;
        case 0x154d5cu: goto label_154d5c;
        case 0x154d60u: goto label_154d60;
        case 0x154d64u: goto label_154d64;
        case 0x154d68u: goto label_154d68;
        case 0x154d6cu: goto label_154d6c;
        case 0x154d70u: goto label_154d70;
        case 0x154d74u: goto label_154d74;
        case 0x154d78u: goto label_154d78;
        case 0x154d7cu: goto label_154d7c;
        case 0x154d80u: goto label_154d80;
        case 0x154d84u: goto label_154d84;
        case 0x154d88u: goto label_154d88;
        case 0x154d8cu: goto label_154d8c;
        case 0x154d90u: goto label_154d90;
        case 0x154d94u: goto label_154d94;
        case 0x154d98u: goto label_154d98;
        case 0x154d9cu: goto label_154d9c;
        case 0x154da0u: goto label_154da0;
        case 0x154da4u: goto label_154da4;
        case 0x154da8u: goto label_154da8;
        case 0x154dacu: goto label_154dac;
        case 0x154db0u: goto label_154db0;
        case 0x154db4u: goto label_154db4;
        case 0x154db8u: goto label_154db8;
        case 0x154dbcu: goto label_154dbc;
        case 0x154dc0u: goto label_154dc0;
        case 0x154dc4u: goto label_154dc4;
        case 0x154dc8u: goto label_154dc8;
        case 0x154dccu: goto label_154dcc;
        case 0x154dd0u: goto label_154dd0;
        case 0x154dd4u: goto label_154dd4;
        case 0x154dd8u: goto label_154dd8;
        case 0x154ddcu: goto label_154ddc;
        case 0x154de0u: goto label_154de0;
        case 0x154de4u: goto label_154de4;
        case 0x154de8u: goto label_154de8;
        case 0x154decu: goto label_154dec;
        case 0x154df0u: goto label_154df0;
        case 0x154df4u: goto label_154df4;
        case 0x154df8u: goto label_154df8;
        case 0x154dfcu: goto label_154dfc;
        case 0x154e00u: goto label_154e00;
        case 0x154e04u: goto label_154e04;
        case 0x154e08u: goto label_154e08;
        case 0x154e0cu: goto label_154e0c;
        case 0x154e10u: goto label_154e10;
        case 0x154e14u: goto label_154e14;
        case 0x154e18u: goto label_154e18;
        case 0x154e1cu: goto label_154e1c;
        case 0x154e20u: goto label_154e20;
        case 0x154e24u: goto label_154e24;
        case 0x154e28u: goto label_154e28;
        case 0x154e2cu: goto label_154e2c;
        case 0x154e30u: goto label_154e30;
        case 0x154e34u: goto label_154e34;
        case 0x154e38u: goto label_154e38;
        case 0x154e3cu: goto label_154e3c;
        case 0x154e40u: goto label_154e40;
        case 0x154e44u: goto label_154e44;
        case 0x154e48u: goto label_154e48;
        case 0x154e4cu: goto label_154e4c;
        case 0x154e50u: goto label_154e50;
        case 0x154e54u: goto label_154e54;
        case 0x154e58u: goto label_154e58;
        case 0x154e5cu: goto label_154e5c;
        case 0x154e60u: goto label_154e60;
        case 0x154e64u: goto label_154e64;
        case 0x154e68u: goto label_154e68;
        case 0x154e6cu: goto label_154e6c;
        case 0x154e70u: goto label_154e70;
        case 0x154e74u: goto label_154e74;
        case 0x154e78u: goto label_154e78;
        case 0x154e7cu: goto label_154e7c;
        case 0x154e80u: goto label_154e80;
        case 0x154e84u: goto label_154e84;
        case 0x154e88u: goto label_154e88;
        case 0x154e8cu: goto label_154e8c;
        case 0x154e90u: goto label_154e90;
        case 0x154e94u: goto label_154e94;
        case 0x154e98u: goto label_154e98;
        case 0x154e9cu: goto label_154e9c;
        case 0x154ea0u: goto label_154ea0;
        case 0x154ea4u: goto label_154ea4;
        case 0x154ea8u: goto label_154ea8;
        case 0x154eacu: goto label_154eac;
        case 0x154eb0u: goto label_154eb0;
        case 0x154eb4u: goto label_154eb4;
        case 0x154eb8u: goto label_154eb8;
        case 0x154ebcu: goto label_154ebc;
        case 0x154ec0u: goto label_154ec0;
        case 0x154ec4u: goto label_154ec4;
        case 0x154ec8u: goto label_154ec8;
        case 0x154eccu: goto label_154ecc;
        case 0x154ed0u: goto label_154ed0;
        case 0x154ed4u: goto label_154ed4;
        case 0x154ed8u: goto label_154ed8;
        case 0x154edcu: goto label_154edc;
        case 0x154ee0u: goto label_154ee0;
        case 0x154ee4u: goto label_154ee4;
        case 0x154ee8u: goto label_154ee8;
        case 0x154eecu: goto label_154eec;
        case 0x154ef0u: goto label_154ef0;
        case 0x154ef4u: goto label_154ef4;
        case 0x154ef8u: goto label_154ef8;
        case 0x154efcu: goto label_154efc;
        case 0x154f00u: goto label_154f00;
        case 0x154f04u: goto label_154f04;
        case 0x154f08u: goto label_154f08;
        case 0x154f0cu: goto label_154f0c;
        case 0x154f10u: goto label_154f10;
        case 0x154f14u: goto label_154f14;
        case 0x154f18u: goto label_154f18;
        case 0x154f1cu: goto label_154f1c;
        case 0x154f20u: goto label_154f20;
        case 0x154f24u: goto label_154f24;
        case 0x154f28u: goto label_154f28;
        case 0x154f2cu: goto label_154f2c;
        case 0x154f30u: goto label_154f30;
        case 0x154f34u: goto label_154f34;
        case 0x154f38u: goto label_154f38;
        case 0x154f3cu: goto label_154f3c;
        case 0x154f40u: goto label_154f40;
        case 0x154f44u: goto label_154f44;
        case 0x154f48u: goto label_154f48;
        case 0x154f4cu: goto label_154f4c;
        case 0x154f50u: goto label_154f50;
        case 0x154f54u: goto label_154f54;
        case 0x154f58u: goto label_154f58;
        case 0x154f5cu: goto label_154f5c;
        case 0x154f60u: goto label_154f60;
        case 0x154f64u: goto label_154f64;
        case 0x154f68u: goto label_154f68;
        case 0x154f6cu: goto label_154f6c;
        case 0x154f70u: goto label_154f70;
        case 0x154f74u: goto label_154f74;
        case 0x154f78u: goto label_154f78;
        case 0x154f7cu: goto label_154f7c;
        case 0x154f80u: goto label_154f80;
        case 0x154f84u: goto label_154f84;
        case 0x154f88u: goto label_154f88;
        case 0x154f8cu: goto label_154f8c;
        case 0x154f90u: goto label_154f90;
        case 0x154f94u: goto label_154f94;
        case 0x154f98u: goto label_154f98;
        case 0x154f9cu: goto label_154f9c;
        case 0x154fa0u: goto label_154fa0;
        case 0x154fa4u: goto label_154fa4;
        case 0x154fa8u: goto label_154fa8;
        case 0x154facu: goto label_154fac;
        case 0x154fb0u: goto label_154fb0;
        case 0x154fb4u: goto label_154fb4;
        case 0x154fb8u: goto label_154fb8;
        case 0x154fbcu: goto label_154fbc;
        case 0x154fc0u: goto label_154fc0;
        case 0x154fc4u: goto label_154fc4;
        case 0x154fc8u: goto label_154fc8;
        case 0x154fccu: goto label_154fcc;
        case 0x154fd0u: goto label_154fd0;
        case 0x154fd4u: goto label_154fd4;
        case 0x154fd8u: goto label_154fd8;
        case 0x154fdcu: goto label_154fdc;
        case 0x154fe0u: goto label_154fe0;
        case 0x154fe4u: goto label_154fe4;
        case 0x154fe8u: goto label_154fe8;
        case 0x154fecu: goto label_154fec;
        case 0x154ff0u: goto label_154ff0;
        case 0x154ff4u: goto label_154ff4;
        case 0x154ff8u: goto label_154ff8;
        case 0x154ffcu: goto label_154ffc;
        case 0x155000u: goto label_155000;
        case 0x155004u: goto label_155004;
        case 0x155008u: goto label_155008;
        case 0x15500cu: goto label_15500c;
        case 0x155010u: goto label_155010;
        case 0x155014u: goto label_155014;
        case 0x155018u: goto label_155018;
        case 0x15501cu: goto label_15501c;
        case 0x155020u: goto label_155020;
        case 0x155024u: goto label_155024;
        case 0x155028u: goto label_155028;
        case 0x15502cu: goto label_15502c;
        case 0x155030u: goto label_155030;
        case 0x155034u: goto label_155034;
        case 0x155038u: goto label_155038;
        case 0x15503cu: goto label_15503c;
        case 0x155040u: goto label_155040;
        case 0x155044u: goto label_155044;
        case 0x155048u: goto label_155048;
        case 0x15504cu: goto label_15504c;
        case 0x155050u: goto label_155050;
        case 0x155054u: goto label_155054;
        case 0x155058u: goto label_155058;
        case 0x15505cu: goto label_15505c;
        case 0x155060u: goto label_155060;
        case 0x155064u: goto label_155064;
        case 0x155068u: goto label_155068;
        case 0x15506cu: goto label_15506c;
        case 0x155070u: goto label_155070;
        case 0x155074u: goto label_155074;
        case 0x155078u: goto label_155078;
        case 0x15507cu: goto label_15507c;
        case 0x155080u: goto label_155080;
        case 0x155084u: goto label_155084;
        case 0x155088u: goto label_155088;
        case 0x15508cu: goto label_15508c;
        case 0x155090u: goto label_155090;
        case 0x155094u: goto label_155094;
        case 0x155098u: goto label_155098;
        case 0x15509cu: goto label_15509c;
        case 0x1550a0u: goto label_1550a0;
        case 0x1550a4u: goto label_1550a4;
        case 0x1550a8u: goto label_1550a8;
        case 0x1550acu: goto label_1550ac;
        case 0x1550b0u: goto label_1550b0;
        case 0x1550b4u: goto label_1550b4;
        case 0x1550b8u: goto label_1550b8;
        case 0x1550bcu: goto label_1550bc;
        case 0x1550c0u: goto label_1550c0;
        case 0x1550c4u: goto label_1550c4;
        case 0x1550c8u: goto label_1550c8;
        case 0x1550ccu: goto label_1550cc;
        case 0x1550d0u: goto label_1550d0;
        case 0x1550d4u: goto label_1550d4;
        case 0x1550d8u: goto label_1550d8;
        case 0x1550dcu: goto label_1550dc;
        case 0x1550e0u: goto label_1550e0;
        case 0x1550e4u: goto label_1550e4;
        case 0x1550e8u: goto label_1550e8;
        case 0x1550ecu: goto label_1550ec;
        case 0x1550f0u: goto label_1550f0;
        case 0x1550f4u: goto label_1550f4;
        case 0x1550f8u: goto label_1550f8;
        case 0x1550fcu: goto label_1550fc;
        case 0x155100u: goto label_155100;
        case 0x155104u: goto label_155104;
        case 0x155108u: goto label_155108;
        case 0x15510cu: goto label_15510c;
        case 0x155110u: goto label_155110;
        case 0x155114u: goto label_155114;
        case 0x155118u: goto label_155118;
        case 0x15511cu: goto label_15511c;
        case 0x155120u: goto label_155120;
        case 0x155124u: goto label_155124;
        case 0x155128u: goto label_155128;
        case 0x15512cu: goto label_15512c;
        default: return;
    }

label_154960:
    // 0x154960: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x154960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154964:
    // 0x154964: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x154964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_154968:
    // 0x154968: 0x2463ba24  addiu       $v1, $v1, -0x45DC
    ctx->pc = 0x154968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949412));
label_15496c:
    // 0x15496c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15496cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154970:
    // 0x154970: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x154970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_154974:
    // 0x154974: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x154974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_154978:
    // 0x154978: 0x2463ba28  addiu       $v1, $v1, -0x45D8
    ctx->pc = 0x154978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949416));
label_15497c:
    // 0x15497c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x15497cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_154980:
    // 0x154980: 0xe420b9a0  swc1        $f0, -0x4660($at)
    ctx->pc = 0x154980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949280), bits); }
label_154984:
    // 0x154984: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x154984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_154988:
    // 0x154988: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x154988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15498c:
    // 0x15498c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15498cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154990:
    // 0x154990: 0xe420b9a4  swc1        $f0, -0x465C($at)
    ctx->pc = 0x154990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949284), bits); }
label_154994:
    // 0x154994: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x154994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154998:
    // 0x154998: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15499c:
    // 0x15499c: 0xe420b9a8  swc1        $f0, -0x4658($at)
    ctx->pc = 0x15499cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949288), bits); }
label_1549a0:
    // 0x1549a0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1549a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1549a4:
    // 0x1549a4: 0x10000040  b           . + 4 + (0x40 << 2)
label_1549a8:
    if (ctx->pc == 0x1549A8u) {
        ctx->pc = 0x1549A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549A4u;
        // 0x1549a8: 0xac23b9ac  sw          $v1, -0x4654($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1549ACu;
        goto label_1549ac;
    }
    ctx->pc = 0x1549A4u;
    {
        const bool branch_taken_0x1549a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1549A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549A4u;
        // 0x1549a8: 0xac23b9ac  sw          $v1, -0x4654($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549a4) {
            ctx->pc = 0x154AA8u;
            goto label_154aa8;
        }
    }
    ctx->pc = 0x1549ACu;
label_1549ac:
    // 0x1549ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1549acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1549b0:
    // 0x1549b0: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
label_1549b4:
    if (ctx->pc == 0x1549B4u) {
        ctx->pc = 0x1549B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549B0u;
        // 0x1549b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1549B8u;
        goto label_1549b8;
    }
    ctx->pc = 0x1549B0u;
    {
        const bool branch_taken_0x1549b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1549B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549B0u;
        // 0x1549b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549b0) {
            ctx->pc = 0x154A1Cu;
            goto label_154a1c;
        }
    }
    ctx->pc = 0x1549B8u;
label_1549b8:
    // 0x1549b8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1549b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1549bc:
    // 0x1549bc: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x1549bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_1549c0:
    // 0x1549c0: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x1549c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
label_1549c4:
    // 0x1549c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1549c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1549c8:
    // 0x1549c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1549c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1549cc:
    // 0x1549cc: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x1549ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1549d0:
    // 0x1549d0: 0xc066e26  jal         func_19B898
label_1549d4:
    if (ctx->pc == 0x1549D4u) {
        ctx->pc = 0x1549D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549D0u;
        // 0x1549d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1549D8u;
        goto label_1549d8;
    }
    ctx->pc = 0x1549D0u;
    SET_GPR_U32(ctx, 31, 0x1549D8u);
    ctx->pc = 0x1549D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1549D0u;
    // 0x1549d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1549D8u;
label_1549d8:
    // 0x1549d8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1549d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1549dc:
    // 0x1549dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1549dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1549e0:
    // 0x1549e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1549e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1549e4:
    // 0x1549e4: 0xc066e14  jal         func_19B850
label_1549e8:
    if (ctx->pc == 0x1549E8u) {
        ctx->pc = 0x1549E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549E4u;
        // 0x1549e8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1549ECu;
        goto label_1549ec;
    }
    ctx->pc = 0x1549E4u;
    SET_GPR_U32(ctx, 31, 0x1549ECu);
    ctx->pc = 0x1549E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1549E4u;
    // 0x1549e8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1549ECu;
label_1549ec:
    // 0x1549ec: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1549ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1549f0:
    // 0x1549f0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1549f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1549f4:
    // 0x1549f4: 0xac20b9bc  sw          $zero, -0x4644($at)
    ctx->pc = 0x1549f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949308), GPR_U32(ctx, 0));
label_1549f8:
    // 0x1549f8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1549f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1549fc:
    // 0x1549fc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1549fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154a00:
    // 0x154a00: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x154a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154a04:
    // 0x154a04: 0xe422b9b0  swc1        $f2, -0x4650($at)
    ctx->pc = 0x154a04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949296), bits); }
label_154a08:
    // 0x154a08: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154a0c:
    // 0x154a0c: 0xe421b9b4  swc1        $f1, -0x464C($at)
    ctx->pc = 0x154a0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949300), bits); }
label_154a10:
    // 0x154a10: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154a14:
    // 0x154a14: 0x10000024  b           . + 4 + (0x24 << 2)
label_154a18:
    if (ctx->pc == 0x154A18u) {
        ctx->pc = 0x154A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A14u;
        // 0x154a18: 0xe420b9b8  swc1        $f0, -0x4648($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949304), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A1Cu;
        goto label_154a1c;
    }
    ctx->pc = 0x154A14u;
    {
        const bool branch_taken_0x154a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A14u;
        // 0x154a18: 0xe420b9b8  swc1        $f0, -0x4648($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a14) {
            ctx->pc = 0x154AA8u;
            goto label_154aa8;
        }
    }
    ctx->pc = 0x154A1Cu;
label_154a1c:
    // 0x154a1c: 0x14a2001b  bne         $a1, $v0, . + 4 + (0x1B << 2)
label_154a20:
    if (ctx->pc == 0x154A20u) {
        ctx->pc = 0x154A24u;
        goto label_154a24;
    }
    ctx->pc = 0x154A1Cu;
    {
        const bool branch_taken_0x154a1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x154a1c) {
            ctx->pc = 0x154A8Cu;
            goto label_154a8c;
        }
    }
    ctx->pc = 0x154A24u;
label_154a24:
    // 0x154a24: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_154a28:
    // 0x154a28: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x154a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_154a2c:
    // 0x154a2c: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
label_154a30:
    // 0x154a30: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x154a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_154a34:
    // 0x154a34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154a38:
    // 0x154a38: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x154a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_154a3c:
    // 0x154a3c: 0xc066e26  jal         func_19B898
label_154a40:
    if (ctx->pc == 0x154A40u) {
        ctx->pc = 0x154A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A3Cu;
        // 0x154a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A44u;
        goto label_154a44;
    }
    ctx->pc = 0x154A3Cu;
    SET_GPR_U32(ctx, 31, 0x154A44u);
    ctx->pc = 0x154A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A3Cu;
    // 0x154a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x154A44u;
label_154a44:
    // 0x154a44: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x154a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_154a48:
    // 0x154a48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x154a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_154a4c:
    // 0x154a4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x154a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_154a50:
    // 0x154a50: 0xc066e14  jal         func_19B850
label_154a54:
    if (ctx->pc == 0x154A54u) {
        ctx->pc = 0x154A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A50u;
        // 0x154a54: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A58u;
        goto label_154a58;
    }
    ctx->pc = 0x154A50u;
    SET_GPR_U32(ctx, 31, 0x154A58u);
    ctx->pc = 0x154A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A50u;
    // 0x154a54: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x154A58u;
label_154a58:
    // 0x154a58: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x154a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_154a5c:
    // 0x154a5c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x154a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_154a60:
    // 0x154a60: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154a64:
    // 0x154a64: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x154a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_154a68:
    // 0x154a68: 0xac23ba0c  sw          $v1, -0x45F4($at)
    ctx->pc = 0x154a68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949388), GPR_U32(ctx, 3));
label_154a6c:
    // 0x154a6c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154a70:
    // 0x154a70: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x154a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154a74:
    // 0x154a74: 0xe422ba00  swc1        $f2, -0x4600($at)
    ctx->pc = 0x154a74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949376), bits); }
label_154a78:
    // 0x154a78: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154a7c:
    // 0x154a7c: 0xe421ba04  swc1        $f1, -0x45FC($at)
    ctx->pc = 0x154a7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949380), bits); }
label_154a80:
    // 0x154a80: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154a84:
    // 0x154a84: 0x10000008  b           . + 4 + (0x8 << 2)
label_154a88:
    if (ctx->pc == 0x154A88u) {
        ctx->pc = 0x154A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A84u;
        // 0x154a88: 0xe420ba08  swc1        $f0, -0x45F8($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949384), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A8Cu;
        goto label_154a8c;
    }
    ctx->pc = 0x154A84u;
    {
        const bool branch_taken_0x154a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A84u;
        // 0x154a88: 0xe420ba08  swc1        $f0, -0x45F8($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949384), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a84) {
            ctx->pc = 0x154AA8u;
            goto label_154aa8;
        }
    }
    ctx->pc = 0x154A8Cu;
label_154a8c:
    // 0x154a8c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_154a90:
    // 0x154a90: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x154a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_154a94:
    // 0x154a94: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
label_154a98:
    // 0x154a98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x154a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_154a9c:
    // 0x154a9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154aa0:
    // 0x154aa0: 0xc066e26  jal         func_19B898
label_154aa4:
    if (ctx->pc == 0x154AA4u) {
        ctx->pc = 0x154AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AA0u;
        // 0x154aa4: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154AA8u;
        goto label_154aa8;
    }
    ctx->pc = 0x154AA0u;
    SET_GPR_U32(ctx, 31, 0x154AA8u);
    ctx->pc = 0x154AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AA0u;
    // 0x154aa4: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x154AA8u;
label_154aa8:
    // 0x154aa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x154aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_154aac:
    // 0x154aac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x154aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_154ab0:
    // 0x154ab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_154ab4:
    // 0x154ab4: 0x3e00008  jr          $ra
label_154ab8:
    if (ctx->pc == 0x154AB8u) {
        ctx->pc = 0x154AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AB4u;
        // 0x154ab8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154ABCu;
        goto label_154abc;
    }
    ctx->pc = 0x154AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AB4u;
        // 0x154ab8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154ABCu;
label_154abc:
    // 0x154abc: 0x0  nop
    ctx->pc = 0x154abcu;
    // NOP
label_154ac0:
    // 0x154ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_154ac4:
    // 0x154ac4: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_154ac8:
    if (ctx->pc == 0x154AC8u) {
        ctx->pc = 0x154AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AC4u;
        // 0x154ac8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154ACCu;
        goto label_154acc;
    }
    ctx->pc = 0x154AC4u;
    {
        const bool branch_taken_0x154ac4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x154AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AC4u;
        // 0x154ac8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ac4) {
            ctx->pc = 0x154AE8u;
            goto label_154ae8;
        }
    }
    ctx->pc = 0x154ACCu;
label_154acc:
    // 0x154acc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_154ad0:
    // 0x154ad0: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x154ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_154ad4:
    // 0x154ad4: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
label_154ad8:
    // 0x154ad8: 0xc066e26  jal         func_19B898
label_154adc:
    if (ctx->pc == 0x154ADCu) {
        ctx->pc = 0x154ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AD8u;
        // 0x154adc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154AE0u;
        goto label_154ae0;
    }
    ctx->pc = 0x154AD8u;
    SET_GPR_U32(ctx, 31, 0x154AE0u);
    ctx->pc = 0x154ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AD8u;
    // 0x154adc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x154AE0u;
label_154ae0:
    // 0x154ae0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_154ae4:
    if (ctx->pc == 0x154AE4u) {
        ctx->pc = 0x154AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AE0u;
        // 0x154ae4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154AE8u;
        goto label_154ae8;
    }
    ctx->pc = 0x154AE0u;
    {
        const bool branch_taken_0x154ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AE0u;
        // 0x154ae4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ae0) {
            ctx->pc = 0x154B58u;
            goto label_154b58;
        }
    }
    ctx->pc = 0x154AE8u;
label_154ae8:
    // 0x154ae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154aec:
    // 0x154aec: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_154af0:
    if (ctx->pc == 0x154AF0u) {
        ctx->pc = 0x154AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AECu;
        // 0x154af0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154AF4u;
        goto label_154af4;
    }
    ctx->pc = 0x154AECu;
    {
        const bool branch_taken_0x154aec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x154AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AECu;
        // 0x154af0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154aec) {
            ctx->pc = 0x154B14u;
            goto label_154b14;
        }
    }
    ctx->pc = 0x154AF4u;
label_154af4:
    // 0x154af4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_154af8:
    // 0x154af8: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x154af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_154afc:
    // 0x154afc: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
label_154b00:
    // 0x154b00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154b04:
    // 0x154b04: 0xc066e26  jal         func_19B898
label_154b08:
    if (ctx->pc == 0x154B08u) {
        ctx->pc = 0x154B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B04u;
        // 0x154b08: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B0Cu;
        goto label_154b0c;
    }
    ctx->pc = 0x154B04u;
    SET_GPR_U32(ctx, 31, 0x154B0Cu);
    ctx->pc = 0x154B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B04u;
    // 0x154b08: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x154B0Cu;
label_154b0c:
    // 0x154b0c: 0x10000011  b           . + 4 + (0x11 << 2)
label_154b10:
    if (ctx->pc == 0x154B10u) {
        ctx->pc = 0x154B14u;
        goto label_154b14;
    }
    ctx->pc = 0x154B0Cu;
    {
        const bool branch_taken_0x154b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154b0c) {
            ctx->pc = 0x154B54u;
            goto label_154b54;
        }
    }
    ctx->pc = 0x154B14u;
label_154b14:
    // 0x154b14: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_154b18:
    if (ctx->pc == 0x154B18u) {
        ctx->pc = 0x154B1Cu;
        goto label_154b1c;
    }
    ctx->pc = 0x154B14u;
    {
        const bool branch_taken_0x154b14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x154b14) {
            ctx->pc = 0x154B3Cu;
            goto label_154b3c;
        }
    }
    ctx->pc = 0x154B1Cu;
label_154b1c:
    // 0x154b1c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_154b20:
    // 0x154b20: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x154b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_154b24:
    // 0x154b24: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
label_154b28:
    // 0x154b28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154b2c:
    // 0x154b2c: 0xc066e26  jal         func_19B898
label_154b30:
    if (ctx->pc == 0x154B30u) {
        ctx->pc = 0x154B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B2Cu;
        // 0x154b30: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B34u;
        goto label_154b34;
    }
    ctx->pc = 0x154B2Cu;
    SET_GPR_U32(ctx, 31, 0x154B34u);
    ctx->pc = 0x154B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B2Cu;
    // 0x154b30: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x154B34u;
label_154b34:
    // 0x154b34: 0x10000007  b           . + 4 + (0x7 << 2)
label_154b38:
    if (ctx->pc == 0x154B38u) {
        ctx->pc = 0x154B3Cu;
        goto label_154b3c;
    }
    ctx->pc = 0x154B34u;
    {
        const bool branch_taken_0x154b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154b34) {
            ctx->pc = 0x154B54u;
            goto label_154b54;
        }
    }
    ctx->pc = 0x154B3Cu;
label_154b3c:
    // 0x154b3c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_154b40:
    // 0x154b40: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x154b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_154b44:
    // 0x154b44: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
label_154b48:
    // 0x154b48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154b4c:
    // 0x154b4c: 0xc066e26  jal         func_19B898
label_154b50:
    if (ctx->pc == 0x154B50u) {
        ctx->pc = 0x154B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B4Cu;
        // 0x154b50: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B54u;
        goto label_154b54;
    }
    ctx->pc = 0x154B4Cu;
    SET_GPR_U32(ctx, 31, 0x154B54u);
    ctx->pc = 0x154B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B4Cu;
    // 0x154b50: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x154B54u;
label_154b54:
    // 0x154b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_154b58:
    // 0x154b58: 0x3e00008  jr          $ra
label_154b5c:
    if (ctx->pc == 0x154B5Cu) {
        ctx->pc = 0x154B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B58u;
        // 0x154b5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B60u;
        goto label_154b60;
    }
    ctx->pc = 0x154B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B58u;
        // 0x154b5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154B60u;
label_154b60:
    // 0x154b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_154b64:
    // 0x154b64: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_154b68:
    if (ctx->pc == 0x154B68u) {
        ctx->pc = 0x154B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B64u;
        // 0x154b68: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B6Cu;
        goto label_154b6c;
    }
    ctx->pc = 0x154B64u;
    {
        const bool branch_taken_0x154b64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x154B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B64u;
        // 0x154b68: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b64) {
            ctx->pc = 0x154B7Cu;
            goto label_154b7c;
        }
    }
    ctx->pc = 0x154B6Cu;
label_154b6c:
    // 0x154b6c: 0xc066e26  jal         func_19B898
label_154b70:
    if (ctx->pc == 0x154B70u) {
        ctx->pc = 0x154B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B6Cu;
        // 0x154b70: 0x8f858630  lw          $a1, -0x79D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B74u;
        goto label_154b74;
    }
    ctx->pc = 0x154B6Cu;
    SET_GPR_U32(ctx, 31, 0x154B74u);
    ctx->pc = 0x154B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B6Cu;
    // 0x154b70: 0x8f858630  lw          $a1, -0x79D0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x154B74u;
label_154b74:
    // 0x154b74: 0x10000014  b           . + 4 + (0x14 << 2)
label_154b78:
    if (ctx->pc == 0x154B78u) {
        ctx->pc = 0x154B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B74u;
        // 0x154b78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B7Cu;
        goto label_154b7c;
    }
    ctx->pc = 0x154B74u;
    {
        const bool branch_taken_0x154b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B74u;
        // 0x154b78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b74) {
            ctx->pc = 0x154BC8u;
            goto label_154bc8;
        }
    }
    ctx->pc = 0x154B7Cu;
label_154b7c:
    // 0x154b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154b80:
    // 0x154b80: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_154b84:
    if (ctx->pc == 0x154B84u) {
        ctx->pc = 0x154B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B80u;
        // 0x154b84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B88u;
        goto label_154b88;
    }
    ctx->pc = 0x154B80u;
    {
        const bool branch_taken_0x154b80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x154B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B80u;
        // 0x154b84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b80) {
            ctx->pc = 0x154B9Cu;
            goto label_154b9c;
        }
    }
    ctx->pc = 0x154B88u;
label_154b88:
    // 0x154b88: 0x8f828630  lw          $v0, -0x79D0($gp)
    ctx->pc = 0x154b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
label_154b8c:
    // 0x154b8c: 0xc066e26  jal         func_19B898
label_154b90:
    if (ctx->pc == 0x154B90u) {
        ctx->pc = 0x154B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B8Cu;
        // 0x154b90: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154B94u;
        goto label_154b94;
    }
    ctx->pc = 0x154B8Cu;
    SET_GPR_U32(ctx, 31, 0x154B94u);
    ctx->pc = 0x154B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B8Cu;
    // 0x154b90: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x154B94u;
label_154b94:
    // 0x154b94: 0x1000000b  b           . + 4 + (0xB << 2)
label_154b98:
    if (ctx->pc == 0x154B98u) {
        ctx->pc = 0x154B9Cu;
        goto label_154b9c;
    }
    ctx->pc = 0x154B94u;
    {
        const bool branch_taken_0x154b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154b94) {
            ctx->pc = 0x154BC4u;
            goto label_154bc4;
        }
    }
    ctx->pc = 0x154B9Cu;
label_154b9c:
    // 0x154b9c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_154ba0:
    if (ctx->pc == 0x154BA0u) {
        ctx->pc = 0x154BA4u;
        goto label_154ba4;
    }
    ctx->pc = 0x154B9Cu;
    {
        const bool branch_taken_0x154b9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x154b9c) {
            ctx->pc = 0x154BB8u;
            goto label_154bb8;
        }
    }
    ctx->pc = 0x154BA4u;
label_154ba4:
    // 0x154ba4: 0x8f828630  lw          $v0, -0x79D0($gp)
    ctx->pc = 0x154ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
label_154ba8:
    // 0x154ba8: 0xc066e26  jal         func_19B898
label_154bac:
    if (ctx->pc == 0x154BACu) {
        ctx->pc = 0x154BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BA8u;
        // 0x154bac: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154BB0u;
        goto label_154bb0;
    }
    ctx->pc = 0x154BA8u;
    SET_GPR_U32(ctx, 31, 0x154BB0u);
    ctx->pc = 0x154BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154BA8u;
    // 0x154bac: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x154BB0u;
label_154bb0:
    // 0x154bb0: 0x10000004  b           . + 4 + (0x4 << 2)
label_154bb4:
    if (ctx->pc == 0x154BB4u) {
        ctx->pc = 0x154BB8u;
        goto label_154bb8;
    }
    ctx->pc = 0x154BB0u;
    {
        const bool branch_taken_0x154bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154bb0) {
            ctx->pc = 0x154BC4u;
            goto label_154bc4;
        }
    }
    ctx->pc = 0x154BB8u;
label_154bb8:
    // 0x154bb8: 0x8f828630  lw          $v0, -0x79D0($gp)
    ctx->pc = 0x154bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
label_154bbc:
    // 0x154bbc: 0xc066e26  jal         func_19B898
label_154bc0:
    if (ctx->pc == 0x154BC0u) {
        ctx->pc = 0x154BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BBCu;
        // 0x154bc0: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154BC4u;
        goto label_154bc4;
    }
    ctx->pc = 0x154BBCu;
    SET_GPR_U32(ctx, 31, 0x154BC4u);
    ctx->pc = 0x154BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154BBCu;
    // 0x154bc0: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x154BC4u;
label_154bc4:
    // 0x154bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_154bc8:
    // 0x154bc8: 0x3e00008  jr          $ra
label_154bcc:
    if (ctx->pc == 0x154BCCu) {
        ctx->pc = 0x154BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BC8u;
        // 0x154bcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154BD0u;
        goto label_154bd0;
    }
    ctx->pc = 0x154BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BC8u;
        // 0x154bcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154BD0u;
label_154bd0:
    // 0x154bd0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x154bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_154bd4:
    // 0x154bd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154bd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_154bd8:
    // 0x154bd8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x154bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_154bdc:
    // 0x154bdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_154be0:
    if (ctx->pc == 0x154BE0u) {
        ctx->pc = 0x154BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BDCu;
        // 0x154be0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154BE4u;
        goto label_154be4;
    }
    ctx->pc = 0x154BDCu;
    {
        const bool branch_taken_0x154bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BDCu;
        // 0x154be0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154bdc) {
            ctx->pc = 0x154BF8u;
            goto label_154bf8;
        }
    }
    ctx->pc = 0x154BE4u;
label_154be4:
    // 0x154be4: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x154be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_154be8:
    // 0x154be8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x154be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_154bec:
    // 0x154bec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x154becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_154bf0:
    // 0x154bf0: 0x10000003  b           . + 4 + (0x3 << 2)
label_154bf4:
    if (ctx->pc == 0x154BF4u) {
        ctx->pc = 0x154BF8u;
        goto label_154bf8;
    }
    ctx->pc = 0x154BF0u;
    {
        const bool branch_taken_0x154bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154bf0) {
            ctx->pc = 0x154C00u;
            goto label_154c00;
        }
    }
    ctx->pc = 0x154BF8u;
label_154bf8:
    // 0x154bf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x154bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_154bfc:
    // 0x154bfc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x154bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_154c00:
    // 0x154c00: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_154c04:
    // 0x154c04: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x154c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_154c08:
    // 0x154c08: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
label_154c0c:
    // 0x154c0c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x154c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_154c10:
    // 0x154c10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154c14:
    // 0x154c14: 0xc066e14  jal         func_19B850
label_154c18:
    if (ctx->pc == 0x154C18u) {
        ctx->pc = 0x154C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C14u;
        // 0x154c18: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C1Cu;
        goto label_154c1c;
    }
    ctx->pc = 0x154C14u;
    SET_GPR_U32(ctx, 31, 0x154C1Cu);
    ctx->pc = 0x154C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154C14u;
    // 0x154c18: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x154C1Cu;
label_154c1c:
    // 0x154c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_154c20:
    // 0x154c20: 0x3e00008  jr          $ra
label_154c24:
    if (ctx->pc == 0x154C24u) {
        ctx->pc = 0x154C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C20u;
        // 0x154c24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C28u;
        goto label_154c28;
    }
    ctx->pc = 0x154C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C20u;
        // 0x154c24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154C28u;
label_154c28:
    // 0x154c28: 0x0  nop
    ctx->pc = 0x154c28u;
    // NOP
label_154c2c:
    // 0x154c2c: 0x0  nop
    ctx->pc = 0x154c2cu;
    // NOP
label_154c30:
    // 0x154c30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x154c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_154c34:
    // 0x154c34: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x154c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_154c38:
    // 0x154c38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x154c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_154c3c:
    // 0x154c3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x154c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_154c40:
    // 0x154c40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x154c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_154c44:
    // 0x154c44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x154c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_154c48:
    // 0x154c48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x154c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_154c4c:
    // 0x154c4c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x154c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_154c50:
    // 0x154c50: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x154c50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_154c54:
    // 0x154c54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x154c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_154c58:
    // 0x154c58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_154c5c:
    if (ctx->pc == 0x154C5Cu) {
        ctx->pc = 0x154C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C58u;
        // 0x154c5c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C60u;
        goto label_154c60;
    }
    ctx->pc = 0x154C58u;
    {
        const bool branch_taken_0x154c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C58u;
        // 0x154c5c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c58) {
            ctx->pc = 0x154C78u;
            goto label_154c78;
        }
    }
    ctx->pc = 0x154C60u;
label_154c60:
    // 0x154c60: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x154c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_154c64:
    // 0x154c64: 0x3c02414c  lui         $v0, 0x414C
    ctx->pc = 0x154c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16716 << 16));
label_154c68:
    // 0x154c68: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x154c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_154c6c:
    // 0x154c6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154c70:
    // 0x154c70: 0x10000007  b           . + 4 + (0x7 << 2)
label_154c74:
    if (ctx->pc == 0x154C74u) {
        ctx->pc = 0x154C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C70u;
        // 0x154c74: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x154C78u;
        goto label_154c78;
    }
    ctx->pc = 0x154C70u;
    {
        const bool branch_taken_0x154c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C70u;
        // 0x154c74: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c70) {
            ctx->pc = 0x154C90u;
            goto label_154c90;
        }
    }
    ctx->pc = 0x154C78u;
label_154c78:
    // 0x154c78: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x154c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154c7c:
    // 0x154c7c: 0x3c02414c  lui         $v0, 0x414C
    ctx->pc = 0x154c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16716 << 16));
label_154c80:
    // 0x154c80: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x154c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_154c84:
    // 0x154c84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x154c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154c88:
    // 0x154c88: 0x0  nop
    ctx->pc = 0x154c88u;
    // NOP
label_154c8c:
    // 0x154c8c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x154c8cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_154c90:
    // 0x154c90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x154c90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154c94:
    // 0x154c94: 0x0  nop
    ctx->pc = 0x154c94u;
    // NOP
label_154c98:
    // 0x154c98: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x154c98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_154c9c:
    // 0x154c9c: 0x0  nop
    ctx->pc = 0x154c9cu;
    // NOP
label_154ca0:
    // 0x154ca0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_154ca4:
    if (ctx->pc == 0x154CA4u) {
        ctx->pc = 0x154CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CA0u;
        // 0x154ca4: 0x3c024300  lui         $v0, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154CA8u;
        goto label_154ca8;
    }
    ctx->pc = 0x154CA0u;
    {
        const bool branch_taken_0x154ca0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x154CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CA0u;
        // 0x154ca4: 0x3c024300  lui         $v0, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ca0) {
            ctx->pc = 0x154CB0u;
            goto label_154cb0;
        }
    }
    ctx->pc = 0x154CA8u;
label_154ca8:
    // 0x154ca8: 0x10000008  b           . + 4 + (0x8 << 2)
label_154cac:
    if (ctx->pc == 0x154CACu) {
        ctx->pc = 0x154CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CA8u;
        // 0x154cac: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x154CB0u;
        goto label_154cb0;
    }
    ctx->pc = 0x154CA8u;
    {
        const bool branch_taken_0x154ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CA8u;
        // 0x154cac: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ca8) {
            ctx->pc = 0x154CCCu;
            goto label_154ccc;
        }
    }
    ctx->pc = 0x154CB0u;
label_154cb0:
    // 0x154cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154cb4:
    // 0x154cb4: 0x0  nop
    ctx->pc = 0x154cb4u;
    // NOP
label_154cb8:
    // 0x154cb8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x154cb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_154cbc:
    // 0x154cbc: 0x0  nop
    ctx->pc = 0x154cbcu;
    // NOP
label_154cc0:
    // 0x154cc0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_154cc4:
    if (ctx->pc == 0x154CC4u) {
        ctx->pc = 0x154CC8u;
        goto label_154cc8;
    }
    ctx->pc = 0x154CC0u;
    {
        const bool branch_taken_0x154cc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x154cc0) {
            ctx->pc = 0x154CCCu;
            goto label_154ccc;
        }
    }
    ctx->pc = 0x154CC8u;
label_154cc8:
    // 0x154cc8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x154cc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_154ccc:
    // 0x154ccc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_154cd0:
    // 0x154cd0: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x154cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_154cd4:
    // 0x154cd4: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
label_154cd8:
    // 0x154cd8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x154cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_154cdc:
    // 0x154cdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154ce0:
    // 0x154ce0: 0xe4cc0000  swc1        $f12, 0x0($a2)
    ctx->pc = 0x154ce0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_154ce4:
    // 0x154ce4: 0xc066e14  jal         func_19B850
label_154ce8:
    if (ctx->pc == 0x154CE8u) {
        ctx->pc = 0x154CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CE4u;
        // 0x154ce8: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154CECu;
        goto label_154cec;
    }
    ctx->pc = 0x154CE4u;
    SET_GPR_U32(ctx, 31, 0x154CECu);
    ctx->pc = 0x154CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154CE4u;
    // 0x154ce8: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x154CECu;
label_154cec:
    // 0x154cec: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x154cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_154cf0:
    // 0x154cf0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154cf4:
    // 0x154cf4: 0xac20b9bc  sw          $zero, -0x4644($at)
    ctx->pc = 0x154cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949308), GPR_U32(ctx, 0));
label_154cf8:
    // 0x154cf8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_154cfc:
    // 0x154cfc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x154cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_154d00:
    // 0x154d00: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154d04:
    // 0x154d04: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x154d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_154d08:
    // 0x154d08: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x154d08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_154d0c:
    // 0x154d0c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x154d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154d10:
    // 0x154d10: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
label_154d14:
    // 0x154d14: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x154d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_154d18:
    // 0x154d18: 0x2463ba24  addiu       $v1, $v1, -0x45DC
    ctx->pc = 0x154d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949412));
label_154d1c:
    // 0x154d1c: 0xe423b9b0  swc1        $f3, -0x4650($at)
    ctx->pc = 0x154d1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949296), bits); }
label_154d20:
    // 0x154d20: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x154d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_154d24:
    // 0x154d24: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154d28:
    // 0x154d28: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_154d2c:
    // 0x154d2c: 0xe421b9b4  swc1        $f1, -0x464C($at)
    ctx->pc = 0x154d2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949300), bits); }
label_154d30:
    // 0x154d30: 0x2442ba28  addiu       $v0, $v0, -0x45D8
    ctx->pc = 0x154d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949416));
label_154d34:
    // 0x154d34: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154d38:
    // 0x154d38: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x154d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_154d3c:
    // 0x154d3c: 0xe420b9b8  swc1        $f0, -0x4648($at)
    ctx->pc = 0x154d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949304), bits); }
label_154d40:
    // 0x154d40: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x154d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_154d44:
    // 0x154d44: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x154d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154d48:
    // 0x154d48: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154d4c:
    // 0x154d4c: 0x3c0200fc  lui         $v0, 0xFC
    ctx->pc = 0x154d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)252 << 16));
label_154d50:
    // 0x154d50: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x154d50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_154d54:
    // 0x154d54: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x154d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_154d58:
    // 0x154d58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x154d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154d5c:
    // 0x154d5c: 0x0  nop
    ctx->pc = 0x154d5cu;
    // NOP
label_154d60:
    // 0x154d60: 0xe420b9a0  swc1        $f0, -0x4660($at)
    ctx->pc = 0x154d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949280), bits); }
label_154d64:
    // 0x154d64: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x154d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154d68:
    // 0x154d68: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154d6c:
    // 0x154d6c: 0xe420b9a4  swc1        $f0, -0x465C($at)
    ctx->pc = 0x154d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949284), bits); }
label_154d70:
    // 0x154d70: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x154d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154d74:
    // 0x154d74: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154d78:
    // 0x154d78: 0xe420b9a8  swc1        $f0, -0x4658($at)
    ctx->pc = 0x154d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949288), bits); }
label_154d7c:
    // 0x154d7c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154d80:
    // 0x154d80: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
label_154d84:
    if (ctx->pc == 0x154D84u) {
        ctx->pc = 0x154D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D80u;
        // 0x154d84: 0xac23b9ac  sw          $v1, -0x4654($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154D88u;
        goto label_154d88;
    }
    ctx->pc = 0x154D80u;
    {
        const bool branch_taken_0x154d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D80u;
        // 0x154d84: 0xac23b9ac  sw          $v1, -0x4654($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d80) {
            ctx->pc = 0x154F1Cu;
            goto label_154f1c;
        }
    }
    ctx->pc = 0x154D88u;
label_154d88:
    // 0x154d88: 0x8f828620  lw          $v0, -0x79E0($gp)
    ctx->pc = 0x154d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936096)));
label_154d8c:
    // 0x154d8c: 0x121c82  srl         $v1, $s2, 18
    ctx->pc = 0x154d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
label_154d90:
    // 0x154d90: 0x3072003f  andi        $s2, $v1, 0x3F
    ctx->pc = 0x154d90u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_154d94:
    // 0x154d94: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x154d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_154d98:
    // 0x154d98: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x154d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154d9c:
    // 0x154d9c: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x154d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_154da0:
    // 0x154da0: 0x2466ffe0  addiu       $a2, $v1, -0x20
    ctx->pc = 0x154da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_154da4:
    // 0x154da4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x154da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_154da8:
    // 0x154da8: 0xac62fff0  sw          $v0, -0x10($v1)
    ctx->pc = 0x154da8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), GPR_U32(ctx, 2));
label_154dac:
    // 0x154dac: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x154dacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_154db0:
    // 0x154db0: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x154db0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_154db4:
    // 0x154db4: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x154db4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_154db8:
    // 0x154db8: 0x4a0002ff  vnop
    ctx->pc = 0x154db8u;
    // NOP operation, no action needed for VU0
label_154dbc:
    // 0x154dbc: 0x4a0002ff  vnop
    ctx->pc = 0x154dbcu;
    // NOP operation, no action needed for VU0
label_154dc0:
    // 0x154dc0: 0x4a0002ff  vnop
    ctx->pc = 0x154dc0u;
    // NOP operation, no action needed for VU0
label_154dc4:
    // 0x154dc4: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x154dc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_154dc8:
    // 0x154dc8: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x154dc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_154dcc:
    // 0x154dcc: 0x4a0002ff  vnop
    ctx->pc = 0x154dccu;
    // NOP operation, no action needed for VU0
label_154dd0:
    // 0x154dd0: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x154dd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_154dd4:
    // 0x154dd4: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x154dd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_154dd8:
    // 0x154dd8: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x154dd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_154ddc:
    // 0x154ddc: 0x4a0002ff  vnop
    ctx->pc = 0x154ddcu;
    // NOP operation, no action needed for VU0
label_154de0:
    // 0x154de0: 0x4a0002ff  vnop
    ctx->pc = 0x154de0u;
    // NOP operation, no action needed for VU0
label_154de4:
    // 0x154de4: 0x4a0002ff  vnop
    ctx->pc = 0x154de4u;
    // NOP operation, no action needed for VU0
label_154de8:
    // 0x154de8: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x154de8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_154dec:
    // 0x154dec: 0x4a0003bf  vwaitq
    ctx->pc = 0x154decu;
    // VWAITQ (Q already resolved in this runtime)
label_154df0:
    // 0x154df0: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x154df0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_154df4:
    // 0x154df4: 0x4489a000  mtc1        $t1, $f20
    ctx->pc = 0x154df4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_154df8:
    // 0x154df8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x154df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_154dfc:
    // 0x154dfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154e00:
    // 0x154e00: 0x0  nop
    ctx->pc = 0x154e00u;
    // NOP
label_154e04:
    // 0x154e04: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x154e04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_154e08:
    // 0x154e08: 0x0  nop
    ctx->pc = 0x154e08u;
    // NOP
label_154e0c:
    // 0x154e0c: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_154e10:
    if (ctx->pc == 0x154E10u) {
        ctx->pc = 0x154E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E0Cu;
        // 0x154e10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154E14u;
        goto label_154e14;
    }
    ctx->pc = 0x154E0Cu;
    {
        const bool branch_taken_0x154e0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x154E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E0Cu;
        // 0x154e10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e0c) {
            ctx->pc = 0x154E70u;
            goto label_154e70;
        }
    }
    ctx->pc = 0x154E14u;
label_154e14:
    // 0x154e14: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154e18:
    // 0x154e18: 0xe421b9cc  swc1        $f1, -0x4634($at)
    ctx->pc = 0x154e18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949324), bits); }
label_154e1c:
    // 0x154e1c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154e20:
    // 0x154e20: 0xe422b9dc  swc1        $f2, -0x4624($at)
    ctx->pc = 0x154e20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949340), bits); }
label_154e24:
    // 0x154e24: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x154e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_154e28:
    // 0x154e28: 0xc4222fa0  lwc1        $f2, 0x2FA0($at)
    ctx->pc = 0x154e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 12192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_154e2c:
    // 0x154e2c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x154e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_154e30:
    // 0x154e30: 0xc4212fa4  lwc1        $f1, 0x2FA4($at)
    ctx->pc = 0x154e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 12196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_154e34:
    // 0x154e34: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x154e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_154e38:
    // 0x154e38: 0xc4202fa8  lwc1        $f0, 0x2FA8($at)
    ctx->pc = 0x154e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 12200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154e3c:
    // 0x154e3c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154e40:
    // 0x154e40: 0xe422b9c0  swc1        $f2, -0x4640($at)
    ctx->pc = 0x154e40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949312), bits); }
label_154e44:
    // 0x154e44: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154e48:
    // 0x154e48: 0xe422b9d0  swc1        $f2, -0x4630($at)
    ctx->pc = 0x154e48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949328), bits); }
label_154e4c:
    // 0x154e4c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154e50:
    // 0x154e50: 0xe421b9c4  swc1        $f1, -0x463C($at)
    ctx->pc = 0x154e50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949316), bits); }
label_154e54:
    // 0x154e54: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154e58:
    // 0x154e58: 0xe421b9d4  swc1        $f1, -0x462C($at)
    ctx->pc = 0x154e58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949332), bits); }
label_154e5c:
    // 0x154e5c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154e60:
    // 0x154e60: 0xe420b9c8  swc1        $f0, -0x4638($at)
    ctx->pc = 0x154e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949320), bits); }
label_154e64:
    // 0x154e64: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154e68:
    // 0x154e68: 0x10000042  b           . + 4 + (0x42 << 2)
label_154e6c:
    if (ctx->pc == 0x154E6Cu) {
        ctx->pc = 0x154E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E68u;
        // 0x154e6c: 0xe420b9d8  swc1        $f0, -0x4628($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949336), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x154E70u;
        goto label_154e70;
    }
    ctx->pc = 0x154E68u;
    {
        const bool branch_taken_0x154e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E68u;
        // 0x154e6c: 0xe420b9d8  swc1        $f0, -0x4628($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949336), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e68) {
            ctx->pc = 0x154F74u;
            goto label_154f74;
        }
    }
    ctx->pc = 0x154E70u;
label_154e70:
    // 0x154e70: 0xc066e08  jal         func_19B820
label_154e74:
    if (ctx->pc == 0x154E74u) {
        ctx->pc = 0x154E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E70u;
        // 0x154e74: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154E78u;
        goto label_154e78;
    }
    ctx->pc = 0x154E70u;
    SET_GPR_U32(ctx, 31, 0x154E78u);
    ctx->pc = 0x154E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154E70u;
    // 0x154e74: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x154E78u;
label_154e78:
    // 0x154e78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x154e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_154e7c:
    // 0x154e7c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154e80:
    // 0x154e80: 0xac22b9cc  sw          $v0, -0x4634($at)
    ctx->pc = 0x154e80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949324), GPR_U32(ctx, 2));
label_154e84:
    // 0x154e84: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x154e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_154e88:
    // 0x154e88: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x154e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_154e8c:
    // 0x154e8c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154e90:
    // 0x154e90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x154e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_154e94:
    // 0x154e94: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x154e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_154e98:
    // 0x154e98: 0xc7a40050  lwc1        $f4, 0x50($sp)
    ctx->pc = 0x154e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_154e9c:
    // 0x154e9c: 0x24a5ba10  addiu       $a1, $a1, -0x45F0
    ctx->pc = 0x154e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949392));
label_154ea0:
    // 0x154ea0: 0x46140801  sub.s       $f0, $f1, $f20
    ctx->pc = 0x154ea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_154ea4:
    // 0x154ea4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x154ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_154ea8:
    // 0x154ea8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x154ea8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
label_154eac:
    // 0x154eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x154eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_154eb0:
    // 0x154eb0: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x154eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_154eb4:
    // 0x154eb4: 0xe424b9c0  swc1        $f4, -0x4640($at)
    ctx->pc = 0x154eb4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949312), bits); }
label_154eb8:
    // 0x154eb8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154ebc:
    // 0x154ebc: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x154ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_154ec0:
    // 0x154ec0: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x154ec0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_154ec4:
    // 0x154ec4: 0xe423b9c4  swc1        $f3, -0x463C($at)
    ctx->pc = 0x154ec4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949316), bits); }
label_154ec8:
    // 0x154ec8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154ecc:
    // 0x154ecc: 0xc066e14  jal         func_19B850
label_154ed0:
    if (ctx->pc == 0x154ED0u) {
        ctx->pc = 0x154ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154ECCu;
        // 0x154ed0: 0xe422b9c8  swc1        $f2, -0x4638($at) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949320), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x154ED4u;
        goto label_154ed4;
    }
    ctx->pc = 0x154ECCu;
    SET_GPR_U32(ctx, 31, 0x154ED4u);
    ctx->pc = 0x154ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154ECCu;
    // 0x154ed0: 0xe422b9c8  swc1        $f2, -0x4638($at) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949320), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x154ED4u;
label_154ed4:
    // 0x154ed4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x154ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_154ed8:
    // 0x154ed8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x154ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_154edc:
    // 0x154edc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x154edcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_154ee0:
    // 0x154ee0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x154ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_154ee4:
    // 0x154ee4: 0xc066efe  jal         func_19BBF8
label_154ee8:
    if (ctx->pc == 0x154EE8u) {
        ctx->pc = 0x154EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EE4u;
        // 0x154ee8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154EECu;
        goto label_154eec;
    }
    ctx->pc = 0x154EE4u;
    SET_GPR_U32(ctx, 31, 0x154EECu);
    ctx->pc = 0x154EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154EE4u;
    // 0x154ee8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBF8u;
    { ctx->pc = 0x19bbf8; return; }
    ctx->pc = 0x154EECu;
label_154eec:
    // 0x154eec: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x154eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_154ef0:
    // 0x154ef0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154ef4:
    // 0x154ef4: 0xac20b9dc  sw          $zero, -0x4624($at)
    ctx->pc = 0x154ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949340), GPR_U32(ctx, 0));
label_154ef8:
    // 0x154ef8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x154ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_154efc:
    // 0x154efc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154f00:
    // 0x154f00: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x154f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154f04:
    // 0x154f04: 0xe422b9d0  swc1        $f2, -0x4630($at)
    ctx->pc = 0x154f04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949328), bits); }
label_154f08:
    // 0x154f08: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154f0c:
    // 0x154f0c: 0xe421b9d4  swc1        $f1, -0x462C($at)
    ctx->pc = 0x154f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949332), bits); }
label_154f10:
    // 0x154f10: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154f14:
    // 0x154f14: 0x10000017  b           . + 4 + (0x17 << 2)
label_154f18:
    if (ctx->pc == 0x154F18u) {
        ctx->pc = 0x154F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F14u;
        // 0x154f18: 0xe420b9d8  swc1        $f0, -0x4628($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949336), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x154F1Cu;
        goto label_154f1c;
    }
    ctx->pc = 0x154F14u;
    {
        const bool branch_taken_0x154f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F14u;
        // 0x154f18: 0xe420b9d8  swc1        $f0, -0x4628($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949336), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f14) {
            ctx->pc = 0x154F74u;
            goto label_154f74;
        }
    }
    ctx->pc = 0x154F1Cu;
label_154f1c:
    // 0x154f1c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154f20:
    // 0x154f20: 0xe421b9cc  swc1        $f1, -0x4634($at)
    ctx->pc = 0x154f20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949324), bits); }
label_154f24:
    // 0x154f24: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154f28:
    // 0x154f28: 0xe422b9dc  swc1        $f2, -0x4624($at)
    ctx->pc = 0x154f28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949340), bits); }
label_154f2c:
    // 0x154f2c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x154f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_154f30:
    // 0x154f30: 0xc4222fa0  lwc1        $f2, 0x2FA0($at)
    ctx->pc = 0x154f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 12192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_154f34:
    // 0x154f34: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x154f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_154f38:
    // 0x154f38: 0xc4212fa4  lwc1        $f1, 0x2FA4($at)
    ctx->pc = 0x154f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 12196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_154f3c:
    // 0x154f3c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x154f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_154f40:
    // 0x154f40: 0xc4202fa8  lwc1        $f0, 0x2FA8($at)
    ctx->pc = 0x154f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 12200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154f44:
    // 0x154f44: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154f48:
    // 0x154f48: 0xe422b9c0  swc1        $f2, -0x4640($at)
    ctx->pc = 0x154f48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949312), bits); }
label_154f4c:
    // 0x154f4c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154f50:
    // 0x154f50: 0xe422b9d0  swc1        $f2, -0x4630($at)
    ctx->pc = 0x154f50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949328), bits); }
label_154f54:
    // 0x154f54: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154f58:
    // 0x154f58: 0xe421b9c4  swc1        $f1, -0x463C($at)
    ctx->pc = 0x154f58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949316), bits); }
label_154f5c:
    // 0x154f5c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154f60:
    // 0x154f60: 0xe421b9d4  swc1        $f1, -0x462C($at)
    ctx->pc = 0x154f60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949332), bits); }
label_154f64:
    // 0x154f64: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154f68:
    // 0x154f68: 0xe420b9c8  swc1        $f0, -0x4638($at)
    ctx->pc = 0x154f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949320), bits); }
label_154f6c:
    // 0x154f6c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154f70:
    // 0x154f70: 0xe420b9d8  swc1        $f0, -0x4628($at)
    ctx->pc = 0x154f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949336), bits); }
label_154f74:
    // 0x154f74: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x154f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_154f78:
    // 0x154f78: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x154f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_154f7c:
    // 0x154f7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x154f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_154f80:
    // 0x154f80: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x154f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_154f84:
    // 0x154f84: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_154f88:
    // 0x154f88: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
label_154f8c:
    // 0x154f8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154f90:
    // 0x154f90: 0xc066e14  jal         func_19B850
label_154f94:
    if (ctx->pc == 0x154F94u) {
        ctx->pc = 0x154F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F90u;
        // 0x154f94: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154F98u;
        goto label_154f98;
    }
    ctx->pc = 0x154F90u;
    SET_GPR_U32(ctx, 31, 0x154F98u);
    ctx->pc = 0x154F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F90u;
    // 0x154f94: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x154F98u;
label_154f98:
    // 0x154f98: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x154f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_154f9c:
    // 0x154f9c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x154f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_154fa0:
    // 0x154fa0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154fa4:
    // 0x154fa4: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x154fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_154fa8:
    // 0x154fa8: 0xac23ba0c  sw          $v1, -0x45F4($at)
    ctx->pc = 0x154fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949388), GPR_U32(ctx, 3));
label_154fac:
    // 0x154fac: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154fb0:
    // 0x154fb0: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x154fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_154fb4:
    // 0x154fb4: 0xe422ba00  swc1        $f2, -0x4600($at)
    ctx->pc = 0x154fb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949376), bits); }
label_154fb8:
    // 0x154fb8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154fbc:
    // 0x154fbc: 0xe421ba04  swc1        $f1, -0x45FC($at)
    ctx->pc = 0x154fbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949380), bits); }
label_154fc0:
    // 0x154fc0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_154fc4:
    // 0x154fc4: 0xe420ba08  swc1        $f0, -0x45F8($at)
    ctx->pc = 0x154fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949384), bits); }
label_154fc8:
    // 0x154fc8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x154fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_154fcc:
    // 0x154fcc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x154fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_154fd0:
    // 0x154fd0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x154fd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_154fd4:
    // 0x154fd4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x154fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_154fd8:
    // 0x154fd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x154fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_154fdc:
    // 0x154fdc: 0x3e00008  jr          $ra
label_154fe0:
    if (ctx->pc == 0x154FE0u) {
        ctx->pc = 0x154FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FDCu;
        // 0x154fe0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154FE4u;
        goto label_154fe4;
    }
    ctx->pc = 0x154FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FDCu;
        // 0x154fe0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154FE4u;
label_154fe4:
    // 0x154fe4: 0x0  nop
    ctx->pc = 0x154fe4u;
    // NOP
label_154fe8:
    // 0x154fe8: 0x0  nop
    ctx->pc = 0x154fe8u;
    // NOP
label_154fec:
    // 0x154fec: 0x0  nop
    ctx->pc = 0x154fecu;
    // NOP
label_154ff0:
    // 0x154ff0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x154ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_154ff4:
    // 0x154ff4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x154ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_154ff8:
    // 0x154ff8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x154ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_154ffc:
    // 0x154ffc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x154ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_155000:
    // 0x155000: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x155000u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_155004:
    // 0x155004: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x155004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_155008:
    // 0x155008: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x155008u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15500c:
    // 0x15500c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15500cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_155010:
    // 0x155010: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x155010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_155014:
    // 0x155014: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_155018:
    // 0x155018: 0x10000014  b           . + 4 + (0x14 << 2)
label_15501c:
    if (ctx->pc == 0x15501Cu) {
        ctx->pc = 0x15501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155018u;
        // 0x15501c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155020u;
        goto label_155020;
    }
    ctx->pc = 0x155018u;
    {
        const bool branch_taken_0x155018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155018u;
        // 0x15501c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155018) {
            ctx->pc = 0x15506Cu;
            goto label_15506c;
        }
    }
    ctx->pc = 0x155020u;
label_155020:
    // 0x155020: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x155020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_155024:
    // 0x155024: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x155024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_155028:
    // 0x155028: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x155028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_15502c:
    // 0x15502c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x15502cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_155030:
    // 0x155030: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x155030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_155034:
    // 0x155034: 0x2442b9a0  addiu       $v0, $v0, -0x4660
    ctx->pc = 0x155034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949280));
label_155038:
    // 0x155038: 0xc066e26  jal         func_19B898
label_15503c:
    if (ctx->pc == 0x15503Cu) {
        ctx->pc = 0x15503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155038u;
        // 0x15503c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155040u;
        goto label_155040;
    }
    ctx->pc = 0x155038u;
    SET_GPR_U32(ctx, 31, 0x155040u);
    ctx->pc = 0x15503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155038u;
    // 0x15503c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x155040u;
label_155040:
    // 0x155040: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x155040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_155044:
    // 0x155044: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x155044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_155048:
    // 0x155048: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x155048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15504c:
    // 0x15504c: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x15504cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_155050:
    // 0x155050: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x155050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_155054:
    // 0x155054: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x155054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_155058:
    // 0x155058: 0x2442b9a0  addiu       $v0, $v0, -0x4660
    ctx->pc = 0x155058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949280));
label_15505c:
    // 0x15505c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15505cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_155060:
    // 0x155060: 0xc066e26  jal         func_19B898
label_155064:
    if (ctx->pc == 0x155064u) {
        ctx->pc = 0x155064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155060u;
        // 0x155064: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155068u;
        goto label_155068;
    }
    ctx->pc = 0x155060u;
    SET_GPR_U32(ctx, 31, 0x155068u);
    ctx->pc = 0x155064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155060u;
    // 0x155064: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x155068u;
label_155068:
    // 0x155068: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x155068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15506c:
    // 0x15506c: 0x0  nop
    ctx->pc = 0x15506cu;
    // NOP
label_155070:
    // 0x155070: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x155070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_155074:
    // 0x155074: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_155078:
    if (ctx->pc == 0x155078u) {
        ctx->pc = 0x155078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155074u;
        // 0x155078: 0x101900  sll         $v1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15507Cu;
        goto label_15507c;
    }
    ctx->pc = 0x155074u;
    {
        const bool branch_taken_0x155074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155074u;
        // 0x155078: 0x101900  sll         $v1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155074) {
            ctx->pc = 0x155020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155020;
        }
    }
    ctx->pc = 0x15507Cu;
label_15507c:
    // 0x15507c: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x15507cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
label_155080:
    // 0x155080: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x155080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155084:
    // 0x155084: 0x1000003a  b           . + 4 + (0x3A << 2)
label_155088:
    if (ctx->pc == 0x155088u) {
        ctx->pc = 0x155088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155084u;
        // 0x155088: 0x2631b970  addiu       $s1, $s1, -0x4690 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15508Cu;
        goto label_15508c;
    }
    ctx->pc = 0x155084u;
    {
        const bool branch_taken_0x155084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155084u;
        // 0x155088: 0x2631b970  addiu       $s1, $s1, -0x4690 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155084) {
            ctx->pc = 0x155170u;
            { ctx->pc = 0x155170; return; }
        }
    }
    ctx->pc = 0x15508Cu;
label_15508c:
    // 0x15508c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x15508cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_155090:
    // 0x155090: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_155094:
    if (ctx->pc == 0x155094u) {
        ctx->pc = 0x155098u;
        goto label_155098;
    }
    ctx->pc = 0x155090u;
    {
        const bool branch_taken_0x155090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155090) {
            ctx->pc = 0x1550A0u;
            goto label_1550a0;
        }
    }
    ctx->pc = 0x155098u;
label_155098:
    // 0x155098: 0x10000032  b           . + 4 + (0x32 << 2)
label_15509c:
    if (ctx->pc == 0x15509Cu) {
        ctx->pc = 0x1550A0u;
        goto label_1550a0;
    }
    ctx->pc = 0x155098u;
    {
        const bool branch_taken_0x155098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155098) {
            ctx->pc = 0x155164u;
            { ctx->pc = 0x155164; return; }
        }
    }
    ctx->pc = 0x1550A0u;
label_1550a0:
    // 0x1550a0: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1550a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1550a4:
    // 0x1550a4: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1550a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1550a8:
    // 0x1550a8: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1550a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1550ac:
    // 0x1550ac: 0x4a0002ff  vnop
    ctx->pc = 0x1550acu;
    // NOP operation, no action needed for VU0
label_1550b0:
    // 0x1550b0: 0x4a0002ff  vnop
    ctx->pc = 0x1550b0u;
    // NOP operation, no action needed for VU0
label_1550b4:
    // 0x1550b4: 0x4a0002ff  vnop
    ctx->pc = 0x1550b4u;
    // NOP operation, no action needed for VU0
label_1550b8:
    // 0x1550b8: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x1550b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1550bc:
    // 0x1550bc: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x1550bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1550c0:
    // 0x1550c0: 0x4a0002ff  vnop
    ctx->pc = 0x1550c0u;
    // NOP operation, no action needed for VU0
label_1550c4:
    // 0x1550c4: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x1550c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1550c8:
    // 0x1550c8: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x1550c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1550cc:
    // 0x1550cc: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x1550ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1550d0:
    // 0x1550d0: 0x4a0002ff  vnop
    ctx->pc = 0x1550d0u;
    // NOP operation, no action needed for VU0
label_1550d4:
    // 0x1550d4: 0x4a0002ff  vnop
    ctx->pc = 0x1550d4u;
    // NOP operation, no action needed for VU0
label_1550d8:
    // 0x1550d8: 0x4a0002ff  vnop
    ctx->pc = 0x1550d8u;
    // NOP operation, no action needed for VU0
label_1550dc:
    // 0x1550dc: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1550dcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1550e0:
    // 0x1550e0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1550e0u;
    // VWAITQ (Q already resolved in this runtime)
label_1550e4:
    // 0x1550e4: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x1550e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1550e8:
    // 0x1550e8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1550e8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1550ec:
    // 0x1550ec: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x1550ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1550f0:
    // 0x1550f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1550f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1550f4:
    // 0x1550f4: 0x0  nop
    ctx->pc = 0x1550f4u;
    // NOP
label_1550f8:
    // 0x1550f8: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_1550fc:
    if (ctx->pc == 0x1550FCu) {
        ctx->pc = 0x155100u;
        goto label_155100;
    }
    ctx->pc = 0x1550F8u;
    {
        const bool branch_taken_0x1550f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1550f8) {
            ctx->pc = 0x155164u;
            { ctx->pc = 0x155164; return; }
        }
    }
    ctx->pc = 0x155100u;
label_155100:
    // 0x155100: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x155100u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_155104:
    // 0x155104: 0x0  nop
    ctx->pc = 0x155104u;
    // NOP
label_155108:
    // 0x155108: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x155108u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
label_15510c:
    // 0x15510c: 0x0  nop
    ctx->pc = 0x15510cu;
    // NOP
label_155110:
    // 0x155110: 0x0  nop
    ctx->pc = 0x155110u;
    // NOP
label_155114:
    // 0x155114: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_155118:
    if (ctx->pc == 0x155118u) {
        ctx->pc = 0x15511Cu;
        goto label_15511c;
    }
    ctx->pc = 0x155114u;
    {
        const bool branch_taken_0x155114 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x155114) {
            ctx->pc = 0x155138u;
            { ctx->pc = 0x155138; return; }
        }
    }
    ctx->pc = 0x15511Cu;
label_15511c:
    // 0x15511c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x15511cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_155120:
    // 0x155120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x155120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_155124:
    // 0x155124: 0x0  nop
    ctx->pc = 0x155124u;
    // NOP
label_155128:
    // 0x155128: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x155128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15512c:
    // 0x15512c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15512cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    ctx->pc = 0x155130u;
    return;
}
