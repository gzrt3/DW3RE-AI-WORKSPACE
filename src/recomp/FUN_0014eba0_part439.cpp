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


void FUN_0014eba0_part439(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x224980u: goto label_224980;
        case 0x224984u: goto label_224984;
        case 0x224988u: goto label_224988;
        case 0x22498cu: goto label_22498c;
        case 0x224990u: goto label_224990;
        case 0x224994u: goto label_224994;
        case 0x224998u: goto label_224998;
        case 0x22499cu: goto label_22499c;
        case 0x2249a0u: goto label_2249a0;
        case 0x2249a4u: goto label_2249a4;
        case 0x2249a8u: goto label_2249a8;
        case 0x2249acu: goto label_2249ac;
        case 0x2249b0u: goto label_2249b0;
        case 0x2249b4u: goto label_2249b4;
        case 0x2249b8u: goto label_2249b8;
        case 0x2249bcu: goto label_2249bc;
        case 0x2249c0u: goto label_2249c0;
        case 0x2249c4u: goto label_2249c4;
        case 0x2249c8u: goto label_2249c8;
        case 0x2249ccu: goto label_2249cc;
        case 0x2249d0u: goto label_2249d0;
        case 0x2249d4u: goto label_2249d4;
        case 0x2249d8u: goto label_2249d8;
        case 0x2249dcu: goto label_2249dc;
        case 0x2249e0u: goto label_2249e0;
        case 0x2249e4u: goto label_2249e4;
        case 0x2249e8u: goto label_2249e8;
        case 0x2249ecu: goto label_2249ec;
        case 0x2249f0u: goto label_2249f0;
        case 0x2249f4u: goto label_2249f4;
        case 0x2249f8u: goto label_2249f8;
        case 0x2249fcu: goto label_2249fc;
        case 0x224a00u: goto label_224a00;
        case 0x224a04u: goto label_224a04;
        case 0x224a08u: goto label_224a08;
        case 0x224a0cu: goto label_224a0c;
        case 0x224a10u: goto label_224a10;
        case 0x224a14u: goto label_224a14;
        case 0x224a18u: goto label_224a18;
        case 0x224a1cu: goto label_224a1c;
        case 0x224a20u: goto label_224a20;
        case 0x224a24u: goto label_224a24;
        case 0x224a28u: goto label_224a28;
        case 0x224a2cu: goto label_224a2c;
        case 0x224a30u: goto label_224a30;
        case 0x224a34u: goto label_224a34;
        case 0x224a38u: goto label_224a38;
        case 0x224a3cu: goto label_224a3c;
        case 0x224a40u: goto label_224a40;
        case 0x224a44u: goto label_224a44;
        case 0x224a48u: goto label_224a48;
        case 0x224a4cu: goto label_224a4c;
        case 0x224a50u: goto label_224a50;
        case 0x224a54u: goto label_224a54;
        case 0x224a58u: goto label_224a58;
        case 0x224a5cu: goto label_224a5c;
        case 0x224a60u: goto label_224a60;
        case 0x224a64u: goto label_224a64;
        case 0x224a68u: goto label_224a68;
        case 0x224a6cu: goto label_224a6c;
        case 0x224a70u: goto label_224a70;
        case 0x224a74u: goto label_224a74;
        case 0x224a78u: goto label_224a78;
        case 0x224a7cu: goto label_224a7c;
        case 0x224a80u: goto label_224a80;
        case 0x224a84u: goto label_224a84;
        case 0x224a88u: goto label_224a88;
        case 0x224a8cu: goto label_224a8c;
        case 0x224a90u: goto label_224a90;
        case 0x224a94u: goto label_224a94;
        case 0x224a98u: goto label_224a98;
        case 0x224a9cu: goto label_224a9c;
        case 0x224aa0u: goto label_224aa0;
        case 0x224aa4u: goto label_224aa4;
        case 0x224aa8u: goto label_224aa8;
        case 0x224aacu: goto label_224aac;
        case 0x224ab0u: goto label_224ab0;
        case 0x224ab4u: goto label_224ab4;
        case 0x224ab8u: goto label_224ab8;
        case 0x224abcu: goto label_224abc;
        case 0x224ac0u: goto label_224ac0;
        case 0x224ac4u: goto label_224ac4;
        case 0x224ac8u: goto label_224ac8;
        case 0x224accu: goto label_224acc;
        case 0x224ad0u: goto label_224ad0;
        case 0x224ad4u: goto label_224ad4;
        case 0x224ad8u: goto label_224ad8;
        case 0x224adcu: goto label_224adc;
        case 0x224ae0u: goto label_224ae0;
        case 0x224ae4u: goto label_224ae4;
        case 0x224ae8u: goto label_224ae8;
        case 0x224aecu: goto label_224aec;
        case 0x224af0u: goto label_224af0;
        case 0x224af4u: goto label_224af4;
        case 0x224af8u: goto label_224af8;
        case 0x224afcu: goto label_224afc;
        case 0x224b00u: goto label_224b00;
        case 0x224b04u: goto label_224b04;
        case 0x224b08u: goto label_224b08;
        case 0x224b0cu: goto label_224b0c;
        case 0x224b10u: goto label_224b10;
        case 0x224b14u: goto label_224b14;
        case 0x224b18u: goto label_224b18;
        case 0x224b1cu: goto label_224b1c;
        case 0x224b20u: goto label_224b20;
        case 0x224b24u: goto label_224b24;
        case 0x224b28u: goto label_224b28;
        case 0x224b2cu: goto label_224b2c;
        case 0x224b30u: goto label_224b30;
        case 0x224b34u: goto label_224b34;
        case 0x224b38u: goto label_224b38;
        case 0x224b3cu: goto label_224b3c;
        case 0x224b40u: goto label_224b40;
        case 0x224b44u: goto label_224b44;
        case 0x224b48u: goto label_224b48;
        case 0x224b4cu: goto label_224b4c;
        case 0x224b50u: goto label_224b50;
        case 0x224b54u: goto label_224b54;
        case 0x224b58u: goto label_224b58;
        case 0x224b5cu: goto label_224b5c;
        case 0x224b60u: goto label_224b60;
        case 0x224b64u: goto label_224b64;
        case 0x224b68u: goto label_224b68;
        case 0x224b6cu: goto label_224b6c;
        case 0x224b70u: goto label_224b70;
        case 0x224b74u: goto label_224b74;
        case 0x224b78u: goto label_224b78;
        case 0x224b7cu: goto label_224b7c;
        case 0x224b80u: goto label_224b80;
        case 0x224b84u: goto label_224b84;
        case 0x224b88u: goto label_224b88;
        case 0x224b8cu: goto label_224b8c;
        case 0x224b90u: goto label_224b90;
        case 0x224b94u: goto label_224b94;
        case 0x224b98u: goto label_224b98;
        case 0x224b9cu: goto label_224b9c;
        case 0x224ba0u: goto label_224ba0;
        case 0x224ba4u: goto label_224ba4;
        case 0x224ba8u: goto label_224ba8;
        case 0x224bacu: goto label_224bac;
        case 0x224bb0u: goto label_224bb0;
        case 0x224bb4u: goto label_224bb4;
        case 0x224bb8u: goto label_224bb8;
        case 0x224bbcu: goto label_224bbc;
        case 0x224bc0u: goto label_224bc0;
        case 0x224bc4u: goto label_224bc4;
        case 0x224bc8u: goto label_224bc8;
        case 0x224bccu: goto label_224bcc;
        case 0x224bd0u: goto label_224bd0;
        case 0x224bd4u: goto label_224bd4;
        case 0x224bd8u: goto label_224bd8;
        case 0x224bdcu: goto label_224bdc;
        case 0x224be0u: goto label_224be0;
        case 0x224be4u: goto label_224be4;
        case 0x224be8u: goto label_224be8;
        case 0x224becu: goto label_224bec;
        case 0x224bf0u: goto label_224bf0;
        case 0x224bf4u: goto label_224bf4;
        case 0x224bf8u: goto label_224bf8;
        case 0x224bfcu: goto label_224bfc;
        case 0x224c00u: goto label_224c00;
        case 0x224c04u: goto label_224c04;
        case 0x224c08u: goto label_224c08;
        case 0x224c0cu: goto label_224c0c;
        case 0x224c10u: goto label_224c10;
        case 0x224c14u: goto label_224c14;
        case 0x224c18u: goto label_224c18;
        case 0x224c1cu: goto label_224c1c;
        case 0x224c20u: goto label_224c20;
        case 0x224c24u: goto label_224c24;
        case 0x224c28u: goto label_224c28;
        case 0x224c2cu: goto label_224c2c;
        case 0x224c30u: goto label_224c30;
        case 0x224c34u: goto label_224c34;
        case 0x224c38u: goto label_224c38;
        case 0x224c3cu: goto label_224c3c;
        case 0x224c40u: goto label_224c40;
        case 0x224c44u: goto label_224c44;
        case 0x224c48u: goto label_224c48;
        case 0x224c4cu: goto label_224c4c;
        case 0x224c50u: goto label_224c50;
        case 0x224c54u: goto label_224c54;
        case 0x224c58u: goto label_224c58;
        case 0x224c5cu: goto label_224c5c;
        case 0x224c60u: goto label_224c60;
        case 0x224c64u: goto label_224c64;
        case 0x224c68u: goto label_224c68;
        case 0x224c6cu: goto label_224c6c;
        case 0x224c70u: goto label_224c70;
        case 0x224c74u: goto label_224c74;
        case 0x224c78u: goto label_224c78;
        case 0x224c7cu: goto label_224c7c;
        case 0x224c80u: goto label_224c80;
        case 0x224c84u: goto label_224c84;
        case 0x224c88u: goto label_224c88;
        case 0x224c8cu: goto label_224c8c;
        case 0x224c90u: goto label_224c90;
        case 0x224c94u: goto label_224c94;
        case 0x224c98u: goto label_224c98;
        case 0x224c9cu: goto label_224c9c;
        case 0x224ca0u: goto label_224ca0;
        case 0x224ca4u: goto label_224ca4;
        case 0x224ca8u: goto label_224ca8;
        case 0x224cacu: goto label_224cac;
        case 0x224cb0u: goto label_224cb0;
        case 0x224cb4u: goto label_224cb4;
        case 0x224cb8u: goto label_224cb8;
        case 0x224cbcu: goto label_224cbc;
        case 0x224cc0u: goto label_224cc0;
        case 0x224cc4u: goto label_224cc4;
        case 0x224cc8u: goto label_224cc8;
        case 0x224cccu: goto label_224ccc;
        case 0x224cd0u: goto label_224cd0;
        case 0x224cd4u: goto label_224cd4;
        case 0x224cd8u: goto label_224cd8;
        case 0x224cdcu: goto label_224cdc;
        case 0x224ce0u: goto label_224ce0;
        case 0x224ce4u: goto label_224ce4;
        case 0x224ce8u: goto label_224ce8;
        case 0x224cecu: goto label_224cec;
        case 0x224cf0u: goto label_224cf0;
        case 0x224cf4u: goto label_224cf4;
        case 0x224cf8u: goto label_224cf8;
        case 0x224cfcu: goto label_224cfc;
        case 0x224d00u: goto label_224d00;
        case 0x224d04u: goto label_224d04;
        case 0x224d08u: goto label_224d08;
        case 0x224d0cu: goto label_224d0c;
        case 0x224d10u: goto label_224d10;
        case 0x224d14u: goto label_224d14;
        case 0x224d18u: goto label_224d18;
        case 0x224d1cu: goto label_224d1c;
        case 0x224d20u: goto label_224d20;
        case 0x224d24u: goto label_224d24;
        case 0x224d28u: goto label_224d28;
        case 0x224d2cu: goto label_224d2c;
        case 0x224d30u: goto label_224d30;
        case 0x224d34u: goto label_224d34;
        case 0x224d38u: goto label_224d38;
        case 0x224d3cu: goto label_224d3c;
        case 0x224d40u: goto label_224d40;
        case 0x224d44u: goto label_224d44;
        case 0x224d48u: goto label_224d48;
        case 0x224d4cu: goto label_224d4c;
        case 0x224d50u: goto label_224d50;
        case 0x224d54u: goto label_224d54;
        case 0x224d58u: goto label_224d58;
        case 0x224d5cu: goto label_224d5c;
        case 0x224d60u: goto label_224d60;
        case 0x224d64u: goto label_224d64;
        case 0x224d68u: goto label_224d68;
        case 0x224d6cu: goto label_224d6c;
        case 0x224d70u: goto label_224d70;
        case 0x224d74u: goto label_224d74;
        case 0x224d78u: goto label_224d78;
        case 0x224d7cu: goto label_224d7c;
        case 0x224d80u: goto label_224d80;
        case 0x224d84u: goto label_224d84;
        case 0x224d88u: goto label_224d88;
        case 0x224d8cu: goto label_224d8c;
        case 0x224d90u: goto label_224d90;
        case 0x224d94u: goto label_224d94;
        case 0x224d98u: goto label_224d98;
        case 0x224d9cu: goto label_224d9c;
        case 0x224da0u: goto label_224da0;
        case 0x224da4u: goto label_224da4;
        case 0x224da8u: goto label_224da8;
        case 0x224dacu: goto label_224dac;
        case 0x224db0u: goto label_224db0;
        case 0x224db4u: goto label_224db4;
        case 0x224db8u: goto label_224db8;
        case 0x224dbcu: goto label_224dbc;
        case 0x224dc0u: goto label_224dc0;
        case 0x224dc4u: goto label_224dc4;
        case 0x224dc8u: goto label_224dc8;
        case 0x224dccu: goto label_224dcc;
        case 0x224dd0u: goto label_224dd0;
        case 0x224dd4u: goto label_224dd4;
        case 0x224dd8u: goto label_224dd8;
        case 0x224ddcu: goto label_224ddc;
        case 0x224de0u: goto label_224de0;
        case 0x224de4u: goto label_224de4;
        case 0x224de8u: goto label_224de8;
        case 0x224decu: goto label_224dec;
        case 0x224df0u: goto label_224df0;
        case 0x224df4u: goto label_224df4;
        case 0x224df8u: goto label_224df8;
        case 0x224dfcu: goto label_224dfc;
        case 0x224e00u: goto label_224e00;
        case 0x224e04u: goto label_224e04;
        case 0x224e08u: goto label_224e08;
        case 0x224e0cu: goto label_224e0c;
        case 0x224e10u: goto label_224e10;
        case 0x224e14u: goto label_224e14;
        case 0x224e18u: goto label_224e18;
        case 0x224e1cu: goto label_224e1c;
        case 0x224e20u: goto label_224e20;
        case 0x224e24u: goto label_224e24;
        case 0x224e28u: goto label_224e28;
        case 0x224e2cu: goto label_224e2c;
        case 0x224e30u: goto label_224e30;
        case 0x224e34u: goto label_224e34;
        case 0x224e38u: goto label_224e38;
        case 0x224e3cu: goto label_224e3c;
        case 0x224e40u: goto label_224e40;
        case 0x224e44u: goto label_224e44;
        case 0x224e48u: goto label_224e48;
        case 0x224e4cu: goto label_224e4c;
        case 0x224e50u: goto label_224e50;
        case 0x224e54u: goto label_224e54;
        case 0x224e58u: goto label_224e58;
        case 0x224e5cu: goto label_224e5c;
        case 0x224e60u: goto label_224e60;
        case 0x224e64u: goto label_224e64;
        case 0x224e68u: goto label_224e68;
        case 0x224e6cu: goto label_224e6c;
        case 0x224e70u: goto label_224e70;
        case 0x224e74u: goto label_224e74;
        case 0x224e78u: goto label_224e78;
        case 0x224e7cu: goto label_224e7c;
        case 0x224e80u: goto label_224e80;
        case 0x224e84u: goto label_224e84;
        case 0x224e88u: goto label_224e88;
        case 0x224e8cu: goto label_224e8c;
        case 0x224e90u: goto label_224e90;
        case 0x224e94u: goto label_224e94;
        case 0x224e98u: goto label_224e98;
        case 0x224e9cu: goto label_224e9c;
        case 0x224ea0u: goto label_224ea0;
        case 0x224ea4u: goto label_224ea4;
        case 0x224ea8u: goto label_224ea8;
        case 0x224eacu: goto label_224eac;
        case 0x224eb0u: goto label_224eb0;
        case 0x224eb4u: goto label_224eb4;
        case 0x224eb8u: goto label_224eb8;
        case 0x224ebcu: goto label_224ebc;
        case 0x224ec0u: goto label_224ec0;
        case 0x224ec4u: goto label_224ec4;
        case 0x224ec8u: goto label_224ec8;
        case 0x224eccu: goto label_224ecc;
        case 0x224ed0u: goto label_224ed0;
        case 0x224ed4u: goto label_224ed4;
        case 0x224ed8u: goto label_224ed8;
        case 0x224edcu: goto label_224edc;
        case 0x224ee0u: goto label_224ee0;
        case 0x224ee4u: goto label_224ee4;
        case 0x224ee8u: goto label_224ee8;
        case 0x224eecu: goto label_224eec;
        case 0x224ef0u: goto label_224ef0;
        case 0x224ef4u: goto label_224ef4;
        case 0x224ef8u: goto label_224ef8;
        case 0x224efcu: goto label_224efc;
        case 0x224f00u: goto label_224f00;
        case 0x224f04u: goto label_224f04;
        case 0x224f08u: goto label_224f08;
        case 0x224f0cu: goto label_224f0c;
        case 0x224f10u: goto label_224f10;
        case 0x224f14u: goto label_224f14;
        case 0x224f18u: goto label_224f18;
        case 0x224f1cu: goto label_224f1c;
        case 0x224f20u: goto label_224f20;
        case 0x224f24u: goto label_224f24;
        case 0x224f28u: goto label_224f28;
        case 0x224f2cu: goto label_224f2c;
        case 0x224f30u: goto label_224f30;
        case 0x224f34u: goto label_224f34;
        case 0x224f38u: goto label_224f38;
        case 0x224f3cu: goto label_224f3c;
        case 0x224f40u: goto label_224f40;
        case 0x224f44u: goto label_224f44;
        case 0x224f48u: goto label_224f48;
        case 0x224f4cu: goto label_224f4c;
        case 0x224f50u: goto label_224f50;
        case 0x224f54u: goto label_224f54;
        case 0x224f58u: goto label_224f58;
        case 0x224f5cu: goto label_224f5c;
        case 0x224f60u: goto label_224f60;
        case 0x224f64u: goto label_224f64;
        case 0x224f68u: goto label_224f68;
        case 0x224f6cu: goto label_224f6c;
        case 0x224f70u: goto label_224f70;
        case 0x224f74u: goto label_224f74;
        case 0x224f78u: goto label_224f78;
        case 0x224f7cu: goto label_224f7c;
        case 0x224f80u: goto label_224f80;
        case 0x224f84u: goto label_224f84;
        case 0x224f88u: goto label_224f88;
        case 0x224f8cu: goto label_224f8c;
        case 0x224f90u: goto label_224f90;
        case 0x224f94u: goto label_224f94;
        case 0x224f98u: goto label_224f98;
        case 0x224f9cu: goto label_224f9c;
        case 0x224fa0u: goto label_224fa0;
        case 0x224fa4u: goto label_224fa4;
        case 0x224fa8u: goto label_224fa8;
        case 0x224facu: goto label_224fac;
        case 0x224fb0u: goto label_224fb0;
        case 0x224fb4u: goto label_224fb4;
        case 0x224fb8u: goto label_224fb8;
        case 0x224fbcu: goto label_224fbc;
        case 0x224fc0u: goto label_224fc0;
        case 0x224fc4u: goto label_224fc4;
        case 0x224fc8u: goto label_224fc8;
        case 0x224fccu: goto label_224fcc;
        case 0x224fd0u: goto label_224fd0;
        case 0x224fd4u: goto label_224fd4;
        case 0x224fd8u: goto label_224fd8;
        case 0x224fdcu: goto label_224fdc;
        case 0x224fe0u: goto label_224fe0;
        case 0x224fe4u: goto label_224fe4;
        case 0x224fe8u: goto label_224fe8;
        case 0x224fecu: goto label_224fec;
        case 0x224ff0u: goto label_224ff0;
        case 0x224ff4u: goto label_224ff4;
        case 0x224ff8u: goto label_224ff8;
        case 0x224ffcu: goto label_224ffc;
        case 0x225000u: goto label_225000;
        case 0x225004u: goto label_225004;
        case 0x225008u: goto label_225008;
        case 0x22500cu: goto label_22500c;
        case 0x225010u: goto label_225010;
        case 0x225014u: goto label_225014;
        case 0x225018u: goto label_225018;
        case 0x22501cu: goto label_22501c;
        case 0x225020u: goto label_225020;
        case 0x225024u: goto label_225024;
        case 0x225028u: goto label_225028;
        case 0x22502cu: goto label_22502c;
        case 0x225030u: goto label_225030;
        case 0x225034u: goto label_225034;
        case 0x225038u: goto label_225038;
        case 0x22503cu: goto label_22503c;
        case 0x225040u: goto label_225040;
        case 0x225044u: goto label_225044;
        case 0x225048u: goto label_225048;
        case 0x22504cu: goto label_22504c;
        case 0x225050u: goto label_225050;
        case 0x225054u: goto label_225054;
        case 0x225058u: goto label_225058;
        case 0x22505cu: goto label_22505c;
        case 0x225060u: goto label_225060;
        case 0x225064u: goto label_225064;
        case 0x225068u: goto label_225068;
        case 0x22506cu: goto label_22506c;
        case 0x225070u: goto label_225070;
        case 0x225074u: goto label_225074;
        case 0x225078u: goto label_225078;
        case 0x22507cu: goto label_22507c;
        case 0x225080u: goto label_225080;
        case 0x225084u: goto label_225084;
        case 0x225088u: goto label_225088;
        case 0x22508cu: goto label_22508c;
        case 0x225090u: goto label_225090;
        case 0x225094u: goto label_225094;
        case 0x225098u: goto label_225098;
        case 0x22509cu: goto label_22509c;
        case 0x2250a0u: goto label_2250a0;
        case 0x2250a4u: goto label_2250a4;
        case 0x2250a8u: goto label_2250a8;
        case 0x2250acu: goto label_2250ac;
        case 0x2250b0u: goto label_2250b0;
        case 0x2250b4u: goto label_2250b4;
        case 0x2250b8u: goto label_2250b8;
        case 0x2250bcu: goto label_2250bc;
        case 0x2250c0u: goto label_2250c0;
        case 0x2250c4u: goto label_2250c4;
        case 0x2250c8u: goto label_2250c8;
        case 0x2250ccu: goto label_2250cc;
        case 0x2250d0u: goto label_2250d0;
        case 0x2250d4u: goto label_2250d4;
        case 0x2250d8u: goto label_2250d8;
        case 0x2250dcu: goto label_2250dc;
        case 0x2250e0u: goto label_2250e0;
        case 0x2250e4u: goto label_2250e4;
        case 0x2250e8u: goto label_2250e8;
        case 0x2250ecu: goto label_2250ec;
        case 0x2250f0u: goto label_2250f0;
        case 0x2250f4u: goto label_2250f4;
        case 0x2250f8u: goto label_2250f8;
        case 0x2250fcu: goto label_2250fc;
        case 0x225100u: goto label_225100;
        case 0x225104u: goto label_225104;
        case 0x225108u: goto label_225108;
        case 0x22510cu: goto label_22510c;
        case 0x225110u: goto label_225110;
        case 0x225114u: goto label_225114;
        case 0x225118u: goto label_225118;
        case 0x22511cu: goto label_22511c;
        case 0x225120u: goto label_225120;
        case 0x225124u: goto label_225124;
        case 0x225128u: goto label_225128;
        case 0x22512cu: goto label_22512c;
        case 0x225130u: goto label_225130;
        case 0x225134u: goto label_225134;
        case 0x225138u: goto label_225138;
        case 0x22513cu: goto label_22513c;
        case 0x225140u: goto label_225140;
        case 0x225144u: goto label_225144;
        case 0x225148u: goto label_225148;
        case 0x22514cu: goto label_22514c;
        default: return;
    }

