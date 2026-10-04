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


void FUN_0017faa0_part251(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1f9bc0u: goto label_1f9bc0;
        case 0x1f9bc4u: goto label_1f9bc4;
        case 0x1f9bc8u: goto label_1f9bc8;
        case 0x1f9bccu: goto label_1f9bcc;
        case 0x1f9bd0u: goto label_1f9bd0;
        case 0x1f9bd4u: goto label_1f9bd4;
        case 0x1f9bd8u: goto label_1f9bd8;
        case 0x1f9bdcu: goto label_1f9bdc;
        case 0x1f9be0u: goto label_1f9be0;
        case 0x1f9be4u: goto label_1f9be4;
        case 0x1f9be8u: goto label_1f9be8;
        case 0x1f9becu: goto label_1f9bec;
        case 0x1f9bf0u: goto label_1f9bf0;
        case 0x1f9bf4u: goto label_1f9bf4;
        case 0x1f9bf8u: goto label_1f9bf8;
        case 0x1f9bfcu: goto label_1f9bfc;
        case 0x1f9c00u: goto label_1f9c00;
        case 0x1f9c04u: goto label_1f9c04;
        case 0x1f9c08u: goto label_1f9c08;
        case 0x1f9c0cu: goto label_1f9c0c;
        case 0x1f9c10u: goto label_1f9c10;
        case 0x1f9c14u: goto label_1f9c14;
        case 0x1f9c18u: goto label_1f9c18;
        case 0x1f9c1cu: goto label_1f9c1c;
        case 0x1f9c20u: goto label_1f9c20;
        case 0x1f9c24u: goto label_1f9c24;
        case 0x1f9c28u: goto label_1f9c28;
        case 0x1f9c2cu: goto label_1f9c2c;
        case 0x1f9c30u: goto label_1f9c30;
        case 0x1f9c34u: goto label_1f9c34;
        case 0x1f9c38u: goto label_1f9c38;
        case 0x1f9c3cu: goto label_1f9c3c;
        case 0x1f9c40u: goto label_1f9c40;
        case 0x1f9c44u: goto label_1f9c44;
        case 0x1f9c48u: goto label_1f9c48;
        case 0x1f9c4cu: goto label_1f9c4c;
        case 0x1f9c50u: goto label_1f9c50;
        case 0x1f9c54u: goto label_1f9c54;
        case 0x1f9c58u: goto label_1f9c58;
        case 0x1f9c5cu: goto label_1f9c5c;
        case 0x1f9c60u: goto label_1f9c60;
        case 0x1f9c64u: goto label_1f9c64;
        case 0x1f9c68u: goto label_1f9c68;
        case 0x1f9c6cu: goto label_1f9c6c;
        case 0x1f9c70u: goto label_1f9c70;
        case 0x1f9c74u: goto label_1f9c74;
        case 0x1f9c78u: goto label_1f9c78;
        case 0x1f9c7cu: goto label_1f9c7c;
        case 0x1f9c80u: goto label_1f9c80;
        case 0x1f9c84u: goto label_1f9c84;
        case 0x1f9c88u: goto label_1f9c88;
        case 0x1f9c8cu: goto label_1f9c8c;
        case 0x1f9c90u: goto label_1f9c90;
        case 0x1f9c94u: goto label_1f9c94;
        case 0x1f9c98u: goto label_1f9c98;
        case 0x1f9c9cu: goto label_1f9c9c;
        case 0x1f9ca0u: goto label_1f9ca0;
        case 0x1f9ca4u: goto label_1f9ca4;
        case 0x1f9ca8u: goto label_1f9ca8;
        case 0x1f9cacu: goto label_1f9cac;
        case 0x1f9cb0u: goto label_1f9cb0;
        case 0x1f9cb4u: goto label_1f9cb4;
        case 0x1f9cb8u: goto label_1f9cb8;
        case 0x1f9cbcu: goto label_1f9cbc;
        case 0x1f9cc0u: goto label_1f9cc0;
        case 0x1f9cc4u: goto label_1f9cc4;
        case 0x1f9cc8u: goto label_1f9cc8;
        case 0x1f9cccu: goto label_1f9ccc;
        case 0x1f9cd0u: goto label_1f9cd0;
        case 0x1f9cd4u: goto label_1f9cd4;
        case 0x1f9cd8u: goto label_1f9cd8;
        case 0x1f9cdcu: goto label_1f9cdc;
        case 0x1f9ce0u: goto label_1f9ce0;
        case 0x1f9ce4u: goto label_1f9ce4;
        case 0x1f9ce8u: goto label_1f9ce8;
        case 0x1f9cecu: goto label_1f9cec;
        case 0x1f9cf0u: goto label_1f9cf0;
        case 0x1f9cf4u: goto label_1f9cf4;
        case 0x1f9cf8u: goto label_1f9cf8;
        case 0x1f9cfcu: goto label_1f9cfc;
        case 0x1f9d00u: goto label_1f9d00;
        case 0x1f9d04u: goto label_1f9d04;
        case 0x1f9d08u: goto label_1f9d08;
        case 0x1f9d0cu: goto label_1f9d0c;
        case 0x1f9d10u: goto label_1f9d10;
        case 0x1f9d14u: goto label_1f9d14;
        case 0x1f9d18u: goto label_1f9d18;
        case 0x1f9d1cu: goto label_1f9d1c;
        case 0x1f9d20u: goto label_1f9d20;
        case 0x1f9d24u: goto label_1f9d24;
        case 0x1f9d28u: goto label_1f9d28;
        case 0x1f9d2cu: goto label_1f9d2c;
        case 0x1f9d30u: goto label_1f9d30;
        case 0x1f9d34u: goto label_1f9d34;
        case 0x1f9d38u: goto label_1f9d38;
        case 0x1f9d3cu: goto label_1f9d3c;
        case 0x1f9d40u: goto label_1f9d40;
        case 0x1f9d44u: goto label_1f9d44;
        case 0x1f9d48u: goto label_1f9d48;
        case 0x1f9d4cu: goto label_1f9d4c;
        case 0x1f9d50u: goto label_1f9d50;
        case 0x1f9d54u: goto label_1f9d54;
        case 0x1f9d58u: goto label_1f9d58;
        case 0x1f9d5cu: goto label_1f9d5c;
        case 0x1f9d60u: goto label_1f9d60;
        case 0x1f9d64u: goto label_1f9d64;
        case 0x1f9d68u: goto label_1f9d68;
        case 0x1f9d6cu: goto label_1f9d6c;
        case 0x1f9d70u: goto label_1f9d70;
        case 0x1f9d74u: goto label_1f9d74;
        case 0x1f9d78u: goto label_1f9d78;
        case 0x1f9d7cu: goto label_1f9d7c;
        case 0x1f9d80u: goto label_1f9d80;
        case 0x1f9d84u: goto label_1f9d84;
        case 0x1f9d88u: goto label_1f9d88;
        case 0x1f9d8cu: goto label_1f9d8c;
        case 0x1f9d90u: goto label_1f9d90;
        case 0x1f9d94u: goto label_1f9d94;
        case 0x1f9d98u: goto label_1f9d98;
        case 0x1f9d9cu: goto label_1f9d9c;
        case 0x1f9da0u: goto label_1f9da0;
        case 0x1f9da4u: goto label_1f9da4;
        case 0x1f9da8u: goto label_1f9da8;
        case 0x1f9dacu: goto label_1f9dac;
        case 0x1f9db0u: goto label_1f9db0;
        case 0x1f9db4u: goto label_1f9db4;
        case 0x1f9db8u: goto label_1f9db8;
        case 0x1f9dbcu: goto label_1f9dbc;
        case 0x1f9dc0u: goto label_1f9dc0;
        case 0x1f9dc4u: goto label_1f9dc4;
        case 0x1f9dc8u: goto label_1f9dc8;
        case 0x1f9dccu: goto label_1f9dcc;
        case 0x1f9dd0u: goto label_1f9dd0;
        case 0x1f9dd4u: goto label_1f9dd4;
        case 0x1f9dd8u: goto label_1f9dd8;
        case 0x1f9ddcu: goto label_1f9ddc;
        case 0x1f9de0u: goto label_1f9de0;
        case 0x1f9de4u: goto label_1f9de4;
        case 0x1f9de8u: goto label_1f9de8;
        case 0x1f9decu: goto label_1f9dec;
        case 0x1f9df0u: goto label_1f9df0;
        case 0x1f9df4u: goto label_1f9df4;
        case 0x1f9df8u: goto label_1f9df8;
        case 0x1f9dfcu: goto label_1f9dfc;
        case 0x1f9e00u: goto label_1f9e00;
        case 0x1f9e04u: goto label_1f9e04;
        case 0x1f9e08u: goto label_1f9e08;
        case 0x1f9e0cu: goto label_1f9e0c;
        case 0x1f9e10u: goto label_1f9e10;
        case 0x1f9e14u: goto label_1f9e14;
        case 0x1f9e18u: goto label_1f9e18;
        case 0x1f9e1cu: goto label_1f9e1c;
        case 0x1f9e20u: goto label_1f9e20;
        case 0x1f9e24u: goto label_1f9e24;
        case 0x1f9e28u: goto label_1f9e28;
        case 0x1f9e2cu: goto label_1f9e2c;
        case 0x1f9e30u: goto label_1f9e30;
        case 0x1f9e34u: goto label_1f9e34;
        case 0x1f9e38u: goto label_1f9e38;
        case 0x1f9e3cu: goto label_1f9e3c;
        case 0x1f9e40u: goto label_1f9e40;
        case 0x1f9e44u: goto label_1f9e44;
        case 0x1f9e48u: goto label_1f9e48;
        case 0x1f9e4cu: goto label_1f9e4c;
        case 0x1f9e50u: goto label_1f9e50;
        case 0x1f9e54u: goto label_1f9e54;
        case 0x1f9e58u: goto label_1f9e58;
        case 0x1f9e5cu: goto label_1f9e5c;
        case 0x1f9e60u: goto label_1f9e60;
        case 0x1f9e64u: goto label_1f9e64;
        case 0x1f9e68u: goto label_1f9e68;
        case 0x1f9e6cu: goto label_1f9e6c;
        case 0x1f9e70u: goto label_1f9e70;
        case 0x1f9e74u: goto label_1f9e74;
        case 0x1f9e78u: goto label_1f9e78;
        case 0x1f9e7cu: goto label_1f9e7c;
        case 0x1f9e80u: goto label_1f9e80;
        case 0x1f9e84u: goto label_1f9e84;
        case 0x1f9e88u: goto label_1f9e88;
        case 0x1f9e8cu: goto label_1f9e8c;
        case 0x1f9e90u: goto label_1f9e90;
        case 0x1f9e94u: goto label_1f9e94;
        case 0x1f9e98u: goto label_1f9e98;
        case 0x1f9e9cu: goto label_1f9e9c;
        case 0x1f9ea0u: goto label_1f9ea0;
        case 0x1f9ea4u: goto label_1f9ea4;
        case 0x1f9ea8u: goto label_1f9ea8;
        case 0x1f9eacu: goto label_1f9eac;
        case 0x1f9eb0u: goto label_1f9eb0;
        case 0x1f9eb4u: goto label_1f9eb4;
        case 0x1f9eb8u: goto label_1f9eb8;
        case 0x1f9ebcu: goto label_1f9ebc;
        case 0x1f9ec0u: goto label_1f9ec0;
        case 0x1f9ec4u: goto label_1f9ec4;
        case 0x1f9ec8u: goto label_1f9ec8;
        case 0x1f9eccu: goto label_1f9ecc;
        case 0x1f9ed0u: goto label_1f9ed0;
        case 0x1f9ed4u: goto label_1f9ed4;
        case 0x1f9ed8u: goto label_1f9ed8;
        case 0x1f9edcu: goto label_1f9edc;
        case 0x1f9ee0u: goto label_1f9ee0;
        case 0x1f9ee4u: goto label_1f9ee4;
        case 0x1f9ee8u: goto label_1f9ee8;
        case 0x1f9eecu: goto label_1f9eec;
        case 0x1f9ef0u: goto label_1f9ef0;
        case 0x1f9ef4u: goto label_1f9ef4;
        case 0x1f9ef8u: goto label_1f9ef8;
        case 0x1f9efcu: goto label_1f9efc;
        case 0x1f9f00u: goto label_1f9f00;
        case 0x1f9f04u: goto label_1f9f04;
        case 0x1f9f08u: goto label_1f9f08;
        case 0x1f9f0cu: goto label_1f9f0c;
        case 0x1f9f10u: goto label_1f9f10;
        case 0x1f9f14u: goto label_1f9f14;
        case 0x1f9f18u: goto label_1f9f18;
        case 0x1f9f1cu: goto label_1f9f1c;
        case 0x1f9f20u: goto label_1f9f20;
        case 0x1f9f24u: goto label_1f9f24;
        case 0x1f9f28u: goto label_1f9f28;
        case 0x1f9f2cu: goto label_1f9f2c;
        case 0x1f9f30u: goto label_1f9f30;
        case 0x1f9f34u: goto label_1f9f34;
        case 0x1f9f38u: goto label_1f9f38;
        case 0x1f9f3cu: goto label_1f9f3c;
        case 0x1f9f40u: goto label_1f9f40;
        case 0x1f9f44u: goto label_1f9f44;
        case 0x1f9f48u: goto label_1f9f48;
        case 0x1f9f4cu: goto label_1f9f4c;
        case 0x1f9f50u: goto label_1f9f50;
        case 0x1f9f54u: goto label_1f9f54;
        case 0x1f9f58u: goto label_1f9f58;
        case 0x1f9f5cu: goto label_1f9f5c;
        case 0x1f9f60u: goto label_1f9f60;
        case 0x1f9f64u: goto label_1f9f64;
        case 0x1f9f68u: goto label_1f9f68;
        case 0x1f9f6cu: goto label_1f9f6c;
        case 0x1f9f70u: goto label_1f9f70;
        case 0x1f9f74u: goto label_1f9f74;
        case 0x1f9f78u: goto label_1f9f78;
        case 0x1f9f7cu: goto label_1f9f7c;
        case 0x1f9f80u: goto label_1f9f80;
        case 0x1f9f84u: goto label_1f9f84;
        case 0x1f9f88u: goto label_1f9f88;
        case 0x1f9f8cu: goto label_1f9f8c;
        case 0x1f9f90u: goto label_1f9f90;
        case 0x1f9f94u: goto label_1f9f94;
        case 0x1f9f98u: goto label_1f9f98;
        case 0x1f9f9cu: goto label_1f9f9c;
        case 0x1f9fa0u: goto label_1f9fa0;
        case 0x1f9fa4u: goto label_1f9fa4;
        case 0x1f9fa8u: goto label_1f9fa8;
        case 0x1f9facu: goto label_1f9fac;
        case 0x1f9fb0u: goto label_1f9fb0;
        case 0x1f9fb4u: goto label_1f9fb4;
        case 0x1f9fb8u: goto label_1f9fb8;
        case 0x1f9fbcu: goto label_1f9fbc;
        case 0x1f9fc0u: goto label_1f9fc0;
        case 0x1f9fc4u: goto label_1f9fc4;
        case 0x1f9fc8u: goto label_1f9fc8;
        case 0x1f9fccu: goto label_1f9fcc;
        case 0x1f9fd0u: goto label_1f9fd0;
        case 0x1f9fd4u: goto label_1f9fd4;
        case 0x1f9fd8u: goto label_1f9fd8;
        case 0x1f9fdcu: goto label_1f9fdc;
        case 0x1f9fe0u: goto label_1f9fe0;
        case 0x1f9fe4u: goto label_1f9fe4;
        case 0x1f9fe8u: goto label_1f9fe8;
        case 0x1f9fecu: goto label_1f9fec;
        case 0x1f9ff0u: goto label_1f9ff0;
        case 0x1f9ff4u: goto label_1f9ff4;
        case 0x1f9ff8u: goto label_1f9ff8;
        case 0x1f9ffcu: goto label_1f9ffc;
        case 0x1fa000u: goto label_1fa000;
        case 0x1fa004u: goto label_1fa004;
        case 0x1fa008u: goto label_1fa008;
        case 0x1fa00cu: goto label_1fa00c;
        case 0x1fa010u: goto label_1fa010;
        case 0x1fa014u: goto label_1fa014;
        case 0x1fa018u: goto label_1fa018;
        case 0x1fa01cu: goto label_1fa01c;
        case 0x1fa020u: goto label_1fa020;
        case 0x1fa024u: goto label_1fa024;
        case 0x1fa028u: goto label_1fa028;
        case 0x1fa02cu: goto label_1fa02c;
        case 0x1fa030u: goto label_1fa030;
        case 0x1fa034u: goto label_1fa034;
        case 0x1fa038u: goto label_1fa038;
        case 0x1fa03cu: goto label_1fa03c;
        case 0x1fa040u: goto label_1fa040;
        case 0x1fa044u: goto label_1fa044;
        case 0x1fa048u: goto label_1fa048;
        case 0x1fa04cu: goto label_1fa04c;
        case 0x1fa050u: goto label_1fa050;
        case 0x1fa054u: goto label_1fa054;
        case 0x1fa058u: goto label_1fa058;
        case 0x1fa05cu: goto label_1fa05c;
        case 0x1fa060u: goto label_1fa060;
        case 0x1fa064u: goto label_1fa064;
        case 0x1fa068u: goto label_1fa068;
        case 0x1fa06cu: goto label_1fa06c;
        case 0x1fa070u: goto label_1fa070;
        case 0x1fa074u: goto label_1fa074;
        case 0x1fa078u: goto label_1fa078;
        case 0x1fa07cu: goto label_1fa07c;
        case 0x1fa080u: goto label_1fa080;
        case 0x1fa084u: goto label_1fa084;
        case 0x1fa088u: goto label_1fa088;
        case 0x1fa08cu: goto label_1fa08c;
        case 0x1fa090u: goto label_1fa090;
        case 0x1fa094u: goto label_1fa094;
        case 0x1fa098u: goto label_1fa098;
        case 0x1fa09cu: goto label_1fa09c;
        case 0x1fa0a0u: goto label_1fa0a0;
        case 0x1fa0a4u: goto label_1fa0a4;
        case 0x1fa0a8u: goto label_1fa0a8;
        case 0x1fa0acu: goto label_1fa0ac;
        case 0x1fa0b0u: goto label_1fa0b0;
        case 0x1fa0b4u: goto label_1fa0b4;
        case 0x1fa0b8u: goto label_1fa0b8;
        case 0x1fa0bcu: goto label_1fa0bc;
        case 0x1fa0c0u: goto label_1fa0c0;
        case 0x1fa0c4u: goto label_1fa0c4;
        case 0x1fa0c8u: goto label_1fa0c8;
        case 0x1fa0ccu: goto label_1fa0cc;
        case 0x1fa0d0u: goto label_1fa0d0;
        case 0x1fa0d4u: goto label_1fa0d4;
        case 0x1fa0d8u: goto label_1fa0d8;
        case 0x1fa0dcu: goto label_1fa0dc;
        case 0x1fa0e0u: goto label_1fa0e0;
        case 0x1fa0e4u: goto label_1fa0e4;
        case 0x1fa0e8u: goto label_1fa0e8;
        case 0x1fa0ecu: goto label_1fa0ec;
        case 0x1fa0f0u: goto label_1fa0f0;
        case 0x1fa0f4u: goto label_1fa0f4;
        case 0x1fa0f8u: goto label_1fa0f8;
        case 0x1fa0fcu: goto label_1fa0fc;
        case 0x1fa100u: goto label_1fa100;
        case 0x1fa104u: goto label_1fa104;
        case 0x1fa108u: goto label_1fa108;
        case 0x1fa10cu: goto label_1fa10c;
        case 0x1fa110u: goto label_1fa110;
        case 0x1fa114u: goto label_1fa114;
        case 0x1fa118u: goto label_1fa118;
        case 0x1fa11cu: goto label_1fa11c;
        case 0x1fa120u: goto label_1fa120;
        case 0x1fa124u: goto label_1fa124;
        case 0x1fa128u: goto label_1fa128;
        case 0x1fa12cu: goto label_1fa12c;
        case 0x1fa130u: goto label_1fa130;
        case 0x1fa134u: goto label_1fa134;
        case 0x1fa138u: goto label_1fa138;
        case 0x1fa13cu: goto label_1fa13c;
        case 0x1fa140u: goto label_1fa140;
        case 0x1fa144u: goto label_1fa144;
        case 0x1fa148u: goto label_1fa148;
        case 0x1fa14cu: goto label_1fa14c;
        case 0x1fa150u: goto label_1fa150;
        case 0x1fa154u: goto label_1fa154;
        case 0x1fa158u: goto label_1fa158;
        case 0x1fa15cu: goto label_1fa15c;
        case 0x1fa160u: goto label_1fa160;
        case 0x1fa164u: goto label_1fa164;
        case 0x1fa168u: goto label_1fa168;
        case 0x1fa16cu: goto label_1fa16c;
        case 0x1fa170u: goto label_1fa170;
        case 0x1fa174u: goto label_1fa174;
        case 0x1fa178u: goto label_1fa178;
        case 0x1fa17cu: goto label_1fa17c;
        case 0x1fa180u: goto label_1fa180;
        case 0x1fa184u: goto label_1fa184;
        case 0x1fa188u: goto label_1fa188;
        case 0x1fa18cu: goto label_1fa18c;
        case 0x1fa190u: goto label_1fa190;
        case 0x1fa194u: goto label_1fa194;
        case 0x1fa198u: goto label_1fa198;
        case 0x1fa19cu: goto label_1fa19c;
        case 0x1fa1a0u: goto label_1fa1a0;
        case 0x1fa1a4u: goto label_1fa1a4;
        case 0x1fa1a8u: goto label_1fa1a8;
        case 0x1fa1acu: goto label_1fa1ac;
        case 0x1fa1b0u: goto label_1fa1b0;
        case 0x1fa1b4u: goto label_1fa1b4;
        case 0x1fa1b8u: goto label_1fa1b8;
        case 0x1fa1bcu: goto label_1fa1bc;
        case 0x1fa1c0u: goto label_1fa1c0;
        case 0x1fa1c4u: goto label_1fa1c4;
        case 0x1fa1c8u: goto label_1fa1c8;
        case 0x1fa1ccu: goto label_1fa1cc;
        case 0x1fa1d0u: goto label_1fa1d0;
        case 0x1fa1d4u: goto label_1fa1d4;
        case 0x1fa1d8u: goto label_1fa1d8;
        case 0x1fa1dcu: goto label_1fa1dc;
        case 0x1fa1e0u: goto label_1fa1e0;
        case 0x1fa1e4u: goto label_1fa1e4;
        case 0x1fa1e8u: goto label_1fa1e8;
        case 0x1fa1ecu: goto label_1fa1ec;
        case 0x1fa1f0u: goto label_1fa1f0;
        case 0x1fa1f4u: goto label_1fa1f4;
        case 0x1fa1f8u: goto label_1fa1f8;
        case 0x1fa1fcu: goto label_1fa1fc;
        case 0x1fa200u: goto label_1fa200;
        case 0x1fa204u: goto label_1fa204;
        case 0x1fa208u: goto label_1fa208;
        case 0x1fa20cu: goto label_1fa20c;
        case 0x1fa210u: goto label_1fa210;
        case 0x1fa214u: goto label_1fa214;
        case 0x1fa218u: goto label_1fa218;
        case 0x1fa21cu: goto label_1fa21c;
        case 0x1fa220u: goto label_1fa220;
        case 0x1fa224u: goto label_1fa224;
        case 0x1fa228u: goto label_1fa228;
        case 0x1fa22cu: goto label_1fa22c;
        case 0x1fa230u: goto label_1fa230;
        case 0x1fa234u: goto label_1fa234;
        case 0x1fa238u: goto label_1fa238;
        case 0x1fa23cu: goto label_1fa23c;
        case 0x1fa240u: goto label_1fa240;
        case 0x1fa244u: goto label_1fa244;
        case 0x1fa248u: goto label_1fa248;
        case 0x1fa24cu: goto label_1fa24c;
        case 0x1fa250u: goto label_1fa250;
        case 0x1fa254u: goto label_1fa254;
        case 0x1fa258u: goto label_1fa258;
        case 0x1fa25cu: goto label_1fa25c;
        case 0x1fa260u: goto label_1fa260;
        case 0x1fa264u: goto label_1fa264;
        case 0x1fa268u: goto label_1fa268;
        case 0x1fa26cu: goto label_1fa26c;
        case 0x1fa270u: goto label_1fa270;
        case 0x1fa274u: goto label_1fa274;
        case 0x1fa278u: goto label_1fa278;
        case 0x1fa27cu: goto label_1fa27c;
        case 0x1fa280u: goto label_1fa280;
        case 0x1fa284u: goto label_1fa284;
        case 0x1fa288u: goto label_1fa288;
        case 0x1fa28cu: goto label_1fa28c;
        case 0x1fa290u: goto label_1fa290;
        case 0x1fa294u: goto label_1fa294;
        case 0x1fa298u: goto label_1fa298;
        case 0x1fa29cu: goto label_1fa29c;
        case 0x1fa2a0u: goto label_1fa2a0;
        case 0x1fa2a4u: goto label_1fa2a4;
        case 0x1fa2a8u: goto label_1fa2a8;
        case 0x1fa2acu: goto label_1fa2ac;
        case 0x1fa2b0u: goto label_1fa2b0;
        case 0x1fa2b4u: goto label_1fa2b4;
        case 0x1fa2b8u: goto label_1fa2b8;
        case 0x1fa2bcu: goto label_1fa2bc;
        case 0x1fa2c0u: goto label_1fa2c0;
        case 0x1fa2c4u: goto label_1fa2c4;
        case 0x1fa2c8u: goto label_1fa2c8;
        case 0x1fa2ccu: goto label_1fa2cc;
        case 0x1fa2d0u: goto label_1fa2d0;
        case 0x1fa2d4u: goto label_1fa2d4;
        case 0x1fa2d8u: goto label_1fa2d8;
        case 0x1fa2dcu: goto label_1fa2dc;
        case 0x1fa2e0u: goto label_1fa2e0;
        case 0x1fa2e4u: goto label_1fa2e4;
        case 0x1fa2e8u: goto label_1fa2e8;
        case 0x1fa2ecu: goto label_1fa2ec;
        case 0x1fa2f0u: goto label_1fa2f0;
        case 0x1fa2f4u: goto label_1fa2f4;
        case 0x1fa2f8u: goto label_1fa2f8;
        case 0x1fa2fcu: goto label_1fa2fc;
        case 0x1fa300u: goto label_1fa300;
        case 0x1fa304u: goto label_1fa304;
        case 0x1fa308u: goto label_1fa308;
        case 0x1fa30cu: goto label_1fa30c;
        case 0x1fa310u: goto label_1fa310;
        case 0x1fa314u: goto label_1fa314;
        case 0x1fa318u: goto label_1fa318;
        case 0x1fa31cu: goto label_1fa31c;
        case 0x1fa320u: goto label_1fa320;
        case 0x1fa324u: goto label_1fa324;
        case 0x1fa328u: goto label_1fa328;
        case 0x1fa32cu: goto label_1fa32c;
        case 0x1fa330u: goto label_1fa330;
        case 0x1fa334u: goto label_1fa334;
        case 0x1fa338u: goto label_1fa338;
        case 0x1fa33cu: goto label_1fa33c;
        case 0x1fa340u: goto label_1fa340;
        case 0x1fa344u: goto label_1fa344;
        case 0x1fa348u: goto label_1fa348;
        case 0x1fa34cu: goto label_1fa34c;
        case 0x1fa350u: goto label_1fa350;
        case 0x1fa354u: goto label_1fa354;
        case 0x1fa358u: goto label_1fa358;
        case 0x1fa35cu: goto label_1fa35c;
        case 0x1fa360u: goto label_1fa360;
        case 0x1fa364u: goto label_1fa364;
        case 0x1fa368u: goto label_1fa368;
        case 0x1fa36cu: goto label_1fa36c;
        case 0x1fa370u: goto label_1fa370;
        case 0x1fa374u: goto label_1fa374;
        case 0x1fa378u: goto label_1fa378;
        case 0x1fa37cu: goto label_1fa37c;
        case 0x1fa380u: goto label_1fa380;
        case 0x1fa384u: goto label_1fa384;
        case 0x1fa388u: goto label_1fa388;
        case 0x1fa38cu: goto label_1fa38c;
        default: return;
    }

label_1f9bc0:
    // 0x1f9bc0: 0x902a490d  lbu         $t2, 0x490D($at)
    ctx->pc = 0x1f9bc0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1f9bc4:
    // 0x1f9bc4: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1f9bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1f9bc8:
    // 0x1f9bc8: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1f9bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1f9bcc:
    // 0x1f9bcc: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1f9bccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1f9bd0:
    // 0x1f9bd0: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x1f9bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
label_1f9bd4:
    // 0x1f9bd4: 0x35880  sll         $t3, $v1, 2
    ctx->pc = 0x1f9bd4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f9bd8:
    // 0x1f9bd8: 0x24a5a688  addiu       $a1, $a1, -0x5978
    ctx->pc = 0x1f9bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944392));
label_1f9bdc:
    // 0x1f9bdc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f9bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f9be0:
    // 0x1f9be0: 0xab4021  addu        $t0, $a1, $t3
    ctx->pc = 0x1f9be0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_1f9be4:
    // 0x1f9be4: 0x2463a689  addiu       $v1, $v1, -0x5977
    ctx->pc = 0x1f9be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944393));
label_1f9be8:
    // 0x1f9be8: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x1f9be8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_1f9bec:
    // 0x1f9bec: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x1f9becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_1f9bf0:
    // 0x1f9bf0: 0x2529c480  addiu       $t1, $t1, -0x3B80
    ctx->pc = 0x1f9bf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952064));