label_224980:
    if (ctx->pc == 0x224980u) {
        ctx->pc = 0x224980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22497Cu;
        // 0x224980: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224984u;
        goto label_224984;
    }
    ctx->pc = 0x22497Cu;
    SET_GPR_U32(ctx, 31, 0x224984u);
    ctx->pc = 0x224980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22497Cu;
    // 0x224980: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225960u;
    { ctx->pc = 0x225960; return; }
    ctx->pc = 0x224984u;
label_224984:
    // 0x224984: 0x10400383  beqz        $v0, . + 4 + (0x383 << 2)
label_224988:
    if (ctx->pc == 0x224988u) {
        ctx->pc = 0x22498Cu;
        goto label_22498c;
    }
    ctx->pc = 0x224984u;
    {
        const bool branch_taken_0x224984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224984) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x22498Cu;
label_22498c:
    // 0x22498c: 0x10000381  b           . + 4 + (0x381 << 2)
label_224990:
    if (ctx->pc == 0x224990u) {
        ctx->pc = 0x224990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22498Cu;
        // 0x224990: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224994u;
        goto label_224994;
    }
    ctx->pc = 0x22498Cu;
    {
        const bool branch_taken_0x22498c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22498Cu;
        // 0x224990: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22498c) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224994u;
label_224994:
    // 0x224994: 0x86260008  lh          $a2, 0x8($s1)
    ctx->pc = 0x224994u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_224998:
    // 0x224998: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x224998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_22499c:
    // 0x22499c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x22499cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_2249a0:
    // 0x2249a0: 0x8624000a  lh          $a0, 0xA($s1)
    ctx->pc = 0x2249a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_2249a4:
    // 0x2249a4: 0x244225ae  addiu       $v0, $v0, 0x25AE
    ctx->pc = 0x2249a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9646));