label_1f9bf4:
    // 0x1f9bf4: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1f9bf4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_1f9bf8:
    // 0x1f9bf8: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1f9bf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_1f9bfc:
    // 0x1f9bfc: 0x24e7c481  addiu       $a3, $a3, -0x3B7F
    ctx->pc = 0x1f9bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952065));
label_1f9c00:
    // 0x1f9c00: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x1f9c00u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_1f9c04:
    // 0x1f9c04: 0x24a5c482  addiu       $a1, $a1, -0x3B7E
    ctx->pc = 0x1f9c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952066));
label_1f9c08:
    // 0x1f9c08: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f9c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f9c0c:
    // 0x1f9c0c: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1f9c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_1f9c10:
    // 0x1f9c10: 0x2463a68a  addiu       $v1, $v1, -0x5976
    ctx->pc = 0x1f9c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944394));
label_1f9c14:
    // 0x1f9c14: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x1f9c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1f9c18:
    // 0x1f9c18: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1f9c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_1f9c1c:
    // 0x1f9c1c: 0xa1090000  sb          $t1, 0x0($t0)
    ctx->pc = 0x1f9c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 9));
label_1f9c20:
    // 0x1f9c20: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x1f9c20u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1f9c24:
    // 0x1f9c24: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x1f9c24u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
label_1f9c28:
    // 0x1f9c28: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1f9c28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1f9c2c:
    // 0x1f9c2c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1f9c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_1f9c30:
    // 0x1f9c30: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x1f9c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_1f9c34:
    // 0x1f9c34: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1f9c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1f9c38:
    // 0x1f9c38: 0x24a5c55c  addiu       $a1, $a1, -0x3AA4
    ctx->pc = 0x1f9c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952284));
label_1f9c3c:
    // 0x1f9c3c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1f9c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1f9c40:
    // 0x1f9c40: 0x30680400  andi        $t0, $v1, 0x400
    ctx->pc = 0x1f9c40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1f9c44:
    // 0x1f9c44: 0x1100000b  beqz        $t0, . + 4 + (0xB << 2)
label_1f9c48:
    if (ctx->pc == 0x1F9C48u) {
        ctx->pc = 0x1F9C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C44u;
        // 0x1f9c48: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9C4Cu;
        goto label_1f9c4c;
    }
    ctx->pc = 0x1F9C44u;
    {
        const bool branch_taken_0x1f9c44 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C44u;
        // 0x1f9c48: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c44) {
            ctx->pc = 0x1F9C74u;
            goto label_1f9c74;
        }
    }
    ctx->pc = 0x1F9C4Cu;
label_1f9c4c:
    // 0x1f9c4c: 0x30650004  andi        $a1, $v1, 0x4
    ctx->pc = 0x1f9c4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1f9c50:
    // 0x1f9c50: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1f9c54:
    if (ctx->pc == 0x1F9C54u) {
        ctx->pc = 0x1F9C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C50u;
        // 0x1f9c54: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9C58u;
        goto label_1f9c58;
    }
    ctx->pc = 0x1F9C50u;
    {
        const bool branch_taken_0x1f9c50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C50u;
        // 0x1f9c54: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c50) {
            ctx->pc = 0x1F9C68u;
            goto label_1f9c68;
        }
    }
    ctx->pc = 0x1F9C58u;
label_1f9c58:
    // 0x1f9c58: 0x30650020  andi        $a1, $v1, 0x20
    ctx->pc = 0x1f9c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1f9c5c:
    // 0x1f9c5c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1f9c60:
    if (ctx->pc == 0x1F9C60u) {
        ctx->pc = 0x1F9C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C5Cu;
        // 0x1f9c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9C64u;
        goto label_1f9c64;
    }
    ctx->pc = 0x1F9C5Cu;
    {
        const bool branch_taken_0x1f9c5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C5Cu;
        // 0x1f9c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c5c) {
            ctx->pc = 0x1F9C78u;
            goto label_1f9c78;
        }
    }
    ctx->pc = 0x1F9C64u;
label_1f9c64:
    // 0x1f9c64: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1f9c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_1f9c68:
    // 0x1f9c68: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x1f9c68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1f9c6c:
    // 0x1f9c6c: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1f9c70:
    if (ctx->pc == 0x1F9C70u) {
        ctx->pc = 0x1F9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C6Cu;
        // 0x1f9c70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9C74u;
        goto label_1f9c74;
    }
    ctx->pc = 0x1F9C6Cu;
    {
        const bool branch_taken_0x1f9c6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C6Cu;
        // 0x1f9c70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c6c) {
            ctx->pc = 0x1F9C78u;
            goto label_1f9c78;
        }
    }
    ctx->pc = 0x1F9C74u;
label_1f9c74:
    // 0x1f9c74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f9c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9c78:
    // 0x1f9c78: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1f9c7c:
    if (ctx->pc == 0x1F9C7Cu) {
        ctx->pc = 0x1F9C80u;
        goto label_1f9c80;
    }
    ctx->pc = 0x1F9C78u;
    {
        const bool branch_taken_0x1f9c78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9c78) {
            ctx->pc = 0x1F9CA4u;
            goto label_1f9ca4;
        }
    }
    ctx->pc = 0x1F9C80u;
label_1f9c80:
    // 0x1f9c80: 0x3c05451c  lui         $a1, 0x451C
    ctx->pc = 0x1f9c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17692 << 16));
label_1f9c84:
    // 0x1f9c84: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x1f9c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_1f9c88:
    // 0x1f9c88: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1f9c88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f9c8c:
    // 0x1f9c8c: 0x0  nop
    ctx->pc = 0x1f9c8cu;
    // NOP
label_1f9c90:
    // 0x1f9c90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f9c90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9c94:
    // 0x1f9c94: 0x0  nop
    ctx->pc = 0x1f9c94u;
    // NOP
label_1f9c98:
    // 0x1f9c98: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1f9c9c:
    if (ctx->pc == 0x1F9C9Cu) {
        ctx->pc = 0x1F9C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C98u;
        // 0x1f9c9c: 0x1128c0  sll         $a1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9CA0u;
        goto label_1f9ca0;
    }
    ctx->pc = 0x1F9C98u;
    {
        const bool branch_taken_0x1f9c98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F9C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C98u;
        // 0x1f9c9c: 0x1128c0  sll         $a1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c98) {
            ctx->pc = 0x1F9CA8u;
            goto label_1f9ca8;
        }
    }
    ctx->pc = 0x1F9CA0u;
label_1f9ca0:
    // 0x1f9ca0: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1f9ca0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_1f9ca4:
    // 0x1f9ca4: 0x1128c0  sll         $a1, $s1, 3
    ctx->pc = 0x1f9ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1f9ca8:
    // 0x1f9ca8: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1f9ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1f9cac:
    // 0x1f9cac: 0xb13823  subu        $a3, $a1, $s1
    ctx->pc = 0x1f9cacu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_1f9cb0:
    // 0x1f9cb0: 0x24c6a678  addiu       $a2, $a2, -0x5988
    ctx->pc = 0x1f9cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944376));