label_2249a8:
    // 0x2249a8: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x2249a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_2249ac:
    // 0x2249ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2249acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2249b0:
    // 0x2249b0: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x2249b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_2249b4:
    // 0x2249b4: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x2249b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2249b8:
    // 0x2249b8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2249b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2249bc:
    // 0x2249bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2249bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2249c0:
    // 0x2249c0: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2249c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2249c4:
    // 0x2249c4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2249c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2249c8:
    // 0x2249c8: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2249c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2249cc:
    // 0x2249cc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2249ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2249d0:
    // 0x2249d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2249d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2249d4:
    // 0x2249d4: 0xa49021  addu        $s2, $a1, $a0
    ctx->pc = 0x2249d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2249d8:
    // 0x2249d8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x2249d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_2249dc:
    // 0x2249dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2249dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2249e0:
    // 0x2249e0: 0x90530000  lbu         $s3, 0x0($v0)
    ctx->pc = 0x2249e0u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2249e4:
    // 0x2249e4: 0x0  nop
    ctx->pc = 0x2249e4u;
    // NOP
label_2249e8:
    // 0x2249e8: 0x9242003e  lbu         $v0, 0x3E($s2)
    ctx->pc = 0x2249e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 62)));
label_2249ec:
    // 0x2249ec: 0x1453000d  bne         $v0, $s3, . + 4 + (0xD << 2)
label_2249f0:
    if (ctx->pc == 0x2249F0u) {
        ctx->pc = 0x2249F4u;
        goto label_2249f4;
    }
    ctx->pc = 0x2249ECu;
    {
        const bool branch_taken_0x2249ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2249ec) {
            ctx->pc = 0x224A24u;
            goto label_224a24;
        }
    }
    ctx->pc = 0x2249F4u;
label_2249f4:
    // 0x2249f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2249f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2249f8:
    // 0x2249f8: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x2249f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_2249fc:
    // 0x2249fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_224a00:
    if (ctx->pc == 0x224A00u) {
        ctx->pc = 0x224A04u;
        goto label_224a04;
    }
    ctx->pc = 0x2249FCu;
    {
        const bool branch_taken_0x2249fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2249fc) {
            ctx->pc = 0x224A24u;
            goto label_224a24;
        }
    }
    ctx->pc = 0x224A04u;
label_224a04:
    // 0x224a04: 0x8625000c  lh          $a1, 0xC($s1)
    ctx->pc = 0x224a04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_224a08:
    // 0x224a08: 0x8626000e  lh          $a2, 0xE($s1)
    ctx->pc = 0x224a08u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_224a0c:
    // 0x224a0c: 0xc089658  jal         func_225960
label_224a10:
    if (ctx->pc == 0x224A10u) {
        ctx->pc = 0x224A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A0Cu;
        // 0x224a10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224A14u;
        goto label_224a14;
    }
    ctx->pc = 0x224A0Cu;
    SET_GPR_U32(ctx, 31, 0x224A14u);
    ctx->pc = 0x224A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224A0Cu;
    // 0x224a10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225960u;
    { ctx->pc = 0x225960; return; }
    ctx->pc = 0x224A14u;
label_224a14:
    // 0x224a14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_224a18:
    if (ctx->pc == 0x224A18u) {
        ctx->pc = 0x224A1Cu;
        goto label_224a1c;
    }
    ctx->pc = 0x224A14u;
    {
        const bool branch_taken_0x224a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224a14) {
            ctx->pc = 0x224A24u;
            goto label_224a24;
        }
    }
    ctx->pc = 0x224A1Cu;
label_224a1c:
    // 0x224a1c: 0x1000035d  b           . + 4 + (0x35D << 2)
label_224a20:
    if (ctx->pc == 0x224A20u) {
        ctx->pc = 0x224A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A1Cu;
        // 0x224a20: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224A24u;
        goto label_224a24;
    }
    ctx->pc = 0x224A1Cu;
    {
        const bool branch_taken_0x224a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A1Cu;
        // 0x224a20: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a1c) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224A24u;
label_224a24:
    // 0x224a24: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x224a24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_224a28:
    // 0x224a28: 0x2a8200ff  slti        $v0, $s4, 0xFF
    ctx->pc = 0x224a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)255) ? 1 : 0);
label_224a2c:
    // 0x224a2c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_224a30:
    if (ctx->pc == 0x224A30u) {
        ctx->pc = 0x224A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A2Cu;
        // 0x224a30: 0x26520048  addiu       $s2, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224A34u;
        goto label_224a34;
    }
    ctx->pc = 0x224A2Cu;
    {
        const bool branch_taken_0x224a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A2Cu;
        // 0x224a30: 0x26520048  addiu       $s2, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a2c) {
            ctx->pc = 0x2249E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2249e8;
        }
    }
    ctx->pc = 0x224A34u;
label_224a34:
    // 0x224a34: 0x10000357  b           . + 4 + (0x357 << 2)
label_224a38:
    if (ctx->pc == 0x224A38u) {
        ctx->pc = 0x224A3Cu;
        goto label_224a3c;
    }
    ctx->pc = 0x224A34u;
    {
        const bool branch_taken_0x224a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224a34) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224A3Cu;
label_224a3c:
    // 0x224a3c: 0x8623000a  lh          $v1, 0xA($s1)
    ctx->pc = 0x224a3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_224a40:
    // 0x224a40: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x224a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_224a44:
    // 0x224a44: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_224a48:
    if (ctx->pc == 0x224A48u) {
        ctx->pc = 0x224A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A44u;
        // 0x224a48: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224A4Cu;
        goto label_224a4c;
    }
    ctx->pc = 0x224A44u;
    {
        const bool branch_taken_0x224a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x224A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A44u;
        // 0x224a48: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a44) {
            ctx->pc = 0x224AB8u;
            goto label_224ab8;
        }
    }
    ctx->pc = 0x224A4Cu;
label_224a4c:
    // 0x224a4c: 0x86240008  lh          $a0, 0x8($s1)
    ctx->pc = 0x224a4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_224a50:
    // 0x224a50: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x224a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_224a54:
    // 0x224a54: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x224a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_224a58:
    // 0x224a58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x224a58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224a5c:
    // 0x224a5c: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x224a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_224a60:
    // 0x224a60: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x224a60u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_224a64:
    // 0x224a64: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x224a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_224a68:
    // 0x224a68: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x224a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_224a6c:
    // 0x224a6c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x224a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_224a70:
    // 0x224a70: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x224a70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_224a74:
    // 0x224a74: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x224a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_224a78:
    // 0x224a78: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x224a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_224a7c:
    // 0x224a7c: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x224a7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
label_224a80:
    // 0x224a80: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_224a84:
    if (ctx->pc == 0x224A84u) {
        ctx->pc = 0x224A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A80u;
        // 0x224a84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224A88u;
        goto label_224a88;
    }
    ctx->pc = 0x224A80u;
    {
        const bool branch_taken_0x224a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x224A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A80u;
        // 0x224a84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a80) {
            ctx->pc = 0x224AA0u;
            goto label_224aa0;
        }
    }
    ctx->pc = 0x224A88u;
label_224a88:
    // 0x224a88: 0xc0895f0  jal         func_2257C0
label_224a8c:
    if (ctx->pc == 0x224A8Cu) {
        ctx->pc = 0x224A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A88u;
        // 0x224a8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224A90u;
        goto label_224a90;
    }
    ctx->pc = 0x224A88u;
    SET_GPR_U32(ctx, 31, 0x224A90u);
    ctx->pc = 0x224A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224A88u;
    // 0x224a8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257C0u;
    { ctx->pc = 0x2257c0; return; }
    ctx->pc = 0x224A90u;
label_224a90:
    // 0x224a90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_224a94:
    if (ctx->pc == 0x224A94u) {
        ctx->pc = 0x224A98u;
        goto label_224a98;
    }
    ctx->pc = 0x224A90u;
    {
        const bool branch_taken_0x224a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224a90) {
            ctx->pc = 0x224AA0u;
            goto label_224aa0;
        }
    }
    ctx->pc = 0x224A98u;
label_224a98:
    // 0x224a98: 0x1000033e  b           . + 4 + (0x33E << 2)
label_224a9c:
    if (ctx->pc == 0x224A9Cu) {
        ctx->pc = 0x224A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A98u;
        // 0x224a9c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224AA0u;
        goto label_224aa0;
    }
    ctx->pc = 0x224A98u;
    {
        const bool branch_taken_0x224a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A98u;
        // 0x224a9c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a98) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224AA0u;
label_224aa0:
    // 0x224aa0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x224aa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_224aa4:
    // 0x224aa4: 0x2a6200ff  slti        $v0, $s3, 0xFF
    ctx->pc = 0x224aa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)255) ? 1 : 0);
label_224aa8:
    // 0x224aa8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_224aac:
    if (ctx->pc == 0x224AACu) {
        ctx->pc = 0x224AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224AA8u;
        // 0x224aac: 0x26520048  addiu       $s2, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224AB0u;
        goto label_224ab0;
    }
    ctx->pc = 0x224AA8u;
    {
        const bool branch_taken_0x224aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224AA8u;
        // 0x224aac: 0x26520048  addiu       $s2, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224aa8) {
            ctx->pc = 0x224A74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224a74;
        }
    }
    ctx->pc = 0x224AB0u;
label_224ab0:
    // 0x224ab0: 0x10000338  b           . + 4 + (0x338 << 2)
label_224ab4:
    if (ctx->pc == 0x224AB4u) {
        ctx->pc = 0x224AB8u;
        goto label_224ab8;
    }
    ctx->pc = 0x224AB0u;
    {
        const bool branch_taken_0x224ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224ab0) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224AB8u;
label_224ab8:
    // 0x224ab8: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_224abc:
    if (ctx->pc == 0x224ABCu) {
        ctx->pc = 0x224AC0u;
        goto label_224ac0;
    }
    ctx->pc = 0x224AB8u;
    {
        const bool branch_taken_0x224ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x224ab8) {
            ctx->pc = 0x224B38u;
            goto label_224b38;
        }
    }
    ctx->pc = 0x224AC0u;
label_224ac0:
    // 0x224ac0: 0x86250008  lh          $a1, 0x8($s1)
    ctx->pc = 0x224ac0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_224ac4:
    // 0x224ac4: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x224ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_224ac8:
    // 0x224ac8: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x224ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_224acc:
    // 0x224acc: 0x246328c6  addiu       $v1, $v1, 0x28C6
    ctx->pc = 0x224accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10438));
label_224ad0:
    // 0x224ad0: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x224ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_224ad4:
    // 0x224ad4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x224ad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224ad8:
    // 0x224ad8: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x224ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_224adc:
    // 0x224adc: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x224adcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_224ae0:
    // 0x224ae0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x224ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_224ae4:
    // 0x224ae4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x224ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_224ae8:
    // 0x224ae8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x224ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_224aec:
    // 0x224aec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x224aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_224af0:
    // 0x224af0: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x224af0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_224af4:
    // 0x224af4: 0x90740000  lbu         $s4, 0x0($v1)
    ctx->pc = 0x224af4u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_224af8:
    // 0x224af8: 0x0  nop
    ctx->pc = 0x224af8u;
    // NOP
label_224afc:
    // 0x224afc: 0x9262003e  lbu         $v0, 0x3E($s3)
    ctx->pc = 0x224afcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 62)));
label_224b00:
    // 0x224b00: 0x14540007  bne         $v0, $s4, . + 4 + (0x7 << 2)
label_224b04:
    if (ctx->pc == 0x224B04u) {
        ctx->pc = 0x224B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B00u;
        // 0x224b04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224B08u;
        goto label_224b08;
    }
    ctx->pc = 0x224B00u;
    {
        const bool branch_taken_0x224b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x224B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B00u;
        // 0x224b04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b00) {
            ctx->pc = 0x224B20u;
            goto label_224b20;
        }
    }
    ctx->pc = 0x224B08u;
label_224b08:
    // 0x224b08: 0xc0895f0  jal         func_2257C0
label_224b0c:
    if (ctx->pc == 0x224B0Cu) {
        ctx->pc = 0x224B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B08u;
        // 0x224b0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224B10u;
        goto label_224b10;
    }
    ctx->pc = 0x224B08u;
    SET_GPR_U32(ctx, 31, 0x224B10u);
    ctx->pc = 0x224B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224B08u;
    // 0x224b0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257C0u;
    { ctx->pc = 0x2257c0; return; }
    ctx->pc = 0x224B10u;
label_224b10:
    // 0x224b10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_224b14:
    if (ctx->pc == 0x224B14u) {
        ctx->pc = 0x224B18u;
        goto label_224b18;
    }
    ctx->pc = 0x224B10u;
    {
        const bool branch_taken_0x224b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224b10) {
            ctx->pc = 0x224B20u;
            goto label_224b20;
        }
    }
    ctx->pc = 0x224B18u;
label_224b18:
    // 0x224b18: 0x1000031e  b           . + 4 + (0x31E << 2)
label_224b1c:
    if (ctx->pc == 0x224B1Cu) {
        ctx->pc = 0x224B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B18u;
        // 0x224b1c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224B20u;
        goto label_224b20;
    }
    ctx->pc = 0x224B18u;
    {
        const bool branch_taken_0x224b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B18u;
        // 0x224b1c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b18) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224B20u;
label_224b20:
    // 0x224b20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x224b20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_224b24:
    // 0x224b24: 0x2a4200ff  slti        $v0, $s2, 0xFF
    ctx->pc = 0x224b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)255) ? 1 : 0);
label_224b28:
    // 0x224b28: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_224b2c:
    if (ctx->pc == 0x224B2Cu) {
        ctx->pc = 0x224B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B28u;
        // 0x224b2c: 0x26730048  addiu       $s3, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224B30u;
        goto label_224b30;
    }
    ctx->pc = 0x224B28u;
    {
        const bool branch_taken_0x224b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B28u;
        // 0x224b2c: 0x26730048  addiu       $s3, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b28) {
            ctx->pc = 0x224AFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224afc;
        }
    }
    ctx->pc = 0x224B30u;
label_224b30:
    // 0x224b30: 0x10000318  b           . + 4 + (0x318 << 2)
label_224b34:
    if (ctx->pc == 0x224B34u) {
        ctx->pc = 0x224B38u;
        goto label_224b38;
    }
    ctx->pc = 0x224B30u;
    {
        const bool branch_taken_0x224b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224b30) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224B38u;
label_224b38:
    // 0x224b38: 0x86260008  lh          $a2, 0x8($s1)
    ctx->pc = 0x224b38u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_224b3c:
    // 0x224b3c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x224b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_224b40:
    // 0x224b40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_224b44:
    // 0x224b44: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x224b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_224b48:
    // 0x224b48: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x224b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_224b4c:
    // 0x224b4c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x224b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_224b50:
    // 0x224b50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x224b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_224b54:
    // 0x224b54: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x224b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_224b58:
    // 0x224b58: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x224b58u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_224b5c:
    // 0x224b5c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x224b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_224b60:
    // 0x224b60: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x224b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_224b64:
    // 0x224b64: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x224b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_224b68:
    // 0x224b68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x224b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_224b6c:
    // 0x224b6c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x224b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_224b70:
    // 0x224b70: 0xc0895f0  jal         func_2257C0
label_224b74:
    if (ctx->pc == 0x224B74u) {
        ctx->pc = 0x224B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B70u;
        // 0x224b74: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224B78u;
        goto label_224b78;
    }
    ctx->pc = 0x224B70u;
    SET_GPR_U32(ctx, 31, 0x224B78u);
    ctx->pc = 0x224B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224B70u;
    // 0x224b74: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257C0u;
    { ctx->pc = 0x2257c0; return; }
    ctx->pc = 0x224B78u;
label_224b78:
    // 0x224b78: 0x10400306  beqz        $v0, . + 4 + (0x306 << 2)
label_224b7c:
    if (ctx->pc == 0x224B7Cu) {
        ctx->pc = 0x224B80u;
        goto label_224b80;
    }
    ctx->pc = 0x224B78u;
    {
        const bool branch_taken_0x224b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224b78) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224B80u;
label_224b80:
    // 0x224b80: 0x10000304  b           . + 4 + (0x304 << 2)
label_224b84:
    if (ctx->pc == 0x224B84u) {
        ctx->pc = 0x224B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B80u;
        // 0x224b84: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224B88u;
        goto label_224b88;
    }
    ctx->pc = 0x224B80u;
    {
        const bool branch_taken_0x224b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B80u;
        // 0x224b84: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b80) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224B88u;
label_224b88:
    // 0x224b88: 0x862b0008  lh          $t3, 0x8($s1)
    ctx->pc = 0x224b88u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_224b8c:
    // 0x224b8c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x224b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_224b90:
    // 0x224b90: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x224b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_224b94:
    // 0x224b94: 0x862a000a  lh          $t2, 0xA($s1)
    ctx->pc = 0x224b94u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_224b98:
    // 0x224b98: 0x244225ae  addiu       $v0, $v0, 0x25AE
    ctx->pc = 0x224b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9646));
label_224b9c:
    // 0x224b9c: 0x8625000c  lh          $a1, 0xC($s1)
    ctx->pc = 0x224b9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_224ba0:
    // 0x224ba0: 0x24631538  addiu       $v1, $v1, 0x1538
    ctx->pc = 0x224ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5432));
label_224ba4:
    // 0x224ba4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x224ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224ba8:
    // 0x224ba8: 0xb30c0  sll         $a2, $t3, 3
    ctx->pc = 0x224ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_224bac:
    // 0x224bac: 0xb3a00  sll         $a3, $t3, 8
    ctx->pc = 0x224bacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
label_224bb0:
    // 0x224bb0: 0xcb4021  addu        $t0, $a2, $t3
    ctx->pc = 0x224bb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_224bb4:
    // 0x224bb4: 0xeb4823  subu        $t1, $a3, $t3
    ctx->pc = 0x224bb4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_224bb8:
    // 0x224bb8: 0xa30c0  sll         $a2, $t2, 3
    ctx->pc = 0x224bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_224bbc:
    // 0x224bbc: 0x39670001  xori        $a3, $t3, 0x1
    ctx->pc = 0x224bbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)1);