label_1f9cb4:
    // 0x1f9cb4: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x1f9cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_1f9cb8:
    // 0x1f9cb8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1f9cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1f9cbc:
    // 0x1f9cbc: 0x24a5c560  addiu       $a1, $a1, -0x3AA0
    ctx->pc = 0x1f9cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952288));
label_1f9cc0:
    // 0x1f9cc0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1f9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1f9cc4:
    // 0x1f9cc4: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x1f9cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f9cc8:
    // 0x1f9cc8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1f9cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1f9ccc:
    // 0x1f9ccc: 0x1100000b  beqz        $t0, . + 4 + (0xB << 2)
label_1f9cd0:
    if (ctx->pc == 0x1F9CD0u) {
        ctx->pc = 0x1F9CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CCCu;
        // 0x1f9cd0: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9CD4u;
        goto label_1f9cd4;
    }
    ctx->pc = 0x1F9CCCu;
    {
        const bool branch_taken_0x1f9ccc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CCCu;
        // 0x1f9cd0: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ccc) {
            ctx->pc = 0x1F9CFCu;
            goto label_1f9cfc;
        }
    }
    ctx->pc = 0x1F9CD4u;
label_1f9cd4:
    // 0x1f9cd4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1f9cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1f9cd8:
    // 0x1f9cd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1f9cdc:
    if (ctx->pc == 0x1F9CDCu) {
        ctx->pc = 0x1F9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CD8u;
        // 0x1f9cdc: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9CE0u;
        goto label_1f9ce0;
    }
    ctx->pc = 0x1F9CD8u;
    {
        const bool branch_taken_0x1f9cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CD8u;
        // 0x1f9cdc: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9cd8) {
            ctx->pc = 0x1F9CF0u;
            goto label_1f9cf0;
        }
    }
    ctx->pc = 0x1F9CE0u;
label_1f9ce0:
    // 0x1f9ce0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1f9ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1f9ce4:
    // 0x1f9ce4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1f9ce8:
    if (ctx->pc == 0x1F9CE8u) {
        ctx->pc = 0x1F9CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CE4u;
        // 0x1f9ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9CECu;
        goto label_1f9cec;
    }
    ctx->pc = 0x1F9CE4u;
    {
        const bool branch_taken_0x1f9ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CE4u;
        // 0x1f9ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ce4) {
            ctx->pc = 0x1F9D00u;
            goto label_1f9d00;
        }
    }
    ctx->pc = 0x1F9CECu;
label_1f9cec:
    // 0x1f9cec: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1f9cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1f9cf0:
    // 0x1f9cf0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f9cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1f9cf4:
    // 0x1f9cf4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1f9cf8:
    if (ctx->pc == 0x1F9CF8u) {
        ctx->pc = 0x1F9CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CF4u;
        // 0x1f9cf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9CFCu;
        goto label_1f9cfc;
    }
    ctx->pc = 0x1F9CF4u;
    {
        const bool branch_taken_0x1f9cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CF4u;
        // 0x1f9cf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9cf4) {
            ctx->pc = 0x1F9D00u;
            goto label_1f9d00;
        }
    }
    ctx->pc = 0x1F9CFCu;
label_1f9cfc:
    // 0x1f9cfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f9cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9d00:
    // 0x1f9d00: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1f9d04:
    if (ctx->pc == 0x1F9D04u) {
        ctx->pc = 0x1F9D08u;
        goto label_1f9d08;
    }
    ctx->pc = 0x1F9D00u;
    {
        const bool branch_taken_0x1f9d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9d00) {
            ctx->pc = 0x1F9D2Cu;
            goto label_1f9d2c;
        }
    }
    ctx->pc = 0x1F9D08u;
label_1f9d08:
    // 0x1f9d08: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x1f9d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
label_1f9d0c:
    // 0x1f9d0c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1f9d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1f9d10:
    // 0x1f9d10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f9d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f9d14:
    // 0x1f9d14: 0x0  nop
    ctx->pc = 0x1f9d14u;
    // NOP
label_1f9d18:
    // 0x1f9d18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f9d18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9d1c:
    // 0x1f9d1c: 0x0  nop
    ctx->pc = 0x1f9d1cu;
    // NOP
label_1f9d20:
    // 0x1f9d20: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1f9d24:
    if (ctx->pc == 0x1F9D24u) {
        ctx->pc = 0x1F9D28u;
        goto label_1f9d28;
    }
    ctx->pc = 0x1F9D20u;
    {
        const bool branch_taken_0x1f9d20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9d20) {
            ctx->pc = 0x1F9D2Cu;
            goto label_1f9d2c;
        }
    }
    ctx->pc = 0x1F9D28u;
label_1f9d28:
    // 0x1f9d28: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1f9d28u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_1f9d2c:
    // 0x1f9d2c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1f9d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1f9d30:
    // 0x1f9d30: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x1f9d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_1f9d34:
    // 0x1f9d34: 0x2463a67c  addiu       $v1, $v1, -0x5984
    ctx->pc = 0x1f9d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944380));
label_1f9d38:
    // 0x1f9d38: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1f9d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f9d3c:
    // 0x1f9d3c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_1f9d40:
    if (ctx->pc == 0x1F9D40u) {
        ctx->pc = 0x1F9D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D3Cu;
        // 0x1f9d40: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9D44u;
        goto label_1f9d44;
    }
    ctx->pc = 0x1F9D3Cu;
    {
        const bool branch_taken_0x1f9d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D3Cu;
        // 0x1f9d40: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d3c) {
            ctx->pc = 0x1F9E24u;
            goto label_1f9e24;
        }
    }
    ctx->pc = 0x1F9D44u;
label_1f9d44:
    // 0x1f9d44: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1f9d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f9d48:
    // 0x1f9d48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f9d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9d4c:
    // 0x1f9d4c: 0xc0552b0  jal         func_154AC0
label_1f9d50:
    if (ctx->pc == 0x1F9D50u) {
        ctx->pc = 0x1F9D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D4Cu;
        // 0x1f9d50: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9D54u;
        goto label_1f9d54;
    }
    ctx->pc = 0x1F9D4Cu;
    SET_GPR_U32(ctx, 31, 0x1F9D54u);
    ctx->pc = 0x1F9D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9D4Cu;
    // 0x1f9d50: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AC0u, 0x1F9D4Cu, 0x1F9D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9D54u;
label_1f9d54:
    // 0x1f9d54: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1f9d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f9d58:
    // 0x1f9d58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f9d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f9d5c:
    // 0x1f9d5c: 0xc0552b0  jal         func_154AC0
label_1f9d60:
    if (ctx->pc == 0x1F9D60u) {
        ctx->pc = 0x1F9D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D5Cu;
        // 0x1f9d60: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9D64u;
        goto label_1f9d64;
    }
    ctx->pc = 0x1F9D5Cu;
    SET_GPR_U32(ctx, 31, 0x1F9D64u);
    ctx->pc = 0x1F9D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9D5Cu;
    // 0x1f9d60: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AC0u, 0x1F9D5Cu, 0x1F9D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9D64u;
label_1f9d64:
    // 0x1f9d64: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1f9d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1f9d68:
    // 0x1f9d68: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f9d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f9d6c:
    // 0x1f9d6c: 0xc0552b0  jal         func_154AC0
label_1f9d70:
    if (ctx->pc == 0x1F9D70u) {
        ctx->pc = 0x1F9D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D6Cu;
        // 0x1f9d70: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9D74u;
        goto label_1f9d74;
    }
    ctx->pc = 0x1F9D6Cu;
    SET_GPR_U32(ctx, 31, 0x1F9D74u);
    ctx->pc = 0x1F9D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9D6Cu;
    // 0x1f9d70: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AC0u, 0x1F9D6Cu, 0x1F9D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9D74u;
label_1f9d74:
    // 0x1f9d74: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1f9d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f9d78:
    // 0x1f9d78: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f9d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f9d7c:
    // 0x1f9d7c: 0x2442c550  addiu       $v0, $v0, -0x3AB0
    ctx->pc = 0x1f9d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952272));
label_1f9d80:
    // 0x1f9d80: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f9d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f9d84:
    // 0x1f9d84: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1f9d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f9d88:
    // 0x1f9d88: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f9d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f9d8c:
    // 0x1f9d8c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f9d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f9d90:
    // 0x1f9d90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f9d94:
    // 0x1f9d94: 0xc066e26  jal         func_19B898
label_1f9d98:
    if (ctx->pc == 0x1F9D98u) {
        ctx->pc = 0x1F9D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D94u;
        // 0x1f9d98: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9D9Cu;
        goto label_1f9d9c;
    }
    ctx->pc = 0x1F9D94u;
    SET_GPR_U32(ctx, 31, 0x1F9D9Cu);
    ctx->pc = 0x1F9D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9D94u;
    // 0x1f9d98: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1F9D9Cu;
label_1f9d9c:
    // 0x1f9d9c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1f9d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f9da0:
    // 0x1f9da0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f9da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f9da4:
    // 0x1f9da4: 0x2442c550  addiu       $v0, $v0, -0x3AB0
    ctx->pc = 0x1f9da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952272));
label_1f9da8:
    // 0x1f9da8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1f9da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1f9dac:
    // 0x1f9dac: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1f9dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f9db0:
    // 0x1f9db0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f9db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f9db4:
    // 0x1f9db4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f9db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f9db8:
    // 0x1f9db8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f9dbc:
    // 0x1f9dbc: 0xc066e26  jal         func_19B898
label_1f9dc0:
    if (ctx->pc == 0x1F9DC0u) {
        ctx->pc = 0x1F9DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DBCu;
        // 0x1f9dc0: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9DC4u;
        goto label_1f9dc4;
    }
    ctx->pc = 0x1F9DBCu;
    SET_GPR_U32(ctx, 31, 0x1F9DC4u);
    ctx->pc = 0x1F9DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9DBCu;
    // 0x1f9dc0: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1F9DC4u;
label_1f9dc4:
    // 0x1f9dc4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1f9dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f9dc8:
    // 0x1f9dc8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f9dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f9dcc:
    // 0x1f9dcc: 0x2442c550  addiu       $v0, $v0, -0x3AB0
    ctx->pc = 0x1f9dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952272));
label_1f9dd0:
    // 0x1f9dd0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1f9dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1f9dd4:
    // 0x1f9dd4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1f9dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f9dd8:
    // 0x1f9dd8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f9dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f9ddc:
    // 0x1f9ddc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f9ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f9de0:
    // 0x1f9de0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f9de4:
    // 0x1f9de4: 0xc066e26  jal         func_19B898
label_1f9de8:
    if (ctx->pc == 0x1F9DE8u) {
        ctx->pc = 0x1F9DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DE4u;
        // 0x1f9de8: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9DECu;
        goto label_1f9dec;
    }
    ctx->pc = 0x1F9DE4u;
    SET_GPR_U32(ctx, 31, 0x1F9DECu);
    ctx->pc = 0x1F9DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9DE4u;
    // 0x1f9de8: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1F9DECu;
label_1f9dec:
    // 0x1f9dec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f9decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f9df0:
    // 0x1f9df0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f9df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9df4:
    // 0x1f9df4: 0xc05524c  jal         func_154930
label_1f9df8:
    if (ctx->pc == 0x1F9DF8u) {
        ctx->pc = 0x1F9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DF4u;
        // 0x1f9df8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9DFCu;
        goto label_1f9dfc;
    }
    ctx->pc = 0x1F9DF4u;
    SET_GPR_U32(ctx, 31, 0x1F9DFCu);
    ctx->pc = 0x1F9DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9DF4u;
    // 0x1f9df8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154930u, 0x1F9DF4u, 0x1F9DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9DFCu;
label_1f9dfc:
    // 0x1f9dfc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1f9dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1f9e00:
    // 0x1f9e00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f9e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f9e04:
    // 0x1f9e04: 0xc05524c  jal         func_154930
label_1f9e08:
    if (ctx->pc == 0x1F9E08u) {
        ctx->pc = 0x1F9E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E04u;
        // 0x1f9e08: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9E0Cu;
        goto label_1f9e0c;
    }
    ctx->pc = 0x1F9E04u;
    SET_GPR_U32(ctx, 31, 0x1F9E0Cu);
    ctx->pc = 0x1F9E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9E04u;
    // 0x1f9e08: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154930u, 0x1F9E04u, 0x1F9E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E0Cu;
label_1f9e0c:
    // 0x1f9e0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f9e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f9e10:
    // 0x1f9e10: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1f9e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1f9e14:
    // 0x1f9e14: 0xc05524c  jal         func_154930