label_224bc0:
    // 0x224bc0: 0xca5021  addu        $t2, $a2, $t2
    ctx->pc = 0x224bc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_224bc4:
    // 0x224bc4: 0x930c0  sll         $a2, $t1, 3
    ctx->pc = 0x224bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_224bc8:
    // 0x224bc8: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x224bc8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_224bcc:
    // 0x224bcc: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x224bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_224bd0:
    // 0x224bd0: 0x648c0  sll         $t1, $a2, 3
    ctx->pc = 0x224bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_224bd4:
    // 0x224bd4: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x224bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_224bd8:
    // 0x224bd8: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x224bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_224bdc:
    // 0x224bdc: 0x494021  addu        $t0, $v0, $t1
    ctx->pc = 0x224bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_224be0:
    // 0x224be0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x224be0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_224be4:
    // 0x224be4: 0x25080000  addiu       $t0, $t0, 0x0
    ctx->pc = 0x224be4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 0));
label_224be8:
    // 0x224be8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x224be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_224bec:
    // 0x224bec: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x224becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_224bf0:
    // 0x224bf0: 0x73200  sll         $a2, $a3, 8
    ctx->pc = 0x224bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_224bf4:
    // 0x224bf4: 0x91090000  lbu         $t1, 0x0($t0)
    ctx->pc = 0x224bf4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_224bf8:
    // 0x224bf8: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x224bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_224bfc:
    // 0x224bfc: 0x24680000  addiu       $t0, $v1, 0x0
    ctx->pc = 0x224bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_224c00:
    // 0x224c00: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x224c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_224c04:
    // 0x224c04: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x224c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_224c08:
    // 0x224c08: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x224c08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_224c0c:
    // 0x224c0c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x224c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_224c10:
    // 0x224c10: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x224c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_224c14:
    // 0x224c14: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x224c14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_224c18:
    // 0x224c18: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x224c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_224c1c:
    // 0x224c1c: 0x928c0  sll         $a1, $t1, 3
    ctx->pc = 0x224c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_224c20:
    // 0x224c20: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x224c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_224c24:
    // 0x224c24: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x224c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_224c28:
    // 0x224c28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_224c2c:
    // 0x224c2c: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x224c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_224c30:
    // 0x224c30: 0x1032821  addu        $a1, $t0, $v1
    ctx->pc = 0x224c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_224c34:
    // 0x224c34: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x224c34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_224c38:
    // 0x224c38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x224c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_224c3c:
    // 0x224c3c: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x224c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_224c40:
    // 0x224c40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x224c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_224c44:
    // 0x224c44: 0x104002d3  beqz        $v0, . + 4 + (0x2D3 << 2)
label_224c48:
    if (ctx->pc == 0x224C48u) {
        ctx->pc = 0x224C4Cu;
        goto label_224c4c;
    }
    ctx->pc = 0x224C44u;
    {
        const bool branch_taken_0x224c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224c44) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224C4Cu;
label_224c4c:
    // 0x224c4c: 0x100002d1  b           . + 4 + (0x2D1 << 2)
label_224c50:
    if (ctx->pc == 0x224C50u) {
        ctx->pc = 0x224C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C4Cu;
        // 0x224c50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224C54u;
        goto label_224c54;
    }
    ctx->pc = 0x224C4Cu;
    {
        const bool branch_taken_0x224c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C4Cu;
        // 0x224c50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c4c) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224C54u;
label_224c54:
    // 0x224c54: 0x86250008  lh          $a1, 0x8($s1)
    ctx->pc = 0x224c54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_224c58:
    // 0x224c58: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x224c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_224c5c:
    // 0x224c5c: 0x8623000a  lh          $v1, 0xA($s1)
    ctx->pc = 0x224c5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_224c60:
    // 0x224c60: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x224c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_224c64:
    // 0x224c64: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x224c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_224c68:
    // 0x224c68: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x224c68u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_224c6c:
    // 0x224c6c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x224c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_224c70:
    // 0x224c70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_224c74:
    // 0x224c74: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x224c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_224c78:
    // 0x224c78: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x224c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_224c7c:
    // 0x224c7c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x224c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_224c80:
    // 0x224c80: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x224c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_224c84:
    // 0x224c84: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x224c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_224c88:
    // 0x224c88: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x224c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_224c8c:
    // 0x224c8c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x224c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_224c90:
    // 0x224c90: 0xc04485c  jal         func_112170
label_224c94:
    if (ctx->pc == 0x224C94u) {
        ctx->pc = 0x224C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C90u;
        // 0x224c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224C98u;
        goto label_224c98;
    }
    ctx->pc = 0x224C90u;
    SET_GPR_U32(ctx, 31, 0x224C98u);
    ctx->pc = 0x224C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C90u;
    // 0x224c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112170u, 0x224C90u, 0x224C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C98u;
label_224c98:
    // 0x224c98: 0x104002be  beqz        $v0, . + 4 + (0x2BE << 2)
label_224c9c:
    if (ctx->pc == 0x224C9Cu) {
        ctx->pc = 0x224CA0u;
        goto label_224ca0;
    }
    ctx->pc = 0x224C98u;
    {
        const bool branch_taken_0x224c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224c98) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224CA0u;
label_224ca0:
    // 0x224ca0: 0x92230045  lbu         $v1, 0x45($s1)
    ctx->pc = 0x224ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
label_224ca4:
    // 0x224ca4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x224ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_224ca8:
    // 0x224ca8: 0x106202ba  beq         $v1, $v0, . + 4 + (0x2BA << 2)
label_224cac:
    if (ctx->pc == 0x224CACu) {
        ctx->pc = 0x224CB0u;
        goto label_224cb0;
    }
    ctx->pc = 0x224CA8u;
    {
        const bool branch_taken_0x224ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x224ca8) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224CB0u;
label_224cb0:
    // 0x224cb0: 0xaf8392e4  sw          $v1, -0x6D1C($gp)
    ctx->pc = 0x224cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939364), GPR_U32(ctx, 3));
label_224cb4:
    // 0x224cb4: 0x100002b7  b           . + 4 + (0x2B7 << 2)
label_224cb8:
    if (ctx->pc == 0x224CB8u) {
        ctx->pc = 0x224CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CB4u;
        // 0x224cb8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224CBCu;
        goto label_224cbc;
    }
    ctx->pc = 0x224CB4u;
    {
        const bool branch_taken_0x224cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CB4u;
        // 0x224cb8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224cb4) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224CBCu;
label_224cbc:
    // 0x224cbc: 0x8622000a  lh          $v0, 0xA($s1)
    ctx->pc = 0x224cbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_224cc0:
    // 0x224cc0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_224cc4:
    if (ctx->pc == 0x224CC4u) {
        ctx->pc = 0x224CC8u;
        goto label_224cc8;
    }
    ctx->pc = 0x224CC0u;
    {
        const bool branch_taken_0x224cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224cc0) {
            ctx->pc = 0x224CECu;
            goto label_224cec;
        }
    }
    ctx->pc = 0x224CC8u;
label_224cc8:
    // 0x224cc8: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x224cc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_224ccc:
    // 0x224ccc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x224cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_224cd0:
    // 0x224cd0: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x224cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_224cd4:
    // 0x224cd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_224cd8:
    // 0x224cd8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x224cd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_224cdc:
    // 0x224cdc: 0x104002ad  beqz        $v0, . + 4 + (0x2AD << 2)
label_224ce0:
    if (ctx->pc == 0x224CE0u) {
        ctx->pc = 0x224CE4u;
        goto label_224ce4;
    }
    ctx->pc = 0x224CDCu;
    {
        const bool branch_taken_0x224cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224cdc) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224CE4u;
label_224ce4:
    // 0x224ce4: 0x100002ab  b           . + 4 + (0x2AB << 2)
label_224ce8:
    if (ctx->pc == 0x224CE8u) {
        ctx->pc = 0x224CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CE4u;
        // 0x224ce8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224CECu;
        goto label_224cec;
    }
    ctx->pc = 0x224CE4u;
    {
        const bool branch_taken_0x224ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CE4u;
        // 0x224ce8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ce4) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224CECu;
label_224cec:
    // 0x224cec: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x224cecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_224cf0:
    // 0x224cf0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x224cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_224cf4:
    // 0x224cf4: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x224cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_224cf8:
    // 0x224cf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_224cfc:
    // 0x224cfc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x224cfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_224d00:
    // 0x224d00: 0x144002a4  bnez        $v0, . + 4 + (0x2A4 << 2)
label_224d04:
    if (ctx->pc == 0x224D04u) {
        ctx->pc = 0x224D08u;
        goto label_224d08;
    }
    ctx->pc = 0x224D00u;
    {
        const bool branch_taken_0x224d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224d00) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224D08u;
label_224d08:
    // 0x224d08: 0x100002a2  b           . + 4 + (0x2A2 << 2)
label_224d0c:
    if (ctx->pc == 0x224D0Cu) {
        ctx->pc = 0x224D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D08u;
        // 0x224d0c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224D10u;
        goto label_224d10;
    }
    ctx->pc = 0x224D08u;
    {
        const bool branch_taken_0x224d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D08u;
        // 0x224d0c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d08) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224D10u;
label_224d10:
    // 0x224d10: 0x8625000a  lh          $a1, 0xA($s1)
    ctx->pc = 0x224d10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_224d14:
    // 0x224d14: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x224d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_224d18:
    // 0x224d18: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x224d18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_224d1c:
    // 0x224d1c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x224d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_224d20:
    // 0x224d20: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x224d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_224d24:
    // 0x224d24: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x224d24u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_224d28:
    // 0x224d28: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x224d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_224d2c:
    // 0x224d2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x224d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_224d30:
    // 0x224d30: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x224d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_224d34:
    // 0x224d34: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x224d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_224d38:
    // 0x224d38: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x224d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_224d3c:
    // 0x224d3c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x224d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_224d40:
    // 0x224d40: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x224d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_224d44:
    // 0x224d44: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x224d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_224d48:
    // 0x224d48: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x224d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_224d4c:
    // 0x224d4c: 0x90820039  lbu         $v0, 0x39($a0)
    ctx->pc = 0x224d4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
label_224d50:
    // 0x224d50: 0x2841004a  slti        $at, $v0, 0x4A
    ctx->pc = 0x224d50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)74) ? 1 : 0);
label_224d54:
    // 0x224d54: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_224d58:
    if (ctx->pc == 0x224D58u) {
        ctx->pc = 0x224D5Cu;
        goto label_224d5c;
    }
    ctx->pc = 0x224D54u;
    {
        const bool branch_taken_0x224d54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x224d54) {
            ctx->pc = 0x224D70u;
            goto label_224d70;
        }
    }
    ctx->pc = 0x224D5Cu;
label_224d5c:
    // 0x224d5c: 0xc04485c  jal         func_112170
label_224d60:
    if (ctx->pc == 0x224D60u) {
        ctx->pc = 0x224D64u;
        goto label_224d64;
    }
    ctx->pc = 0x224D5Cu;
    SET_GPR_U32(ctx, 31, 0x224D64u);
    ctx->pc = 0x112170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112170u, 0x224D5Cu, 0x224D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D64u;
label_224d64:
    // 0x224d64: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_224d68:
    if (ctx->pc == 0x224D68u) {
        ctx->pc = 0x224D6Cu;
        goto label_224d6c;
    }
    ctx->pc = 0x224D64u;
    {
        const bool branch_taken_0x224d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224d64) {
            ctx->pc = 0x224D70u;
            goto label_224d70;
        }
    }
    ctx->pc = 0x224D6Cu;