label_1f9e18:
    if (ctx->pc == 0x1F9E18u) {
        ctx->pc = 0x1F9E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E14u;
        // 0x1f9e18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9E1Cu;
        goto label_1f9e1c;
    }
    ctx->pc = 0x1F9E14u;
    SET_GPR_U32(ctx, 31, 0x1F9E1Cu);
    ctx->pc = 0x1F9E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9E14u;
    // 0x1f9e18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154930u, 0x1F9E14u, 0x1F9E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E1Cu;
label_1f9e1c:
    // 0x1f9e1c: 0x10000017  b           . + 4 + (0x17 << 2)
label_1f9e20:
    if (ctx->pc == 0x1F9E20u) {
        ctx->pc = 0x1F9E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E1Cu;
        // 0x1f9e20: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9E24u;
        goto label_1f9e24;
    }
    ctx->pc = 0x1F9E1Cu;
    {
        const bool branch_taken_0x1f9e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E1Cu;
        // 0x1f9e20: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e1c) {
            ctx->pc = 0x1F9E7Cu;
            goto label_1f9e7c;
        }
    }
    ctx->pc = 0x1F9E24u;
label_1f9e24:
    // 0x1f9e24: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1f9e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1f9e28:
    // 0x1f9e28: 0xc0552d8  jal         func_154B60
label_1f9e2c:
    if (ctx->pc == 0x1F9E2Cu) {
        ctx->pc = 0x1F9E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E28u;
        // 0x1f9e2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9E30u;
        goto label_1f9e30;
    }
    ctx->pc = 0x1F9E28u;
    SET_GPR_U32(ctx, 31, 0x1F9E30u);
    ctx->pc = 0x1F9E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9E28u;
    // 0x1f9e2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B60u, 0x1F9E28u, 0x1F9E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E30u;
label_1f9e30:
    // 0x1f9e30: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1f9e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1f9e34:
    // 0x1f9e34: 0xc0552d8  jal         func_154B60
label_1f9e38:
    if (ctx->pc == 0x1F9E38u) {
        ctx->pc = 0x1F9E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E34u;
        // 0x1f9e38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9E3Cu;
        goto label_1f9e3c;
    }
    ctx->pc = 0x1F9E34u;
    SET_GPR_U32(ctx, 31, 0x1F9E3Cu);
    ctx->pc = 0x1F9E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9E34u;
    // 0x1f9e38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B60u, 0x1F9E34u, 0x1F9E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E3Cu;
label_1f9e3c:
    // 0x1f9e3c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1f9e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f9e40:
    // 0x1f9e40: 0xc0552d8  jal         func_154B60
label_1f9e44:
    if (ctx->pc == 0x1F9E44u) {
        ctx->pc = 0x1F9E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E40u;
        // 0x1f9e44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9E48u;
        goto label_1f9e48;
    }
    ctx->pc = 0x1F9E40u;
    SET_GPR_U32(ctx, 31, 0x1F9E48u);
    ctx->pc = 0x1F9E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9E40u;
    // 0x1f9e44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B60u, 0x1F9E40u, 0x1F9E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E48u;
label_1f9e48:
    // 0x1f9e48: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1f9e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1f9e4c:
    // 0x1f9e4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f9e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9e50:
    // 0x1f9e50: 0xc05524c  jal         func_154930
label_1f9e54:
    if (ctx->pc == 0x1F9E54u) {
        ctx->pc = 0x1F9E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E50u;
        // 0x1f9e54: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9E58u;
        goto label_1f9e58;
    }
    ctx->pc = 0x1F9E50u;
    SET_GPR_U32(ctx, 31, 0x1F9E58u);
    ctx->pc = 0x1F9E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9E50u;
    // 0x1f9e54: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154930u, 0x1F9E50u, 0x1F9E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E58u;
label_1f9e58:
    // 0x1f9e58: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1f9e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1f9e5c:
    // 0x1f9e5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f9e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f9e60:
    // 0x1f9e60: 0xc05524c  jal         func_154930
label_1f9e64:
    if (ctx->pc == 0x1F9E64u) {
        ctx->pc = 0x1F9E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E60u;
        // 0x1f9e64: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9E68u;
        goto label_1f9e68;
    }
    ctx->pc = 0x1F9E60u;
    SET_GPR_U32(ctx, 31, 0x1F9E68u);
    ctx->pc = 0x1F9E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9E60u;
    // 0x1f9e64: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154930u, 0x1F9E60u, 0x1F9E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E68u;
label_1f9e68:
    // 0x1f9e68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f9e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f9e6c:
    // 0x1f9e6c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1f9e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f9e70:
    // 0x1f9e70: 0xc05524c  jal         func_154930
label_1f9e74:
    if (ctx->pc == 0x1F9E74u) {
        ctx->pc = 0x1F9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E70u;
        // 0x1f9e74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9E78u;
        goto label_1f9e78;
    }
    ctx->pc = 0x1F9E70u;
    SET_GPR_U32(ctx, 31, 0x1F9E78u);
    ctx->pc = 0x1F9E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9E70u;
    // 0x1f9e74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154930u, 0x1F9E70u, 0x1F9E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E78u;
label_1f9e78:
    // 0x1f9e78: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1f9e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f9e7c:
    // 0x1f9e7c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f9e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f9e80:
    // 0x1f9e80: 0x2463c550  addiu       $v1, $v1, -0x3AB0
    ctx->pc = 0x1f9e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952272));
label_1f9e84:
    // 0x1f9e84: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1f9e84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f9e88:
    // 0x1f9e88: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f9e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f9e8c:
    // 0x1f9e8c: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x1f9e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1f9e90:
    // 0x1f9e90: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1f9e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f9e94:
    // 0x1f9e94: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1f9e94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f9e98:
    // 0x1f9e98: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_1f9e9c:
    if (ctx->pc == 0x1F9E9Cu) {
        ctx->pc = 0x1F9EA0u;
        goto label_1f9ea0;
    }
    ctx->pc = 0x1F9E98u;
    {
        const bool branch_taken_0x1f9e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9e98) {
            ctx->pc = 0x1F9EBCu;
            goto label_1f9ebc;
        }
    }
    ctx->pc = 0x1F9EA0u;
label_1f9ea0:
    // 0x1f9ea0: 0x27838248  addiu       $v1, $gp, -0x7DB8
    ctx->pc = 0x1f9ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935112));
label_1f9ea4:
    // 0x1f9ea4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f9ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9ea8:
    // 0x1f9ea8: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1f9ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1f9eac:
    // 0x1f9eac: 0x27838238  addiu       $v1, $gp, -0x7DC8
    ctx->pc = 0x1f9eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935096));
label_1f9eb0:
    // 0x1f9eb0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1f9eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1f9eb4:
    // 0x1f9eb4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1f9eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1f9eb8:
    // 0x1f9eb8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1f9eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1f9ebc:
    // 0x1f9ebc: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f9ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f9ec0:
    // 0x1f9ec0: 0x2463c551  addiu       $v1, $v1, -0x3AAF
    ctx->pc = 0x1f9ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952273));
label_1f9ec4:
    // 0x1f9ec4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1f9ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f9ec8:
    // 0x1f9ec8: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1f9ec8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f9ecc:
    // 0x1f9ecc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1f9ed0:
    if (ctx->pc == 0x1F9ED0u) {
        ctx->pc = 0x1F9ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9ECCu;
        // 0x1f9ed0: 0x27838258  addiu       $v1, $gp, -0x7DA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9ED4u;
        goto label_1f9ed4;
    }
    ctx->pc = 0x1F9ECCu;
    {
        const bool branch_taken_0x1f9ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9ECCu;
        // 0x1f9ed0: 0x27838258  addiu       $v1, $gp, -0x7DA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ecc) {
            ctx->pc = 0x1F9EECu;
            goto label_1f9eec;
        }
    }
    ctx->pc = 0x1F9ED4u;
label_1f9ed4:
    // 0x1f9ed4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f9ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9ed8:
    // 0x1f9ed8: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x1f9ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1f9edc:
    // 0x1f9edc: 0x27838238  addiu       $v1, $gp, -0x7DC8
    ctx->pc = 0x1f9edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935096));
label_1f9ee0:
    // 0x1f9ee0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1f9ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1f9ee4:
    // 0x1f9ee4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1f9ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1f9ee8:
    // 0x1f9ee8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1f9ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1f9eec:
    // 0x1f9eec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f9eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f9ef0:
    // 0x1f9ef0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f9ef0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f9ef4:
    // 0x1f9ef4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f9ef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f9ef8:
    // 0x1f9ef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9efc:
    // 0x1f9efc: 0x3e00008  jr          $ra
label_1f9f00:
    if (ctx->pc == 0x1F9F00u) {
        ctx->pc = 0x1F9F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EFCu;
        // 0x1f9f00: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9F04u;
        goto label_1f9f04;
    }
    ctx->pc = 0x1F9EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EFCu;
        // 0x1f9f00: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9F04u;
label_1f9f04:
    // 0x1f9f04: 0x0  nop
    ctx->pc = 0x1f9f04u;
    // NOP
label_1f9f08:
    // 0x1f9f08: 0x0  nop
    ctx->pc = 0x1f9f08u;
    // NOP
label_1f9f0c:
    // 0x1f9f0c: 0x0  nop
    ctx->pc = 0x1f9f0cu;
    // NOP
label_1f9f10:
    // 0x1f9f10: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f9f10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f9f14:
    // 0x1f9f14: 0x27838278  addiu       $v1, $gp, -0x7D88
    ctx->pc = 0x1f9f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f9f18:
    // 0x1f9f18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f9f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f9f1c:
    // 0x1f9f1c: 0x3e00008  jr          $ra
label_1f9f20:
    if (ctx->pc == 0x1F9F20u) {
        ctx->pc = 0x1F9F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F1Cu;
        // 0x1f9f20: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9F24u;
        goto label_1f9f24;
    }
    ctx->pc = 0x1F9F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F1Cu;
        // 0x1f9f20: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9F24u;
label_1f9f24:
    // 0x1f9f24: 0x0  nop
    ctx->pc = 0x1f9f24u;
    // NOP
label_1f9f28:
    // 0x1f9f28: 0x0  nop
    ctx->pc = 0x1f9f28u;
    // NOP
label_1f9f2c:
    // 0x1f9f2c: 0x0  nop
    ctx->pc = 0x1f9f2cu;
    // NOP
label_1f9f30:
    // 0x1f9f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f9f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f9f34:
    // 0x1f9f34: 0x3c023951  lui         $v0, 0x3951
    ctx->pc = 0x1f9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14673 << 16));
label_1f9f38:
    // 0x1f9f38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f9f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1f9f3c:
    // 0x1f9f3c: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x1f9f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_1f9f40:
    // 0x1f9f40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f9f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f9f44:
    // 0x1f9f44: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f9f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f9f48:
    // 0x1f9f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f9f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f9f4c:
    // 0x1f9f4c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1f9f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1f9f50:
    // 0x1f9f50: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1f9f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9f54:
    // 0x1f9f54: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x1f9f54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1f9f58:
    // 0x1f9f58: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1f9f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9f5c:
    // 0x1f9f5c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f9f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f9f60:
    // 0x1f9f60: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1f9f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1f9f64:
    // 0x1f9f64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f9f64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1f9f68:
    // 0x1f9f68: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1f9f68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_1f9f6c:
    // 0x1f9f6c: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x1f9f6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1f9f70:
    // 0x1f9f70: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f9f70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1f9f74:
    // 0x1f9f74: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x1f9f74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_1f9f78:
    // 0x1f9f78: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_1f9f7c:
    if (ctx->pc == 0x1F9F7Cu) {
        ctx->pc = 0x1F9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F78u;
        // 0x1f9f7c: 0x3c02479c  lui         $v0, 0x479C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18332 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9F80u;
        goto label_1f9f80;
    }
    ctx->pc = 0x1F9F78u;
    {
        const bool branch_taken_0x1f9f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F78u;
        // 0x1f9f7c: 0x3c02479c  lui         $v0, 0x479C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18332 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f78) {
            ctx->pc = 0x1F9FA4u;
            goto label_1f9fa4;
        }
    }
    ctx->pc = 0x1F9F80u;
label_1f9f80:
    // 0x1f9f80: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f9f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1f9f84:
    // 0x1f9f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f9f88:
    // 0x1f9f88: 0x0  nop
    ctx->pc = 0x1f9f88u;
    // NOP