label_224d6c:
    // 0x224d6c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x224d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224d70:
    // 0x224d70: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x224d70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_224d74:
    // 0x224d74: 0x14400287  bnez        $v0, . + 4 + (0x287 << 2)
label_224d78:
    if (ctx->pc == 0x224D78u) {
        ctx->pc = 0x224D7Cu;
        goto label_224d7c;
    }
    ctx->pc = 0x224D74u;
    {
        const bool branch_taken_0x224d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224d74) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224D7Cu;
label_224d7c:
    // 0x224d7c: 0x10000285  b           . + 4 + (0x285 << 2)
label_224d80:
    if (ctx->pc == 0x224D80u) {
        ctx->pc = 0x224D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D7Cu;
        // 0x224d80: 0x3a100001  xori        $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x224D84u;
        goto label_224d84;
    }
    ctx->pc = 0x224D7Cu;
    {
        const bool branch_taken_0x224d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D7Cu;
        // 0x224d80: 0x3a100001  xori        $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d7c) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224D84u;
label_224d84:
    // 0x224d84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224d88:
    // 0x224d88: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x224d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_224d8c:
    // 0x224d8c: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x224d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_224d90:
    // 0x224d90: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x224d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_224d94:
    // 0x224d94: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x224d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_224d98:
    // 0x224d98: 0x24473620  addiu       $a3, $v0, 0x3620
    ctx->pc = 0x224d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
label_224d9c:
    // 0x224d9c: 0x9042367c  lbu         $v0, 0x367C($v0)
    ctx->pc = 0x224d9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13948)));
label_224da0:
    // 0x224da0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_224da4:
    if (ctx->pc == 0x224DA4u) {
        ctx->pc = 0x224DA8u;
        goto label_224da8;
    }
    ctx->pc = 0x224DA0u;
    {
        const bool branch_taken_0x224da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224da0) {
            ctx->pc = 0x224DDCu;
            goto label_224ddc;
        }
    }
    ctx->pc = 0x224DA8u;
label_224da8:
    // 0x224da8: 0x86240008  lh          $a0, 0x8($s1)
    ctx->pc = 0x224da8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_224dac:
    // 0x224dac: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_224db0:
    if (ctx->pc == 0x224DB0u) {
        ctx->pc = 0x224DB4u;
        goto label_224db4;
    }
    ctx->pc = 0x224DACu;
    {
        const bool branch_taken_0x224dac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x224dac) {
            ctx->pc = 0x224DC8u;
            goto label_224dc8;
        }
    }
    ctx->pc = 0x224DB4u;
label_224db4:
    // 0x224db4: 0x8ce2004c  lw          $v0, 0x4C($a3)
    ctx->pc = 0x224db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
label_224db8:
    // 0x224db8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_224dbc:
    if (ctx->pc == 0x224DBCu) {
        ctx->pc = 0x224DC0u;
        goto label_224dc0;
    }
    ctx->pc = 0x224DB8u;
    {
        const bool branch_taken_0x224db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224db8) {
            ctx->pc = 0x224DDCu;
            goto label_224ddc;
        }
    }
    ctx->pc = 0x224DC0u;
label_224dc0:
    // 0x224dc0: 0x1000000a  b           . + 4 + (0xA << 2)
label_224dc4:
    if (ctx->pc == 0x224DC4u) {
        ctx->pc = 0x224DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DC0u;
        // 0x224dc4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224DC8u;
        goto label_224dc8;
    }
    ctx->pc = 0x224DC0u;
    {
        const bool branch_taken_0x224dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DC0u;
        // 0x224dc4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224dc0) {
            ctx->pc = 0x224DECu;
            goto label_224dec;
        }
    }
    ctx->pc = 0x224DC8u;
label_224dc8:
    // 0x224dc8: 0x8ce20050  lw          $v0, 0x50($a3)
    ctx->pc = 0x224dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_224dcc:
    // 0x224dcc: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
label_224dd0:
    if (ctx->pc == 0x224DD0u) {
        ctx->pc = 0x224DD4u;
        goto label_224dd4;
    }
    ctx->pc = 0x224DCCu;
    {
        const bool branch_taken_0x224dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x224dcc) {
            ctx->pc = 0x224DDCu;
            goto label_224ddc;
        }
    }
    ctx->pc = 0x224DD4u;
label_224dd4:
    // 0x224dd4: 0x10000005  b           . + 4 + (0x5 << 2)
label_224dd8:
    if (ctx->pc == 0x224DD8u) {
        ctx->pc = 0x224DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DD4u;
        // 0x224dd8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224DDCu;
        goto label_224ddc;
    }
    ctx->pc = 0x224DD4u;
    {
        const bool branch_taken_0x224dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DD4u;
        // 0x224dd8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224dd4) {
            ctx->pc = 0x224DECu;
            goto label_224dec;
        }
    }
    ctx->pc = 0x224DDCu;
label_224ddc:
    // 0x224ddc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x224ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_224de0:
    // 0x224de0: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x224de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_224de4:
    // 0x224de4: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_224de8:
    if (ctx->pc == 0x224DE8u) {
        ctx->pc = 0x224DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DE4u;
        // 0x224de8: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224DECu;
        goto label_224dec;
    }
    ctx->pc = 0x224DE4u;
    {
        const bool branch_taken_0x224de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DE4u;
        // 0x224de8: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224de4) {
            ctx->pc = 0x224D94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224d94;
        }
    }
    ctx->pc = 0x224DECu;
label_224dec:
    // 0x224dec: 0x0  nop
    ctx->pc = 0x224decu;
    // NOP
label_224df0:
    // 0x224df0: 0x8622000a  lh          $v0, 0xA($s1)
    ctx->pc = 0x224df0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_224df4:
    // 0x224df4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_224df8:
    if (ctx->pc == 0x224DF8u) {
        ctx->pc = 0x224DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DF4u;
        // 0x224df8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224DFCu;
        goto label_224dfc;
    }
    ctx->pc = 0x224DF4u;
    {
        const bool branch_taken_0x224df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224DF4u;
        // 0x224df8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224df4) {
            ctx->pc = 0x224E00u;
            goto label_224e00;
        }
    }
    ctx->pc = 0x224DFCu;
label_224dfc:
    // 0x224dfc: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x224dfcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_224e00:
    // 0x224e00: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x224e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_224e04:
    // 0x224e04: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x224e04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_224e08:
    // 0x224e08: 0x14620262  bne         $v1, $v0, . + 4 + (0x262 << 2)
label_224e0c:
    if (ctx->pc == 0x224E0Cu) {
        ctx->pc = 0x224E10u;
        goto label_224e10;
    }
    ctx->pc = 0x224E08u;
    {
        const bool branch_taken_0x224e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x224e08) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224E10u;
label_224e10:
    // 0x224e10: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x224e10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_224e14:
    // 0x224e14: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x224e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_224e18:
    // 0x224e18: 0x1462025e  bne         $v1, $v0, . + 4 + (0x25E << 2)
label_224e1c:
    if (ctx->pc == 0x224E1Cu) {
        ctx->pc = 0x224E20u;
        goto label_224e20;
    }
    ctx->pc = 0x224E18u;
    {
        const bool branch_taken_0x224e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x224e18) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224E20u;
label_224e20:
    // 0x224e20: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x224e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_224e24:
    // 0x224e24: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x224e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_224e28:
    // 0x224e28: 0x1462025a  bne         $v1, $v0, . + 4 + (0x25A << 2)
label_224e2c:
    if (ctx->pc == 0x224E2Cu) {
        ctx->pc = 0x224E30u;
        goto label_224e30;
    }
    ctx->pc = 0x224E28u;
    {
        const bool branch_taken_0x224e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x224e28) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224E30u;
label_224e30:
    // 0x224e30: 0x12000258  beqz        $s0, . + 4 + (0x258 << 2)
label_224e34:
    if (ctx->pc == 0x224E34u) {
        ctx->pc = 0x224E38u;
        goto label_224e38;
    }
    ctx->pc = 0x224E30u;
    {
        const bool branch_taken_0x224e30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x224e30) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224E38u;
label_224e38:
    // 0x224e38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x224e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224e3c:
    // 0x224e3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224e40:
    // 0x224e40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x224e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224e44:
    // 0x224e44: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x224e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_224e48:
    // 0x224e48: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x224e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_224e4c:
    // 0x224e4c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x224e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_224e50:
    // 0x224e50: 0x24453620  addiu       $a1, $v0, 0x3620
    ctx->pc = 0x224e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
label_224e54:
    // 0x224e54: 0x9042367c  lbu         $v0, 0x367C($v0)
    ctx->pc = 0x224e54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13948)));
label_224e58:
    // 0x224e58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_224e5c:
    if (ctx->pc == 0x224E5Cu) {
        ctx->pc = 0x224E60u;
        goto label_224e60;
    }
    ctx->pc = 0x224E58u;
    {
        const bool branch_taken_0x224e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224e58) {
            ctx->pc = 0x224E78u;
            goto label_224e78;
        }
    }
    ctx->pc = 0x224E60u;
label_224e60:
    // 0x224e60: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x224e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_224e64:
    // 0x224e64: 0x284203e8  slti        $v0, $v0, 0x3E8
    ctx->pc = 0x224e64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
label_224e68:
    // 0x224e68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_224e6c:
    if (ctx->pc == 0x224E6Cu) {
        ctx->pc = 0x224E70u;
        goto label_224e70;
    }
    ctx->pc = 0x224E68u;
    {
        const bool branch_taken_0x224e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224e68) {
            ctx->pc = 0x224E78u;
            goto label_224e78;
        }
    }
    ctx->pc = 0x224E70u;
label_224e70:
    // 0x224e70: 0x10000248  b           . + 4 + (0x248 << 2)
label_224e74:
    if (ctx->pc == 0x224E74u) {
        ctx->pc = 0x224E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E70u;
        // 0x224e74: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224E78u;
        goto label_224e78;
    }
    ctx->pc = 0x224E70u;
    {
        const bool branch_taken_0x224e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E70u;
        // 0x224e74: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e70) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224E78u;
label_224e78:
    // 0x224e78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x224e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_224e7c:
    // 0x224e7c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x224e7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_224e80:
    // 0x224e80: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_224e84:
    if (ctx->pc == 0x224E84u) {
        ctx->pc = 0x224E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E80u;
        // 0x224e84: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224E88u;
        goto label_224e88;
    }
    ctx->pc = 0x224E80u;
    {
        const bool branch_taken_0x224e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E80u;
        // 0x224e84: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e80) {
            ctx->pc = 0x224E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224e4c;
        }
    }
    ctx->pc = 0x224E88u;
label_224e88:
    // 0x224e88: 0x10000242  b           . + 4 + (0x242 << 2)
label_224e8c:
    if (ctx->pc == 0x224E8Cu) {
        ctx->pc = 0x224E90u;
        goto label_224e90;
    }
    ctx->pc = 0x224E88u;
    {
        const bool branch_taken_0x224e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224e88) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x224E90u;
label_224e90:
    // 0x224e90: 0x8624000a  lh          $a0, 0xA($s1)
    ctx->pc = 0x224e90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_224e94:
    // 0x224e94: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x224e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_224e98:
    // 0x224e98: 0x1482006a  bne         $a0, $v0, . + 4 + (0x6A << 2)
label_224e9c:
    if (ctx->pc == 0x224E9Cu) {
        ctx->pc = 0x224E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E98u;
        // 0x224e9c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224EA0u;
        goto label_224ea0;
    }
    ctx->pc = 0x224E98u;
    {
        const bool branch_taken_0x224e98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x224E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E98u;
        // 0x224e9c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e98) {
            ctx->pc = 0x225044u;
            goto label_225044;
        }
    }
    ctx->pc = 0x224EA0u;
label_224ea0:
    // 0x224ea0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x224ea0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224ea4:
    // 0x224ea4: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x224ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_224ea8:
    // 0x224ea8: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x224ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
label_224eac:
    // 0x224eac: 0x34454dd3  ori         $a1, $v0, 0x4DD3
    ctx->pc = 0x224eacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_224eb0:
    // 0x224eb0: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x224eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
label_224eb4:
    // 0x224eb4: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x224eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_224eb8:
    // 0x224eb8: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x224eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_224ebc:
    // 0x224ebc: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x224ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_224ec0:
    // 0x224ec0: 0x24e72570  addiu       $a3, $a3, 0x2570
    ctx->pc = 0x224ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9584));
label_224ec4:
    // 0x224ec4: 0x25081300  addiu       $t0, $t0, 0x1300
    ctx->pc = 0x224ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4864));
label_224ec8:
    // 0x224ec8: 0x1092021  addu        $a0, $t0, $t1
    ctx->pc = 0x224ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_224ecc:
    // 0x224ecc: 0x248a3620  addiu       $t2, $a0, 0x3620
    ctx->pc = 0x224eccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 13856));
label_224ed0:
    // 0x224ed0: 0x9084367c  lbu         $a0, 0x367C($a0)
    ctx->pc = 0x224ed0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13948)));
label_224ed4:
    // 0x224ed4: 0x10800055  beqz        $a0, . + 4 + (0x55 << 2)
label_224ed8:
    if (ctx->pc == 0x224ED8u) {
        ctx->pc = 0x224EDCu;
        goto label_224edc;
    }
    ctx->pc = 0x224ED4u;
    {
        const bool branch_taken_0x224ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x224ed4) {
            ctx->pc = 0x22502Cu;
            goto label_22502c;
        }
    }
    ctx->pc = 0x224EDCu;
label_224edc:
    // 0x224edc: 0x8d460054  lw          $a2, 0x54($t2)
    ctx->pc = 0x224edcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 84)));
label_224ee0:
    // 0x224ee0: 0x86240008  lh          $a0, 0x8($s1)
    ctx->pc = 0x224ee0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_224ee4:
    // 0x224ee4: 0x14c40051  bne         $a2, $a0, . + 4 + (0x51 << 2)
label_224ee8:
    if (ctx->pc == 0x224EE8u) {
        ctx->pc = 0x224EECu;
        goto label_224eec;
    }
    ctx->pc = 0x224EE4u;
    {
        const bool branch_taken_0x224ee4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x224ee4) {
            ctx->pc = 0x22502Cu;
            goto label_22502c;
        }
    }
    ctx->pc = 0x224EECu;
label_224eec:
    // 0x224eec: 0x8d4d004c  lw          $t5, 0x4C($t2)
    ctx->pc = 0x224eecu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 76)));
label_224ef0:
    // 0x224ef0: 0x62200  sll         $a0, $a2, 8
    ctx->pc = 0x224ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_224ef4:
    // 0x224ef4: 0x866023  subu        $t4, $a0, $a2
    ctx->pc = 0x224ef4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_224ef8:
    // 0x224ef8: 0xc20c0  sll         $a0, $t4, 3
    ctx->pc = 0x224ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_224efc:
    // 0x224efc: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x224efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_224f00:
    // 0x224f00: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x224f00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_224f04:
    // 0x224f04: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x224f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_224f08:
    // 0x224f08: 0xd60c0  sll         $t4, $t5, 3
    ctx->pc = 0x224f08u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
label_224f0c:
    // 0x224f0c: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x224f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_224f10:
    // 0x224f10: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x224f10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_224f14:
    // 0x224f14: 0x862a000c  lh          $t2, 0xC($s1)
    ctx->pc = 0x224f14u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_224f18:
    // 0x224f18: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x224f18u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_224f1c:
    // 0x224f1c: 0x8c6021  addu        $t4, $a0, $t4
    ctx->pc = 0x224f1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_224f20:
    // 0x224f20: 0x9184003d  lbu         $a0, 0x3D($t4)
    ctx->pc = 0x224f20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 61)));
label_224f24:
    // 0x224f24: 0x14800039  bnez        $a0, . + 4 + (0x39 << 2)
label_224f28:
    if (ctx->pc == 0x224F28u) {
        ctx->pc = 0x224F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F24u;
        // 0x224f28: 0x8626000e  lh          $a2, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224F2Cu;
        goto label_224f2c;
    }
    ctx->pc = 0x224F24u;
    {
        const bool branch_taken_0x224f24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x224F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F24u;
        // 0x224f28: 0x8626000e  lh          $a2, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f24) {
            ctx->pc = 0x22500Cu;
            goto label_22500c;
        }
    }
    ctx->pc = 0x224F2Cu;
label_224f2c:
    // 0x224f2c: 0xc5810008  lwc1        $f1, 0x8($t4)
    ctx->pc = 0x224f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_224f30:
    // 0x224f30: 0xa543c  dsll32      $t2, $t2, 16
    ctx->pc = 0x224f30u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
label_224f34:
    // 0x224f34: 0xc5800004  lwc1        $f0, 0x4($t4)
    ctx->pc = 0x224f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224f38:
    // 0x224f38: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x224f38u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
label_224f3c:
    // 0x224f3c: 0xa6fc2  srl         $t5, $t2, 31
    ctx->pc = 0x224f3cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
label_224f40:
    // 0x224f40: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x224f40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_224f44:
    // 0x224f44: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x224f44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_224f48:
    // 0x224f48: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x224f48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_224f4c:
    // 0x224f4c: 0xa40018  mult        $zero, $a1, $a0
    ctx->pc = 0x224f4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_224f50:
    // 0x224f50: 0x47fc2  srl         $t7, $a0, 31
    ctx->pc = 0x224f50u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_224f54:
    // 0x224f54: 0x0  nop
    ctx->pc = 0x224f54u;
    // NOP
label_224f58:
    // 0x224f58: 0x6010  mfhi        $t4
    ctx->pc = 0x224f58u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_224f5c:
    // 0x224f5c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x224f5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_224f60:
    // 0x224f60: 0x0  nop
    ctx->pc = 0x224f60u;
    // NOP
label_224f64:
    // 0x224f64: 0xa40018  mult        $zero, $a1, $a0
    ctx->pc = 0x224f64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_224f68:
    // 0x224f68: 0xc6183  sra         $t4, $t4, 6
    ctx->pc = 0x224f68u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 6));
label_224f6c:
    // 0x224f6c: 0x477c2  srl         $t6, $a0, 31
    ctx->pc = 0x224f6cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_224f70:
    // 0x224f70: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x224f70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
label_224f74:
    // 0x224f74: 0x318400ff  andi        $a0, $t4, 0xFF
    ctx->pc = 0x224f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_224f78:
    // 0x224f78: 0x6010  mfhi        $t4
    ctx->pc = 0x224f78u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_224f7c:
    // 0x224f7c: 0x4a0018  mult        $zero, $v0, $t2
    ctx->pc = 0x224f7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_224f80:
    // 0x224f80: 0xc6183  sra         $t4, $t4, 6
    ctx->pc = 0x224f80u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 6));
label_224f84:
    // 0x224f84: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x224f84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
label_224f88:
    // 0x224f88: 0x318e00ff  andi        $t6, $t4, 0xFF
    ctx->pc = 0x224f88u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_224f8c:
    // 0x224f8c: 0x6010  mfhi        $t4
    ctx->pc = 0x224f8cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_224f90:
    // 0x224f90: 0xc6143  sra         $t4, $t4, 5
    ctx->pc = 0x224f90u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 5));
label_224f94:
    // 0x224f94: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x224f94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_224f98:
    // 0x224f98: 0x1cc602a  slt         $t4, $t6, $t4
    ctx->pc = 0x224f98u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_224f9c:
    // 0x224f9c: 0x1580001b  bnez        $t4, . + 4 + (0x1B << 2)
label_224fa0:
    if (ctx->pc == 0x224FA0u) {
        ctx->pc = 0x224FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F9Cu;
        // 0x224fa0: 0x66c3c  dsll32      $t5, $a2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224FA4u;
        goto label_224fa4;
    }
    ctx->pc = 0x224F9Cu;
    {
        const bool branch_taken_0x224f9c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x224FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224F9Cu;
        // 0x224fa0: 0x66c3c  dsll32      $t5, $a2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f9c) {
            ctx->pc = 0x22500Cu;
            goto label_22500c;
        }
    }
    ctx->pc = 0x224FA4u;
label_224fa4:
    // 0x224fa4: 0xd6c3f  dsra32      $t5, $t5, 16
    ctx->pc = 0x224fa4u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 16));
label_224fa8:
    // 0x224fa8: 0x4d0018  mult        $zero, $v0, $t5
    ctx->pc = 0x224fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_224fac:
    // 0x224fac: 0xd67c2  srl         $t4, $t5, 31
    ctx->pc = 0x224facu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
label_224fb0:
    // 0x224fb0: 0x0  nop
    ctx->pc = 0x224fb0u;
    // NOP
label_224fb4:
    // 0x224fb4: 0x3010  mfhi        $a2
    ctx->pc = 0x224fb4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_224fb8:
    // 0x224fb8: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x224fb8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_224fbc:
    // 0x224fbc: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x224fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_224fc0:
    // 0x224fc0: 0xce082a  slt         $at, $a2, $t6
    ctx->pc = 0x224fc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
label_224fc4:
    // 0x224fc4: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
label_224fc8:
    if (ctx->pc == 0x224FC8u) {
        ctx->pc = 0x224FCCu;
        goto label_224fcc;
    }
    ctx->pc = 0x224FC4u;
    {
        const bool branch_taken_0x224fc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x224fc4) {
            ctx->pc = 0x22500Cu;
            goto label_22500c;
        }
    }
    ctx->pc = 0x224FCCu;
label_224fcc:
    // 0x224fcc: 0x143001a  div         $zero, $t2, $v1
    ctx->pc = 0x224fccu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_224fd0:
    // 0x224fd0: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x224fd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_224fd4:
    // 0x224fd4: 0x0  nop
    ctx->pc = 0x224fd4u;
    // NOP