label_1f9f8c:
    // 0x1f9f8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f9f8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9f90:
    // 0x1f9f90: 0x0  nop
    ctx->pc = 0x1f9f90u;
    // NOP
label_1f9f94:
    // 0x1f9f94: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1f9f98:
    if (ctx->pc == 0x1F9F98u) {
        ctx->pc = 0x1F9F9Cu;
        goto label_1f9f9c;
    }
    ctx->pc = 0x1F9F94u;
    {
        const bool branch_taken_0x1f9f94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9f94) {
            ctx->pc = 0x1F9FA4u;
            goto label_1f9fa4;
        }
    }
    ctx->pc = 0x1F9F9Cu;
label_1f9f9c:
    // 0x1f9f9c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1f9f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1f9fa0:
    // 0x1f9fa0: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x1f9fa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_1f9fa4:
    // 0x1f9fa4: 0xc088d68  jal         func_2235A0
label_1f9fa8:
    if (ctx->pc == 0x1F9FA8u) {
        ctx->pc = 0x1F9FACu;
        goto label_1f9fac;
    }
    ctx->pc = 0x1F9FA4u;
    SET_GPR_U32(ctx, 31, 0x1F9FACu);
    ctx->pc = 0x2235A0u;
    { ctx->pc = 0x2235a0; return; }
    ctx->pc = 0x1F9FACu;
label_1f9fac:
    // 0x1f9fac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1f9fb0:
    if (ctx->pc == 0x1F9FB0u) {
        ctx->pc = 0x1F9FB4u;
        goto label_1f9fb4;
    }
    ctx->pc = 0x1F9FACu;
    {
        const bool branch_taken_0x1f9fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9fac) {
            ctx->pc = 0x1F9FD4u;
            goto label_1f9fd4;
        }
    }
    ctx->pc = 0x1F9FB4u;
label_1f9fb4:
    // 0x1f9fb4: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x1f9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
label_1f9fb8:
    // 0x1f9fb8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1f9fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1f9fbc:
    // 0x1f9fbc: 0x24427b50  addiu       $v0, $v0, 0x7B50
    ctx->pc = 0x1f9fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31568));
label_1f9fc0:
    // 0x1f9fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f9fc4:
    // 0x1f9fc4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f9fc8:
    // 0x1f9fc8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f9fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f9fcc:
    // 0x1f9fcc: 0x10000009  b           . + 4 + (0x9 << 2)
label_1f9fd0:
    if (ctx->pc == 0x1F9FD0u) {
        ctx->pc = 0x1F9FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FCCu;
        // 0x1f9fd0: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9FD4u;
        goto label_1f9fd4;
    }
    ctx->pc = 0x1F9FCCu;
    {
        const bool branch_taken_0x1f9fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FCCu;
        // 0x1f9fd0: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9fcc) {
            ctx->pc = 0x1F9FF4u;
            goto label_1f9ff4;
        }
    }
    ctx->pc = 0x1F9FD4u;
label_1f9fd4:
    // 0x1f9fd4: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x1f9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
label_1f9fd8:
    // 0x1f9fd8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1f9fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1f9fdc:
    // 0x1f9fdc: 0x24427c50  addiu       $v0, $v0, 0x7C50
    ctx->pc = 0x1f9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31824));
label_1f9fe0:
    // 0x1f9fe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f9fe4:
    // 0x1f9fe4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f9fe8:
    // 0x1f9fe8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f9fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f9fec:
    // 0x1f9fec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f9fecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f9ff0:
    // 0x1f9ff0: 0x0  nop
    ctx->pc = 0x1f9ff0u;
    // NOP
label_1f9ff4:
    // 0x1f9ff4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f9ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f9ff8:
    // 0x1f9ff8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1f9ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1f9ffc:
    // 0x1f9ffc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_1fa000:
    if (ctx->pc == 0x1FA000u) {
        ctx->pc = 0x1FA000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FFCu;
        // 0x1fa000: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA004u;
        goto label_1fa004;
    }
    ctx->pc = 0x1F9FFCu;
    {
        const bool branch_taken_0x1f9ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FA000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FFCu;
        // 0x1fa000: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ffc) {
            ctx->pc = 0x1FA010u;
            goto label_1fa010;
        }
    }
    ctx->pc = 0x1FA004u;
label_1fa004:
    // 0x1fa004: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1fa004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1fa008:
    // 0x1fa008: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
label_1fa00c:
    if (ctx->pc == 0x1FA00Cu) {
        ctx->pc = 0x1FA010u;
        goto label_1fa010;
    }
    ctx->pc = 0x1FA008u;
    {
        const bool branch_taken_0x1fa008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fa008) {
            ctx->pc = 0x1FA074u;
            goto label_1fa074;
        }
    }
    ctx->pc = 0x1FA010u;
label_1fa010:
    // 0x1fa010: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1fa010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1fa014:
    // 0x1fa014: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1fa014u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1fa018:
    // 0x1fa018: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
label_1fa01c:
    if (ctx->pc == 0x1FA01Cu) {
        ctx->pc = 0x1FA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA018u;
        // 0x1fa01c: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA020u;
        goto label_1fa020;
    }
    ctx->pc = 0x1FA018u;
    {
        const bool branch_taken_0x1fa018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA018u;
        // 0x1fa01c: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa018) {
            ctx->pc = 0x1FA070u;
            goto label_1fa070;
        }
    }
    ctx->pc = 0x1FA020u;
label_1fa020:
    // 0x1fa020: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_1fa024:
    if (ctx->pc == 0x1FA024u) {
        ctx->pc = 0x1FA028u;
        goto label_1fa028;
    }
    ctx->pc = 0x1FA020u;
    {
        const bool branch_taken_0x1fa020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fa020) {
            ctx->pc = 0x1FA068u;
            goto label_1fa068;
        }
    }
    ctx->pc = 0x1FA028u;
label_1fa028:
    // 0x1fa028: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1fa028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fa02c:
    // 0x1fa02c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_1fa030:
    if (ctx->pc == 0x1FA030u) {
        ctx->pc = 0x1FA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA02Cu;
        // 0x1fa030: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA034u;
        goto label_1fa034;
    }
    ctx->pc = 0x1FA02Cu;
    {
        const bool branch_taken_0x1fa02c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA02Cu;
        // 0x1fa030: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa02c) {
            ctx->pc = 0x1FA060u;
            goto label_1fa060;
        }
    }
    ctx->pc = 0x1FA034u;
label_1fa034:
    // 0x1fa034: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_1fa038:
    if (ctx->pc == 0x1FA038u) {
        ctx->pc = 0x1FA03Cu;
        goto label_1fa03c;
    }
    ctx->pc = 0x1FA034u;
    {
        const bool branch_taken_0x1fa034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fa034) {
            ctx->pc = 0x1FA058u;
            goto label_1fa058;
        }
    }
    ctx->pc = 0x1FA03Cu;
label_1fa03c:
    // 0x1fa03c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1fa03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fa040:
    // 0x1fa040: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1fa044:
    if (ctx->pc == 0x1FA044u) {
        ctx->pc = 0x1FA048u;
        goto label_1fa048;
    }
    ctx->pc = 0x1FA040u;
    {
        const bool branch_taken_0x1fa040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fa040) {
            ctx->pc = 0x1FA050u;
            goto label_1fa050;
        }
    }
    ctx->pc = 0x1FA048u;
label_1fa048:
    // 0x1fa048: 0x1000000b  b           . + 4 + (0xB << 2)
label_1fa04c:
    if (ctx->pc == 0x1FA04Cu) {
        ctx->pc = 0x1FA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA048u;
        // 0x1fa04c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA050u;
        goto label_1fa050;
    }
    ctx->pc = 0x1FA048u;
    {
        const bool branch_taken_0x1fa048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA048u;
        // 0x1fa04c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa048) {
            ctx->pc = 0x1FA078u;
            goto label_1fa078;
        }
    }
    ctx->pc = 0x1FA050u;
label_1fa050:
    // 0x1fa050: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fa054:
    if (ctx->pc == 0x1FA054u) {
        ctx->pc = 0x1FA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA050u;
        // 0x1fa054: 0x64020013  daddiu      $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA058u;
        goto label_1fa058;
    }
    ctx->pc = 0x1FA050u;
    {
        const bool branch_taken_0x1fa050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA050u;
        // 0x1fa054: 0x64020013  daddiu      $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)19);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa050) {
            ctx->pc = 0x1FA074u;
            goto label_1fa074;
        }
    }
    ctx->pc = 0x1FA058u;
label_1fa058:
    // 0x1fa058: 0x10000006  b           . + 4 + (0x6 << 2)
label_1fa05c:
    if (ctx->pc == 0x1FA05Cu) {
        ctx->pc = 0x1FA05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA058u;
        // 0x1fa05c: 0x64020014  daddiu      $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)20);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA060u;
        goto label_1fa060;
    }
    ctx->pc = 0x1FA058u;
    {
        const bool branch_taken_0x1fa058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA058u;
        // 0x1fa05c: 0x64020014  daddiu      $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa058) {
            ctx->pc = 0x1FA074u;
            goto label_1fa074;
        }
    }
    ctx->pc = 0x1FA060u;
label_1fa060:
    // 0x1fa060: 0x10000004  b           . + 4 + (0x4 << 2)
label_1fa064:
    if (ctx->pc == 0x1FA064u) {
        ctx->pc = 0x1FA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA060u;
        // 0x1fa064: 0x64020015  daddiu      $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)21);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA068u;
        goto label_1fa068;
    }
    ctx->pc = 0x1FA060u;
    {
        const bool branch_taken_0x1fa060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA060u;
        // 0x1fa064: 0x64020015  daddiu      $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)21);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa060) {
            ctx->pc = 0x1FA074u;
            goto label_1fa074;
        }
    }
    ctx->pc = 0x1FA068u;
label_1fa068:
    // 0x1fa068: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fa06c:
    if (ctx->pc == 0x1FA06Cu) {
        ctx->pc = 0x1FA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA068u;
        // 0x1fa06c: 0x64020016  daddiu      $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)22);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA070u;
        goto label_1fa070;
    }
    ctx->pc = 0x1FA068u;
    {
        const bool branch_taken_0x1fa068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA068u;
        // 0x1fa06c: 0x64020016  daddiu      $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa068) {
            ctx->pc = 0x1FA074u;
            goto label_1fa074;
        }
    }
    ctx->pc = 0x1FA070u;
label_1fa070:
    // 0x1fa070: 0x64020017  daddiu      $v0, $zero, 0x17
    ctx->pc = 0x1fa070u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)23);
label_1fa074:
    // 0x1fa074: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fa074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fa078:
    // 0x1fa078: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fa078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa07c:
    // 0x1fa07c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fa07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa080:
    // 0x1fa080: 0x3e00008  jr          $ra
label_1fa084:
    if (ctx->pc == 0x1FA084u) {
        ctx->pc = 0x1FA084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA080u;
        // 0x1fa084: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA088u;
        goto label_1fa088;
    }
    ctx->pc = 0x1FA080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA080u;
        // 0x1fa084: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA088u;
label_1fa088:
    // 0x1fa088: 0x0  nop
    ctx->pc = 0x1fa088u;
    // NOP
label_1fa08c:
    // 0x1fa08c: 0x0  nop
    ctx->pc = 0x1fa08cu;
    // NOP
label_1fa090:
    // 0x1fa090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fa090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fa094:
    // 0x1fa094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fa094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1fa098:
    // 0x1fa098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fa098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fa09c:
    // 0x1fa09c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fa09cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fa0a0:
    // 0x1fa0a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fa0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fa0a4:
    // 0x1fa0a4: 0xc0590dc  jal         func_164370
label_1fa0a8:
    if (ctx->pc == 0x1FA0A8u) {
        ctx->pc = 0x1FA0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0A4u;
        // 0x1fa0a8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA0ACu;
        goto label_1fa0ac;
    }
    ctx->pc = 0x1FA0A4u;
    SET_GPR_U32(ctx, 31, 0x1FA0ACu);
    ctx->pc = 0x1FA0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA0A4u;
    // 0x1fa0a8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1FA0A4u, 0x1FA0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA0ACu;
label_1fa0ac:
    // 0x1fa0ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fa0b0:
    // 0x1fa0b0: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
label_1fa0b4:
    if (ctx->pc == 0x1FA0B4u) {
        ctx->pc = 0x1FA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0B0u;
        // 0x1fa0b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA0B8u;
        goto label_1fa0b8;
    }
    ctx->pc = 0x1FA0B0u;
    {
        const bool branch_taken_0x1fa0b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0B0u;
        // 0x1fa0b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0b0) {
            ctx->pc = 0x1FA168u;
            goto label_1fa168;
        }
    }
    ctx->pc = 0x1FA0B8u;
label_1fa0b8:
    // 0x1fa0b8: 0xc0646d4  jal         func_191B50
label_1fa0bc:
    if (ctx->pc == 0x1FA0BCu) {
        ctx->pc = 0x1FA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0B8u;
        // 0x1fa0bc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA0C0u;
        goto label_1fa0c0;
    }
    ctx->pc = 0x1FA0B8u;
    SET_GPR_U32(ctx, 31, 0x1FA0C0u);
    ctx->pc = 0x1FA0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA0B8u;
    // 0x1fa0bc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191B50u;
    { ctx->pc = 0x191b50; return; }
    ctx->pc = 0x1FA0C0u;
label_1fa0c0:
    // 0x1fa0c0: 0xdf868b50  ld          $a2, -0x74B0($gp)
    ctx->pc = 0x1fa0c0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937424)));
label_1fa0c4:
    // 0x1fa0c4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1fa0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1fa0c8:
    // 0x1fa0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa0cc:
    // 0x1fa0cc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fa0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1fa0d0:
    // 0x1fa0d0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1fa0d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fa0d4:
    // 0x1fa0d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fa0d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa0d8:
    // 0x1fa0d8: 0xc05c810  jal         func_172040
label_1fa0dc:
    if (ctx->pc == 0x1FA0DCu) {
        ctx->pc = 0x1FA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0D8u;
        // 0x1fa0dc: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA0E0u;
        goto label_1fa0e0;
    }
    ctx->pc = 0x1FA0D8u;
    SET_GPR_U32(ctx, 31, 0x1FA0E0u);
    ctx->pc = 0x1FA0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA0D8u;
    // 0x1fa0dc: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172040u, 0x1FA0D8u, 0x1FA0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA0E0u;
label_1fa0e0:
    // 0x1fa0e0: 0xc08f0cc  jal         func_23C330
label_1fa0e4:
    if (ctx->pc == 0x1FA0E4u) {
        ctx->pc = 0x1FA0E8u;
        goto label_1fa0e8;
    }
    ctx->pc = 0x1FA0E0u;
    SET_GPR_U32(ctx, 31, 0x1FA0E8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FA0E8u;
label_1fa0e8:
    // 0x1fa0e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fa0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa0ec:
    // 0x1fa0ec: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1fa0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1fa0f0:
    // 0x1fa0f0: 0x3c064080  lui         $a2, 0x4080
    ctx->pc = 0x1fa0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16512 << 16));
label_1fa0f4:
    // 0x1fa0f4: 0x3c0540c0  lui         $a1, 0x40C0
    ctx->pc = 0x1fa0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16576 << 16));
label_1fa0f8:
    // 0x1fa0f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fa0f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fa0fc:
    // 0x1fa0fc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fa0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fa100:
    // 0x1fa100: 0x2463a180  addiu       $v1, $v1, -0x5E80
    ctx->pc = 0x1fa100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943104));
label_1fa104:
    // 0x1fa104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa108:
    // 0x1fa108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa10c:
    // 0x1fa10c: 0x0  nop
    ctx->pc = 0x1fa10cu;
    // NOP
label_1fa110:
    // 0x1fa110: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1fa110u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_1fa114:
    // 0x1fa114: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x1fa114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_1fa118:
    // 0x1fa118: 0x24421e80  addiu       $v0, $v0, 0x1E80
    ctx->pc = 0x1fa118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7808));
label_1fa11c:
    // 0x1fa11c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1fa11cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa120:
    // 0x1fa120: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1fa120u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa124:
    // 0x1fa124: 0x0  nop
    ctx->pc = 0x1fa124u;
    // NOP
label_1fa128:
    // 0x1fa128: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1fa128u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1fa12c:
    // 0x1fa12c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1fa12cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fa130:
    // 0x1fa130: 0xe602113c  swc1        $f2, 0x113C($s0)
    ctx->pc = 0x1fa130u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4412), bits); }
label_1fa134:
    // 0x1fa134: 0xe6021140  swc1        $f2, 0x1140($s0)
    ctx->pc = 0x1fa134u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4416), bits); }
label_1fa138:
    // 0x1fa138: 0xa2111134  sb          $s1, 0x1134($s0)
    ctx->pc = 0x1fa138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4404), (uint8_t)GPR_U32(ctx, 17));
label_1fa13c:
    // 0x1fa13c: 0xae031998  sw          $v1, 0x1998($s0)
    ctx->pc = 0x1fa13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6552), GPR_U32(ctx, 3));
label_1fa140:
    // 0x1fa140: 0xc07e9ac  jal         func_1FA6B0
label_1fa144:
    if (ctx->pc == 0x1FA144u) {
        ctx->pc = 0x1FA144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA140u;
        // 0x1fa144: 0xae02199c  sw          $v0, 0x199C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA148u;
        goto label_1fa148;
    }
    ctx->pc = 0x1FA140u;
    SET_GPR_U32(ctx, 31, 0x1FA148u);
    ctx->pc = 0x1FA144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA140u;
    // 0x1fa144: 0xae02199c  sw          $v0, 0x199C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6556), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6B0u;
    { ctx->pc = 0x1fa6b0; return; }
    ctx->pc = 0x1FA148u;
label_1fa148:
    // 0x1fa148: 0xae001980  sw          $zero, 0x1980($s0)
    ctx->pc = 0x1fa148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6528), GPR_U32(ctx, 0));
label_1fa14c:
    // 0x1fa14c: 0x27838268  addiu       $v1, $gp, -0x7D98
    ctx->pc = 0x1fa14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935144));
label_1fa150:
    // 0x1fa150: 0x92041134  lbu         $a0, 0x1134($s0)
    ctx->pc = 0x1fa150u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4404)));
label_1fa154:
    // 0x1fa154: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fa154u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1fa158:
    // 0x1fa158: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fa158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fa15c:
    // 0x1fa15c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fa15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fa160:
    // 0x1fa160: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fa160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1fa164:
    // 0x1fa164: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fa164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fa168:
    // 0x1fa168: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fa168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fa16c:
    // 0x1fa16c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fa16cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa170:
    // 0x1fa170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fa170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa174:
    // 0x1fa174: 0x3e00008  jr          $ra
label_1fa178:
    if (ctx->pc == 0x1FA178u) {
        ctx->pc = 0x1FA178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA174u;
        // 0x1fa178: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA17Cu;
        goto label_1fa17c;
    }
    ctx->pc = 0x1FA174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA174u;
        // 0x1fa178: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA17Cu;
label_1fa17c:
    // 0x1fa17c: 0x0  nop
    ctx->pc = 0x1fa17cu;
    // NOP
label_1fa180:
    // 0x1fa180: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1fa180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1fa184:
    // 0x1fa184: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1fa184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1fa188:
    // 0x1fa188: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1fa188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1fa18c:
    // 0x1fa18c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1fa18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1fa190:
    // 0x1fa190: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1fa190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1fa194:
    // 0x1fa194: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1fa194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1fa198:
    // 0x1fa198: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1fa198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1fa19c:
    // 0x1fa19c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1fa19cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fa1a0:
    // 0x1fa1a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1fa1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1fa1a4:
    // 0x1fa1a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fa1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fa1a8:
    // 0x1fa1a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fa1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1fa1ac:
    // 0x1fa1ac: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1fa1acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1fa1b0:
    // 0x1fa1b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1fa1b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1fa1b4:
    // 0x1fa1b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1fa1b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1fa1b8:
    // 0x1fa1b8: 0x90841134  lbu         $a0, 0x1134($a0)
    ctx->pc = 0x1fa1b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4404)));
label_1fa1bc:
    // 0x1fa1bc: 0xc0646ac  jal         func_191AB0
label_1fa1c0:
    if (ctx->pc == 0x1FA1C0u) {
        ctx->pc = 0x1FA1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA1BCu;
        // 0x1fa1c0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA1C4u;
        goto label_1fa1c4;
    }
    ctx->pc = 0x1FA1BCu;
    SET_GPR_U32(ctx, 31, 0x1FA1C4u);
    ctx->pc = 0x1FA1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA1BCu;
    // 0x1fa1c0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191AB0u;
    { ctx->pc = 0x191ab0; return; }
    ctx->pc = 0x1FA1C4u;
label_1fa1c4:
    // 0x1fa1c4: 0x92841134  lbu         $a0, 0x1134($s4)
    ctx->pc = 0x1fa1c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4404)));
label_1fa1c8:
    // 0x1fa1c8: 0x27828270  addiu       $v0, $gp, -0x7D90
    ctx->pc = 0x1fa1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935152));
label_1fa1cc:
    // 0x1fa1cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1fa1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1fa1d0:
    // 0x1fa1d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fa1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fa1d4:
    // 0x1fa1d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fa1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fa1d8:
    // 0x1fa1d8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1fa1dc:
    if (ctx->pc == 0x1FA1DCu) {
        ctx->pc = 0x1FA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA1D8u;
        // 0x1fa1dc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA1E0u;
        goto label_1fa1e0;
    }
    ctx->pc = 0x1FA1D8u;
    {
        const bool branch_taken_0x1fa1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA1D8u;
        // 0x1fa1dc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa1d8) {
            ctx->pc = 0x1FA258u;
            goto label_1fa258;
        }
    }
    ctx->pc = 0x1FA1E0u;
label_1fa1e0:
    // 0x1fa1e0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fa1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1fa1e4:
    // 0x1fa1e4: 0x27828238  addiu       $v0, $gp, -0x7DC8
    ctx->pc = 0x1fa1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935096));
label_1fa1e8:
    // 0x1fa1e8: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1fa1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fa1ec:
    // 0x1fa1ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fa1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1fa1f0:
    // 0x1fa1f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fa1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fa1f4:
    // 0x1fa1f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1fa1f8:
    if (ctx->pc == 0x1FA1F8u) {
        ctx->pc = 0x1FA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA1F4u;
        // 0x1fa1f8: 0x27828268  addiu       $v0, $gp, -0x7D98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA1FCu;
        goto label_1fa1fc;
    }
    ctx->pc = 0x1FA1F4u;
    {
        const bool branch_taken_0x1fa1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA1F4u;
        // 0x1fa1f8: 0x27828268  addiu       $v0, $gp, -0x7D98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa1f4) {
            ctx->pc = 0x1FA21Cu;
            goto label_1fa21c;
        }
    }
    ctx->pc = 0x1FA1FCu;
label_1fa1fc:
    // 0x1fa1fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fa1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fa200:
    // 0x1fa200: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1fa200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1fa204:
    // 0x1fa204: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fa204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fa208:
    // 0x1fa208: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fa208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1fa20c:
    // 0x1fa20c: 0xc0591f4  jal         func_1647D0
label_1fa210:
    if (ctx->pc == 0x1FA210u) {
        ctx->pc = 0x1FA210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA20Cu;
        // 0x1fa210: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA214u;
        goto label_1fa214;
    }
    ctx->pc = 0x1FA20Cu;
    SET_GPR_U32(ctx, 31, 0x1FA214u);
    ctx->pc = 0x1FA210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA20Cu;
    // 0x1fa210: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1FA20Cu, 0x1FA214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA214u;
label_1fa214:
    // 0x1fa214: 0x10000119  b           . + 4 + (0x119 << 2)
label_1fa218:
    if (ctx->pc == 0x1FA218u) {
        ctx->pc = 0x1FA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA214u;
        // 0x1fa218: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA21Cu;
        goto label_1fa21c;
    }
    ctx->pc = 0x1FA214u;
    {
        const bool branch_taken_0x1fa214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA214u;
        // 0x1fa218: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa214) {
            ctx->pc = 0x1FA67Cu;
            { ctx->pc = 0x1fa67c; return; }
        }
    }
    ctx->pc = 0x1FA21Cu;
label_1fa21c:
    // 0x1fa21c: 0x96821138  lhu         $v0, 0x1138($s4)
    ctx->pc = 0x1fa21cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4408)));
label_1fa220:
    // 0x1fa220: 0x8e831980  lw          $v1, 0x1980($s4)
    ctx->pc = 0x1fa220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6528)));