label_224fd8:
    // 0x224fd8: 0x2010  mfhi        $a0
    ctx->pc = 0x224fd8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_224fdc:
    // 0x224fdc: 0xc4202a  slt         $a0, $a2, $a0
    ctx->pc = 0x224fdcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_224fe0:
    // 0x224fe0: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_224fe4:
    if (ctx->pc == 0x224FE4u) {
        ctx->pc = 0x224FE8u;
        goto label_224fe8;
    }
    ctx->pc = 0x224FE0u;
    {
        const bool branch_taken_0x224fe0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x224fe0) {
            ctx->pc = 0x22500Cu;
            goto label_22500c;
        }
    }
    ctx->pc = 0x224FE8u;
label_224fe8:
    // 0x224fe8: 0x1a3001a  div         $zero, $t5, $v1
    ctx->pc = 0x224fe8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 13);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_224fec:
    // 0x224fec: 0x0  nop
    ctx->pc = 0x224fecu;
    // NOP
label_224ff0:
    // 0x224ff0: 0x0  nop
    ctx->pc = 0x224ff0u;
    // NOP
label_224ff4:
    // 0x224ff4: 0x2010  mfhi        $a0
    ctx->pc = 0x224ff4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_224ff8:
    // 0x224ff8: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x224ff8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_224ffc:
    // 0x224ffc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_225000:
    if (ctx->pc == 0x225000u) {
        ctx->pc = 0x225000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224FFCu;
        // 0x225000: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225004u;
        goto label_225004;
    }
    ctx->pc = 0x224FFCu;
    {
        const bool branch_taken_0x224ffc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x225000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224FFCu;
        // 0x225000: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ffc) {
            ctx->pc = 0x22500Cu;
            goto label_22500c;
        }
    }
    ctx->pc = 0x225004u;
label_225004:
    // 0x225004: 0x10000003  b           . + 4 + (0x3 << 2)
label_225008:
    if (ctx->pc == 0x225008u) {
        ctx->pc = 0x22500Cu;
        goto label_22500c;
    }
    ctx->pc = 0x225004u;
    {
        const bool branch_taken_0x225004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225004) {
            ctx->pc = 0x225014u;
            goto label_225014;
        }
    }
    ctx->pc = 0x22500Cu;
label_22500c:
    // 0x22500c: 0x0  nop
    ctx->pc = 0x22500cu;
    // NOP
label_225010:
    // 0x225010: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x225010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225014:
    // 0x225014: 0x0  nop
    ctx->pc = 0x225014u;
    // NOP
label_225018:
    // 0x225018: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_22501c:
    if (ctx->pc == 0x22501Cu) {
        ctx->pc = 0x225020u;
        goto label_225020;
    }
    ctx->pc = 0x225018u;
    {
        const bool branch_taken_0x225018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x225018) {
            ctx->pc = 0x22502Cu;
            goto label_22502c;
        }
    }
    ctx->pc = 0x225020u;
label_225020:
    // 0x225020: 0xaf8b92e4  sw          $t3, -0x6D1C($gp)
    ctx->pc = 0x225020u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939364), GPR_U32(ctx, 11));
label_225024:
    // 0x225024: 0x100001db  b           . + 4 + (0x1DB << 2)
label_225028:
    if (ctx->pc == 0x225028u) {
        ctx->pc = 0x225028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225024u;
        // 0x225028: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22502Cu;
        goto label_22502c;
    }
    ctx->pc = 0x225024u;
    {
        const bool branch_taken_0x225024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225024u;
        // 0x225028: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225024) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x22502Cu;
label_22502c:
    // 0x22502c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x22502cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_225030:
    // 0x225030: 0x29640002  slti        $a0, $t3, 0x2
    ctx->pc = 0x225030u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
label_225034:
    // 0x225034: 0x1480ffa4  bnez        $a0, . + 4 + (-0x5C << 2)
label_225038:
    if (ctx->pc == 0x225038u) {
        ctx->pc = 0x225038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225034u;
        // 0x225038: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22503Cu;
        goto label_22503c;
    }
    ctx->pc = 0x225034u;
    {
        const bool branch_taken_0x225034 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x225038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225034u;
        // 0x225038: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225034) {
            ctx->pc = 0x224EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224ec8;
        }
    }
    ctx->pc = 0x22503Cu;
label_22503c:
    // 0x22503c: 0x100001d5  b           . + 4 + (0x1D5 << 2)
label_225040:
    if (ctx->pc == 0x225040u) {
        ctx->pc = 0x225044u;
        goto label_225044;
    }
    ctx->pc = 0x22503Cu;
    {
        const bool branch_taken_0x22503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22503c) {
            ctx->pc = 0x225794u;
            { ctx->pc = 0x225794; return; }
        }
    }
    ctx->pc = 0x225044u;
label_225044:
    // 0x225044: 0x86260008  lh          $a2, 0x8($s1)
    ctx->pc = 0x225044u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_225048:
    // 0x225048: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x225048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_22504c:
    // 0x22504c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22504cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_225050:
    // 0x225050: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x225050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_225054:
    // 0x225054: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x225054u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_225058:
    // 0x225058: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x225058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_22505c:
    // 0x22505c: 0x8627000c  lh          $a3, 0xC($s1)
    ctx->pc = 0x22505cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_225060:
    // 0x225060: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x225060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_225064:
    // 0x225064: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x225064u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_225068:
    // 0x225068: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x225068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_22506c:
    // 0x22506c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x22506cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_225070:
    // 0x225070: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x225070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_225074:
    // 0x225074: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x225074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_225078:
    // 0x225078: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x225078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_22507c:
    // 0x22507c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x22507cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_225080:
    // 0x225080: 0x9083003d  lbu         $v1, 0x3D($a0)
    ctx->pc = 0x225080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
label_225084:
    // 0x225084: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
label_225088:
    if (ctx->pc == 0x225088u) {
        ctx->pc = 0x225088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225084u;
        // 0x225088: 0x8622000e  lh          $v0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22508Cu;
        goto label_22508c;
    }
    ctx->pc = 0x225084u;
    {
        const bool branch_taken_0x225084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x225088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225084u;
        // 0x225088: 0x8622000e  lh          $v0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225084) {
            ctx->pc = 0x225184u;
            { ctx->pc = 0x225184; return; }
        }
    }
    ctx->pc = 0x22508Cu;
label_22508c:
    // 0x22508c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x22508cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_225090:
    // 0x225090: 0x71c3c  dsll32      $v1, $a3, 16
    ctx->pc = 0x225090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
label_225094:
    // 0x225094: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x225094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225098:
    // 0x225098: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x225098u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_22509c:
    // 0x22509c: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x22509cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_2250a0:
    // 0x2250a0: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2250a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2250a4:
    // 0x2250a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2250a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2250a8:
    // 0x2250a8: 0x3c041062  lui         $a0, 0x1062
    ctx->pc = 0x2250a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4194 << 16));
label_2250ac:
    // 0x2250ac: 0x348a4dd3  ori         $t2, $a0, 0x4DD3
    ctx->pc = 0x2250acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19923);
label_2250b0:
    // 0x2250b0: 0x3c0451eb  lui         $a0, 0x51EB
    ctx->pc = 0x2250b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20971 << 16));
label_2250b4:
    // 0x2250b4: 0x3486851f  ori         $a2, $a0, 0x851F
    ctx->pc = 0x2250b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34079);
label_2250b8:
    // 0x2250b8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2250b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2250bc:
    // 0x2250bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2250bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2250c0:
    // 0x2250c0: 0x1440018  mult        $zero, $t2, $a0
    ctx->pc = 0x2250c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2250c4:
    // 0x2250c4: 0x44fc2  srl         $t1, $a0, 31
    ctx->pc = 0x2250c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_2250c8:
    // 0x2250c8: 0x0  nop
    ctx->pc = 0x2250c8u;
    // NOP
label_2250cc:
    // 0x2250cc: 0x4010  mfhi        $t0
    ctx->pc = 0x2250ccu;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2250d0:
    // 0x2250d0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2250d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2250d4:
    // 0x2250d4: 0x0  nop
    ctx->pc = 0x2250d4u;
    // NOP
label_2250d8:
    // 0x2250d8: 0x1440018  mult        $zero, $t2, $a0
    ctx->pc = 0x2250d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2250dc:
    // 0x2250dc: 0x84183  sra         $t0, $t0, 6
    ctx->pc = 0x2250dcu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 6));
label_2250e0:
    // 0x2250e0: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x2250e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_2250e4:
    // 0x2250e4: 0x447c2  srl         $t0, $a0, 31
    ctx->pc = 0x2250e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_2250e8:
    // 0x2250e8: 0x2010  mfhi        $a0
    ctx->pc = 0x2250e8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2250ec:
    // 0x2250ec: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x2250ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2250f0:
    // 0x2250f0: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x2250f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
label_2250f4:
    // 0x2250f4: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x2250f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_2250f8:
    // 0x2250f8: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x2250f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2250fc:
    // 0x2250fc: 0x2010  mfhi        $a0
    ctx->pc = 0x2250fcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_225100:
    // 0x225100: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x225100u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
label_225104:
    // 0x225104: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x225104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_225108:
    // 0x225108: 0x104202a  slt         $a0, $t0, $a0
    ctx->pc = 0x225108u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_22510c:
    // 0x22510c: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
label_225110:
    if (ctx->pc == 0x225110u) {
        ctx->pc = 0x225110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22510Cu;
        // 0x225110: 0x312900ff  andi        $t1, $t1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x225114u;
        goto label_225114;
    }
    ctx->pc = 0x22510Cu;
    {
        const bool branch_taken_0x22510c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x225110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22510Cu;
        // 0x225110: 0x312900ff  andi        $t1, $t1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22510c) {
            ctx->pc = 0x225184u;
            { ctx->pc = 0x225184; return; }
        }
    }
    ctx->pc = 0x225114u;
label_225114:
    // 0x225114: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x225114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
label_225118:
    // 0x225118: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x225118u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_22511c:
    // 0x22511c: 0xc50018  mult        $zero, $a2, $a1
    ctx->pc = 0x22511cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_225120:
    // 0x225120: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x225120u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_225124:
    // 0x225124: 0x0  nop
    ctx->pc = 0x225124u;
    // NOP
label_225128:
    // 0x225128: 0x1010  mfhi        $v0
    ctx->pc = 0x225128u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_22512c:
    // 0x22512c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x22512cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_225130:
    // 0x225130: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x225130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_225134:
    // 0x225134: 0x48082a  slt         $at, $v0, $t0
    ctx->pc = 0x225134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_225138:
    // 0x225138: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
label_22513c:
    if (ctx->pc == 0x22513Cu) {
        ctx->pc = 0x225140u;
        goto label_225140;
    }
    ctx->pc = 0x225138u;
    {
        const bool branch_taken_0x225138 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225138) {
            ctx->pc = 0x225184u;
            { ctx->pc = 0x225184; return; }
        }
    }
    ctx->pc = 0x225140u;
label_225140:
    // 0x225140: 0x67001a  div         $zero, $v1, $a3
    ctx->pc = 0x225140u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_225144:
    // 0x225144: 0x0  nop
    ctx->pc = 0x225144u;
    // NOP
label_225148:
    // 0x225148: 0x0  nop
    ctx->pc = 0x225148u;
    // NOP
label_22514c:
    // 0x22514c: 0x1010  mfhi        $v0
    ctx->pc = 0x22514cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    ctx->pc = 0x225150u;
    return;
}