label_1fa224:
    // 0x1fa224: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1fa224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1fa228:
    // 0x1fa228: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1fa228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1fa22c:
    // 0x1fa22c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1fa230:
    if (ctx->pc == 0x1FA230u) {
        ctx->pc = 0x1FA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA22Cu;
        // 0x1fa230: 0x27828268  addiu       $v0, $gp, -0x7D98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA234u;
        goto label_1fa234;
    }
    ctx->pc = 0x1FA22Cu;
    {
        const bool branch_taken_0x1fa22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA22Cu;
        // 0x1fa230: 0x27828268  addiu       $v0, $gp, -0x7D98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa22c) {
            ctx->pc = 0x1FA254u;
            goto label_1fa254;
        }
    }
    ctx->pc = 0x1FA234u;
label_1fa234:
    // 0x1fa234: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fa234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fa238:
    // 0x1fa238: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1fa238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1fa23c:
    // 0x1fa23c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fa23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fa240:
    // 0x1fa240: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fa240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1fa244:
    // 0x1fa244: 0xc0591f4  jal         func_1647D0
label_1fa248:
    if (ctx->pc == 0x1FA248u) {
        ctx->pc = 0x1FA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA244u;
        // 0x1fa248: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA24Cu;
        goto label_1fa24c;
    }
    ctx->pc = 0x1FA244u;
    SET_GPR_U32(ctx, 31, 0x1FA24Cu);
    ctx->pc = 0x1FA248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA244u;
    // 0x1fa248: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1FA244u, 0x1FA24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA24Cu;
label_1fa24c:
    // 0x1fa24c: 0x1000010a  b           . + 4 + (0x10A << 2)
label_1fa250:
    if (ctx->pc == 0x1FA250u) {
        ctx->pc = 0x1FA254u;
        goto label_1fa254;
    }
    ctx->pc = 0x1FA24Cu;
    {
        const bool branch_taken_0x1fa24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa24c) {
            ctx->pc = 0x1FA678u;
            { ctx->pc = 0x1fa678; return; }
        }
    }
    ctx->pc = 0x1FA254u;
label_1fa254:
    // 0x1fa254: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1fa254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1fa258:
    // 0x1fa258: 0xc0646d4  jal         func_191B50
label_1fa25c:
    if (ctx->pc == 0x1FA25Cu) {
        ctx->pc = 0x1FA25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA258u;
        // 0x1fa25c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA260u;
        goto label_1fa260;
    }
    ctx->pc = 0x1FA258u;
    SET_GPR_U32(ctx, 31, 0x1FA260u);
    ctx->pc = 0x1FA25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA258u;
    // 0x1fa25c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191B50u;
    { ctx->pc = 0x191b50; return; }
    ctx->pc = 0x1FA260u;
label_1fa260:
    // 0x1fa260: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1fa260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1fa264:
    // 0x1fa264: 0xc0646f8  jal         func_191BE0
label_1fa268:
    if (ctx->pc == 0x1FA268u) {
        ctx->pc = 0x1FA268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA264u;
        // 0x1fa268: 0x26851120  addiu       $a1, $s4, 0x1120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA26Cu;
        goto label_1fa26c;
    }
    ctx->pc = 0x1FA264u;
    SET_GPR_U32(ctx, 31, 0x1FA26Cu);
    ctx->pc = 0x1FA268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA264u;
    // 0x1fa268: 0x26851120  addiu       $a1, $s4, 0x1120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191BE0u;
    { ctx->pc = 0x191be0; return; }
    ctx->pc = 0x1FA26Cu;
label_1fa26c:
    // 0x1fa26c: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fa26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fa270:
    // 0x1fa270: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1fa270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fa274:
    // 0x1fa274: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fa274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa278:
    // 0x1fa278: 0x0  nop
    ctx->pc = 0x1fa278u;
    // NOP
label_1fa27c:
    // 0x1fa27c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1fa27cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fa280:
    // 0x1fa280: 0x0  nop
    ctx->pc = 0x1fa280u;
    // NOP
label_1fa284:
    // 0x1fa284: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1fa288:
    if (ctx->pc == 0x1FA288u) {
        ctx->pc = 0x1FA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA284u;
        // 0x1fa288: 0x26841120  addiu       $a0, $s4, 0x1120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA28Cu;
        goto label_1fa28c;
    }
    ctx->pc = 0x1FA284u;
    {
        const bool branch_taken_0x1fa284 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA284u;
        // 0x1fa288: 0x26841120  addiu       $a0, $s4, 0x1120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa284) {
            ctx->pc = 0x1FA290u;
            goto label_1fa290;
        }
    }
    ctx->pc = 0x1FA28Cu;
label_1fa28c:
    // 0x1fa28c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1fa28cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa290:
    // 0x1fa290: 0xc066e26  jal         func_19B898
label_1fa294:
    if (ctx->pc == 0x1FA294u) {
        ctx->pc = 0x1FA294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA290u;
        // 0x1fa294: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA298u;
        goto label_1fa298;
    }
    ctx->pc = 0x1FA290u;
    SET_GPR_U32(ctx, 31, 0x1FA298u);
    ctx->pc = 0x1FA294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA290u;
    // 0x1fa294: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1FA298u;
label_1fa298:
    // 0x1fa298: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1fa298u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa29c:
    // 0x1fa29c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1fa29cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa2a0:
    // 0x1fa2a0: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_1fa2a4:
    if (ctx->pc == 0x1FA2A4u) {
        ctx->pc = 0x1FA2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2A0u;
        // 0x1fa2a4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA2A8u;
        goto label_1fa2a8;
    }
    ctx->pc = 0x1FA2A0u;
    {
        const bool branch_taken_0x1fa2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2A0u;
        // 0x1fa2a4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2a0) {
            ctx->pc = 0x1FA668u;
            { ctx->pc = 0x1fa668; return; }
        }
    }
    ctx->pc = 0x1FA2A8u;
label_1fa2a8:
    // 0x1fa2a8: 0x2951021  addu        $v0, $s4, $s5
    ctx->pc = 0x1fa2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_1fa2ac:
    // 0x1fa2ac: 0x24700090  addiu       $s0, $v1, 0x90
    ctx->pc = 0x1fa2acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_1fa2b0:
    // 0x1fa2b0: 0x24511150  addiu       $s1, $v0, 0x1150
    ctx->pc = 0x1fa2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
label_1fa2b4:
    // 0x1fa2b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fa2b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa2b8:
    // 0x1fa2b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa2bc:
    // 0x1fa2bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fa2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa2c0:
    // 0x1fa2c0: 0xc066e02  jal         func_19B808
label_1fa2c4:
    if (ctx->pc == 0x1FA2C4u) {
        ctx->pc = 0x1FA2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2C0u;
        // 0x1fa2c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA2C8u;
        goto label_1fa2c8;
    }
    ctx->pc = 0x1FA2C0u;
    SET_GPR_U32(ctx, 31, 0x1FA2C8u);
    ctx->pc = 0x1FA2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA2C0u;
    // 0x1fa2c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1FA2C8u;
label_1fa2c8:
    // 0x1fa2c8: 0x92841134  lbu         $a0, 0x1134($s4)
    ctx->pc = 0x1fa2c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4404)));
label_1fa2cc:
    // 0x1fa2cc: 0x27838270  addiu       $v1, $gp, -0x7D90
    ctx->pc = 0x1fa2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935152));
label_1fa2d0:
    // 0x1fa2d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fa2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1fa2d4:
    // 0x1fa2d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fa2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fa2d8:
    // 0x1fa2d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fa2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fa2dc:
    // 0x1fa2dc: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
label_1fa2e0:
    if (ctx->pc == 0x1FA2E0u) {
        ctx->pc = 0x1FA2E4u;
        goto label_1fa2e4;
    }
    ctx->pc = 0x1FA2DCu;
    {
        const bool branch_taken_0x1fa2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa2dc) {
            ctx->pc = 0x1FA480u;
            { ctx->pc = 0x1fa480; return; }
        }
    }
    ctx->pc = 0x1FA2E4u;
label_1fa2e4:
    // 0x1fa2e4: 0xc6811124  lwc1        $f1, 0x1124($s4)
    ctx->pc = 0x1fa2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa2e8:
    // 0x1fa2e8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1fa2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_1fa2ec:
    // 0x1fa2ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fa2ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa2f0:
    // 0x1fa2f0: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1fa2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fa2f4:
    // 0x1fa2f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1fa2f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1fa2f8:
    // 0x1fa2f8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1fa2f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fa2fc:
    // 0x1fa2fc: 0x0  nop
    ctx->pc = 0x1fa2fcu;
    // NOP
label_1fa300:
    // 0x1fa300: 0x4500005f  bc1f        . + 4 + (0x5F << 2)
label_1fa304:
    if (ctx->pc == 0x1FA304u) {
        ctx->pc = 0x1FA308u;
        goto label_1fa308;
    }
    ctx->pc = 0x1FA300u;
    {
        const bool branch_taken_0x1fa300 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa300) {
            ctx->pc = 0x1FA480u;
            { ctx->pc = 0x1fa480; return; }
        }
    }
    ctx->pc = 0x1FA308u;
label_1fa308:
    // 0x1fa308: 0xc08f0cc  jal         func_23C330
label_1fa30c:
    if (ctx->pc == 0x1FA30Cu) {
        ctx->pc = 0x1FA310u;
        goto label_1fa310;
    }
    ctx->pc = 0x1FA308u;
    SET_GPR_U32(ctx, 31, 0x1FA310u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FA310u;
label_1fa310:
    // 0x1fa310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa314:
    // 0x1fa314: 0x0  nop
    ctx->pc = 0x1fa314u;
    // NOP
label_1fa318:
    // 0x1fa318: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fa318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fa31c:
    // 0x1fa31c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1fa31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1fa320:
    // 0x1fa320: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1fa320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1fa324:
    // 0x1fa324: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fa324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fa328:
    // 0x1fa328: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fa328u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa32c:
    // 0x1fa32c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1fa32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fa330:
    // 0x1fa330: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fa330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1fa334:
    // 0x1fa334: 0x46020543  div.s       $f21, $f0, $f2
    ctx->pc = 0x1fa334u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[2];
label_1fa338:
    // 0x1fa338: 0x0  nop
    ctx->pc = 0x1fa338u;
    // NOP
label_1fa33c:
    // 0x1fa33c: 0x0  nop
    ctx->pc = 0x1fa33cu;
    // NOP
label_1fa340:
    // 0x1fa340: 0xc08f0cc  jal         func_23C330
label_1fa344:
    if (ctx->pc == 0x1FA344u) {
        ctx->pc = 0x1FA348u;
        goto label_1fa348;
    }
    ctx->pc = 0x1FA340u;
    SET_GPR_U32(ctx, 31, 0x1FA348u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1FA348u;
label_1fa348:
    // 0x1fa348: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fa348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa34c:
    // 0x1fa34c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1fa34cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1fa350:
    // 0x1fa350: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fa350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fa354:
    // 0x1fa354: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1fa354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1fa358:
    // 0x1fa358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa35c:
    // 0x1fa35c: 0x0  nop
    ctx->pc = 0x1fa35cu;
    // NOP
label_1fa360:
    // 0x1fa360: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1fa360u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1fa364:
    // 0x1fa364: 0x0  nop
    ctx->pc = 0x1fa364u;
    // NOP
label_1fa368:
    // 0x1fa368: 0x0  nop
    ctx->pc = 0x1fa368u;
    // NOP
label_1fa36c:
    // 0x1fa36c: 0xc06d412  jal         func_1B5048
label_1fa370:
    if (ctx->pc == 0x1FA370u) {
        ctx->pc = 0x1FA374u;
        goto label_1fa374;
    }
    ctx->pc = 0x1FA36Cu;
    SET_GPR_U32(ctx, 31, 0x1FA374u);
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x1FA374u;
label_1fa374:
    // 0x1fa374: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1fa374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1fa378:
    // 0x1fa378: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1fa378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1fa37c:
    // 0x1fa37c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1fa37cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1fa380:
    // 0x1fa380: 0x3c02c59c  lui         $v0, 0xC59C
    ctx->pc = 0x1fa380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50588 << 16));
label_1fa384:
    // 0x1fa384: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1fa384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1fa388:
    // 0x1fa388: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1fa388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1fa38c:
    // 0x1fa38c: 0xc6821120  lwc1        $f2, 0x1120($s4)
    ctx->pc = 0x1fa38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    ctx->pc = 0x1fa390u;
    return;
}
